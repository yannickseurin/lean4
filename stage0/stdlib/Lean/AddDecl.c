// Lean compiler output
// Module: Lean.AddDecl
// Imports: public import Lean.Meta.Sorry public import Lean.Util.CollectAxioms public import Lean.OriginalConstKind public import Lean.AutoDecl import Lean.Linter.Init import Lean.Compiler.MetaAttr import Lean.Util.RecDepth import all Lean.OriginalConstKind
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
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getSorry_x3f(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Declaration_getTopLevelNames(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Declaration_getNames(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
extern lean_object* l_Lean_debug_skipKernelTC;
lean_object* l_Lean_Environment_addDeclCore(lean_object*, size_t, size_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Kernel_Exception_toMessageData(lean_object*, lean_object*);
extern lean_object* l_Lean_interruptExceptionId;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint8_t l_Lean_Expr_isSyntheticSorry(lean_object*);
uint8_t l_Lean_MessageLog_hasErrors(lean_object*);
uint8_t l_Lean_Declaration_hasSorry(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_of_nat(lean_object*);
double lean_float_div(double, double);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Environment_AddConstAsyncResult_commitCheckEnv(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Environment_registerNamespace(lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
uint8_t l_Lean_instBEqDefinitionSafety_beq(uint8_t, uint8_t);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_AddConstAsyncResult_commitConst(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_async;
lean_object* l_IO_CancelToken_new();
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Core_wrapAsyncAsSnapshot___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_map_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Core_logSnapshotTask___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Environment_addConstAsync(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t);
uint8_t l_Lean_ConstantKind_ofConstantInfo(lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
extern lean_object* l___private_Lean_OriginalConstKind_0__Lean_privateConstKindsExt;
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
extern lean_object* l_Lean_ResolveName_backward_privateInPublic;
uint8_t l_Lean_Environment_containsOnBranch(lean_object*, lean_object*);
lean_object* lean_elab_environment_to_kernel_env(lean_object*);
lean_object* lean_add_decl(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* lean_add_decl_without_checking(lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_envLinterOptionsRef;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_envLinterSnapshotExt;
lean_object* l_Lean_markMeta(lean_object*, lean_object*);
lean_object* l_Lean_compileDecl(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Kernel_Environment_addDecl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Kernel_Environment_addDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_snapshotEnvLinterOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_snapshotEnvLinterOptions___closed__0;
static lean_once_cell_t l_Lean_snapshotEnvLinterOptions___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_snapshotEnvLinterOptions___closed__1;
static lean_once_cell_t l_Lean_snapshotEnvLinterOptions___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_snapshotEnvLinterOptions___closed__2;
LEAN_EXPORT lean_object* l_Lean_snapshotEnvLinterOptions(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_snapshotEnvLinterOptions___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_AddDecl_0__Lean_isNamespaceName(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_isNamespaceName___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_registerNamePrefixes_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_registerNamePrefixes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "warn"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sorry"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(187, 250, 156, 61, 219, 107, 141, 135)}};
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(122, 28, 133, 152, 90, 118, 109, 25)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "warn about uses of `sorry` in declarations added to the environment"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(218, 70, 28, 226, 178, 151, 16, 11)}};
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(239, 41, 235, 79, 240, 234, 67, 166)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_warn_sorry;
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_warnIfUsesSorry_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_warnIfUsesSorry_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0 = (const lean_object*)&l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18_spec__22___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__0;
static lean_once_cell_t l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__1;
static lean_once_cell_t l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_warnIfUsesSorry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_warnIfUsesSorry___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_warnIfUsesSorry___closed__0 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__0_value;
static const lean_array_object l_Lean_warnIfUsesSorry___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_warnIfUsesSorry___closed__1 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__1_value;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__2;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__3;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__4;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__5;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__6;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__7;
static const lean_string_object l_Lean_warnIfUsesSorry___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "hasSorry"};
static const lean_object* l_Lean_warnIfUsesSorry___closed__8 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__8_value;
static const lean_ctor_object l_Lean_warnIfUsesSorry___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_warnIfUsesSorry___closed__8_value),LEAN_SCALAR_PTR_LITERAL(111, 250, 94, 52, 248, 92, 138, 251)}};
static const lean_object* l_Lean_warnIfUsesSorry___closed__9 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__9_value;
static const lean_string_object l_Lean_warnIfUsesSorry___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "declaration uses `"};
static const lean_object* l_Lean_warnIfUsesSorry___closed__10 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__10_value;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__11;
static const lean_string_object l_Lean_warnIfUsesSorry___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_warnIfUsesSorry___closed__12 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__12_value;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__13;
static const lean_string_object l_Lean_warnIfUsesSorry___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "declaration uses `sorry`"};
static const lean_object* l_Lean_warnIfUsesSorry___closed__14 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__14_value;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__15;
static lean_once_cell_t l_Lean_warnIfUsesSorry___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_warnIfUsesSorry___closed__16;
static const lean_ctor_object l_Lean_warnIfUsesSorry___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_warnIfUsesSorry___closed__17 = (const lean_object*)&l_Lean_warnIfUsesSorry___closed__17_value;
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18_spec__22(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "addDecl"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__0_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(105, 231, 4, 60, 254, 77, 195, 237)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "AddDecl"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_initFn___closed__7_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__7_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_initFn___closed__8_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__8_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__9_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__9_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__9_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_initFn___closed__10_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__10_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__11_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__11_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__11_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_initFn___closed__12_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__12_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_initFn___closed__13_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__13_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_initFn___closed__14_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__14_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_initFn___closed__15_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__15_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__16_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__16_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__16_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_initFn___closed__17_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__17_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_initFn___closed__18_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__18_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_initFn___closed__18_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_initFn___closed__19_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__19_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_initFn___closed__20_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_initFn___closed__20_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg();
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sorryAx"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__1_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(196, 190, 164, 146, 38, 179, 69, 72)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__2_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__3;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__4;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__5;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__6;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__7;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__8 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__8_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__9 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__9_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__10_value_aux_0),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__10 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__10_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__11;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__12;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__13 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__13_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__14 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__14_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "typechecking declarations "};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__4___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "type checking"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__0_value;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Kernel"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__1 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__1_value;
static const lean_ctor_object l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__1_value),LEAN_SCALAR_PTR_LITERAL(213, 59, 86, 63, 192, 192, 9, 44)}};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__2 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "adding declarations "};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__0_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0___closed__0 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "no matching async adding rules, adding synchronously"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__0_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2___boxed(lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "addDeclCore"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__0_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "no matching exporting rules, exporting as is"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__2 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__2_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "not exporting private declaration at all"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__4 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__4_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "private decl under `privateInPublic`, exporting as is"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__6 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__6_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "exporting definition "};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__0 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__0_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " as axiom"};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__2 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__2_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__7(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__14(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__11(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__1(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "exporting theorem "};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__1 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__1_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2;
static const lean_string_object l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "exporting opaque "};
static const lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__3 = (const lean_object*)&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__3_value;
static lean_once_cell_t l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_addDecl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_addDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addAndCompile(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addAndCompile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(lean_object* v_opts_1_, lean_object* v_opt_2_){
_start:
{
lean_object* v_name_3_; lean_object* v_defValue_4_; lean_object* v_map_5_; lean_object* v___x_6_; 
v_name_3_ = lean_ctor_get(v_opt_2_, 0);
v_defValue_4_ = lean_ctor_get(v_opt_2_, 1);
v_map_5_ = lean_ctor_get(v_opts_1_, 0);
v___x_6_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_5_, v_name_3_);
if (lean_obj_tag(v___x_6_) == 0)
{
uint8_t v___x_7_; 
v___x_7_ = lean_unbox(v_defValue_4_);
return v___x_7_;
}
else
{
lean_object* v_val_8_; 
v_val_8_ = lean_ctor_get(v___x_6_, 0);
lean_inc(v_val_8_);
lean_dec_ref_known(v___x_6_, 1);
if (lean_obj_tag(v_val_8_) == 1)
{
uint8_t v_v_9_; 
v_v_9_ = lean_ctor_get_uint8(v_val_8_, 0);
lean_dec_ref_known(v_val_8_, 0);
return v_v_9_;
}
else
{
uint8_t v___x_10_; 
lean_dec(v_val_8_);
v___x_10_ = lean_unbox(v_defValue_4_);
return v___x_10_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0___boxed(lean_object* v_opts_11_, lean_object* v_opt_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_opts_11_, v_opt_12_);
lean_dec_ref(v_opt_12_);
lean_dec_ref(v_opts_11_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1(lean_object* v_opts_15_, lean_object* v_opt_16_){
_start:
{
lean_object* v_name_17_; lean_object* v_defValue_18_; lean_object* v_map_19_; lean_object* v___x_20_; 
v_name_17_ = lean_ctor_get(v_opt_16_, 0);
v_defValue_18_ = lean_ctor_get(v_opt_16_, 1);
v_map_19_ = lean_ctor_get(v_opts_15_, 0);
v___x_20_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_19_, v_name_17_);
if (lean_obj_tag(v___x_20_) == 0)
{
lean_inc(v_defValue_18_);
return v_defValue_18_;
}
else
{
lean_object* v_val_21_; 
v_val_21_ = lean_ctor_get(v___x_20_, 0);
lean_inc(v_val_21_);
lean_dec_ref_known(v___x_20_, 1);
if (lean_obj_tag(v_val_21_) == 3)
{
lean_object* v_v_22_; 
v_v_22_ = lean_ctor_get(v_val_21_, 0);
lean_inc(v_v_22_);
lean_dec_ref_known(v_val_21_, 1);
return v_v_22_;
}
else
{
lean_dec(v_val_21_);
lean_inc(v_defValue_18_);
return v_defValue_18_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1___boxed(lean_object* v_opts_23_, lean_object* v_opt_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1(v_opts_23_, v_opt_24_);
lean_dec_ref(v_opt_24_);
lean_dec_ref(v_opts_23_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_Environment_addDecl(lean_object* v_env_26_, lean_object* v_opts_27_, lean_object* v_decl_28_, lean_object* v_cancelTk_x3f_29_){
_start:
{
lean_object* v___x_30_; uint8_t v___x_31_; 
v___x_30_ = l_Lean_debug_skipKernelTC;
v___x_31_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_opts_27_, v___x_30_);
if (v___x_31_ == 0)
{
lean_object* v___x_32_; size_t v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; size_t v___x_36_; lean_object* v___x_37_; 
v___x_32_ = l_Lean_Core_getMaxHeartbeats(v_opts_27_);
v___x_33_ = lean_usize_of_nat(v___x_32_);
lean_dec(v___x_32_);
v___x_34_ = l_Lean_maxRecDepth;
v___x_35_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1(v_opts_27_, v___x_34_);
v___x_36_ = lean_usize_of_nat(v___x_35_);
lean_dec(v___x_35_);
v___x_37_ = lean_add_decl(v_env_26_, v___x_33_, v___x_36_, v_decl_28_, v_cancelTk_x3f_29_);
return v___x_37_;
}
else
{
lean_object* v___x_38_; 
v___x_38_ = lean_add_decl_without_checking(v_env_26_, v_decl_28_);
return v___x_38_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_Environment_addDecl___boxed(lean_object* v_env_39_, lean_object* v_opts_40_, lean_object* v_decl_41_, lean_object* v_cancelTk_x3f_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_Kernel_Environment_addDecl(v_env_39_, v_opts_40_, v_decl_41_, v_cancelTk_x3f_42_);
lean_dec(v_cancelTk_x3f_42_);
lean_dec(v_decl_41_);
lean_dec_ref(v_opts_40_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(lean_object* v_env_44_, lean_object* v_opts_45_, lean_object* v_decl_46_, lean_object* v_cancelTk_x3f_47_){
_start:
{
lean_object* v___x_48_; size_t v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; size_t v___x_52_; lean_object* v___x_53_; uint8_t v___x_54_; 
v___x_48_ = l_Lean_Core_getMaxHeartbeats(v_opts_45_);
v___x_49_ = lean_usize_of_nat(v___x_48_);
lean_dec(v___x_48_);
v___x_50_ = l_Lean_maxRecDepth;
v___x_51_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1(v_opts_45_, v___x_50_);
v___x_52_ = lean_usize_of_nat(v___x_51_);
lean_dec(v___x_51_);
v___x_53_ = l_Lean_debug_skipKernelTC;
v___x_54_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_opts_45_, v___x_53_);
if (v___x_54_ == 0)
{
uint8_t v___x_55_; lean_object* v___x_56_; 
v___x_55_ = 1;
v___x_56_ = l_Lean_Environment_addDeclCore(v_env_44_, v___x_49_, v___x_52_, v_decl_46_, v_cancelTk_x3f_47_, v___x_55_);
return v___x_56_;
}
else
{
uint8_t v___x_57_; lean_object* v___x_58_; 
v___x_57_ = 0;
v___x_58_ = l_Lean_Environment_addDeclCore(v_env_44_, v___x_49_, v___x_52_, v_decl_46_, v_cancelTk_x3f_47_, v___x_57_);
return v___x_58_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux___boxed(lean_object* v_env_59_, lean_object* v_opts_60_, lean_object* v_decl_61_, lean_object* v_cancelTk_x3f_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_59_, v_opts_60_, v_decl_61_, v_cancelTk_x3f_62_);
lean_dec(v_cancelTk_x3f_62_);
lean_dec(v_decl_61_);
lean_dec_ref(v_opts_60_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___redArg(lean_object* v_a_64_, lean_object* v_as_65_, size_t v_sz_66_, size_t v_i_67_, lean_object* v_b_68_){
_start:
{
uint8_t v___x_70_; 
v___x_70_ = lean_usize_dec_lt(v_i_67_, v_sz_66_);
if (v___x_70_ == 0)
{
lean_object* v___x_71_; 
v___x_71_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_71_, 0, v_b_68_);
return v___x_71_;
}
else
{
lean_object* v_a_72_; lean_object* v_name_73_; uint8_t v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; size_t v___x_77_; size_t v___x_78_; 
v_a_72_ = lean_array_uget_borrowed(v_as_65_, v_i_67_);
v_name_73_ = lean_ctor_get(v_a_72_, 0);
v___x_74_ = l_Lean_Linter_getLinterValue(v_a_72_, v_a_64_);
v___x_75_ = lean_box(v___x_74_);
lean_inc(v_name_73_);
v___x_76_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_73_, v___x_75_, v_b_68_);
v___x_77_ = ((size_t)1ULL);
v___x_78_ = lean_usize_add(v_i_67_, v___x_77_);
v_i_67_ = v___x_78_;
v_b_68_ = v___x_76_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___redArg___boxed(lean_object* v_a_80_, lean_object* v_as_81_, lean_object* v_sz_82_, lean_object* v_i_83_, lean_object* v_b_84_, lean_object* v___y_85_){
_start:
{
size_t v_sz_boxed_86_; size_t v_i_boxed_87_; lean_object* v_res_88_; 
v_sz_boxed_86_ = lean_unbox_usize(v_sz_82_);
lean_dec(v_sz_82_);
v_i_boxed_87_ = lean_unbox_usize(v_i_83_);
lean_dec(v_i_83_);
v_res_88_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___redArg(v_a_80_, v_as_81_, v_sz_boxed_86_, v_i_boxed_87_, v_b_84_);
lean_dec_ref(v_as_81_);
lean_dec_ref(v_a_80_);
return v_res_88_;
}
}
static lean_object* _init_l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_89_ = lean_box(0);
v___x_90_ = l_unsafeCast___redArg(v___x_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg(lean_object* v_o_91_, lean_object* v___y_92_){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v_env_96_; lean_object* v___x_97_; lean_object* v_toEnvExtension_98_; lean_object* v_asyncMode_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v_merged_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_110_; 
v___x_94_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_95_ = lean_st_ref_get(v___y_92_);
v_env_96_ = lean_ctor_get(v___x_95_, 0);
lean_inc_ref(v_env_96_);
lean_dec(v___x_95_);
v___x_97_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_98_ = lean_ctor_get(v___x_97_, 0);
v_asyncMode_99_ = lean_ctor_get(v_toEnvExtension_98_, 2);
v___x_100_ = lean_obj_once(&l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg___closed__0, &l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg___closed__0);
v___x_101_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_94_, v___x_97_, v_env_96_, v_asyncMode_99_, v___x_100_);
v_merged_102_ = lean_ctor_get(v___x_101_, 0);
v_isSharedCheck_110_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_110_ == 0)
{
lean_object* v_unused_111_; 
v_unused_111_ = lean_ctor_get(v___x_101_, 1);
lean_dec(v_unused_111_);
v___x_104_ = v___x_101_;
v_isShared_105_ = v_isSharedCheck_110_;
goto v_resetjp_103_;
}
else
{
lean_inc(v_merged_102_);
lean_dec(v___x_101_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_110_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v___x_107_; 
if (v_isShared_105_ == 0)
{
lean_ctor_set(v___x_104_, 1, v_merged_102_);
lean_ctor_set(v___x_104_, 0, v_o_91_);
v___x_107_ = v___x_104_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v_o_91_);
lean_ctor_set(v_reuseFailAlloc_109_, 1, v_merged_102_);
v___x_107_ = v_reuseFailAlloc_109_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
lean_object* v___x_108_; 
v___x_108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
return v___x_108_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg___boxed(lean_object* v_o_112_, lean_object* v___y_113_, lean_object* v___y_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg(v_o_112_, v___y_113_);
lean_dec(v___y_113_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0(lean_object* v___y_116_, lean_object* v___y_117_){
_start:
{
lean_object* v_toCold_119_; lean_object* v_options_120_; lean_object* v___x_121_; 
v_toCold_119_ = lean_ctor_get(v___y_116_, 0);
v_options_120_ = lean_ctor_get(v_toCold_119_, 2);
lean_inc_ref(v_options_120_);
v___x_121_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg(v_options_120_, v___y_117_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0___boxed(lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0(v___y_122_, v___y_123_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
return v_res_125_;
}
}
static lean_object* _init_l_Lean_snapshotEnvLinterOptions___closed__0(void){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_126_;
}
}
static lean_object* _init_l_Lean_snapshotEnvLinterOptions___closed__1(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__0, &l_Lean_snapshotEnvLinterOptions___closed__0_once, _init_l_Lean_snapshotEnvLinterOptions___closed__0);
v___x_128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
return v___x_128_;
}
}
static lean_object* _init_l_Lean_snapshotEnvLinterOptions___closed__2(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__1, &l_Lean_snapshotEnvLinterOptions___closed__1_once, _init_l_Lean_snapshotEnvLinterOptions___closed__1);
v___x_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_snapshotEnvLinterOptions(lean_object* v_declName_131_, lean_object* v_a_132_, lean_object* v_a_133_){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; 
v___x_135_ = l_Lean_Linter_envLinterOptionsRef;
v___x_136_ = lean_st_ref_get(v___x_135_);
v___x_137_ = lean_array_get_size(v___x_136_);
v___x_138_ = lean_unsigned_to_nat(0u);
v___x_139_ = lean_nat_dec_eq(v___x_137_, v___x_138_);
if (v___x_139_ == 0)
{
lean_object* v___x_140_; lean_object* v_a_141_; lean_object* v___x_142_; 
v___x_140_ = l_Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0(v_a_132_, v_a_133_);
v_a_141_ = lean_ctor_get(v___x_140_, 0);
lean_inc(v_a_141_);
lean_dec_ref(v___x_140_);
lean_inc(v_declName_131_);
v___x_142_ = l_Lean_isAutoDeclOrPrivate__Internal___redArg(v_declName_131_, v_a_133_);
if (lean_obj_tag(v___x_142_) == 0)
{
lean_object* v_a_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_194_; 
v_a_143_ = lean_ctor_get(v___x_142_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v___x_142_);
if (v_isSharedCheck_194_ == 0)
{
v___x_145_ = v___x_142_;
v_isShared_146_ = v_isSharedCheck_194_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_a_143_);
lean_dec(v___x_142_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_194_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
uint8_t v___x_147_; 
v___x_147_ = lean_unbox(v_a_143_);
lean_dec(v_a_143_);
if (v___x_147_ == 0)
{
lean_object* v___x_148_; size_t v_sz_149_; size_t v___x_150_; lean_object* v___x_151_; 
lean_del_object(v___x_145_);
v___x_148_ = lean_box(1);
v_sz_149_ = lean_array_size(v___x_136_);
v___x_150_ = ((size_t)0ULL);
v___x_151_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___redArg(v_a_141_, v___x_136_, v_sz_149_, v___x_150_, v___x_148_);
lean_dec(v___x_136_);
lean_dec(v_a_141_);
if (lean_obj_tag(v___x_151_) == 0)
{
lean_object* v_a_152_; lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_181_; 
v_a_152_ = lean_ctor_get(v___x_151_, 0);
v_isSharedCheck_181_ = !lean_is_exclusive(v___x_151_);
if (v_isSharedCheck_181_ == 0)
{
v___x_154_ = v___x_151_;
v_isShared_155_ = v_isSharedCheck_181_;
goto v_resetjp_153_;
}
else
{
lean_inc(v_a_152_);
lean_dec(v___x_151_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_181_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_156_; lean_object* v_env_157_; lean_object* v_nextMacroScope_158_; lean_object* v_ngen_159_; lean_object* v_auxDeclNGen_160_; lean_object* v_traceState_161_; lean_object* v_messages_162_; lean_object* v_infoState_163_; lean_object* v_snapshotTasks_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_179_; 
v___x_156_ = lean_st_ref_take(v_a_133_);
v_env_157_ = lean_ctor_get(v___x_156_, 0);
v_nextMacroScope_158_ = lean_ctor_get(v___x_156_, 1);
v_ngen_159_ = lean_ctor_get(v___x_156_, 2);
v_auxDeclNGen_160_ = lean_ctor_get(v___x_156_, 3);
v_traceState_161_ = lean_ctor_get(v___x_156_, 4);
v_messages_162_ = lean_ctor_get(v___x_156_, 6);
v_infoState_163_ = lean_ctor_get(v___x_156_, 7);
v_snapshotTasks_164_ = lean_ctor_get(v___x_156_, 8);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_156_);
if (v_isSharedCheck_179_ == 0)
{
lean_object* v_unused_180_; 
v_unused_180_ = lean_ctor_get(v___x_156_, 5);
lean_dec(v_unused_180_);
v___x_166_ = v___x_156_;
v_isShared_167_ = v_isSharedCheck_179_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_snapshotTasks_164_);
lean_inc(v_infoState_163_);
lean_inc(v_messages_162_);
lean_inc(v_traceState_161_);
lean_inc(v_auxDeclNGen_160_);
lean_inc(v_ngen_159_);
lean_inc(v_nextMacroScope_158_);
lean_inc(v_env_157_);
lean_dec(v___x_156_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_179_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_173_; 
v___x_168_ = lean_box(0);
v___x_169_ = l_Lean_Linter_envLinterSnapshotExt;
v___x_170_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_169_, v_env_157_, v_declName_131_, v_a_152_);
v___x_171_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 5, v___x_171_);
lean_ctor_set(v___x_166_, 0, v___x_170_);
v___x_173_ = v___x_166_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_170_);
lean_ctor_set(v_reuseFailAlloc_178_, 1, v_nextMacroScope_158_);
lean_ctor_set(v_reuseFailAlloc_178_, 2, v_ngen_159_);
lean_ctor_set(v_reuseFailAlloc_178_, 3, v_auxDeclNGen_160_);
lean_ctor_set(v_reuseFailAlloc_178_, 4, v_traceState_161_);
lean_ctor_set(v_reuseFailAlloc_178_, 5, v___x_171_);
lean_ctor_set(v_reuseFailAlloc_178_, 6, v_messages_162_);
lean_ctor_set(v_reuseFailAlloc_178_, 7, v_infoState_163_);
lean_ctor_set(v_reuseFailAlloc_178_, 8, v_snapshotTasks_164_);
v___x_173_ = v_reuseFailAlloc_178_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
lean_object* v___x_174_; lean_object* v___x_176_; 
v___x_174_ = lean_st_ref_put(v_a_133_, v___x_173_);
if (v_isShared_155_ == 0)
{
lean_ctor_set(v___x_154_, 0, v___x_168_);
v___x_176_ = v___x_154_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v___x_168_);
v___x_176_ = v_reuseFailAlloc_177_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
return v___x_176_;
}
}
}
}
}
else
{
lean_object* v_a_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_189_; 
lean_dec(v_declName_131_);
v_a_182_ = lean_ctor_get(v___x_151_, 0);
v_isSharedCheck_189_ = !lean_is_exclusive(v___x_151_);
if (v_isSharedCheck_189_ == 0)
{
v___x_184_ = v___x_151_;
v_isShared_185_ = v_isSharedCheck_189_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_a_182_);
lean_dec(v___x_151_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_189_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v___x_187_; 
if (v_isShared_185_ == 0)
{
v___x_187_ = v___x_184_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v_a_182_);
v___x_187_ = v_reuseFailAlloc_188_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
return v___x_187_;
}
}
}
}
else
{
lean_object* v___x_190_; lean_object* v___x_192_; 
lean_dec(v_a_141_);
lean_dec(v___x_136_);
lean_dec(v_declName_131_);
v___x_190_ = lean_box(0);
if (v_isShared_146_ == 0)
{
lean_ctor_set(v___x_145_, 0, v___x_190_);
v___x_192_ = v___x_145_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v___x_190_);
v___x_192_ = v_reuseFailAlloc_193_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
return v___x_192_;
}
}
}
}
else
{
lean_object* v_a_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_202_; 
lean_dec(v_a_141_);
lean_dec(v___x_136_);
lean_dec(v_declName_131_);
v_a_195_ = lean_ctor_get(v___x_142_, 0);
v_isSharedCheck_202_ = !lean_is_exclusive(v___x_142_);
if (v_isSharedCheck_202_ == 0)
{
v___x_197_ = v___x_142_;
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_a_195_);
lean_dec(v___x_142_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___x_200_; 
if (v_isShared_198_ == 0)
{
v___x_200_ = v___x_197_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v_a_195_);
v___x_200_ = v_reuseFailAlloc_201_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
return v___x_200_;
}
}
}
}
else
{
lean_object* v___x_203_; lean_object* v___x_204_; 
lean_dec(v___x_136_);
lean_dec(v_declName_131_);
v___x_203_ = lean_box(0);
v___x_204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
return v___x_204_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_snapshotEnvLinterOptions___boxed(lean_object* v_declName_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Lean_snapshotEnvLinterOptions(v_declName_205_, v_a_206_, v_a_207_);
lean_dec(v_a_207_);
lean_dec_ref(v_a_206_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0(lean_object* v_o_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg(v_o_210_, v___y_212_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___boxed(lean_object* v_o_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0(v_o_215_, v___y_216_, v___y_217_);
lean_dec(v___y_217_);
lean_dec_ref(v___y_216_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1(lean_object* v_a_220_, lean_object* v_as_221_, size_t v_sz_222_, size_t v_i_223_, lean_object* v_b_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___redArg(v_a_220_, v_as_221_, v_sz_222_, v_i_223_, v_b_224_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1___boxed(lean_object* v_a_229_, lean_object* v_as_230_, lean_object* v_sz_231_, lean_object* v_i_232_, lean_object* v_b_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_){
_start:
{
size_t v_sz_boxed_237_; size_t v_i_boxed_238_; lean_object* v_res_239_; 
v_sz_boxed_237_ = lean_unbox_usize(v_sz_231_);
lean_dec(v_sz_231_);
v_i_boxed_238_ = lean_unbox_usize(v_i_232_);
lean_dec(v_i_232_);
v_res_239_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_snapshotEnvLinterOptions_spec__1(v_a_229_, v_as_230_, v_sz_boxed_237_, v_i_boxed_238_, v_b_233_, v___y_234_, v___y_235_);
lean_dec(v___y_235_);
lean_dec_ref(v___y_234_);
lean_dec_ref(v_as_230_);
lean_dec_ref(v_a_229_);
return v_res_239_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_AddDecl_0__Lean_isNamespaceName(lean_object* v_x_240_){
_start:
{
if (lean_obj_tag(v_x_240_) == 1)
{
lean_object* v_pre_241_; 
v_pre_241_ = lean_ctor_get(v_x_240_, 0);
if (lean_obj_tag(v_pre_241_) == 0)
{
uint8_t v___x_242_; 
v___x_242_ = 1;
return v___x_242_;
}
else
{
v_x_240_ = v_pre_241_;
goto _start;
}
}
else
{
uint8_t v___x_244_; 
v___x_244_ = 0;
return v___x_244_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_isNamespaceName___boxed(lean_object* v_x_245_){
_start:
{
uint8_t v_res_246_; lean_object* v_r_247_; 
v_res_246_ = l___private_Lean_AddDecl_0__Lean_isNamespaceName(v_x_245_);
lean_dec(v_x_245_);
v_r_247_ = lean_box(v_res_246_);
return v_r_247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_registerNamePrefixes_go(lean_object* v_env_248_, lean_object* v_x_249_){
_start:
{
if (lean_obj_tag(v_x_249_) == 1)
{
lean_object* v_pre_250_; uint8_t v___x_251_; 
v_pre_250_ = lean_ctor_get(v_x_249_, 0);
lean_inc(v_pre_250_);
lean_dec_ref_known(v_x_249_, 2);
v___x_251_ = l___private_Lean_AddDecl_0__Lean_isNamespaceName(v_pre_250_);
if (v___x_251_ == 0)
{
lean_dec(v_pre_250_);
return v_env_248_;
}
else
{
lean_object* v___x_252_; 
lean_inc(v_pre_250_);
v___x_252_ = l_Lean_Environment_registerNamespace(v_env_248_, v_pre_250_);
v_env_248_ = v___x_252_;
v_x_249_ = v_pre_250_;
goto _start;
}
}
else
{
lean_dec(v_x_249_);
return v_env_248_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_registerNamePrefixes(lean_object* v_env_254_, lean_object* v_name_255_){
_start:
{
lean_object* v_name_256_; uint32_t v___y_258_; 
v_name_256_ = l_Lean_privateToUserName(v_name_255_);
if (lean_obj_tag(v_name_256_) == 1)
{
lean_object* v_str_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
v_str_262_ = lean_ctor_get(v_name_256_, 1);
lean_inc_ref(v_str_262_);
v___x_263_ = lean_unsigned_to_nat(0u);
v___x_264_ = lean_string_utf8_byte_size(v_str_262_);
v___x_265_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_265_, 0, v_str_262_);
lean_ctor_set(v___x_265_, 1, v___x_263_);
lean_ctor_set(v___x_265_, 2, v___x_264_);
v___x_266_ = l_String_Slice_Pos_get_x3f(v___x_265_, v___x_263_);
lean_dec_ref_known(v___x_265_, 3);
if (lean_obj_tag(v___x_266_) == 0)
{
uint32_t v___x_267_; 
v___x_267_ = 65;
v___y_258_ = v___x_267_;
goto v___jp_257_;
}
else
{
lean_object* v_val_268_; uint32_t v___x_269_; 
v_val_268_ = lean_ctor_get(v___x_266_, 0);
lean_inc(v_val_268_);
lean_dec_ref_known(v___x_266_, 1);
v___x_269_ = lean_unbox_uint32(v_val_268_);
lean_dec(v_val_268_);
v___y_258_ = v___x_269_;
goto v___jp_257_;
}
}
else
{
lean_dec(v_name_256_);
return v_env_254_;
}
v___jp_257_:
{
uint32_t v___x_259_; uint8_t v___x_260_; 
v___x_259_ = 95;
v___x_260_ = lean_uint32_dec_eq(v___y_258_, v___x_259_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; 
v___x_261_ = l___private_Lean_AddDecl_0__Lean_registerNamePrefixes_go(v_env_254_, v_name_256_);
return v___x_261_;
}
else
{
lean_dec(v_name_256_);
return v_env_254_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__spec__0(lean_object* v_name_270_, lean_object* v_decl_271_, lean_object* v_ref_272_){
_start:
{
lean_object* v_defValue_274_; lean_object* v_descr_275_; lean_object* v_deprecation_x3f_276_; lean_object* v___x_277_; uint8_t v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v_defValue_274_ = lean_ctor_get(v_decl_271_, 0);
v_descr_275_ = lean_ctor_get(v_decl_271_, 1);
v_deprecation_x3f_276_ = lean_ctor_get(v_decl_271_, 2);
v___x_277_ = lean_alloc_ctor(1, 0, 1);
v___x_278_ = lean_unbox(v_defValue_274_);
lean_ctor_set_uint8(v___x_277_, 0, v___x_278_);
lean_inc(v_deprecation_x3f_276_);
lean_inc_ref(v_descr_275_);
lean_inc_n(v_name_270_, 2);
v___x_279_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_279_, 0, v_name_270_);
lean_ctor_set(v___x_279_, 1, v_ref_272_);
lean_ctor_set(v___x_279_, 2, v___x_277_);
lean_ctor_set(v___x_279_, 3, v_descr_275_);
lean_ctor_set(v___x_279_, 4, v_deprecation_x3f_276_);
v___x_280_ = lean_register_option(v_name_270_, v___x_279_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_288_; 
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_288_ == 0)
{
lean_object* v_unused_289_; 
v_unused_289_ = lean_ctor_get(v___x_280_, 0);
lean_dec(v_unused_289_);
v___x_282_ = v___x_280_;
v_isShared_283_ = v_isSharedCheck_288_;
goto v_resetjp_281_;
}
else
{
lean_dec(v___x_280_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_288_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_284_; lean_object* v___x_286_; 
lean_inc(v_defValue_274_);
v___x_284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_284_, 0, v_name_270_);
lean_ctor_set(v___x_284_, 1, v_defValue_274_);
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 0, v___x_284_);
v___x_286_ = v___x_282_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v___x_284_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
else
{
lean_object* v_a_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_297_; 
lean_dec(v_name_270_);
v_a_290_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_297_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_297_ == 0)
{
v___x_292_ = v___x_280_;
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_a_290_);
lean_dec(v___x_280_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_295_; 
if (v_isShared_293_ == 0)
{
v___x_295_ = v___x_292_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_a_290_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_298_, lean_object* v_decl_299_, lean_object* v_ref_300_, lean_object* v_a_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_Lean_Option_register___at___00__private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__spec__0(v_name_298_, v_decl_299_, v_ref_300_);
lean_dec_ref(v_decl_299_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_320_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_));
v___x_321_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_));
v___x_322_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_));
v___x_323_ = l_Lean_Option_register___at___00__private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4__spec__0(v___x_320_, v___x_321_, v___x_322_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4____boxed(lean_object* v_a_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_();
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_warnIfUsesSorry_spec__0(lean_object* v_msgData_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_){
_start:
{
lean_object* v___x_332_; lean_object* v_env_333_; lean_object* v___x_334_; lean_object* v_toCold_335_; lean_object* v_mctx_336_; lean_object* v_lctx_337_; lean_object* v_options_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_332_ = lean_st_ref_get(v___y_330_);
v_env_333_ = lean_ctor_get(v___x_332_, 0);
lean_inc_ref(v_env_333_);
lean_dec(v___x_332_);
v___x_334_ = lean_st_ref_get(v___y_328_);
v_toCold_335_ = lean_ctor_get(v___y_329_, 0);
v_mctx_336_ = lean_ctor_get(v___x_334_, 0);
lean_inc_ref(v_mctx_336_);
lean_dec(v___x_334_);
v_lctx_337_ = lean_ctor_get(v___y_327_, 2);
v_options_338_ = lean_ctor_get(v_toCold_335_, 2);
lean_inc_ref(v_options_338_);
lean_inc_ref(v_lctx_337_);
v___x_339_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_339_, 0, v_env_333_);
lean_ctor_set(v___x_339_, 1, v_mctx_336_);
lean_ctor_set(v___x_339_, 2, v_lctx_337_);
lean_ctor_set(v___x_339_, 3, v_options_338_);
v___x_340_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
lean_ctor_set(v___x_340_, 1, v_msgData_326_);
v___x_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_warnIfUsesSorry_spec__0___boxed(lean_object* v_msgData_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Lean_addMessageContextFull___at___00Lean_warnIfUsesSorry_spec__0(v_msgData_342_, v___y_343_, v___y_344_, v___y_345_, v___y_346_);
lean_dec(v___y_346_);
lean_dec_ref(v___y_345_);
lean_dec(v___y_344_);
lean_dec_ref(v___y_343_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry___lam__0(lean_object* v_s_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v_a_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_372_; 
lean_inc_ref(v_s_349_);
v___x_356_ = l_Lean_MessageData_ofExpr(v_s_349_);
v___x_357_ = l_Lean_addMessageContextFull___at___00Lean_warnIfUsesSorry_spec__0(v___x_356_, v___y_351_, v___y_352_, v___y_353_, v___y_354_);
v_a_358_ = lean_ctor_get(v___x_357_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_357_);
if (v_isSharedCheck_372_ == 0)
{
v___x_360_ = v___x_357_;
v_isShared_361_ = v_isSharedCheck_372_;
goto v_resetjp_359_;
}
else
{
lean_inc(v_a_358_);
lean_dec(v___x_357_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_372_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v___x_362_; lean_object* v___x_363_; uint8_t v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_370_; 
v___x_362_ = lean_st_ref_take(v___y_350_);
v___x_363_ = lean_box(0);
v___x_364_ = l_Lean_Expr_isSyntheticSorry(v_s_349_);
lean_dec_ref(v_s_349_);
v___x_365_ = lean_box(v___x_364_);
v___x_366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
lean_ctor_set(v___x_366_, 1, v_a_358_);
v___x_367_ = lean_array_push(v___x_362_, v___x_366_);
v___x_368_ = lean_st_ref_put(v___y_350_, v___x_367_);
if (v_isShared_361_ == 0)
{
lean_ctor_set(v___x_360_, 0, v___x_363_);
v___x_370_ = v___x_360_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v___x_363_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry___lam__0___boxed(lean_object* v_s_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Lean_warnIfUsesSorry___lam__0(v_s_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
lean_dec(v___y_378_);
lean_dec_ref(v___y_377_);
lean_dec(v___y_376_);
lean_dec_ref(v___y_375_);
lean_dec(v___y_374_);
return v_res_380_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0(uint8_t v_suppressElabErrors_389_, uint8_t v___y_390_, lean_object* v_x_391_){
_start:
{
if (lean_obj_tag(v_x_391_) == 1)
{
lean_object* v_pre_392_; 
v_pre_392_ = lean_ctor_get(v_x_391_, 0);
switch(lean_obj_tag(v_pre_392_))
{
case 1:
{
lean_object* v_pre_393_; 
v_pre_393_ = lean_ctor_get(v_pre_392_, 0);
switch(lean_obj_tag(v_pre_393_))
{
case 0:
{
lean_object* v_str_394_; lean_object* v_str_395_; lean_object* v___x_396_; uint8_t v___x_397_; 
v_str_394_ = lean_ctor_get(v_x_391_, 1);
v_str_395_ = lean_ctor_get(v_pre_392_, 1);
v___x_396_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__0));
v___x_397_ = lean_string_dec_eq(v_str_395_, v___x_396_);
if (v___x_397_ == 0)
{
lean_object* v___x_398_; uint8_t v___x_399_; 
v___x_398_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__1));
v___x_399_ = lean_string_dec_eq(v_str_395_, v___x_398_);
if (v___x_399_ == 0)
{
return v___x_399_;
}
else
{
lean_object* v___x_400_; uint8_t v___x_401_; 
v___x_400_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__2));
v___x_401_ = lean_string_dec_eq(v_str_394_, v___x_400_);
if (v___x_401_ == 0)
{
return v___x_401_;
}
else
{
return v_suppressElabErrors_389_;
}
}
}
else
{
lean_object* v___x_402_; uint8_t v___x_403_; 
v___x_402_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__3));
v___x_403_ = lean_string_dec_eq(v_str_394_, v___x_402_);
if (v___x_403_ == 0)
{
return v___x_403_;
}
else
{
return v_suppressElabErrors_389_;
}
}
}
case 1:
{
lean_object* v_pre_404_; 
v_pre_404_ = lean_ctor_get(v_pre_393_, 0);
if (lean_obj_tag(v_pre_404_) == 0)
{
lean_object* v_str_405_; lean_object* v_str_406_; lean_object* v_str_407_; lean_object* v___x_408_; uint8_t v___x_409_; 
v_str_405_ = lean_ctor_get(v_x_391_, 1);
v_str_406_ = lean_ctor_get(v_pre_392_, 1);
v_str_407_ = lean_ctor_get(v_pre_393_, 1);
v___x_408_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__4));
v___x_409_ = lean_string_dec_eq(v_str_407_, v___x_408_);
if (v___x_409_ == 0)
{
return v___x_409_;
}
else
{
lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_410_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__5));
v___x_411_ = lean_string_dec_eq(v_str_406_, v___x_410_);
if (v___x_411_ == 0)
{
return v___x_411_;
}
else
{
lean_object* v___x_412_; uint8_t v___x_413_; 
v___x_412_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__6));
v___x_413_ = lean_string_dec_eq(v_str_405_, v___x_412_);
if (v___x_413_ == 0)
{
return v___x_413_;
}
else
{
return v_suppressElabErrors_389_;
}
}
}
}
else
{
return v___y_390_;
}
}
default: 
{
return v___y_390_;
}
}
}
case 0:
{
lean_object* v_str_414_; lean_object* v___x_415_; uint8_t v___x_416_; 
v_str_414_ = lean_ctor_get(v_x_391_, 1);
v___x_415_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___closed__7));
v___x_416_ = lean_string_dec_eq(v_str_414_, v___x_415_);
if (v___x_416_ == 0)
{
return v___x_416_;
}
else
{
return v_suppressElabErrors_389_;
}
}
default: 
{
return v___y_390_;
}
}
}
else
{
return v___y_390_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___boxed(lean_object* v_suppressElabErrors_417_, lean_object* v___y_418_, lean_object* v_x_419_){
_start:
{
uint8_t v_suppressElabErrors_boxed_420_; uint8_t v___y_15043__boxed_421_; uint8_t v_res_422_; lean_object* v_r_423_; 
v_suppressElabErrors_boxed_420_ = lean_unbox(v_suppressElabErrors_417_);
v___y_15043__boxed_421_ = lean_unbox(v___y_418_);
v_res_422_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0(v_suppressElabErrors_boxed_420_, v___y_15043__boxed_421_, v_x_419_);
lean_dec(v_x_419_);
v_r_423_ = lean_box(v_res_422_);
return v_r_423_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0(void){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_424_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__0, &l_Lean_snapshotEnvLinterOptions___closed__0_once, _init_l_Lean_snapshotEnvLinterOptions___closed__0);
v___x_425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_425_, 0, v___x_424_);
return v___x_425_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__1(void){
_start:
{
lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_426_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0);
v___x_427_ = lean_unsigned_to_nat(0u);
v___x_428_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_428_, 0, v___x_427_);
lean_ctor_set(v___x_428_, 1, v___x_427_);
lean_ctor_set(v___x_428_, 2, v___x_427_);
lean_ctor_set(v___x_428_, 3, v___x_427_);
lean_ctor_set(v___x_428_, 4, v___x_426_);
lean_ctor_set(v___x_428_, 5, v___x_426_);
lean_ctor_set(v___x_428_, 6, v___x_426_);
lean_ctor_set(v___x_428_, 7, v___x_426_);
lean_ctor_set(v___x_428_, 8, v___x_426_);
lean_ctor_set(v___x_428_, 9, v___x_426_);
lean_ctor_set(v___x_428_, 10, v___x_426_);
return v___x_428_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__2(void){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_429_ = lean_unsigned_to_nat(32u);
v___x_430_ = lean_mk_empty_array_with_capacity(v___x_429_);
v___x_431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
return v___x_431_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3(void){
_start:
{
size_t v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_432_ = ((size_t)5ULL);
v___x_433_ = lean_unsigned_to_nat(0u);
v___x_434_ = lean_unsigned_to_nat(32u);
v___x_435_ = lean_mk_empty_array_with_capacity(v___x_434_);
v___x_436_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__2);
v___x_437_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_437_, 0, v___x_436_);
lean_ctor_set(v___x_437_, 1, v___x_435_);
lean_ctor_set(v___x_437_, 2, v___x_433_);
lean_ctor_set(v___x_437_, 3, v___x_433_);
lean_ctor_set_usize(v___x_437_, 4, v___x_432_);
return v___x_437_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__4(void){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_438_ = lean_box(1);
v___x_439_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3);
v___x_440_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__0);
v___x_441_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_441_, 0, v___x_440_);
lean_ctor_set(v___x_441_, 1, v___x_439_);
lean_ctor_set(v___x_441_, 2, v___x_438_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12(lean_object* v_msgData_442_, lean_object* v___y_443_, lean_object* v___y_444_){
_start:
{
lean_object* v___x_446_; lean_object* v_toCold_447_; lean_object* v_env_448_; lean_object* v_options_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_446_ = lean_st_ref_get(v___y_444_);
v_toCold_447_ = lean_ctor_get(v___y_443_, 0);
v_env_448_ = lean_ctor_get(v___x_446_, 0);
lean_inc_ref(v_env_448_);
lean_dec(v___x_446_);
v_options_449_ = lean_ctor_get(v_toCold_447_, 2);
v___x_450_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__1);
v___x_451_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__4);
lean_inc_ref(v_options_449_);
v___x_452_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_452_, 0, v_env_448_);
lean_ctor_set(v___x_452_, 1, v___x_450_);
lean_ctor_set(v___x_452_, 2, v___x_451_);
lean_ctor_set(v___x_452_, 3, v_options_449_);
v___x_453_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_453_, 0, v___x_452_);
lean_ctor_set(v___x_453_, 1, v_msgData_442_);
v___x_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_454_, 0, v___x_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___boxed(lean_object* v_msgData_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_){
_start:
{
lean_object* v_res_459_; 
v_res_459_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12(v_msgData_455_, v___y_456_, v___y_457_);
lean_dec(v___y_457_);
lean_dec_ref(v___y_456_);
return v_res_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9(lean_object* v_ref_461_, lean_object* v_msgData_462_, uint8_t v_severity_463_, uint8_t v_isSilent_464_, lean_object* v___y_465_, lean_object* v___y_466_){
_start:
{
lean_object* v___y_469_; lean_object* v___y_470_; lean_object* v___y_471_; uint8_t v___y_472_; lean_object* v___y_473_; lean_object* v___y_474_; uint8_t v___y_475_; lean_object* v_currNamespace_476_; lean_object* v_openDecls_477_; lean_object* v___y_478_; lean_object* v___y_504_; lean_object* v___y_505_; lean_object* v___y_506_; lean_object* v___y_507_; uint8_t v___y_508_; uint8_t v___y_509_; lean_object* v___y_510_; uint8_t v___y_511_; lean_object* v___y_512_; lean_object* v___y_513_; lean_object* v___y_531_; lean_object* v___y_532_; lean_object* v___y_533_; lean_object* v___y_534_; uint8_t v___y_535_; uint8_t v___y_536_; lean_object* v___y_537_; lean_object* v___y_538_; uint8_t v___y_539_; lean_object* v___y_540_; lean_object* v___y_544_; lean_object* v___y_545_; lean_object* v___y_546_; lean_object* v___y_547_; uint8_t v___y_548_; lean_object* v___y_549_; uint8_t v___y_550_; lean_object* v___y_551_; uint8_t v___y_552_; uint8_t v___x_557_; lean_object* v___y_559_; lean_object* v___y_560_; lean_object* v___y_561_; lean_object* v___y_562_; lean_object* v___y_563_; lean_object* v___y_564_; uint8_t v___y_565_; uint8_t v___y_566_; uint8_t v___y_567_; uint8_t v___y_569_; uint8_t v___x_587_; 
v___x_557_ = 2;
v___x_587_ = l_Lean_instBEqMessageSeverity_beq(v_severity_463_, v___x_557_);
if (v___x_587_ == 0)
{
v___y_569_ = v___x_587_;
goto v___jp_568_;
}
else
{
uint8_t v___x_588_; 
lean_inc_ref(v_msgData_462_);
v___x_588_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_462_);
v___y_569_ = v___x_588_;
goto v___jp_568_;
}
v___jp_468_:
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v_env_483_; lean_object* v_nextMacroScope_484_; lean_object* v_ngen_485_; lean_object* v_auxDeclNGen_486_; lean_object* v_traceState_487_; lean_object* v_cache_488_; lean_object* v_messages_489_; lean_object* v_infoState_490_; lean_object* v_snapshotTasks_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_502_; 
lean_inc(v_openDecls_477_);
lean_inc(v_currNamespace_476_);
v___x_479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_479_, 0, v_currNamespace_476_);
lean_ctor_set(v___x_479_, 1, v_openDecls_477_);
v___x_480_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
lean_ctor_set(v___x_480_, 1, v___y_471_);
lean_inc_ref(v___y_469_);
lean_inc_ref(v___y_474_);
v___x_481_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_481_, 0, v___y_474_);
lean_ctor_set(v___x_481_, 1, v___y_473_);
lean_ctor_set(v___x_481_, 2, v___y_470_);
lean_ctor_set(v___x_481_, 3, v___y_469_);
lean_ctor_set(v___x_481_, 4, v___x_480_);
lean_ctor_set_uint8(v___x_481_, sizeof(void*)*5, v___y_475_);
lean_ctor_set_uint8(v___x_481_, sizeof(void*)*5 + 1, v___y_472_);
lean_ctor_set_uint8(v___x_481_, sizeof(void*)*5 + 2, v_isSilent_464_);
v___x_482_ = lean_st_ref_take(v___y_478_);
v_env_483_ = lean_ctor_get(v___x_482_, 0);
v_nextMacroScope_484_ = lean_ctor_get(v___x_482_, 1);
v_ngen_485_ = lean_ctor_get(v___x_482_, 2);
v_auxDeclNGen_486_ = lean_ctor_get(v___x_482_, 3);
v_traceState_487_ = lean_ctor_get(v___x_482_, 4);
v_cache_488_ = lean_ctor_get(v___x_482_, 5);
v_messages_489_ = lean_ctor_get(v___x_482_, 6);
v_infoState_490_ = lean_ctor_get(v___x_482_, 7);
v_snapshotTasks_491_ = lean_ctor_get(v___x_482_, 8);
v_isSharedCheck_502_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_502_ == 0)
{
v___x_493_ = v___x_482_;
v_isShared_494_ = v_isSharedCheck_502_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_snapshotTasks_491_);
lean_inc(v_infoState_490_);
lean_inc(v_messages_489_);
lean_inc(v_cache_488_);
lean_inc(v_traceState_487_);
lean_inc(v_auxDeclNGen_486_);
lean_inc(v_ngen_485_);
lean_inc(v_nextMacroScope_484_);
lean_inc(v_env_483_);
lean_dec(v___x_482_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_502_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_498_; 
v___x_495_ = lean_box(0);
v___x_496_ = l_Lean_MessageLog_add(v___x_481_, v_messages_489_);
if (v_isShared_494_ == 0)
{
lean_ctor_set(v___x_493_, 6, v___x_496_);
v___x_498_ = v___x_493_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_env_483_);
lean_ctor_set(v_reuseFailAlloc_501_, 1, v_nextMacroScope_484_);
lean_ctor_set(v_reuseFailAlloc_501_, 2, v_ngen_485_);
lean_ctor_set(v_reuseFailAlloc_501_, 3, v_auxDeclNGen_486_);
lean_ctor_set(v_reuseFailAlloc_501_, 4, v_traceState_487_);
lean_ctor_set(v_reuseFailAlloc_501_, 5, v_cache_488_);
lean_ctor_set(v_reuseFailAlloc_501_, 6, v___x_496_);
lean_ctor_set(v_reuseFailAlloc_501_, 7, v_infoState_490_);
lean_ctor_set(v_reuseFailAlloc_501_, 8, v_snapshotTasks_491_);
v___x_498_ = v_reuseFailAlloc_501_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_499_ = lean_st_ref_put(v___y_478_, v___x_498_);
v___x_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_500_, 0, v___x_495_);
return v___x_500_;
}
}
}
v___jp_503_:
{
lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_529_; 
v___x_514_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_462_);
v___x_515_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12(v___x_514_, v___y_465_, v___y_466_);
v_a_516_ = lean_ctor_get(v___x_515_, 0);
v_isSharedCheck_529_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_529_ == 0)
{
v___x_518_ = v___x_515_;
v_isShared_519_ = v_isSharedCheck_529_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_515_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_529_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; 
lean_inc_ref_n(v___y_512_, 2);
v___x_520_ = l_Lean_FileMap_toPosition(v___y_512_, v___y_507_);
lean_dec(v___y_507_);
v___x_521_ = l_Lean_FileMap_toPosition(v___y_512_, v___y_513_);
lean_dec(v___y_513_);
v___x_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_522_, 0, v___x_521_);
v___x_523_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___closed__0));
if (v___y_508_ == 0)
{
lean_del_object(v___x_518_);
lean_dec_ref(v___y_505_);
v___y_469_ = v___x_523_;
v___y_470_ = v___x_522_;
v___y_471_ = v_a_516_;
v___y_472_ = v___y_509_;
v___y_473_ = v___x_520_;
v___y_474_ = v___y_510_;
v___y_475_ = v___y_511_;
v_currNamespace_476_ = v___y_506_;
v_openDecls_477_ = v___y_504_;
v___y_478_ = v___y_466_;
goto v___jp_468_;
}
else
{
uint8_t v___x_524_; 
lean_inc(v_a_516_);
v___x_524_ = l_Lean_MessageData_hasTag(v___y_505_, v_a_516_);
if (v___x_524_ == 0)
{
lean_object* v___x_525_; lean_object* v___x_527_; 
lean_dec_ref_known(v___x_522_, 1);
lean_dec_ref(v___x_520_);
lean_dec(v_a_516_);
v___x_525_ = lean_box(0);
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 0, v___x_525_);
v___x_527_ = v___x_518_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v___x_525_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
return v___x_527_;
}
}
else
{
lean_del_object(v___x_518_);
v___y_469_ = v___x_523_;
v___y_470_ = v___x_522_;
v___y_471_ = v_a_516_;
v___y_472_ = v___y_509_;
v___y_473_ = v___x_520_;
v___y_474_ = v___y_510_;
v___y_475_ = v___y_511_;
v_currNamespace_476_ = v___y_506_;
v_openDecls_477_ = v___y_504_;
v___y_478_ = v___y_466_;
goto v___jp_468_;
}
}
}
}
v___jp_530_:
{
lean_object* v___x_541_; 
v___x_541_ = l_Lean_Syntax_getTailPos_x3f(v___y_534_, v___y_539_);
lean_dec(v___y_534_);
if (lean_obj_tag(v___x_541_) == 0)
{
lean_inc(v___y_540_);
v___y_504_ = v___y_531_;
v___y_505_ = v___y_533_;
v___y_506_ = v___y_532_;
v___y_507_ = v___y_540_;
v___y_508_ = v___y_535_;
v___y_509_ = v___y_536_;
v___y_510_ = v___y_537_;
v___y_511_ = v___y_539_;
v___y_512_ = v___y_538_;
v___y_513_ = v___y_540_;
goto v___jp_503_;
}
else
{
lean_object* v_val_542_; 
v_val_542_ = lean_ctor_get(v___x_541_, 0);
lean_inc(v_val_542_);
lean_dec_ref_known(v___x_541_, 1);
v___y_504_ = v___y_531_;
v___y_505_ = v___y_533_;
v___y_506_ = v___y_532_;
v___y_507_ = v___y_540_;
v___y_508_ = v___y_535_;
v___y_509_ = v___y_536_;
v___y_510_ = v___y_537_;
v___y_511_ = v___y_539_;
v___y_512_ = v___y_538_;
v___y_513_ = v_val_542_;
goto v___jp_503_;
}
}
v___jp_543_:
{
lean_object* v_ref_553_; lean_object* v___x_554_; 
v_ref_553_ = l_Lean_replaceRef(v_ref_461_, v___y_547_);
v___x_554_ = l_Lean_Syntax_getPos_x3f(v_ref_553_, v___y_550_);
if (lean_obj_tag(v___x_554_) == 0)
{
lean_object* v___x_555_; 
v___x_555_ = lean_unsigned_to_nat(0u);
v___y_531_ = v___y_544_;
v___y_532_ = v___y_546_;
v___y_533_ = v___y_545_;
v___y_534_ = v_ref_553_;
v___y_535_ = v___y_548_;
v___y_536_ = v___y_552_;
v___y_537_ = v___y_549_;
v___y_538_ = v___y_551_;
v___y_539_ = v___y_550_;
v___y_540_ = v___x_555_;
goto v___jp_530_;
}
else
{
lean_object* v_val_556_; 
v_val_556_ = lean_ctor_get(v___x_554_, 0);
lean_inc(v_val_556_);
lean_dec_ref_known(v___x_554_, 1);
v___y_531_ = v___y_544_;
v___y_532_ = v___y_546_;
v___y_533_ = v___y_545_;
v___y_534_ = v_ref_553_;
v___y_535_ = v___y_548_;
v___y_536_ = v___y_552_;
v___y_537_ = v___y_549_;
v___y_538_ = v___y_551_;
v___y_539_ = v___y_550_;
v___y_540_ = v_val_556_;
goto v___jp_530_;
}
}
v___jp_558_:
{
if (v___y_567_ == 0)
{
v___y_544_ = v___y_559_;
v___y_545_ = v___y_561_;
v___y_546_ = v___y_560_;
v___y_547_ = v___y_564_;
v___y_548_ = v___y_565_;
v___y_549_ = v___y_562_;
v___y_550_ = v___y_566_;
v___y_551_ = v___y_563_;
v___y_552_ = v_severity_463_;
goto v___jp_543_;
}
else
{
v___y_544_ = v___y_559_;
v___y_545_ = v___y_561_;
v___y_546_ = v___y_560_;
v___y_547_ = v___y_564_;
v___y_548_ = v___y_565_;
v___y_549_ = v___y_562_;
v___y_550_ = v___y_566_;
v___y_551_ = v___y_563_;
v___y_552_ = v___x_557_;
goto v___jp_543_;
}
}
v___jp_568_:
{
if (v___y_569_ == 0)
{
lean_object* v_toCold_570_; lean_object* v_ref_571_; uint8_t v_suppressElabErrors_572_; lean_object* v_fileName_573_; lean_object* v_fileMap_574_; lean_object* v_options_575_; lean_object* v_currNamespace_576_; lean_object* v_openDecls_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___f_580_; uint8_t v___x_581_; uint8_t v___x_582_; 
v_toCold_570_ = lean_ctor_get(v___y_465_, 0);
v_ref_571_ = lean_ctor_get(v___y_465_, 2);
v_suppressElabErrors_572_ = lean_ctor_get_uint8(v___y_465_, sizeof(void*)*3 + 1);
v_fileName_573_ = lean_ctor_get(v_toCold_570_, 0);
v_fileMap_574_ = lean_ctor_get(v_toCold_570_, 1);
v_options_575_ = lean_ctor_get(v_toCold_570_, 2);
v_currNamespace_576_ = lean_ctor_get(v_toCold_570_, 4);
v_openDecls_577_ = lean_ctor_get(v_toCold_570_, 5);
v___x_578_ = lean_box(v_suppressElabErrors_572_);
v___x_579_ = lean_box(v___y_569_);
v___f_580_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___lam__0___boxed), 3, 2);
lean_closure_set(v___f_580_, 0, v___x_578_);
lean_closure_set(v___f_580_, 1, v___x_579_);
v___x_581_ = 1;
v___x_582_ = l_Lean_instBEqMessageSeverity_beq(v_severity_463_, v___x_581_);
if (v___x_582_ == 0)
{
v___y_559_ = v_openDecls_577_;
v___y_560_ = v_currNamespace_576_;
v___y_561_ = v___f_580_;
v___y_562_ = v_fileName_573_;
v___y_563_ = v_fileMap_574_;
v___y_564_ = v_ref_571_;
v___y_565_ = v_suppressElabErrors_572_;
v___y_566_ = v___y_569_;
v___y_567_ = v___x_582_;
goto v___jp_558_;
}
else
{
lean_object* v___x_583_; uint8_t v___x_584_; 
v___x_583_ = l_Lean_warningAsError;
v___x_584_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_options_575_, v___x_583_);
v___y_559_ = v_openDecls_577_;
v___y_560_ = v_currNamespace_576_;
v___y_561_ = v___f_580_;
v___y_562_ = v_fileName_573_;
v___y_563_ = v_fileMap_574_;
v___y_564_ = v_ref_571_;
v___y_565_ = v_suppressElabErrors_572_;
v___y_566_ = v___y_569_;
v___y_567_ = v___x_584_;
goto v___jp_558_;
}
}
else
{
lean_object* v___x_585_; lean_object* v___x_586_; 
lean_dec_ref(v_msgData_462_);
v___x_585_ = lean_box(0);
v___x_586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_586_, 0, v___x_585_);
return v___x_586_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___boxed(lean_object* v_ref_589_, lean_object* v_msgData_590_, lean_object* v_severity_591_, lean_object* v_isSilent_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_){
_start:
{
uint8_t v_severity_boxed_596_; uint8_t v_isSilent_boxed_597_; lean_object* v_res_598_; 
v_severity_boxed_596_ = lean_unbox(v_severity_591_);
v_isSilent_boxed_597_ = lean_unbox(v_isSilent_592_);
v_res_598_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9(v_ref_589_, v_msgData_590_, v_severity_boxed_596_, v_isSilent_boxed_597_, v___y_593_, v___y_594_);
lean_dec(v___y_594_);
lean_dec_ref(v___y_593_);
lean_dec(v_ref_589_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4(lean_object* v_msgData_599_, uint8_t v_severity_600_, uint8_t v_isSilent_601_, lean_object* v___y_602_, lean_object* v___y_603_){
_start:
{
lean_object* v_ref_605_; lean_object* v___x_606_; 
v_ref_605_ = lean_ctor_get(v___y_602_, 2);
v___x_606_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9(v_ref_605_, v_msgData_599_, v_severity_600_, v_isSilent_601_, v___y_602_, v___y_603_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4___boxed(lean_object* v_msgData_607_, lean_object* v_severity_608_, lean_object* v_isSilent_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_){
_start:
{
uint8_t v_severity_boxed_613_; uint8_t v_isSilent_boxed_614_; lean_object* v_res_615_; 
v_severity_boxed_613_ = lean_unbox(v_severity_608_);
v_isSilent_boxed_614_ = lean_unbox(v_isSilent_609_);
v_res_615_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4(v_msgData_607_, v_severity_boxed_613_, v_isSilent_boxed_614_, v___y_610_, v___y_611_);
lean_dec(v___y_611_);
lean_dec_ref(v___y_610_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2(lean_object* v_msgData_616_, lean_object* v___y_617_, lean_object* v___y_618_){
_start:
{
uint8_t v___x_620_; uint8_t v___x_621_; lean_object* v___x_622_; 
v___x_620_ = 1;
v___x_621_ = 0;
v___x_622_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4(v_msgData_616_, v___x_620_, v___x_621_, v___y_617_, v___y_618_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2___boxed(lean_object* v_msgData_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_){
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l_Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2(v_msgData_623_, v___y_624_, v___y_625_);
lean_dec(v___y_625_);
lean_dec_ref(v___y_624_);
return v_res_627_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3(lean_object* v_as_631_, size_t v_sz_632_, size_t v_i_633_, lean_object* v_b_634_){
_start:
{
uint8_t v___x_635_; 
v___x_635_ = lean_usize_dec_lt(v_i_633_, v_sz_632_);
if (v___x_635_ == 0)
{
lean_inc_ref(v_b_634_);
return v_b_634_;
}
else
{
lean_object* v_a_636_; lean_object* v_fst_637_; lean_object* v___x_638_; uint8_t v___x_639_; 
v_a_636_ = lean_array_uget_borrowed(v_as_631_, v_i_633_);
v_fst_637_ = lean_ctor_get(v_a_636_, 0);
v___x_638_ = lean_box(0);
v___x_639_ = lean_unbox(v_fst_637_);
if (v___x_639_ == 0)
{
lean_object* v___x_640_; size_t v___x_641_; size_t v___x_642_; 
v___x_640_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3___closed__0));
v___x_641_ = ((size_t)1ULL);
v___x_642_ = lean_usize_add(v_i_633_, v___x_641_);
v_i_633_ = v___x_642_;
v_b_634_ = v___x_640_;
goto _start;
}
else
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
lean_inc(v_a_636_);
v___x_644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_644_, 0, v_a_636_);
v___x_645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_645_, 0, v___x_644_);
v___x_646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_645_);
lean_ctor_set(v___x_646_, 1, v___x_638_);
return v___x_646_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3___boxed(lean_object* v_as_647_, lean_object* v_sz_648_, lean_object* v_i_649_, lean_object* v_b_650_){
_start:
{
size_t v_sz_boxed_651_; size_t v_i_boxed_652_; lean_object* v_res_653_; 
v_sz_boxed_651_ = lean_unbox_usize(v_sz_648_);
lean_dec(v_sz_648_);
v_i_boxed_652_ = lean_unbox_usize(v_i_649_);
lean_dec(v_i_649_);
v_res_653_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3(v_as_647_, v_sz_boxed_651_, v_i_boxed_652_, v_b_650_);
lean_dec_ref(v_b_650_);
lean_dec_ref(v_as_647_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___lam__0(lean_object* v_fn_654_, lean_object* v_e_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_){
_start:
{
lean_object* v___x_662_; 
v___x_662_ = l_Lean_Expr_getSorry_x3f(v_e_655_);
if (lean_obj_tag(v___x_662_) == 1)
{
lean_object* v_val_663_; lean_object* v___x_664_; 
v_val_663_ = lean_ctor_get(v___x_662_, 0);
lean_inc(v_val_663_);
lean_dec_ref_known(v___x_662_, 1);
lean_inc(v___y_660_);
lean_inc_ref(v___y_659_);
lean_inc(v___y_658_);
lean_inc_ref(v___y_657_);
lean_inc(v___y_656_);
v___x_664_ = lean_apply_7(v_fn_654_, v_val_663_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_, lean_box(0));
if (lean_obj_tag(v___x_664_) == 0)
{
lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_673_; 
v_isSharedCheck_673_ = !lean_is_exclusive(v___x_664_);
if (v_isSharedCheck_673_ == 0)
{
lean_object* v_unused_674_; 
v_unused_674_ = lean_ctor_get(v___x_664_, 0);
lean_dec(v_unused_674_);
v___x_666_ = v___x_664_;
v_isShared_667_ = v_isSharedCheck_673_;
goto v_resetjp_665_;
}
else
{
lean_dec(v___x_664_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_673_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
uint8_t v___x_668_; lean_object* v___x_669_; lean_object* v___x_671_; 
v___x_668_ = 0;
v___x_669_ = lean_box(v___x_668_);
if (v_isShared_667_ == 0)
{
lean_ctor_set(v___x_666_, 0, v___x_669_);
v___x_671_ = v___x_666_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v___x_669_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
}
else
{
lean_object* v_a_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_682_; 
v_a_675_ = lean_ctor_get(v___x_664_, 0);
v_isSharedCheck_682_ = !lean_is_exclusive(v___x_664_);
if (v_isSharedCheck_682_ == 0)
{
v___x_677_ = v___x_664_;
v_isShared_678_ = v_isSharedCheck_682_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_a_675_);
lean_dec(v___x_664_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_682_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_680_; 
if (v_isShared_678_ == 0)
{
v___x_680_ = v___x_677_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v_a_675_);
v___x_680_ = v_reuseFailAlloc_681_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
return v___x_680_;
}
}
}
}
else
{
uint8_t v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
lean_dec(v___x_662_);
lean_dec_ref(v_fn_654_);
v___x_683_ = 1;
v___x_684_ = lean_box(v___x_683_);
v___x_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_685_, 0, v___x_684_);
return v___x_685_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___lam__0___boxed(lean_object* v_fn_686_, lean_object* v_e_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___lam__0(v_fn_686_, v_e_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_);
lean_dec(v___y_692_);
lean_dec_ref(v___y_691_);
lean_dec(v___y_690_);
lean_dec_ref(v___y_689_);
lean_dec(v___y_688_);
lean_dec_ref(v_e_687_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___lam__0(lean_object* v_00_u03b1_695_, lean_object* v_x_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_703_ = lean_apply_1(v_x_696_, lean_box(0));
v___x_704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_704_, 0, v___x_703_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___lam__0___boxed(lean_object* v_00_u03b1_705_, lean_object* v_x_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___lam__0(v_00_u03b1_705_, v_x_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
lean_dec(v___y_709_);
lean_dec_ref(v___y_708_);
lean_dec(v___y_707_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___lam__0(lean_object* v_k_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v_b_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_){
_start:
{
lean_object* v___x_723_; 
lean_inc(v___y_721_);
lean_inc_ref(v___y_720_);
lean_inc(v___y_719_);
lean_inc_ref(v___y_718_);
lean_inc(v___y_716_);
lean_inc(v___y_715_);
v___x_723_ = lean_apply_8(v_k_714_, v_b_717_, v___y_715_, v___y_716_, v___y_718_, v___y_719_, v___y_720_, v___y_721_, lean_box(0));
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___lam__0___boxed(lean_object* v_k_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v_b_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_){
_start:
{
lean_object* v_res_733_; 
v_res_733_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___lam__0(v_k_724_, v___y_725_, v___y_726_, v_b_727_, v___y_728_, v___y_729_, v___y_730_, v___y_731_);
lean_dec(v___y_731_);
lean_dec_ref(v___y_730_);
lean_dec(v___y_729_);
lean_dec_ref(v___y_728_);
lean_dec(v___y_726_);
lean_dec(v___y_725_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___redArg(lean_object* v_name_734_, lean_object* v_type_735_, lean_object* v_val_736_, lean_object* v_k_737_, uint8_t v_nondep_738_, uint8_t v_kind_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_){
_start:
{
lean_object* v___f_747_; lean_object* v___x_748_; 
lean_inc(v___y_741_);
lean_inc(v___y_740_);
v___f_747_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_747_, 0, v_k_737_);
lean_closure_set(v___f_747_, 1, v___y_740_);
lean_closure_set(v___f_747_, 2, v___y_741_);
v___x_748_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_734_, v_type_735_, v_val_736_, v___f_747_, v_nondep_738_, v_kind_739_, v___y_742_, v___y_743_, v___y_744_, v___y_745_);
if (lean_obj_tag(v___x_748_) == 0)
{
return v___x_748_;
}
else
{
lean_object* v_a_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_756_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_756_ == 0)
{
v___x_751_ = v___x_748_;
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_a_749_);
lean_dec(v___x_748_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v___x_754_; 
if (v_isShared_752_ == 0)
{
v___x_754_ = v___x_751_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_a_749_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
return v___x_754_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___redArg___boxed(lean_object* v_name_757_, lean_object* v_type_758_, lean_object* v_val_759_, lean_object* v_k_760_, lean_object* v_nondep_761_, lean_object* v_kind_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
uint8_t v_nondep_boxed_770_; uint8_t v_kind_boxed_771_; lean_object* v_res_772_; 
v_nondep_boxed_770_ = lean_unbox(v_nondep_761_);
v_kind_boxed_771_ = lean_unbox(v_kind_762_);
v_res_772_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___redArg(v_name_757_, v_type_758_, v_val_759_, v_k_760_, v_nondep_boxed_770_, v_kind_boxed_771_, v___y_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec(v___y_766_);
lean_dec_ref(v___y_765_);
lean_dec(v___y_764_);
lean_dec(v___y_763_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___lam__0___boxed(lean_object* v_fvars_773_, lean_object* v_f_774_, lean_object* v_body_775_, lean_object* v_x_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_){
_start:
{
lean_object* v_res_784_; 
v_res_784_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___lam__0(v_fvars_773_, v_f_774_, v_body_775_, v_x_776_, v___y_777_, v___y_778_, v___y_779_, v___y_780_, v___y_781_, v___y_782_);
lean_dec(v___y_782_);
lean_dec_ref(v___y_781_);
lean_dec(v___y_780_);
lean_dec_ref(v___y_779_);
lean_dec(v___y_778_);
lean_dec(v___y_777_);
return v_res_784_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24(lean_object* v_f_785_, lean_object* v_fvars_786_, lean_object* v_a_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_){
_start:
{
if (lean_obj_tag(v_a_787_) == 8)
{
lean_object* v_declName_795_; lean_object* v_type_796_; lean_object* v_value_797_; lean_object* v_body_798_; lean_object* v___f_799_; lean_object* v_d_800_; lean_object* v_v_801_; lean_object* v___x_802_; 
v_declName_795_ = lean_ctor_get(v_a_787_, 0);
lean_inc(v_declName_795_);
v_type_796_ = lean_ctor_get(v_a_787_, 1);
lean_inc_ref(v_type_796_);
v_value_797_ = lean_ctor_get(v_a_787_, 2);
lean_inc_ref(v_value_797_);
v_body_798_ = lean_ctor_get(v_a_787_, 3);
lean_inc_ref(v_body_798_);
lean_dec_ref_known(v_a_787_, 4);
lean_inc_ref_n(v_f_785_, 2);
lean_inc_ref(v_fvars_786_);
v___f_799_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___lam__0___boxed), 11, 3);
lean_closure_set(v___f_799_, 0, v_fvars_786_);
lean_closure_set(v___f_799_, 1, v_f_785_);
lean_closure_set(v___f_799_, 2, v_body_798_);
v_d_800_ = lean_expr_instantiate_rev(v_type_796_, v_fvars_786_);
lean_dec_ref(v_type_796_);
v_v_801_ = lean_expr_instantiate_rev(v_value_797_, v_fvars_786_);
lean_dec_ref(v_fvars_786_);
lean_dec_ref(v_value_797_);
lean_inc(v___y_793_);
lean_inc_ref(v___y_792_);
lean_inc(v___y_791_);
lean_inc_ref(v___y_790_);
lean_inc(v___y_789_);
lean_inc(v___y_788_);
lean_inc_ref(v_d_800_);
v___x_802_ = lean_apply_8(v_f_785_, v_d_800_, v___y_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_, lean_box(0));
if (lean_obj_tag(v___x_802_) == 0)
{
lean_object* v___x_803_; 
lean_dec_ref_known(v___x_802_, 1);
lean_inc(v___y_793_);
lean_inc_ref(v___y_792_);
lean_inc(v___y_791_);
lean_inc_ref(v___y_790_);
lean_inc(v___y_789_);
lean_inc(v___y_788_);
lean_inc_ref(v_v_801_);
v___x_803_ = lean_apply_8(v_f_785_, v_v_801_, v___y_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_, lean_box(0));
if (lean_obj_tag(v___x_803_) == 0)
{
uint8_t v___x_804_; uint8_t v___x_805_; lean_object* v___x_806_; 
lean_dec_ref_known(v___x_803_, 1);
v___x_804_ = 0;
v___x_805_ = 0;
v___x_806_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___redArg(v_declName_795_, v_d_800_, v_v_801_, v___f_799_, v___x_804_, v___x_805_, v___y_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_);
return v___x_806_;
}
else
{
lean_dec_ref(v_v_801_);
lean_dec_ref(v_d_800_);
lean_dec_ref(v___f_799_);
lean_dec(v_declName_795_);
return v___x_803_;
}
}
else
{
lean_dec_ref(v_v_801_);
lean_dec_ref(v_d_800_);
lean_dec_ref(v___f_799_);
lean_dec(v_declName_795_);
lean_dec_ref(v_f_785_);
return v___x_802_;
}
}
else
{
lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_807_ = lean_expr_instantiate_rev(v_a_787_, v_fvars_786_);
lean_dec_ref(v_fvars_786_);
lean_dec_ref(v_a_787_);
lean_inc(v___y_793_);
lean_inc_ref(v___y_792_);
lean_inc(v___y_791_);
lean_inc_ref(v___y_790_);
lean_inc(v___y_789_);
lean_inc(v___y_788_);
v___x_808_ = lean_apply_8(v_f_785_, v___x_807_, v___y_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_, lean_box(0));
return v___x_808_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___lam__0(lean_object* v_fvars_809_, lean_object* v_f_810_, lean_object* v_body_811_, lean_object* v_x_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_){
_start:
{
lean_object* v___x_820_; lean_object* v___x_821_; 
v___x_820_ = lean_array_push(v_fvars_809_, v_x_812_);
v___x_821_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24(v_f_810_, v___x_820_, v_body_811_, v___y_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_);
return v___x_821_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24___boxed(lean_object* v_f_822_, lean_object* v_fvars_823_, lean_object* v_a_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_){
_start:
{
lean_object* v_res_832_; 
v_res_832_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24(v_f_822_, v_fvars_823_, v_a_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_, v___y_829_, v___y_830_);
lean_dec(v___y_830_);
lean_dec_ref(v___y_829_);
lean_dec(v___y_828_);
lean_dec_ref(v___y_827_);
lean_dec(v___y_826_);
lean_dec(v___y_825_);
return v_res_832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12(lean_object* v_f_835_, lean_object* v_e_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_){
_start:
{
lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_844_ = ((lean_object*)(l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0));
v___x_845_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24(v_f_835_, v___x_844_, v_e_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_, v___y_842_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___boxed(lean_object* v_f_846_, lean_object* v_e_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12(v_f_846_, v_e_847_, v___y_848_, v___y_849_, v___y_850_, v___y_851_, v___y_852_, v___y_853_);
lean_dec(v___y_853_);
lean_dec_ref(v___y_852_);
lean_dec(v___y_851_);
lean_dec_ref(v___y_850_);
lean_dec(v___y_849_);
lean_dec(v___y_848_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg(lean_object* v_name_856_, uint8_t v_bi_857_, lean_object* v_type_858_, lean_object* v_k_859_, uint8_t v_kind_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_){
_start:
{
lean_object* v___f_868_; lean_object* v___x_869_; 
lean_inc(v___y_862_);
lean_inc(v___y_861_);
v___f_868_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_868_, 0, v_k_859_);
lean_closure_set(v___f_868_, 1, v___y_861_);
lean_closure_set(v___f_868_, 2, v___y_862_);
v___x_869_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_856_, v_bi_857_, v_type_858_, v___f_868_, v_kind_860_, v___y_863_, v___y_864_, v___y_865_, v___y_866_);
if (lean_obj_tag(v___x_869_) == 0)
{
return v___x_869_;
}
else
{
lean_object* v_a_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_877_; 
v_a_870_ = lean_ctor_get(v___x_869_, 0);
v_isSharedCheck_877_ = !lean_is_exclusive(v___x_869_);
if (v_isSharedCheck_877_ == 0)
{
v___x_872_ = v___x_869_;
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_a_870_);
lean_dec(v___x_869_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v___x_875_; 
if (v_isShared_873_ == 0)
{
v___x_875_ = v___x_872_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_a_870_);
v___x_875_ = v_reuseFailAlloc_876_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
return v___x_875_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg___boxed(lean_object* v_name_878_, lean_object* v_bi_879_, lean_object* v_type_880_, lean_object* v_k_881_, lean_object* v_kind_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_){
_start:
{
uint8_t v_bi_boxed_890_; uint8_t v_kind_boxed_891_; lean_object* v_res_892_; 
v_bi_boxed_890_ = lean_unbox(v_bi_879_);
v_kind_boxed_891_ = lean_unbox(v_kind_882_);
v_res_892_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg(v_name_878_, v_bi_boxed_890_, v_type_880_, v_k_881_, v_kind_boxed_891_, v___y_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_, v___y_888_);
lean_dec(v___y_888_);
lean_dec_ref(v___y_887_);
lean_dec(v___y_886_);
lean_dec_ref(v___y_885_);
lean_dec(v___y_884_);
lean_dec(v___y_883_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___lam__0___boxed(lean_object* v_fvars_893_, lean_object* v_f_894_, lean_object* v_body_895_, lean_object* v_x_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_){
_start:
{
lean_object* v_res_904_; 
v_res_904_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___lam__0(v_fvars_893_, v_f_894_, v_body_895_, v_x_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_);
lean_dec(v___y_902_);
lean_dec_ref(v___y_901_);
lean_dec(v___y_900_);
lean_dec_ref(v___y_899_);
lean_dec(v___y_898_);
lean_dec(v___y_897_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20(lean_object* v_f_905_, lean_object* v_fvars_906_, lean_object* v_a_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_){
_start:
{
if (lean_obj_tag(v_a_907_) == 7)
{
lean_object* v_binderName_915_; lean_object* v_binderType_916_; lean_object* v_body_917_; uint8_t v_binderInfo_918_; lean_object* v___f_919_; lean_object* v_d_920_; lean_object* v___x_921_; 
v_binderName_915_ = lean_ctor_get(v_a_907_, 0);
lean_inc(v_binderName_915_);
v_binderType_916_ = lean_ctor_get(v_a_907_, 1);
lean_inc_ref(v_binderType_916_);
v_body_917_ = lean_ctor_get(v_a_907_, 2);
lean_inc_ref(v_body_917_);
v_binderInfo_918_ = lean_ctor_get_uint8(v_a_907_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_907_, 3);
lean_inc_ref(v_f_905_);
lean_inc_ref(v_fvars_906_);
v___f_919_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___lam__0___boxed), 11, 3);
lean_closure_set(v___f_919_, 0, v_fvars_906_);
lean_closure_set(v___f_919_, 1, v_f_905_);
lean_closure_set(v___f_919_, 2, v_body_917_);
v_d_920_ = lean_expr_instantiate_rev(v_binderType_916_, v_fvars_906_);
lean_dec_ref(v_fvars_906_);
lean_dec_ref(v_binderType_916_);
lean_inc(v___y_913_);
lean_inc_ref(v___y_912_);
lean_inc(v___y_911_);
lean_inc_ref(v___y_910_);
lean_inc(v___y_909_);
lean_inc(v___y_908_);
lean_inc_ref(v_d_920_);
v___x_921_ = lean_apply_8(v_f_905_, v_d_920_, v___y_908_, v___y_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_, lean_box(0));
if (lean_obj_tag(v___x_921_) == 0)
{
uint8_t v___x_922_; lean_object* v___x_923_; 
lean_dec_ref_known(v___x_921_, 1);
v___x_922_ = 0;
v___x_923_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg(v_binderName_915_, v_binderInfo_918_, v_d_920_, v___f_919_, v___x_922_, v___y_908_, v___y_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_);
return v___x_923_;
}
else
{
lean_dec_ref(v_d_920_);
lean_dec_ref(v___f_919_);
lean_dec(v_binderName_915_);
return v___x_921_;
}
}
else
{
lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_924_ = lean_expr_instantiate_rev(v_a_907_, v_fvars_906_);
lean_dec_ref(v_fvars_906_);
lean_dec_ref(v_a_907_);
lean_inc(v___y_913_);
lean_inc_ref(v___y_912_);
lean_inc(v___y_911_);
lean_inc_ref(v___y_910_);
lean_inc(v___y_909_);
lean_inc(v___y_908_);
v___x_925_ = lean_apply_8(v_f_905_, v___x_924_, v___y_908_, v___y_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_, lean_box(0));
return v___x_925_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___lam__0(lean_object* v_fvars_926_, lean_object* v_f_927_, lean_object* v_body_928_, lean_object* v_x_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_){
_start:
{
lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_937_ = lean_array_push(v_fvars_926_, v_x_929_);
v___x_938_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20(v_f_927_, v___x_937_, v_body_928_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20___boxed(lean_object* v_f_939_, lean_object* v_fvars_940_, lean_object* v_a_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_){
_start:
{
lean_object* v_res_949_; 
v_res_949_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20(v_f_939_, v_fvars_940_, v_a_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
lean_dec(v___y_947_);
lean_dec_ref(v___y_946_);
lean_dec(v___y_945_);
lean_dec_ref(v___y_944_);
lean_dec(v___y_943_);
lean_dec(v___y_942_);
return v_res_949_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10(lean_object* v_f_950_, lean_object* v_e_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_){
_start:
{
lean_object* v___x_959_; lean_object* v___x_960_; 
v___x_959_ = ((lean_object*)(l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0));
v___x_960_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20(v_f_950_, v___x_959_, v_e_951_, v___y_952_, v___y_953_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
return v___x_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10___boxed(lean_object* v_f_961_, lean_object* v_e_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_){
_start:
{
lean_object* v_res_970_; 
v_res_970_ = l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10(v_f_961_, v_e_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_, v___y_968_);
lean_dec(v___y_968_);
lean_dec_ref(v___y_967_);
lean_dec(v___y_966_);
lean_dec_ref(v___y_965_);
lean_dec(v___y_964_);
lean_dec(v___y_963_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___lam__0___boxed(lean_object* v_fvars_971_, lean_object* v_f_972_, lean_object* v_body_973_, lean_object* v_x_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___lam__0(v_fvars_971_, v_f_972_, v_body_973_, v_x_974_, v___y_975_, v___y_976_, v___y_977_, v___y_978_, v___y_979_, v___y_980_);
lean_dec(v___y_980_);
lean_dec_ref(v___y_979_);
lean_dec(v___y_978_);
lean_dec_ref(v___y_977_);
lean_dec(v___y_976_);
lean_dec(v___y_975_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22(lean_object* v_f_983_, lean_object* v_fvars_984_, lean_object* v_a_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_){
_start:
{
if (lean_obj_tag(v_a_985_) == 6)
{
lean_object* v_binderName_993_; lean_object* v_binderType_994_; lean_object* v_body_995_; uint8_t v_binderInfo_996_; lean_object* v___f_997_; lean_object* v_d_998_; lean_object* v___x_999_; 
v_binderName_993_ = lean_ctor_get(v_a_985_, 0);
lean_inc(v_binderName_993_);
v_binderType_994_ = lean_ctor_get(v_a_985_, 1);
lean_inc_ref(v_binderType_994_);
v_body_995_ = lean_ctor_get(v_a_985_, 2);
lean_inc_ref(v_body_995_);
v_binderInfo_996_ = lean_ctor_get_uint8(v_a_985_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_a_985_, 3);
lean_inc_ref(v_f_983_);
lean_inc_ref(v_fvars_984_);
v___f_997_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___lam__0___boxed), 11, 3);
lean_closure_set(v___f_997_, 0, v_fvars_984_);
lean_closure_set(v___f_997_, 1, v_f_983_);
lean_closure_set(v___f_997_, 2, v_body_995_);
v_d_998_ = lean_expr_instantiate_rev(v_binderType_994_, v_fvars_984_);
lean_dec_ref(v_fvars_984_);
lean_dec_ref(v_binderType_994_);
lean_inc(v___y_991_);
lean_inc_ref(v___y_990_);
lean_inc(v___y_989_);
lean_inc_ref(v___y_988_);
lean_inc(v___y_987_);
lean_inc(v___y_986_);
lean_inc_ref(v_d_998_);
v___x_999_ = lean_apply_8(v_f_983_, v_d_998_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, lean_box(0));
if (lean_obj_tag(v___x_999_) == 0)
{
uint8_t v___x_1000_; lean_object* v___x_1001_; 
lean_dec_ref_known(v___x_999_, 1);
v___x_1000_ = 0;
v___x_1001_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg(v_binderName_993_, v_binderInfo_996_, v_d_998_, v___f_997_, v___x_1000_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_);
return v___x_1001_;
}
else
{
lean_dec_ref(v_d_998_);
lean_dec_ref(v___f_997_);
lean_dec(v_binderName_993_);
return v___x_999_;
}
}
else
{
lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_1002_ = lean_expr_instantiate_rev(v_a_985_, v_fvars_984_);
lean_dec_ref(v_fvars_984_);
lean_dec_ref(v_a_985_);
lean_inc(v___y_991_);
lean_inc_ref(v___y_990_);
lean_inc(v___y_989_);
lean_inc_ref(v___y_988_);
lean_inc(v___y_987_);
lean_inc(v___y_986_);
v___x_1003_ = lean_apply_8(v_f_983_, v___x_1002_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, lean_box(0));
return v___x_1003_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___lam__0(lean_object* v_fvars_1004_, lean_object* v_f_1005_, lean_object* v_body_1006_, lean_object* v_x_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1015_ = lean_array_push(v_fvars_1004_, v_x_1007_);
v___x_1016_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22(v_f_1005_, v___x_1015_, v_body_1006_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22___boxed(lean_object* v_f_1017_, lean_object* v_fvars_1018_, lean_object* v_a_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_){
_start:
{
lean_object* v_res_1027_; 
v_res_1027_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22(v_f_1017_, v_fvars_1018_, v_a_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
lean_dec(v___y_1025_);
lean_dec_ref(v___y_1024_);
lean_dec(v___y_1023_);
lean_dec_ref(v___y_1022_);
lean_dec(v___y_1021_);
lean_dec(v___y_1020_);
return v_res_1027_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11(lean_object* v_f_1028_, lean_object* v_e_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_){
_start:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1037_ = ((lean_object*)(l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12___closed__0));
v___x_1038_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLambda_visit___at___00Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11_spec__22(v_f_1028_, v___x_1037_, v_e_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_, v___y_1034_, v___y_1035_);
return v___x_1038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11___boxed(lean_object* v_f_1039_, lean_object* v_e_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11(v_f_1039_, v_e_1040_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec(v___y_1044_);
lean_dec_ref(v___y_1043_);
lean_dec(v___y_1042_);
lean_dec(v___y_1041_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___redArg(lean_object* v_a_1049_, lean_object* v_x_1050_){
_start:
{
if (lean_obj_tag(v_x_1050_) == 0)
{
lean_object* v___x_1051_; 
v___x_1051_ = lean_box(0);
return v___x_1051_;
}
else
{
lean_object* v_key_1052_; lean_object* v_value_1053_; lean_object* v_tail_1054_; uint8_t v___x_1055_; 
v_key_1052_ = lean_ctor_get(v_x_1050_, 0);
v_value_1053_ = lean_ctor_get(v_x_1050_, 1);
v_tail_1054_ = lean_ctor_get(v_x_1050_, 2);
v___x_1055_ = lean_expr_eqv(v_key_1052_, v_a_1049_);
if (v___x_1055_ == 0)
{
v_x_1050_ = v_tail_1054_;
goto _start;
}
else
{
lean_object* v___x_1057_; 
lean_inc(v_value_1053_);
v___x_1057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1057_, 0, v_value_1053_);
return v___x_1057_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___redArg___boxed(lean_object* v_a_1058_, lean_object* v_x_1059_){
_start:
{
lean_object* v_res_1060_; 
v_res_1060_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___redArg(v_a_1058_, v_x_1059_);
lean_dec(v_x_1059_);
lean_dec_ref(v_a_1058_);
return v_res_1060_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(lean_object* v_m_1061_, lean_object* v_a_1062_){
_start:
{
lean_object* v_buckets_1063_; lean_object* v___x_1064_; uint64_t v___x_1065_; uint64_t v___x_1066_; uint64_t v___x_1067_; uint64_t v_fold_1068_; uint64_t v___x_1069_; uint64_t v___x_1070_; uint64_t v___x_1071_; size_t v___x_1072_; size_t v___x_1073_; size_t v___x_1074_; size_t v___x_1075_; size_t v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v_buckets_1063_ = lean_ctor_get(v_m_1061_, 1);
v___x_1064_ = lean_array_get_size(v_buckets_1063_);
v___x_1065_ = l_Lean_Expr_hash(v_a_1062_);
v___x_1066_ = 32ULL;
v___x_1067_ = lean_uint64_shift_right(v___x_1065_, v___x_1066_);
v_fold_1068_ = lean_uint64_xor(v___x_1065_, v___x_1067_);
v___x_1069_ = 16ULL;
v___x_1070_ = lean_uint64_shift_right(v_fold_1068_, v___x_1069_);
v___x_1071_ = lean_uint64_xor(v_fold_1068_, v___x_1070_);
v___x_1072_ = lean_uint64_to_usize(v___x_1071_);
v___x_1073_ = lean_usize_of_nat(v___x_1064_);
v___x_1074_ = ((size_t)1ULL);
v___x_1075_ = lean_usize_sub(v___x_1073_, v___x_1074_);
v___x_1076_ = lean_usize_land(v___x_1072_, v___x_1075_);
v___x_1077_ = lean_array_uget_borrowed(v_buckets_1063_, v___x_1076_);
v___x_1078_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___redArg(v_a_1062_, v___x_1077_);
return v___x_1078_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg___boxed(lean_object* v_m_1079_, lean_object* v_a_1080_){
_start:
{
lean_object* v_res_1081_; 
v_res_1081_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(v_m_1079_, v_a_1080_);
lean_dec_ref(v_a_1080_);
lean_dec_ref(v_m_1079_);
return v_res_1081_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__0(lean_object* v_00_u03b1_1082_, lean_object* v_x_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1090_ = lean_apply_1(v_x_1083_, lean_box(0));
v___x_1091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1090_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__0___boxed(lean_object* v_00_u03b1_1092_, lean_object* v_x_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_){
_start:
{
lean_object* v_res_1100_; 
v_res_1100_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__0(v_00_u03b1_1092_, v_x_1093_, v___y_1094_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
lean_dec(v___y_1094_);
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18_spec__22___redArg(lean_object* v_x_1101_, lean_object* v_x_1102_){
_start:
{
if (lean_obj_tag(v_x_1102_) == 0)
{
return v_x_1101_;
}
else
{
lean_object* v_key_1103_; lean_object* v_value_1104_; lean_object* v_tail_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1128_; 
v_key_1103_ = lean_ctor_get(v_x_1102_, 0);
v_value_1104_ = lean_ctor_get(v_x_1102_, 1);
v_tail_1105_ = lean_ctor_get(v_x_1102_, 2);
v_isSharedCheck_1128_ = !lean_is_exclusive(v_x_1102_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1107_ = v_x_1102_;
v_isShared_1108_ = v_isSharedCheck_1128_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_tail_1105_);
lean_inc(v_value_1104_);
lean_inc(v_key_1103_);
lean_dec(v_x_1102_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1128_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1109_; uint64_t v___x_1110_; uint64_t v___x_1111_; uint64_t v___x_1112_; uint64_t v_fold_1113_; uint64_t v___x_1114_; uint64_t v___x_1115_; uint64_t v___x_1116_; size_t v___x_1117_; size_t v___x_1118_; size_t v___x_1119_; size_t v___x_1120_; size_t v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1124_; 
v___x_1109_ = lean_array_get_size(v_x_1101_);
v___x_1110_ = l_Lean_Expr_hash(v_key_1103_);
v___x_1111_ = 32ULL;
v___x_1112_ = lean_uint64_shift_right(v___x_1110_, v___x_1111_);
v_fold_1113_ = lean_uint64_xor(v___x_1110_, v___x_1112_);
v___x_1114_ = 16ULL;
v___x_1115_ = lean_uint64_shift_right(v_fold_1113_, v___x_1114_);
v___x_1116_ = lean_uint64_xor(v_fold_1113_, v___x_1115_);
v___x_1117_ = lean_uint64_to_usize(v___x_1116_);
v___x_1118_ = lean_usize_of_nat(v___x_1109_);
v___x_1119_ = ((size_t)1ULL);
v___x_1120_ = lean_usize_sub(v___x_1118_, v___x_1119_);
v___x_1121_ = lean_usize_land(v___x_1117_, v___x_1120_);
v___x_1122_ = lean_array_uget_borrowed(v_x_1101_, v___x_1121_);
lean_inc(v___x_1122_);
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 2, v___x_1122_);
v___x_1124_ = v___x_1107_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v_key_1103_);
lean_ctor_set(v_reuseFailAlloc_1127_, 1, v_value_1104_);
lean_ctor_set(v_reuseFailAlloc_1127_, 2, v___x_1122_);
v___x_1124_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
lean_object* v___x_1125_; 
v___x_1125_ = lean_array_uset(v_x_1101_, v___x_1121_, v___x_1124_);
v_x_1101_ = v___x_1125_;
v_x_1102_ = v_tail_1105_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18___redArg(lean_object* v_i_1129_, lean_object* v_source_1130_, lean_object* v_target_1131_){
_start:
{
lean_object* v___x_1132_; uint8_t v___x_1133_; 
v___x_1132_ = lean_array_get_size(v_source_1130_);
v___x_1133_ = lean_nat_dec_lt(v_i_1129_, v___x_1132_);
if (v___x_1133_ == 0)
{
lean_dec_ref(v_source_1130_);
lean_dec(v_i_1129_);
return v_target_1131_;
}
else
{
lean_object* v_es_1134_; lean_object* v___x_1135_; lean_object* v_source_1136_; lean_object* v_target_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; 
v_es_1134_ = lean_array_fget(v_source_1130_, v_i_1129_);
v___x_1135_ = lean_box(0);
v_source_1136_ = lean_array_fset(v_source_1130_, v_i_1129_, v___x_1135_);
v_target_1137_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18_spec__22___redArg(v_target_1131_, v_es_1134_);
v___x_1138_ = lean_unsigned_to_nat(1u);
v___x_1139_ = lean_nat_add(v_i_1129_, v___x_1138_);
lean_dec(v_i_1129_);
v_i_1129_ = v___x_1139_;
v_source_1130_ = v_source_1136_;
v_target_1131_ = v_target_1137_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17___redArg(lean_object* v_data_1141_){
_start:
{
lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v_nbuckets_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1142_ = lean_array_get_size(v_data_1141_);
v___x_1143_ = lean_unsigned_to_nat(2u);
v_nbuckets_1144_ = lean_nat_mul(v___x_1142_, v___x_1143_);
v___x_1145_ = lean_unsigned_to_nat(0u);
v___x_1146_ = lean_box(0);
v___x_1147_ = lean_mk_array(v_nbuckets_1144_, v___x_1146_);
v___x_1148_ = lean_array_propagate_mark(v_data_1141_, v___x_1147_);
v___x_1149_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18___redArg(v___x_1145_, v_data_1141_, v___x_1148_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__18___redArg(lean_object* v_a_1150_, lean_object* v_b_1151_, lean_object* v_x_1152_){
_start:
{
if (lean_obj_tag(v_x_1152_) == 0)
{
lean_dec(v_b_1151_);
lean_dec_ref(v_a_1150_);
return v_x_1152_;
}
else
{
lean_object* v_key_1153_; lean_object* v_value_1154_; lean_object* v_tail_1155_; lean_object* v___x_1157_; uint8_t v_isShared_1158_; uint8_t v_isSharedCheck_1167_; 
v_key_1153_ = lean_ctor_get(v_x_1152_, 0);
v_value_1154_ = lean_ctor_get(v_x_1152_, 1);
v_tail_1155_ = lean_ctor_get(v_x_1152_, 2);
v_isSharedCheck_1167_ = !lean_is_exclusive(v_x_1152_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1157_ = v_x_1152_;
v_isShared_1158_ = v_isSharedCheck_1167_;
goto v_resetjp_1156_;
}
else
{
lean_inc(v_tail_1155_);
lean_inc(v_value_1154_);
lean_inc(v_key_1153_);
lean_dec(v_x_1152_);
v___x_1157_ = lean_box(0);
v_isShared_1158_ = v_isSharedCheck_1167_;
goto v_resetjp_1156_;
}
v_resetjp_1156_:
{
uint8_t v___x_1159_; 
v___x_1159_ = lean_expr_eqv(v_key_1153_, v_a_1150_);
if (v___x_1159_ == 0)
{
lean_object* v___x_1160_; lean_object* v___x_1162_; 
v___x_1160_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__18___redArg(v_a_1150_, v_b_1151_, v_tail_1155_);
if (v_isShared_1158_ == 0)
{
lean_ctor_set(v___x_1157_, 2, v___x_1160_);
v___x_1162_ = v___x_1157_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v_key_1153_);
lean_ctor_set(v_reuseFailAlloc_1163_, 1, v_value_1154_);
lean_ctor_set(v_reuseFailAlloc_1163_, 2, v___x_1160_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
return v___x_1162_;
}
}
else
{
lean_object* v___x_1165_; 
lean_dec(v_value_1154_);
lean_dec(v_key_1153_);
if (v_isShared_1158_ == 0)
{
lean_ctor_set(v___x_1157_, 1, v_b_1151_);
lean_ctor_set(v___x_1157_, 0, v_a_1150_);
v___x_1165_ = v___x_1157_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_a_1150_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v_b_1151_);
lean_ctor_set(v_reuseFailAlloc_1166_, 2, v_tail_1155_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___redArg(lean_object* v_a_1168_, lean_object* v_x_1169_){
_start:
{
if (lean_obj_tag(v_x_1169_) == 0)
{
uint8_t v___x_1170_; 
v___x_1170_ = 0;
return v___x_1170_;
}
else
{
lean_object* v_key_1171_; lean_object* v_tail_1172_; uint8_t v___x_1173_; 
v_key_1171_ = lean_ctor_get(v_x_1169_, 0);
v_tail_1172_ = lean_ctor_get(v_x_1169_, 2);
v___x_1173_ = lean_expr_eqv(v_key_1171_, v_a_1168_);
if (v___x_1173_ == 0)
{
v_x_1169_ = v_tail_1172_;
goto _start;
}
else
{
return v___x_1173_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___redArg___boxed(lean_object* v_a_1175_, lean_object* v_x_1176_){
_start:
{
uint8_t v_res_1177_; lean_object* v_r_1178_; 
v_res_1177_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___redArg(v_a_1175_, v_x_1176_);
lean_dec(v_x_1176_);
lean_dec_ref(v_a_1175_);
v_r_1178_ = lean_box(v_res_1177_);
return v_r_1178_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9___redArg(lean_object* v_m_1179_, lean_object* v_a_1180_, lean_object* v_b_1181_){
_start:
{
lean_object* v_size_1182_; lean_object* v_buckets_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1226_; 
v_size_1182_ = lean_ctor_get(v_m_1179_, 0);
v_buckets_1183_ = lean_ctor_get(v_m_1179_, 1);
v_isSharedCheck_1226_ = !lean_is_exclusive(v_m_1179_);
if (v_isSharedCheck_1226_ == 0)
{
v___x_1185_ = v_m_1179_;
v_isShared_1186_ = v_isSharedCheck_1226_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_buckets_1183_);
lean_inc(v_size_1182_);
lean_dec(v_m_1179_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1226_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v___x_1187_; uint64_t v___x_1188_; uint64_t v___x_1189_; uint64_t v___x_1190_; uint64_t v_fold_1191_; uint64_t v___x_1192_; uint64_t v___x_1193_; uint64_t v___x_1194_; size_t v___x_1195_; size_t v___x_1196_; size_t v___x_1197_; size_t v___x_1198_; size_t v___x_1199_; lean_object* v_bkt_1200_; uint8_t v___x_1201_; 
v___x_1187_ = lean_array_get_size(v_buckets_1183_);
v___x_1188_ = l_Lean_Expr_hash(v_a_1180_);
v___x_1189_ = 32ULL;
v___x_1190_ = lean_uint64_shift_right(v___x_1188_, v___x_1189_);
v_fold_1191_ = lean_uint64_xor(v___x_1188_, v___x_1190_);
v___x_1192_ = 16ULL;
v___x_1193_ = lean_uint64_shift_right(v_fold_1191_, v___x_1192_);
v___x_1194_ = lean_uint64_xor(v_fold_1191_, v___x_1193_);
v___x_1195_ = lean_uint64_to_usize(v___x_1194_);
v___x_1196_ = lean_usize_of_nat(v___x_1187_);
v___x_1197_ = ((size_t)1ULL);
v___x_1198_ = lean_usize_sub(v___x_1196_, v___x_1197_);
v___x_1199_ = lean_usize_land(v___x_1195_, v___x_1198_);
v_bkt_1200_ = lean_array_uget_borrowed(v_buckets_1183_, v___x_1199_);
v___x_1201_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___redArg(v_a_1180_, v_bkt_1200_);
if (v___x_1201_ == 0)
{
lean_object* v___x_1202_; lean_object* v_size_x27_1203_; lean_object* v___x_1204_; lean_object* v_buckets_x27_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; uint8_t v___x_1211_; 
v___x_1202_ = lean_unsigned_to_nat(1u);
v_size_x27_1203_ = lean_nat_add(v_size_1182_, v___x_1202_);
lean_dec(v_size_1182_);
lean_inc(v_bkt_1200_);
v___x_1204_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1204_, 0, v_a_1180_);
lean_ctor_set(v___x_1204_, 1, v_b_1181_);
lean_ctor_set(v___x_1204_, 2, v_bkt_1200_);
v_buckets_x27_1205_ = lean_array_uset(v_buckets_1183_, v___x_1199_, v___x_1204_);
v___x_1206_ = lean_unsigned_to_nat(4u);
v___x_1207_ = lean_nat_mul(v_size_x27_1203_, v___x_1206_);
v___x_1208_ = lean_unsigned_to_nat(3u);
v___x_1209_ = lean_nat_div(v___x_1207_, v___x_1208_);
lean_dec(v___x_1207_);
v___x_1210_ = lean_array_get_size(v_buckets_x27_1205_);
v___x_1211_ = lean_nat_dec_le(v___x_1209_, v___x_1210_);
lean_dec(v___x_1209_);
if (v___x_1211_ == 0)
{
lean_object* v_val_1212_; lean_object* v___x_1214_; 
v_val_1212_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17___redArg(v_buckets_x27_1205_);
if (v_isShared_1186_ == 0)
{
lean_ctor_set(v___x_1185_, 1, v_val_1212_);
lean_ctor_set(v___x_1185_, 0, v_size_x27_1203_);
v___x_1214_ = v___x_1185_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_size_x27_1203_);
lean_ctor_set(v_reuseFailAlloc_1215_, 1, v_val_1212_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
else
{
lean_object* v___x_1217_; 
if (v_isShared_1186_ == 0)
{
lean_ctor_set(v___x_1185_, 1, v_buckets_x27_1205_);
lean_ctor_set(v___x_1185_, 0, v_size_x27_1203_);
v___x_1217_ = v___x_1185_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_size_x27_1203_);
lean_ctor_set(v_reuseFailAlloc_1218_, 1, v_buckets_x27_1205_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
else
{
lean_object* v___x_1219_; lean_object* v_buckets_x27_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1224_; 
lean_inc(v_bkt_1200_);
v___x_1219_ = lean_box(0);
v_buckets_x27_1220_ = lean_array_uset(v_buckets_1183_, v___x_1199_, v___x_1219_);
v___x_1221_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__18___redArg(v_a_1180_, v_b_1181_, v_bkt_1200_);
v___x_1222_ = lean_array_uset(v_buckets_x27_1220_, v___x_1199_, v___x_1221_);
if (v_isShared_1186_ == 0)
{
lean_ctor_set(v___x_1185_, 1, v___x_1222_);
v___x_1224_ = v___x_1185_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v_size_1182_);
lean_ctor_set(v_reuseFailAlloc_1225_, 1, v___x_1222_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__1(lean_object* v_a_1227_, lean_object* v_e_1228_, lean_object* v_a_1229_){
_start:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1231_ = lean_st_ref_take(v_a_1227_);
v___x_1232_ = lean_box(0);
v___x_1233_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9___redArg(v___x_1231_, v_e_1228_, v_a_1229_);
v___x_1234_ = lean_st_ref_put(v_a_1227_, v___x_1233_);
return v___x_1232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__1___boxed(lean_object* v_a_1235_, lean_object* v_e_1236_, lean_object* v_a_1237_, lean_object* v___y_1238_){
_start:
{
lean_object* v_res_1239_; 
v_res_1239_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__1(v_a_1235_, v_e_1236_, v_a_1237_);
lean_dec(v_a_1235_);
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___boxed(lean_object* v_fn_1240_, lean_object* v_e_1241_, lean_object* v_a_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_){
_start:
{
lean_object* v_res_1249_; 
v_res_1249_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(v_fn_1240_, v_e_1241_, v_a_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_);
lean_dec(v___y_1247_);
lean_dec_ref(v___y_1246_);
lean_dec(v___y_1245_);
lean_dec_ref(v___y_1244_);
lean_dec(v___y_1243_);
lean_dec(v_a_1242_);
return v_res_1249_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(lean_object* v_fn_1250_, lean_object* v_e_1251_, lean_object* v_a_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_){
_start:
{
lean_object* v_a_1260_; lean_object* v___y_1272_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
lean_inc(v_a_1252_);
v___x_1274_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1274_, 0, lean_box(0));
lean_closure_set(v___x_1274_, 1, lean_box(0));
lean_closure_set(v___x_1274_, 2, v_a_1252_);
v___x_1275_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__0(lean_box(0), v___x_1274_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
if (lean_obj_tag(v___x_1275_) == 0)
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1312_; 
v_a_1276_ = lean_ctor_get(v___x_1275_, 0);
v_isSharedCheck_1312_ = !lean_is_exclusive(v___x_1275_);
if (v_isSharedCheck_1312_ == 0)
{
v___x_1278_ = v___x_1275_;
v_isShared_1279_ = v_isSharedCheck_1312_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1275_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1312_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v___x_1280_; 
v___x_1280_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(v_a_1276_, v_e_1251_);
lean_dec(v_a_1276_);
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_object* v___x_1281_; 
lean_del_object(v___x_1278_);
lean_inc_ref(v_fn_1250_);
lean_inc(v___y_1257_);
lean_inc_ref(v___y_1256_);
lean_inc(v___y_1255_);
lean_inc_ref(v___y_1254_);
lean_inc(v___y_1253_);
lean_inc_ref(v_e_1251_);
v___x_1281_ = lean_apply_7(v_fn_1250_, v_e_1251_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_, lean_box(0));
if (lean_obj_tag(v___x_1281_) == 0)
{
lean_object* v_a_1282_; uint8_t v___x_1283_; 
v_a_1282_ = lean_ctor_get(v___x_1281_, 0);
lean_inc(v_a_1282_);
lean_dec_ref_known(v___x_1281_, 1);
v___x_1283_ = lean_unbox(v_a_1282_);
lean_dec(v_a_1282_);
if (v___x_1283_ == 0)
{
lean_object* v___x_1284_; 
lean_dec_ref(v_fn_1250_);
v___x_1284_ = lean_box(0);
v_a_1260_ = v___x_1284_;
goto v___jp_1259_;
}
else
{
switch(lean_obj_tag(v_e_1251_))
{
case 7:
{
lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___x_1285_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___boxed), 9, 1);
lean_closure_set(v___x_1285_, 0, v_fn_1250_);
lean_inc_ref(v_e_1251_);
v___x_1286_ = l_Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10(v___x_1285_, v_e_1251_, v_a_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
v___y_1272_ = v___x_1286_;
goto v___jp_1271_;
}
case 6:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1287_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___boxed), 9, 1);
lean_closure_set(v___x_1287_, 0, v_fn_1250_);
lean_inc_ref(v_e_1251_);
v___x_1288_ = l_Lean_Meta_visitLambda___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__11(v___x_1287_, v_e_1251_, v_a_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
v___y_1272_ = v___x_1288_;
goto v___jp_1271_;
}
case 8:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___boxed), 9, 1);
lean_closure_set(v___x_1289_, 0, v_fn_1250_);
lean_inc_ref(v_e_1251_);
v___x_1290_ = l_Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12(v___x_1289_, v_e_1251_, v_a_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
v___y_1272_ = v___x_1290_;
goto v___jp_1271_;
}
case 5:
{
lean_object* v_fn_1291_; lean_object* v_arg_1292_; lean_object* v___x_1293_; 
v_fn_1291_ = lean_ctor_get(v_e_1251_, 0);
v_arg_1292_ = lean_ctor_get(v_e_1251_, 1);
lean_inc_ref(v_fn_1291_);
lean_inc_ref(v_fn_1250_);
v___x_1293_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(v_fn_1250_, v_fn_1291_, v_a_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
if (lean_obj_tag(v___x_1293_) == 0)
{
lean_object* v___x_1294_; 
lean_dec_ref_known(v___x_1293_, 1);
lean_inc_ref(v_arg_1292_);
v___x_1294_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(v_fn_1250_, v_arg_1292_, v_a_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
v___y_1272_ = v___x_1294_;
goto v___jp_1271_;
}
else
{
lean_dec_ref(v_fn_1250_);
v___y_1272_ = v___x_1293_;
goto v___jp_1271_;
}
}
case 10:
{
lean_object* v_expr_1295_; lean_object* v___x_1296_; 
v_expr_1295_ = lean_ctor_get(v_e_1251_, 1);
lean_inc_ref(v_expr_1295_);
v___x_1296_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(v_fn_1250_, v_expr_1295_, v_a_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
v___y_1272_ = v___x_1296_;
goto v___jp_1271_;
}
case 11:
{
lean_object* v_struct_1297_; lean_object* v___x_1298_; 
v_struct_1297_ = lean_ctor_get(v_e_1251_, 2);
lean_inc_ref(v_struct_1297_);
v___x_1298_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(v_fn_1250_, v_struct_1297_, v_a_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
v___y_1272_ = v___x_1298_;
goto v___jp_1271_;
}
default: 
{
lean_object* v___x_1299_; 
lean_dec_ref(v_fn_1250_);
v___x_1299_ = lean_box(0);
v_a_1260_ = v___x_1299_;
goto v___jp_1259_;
}
}
}
}
else
{
lean_object* v_a_1300_; lean_object* v___x_1302_; uint8_t v_isShared_1303_; uint8_t v_isSharedCheck_1307_; 
lean_dec_ref(v_e_1251_);
lean_dec_ref(v_fn_1250_);
v_a_1300_ = lean_ctor_get(v___x_1281_, 0);
v_isSharedCheck_1307_ = !lean_is_exclusive(v___x_1281_);
if (v_isSharedCheck_1307_ == 0)
{
v___x_1302_ = v___x_1281_;
v_isShared_1303_ = v_isSharedCheck_1307_;
goto v_resetjp_1301_;
}
else
{
lean_inc(v_a_1300_);
lean_dec(v___x_1281_);
v___x_1302_ = lean_box(0);
v_isShared_1303_ = v_isSharedCheck_1307_;
goto v_resetjp_1301_;
}
v_resetjp_1301_:
{
lean_object* v___x_1305_; 
if (v_isShared_1303_ == 0)
{
v___x_1305_ = v___x_1302_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v_a_1300_);
v___x_1305_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
return v___x_1305_;
}
}
}
}
else
{
lean_object* v_val_1308_; lean_object* v___x_1310_; 
lean_dec_ref(v_e_1251_);
lean_dec_ref(v_fn_1250_);
v_val_1308_ = lean_ctor_get(v___x_1280_, 0);
lean_inc(v_val_1308_);
lean_dec_ref_known(v___x_1280_, 1);
if (v_isShared_1279_ == 0)
{
lean_ctor_set(v___x_1278_, 0, v_val_1308_);
v___x_1310_ = v___x_1278_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v_val_1308_);
v___x_1310_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
return v___x_1310_;
}
}
}
}
else
{
lean_object* v_a_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1320_; 
lean_dec_ref(v_e_1251_);
lean_dec_ref(v_fn_1250_);
v_a_1313_ = lean_ctor_get(v___x_1275_, 0);
v_isSharedCheck_1320_ = !lean_is_exclusive(v___x_1275_);
if (v_isSharedCheck_1320_ == 0)
{
v___x_1315_ = v___x_1275_;
v_isShared_1316_ = v_isSharedCheck_1320_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_a_1313_);
lean_dec(v___x_1275_);
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
v___jp_1259_:
{
lean_object* v___f_1261_; lean_object* v___x_1262_; 
lean_inc(v_a_1252_);
v___f_1261_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__1___boxed), 4, 3);
lean_closure_set(v___f_1261_, 0, v_a_1252_);
lean_closure_set(v___f_1261_, 1, v_e_1251_);
lean_closure_set(v___f_1261_, 2, v_a_1260_);
v___x_1262_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5___lam__0(lean_box(0), v___f_1261_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
if (lean_obj_tag(v___x_1262_) == 0)
{
lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1269_; 
v_isSharedCheck_1269_ = !lean_is_exclusive(v___x_1262_);
if (v_isSharedCheck_1269_ == 0)
{
lean_object* v_unused_1270_; 
v_unused_1270_ = lean_ctor_get(v___x_1262_, 0);
lean_dec(v_unused_1270_);
v___x_1264_ = v___x_1262_;
v_isShared_1265_ = v_isSharedCheck_1269_;
goto v_resetjp_1263_;
}
else
{
lean_dec(v___x_1262_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1269_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v___x_1267_; 
if (v_isShared_1265_ == 0)
{
lean_ctor_set(v___x_1264_, 0, v_a_1260_);
v___x_1267_ = v___x_1264_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v_a_1260_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
return v___x_1267_;
}
}
}
else
{
return v___x_1262_;
}
}
v___jp_1271_:
{
if (lean_obj_tag(v___y_1272_) == 0)
{
lean_object* v_a_1273_; 
v_a_1273_ = lean_ctor_get(v___y_1272_, 0);
lean_inc(v_a_1273_);
lean_dec_ref_known(v___y_1272_, 1);
v_a_1260_ = v_a_1273_;
goto v___jp_1259_;
}
else
{
lean_dec_ref(v_e_1251_);
return v___y_1272_;
}
}
}
}
static lean_object* _init_l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1321_ = lean_box(0);
v___x_1322_ = lean_unsigned_to_nat(16u);
v___x_1323_ = lean_mk_array(v___x_1322_, v___x_1321_);
return v___x_1323_;
}
}
static lean_object* _init_l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1324_ = lean_obj_once(&l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__0, &l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__0_once, _init_l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__0);
v___x_1325_ = lean_unsigned_to_nat(0u);
v___x_1326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1325_);
lean_ctor_set(v___x_1326_, 1, v___x_1324_);
return v___x_1326_;
}
}
static lean_object* _init_l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__2(void){
_start:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1327_ = lean_obj_once(&l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__1, &l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__1_once, _init_l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__1);
v___x_1328_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_1328_, 0, lean_box(0));
lean_closure_set(v___x_1328_, 1, lean_box(0));
lean_closure_set(v___x_1328_, 2, v___x_1327_);
return v___x_1328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2(lean_object* v_input_1329_, lean_object* v_fn_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_){
_start:
{
lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v_a_1339_; lean_object* v___x_1340_; 
v___x_1337_ = lean_obj_once(&l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__2, &l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__2_once, _init_l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___closed__2);
v___x_1338_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___lam__0(lean_box(0), v___x_1337_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_);
v_a_1339_ = lean_ctor_get(v___x_1338_, 0);
lean_inc(v_a_1339_);
lean_dec_ref(v___x_1338_);
v___x_1340_ = l___private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5(v_fn_1330_, v_input_1329_, v_a_1339_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_);
if (lean_obj_tag(v___x_1340_) == 0)
{
lean_object* v_a_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1350_; 
v_a_1341_ = lean_ctor_get(v___x_1340_, 0);
lean_inc(v_a_1341_);
lean_dec_ref_known(v___x_1340_, 1);
v___x_1342_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1342_, 0, lean_box(0));
lean_closure_set(v___x_1342_, 1, lean_box(0));
lean_closure_set(v___x_1342_, 2, v_a_1339_);
v___x_1343_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___lam__0(lean_box(0), v___x_1342_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1343_);
if (v_isSharedCheck_1350_ == 0)
{
lean_object* v_unused_1351_; 
v_unused_1351_ = lean_ctor_get(v___x_1343_, 0);
lean_dec(v_unused_1351_);
v___x_1345_ = v___x_1343_;
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
else
{
lean_dec(v___x_1343_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1348_; 
if (v_isShared_1346_ == 0)
{
lean_ctor_set(v___x_1345_, 0, v_a_1341_);
v___x_1348_ = v___x_1345_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_a_1341_);
v___x_1348_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
return v___x_1348_;
}
}
}
else
{
lean_dec(v_a_1339_);
return v___x_1340_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2___boxed(lean_object* v_input_1352_, lean_object* v_fn_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_){
_start:
{
lean_object* v_res_1360_; 
v_res_1360_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2(v_input_1352_, v_fn_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_);
lean_dec(v___y_1358_);
lean_dec_ref(v___y_1357_);
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
lean_dec(v___y_1354_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(lean_object* v_input_1361_, lean_object* v_fn_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_){
_start:
{
lean_object* v___f_1369_; lean_object* v___x_1370_; 
v___f_1369_ = lean_alloc_closure((void*)(l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1369_, 0, v_fn_1362_);
v___x_1370_ = l_Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2(v_input_1361_, v___f_1369_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_);
return v___x_1370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1___boxed(lean_object* v_input_1371_, lean_object* v_fn_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_){
_start:
{
lean_object* v_res_1379_; 
v_res_1379_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_input_1371_, v_fn_1372_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_);
lean_dec(v___y_1377_);
lean_dec_ref(v___y_1376_);
lean_dec(v___y_1375_);
lean_dec_ref(v___y_1374_);
lean_dec(v___y_1373_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__4(lean_object* v_fn_1380_, lean_object* v_x_1381_, lean_object* v_x_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_){
_start:
{
if (lean_obj_tag(v_x_1382_) == 0)
{
lean_object* v___x_1389_; 
lean_dec_ref(v_fn_1380_);
v___x_1389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1389_, 0, v_x_1381_);
return v___x_1389_;
}
else
{
lean_object* v_head_1390_; lean_object* v_tail_1391_; lean_object* v_type_1392_; lean_object* v___x_1393_; 
v_head_1390_ = lean_ctor_get(v_x_1382_, 0);
lean_inc(v_head_1390_);
v_tail_1391_ = lean_ctor_get(v_x_1382_, 1);
lean_inc(v_tail_1391_);
lean_dec_ref_known(v_x_1382_, 2);
v_type_1392_ = lean_ctor_get(v_head_1390_, 1);
lean_inc_ref(v_type_1392_);
lean_dec(v_head_1390_);
lean_inc_ref(v_fn_1380_);
v___x_1393_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_type_1392_, v_fn_1380_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_);
if (lean_obj_tag(v___x_1393_) == 0)
{
lean_object* v_a_1394_; 
v_a_1394_ = lean_ctor_get(v___x_1393_, 0);
lean_inc(v_a_1394_);
lean_dec_ref_known(v___x_1393_, 1);
v_x_1381_ = v_a_1394_;
v_x_1382_ = v_tail_1391_;
goto _start;
}
else
{
lean_dec(v_tail_1391_);
lean_dec_ref(v_fn_1380_);
return v___x_1393_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__4___boxed(lean_object* v_fn_1396_, lean_object* v_x_1397_, lean_object* v_x_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_){
_start:
{
lean_object* v_res_1405_; 
v_res_1405_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__4(v_fn_1396_, v_x_1397_, v_x_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_);
lean_dec(v___y_1403_);
lean_dec_ref(v___y_1402_);
lean_dec(v___y_1401_);
lean_dec_ref(v___y_1400_);
lean_dec(v___y_1399_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__6(lean_object* v_fn_1406_, lean_object* v_x_1407_, lean_object* v_x_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_){
_start:
{
if (lean_obj_tag(v_x_1408_) == 0)
{
lean_object* v___x_1415_; 
lean_dec_ref(v_fn_1406_);
v___x_1415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1415_, 0, v_x_1407_);
return v___x_1415_;
}
else
{
lean_object* v_head_1416_; lean_object* v_tail_1417_; lean_object* v___y_1419_; lean_object* v_type_1422_; lean_object* v_ctors_1423_; lean_object* v___x_1424_; 
v_head_1416_ = lean_ctor_get(v_x_1408_, 0);
lean_inc(v_head_1416_);
v_tail_1417_ = lean_ctor_get(v_x_1408_, 1);
lean_inc(v_tail_1417_);
lean_dec_ref_known(v_x_1408_, 2);
v_type_1422_ = lean_ctor_get(v_head_1416_, 1);
lean_inc_ref(v_type_1422_);
v_ctors_1423_ = lean_ctor_get(v_head_1416_, 2);
lean_inc(v_ctors_1423_);
lean_dec(v_head_1416_);
lean_inc_ref(v_fn_1406_);
v___x_1424_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_type_1422_, v_fn_1406_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
if (lean_obj_tag(v___x_1424_) == 0)
{
lean_object* v_a_1425_; lean_object* v___x_1426_; 
v_a_1425_ = lean_ctor_get(v___x_1424_, 0);
lean_inc(v_a_1425_);
lean_dec_ref_known(v___x_1424_, 1);
lean_inc_ref(v_fn_1406_);
v___x_1426_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__4(v_fn_1406_, v_a_1425_, v_ctors_1423_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
v___y_1419_ = v___x_1426_;
goto v___jp_1418_;
}
else
{
lean_dec(v_ctors_1423_);
v___y_1419_ = v___x_1424_;
goto v___jp_1418_;
}
v___jp_1418_:
{
if (lean_obj_tag(v___y_1419_) == 0)
{
lean_object* v_a_1420_; 
v_a_1420_ = lean_ctor_get(v___y_1419_, 0);
lean_inc(v_a_1420_);
lean_dec_ref_known(v___y_1419_, 1);
v_x_1407_ = v_a_1420_;
v_x_1408_ = v_tail_1417_;
goto _start;
}
else
{
lean_dec(v_tail_1417_);
lean_dec_ref(v_fn_1406_);
return v___y_1419_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__6___boxed(lean_object* v_fn_1427_, lean_object* v_x_1428_, lean_object* v_x_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_){
_start:
{
lean_object* v_res_1436_; 
v_res_1436_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__6(v_fn_1427_, v_x_1428_, v_x_1429_, v___y_1430_, v___y_1431_, v___y_1432_, v___y_1433_, v___y_1434_);
lean_dec(v___y_1434_);
lean_dec_ref(v___y_1433_);
lean_dec(v___y_1432_);
lean_dec_ref(v___y_1431_);
lean_dec(v___y_1430_);
return v_res_1436_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__5(lean_object* v_fn_1437_, lean_object* v_x_1438_, lean_object* v_x_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_){
_start:
{
if (lean_obj_tag(v_x_1439_) == 0)
{
lean_object* v___x_1446_; 
lean_dec_ref(v_fn_1437_);
v___x_1446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1446_, 0, v_x_1438_);
return v___x_1446_;
}
else
{
lean_object* v_head_1447_; lean_object* v_tail_1448_; lean_object* v___y_1450_; lean_object* v_toConstantVal_1453_; lean_object* v_value_1454_; lean_object* v_type_1455_; lean_object* v___x_1456_; 
v_head_1447_ = lean_ctor_get(v_x_1439_, 0);
lean_inc(v_head_1447_);
v_tail_1448_ = lean_ctor_get(v_x_1439_, 1);
lean_inc(v_tail_1448_);
lean_dec_ref_known(v_x_1439_, 2);
v_toConstantVal_1453_ = lean_ctor_get(v_head_1447_, 0);
lean_inc_ref(v_toConstantVal_1453_);
v_value_1454_ = lean_ctor_get(v_head_1447_, 1);
lean_inc_ref(v_value_1454_);
lean_dec(v_head_1447_);
v_type_1455_ = lean_ctor_get(v_toConstantVal_1453_, 2);
lean_inc_ref(v_type_1455_);
lean_dec_ref(v_toConstantVal_1453_);
lean_inc_ref(v_fn_1437_);
v___x_1456_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_type_1455_, v_fn_1437_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_);
if (lean_obj_tag(v___x_1456_) == 0)
{
lean_object* v___x_1457_; 
lean_dec_ref_known(v___x_1456_, 1);
lean_inc_ref(v_fn_1437_);
v___x_1457_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_value_1454_, v_fn_1437_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_);
v___y_1450_ = v___x_1457_;
goto v___jp_1449_;
}
else
{
lean_dec_ref(v_value_1454_);
v___y_1450_ = v___x_1456_;
goto v___jp_1449_;
}
v___jp_1449_:
{
if (lean_obj_tag(v___y_1450_) == 0)
{
lean_object* v_a_1451_; 
v_a_1451_ = lean_ctor_get(v___y_1450_, 0);
lean_inc(v_a_1451_);
lean_dec_ref_known(v___y_1450_, 1);
v_x_1438_ = v_a_1451_;
v_x_1439_ = v_tail_1448_;
goto _start;
}
else
{
lean_dec(v_tail_1448_);
lean_dec_ref(v_fn_1437_);
return v___y_1450_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__5___boxed(lean_object* v_fn_1458_, lean_object* v_x_1459_, lean_object* v_x_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_){
_start:
{
lean_object* v_res_1467_; 
v_res_1467_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__5(v_fn_1458_, v_x_1459_, v_x_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_);
lean_dec(v___y_1465_);
lean_dec_ref(v___y_1464_);
lean_dec(v___y_1463_);
lean_dec_ref(v___y_1462_);
lean_dec(v___y_1461_);
return v_res_1467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2(lean_object* v_fn_1468_, lean_object* v_d_1469_, lean_object* v_a_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_){
_start:
{
switch(lean_obj_tag(v_d_1469_))
{
case 0:
{
lean_object* v_val_1477_; lean_object* v_toConstantVal_1478_; lean_object* v_type_1479_; lean_object* v___x_1480_; 
v_val_1477_ = lean_ctor_get(v_d_1469_, 0);
lean_inc_ref(v_val_1477_);
lean_dec_ref_known(v_d_1469_, 1);
v_toConstantVal_1478_ = lean_ctor_get(v_val_1477_, 0);
lean_inc_ref(v_toConstantVal_1478_);
lean_dec_ref(v_val_1477_);
v_type_1479_ = lean_ctor_get(v_toConstantVal_1478_, 2);
lean_inc_ref(v_type_1479_);
lean_dec_ref(v_toConstantVal_1478_);
v___x_1480_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_type_1479_, v_fn_1468_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_);
return v___x_1480_;
}
case 4:
{
lean_object* v___x_1481_; 
lean_dec_ref(v_fn_1468_);
v___x_1481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1481_, 0, v_a_1470_);
return v___x_1481_;
}
case 5:
{
lean_object* v_defns_1482_; lean_object* v___x_1483_; 
v_defns_1482_ = lean_ctor_get(v_d_1469_, 0);
lean_inc(v_defns_1482_);
lean_dec_ref_known(v_d_1469_, 1);
v___x_1483_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__5(v_fn_1468_, v_a_1470_, v_defns_1482_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_);
return v___x_1483_;
}
case 6:
{
lean_object* v_types_1484_; lean_object* v___x_1485_; 
v_types_1484_ = lean_ctor_get(v_d_1469_, 2);
lean_inc(v_types_1484_);
lean_dec_ref_known(v_d_1469_, 3);
v___x_1485_ = l_List_foldlM___at___00Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2_spec__6(v_fn_1468_, v_a_1470_, v_types_1484_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_);
return v___x_1485_;
}
default: 
{
lean_object* v_val_1486_; lean_object* v_toConstantVal_1487_; lean_object* v_value_1488_; lean_object* v_type_1489_; lean_object* v___x_1490_; 
v_val_1486_ = lean_ctor_get(v_d_1469_, 0);
lean_inc_ref(v_val_1486_);
lean_dec(v_d_1469_);
v_toConstantVal_1487_ = lean_ctor_get(v_val_1486_, 0);
lean_inc_ref(v_toConstantVal_1487_);
v_value_1488_ = lean_ctor_get(v_val_1486_, 1);
lean_inc_ref(v_value_1488_);
lean_dec_ref(v_val_1486_);
v_type_1489_ = lean_ctor_get(v_toConstantVal_1487_, 2);
lean_inc_ref(v_type_1489_);
lean_dec_ref(v_toConstantVal_1487_);
lean_inc_ref(v_fn_1468_);
v___x_1490_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_type_1489_, v_fn_1468_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_);
if (lean_obj_tag(v___x_1490_) == 0)
{
lean_object* v___x_1491_; 
lean_dec_ref_known(v___x_1490_, 1);
v___x_1491_ = l_Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1(v_value_1488_, v_fn_1468_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_);
return v___x_1491_;
}
else
{
lean_dec_ref(v_value_1488_);
lean_dec_ref(v_fn_1468_);
return v___x_1490_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2___boxed(lean_object* v_fn_1492_, lean_object* v_d_1493_, lean_object* v_a_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = l_Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2(v_fn_1492_, v_d_1493_, v_a_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
lean_dec(v___y_1499_);
lean_dec_ref(v___y_1498_);
lean_dec(v___y_1497_);
lean_dec_ref(v___y_1496_);
lean_dec(v___y_1495_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1(lean_object* v_decl_1502_, lean_object* v_fn_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_){
_start:
{
lean_object* v___x_1510_; lean_object* v___x_1511_; 
v___x_1510_ = lean_box(0);
v___x_1511_ = l_Lean_Declaration_foldExprM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__2(v_fn_1503_, v_decl_1502_, v___x_1510_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_);
return v___x_1511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1___boxed(lean_object* v_decl_1512_, lean_object* v_fn_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_){
_start:
{
lean_object* v_res_1520_; 
v_res_1520_ = l_Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1(v_decl_1512_, v_fn_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
lean_dec(v___y_1518_);
lean_dec_ref(v___y_1517_);
lean_dec(v___y_1516_);
lean_dec_ref(v___y_1515_);
lean_dec(v___y_1514_);
return v_res_1520_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__2(void){
_start:
{
lean_object* v___x_1524_; lean_object* v___x_1525_; 
v___x_1524_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__0, &l_Lean_snapshotEnvLinterOptions___closed__0_once, _init_l_Lean_snapshotEnvLinterOptions___closed__0);
v___x_1525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1524_);
return v___x_1525_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__3(void){
_start:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; 
v___x_1526_ = lean_box(1);
v___x_1527_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3);
v___x_1528_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__2, &l_Lean_warnIfUsesSorry___closed__2_once, _init_l_Lean_warnIfUsesSorry___closed__2);
v___x_1529_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1529_, 0, v___x_1528_);
lean_ctor_set(v___x_1529_, 1, v___x_1527_);
lean_ctor_set(v___x_1529_, 2, v___x_1526_);
return v___x_1529_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__4(void){
_start:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1530_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__2, &l_Lean_warnIfUsesSorry___closed__2_once, _init_l_Lean_warnIfUsesSorry___closed__2);
v___x_1531_ = lean_unsigned_to_nat(0u);
v___x_1532_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1532_, 0, v___x_1531_);
lean_ctor_set(v___x_1532_, 1, v___x_1531_);
lean_ctor_set(v___x_1532_, 2, v___x_1531_);
lean_ctor_set(v___x_1532_, 3, v___x_1531_);
lean_ctor_set(v___x_1532_, 4, v___x_1530_);
lean_ctor_set(v___x_1532_, 5, v___x_1530_);
lean_ctor_set(v___x_1532_, 6, v___x_1530_);
lean_ctor_set(v___x_1532_, 7, v___x_1530_);
lean_ctor_set(v___x_1532_, 8, v___x_1530_);
lean_ctor_set(v___x_1532_, 9, v___x_1530_);
lean_ctor_set(v___x_1532_, 10, v___x_1530_);
return v___x_1532_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__5(void){
_start:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; 
v___x_1533_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__2, &l_Lean_warnIfUsesSorry___closed__2_once, _init_l_Lean_warnIfUsesSorry___closed__2);
v___x_1534_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1534_, 0, v___x_1533_);
lean_ctor_set(v___x_1534_, 1, v___x_1533_);
lean_ctor_set(v___x_1534_, 2, v___x_1533_);
lean_ctor_set(v___x_1534_, 3, v___x_1533_);
lean_ctor_set(v___x_1534_, 4, v___x_1533_);
lean_ctor_set(v___x_1534_, 5, v___x_1533_);
return v___x_1534_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__6(void){
_start:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1535_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__2, &l_Lean_warnIfUsesSorry___closed__2_once, _init_l_Lean_warnIfUsesSorry___closed__2);
v___x_1536_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1536_, 0, v___x_1535_);
lean_ctor_set(v___x_1536_, 1, v___x_1535_);
lean_ctor_set(v___x_1536_, 2, v___x_1535_);
lean_ctor_set(v___x_1536_, 3, v___x_1535_);
lean_ctor_set(v___x_1536_, 4, v___x_1535_);
return v___x_1536_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__7(void){
_start:
{
lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; 
v___x_1537_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__6, &l_Lean_warnIfUsesSorry___closed__6_once, _init_l_Lean_warnIfUsesSorry___closed__6);
v___x_1538_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12___closed__3);
v___x_1539_ = lean_box(1);
v___x_1540_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__5, &l_Lean_warnIfUsesSorry___closed__5_once, _init_l_Lean_warnIfUsesSorry___closed__5);
v___x_1541_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__4, &l_Lean_warnIfUsesSorry___closed__4_once, _init_l_Lean_warnIfUsesSorry___closed__4);
v___x_1542_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1542_, 0, v___x_1541_);
lean_ctor_set(v___x_1542_, 1, v___x_1540_);
lean_ctor_set(v___x_1542_, 2, v___x_1539_);
lean_ctor_set(v___x_1542_, 3, v___x_1538_);
lean_ctor_set(v___x_1542_, 4, v___x_1537_);
return v___x_1542_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__11(void){
_start:
{
lean_object* v___x_1547_; lean_object* v___x_1548_; 
v___x_1547_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__10));
v___x_1548_ = l_Lean_stringToMessageData(v___x_1547_);
return v___x_1548_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__13(void){
_start:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1550_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__12));
v___x_1551_ = l_Lean_stringToMessageData(v___x_1550_);
return v___x_1551_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__15(void){
_start:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; 
v___x_1553_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__14));
v___x_1554_ = l_Lean_stringToMessageData(v___x_1553_);
return v___x_1554_;
}
}
static lean_object* _init_l_Lean_warnIfUsesSorry___closed__16(void){
_start:
{
lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; 
v___x_1555_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__15, &l_Lean_warnIfUsesSorry___closed__15_once, _init_l_Lean_warnIfUsesSorry___closed__15);
v___x_1556_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__9));
v___x_1557_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1557_, 0, v___x_1556_);
lean_ctor_set(v___x_1557_, 1, v___x_1555_);
return v___x_1557_;
}
}
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry(lean_object* v_decl_1561_, lean_object* v_a_1562_, lean_object* v_a_1563_){
_start:
{
lean_object* v_toCold_1565_; lean_object* v_options_1566_; lean_object* v___x_1567_; uint8_t v___x_1568_; 
v_toCold_1565_ = lean_ctor_get(v_a_1562_, 0);
v_options_1566_ = lean_ctor_get(v_toCold_1565_, 2);
v___x_1567_ = l_Lean_warn_sorry;
v___x_1568_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_options_1566_, v___x_1567_);
if (v___x_1568_ == 0)
{
lean_object* v___x_1569_; lean_object* v___x_1570_; 
lean_dec(v_decl_1561_);
v___x_1569_ = lean_box(0);
v___x_1570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1570_, 0, v___x_1569_);
return v___x_1570_;
}
else
{
lean_object* v___f_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v_messages_1577_; uint8_t v___x_1578_; 
v___f_1571_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__0));
v___x_1572_ = lean_box(1);
v___x_1573_ = lean_st_ref_get(v_a_1563_);
v_messages_1577_ = lean_ctor_get(v___x_1573_, 6);
lean_inc_ref(v_messages_1577_);
lean_dec(v___x_1573_);
v___x_1578_ = l_Lean_MessageLog_hasErrors(v_messages_1577_);
lean_dec_ref(v_messages_1577_);
if (v___x_1578_ == 0)
{
if (v___x_1568_ == 0)
{
lean_dec(v_decl_1561_);
goto v___jp_1574_;
}
else
{
uint8_t v___x_1579_; 
v___x_1579_ = l_Lean_Declaration_hasSorry(v_decl_1561_);
if (v___x_1579_ == 0)
{
lean_dec(v_decl_1561_);
goto v___jp_1574_;
}
else
{
lean_object* v___x_1580_; lean_object* v___x_1581_; uint8_t v___x_1582_; uint8_t v___x_1583_; uint8_t v___x_1584_; lean_object* v___x_1585_; uint64_t v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; 
v___x_1580_ = lean_unsigned_to_nat(0u);
v___x_1581_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__1));
v___x_1582_ = 1;
v___x_1583_ = 0;
v___x_1584_ = 2;
v___x_1585_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_1585_, 0, v___x_1578_);
lean_ctor_set_uint8(v___x_1585_, 1, v___x_1578_);
lean_ctor_set_uint8(v___x_1585_, 2, v___x_1578_);
lean_ctor_set_uint8(v___x_1585_, 3, v___x_1578_);
lean_ctor_set_uint8(v___x_1585_, 4, v___x_1578_);
lean_ctor_set_uint8(v___x_1585_, 5, v___x_1579_);
lean_ctor_set_uint8(v___x_1585_, 6, v___x_1579_);
lean_ctor_set_uint8(v___x_1585_, 7, v___x_1578_);
lean_ctor_set_uint8(v___x_1585_, 8, v___x_1579_);
lean_ctor_set_uint8(v___x_1585_, 9, v___x_1582_);
lean_ctor_set_uint8(v___x_1585_, 10, v___x_1583_);
lean_ctor_set_uint8(v___x_1585_, 11, v___x_1579_);
lean_ctor_set_uint8(v___x_1585_, 12, v___x_1579_);
lean_ctor_set_uint8(v___x_1585_, 13, v___x_1579_);
lean_ctor_set_uint8(v___x_1585_, 14, v___x_1584_);
lean_ctor_set_uint8(v___x_1585_, 15, v___x_1579_);
lean_ctor_set_uint8(v___x_1585_, 16, v___x_1579_);
lean_ctor_set_uint8(v___x_1585_, 17, v___x_1579_);
lean_ctor_set_uint8(v___x_1585_, 18, v___x_1579_);
lean_ctor_set_uint8(v___x_1585_, 19, v___x_1578_);
v___x_1586_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1585_);
v___x_1587_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1587_, 0, v___x_1585_);
lean_ctor_set_uint64(v___x_1587_, sizeof(void*)*1, v___x_1586_);
v___x_1588_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__3, &l_Lean_warnIfUsesSorry___closed__3_once, _init_l_Lean_warnIfUsesSorry___closed__3);
v___x_1589_ = lean_box(0);
v___x_1590_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1590_, 0, v___x_1587_);
lean_ctor_set(v___x_1590_, 1, v___x_1572_);
lean_ctor_set(v___x_1590_, 2, v___x_1588_);
lean_ctor_set(v___x_1590_, 3, v___x_1581_);
lean_ctor_set(v___x_1590_, 4, v___x_1589_);
lean_ctor_set(v___x_1590_, 5, v___x_1580_);
lean_ctor_set(v___x_1590_, 6, v___x_1589_);
lean_ctor_set_uint8(v___x_1590_, sizeof(void*)*7, v___x_1578_);
lean_ctor_set_uint8(v___x_1590_, sizeof(void*)*7 + 1, v___x_1578_);
lean_ctor_set_uint8(v___x_1590_, sizeof(void*)*7 + 2, v___x_1578_);
lean_ctor_set_uint8(v___x_1590_, sizeof(void*)*7 + 3, v___x_1568_);
v___x_1591_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__7, &l_Lean_warnIfUsesSorry___closed__7_once, _init_l_Lean_warnIfUsesSorry___closed__7);
v___x_1592_ = lean_st_mk_ref(v___x_1591_);
v___x_1593_ = lean_st_mk_ref(v___x_1581_);
v___x_1594_ = l_Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1(v_decl_1561_, v___f_1571_, v___x_1593_, v___x_1590_, v___x_1592_, v_a_1562_, v_a_1563_);
lean_dec_ref_known(v___x_1590_, 7);
if (lean_obj_tag(v___x_1594_) == 0)
{
lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v_val_1598_; lean_object* v___x_1620_; size_t v_sz_1621_; size_t v___x_1622_; lean_object* v___x_1623_; lean_object* v_fst_1624_; 
lean_dec_ref_known(v___x_1594_, 1);
v___x_1595_ = lean_st_ref_get(v___x_1593_);
lean_dec(v___x_1593_);
v___x_1596_ = lean_st_ref_get(v___x_1592_);
lean_dec(v___x_1592_);
lean_dec(v___x_1596_);
v___x_1620_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__17));
v_sz_1621_ = lean_array_size(v___x_1595_);
v___x_1622_ = ((size_t)0ULL);
v___x_1623_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_warnIfUsesSorry_spec__3(v___x_1595_, v_sz_1621_, v___x_1622_, v___x_1620_);
v_fst_1624_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_fst_1624_);
lean_dec_ref(v___x_1623_);
if (lean_obj_tag(v_fst_1624_) == 0)
{
goto v___jp_1614_;
}
else
{
lean_object* v_val_1625_; 
v_val_1625_ = lean_ctor_get(v_fst_1624_, 0);
lean_inc(v_val_1625_);
lean_dec_ref_known(v_fst_1624_, 1);
if (lean_obj_tag(v_val_1625_) == 0)
{
goto v___jp_1614_;
}
else
{
lean_object* v_val_1626_; 
lean_dec(v___x_1595_);
v_val_1626_ = lean_ctor_get(v_val_1625_, 0);
lean_inc(v_val_1626_);
lean_dec_ref_known(v_val_1625_, 1);
v_val_1598_ = v_val_1626_;
goto v___jp_1597_;
}
}
v___jp_1597_:
{
lean_object* v_snd_1599_; lean_object* v___x_1601_; uint8_t v_isShared_1602_; uint8_t v_isSharedCheck_1612_; 
v_snd_1599_ = lean_ctor_get(v_val_1598_, 1);
v_isSharedCheck_1612_ = !lean_is_exclusive(v_val_1598_);
if (v_isSharedCheck_1612_ == 0)
{
lean_object* v_unused_1613_; 
v_unused_1613_ = lean_ctor_get(v_val_1598_, 0);
lean_dec(v_unused_1613_);
v___x_1601_ = v_val_1598_;
v_isShared_1602_ = v_isSharedCheck_1612_;
goto v_resetjp_1600_;
}
else
{
lean_inc(v_snd_1599_);
lean_dec(v_val_1598_);
v___x_1601_ = lean_box(0);
v_isShared_1602_ = v_isSharedCheck_1612_;
goto v_resetjp_1600_;
}
v_resetjp_1600_:
{
lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1606_; 
v___x_1603_ = ((lean_object*)(l_Lean_warnIfUsesSorry___closed__9));
v___x_1604_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__11, &l_Lean_warnIfUsesSorry___closed__11_once, _init_l_Lean_warnIfUsesSorry___closed__11);
if (v_isShared_1602_ == 0)
{
lean_ctor_set_tag(v___x_1601_, 7);
lean_ctor_set(v___x_1601_, 0, v___x_1604_);
v___x_1606_ = v___x_1601_;
goto v_reusejp_1605_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v___x_1604_);
lean_ctor_set(v_reuseFailAlloc_1611_, 1, v_snd_1599_);
v___x_1606_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1605_;
}
v_reusejp_1605_:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; 
v___x_1607_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__13, &l_Lean_warnIfUsesSorry___closed__13_once, _init_l_Lean_warnIfUsesSorry___closed__13);
v___x_1608_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1606_);
lean_ctor_set(v___x_1608_, 1, v___x_1607_);
v___x_1609_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1609_, 0, v___x_1603_);
lean_ctor_set(v___x_1609_, 1, v___x_1608_);
v___x_1610_ = l_Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2(v___x_1609_, v_a_1562_, v_a_1563_);
return v___x_1610_;
}
}
}
v___jp_1614_:
{
lean_object* v___x_1615_; uint8_t v___x_1616_; 
v___x_1615_ = lean_array_get_size(v___x_1595_);
v___x_1616_ = lean_nat_dec_lt(v___x_1580_, v___x_1615_);
if (v___x_1616_ == 0)
{
lean_object* v___x_1617_; lean_object* v___x_1618_; 
lean_dec(v___x_1595_);
v___x_1617_ = lean_obj_once(&l_Lean_warnIfUsesSorry___closed__16, &l_Lean_warnIfUsesSorry___closed__16_once, _init_l_Lean_warnIfUsesSorry___closed__16);
v___x_1618_ = l_Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2(v___x_1617_, v_a_1562_, v_a_1563_);
return v___x_1618_;
}
else
{
lean_object* v___x_1619_; 
v___x_1619_ = lean_array_fget(v___x_1595_, v___x_1580_);
lean_dec(v___x_1595_);
v_val_1598_ = v___x_1619_;
goto v___jp_1597_;
}
}
}
else
{
lean_dec(v___x_1593_);
lean_dec(v___x_1592_);
return v___x_1594_;
}
}
}
}
else
{
lean_dec(v_decl_1561_);
goto v___jp_1574_;
}
v___jp_1574_:
{
lean_object* v___x_1575_; lean_object* v___x_1576_; 
v___x_1575_ = lean_box(0);
v___x_1576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1575_);
return v___x_1576_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_warnIfUsesSorry___boxed(lean_object* v_decl_1627_, lean_object* v_a_1628_, lean_object* v_a_1629_, lean_object* v_a_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = l_Lean_warnIfUsesSorry(v_decl_1627_, v_a_1628_, v_a_1629_);
lean_dec(v_a_1629_);
lean_dec_ref(v_a_1628_);
return v_res_1631_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8(lean_object* v_00_u03b2_1632_, lean_object* v_m_1633_, lean_object* v_a_1634_){
_start:
{
lean_object* v___x_1635_; 
v___x_1635_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___redArg(v_m_1633_, v_a_1634_);
return v___x_1635_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8___boxed(lean_object* v_00_u03b2_1636_, lean_object* v_m_1637_, lean_object* v_a_1638_){
_start:
{
lean_object* v_res_1639_; 
v_res_1639_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8(v_00_u03b2_1636_, v_m_1637_, v_a_1638_);
lean_dec_ref(v_a_1638_);
lean_dec_ref(v_m_1637_);
return v_res_1639_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9(lean_object* v_00_u03b2_1640_, lean_object* v_m_1641_, lean_object* v_a_1642_, lean_object* v_b_1643_){
_start:
{
lean_object* v___x_1644_; 
v___x_1644_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9___redArg(v_m_1641_, v_a_1642_, v_b_1643_);
return v___x_1644_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14(lean_object* v_00_u03b2_1645_, lean_object* v_a_1646_, lean_object* v_x_1647_){
_start:
{
lean_object* v___x_1648_; 
v___x_1648_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___redArg(v_a_1646_, v_x_1647_);
return v___x_1648_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14___boxed(lean_object* v_00_u03b2_1649_, lean_object* v_a_1650_, lean_object* v_x_1651_){
_start:
{
lean_object* v_res_1652_; 
v_res_1652_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__8_spec__14(v_00_u03b2_1649_, v_a_1650_, v_x_1651_);
lean_dec(v_x_1651_);
lean_dec_ref(v_a_1650_);
return v_res_1652_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16(lean_object* v_00_u03b2_1653_, lean_object* v_a_1654_, lean_object* v_x_1655_){
_start:
{
uint8_t v___x_1656_; 
v___x_1656_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___redArg(v_a_1654_, v_x_1655_);
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16___boxed(lean_object* v_00_u03b2_1657_, lean_object* v_a_1658_, lean_object* v_x_1659_){
_start:
{
uint8_t v_res_1660_; lean_object* v_r_1661_; 
v_res_1660_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__16(v_00_u03b2_1657_, v_a_1658_, v_x_1659_);
lean_dec(v_x_1659_);
lean_dec_ref(v_a_1658_);
v_r_1661_ = lean_box(v_res_1660_);
return v_r_1661_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17(lean_object* v_00_u03b2_1662_, lean_object* v_data_1663_){
_start:
{
lean_object* v___x_1664_; 
v___x_1664_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17___redArg(v_data_1663_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__18(lean_object* v_00_u03b2_1665_, lean_object* v_a_1666_, lean_object* v_b_1667_, lean_object* v_x_1668_){
_start:
{
lean_object* v___x_1669_; 
v___x_1669_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__18___redArg(v_a_1666_, v_b_1667_, v_x_1668_);
return v___x_1669_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22(lean_object* v_00_u03b1_1670_, lean_object* v_name_1671_, uint8_t v_bi_1672_, lean_object* v_type_1673_, lean_object* v_k_1674_, uint8_t v_kind_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_){
_start:
{
lean_object* v___x_1683_; 
v___x_1683_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___redArg(v_name_1671_, v_bi_1672_, v_type_1673_, v_k_1674_, v_kind_1675_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_);
return v___x_1683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22___boxed(lean_object* v_00_u03b1_1684_, lean_object* v_name_1685_, lean_object* v_bi_1686_, lean_object* v_type_1687_, lean_object* v_k_1688_, lean_object* v_kind_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_){
_start:
{
uint8_t v_bi_boxed_1697_; uint8_t v_kind_boxed_1698_; lean_object* v_res_1699_; 
v_bi_boxed_1697_ = lean_unbox(v_bi_1686_);
v_kind_boxed_1698_ = lean_unbox(v_kind_1689_);
v_res_1699_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitForall_visit___at___00Lean_Meta_visitForall___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__10_spec__20_spec__22(v_00_u03b1_1684_, v_name_1685_, v_bi_boxed_1697_, v_type_1687_, v_k_1688_, v_kind_boxed_1698_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_);
lean_dec(v___y_1695_);
lean_dec_ref(v___y_1694_);
lean_dec(v___y_1693_);
lean_dec_ref(v___y_1692_);
lean_dec(v___y_1691_);
lean_dec(v___y_1690_);
return v_res_1699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27(lean_object* v_00_u03b1_1700_, lean_object* v_name_1701_, lean_object* v_type_1702_, lean_object* v_val_1703_, lean_object* v_k_1704_, uint8_t v_nondep_1705_, uint8_t v_kind_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_){
_start:
{
lean_object* v___x_1714_; 
v___x_1714_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___redArg(v_name_1701_, v_type_1702_, v_val_1703_, v_k_1704_, v_nondep_1705_, v_kind_1706_, v___y_1707_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_);
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27___boxed(lean_object* v_00_u03b1_1715_, lean_object* v_name_1716_, lean_object* v_type_1717_, lean_object* v_val_1718_, lean_object* v_k_1719_, lean_object* v_nondep_1720_, lean_object* v_kind_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_){
_start:
{
uint8_t v_nondep_boxed_1729_; uint8_t v_kind_boxed_1730_; lean_object* v_res_1731_; 
v_nondep_boxed_1729_ = lean_unbox(v_nondep_1720_);
v_kind_boxed_1730_ = lean_unbox(v_kind_1721_);
v_res_1731_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_visitLet_visit___at___00Lean_Meta_visitLet___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__12_spec__24_spec__27(v_00_u03b1_1715_, v_name_1716_, v_type_1717_, v_val_1718_, v_k_1719_, v_nondep_boxed_1729_, v_kind_boxed_1730_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_);
lean_dec(v___y_1727_);
lean_dec_ref(v___y_1726_);
lean_dec(v___y_1725_);
lean_dec_ref(v___y_1724_);
lean_dec(v___y_1723_);
lean_dec(v___y_1722_);
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18(lean_object* v_00_u03b2_1732_, lean_object* v_i_1733_, lean_object* v_source_1734_, lean_object* v_target_1735_){
_start:
{
lean_object* v___x_1736_; 
v___x_1736_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18___redArg(v_i_1733_, v_source_1734_, v_target_1735_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18_spec__22(lean_object* v_00_u03b2_1737_, lean_object* v_x_1738_, lean_object* v_x_1739_){
_start:
{
lean_object* v___x_1740_; 
v___x_1740_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00Lean_Meta_forEachSorryM___at___00Lean_Declaration_forEachSorryM___at___00Lean_warnIfUsesSorry_spec__1_spec__1_spec__2_spec__5_spec__9_spec__17_spec__18_spec__22___redArg(v_x_1738_, v_x_1739_);
return v___x_1740_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; 
v___x_1745_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__2_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_));
v___x_1746_ = lean_obj_once(&l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg___closed__0, &l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg___closed__0);
v___x_1747_ = l_Lean_Name_str___override(v___x_1746_, v___x_1745_);
return v___x_1747_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; 
v___x_1748_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_));
v___x_1749_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_, &l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once, _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__3_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_);
v___x_1750_ = l_Lean_Name_str___override(v___x_1749_, v___x_1748_);
return v___x_1750_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; 
v___x_1752_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_));
v___x_1753_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_, &l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once, _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__4_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_);
v___x_1754_ = l_Lean_Name_str___override(v___x_1753_, v___x_1752_);
return v___x_1754_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__7_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; 
v___x_1755_ = lean_unsigned_to_nat(0u);
v___x_1756_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_, &l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once, _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__6_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_);
v___x_1757_ = l_Lean_Name_num___override(v___x_1756_, v___x_1755_);
return v___x_1757_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__8_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; 
v___x_1758_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_));
v___x_1759_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_initFn___closed__7_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_, &l___private_Lean_AddDecl_0__Lean_initFn___closed__7_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once, _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__7_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_);
v___x_1760_ = l_Lean_Name_str___override(v___x_1759_, v___x_1758_);
return v___x_1760_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__10_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; 
v___x_1762_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__9_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_));
v___x_1763_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_initFn___closed__8_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_, &l___private_Lean_AddDecl_0__Lean_initFn___closed__8_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once, _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__8_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_);
v___x_1764_ = l_Lean_Name_str___override(v___x_1763_, v___x_1762_);
return v___x_1764_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__12_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
v___x_1766_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__11_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_));
v___x_1767_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_initFn___closed__10_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_, &l___private_Lean_AddDecl_0__Lean_initFn___closed__10_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once, _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__10_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_);
v___x_1768_ = l_Lean_Name_str___override(v___x_1767_, v___x_1766_);
return v___x_1768_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__13_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; 
v___x_1769_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_));
v___x_1770_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_initFn___closed__12_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_, &l___private_Lean_AddDecl_0__Lean_initFn___closed__12_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once, _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__12_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_);
v___x_1771_ = l_Lean_Name_str___override(v___x_1770_, v___x_1769_);
return v___x_1771_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__14_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; 
v___x_1772_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__5_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_));
v___x_1773_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_initFn___closed__13_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_, &l___private_Lean_AddDecl_0__Lean_initFn___closed__13_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once, _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__13_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_);
v___x_1774_ = l_Lean_Name_str___override(v___x_1773_, v___x_1772_);
return v___x_1774_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__15_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v___x_1775_ = lean_unsigned_to_nat(337188874u);
v___x_1776_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_initFn___closed__14_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_, &l___private_Lean_AddDecl_0__Lean_initFn___closed__14_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once, _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__14_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_);
v___x_1777_ = l_Lean_Name_num___override(v___x_1776_, v___x_1775_);
return v___x_1777_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__17_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; 
v___x_1779_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__16_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_));
v___x_1780_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_initFn___closed__15_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_, &l___private_Lean_AddDecl_0__Lean_initFn___closed__15_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once, _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__15_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_);
v___x_1781_ = l_Lean_Name_str___override(v___x_1780_, v___x_1779_);
return v___x_1781_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__19_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; 
v___x_1783_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__18_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_));
v___x_1784_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_initFn___closed__17_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_, &l___private_Lean_AddDecl_0__Lean_initFn___closed__17_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once, _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__17_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_);
v___x_1785_ = l_Lean_Name_str___override(v___x_1784_, v___x_1783_);
return v___x_1785_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__20_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; 
v___x_1786_ = lean_unsigned_to_nat(2u);
v___x_1787_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_initFn___closed__19_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_, &l___private_Lean_AddDecl_0__Lean_initFn___closed__19_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once, _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__19_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_);
v___x_1788_ = l_Lean_Name_num___override(v___x_1787_, v___x_1786_);
return v___x_1788_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1790_; uint8_t v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1790_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_));
v___x_1791_ = 0;
v___x_1792_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_initFn___closed__20_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_, &l___private_Lean_AddDecl_0__Lean_initFn___closed__20_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once, _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__20_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_);
v___x_1793_ = l_Lean_registerTraceClass(v___x_1790_, v___x_1791_, v___x_1792_);
return v___x_1793_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2____boxed(lean_object* v_a_1794_){
_start:
{
lean_object* v_res_1795_; 
v_res_1795_ = l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_();
return v_res_1795_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(lean_object* v_env_1796_, lean_object* v___y_1797_){
_start:
{
lean_object* v___x_1799_; lean_object* v_nextMacroScope_1800_; lean_object* v_ngen_1801_; lean_object* v_auxDeclNGen_1802_; lean_object* v_traceState_1803_; lean_object* v_messages_1804_; lean_object* v_infoState_1805_; lean_object* v_snapshotTasks_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1817_; 
v___x_1799_ = lean_st_ref_take(v___y_1797_);
v_nextMacroScope_1800_ = lean_ctor_get(v___x_1799_, 1);
v_ngen_1801_ = lean_ctor_get(v___x_1799_, 2);
v_auxDeclNGen_1802_ = lean_ctor_get(v___x_1799_, 3);
v_traceState_1803_ = lean_ctor_get(v___x_1799_, 4);
v_messages_1804_ = lean_ctor_get(v___x_1799_, 6);
v_infoState_1805_ = lean_ctor_get(v___x_1799_, 7);
v_snapshotTasks_1806_ = lean_ctor_get(v___x_1799_, 8);
v_isSharedCheck_1817_ = !lean_is_exclusive(v___x_1799_);
if (v_isSharedCheck_1817_ == 0)
{
lean_object* v_unused_1818_; lean_object* v_unused_1819_; 
v_unused_1818_ = lean_ctor_get(v___x_1799_, 5);
lean_dec(v_unused_1818_);
v_unused_1819_ = lean_ctor_get(v___x_1799_, 0);
lean_dec(v_unused_1819_);
v___x_1808_ = v___x_1799_;
v_isShared_1809_ = v_isSharedCheck_1817_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_snapshotTasks_1806_);
lean_inc(v_infoState_1805_);
lean_inc(v_messages_1804_);
lean_inc(v_traceState_1803_);
lean_inc(v_auxDeclNGen_1802_);
lean_inc(v_ngen_1801_);
lean_inc(v_nextMacroScope_1800_);
lean_dec(v___x_1799_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1817_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1813_; 
v___x_1810_ = lean_box(0);
v___x_1811_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_1809_ == 0)
{
lean_ctor_set(v___x_1808_, 5, v___x_1811_);
lean_ctor_set(v___x_1808_, 0, v_env_1796_);
v___x_1813_ = v___x_1808_;
goto v_reusejp_1812_;
}
else
{
lean_object* v_reuseFailAlloc_1816_; 
v_reuseFailAlloc_1816_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1816_, 0, v_env_1796_);
lean_ctor_set(v_reuseFailAlloc_1816_, 1, v_nextMacroScope_1800_);
lean_ctor_set(v_reuseFailAlloc_1816_, 2, v_ngen_1801_);
lean_ctor_set(v_reuseFailAlloc_1816_, 3, v_auxDeclNGen_1802_);
lean_ctor_set(v_reuseFailAlloc_1816_, 4, v_traceState_1803_);
lean_ctor_set(v_reuseFailAlloc_1816_, 5, v___x_1811_);
lean_ctor_set(v_reuseFailAlloc_1816_, 6, v_messages_1804_);
lean_ctor_set(v_reuseFailAlloc_1816_, 7, v_infoState_1805_);
lean_ctor_set(v_reuseFailAlloc_1816_, 8, v_snapshotTasks_1806_);
v___x_1813_ = v_reuseFailAlloc_1816_;
goto v_reusejp_1812_;
}
v_reusejp_1812_:
{
lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___x_1814_ = lean_st_ref_put(v___y_1797_, v___x_1813_);
v___x_1815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1815_, 0, v___x_1810_);
return v___x_1815_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg___boxed(lean_object* v_env_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_){
_start:
{
lean_object* v_res_1823_; 
v_res_1823_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_env_1820_, v___y_1821_);
lean_dec(v___y_1821_);
return v_res_1823_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1(lean_object* v_env_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_){
_start:
{
lean_object* v___x_1828_; 
v___x_1828_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_env_1824_, v___y_1826_);
return v___x_1828_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___boxed(lean_object* v_env_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_){
_start:
{
lean_object* v_res_1833_; 
v_res_1833_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1(v_env_1829_, v___y_1830_, v___y_1831_);
lean_dec(v___y_1831_);
lean_dec_ref(v___y_1830_);
return v_res_1833_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; 
v___x_1834_ = lean_box(0);
v___x_1835_ = l_Lean_interruptExceptionId;
v___x_1836_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1836_, 0, v___x_1835_);
lean_ctor_set(v___x_1836_, 1, v___x_1834_);
return v___x_1836_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg(){
_start:
{
lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___x_1838_ = lean_obj_once(&l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___closed__0, &l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___closed__0);
v___x_1839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1839_, 0, v___x_1838_);
return v___x_1839_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v___y_1840_){
_start:
{
lean_object* v_res_1841_; 
v_res_1841_ = l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg();
return v_res_1841_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___redArg(lean_object* v_msg_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_){
_start:
{
lean_object* v_ref_1846_; lean_object* v___x_1847_; lean_object* v_a_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1856_; 
v_ref_1846_ = lean_ctor_get(v___y_1843_, 2);
v___x_1847_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12(v_msg_1842_, v___y_1843_, v___y_1844_);
v_a_1848_ = lean_ctor_get(v___x_1847_, 0);
v_isSharedCheck_1856_ = !lean_is_exclusive(v___x_1847_);
if (v_isSharedCheck_1856_ == 0)
{
v___x_1850_ = v___x_1847_;
v_isShared_1851_ = v_isSharedCheck_1856_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_a_1848_);
lean_dec(v___x_1847_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1856_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v___x_1852_; lean_object* v___x_1854_; 
lean_inc(v_ref_1846_);
v___x_1852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1852_, 0, v_ref_1846_);
lean_ctor_set(v___x_1852_, 1, v_a_1848_);
if (v_isShared_1851_ == 0)
{
lean_ctor_set_tag(v___x_1850_, 1);
lean_ctor_set(v___x_1850_, 0, v___x_1852_);
v___x_1854_ = v___x_1850_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v___x_1852_);
v___x_1854_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
return v___x_1854_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_msg_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_){
_start:
{
lean_object* v_res_1861_; 
v_res_1861_ = l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___redArg(v_msg_1857_, v___y_1858_, v___y_1859_);
lean_dec(v___y_1859_);
lean_dec_ref(v___y_1858_);
return v_res_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(lean_object* v_ex_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_){
_start:
{
lean_object* v___y_1867_; lean_object* v___y_1868_; 
if (lean_obj_tag(v_ex_1862_) == 16)
{
lean_object* v___x_1873_; lean_object* v_a_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1881_; 
v___x_1873_ = l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg();
v_a_1874_ = lean_ctor_get(v___x_1873_, 0);
v_isSharedCheck_1881_ = !lean_is_exclusive(v___x_1873_);
if (v_isSharedCheck_1881_ == 0)
{
v___x_1876_ = v___x_1873_;
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_a_1874_);
lean_dec(v___x_1873_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1879_; 
if (v_isShared_1877_ == 0)
{
v___x_1879_ = v___x_1876_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v_a_1874_);
v___x_1879_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
return v___x_1879_;
}
}
}
else
{
v___y_1867_ = v___y_1863_;
v___y_1868_ = v___y_1864_;
goto v___jp_1866_;
}
v___jp_1866_:
{
lean_object* v_toCold_1869_; lean_object* v_options_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; 
v_toCold_1869_ = lean_ctor_get(v___y_1867_, 0);
v_options_1870_ = lean_ctor_get(v_toCold_1869_, 2);
lean_inc_ref(v_options_1870_);
v___x_1871_ = l_Lean_Kernel_Exception_toMessageData(v_ex_1862_, v_options_1870_);
v___x_1872_ = l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___redArg(v___x_1871_, v___y_1867_, v___y_1868_);
return v___x_1872_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg___boxed(lean_object* v_ex_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_){
_start:
{
lean_object* v_res_1886_; 
v_res_1886_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(v_ex_1882_, v___y_1883_, v___y_1884_);
lean_dec(v___y_1884_);
lean_dec_ref(v___y_1883_);
return v_res_1886_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(lean_object* v_x_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_){
_start:
{
if (lean_obj_tag(v_x_1887_) == 0)
{
lean_object* v_a_1891_; lean_object* v___x_1892_; 
v_a_1891_ = lean_ctor_get(v_x_1887_, 0);
lean_inc(v_a_1891_);
lean_dec_ref_known(v_x_1887_, 1);
v___x_1892_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(v_a_1891_, v___y_1888_, v___y_1889_);
return v___x_1892_;
}
else
{
lean_object* v_a_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1900_; 
v_a_1893_ = lean_ctor_get(v_x_1887_, 0);
v_isSharedCheck_1900_ = !lean_is_exclusive(v_x_1887_);
if (v_isSharedCheck_1900_ == 0)
{
v___x_1895_ = v_x_1887_;
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_a_1893_);
lean_dec(v_x_1887_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v___x_1898_; 
if (v_isShared_1896_ == 0)
{
lean_ctor_set_tag(v___x_1895_, 0);
v___x_1898_ = v___x_1895_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v_a_1893_);
v___x_1898_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
return v___x_1898_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg___boxed(lean_object* v_x_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_){
_start:
{
lean_object* v_res_1905_; 
v_res_1905_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v_x_1901_, v___y_1902_, v___y_1903_);
lean_dec(v___y_1903_);
lean_dec_ref(v___y_1902_);
return v_res_1905_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_1912_; lean_object* v___x_1913_; 
v___x_1912_ = lean_unsigned_to_nat(1u);
v___x_1913_ = l_Lean_Level_ofNat(v___x_1912_);
return v___x_1913_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; 
v___x_1914_ = lean_box(0);
v___x_1915_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__3, &l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__3_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__3);
v___x_1916_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1916_, 0, v___x_1915_);
lean_ctor_set(v___x_1916_, 1, v___x_1914_);
return v___x_1916_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v___x_1917_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__4, &l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__4);
v___x_1918_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__2));
v___x_1919_ = l_Lean_mkConst(v___x_1918_, v___x_1917_);
return v___x_1919_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__6(void){
_start:
{
lean_object* v___x_1920_; lean_object* v___x_1921_; 
v___x_1920_ = lean_unsigned_to_nat(0u);
v___x_1921_ = l_Lean_Level_ofNat(v___x_1920_);
return v___x_1921_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__7(void){
_start:
{
lean_object* v___x_1922_; lean_object* v___x_1923_; 
v___x_1922_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__6);
v___x_1923_ = l_Lean_mkSort(v___x_1922_);
return v___x_1923_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__11(void){
_start:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; 
v___x_1929_ = lean_box(0);
v___x_1930_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__10));
v___x_1931_ = l_Lean_mkConst(v___x_1930_, v___x_1929_);
return v___x_1931_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__12(void){
_start:
{
lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
v___x_1932_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__11, &l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__11_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__11);
v___x_1933_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__7, &l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__7_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__7);
v___x_1934_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__5, &l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__5_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__5);
v___x_1935_ = l_Lean_mkAppB(v___x_1934_, v___x_1933_, v___x_1932_);
return v___x_1935_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg(lean_object* v_as_x27_1941_, lean_object* v_b_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_){
_start:
{
if (lean_obj_tag(v_as_x27_1941_) == 0)
{
lean_object* v___x_1946_; 
v___x_1946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1946_, 0, v_b_1942_);
return v___x_1946_;
}
else
{
lean_object* v_head_1947_; lean_object* v_tail_1948_; lean_object* v___x_1949_; lean_object* v___y_1951_; uint8_t v___y_1952_; lean_object* v_a_1956_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; uint8_t v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v_toCold_1966_; lean_object* v_env_1967_; lean_object* v_options_1968_; lean_object* v_cancelTk_x3f_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
lean_dec_ref(v_b_1942_);
v_head_1947_ = lean_ctor_get(v_as_x27_1941_, 0);
v_tail_1948_ = lean_ctor_get(v_as_x27_1941_, 1);
v___x_1949_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__0));
v___x_1959_ = lean_box(0);
v___x_1960_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__12, &l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__12_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__12);
lean_inc(v_head_1947_);
v___x_1961_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1961_, 0, v_head_1947_);
lean_ctor_set(v___x_1961_, 1, v___x_1959_);
lean_ctor_set(v___x_1961_, 2, v___x_1960_);
v___x_1962_ = 0;
v___x_1963_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1963_, 0, v___x_1961_);
lean_ctor_set_uint8(v___x_1963_, sizeof(void*)*1, v___x_1962_);
v___x_1964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1964_, 0, v___x_1963_);
v___x_1965_ = lean_st_ref_get(v___y_1944_);
v_toCold_1966_ = lean_ctor_get(v___y_1943_, 0);
v_env_1967_ = lean_ctor_get(v___x_1965_, 0);
lean_inc_ref(v_env_1967_);
lean_dec(v___x_1965_);
v_options_1968_ = lean_ctor_get(v_toCold_1966_, 2);
v_cancelTk_x3f_1969_ = lean_ctor_get(v_toCold_1966_, 10);
v___x_1970_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_1967_, v_options_1968_, v___x_1964_, v_cancelTk_x3f_1969_);
lean_dec_ref_known(v___x_1964_, 1);
v___x_1971_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v___x_1970_, v___y_1943_, v___y_1944_);
if (lean_obj_tag(v___x_1971_) == 0)
{
lean_object* v_a_1972_; lean_object* v___x_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1981_; 
v_a_1972_ = lean_ctor_get(v___x_1971_, 0);
lean_inc(v_a_1972_);
lean_dec_ref_known(v___x_1971_, 1);
v___x_1973_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_a_1972_, v___y_1944_);
v_isSharedCheck_1981_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_1981_ == 0)
{
lean_object* v_unused_1982_; 
v_unused_1982_ = lean_ctor_get(v___x_1973_, 0);
lean_dec(v_unused_1982_);
v___x_1975_ = v___x_1973_;
v_isShared_1976_ = v_isSharedCheck_1981_;
goto v_resetjp_1974_;
}
else
{
lean_dec(v___x_1973_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_1981_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
lean_object* v___x_1977_; lean_object* v___x_1979_; 
v___x_1977_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__14));
if (v_isShared_1976_ == 0)
{
lean_ctor_set(v___x_1975_, 0, v___x_1977_);
v___x_1979_ = v___x_1975_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1980_; 
v_reuseFailAlloc_1980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1980_, 0, v___x_1977_);
v___x_1979_ = v_reuseFailAlloc_1980_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
return v___x_1979_;
}
}
}
else
{
lean_object* v_a_1983_; 
v_a_1983_ = lean_ctor_get(v___x_1971_, 0);
lean_inc(v_a_1983_);
lean_dec_ref_known(v___x_1971_, 1);
v_a_1956_ = v_a_1983_;
goto v___jp_1955_;
}
v___jp_1950_:
{
if (v___y_1952_ == 0)
{
lean_dec_ref(v___y_1951_);
v_as_x27_1941_ = v_tail_1948_;
v_b_1942_ = v___x_1949_;
goto _start;
}
else
{
lean_object* v___x_1954_; 
v___x_1954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1954_, 0, v___y_1951_);
return v___x_1954_;
}
}
v___jp_1955_:
{
uint8_t v___x_1957_; 
v___x_1957_ = l_Lean_Exception_isInterrupt(v_a_1956_);
if (v___x_1957_ == 0)
{
uint8_t v___x_1958_; 
lean_inc_ref(v_a_1956_);
v___x_1958_ = l_Lean_Exception_isRuntime(v_a_1956_);
v___y_1951_ = v_a_1956_;
v___y_1952_ = v___x_1958_;
goto v___jp_1950_;
}
else
{
v___y_1951_ = v_a_1956_;
v___y_1952_ = v___x_1957_;
goto v___jp_1950_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___boxed(lean_object* v_as_x27_1984_, lean_object* v_b_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_){
_start:
{
lean_object* v_res_1989_; 
v_res_1989_ = l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg(v_as_x27_1984_, v_b_1985_, v___y_1986_, v___y_1987_);
lean_dec(v___y_1987_);
lean_dec_ref(v___y_1986_);
lean_dec(v_as_x27_1984_);
return v_res_1989_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom(lean_object* v_decl_1990_, lean_object* v_a_1991_, lean_object* v_a_1992_){
_start:
{
lean_object* v___y_1995_; lean_object* v___y_1996_; lean_object* v___y_2023_; uint8_t v___y_2024_; lean_object* v_a_2027_; lean_object* v___y_2031_; uint8_t v___y_2032_; lean_object* v_a_2035_; 
switch(lean_obj_tag(v_decl_1990_))
{
case 1:
{
lean_object* v_val_2038_; lean_object* v_toConstantVal_2039_; uint8_t v___x_2040_; lean_object* v___x_2041_; lean_object* v_fallbackDecl_2042_; lean_object* v___x_2043_; lean_object* v_toCold_2044_; lean_object* v_env_2045_; lean_object* v_options_2046_; lean_object* v_cancelTk_x3f_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; 
v_val_2038_ = lean_ctor_get(v_decl_1990_, 0);
v_toConstantVal_2039_ = lean_ctor_get(v_val_2038_, 0);
v___x_2040_ = 0;
lean_inc_ref(v_toConstantVal_2039_);
v___x_2041_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2041_, 0, v_toConstantVal_2039_);
lean_ctor_set_uint8(v___x_2041_, sizeof(void*)*1, v___x_2040_);
v_fallbackDecl_2042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_fallbackDecl_2042_, 0, v___x_2041_);
v___x_2043_ = lean_st_ref_get(v_a_1992_);
v_toCold_2044_ = lean_ctor_get(v_a_1991_, 0);
v_env_2045_ = lean_ctor_get(v___x_2043_, 0);
lean_inc_ref(v_env_2045_);
lean_dec(v___x_2043_);
v_options_2046_ = lean_ctor_get(v_toCold_2044_, 2);
v_cancelTk_x3f_2047_ = lean_ctor_get(v_toCold_2044_, 10);
v___x_2048_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_2045_, v_options_2046_, v_fallbackDecl_2042_, v_cancelTk_x3f_2047_);
lean_dec_ref_known(v_fallbackDecl_2042_, 1);
v___x_2049_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v___x_2048_, v_a_1991_, v_a_1992_);
if (lean_obj_tag(v___x_2049_) == 0)
{
lean_object* v_a_2050_; lean_object* v___x_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2059_; 
lean_dec_ref_known(v_decl_1990_, 1);
v_a_2050_ = lean_ctor_get(v___x_2049_, 0);
lean_inc(v_a_2050_);
lean_dec_ref_known(v___x_2049_, 1);
v___x_2051_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_a_2050_, v_a_1992_);
v_isSharedCheck_2059_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2059_ == 0)
{
lean_object* v_unused_2060_; 
v_unused_2060_ = lean_ctor_get(v___x_2051_, 0);
lean_dec(v_unused_2060_);
v___x_2053_ = v___x_2051_;
v_isShared_2054_ = v_isSharedCheck_2059_;
goto v_resetjp_2052_;
}
else
{
lean_dec(v___x_2051_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2059_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2055_; lean_object* v___x_2057_; 
v___x_2055_ = lean_box(0);
if (v_isShared_2054_ == 0)
{
lean_ctor_set(v___x_2053_, 0, v___x_2055_);
v___x_2057_ = v___x_2053_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v___x_2055_);
v___x_2057_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
return v___x_2057_;
}
}
}
else
{
lean_object* v_a_2061_; 
v_a_2061_ = lean_ctor_get(v___x_2049_, 0);
lean_inc(v_a_2061_);
lean_dec_ref_known(v___x_2049_, 1);
v_a_2027_ = v_a_2061_;
goto v___jp_2026_;
}
}
case 2:
{
lean_object* v_val_2062_; lean_object* v_toConstantVal_2063_; uint8_t v___x_2064_; lean_object* v___x_2065_; lean_object* v_fallbackDecl_2066_; lean_object* v___x_2067_; lean_object* v_toCold_2068_; lean_object* v_env_2069_; lean_object* v_options_2070_; lean_object* v_cancelTk_x3f_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; 
v_val_2062_ = lean_ctor_get(v_decl_1990_, 0);
v_toConstantVal_2063_ = lean_ctor_get(v_val_2062_, 0);
v___x_2064_ = 0;
lean_inc_ref(v_toConstantVal_2063_);
v___x_2065_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2065_, 0, v_toConstantVal_2063_);
lean_ctor_set_uint8(v___x_2065_, sizeof(void*)*1, v___x_2064_);
v_fallbackDecl_2066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_fallbackDecl_2066_, 0, v___x_2065_);
v___x_2067_ = lean_st_ref_get(v_a_1992_);
v_toCold_2068_ = lean_ctor_get(v_a_1991_, 0);
v_env_2069_ = lean_ctor_get(v___x_2067_, 0);
lean_inc_ref(v_env_2069_);
lean_dec(v___x_2067_);
v_options_2070_ = lean_ctor_get(v_toCold_2068_, 2);
v_cancelTk_x3f_2071_ = lean_ctor_get(v_toCold_2068_, 10);
v___x_2072_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_2069_, v_options_2070_, v_fallbackDecl_2066_, v_cancelTk_x3f_2071_);
lean_dec_ref_known(v_fallbackDecl_2066_, 1);
v___x_2073_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v___x_2072_, v_a_1991_, v_a_1992_);
if (lean_obj_tag(v___x_2073_) == 0)
{
lean_object* v_a_2074_; lean_object* v___x_2075_; lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2083_; 
lean_dec_ref_known(v_decl_1990_, 1);
v_a_2074_ = lean_ctor_get(v___x_2073_, 0);
lean_inc(v_a_2074_);
lean_dec_ref_known(v___x_2073_, 1);
v___x_2075_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_a_2074_, v_a_1992_);
v_isSharedCheck_2083_ = !lean_is_exclusive(v___x_2075_);
if (v_isSharedCheck_2083_ == 0)
{
lean_object* v_unused_2084_; 
v_unused_2084_ = lean_ctor_get(v___x_2075_, 0);
lean_dec(v_unused_2084_);
v___x_2077_ = v___x_2075_;
v_isShared_2078_ = v_isSharedCheck_2083_;
goto v_resetjp_2076_;
}
else
{
lean_dec(v___x_2075_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2083_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v___x_2079_; lean_object* v___x_2081_; 
v___x_2079_ = lean_box(0);
if (v_isShared_2078_ == 0)
{
lean_ctor_set(v___x_2077_, 0, v___x_2079_);
v___x_2081_ = v___x_2077_;
goto v_reusejp_2080_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v___x_2079_);
v___x_2081_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2080_;
}
v_reusejp_2080_:
{
return v___x_2081_;
}
}
}
else
{
lean_object* v_a_2085_; 
v_a_2085_ = lean_ctor_get(v___x_2073_, 0);
lean_inc(v_a_2085_);
lean_dec_ref_known(v___x_2073_, 1);
v_a_2035_ = v_a_2085_;
goto v___jp_2034_;
}
}
default: 
{
v___y_1995_ = v_a_1991_;
v___y_1996_ = v_a_1992_;
goto v___jp_1994_;
}
}
v___jp_1994_:
{
lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; 
v___x_1997_ = l_Lean_Declaration_getNames(v_decl_1990_);
v___x_1998_ = lean_box(0);
v___x_1999_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg___closed__0));
v___x_2000_ = l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg(v___x_1997_, v___x_1999_, v___y_1995_, v___y_1996_);
lean_dec(v___x_1997_);
if (lean_obj_tag(v___x_2000_) == 0)
{
lean_object* v_a_2001_; lean_object* v___x_2003_; uint8_t v_isShared_2004_; uint8_t v_isSharedCheck_2013_; 
v_a_2001_ = lean_ctor_get(v___x_2000_, 0);
v_isSharedCheck_2013_ = !lean_is_exclusive(v___x_2000_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2003_ = v___x_2000_;
v_isShared_2004_ = v_isSharedCheck_2013_;
goto v_resetjp_2002_;
}
else
{
lean_inc(v_a_2001_);
lean_dec(v___x_2000_);
v___x_2003_ = lean_box(0);
v_isShared_2004_ = v_isSharedCheck_2013_;
goto v_resetjp_2002_;
}
v_resetjp_2002_:
{
lean_object* v_fst_2005_; 
v_fst_2005_ = lean_ctor_get(v_a_2001_, 0);
lean_inc(v_fst_2005_);
lean_dec(v_a_2001_);
if (lean_obj_tag(v_fst_2005_) == 0)
{
lean_object* v___x_2007_; 
if (v_isShared_2004_ == 0)
{
lean_ctor_set(v___x_2003_, 0, v___x_1998_);
v___x_2007_ = v___x_2003_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v___x_1998_);
v___x_2007_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
return v___x_2007_;
}
}
else
{
lean_object* v_val_2009_; lean_object* v___x_2011_; 
v_val_2009_ = lean_ctor_get(v_fst_2005_, 0);
lean_inc(v_val_2009_);
lean_dec_ref_known(v_fst_2005_, 1);
if (v_isShared_2004_ == 0)
{
lean_ctor_set(v___x_2003_, 0, v_val_2009_);
v___x_2011_ = v___x_2003_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_val_2009_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
}
}
else
{
lean_object* v_a_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2021_; 
v_a_2014_ = lean_ctor_get(v___x_2000_, 0);
v_isSharedCheck_2021_ = !lean_is_exclusive(v___x_2000_);
if (v_isSharedCheck_2021_ == 0)
{
v___x_2016_ = v___x_2000_;
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_a_2014_);
lean_dec(v___x_2000_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v___x_2019_; 
if (v_isShared_2017_ == 0)
{
v___x_2019_ = v___x_2016_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v_a_2014_);
v___x_2019_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
return v___x_2019_;
}
}
}
}
v___jp_2022_:
{
if (v___y_2024_ == 0)
{
lean_dec_ref(v___y_2023_);
v___y_1995_ = v_a_1991_;
v___y_1996_ = v_a_1992_;
goto v___jp_1994_;
}
else
{
lean_object* v___x_2025_; 
lean_dec(v_decl_1990_);
v___x_2025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2025_, 0, v___y_2023_);
return v___x_2025_;
}
}
v___jp_2026_:
{
uint8_t v___x_2028_; 
v___x_2028_ = l_Lean_Exception_isInterrupt(v_a_2027_);
if (v___x_2028_ == 0)
{
uint8_t v___x_2029_; 
lean_inc_ref(v_a_2027_);
v___x_2029_ = l_Lean_Exception_isRuntime(v_a_2027_);
v___y_2023_ = v_a_2027_;
v___y_2024_ = v___x_2029_;
goto v___jp_2022_;
}
else
{
v___y_2023_ = v_a_2027_;
v___y_2024_ = v___x_2028_;
goto v___jp_2022_;
}
}
v___jp_2030_:
{
if (v___y_2032_ == 0)
{
lean_dec_ref(v___y_2031_);
v___y_1995_ = v_a_1991_;
v___y_1996_ = v_a_1992_;
goto v___jp_1994_;
}
else
{
lean_object* v___x_2033_; 
lean_dec(v_decl_1990_);
v___x_2033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2033_, 0, v___y_2031_);
return v___x_2033_;
}
}
v___jp_2034_:
{
uint8_t v___x_2036_; 
v___x_2036_ = l_Lean_Exception_isInterrupt(v_a_2035_);
if (v___x_2036_ == 0)
{
uint8_t v___x_2037_; 
lean_inc_ref(v_a_2035_);
v___x_2037_ = l_Lean_Exception_isRuntime(v_a_2035_);
v___y_2031_ = v_a_2035_;
v___y_2032_ = v___x_2037_;
goto v___jp_2030_;
}
else
{
v___y_2031_ = v_a_2035_;
v___y_2032_ = v___x_2036_;
goto v___jp_2030_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom___boxed(lean_object* v_decl_2086_, lean_object* v_a_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_){
_start:
{
lean_object* v_res_2090_; 
v_res_2090_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom(v_decl_2086_, v_a_2087_, v_a_2088_);
lean_dec(v_a_2088_);
lean_dec_ref(v_a_2087_);
return v_res_2090_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0(lean_object* v_00_u03b1_2091_, lean_object* v_x_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_){
_start:
{
lean_object* v___x_2096_; 
v___x_2096_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v_x_2092_, v___y_2093_, v___y_2094_);
return v___x_2096_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___boxed(lean_object* v_00_u03b1_2097_, lean_object* v_x_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_){
_start:
{
lean_object* v_res_2102_; 
v_res_2102_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0(v_00_u03b1_2097_, v_x_2098_, v___y_2099_, v___y_2100_);
lean_dec(v___y_2100_);
lean_dec_ref(v___y_2099_);
return v_res_2102_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2(lean_object* v_as_2103_, lean_object* v_as_x27_2104_, lean_object* v_b_2105_, lean_object* v_a_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_){
_start:
{
lean_object* v___x_2110_; 
v___x_2110_ = l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___redArg(v_as_x27_2104_, v_b_2105_, v___y_2107_, v___y_2108_);
return v___x_2110_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2___boxed(lean_object* v_as_2111_, lean_object* v_as_x27_2112_, lean_object* v_b_2113_, lean_object* v_a_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_){
_start:
{
lean_object* v_res_2118_; 
v_res_2118_ = l_List_forIn_x27_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__2(v_as_2111_, v_as_x27_2112_, v_b_2113_, v_a_2114_, v___y_2115_, v___y_2116_);
lean_dec(v___y_2116_);
lean_dec_ref(v___y_2115_);
lean_dec(v_as_x27_2112_);
lean_dec(v_as_2111_);
return v_res_2118_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3(lean_object* v_00_u03b1_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_){
_start:
{
lean_object* v___x_2123_; 
v___x_2123_ = l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___redArg();
return v___x_2123_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b1_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_){
_start:
{
lean_object* v_res_2128_; 
v_res_2128_ = l_Lean_throwInterruptException___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__3(v_00_u03b1_2124_, v___y_2125_, v___y_2126_);
lean_dec(v___y_2126_);
lean_dec_ref(v___y_2125_);
return v_res_2128_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0(lean_object* v_00_u03b1_2129_, lean_object* v_ex_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_){
_start:
{
lean_object* v___x_2134_; 
v___x_2134_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(v_ex_2130_, v___y_2131_, v___y_2132_);
return v___x_2134_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2135_, lean_object* v_ex_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_){
_start:
{
lean_object* v_res_2140_; 
v_res_2140_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0(v_00_u03b1_2135_, v_ex_2136_, v___y_2137_, v___y_2138_);
lean_dec(v___y_2138_);
lean_dec_ref(v___y_2137_);
return v_res_2140_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_2141_, lean_object* v_msg_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_){
_start:
{
lean_object* v___x_2146_; 
v___x_2146_ = l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___redArg(v_msg_2142_, v___y_2143_, v___y_2144_);
return v___x_2146_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_2147_, lean_object* v_msg_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_){
_start:
{
lean_object* v_res_2152_; 
v_res_2152_ = l_Lean_throwError___at___00Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0_spec__2(v_00_u03b1_2147_, v_msg_2148_, v___y_2149_, v___y_2150_);
lean_dec(v___y_2150_);
lean_dec_ref(v___y_2149_);
return v_res_2152_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; 
v___x_2153_ = lean_unsigned_to_nat(32u);
v___x_2154_ = lean_mk_empty_array_with_capacity(v___x_2153_);
v___x_2155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2155_, 0, v___x_2154_);
return v___x_2155_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
v___x_2156_ = ((size_t)5ULL);
v___x_2157_ = lean_unsigned_to_nat(0u);
v___x_2158_ = lean_unsigned_to_nat(32u);
v___x_2159_ = lean_mk_empty_array_with_capacity(v___x_2158_);
v___x_2160_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__0);
v___x_2161_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2161_, 0, v___x_2160_);
lean_ctor_set(v___x_2161_, 1, v___x_2159_);
lean_ctor_set(v___x_2161_, 2, v___x_2157_);
lean_ctor_set(v___x_2161_, 3, v___x_2157_);
lean_ctor_set_usize(v___x_2161_, 4, v___x_2156_);
return v___x_2161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg(lean_object* v___y_2162_){
_start:
{
lean_object* v___x_2164_; lean_object* v_traceState_2165_; lean_object* v_traces_2166_; lean_object* v___x_2167_; lean_object* v_traceState_2168_; lean_object* v_env_2169_; lean_object* v_nextMacroScope_2170_; lean_object* v_ngen_2171_; lean_object* v_auxDeclNGen_2172_; lean_object* v_cache_2173_; lean_object* v_messages_2174_; lean_object* v_infoState_2175_; lean_object* v_snapshotTasks_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2195_; 
v___x_2164_ = lean_st_ref_get(v___y_2162_);
v_traceState_2165_ = lean_ctor_get(v___x_2164_, 4);
lean_inc_ref(v_traceState_2165_);
lean_dec(v___x_2164_);
v_traces_2166_ = lean_ctor_get(v_traceState_2165_, 0);
lean_inc_ref(v_traces_2166_);
lean_dec_ref(v_traceState_2165_);
v___x_2167_ = lean_st_ref_take(v___y_2162_);
v_traceState_2168_ = lean_ctor_get(v___x_2167_, 4);
v_env_2169_ = lean_ctor_get(v___x_2167_, 0);
v_nextMacroScope_2170_ = lean_ctor_get(v___x_2167_, 1);
v_ngen_2171_ = lean_ctor_get(v___x_2167_, 2);
v_auxDeclNGen_2172_ = lean_ctor_get(v___x_2167_, 3);
v_cache_2173_ = lean_ctor_get(v___x_2167_, 5);
v_messages_2174_ = lean_ctor_get(v___x_2167_, 6);
v_infoState_2175_ = lean_ctor_get(v___x_2167_, 7);
v_snapshotTasks_2176_ = lean_ctor_get(v___x_2167_, 8);
v_isSharedCheck_2195_ = !lean_is_exclusive(v___x_2167_);
if (v_isSharedCheck_2195_ == 0)
{
v___x_2178_ = v___x_2167_;
v_isShared_2179_ = v_isSharedCheck_2195_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_snapshotTasks_2176_);
lean_inc(v_infoState_2175_);
lean_inc(v_messages_2174_);
lean_inc(v_cache_2173_);
lean_inc(v_traceState_2168_);
lean_inc(v_auxDeclNGen_2172_);
lean_inc(v_ngen_2171_);
lean_inc(v_nextMacroScope_2170_);
lean_inc(v_env_2169_);
lean_dec(v___x_2167_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2195_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
uint64_t v_tid_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2193_; 
v_tid_2180_ = lean_ctor_get_uint64(v_traceState_2168_, sizeof(void*)*1);
v_isSharedCheck_2193_ = !lean_is_exclusive(v_traceState_2168_);
if (v_isSharedCheck_2193_ == 0)
{
lean_object* v_unused_2194_; 
v_unused_2194_ = lean_ctor_get(v_traceState_2168_, 0);
lean_dec(v_unused_2194_);
v___x_2182_ = v_traceState_2168_;
v_isShared_2183_ = v_isSharedCheck_2193_;
goto v_resetjp_2181_;
}
else
{
lean_dec(v_traceState_2168_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2193_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2184_; lean_object* v___x_2186_; 
v___x_2184_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___closed__1);
if (v_isShared_2183_ == 0)
{
lean_ctor_set(v___x_2182_, 0, v___x_2184_);
v___x_2186_ = v___x_2182_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v___x_2184_);
lean_ctor_set_uint64(v_reuseFailAlloc_2192_, sizeof(void*)*1, v_tid_2180_);
v___x_2186_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
lean_object* v___x_2188_; 
if (v_isShared_2179_ == 0)
{
lean_ctor_set(v___x_2178_, 4, v___x_2186_);
v___x_2188_ = v___x_2178_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2191_; 
v_reuseFailAlloc_2191_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2191_, 0, v_env_2169_);
lean_ctor_set(v_reuseFailAlloc_2191_, 1, v_nextMacroScope_2170_);
lean_ctor_set(v_reuseFailAlloc_2191_, 2, v_ngen_2171_);
lean_ctor_set(v_reuseFailAlloc_2191_, 3, v_auxDeclNGen_2172_);
lean_ctor_set(v_reuseFailAlloc_2191_, 4, v___x_2186_);
lean_ctor_set(v_reuseFailAlloc_2191_, 5, v_cache_2173_);
lean_ctor_set(v_reuseFailAlloc_2191_, 6, v_messages_2174_);
lean_ctor_set(v_reuseFailAlloc_2191_, 7, v_infoState_2175_);
lean_ctor_set(v_reuseFailAlloc_2191_, 8, v_snapshotTasks_2176_);
v___x_2188_ = v_reuseFailAlloc_2191_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
lean_object* v___x_2189_; lean_object* v___x_2190_; 
v___x_2189_ = lean_st_ref_put(v___y_2162_, v___x_2188_);
v___x_2190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2190_, 0, v_traces_2166_);
return v___x_2190_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg___boxed(lean_object* v___y_2196_, lean_object* v___y_2197_){
_start:
{
lean_object* v_res_2198_; 
v_res_2198_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg(v___y_2196_);
lean_dec(v___y_2196_);
return v_res_2198_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1(lean_object* v___y_2199_, lean_object* v___y_2200_){
_start:
{
lean_object* v___x_2202_; 
v___x_2202_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg(v___y_2200_);
return v___x_2202_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___boxed(lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_){
_start:
{
lean_object* v_res_2206_; 
v_res_2206_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1(v___y_2203_, v___y_2204_);
lean_dec(v___y_2204_);
lean_dec_ref(v___y_2203_);
return v_res_2206_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___redArg(lean_object* v_category_2207_, lean_object* v_opts_2208_, lean_object* v_act_2209_, lean_object* v_decl_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_){
_start:
{
lean_object* v___x_2214_; lean_object* v___x_2215_; 
lean_inc(v___y_2212_);
lean_inc_ref(v___y_2211_);
v___x_2214_ = lean_apply_2(v_act_2209_, v___y_2211_, v___y_2212_);
v___x_2215_ = l_Lean_profileitIOUnsafe___redArg(v_category_2207_, v_opts_2208_, v___x_2214_, v_decl_2210_);
return v___x_2215_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___redArg___boxed(lean_object* v_category_2216_, lean_object* v_opts_2217_, lean_object* v_act_2218_, lean_object* v_decl_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_){
_start:
{
lean_object* v_res_2223_; 
v_res_2223_ = l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___redArg(v_category_2216_, v_opts_2217_, v_act_2218_, v_decl_2219_, v___y_2220_, v___y_2221_);
lean_dec(v___y_2221_);
lean_dec_ref(v___y_2220_);
lean_dec_ref(v_opts_2217_);
lean_dec_ref(v_category_2216_);
return v_res_2223_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3(lean_object* v_00_u03b1_2224_, lean_object* v_category_2225_, lean_object* v_opts_2226_, lean_object* v_act_2227_, lean_object* v_decl_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_){
_start:
{
lean_object* v___x_2232_; 
v___x_2232_ = l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___redArg(v_category_2225_, v_opts_2226_, v_act_2227_, v_decl_2228_, v___y_2229_, v___y_2230_);
return v___x_2232_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___boxed(lean_object* v_00_u03b1_2233_, lean_object* v_category_2234_, lean_object* v_opts_2235_, lean_object* v_act_2236_, lean_object* v_decl_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_){
_start:
{
lean_object* v_res_2241_; 
v_res_2241_ = l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3(v_00_u03b1_2233_, v_category_2234_, v_opts_2235_, v_act_2236_, v_decl_2237_, v___y_2238_, v___y_2239_);
lean_dec(v___y_2239_);
lean_dec_ref(v___y_2238_);
lean_dec_ref(v_opts_2235_);
lean_dec_ref(v_category_2234_);
return v_res_2241_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__0(lean_object* v_a_2242_, lean_object* v_a_2243_){
_start:
{
if (lean_obj_tag(v_a_2242_) == 0)
{
lean_object* v___x_2244_; 
v___x_2244_ = l_List_reverse___redArg(v_a_2243_);
return v___x_2244_;
}
else
{
lean_object* v_head_2245_; lean_object* v_tail_2246_; lean_object* v___x_2248_; uint8_t v_isShared_2249_; uint8_t v_isSharedCheck_2255_; 
v_head_2245_ = lean_ctor_get(v_a_2242_, 0);
v_tail_2246_ = lean_ctor_get(v_a_2242_, 1);
v_isSharedCheck_2255_ = !lean_is_exclusive(v_a_2242_);
if (v_isSharedCheck_2255_ == 0)
{
v___x_2248_ = v_a_2242_;
v_isShared_2249_ = v_isSharedCheck_2255_;
goto v_resetjp_2247_;
}
else
{
lean_inc(v_tail_2246_);
lean_inc(v_head_2245_);
lean_dec(v_a_2242_);
v___x_2248_ = lean_box(0);
v_isShared_2249_ = v_isSharedCheck_2255_;
goto v_resetjp_2247_;
}
v_resetjp_2247_:
{
lean_object* v___x_2250_; lean_object* v___x_2252_; 
v___x_2250_ = l_Lean_MessageData_ofName(v_head_2245_);
if (v_isShared_2249_ == 0)
{
lean_ctor_set(v___x_2248_, 1, v_a_2243_);
lean_ctor_set(v___x_2248_, 0, v___x_2250_);
v___x_2252_ = v___x_2248_;
goto v_reusejp_2251_;
}
else
{
lean_object* v_reuseFailAlloc_2254_; 
v_reuseFailAlloc_2254_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2254_, 0, v___x_2250_);
lean_ctor_set(v_reuseFailAlloc_2254_, 1, v_a_2243_);
v___x_2252_ = v_reuseFailAlloc_2254_;
goto v_reusejp_2251_;
}
v_reusejp_2251_:
{
v_a_2242_ = v_tail_2246_;
v_a_2243_ = v___x_2252_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2257_; lean_object* v___x_2258_; 
v___x_2257_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__0));
v___x_2258_ = l_Lean_stringToMessageData(v___x_2257_);
return v___x_2258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0(lean_object* v_decl_2259_, lean_object* v_x_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_){
_start:
{
lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; 
v___x_2264_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___closed__1);
v___x_2265_ = l_Lean_Declaration_getTopLevelNames(v_decl_2259_);
v___x_2266_ = lean_box(0);
v___x_2267_ = l_List_mapTR_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__0(v___x_2265_, v___x_2266_);
v___x_2268_ = l_Lean_MessageData_ofList(v___x_2267_);
v___x_2269_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2269_, 0, v___x_2264_);
lean_ctor_set(v___x_2269_, 1, v___x_2268_);
v___x_2270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2270_, 0, v___x_2269_);
return v___x_2270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___boxed(lean_object* v_decl_2271_, lean_object* v_x_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_){
_start:
{
lean_object* v_res_2276_; 
v_res_2276_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0(v_decl_2271_, v_x_2272_, v___y_2273_, v___y_2274_);
lean_dec(v___y_2274_);
lean_dec_ref(v___y_2273_);
lean_dec_ref(v_x_2272_);
return v_res_2276_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2_spec__4(size_t v_sz_2277_, size_t v_i_2278_, lean_object* v_bs_2279_){
_start:
{
uint8_t v___x_2280_; 
v___x_2280_ = lean_usize_dec_lt(v_i_2278_, v_sz_2277_);
if (v___x_2280_ == 0)
{
lean_object* v___x_2281_; 
v___x_2281_ = l_unsafeCast___redArg(v_bs_2279_);
lean_dec_ref(v_bs_2279_);
return v___x_2281_;
}
else
{
lean_object* v_v_2282_; lean_object* v___x_2283_; lean_object* v_msg_2284_; lean_object* v___x_2285_; lean_object* v_bs_x27_2286_; size_t v___x_2287_; size_t v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; 
v_v_2282_ = lean_array_uget_borrowed(v_bs_2279_, v_i_2278_);
v___x_2283_ = l_unsafeCast___redArg(v_v_2282_);
v_msg_2284_ = lean_ctor_get(v___x_2283_, 1);
lean_inc_ref(v_msg_2284_);
lean_dec(v___x_2283_);
v___x_2285_ = lean_unsigned_to_nat(0u);
v_bs_x27_2286_ = lean_array_uset(v_bs_2279_, v_i_2278_, v___x_2285_);
v___x_2287_ = ((size_t)1ULL);
v___x_2288_ = lean_usize_add(v_i_2278_, v___x_2287_);
v___x_2289_ = l_unsafeCast___redArg(v_msg_2284_);
lean_dec_ref(v_msg_2284_);
v___x_2290_ = lean_array_uset(v_bs_x27_2286_, v_i_2278_, v___x_2289_);
v_i_2278_ = v___x_2288_;
v_bs_2279_ = v___x_2290_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2_spec__4___boxed(lean_object* v_sz_2292_, lean_object* v_i_2293_, lean_object* v_bs_2294_){
_start:
{
size_t v_sz_boxed_2295_; size_t v_i_boxed_2296_; lean_object* v_res_2297_; 
v_sz_boxed_2295_ = lean_unbox_usize(v_sz_2292_);
lean_dec(v_sz_2292_);
v_i_boxed_2296_ = lean_unbox_usize(v_i_2293_);
lean_dec(v_i_2293_);
v_res_2297_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2_spec__4(v_sz_boxed_2295_, v_i_boxed_2296_, v_bs_2294_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2(lean_object* v_oldTraces_2298_, lean_object* v_data_2299_, lean_object* v_ref_2300_, lean_object* v_msg_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_){
_start:
{
lean_object* v_toCold_2305_; lean_object* v_currRecDepth_2306_; lean_object* v_ref_2307_; uint8_t v_diag_2308_; uint8_t v_suppressElabErrors_2309_; lean_object* v_ref_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v_traceState_2313_; lean_object* v_traces_2314_; lean_object* v___x_2315_; size_t v_sz_2316_; size_t v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v_msg_2321_; lean_object* v___x_2322_; lean_object* v_a_2323_; lean_object* v___x_2325_; uint8_t v_isShared_2326_; uint8_t v_isSharedCheck_2360_; 
v_toCold_2305_ = lean_ctor_get(v___y_2302_, 0);
v_currRecDepth_2306_ = lean_ctor_get(v___y_2302_, 1);
v_ref_2307_ = lean_ctor_get(v___y_2302_, 2);
v_diag_2308_ = lean_ctor_get_uint8(v___y_2302_, sizeof(void*)*3);
v_suppressElabErrors_2309_ = lean_ctor_get_uint8(v___y_2302_, sizeof(void*)*3 + 1);
v_ref_2310_ = l_Lean_replaceRef(v_ref_2300_, v_ref_2307_);
lean_inc(v_currRecDepth_2306_);
lean_inc_ref(v_toCold_2305_);
v___x_2311_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2311_, 0, v_toCold_2305_);
lean_ctor_set(v___x_2311_, 1, v_currRecDepth_2306_);
lean_ctor_set(v___x_2311_, 2, v_ref_2310_);
lean_ctor_set_uint8(v___x_2311_, sizeof(void*)*3, v_diag_2308_);
lean_ctor_set_uint8(v___x_2311_, sizeof(void*)*3 + 1, v_suppressElabErrors_2309_);
v___x_2312_ = lean_st_ref_get(v___y_2303_);
v_traceState_2313_ = lean_ctor_get(v___x_2312_, 4);
lean_inc_ref(v_traceState_2313_);
lean_dec(v___x_2312_);
v_traces_2314_ = lean_ctor_get(v_traceState_2313_, 0);
lean_inc_ref(v_traces_2314_);
lean_dec_ref(v_traceState_2313_);
v___x_2315_ = l_Lean_PersistentArray_toArray___redArg(v_traces_2314_);
lean_dec_ref(v_traces_2314_);
v_sz_2316_ = lean_array_size(v___x_2315_);
v___x_2317_ = ((size_t)0ULL);
v___x_2318_ = l_unsafeCast___redArg(v___x_2315_);
lean_dec_ref(v___x_2315_);
v___x_2319_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2_spec__4(v_sz_2316_, v___x_2317_, v___x_2318_);
v___x_2320_ = l_unsafeCast___redArg(v___x_2319_);
lean_dec_ref(v___x_2319_);
v_msg_2321_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_2321_, 0, v_data_2299_);
lean_ctor_set(v_msg_2321_, 1, v_msg_2301_);
lean_ctor_set(v_msg_2321_, 2, v___x_2320_);
v___x_2322_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12(v_msg_2321_, v___x_2311_, v___y_2303_);
lean_dec_ref_known(v___x_2311_, 3);
v_a_2323_ = lean_ctor_get(v___x_2322_, 0);
v_isSharedCheck_2360_ = !lean_is_exclusive(v___x_2322_);
if (v_isSharedCheck_2360_ == 0)
{
v___x_2325_ = v___x_2322_;
v_isShared_2326_ = v_isSharedCheck_2360_;
goto v_resetjp_2324_;
}
else
{
lean_inc(v_a_2323_);
lean_dec(v___x_2322_);
v___x_2325_ = lean_box(0);
v_isShared_2326_ = v_isSharedCheck_2360_;
goto v_resetjp_2324_;
}
v_resetjp_2324_:
{
lean_object* v___x_2327_; lean_object* v_traceState_2328_; lean_object* v_env_2329_; lean_object* v_nextMacroScope_2330_; lean_object* v_ngen_2331_; lean_object* v_auxDeclNGen_2332_; lean_object* v_cache_2333_; lean_object* v_messages_2334_; lean_object* v_infoState_2335_; lean_object* v_snapshotTasks_2336_; lean_object* v___x_2338_; uint8_t v_isShared_2339_; uint8_t v_isSharedCheck_2359_; 
v___x_2327_ = lean_st_ref_take(v___y_2303_);
v_traceState_2328_ = lean_ctor_get(v___x_2327_, 4);
v_env_2329_ = lean_ctor_get(v___x_2327_, 0);
v_nextMacroScope_2330_ = lean_ctor_get(v___x_2327_, 1);
v_ngen_2331_ = lean_ctor_get(v___x_2327_, 2);
v_auxDeclNGen_2332_ = lean_ctor_get(v___x_2327_, 3);
v_cache_2333_ = lean_ctor_get(v___x_2327_, 5);
v_messages_2334_ = lean_ctor_get(v___x_2327_, 6);
v_infoState_2335_ = lean_ctor_get(v___x_2327_, 7);
v_snapshotTasks_2336_ = lean_ctor_get(v___x_2327_, 8);
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2327_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2338_ = v___x_2327_;
v_isShared_2339_ = v_isSharedCheck_2359_;
goto v_resetjp_2337_;
}
else
{
lean_inc(v_snapshotTasks_2336_);
lean_inc(v_infoState_2335_);
lean_inc(v_messages_2334_);
lean_inc(v_cache_2333_);
lean_inc(v_traceState_2328_);
lean_inc(v_auxDeclNGen_2332_);
lean_inc(v_ngen_2331_);
lean_inc(v_nextMacroScope_2330_);
lean_inc(v_env_2329_);
lean_dec(v___x_2327_);
v___x_2338_ = lean_box(0);
v_isShared_2339_ = v_isSharedCheck_2359_;
goto v_resetjp_2337_;
}
v_resetjp_2337_:
{
uint64_t v_tid_2340_; lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2357_; 
v_tid_2340_ = lean_ctor_get_uint64(v_traceState_2328_, sizeof(void*)*1);
v_isSharedCheck_2357_ = !lean_is_exclusive(v_traceState_2328_);
if (v_isSharedCheck_2357_ == 0)
{
lean_object* v_unused_2358_; 
v_unused_2358_ = lean_ctor_get(v_traceState_2328_, 0);
lean_dec(v_unused_2358_);
v___x_2342_ = v_traceState_2328_;
v_isShared_2343_ = v_isSharedCheck_2357_;
goto v_resetjp_2341_;
}
else
{
lean_dec(v_traceState_2328_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2357_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2348_; 
v___x_2344_ = lean_box(0);
v___x_2345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2345_, 0, v_ref_2300_);
lean_ctor_set(v___x_2345_, 1, v_a_2323_);
v___x_2346_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_2298_, v___x_2345_);
if (v_isShared_2343_ == 0)
{
lean_ctor_set(v___x_2342_, 0, v___x_2346_);
v___x_2348_ = v___x_2342_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v___x_2346_);
lean_ctor_set_uint64(v_reuseFailAlloc_2356_, sizeof(void*)*1, v_tid_2340_);
v___x_2348_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
lean_object* v___x_2350_; 
if (v_isShared_2339_ == 0)
{
lean_ctor_set(v___x_2338_, 4, v___x_2348_);
v___x_2350_ = v___x_2338_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v_env_2329_);
lean_ctor_set(v_reuseFailAlloc_2355_, 1, v_nextMacroScope_2330_);
lean_ctor_set(v_reuseFailAlloc_2355_, 2, v_ngen_2331_);
lean_ctor_set(v_reuseFailAlloc_2355_, 3, v_auxDeclNGen_2332_);
lean_ctor_set(v_reuseFailAlloc_2355_, 4, v___x_2348_);
lean_ctor_set(v_reuseFailAlloc_2355_, 5, v_cache_2333_);
lean_ctor_set(v_reuseFailAlloc_2355_, 6, v_messages_2334_);
lean_ctor_set(v_reuseFailAlloc_2355_, 7, v_infoState_2335_);
lean_ctor_set(v_reuseFailAlloc_2355_, 8, v_snapshotTasks_2336_);
v___x_2350_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
lean_object* v___x_2351_; lean_object* v___x_2353_; 
v___x_2351_ = lean_st_ref_put(v___y_2303_, v___x_2350_);
if (v_isShared_2326_ == 0)
{
lean_ctor_set(v___x_2325_, 0, v___x_2344_);
v___x_2353_ = v___x_2325_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v___x_2344_);
v___x_2353_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
return v___x_2353_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2___boxed(lean_object* v_oldTraces_2361_, lean_object* v_data_2362_, lean_object* v_ref_2363_, lean_object* v_msg_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_){
_start:
{
lean_object* v_res_2368_; 
v_res_2368_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2(v_oldTraces_2361_, v_data_2362_, v_ref_2363_, v_msg_2364_, v___y_2365_, v___y_2366_);
lean_dec(v___y_2366_);
lean_dec_ref(v___y_2365_);
return v_res_2368_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg(lean_object* v_x_2369_){
_start:
{
if (lean_obj_tag(v_x_2369_) == 0)
{
lean_object* v_a_2371_; lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2378_; 
v_a_2371_ = lean_ctor_get(v_x_2369_, 0);
v_isSharedCheck_2378_ = !lean_is_exclusive(v_x_2369_);
if (v_isSharedCheck_2378_ == 0)
{
v___x_2373_ = v_x_2369_;
v_isShared_2374_ = v_isSharedCheck_2378_;
goto v_resetjp_2372_;
}
else
{
lean_inc(v_a_2371_);
lean_dec(v_x_2369_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2378_;
goto v_resetjp_2372_;
}
v_resetjp_2372_:
{
lean_object* v___x_2376_; 
if (v_isShared_2374_ == 0)
{
lean_ctor_set_tag(v___x_2373_, 1);
v___x_2376_ = v___x_2373_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2377_; 
v_reuseFailAlloc_2377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2377_, 0, v_a_2371_);
v___x_2376_ = v_reuseFailAlloc_2377_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
return v___x_2376_;
}
}
}
else
{
lean_object* v_a_2379_; lean_object* v___x_2381_; uint8_t v_isShared_2382_; uint8_t v_isSharedCheck_2386_; 
v_a_2379_ = lean_ctor_get(v_x_2369_, 0);
v_isSharedCheck_2386_ = !lean_is_exclusive(v_x_2369_);
if (v_isSharedCheck_2386_ == 0)
{
v___x_2381_ = v_x_2369_;
v_isShared_2382_ = v_isSharedCheck_2386_;
goto v_resetjp_2380_;
}
else
{
lean_inc(v_a_2379_);
lean_dec(v_x_2369_);
v___x_2381_ = lean_box(0);
v_isShared_2382_ = v_isSharedCheck_2386_;
goto v_resetjp_2380_;
}
v_resetjp_2380_:
{
lean_object* v___x_2384_; 
if (v_isShared_2382_ == 0)
{
lean_ctor_set_tag(v___x_2381_, 0);
v___x_2384_ = v___x_2381_;
goto v_reusejp_2383_;
}
else
{
lean_object* v_reuseFailAlloc_2385_; 
v_reuseFailAlloc_2385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2385_, 0, v_a_2379_);
v___x_2384_ = v_reuseFailAlloc_2385_;
goto v_reusejp_2383_;
}
v_reusejp_2383_:
{
return v___x_2384_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg___boxed(lean_object* v_x_2387_, lean_object* v___y_2388_){
_start:
{
lean_object* v_res_2389_; 
v_res_2389_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg(v_x_2387_);
return v_res_2389_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__4(lean_object* v_e_2390_){
_start:
{
if (lean_obj_tag(v_e_2390_) == 0)
{
uint8_t v___x_2391_; 
v___x_2391_ = 2;
return v___x_2391_;
}
else
{
uint8_t v___x_2392_; 
v___x_2392_ = 0;
return v___x_2392_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__4___boxed(lean_object* v_e_2393_){
_start:
{
uint8_t v_res_2394_; lean_object* v_r_2395_; 
v_res_2394_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__4(v_e_2393_);
lean_dec_ref(v_e_2393_);
v_r_2395_ = lean_box(v_res_2394_);
return v_r_2395_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0(void){
_start:
{
lean_object* v___x_2396_; double v___x_2397_; 
v___x_2396_ = lean_unsigned_to_nat(0u);
v___x_2397_ = lean_float_of_nat(v___x_2396_);
return v___x_2397_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__2(void){
_start:
{
lean_object* v___x_2399_; lean_object* v___x_2400_; 
v___x_2399_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__1));
v___x_2400_ = l_Lean_stringToMessageData(v___x_2399_);
return v___x_2400_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__3(void){
_start:
{
lean_object* v___x_2401_; double v___x_2402_; 
v___x_2401_ = lean_unsigned_to_nat(1000u);
v___x_2402_ = lean_float_of_nat(v___x_2401_);
return v___x_2402_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2(lean_object* v_cls_2403_, uint8_t v_collapsed_2404_, lean_object* v_tag_2405_, lean_object* v_opts_2406_, uint8_t v_clsEnabled_2407_, lean_object* v_oldTraces_2408_, lean_object* v_msg_2409_, lean_object* v_resStartStop_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_){
_start:
{
lean_object* v_fst_2414_; lean_object* v_snd_2415_; lean_object* v___y_2417_; lean_object* v___y_2418_; lean_object* v_data_2419_; lean_object* v_fst_2422_; lean_object* v_snd_2423_; lean_object* v___x_2424_; uint8_t v___x_2425_; lean_object* v___y_2427_; lean_object* v_a_2428_; uint8_t v___y_2443_; double v___y_2474_; 
v_fst_2414_ = lean_ctor_get(v_resStartStop_2410_, 0);
lean_inc(v_fst_2414_);
v_snd_2415_ = lean_ctor_get(v_resStartStop_2410_, 1);
lean_inc(v_snd_2415_);
lean_dec_ref(v_resStartStop_2410_);
v_fst_2422_ = lean_ctor_get(v_snd_2415_, 0);
lean_inc(v_fst_2422_);
v_snd_2423_ = lean_ctor_get(v_snd_2415_, 1);
lean_inc(v_snd_2423_);
lean_dec(v_snd_2415_);
v___x_2424_ = l_Lean_trace_profiler;
v___x_2425_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_opts_2406_, v___x_2424_);
if (v___x_2425_ == 0)
{
v___y_2443_ = v___x_2425_;
goto v___jp_2442_;
}
else
{
lean_object* v___x_2479_; uint8_t v___x_2480_; 
v___x_2479_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2480_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_opts_2406_, v___x_2479_);
if (v___x_2480_ == 0)
{
lean_object* v___x_2481_; lean_object* v___x_2482_; double v___x_2483_; double v___x_2484_; double v___x_2485_; 
v___x_2481_ = l_Lean_trace_profiler_threshold;
v___x_2482_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1(v_opts_2406_, v___x_2481_);
v___x_2483_ = lean_float_of_nat(v___x_2482_);
v___x_2484_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__3);
v___x_2485_ = lean_float_div(v___x_2483_, v___x_2484_);
v___y_2474_ = v___x_2485_;
goto v___jp_2473_;
}
else
{
lean_object* v___x_2486_; lean_object* v___x_2487_; double v___x_2488_; 
v___x_2486_ = l_Lean_trace_profiler_threshold;
v___x_2487_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__1(v_opts_2406_, v___x_2486_);
v___x_2488_ = lean_float_of_nat(v___x_2487_);
v___y_2474_ = v___x_2488_;
goto v___jp_2473_;
}
}
v___jp_2416_:
{
lean_object* v___x_2420_; 
lean_inc(v___y_2417_);
v___x_2420_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__2(v_oldTraces_2408_, v_data_2419_, v___y_2417_, v___y_2418_, v___y_2411_, v___y_2412_);
if (lean_obj_tag(v___x_2420_) == 0)
{
lean_object* v___x_2421_; 
lean_dec_ref_known(v___x_2420_, 1);
v___x_2421_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg(v_fst_2414_);
return v___x_2421_;
}
else
{
lean_dec(v_fst_2414_);
return v___x_2420_;
}
}
v___jp_2426_:
{
uint8_t v_result_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; double v___x_2432_; lean_object* v_data_2433_; 
v_result_2429_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__4(v_fst_2414_);
v___x_2430_ = lean_box(v_result_2429_);
v___x_2431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2431_, 0, v___x_2430_);
v___x_2432_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0);
lean_inc_ref(v_tag_2405_);
lean_inc_ref(v___x_2431_);
lean_inc(v_cls_2403_);
v_data_2433_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2433_, 0, v_cls_2403_);
lean_ctor_set(v_data_2433_, 1, v___x_2431_);
lean_ctor_set(v_data_2433_, 2, v_tag_2405_);
lean_ctor_set_float(v_data_2433_, sizeof(void*)*3, v___x_2432_);
lean_ctor_set_float(v_data_2433_, sizeof(void*)*3 + 8, v___x_2432_);
lean_ctor_set_uint8(v_data_2433_, sizeof(void*)*3 + 16, v_collapsed_2404_);
if (v___x_2425_ == 0)
{
lean_dec_ref_known(v___x_2431_, 1);
lean_dec(v_snd_2423_);
lean_dec(v_fst_2422_);
lean_dec_ref(v_tag_2405_);
lean_dec(v_cls_2403_);
v___y_2417_ = v___y_2427_;
v___y_2418_ = v_a_2428_;
v_data_2419_ = v_data_2433_;
goto v___jp_2416_;
}
else
{
lean_object* v_data_2434_; double v___x_2435_; double v___x_2436_; 
lean_dec_ref_known(v_data_2433_, 3);
v_data_2434_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2434_, 0, v_cls_2403_);
lean_ctor_set(v_data_2434_, 1, v___x_2431_);
lean_ctor_set(v_data_2434_, 2, v_tag_2405_);
v___x_2435_ = lean_unbox_float(v_fst_2422_);
lean_dec(v_fst_2422_);
lean_ctor_set_float(v_data_2434_, sizeof(void*)*3, v___x_2435_);
v___x_2436_ = lean_unbox_float(v_snd_2423_);
lean_dec(v_snd_2423_);
lean_ctor_set_float(v_data_2434_, sizeof(void*)*3 + 8, v___x_2436_);
lean_ctor_set_uint8(v_data_2434_, sizeof(void*)*3 + 16, v_collapsed_2404_);
v___y_2417_ = v___y_2427_;
v___y_2418_ = v_a_2428_;
v_data_2419_ = v_data_2434_;
goto v___jp_2416_;
}
}
v___jp_2437_:
{
lean_object* v_ref_2438_; lean_object* v___x_2439_; 
v_ref_2438_ = lean_ctor_get(v___y_2411_, 2);
lean_inc(v___y_2412_);
lean_inc_ref(v___y_2411_);
lean_inc(v_fst_2414_);
v___x_2439_ = lean_apply_4(v_msg_2409_, v_fst_2414_, v___y_2411_, v___y_2412_, lean_box(0));
if (lean_obj_tag(v___x_2439_) == 0)
{
lean_object* v_a_2440_; 
v_a_2440_ = lean_ctor_get(v___x_2439_, 0);
lean_inc(v_a_2440_);
lean_dec_ref_known(v___x_2439_, 1);
v___y_2427_ = v_ref_2438_;
v_a_2428_ = v_a_2440_;
goto v___jp_2426_;
}
else
{
lean_object* v___x_2441_; 
lean_dec_ref_known(v___x_2439_, 1);
v___x_2441_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__2);
v___y_2427_ = v_ref_2438_;
v_a_2428_ = v___x_2441_;
goto v___jp_2426_;
}
}
v___jp_2442_:
{
if (v_clsEnabled_2407_ == 0)
{
if (v___y_2443_ == 0)
{
lean_object* v___x_2444_; lean_object* v_traceState_2445_; lean_object* v_env_2446_; lean_object* v_nextMacroScope_2447_; lean_object* v_ngen_2448_; lean_object* v_auxDeclNGen_2449_; lean_object* v_cache_2450_; lean_object* v_messages_2451_; lean_object* v_infoState_2452_; lean_object* v_snapshotTasks_2453_; lean_object* v___x_2455_; uint8_t v_isShared_2456_; uint8_t v_isSharedCheck_2472_; 
lean_dec(v_snd_2423_);
lean_dec(v_fst_2422_);
lean_dec_ref(v_msg_2409_);
lean_dec_ref(v_tag_2405_);
lean_dec(v_cls_2403_);
v___x_2444_ = lean_st_ref_take(v___y_2412_);
v_traceState_2445_ = lean_ctor_get(v___x_2444_, 4);
v_env_2446_ = lean_ctor_get(v___x_2444_, 0);
v_nextMacroScope_2447_ = lean_ctor_get(v___x_2444_, 1);
v_ngen_2448_ = lean_ctor_get(v___x_2444_, 2);
v_auxDeclNGen_2449_ = lean_ctor_get(v___x_2444_, 3);
v_cache_2450_ = lean_ctor_get(v___x_2444_, 5);
v_messages_2451_ = lean_ctor_get(v___x_2444_, 6);
v_infoState_2452_ = lean_ctor_get(v___x_2444_, 7);
v_snapshotTasks_2453_ = lean_ctor_get(v___x_2444_, 8);
v_isSharedCheck_2472_ = !lean_is_exclusive(v___x_2444_);
if (v_isSharedCheck_2472_ == 0)
{
v___x_2455_ = v___x_2444_;
v_isShared_2456_ = v_isSharedCheck_2472_;
goto v_resetjp_2454_;
}
else
{
lean_inc(v_snapshotTasks_2453_);
lean_inc(v_infoState_2452_);
lean_inc(v_messages_2451_);
lean_inc(v_cache_2450_);
lean_inc(v_traceState_2445_);
lean_inc(v_auxDeclNGen_2449_);
lean_inc(v_ngen_2448_);
lean_inc(v_nextMacroScope_2447_);
lean_inc(v_env_2446_);
lean_dec(v___x_2444_);
v___x_2455_ = lean_box(0);
v_isShared_2456_ = v_isSharedCheck_2472_;
goto v_resetjp_2454_;
}
v_resetjp_2454_:
{
uint64_t v_tid_2457_; lean_object* v_traces_2458_; lean_object* v___x_2460_; uint8_t v_isShared_2461_; uint8_t v_isSharedCheck_2471_; 
v_tid_2457_ = lean_ctor_get_uint64(v_traceState_2445_, sizeof(void*)*1);
v_traces_2458_ = lean_ctor_get(v_traceState_2445_, 0);
v_isSharedCheck_2471_ = !lean_is_exclusive(v_traceState_2445_);
if (v_isSharedCheck_2471_ == 0)
{
v___x_2460_ = v_traceState_2445_;
v_isShared_2461_ = v_isSharedCheck_2471_;
goto v_resetjp_2459_;
}
else
{
lean_inc(v_traces_2458_);
lean_dec(v_traceState_2445_);
v___x_2460_ = lean_box(0);
v_isShared_2461_ = v_isSharedCheck_2471_;
goto v_resetjp_2459_;
}
v_resetjp_2459_:
{
lean_object* v___x_2462_; lean_object* v___x_2464_; 
v___x_2462_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2408_, v_traces_2458_);
lean_dec_ref(v_traces_2458_);
if (v_isShared_2461_ == 0)
{
lean_ctor_set(v___x_2460_, 0, v___x_2462_);
v___x_2464_ = v___x_2460_;
goto v_reusejp_2463_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v___x_2462_);
lean_ctor_set_uint64(v_reuseFailAlloc_2470_, sizeof(void*)*1, v_tid_2457_);
v___x_2464_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2463_;
}
v_reusejp_2463_:
{
lean_object* v___x_2466_; 
if (v_isShared_2456_ == 0)
{
lean_ctor_set(v___x_2455_, 4, v___x_2464_);
v___x_2466_ = v___x_2455_;
goto v_reusejp_2465_;
}
else
{
lean_object* v_reuseFailAlloc_2469_; 
v_reuseFailAlloc_2469_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2469_, 0, v_env_2446_);
lean_ctor_set(v_reuseFailAlloc_2469_, 1, v_nextMacroScope_2447_);
lean_ctor_set(v_reuseFailAlloc_2469_, 2, v_ngen_2448_);
lean_ctor_set(v_reuseFailAlloc_2469_, 3, v_auxDeclNGen_2449_);
lean_ctor_set(v_reuseFailAlloc_2469_, 4, v___x_2464_);
lean_ctor_set(v_reuseFailAlloc_2469_, 5, v_cache_2450_);
lean_ctor_set(v_reuseFailAlloc_2469_, 6, v_messages_2451_);
lean_ctor_set(v_reuseFailAlloc_2469_, 7, v_infoState_2452_);
lean_ctor_set(v_reuseFailAlloc_2469_, 8, v_snapshotTasks_2453_);
v___x_2466_ = v_reuseFailAlloc_2469_;
goto v_reusejp_2465_;
}
v_reusejp_2465_:
{
lean_object* v___x_2467_; lean_object* v___x_2468_; 
v___x_2467_ = lean_st_ref_put(v___y_2412_, v___x_2466_);
v___x_2468_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg(v_fst_2414_);
return v___x_2468_;
}
}
}
}
}
else
{
goto v___jp_2437_;
}
}
else
{
goto v___jp_2437_;
}
}
v___jp_2473_:
{
double v___x_2475_; double v___x_2476_; double v___x_2477_; uint8_t v___x_2478_; 
v___x_2475_ = lean_unbox_float(v_snd_2423_);
v___x_2476_ = lean_unbox_float(v_fst_2422_);
v___x_2477_ = lean_float_sub(v___x_2475_, v___x_2476_);
v___x_2478_ = lean_float_decLt(v___y_2474_, v___x_2477_);
v___y_2443_ = v___x_2478_;
goto v___jp_2442_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___boxed(lean_object* v_cls_2489_, lean_object* v_collapsed_2490_, lean_object* v_tag_2491_, lean_object* v_opts_2492_, lean_object* v_clsEnabled_2493_, lean_object* v_oldTraces_2494_, lean_object* v_msg_2495_, lean_object* v_resStartStop_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_){
_start:
{
uint8_t v_collapsed_boxed_2500_; uint8_t v_clsEnabled_boxed_2501_; lean_object* v_res_2502_; 
v_collapsed_boxed_2500_ = lean_unbox(v_collapsed_2490_);
v_clsEnabled_boxed_2501_ = lean_unbox(v_clsEnabled_2493_);
v_res_2502_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2(v_cls_2489_, v_collapsed_boxed_2500_, v_tag_2491_, v_opts_2492_, v_clsEnabled_boxed_2501_, v_oldTraces_2494_, v_msg_2495_, v_resStartStop_2496_, v___y_2497_, v___y_2498_);
lean_dec(v___y_2498_);
lean_dec_ref(v___y_2497_);
lean_dec_ref(v_opts_2492_);
return v_res_2502_;
}
}
static double _init_l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2505_; double v___x_2506_; 
v___x_2505_ = lean_unsigned_to_nat(1000000000u);
v___x_2506_ = lean_float_of_nat(v___x_2505_);
return v___x_2506_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1(lean_object* v_decl_2507_, lean_object* v___x_2508_, uint8_t v___x_2509_, lean_object* v___x_2510_, lean_object* v___f_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_){
_start:
{
lean_object* v___y_2516_; lean_object* v___y_2517_; uint8_t v___y_2518_; lean_object* v___y_2529_; lean_object* v_a_2530_; lean_object* v___y_2534_; lean_object* v___y_2535_; uint8_t v___y_2536_; lean_object* v___y_2547_; lean_object* v_a_2548_; lean_object* v_toCold_2551_; lean_object* v_options_2552_; uint8_t v_hasTrace_2553_; 
v_toCold_2551_ = lean_ctor_get(v___y_2512_, 0);
v_options_2552_ = lean_ctor_get(v_toCold_2551_, 2);
v_hasTrace_2553_ = lean_ctor_get_uint8(v_options_2552_, sizeof(void*)*1);
if (v_hasTrace_2553_ == 0)
{
lean_object* v_cancelTk_x3f_2554_; lean_object* v___x_2555_; 
lean_dec_ref(v___f_2511_);
lean_dec_ref(v___x_2510_);
lean_dec(v___x_2508_);
v_cancelTk_x3f_2554_ = lean_ctor_get(v_toCold_2551_, 10);
lean_inc(v_decl_2507_);
v___x_2555_ = l_Lean_warnIfUsesSorry(v_decl_2507_, v___y_2512_, v___y_2513_);
if (lean_obj_tag(v___x_2555_) == 0)
{
lean_object* v___x_2556_; lean_object* v_env_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; 
lean_dec_ref_known(v___x_2555_, 1);
v___x_2556_ = lean_st_ref_get(v___y_2513_);
v_env_2557_ = lean_ctor_get(v___x_2556_, 0);
lean_inc_ref(v_env_2557_);
lean_dec(v___x_2556_);
v___x_2558_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_2557_, v_options_2552_, v_decl_2507_, v_cancelTk_x3f_2554_);
v___x_2559_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v___x_2558_, v___y_2512_, v___y_2513_);
if (lean_obj_tag(v___x_2559_) == 0)
{
lean_object* v_a_2560_; lean_object* v___x_2561_; 
lean_dec(v_decl_2507_);
v_a_2560_ = lean_ctor_get(v___x_2559_, 0);
lean_inc(v_a_2560_);
lean_dec_ref_known(v___x_2559_, 1);
v___x_2561_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_a_2560_, v___y_2513_);
return v___x_2561_;
}
else
{
lean_object* v_a_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2569_; 
v_a_2562_ = lean_ctor_get(v___x_2559_, 0);
v_isSharedCheck_2569_ = !lean_is_exclusive(v___x_2559_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2564_ = v___x_2559_;
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_a_2562_);
lean_dec(v___x_2559_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2567_; 
lean_inc(v_a_2562_);
if (v_isShared_2565_ == 0)
{
v___x_2567_ = v___x_2564_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v_a_2562_);
v___x_2567_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
v___y_2547_ = v___x_2567_;
v_a_2548_ = v_a_2562_;
goto v___jp_2546_;
}
}
}
}
else
{
lean_dec(v_decl_2507_);
return v___x_2555_;
}
}
else
{
lean_object* v_cancelTk_x3f_2570_; lean_object* v_inheritedTraceOptions_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; uint8_t v___x_2574_; lean_object* v___y_2576_; lean_object* v___y_2577_; lean_object* v_a_2578_; lean_object* v___y_2591_; lean_object* v___y_2592_; lean_object* v_a_2593_; lean_object* v___y_2596_; lean_object* v___y_2597_; lean_object* v_a_2598_; lean_object* v___y_2601_; lean_object* v___y_2602_; lean_object* v___y_2603_; lean_object* v___y_2607_; lean_object* v___y_2608_; lean_object* v___y_2609_; uint8_t v___y_2610_; lean_object* v___y_2613_; lean_object* v___y_2614_; lean_object* v_a_2615_; lean_object* v___y_2619_; lean_object* v___y_2620_; lean_object* v_a_2621_; lean_object* v___y_2631_; lean_object* v___y_2632_; lean_object* v_a_2633_; lean_object* v___y_2636_; lean_object* v___y_2637_; lean_object* v_a_2638_; lean_object* v___y_2641_; lean_object* v___y_2642_; lean_object* v___y_2643_; lean_object* v___y_2647_; lean_object* v___y_2648_; lean_object* v___y_2649_; uint8_t v___y_2650_; lean_object* v___y_2653_; lean_object* v___y_2654_; lean_object* v_a_2655_; 
v_cancelTk_x3f_2570_ = lean_ctor_get(v_toCold_2551_, 10);
v_inheritedTraceOptions_2571_ = lean_ctor_get(v_toCold_2551_, 11);
v___x_2572_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v___x_2508_);
v___x_2573_ = l_Lean_Name_append(v___x_2572_, v___x_2508_);
v___x_2574_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2571_, v_options_2552_, v___x_2573_);
lean_dec(v___x_2573_);
if (v___x_2574_ == 0)
{
lean_object* v___x_2683_; uint8_t v___x_2684_; 
v___x_2683_ = l_Lean_trace_profiler;
v___x_2684_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_options_2552_, v___x_2683_);
if (v___x_2684_ == 0)
{
lean_object* v___x_2685_; 
lean_dec_ref(v___f_2511_);
lean_dec_ref(v___x_2510_);
lean_dec(v___x_2508_);
lean_inc(v_decl_2507_);
v___x_2685_ = l_Lean_warnIfUsesSorry(v_decl_2507_, v___y_2512_, v___y_2513_);
if (lean_obj_tag(v___x_2685_) == 0)
{
lean_object* v___x_2686_; lean_object* v_env_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; 
lean_dec_ref_known(v___x_2685_, 1);
v___x_2686_ = lean_st_ref_get(v___y_2513_);
v_env_2687_ = lean_ctor_get(v___x_2686_, 0);
lean_inc_ref(v_env_2687_);
lean_dec(v___x_2686_);
v___x_2688_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_2687_, v_options_2552_, v_decl_2507_, v_cancelTk_x3f_2570_);
v___x_2689_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v___x_2688_, v___y_2512_, v___y_2513_);
if (lean_obj_tag(v___x_2689_) == 0)
{
lean_object* v_a_2690_; lean_object* v___x_2691_; 
lean_dec(v_decl_2507_);
v_a_2690_ = lean_ctor_get(v___x_2689_, 0);
lean_inc(v_a_2690_);
lean_dec_ref_known(v___x_2689_, 1);
v___x_2691_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_a_2690_, v___y_2513_);
return v___x_2691_;
}
else
{
lean_object* v_a_2692_; lean_object* v___x_2694_; uint8_t v_isShared_2695_; uint8_t v_isSharedCheck_2699_; 
v_a_2692_ = lean_ctor_get(v___x_2689_, 0);
v_isSharedCheck_2699_ = !lean_is_exclusive(v___x_2689_);
if (v_isSharedCheck_2699_ == 0)
{
v___x_2694_ = v___x_2689_;
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
else
{
lean_inc(v_a_2692_);
lean_dec(v___x_2689_);
v___x_2694_ = lean_box(0);
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
v_resetjp_2693_:
{
lean_object* v___x_2697_; 
lean_inc(v_a_2692_);
if (v_isShared_2695_ == 0)
{
v___x_2697_ = v___x_2694_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v_a_2692_);
v___x_2697_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
v___y_2529_ = v___x_2697_;
v_a_2530_ = v_a_2692_;
goto v___jp_2528_;
}
}
}
}
else
{
lean_dec(v_decl_2507_);
return v___x_2685_;
}
}
else
{
goto v___jp_2658_;
}
}
else
{
goto v___jp_2658_;
}
v___jp_2575_:
{
lean_object* v___x_2579_; double v___x_2580_; double v___x_2581_; double v___x_2582_; double v___x_2583_; double v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2579_ = lean_io_mono_nanos_now();
v___x_2580_ = lean_float_of_nat(v___y_2577_);
v___x_2581_ = lean_float_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1);
v___x_2582_ = lean_float_div(v___x_2580_, v___x_2581_);
v___x_2583_ = lean_float_of_nat(v___x_2579_);
v___x_2584_ = lean_float_div(v___x_2583_, v___x_2581_);
v___x_2585_ = lean_box_float(v___x_2582_);
v___x_2586_ = lean_box_float(v___x_2584_);
v___x_2587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2587_, 0, v___x_2585_);
lean_ctor_set(v___x_2587_, 1, v___x_2586_);
v___x_2588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2588_, 0, v_a_2578_);
lean_ctor_set(v___x_2588_, 1, v___x_2587_);
v___x_2589_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2(v___x_2508_, v___x_2509_, v___x_2510_, v_options_2552_, v___x_2574_, v___y_2576_, v___f_2511_, v___x_2588_, v___y_2512_, v___y_2513_);
return v___x_2589_;
}
v___jp_2590_:
{
lean_object* v___x_2594_; 
v___x_2594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2594_, 0, v_a_2593_);
v___y_2576_ = v___y_2592_;
v___y_2577_ = v___y_2591_;
v_a_2578_ = v___x_2594_;
goto v___jp_2575_;
}
v___jp_2595_:
{
lean_object* v___x_2599_; 
v___x_2599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2599_, 0, v_a_2598_);
v___y_2576_ = v___y_2597_;
v___y_2577_ = v___y_2596_;
v_a_2578_ = v___x_2599_;
goto v___jp_2575_;
}
v___jp_2600_:
{
if (lean_obj_tag(v___y_2603_) == 0)
{
lean_object* v_a_2604_; 
v_a_2604_ = lean_ctor_get(v___y_2603_, 0);
lean_inc(v_a_2604_);
lean_dec_ref_known(v___y_2603_, 1);
v___y_2596_ = v___y_2602_;
v___y_2597_ = v___y_2601_;
v_a_2598_ = v_a_2604_;
goto v___jp_2595_;
}
else
{
lean_object* v_a_2605_; 
v_a_2605_ = lean_ctor_get(v___y_2603_, 0);
lean_inc(v_a_2605_);
lean_dec_ref_known(v___y_2603_, 1);
v___y_2591_ = v___y_2602_;
v___y_2592_ = v___y_2601_;
v_a_2593_ = v_a_2605_;
goto v___jp_2590_;
}
}
v___jp_2606_:
{
if (v___y_2610_ == 0)
{
lean_object* v___x_2611_; 
v___x_2611_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom(v_decl_2507_, v___y_2512_, v___y_2513_);
if (lean_obj_tag(v___x_2611_) == 0)
{
lean_dec_ref_known(v___x_2611_, 1);
v___y_2591_ = v___y_2608_;
v___y_2592_ = v___y_2607_;
v_a_2593_ = v___y_2609_;
goto v___jp_2590_;
}
else
{
lean_dec_ref(v___y_2609_);
v___y_2601_ = v___y_2607_;
v___y_2602_ = v___y_2608_;
v___y_2603_ = v___x_2611_;
goto v___jp_2600_;
}
}
else
{
lean_dec(v_decl_2507_);
v___y_2591_ = v___y_2608_;
v___y_2592_ = v___y_2607_;
v_a_2593_ = v___y_2609_;
goto v___jp_2590_;
}
}
v___jp_2612_:
{
uint8_t v___x_2616_; 
v___x_2616_ = l_Lean_Exception_isInterrupt(v_a_2615_);
if (v___x_2616_ == 0)
{
uint8_t v___x_2617_; 
lean_inc_ref(v_a_2615_);
v___x_2617_ = l_Lean_Exception_isRuntime(v_a_2615_);
v___y_2607_ = v___y_2614_;
v___y_2608_ = v___y_2613_;
v___y_2609_ = v_a_2615_;
v___y_2610_ = v___x_2617_;
goto v___jp_2606_;
}
else
{
v___y_2607_ = v___y_2614_;
v___y_2608_ = v___y_2613_;
v___y_2609_ = v_a_2615_;
v___y_2610_ = v___x_2616_;
goto v___jp_2606_;
}
}
v___jp_2618_:
{
lean_object* v___x_2622_; double v___x_2623_; double v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; 
v___x_2622_ = lean_io_get_num_heartbeats();
v___x_2623_ = lean_float_of_nat(v___y_2620_);
v___x_2624_ = lean_float_of_nat(v___x_2622_);
v___x_2625_ = lean_box_float(v___x_2623_);
v___x_2626_ = lean_box_float(v___x_2624_);
v___x_2627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2627_, 0, v___x_2625_);
lean_ctor_set(v___x_2627_, 1, v___x_2626_);
v___x_2628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2628_, 0, v_a_2621_);
lean_ctor_set(v___x_2628_, 1, v___x_2627_);
v___x_2629_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2(v___x_2508_, v___x_2509_, v___x_2510_, v_options_2552_, v___x_2574_, v___y_2619_, v___f_2511_, v___x_2628_, v___y_2512_, v___y_2513_);
return v___x_2629_;
}
v___jp_2630_:
{
lean_object* v___x_2634_; 
v___x_2634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2634_, 0, v_a_2633_);
v___y_2619_ = v___y_2631_;
v___y_2620_ = v___y_2632_;
v_a_2621_ = v___x_2634_;
goto v___jp_2618_;
}
v___jp_2635_:
{
lean_object* v___x_2639_; 
v___x_2639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2639_, 0, v_a_2638_);
v___y_2619_ = v___y_2636_;
v___y_2620_ = v___y_2637_;
v_a_2621_ = v___x_2639_;
goto v___jp_2618_;
}
v___jp_2640_:
{
if (lean_obj_tag(v___y_2643_) == 0)
{
lean_object* v_a_2644_; 
v_a_2644_ = lean_ctor_get(v___y_2643_, 0);
lean_inc(v_a_2644_);
lean_dec_ref_known(v___y_2643_, 1);
v___y_2636_ = v___y_2641_;
v___y_2637_ = v___y_2642_;
v_a_2638_ = v_a_2644_;
goto v___jp_2635_;
}
else
{
lean_object* v_a_2645_; 
v_a_2645_ = lean_ctor_get(v___y_2643_, 0);
lean_inc(v_a_2645_);
lean_dec_ref_known(v___y_2643_, 1);
v___y_2631_ = v___y_2641_;
v___y_2632_ = v___y_2642_;
v_a_2633_ = v_a_2645_;
goto v___jp_2630_;
}
}
v___jp_2646_:
{
if (v___y_2650_ == 0)
{
lean_object* v___x_2651_; 
v___x_2651_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom(v_decl_2507_, v___y_2512_, v___y_2513_);
if (lean_obj_tag(v___x_2651_) == 0)
{
lean_dec_ref_known(v___x_2651_, 1);
v___y_2631_ = v___y_2647_;
v___y_2632_ = v___y_2648_;
v_a_2633_ = v___y_2649_;
goto v___jp_2630_;
}
else
{
lean_dec_ref(v___y_2649_);
v___y_2641_ = v___y_2647_;
v___y_2642_ = v___y_2648_;
v___y_2643_ = v___x_2651_;
goto v___jp_2640_;
}
}
else
{
lean_dec(v_decl_2507_);
v___y_2631_ = v___y_2647_;
v___y_2632_ = v___y_2648_;
v_a_2633_ = v___y_2649_;
goto v___jp_2630_;
}
}
v___jp_2652_:
{
uint8_t v___x_2656_; 
v___x_2656_ = l_Lean_Exception_isInterrupt(v_a_2655_);
if (v___x_2656_ == 0)
{
uint8_t v___x_2657_; 
lean_inc_ref(v_a_2655_);
v___x_2657_ = l_Lean_Exception_isRuntime(v_a_2655_);
v___y_2647_ = v___y_2653_;
v___y_2648_ = v___y_2654_;
v___y_2649_ = v_a_2655_;
v___y_2650_ = v___x_2657_;
goto v___jp_2646_;
}
else
{
v___y_2647_ = v___y_2653_;
v___y_2648_ = v___y_2654_;
v___y_2649_ = v_a_2655_;
v___y_2650_ = v___x_2656_;
goto v___jp_2646_;
}
}
v___jp_2658_:
{
lean_object* v___x_2659_; lean_object* v_a_2660_; lean_object* v___x_2661_; uint8_t v___x_2662_; 
v___x_2659_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg(v___y_2513_);
v_a_2660_ = lean_ctor_get(v___x_2659_, 0);
lean_inc(v_a_2660_);
lean_dec_ref(v___x_2659_);
v___x_2661_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2662_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_options_2552_, v___x_2661_);
if (v___x_2662_ == 0)
{
lean_object* v___x_2663_; lean_object* v___x_2664_; 
v___x_2663_ = lean_io_mono_nanos_now();
lean_inc(v_decl_2507_);
v___x_2664_ = l_Lean_warnIfUsesSorry(v_decl_2507_, v___y_2512_, v___y_2513_);
if (lean_obj_tag(v___x_2664_) == 0)
{
lean_object* v___x_2665_; lean_object* v_env_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; 
lean_dec_ref_known(v___x_2664_, 1);
v___x_2665_ = lean_st_ref_get(v___y_2513_);
v_env_2666_ = lean_ctor_get(v___x_2665_, 0);
lean_inc_ref(v_env_2666_);
lean_dec(v___x_2665_);
v___x_2667_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_2666_, v_options_2552_, v_decl_2507_, v_cancelTk_x3f_2570_);
v___x_2668_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v___x_2667_, v___y_2512_, v___y_2513_);
if (lean_obj_tag(v___x_2668_) == 0)
{
lean_object* v_a_2669_; lean_object* v___x_2670_; lean_object* v_a_2671_; 
lean_dec(v_decl_2507_);
v_a_2669_ = lean_ctor_get(v___x_2668_, 0);
lean_inc(v_a_2669_);
lean_dec_ref_known(v___x_2668_, 1);
v___x_2670_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_a_2669_, v___y_2513_);
v_a_2671_ = lean_ctor_get(v___x_2670_, 0);
lean_inc(v_a_2671_);
lean_dec_ref(v___x_2670_);
v___y_2596_ = v___x_2663_;
v___y_2597_ = v_a_2660_;
v_a_2598_ = v_a_2671_;
goto v___jp_2595_;
}
else
{
lean_object* v_a_2672_; 
v_a_2672_ = lean_ctor_get(v___x_2668_, 0);
lean_inc(v_a_2672_);
lean_dec_ref_known(v___x_2668_, 1);
v___y_2613_ = v___x_2663_;
v___y_2614_ = v_a_2660_;
v_a_2615_ = v_a_2672_;
goto v___jp_2612_;
}
}
else
{
lean_dec(v_decl_2507_);
v___y_2601_ = v_a_2660_;
v___y_2602_ = v___x_2663_;
v___y_2603_ = v___x_2664_;
goto v___jp_2600_;
}
}
else
{
lean_object* v___x_2673_; lean_object* v___x_2674_; 
v___x_2673_ = lean_io_get_num_heartbeats();
lean_inc(v_decl_2507_);
v___x_2674_ = l_Lean_warnIfUsesSorry(v_decl_2507_, v___y_2512_, v___y_2513_);
if (lean_obj_tag(v___x_2674_) == 0)
{
lean_object* v___x_2675_; lean_object* v_env_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; 
lean_dec_ref_known(v___x_2674_, 1);
v___x_2675_ = lean_st_ref_get(v___y_2513_);
v_env_2676_ = lean_ctor_get(v___x_2675_, 0);
lean_inc_ref(v_env_2676_);
lean_dec(v___x_2675_);
v___x_2677_ = l___private_Lean_AddDecl_0__Lean_Environment_addDeclAux(v_env_2676_, v_options_2552_, v_decl_2507_, v_cancelTk_x3f_2570_);
v___x_2678_ = l_Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0___redArg(v___x_2677_, v___y_2512_, v___y_2513_);
if (lean_obj_tag(v___x_2678_) == 0)
{
lean_object* v_a_2679_; lean_object* v___x_2680_; lean_object* v_a_2681_; 
lean_dec(v_decl_2507_);
v_a_2679_ = lean_ctor_get(v___x_2678_, 0);
lean_inc(v_a_2679_);
lean_dec_ref_known(v___x_2678_, 1);
v___x_2680_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_a_2679_, v___y_2513_);
v_a_2681_ = lean_ctor_get(v___x_2680_, 0);
lean_inc(v_a_2681_);
lean_dec_ref(v___x_2680_);
v___y_2636_ = v_a_2660_;
v___y_2637_ = v___x_2673_;
v_a_2638_ = v_a_2681_;
goto v___jp_2635_;
}
else
{
lean_object* v_a_2682_; 
v_a_2682_ = lean_ctor_get(v___x_2678_, 0);
lean_inc(v_a_2682_);
lean_dec_ref_known(v___x_2678_, 1);
v___y_2653_ = v_a_2660_;
v___y_2654_ = v___x_2673_;
v_a_2655_ = v_a_2682_;
goto v___jp_2652_;
}
}
else
{
lean_dec(v_decl_2507_);
v___y_2641_ = v_a_2660_;
v___y_2642_ = v___x_2673_;
v___y_2643_ = v___x_2674_;
goto v___jp_2640_;
}
}
}
}
v___jp_2515_:
{
if (v___y_2518_ == 0)
{
lean_object* v___x_2519_; 
lean_dec_ref(v___y_2516_);
v___x_2519_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom(v_decl_2507_, v___y_2512_, v___y_2513_);
if (lean_obj_tag(v___x_2519_) == 0)
{
lean_object* v___x_2521_; uint8_t v_isShared_2522_; uint8_t v_isSharedCheck_2526_; 
v_isSharedCheck_2526_ = !lean_is_exclusive(v___x_2519_);
if (v_isSharedCheck_2526_ == 0)
{
lean_object* v_unused_2527_; 
v_unused_2527_ = lean_ctor_get(v___x_2519_, 0);
lean_dec(v_unused_2527_);
v___x_2521_ = v___x_2519_;
v_isShared_2522_ = v_isSharedCheck_2526_;
goto v_resetjp_2520_;
}
else
{
lean_dec(v___x_2519_);
v___x_2521_ = lean_box(0);
v_isShared_2522_ = v_isSharedCheck_2526_;
goto v_resetjp_2520_;
}
v_resetjp_2520_:
{
lean_object* v___x_2524_; 
if (v_isShared_2522_ == 0)
{
lean_ctor_set_tag(v___x_2521_, 1);
lean_ctor_set(v___x_2521_, 0, v___y_2517_);
v___x_2524_ = v___x_2521_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2525_; 
v_reuseFailAlloc_2525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2525_, 0, v___y_2517_);
v___x_2524_ = v_reuseFailAlloc_2525_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
return v___x_2524_;
}
}
}
else
{
lean_dec_ref(v___y_2517_);
return v___x_2519_;
}
}
else
{
lean_dec_ref(v___y_2517_);
lean_dec(v_decl_2507_);
return v___y_2516_;
}
}
v___jp_2528_:
{
uint8_t v___x_2531_; 
v___x_2531_ = l_Lean_Exception_isInterrupt(v_a_2530_);
if (v___x_2531_ == 0)
{
uint8_t v___x_2532_; 
lean_inc_ref(v_a_2530_);
v___x_2532_ = l_Lean_Exception_isRuntime(v_a_2530_);
v___y_2516_ = v___y_2529_;
v___y_2517_ = v_a_2530_;
v___y_2518_ = v___x_2532_;
goto v___jp_2515_;
}
else
{
v___y_2516_ = v___y_2529_;
v___y_2517_ = v_a_2530_;
v___y_2518_ = v___x_2531_;
goto v___jp_2515_;
}
}
v___jp_2533_:
{
if (v___y_2536_ == 0)
{
lean_object* v___x_2537_; 
lean_dec_ref(v___y_2535_);
v___x_2537_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom(v_decl_2507_, v___y_2512_, v___y_2513_);
if (lean_obj_tag(v___x_2537_) == 0)
{
lean_object* v___x_2539_; uint8_t v_isShared_2540_; uint8_t v_isSharedCheck_2544_; 
v_isSharedCheck_2544_ = !lean_is_exclusive(v___x_2537_);
if (v_isSharedCheck_2544_ == 0)
{
lean_object* v_unused_2545_; 
v_unused_2545_ = lean_ctor_get(v___x_2537_, 0);
lean_dec(v_unused_2545_);
v___x_2539_ = v___x_2537_;
v_isShared_2540_ = v_isSharedCheck_2544_;
goto v_resetjp_2538_;
}
else
{
lean_dec(v___x_2537_);
v___x_2539_ = lean_box(0);
v_isShared_2540_ = v_isSharedCheck_2544_;
goto v_resetjp_2538_;
}
v_resetjp_2538_:
{
lean_object* v___x_2542_; 
if (v_isShared_2540_ == 0)
{
lean_ctor_set_tag(v___x_2539_, 1);
lean_ctor_set(v___x_2539_, 0, v___y_2534_);
v___x_2542_ = v___x_2539_;
goto v_reusejp_2541_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v___y_2534_);
v___x_2542_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2541_;
}
v_reusejp_2541_:
{
return v___x_2542_;
}
}
}
else
{
lean_dec_ref(v___y_2534_);
return v___x_2537_;
}
}
else
{
lean_dec_ref(v___y_2534_);
lean_dec(v_decl_2507_);
return v___y_2535_;
}
}
v___jp_2546_:
{
uint8_t v___x_2549_; 
v___x_2549_ = l_Lean_Exception_isInterrupt(v_a_2548_);
if (v___x_2549_ == 0)
{
uint8_t v___x_2550_; 
lean_inc_ref(v_a_2548_);
v___x_2550_ = l_Lean_Exception_isRuntime(v_a_2548_);
v___y_2534_ = v_a_2548_;
v___y_2535_ = v___y_2547_;
v___y_2536_ = v___x_2550_;
goto v___jp_2533_;
}
else
{
v___y_2534_ = v_a_2548_;
v___y_2535_ = v___y_2547_;
v___y_2536_ = v___x_2549_;
goto v___jp_2533_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___boxed(lean_object* v_decl_2700_, lean_object* v___x_2701_, lean_object* v___x_2702_, lean_object* v___x_2703_, lean_object* v___f_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_){
_start:
{
uint8_t v___x_7980__boxed_2708_; lean_object* v_res_2709_; 
v___x_7980__boxed_2708_ = lean_unbox(v___x_2702_);
v_res_2709_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1(v_decl_2700_, v___x_2701_, v___x_7980__boxed_2708_, v___x_2703_, v___f_2704_, v___y_2705_, v___y_2706_);
lean_dec(v___y_2706_);
lean_dec_ref(v___y_2705_);
return v_res_2709_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(lean_object* v_decl_2714_, lean_object* v_a_2715_, lean_object* v_a_2716_){
_start:
{
lean_object* v_toCold_2718_; lean_object* v_options_2719_; lean_object* v___f_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; uint8_t v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___f_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; 
v_toCold_2718_ = lean_ctor_get(v_a_2715_, 0);
v_options_2719_ = lean_ctor_get(v_toCold_2718_, 2);
lean_inc(v_decl_2714_);
v___f_2720_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__0___boxed), 5, 1);
lean_closure_set(v___f_2720_, 0, v_decl_2714_);
v___x_2721_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__0));
v___x_2722_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___closed__2));
v___x_2723_ = 1;
v___x_2724_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___closed__0));
v___x_2725_ = lean_box(v___x_2723_);
v___f_2726_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___boxed), 8, 5);
lean_closure_set(v___f_2726_, 0, v_decl_2714_);
lean_closure_set(v___f_2726_, 1, v___x_2722_);
lean_closure_set(v___f_2726_, 2, v___x_2725_);
lean_closure_set(v___f_2726_, 3, v___x_2724_);
lean_closure_set(v___f_2726_, 4, v___f_2720_);
v___x_2727_ = lean_obj_once(&l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg___closed__0, &l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_snapshotEnvLinterOptions_spec__0_spec__0___redArg___closed__0);
v___x_2728_ = l_Lean_profileitM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__3___redArg(v___x_2721_, v_options_2719_, v___f_2726_, v___x_2727_, v_a_2715_, v_a_2716_);
return v___x_2728_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___boxed(lean_object* v_decl_2729_, lean_object* v_a_2730_, lean_object* v_a_2731_, lean_object* v_a_2732_){
_start:
{
lean_object* v_res_2733_; 
v_res_2733_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_2729_, v_a_2730_, v_a_2731_);
lean_dec(v_a_2731_);
lean_dec_ref(v_a_2730_);
return v_res_2733_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3(lean_object* v_00_u03b1_2734_, lean_object* v_x_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_){
_start:
{
lean_object* v___x_2739_; 
v___x_2739_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___redArg(v_x_2735_);
return v___x_2739_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3___boxed(lean_object* v_00_u03b1_2740_, lean_object* v_x_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_){
_start:
{
lean_object* v_res_2745_; 
v_res_2745_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2_spec__3(v_00_u03b1_2740_, v_x_2741_, v___y_2742_, v___y_2743_);
lean_dec(v___y_2743_);
lean_dec_ref(v___y_2742_);
return v_res_2745_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0(lean_object* v___y_2746_, lean_object* v_a_2747_, lean_object* v_ref_2748_, lean_object* v_a_x3f_2749_){
_start:
{
lean_object* v___x_2751_; lean_object* v_env_2752_; lean_object* v___x_2753_; 
v___x_2751_ = lean_st_ref_get(v___y_2746_);
v_env_2752_ = lean_ctor_get(v___x_2751_, 0);
lean_inc_ref(v_env_2752_);
lean_dec(v___x_2751_);
v___x_2753_ = l_Lean_Environment_AddConstAsyncResult_commitCheckEnv(v_a_2747_, v_env_2752_);
if (lean_obj_tag(v___x_2753_) == 0)
{
lean_object* v_a_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2761_; 
lean_dec(v_ref_2748_);
v_a_2754_ = lean_ctor_get(v___x_2753_, 0);
v_isSharedCheck_2761_ = !lean_is_exclusive(v___x_2753_);
if (v_isSharedCheck_2761_ == 0)
{
v___x_2756_ = v___x_2753_;
v_isShared_2757_ = v_isSharedCheck_2761_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_a_2754_);
lean_dec(v___x_2753_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2761_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v___x_2759_; 
if (v_isShared_2757_ == 0)
{
v___x_2759_ = v___x_2756_;
goto v_reusejp_2758_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v_a_2754_);
v___x_2759_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2758_;
}
v_reusejp_2758_:
{
return v___x_2759_;
}
}
}
else
{
lean_object* v_a_2762_; lean_object* v___x_2764_; uint8_t v_isShared_2765_; uint8_t v_isSharedCheck_2773_; 
v_a_2762_ = lean_ctor_get(v___x_2753_, 0);
v_isSharedCheck_2773_ = !lean_is_exclusive(v___x_2753_);
if (v_isSharedCheck_2773_ == 0)
{
v___x_2764_ = v___x_2753_;
v_isShared_2765_ = v_isSharedCheck_2773_;
goto v_resetjp_2763_;
}
else
{
lean_inc(v_a_2762_);
lean_dec(v___x_2753_);
v___x_2764_ = lean_box(0);
v_isShared_2765_ = v_isSharedCheck_2773_;
goto v_resetjp_2763_;
}
v_resetjp_2763_:
{
lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2771_; 
v___x_2766_ = lean_io_error_to_string(v_a_2762_);
v___x_2767_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2767_, 0, v___x_2766_);
v___x_2768_ = l_Lean_MessageData_ofFormat(v___x_2767_);
v___x_2769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2769_, 0, v_ref_2748_);
lean_ctor_set(v___x_2769_, 1, v___x_2768_);
if (v_isShared_2765_ == 0)
{
lean_ctor_set(v___x_2764_, 0, v___x_2769_);
v___x_2771_ = v___x_2764_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v___x_2769_);
v___x_2771_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
return v___x_2771_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0___boxed(lean_object* v___y_2774_, lean_object* v_a_2775_, lean_object* v_ref_2776_, lean_object* v_a_x3f_2777_, lean_object* v___y_2778_){
_start:
{
lean_object* v_res_2779_; 
v_res_2779_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0(v___y_2774_, v_a_2775_, v_ref_2776_, v_a_x3f_2777_);
lean_dec(v_a_x3f_2777_);
lean_dec(v___y_2774_);
return v_res_2779_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__1(lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v_a_2782_, lean_object* v_a_x3f_2783_){
_start:
{
lean_object* v___x_2785_; lean_object* v_env_2786_; lean_object* v_ref_2787_; lean_object* v___x_2788_; 
v___x_2785_ = lean_st_ref_get(v___y_2780_);
v_env_2786_ = lean_ctor_get(v___x_2785_, 0);
lean_inc_ref(v_env_2786_);
lean_dec(v___x_2785_);
v_ref_2787_ = lean_ctor_get(v___y_2781_, 2);
v___x_2788_ = l_Lean_Environment_AddConstAsyncResult_commitCheckEnv(v_a_2782_, v_env_2786_);
if (lean_obj_tag(v___x_2788_) == 0)
{
lean_object* v_a_2789_; lean_object* v___x_2791_; uint8_t v_isShared_2792_; uint8_t v_isSharedCheck_2796_; 
v_a_2789_ = lean_ctor_get(v___x_2788_, 0);
v_isSharedCheck_2796_ = !lean_is_exclusive(v___x_2788_);
if (v_isSharedCheck_2796_ == 0)
{
v___x_2791_ = v___x_2788_;
v_isShared_2792_ = v_isSharedCheck_2796_;
goto v_resetjp_2790_;
}
else
{
lean_inc(v_a_2789_);
lean_dec(v___x_2788_);
v___x_2791_ = lean_box(0);
v_isShared_2792_ = v_isSharedCheck_2796_;
goto v_resetjp_2790_;
}
v_resetjp_2790_:
{
lean_object* v___x_2794_; 
if (v_isShared_2792_ == 0)
{
v___x_2794_ = v___x_2791_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v_a_2789_);
v___x_2794_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
return v___x_2794_;
}
}
}
else
{
lean_object* v_a_2797_; lean_object* v___x_2799_; uint8_t v_isShared_2800_; uint8_t v_isSharedCheck_2808_; 
v_a_2797_ = lean_ctor_get(v___x_2788_, 0);
v_isSharedCheck_2808_ = !lean_is_exclusive(v___x_2788_);
if (v_isSharedCheck_2808_ == 0)
{
v___x_2799_ = v___x_2788_;
v_isShared_2800_ = v_isSharedCheck_2808_;
goto v_resetjp_2798_;
}
else
{
lean_inc(v_a_2797_);
lean_dec(v___x_2788_);
v___x_2799_ = lean_box(0);
v_isShared_2800_ = v_isSharedCheck_2808_;
goto v_resetjp_2798_;
}
v_resetjp_2798_:
{
lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2806_; 
v___x_2801_ = lean_io_error_to_string(v_a_2797_);
v___x_2802_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2802_, 0, v___x_2801_);
v___x_2803_ = l_Lean_MessageData_ofFormat(v___x_2802_);
lean_inc(v_ref_2787_);
v___x_2804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2804_, 0, v_ref_2787_);
lean_ctor_set(v___x_2804_, 1, v___x_2803_);
if (v_isShared_2800_ == 0)
{
lean_ctor_set(v___x_2799_, 0, v___x_2804_);
v___x_2806_ = v___x_2799_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2807_; 
v_reuseFailAlloc_2807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2807_, 0, v___x_2804_);
v___x_2806_ = v_reuseFailAlloc_2807_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
return v___x_2806_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__1___boxed(lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v_a_2811_, lean_object* v_a_x3f_2812_, lean_object* v___y_2813_){
_start:
{
lean_object* v_res_2814_; 
v_res_2814_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__1(v___y_2809_, v___y_2810_, v_a_2811_, v_a_x3f_2812_);
lean_dec(v_a_x3f_2812_);
lean_dec_ref(v___y_2810_);
lean_dec(v___y_2809_);
return v_res_2814_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2(lean_object* v_a_2815_, lean_object* v_asyncEnv_2816_, lean_object* v_decl_2817_, lean_object* v_x_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_){
_start:
{
lean_object* v___x_2822_; lean_object* v_r_2823_; 
v___x_2822_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v_asyncEnv_2816_, v___y_2820_);
lean_dec_ref(v___x_2822_);
v_r_2823_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_2817_, v___y_2819_, v___y_2820_);
if (lean_obj_tag(v_r_2823_) == 0)
{
lean_object* v_a_2824_; lean_object* v___x_2826_; uint8_t v_isShared_2827_; uint8_t v_isSharedCheck_2840_; 
v_a_2824_ = lean_ctor_get(v_r_2823_, 0);
v_isSharedCheck_2840_ = !lean_is_exclusive(v_r_2823_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2826_ = v_r_2823_;
v_isShared_2827_ = v_isSharedCheck_2840_;
goto v_resetjp_2825_;
}
else
{
lean_inc(v_a_2824_);
lean_dec(v_r_2823_);
v___x_2826_ = lean_box(0);
v_isShared_2827_ = v_isSharedCheck_2840_;
goto v_resetjp_2825_;
}
v_resetjp_2825_:
{
lean_object* v___x_2829_; 
lean_inc(v_a_2824_);
if (v_isShared_2827_ == 0)
{
lean_ctor_set_tag(v___x_2826_, 1);
v___x_2829_ = v___x_2826_;
goto v_reusejp_2828_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v_a_2824_);
v___x_2829_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2828_;
}
v_reusejp_2828_:
{
lean_object* v___x_2830_; 
v___x_2830_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__1(v___y_2820_, v___y_2819_, v_a_2815_, v___x_2829_);
lean_dec_ref(v___x_2829_);
if (lean_obj_tag(v___x_2830_) == 0)
{
lean_object* v___x_2832_; uint8_t v_isShared_2833_; uint8_t v_isSharedCheck_2837_; 
v_isSharedCheck_2837_ = !lean_is_exclusive(v___x_2830_);
if (v_isSharedCheck_2837_ == 0)
{
lean_object* v_unused_2838_; 
v_unused_2838_ = lean_ctor_get(v___x_2830_, 0);
lean_dec(v_unused_2838_);
v___x_2832_ = v___x_2830_;
v_isShared_2833_ = v_isSharedCheck_2837_;
goto v_resetjp_2831_;
}
else
{
lean_dec(v___x_2830_);
v___x_2832_ = lean_box(0);
v_isShared_2833_ = v_isSharedCheck_2837_;
goto v_resetjp_2831_;
}
v_resetjp_2831_:
{
lean_object* v___x_2835_; 
if (v_isShared_2833_ == 0)
{
lean_ctor_set(v___x_2832_, 0, v_a_2824_);
v___x_2835_ = v___x_2832_;
goto v_reusejp_2834_;
}
else
{
lean_object* v_reuseFailAlloc_2836_; 
v_reuseFailAlloc_2836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2836_, 0, v_a_2824_);
v___x_2835_ = v_reuseFailAlloc_2836_;
goto v_reusejp_2834_;
}
v_reusejp_2834_:
{
return v___x_2835_;
}
}
}
else
{
lean_dec(v_a_2824_);
return v___x_2830_;
}
}
}
}
else
{
lean_object* v_a_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; 
v_a_2841_ = lean_ctor_get(v_r_2823_, 0);
lean_inc(v_a_2841_);
lean_dec_ref_known(v_r_2823_, 1);
v___x_2842_ = lean_box(0);
v___x_2843_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__1(v___y_2820_, v___y_2819_, v_a_2815_, v___x_2842_);
if (lean_obj_tag(v___x_2843_) == 0)
{
lean_object* v___x_2845_; uint8_t v_isShared_2846_; uint8_t v_isSharedCheck_2850_; 
v_isSharedCheck_2850_ = !lean_is_exclusive(v___x_2843_);
if (v_isSharedCheck_2850_ == 0)
{
lean_object* v_unused_2851_; 
v_unused_2851_ = lean_ctor_get(v___x_2843_, 0);
lean_dec(v_unused_2851_);
v___x_2845_ = v___x_2843_;
v_isShared_2846_ = v_isSharedCheck_2850_;
goto v_resetjp_2844_;
}
else
{
lean_dec(v___x_2843_);
v___x_2845_ = lean_box(0);
v_isShared_2846_ = v_isSharedCheck_2850_;
goto v_resetjp_2844_;
}
v_resetjp_2844_:
{
lean_object* v___x_2848_; 
if (v_isShared_2846_ == 0)
{
lean_ctor_set_tag(v___x_2845_, 1);
lean_ctor_set(v___x_2845_, 0, v_a_2841_);
v___x_2848_ = v___x_2845_;
goto v_reusejp_2847_;
}
else
{
lean_object* v_reuseFailAlloc_2849_; 
v_reuseFailAlloc_2849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2849_, 0, v_a_2841_);
v___x_2848_ = v_reuseFailAlloc_2849_;
goto v_reusejp_2847_;
}
v_reusejp_2847_:
{
return v___x_2848_;
}
}
}
else
{
lean_dec(v_a_2841_);
return v___x_2843_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2___boxed(lean_object* v_a_2852_, lean_object* v_asyncEnv_2853_, lean_object* v_decl_2854_, lean_object* v_x_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_){
_start:
{
lean_object* v_res_2859_; 
v_res_2859_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2(v_a_2852_, v_asyncEnv_2853_, v_decl_2854_, v_x_2855_, v___y_2856_, v___y_2857_);
lean_dec(v___y_2857_);
lean_dec_ref(v___y_2856_);
lean_dec_ref(v_x_2855_);
return v_res_2859_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__1(void){
_start:
{
lean_object* v___x_2861_; lean_object* v___x_2862_; 
v___x_2861_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__0));
v___x_2862_ = l_Lean_stringToMessageData(v___x_2861_);
return v___x_2862_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3(lean_object* v_decl_2863_, lean_object* v_x_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_){
_start:
{
lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; 
v___x_2868_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___closed__1);
v___x_2869_ = l_Lean_Declaration_getNames(v_decl_2863_);
v___x_2870_ = lean_box(0);
v___x_2871_ = l_List_mapTR_loop___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__0(v___x_2869_, v___x_2870_);
v___x_2872_ = l_Lean_MessageData_ofList(v___x_2871_);
v___x_2873_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2873_, 0, v___x_2868_);
lean_ctor_set(v___x_2873_, 1, v___x_2872_);
v___x_2874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2874_, 0, v___x_2873_);
return v___x_2874_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___boxed(lean_object* v_decl_2875_, lean_object* v_x_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_){
_start:
{
lean_object* v_res_2880_; 
v_res_2880_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3(v_decl_2875_, v_x_2876_, v___y_2877_, v___y_2878_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
lean_dec_ref(v_x_2876_);
return v_res_2880_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(lean_object* v_cls_2883_, lean_object* v_msg_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_){
_start:
{
lean_object* v_ref_2888_; lean_object* v___x_2889_; lean_object* v_a_2890_; lean_object* v___x_2892_; uint8_t v_isShared_2893_; uint8_t v_isSharedCheck_2934_; 
v_ref_2888_ = lean_ctor_get(v___y_2885_, 2);
v___x_2889_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9_spec__12(v_msg_2884_, v___y_2885_, v___y_2886_);
v_a_2890_ = lean_ctor_get(v___x_2889_, 0);
v_isSharedCheck_2934_ = !lean_is_exclusive(v___x_2889_);
if (v_isSharedCheck_2934_ == 0)
{
v___x_2892_ = v___x_2889_;
v_isShared_2893_ = v_isSharedCheck_2934_;
goto v_resetjp_2891_;
}
else
{
lean_inc(v_a_2890_);
lean_dec(v___x_2889_);
v___x_2892_ = lean_box(0);
v_isShared_2893_ = v_isSharedCheck_2934_;
goto v_resetjp_2891_;
}
v_resetjp_2891_:
{
lean_object* v___x_2894_; lean_object* v_traceState_2895_; lean_object* v_env_2896_; lean_object* v_nextMacroScope_2897_; lean_object* v_ngen_2898_; lean_object* v_auxDeclNGen_2899_; lean_object* v_cache_2900_; lean_object* v_messages_2901_; lean_object* v_infoState_2902_; lean_object* v_snapshotTasks_2903_; lean_object* v___x_2905_; uint8_t v_isShared_2906_; uint8_t v_isSharedCheck_2933_; 
v___x_2894_ = lean_st_ref_take(v___y_2886_);
v_traceState_2895_ = lean_ctor_get(v___x_2894_, 4);
v_env_2896_ = lean_ctor_get(v___x_2894_, 0);
v_nextMacroScope_2897_ = lean_ctor_get(v___x_2894_, 1);
v_ngen_2898_ = lean_ctor_get(v___x_2894_, 2);
v_auxDeclNGen_2899_ = lean_ctor_get(v___x_2894_, 3);
v_cache_2900_ = lean_ctor_get(v___x_2894_, 5);
v_messages_2901_ = lean_ctor_get(v___x_2894_, 6);
v_infoState_2902_ = lean_ctor_get(v___x_2894_, 7);
v_snapshotTasks_2903_ = lean_ctor_get(v___x_2894_, 8);
v_isSharedCheck_2933_ = !lean_is_exclusive(v___x_2894_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2905_ = v___x_2894_;
v_isShared_2906_ = v_isSharedCheck_2933_;
goto v_resetjp_2904_;
}
else
{
lean_inc(v_snapshotTasks_2903_);
lean_inc(v_infoState_2902_);
lean_inc(v_messages_2901_);
lean_inc(v_cache_2900_);
lean_inc(v_traceState_2895_);
lean_inc(v_auxDeclNGen_2899_);
lean_inc(v_ngen_2898_);
lean_inc(v_nextMacroScope_2897_);
lean_inc(v_env_2896_);
lean_dec(v___x_2894_);
v___x_2905_ = lean_box(0);
v_isShared_2906_ = v_isSharedCheck_2933_;
goto v_resetjp_2904_;
}
v_resetjp_2904_:
{
uint64_t v_tid_2907_; lean_object* v_traces_2908_; lean_object* v___x_2910_; uint8_t v_isShared_2911_; uint8_t v_isSharedCheck_2932_; 
v_tid_2907_ = lean_ctor_get_uint64(v_traceState_2895_, sizeof(void*)*1);
v_traces_2908_ = lean_ctor_get(v_traceState_2895_, 0);
v_isSharedCheck_2932_ = !lean_is_exclusive(v_traceState_2895_);
if (v_isSharedCheck_2932_ == 0)
{
v___x_2910_ = v_traceState_2895_;
v_isShared_2911_ = v_isSharedCheck_2932_;
goto v_resetjp_2909_;
}
else
{
lean_inc(v_traces_2908_);
lean_dec(v_traceState_2895_);
v___x_2910_ = lean_box(0);
v_isShared_2911_ = v_isSharedCheck_2932_;
goto v_resetjp_2909_;
}
v_resetjp_2909_:
{
lean_object* v___x_2912_; lean_object* v___x_2913_; double v___x_2914_; uint8_t v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2923_; 
v___x_2912_ = lean_box(0);
v___x_2913_ = lean_box(0);
v___x_2914_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2___closed__0);
v___x_2915_ = 0;
v___x_2916_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___closed__0));
v___x_2917_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2917_, 0, v_cls_2883_);
lean_ctor_set(v___x_2917_, 1, v___x_2913_);
lean_ctor_set(v___x_2917_, 2, v___x_2916_);
lean_ctor_set_float(v___x_2917_, sizeof(void*)*3, v___x_2914_);
lean_ctor_set_float(v___x_2917_, sizeof(void*)*3 + 8, v___x_2914_);
lean_ctor_set_uint8(v___x_2917_, sizeof(void*)*3 + 16, v___x_2915_);
v___x_2918_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0___closed__0));
v___x_2919_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2919_, 0, v___x_2917_);
lean_ctor_set(v___x_2919_, 1, v_a_2890_);
lean_ctor_set(v___x_2919_, 2, v___x_2918_);
lean_inc(v_ref_2888_);
v___x_2920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2920_, 0, v_ref_2888_);
lean_ctor_set(v___x_2920_, 1, v___x_2919_);
v___x_2921_ = l_Lean_PersistentArray_push___redArg(v_traces_2908_, v___x_2920_);
if (v_isShared_2911_ == 0)
{
lean_ctor_set(v___x_2910_, 0, v___x_2921_);
v___x_2923_ = v___x_2910_;
goto v_reusejp_2922_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v___x_2921_);
lean_ctor_set_uint64(v_reuseFailAlloc_2931_, sizeof(void*)*1, v_tid_2907_);
v___x_2923_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2922_;
}
v_reusejp_2922_:
{
lean_object* v___x_2925_; 
if (v_isShared_2906_ == 0)
{
lean_ctor_set(v___x_2905_, 4, v___x_2923_);
v___x_2925_ = v___x_2905_;
goto v_reusejp_2924_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v_env_2896_);
lean_ctor_set(v_reuseFailAlloc_2930_, 1, v_nextMacroScope_2897_);
lean_ctor_set(v_reuseFailAlloc_2930_, 2, v_ngen_2898_);
lean_ctor_set(v_reuseFailAlloc_2930_, 3, v_auxDeclNGen_2899_);
lean_ctor_set(v_reuseFailAlloc_2930_, 4, v___x_2923_);
lean_ctor_set(v_reuseFailAlloc_2930_, 5, v_cache_2900_);
lean_ctor_set(v_reuseFailAlloc_2930_, 6, v_messages_2901_);
lean_ctor_set(v_reuseFailAlloc_2930_, 7, v_infoState_2902_);
lean_ctor_set(v_reuseFailAlloc_2930_, 8, v_snapshotTasks_2903_);
v___x_2925_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2924_;
}
v_reusejp_2924_:
{
lean_object* v___x_2926_; lean_object* v___x_2928_; 
v___x_2926_ = lean_st_ref_put(v___y_2886_, v___x_2925_);
if (v_isShared_2893_ == 0)
{
lean_ctor_set(v___x_2892_, 0, v___x_2912_);
v___x_2928_ = v___x_2892_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2929_; 
v_reuseFailAlloc_2929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2929_, 0, v___x_2912_);
v___x_2928_ = v_reuseFailAlloc_2929_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
return v___x_2928_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0___boxed(lean_object* v_cls_2935_, lean_object* v_msg_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_){
_start:
{
lean_object* v_res_2940_; 
v_res_2940_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_2935_, v_msg_2936_, v___y_2937_, v___y_2938_);
lean_dec(v___y_2938_);
lean_dec_ref(v___y_2937_);
return v_res_2940_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1(void){
_start:
{
lean_object* v___x_2942_; lean_object* v___x_2943_; 
v___x_2942_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__0));
v___x_2943_ = l_Lean_stringToMessageData(v___x_2942_);
return v___x_2943_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(lean_object* v_decl_2944_, lean_object* v_cls_2945_, lean_object* v_x_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_){
_start:
{
lean_object* v_toCold_2950_; lean_object* v_options_2951_; uint8_t v_hasTrace_2952_; 
v_toCold_2950_ = lean_ctor_get(v___y_2947_, 0);
v_options_2951_ = lean_ctor_get(v_toCold_2950_, 2);
v_hasTrace_2952_ = lean_ctor_get_uint8(v_options_2951_, sizeof(void*)*1);
if (v_hasTrace_2952_ == 0)
{
lean_object* v___x_2953_; 
lean_dec(v_cls_2945_);
v___x_2953_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_2944_, v___y_2947_, v___y_2948_);
return v___x_2953_;
}
else
{
lean_object* v_inheritedTraceOptions_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; uint8_t v___x_2957_; 
v_inheritedTraceOptions_2954_ = lean_ctor_get(v_toCold_2950_, 11);
v___x_2955_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_2945_);
v___x_2956_ = l_Lean_Name_append(v___x_2955_, v_cls_2945_);
v___x_2957_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2954_, v_options_2951_, v___x_2956_);
lean_dec(v___x_2956_);
if (v___x_2957_ == 0)
{
lean_object* v___x_2958_; 
lean_dec(v_cls_2945_);
v___x_2958_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_2944_, v___y_2947_, v___y_2948_);
return v___x_2958_;
}
else
{
lean_object* v___x_2959_; lean_object* v___x_2960_; 
v___x_2959_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1);
v___x_2960_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_2945_, v___x_2959_, v___y_2947_, v___y_2948_);
if (lean_obj_tag(v___x_2960_) == 0)
{
lean_object* v___x_2961_; 
lean_dec_ref_known(v___x_2960_, 1);
v___x_2961_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_2944_, v___y_2947_, v___y_2948_);
return v___x_2961_;
}
else
{
lean_dec(v_decl_2944_);
return v___x_2960_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___boxed(lean_object* v_decl_2962_, lean_object* v_cls_2963_, lean_object* v_x_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_){
_start:
{
lean_object* v_res_2968_; 
v_res_2968_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(v_decl_2962_, v_cls_2963_, v_x_2964_, v___y_2965_, v___y_2966_);
lean_dec(v___y_2966_);
lean_dec_ref(v___y_2965_);
lean_dec(v_x_2964_);
return v_res_2968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___redArg(lean_object* v_opt_2969_, lean_object* v___y_2970_){
_start:
{
lean_object* v_toCold_2972_; lean_object* v_options_2973_; uint8_t v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; 
v_toCold_2972_ = lean_ctor_get(v___y_2970_, 0);
v_options_2973_ = lean_ctor_get(v_toCold_2972_, 2);
v___x_2974_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_options_2973_, v_opt_2969_);
v___x_2975_ = lean_box(v___x_2974_);
v___x_2976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2976_, 0, v___x_2975_);
return v___x_2976_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___redArg___boxed(lean_object* v_opt_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_){
_start:
{
lean_object* v_res_2980_; 
v_res_2980_ = l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___redArg(v_opt_2977_, v___y_2978_);
lean_dec_ref(v___y_2978_);
lean_dec_ref(v_opt_2977_);
return v_res_2980_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2(lean_object* v_x_2981_){
_start:
{
if (lean_obj_tag(v_x_2981_) == 0)
{
uint8_t v___x_2982_; 
v___x_2982_ = 1;
return v___x_2982_;
}
else
{
lean_object* v_head_2983_; lean_object* v_tail_2984_; uint8_t v___x_2985_; 
v_head_2983_ = lean_ctor_get(v_x_2981_, 0);
v_tail_2984_ = lean_ctor_get(v_x_2981_, 1);
v___x_2985_ = l_Lean_isPrivateName(v_head_2983_);
if (v___x_2985_ == 0)
{
return v___x_2985_;
}
else
{
v_x_2981_ = v_tail_2984_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2___boxed(lean_object* v_x_2987_){
_start:
{
uint8_t v_res_2988_; lean_object* v_r_2989_; 
v_res_2988_ = l_List_all___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2(v_x_2987_);
lean_dec(v_x_2987_);
v_r_2989_ = lean_box(v_res_2988_);
return v_r_2989_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1(void){
_start:
{
lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; 
v___x_2991_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__0));
v___x_2992_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_initFn___closed__8_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_, &l___private_Lean_AddDecl_0__Lean_initFn___closed__8_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2__once, _init_l___private_Lean_AddDecl_0__Lean_initFn___closed__8_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_);
v___x_2993_ = l_Lean_Name_str___override(v___x_2992_, v___x_2991_);
return v___x_2993_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3(void){
_start:
{
lean_object* v___x_2995_; lean_object* v___x_2996_; 
v___x_2995_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__2));
v___x_2996_ = l_Lean_stringToMessageData(v___x_2995_);
return v___x_2996_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5(void){
_start:
{
lean_object* v___x_2998_; lean_object* v___x_2999_; 
v___x_2998_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__4));
v___x_2999_ = l_Lean_stringToMessageData(v___x_2998_);
return v___x_2999_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7(void){
_start:
{
lean_object* v___x_3001_; lean_object* v___x_3002_; 
v___x_3001_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__6));
v___x_3002_ = l_Lean_stringToMessageData(v___x_3001_);
return v___x_3002_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9(lean_object* v_decl_3003_, uint8_t v_hasTrace_3004_, uint8_t v___x_3005_, lean_object* v___x_3006_, lean_object* v_cls_3007_, lean_object* v___x_3008_, lean_object* v_____x_3009_, lean_object* v_exportedInfo_x3f_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_){
_start:
{
lean_object* v___y_3015_; lean_object* v___y_3016_; lean_object* v_a_3017_; lean_object* v___y_3028_; lean_object* v___y_3029_; lean_object* v_a_3030_; lean_object* v___y_3041_; lean_object* v___y_3042_; lean_object* v___y_3043_; lean_object* v___y_3044_; lean_object* v___y_3045_; lean_object* v___y_3046_; lean_object* v___y_3047_; lean_object* v___y_3048_; lean_object* v___y_3049_; lean_object* v___y_3050_; lean_object* v___y_3051_; lean_object* v___y_3052_; lean_object* v_snd_3114_; lean_object* v_fst_3115_; lean_object* v___x_3117_; uint8_t v_isShared_3118_; uint8_t v_isSharedCheck_3244_; 
v_snd_3114_ = lean_ctor_get(v_____x_3009_, 1);
v_fst_3115_ = lean_ctor_get(v_____x_3009_, 0);
v_isSharedCheck_3244_ = !lean_is_exclusive(v_____x_3009_);
if (v_isSharedCheck_3244_ == 0)
{
v___x_3117_ = v_____x_3009_;
v_isShared_3118_ = v_isSharedCheck_3244_;
goto v_resetjp_3116_;
}
else
{
lean_inc(v_snd_3114_);
lean_inc(v_fst_3115_);
lean_dec(v_____x_3009_);
v___x_3117_ = lean_box(0);
v_isShared_3118_ = v_isSharedCheck_3244_;
goto v_resetjp_3116_;
}
v___jp_3014_:
{
lean_object* v___x_3018_; lean_object* v___x_3020_; uint8_t v_isShared_3021_; uint8_t v_isSharedCheck_3025_; 
v___x_3018_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3016_, v___y_3015_);
v_isSharedCheck_3025_ = !lean_is_exclusive(v___x_3018_);
if (v_isSharedCheck_3025_ == 0)
{
lean_object* v_unused_3026_; 
v_unused_3026_ = lean_ctor_get(v___x_3018_, 0);
lean_dec(v_unused_3026_);
v___x_3020_ = v___x_3018_;
v_isShared_3021_ = v_isSharedCheck_3025_;
goto v_resetjp_3019_;
}
else
{
lean_dec(v___x_3018_);
v___x_3020_ = lean_box(0);
v_isShared_3021_ = v_isSharedCheck_3025_;
goto v_resetjp_3019_;
}
v_resetjp_3019_:
{
lean_object* v___x_3023_; 
if (v_isShared_3021_ == 0)
{
lean_ctor_set_tag(v___x_3020_, 1);
lean_ctor_set(v___x_3020_, 0, v_a_3017_);
v___x_3023_ = v___x_3020_;
goto v_reusejp_3022_;
}
else
{
lean_object* v_reuseFailAlloc_3024_; 
v_reuseFailAlloc_3024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3024_, 0, v_a_3017_);
v___x_3023_ = v_reuseFailAlloc_3024_;
goto v_reusejp_3022_;
}
v_reusejp_3022_:
{
return v___x_3023_;
}
}
}
v___jp_3027_:
{
lean_object* v___x_3031_; lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3038_; 
v___x_3031_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3029_, v___y_3028_);
v_isSharedCheck_3038_ = !lean_is_exclusive(v___x_3031_);
if (v_isSharedCheck_3038_ == 0)
{
lean_object* v_unused_3039_; 
v_unused_3039_ = lean_ctor_get(v___x_3031_, 0);
lean_dec(v_unused_3039_);
v___x_3033_ = v___x_3031_;
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
else
{
lean_dec(v___x_3031_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
lean_object* v___x_3036_; 
if (v_isShared_3034_ == 0)
{
lean_ctor_set(v___x_3033_, 0, v_a_3030_);
v___x_3036_ = v___x_3033_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v_a_3030_);
v___x_3036_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
return v___x_3036_;
}
}
}
v___jp_3040_:
{
lean_object* v___x_3053_; 
lean_inc_ref(v___y_3048_);
v___x_3053_ = l_Lean_Environment_AddConstAsyncResult_commitConst(v___y_3051_, v___y_3048_, v___y_3042_, v___y_3052_);
if (lean_obj_tag(v___x_3053_) == 0)
{
lean_object* v___x_3054_; lean_object* v___x_3056_; uint8_t v_isShared_3057_; uint8_t v_isSharedCheck_3100_; 
lean_dec_ref_known(v___x_3053_, 1);
lean_dec(v___y_3046_);
lean_inc_ref(v___y_3050_);
v___x_3054_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3050_, v___y_3045_);
v_isSharedCheck_3100_ = !lean_is_exclusive(v___x_3054_);
if (v_isSharedCheck_3100_ == 0)
{
lean_object* v_unused_3101_; 
v_unused_3101_ = lean_ctor_get(v___x_3054_, 0);
lean_dec(v_unused_3101_);
v___x_3056_ = v___x_3054_;
v_isShared_3057_ = v_isSharedCheck_3100_;
goto v_resetjp_3055_;
}
else
{
lean_dec(v___x_3054_);
v___x_3056_ = lean_box(0);
v_isShared_3057_ = v_isSharedCheck_3100_;
goto v_resetjp_3055_;
}
v_resetjp_3055_:
{
lean_object* v_options_3058_; lean_object* v___x_3059_; uint8_t v___x_3060_; 
v_options_3058_ = lean_ctor_get(v___y_3047_, 2);
v___x_3059_ = l_Lean_Elab_async;
v___x_3060_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_options_3058_, v___x_3059_);
if (v___x_3060_ == 0)
{
lean_object* v___x_3061_; lean_object* v_r_3062_; 
lean_del_object(v___x_3056_);
lean_dec_ref(v___y_3049_);
lean_dec_ref(v___y_3044_);
v___x_3061_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3048_, v___y_3045_);
lean_dec_ref(v___x_3061_);
v_r_3062_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_3003_, v___y_3043_, v___y_3045_);
if (lean_obj_tag(v_r_3062_) == 0)
{
lean_object* v_a_3063_; lean_object* v___x_3065_; uint8_t v_isShared_3066_; uint8_t v_isSharedCheck_3072_; 
v_a_3063_ = lean_ctor_get(v_r_3062_, 0);
v_isSharedCheck_3072_ = !lean_is_exclusive(v_r_3062_);
if (v_isSharedCheck_3072_ == 0)
{
v___x_3065_ = v_r_3062_;
v_isShared_3066_ = v_isSharedCheck_3072_;
goto v_resetjp_3064_;
}
else
{
lean_inc(v_a_3063_);
lean_dec(v_r_3062_);
v___x_3065_ = lean_box(0);
v_isShared_3066_ = v_isSharedCheck_3072_;
goto v_resetjp_3064_;
}
v_resetjp_3064_:
{
lean_object* v___x_3068_; 
lean_inc(v_a_3063_);
if (v_isShared_3066_ == 0)
{
lean_ctor_set_tag(v___x_3065_, 1);
v___x_3068_ = v___x_3065_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3071_; 
v_reuseFailAlloc_3071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3071_, 0, v_a_3063_);
v___x_3068_ = v_reuseFailAlloc_3071_;
goto v_reusejp_3067_;
}
v_reusejp_3067_:
{
lean_object* v___x_3069_; 
v___x_3069_ = lean_apply_2(v___y_3041_, v___x_3068_, lean_box(0));
if (lean_obj_tag(v___x_3069_) == 0)
{
lean_dec_ref_known(v___x_3069_, 1);
v___y_3028_ = v___y_3045_;
v___y_3029_ = v___y_3050_;
v_a_3030_ = v_a_3063_;
goto v___jp_3027_;
}
else
{
lean_object* v_a_3070_; 
lean_dec(v_a_3063_);
v_a_3070_ = lean_ctor_get(v___x_3069_, 0);
lean_inc(v_a_3070_);
lean_dec_ref_known(v___x_3069_, 1);
v___y_3015_ = v___y_3045_;
v___y_3016_ = v___y_3050_;
v_a_3017_ = v_a_3070_;
goto v___jp_3014_;
}
}
}
}
else
{
lean_object* v_a_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; 
v_a_3073_ = lean_ctor_get(v_r_3062_, 0);
lean_inc(v_a_3073_);
lean_dec_ref_known(v_r_3062_, 1);
v___x_3074_ = lean_box(0);
v___x_3075_ = lean_apply_2(v___y_3041_, v___x_3074_, lean_box(0));
if (lean_obj_tag(v___x_3075_) == 0)
{
lean_dec_ref_known(v___x_3075_, 1);
v___y_3015_ = v___y_3045_;
v___y_3016_ = v___y_3050_;
v_a_3017_ = v_a_3073_;
goto v___jp_3014_;
}
else
{
lean_object* v_a_3076_; 
lean_dec(v_a_3073_);
v_a_3076_ = lean_ctor_get(v___x_3075_, 0);
lean_inc(v_a_3076_);
lean_dec_ref_known(v___x_3075_, 1);
v___y_3015_ = v___y_3045_;
v___y_3016_ = v___y_3050_;
v_a_3017_ = v_a_3076_;
goto v___jp_3014_;
}
}
}
else
{
lean_object* v___x_3077_; lean_object* v___x_3079_; 
lean_dec_ref(v___y_3050_);
lean_dec_ref(v___y_3048_);
lean_dec_ref(v___y_3041_);
lean_dec(v_decl_3003_);
v___x_3077_ = l_IO_CancelToken_new();
if (v_isShared_3057_ == 0)
{
lean_ctor_set_tag(v___x_3056_, 1);
lean_ctor_set(v___x_3056_, 0, v___x_3077_);
v___x_3079_ = v___x_3056_;
goto v_reusejp_3078_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v___x_3077_);
v___x_3079_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3078_;
}
v_reusejp_3078_:
{
lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; 
v___x_3080_ = lean_unsigned_to_nat(0u);
v___x_3081_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1);
v___x_3082_ = l_Lean_Name_toString(v___x_3081_, v_hasTrace_3004_);
lean_inc_ref(v___x_3079_);
v___x_3083_ = l_Lean_Core_wrapAsyncAsSnapshot___redArg(v___y_3044_, v___x_3079_, v___x_3082_, v___y_3043_, v___y_3045_);
if (lean_obj_tag(v___x_3083_) == 0)
{
lean_object* v_a_3084_; lean_object* v_checked_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; 
v_a_3084_ = lean_ctor_get(v___x_3083_, 0);
lean_inc(v_a_3084_);
lean_dec_ref_known(v___x_3083_, 1);
v_checked_3085_ = lean_ctor_get(v___y_3049_, 2);
lean_inc_ref(v_checked_3085_);
lean_dec_ref(v___y_3049_);
v___x_3086_ = lean_io_map_task(v_a_3084_, v_checked_3085_, v___x_3080_, v___x_3005_);
v___x_3087_ = lean_box(0);
v___x_3088_ = lean_box(2);
v___x_3089_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3087_);
lean_ctor_set(v___x_3089_, 1, v___x_3088_);
lean_ctor_set(v___x_3089_, 2, v___x_3079_);
lean_ctor_set(v___x_3089_, 3, v___x_3086_);
v___x_3090_ = l_Lean_Core_logSnapshotTask___redArg(v___x_3089_, v___y_3045_);
return v___x_3090_;
}
else
{
lean_object* v_a_3091_; lean_object* v___x_3093_; uint8_t v_isShared_3094_; uint8_t v_isSharedCheck_3098_; 
lean_dec_ref(v___x_3079_);
lean_dec_ref(v___y_3049_);
v_a_3091_ = lean_ctor_get(v___x_3083_, 0);
v_isSharedCheck_3098_ = !lean_is_exclusive(v___x_3083_);
if (v_isSharedCheck_3098_ == 0)
{
v___x_3093_ = v___x_3083_;
v_isShared_3094_ = v_isSharedCheck_3098_;
goto v_resetjp_3092_;
}
else
{
lean_inc(v_a_3091_);
lean_dec(v___x_3083_);
v___x_3093_ = lean_box(0);
v_isShared_3094_ = v_isSharedCheck_3098_;
goto v_resetjp_3092_;
}
v_resetjp_3092_:
{
lean_object* v___x_3096_; 
if (v_isShared_3094_ == 0)
{
v___x_3096_ = v___x_3093_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3097_; 
v_reuseFailAlloc_3097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3097_, 0, v_a_3091_);
v___x_3096_ = v_reuseFailAlloc_3097_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
return v___x_3096_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3102_; lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3113_; 
lean_dec_ref(v___y_3050_);
lean_dec_ref(v___y_3049_);
lean_dec_ref(v___y_3048_);
lean_dec_ref(v___y_3044_);
lean_dec_ref(v___y_3041_);
lean_dec(v_decl_3003_);
v_a_3102_ = lean_ctor_get(v___x_3053_, 0);
v_isSharedCheck_3113_ = !lean_is_exclusive(v___x_3053_);
if (v_isSharedCheck_3113_ == 0)
{
v___x_3104_ = v___x_3053_;
v_isShared_3105_ = v_isSharedCheck_3113_;
goto v_resetjp_3103_;
}
else
{
lean_inc(v_a_3102_);
lean_dec(v___x_3053_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3113_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3111_; 
v___x_3106_ = lean_io_error_to_string(v_a_3102_);
v___x_3107_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3107_, 0, v___x_3106_);
v___x_3108_ = l_Lean_MessageData_ofFormat(v___x_3107_);
v___x_3109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3109_, 0, v___y_3046_);
lean_ctor_set(v___x_3109_, 1, v___x_3108_);
if (v_isShared_3105_ == 0)
{
lean_ctor_set(v___x_3104_, 0, v___x_3109_);
v___x_3111_ = v___x_3104_;
goto v_reusejp_3110_;
}
else
{
lean_object* v_reuseFailAlloc_3112_; 
v_reuseFailAlloc_3112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3112_, 0, v___x_3109_);
v___x_3111_ = v_reuseFailAlloc_3112_;
goto v_reusejp_3110_;
}
v_reusejp_3110_:
{
return v___x_3111_;
}
}
}
}
v_resetjp_3116_:
{
lean_object* v_fst_3119_; lean_object* v_snd_3120_; lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3243_; 
v_fst_3119_ = lean_ctor_get(v_snd_3114_, 0);
v_snd_3120_ = lean_ctor_get(v_snd_3114_, 1);
v_isSharedCheck_3243_ = !lean_is_exclusive(v_snd_3114_);
if (v_isSharedCheck_3243_ == 0)
{
v___x_3122_ = v_snd_3114_;
v_isShared_3123_ = v_isSharedCheck_3243_;
goto v_resetjp_3121_;
}
else
{
lean_inc(v_snd_3120_);
lean_inc(v_fst_3119_);
lean_dec(v_snd_3114_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3243_;
goto v_resetjp_3121_;
}
v_resetjp_3121_:
{
lean_object* v___y_3125_; lean_object* v___y_3126_; lean_object* v___y_3127_; lean_object* v___y_3128_; lean_object* v___y_3129_; lean_object* v_exportedInfo_x3f_3155_; lean_object* v___y_3156_; lean_object* v___y_3157_; lean_object* v___y_3167_; lean_object* v___y_3168_; lean_object* v___y_3171_; lean_object* v___y_3172_; lean_object* v___y_3175_; lean_object* v___y_3176_; lean_object* v___y_3198_; lean_object* v___y_3199_; lean_object* v___x_3233_; lean_object* v_env_3234_; uint8_t v___x_3235_; 
v___x_3233_ = lean_st_ref_get(v___y_3012_);
v_env_3234_ = lean_ctor_get(v___x_3233_, 0);
lean_inc_ref(v_env_3234_);
lean_dec(v___x_3233_);
v___x_3235_ = l_Lean_Environment_containsOnBranch(v_env_3234_, v_fst_3115_);
lean_dec_ref(v_env_3234_);
if (v___x_3235_ == 0)
{
lean_del_object(v___x_3117_);
v___y_3198_ = v___y_3011_;
v___y_3199_ = v___y_3012_;
goto v___jp_3197_;
}
else
{
lean_object* v___x_3236_; lean_object* v_env_3237_; lean_object* v___x_3238_; lean_object* v___x_3240_; 
lean_del_object(v___x_3122_);
lean_dec(v_snd_3120_);
lean_dec(v_fst_3119_);
lean_dec(v_exportedInfo_x3f_3010_);
lean_dec(v___x_3008_);
lean_dec(v_cls_3007_);
lean_dec_ref(v___x_3006_);
lean_dec(v_decl_3003_);
v___x_3236_ = lean_st_ref_get(v___y_3012_);
v_env_3237_ = lean_ctor_get(v___x_3236_, 0);
lean_inc_ref(v_env_3237_);
lean_dec(v___x_3236_);
v___x_3238_ = lean_elab_environment_to_kernel_env(v_env_3237_);
if (v_isShared_3118_ == 0)
{
lean_ctor_set_tag(v___x_3117_, 1);
lean_ctor_set(v___x_3117_, 1, v_fst_3115_);
lean_ctor_set(v___x_3117_, 0, v___x_3238_);
v___x_3240_ = v___x_3117_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v___x_3238_);
lean_ctor_set(v_reuseFailAlloc_3242_, 1, v_fst_3115_);
v___x_3240_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
lean_object* v___x_3241_; 
v___x_3241_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(v___x_3240_, v___y_3011_, v___y_3012_);
return v___x_3241_;
}
}
v___jp_3124_:
{
lean_object* v_toCold_3130_; lean_object* v_ref_3131_; uint8_t v___x_3132_; lean_object* v___x_3133_; 
v_toCold_3130_ = lean_ctor_get(v___y_3125_, 0);
v_ref_3131_ = lean_ctor_get(v___y_3125_, 2);
v___x_3132_ = lean_unbox(v_snd_3120_);
lean_dec(v_snd_3120_);
lean_inc_ref(v___y_3128_);
v___x_3133_ = l_Lean_Environment_addConstAsync(v___y_3128_, v_fst_3115_, v___x_3132_, v___y_3129_, v___x_3005_, v_hasTrace_3004_);
if (lean_obj_tag(v___x_3133_) == 0)
{
lean_object* v_a_3134_; lean_object* v_mainEnv_3135_; lean_object* v_asyncEnv_3136_; lean_object* v___f_3137_; lean_object* v___f_3138_; lean_object* v___x_3139_; 
lean_del_object(v___x_3122_);
v_a_3134_ = lean_ctor_get(v___x_3133_, 0);
lean_inc_n(v_a_3134_, 3);
lean_dec_ref_known(v___x_3133_, 1);
v_mainEnv_3135_ = lean_ctor_get(v_a_3134_, 0);
lean_inc_ref(v_mainEnv_3135_);
v_asyncEnv_3136_ = lean_ctor_get(v_a_3134_, 1);
lean_inc_ref_n(v_asyncEnv_3136_, 2);
lean_inc(v_ref_3131_);
lean_inc(v___y_3127_);
v___f_3137_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3137_, 0, v___y_3127_);
lean_closure_set(v___f_3137_, 1, v_a_3134_);
lean_closure_set(v___f_3137_, 2, v_ref_3131_);
lean_inc(v_decl_3003_);
v___f_3138_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2___boxed), 7, 3);
lean_closure_set(v___f_3138_, 0, v_a_3134_);
lean_closure_set(v___f_3138_, 1, v_asyncEnv_3136_);
lean_closure_set(v___f_3138_, 2, v_decl_3003_);
v___x_3139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3139_, 0, v_fst_3119_);
if (lean_obj_tag(v___y_3126_) == 0)
{
lean_inc(v_ref_3131_);
lean_inc_ref(v___x_3139_);
v___y_3041_ = v___f_3137_;
v___y_3042_ = v___x_3139_;
v___y_3043_ = v___y_3125_;
v___y_3044_ = v___f_3138_;
v___y_3045_ = v___y_3127_;
v___y_3046_ = v_ref_3131_;
v___y_3047_ = v_toCold_3130_;
v___y_3048_ = v_asyncEnv_3136_;
v___y_3049_ = v___y_3128_;
v___y_3050_ = v_mainEnv_3135_;
v___y_3051_ = v_a_3134_;
v___y_3052_ = v___x_3139_;
goto v___jp_3040_;
}
else
{
lean_inc(v_ref_3131_);
v___y_3041_ = v___f_3137_;
v___y_3042_ = v___x_3139_;
v___y_3043_ = v___y_3125_;
v___y_3044_ = v___f_3138_;
v___y_3045_ = v___y_3127_;
v___y_3046_ = v_ref_3131_;
v___y_3047_ = v_toCold_3130_;
v___y_3048_ = v_asyncEnv_3136_;
v___y_3049_ = v___y_3128_;
v___y_3050_ = v_mainEnv_3135_;
v___y_3051_ = v_a_3134_;
v___y_3052_ = v___y_3126_;
goto v___jp_3040_;
}
}
else
{
lean_object* v_a_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3153_; 
lean_dec_ref(v___y_3128_);
lean_dec(v___y_3126_);
lean_dec(v_fst_3119_);
lean_dec(v_decl_3003_);
v_a_3140_ = lean_ctor_get(v___x_3133_, 0);
v_isSharedCheck_3153_ = !lean_is_exclusive(v___x_3133_);
if (v_isSharedCheck_3153_ == 0)
{
v___x_3142_ = v___x_3133_;
v_isShared_3143_ = v_isSharedCheck_3153_;
goto v_resetjp_3141_;
}
else
{
lean_inc(v_a_3140_);
lean_dec(v___x_3133_);
v___x_3142_ = lean_box(0);
v_isShared_3143_ = v_isSharedCheck_3153_;
goto v_resetjp_3141_;
}
v_resetjp_3141_:
{
lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3148_; 
v___x_3144_ = lean_io_error_to_string(v_a_3140_);
v___x_3145_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3145_, 0, v___x_3144_);
v___x_3146_ = l_Lean_MessageData_ofFormat(v___x_3145_);
lean_inc(v_ref_3131_);
if (v_isShared_3123_ == 0)
{
lean_ctor_set(v___x_3122_, 1, v___x_3146_);
lean_ctor_set(v___x_3122_, 0, v_ref_3131_);
v___x_3148_ = v___x_3122_;
goto v_reusejp_3147_;
}
else
{
lean_object* v_reuseFailAlloc_3152_; 
v_reuseFailAlloc_3152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3152_, 0, v_ref_3131_);
lean_ctor_set(v_reuseFailAlloc_3152_, 1, v___x_3146_);
v___x_3148_ = v_reuseFailAlloc_3152_;
goto v_reusejp_3147_;
}
v_reusejp_3147_:
{
lean_object* v___x_3150_; 
if (v_isShared_3143_ == 0)
{
lean_ctor_set(v___x_3142_, 0, v___x_3148_);
v___x_3150_ = v___x_3142_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v___x_3148_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
return v___x_3150_;
}
}
}
}
}
v___jp_3154_:
{
lean_object* v___x_3158_; 
v___x_3158_ = lean_st_ref_get(v___y_3157_);
if (lean_obj_tag(v_exportedInfo_x3f_3155_) == 0)
{
lean_object* v_env_3159_; lean_object* v___x_3160_; 
v_env_3159_ = lean_ctor_get(v___x_3158_, 0);
lean_inc_ref(v_env_3159_);
lean_dec(v___x_3158_);
v___x_3160_ = lean_box(0);
v___y_3125_ = v___y_3156_;
v___y_3126_ = v_exportedInfo_x3f_3155_;
v___y_3127_ = v___y_3157_;
v___y_3128_ = v_env_3159_;
v___y_3129_ = v___x_3160_;
goto v___jp_3124_;
}
else
{
lean_object* v_env_3161_; lean_object* v_val_3162_; uint8_t v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; 
v_env_3161_ = lean_ctor_get(v___x_3158_, 0);
lean_inc_ref(v_env_3161_);
lean_dec(v___x_3158_);
v_val_3162_ = lean_ctor_get(v_exportedInfo_x3f_3155_, 0);
v___x_3163_ = l_Lean_ConstantKind_ofConstantInfo(v_val_3162_);
v___x_3164_ = lean_box(v___x_3163_);
v___x_3165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3165_, 0, v___x_3164_);
v___y_3125_ = v___y_3156_;
v___y_3126_ = v_exportedInfo_x3f_3155_;
v___y_3127_ = v___y_3157_;
v___y_3128_ = v_env_3161_;
v___y_3129_ = v___x_3165_;
goto v___jp_3124_;
}
}
v___jp_3166_:
{
lean_object* v___x_3169_; 
lean_inc(v_fst_3119_);
v___x_3169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3169_, 0, v_fst_3119_);
v_exportedInfo_x3f_3155_ = v___x_3169_;
v___y_3156_ = v___y_3167_;
v___y_3157_ = v___y_3168_;
goto v___jp_3154_;
}
v___jp_3170_:
{
lean_object* v___x_3173_; 
lean_inc(v_fst_3119_);
v___x_3173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3173_, 0, v_fst_3119_);
v_exportedInfo_x3f_3155_ = v___x_3173_;
v___y_3156_ = v___y_3171_;
v___y_3157_ = v___y_3172_;
goto v___jp_3154_;
}
v___jp_3174_:
{
lean_object* v___x_3177_; lean_object* v_env_3178_; lean_object* v_nextMacroScope_3179_; lean_object* v_ngen_3180_; lean_object* v_auxDeclNGen_3181_; lean_object* v_traceState_3182_; lean_object* v_messages_3183_; lean_object* v_infoState_3184_; lean_object* v_snapshotTasks_3185_; lean_object* v___x_3187_; uint8_t v_isShared_3188_; uint8_t v_isSharedCheck_3195_; 
v___x_3177_ = lean_st_ref_take(v___y_3175_);
v_env_3178_ = lean_ctor_get(v___x_3177_, 0);
v_nextMacroScope_3179_ = lean_ctor_get(v___x_3177_, 1);
v_ngen_3180_ = lean_ctor_get(v___x_3177_, 2);
v_auxDeclNGen_3181_ = lean_ctor_get(v___x_3177_, 3);
v_traceState_3182_ = lean_ctor_get(v___x_3177_, 4);
v_messages_3183_ = lean_ctor_get(v___x_3177_, 6);
v_infoState_3184_ = lean_ctor_get(v___x_3177_, 7);
v_snapshotTasks_3185_ = lean_ctor_get(v___x_3177_, 8);
v_isSharedCheck_3195_ = !lean_is_exclusive(v___x_3177_);
if (v_isSharedCheck_3195_ == 0)
{
lean_object* v_unused_3196_; 
v_unused_3196_ = lean_ctor_get(v___x_3177_, 5);
lean_dec(v_unused_3196_);
v___x_3187_ = v___x_3177_;
v_isShared_3188_ = v_isSharedCheck_3195_;
goto v_resetjp_3186_;
}
else
{
lean_inc(v_snapshotTasks_3185_);
lean_inc(v_infoState_3184_);
lean_inc(v_messages_3183_);
lean_inc(v_traceState_3182_);
lean_inc(v_auxDeclNGen_3181_);
lean_inc(v_ngen_3180_);
lean_inc(v_nextMacroScope_3179_);
lean_inc(v_env_3178_);
lean_dec(v___x_3177_);
v___x_3187_ = lean_box(0);
v_isShared_3188_ = v_isSharedCheck_3195_;
goto v_resetjp_3186_;
}
v_resetjp_3186_:
{
lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3192_; 
v___x_3189_ = l___private_Lean_OriginalConstKind_0__Lean_privateConstKindsExt;
lean_inc(v_snd_3120_);
lean_inc(v_fst_3115_);
v___x_3190_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_3189_, v_env_3178_, v_fst_3115_, v_snd_3120_);
if (v_isShared_3188_ == 0)
{
lean_ctor_set(v___x_3187_, 5, v___x_3006_);
lean_ctor_set(v___x_3187_, 0, v___x_3190_);
v___x_3192_ = v___x_3187_;
goto v_reusejp_3191_;
}
else
{
lean_object* v_reuseFailAlloc_3194_; 
v_reuseFailAlloc_3194_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3194_, 0, v___x_3190_);
lean_ctor_set(v_reuseFailAlloc_3194_, 1, v_nextMacroScope_3179_);
lean_ctor_set(v_reuseFailAlloc_3194_, 2, v_ngen_3180_);
lean_ctor_set(v_reuseFailAlloc_3194_, 3, v_auxDeclNGen_3181_);
lean_ctor_set(v_reuseFailAlloc_3194_, 4, v_traceState_3182_);
lean_ctor_set(v_reuseFailAlloc_3194_, 5, v___x_3006_);
lean_ctor_set(v_reuseFailAlloc_3194_, 6, v_messages_3183_);
lean_ctor_set(v_reuseFailAlloc_3194_, 7, v_infoState_3184_);
lean_ctor_set(v_reuseFailAlloc_3194_, 8, v_snapshotTasks_3185_);
v___x_3192_ = v_reuseFailAlloc_3194_;
goto v_reusejp_3191_;
}
v_reusejp_3191_:
{
lean_object* v___x_3193_; 
v___x_3193_ = lean_st_ref_put(v___y_3175_, v___x_3192_);
v_exportedInfo_x3f_3155_ = v_exportedInfo_x3f_3010_;
v___y_3156_ = v___y_3176_;
v___y_3157_ = v___y_3175_;
goto v___jp_3154_;
}
}
}
v___jp_3197_:
{
lean_object* v___x_3200_; uint8_t v___x_3201_; 
lean_inc(v_decl_3003_);
v___x_3200_ = l_Lean_Declaration_getTopLevelNames(v_decl_3003_);
v___x_3201_ = l_List_all___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2(v___x_3200_);
lean_dec(v___x_3200_);
if (v___x_3201_ == 0)
{
lean_dec(v___x_3008_);
if (lean_obj_tag(v_exportedInfo_x3f_3010_) == 0)
{
if (v___x_3201_ == 0)
{
lean_object* v_toCold_3202_; lean_object* v_options_3203_; uint8_t v_hasTrace_3204_; 
lean_dec_ref(v___x_3006_);
v_toCold_3202_ = lean_ctor_get(v___y_3198_, 0);
v_options_3203_ = lean_ctor_get(v_toCold_3202_, 2);
v_hasTrace_3204_ = lean_ctor_get_uint8(v_options_3203_, sizeof(void*)*1);
if (v_hasTrace_3204_ == 0)
{
lean_dec(v_cls_3007_);
v___y_3167_ = v___y_3198_;
v___y_3168_ = v___y_3199_;
goto v___jp_3166_;
}
else
{
lean_object* v_inheritedTraceOptions_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; uint8_t v___x_3208_; 
v_inheritedTraceOptions_3205_ = lean_ctor_get(v_toCold_3202_, 11);
v___x_3206_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_3007_);
v___x_3207_ = l_Lean_Name_append(v___x_3206_, v_cls_3007_);
v___x_3208_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3205_, v_options_3203_, v___x_3207_);
lean_dec(v___x_3207_);
if (v___x_3208_ == 0)
{
lean_dec(v_cls_3007_);
v___y_3167_ = v___y_3198_;
v___y_3168_ = v___y_3199_;
goto v___jp_3166_;
}
else
{
lean_object* v___x_3209_; lean_object* v___x_3210_; 
v___x_3209_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3);
v___x_3210_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3007_, v___x_3209_, v___y_3198_, v___y_3199_);
if (lean_obj_tag(v___x_3210_) == 0)
{
lean_dec_ref_known(v___x_3210_, 1);
v___y_3167_ = v___y_3198_;
v___y_3168_ = v___y_3199_;
goto v___jp_3166_;
}
else
{
lean_del_object(v___x_3122_);
lean_dec(v_snd_3120_);
lean_dec(v_fst_3119_);
lean_dec(v_fst_3115_);
lean_dec(v_decl_3003_);
return v___x_3210_;
}
}
}
}
else
{
lean_dec(v_cls_3007_);
v___y_3175_ = v___y_3199_;
v___y_3176_ = v___y_3198_;
goto v___jp_3174_;
}
}
else
{
lean_dec(v_cls_3007_);
v___y_3175_ = v___y_3199_;
v___y_3176_ = v___y_3198_;
goto v___jp_3174_;
}
}
else
{
lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v_a_3213_; uint8_t v___x_3214_; 
lean_dec(v_exportedInfo_x3f_3010_);
lean_dec_ref(v___x_3006_);
v___x_3211_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_3212_ = l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___redArg(v___x_3211_, v___y_3198_);
v_a_3213_ = lean_ctor_get(v___x_3212_, 0);
lean_inc(v_a_3213_);
lean_dec_ref(v___x_3212_);
v___x_3214_ = lean_unbox(v_a_3213_);
lean_dec(v_a_3213_);
if (v___x_3214_ == 0)
{
lean_object* v_toCold_3215_; lean_object* v_options_3216_; uint8_t v_hasTrace_3217_; 
v_toCold_3215_ = lean_ctor_get(v___y_3198_, 0);
v_options_3216_ = lean_ctor_get(v_toCold_3215_, 2);
v_hasTrace_3217_ = lean_ctor_get_uint8(v_options_3216_, sizeof(void*)*1);
if (v_hasTrace_3217_ == 0)
{
lean_dec(v_cls_3007_);
v_exportedInfo_x3f_3155_ = v___x_3008_;
v___y_3156_ = v___y_3198_;
v___y_3157_ = v___y_3199_;
goto v___jp_3154_;
}
else
{
lean_object* v_inheritedTraceOptions_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; uint8_t v___x_3221_; 
v_inheritedTraceOptions_3218_ = lean_ctor_get(v_toCold_3215_, 11);
v___x_3219_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_3007_);
v___x_3220_ = l_Lean_Name_append(v___x_3219_, v_cls_3007_);
v___x_3221_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3218_, v_options_3216_, v___x_3220_);
lean_dec(v___x_3220_);
if (v___x_3221_ == 0)
{
lean_dec(v_cls_3007_);
v_exportedInfo_x3f_3155_ = v___x_3008_;
v___y_3156_ = v___y_3198_;
v___y_3157_ = v___y_3199_;
goto v___jp_3154_;
}
else
{
lean_object* v___x_3222_; lean_object* v___x_3223_; 
v___x_3222_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5);
v___x_3223_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3007_, v___x_3222_, v___y_3198_, v___y_3199_);
if (lean_obj_tag(v___x_3223_) == 0)
{
lean_dec_ref_known(v___x_3223_, 1);
v_exportedInfo_x3f_3155_ = v___x_3008_;
v___y_3156_ = v___y_3198_;
v___y_3157_ = v___y_3199_;
goto v___jp_3154_;
}
else
{
lean_del_object(v___x_3122_);
lean_dec(v_snd_3120_);
lean_dec(v_fst_3119_);
lean_dec(v_fst_3115_);
lean_dec(v___x_3008_);
lean_dec(v_decl_3003_);
return v___x_3223_;
}
}
}
}
else
{
lean_object* v_toCold_3224_; lean_object* v_options_3225_; uint8_t v_hasTrace_3226_; 
lean_dec(v___x_3008_);
v_toCold_3224_ = lean_ctor_get(v___y_3198_, 0);
v_options_3225_ = lean_ctor_get(v_toCold_3224_, 2);
v_hasTrace_3226_ = lean_ctor_get_uint8(v_options_3225_, sizeof(void*)*1);
if (v_hasTrace_3226_ == 0)
{
lean_dec(v_cls_3007_);
v___y_3171_ = v___y_3198_;
v___y_3172_ = v___y_3199_;
goto v___jp_3170_;
}
else
{
lean_object* v_inheritedTraceOptions_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; uint8_t v___x_3230_; 
v_inheritedTraceOptions_3227_ = lean_ctor_get(v_toCold_3224_, 11);
v___x_3228_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_3007_);
v___x_3229_ = l_Lean_Name_append(v___x_3228_, v_cls_3007_);
v___x_3230_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3227_, v_options_3225_, v___x_3229_);
lean_dec(v___x_3229_);
if (v___x_3230_ == 0)
{
lean_dec(v_cls_3007_);
v___y_3171_ = v___y_3198_;
v___y_3172_ = v___y_3199_;
goto v___jp_3170_;
}
else
{
lean_object* v___x_3231_; lean_object* v___x_3232_; 
v___x_3231_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7);
v___x_3232_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3007_, v___x_3231_, v___y_3198_, v___y_3199_);
if (lean_obj_tag(v___x_3232_) == 0)
{
lean_dec_ref_known(v___x_3232_, 1);
v___y_3171_ = v___y_3198_;
v___y_3172_ = v___y_3199_;
goto v___jp_3170_;
}
else
{
lean_del_object(v___x_3122_);
lean_dec(v_snd_3120_);
lean_dec(v_fst_3119_);
lean_dec(v_fst_3115_);
lean_dec(v_decl_3003_);
return v___x_3232_;
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
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___boxed(lean_object* v_decl_3245_, lean_object* v_hasTrace_3246_, lean_object* v___x_3247_, lean_object* v___x_3248_, lean_object* v_cls_3249_, lean_object* v___x_3250_, lean_object* v_____x_3251_, lean_object* v_exportedInfo_x3f_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_){
_start:
{
uint8_t v_hasTrace_boxed_3256_; uint8_t v___x_53169__boxed_3257_; lean_object* v_res_3258_; 
v_hasTrace_boxed_3256_ = lean_unbox(v_hasTrace_3246_);
v___x_53169__boxed_3257_ = lean_unbox(v___x_3247_);
v_res_3258_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9(v_decl_3245_, v_hasTrace_boxed_3256_, v___x_53169__boxed_3257_, v___x_3248_, v_cls_3249_, v___x_3250_, v_____x_3251_, v_exportedInfo_x3f_3252_, v___y_3253_, v___y_3254_);
lean_dec(v___y_3254_);
lean_dec_ref(v___y_3253_);
return v_res_3258_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1(void){
_start:
{
lean_object* v___x_3260_; lean_object* v___x_3261_; 
v___x_3260_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__0));
v___x_3261_ = l_Lean_stringToMessageData(v___x_3260_);
return v___x_3261_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3(void){
_start:
{
lean_object* v___x_3263_; lean_object* v___x_3264_; 
v___x_3263_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__2));
v___x_3264_ = l_Lean_stringToMessageData(v___x_3263_);
return v___x_3264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5(lean_object* v___f_3265_, uint8_t v___x_3266_, lean_object* v_cls_3267_, lean_object* v___x_3268_, uint8_t v_forceExpose_3269_, lean_object* v_defn_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_){
_start:
{
lean_object* v_exportedInfo_x3f_3275_; lean_object* v___y_3276_; lean_object* v___y_3277_; lean_object* v___y_3287_; lean_object* v___y_3288_; lean_object* v___y_3289_; uint8_t v___y_3290_; uint8_t v___y_3295_; lean_object* v___x_3300_; lean_object* v_env_3301_; lean_object* v___x_3302_; uint8_t v___y_3304_; lean_object* v_env_3320_; 
v___x_3300_ = lean_st_ref_get(v___y_3272_);
v_env_3301_ = lean_ctor_get(v___x_3300_, 0);
lean_inc_ref(v_env_3301_);
lean_dec(v___x_3300_);
v___x_3302_ = lean_st_ref_get(v___y_3272_);
v_env_3320_ = lean_ctor_get(v___x_3302_, 0);
lean_inc_ref(v_env_3320_);
lean_dec(v___x_3302_);
if (v_forceExpose_3269_ == 0)
{
goto v___jp_3321_;
}
else
{
if (v___x_3266_ == 0)
{
lean_dec_ref(v_env_3320_);
lean_dec_ref(v_env_3301_);
lean_dec(v_cls_3267_);
v_exportedInfo_x3f_3275_ = v___x_3268_;
v___y_3276_ = v___y_3271_;
v___y_3277_ = v___y_3272_;
goto v___jp_3274_;
}
else
{
goto v___jp_3321_;
}
}
v___jp_3274_:
{
lean_object* v_toConstantVal_3278_; lean_object* v_name_3279_; lean_object* v___x_3280_; uint8_t v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; 
v_toConstantVal_3278_ = lean_ctor_get(v_defn_3270_, 0);
v_name_3279_ = lean_ctor_get(v_toConstantVal_3278_, 0);
lean_inc(v_name_3279_);
v___x_3280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3280_, 0, v_defn_3270_);
v___x_3281_ = 0;
v___x_3282_ = lean_box(v___x_3281_);
v___x_3283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3283_, 0, v___x_3280_);
lean_ctor_set(v___x_3283_, 1, v___x_3282_);
v___x_3284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3284_, 0, v_name_3279_);
lean_ctor_set(v___x_3284_, 1, v___x_3283_);
lean_inc(v___y_3277_);
lean_inc_ref(v___y_3276_);
v___x_3285_ = lean_apply_5(v___f_3265_, v___x_3284_, v_exportedInfo_x3f_3275_, v___y_3276_, v___y_3277_, lean_box(0));
return v___x_3285_;
}
v___jp_3286_:
{
lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; 
v___x_3291_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3291_, 0, v___y_3288_);
lean_ctor_set_uint8(v___x_3291_, sizeof(void*)*1, v___y_3290_);
v___x_3292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3292_, 0, v___x_3291_);
v___x_3293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3293_, 0, v___x_3292_);
v_exportedInfo_x3f_3275_ = v___x_3293_;
v___y_3276_ = v___y_3289_;
v___y_3277_ = v___y_3287_;
goto v___jp_3274_;
}
v___jp_3294_:
{
lean_object* v_toConstantVal_3296_; uint8_t v_safety_3297_; uint8_t v___x_3298_; uint8_t v___x_3299_; 
v_toConstantVal_3296_ = lean_ctor_get(v_defn_3270_, 0);
v_safety_3297_ = lean_ctor_get_uint8(v_defn_3270_, sizeof(void*)*4);
v___x_3298_ = 1;
v___x_3299_ = l_Lean_instBEqDefinitionSafety_beq(v_safety_3297_, v___x_3298_);
if (v___x_3299_ == 0)
{
lean_inc_ref(v_toConstantVal_3296_);
v___y_3287_ = v___y_3272_;
v___y_3288_ = v_toConstantVal_3296_;
v___y_3289_ = v___y_3271_;
v___y_3290_ = v___y_3295_;
goto v___jp_3286_;
}
else
{
lean_inc_ref(v_toConstantVal_3296_);
v___y_3287_ = v___y_3272_;
v___y_3288_ = v_toConstantVal_3296_;
v___y_3289_ = v___y_3271_;
v___y_3290_ = v___x_3266_;
goto v___jp_3286_;
}
}
v___jp_3303_:
{
lean_object* v_toCold_3305_; lean_object* v_options_3306_; uint8_t v_hasTrace_3307_; 
v_toCold_3305_ = lean_ctor_get(v___y_3271_, 0);
v_options_3306_ = lean_ctor_get(v_toCold_3305_, 2);
v_hasTrace_3307_ = lean_ctor_get_uint8(v_options_3306_, sizeof(void*)*1);
if (v_hasTrace_3307_ == 0)
{
lean_dec(v_cls_3267_);
v___y_3295_ = v___y_3304_;
goto v___jp_3294_;
}
else
{
lean_object* v_inheritedTraceOptions_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; uint8_t v___x_3311_; 
v_inheritedTraceOptions_3308_ = lean_ctor_get(v_toCold_3305_, 11);
v___x_3309_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_3267_);
v___x_3310_ = l_Lean_Name_append(v___x_3309_, v_cls_3267_);
v___x_3311_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3308_, v_options_3306_, v___x_3310_);
lean_dec(v___x_3310_);
if (v___x_3311_ == 0)
{
lean_dec(v_cls_3267_);
v___y_3295_ = v___y_3304_;
goto v___jp_3294_;
}
else
{
lean_object* v_toConstantVal_3312_; lean_object* v_name_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; 
v_toConstantVal_3312_ = lean_ctor_get(v_defn_3270_, 0);
v_name_3313_ = lean_ctor_get(v_toConstantVal_3312_, 0);
v___x_3314_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1);
lean_inc(v_name_3313_);
v___x_3315_ = l_Lean_MessageData_ofName(v_name_3313_);
v___x_3316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3316_, 0, v___x_3314_);
lean_ctor_set(v___x_3316_, 1, v___x_3315_);
v___x_3317_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_3318_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3316_);
lean_ctor_set(v___x_3318_, 1, v___x_3317_);
v___x_3319_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3267_, v___x_3318_, v___y_3271_, v___y_3272_);
if (lean_obj_tag(v___x_3319_) == 0)
{
lean_dec_ref_known(v___x_3319_, 1);
v___y_3295_ = v___y_3304_;
goto v___jp_3294_;
}
else
{
lean_dec_ref(v_defn_3270_);
lean_dec_ref(v___f_3265_);
return v___x_3319_;
}
}
}
}
v___jp_3321_:
{
lean_object* v___x_3322_; uint8_t v_isModule_3323_; 
v___x_3322_ = l_Lean_Environment_header(v_env_3301_);
lean_dec_ref(v_env_3301_);
v_isModule_3323_ = lean_ctor_get_uint8(v___x_3322_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_3322_);
if (v_isModule_3323_ == 0)
{
lean_dec_ref(v_env_3320_);
lean_dec(v_cls_3267_);
v_exportedInfo_x3f_3275_ = v___x_3268_;
v___y_3276_ = v___y_3271_;
v___y_3277_ = v___y_3272_;
goto v___jp_3274_;
}
else
{
uint8_t v_isExporting_3324_; 
v_isExporting_3324_ = lean_ctor_get_uint8(v_env_3320_, sizeof(void*)*8);
lean_dec_ref(v_env_3320_);
if (v_isExporting_3324_ == 0)
{
lean_dec(v___x_3268_);
v___y_3304_ = v_isModule_3323_;
goto v___jp_3303_;
}
else
{
if (v___x_3266_ == 0)
{
lean_dec(v_cls_3267_);
v_exportedInfo_x3f_3275_ = v___x_3268_;
v___y_3276_ = v___y_3271_;
v___y_3277_ = v___y_3272_;
goto v___jp_3274_;
}
else
{
lean_dec(v___x_3268_);
v___y_3304_ = v___x_3266_;
goto v___jp_3303_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___boxed(lean_object* v___f_3325_, lean_object* v___x_3326_, lean_object* v_cls_3327_, lean_object* v___x_3328_, lean_object* v_forceExpose_3329_, lean_object* v_defn_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_){
_start:
{
uint8_t v___x_53641__boxed_3334_; uint8_t v_forceExpose_boxed_3335_; lean_object* v_res_3336_; 
v___x_53641__boxed_3334_ = lean_unbox(v___x_3326_);
v_forceExpose_boxed_3335_ = lean_unbox(v_forceExpose_3329_);
v_res_3336_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5(v___f_3325_, v___x_53641__boxed_3334_, v_cls_3327_, v___x_3328_, v_forceExpose_boxed_3335_, v_defn_3330_, v___y_3331_, v___y_3332_);
lean_dec(v___y_3332_);
lean_dec_ref(v___y_3331_);
return v_res_3336_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__6(lean_object* v_val_3337_, lean_object* v___f_3338_, lean_object* v_____r_3339_, lean_object* v_exportedInfo_x3f_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_){
_start:
{
lean_object* v_toConstantVal_3344_; lean_object* v_name_3345_; lean_object* v___x_3346_; uint8_t v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; 
v_toConstantVal_3344_ = lean_ctor_get(v_val_3337_, 0);
v_name_3345_ = lean_ctor_get(v_toConstantVal_3344_, 0);
lean_inc(v_name_3345_);
v___x_3346_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3346_, 0, v_val_3337_);
v___x_3347_ = 1;
v___x_3348_ = lean_box(v___x_3347_);
v___x_3349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3349_, 0, v___x_3346_);
lean_ctor_set(v___x_3349_, 1, v___x_3348_);
v___x_3350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3350_, 0, v_name_3345_);
lean_ctor_set(v___x_3350_, 1, v___x_3349_);
lean_inc(v___y_3342_);
lean_inc_ref(v___y_3341_);
v___x_3351_ = lean_apply_5(v___f_3338_, v___x_3350_, v_exportedInfo_x3f_3340_, v___y_3341_, v___y_3342_, lean_box(0));
return v___x_3351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__6___boxed(lean_object* v_val_3352_, lean_object* v___f_3353_, lean_object* v_____r_3354_, lean_object* v_exportedInfo_x3f_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_){
_start:
{
lean_object* v_res_3359_; 
v_res_3359_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__6(v_val_3352_, v___f_3353_, v_____r_3354_, v_exportedInfo_x3f_3355_, v___y_3356_, v___y_3357_);
lean_dec(v___y_3357_);
lean_dec_ref(v___y_3356_);
return v_res_3359_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__7(lean_object* v_val_3360_, uint8_t v___x_3361_, lean_object* v___f_3362_, lean_object* v_____r_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_){
_start:
{
lean_object* v_toConstantVal_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; 
v_toConstantVal_3367_ = lean_ctor_get(v_val_3360_, 0);
lean_inc_ref(v_toConstantVal_3367_);
v___x_3368_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3368_, 0, v_toConstantVal_3367_);
lean_ctor_set_uint8(v___x_3368_, sizeof(void*)*1, v___x_3361_);
v___x_3369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3369_, 0, v___x_3368_);
v___x_3370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3370_, 0, v___x_3369_);
v___x_3371_ = lean_box(0);
lean_inc(v___y_3365_);
lean_inc_ref(v___y_3364_);
v___x_3372_ = lean_apply_5(v___f_3362_, v___x_3371_, v___x_3370_, v___y_3364_, v___y_3365_, lean_box(0));
return v___x_3372_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__7___boxed(lean_object* v_val_3373_, lean_object* v___x_3374_, lean_object* v___f_3375_, lean_object* v_____r_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_){
_start:
{
uint8_t v___x_53772__boxed_3380_; lean_object* v_res_3381_; 
v___x_53772__boxed_3380_ = lean_unbox(v___x_3374_);
v_res_3381_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__7(v_val_3373_, v___x_53772__boxed_3380_, v___f_3375_, v_____r_3376_, v___y_3377_, v___y_3378_);
lean_dec(v___y_3378_);
lean_dec_ref(v___y_3377_);
lean_dec_ref(v_val_3373_);
return v_res_3381_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__8(lean_object* v_val_3382_, lean_object* v___f_3383_, lean_object* v_____r_3384_, lean_object* v_exportedInfo_x3f_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_){
_start:
{
lean_object* v_toConstantVal_3389_; lean_object* v_name_3390_; lean_object* v___x_3391_; uint8_t v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; 
v_toConstantVal_3389_ = lean_ctor_get(v_val_3382_, 0);
v_name_3390_ = lean_ctor_get(v_toConstantVal_3389_, 0);
lean_inc(v_name_3390_);
v___x_3391_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3391_, 0, v_val_3382_);
v___x_3392_ = 3;
v___x_3393_ = lean_box(v___x_3392_);
v___x_3394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3394_, 0, v___x_3391_);
lean_ctor_set(v___x_3394_, 1, v___x_3393_);
v___x_3395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3395_, 0, v_name_3390_);
lean_ctor_set(v___x_3395_, 1, v___x_3394_);
lean_inc(v___y_3387_);
lean_inc_ref(v___y_3386_);
v___x_3396_ = lean_apply_5(v___f_3383_, v___x_3395_, v_exportedInfo_x3f_3385_, v___y_3386_, v___y_3387_, lean_box(0));
return v___x_3396_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__8___boxed(lean_object* v_val_3397_, lean_object* v___f_3398_, lean_object* v_____r_3399_, lean_object* v_exportedInfo_x3f_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_){
_start:
{
lean_object* v_res_3404_; 
v_res_3404_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__8(v_val_3397_, v___f_3398_, v_____r_3399_, v_exportedInfo_x3f_3400_, v___y_3401_, v___y_3402_);
lean_dec(v___y_3402_);
lean_dec_ref(v___y_3401_);
return v_res_3404_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10(lean_object* v_val_3405_, lean_object* v___f_3406_, lean_object* v_____r_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_){
_start:
{
lean_object* v_toConstantVal_3411_; uint8_t v_isUnsafe_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; 
v_toConstantVal_3411_ = lean_ctor_get(v_val_3405_, 0);
v_isUnsafe_3412_ = lean_ctor_get_uint8(v_val_3405_, sizeof(void*)*3);
lean_inc_ref(v_toConstantVal_3411_);
v___x_3413_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3413_, 0, v_toConstantVal_3411_);
lean_ctor_set_uint8(v___x_3413_, sizeof(void*)*1, v_isUnsafe_3412_);
v___x_3414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3414_, 0, v___x_3413_);
v___x_3415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3415_, 0, v___x_3414_);
v___x_3416_ = lean_box(0);
lean_inc(v___y_3409_);
lean_inc_ref(v___y_3408_);
v___x_3417_ = lean_apply_5(v___f_3406_, v___x_3416_, v___x_3415_, v___y_3408_, v___y_3409_, lean_box(0));
return v___x_3417_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10___boxed(lean_object* v_val_3418_, lean_object* v___f_3419_, lean_object* v_____r_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_){
_start:
{
lean_object* v_res_3424_; 
v_res_3424_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10(v_val_3418_, v___f_3419_, v_____r_3420_, v___y_3421_, v___y_3422_);
lean_dec(v___y_3422_);
lean_dec_ref(v___y_3421_);
lean_dec_ref(v_val_3418_);
return v_res_3424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__14(lean_object* v_decl_3425_, uint8_t v___x_3426_, lean_object* v_cls_3427_, lean_object* v___x_3428_, lean_object* v___x_3429_, lean_object* v_____x_3430_, lean_object* v_exportedInfo_x3f_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_){
_start:
{
lean_object* v___y_3436_; lean_object* v___y_3437_; lean_object* v_a_3438_; lean_object* v___y_3449_; lean_object* v___y_3450_; lean_object* v_a_3451_; lean_object* v___y_3462_; lean_object* v___y_3463_; lean_object* v___y_3464_; lean_object* v___y_3465_; uint8_t v___y_3466_; lean_object* v___y_3467_; lean_object* v___y_3468_; lean_object* v___y_3469_; lean_object* v___y_3470_; lean_object* v___y_3471_; lean_object* v___y_3472_; lean_object* v___y_3473_; lean_object* v___y_3474_; lean_object* v_snd_3536_; lean_object* v_fst_3537_; lean_object* v___x_3539_; uint8_t v_isShared_3540_; uint8_t v_isSharedCheck_3668_; 
v_snd_3536_ = lean_ctor_get(v_____x_3430_, 1);
v_fst_3537_ = lean_ctor_get(v_____x_3430_, 0);
v_isSharedCheck_3668_ = !lean_is_exclusive(v_____x_3430_);
if (v_isSharedCheck_3668_ == 0)
{
v___x_3539_ = v_____x_3430_;
v_isShared_3540_ = v_isSharedCheck_3668_;
goto v_resetjp_3538_;
}
else
{
lean_inc(v_snd_3536_);
lean_inc(v_fst_3537_);
lean_dec(v_____x_3430_);
v___x_3539_ = lean_box(0);
v_isShared_3540_ = v_isSharedCheck_3668_;
goto v_resetjp_3538_;
}
v___jp_3435_:
{
lean_object* v___x_3439_; lean_object* v___x_3441_; uint8_t v_isShared_3442_; uint8_t v_isSharedCheck_3446_; 
v___x_3439_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3437_, v___y_3436_);
v_isSharedCheck_3446_ = !lean_is_exclusive(v___x_3439_);
if (v_isSharedCheck_3446_ == 0)
{
lean_object* v_unused_3447_; 
v_unused_3447_ = lean_ctor_get(v___x_3439_, 0);
lean_dec(v_unused_3447_);
v___x_3441_ = v___x_3439_;
v_isShared_3442_ = v_isSharedCheck_3446_;
goto v_resetjp_3440_;
}
else
{
lean_dec(v___x_3439_);
v___x_3441_ = lean_box(0);
v_isShared_3442_ = v_isSharedCheck_3446_;
goto v_resetjp_3440_;
}
v_resetjp_3440_:
{
lean_object* v___x_3444_; 
if (v_isShared_3442_ == 0)
{
lean_ctor_set_tag(v___x_3441_, 1);
lean_ctor_set(v___x_3441_, 0, v_a_3438_);
v___x_3444_ = v___x_3441_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v_a_3438_);
v___x_3444_ = v_reuseFailAlloc_3445_;
goto v_reusejp_3443_;
}
v_reusejp_3443_:
{
return v___x_3444_;
}
}
}
v___jp_3448_:
{
lean_object* v___x_3452_; lean_object* v___x_3454_; uint8_t v_isShared_3455_; uint8_t v_isSharedCheck_3459_; 
v___x_3452_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3450_, v___y_3449_);
v_isSharedCheck_3459_ = !lean_is_exclusive(v___x_3452_);
if (v_isSharedCheck_3459_ == 0)
{
lean_object* v_unused_3460_; 
v_unused_3460_ = lean_ctor_get(v___x_3452_, 0);
lean_dec(v_unused_3460_);
v___x_3454_ = v___x_3452_;
v_isShared_3455_ = v_isSharedCheck_3459_;
goto v_resetjp_3453_;
}
else
{
lean_dec(v___x_3452_);
v___x_3454_ = lean_box(0);
v_isShared_3455_ = v_isSharedCheck_3459_;
goto v_resetjp_3453_;
}
v_resetjp_3453_:
{
lean_object* v___x_3457_; 
if (v_isShared_3455_ == 0)
{
lean_ctor_set(v___x_3454_, 0, v_a_3451_);
v___x_3457_ = v___x_3454_;
goto v_reusejp_3456_;
}
else
{
lean_object* v_reuseFailAlloc_3458_; 
v_reuseFailAlloc_3458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3458_, 0, v_a_3451_);
v___x_3457_ = v_reuseFailAlloc_3458_;
goto v_reusejp_3456_;
}
v_reusejp_3456_:
{
return v___x_3457_;
}
}
}
v___jp_3461_:
{
lean_object* v___x_3475_; 
lean_inc_ref(v___y_3471_);
v___x_3475_ = l_Lean_Environment_AddConstAsyncResult_commitConst(v___y_3472_, v___y_3471_, v___y_3464_, v___y_3474_);
if (lean_obj_tag(v___x_3475_) == 0)
{
lean_object* v___x_3476_; lean_object* v___x_3478_; uint8_t v_isShared_3479_; uint8_t v_isSharedCheck_3522_; 
lean_dec_ref_known(v___x_3475_, 1);
lean_dec(v___y_3467_);
lean_inc_ref(v___y_3469_);
v___x_3476_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3469_, v___y_3465_);
v_isSharedCheck_3522_ = !lean_is_exclusive(v___x_3476_);
if (v_isSharedCheck_3522_ == 0)
{
lean_object* v_unused_3523_; 
v_unused_3523_ = lean_ctor_get(v___x_3476_, 0);
lean_dec(v_unused_3523_);
v___x_3478_ = v___x_3476_;
v_isShared_3479_ = v_isSharedCheck_3522_;
goto v_resetjp_3477_;
}
else
{
lean_dec(v___x_3476_);
v___x_3478_ = lean_box(0);
v_isShared_3479_ = v_isSharedCheck_3522_;
goto v_resetjp_3477_;
}
v_resetjp_3477_:
{
lean_object* v_options_3480_; lean_object* v___x_3481_; uint8_t v___x_3482_; 
v_options_3480_ = lean_ctor_get(v___y_3473_, 2);
v___x_3481_ = l_Lean_Elab_async;
v___x_3482_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_options_3480_, v___x_3481_);
if (v___x_3482_ == 0)
{
lean_object* v___x_3483_; lean_object* v_r_3484_; 
lean_del_object(v___x_3478_);
lean_dec_ref(v___y_3468_);
lean_dec_ref(v___y_3463_);
v___x_3483_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3471_, v___y_3465_);
lean_dec_ref(v___x_3483_);
v_r_3484_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_3425_, v___y_3470_, v___y_3465_);
if (lean_obj_tag(v_r_3484_) == 0)
{
lean_object* v_a_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3494_; 
v_a_3485_ = lean_ctor_get(v_r_3484_, 0);
v_isSharedCheck_3494_ = !lean_is_exclusive(v_r_3484_);
if (v_isSharedCheck_3494_ == 0)
{
v___x_3487_ = v_r_3484_;
v_isShared_3488_ = v_isSharedCheck_3494_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_a_3485_);
lean_dec(v_r_3484_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3494_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v___x_3490_; 
lean_inc(v_a_3485_);
if (v_isShared_3488_ == 0)
{
lean_ctor_set_tag(v___x_3487_, 1);
v___x_3490_ = v___x_3487_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3493_; 
v_reuseFailAlloc_3493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3493_, 0, v_a_3485_);
v___x_3490_ = v_reuseFailAlloc_3493_;
goto v_reusejp_3489_;
}
v_reusejp_3489_:
{
lean_object* v___x_3491_; 
v___x_3491_ = lean_apply_2(v___y_3462_, v___x_3490_, lean_box(0));
if (lean_obj_tag(v___x_3491_) == 0)
{
lean_dec_ref_known(v___x_3491_, 1);
v___y_3449_ = v___y_3465_;
v___y_3450_ = v___y_3469_;
v_a_3451_ = v_a_3485_;
goto v___jp_3448_;
}
else
{
lean_object* v_a_3492_; 
lean_dec(v_a_3485_);
v_a_3492_ = lean_ctor_get(v___x_3491_, 0);
lean_inc(v_a_3492_);
lean_dec_ref_known(v___x_3491_, 1);
v___y_3436_ = v___y_3465_;
v___y_3437_ = v___y_3469_;
v_a_3438_ = v_a_3492_;
goto v___jp_3435_;
}
}
}
}
else
{
lean_object* v_a_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; 
v_a_3495_ = lean_ctor_get(v_r_3484_, 0);
lean_inc(v_a_3495_);
lean_dec_ref_known(v_r_3484_, 1);
v___x_3496_ = lean_box(0);
v___x_3497_ = lean_apply_2(v___y_3462_, v___x_3496_, lean_box(0));
if (lean_obj_tag(v___x_3497_) == 0)
{
lean_dec_ref_known(v___x_3497_, 1);
v___y_3436_ = v___y_3465_;
v___y_3437_ = v___y_3469_;
v_a_3438_ = v_a_3495_;
goto v___jp_3435_;
}
else
{
lean_object* v_a_3498_; 
lean_dec(v_a_3495_);
v_a_3498_ = lean_ctor_get(v___x_3497_, 0);
lean_inc(v_a_3498_);
lean_dec_ref_known(v___x_3497_, 1);
v___y_3436_ = v___y_3465_;
v___y_3437_ = v___y_3469_;
v_a_3438_ = v_a_3498_;
goto v___jp_3435_;
}
}
}
else
{
lean_object* v___x_3499_; lean_object* v___x_3501_; 
lean_dec_ref(v___y_3471_);
lean_dec_ref(v___y_3469_);
lean_dec_ref(v___y_3462_);
lean_dec(v_decl_3425_);
v___x_3499_ = l_IO_CancelToken_new();
if (v_isShared_3479_ == 0)
{
lean_ctor_set_tag(v___x_3478_, 1);
lean_ctor_set(v___x_3478_, 0, v___x_3499_);
v___x_3501_ = v___x_3478_;
goto v_reusejp_3500_;
}
else
{
lean_object* v_reuseFailAlloc_3521_; 
v_reuseFailAlloc_3521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3521_, 0, v___x_3499_);
v___x_3501_ = v_reuseFailAlloc_3521_;
goto v_reusejp_3500_;
}
v_reusejp_3500_:
{
lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; 
v___x_3502_ = lean_unsigned_to_nat(0u);
v___x_3503_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1);
v___x_3504_ = l_Lean_Name_toString(v___x_3503_, v___x_3426_);
lean_inc_ref(v___x_3501_);
v___x_3505_ = l_Lean_Core_wrapAsyncAsSnapshot___redArg(v___y_3468_, v___x_3501_, v___x_3504_, v___y_3470_, v___y_3465_);
if (lean_obj_tag(v___x_3505_) == 0)
{
lean_object* v_a_3506_; lean_object* v_checked_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; 
v_a_3506_ = lean_ctor_get(v___x_3505_, 0);
lean_inc(v_a_3506_);
lean_dec_ref_known(v___x_3505_, 1);
v_checked_3507_ = lean_ctor_get(v___y_3463_, 2);
lean_inc_ref(v_checked_3507_);
lean_dec_ref(v___y_3463_);
v___x_3508_ = lean_io_map_task(v_a_3506_, v_checked_3507_, v___x_3502_, v___y_3466_);
v___x_3509_ = lean_box(0);
v___x_3510_ = lean_box(2);
v___x_3511_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3511_, 0, v___x_3509_);
lean_ctor_set(v___x_3511_, 1, v___x_3510_);
lean_ctor_set(v___x_3511_, 2, v___x_3501_);
lean_ctor_set(v___x_3511_, 3, v___x_3508_);
v___x_3512_ = l_Lean_Core_logSnapshotTask___redArg(v___x_3511_, v___y_3465_);
return v___x_3512_;
}
else
{
lean_object* v_a_3513_; lean_object* v___x_3515_; uint8_t v_isShared_3516_; uint8_t v_isSharedCheck_3520_; 
lean_dec_ref(v___x_3501_);
lean_dec_ref(v___y_3463_);
v_a_3513_ = lean_ctor_get(v___x_3505_, 0);
v_isSharedCheck_3520_ = !lean_is_exclusive(v___x_3505_);
if (v_isSharedCheck_3520_ == 0)
{
v___x_3515_ = v___x_3505_;
v_isShared_3516_ = v_isSharedCheck_3520_;
goto v_resetjp_3514_;
}
else
{
lean_inc(v_a_3513_);
lean_dec(v___x_3505_);
v___x_3515_ = lean_box(0);
v_isShared_3516_ = v_isSharedCheck_3520_;
goto v_resetjp_3514_;
}
v_resetjp_3514_:
{
lean_object* v___x_3518_; 
if (v_isShared_3516_ == 0)
{
v___x_3518_ = v___x_3515_;
goto v_reusejp_3517_;
}
else
{
lean_object* v_reuseFailAlloc_3519_; 
v_reuseFailAlloc_3519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3519_, 0, v_a_3513_);
v___x_3518_ = v_reuseFailAlloc_3519_;
goto v_reusejp_3517_;
}
v_reusejp_3517_:
{
return v___x_3518_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3524_; lean_object* v___x_3526_; uint8_t v_isShared_3527_; uint8_t v_isSharedCheck_3535_; 
lean_dec_ref(v___y_3471_);
lean_dec_ref(v___y_3469_);
lean_dec_ref(v___y_3468_);
lean_dec_ref(v___y_3463_);
lean_dec_ref(v___y_3462_);
lean_dec(v_decl_3425_);
v_a_3524_ = lean_ctor_get(v___x_3475_, 0);
v_isSharedCheck_3535_ = !lean_is_exclusive(v___x_3475_);
if (v_isSharedCheck_3535_ == 0)
{
v___x_3526_ = v___x_3475_;
v_isShared_3527_ = v_isSharedCheck_3535_;
goto v_resetjp_3525_;
}
else
{
lean_inc(v_a_3524_);
lean_dec(v___x_3475_);
v___x_3526_ = lean_box(0);
v_isShared_3527_ = v_isSharedCheck_3535_;
goto v_resetjp_3525_;
}
v_resetjp_3525_:
{
lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3533_; 
v___x_3528_ = lean_io_error_to_string(v_a_3524_);
v___x_3529_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3529_, 0, v___x_3528_);
v___x_3530_ = l_Lean_MessageData_ofFormat(v___x_3529_);
v___x_3531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3531_, 0, v___y_3467_);
lean_ctor_set(v___x_3531_, 1, v___x_3530_);
if (v_isShared_3527_ == 0)
{
lean_ctor_set(v___x_3526_, 0, v___x_3531_);
v___x_3533_ = v___x_3526_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3534_; 
v_reuseFailAlloc_3534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3534_, 0, v___x_3531_);
v___x_3533_ = v_reuseFailAlloc_3534_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
return v___x_3533_;
}
}
}
}
v_resetjp_3538_:
{
lean_object* v_fst_3541_; lean_object* v_snd_3542_; lean_object* v___x_3544_; uint8_t v_isShared_3545_; uint8_t v_isSharedCheck_3667_; 
v_fst_3541_ = lean_ctor_get(v_snd_3536_, 0);
v_snd_3542_ = lean_ctor_get(v_snd_3536_, 1);
v_isSharedCheck_3667_ = !lean_is_exclusive(v_snd_3536_);
if (v_isSharedCheck_3667_ == 0)
{
v___x_3544_ = v_snd_3536_;
v_isShared_3545_ = v_isSharedCheck_3667_;
goto v_resetjp_3543_;
}
else
{
lean_inc(v_snd_3542_);
lean_inc(v_fst_3541_);
lean_dec(v_snd_3536_);
v___x_3544_ = lean_box(0);
v_isShared_3545_ = v_isSharedCheck_3667_;
goto v_resetjp_3543_;
}
v_resetjp_3543_:
{
lean_object* v___y_3547_; lean_object* v___y_3548_; lean_object* v___y_3549_; lean_object* v___y_3550_; lean_object* v___y_3551_; lean_object* v_exportedInfo_x3f_3578_; lean_object* v___y_3579_; lean_object* v___y_3580_; lean_object* v___y_3590_; lean_object* v___y_3591_; lean_object* v___y_3594_; lean_object* v___y_3595_; lean_object* v___y_3598_; lean_object* v___y_3599_; uint8_t v___y_3600_; lean_object* v___y_3631_; lean_object* v___y_3632_; lean_object* v___x_3657_; lean_object* v_env_3658_; uint8_t v___x_3659_; 
v___x_3657_ = lean_st_ref_get(v___y_3433_);
v_env_3658_ = lean_ctor_get(v___x_3657_, 0);
lean_inc_ref(v_env_3658_);
lean_dec(v___x_3657_);
v___x_3659_ = l_Lean_Environment_containsOnBranch(v_env_3658_, v_fst_3537_);
lean_dec_ref(v_env_3658_);
if (v___x_3659_ == 0)
{
lean_del_object(v___x_3539_);
v___y_3631_ = v___y_3432_;
v___y_3632_ = v___y_3433_;
goto v___jp_3630_;
}
else
{
lean_object* v___x_3660_; lean_object* v_env_3661_; lean_object* v___x_3662_; lean_object* v___x_3664_; 
lean_del_object(v___x_3544_);
lean_dec(v_snd_3542_);
lean_dec(v_fst_3541_);
lean_dec(v_exportedInfo_x3f_3431_);
lean_dec(v___x_3429_);
lean_dec_ref(v___x_3428_);
lean_dec(v_cls_3427_);
lean_dec(v_decl_3425_);
v___x_3660_ = lean_st_ref_get(v___y_3433_);
v_env_3661_ = lean_ctor_get(v___x_3660_, 0);
lean_inc_ref(v_env_3661_);
lean_dec(v___x_3660_);
v___x_3662_ = lean_elab_environment_to_kernel_env(v_env_3661_);
if (v_isShared_3540_ == 0)
{
lean_ctor_set_tag(v___x_3539_, 1);
lean_ctor_set(v___x_3539_, 1, v_fst_3537_);
lean_ctor_set(v___x_3539_, 0, v___x_3662_);
v___x_3664_ = v___x_3539_;
goto v_reusejp_3663_;
}
else
{
lean_object* v_reuseFailAlloc_3666_; 
v_reuseFailAlloc_3666_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3666_, 0, v___x_3662_);
lean_ctor_set(v_reuseFailAlloc_3666_, 1, v_fst_3537_);
v___x_3664_ = v_reuseFailAlloc_3666_;
goto v_reusejp_3663_;
}
v_reusejp_3663_:
{
lean_object* v___x_3665_; 
v___x_3665_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(v___x_3664_, v___y_3432_, v___y_3433_);
return v___x_3665_;
}
}
v___jp_3546_:
{
lean_object* v_toCold_3552_; lean_object* v_ref_3553_; uint8_t v___x_3554_; uint8_t v___x_3555_; lean_object* v___x_3556_; 
v_toCold_3552_ = lean_ctor_get(v___y_3548_, 0);
v_ref_3553_ = lean_ctor_get(v___y_3548_, 2);
v___x_3554_ = 0;
v___x_3555_ = lean_unbox(v_snd_3542_);
lean_dec(v_snd_3542_);
lean_inc_ref(v___y_3550_);
v___x_3556_ = l_Lean_Environment_addConstAsync(v___y_3550_, v_fst_3537_, v___x_3555_, v___y_3551_, v___x_3554_, v___x_3426_);
if (lean_obj_tag(v___x_3556_) == 0)
{
lean_object* v_a_3557_; lean_object* v_mainEnv_3558_; lean_object* v_asyncEnv_3559_; lean_object* v___f_3560_; lean_object* v___f_3561_; lean_object* v___x_3562_; 
lean_del_object(v___x_3544_);
v_a_3557_ = lean_ctor_get(v___x_3556_, 0);
lean_inc_n(v_a_3557_, 3);
lean_dec_ref_known(v___x_3556_, 1);
v_mainEnv_3558_ = lean_ctor_get(v_a_3557_, 0);
lean_inc_ref(v_mainEnv_3558_);
v_asyncEnv_3559_ = lean_ctor_get(v_a_3557_, 1);
lean_inc_ref_n(v_asyncEnv_3559_, 2);
lean_inc(v_ref_3553_);
lean_inc(v___y_3547_);
v___f_3560_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3560_, 0, v___y_3547_);
lean_closure_set(v___f_3560_, 1, v_a_3557_);
lean_closure_set(v___f_3560_, 2, v_ref_3553_);
lean_inc(v_decl_3425_);
v___f_3561_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2___boxed), 7, 3);
lean_closure_set(v___f_3561_, 0, v_a_3557_);
lean_closure_set(v___f_3561_, 1, v_asyncEnv_3559_);
lean_closure_set(v___f_3561_, 2, v_decl_3425_);
v___x_3562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3562_, 0, v_fst_3541_);
if (lean_obj_tag(v___y_3549_) == 0)
{
lean_inc(v_ref_3553_);
lean_inc_ref(v___x_3562_);
v___y_3462_ = v___f_3560_;
v___y_3463_ = v___y_3550_;
v___y_3464_ = v___x_3562_;
v___y_3465_ = v___y_3547_;
v___y_3466_ = v___x_3554_;
v___y_3467_ = v_ref_3553_;
v___y_3468_ = v___f_3561_;
v___y_3469_ = v_mainEnv_3558_;
v___y_3470_ = v___y_3548_;
v___y_3471_ = v_asyncEnv_3559_;
v___y_3472_ = v_a_3557_;
v___y_3473_ = v_toCold_3552_;
v___y_3474_ = v___x_3562_;
goto v___jp_3461_;
}
else
{
lean_inc(v_ref_3553_);
v___y_3462_ = v___f_3560_;
v___y_3463_ = v___y_3550_;
v___y_3464_ = v___x_3562_;
v___y_3465_ = v___y_3547_;
v___y_3466_ = v___x_3554_;
v___y_3467_ = v_ref_3553_;
v___y_3468_ = v___f_3561_;
v___y_3469_ = v_mainEnv_3558_;
v___y_3470_ = v___y_3548_;
v___y_3471_ = v_asyncEnv_3559_;
v___y_3472_ = v_a_3557_;
v___y_3473_ = v_toCold_3552_;
v___y_3474_ = v___y_3549_;
goto v___jp_3461_;
}
}
else
{
lean_object* v_a_3563_; lean_object* v___x_3565_; uint8_t v_isShared_3566_; uint8_t v_isSharedCheck_3576_; 
lean_dec_ref(v___y_3550_);
lean_dec(v___y_3549_);
lean_dec(v_fst_3541_);
lean_dec(v_decl_3425_);
v_a_3563_ = lean_ctor_get(v___x_3556_, 0);
v_isSharedCheck_3576_ = !lean_is_exclusive(v___x_3556_);
if (v_isSharedCheck_3576_ == 0)
{
v___x_3565_ = v___x_3556_;
v_isShared_3566_ = v_isSharedCheck_3576_;
goto v_resetjp_3564_;
}
else
{
lean_inc(v_a_3563_);
lean_dec(v___x_3556_);
v___x_3565_ = lean_box(0);
v_isShared_3566_ = v_isSharedCheck_3576_;
goto v_resetjp_3564_;
}
v_resetjp_3564_:
{
lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3571_; 
v___x_3567_ = lean_io_error_to_string(v_a_3563_);
v___x_3568_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3568_, 0, v___x_3567_);
v___x_3569_ = l_Lean_MessageData_ofFormat(v___x_3568_);
lean_inc(v_ref_3553_);
if (v_isShared_3545_ == 0)
{
lean_ctor_set(v___x_3544_, 1, v___x_3569_);
lean_ctor_set(v___x_3544_, 0, v_ref_3553_);
v___x_3571_ = v___x_3544_;
goto v_reusejp_3570_;
}
else
{
lean_object* v_reuseFailAlloc_3575_; 
v_reuseFailAlloc_3575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3575_, 0, v_ref_3553_);
lean_ctor_set(v_reuseFailAlloc_3575_, 1, v___x_3569_);
v___x_3571_ = v_reuseFailAlloc_3575_;
goto v_reusejp_3570_;
}
v_reusejp_3570_:
{
lean_object* v___x_3573_; 
if (v_isShared_3566_ == 0)
{
lean_ctor_set(v___x_3565_, 0, v___x_3571_);
v___x_3573_ = v___x_3565_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3574_; 
v_reuseFailAlloc_3574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3574_, 0, v___x_3571_);
v___x_3573_ = v_reuseFailAlloc_3574_;
goto v_reusejp_3572_;
}
v_reusejp_3572_:
{
return v___x_3573_;
}
}
}
}
}
v___jp_3577_:
{
lean_object* v___x_3581_; 
v___x_3581_ = lean_st_ref_get(v___y_3580_);
if (lean_obj_tag(v_exportedInfo_x3f_3578_) == 0)
{
lean_object* v_env_3582_; lean_object* v___x_3583_; 
v_env_3582_ = lean_ctor_get(v___x_3581_, 0);
lean_inc_ref(v_env_3582_);
lean_dec(v___x_3581_);
v___x_3583_ = lean_box(0);
v___y_3547_ = v___y_3580_;
v___y_3548_ = v___y_3579_;
v___y_3549_ = v_exportedInfo_x3f_3578_;
v___y_3550_ = v_env_3582_;
v___y_3551_ = v___x_3583_;
goto v___jp_3546_;
}
else
{
lean_object* v_env_3584_; lean_object* v_val_3585_; uint8_t v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; 
v_env_3584_ = lean_ctor_get(v___x_3581_, 0);
lean_inc_ref(v_env_3584_);
lean_dec(v___x_3581_);
v_val_3585_ = lean_ctor_get(v_exportedInfo_x3f_3578_, 0);
v___x_3586_ = l_Lean_ConstantKind_ofConstantInfo(v_val_3585_);
v___x_3587_ = lean_box(v___x_3586_);
v___x_3588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3588_, 0, v___x_3587_);
v___y_3547_ = v___y_3580_;
v___y_3548_ = v___y_3579_;
v___y_3549_ = v_exportedInfo_x3f_3578_;
v___y_3550_ = v_env_3584_;
v___y_3551_ = v___x_3588_;
goto v___jp_3546_;
}
}
v___jp_3589_:
{
lean_object* v___x_3592_; 
lean_inc(v_fst_3541_);
v___x_3592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3592_, 0, v_fst_3541_);
v_exportedInfo_x3f_3578_ = v___x_3592_;
v___y_3579_ = v___y_3590_;
v___y_3580_ = v___y_3591_;
goto v___jp_3577_;
}
v___jp_3593_:
{
lean_object* v___x_3596_; 
lean_inc(v_fst_3541_);
v___x_3596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3596_, 0, v_fst_3541_);
v_exportedInfo_x3f_3578_ = v___x_3596_;
v___y_3579_ = v___y_3594_;
v___y_3580_ = v___y_3595_;
goto v___jp_3577_;
}
v___jp_3597_:
{
if (v___y_3600_ == 0)
{
lean_object* v_toCold_3601_; lean_object* v_options_3602_; uint8_t v_hasTrace_3603_; 
lean_dec(v_exportedInfo_x3f_3431_);
lean_dec_ref(v___x_3428_);
v_toCold_3601_ = lean_ctor_get(v___y_3599_, 0);
v_options_3602_ = lean_ctor_get(v_toCold_3601_, 2);
v_hasTrace_3603_ = lean_ctor_get_uint8(v_options_3602_, sizeof(void*)*1);
if (v_hasTrace_3603_ == 0)
{
lean_dec(v_cls_3427_);
v___y_3590_ = v___y_3599_;
v___y_3591_ = v___y_3598_;
goto v___jp_3589_;
}
else
{
lean_object* v_inheritedTraceOptions_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; uint8_t v___x_3607_; 
v_inheritedTraceOptions_3604_ = lean_ctor_get(v_toCold_3601_, 11);
v___x_3605_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_3427_);
v___x_3606_ = l_Lean_Name_append(v___x_3605_, v_cls_3427_);
v___x_3607_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3604_, v_options_3602_, v___x_3606_);
lean_dec(v___x_3606_);
if (v___x_3607_ == 0)
{
lean_dec(v_cls_3427_);
v___y_3590_ = v___y_3599_;
v___y_3591_ = v___y_3598_;
goto v___jp_3589_;
}
else
{
lean_object* v___x_3608_; lean_object* v___x_3609_; 
v___x_3608_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3);
v___x_3609_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3427_, v___x_3608_, v___y_3599_, v___y_3598_);
if (lean_obj_tag(v___x_3609_) == 0)
{
lean_dec_ref_known(v___x_3609_, 1);
v___y_3590_ = v___y_3599_;
v___y_3591_ = v___y_3598_;
goto v___jp_3589_;
}
else
{
lean_del_object(v___x_3544_);
lean_dec(v_snd_3542_);
lean_dec(v_fst_3541_);
lean_dec(v_fst_3537_);
lean_dec(v_decl_3425_);
return v___x_3609_;
}
}
}
}
else
{
lean_object* v___x_3610_; lean_object* v_env_3611_; lean_object* v_nextMacroScope_3612_; lean_object* v_ngen_3613_; lean_object* v_auxDeclNGen_3614_; lean_object* v_traceState_3615_; lean_object* v_messages_3616_; lean_object* v_infoState_3617_; lean_object* v_snapshotTasks_3618_; lean_object* v___x_3620_; uint8_t v_isShared_3621_; uint8_t v_isSharedCheck_3628_; 
lean_dec(v_cls_3427_);
v___x_3610_ = lean_st_ref_take(v___y_3598_);
v_env_3611_ = lean_ctor_get(v___x_3610_, 0);
v_nextMacroScope_3612_ = lean_ctor_get(v___x_3610_, 1);
v_ngen_3613_ = lean_ctor_get(v___x_3610_, 2);
v_auxDeclNGen_3614_ = lean_ctor_get(v___x_3610_, 3);
v_traceState_3615_ = lean_ctor_get(v___x_3610_, 4);
v_messages_3616_ = lean_ctor_get(v___x_3610_, 6);
v_infoState_3617_ = lean_ctor_get(v___x_3610_, 7);
v_snapshotTasks_3618_ = lean_ctor_get(v___x_3610_, 8);
v_isSharedCheck_3628_ = !lean_is_exclusive(v___x_3610_);
if (v_isSharedCheck_3628_ == 0)
{
lean_object* v_unused_3629_; 
v_unused_3629_ = lean_ctor_get(v___x_3610_, 5);
lean_dec(v_unused_3629_);
v___x_3620_ = v___x_3610_;
v_isShared_3621_ = v_isSharedCheck_3628_;
goto v_resetjp_3619_;
}
else
{
lean_inc(v_snapshotTasks_3618_);
lean_inc(v_infoState_3617_);
lean_inc(v_messages_3616_);
lean_inc(v_traceState_3615_);
lean_inc(v_auxDeclNGen_3614_);
lean_inc(v_ngen_3613_);
lean_inc(v_nextMacroScope_3612_);
lean_inc(v_env_3611_);
lean_dec(v___x_3610_);
v___x_3620_ = lean_box(0);
v_isShared_3621_ = v_isSharedCheck_3628_;
goto v_resetjp_3619_;
}
v_resetjp_3619_:
{
lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3625_; 
v___x_3622_ = l___private_Lean_OriginalConstKind_0__Lean_privateConstKindsExt;
lean_inc(v_snd_3542_);
lean_inc(v_fst_3537_);
v___x_3623_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_3622_, v_env_3611_, v_fst_3537_, v_snd_3542_);
if (v_isShared_3621_ == 0)
{
lean_ctor_set(v___x_3620_, 5, v___x_3428_);
lean_ctor_set(v___x_3620_, 0, v___x_3623_);
v___x_3625_ = v___x_3620_;
goto v_reusejp_3624_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v___x_3623_);
lean_ctor_set(v_reuseFailAlloc_3627_, 1, v_nextMacroScope_3612_);
lean_ctor_set(v_reuseFailAlloc_3627_, 2, v_ngen_3613_);
lean_ctor_set(v_reuseFailAlloc_3627_, 3, v_auxDeclNGen_3614_);
lean_ctor_set(v_reuseFailAlloc_3627_, 4, v_traceState_3615_);
lean_ctor_set(v_reuseFailAlloc_3627_, 5, v___x_3428_);
lean_ctor_set(v_reuseFailAlloc_3627_, 6, v_messages_3616_);
lean_ctor_set(v_reuseFailAlloc_3627_, 7, v_infoState_3617_);
lean_ctor_set(v_reuseFailAlloc_3627_, 8, v_snapshotTasks_3618_);
v___x_3625_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3624_;
}
v_reusejp_3624_:
{
lean_object* v___x_3626_; 
v___x_3626_ = lean_st_ref_put(v___y_3598_, v___x_3625_);
v_exportedInfo_x3f_3578_ = v_exportedInfo_x3f_3431_;
v___y_3579_ = v___y_3599_;
v___y_3580_ = v___y_3598_;
goto v___jp_3577_;
}
}
}
}
v___jp_3630_:
{
lean_object* v___x_3633_; uint8_t v___x_3634_; 
lean_inc(v_decl_3425_);
v___x_3633_ = l_Lean_Declaration_getTopLevelNames(v_decl_3425_);
v___x_3634_ = l_List_all___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2(v___x_3633_);
lean_dec(v___x_3633_);
if (v___x_3634_ == 0)
{
lean_dec(v___x_3429_);
if (lean_obj_tag(v_exportedInfo_x3f_3431_) == 0)
{
v___y_3598_ = v___y_3632_;
v___y_3599_ = v___y_3631_;
v___y_3600_ = v___x_3634_;
goto v___jp_3597_;
}
else
{
v___y_3598_ = v___y_3632_;
v___y_3599_ = v___y_3631_;
v___y_3600_ = v___x_3426_;
goto v___jp_3597_;
}
}
else
{
lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v_a_3637_; uint8_t v___x_3638_; 
lean_dec(v_exportedInfo_x3f_3431_);
lean_dec_ref(v___x_3428_);
v___x_3635_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_3636_ = l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___redArg(v___x_3635_, v___y_3631_);
v_a_3637_ = lean_ctor_get(v___x_3636_, 0);
lean_inc(v_a_3637_);
lean_dec_ref(v___x_3636_);
v___x_3638_ = lean_unbox(v_a_3637_);
lean_dec(v_a_3637_);
if (v___x_3638_ == 0)
{
lean_object* v_toCold_3639_; lean_object* v_options_3640_; uint8_t v_hasTrace_3641_; 
v_toCold_3639_ = lean_ctor_get(v___y_3631_, 0);
v_options_3640_ = lean_ctor_get(v_toCold_3639_, 2);
v_hasTrace_3641_ = lean_ctor_get_uint8(v_options_3640_, sizeof(void*)*1);
if (v_hasTrace_3641_ == 0)
{
lean_dec(v_cls_3427_);
v_exportedInfo_x3f_3578_ = v___x_3429_;
v___y_3579_ = v___y_3631_;
v___y_3580_ = v___y_3632_;
goto v___jp_3577_;
}
else
{
lean_object* v_inheritedTraceOptions_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; uint8_t v___x_3645_; 
v_inheritedTraceOptions_3642_ = lean_ctor_get(v_toCold_3639_, 11);
v___x_3643_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_3427_);
v___x_3644_ = l_Lean_Name_append(v___x_3643_, v_cls_3427_);
v___x_3645_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3642_, v_options_3640_, v___x_3644_);
lean_dec(v___x_3644_);
if (v___x_3645_ == 0)
{
lean_dec(v_cls_3427_);
v_exportedInfo_x3f_3578_ = v___x_3429_;
v___y_3579_ = v___y_3631_;
v___y_3580_ = v___y_3632_;
goto v___jp_3577_;
}
else
{
lean_object* v___x_3646_; lean_object* v___x_3647_; 
v___x_3646_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5);
v___x_3647_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3427_, v___x_3646_, v___y_3631_, v___y_3632_);
if (lean_obj_tag(v___x_3647_) == 0)
{
lean_dec_ref_known(v___x_3647_, 1);
v_exportedInfo_x3f_3578_ = v___x_3429_;
v___y_3579_ = v___y_3631_;
v___y_3580_ = v___y_3632_;
goto v___jp_3577_;
}
else
{
lean_del_object(v___x_3544_);
lean_dec(v_snd_3542_);
lean_dec(v_fst_3541_);
lean_dec(v_fst_3537_);
lean_dec(v___x_3429_);
lean_dec(v_decl_3425_);
return v___x_3647_;
}
}
}
}
else
{
lean_object* v_toCold_3648_; lean_object* v_options_3649_; uint8_t v_hasTrace_3650_; 
lean_dec(v___x_3429_);
v_toCold_3648_ = lean_ctor_get(v___y_3631_, 0);
v_options_3649_ = lean_ctor_get(v_toCold_3648_, 2);
v_hasTrace_3650_ = lean_ctor_get_uint8(v_options_3649_, sizeof(void*)*1);
if (v_hasTrace_3650_ == 0)
{
lean_dec(v_cls_3427_);
v___y_3594_ = v___y_3631_;
v___y_3595_ = v___y_3632_;
goto v___jp_3593_;
}
else
{
lean_object* v_inheritedTraceOptions_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; uint8_t v___x_3654_; 
v_inheritedTraceOptions_3651_ = lean_ctor_get(v_toCold_3648_, 11);
v___x_3652_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_3427_);
v___x_3653_ = l_Lean_Name_append(v___x_3652_, v_cls_3427_);
v___x_3654_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3651_, v_options_3649_, v___x_3653_);
lean_dec(v___x_3653_);
if (v___x_3654_ == 0)
{
lean_dec(v_cls_3427_);
v___y_3594_ = v___y_3631_;
v___y_3595_ = v___y_3632_;
goto v___jp_3593_;
}
else
{
lean_object* v___x_3655_; lean_object* v___x_3656_; 
v___x_3655_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7);
v___x_3656_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3427_, v___x_3655_, v___y_3631_, v___y_3632_);
if (lean_obj_tag(v___x_3656_) == 0)
{
lean_dec_ref_known(v___x_3656_, 1);
v___y_3594_ = v___y_3631_;
v___y_3595_ = v___y_3632_;
goto v___jp_3593_;
}
else
{
lean_del_object(v___x_3544_);
lean_dec(v_snd_3542_);
lean_dec(v_fst_3541_);
lean_dec(v_fst_3537_);
lean_dec(v_decl_3425_);
return v___x_3656_;
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
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__14___boxed(lean_object* v_decl_3669_, lean_object* v___x_3670_, lean_object* v_cls_3671_, lean_object* v___x_3672_, lean_object* v___x_3673_, lean_object* v_____x_3674_, lean_object* v_exportedInfo_x3f_3675_, lean_object* v___y_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_){
_start:
{
uint8_t v___x_53905__boxed_3679_; lean_object* v_res_3680_; 
v___x_53905__boxed_3679_ = lean_unbox(v___x_3670_);
v_res_3680_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__14(v_decl_3669_, v___x_53905__boxed_3679_, v_cls_3671_, v___x_3672_, v___x_3673_, v_____x_3674_, v_exportedInfo_x3f_3675_, v___y_3676_, v___y_3677_);
lean_dec(v___y_3677_);
lean_dec_ref(v___y_3676_);
return v_res_3680_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__11(lean_object* v___f_3681_, uint8_t v_forceExpose_3682_, uint8_t v___x_3683_, lean_object* v___x_3684_, lean_object* v_cls_3685_, lean_object* v_defn_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_){
_start:
{
lean_object* v_exportedInfo_x3f_3691_; lean_object* v___y_3692_; lean_object* v___y_3693_; lean_object* v___y_3703_; lean_object* v___y_3704_; lean_object* v___y_3705_; uint8_t v___y_3706_; lean_object* v___x_3710_; lean_object* v_env_3711_; lean_object* v___x_3712_; 
v___x_3710_ = lean_st_ref_get(v___y_3688_);
v_env_3711_ = lean_ctor_get(v___x_3710_, 0);
lean_inc_ref(v_env_3711_);
lean_dec(v___x_3710_);
v___x_3712_ = lean_st_ref_get(v___y_3688_);
if (v_forceExpose_3682_ == 0)
{
if (v___x_3683_ == 0)
{
lean_dec(v___x_3712_);
lean_dec_ref(v_env_3711_);
lean_dec(v_cls_3685_);
v_exportedInfo_x3f_3691_ = v___x_3684_;
v___y_3692_ = v___y_3687_;
v___y_3693_ = v___y_3688_;
goto v___jp_3690_;
}
else
{
lean_object* v_env_3713_; lean_object* v___x_3714_; uint8_t v_isModule_3715_; 
v_env_3713_ = lean_ctor_get(v___x_3712_, 0);
lean_inc_ref(v_env_3713_);
lean_dec(v___x_3712_);
v___x_3714_ = l_Lean_Environment_header(v_env_3711_);
lean_dec_ref(v_env_3711_);
v_isModule_3715_ = lean_ctor_get_uint8(v___x_3714_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_3714_);
if (v_isModule_3715_ == 0)
{
lean_dec_ref(v_env_3713_);
lean_dec(v_cls_3685_);
v_exportedInfo_x3f_3691_ = v___x_3684_;
v___y_3692_ = v___y_3687_;
v___y_3693_ = v___y_3688_;
goto v___jp_3690_;
}
else
{
uint8_t v_isExporting_3716_; lean_object* v___y_3718_; lean_object* v___y_3719_; 
v_isExporting_3716_ = lean_ctor_get_uint8(v_env_3713_, sizeof(void*)*8);
lean_dec_ref(v_env_3713_);
if (v_isExporting_3716_ == 0)
{
lean_object* v_toCold_3724_; lean_object* v_options_3725_; uint8_t v_hasTrace_3726_; 
lean_dec(v___x_3684_);
v_toCold_3724_ = lean_ctor_get(v___y_3687_, 0);
v_options_3725_ = lean_ctor_get(v_toCold_3724_, 2);
v_hasTrace_3726_ = lean_ctor_get_uint8(v_options_3725_, sizeof(void*)*1);
if (v_hasTrace_3726_ == 0)
{
lean_dec(v_cls_3685_);
v___y_3718_ = v___y_3687_;
v___y_3719_ = v___y_3688_;
goto v___jp_3717_;
}
else
{
lean_object* v_inheritedTraceOptions_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; uint8_t v___x_3730_; 
v_inheritedTraceOptions_3727_ = lean_ctor_get(v_toCold_3724_, 11);
v___x_3728_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
lean_inc(v_cls_3685_);
v___x_3729_ = l_Lean_Name_append(v___x_3728_, v_cls_3685_);
v___x_3730_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3727_, v_options_3725_, v___x_3729_);
lean_dec(v___x_3729_);
if (v___x_3730_ == 0)
{
lean_dec(v_cls_3685_);
v___y_3718_ = v___y_3687_;
v___y_3719_ = v___y_3688_;
goto v___jp_3717_;
}
else
{
lean_object* v_toConstantVal_3731_; lean_object* v_name_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; 
v_toConstantVal_3731_ = lean_ctor_get(v_defn_3686_, 0);
v_name_3732_ = lean_ctor_get(v_toConstantVal_3731_, 0);
v___x_3733_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1);
lean_inc(v_name_3732_);
v___x_3734_ = l_Lean_MessageData_ofName(v_name_3732_);
v___x_3735_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3735_, 0, v___x_3733_);
lean_ctor_set(v___x_3735_, 1, v___x_3734_);
v___x_3736_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_3737_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3737_, 0, v___x_3735_);
lean_ctor_set(v___x_3737_, 1, v___x_3736_);
v___x_3738_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3685_, v___x_3737_, v___y_3687_, v___y_3688_);
if (lean_obj_tag(v___x_3738_) == 0)
{
lean_dec_ref_known(v___x_3738_, 1);
v___y_3718_ = v___y_3687_;
v___y_3719_ = v___y_3688_;
goto v___jp_3717_;
}
else
{
lean_dec_ref(v_defn_3686_);
lean_dec_ref(v___f_3681_);
return v___x_3738_;
}
}
}
}
else
{
lean_dec(v_cls_3685_);
v_exportedInfo_x3f_3691_ = v___x_3684_;
v___y_3692_ = v___y_3687_;
v___y_3693_ = v___y_3688_;
goto v___jp_3690_;
}
v___jp_3717_:
{
lean_object* v_toConstantVal_3720_; uint8_t v_safety_3721_; uint8_t v___x_3722_; uint8_t v___x_3723_; 
v_toConstantVal_3720_ = lean_ctor_get(v_defn_3686_, 0);
v_safety_3721_ = lean_ctor_get_uint8(v_defn_3686_, sizeof(void*)*4);
v___x_3722_ = 1;
v___x_3723_ = l_Lean_instBEqDefinitionSafety_beq(v_safety_3721_, v___x_3722_);
if (v___x_3723_ == 0)
{
lean_inc_ref(v_toConstantVal_3720_);
v___y_3703_ = v___y_3718_;
v___y_3704_ = v___y_3719_;
v___y_3705_ = v_toConstantVal_3720_;
v___y_3706_ = v_isModule_3715_;
goto v___jp_3702_;
}
else
{
lean_inc_ref(v_toConstantVal_3720_);
v___y_3703_ = v___y_3718_;
v___y_3704_ = v___y_3719_;
v___y_3705_ = v_toConstantVal_3720_;
v___y_3706_ = v_isExporting_3716_;
goto v___jp_3702_;
}
}
}
}
}
else
{
lean_dec(v___x_3712_);
lean_dec_ref(v_env_3711_);
lean_dec(v_cls_3685_);
v_exportedInfo_x3f_3691_ = v___x_3684_;
v___y_3692_ = v___y_3687_;
v___y_3693_ = v___y_3688_;
goto v___jp_3690_;
}
v___jp_3690_:
{
lean_object* v_toConstantVal_3694_; lean_object* v_name_3695_; lean_object* v___x_3696_; uint8_t v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; 
v_toConstantVal_3694_ = lean_ctor_get(v_defn_3686_, 0);
v_name_3695_ = lean_ctor_get(v_toConstantVal_3694_, 0);
lean_inc(v_name_3695_);
v___x_3696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3696_, 0, v_defn_3686_);
v___x_3697_ = 0;
v___x_3698_ = lean_box(v___x_3697_);
v___x_3699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3699_, 0, v___x_3696_);
lean_ctor_set(v___x_3699_, 1, v___x_3698_);
v___x_3700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3700_, 0, v_name_3695_);
lean_ctor_set(v___x_3700_, 1, v___x_3699_);
lean_inc(v___y_3693_);
lean_inc_ref(v___y_3692_);
v___x_3701_ = lean_apply_5(v___f_3681_, v___x_3700_, v_exportedInfo_x3f_3691_, v___y_3692_, v___y_3693_, lean_box(0));
return v___x_3701_;
}
v___jp_3702_:
{
lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; 
v___x_3707_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3707_, 0, v___y_3705_);
lean_ctor_set_uint8(v___x_3707_, sizeof(void*)*1, v___y_3706_);
v___x_3708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3708_, 0, v___x_3707_);
v___x_3709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3709_, 0, v___x_3708_);
v_exportedInfo_x3f_3691_ = v___x_3709_;
v___y_3692_ = v___y_3703_;
v___y_3693_ = v___y_3704_;
goto v___jp_3690_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__11___boxed(lean_object* v___f_3739_, lean_object* v_forceExpose_3740_, lean_object* v___x_3741_, lean_object* v___x_3742_, lean_object* v_cls_3743_, lean_object* v_defn_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_){
_start:
{
uint8_t v_forceExpose_boxed_3748_; uint8_t v___x_54381__boxed_3749_; lean_object* v_res_3750_; 
v_forceExpose_boxed_3748_ = lean_unbox(v_forceExpose_3740_);
v___x_54381__boxed_3749_ = lean_unbox(v___x_3741_);
v_res_3750_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__11(v___f_3739_, v_forceExpose_boxed_3748_, v___x_54381__boxed_3749_, v___x_3742_, v_cls_3743_, v_defn_3744_, v___y_3745_, v___y_3746_);
lean_dec(v___y_3746_);
lean_dec_ref(v___y_3745_);
return v_res_3750_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__13(lean_object* v_val_3751_, lean_object* v___f_3752_, lean_object* v_____r_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_){
_start:
{
lean_object* v_toConstantVal_3757_; uint8_t v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; 
v_toConstantVal_3757_ = lean_ctor_get(v_val_3751_, 0);
v___x_3758_ = 0;
lean_inc_ref(v_toConstantVal_3757_);
v___x_3759_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3759_, 0, v_toConstantVal_3757_);
lean_ctor_set_uint8(v___x_3759_, sizeof(void*)*1, v___x_3758_);
v___x_3760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3760_, 0, v___x_3759_);
v___x_3761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3761_, 0, v___x_3760_);
v___x_3762_ = lean_box(0);
lean_inc(v___y_3755_);
lean_inc_ref(v___y_3754_);
v___x_3763_ = lean_apply_5(v___f_3752_, v___x_3762_, v___x_3761_, v___y_3754_, v___y_3755_, lean_box(0));
return v___x_3763_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__13___boxed(lean_object* v_val_3764_, lean_object* v___f_3765_, lean_object* v_____r_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_){
_start:
{
lean_object* v_res_3770_; 
v_res_3770_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__13(v_val_3764_, v___f_3765_, v_____r_3766_, v___y_3767_, v___y_3768_);
lean_dec(v___y_3768_);
lean_dec_ref(v___y_3767_);
lean_dec_ref(v_val_3764_);
return v_res_3770_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__1(lean_object* v_x_3771_, lean_object* v_x_3772_){
_start:
{
if (lean_obj_tag(v_x_3772_) == 0)
{
return v_x_3771_;
}
else
{
lean_object* v_head_3773_; lean_object* v_tail_3774_; lean_object* v___x_3775_; 
v_head_3773_ = lean_ctor_get(v_x_3772_, 0);
lean_inc(v_head_3773_);
v_tail_3774_ = lean_ctor_get(v_x_3772_, 1);
lean_inc(v_tail_3774_);
lean_dec_ref_known(v_x_3772_, 2);
v___x_3775_ = l___private_Lean_AddDecl_0__Lean_registerNamePrefixes(v_x_3771_, v_head_3773_);
v_x_3771_ = v___x_3775_;
v_x_3772_ = v_tail_3774_;
goto _start;
}
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0(void){
_start:
{
lean_object* v_cls_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; 
v_cls_3777_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_));
v___x_3778_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__0));
v___x_3779_ = l_Lean_Name_append(v___x_3778_, v_cls_3777_);
return v___x_3779_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2(void){
_start:
{
lean_object* v___x_3781_; lean_object* v___x_3782_; 
v___x_3781_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__1));
v___x_3782_ = l_Lean_stringToMessageData(v___x_3781_);
return v___x_3782_;
}
}
static lean_object* _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4(void){
_start:
{
lean_object* v___x_3784_; lean_object* v___x_3785_; 
v___x_3784_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__3));
v___x_3785_ = l_Lean_stringToMessageData(v___x_3784_);
return v___x_3785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore(lean_object* v_decl_3786_, uint8_t v_forceExpose_3787_, lean_object* v_a_3788_, lean_object* v_a_3789_){
_start:
{
lean_object* v___y_3792_; lean_object* v___y_3793_; lean_object* v_a_3794_; lean_object* v___y_3805_; lean_object* v___y_3806_; lean_object* v_a_3807_; lean_object* v___y_3818_; lean_object* v___y_3819_; lean_object* v_a_3820_; lean_object* v___y_3831_; lean_object* v___y_3832_; lean_object* v_a_3833_; lean_object* v_toCold_3843_; lean_object* v_options_3844_; lean_object* v_inheritedTraceOptions_3845_; uint8_t v_hasTrace_3846_; lean_object* v___y_3848_; lean_object* v___y_3849_; lean_object* v___y_3850_; lean_object* v___y_3851_; lean_object* v___y_3852_; lean_object* v___y_3853_; uint8_t v___y_3854_; lean_object* v___y_3855_; lean_object* v___y_3856_; lean_object* v___y_3857_; lean_object* v___y_3858_; lean_object* v___y_3859_; lean_object* v___y_3860_; lean_object* v___y_3923_; uint8_t v___y_3924_; lean_object* v___y_3925_; lean_object* v___y_3926_; lean_object* v___y_3927_; lean_object* v___y_3928_; lean_object* v___y_3929_; lean_object* v___y_3930_; uint8_t v___y_3954_; lean_object* v___y_3955_; lean_object* v___y_3956_; lean_object* v_exportedInfo_x3f_3957_; lean_object* v___y_3958_; lean_object* v___y_3959_; uint8_t v___y_3969_; lean_object* v___y_3970_; lean_object* v___y_3971_; lean_object* v___y_3972_; lean_object* v___y_3973_; uint8_t v___y_3976_; lean_object* v___y_3977_; lean_object* v___y_3978_; lean_object* v___y_3979_; lean_object* v___y_3980_; lean_object* v_cls_3982_; lean_object* v___y_3984_; lean_object* v_options_3985_; lean_object* v_inheritedTraceOptions_3986_; lean_object* v___y_3987_; 
v_toCold_3843_ = lean_ctor_get(v_a_3788_, 0);
v_options_3844_ = lean_ctor_get(v_toCold_3843_, 2);
v_inheritedTraceOptions_3845_ = lean_ctor_get(v_toCold_3843_, 11);
v_hasTrace_3846_ = lean_ctor_get_uint8(v_options_3844_, sizeof(void*)*1);
v_cls_3982_ = ((lean_object*)(l___private_Lean_AddDecl_0__Lean_initFn___closed__1_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_));
if (v_hasTrace_3846_ == 0)
{
lean_object* v___x_3994_; lean_object* v_env_3995_; lean_object* v_nextMacroScope_3996_; lean_object* v_ngen_3997_; lean_object* v_auxDeclNGen_3998_; lean_object* v_traceState_3999_; lean_object* v_messages_4000_; lean_object* v_infoState_4001_; lean_object* v_snapshotTasks_4002_; lean_object* v___x_4004_; uint8_t v_isShared_4005_; uint8_t v_isSharedCheck_4204_; 
v___x_3994_ = lean_st_ref_take(v_a_3789_);
v_env_3995_ = lean_ctor_get(v___x_3994_, 0);
v_nextMacroScope_3996_ = lean_ctor_get(v___x_3994_, 1);
v_ngen_3997_ = lean_ctor_get(v___x_3994_, 2);
v_auxDeclNGen_3998_ = lean_ctor_get(v___x_3994_, 3);
v_traceState_3999_ = lean_ctor_get(v___x_3994_, 4);
v_messages_4000_ = lean_ctor_get(v___x_3994_, 6);
v_infoState_4001_ = lean_ctor_get(v___x_3994_, 7);
v_snapshotTasks_4002_ = lean_ctor_get(v___x_3994_, 8);
v_isSharedCheck_4204_ = !lean_is_exclusive(v___x_3994_);
if (v_isSharedCheck_4204_ == 0)
{
lean_object* v_unused_4205_; 
v_unused_4205_ = lean_ctor_get(v___x_3994_, 5);
lean_dec(v_unused_4205_);
v___x_4004_ = v___x_3994_;
v_isShared_4005_ = v_isSharedCheck_4204_;
goto v_resetjp_4003_;
}
else
{
lean_inc(v_snapshotTasks_4002_);
lean_inc(v_infoState_4001_);
lean_inc(v_messages_4000_);
lean_inc(v_traceState_3999_);
lean_inc(v_auxDeclNGen_3998_);
lean_inc(v_ngen_3997_);
lean_inc(v_nextMacroScope_3996_);
lean_inc(v_env_3995_);
lean_dec(v___x_3994_);
v___x_4004_ = lean_box(0);
v_isShared_4005_ = v_isSharedCheck_4204_;
goto v_resetjp_4003_;
}
v_resetjp_4003_:
{
lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; uint8_t v___y_4010_; lean_object* v___y_4011_; lean_object* v___y_4012_; lean_object* v___y_4013_; lean_object* v___y_4014_; lean_object* v___y_4015_; lean_object* v___x_4038_; 
lean_inc(v_decl_3786_);
v___x_4006_ = l_Lean_Declaration_getNames(v_decl_3786_);
v___x_4007_ = l_List_foldl___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__1(v_env_3995_, v___x_4006_);
v___x_4008_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_4005_ == 0)
{
lean_ctor_set(v___x_4004_, 5, v___x_4008_);
lean_ctor_set(v___x_4004_, 0, v___x_4007_);
v___x_4038_ = v___x_4004_;
goto v_reusejp_4037_;
}
else
{
lean_object* v_reuseFailAlloc_4203_; 
v_reuseFailAlloc_4203_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4203_, 0, v___x_4007_);
lean_ctor_set(v_reuseFailAlloc_4203_, 1, v_nextMacroScope_3996_);
lean_ctor_set(v_reuseFailAlloc_4203_, 2, v_ngen_3997_);
lean_ctor_set(v_reuseFailAlloc_4203_, 3, v_auxDeclNGen_3998_);
lean_ctor_set(v_reuseFailAlloc_4203_, 4, v_traceState_3999_);
lean_ctor_set(v_reuseFailAlloc_4203_, 5, v___x_4008_);
lean_ctor_set(v_reuseFailAlloc_4203_, 6, v_messages_4000_);
lean_ctor_set(v_reuseFailAlloc_4203_, 7, v_infoState_4001_);
lean_ctor_set(v_reuseFailAlloc_4203_, 8, v_snapshotTasks_4002_);
v___x_4038_ = v_reuseFailAlloc_4203_;
goto v_reusejp_4037_;
}
v___jp_4009_:
{
lean_object* v___x_4016_; lean_object* v_env_4017_; lean_object* v_nextMacroScope_4018_; lean_object* v_ngen_4019_; lean_object* v_auxDeclNGen_4020_; lean_object* v_traceState_4021_; lean_object* v_messages_4022_; lean_object* v_infoState_4023_; lean_object* v_snapshotTasks_4024_; lean_object* v___x_4026_; uint8_t v_isShared_4027_; uint8_t v_isSharedCheck_4035_; 
v___x_4016_ = lean_st_ref_take(v___y_4013_);
v_env_4017_ = lean_ctor_get(v___x_4016_, 0);
v_nextMacroScope_4018_ = lean_ctor_get(v___x_4016_, 1);
v_ngen_4019_ = lean_ctor_get(v___x_4016_, 2);
v_auxDeclNGen_4020_ = lean_ctor_get(v___x_4016_, 3);
v_traceState_4021_ = lean_ctor_get(v___x_4016_, 4);
v_messages_4022_ = lean_ctor_get(v___x_4016_, 6);
v_infoState_4023_ = lean_ctor_get(v___x_4016_, 7);
v_snapshotTasks_4024_ = lean_ctor_get(v___x_4016_, 8);
v_isSharedCheck_4035_ = !lean_is_exclusive(v___x_4016_);
if (v_isSharedCheck_4035_ == 0)
{
lean_object* v_unused_4036_; 
v_unused_4036_ = lean_ctor_get(v___x_4016_, 5);
lean_dec(v_unused_4036_);
v___x_4026_ = v___x_4016_;
v_isShared_4027_ = v_isSharedCheck_4035_;
goto v_resetjp_4025_;
}
else
{
lean_inc(v_snapshotTasks_4024_);
lean_inc(v_infoState_4023_);
lean_inc(v_messages_4022_);
lean_inc(v_traceState_4021_);
lean_inc(v_auxDeclNGen_4020_);
lean_inc(v_ngen_4019_);
lean_inc(v_nextMacroScope_4018_);
lean_inc(v_env_4017_);
lean_dec(v___x_4016_);
v___x_4026_ = lean_box(0);
v_isShared_4027_ = v_isSharedCheck_4035_;
goto v_resetjp_4025_;
}
v_resetjp_4025_:
{
lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4032_; 
v___x_4028_ = l___private_Lean_OriginalConstKind_0__Lean_privateConstKindsExt;
v___x_4029_ = lean_box(v___y_4010_);
lean_inc(v___y_4015_);
v___x_4030_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_4028_, v_env_4017_, v___y_4015_, v___x_4029_);
if (v_isShared_4027_ == 0)
{
lean_ctor_set(v___x_4026_, 5, v___x_4008_);
lean_ctor_set(v___x_4026_, 0, v___x_4030_);
v___x_4032_ = v___x_4026_;
goto v_reusejp_4031_;
}
else
{
lean_object* v_reuseFailAlloc_4034_; 
v_reuseFailAlloc_4034_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4034_, 0, v___x_4030_);
lean_ctor_set(v_reuseFailAlloc_4034_, 1, v_nextMacroScope_4018_);
lean_ctor_set(v_reuseFailAlloc_4034_, 2, v_ngen_4019_);
lean_ctor_set(v_reuseFailAlloc_4034_, 3, v_auxDeclNGen_4020_);
lean_ctor_set(v_reuseFailAlloc_4034_, 4, v_traceState_4021_);
lean_ctor_set(v_reuseFailAlloc_4034_, 5, v___x_4008_);
lean_ctor_set(v_reuseFailAlloc_4034_, 6, v_messages_4022_);
lean_ctor_set(v_reuseFailAlloc_4034_, 7, v_infoState_4023_);
lean_ctor_set(v_reuseFailAlloc_4034_, 8, v_snapshotTasks_4024_);
v___x_4032_ = v_reuseFailAlloc_4034_;
goto v_reusejp_4031_;
}
v_reusejp_4031_:
{
lean_object* v___x_4033_; 
v___x_4033_ = lean_st_ref_put(v___y_4013_, v___x_4032_);
v___y_3954_ = v___y_4010_;
v___y_3955_ = v___y_4012_;
v___y_3956_ = v___y_4015_;
v_exportedInfo_x3f_3957_ = v___y_4014_;
v___y_3958_ = v___y_4011_;
v___y_3959_ = v___y_4013_;
goto v___jp_3953_;
}
}
}
v_reusejp_4037_:
{
lean_object* v___x_4039_; lean_object* v___x_4040_; uint8_t v___y_4042_; lean_object* v___y_4043_; lean_object* v___y_4044_; lean_object* v___y_4045_; lean_object* v___y_4046_; lean_object* v___y_4047_; lean_object* v_fst_4079_; lean_object* v_fst_4080_; uint8_t v_snd_4081_; lean_object* v_exportedInfo_x3f_4082_; lean_object* v___y_4083_; lean_object* v___y_4084_; lean_object* v___y_4094_; lean_object* v_exportedInfo_x3f_4095_; lean_object* v___y_4096_; lean_object* v___y_4097_; lean_object* v___y_4103_; lean_object* v___y_4104_; lean_object* v___y_4105_; lean_object* v___y_4106_; uint8_t v___y_4107_; uint8_t v___y_4112_; lean_object* v___y_4113_; lean_object* v_toConstantVal_4114_; uint8_t v_safety_4115_; lean_object* v___y_4116_; lean_object* v___y_4117_; uint8_t v___y_4121_; lean_object* v___y_4122_; lean_object* v___y_4123_; lean_object* v___y_4124_; lean_object* v_defn_4128_; lean_object* v___y_4129_; lean_object* v___y_4130_; 
v___x_4039_ = lean_st_ref_put(v_a_3789_, v___x_4038_);
v___x_4040_ = lean_box(0);
switch(lean_obj_tag(v_decl_3786_))
{
case 2:
{
lean_object* v_val_4153_; lean_object* v_exportedInfo_x3f_4155_; lean_object* v___y_4156_; lean_object* v___y_4157_; lean_object* v___x_4162_; 
v_val_4153_ = lean_ctor_get(v_decl_3786_, 0);
v___x_4162_ = lean_st_ref_get(v_a_3789_);
if (v_forceExpose_3787_ == 0)
{
lean_object* v_env_4163_; lean_object* v___x_4164_; uint8_t v_isModule_4165_; 
v_env_4163_ = lean_ctor_get(v___x_4162_, 0);
lean_inc_ref(v_env_4163_);
lean_dec(v___x_4162_);
v___x_4164_ = l_Lean_Environment_header(v_env_4163_);
lean_dec_ref(v_env_4163_);
v_isModule_4165_ = lean_ctor_get_uint8(v___x_4164_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4164_);
if (v_isModule_4165_ == 0)
{
v_exportedInfo_x3f_4155_ = v___x_4040_;
v___y_4156_ = v_a_3788_;
v___y_4157_ = v_a_3789_;
goto v___jp_4154_;
}
else
{
lean_object* v_toConstantVal_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; 
v_toConstantVal_4166_ = lean_ctor_get(v_val_4153_, 0);
lean_inc_ref(v_toConstantVal_4166_);
v___x_4167_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4167_, 0, v_toConstantVal_4166_);
lean_ctor_set_uint8(v___x_4167_, sizeof(void*)*1, v_hasTrace_3846_);
v___x_4168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4168_, 0, v___x_4167_);
v___x_4169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4169_, 0, v___x_4168_);
v_exportedInfo_x3f_4155_ = v___x_4169_;
v___y_4156_ = v_a_3788_;
v___y_4157_ = v_a_3789_;
goto v___jp_4154_;
}
}
else
{
lean_dec(v___x_4162_);
v_exportedInfo_x3f_4155_ = v___x_4040_;
v___y_4156_ = v_a_3788_;
v___y_4157_ = v_a_3789_;
goto v___jp_4154_;
}
v___jp_4154_:
{
lean_object* v_toConstantVal_4158_; lean_object* v_name_4159_; lean_object* v___x_4160_; uint8_t v___x_4161_; 
v_toConstantVal_4158_ = lean_ctor_get(v_val_4153_, 0);
v_name_4159_ = lean_ctor_get(v_toConstantVal_4158_, 0);
lean_inc_ref(v_val_4153_);
v___x_4160_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4160_, 0, v_val_4153_);
v___x_4161_ = 1;
lean_inc(v_name_4159_);
v_fst_4079_ = v_name_4159_;
v_fst_4080_ = v___x_4160_;
v_snd_4081_ = v___x_4161_;
v_exportedInfo_x3f_4082_ = v_exportedInfo_x3f_4155_;
v___y_4083_ = v___y_4156_;
v___y_4084_ = v___y_4157_;
goto v___jp_4078_;
}
}
case 1:
{
lean_object* v_val_4170_; 
v_val_4170_ = lean_ctor_get(v_decl_3786_, 0);
lean_inc_ref(v_val_4170_);
v_defn_4128_ = v_val_4170_;
v___y_4129_ = v_a_3788_;
v___y_4130_ = v_a_3789_;
goto v___jp_4127_;
}
case 5:
{
lean_object* v_defns_4171_; 
v_defns_4171_ = lean_ctor_get(v_decl_3786_, 0);
if (lean_obj_tag(v_defns_4171_) == 1)
{
lean_object* v_tail_4172_; 
v_tail_4172_ = lean_ctor_get(v_defns_4171_, 1);
if (lean_obj_tag(v_tail_4172_) == 0)
{
lean_object* v_head_4173_; 
v_head_4173_ = lean_ctor_get(v_defns_4171_, 0);
lean_inc(v_head_4173_);
v_defn_4128_ = v_head_4173_;
v___y_4129_ = v_a_3788_;
v___y_4130_ = v_a_3789_;
goto v___jp_4127_;
}
else
{
lean_object* v___x_4174_; 
v___x_4174_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_3786_, v_a_3788_, v_a_3789_);
return v___x_4174_;
}
}
else
{
lean_object* v___x_4175_; 
v___x_4175_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_3786_, v_a_3788_, v_a_3789_);
return v___x_4175_;
}
}
case 3:
{
lean_object* v_val_4176_; lean_object* v_exportedInfo_x3f_4178_; lean_object* v___y_4179_; lean_object* v___y_4180_; lean_object* v___x_4185_; lean_object* v_env_4186_; lean_object* v___x_4187_; 
v_val_4176_ = lean_ctor_get(v_decl_3786_, 0);
v___x_4185_ = lean_st_ref_get(v_a_3789_);
v_env_4186_ = lean_ctor_get(v___x_4185_, 0);
lean_inc_ref(v_env_4186_);
lean_dec(v___x_4185_);
v___x_4187_ = lean_st_ref_get(v_a_3789_);
if (v_forceExpose_3787_ == 0)
{
lean_object* v_env_4188_; lean_object* v___x_4189_; uint8_t v_isModule_4190_; 
v_env_4188_ = lean_ctor_get(v___x_4187_, 0);
lean_inc_ref(v_env_4188_);
lean_dec(v___x_4187_);
v___x_4189_ = l_Lean_Environment_header(v_env_4186_);
lean_dec_ref(v_env_4186_);
v_isModule_4190_ = lean_ctor_get_uint8(v___x_4189_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4189_);
if (v_isModule_4190_ == 0)
{
lean_dec_ref(v_env_4188_);
v_exportedInfo_x3f_4178_ = v___x_4040_;
v___y_4179_ = v_a_3788_;
v___y_4180_ = v_a_3789_;
goto v___jp_4177_;
}
else
{
uint8_t v_isExporting_4191_; 
v_isExporting_4191_ = lean_ctor_get_uint8(v_env_4188_, sizeof(void*)*8);
lean_dec_ref(v_env_4188_);
if (v_isExporting_4191_ == 0)
{
lean_object* v_toConstantVal_4192_; uint8_t v_isUnsafe_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; 
v_toConstantVal_4192_ = lean_ctor_get(v_val_4176_, 0);
v_isUnsafe_4193_ = lean_ctor_get_uint8(v_val_4176_, sizeof(void*)*3);
lean_inc_ref(v_toConstantVal_4192_);
v___x_4194_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4194_, 0, v_toConstantVal_4192_);
lean_ctor_set_uint8(v___x_4194_, sizeof(void*)*1, v_isUnsafe_4193_);
v___x_4195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4195_, 0, v___x_4194_);
v___x_4196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4196_, 0, v___x_4195_);
v_exportedInfo_x3f_4178_ = v___x_4196_;
v___y_4179_ = v_a_3788_;
v___y_4180_ = v_a_3789_;
goto v___jp_4177_;
}
else
{
v_exportedInfo_x3f_4178_ = v___x_4040_;
v___y_4179_ = v_a_3788_;
v___y_4180_ = v_a_3789_;
goto v___jp_4177_;
}
}
}
else
{
lean_dec(v___x_4187_);
lean_dec_ref(v_env_4186_);
v_exportedInfo_x3f_4178_ = v___x_4040_;
v___y_4179_ = v_a_3788_;
v___y_4180_ = v_a_3789_;
goto v___jp_4177_;
}
v___jp_4177_:
{
lean_object* v_toConstantVal_4181_; lean_object* v_name_4182_; lean_object* v___x_4183_; uint8_t v___x_4184_; 
v_toConstantVal_4181_ = lean_ctor_get(v_val_4176_, 0);
v_name_4182_ = lean_ctor_get(v_toConstantVal_4181_, 0);
lean_inc_ref(v_val_4176_);
v___x_4183_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4183_, 0, v_val_4176_);
v___x_4184_ = 3;
lean_inc(v_name_4182_);
v_fst_4079_ = v_name_4182_;
v_fst_4080_ = v___x_4183_;
v_snd_4081_ = v___x_4184_;
v_exportedInfo_x3f_4082_ = v_exportedInfo_x3f_4178_;
v___y_4083_ = v___y_4179_;
v___y_4084_ = v___y_4180_;
goto v___jp_4078_;
}
}
case 0:
{
lean_object* v_val_4197_; lean_object* v_toConstantVal_4198_; lean_object* v_name_4199_; lean_object* v___x_4200_; uint8_t v___x_4201_; 
v_val_4197_ = lean_ctor_get(v_decl_3786_, 0);
v_toConstantVal_4198_ = lean_ctor_get(v_val_4197_, 0);
v_name_4199_ = lean_ctor_get(v_toConstantVal_4198_, 0);
lean_inc_ref(v_val_4197_);
v___x_4200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4200_, 0, v_val_4197_);
v___x_4201_ = 2;
lean_inc(v_name_4199_);
v_fst_4079_ = v_name_4199_;
v_fst_4080_ = v___x_4200_;
v_snd_4081_ = v___x_4201_;
v_exportedInfo_x3f_4082_ = v___x_4040_;
v___y_4083_ = v_a_3788_;
v___y_4084_ = v_a_3789_;
goto v___jp_4078_;
}
default: 
{
lean_object* v___x_4202_; 
v___x_4202_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_3786_, v_a_3788_, v_a_3789_);
return v___x_4202_;
}
}
v___jp_4041_:
{
lean_object* v___x_4048_; uint8_t v___x_4049_; 
lean_inc(v_decl_3786_);
v___x_4048_ = l_Lean_Declaration_getTopLevelNames(v_decl_3786_);
v___x_4049_ = l_List_all___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2(v___x_4048_);
lean_dec(v___x_4048_);
if (v___x_4049_ == 0)
{
if (lean_obj_tag(v___y_4044_) == 0)
{
if (v___x_4049_ == 0)
{
lean_object* v_toCold_4050_; lean_object* v_options_4051_; uint8_t v_hasTrace_4052_; 
v_toCold_4050_ = lean_ctor_get(v___y_4046_, 0);
v_options_4051_ = lean_ctor_get(v_toCold_4050_, 2);
v_hasTrace_4052_ = lean_ctor_get_uint8(v_options_4051_, sizeof(void*)*1);
if (v_hasTrace_4052_ == 0)
{
v___y_3976_ = v___y_4042_;
v___y_3977_ = v___y_4043_;
v___y_3978_ = v___y_4045_;
v___y_3979_ = v___y_4046_;
v___y_3980_ = v___y_4047_;
goto v___jp_3975_;
}
else
{
lean_object* v_inheritedTraceOptions_4053_; lean_object* v___x_4054_; uint8_t v___x_4055_; 
v_inheritedTraceOptions_4053_ = lean_ctor_get(v_toCold_4050_, 11);
v___x_4054_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0);
v___x_4055_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4053_, v_options_4051_, v___x_4054_);
if (v___x_4055_ == 0)
{
v___y_3976_ = v___y_4042_;
v___y_3977_ = v___y_4043_;
v___y_3978_ = v___y_4045_;
v___y_3979_ = v___y_4046_;
v___y_3980_ = v___y_4047_;
goto v___jp_3975_;
}
else
{
lean_object* v___x_4056_; lean_object* v___x_4057_; 
v___x_4056_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3);
v___x_4057_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3982_, v___x_4056_, v___y_4046_, v___y_4047_);
if (lean_obj_tag(v___x_4057_) == 0)
{
lean_dec_ref_known(v___x_4057_, 1);
v___y_3976_ = v___y_4042_;
v___y_3977_ = v___y_4043_;
v___y_3978_ = v___y_4045_;
v___y_3979_ = v___y_4046_;
v___y_3980_ = v___y_4047_;
goto v___jp_3975_;
}
else
{
lean_dec(v___y_4045_);
lean_dec_ref(v___y_4043_);
lean_dec(v_decl_3786_);
return v___x_4057_;
}
}
}
}
else
{
v___y_4010_ = v___y_4042_;
v___y_4011_ = v___y_4046_;
v___y_4012_ = v___y_4043_;
v___y_4013_ = v___y_4047_;
v___y_4014_ = v___y_4044_;
v___y_4015_ = v___y_4045_;
goto v___jp_4009_;
}
}
else
{
v___y_4010_ = v___y_4042_;
v___y_4011_ = v___y_4046_;
v___y_4012_ = v___y_4043_;
v___y_4013_ = v___y_4047_;
v___y_4014_ = v___y_4044_;
v___y_4015_ = v___y_4045_;
goto v___jp_4009_;
}
}
else
{
lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v_a_4060_; uint8_t v___x_4061_; 
lean_dec(v___y_4044_);
v___x_4058_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_4059_ = l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___redArg(v___x_4058_, v___y_4046_);
v_a_4060_ = lean_ctor_get(v___x_4059_, 0);
lean_inc(v_a_4060_);
lean_dec_ref(v___x_4059_);
v___x_4061_ = lean_unbox(v_a_4060_);
lean_dec(v_a_4060_);
if (v___x_4061_ == 0)
{
lean_object* v_toCold_4062_; lean_object* v_options_4063_; uint8_t v_hasTrace_4064_; 
v_toCold_4062_ = lean_ctor_get(v___y_4046_, 0);
v_options_4063_ = lean_ctor_get(v_toCold_4062_, 2);
v_hasTrace_4064_ = lean_ctor_get_uint8(v_options_4063_, sizeof(void*)*1);
if (v_hasTrace_4064_ == 0)
{
v___y_3954_ = v___y_4042_;
v___y_3955_ = v___y_4043_;
v___y_3956_ = v___y_4045_;
v_exportedInfo_x3f_3957_ = v___x_4040_;
v___y_3958_ = v___y_4046_;
v___y_3959_ = v___y_4047_;
goto v___jp_3953_;
}
else
{
lean_object* v_inheritedTraceOptions_4065_; lean_object* v___x_4066_; uint8_t v___x_4067_; 
v_inheritedTraceOptions_4065_ = lean_ctor_get(v_toCold_4062_, 11);
v___x_4066_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0);
v___x_4067_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4065_, v_options_4063_, v___x_4066_);
if (v___x_4067_ == 0)
{
v___y_3954_ = v___y_4042_;
v___y_3955_ = v___y_4043_;
v___y_3956_ = v___y_4045_;
v_exportedInfo_x3f_3957_ = v___x_4040_;
v___y_3958_ = v___y_4046_;
v___y_3959_ = v___y_4047_;
goto v___jp_3953_;
}
else
{
lean_object* v___x_4068_; lean_object* v___x_4069_; 
v___x_4068_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5);
v___x_4069_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3982_, v___x_4068_, v___y_4046_, v___y_4047_);
if (lean_obj_tag(v___x_4069_) == 0)
{
lean_dec_ref_known(v___x_4069_, 1);
v___y_3954_ = v___y_4042_;
v___y_3955_ = v___y_4043_;
v___y_3956_ = v___y_4045_;
v_exportedInfo_x3f_3957_ = v___x_4040_;
v___y_3958_ = v___y_4046_;
v___y_3959_ = v___y_4047_;
goto v___jp_3953_;
}
else
{
lean_dec(v___y_4045_);
lean_dec_ref(v___y_4043_);
lean_dec(v_decl_3786_);
return v___x_4069_;
}
}
}
}
else
{
lean_object* v_toCold_4070_; lean_object* v_options_4071_; uint8_t v_hasTrace_4072_; 
v_toCold_4070_ = lean_ctor_get(v___y_4046_, 0);
v_options_4071_ = lean_ctor_get(v_toCold_4070_, 2);
v_hasTrace_4072_ = lean_ctor_get_uint8(v_options_4071_, sizeof(void*)*1);
if (v_hasTrace_4072_ == 0)
{
v___y_3969_ = v___y_4042_;
v___y_3970_ = v___y_4043_;
v___y_3971_ = v___y_4045_;
v___y_3972_ = v___y_4046_;
v___y_3973_ = v___y_4047_;
goto v___jp_3968_;
}
else
{
lean_object* v_inheritedTraceOptions_4073_; lean_object* v___x_4074_; uint8_t v___x_4075_; 
v_inheritedTraceOptions_4073_ = lean_ctor_get(v_toCold_4070_, 11);
v___x_4074_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0);
v___x_4075_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4073_, v_options_4071_, v___x_4074_);
if (v___x_4075_ == 0)
{
v___y_3969_ = v___y_4042_;
v___y_3970_ = v___y_4043_;
v___y_3971_ = v___y_4045_;
v___y_3972_ = v___y_4046_;
v___y_3973_ = v___y_4047_;
goto v___jp_3968_;
}
else
{
lean_object* v___x_4076_; lean_object* v___x_4077_; 
v___x_4076_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7);
v___x_4077_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3982_, v___x_4076_, v___y_4046_, v___y_4047_);
if (lean_obj_tag(v___x_4077_) == 0)
{
lean_dec_ref_known(v___x_4077_, 1);
v___y_3969_ = v___y_4042_;
v___y_3970_ = v___y_4043_;
v___y_3971_ = v___y_4045_;
v___y_3972_ = v___y_4046_;
v___y_3973_ = v___y_4047_;
goto v___jp_3968_;
}
else
{
lean_dec(v___y_4045_);
lean_dec_ref(v___y_4043_);
lean_dec(v_decl_3786_);
return v___x_4077_;
}
}
}
}
}
}
v___jp_4078_:
{
lean_object* v___x_4085_; lean_object* v_env_4086_; uint8_t v___x_4087_; 
v___x_4085_ = lean_st_ref_get(v___y_4084_);
v_env_4086_ = lean_ctor_get(v___x_4085_, 0);
lean_inc_ref(v_env_4086_);
lean_dec(v___x_4085_);
v___x_4087_ = l_Lean_Environment_containsOnBranch(v_env_4086_, v_fst_4079_);
lean_dec_ref(v_env_4086_);
if (v___x_4087_ == 0)
{
v___y_4042_ = v_snd_4081_;
v___y_4043_ = v_fst_4080_;
v___y_4044_ = v_exportedInfo_x3f_4082_;
v___y_4045_ = v_fst_4079_;
v___y_4046_ = v___y_4083_;
v___y_4047_ = v___y_4084_;
goto v___jp_4041_;
}
else
{
lean_object* v___x_4088_; lean_object* v_env_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; 
lean_dec(v_exportedInfo_x3f_4082_);
lean_dec_ref(v_fst_4080_);
lean_dec(v_decl_3786_);
v___x_4088_ = lean_st_ref_get(v___y_4084_);
v_env_4089_ = lean_ctor_get(v___x_4088_, 0);
lean_inc_ref(v_env_4089_);
lean_dec(v___x_4088_);
v___x_4090_ = lean_elab_environment_to_kernel_env(v_env_4089_);
v___x_4091_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4091_, 0, v___x_4090_);
lean_ctor_set(v___x_4091_, 1, v_fst_4079_);
v___x_4092_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(v___x_4091_, v___y_4083_, v___y_4084_);
return v___x_4092_;
}
}
v___jp_4093_:
{
lean_object* v_toConstantVal_4098_; lean_object* v_name_4099_; lean_object* v___x_4100_; uint8_t v___x_4101_; 
v_toConstantVal_4098_ = lean_ctor_get(v___y_4094_, 0);
v_name_4099_ = lean_ctor_get(v_toConstantVal_4098_, 0);
lean_inc(v_name_4099_);
v___x_4100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4100_, 0, v___y_4094_);
v___x_4101_ = 0;
v_fst_4079_ = v_name_4099_;
v_fst_4080_ = v___x_4100_;
v_snd_4081_ = v___x_4101_;
v_exportedInfo_x3f_4082_ = v_exportedInfo_x3f_4095_;
v___y_4083_ = v___y_4096_;
v___y_4084_ = v___y_4097_;
goto v___jp_4078_;
}
v___jp_4102_:
{
lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; 
v___x_4108_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4108_, 0, v___y_4106_);
lean_ctor_set_uint8(v___x_4108_, sizeof(void*)*1, v___y_4107_);
v___x_4109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4109_, 0, v___x_4108_);
v___x_4110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4110_, 0, v___x_4109_);
v___y_4094_ = v___y_4105_;
v_exportedInfo_x3f_4095_ = v___x_4110_;
v___y_4096_ = v___y_4103_;
v___y_4097_ = v___y_4104_;
goto v___jp_4093_;
}
v___jp_4111_:
{
uint8_t v___x_4118_; uint8_t v___x_4119_; 
v___x_4118_ = 1;
v___x_4119_ = l_Lean_instBEqDefinitionSafety_beq(v_safety_4115_, v___x_4118_);
if (v___x_4119_ == 0)
{
v___y_4103_ = v___y_4116_;
v___y_4104_ = v___y_4117_;
v___y_4105_ = v___y_4113_;
v___y_4106_ = v_toConstantVal_4114_;
v___y_4107_ = v___y_4112_;
goto v___jp_4102_;
}
else
{
v___y_4103_ = v___y_4116_;
v___y_4104_ = v___y_4117_;
v___y_4105_ = v___y_4113_;
v___y_4106_ = v_toConstantVal_4114_;
v___y_4107_ = v_hasTrace_3846_;
goto v___jp_4102_;
}
}
v___jp_4120_:
{
lean_object* v_toConstantVal_4125_; uint8_t v_safety_4126_; 
v_toConstantVal_4125_ = lean_ctor_get(v___y_4122_, 0);
lean_inc_ref(v_toConstantVal_4125_);
v_safety_4126_ = lean_ctor_get_uint8(v___y_4122_, sizeof(void*)*4);
v___y_4112_ = v___y_4121_;
v___y_4113_ = v___y_4122_;
v_toConstantVal_4114_ = v_toConstantVal_4125_;
v_safety_4115_ = v_safety_4126_;
v___y_4116_ = v___y_4123_;
v___y_4117_ = v___y_4124_;
goto v___jp_4111_;
}
v___jp_4127_:
{
lean_object* v___x_4131_; lean_object* v_env_4132_; lean_object* v___x_4133_; 
v___x_4131_ = lean_st_ref_get(v___y_4130_);
v_env_4132_ = lean_ctor_get(v___x_4131_, 0);
lean_inc_ref(v_env_4132_);
lean_dec(v___x_4131_);
v___x_4133_ = lean_st_ref_get(v___y_4130_);
if (v_forceExpose_3787_ == 0)
{
lean_object* v_env_4134_; lean_object* v___x_4135_; uint8_t v_isModule_4136_; 
v_env_4134_ = lean_ctor_get(v___x_4133_, 0);
lean_inc_ref(v_env_4134_);
lean_dec(v___x_4133_);
v___x_4135_ = l_Lean_Environment_header(v_env_4132_);
lean_dec_ref(v_env_4132_);
v_isModule_4136_ = lean_ctor_get_uint8(v___x_4135_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4135_);
if (v_isModule_4136_ == 0)
{
lean_dec_ref(v_env_4134_);
v___y_4094_ = v_defn_4128_;
v_exportedInfo_x3f_4095_ = v___x_4040_;
v___y_4096_ = v___y_4129_;
v___y_4097_ = v___y_4130_;
goto v___jp_4093_;
}
else
{
uint8_t v_isExporting_4137_; 
v_isExporting_4137_ = lean_ctor_get_uint8(v_env_4134_, sizeof(void*)*8);
lean_dec_ref(v_env_4134_);
if (v_isExporting_4137_ == 0)
{
lean_object* v_toCold_4138_; lean_object* v_options_4139_; uint8_t v_hasTrace_4140_; 
v_toCold_4138_ = lean_ctor_get(v___y_4129_, 0);
v_options_4139_ = lean_ctor_get(v_toCold_4138_, 2);
v_hasTrace_4140_ = lean_ctor_get_uint8(v_options_4139_, sizeof(void*)*1);
if (v_hasTrace_4140_ == 0)
{
v___y_4121_ = v_isModule_4136_;
v___y_4122_ = v_defn_4128_;
v___y_4123_ = v___y_4129_;
v___y_4124_ = v___y_4130_;
goto v___jp_4120_;
}
else
{
lean_object* v_inheritedTraceOptions_4141_; lean_object* v___x_4142_; uint8_t v___x_4143_; 
v_inheritedTraceOptions_4141_ = lean_ctor_get(v_toCold_4138_, 11);
v___x_4142_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0);
v___x_4143_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4141_, v_options_4139_, v___x_4142_);
if (v___x_4143_ == 0)
{
v___y_4121_ = v_isModule_4136_;
v___y_4122_ = v_defn_4128_;
v___y_4123_ = v___y_4129_;
v___y_4124_ = v___y_4130_;
goto v___jp_4120_;
}
else
{
lean_object* v_toConstantVal_4144_; uint8_t v_safety_4145_; lean_object* v_name_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; 
v_toConstantVal_4144_ = lean_ctor_get(v_defn_4128_, 0);
lean_inc_ref(v_toConstantVal_4144_);
v_safety_4145_ = lean_ctor_get_uint8(v_defn_4128_, sizeof(void*)*4);
v_name_4146_ = lean_ctor_get(v_toConstantVal_4144_, 0);
v___x_4147_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1);
lean_inc(v_name_4146_);
v___x_4148_ = l_Lean_MessageData_ofName(v_name_4146_);
v___x_4149_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4149_, 0, v___x_4147_);
lean_ctor_set(v___x_4149_, 1, v___x_4148_);
v___x_4150_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_4151_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4151_, 0, v___x_4149_);
lean_ctor_set(v___x_4151_, 1, v___x_4150_);
v___x_4152_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3982_, v___x_4151_, v___y_4129_, v___y_4130_);
if (lean_obj_tag(v___x_4152_) == 0)
{
lean_dec_ref_known(v___x_4152_, 1);
v___y_4112_ = v_isModule_4136_;
v___y_4113_ = v_defn_4128_;
v_toConstantVal_4114_ = v_toConstantVal_4144_;
v_safety_4115_ = v_safety_4145_;
v___y_4116_ = v___y_4129_;
v___y_4117_ = v___y_4130_;
goto v___jp_4111_;
}
else
{
lean_dec_ref(v_toConstantVal_4144_);
lean_dec_ref(v_defn_4128_);
lean_dec(v_decl_3786_);
return v___x_4152_;
}
}
}
}
else
{
v___y_4094_ = v_defn_4128_;
v_exportedInfo_x3f_4095_ = v___x_4040_;
v___y_4096_ = v___y_4129_;
v___y_4097_ = v___y_4130_;
goto v___jp_4093_;
}
}
}
else
{
lean_dec(v___x_4133_);
lean_dec_ref(v_env_4132_);
v___y_4094_ = v_defn_4128_;
v_exportedInfo_x3f_4095_ = v___x_4040_;
v___y_4096_ = v___y_4129_;
v___y_4097_ = v___y_4130_;
goto v___jp_4093_;
}
}
}
}
}
else
{
lean_object* v___f_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; uint8_t v___x_4209_; lean_object* v___y_4211_; lean_object* v___y_4212_; lean_object* v_a_4213_; lean_object* v___y_4226_; lean_object* v___y_4227_; lean_object* v___y_4228_; lean_object* v___y_4246_; lean_object* v___y_4247_; lean_object* v___y_4248_; lean_object* v___y_4249_; lean_object* v___y_4253_; lean_object* v___y_4254_; lean_object* v___y_4255_; lean_object* v___y_4256_; lean_object* v___y_4257_; lean_object* v___y_4258_; lean_object* v___y_4259_; lean_object* v___y_4275_; lean_object* v___y_4276_; lean_object* v___y_4277_; lean_object* v___y_4278_; lean_object* v___y_4292_; lean_object* v___y_4293_; lean_object* v___y_4294_; lean_object* v___y_4295_; lean_object* v___y_4299_; lean_object* v___y_4300_; uint8_t v___y_4301_; lean_object* v___y_4302_; lean_object* v___y_4303_; lean_object* v___y_4304_; lean_object* v___y_4305_; lean_object* v___y_4306_; lean_object* v___y_4307_; lean_object* v___y_4312_; lean_object* v___y_4313_; lean_object* v_a_4314_; lean_object* v___y_4324_; lean_object* v___y_4325_; lean_object* v___y_4326_; lean_object* v___y_4344_; lean_object* v___y_4345_; lean_object* v___y_4346_; lean_object* v___y_4347_; lean_object* v___y_4351_; lean_object* v___y_4352_; lean_object* v___y_4353_; lean_object* v___y_4354_; 
lean_inc(v_decl_3786_);
v___f_4206_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__3___boxed), 5, 1);
lean_closure_set(v___f_4206_, 0, v_decl_3786_);
v___x_4207_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_warnIfUsesSorry_spec__2_spec__4_spec__9___closed__0));
v___x_4208_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0);
v___x_4209_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3845_, v_options_3844_, v___x_4208_);
if (v___x_4209_ == 0)
{
lean_object* v___x_4511_; uint8_t v___x_4512_; lean_object* v___y_4514_; lean_object* v___y_4515_; lean_object* v___y_4516_; lean_object* v___y_4517_; lean_object* v___y_4518_; lean_object* v___y_4519_; lean_object* v___y_4520_; lean_object* v___y_4521_; lean_object* v___y_4522_; lean_object* v___y_4523_; lean_object* v___y_4524_; lean_object* v___y_4525_; lean_object* v___y_4588_; lean_object* v___y_4589_; lean_object* v___y_4590_; lean_object* v___y_4591_; uint8_t v___y_4592_; lean_object* v___y_4593_; lean_object* v___y_4594_; lean_object* v___y_4595_; uint8_t v___y_4618_; lean_object* v___y_4619_; lean_object* v___y_4620_; lean_object* v_exportedInfo_x3f_4621_; lean_object* v___y_4622_; lean_object* v___y_4623_; uint8_t v___y_4633_; lean_object* v___y_4634_; lean_object* v___y_4635_; lean_object* v___y_4636_; lean_object* v___y_4637_; uint8_t v___y_4640_; lean_object* v___y_4641_; lean_object* v___y_4642_; lean_object* v___y_4643_; lean_object* v___y_4644_; 
v___x_4511_ = l_Lean_trace_profiler;
v___x_4512_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_options_3844_, v___x_4511_);
if (v___x_4512_ == 0)
{
lean_object* v___x_4646_; lean_object* v_env_4647_; lean_object* v_nextMacroScope_4648_; lean_object* v_ngen_4649_; lean_object* v_auxDeclNGen_4650_; lean_object* v_traceState_4651_; lean_object* v_messages_4652_; lean_object* v_infoState_4653_; lean_object* v_snapshotTasks_4654_; lean_object* v___x_4656_; uint8_t v_isShared_4657_; uint8_t v_isSharedCheck_4886_; 
lean_dec_ref(v___f_4206_);
v___x_4646_ = lean_st_ref_take(v_a_3789_);
v_env_4647_ = lean_ctor_get(v___x_4646_, 0);
v_nextMacroScope_4648_ = lean_ctor_get(v___x_4646_, 1);
v_ngen_4649_ = lean_ctor_get(v___x_4646_, 2);
v_auxDeclNGen_4650_ = lean_ctor_get(v___x_4646_, 3);
v_traceState_4651_ = lean_ctor_get(v___x_4646_, 4);
v_messages_4652_ = lean_ctor_get(v___x_4646_, 6);
v_infoState_4653_ = lean_ctor_get(v___x_4646_, 7);
v_snapshotTasks_4654_ = lean_ctor_get(v___x_4646_, 8);
v_isSharedCheck_4886_ = !lean_is_exclusive(v___x_4646_);
if (v_isSharedCheck_4886_ == 0)
{
lean_object* v_unused_4887_; 
v_unused_4887_ = lean_ctor_get(v___x_4646_, 5);
lean_dec(v_unused_4887_);
v___x_4656_ = v___x_4646_;
v_isShared_4657_ = v_isSharedCheck_4886_;
goto v_resetjp_4655_;
}
else
{
lean_inc(v_snapshotTasks_4654_);
lean_inc(v_infoState_4653_);
lean_inc(v_messages_4652_);
lean_inc(v_traceState_4651_);
lean_inc(v_auxDeclNGen_4650_);
lean_inc(v_ngen_4649_);
lean_inc(v_nextMacroScope_4648_);
lean_inc(v_env_4647_);
lean_dec(v___x_4646_);
v___x_4656_ = lean_box(0);
v_isShared_4657_ = v_isSharedCheck_4886_;
goto v_resetjp_4655_;
}
v_resetjp_4655_:
{
lean_object* v___x_4658_; lean_object* v___x_4659_; lean_object* v___x_4660_; uint8_t v___y_4662_; lean_object* v___y_4663_; lean_object* v___y_4664_; lean_object* v___y_4665_; lean_object* v___y_4666_; lean_object* v___y_4667_; lean_object* v___x_4690_; 
lean_inc(v_decl_3786_);
v___x_4658_ = l_Lean_Declaration_getNames(v_decl_3786_);
v___x_4659_ = l_List_foldl___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__1(v_env_4647_, v___x_4658_);
v___x_4660_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_4657_ == 0)
{
lean_ctor_set(v___x_4656_, 5, v___x_4660_);
lean_ctor_set(v___x_4656_, 0, v___x_4659_);
v___x_4690_ = v___x_4656_;
goto v_reusejp_4689_;
}
else
{
lean_object* v_reuseFailAlloc_4885_; 
v_reuseFailAlloc_4885_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4885_, 0, v___x_4659_);
lean_ctor_set(v_reuseFailAlloc_4885_, 1, v_nextMacroScope_4648_);
lean_ctor_set(v_reuseFailAlloc_4885_, 2, v_ngen_4649_);
lean_ctor_set(v_reuseFailAlloc_4885_, 3, v_auxDeclNGen_4650_);
lean_ctor_set(v_reuseFailAlloc_4885_, 4, v_traceState_4651_);
lean_ctor_set(v_reuseFailAlloc_4885_, 5, v___x_4660_);
lean_ctor_set(v_reuseFailAlloc_4885_, 6, v_messages_4652_);
lean_ctor_set(v_reuseFailAlloc_4885_, 7, v_infoState_4653_);
lean_ctor_set(v_reuseFailAlloc_4885_, 8, v_snapshotTasks_4654_);
v___x_4690_ = v_reuseFailAlloc_4885_;
goto v_reusejp_4689_;
}
v___jp_4661_:
{
lean_object* v___x_4668_; lean_object* v_env_4669_; lean_object* v_nextMacroScope_4670_; lean_object* v_ngen_4671_; lean_object* v_auxDeclNGen_4672_; lean_object* v_traceState_4673_; lean_object* v_messages_4674_; lean_object* v_infoState_4675_; lean_object* v_snapshotTasks_4676_; lean_object* v___x_4678_; uint8_t v_isShared_4679_; uint8_t v_isSharedCheck_4687_; 
v___x_4668_ = lean_st_ref_take(v___y_4664_);
v_env_4669_ = lean_ctor_get(v___x_4668_, 0);
v_nextMacroScope_4670_ = lean_ctor_get(v___x_4668_, 1);
v_ngen_4671_ = lean_ctor_get(v___x_4668_, 2);
v_auxDeclNGen_4672_ = lean_ctor_get(v___x_4668_, 3);
v_traceState_4673_ = lean_ctor_get(v___x_4668_, 4);
v_messages_4674_ = lean_ctor_get(v___x_4668_, 6);
v_infoState_4675_ = lean_ctor_get(v___x_4668_, 7);
v_snapshotTasks_4676_ = lean_ctor_get(v___x_4668_, 8);
v_isSharedCheck_4687_ = !lean_is_exclusive(v___x_4668_);
if (v_isSharedCheck_4687_ == 0)
{
lean_object* v_unused_4688_; 
v_unused_4688_ = lean_ctor_get(v___x_4668_, 5);
lean_dec(v_unused_4688_);
v___x_4678_ = v___x_4668_;
v_isShared_4679_ = v_isSharedCheck_4687_;
goto v_resetjp_4677_;
}
else
{
lean_inc(v_snapshotTasks_4676_);
lean_inc(v_infoState_4675_);
lean_inc(v_messages_4674_);
lean_inc(v_traceState_4673_);
lean_inc(v_auxDeclNGen_4672_);
lean_inc(v_ngen_4671_);
lean_inc(v_nextMacroScope_4670_);
lean_inc(v_env_4669_);
lean_dec(v___x_4668_);
v___x_4678_ = lean_box(0);
v_isShared_4679_ = v_isSharedCheck_4687_;
goto v_resetjp_4677_;
}
v_resetjp_4677_:
{
lean_object* v___x_4680_; lean_object* v___x_4681_; lean_object* v___x_4682_; lean_object* v___x_4684_; 
v___x_4680_ = l___private_Lean_OriginalConstKind_0__Lean_privateConstKindsExt;
v___x_4681_ = lean_box(v___y_4662_);
lean_inc(v___y_4663_);
v___x_4682_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_4680_, v_env_4669_, v___y_4663_, v___x_4681_);
if (v_isShared_4679_ == 0)
{
lean_ctor_set(v___x_4678_, 5, v___x_4660_);
lean_ctor_set(v___x_4678_, 0, v___x_4682_);
v___x_4684_ = v___x_4678_;
goto v_reusejp_4683_;
}
else
{
lean_object* v_reuseFailAlloc_4686_; 
v_reuseFailAlloc_4686_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4686_, 0, v___x_4682_);
lean_ctor_set(v_reuseFailAlloc_4686_, 1, v_nextMacroScope_4670_);
lean_ctor_set(v_reuseFailAlloc_4686_, 2, v_ngen_4671_);
lean_ctor_set(v_reuseFailAlloc_4686_, 3, v_auxDeclNGen_4672_);
lean_ctor_set(v_reuseFailAlloc_4686_, 4, v_traceState_4673_);
lean_ctor_set(v_reuseFailAlloc_4686_, 5, v___x_4660_);
lean_ctor_set(v_reuseFailAlloc_4686_, 6, v_messages_4674_);
lean_ctor_set(v_reuseFailAlloc_4686_, 7, v_infoState_4675_);
lean_ctor_set(v_reuseFailAlloc_4686_, 8, v_snapshotTasks_4676_);
v___x_4684_ = v_reuseFailAlloc_4686_;
goto v_reusejp_4683_;
}
v_reusejp_4683_:
{
lean_object* v___x_4685_; 
v___x_4685_ = lean_st_ref_put(v___y_4664_, v___x_4684_);
v___y_4618_ = v___y_4662_;
v___y_4619_ = v___y_4663_;
v___y_4620_ = v___y_4667_;
v_exportedInfo_x3f_4621_ = v___y_4666_;
v___y_4622_ = v___y_4665_;
v___y_4623_ = v___y_4664_;
goto v___jp_4617_;
}
}
}
v_reusejp_4689_:
{
lean_object* v___x_4691_; lean_object* v___x_4692_; uint8_t v___y_4694_; lean_object* v___y_4695_; lean_object* v___y_4696_; lean_object* v___y_4697_; lean_object* v___y_4698_; lean_object* v___y_4699_; lean_object* v_fst_4728_; lean_object* v_fst_4729_; uint8_t v_snd_4730_; lean_object* v_exportedInfo_x3f_4731_; lean_object* v___y_4732_; lean_object* v___y_4733_; lean_object* v___y_4743_; lean_object* v_exportedInfo_x3f_4744_; lean_object* v___y_4745_; lean_object* v___y_4746_; lean_object* v___y_4752_; lean_object* v___y_4753_; lean_object* v___y_4754_; lean_object* v___y_4755_; uint8_t v___y_4756_; uint8_t v___y_4761_; lean_object* v___y_4762_; lean_object* v_toConstantVal_4763_; uint8_t v_safety_4764_; lean_object* v___y_4765_; lean_object* v___y_4766_; uint8_t v___y_4770_; lean_object* v___y_4771_; lean_object* v___y_4772_; lean_object* v___y_4773_; lean_object* v___y_4777_; lean_object* v___y_4778_; lean_object* v___y_4779_; uint8_t v___y_4780_; lean_object* v___y_4796_; lean_object* v___y_4797_; lean_object* v___y_4798_; lean_object* v___y_4799_; lean_object* v___y_4800_; lean_object* v_defn_4805_; lean_object* v___y_4806_; lean_object* v___y_4807_; 
v___x_4691_ = lean_st_ref_put(v_a_3789_, v___x_4690_);
v___x_4692_ = lean_box(0);
switch(lean_obj_tag(v_decl_3786_))
{
case 2:
{
lean_object* v_val_4813_; lean_object* v_exportedInfo_x3f_4815_; lean_object* v___y_4816_; lean_object* v___y_4817_; lean_object* v___y_4823_; lean_object* v___y_4824_; lean_object* v___x_4829_; lean_object* v_env_4830_; 
v_val_4813_ = lean_ctor_get(v_decl_3786_, 0);
v___x_4829_ = lean_st_ref_get(v_a_3789_);
v_env_4830_ = lean_ctor_get(v___x_4829_, 0);
lean_inc_ref(v_env_4830_);
lean_dec(v___x_4829_);
if (v_forceExpose_3787_ == 0)
{
goto v___jp_4831_;
}
else
{
if (v___x_4512_ == 0)
{
lean_dec_ref(v_env_4830_);
v_exportedInfo_x3f_4815_ = v___x_4692_;
v___y_4816_ = v_a_3788_;
v___y_4817_ = v_a_3789_;
goto v___jp_4814_;
}
else
{
goto v___jp_4831_;
}
}
v___jp_4814_:
{
lean_object* v_toConstantVal_4818_; lean_object* v_name_4819_; lean_object* v___x_4820_; uint8_t v___x_4821_; 
v_toConstantVal_4818_ = lean_ctor_get(v_val_4813_, 0);
v_name_4819_ = lean_ctor_get(v_toConstantVal_4818_, 0);
lean_inc_ref(v_val_4813_);
v___x_4820_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4820_, 0, v_val_4813_);
v___x_4821_ = 1;
lean_inc(v_name_4819_);
v_fst_4728_ = v_name_4819_;
v_fst_4729_ = v___x_4820_;
v_snd_4730_ = v___x_4821_;
v_exportedInfo_x3f_4731_ = v_exportedInfo_x3f_4815_;
v___y_4732_ = v___y_4816_;
v___y_4733_ = v___y_4817_;
goto v___jp_4727_;
}
v___jp_4822_:
{
lean_object* v_toConstantVal_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; lean_object* v___x_4828_; 
v_toConstantVal_4825_ = lean_ctor_get(v_val_4813_, 0);
lean_inc_ref(v_toConstantVal_4825_);
v___x_4826_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4826_, 0, v_toConstantVal_4825_);
lean_ctor_set_uint8(v___x_4826_, sizeof(void*)*1, v___x_4512_);
v___x_4827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4827_, 0, v___x_4826_);
v___x_4828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4828_, 0, v___x_4827_);
v_exportedInfo_x3f_4815_ = v___x_4828_;
v___y_4816_ = v___y_4823_;
v___y_4817_ = v___y_4824_;
goto v___jp_4814_;
}
v___jp_4831_:
{
lean_object* v___x_4832_; uint8_t v_isModule_4833_; 
v___x_4832_ = l_Lean_Environment_header(v_env_4830_);
lean_dec_ref(v_env_4830_);
v_isModule_4833_ = lean_ctor_get_uint8(v___x_4832_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4832_);
if (v_isModule_4833_ == 0)
{
v_exportedInfo_x3f_4815_ = v___x_4692_;
v___y_4816_ = v_a_3788_;
v___y_4817_ = v_a_3789_;
goto v___jp_4814_;
}
else
{
if (v___x_4209_ == 0)
{
v___y_4823_ = v_a_3788_;
v___y_4824_ = v_a_3789_;
goto v___jp_4822_;
}
else
{
lean_object* v_toConstantVal_4834_; lean_object* v_name_4835_; lean_object* v___x_4836_; lean_object* v___x_4837_; lean_object* v___x_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; lean_object* v___x_4841_; 
v_toConstantVal_4834_ = lean_ctor_get(v_val_4813_, 0);
v_name_4835_ = lean_ctor_get(v_toConstantVal_4834_, 0);
v___x_4836_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2);
lean_inc(v_name_4835_);
v___x_4837_ = l_Lean_MessageData_ofName(v_name_4835_);
v___x_4838_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4838_, 0, v___x_4836_);
lean_ctor_set(v___x_4838_, 1, v___x_4837_);
v___x_4839_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_4840_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4840_, 0, v___x_4838_);
lean_ctor_set(v___x_4840_, 1, v___x_4839_);
v___x_4841_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3982_, v___x_4840_, v_a_3788_, v_a_3789_);
if (lean_obj_tag(v___x_4841_) == 0)
{
lean_dec_ref_known(v___x_4841_, 1);
v___y_4823_ = v_a_3788_;
v___y_4824_ = v_a_3789_;
goto v___jp_4822_;
}
else
{
lean_dec_ref_known(v_decl_3786_, 1);
return v___x_4841_;
}
}
}
}
}
case 1:
{
lean_object* v_val_4842_; 
v_val_4842_ = lean_ctor_get(v_decl_3786_, 0);
lean_inc_ref(v_val_4842_);
v_defn_4805_ = v_val_4842_;
v___y_4806_ = v_a_3788_;
v___y_4807_ = v_a_3789_;
goto v___jp_4804_;
}
case 5:
{
lean_object* v_defns_4843_; 
v_defns_4843_ = lean_ctor_get(v_decl_3786_, 0);
if (lean_obj_tag(v_defns_4843_) == 1)
{
lean_object* v_tail_4844_; 
v_tail_4844_ = lean_ctor_get(v_defns_4843_, 1);
if (lean_obj_tag(v_tail_4844_) == 0)
{
lean_object* v_head_4845_; 
v_head_4845_ = lean_ctor_get(v_defns_4843_, 0);
lean_inc(v_head_4845_);
v_defn_4805_ = v_head_4845_;
v___y_4806_ = v_a_3788_;
v___y_4807_ = v_a_3789_;
goto v___jp_4804_;
}
else
{
v___y_3984_ = v_a_3788_;
v_options_3985_ = v_options_3844_;
v_inheritedTraceOptions_3986_ = v_inheritedTraceOptions_3845_;
v___y_3987_ = v_a_3789_;
goto v___jp_3983_;
}
}
else
{
v___y_3984_ = v_a_3788_;
v_options_3985_ = v_options_3844_;
v_inheritedTraceOptions_3986_ = v_inheritedTraceOptions_3845_;
v___y_3987_ = v_a_3789_;
goto v___jp_3983_;
}
}
case 3:
{
lean_object* v_val_4846_; lean_object* v_exportedInfo_x3f_4848_; lean_object* v___y_4849_; lean_object* v___y_4850_; lean_object* v___y_4856_; lean_object* v___y_4857_; lean_object* v___x_4863_; lean_object* v_env_4864_; lean_object* v___x_4865_; lean_object* v_env_4875_; 
v_val_4846_ = lean_ctor_get(v_decl_3786_, 0);
v___x_4863_ = lean_st_ref_get(v_a_3789_);
v_env_4864_ = lean_ctor_get(v___x_4863_, 0);
lean_inc_ref(v_env_4864_);
lean_dec(v___x_4863_);
v___x_4865_ = lean_st_ref_get(v_a_3789_);
v_env_4875_ = lean_ctor_get(v___x_4865_, 0);
lean_inc_ref(v_env_4875_);
lean_dec(v___x_4865_);
if (v_forceExpose_3787_ == 0)
{
goto v___jp_4876_;
}
else
{
if (v___x_4512_ == 0)
{
lean_dec_ref(v_env_4875_);
lean_dec_ref(v_env_4864_);
v_exportedInfo_x3f_4848_ = v___x_4692_;
v___y_4849_ = v_a_3788_;
v___y_4850_ = v_a_3789_;
goto v___jp_4847_;
}
else
{
goto v___jp_4876_;
}
}
v___jp_4847_:
{
lean_object* v_toConstantVal_4851_; lean_object* v_name_4852_; lean_object* v___x_4853_; uint8_t v___x_4854_; 
v_toConstantVal_4851_ = lean_ctor_get(v_val_4846_, 0);
v_name_4852_ = lean_ctor_get(v_toConstantVal_4851_, 0);
lean_inc_ref(v_val_4846_);
v___x_4853_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4853_, 0, v_val_4846_);
v___x_4854_ = 3;
lean_inc(v_name_4852_);
v_fst_4728_ = v_name_4852_;
v_fst_4729_ = v___x_4853_;
v_snd_4730_ = v___x_4854_;
v_exportedInfo_x3f_4731_ = v_exportedInfo_x3f_4848_;
v___y_4732_ = v___y_4849_;
v___y_4733_ = v___y_4850_;
goto v___jp_4727_;
}
v___jp_4855_:
{
lean_object* v_toConstantVal_4858_; uint8_t v_isUnsafe_4859_; lean_object* v___x_4860_; lean_object* v___x_4861_; lean_object* v___x_4862_; 
v_toConstantVal_4858_ = lean_ctor_get(v_val_4846_, 0);
v_isUnsafe_4859_ = lean_ctor_get_uint8(v_val_4846_, sizeof(void*)*3);
lean_inc_ref(v_toConstantVal_4858_);
v___x_4860_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4860_, 0, v_toConstantVal_4858_);
lean_ctor_set_uint8(v___x_4860_, sizeof(void*)*1, v_isUnsafe_4859_);
v___x_4861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4861_, 0, v___x_4860_);
v___x_4862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4862_, 0, v___x_4861_);
v_exportedInfo_x3f_4848_ = v___x_4862_;
v___y_4849_ = v___y_4856_;
v___y_4850_ = v___y_4857_;
goto v___jp_4847_;
}
v___jp_4866_:
{
if (v___x_4209_ == 0)
{
v___y_4856_ = v_a_3788_;
v___y_4857_ = v_a_3789_;
goto v___jp_4855_;
}
else
{
lean_object* v_toConstantVal_4867_; lean_object* v_name_4868_; lean_object* v___x_4869_; lean_object* v___x_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; 
v_toConstantVal_4867_ = lean_ctor_get(v_val_4846_, 0);
v_name_4868_ = lean_ctor_get(v_toConstantVal_4867_, 0);
v___x_4869_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4);
lean_inc(v_name_4868_);
v___x_4870_ = l_Lean_MessageData_ofName(v_name_4868_);
v___x_4871_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4871_, 0, v___x_4869_);
lean_ctor_set(v___x_4871_, 1, v___x_4870_);
v___x_4872_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_4873_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4873_, 0, v___x_4871_);
lean_ctor_set(v___x_4873_, 1, v___x_4872_);
v___x_4874_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3982_, v___x_4873_, v_a_3788_, v_a_3789_);
if (lean_obj_tag(v___x_4874_) == 0)
{
lean_dec_ref_known(v___x_4874_, 1);
v___y_4856_ = v_a_3788_;
v___y_4857_ = v_a_3789_;
goto v___jp_4855_;
}
else
{
lean_dec_ref_known(v_decl_3786_, 1);
return v___x_4874_;
}
}
}
v___jp_4876_:
{
lean_object* v___x_4877_; uint8_t v_isModule_4878_; 
v___x_4877_ = l_Lean_Environment_header(v_env_4864_);
lean_dec_ref(v_env_4864_);
v_isModule_4878_ = lean_ctor_get_uint8(v___x_4877_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4877_);
if (v_isModule_4878_ == 0)
{
lean_dec_ref(v_env_4875_);
v_exportedInfo_x3f_4848_ = v___x_4692_;
v___y_4849_ = v_a_3788_;
v___y_4850_ = v_a_3789_;
goto v___jp_4847_;
}
else
{
uint8_t v_isExporting_4879_; 
v_isExporting_4879_ = lean_ctor_get_uint8(v_env_4875_, sizeof(void*)*8);
lean_dec_ref(v_env_4875_);
if (v_isExporting_4879_ == 0)
{
goto v___jp_4866_;
}
else
{
if (v___x_4512_ == 0)
{
v_exportedInfo_x3f_4848_ = v___x_4692_;
v___y_4849_ = v_a_3788_;
v___y_4850_ = v_a_3789_;
goto v___jp_4847_;
}
else
{
goto v___jp_4866_;
}
}
}
}
}
case 0:
{
lean_object* v_val_4880_; lean_object* v_toConstantVal_4881_; lean_object* v_name_4882_; lean_object* v___x_4883_; uint8_t v___x_4884_; 
v_val_4880_ = lean_ctor_get(v_decl_3786_, 0);
v_toConstantVal_4881_ = lean_ctor_get(v_val_4880_, 0);
v_name_4882_ = lean_ctor_get(v_toConstantVal_4881_, 0);
lean_inc_ref(v_val_4880_);
v___x_4883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4883_, 0, v_val_4880_);
v___x_4884_ = 2;
lean_inc(v_name_4882_);
v_fst_4728_ = v_name_4882_;
v_fst_4729_ = v___x_4883_;
v_snd_4730_ = v___x_4884_;
v_exportedInfo_x3f_4731_ = v___x_4692_;
v___y_4732_ = v_a_3788_;
v___y_4733_ = v_a_3789_;
goto v___jp_4727_;
}
default: 
{
v___y_3984_ = v_a_3788_;
v_options_3985_ = v_options_3844_;
v_inheritedTraceOptions_3986_ = v_inheritedTraceOptions_3845_;
v___y_3987_ = v_a_3789_;
goto v___jp_3983_;
}
}
v___jp_4693_:
{
lean_object* v___x_4700_; uint8_t v___x_4701_; 
lean_inc(v_decl_3786_);
v___x_4700_ = l_Lean_Declaration_getTopLevelNames(v_decl_3786_);
v___x_4701_ = l_List_all___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__2(v___x_4700_);
lean_dec(v___x_4700_);
if (v___x_4701_ == 0)
{
if (lean_obj_tag(v___y_4696_) == 0)
{
if (v___x_4701_ == 0)
{
lean_object* v_toCold_4702_; lean_object* v_options_4703_; uint8_t v_hasTrace_4704_; 
v_toCold_4702_ = lean_ctor_get(v___y_4698_, 0);
v_options_4703_ = lean_ctor_get(v_toCold_4702_, 2);
v_hasTrace_4704_ = lean_ctor_get_uint8(v_options_4703_, sizeof(void*)*1);
if (v_hasTrace_4704_ == 0)
{
v___y_4640_ = v___y_4694_;
v___y_4641_ = v___y_4695_;
v___y_4642_ = v___y_4697_;
v___y_4643_ = v___y_4698_;
v___y_4644_ = v___y_4699_;
goto v___jp_4639_;
}
else
{
lean_object* v_inheritedTraceOptions_4705_; uint8_t v___x_4706_; 
v_inheritedTraceOptions_4705_ = lean_ctor_get(v_toCold_4702_, 11);
v___x_4706_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4705_, v_options_4703_, v___x_4208_);
if (v___x_4706_ == 0)
{
v___y_4640_ = v___y_4694_;
v___y_4641_ = v___y_4695_;
v___y_4642_ = v___y_4697_;
v___y_4643_ = v___y_4698_;
v___y_4644_ = v___y_4699_;
goto v___jp_4639_;
}
else
{
lean_object* v___x_4707_; lean_object* v___x_4708_; 
v___x_4707_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__3);
v___x_4708_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3982_, v___x_4707_, v___y_4698_, v___y_4699_);
if (lean_obj_tag(v___x_4708_) == 0)
{
lean_dec_ref_known(v___x_4708_, 1);
v___y_4640_ = v___y_4694_;
v___y_4641_ = v___y_4695_;
v___y_4642_ = v___y_4697_;
v___y_4643_ = v___y_4698_;
v___y_4644_ = v___y_4699_;
goto v___jp_4639_;
}
else
{
lean_dec_ref(v___y_4697_);
lean_dec(v___y_4695_);
lean_dec(v_decl_3786_);
return v___x_4708_;
}
}
}
}
else
{
v___y_4662_ = v___y_4694_;
v___y_4663_ = v___y_4695_;
v___y_4664_ = v___y_4699_;
v___y_4665_ = v___y_4698_;
v___y_4666_ = v___y_4696_;
v___y_4667_ = v___y_4697_;
goto v___jp_4661_;
}
}
else
{
v___y_4662_ = v___y_4694_;
v___y_4663_ = v___y_4695_;
v___y_4664_ = v___y_4699_;
v___y_4665_ = v___y_4698_;
v___y_4666_ = v___y_4696_;
v___y_4667_ = v___y_4697_;
goto v___jp_4661_;
}
}
else
{
lean_object* v___x_4709_; lean_object* v___x_4710_; lean_object* v_a_4711_; uint8_t v___x_4712_; 
lean_dec(v___y_4696_);
v___x_4709_ = l_Lean_ResolveName_backward_privateInPublic;
v___x_4710_ = l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___redArg(v___x_4709_, v___y_4698_);
v_a_4711_ = lean_ctor_get(v___x_4710_, 0);
lean_inc(v_a_4711_);
lean_dec_ref(v___x_4710_);
v___x_4712_ = lean_unbox(v_a_4711_);
lean_dec(v_a_4711_);
if (v___x_4712_ == 0)
{
lean_object* v_toCold_4713_; lean_object* v_options_4714_; uint8_t v_hasTrace_4715_; 
v_toCold_4713_ = lean_ctor_get(v___y_4698_, 0);
v_options_4714_ = lean_ctor_get(v_toCold_4713_, 2);
v_hasTrace_4715_ = lean_ctor_get_uint8(v_options_4714_, sizeof(void*)*1);
if (v_hasTrace_4715_ == 0)
{
v___y_4618_ = v___y_4694_;
v___y_4619_ = v___y_4695_;
v___y_4620_ = v___y_4697_;
v_exportedInfo_x3f_4621_ = v___x_4692_;
v___y_4622_ = v___y_4698_;
v___y_4623_ = v___y_4699_;
goto v___jp_4617_;
}
else
{
lean_object* v_inheritedTraceOptions_4716_; uint8_t v___x_4717_; 
v_inheritedTraceOptions_4716_ = lean_ctor_get(v_toCold_4713_, 11);
v___x_4717_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4716_, v_options_4714_, v___x_4208_);
if (v___x_4717_ == 0)
{
v___y_4618_ = v___y_4694_;
v___y_4619_ = v___y_4695_;
v___y_4620_ = v___y_4697_;
v_exportedInfo_x3f_4621_ = v___x_4692_;
v___y_4622_ = v___y_4698_;
v___y_4623_ = v___y_4699_;
goto v___jp_4617_;
}
else
{
lean_object* v___x_4718_; lean_object* v___x_4719_; 
v___x_4718_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__5);
v___x_4719_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3982_, v___x_4718_, v___y_4698_, v___y_4699_);
if (lean_obj_tag(v___x_4719_) == 0)
{
lean_dec_ref_known(v___x_4719_, 1);
v___y_4618_ = v___y_4694_;
v___y_4619_ = v___y_4695_;
v___y_4620_ = v___y_4697_;
v_exportedInfo_x3f_4621_ = v___x_4692_;
v___y_4622_ = v___y_4698_;
v___y_4623_ = v___y_4699_;
goto v___jp_4617_;
}
else
{
lean_dec_ref(v___y_4697_);
lean_dec(v___y_4695_);
lean_dec(v_decl_3786_);
return v___x_4719_;
}
}
}
}
else
{
lean_object* v_toCold_4720_; lean_object* v_options_4721_; uint8_t v_hasTrace_4722_; 
v_toCold_4720_ = lean_ctor_get(v___y_4698_, 0);
v_options_4721_ = lean_ctor_get(v_toCold_4720_, 2);
v_hasTrace_4722_ = lean_ctor_get_uint8(v_options_4721_, sizeof(void*)*1);
if (v_hasTrace_4722_ == 0)
{
v___y_4633_ = v___y_4694_;
v___y_4634_ = v___y_4695_;
v___y_4635_ = v___y_4697_;
v___y_4636_ = v___y_4698_;
v___y_4637_ = v___y_4699_;
goto v___jp_4632_;
}
else
{
lean_object* v_inheritedTraceOptions_4723_; uint8_t v___x_4724_; 
v_inheritedTraceOptions_4723_ = lean_ctor_get(v_toCold_4720_, 11);
v___x_4724_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4723_, v_options_4721_, v___x_4208_);
if (v___x_4724_ == 0)
{
v___y_4633_ = v___y_4694_;
v___y_4634_ = v___y_4695_;
v___y_4635_ = v___y_4697_;
v___y_4636_ = v___y_4698_;
v___y_4637_ = v___y_4699_;
goto v___jp_4632_;
}
else
{
lean_object* v___x_4725_; lean_object* v___x_4726_; 
v___x_4725_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__7);
v___x_4726_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3982_, v___x_4725_, v___y_4698_, v___y_4699_);
if (lean_obj_tag(v___x_4726_) == 0)
{
lean_dec_ref_known(v___x_4726_, 1);
v___y_4633_ = v___y_4694_;
v___y_4634_ = v___y_4695_;
v___y_4635_ = v___y_4697_;
v___y_4636_ = v___y_4698_;
v___y_4637_ = v___y_4699_;
goto v___jp_4632_;
}
else
{
lean_dec_ref(v___y_4697_);
lean_dec(v___y_4695_);
lean_dec(v_decl_3786_);
return v___x_4726_;
}
}
}
}
}
}
v___jp_4727_:
{
lean_object* v___x_4734_; lean_object* v_env_4735_; uint8_t v___x_4736_; 
v___x_4734_ = lean_st_ref_get(v___y_4733_);
v_env_4735_ = lean_ctor_get(v___x_4734_, 0);
lean_inc_ref(v_env_4735_);
lean_dec(v___x_4734_);
v___x_4736_ = l_Lean_Environment_containsOnBranch(v_env_4735_, v_fst_4728_);
lean_dec_ref(v_env_4735_);
if (v___x_4736_ == 0)
{
v___y_4694_ = v_snd_4730_;
v___y_4695_ = v_fst_4728_;
v___y_4696_ = v_exportedInfo_x3f_4731_;
v___y_4697_ = v_fst_4729_;
v___y_4698_ = v___y_4732_;
v___y_4699_ = v___y_4733_;
goto v___jp_4693_;
}
else
{
lean_object* v___x_4737_; lean_object* v_env_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; 
lean_dec(v_exportedInfo_x3f_4731_);
lean_dec_ref(v_fst_4729_);
lean_dec(v_decl_3786_);
v___x_4737_ = lean_st_ref_get(v___y_4733_);
v_env_4738_ = lean_ctor_get(v___x_4737_, 0);
lean_inc_ref(v_env_4738_);
lean_dec(v___x_4737_);
v___x_4739_ = lean_elab_environment_to_kernel_env(v_env_4738_);
v___x_4740_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4740_, 0, v___x_4739_);
lean_ctor_set(v___x_4740_, 1, v_fst_4728_);
v___x_4741_ = l_Lean_throwKernelException___at___00Lean_ofExceptKernelException___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__0_spec__0___redArg(v___x_4740_, v___y_4732_, v___y_4733_);
return v___x_4741_;
}
}
v___jp_4742_:
{
lean_object* v_toConstantVal_4747_; lean_object* v_name_4748_; lean_object* v___x_4749_; uint8_t v___x_4750_; 
v_toConstantVal_4747_ = lean_ctor_get(v___y_4743_, 0);
v_name_4748_ = lean_ctor_get(v_toConstantVal_4747_, 0);
lean_inc(v_name_4748_);
v___x_4749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4749_, 0, v___y_4743_);
v___x_4750_ = 0;
v_fst_4728_ = v_name_4748_;
v_fst_4729_ = v___x_4749_;
v_snd_4730_ = v___x_4750_;
v_exportedInfo_x3f_4731_ = v_exportedInfo_x3f_4744_;
v___y_4732_ = v___y_4745_;
v___y_4733_ = v___y_4746_;
goto v___jp_4727_;
}
v___jp_4751_:
{
lean_object* v___x_4757_; lean_object* v___x_4758_; lean_object* v___x_4759_; 
v___x_4757_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4757_, 0, v___y_4753_);
lean_ctor_set_uint8(v___x_4757_, sizeof(void*)*1, v___y_4756_);
v___x_4758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4758_, 0, v___x_4757_);
v___x_4759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4759_, 0, v___x_4758_);
v___y_4743_ = v___y_4755_;
v_exportedInfo_x3f_4744_ = v___x_4759_;
v___y_4745_ = v___y_4754_;
v___y_4746_ = v___y_4752_;
goto v___jp_4742_;
}
v___jp_4760_:
{
uint8_t v___x_4767_; uint8_t v___x_4768_; 
v___x_4767_ = 1;
v___x_4768_ = l_Lean_instBEqDefinitionSafety_beq(v_safety_4764_, v___x_4767_);
if (v___x_4768_ == 0)
{
v___y_4752_ = v___y_4766_;
v___y_4753_ = v_toConstantVal_4763_;
v___y_4754_ = v___y_4765_;
v___y_4755_ = v___y_4762_;
v___y_4756_ = v___y_4761_;
goto v___jp_4751_;
}
else
{
v___y_4752_ = v___y_4766_;
v___y_4753_ = v_toConstantVal_4763_;
v___y_4754_ = v___y_4765_;
v___y_4755_ = v___y_4762_;
v___y_4756_ = v___x_4512_;
goto v___jp_4751_;
}
}
v___jp_4769_:
{
lean_object* v_toConstantVal_4774_; uint8_t v_safety_4775_; 
v_toConstantVal_4774_ = lean_ctor_get(v___y_4771_, 0);
lean_inc_ref(v_toConstantVal_4774_);
v_safety_4775_ = lean_ctor_get_uint8(v___y_4771_, sizeof(void*)*4);
v___y_4761_ = v___y_4770_;
v___y_4762_ = v___y_4771_;
v_toConstantVal_4763_ = v_toConstantVal_4774_;
v_safety_4764_ = v_safety_4775_;
v___y_4765_ = v___y_4772_;
v___y_4766_ = v___y_4773_;
goto v___jp_4760_;
}
v___jp_4776_:
{
lean_object* v_toCold_4781_; lean_object* v_options_4782_; uint8_t v_hasTrace_4783_; 
v_toCold_4781_ = lean_ctor_get(v___y_4777_, 0);
v_options_4782_ = lean_ctor_get(v_toCold_4781_, 2);
v_hasTrace_4783_ = lean_ctor_get_uint8(v_options_4782_, sizeof(void*)*1);
if (v_hasTrace_4783_ == 0)
{
v___y_4770_ = v___y_4780_;
v___y_4771_ = v___y_4778_;
v___y_4772_ = v___y_4777_;
v___y_4773_ = v___y_4779_;
goto v___jp_4769_;
}
else
{
lean_object* v_inheritedTraceOptions_4784_; uint8_t v___x_4785_; 
v_inheritedTraceOptions_4784_ = lean_ctor_get(v_toCold_4781_, 11);
v___x_4785_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4784_, v_options_4782_, v___x_4208_);
if (v___x_4785_ == 0)
{
v___y_4770_ = v___y_4780_;
v___y_4771_ = v___y_4778_;
v___y_4772_ = v___y_4777_;
v___y_4773_ = v___y_4779_;
goto v___jp_4769_;
}
else
{
lean_object* v_toConstantVal_4786_; uint8_t v_safety_4787_; lean_object* v_name_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; lean_object* v___x_4794_; 
v_toConstantVal_4786_ = lean_ctor_get(v___y_4778_, 0);
lean_inc_ref(v_toConstantVal_4786_);
v_safety_4787_ = lean_ctor_get_uint8(v___y_4778_, sizeof(void*)*4);
v_name_4788_ = lean_ctor_get(v_toConstantVal_4786_, 0);
v___x_4789_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__1);
lean_inc(v_name_4788_);
v___x_4790_ = l_Lean_MessageData_ofName(v_name_4788_);
v___x_4791_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4791_, 0, v___x_4789_);
lean_ctor_set(v___x_4791_, 1, v___x_4790_);
v___x_4792_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_4793_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4793_, 0, v___x_4791_);
lean_ctor_set(v___x_4793_, 1, v___x_4792_);
v___x_4794_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3982_, v___x_4793_, v___y_4777_, v___y_4779_);
if (lean_obj_tag(v___x_4794_) == 0)
{
lean_dec_ref_known(v___x_4794_, 1);
v___y_4761_ = v___y_4780_;
v___y_4762_ = v___y_4778_;
v_toConstantVal_4763_ = v_toConstantVal_4786_;
v_safety_4764_ = v_safety_4787_;
v___y_4765_ = v___y_4777_;
v___y_4766_ = v___y_4779_;
goto v___jp_4760_;
}
else
{
lean_dec_ref(v_toConstantVal_4786_);
lean_dec_ref(v___y_4778_);
lean_dec(v_decl_3786_);
return v___x_4794_;
}
}
}
}
v___jp_4795_:
{
lean_object* v___x_4801_; uint8_t v_isModule_4802_; 
v___x_4801_ = l_Lean_Environment_header(v___y_4798_);
lean_dec_ref(v___y_4798_);
v_isModule_4802_ = lean_ctor_get_uint8(v___x_4801_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4801_);
if (v_isModule_4802_ == 0)
{
lean_dec_ref(v___y_4797_);
v___y_4743_ = v___y_4799_;
v_exportedInfo_x3f_4744_ = v___x_4692_;
v___y_4745_ = v___y_4796_;
v___y_4746_ = v___y_4800_;
goto v___jp_4742_;
}
else
{
uint8_t v_isExporting_4803_; 
v_isExporting_4803_ = lean_ctor_get_uint8(v___y_4797_, sizeof(void*)*8);
lean_dec_ref(v___y_4797_);
if (v_isExporting_4803_ == 0)
{
v___y_4777_ = v___y_4796_;
v___y_4778_ = v___y_4799_;
v___y_4779_ = v___y_4800_;
v___y_4780_ = v_isModule_4802_;
goto v___jp_4776_;
}
else
{
if (v___x_4512_ == 0)
{
v___y_4743_ = v___y_4799_;
v_exportedInfo_x3f_4744_ = v___x_4692_;
v___y_4745_ = v___y_4796_;
v___y_4746_ = v___y_4800_;
goto v___jp_4742_;
}
else
{
v___y_4777_ = v___y_4796_;
v___y_4778_ = v___y_4799_;
v___y_4779_ = v___y_4800_;
v___y_4780_ = v___x_4512_;
goto v___jp_4776_;
}
}
}
}
v___jp_4804_:
{
lean_object* v___x_4808_; lean_object* v_env_4809_; lean_object* v___x_4810_; 
v___x_4808_ = lean_st_ref_get(v___y_4807_);
v_env_4809_ = lean_ctor_get(v___x_4808_, 0);
lean_inc_ref(v_env_4809_);
lean_dec(v___x_4808_);
v___x_4810_ = lean_st_ref_get(v___y_4807_);
if (v_forceExpose_3787_ == 0)
{
lean_object* v_env_4811_; 
v_env_4811_ = lean_ctor_get(v___x_4810_, 0);
lean_inc_ref(v_env_4811_);
lean_dec(v___x_4810_);
v___y_4796_ = v___y_4806_;
v___y_4797_ = v_env_4811_;
v___y_4798_ = v_env_4809_;
v___y_4799_ = v_defn_4805_;
v___y_4800_ = v___y_4807_;
goto v___jp_4795_;
}
else
{
if (v___x_4512_ == 0)
{
lean_dec(v___x_4810_);
lean_dec_ref(v_env_4809_);
v___y_4743_ = v_defn_4805_;
v_exportedInfo_x3f_4744_ = v___x_4692_;
v___y_4745_ = v___y_4806_;
v___y_4746_ = v___y_4807_;
goto v___jp_4742_;
}
else
{
lean_object* v_env_4812_; 
v_env_4812_ = lean_ctor_get(v___x_4810_, 0);
lean_inc_ref(v_env_4812_);
lean_dec(v___x_4810_);
v___y_4796_ = v___y_4806_;
v___y_4797_ = v_env_4812_;
v___y_4798_ = v_env_4809_;
v___y_4799_ = v_defn_4805_;
v___y_4800_ = v___y_4807_;
goto v___jp_4795_;
}
}
}
}
}
}
else
{
goto v___jp_4357_;
}
v___jp_4513_:
{
lean_object* v___x_4526_; 
lean_inc_ref(v___y_4517_);
v___x_4526_ = l_Lean_Environment_AddConstAsyncResult_commitConst(v___y_4521_, v___y_4517_, v___y_4516_, v___y_4525_);
if (lean_obj_tag(v___x_4526_) == 0)
{
lean_object* v___x_4527_; lean_object* v___x_4529_; uint8_t v_isShared_4530_; uint8_t v_isSharedCheck_4573_; 
lean_dec_ref_known(v___x_4526_, 1);
lean_dec(v___y_4522_);
lean_inc_ref(v___y_4514_);
v___x_4527_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_4514_, v___y_4519_);
v_isSharedCheck_4573_ = !lean_is_exclusive(v___x_4527_);
if (v_isSharedCheck_4573_ == 0)
{
lean_object* v_unused_4574_; 
v_unused_4574_ = lean_ctor_get(v___x_4527_, 0);
lean_dec(v_unused_4574_);
v___x_4529_ = v___x_4527_;
v_isShared_4530_ = v_isSharedCheck_4573_;
goto v_resetjp_4528_;
}
else
{
lean_dec(v___x_4527_);
v___x_4529_ = lean_box(0);
v_isShared_4530_ = v_isSharedCheck_4573_;
goto v_resetjp_4528_;
}
v_resetjp_4528_:
{
lean_object* v_options_4531_; lean_object* v___x_4532_; uint8_t v___x_4533_; 
v_options_4531_ = lean_ctor_get(v___y_4524_, 2);
v___x_4532_ = l_Lean_Elab_async;
v___x_4533_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_options_4531_, v___x_4532_);
if (v___x_4533_ == 0)
{
lean_object* v___x_4534_; lean_object* v_r_4535_; 
lean_del_object(v___x_4529_);
lean_dec_ref(v___y_4523_);
lean_dec_ref(v___y_4518_);
v___x_4534_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_4517_, v___y_4519_);
lean_dec_ref(v___x_4534_);
v_r_4535_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_3786_, v___y_4520_, v___y_4519_);
if (lean_obj_tag(v_r_4535_) == 0)
{
lean_object* v_a_4536_; lean_object* v___x_4538_; uint8_t v_isShared_4539_; uint8_t v_isSharedCheck_4545_; 
v_a_4536_ = lean_ctor_get(v_r_4535_, 0);
v_isSharedCheck_4545_ = !lean_is_exclusive(v_r_4535_);
if (v_isSharedCheck_4545_ == 0)
{
v___x_4538_ = v_r_4535_;
v_isShared_4539_ = v_isSharedCheck_4545_;
goto v_resetjp_4537_;
}
else
{
lean_inc(v_a_4536_);
lean_dec(v_r_4535_);
v___x_4538_ = lean_box(0);
v_isShared_4539_ = v_isSharedCheck_4545_;
goto v_resetjp_4537_;
}
v_resetjp_4537_:
{
lean_object* v___x_4541_; 
lean_inc(v_a_4536_);
if (v_isShared_4539_ == 0)
{
lean_ctor_set_tag(v___x_4538_, 1);
v___x_4541_ = v___x_4538_;
goto v_reusejp_4540_;
}
else
{
lean_object* v_reuseFailAlloc_4544_; 
v_reuseFailAlloc_4544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4544_, 0, v_a_4536_);
v___x_4541_ = v_reuseFailAlloc_4544_;
goto v_reusejp_4540_;
}
v_reusejp_4540_:
{
lean_object* v___x_4542_; 
v___x_4542_ = lean_apply_2(v___y_4515_, v___x_4541_, lean_box(0));
if (lean_obj_tag(v___x_4542_) == 0)
{
lean_dec_ref_known(v___x_4542_, 1);
v___y_3792_ = v___y_4514_;
v___y_3793_ = v___y_4519_;
v_a_3794_ = v_a_4536_;
goto v___jp_3791_;
}
else
{
lean_object* v_a_4543_; 
lean_dec(v_a_4536_);
v_a_4543_ = lean_ctor_get(v___x_4542_, 0);
lean_inc(v_a_4543_);
lean_dec_ref_known(v___x_4542_, 1);
v___y_3805_ = v___y_4514_;
v___y_3806_ = v___y_4519_;
v_a_3807_ = v_a_4543_;
goto v___jp_3804_;
}
}
}
}
else
{
lean_object* v_a_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; 
v_a_4546_ = lean_ctor_get(v_r_4535_, 0);
lean_inc(v_a_4546_);
lean_dec_ref_known(v_r_4535_, 1);
v___x_4547_ = lean_box(0);
v___x_4548_ = lean_apply_2(v___y_4515_, v___x_4547_, lean_box(0));
if (lean_obj_tag(v___x_4548_) == 0)
{
lean_dec_ref_known(v___x_4548_, 1);
v___y_3805_ = v___y_4514_;
v___y_3806_ = v___y_4519_;
v_a_3807_ = v_a_4546_;
goto v___jp_3804_;
}
else
{
lean_object* v_a_4549_; 
lean_dec(v_a_4546_);
v_a_4549_ = lean_ctor_get(v___x_4548_, 0);
lean_inc(v_a_4549_);
lean_dec_ref_known(v___x_4548_, 1);
v___y_3805_ = v___y_4514_;
v___y_3806_ = v___y_4519_;
v_a_3807_ = v_a_4549_;
goto v___jp_3804_;
}
}
}
else
{
lean_object* v___x_4550_; lean_object* v___x_4552_; 
lean_dec_ref(v___y_4517_);
lean_dec_ref(v___y_4515_);
lean_dec_ref(v___y_4514_);
lean_dec(v_decl_3786_);
v___x_4550_ = l_IO_CancelToken_new();
if (v_isShared_4530_ == 0)
{
lean_ctor_set_tag(v___x_4529_, 1);
lean_ctor_set(v___x_4529_, 0, v___x_4550_);
v___x_4552_ = v___x_4529_;
goto v_reusejp_4551_;
}
else
{
lean_object* v_reuseFailAlloc_4572_; 
v_reuseFailAlloc_4572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4572_, 0, v___x_4550_);
v___x_4552_ = v_reuseFailAlloc_4572_;
goto v_reusejp_4551_;
}
v_reusejp_4551_:
{
lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; 
v___x_4553_ = lean_unsigned_to_nat(0u);
v___x_4554_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1);
v___x_4555_ = l_Lean_Name_toString(v___x_4554_, v_hasTrace_3846_);
lean_inc_ref(v___x_4552_);
v___x_4556_ = l_Lean_Core_wrapAsyncAsSnapshot___redArg(v___y_4518_, v___x_4552_, v___x_4555_, v___y_4520_, v___y_4519_);
if (lean_obj_tag(v___x_4556_) == 0)
{
lean_object* v_a_4557_; lean_object* v_checked_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; 
v_a_4557_ = lean_ctor_get(v___x_4556_, 0);
lean_inc(v_a_4557_);
lean_dec_ref_known(v___x_4556_, 1);
v_checked_4558_ = lean_ctor_get(v___y_4523_, 2);
lean_inc_ref(v_checked_4558_);
lean_dec_ref(v___y_4523_);
v___x_4559_ = lean_io_map_task(v_a_4557_, v_checked_4558_, v___x_4553_, v___x_4512_);
v___x_4560_ = lean_box(0);
v___x_4561_ = lean_box(2);
v___x_4562_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4562_, 0, v___x_4560_);
lean_ctor_set(v___x_4562_, 1, v___x_4561_);
lean_ctor_set(v___x_4562_, 2, v___x_4552_);
lean_ctor_set(v___x_4562_, 3, v___x_4559_);
v___x_4563_ = l_Lean_Core_logSnapshotTask___redArg(v___x_4562_, v___y_4519_);
return v___x_4563_;
}
else
{
lean_object* v_a_4564_; lean_object* v___x_4566_; uint8_t v_isShared_4567_; uint8_t v_isSharedCheck_4571_; 
lean_dec_ref(v___x_4552_);
lean_dec_ref(v___y_4523_);
v_a_4564_ = lean_ctor_get(v___x_4556_, 0);
v_isSharedCheck_4571_ = !lean_is_exclusive(v___x_4556_);
if (v_isSharedCheck_4571_ == 0)
{
v___x_4566_ = v___x_4556_;
v_isShared_4567_ = v_isSharedCheck_4571_;
goto v_resetjp_4565_;
}
else
{
lean_inc(v_a_4564_);
lean_dec(v___x_4556_);
v___x_4566_ = lean_box(0);
v_isShared_4567_ = v_isSharedCheck_4571_;
goto v_resetjp_4565_;
}
v_resetjp_4565_:
{
lean_object* v___x_4569_; 
if (v_isShared_4567_ == 0)
{
v___x_4569_ = v___x_4566_;
goto v_reusejp_4568_;
}
else
{
lean_object* v_reuseFailAlloc_4570_; 
v_reuseFailAlloc_4570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4570_, 0, v_a_4564_);
v___x_4569_ = v_reuseFailAlloc_4570_;
goto v_reusejp_4568_;
}
v_reusejp_4568_:
{
return v___x_4569_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4575_; lean_object* v___x_4577_; uint8_t v_isShared_4578_; uint8_t v_isSharedCheck_4586_; 
lean_dec_ref(v___y_4523_);
lean_dec_ref(v___y_4518_);
lean_dec_ref(v___y_4517_);
lean_dec_ref(v___y_4515_);
lean_dec_ref(v___y_4514_);
lean_dec(v_decl_3786_);
v_a_4575_ = lean_ctor_get(v___x_4526_, 0);
v_isSharedCheck_4586_ = !lean_is_exclusive(v___x_4526_);
if (v_isSharedCheck_4586_ == 0)
{
v___x_4577_ = v___x_4526_;
v_isShared_4578_ = v_isSharedCheck_4586_;
goto v_resetjp_4576_;
}
else
{
lean_inc(v_a_4575_);
lean_dec(v___x_4526_);
v___x_4577_ = lean_box(0);
v_isShared_4578_ = v_isSharedCheck_4586_;
goto v_resetjp_4576_;
}
v_resetjp_4576_:
{
lean_object* v___x_4579_; lean_object* v___x_4580_; lean_object* v___x_4581_; lean_object* v___x_4582_; lean_object* v___x_4584_; 
v___x_4579_ = lean_io_error_to_string(v_a_4575_);
v___x_4580_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4580_, 0, v___x_4579_);
v___x_4581_ = l_Lean_MessageData_ofFormat(v___x_4580_);
v___x_4582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4582_, 0, v___y_4522_);
lean_ctor_set(v___x_4582_, 1, v___x_4581_);
if (v_isShared_4578_ == 0)
{
lean_ctor_set(v___x_4577_, 0, v___x_4582_);
v___x_4584_ = v___x_4577_;
goto v_reusejp_4583_;
}
else
{
lean_object* v_reuseFailAlloc_4585_; 
v_reuseFailAlloc_4585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4585_, 0, v___x_4582_);
v___x_4584_ = v_reuseFailAlloc_4585_;
goto v_reusejp_4583_;
}
v_reusejp_4583_:
{
return v___x_4584_;
}
}
}
}
v___jp_4587_:
{
lean_object* v_toCold_4596_; lean_object* v_ref_4597_; lean_object* v___x_4598_; 
v_toCold_4596_ = lean_ctor_get(v___y_4593_, 0);
v_ref_4597_ = lean_ctor_get(v___y_4593_, 2);
lean_inc_ref(v___y_4594_);
v___x_4598_ = l_Lean_Environment_addConstAsync(v___y_4594_, v___y_4589_, v___y_4592_, v___y_4595_, v___x_4512_, v_hasTrace_3846_);
if (lean_obj_tag(v___x_4598_) == 0)
{
lean_object* v_a_4599_; lean_object* v_mainEnv_4600_; lean_object* v_asyncEnv_4601_; lean_object* v___f_4602_; lean_object* v___f_4603_; lean_object* v___x_4604_; 
v_a_4599_ = lean_ctor_get(v___x_4598_, 0);
lean_inc_n(v_a_4599_, 3);
lean_dec_ref_known(v___x_4598_, 1);
v_mainEnv_4600_ = lean_ctor_get(v_a_4599_, 0);
lean_inc_ref(v_mainEnv_4600_);
v_asyncEnv_4601_ = lean_ctor_get(v_a_4599_, 1);
lean_inc_ref_n(v_asyncEnv_4601_, 2);
lean_inc(v_ref_4597_);
lean_inc(v___y_4591_);
v___f_4602_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0___boxed), 5, 3);
lean_closure_set(v___f_4602_, 0, v___y_4591_);
lean_closure_set(v___f_4602_, 1, v_a_4599_);
lean_closure_set(v___f_4602_, 2, v_ref_4597_);
lean_inc(v_decl_3786_);
v___f_4603_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2___boxed), 7, 3);
lean_closure_set(v___f_4603_, 0, v_a_4599_);
lean_closure_set(v___f_4603_, 1, v_asyncEnv_4601_);
lean_closure_set(v___f_4603_, 2, v_decl_3786_);
v___x_4604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4604_, 0, v___y_4588_);
if (lean_obj_tag(v___y_4590_) == 0)
{
lean_inc(v_ref_4597_);
lean_inc_ref(v___x_4604_);
v___y_4514_ = v_mainEnv_4600_;
v___y_4515_ = v___f_4602_;
v___y_4516_ = v___x_4604_;
v___y_4517_ = v_asyncEnv_4601_;
v___y_4518_ = v___f_4603_;
v___y_4519_ = v___y_4591_;
v___y_4520_ = v___y_4593_;
v___y_4521_ = v_a_4599_;
v___y_4522_ = v_ref_4597_;
v___y_4523_ = v___y_4594_;
v___y_4524_ = v_toCold_4596_;
v___y_4525_ = v___x_4604_;
goto v___jp_4513_;
}
else
{
lean_inc(v_ref_4597_);
v___y_4514_ = v_mainEnv_4600_;
v___y_4515_ = v___f_4602_;
v___y_4516_ = v___x_4604_;
v___y_4517_ = v_asyncEnv_4601_;
v___y_4518_ = v___f_4603_;
v___y_4519_ = v___y_4591_;
v___y_4520_ = v___y_4593_;
v___y_4521_ = v_a_4599_;
v___y_4522_ = v_ref_4597_;
v___y_4523_ = v___y_4594_;
v___y_4524_ = v_toCold_4596_;
v___y_4525_ = v___y_4590_;
goto v___jp_4513_;
}
}
else
{
lean_object* v_a_4605_; lean_object* v___x_4607_; uint8_t v_isShared_4608_; uint8_t v_isSharedCheck_4616_; 
lean_dec_ref(v___y_4594_);
lean_dec(v___y_4590_);
lean_dec_ref(v___y_4588_);
lean_dec(v_decl_3786_);
v_a_4605_ = lean_ctor_get(v___x_4598_, 0);
v_isSharedCheck_4616_ = !lean_is_exclusive(v___x_4598_);
if (v_isSharedCheck_4616_ == 0)
{
v___x_4607_ = v___x_4598_;
v_isShared_4608_ = v_isSharedCheck_4616_;
goto v_resetjp_4606_;
}
else
{
lean_inc(v_a_4605_);
lean_dec(v___x_4598_);
v___x_4607_ = lean_box(0);
v_isShared_4608_ = v_isSharedCheck_4616_;
goto v_resetjp_4606_;
}
v_resetjp_4606_:
{
lean_object* v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4614_; 
v___x_4609_ = lean_io_error_to_string(v_a_4605_);
v___x_4610_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4610_, 0, v___x_4609_);
v___x_4611_ = l_Lean_MessageData_ofFormat(v___x_4610_);
lean_inc(v_ref_4597_);
v___x_4612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4612_, 0, v_ref_4597_);
lean_ctor_set(v___x_4612_, 1, v___x_4611_);
if (v_isShared_4608_ == 0)
{
lean_ctor_set(v___x_4607_, 0, v___x_4612_);
v___x_4614_ = v___x_4607_;
goto v_reusejp_4613_;
}
else
{
lean_object* v_reuseFailAlloc_4615_; 
v_reuseFailAlloc_4615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4615_, 0, v___x_4612_);
v___x_4614_ = v_reuseFailAlloc_4615_;
goto v_reusejp_4613_;
}
v_reusejp_4613_:
{
return v___x_4614_;
}
}
}
}
v___jp_4617_:
{
lean_object* v___x_4624_; 
v___x_4624_ = lean_st_ref_get(v___y_4623_);
if (lean_obj_tag(v_exportedInfo_x3f_4621_) == 0)
{
lean_object* v_env_4625_; lean_object* v___x_4626_; 
v_env_4625_ = lean_ctor_get(v___x_4624_, 0);
lean_inc_ref(v_env_4625_);
lean_dec(v___x_4624_);
v___x_4626_ = lean_box(0);
v___y_4588_ = v___y_4620_;
v___y_4589_ = v___y_4619_;
v___y_4590_ = v_exportedInfo_x3f_4621_;
v___y_4591_ = v___y_4623_;
v___y_4592_ = v___y_4618_;
v___y_4593_ = v___y_4622_;
v___y_4594_ = v_env_4625_;
v___y_4595_ = v___x_4626_;
goto v___jp_4587_;
}
else
{
lean_object* v_env_4627_; lean_object* v_val_4628_; uint8_t v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; 
v_env_4627_ = lean_ctor_get(v___x_4624_, 0);
lean_inc_ref(v_env_4627_);
lean_dec(v___x_4624_);
v_val_4628_ = lean_ctor_get(v_exportedInfo_x3f_4621_, 0);
v___x_4629_ = l_Lean_ConstantKind_ofConstantInfo(v_val_4628_);
v___x_4630_ = lean_box(v___x_4629_);
v___x_4631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4631_, 0, v___x_4630_);
v___y_4588_ = v___y_4620_;
v___y_4589_ = v___y_4619_;
v___y_4590_ = v_exportedInfo_x3f_4621_;
v___y_4591_ = v___y_4623_;
v___y_4592_ = v___y_4618_;
v___y_4593_ = v___y_4622_;
v___y_4594_ = v_env_4627_;
v___y_4595_ = v___x_4631_;
goto v___jp_4587_;
}
}
v___jp_4632_:
{
lean_object* v___x_4638_; 
lean_inc_ref(v___y_4635_);
v___x_4638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4638_, 0, v___y_4635_);
v___y_4618_ = v___y_4633_;
v___y_4619_ = v___y_4634_;
v___y_4620_ = v___y_4635_;
v_exportedInfo_x3f_4621_ = v___x_4638_;
v___y_4622_ = v___y_4636_;
v___y_4623_ = v___y_4637_;
goto v___jp_4617_;
}
v___jp_4639_:
{
lean_object* v___x_4645_; 
lean_inc_ref(v___y_4642_);
v___x_4645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4645_, 0, v___y_4642_);
v___y_4618_ = v___y_4640_;
v___y_4619_ = v___y_4641_;
v___y_4620_ = v___y_4642_;
v_exportedInfo_x3f_4621_ = v___x_4645_;
v___y_4622_ = v___y_4643_;
v___y_4623_ = v___y_4644_;
goto v___jp_4617_;
}
}
else
{
goto v___jp_4357_;
}
v___jp_4210_:
{
lean_object* v___x_4214_; double v___x_4215_; double v___x_4216_; double v___x_4217_; double v___x_4218_; double v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; 
v___x_4214_ = lean_io_mono_nanos_now();
v___x_4215_ = lean_float_of_nat(v___y_4211_);
v___x_4216_ = lean_float_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd___lam__1___closed__1);
v___x_4217_ = lean_float_div(v___x_4215_, v___x_4216_);
v___x_4218_ = lean_float_of_nat(v___x_4214_);
v___x_4219_ = lean_float_div(v___x_4218_, v___x_4216_);
v___x_4220_ = lean_box_float(v___x_4217_);
v___x_4221_ = lean_box_float(v___x_4219_);
v___x_4222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4222_, 0, v___x_4220_);
lean_ctor_set(v___x_4222_, 1, v___x_4221_);
v___x_4223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4223_, 0, v_a_4213_);
lean_ctor_set(v___x_4223_, 1, v___x_4222_);
v___x_4224_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2(v_cls_3982_, v_hasTrace_3846_, v___x_4207_, v_options_3844_, v___x_4209_, v___y_4212_, v___f_4206_, v___x_4223_, v_a_3788_, v_a_3789_);
return v___x_4224_;
}
v___jp_4225_:
{
if (lean_obj_tag(v___y_4228_) == 0)
{
lean_object* v_a_4229_; lean_object* v___x_4231_; uint8_t v_isShared_4232_; uint8_t v_isSharedCheck_4236_; 
v_a_4229_ = lean_ctor_get(v___y_4228_, 0);
v_isSharedCheck_4236_ = !lean_is_exclusive(v___y_4228_);
if (v_isSharedCheck_4236_ == 0)
{
v___x_4231_ = v___y_4228_;
v_isShared_4232_ = v_isSharedCheck_4236_;
goto v_resetjp_4230_;
}
else
{
lean_inc(v_a_4229_);
lean_dec(v___y_4228_);
v___x_4231_ = lean_box(0);
v_isShared_4232_ = v_isSharedCheck_4236_;
goto v_resetjp_4230_;
}
v_resetjp_4230_:
{
lean_object* v___x_4234_; 
if (v_isShared_4232_ == 0)
{
lean_ctor_set_tag(v___x_4231_, 1);
v___x_4234_ = v___x_4231_;
goto v_reusejp_4233_;
}
else
{
lean_object* v_reuseFailAlloc_4235_; 
v_reuseFailAlloc_4235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4235_, 0, v_a_4229_);
v___x_4234_ = v_reuseFailAlloc_4235_;
goto v_reusejp_4233_;
}
v_reusejp_4233_:
{
v___y_4211_ = v___y_4226_;
v___y_4212_ = v___y_4227_;
v_a_4213_ = v___x_4234_;
goto v___jp_4210_;
}
}
}
else
{
lean_object* v_a_4237_; lean_object* v___x_4239_; uint8_t v_isShared_4240_; uint8_t v_isSharedCheck_4244_; 
v_a_4237_ = lean_ctor_get(v___y_4228_, 0);
v_isSharedCheck_4244_ = !lean_is_exclusive(v___y_4228_);
if (v_isSharedCheck_4244_ == 0)
{
v___x_4239_ = v___y_4228_;
v_isShared_4240_ = v_isSharedCheck_4244_;
goto v_resetjp_4238_;
}
else
{
lean_inc(v_a_4237_);
lean_dec(v___y_4228_);
v___x_4239_ = lean_box(0);
v_isShared_4240_ = v_isSharedCheck_4244_;
goto v_resetjp_4238_;
}
v_resetjp_4238_:
{
lean_object* v___x_4242_; 
if (v_isShared_4240_ == 0)
{
lean_ctor_set_tag(v___x_4239_, 0);
v___x_4242_ = v___x_4239_;
goto v_reusejp_4241_;
}
else
{
lean_object* v_reuseFailAlloc_4243_; 
v_reuseFailAlloc_4243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4243_, 0, v_a_4237_);
v___x_4242_ = v_reuseFailAlloc_4243_;
goto v_reusejp_4241_;
}
v_reusejp_4241_:
{
v___y_4211_ = v___y_4226_;
v___y_4212_ = v___y_4227_;
v_a_4213_ = v___x_4242_;
goto v___jp_4210_;
}
}
}
}
v___jp_4245_:
{
lean_object* v___x_4250_; lean_object* v___x_4251_; 
v___x_4250_ = lean_box(0);
lean_inc(v_a_3789_);
lean_inc_ref(v_a_3788_);
v___x_4251_ = lean_apply_5(v___y_4249_, v___x_4250_, v___y_4247_, v_a_3788_, v_a_3789_, lean_box(0));
v___y_4226_ = v___y_4246_;
v___y_4227_ = v___y_4248_;
v___y_4228_ = v___x_4251_;
goto v___jp_4225_;
}
v___jp_4252_:
{
lean_object* v___x_4260_; uint8_t v_isModule_4261_; 
v___x_4260_ = l_Lean_Environment_header(v___y_4259_);
lean_dec_ref(v___y_4259_);
v_isModule_4261_ = lean_ctor_get_uint8(v___x_4260_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4260_);
if (v_isModule_4261_ == 0)
{
lean_dec_ref(v___y_4256_);
lean_dec_ref(v___y_4253_);
v___y_4246_ = v___y_4254_;
v___y_4247_ = v___y_4255_;
v___y_4248_ = v___y_4257_;
v___y_4249_ = v___y_4258_;
goto v___jp_4245_;
}
else
{
lean_dec_ref(v___y_4258_);
lean_dec(v___y_4255_);
if (v___x_4209_ == 0)
{
lean_object* v___x_4262_; lean_object* v___x_4263_; 
lean_dec_ref(v___y_4253_);
v___x_4262_ = lean_box(0);
lean_inc(v_a_3789_);
lean_inc_ref(v_a_3788_);
v___x_4263_ = lean_apply_4(v___y_4256_, v___x_4262_, v_a_3788_, v_a_3789_, lean_box(0));
v___y_4226_ = v___y_4254_;
v___y_4227_ = v___y_4257_;
v___y_4228_ = v___x_4263_;
goto v___jp_4225_;
}
else
{
lean_object* v_toConstantVal_4264_; lean_object* v_name_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; 
v_toConstantVal_4264_ = lean_ctor_get(v___y_4253_, 0);
lean_inc_ref(v_toConstantVal_4264_);
lean_dec_ref(v___y_4253_);
v_name_4265_ = lean_ctor_get(v_toConstantVal_4264_, 0);
lean_inc(v_name_4265_);
lean_dec_ref(v_toConstantVal_4264_);
v___x_4266_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2);
v___x_4267_ = l_Lean_MessageData_ofName(v_name_4265_);
v___x_4268_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4268_, 0, v___x_4266_);
lean_ctor_set(v___x_4268_, 1, v___x_4267_);
v___x_4269_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_4270_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4270_, 0, v___x_4268_);
lean_ctor_set(v___x_4270_, 1, v___x_4269_);
v___x_4271_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3982_, v___x_4270_, v_a_3788_, v_a_3789_);
if (lean_obj_tag(v___x_4271_) == 0)
{
lean_object* v_a_4272_; lean_object* v___x_4273_; 
v_a_4272_ = lean_ctor_get(v___x_4271_, 0);
lean_inc(v_a_4272_);
lean_dec_ref_known(v___x_4271_, 1);
lean_inc(v_a_3789_);
lean_inc_ref(v_a_3788_);
v___x_4273_ = lean_apply_4(v___y_4256_, v_a_4272_, v_a_3788_, v_a_3789_, lean_box(0));
v___y_4226_ = v___y_4254_;
v___y_4227_ = v___y_4257_;
v___y_4228_ = v___x_4273_;
goto v___jp_4225_;
}
else
{
lean_dec_ref(v___y_4256_);
v___y_4226_ = v___y_4254_;
v___y_4227_ = v___y_4257_;
v___y_4228_ = v___x_4271_;
goto v___jp_4225_;
}
}
}
}
v___jp_4274_:
{
if (v___x_4209_ == 0)
{
lean_object* v___x_4279_; lean_object* v___x_4280_; 
lean_dec_ref(v___y_4276_);
v___x_4279_ = lean_box(0);
lean_inc(v_a_3789_);
lean_inc_ref(v_a_3788_);
v___x_4280_ = lean_apply_4(v___y_4277_, v___x_4279_, v_a_3788_, v_a_3789_, lean_box(0));
v___y_4226_ = v___y_4275_;
v___y_4227_ = v___y_4278_;
v___y_4228_ = v___x_4280_;
goto v___jp_4225_;
}
else
{
lean_object* v_toConstantVal_4281_; lean_object* v_name_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; 
v_toConstantVal_4281_ = lean_ctor_get(v___y_4276_, 0);
lean_inc_ref(v_toConstantVal_4281_);
lean_dec_ref(v___y_4276_);
v_name_4282_ = lean_ctor_get(v_toConstantVal_4281_, 0);
lean_inc(v_name_4282_);
lean_dec_ref(v_toConstantVal_4281_);
v___x_4283_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4);
v___x_4284_ = l_Lean_MessageData_ofName(v_name_4282_);
v___x_4285_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4285_, 0, v___x_4283_);
lean_ctor_set(v___x_4285_, 1, v___x_4284_);
v___x_4286_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_4287_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4287_, 0, v___x_4285_);
lean_ctor_set(v___x_4287_, 1, v___x_4286_);
v___x_4288_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3982_, v___x_4287_, v_a_3788_, v_a_3789_);
if (lean_obj_tag(v___x_4288_) == 0)
{
lean_object* v_a_4289_; lean_object* v___x_4290_; 
v_a_4289_ = lean_ctor_get(v___x_4288_, 0);
lean_inc(v_a_4289_);
lean_dec_ref_known(v___x_4288_, 1);
lean_inc(v_a_3789_);
lean_inc_ref(v_a_3788_);
v___x_4290_ = lean_apply_4(v___y_4277_, v_a_4289_, v_a_3788_, v_a_3789_, lean_box(0));
v___y_4226_ = v___y_4275_;
v___y_4227_ = v___y_4278_;
v___y_4228_ = v___x_4290_;
goto v___jp_4225_;
}
else
{
lean_dec_ref(v___y_4277_);
v___y_4226_ = v___y_4275_;
v___y_4227_ = v___y_4278_;
v___y_4228_ = v___x_4288_;
goto v___jp_4225_;
}
}
}
v___jp_4291_:
{
lean_object* v___x_4296_; lean_object* v___x_4297_; 
v___x_4296_ = lean_box(0);
lean_inc(v_a_3789_);
lean_inc_ref(v_a_3788_);
v___x_4297_ = lean_apply_5(v___y_4293_, v___x_4296_, v___y_4294_, v_a_3788_, v_a_3789_, lean_box(0));
v___y_4226_ = v___y_4292_;
v___y_4227_ = v___y_4295_;
v___y_4228_ = v___x_4297_;
goto v___jp_4225_;
}
v___jp_4298_:
{
lean_object* v___x_4308_; uint8_t v_isModule_4309_; 
v___x_4308_ = l_Lean_Environment_header(v___y_4304_);
lean_dec_ref(v___y_4304_);
v_isModule_4309_ = lean_ctor_get_uint8(v___x_4308_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4308_);
if (v_isModule_4309_ == 0)
{
lean_dec_ref(v___y_4306_);
lean_dec_ref(v___y_4305_);
lean_dec_ref(v___y_4302_);
v___y_4292_ = v___y_4299_;
v___y_4293_ = v___y_4300_;
v___y_4294_ = v___y_4303_;
v___y_4295_ = v___y_4307_;
goto v___jp_4291_;
}
else
{
uint8_t v_isExporting_4310_; 
v_isExporting_4310_ = lean_ctor_get_uint8(v___y_4306_, sizeof(void*)*8);
lean_dec_ref(v___y_4306_);
if (v_isExporting_4310_ == 0)
{
lean_dec(v___y_4303_);
lean_dec_ref(v___y_4300_);
v___y_4275_ = v___y_4299_;
v___y_4276_ = v___y_4302_;
v___y_4277_ = v___y_4305_;
v___y_4278_ = v___y_4307_;
goto v___jp_4274_;
}
else
{
if (v___y_4301_ == 0)
{
lean_dec_ref(v___y_4305_);
lean_dec_ref(v___y_4302_);
v___y_4292_ = v___y_4299_;
v___y_4293_ = v___y_4300_;
v___y_4294_ = v___y_4303_;
v___y_4295_ = v___y_4307_;
goto v___jp_4291_;
}
else
{
lean_dec(v___y_4303_);
lean_dec_ref(v___y_4300_);
v___y_4275_ = v___y_4299_;
v___y_4276_ = v___y_4302_;
v___y_4277_ = v___y_4305_;
v___y_4278_ = v___y_4307_;
goto v___jp_4274_;
}
}
}
}
v___jp_4311_:
{
lean_object* v___x_4315_; double v___x_4316_; double v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; lean_object* v___x_4322_; 
v___x_4315_ = lean_io_get_num_heartbeats();
v___x_4316_ = lean_float_of_nat(v___y_4313_);
v___x_4317_ = lean_float_of_nat(v___x_4315_);
v___x_4318_ = lean_box_float(v___x_4316_);
v___x_4319_ = lean_box_float(v___x_4317_);
v___x_4320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4320_, 0, v___x_4318_);
lean_ctor_set(v___x_4320_, 1, v___x_4319_);
v___x_4321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4321_, 0, v_a_4314_);
lean_ctor_set(v___x_4321_, 1, v___x_4320_);
v___x_4322_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__2(v_cls_3982_, v_hasTrace_3846_, v___x_4207_, v_options_3844_, v___x_4209_, v___y_4312_, v___f_4206_, v___x_4321_, v_a_3788_, v_a_3789_);
return v___x_4322_;
}
v___jp_4323_:
{
if (lean_obj_tag(v___y_4326_) == 0)
{
lean_object* v_a_4327_; lean_object* v___x_4329_; uint8_t v_isShared_4330_; uint8_t v_isSharedCheck_4334_; 
v_a_4327_ = lean_ctor_get(v___y_4326_, 0);
v_isSharedCheck_4334_ = !lean_is_exclusive(v___y_4326_);
if (v_isSharedCheck_4334_ == 0)
{
v___x_4329_ = v___y_4326_;
v_isShared_4330_ = v_isSharedCheck_4334_;
goto v_resetjp_4328_;
}
else
{
lean_inc(v_a_4327_);
lean_dec(v___y_4326_);
v___x_4329_ = lean_box(0);
v_isShared_4330_ = v_isSharedCheck_4334_;
goto v_resetjp_4328_;
}
v_resetjp_4328_:
{
lean_object* v___x_4332_; 
if (v_isShared_4330_ == 0)
{
lean_ctor_set_tag(v___x_4329_, 1);
v___x_4332_ = v___x_4329_;
goto v_reusejp_4331_;
}
else
{
lean_object* v_reuseFailAlloc_4333_; 
v_reuseFailAlloc_4333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4333_, 0, v_a_4327_);
v___x_4332_ = v_reuseFailAlloc_4333_;
goto v_reusejp_4331_;
}
v_reusejp_4331_:
{
v___y_4312_ = v___y_4325_;
v___y_4313_ = v___y_4324_;
v_a_4314_ = v___x_4332_;
goto v___jp_4311_;
}
}
}
else
{
lean_object* v_a_4335_; lean_object* v___x_4337_; uint8_t v_isShared_4338_; uint8_t v_isSharedCheck_4342_; 
v_a_4335_ = lean_ctor_get(v___y_4326_, 0);
v_isSharedCheck_4342_ = !lean_is_exclusive(v___y_4326_);
if (v_isSharedCheck_4342_ == 0)
{
v___x_4337_ = v___y_4326_;
v_isShared_4338_ = v_isSharedCheck_4342_;
goto v_resetjp_4336_;
}
else
{
lean_inc(v_a_4335_);
lean_dec(v___y_4326_);
v___x_4337_ = lean_box(0);
v_isShared_4338_ = v_isSharedCheck_4342_;
goto v_resetjp_4336_;
}
v_resetjp_4336_:
{
lean_object* v___x_4340_; 
if (v_isShared_4338_ == 0)
{
lean_ctor_set_tag(v___x_4337_, 0);
v___x_4340_ = v___x_4337_;
goto v_reusejp_4339_;
}
else
{
lean_object* v_reuseFailAlloc_4341_; 
v_reuseFailAlloc_4341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4341_, 0, v_a_4335_);
v___x_4340_ = v_reuseFailAlloc_4341_;
goto v_reusejp_4339_;
}
v_reusejp_4339_:
{
v___y_4312_ = v___y_4325_;
v___y_4313_ = v___y_4324_;
v_a_4314_ = v___x_4340_;
goto v___jp_4311_;
}
}
}
}
v___jp_4343_:
{
lean_object* v___x_4348_; lean_object* v___x_4349_; 
v___x_4348_ = lean_box(0);
lean_inc(v_a_3789_);
lean_inc_ref(v_a_3788_);
v___x_4349_ = lean_apply_5(v___y_4345_, v___x_4348_, v___y_4344_, v_a_3788_, v_a_3789_, lean_box(0));
v___y_4324_ = v___y_4347_;
v___y_4325_ = v___y_4346_;
v___y_4326_ = v___x_4349_;
goto v___jp_4323_;
}
v___jp_4350_:
{
lean_object* v___x_4355_; lean_object* v___x_4356_; 
v___x_4355_ = lean_box(0);
lean_inc(v_a_3789_);
lean_inc_ref(v_a_3788_);
v___x_4356_ = lean_apply_5(v___y_4354_, v___x_4355_, v___y_4351_, v_a_3788_, v_a_3789_, lean_box(0));
v___y_4324_ = v___y_4353_;
v___y_4325_ = v___y_4352_;
v___y_4326_ = v___x_4356_;
goto v___jp_4323_;
}
v___jp_4357_:
{
lean_object* v___x_4358_; lean_object* v_a_4359_; lean_object* v___x_4361_; uint8_t v_isShared_4362_; uint8_t v_isSharedCheck_4510_; 
v___x_4358_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_doAdd_spec__1___redArg(v_a_3789_);
v_a_4359_ = lean_ctor_get(v___x_4358_, 0);
v_isSharedCheck_4510_ = !lean_is_exclusive(v___x_4358_);
if (v_isSharedCheck_4510_ == 0)
{
v___x_4361_ = v___x_4358_;
v_isShared_4362_ = v_isSharedCheck_4510_;
goto v_resetjp_4360_;
}
else
{
lean_inc(v_a_4359_);
lean_dec(v___x_4358_);
v___x_4361_ = lean_box(0);
v_isShared_4362_ = v_isSharedCheck_4510_;
goto v_resetjp_4360_;
}
v_resetjp_4360_:
{
lean_object* v___x_4363_; uint8_t v___x_4364_; 
v___x_4363_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4364_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_options_3844_, v___x_4363_);
if (v___x_4364_ == 0)
{
lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v_env_4367_; lean_object* v_nextMacroScope_4368_; lean_object* v_ngen_4369_; lean_object* v_auxDeclNGen_4370_; lean_object* v_traceState_4371_; lean_object* v_messages_4372_; lean_object* v_infoState_4373_; lean_object* v_snapshotTasks_4374_; lean_object* v___x_4376_; uint8_t v_isShared_4377_; uint8_t v_isSharedCheck_4424_; 
v___x_4365_ = lean_io_mono_nanos_now();
v___x_4366_ = lean_st_ref_take(v_a_3789_);
v_env_4367_ = lean_ctor_get(v___x_4366_, 0);
v_nextMacroScope_4368_ = lean_ctor_get(v___x_4366_, 1);
v_ngen_4369_ = lean_ctor_get(v___x_4366_, 2);
v_auxDeclNGen_4370_ = lean_ctor_get(v___x_4366_, 3);
v_traceState_4371_ = lean_ctor_get(v___x_4366_, 4);
v_messages_4372_ = lean_ctor_get(v___x_4366_, 6);
v_infoState_4373_ = lean_ctor_get(v___x_4366_, 7);
v_snapshotTasks_4374_ = lean_ctor_get(v___x_4366_, 8);
v_isSharedCheck_4424_ = !lean_is_exclusive(v___x_4366_);
if (v_isSharedCheck_4424_ == 0)
{
lean_object* v_unused_4425_; 
v_unused_4425_ = lean_ctor_get(v___x_4366_, 5);
lean_dec(v_unused_4425_);
v___x_4376_ = v___x_4366_;
v_isShared_4377_ = v_isSharedCheck_4424_;
goto v_resetjp_4375_;
}
else
{
lean_inc(v_snapshotTasks_4374_);
lean_inc(v_infoState_4373_);
lean_inc(v_messages_4372_);
lean_inc(v_traceState_4371_);
lean_inc(v_auxDeclNGen_4370_);
lean_inc(v_ngen_4369_);
lean_inc(v_nextMacroScope_4368_);
lean_inc(v_env_4367_);
lean_dec(v___x_4366_);
v___x_4376_ = lean_box(0);
v_isShared_4377_ = v_isSharedCheck_4424_;
goto v_resetjp_4375_;
}
v_resetjp_4375_:
{
lean_object* v___x_4378_; lean_object* v___x_4379_; lean_object* v___x_4380_; lean_object* v___x_4382_; 
lean_inc(v_decl_3786_);
v___x_4378_ = l_Lean_Declaration_getNames(v_decl_3786_);
v___x_4379_ = l_List_foldl___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__1(v_env_4367_, v___x_4378_);
v___x_4380_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_4377_ == 0)
{
lean_ctor_set(v___x_4376_, 5, v___x_4380_);
lean_ctor_set(v___x_4376_, 0, v___x_4379_);
v___x_4382_ = v___x_4376_;
goto v_reusejp_4381_;
}
else
{
lean_object* v_reuseFailAlloc_4423_; 
v_reuseFailAlloc_4423_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4423_, 0, v___x_4379_);
lean_ctor_set(v_reuseFailAlloc_4423_, 1, v_nextMacroScope_4368_);
lean_ctor_set(v_reuseFailAlloc_4423_, 2, v_ngen_4369_);
lean_ctor_set(v_reuseFailAlloc_4423_, 3, v_auxDeclNGen_4370_);
lean_ctor_set(v_reuseFailAlloc_4423_, 4, v_traceState_4371_);
lean_ctor_set(v_reuseFailAlloc_4423_, 5, v___x_4380_);
lean_ctor_set(v_reuseFailAlloc_4423_, 6, v_messages_4372_);
lean_ctor_set(v_reuseFailAlloc_4423_, 7, v_infoState_4373_);
lean_ctor_set(v_reuseFailAlloc_4423_, 8, v_snapshotTasks_4374_);
v___x_4382_ = v_reuseFailAlloc_4423_;
goto v_reusejp_4381_;
}
v_reusejp_4381_:
{
lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; lean_object* v___f_4387_; 
v___x_4383_ = lean_st_ref_put(v_a_3789_, v___x_4382_);
v___x_4384_ = lean_box(0);
v___x_4385_ = lean_box(v_hasTrace_3846_);
v___x_4386_ = lean_box(v___x_4364_);
lean_inc(v_decl_3786_);
v___f_4387_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___boxed), 11, 6);
lean_closure_set(v___f_4387_, 0, v_decl_3786_);
lean_closure_set(v___f_4387_, 1, v___x_4385_);
lean_closure_set(v___f_4387_, 2, v___x_4386_);
lean_closure_set(v___f_4387_, 3, v___x_4380_);
lean_closure_set(v___f_4387_, 4, v_cls_3982_);
lean_closure_set(v___f_4387_, 5, v___x_4384_);
switch(lean_obj_tag(v_decl_3786_))
{
case 2:
{
lean_object* v_val_4388_; lean_object* v___f_4389_; lean_object* v___x_4390_; lean_object* v___f_4391_; lean_object* v___x_4392_; 
lean_del_object(v___x_4361_);
v_val_4388_ = lean_ctor_get(v_decl_3786_, 0);
lean_inc_ref_n(v_val_4388_, 3);
lean_dec_ref_known(v_decl_3786_, 1);
v___f_4389_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__6___boxed), 7, 2);
lean_closure_set(v___f_4389_, 0, v_val_4388_);
lean_closure_set(v___f_4389_, 1, v___f_4387_);
v___x_4390_ = lean_box(v___x_4364_);
lean_inc_ref(v___f_4389_);
v___f_4391_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__7___boxed), 7, 3);
lean_closure_set(v___f_4391_, 0, v_val_4388_);
lean_closure_set(v___f_4391_, 1, v___x_4390_);
lean_closure_set(v___f_4391_, 2, v___f_4389_);
v___x_4392_ = lean_st_ref_get(v_a_3789_);
if (v_forceExpose_3787_ == 0)
{
lean_object* v_env_4393_; 
v_env_4393_ = lean_ctor_get(v___x_4392_, 0);
lean_inc_ref(v_env_4393_);
lean_dec(v___x_4392_);
v___y_4253_ = v_val_4388_;
v___y_4254_ = v___x_4365_;
v___y_4255_ = v___x_4384_;
v___y_4256_ = v___f_4391_;
v___y_4257_ = v_a_4359_;
v___y_4258_ = v___f_4389_;
v___y_4259_ = v_env_4393_;
goto v___jp_4252_;
}
else
{
if (v___x_4364_ == 0)
{
lean_dec(v___x_4392_);
lean_dec_ref(v___f_4391_);
lean_dec_ref(v_val_4388_);
v___y_4246_ = v___x_4365_;
v___y_4247_ = v___x_4384_;
v___y_4248_ = v_a_4359_;
v___y_4249_ = v___f_4389_;
goto v___jp_4245_;
}
else
{
lean_object* v_env_4394_; 
v_env_4394_ = lean_ctor_get(v___x_4392_, 0);
lean_inc_ref(v_env_4394_);
lean_dec(v___x_4392_);
v___y_4253_ = v_val_4388_;
v___y_4254_ = v___x_4365_;
v___y_4255_ = v___x_4384_;
v___y_4256_ = v___f_4391_;
v___y_4257_ = v_a_4359_;
v___y_4258_ = v___f_4389_;
v___y_4259_ = v_env_4394_;
goto v___jp_4252_;
}
}
}
case 1:
{
lean_object* v_val_4395_; lean_object* v___x_4396_; 
lean_del_object(v___x_4361_);
v_val_4395_ = lean_ctor_get(v_decl_3786_, 0);
lean_inc_ref(v_val_4395_);
lean_dec_ref_known(v_decl_3786_, 1);
v___x_4396_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5(v___f_4387_, v___x_4364_, v_cls_3982_, v___x_4384_, v_forceExpose_3787_, v_val_4395_, v_a_3788_, v_a_3789_);
v___y_4226_ = v___x_4365_;
v___y_4227_ = v_a_4359_;
v___y_4228_ = v___x_4396_;
goto v___jp_4225_;
}
case 5:
{
lean_object* v_defns_4397_; 
lean_del_object(v___x_4361_);
v_defns_4397_ = lean_ctor_get(v_decl_3786_, 0);
if (lean_obj_tag(v_defns_4397_) == 1)
{
lean_object* v_tail_4398_; 
v_tail_4398_ = lean_ctor_get(v_defns_4397_, 1);
if (lean_obj_tag(v_tail_4398_) == 0)
{
lean_object* v_head_4399_; lean_object* v___x_4400_; 
lean_inc_ref(v_defns_4397_);
lean_dec_ref_known(v_decl_3786_, 1);
v_head_4399_ = lean_ctor_get(v_defns_4397_, 0);
lean_inc(v_head_4399_);
lean_dec_ref_known(v_defns_4397_, 2);
v___x_4400_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5(v___f_4387_, v___x_4364_, v_cls_3982_, v___x_4384_, v_forceExpose_3787_, v_head_4399_, v_a_3788_, v_a_3789_);
v___y_4226_ = v___x_4365_;
v___y_4227_ = v_a_4359_;
v___y_4228_ = v___x_4400_;
goto v___jp_4225_;
}
else
{
lean_object* v___x_4401_; 
lean_dec_ref(v___f_4387_);
lean_inc_ref(v_decl_3786_);
v___x_4401_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(v_decl_3786_, v_cls_3982_, v_decl_3786_, v_a_3788_, v_a_3789_);
lean_dec_ref_known(v_decl_3786_, 1);
v___y_4226_ = v___x_4365_;
v___y_4227_ = v_a_4359_;
v___y_4228_ = v___x_4401_;
goto v___jp_4225_;
}
}
else
{
lean_object* v___x_4402_; 
lean_dec_ref(v___f_4387_);
lean_inc_ref(v_decl_3786_);
v___x_4402_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(v_decl_3786_, v_cls_3982_, v_decl_3786_, v_a_3788_, v_a_3789_);
lean_dec_ref_known(v_decl_3786_, 1);
v___y_4226_ = v___x_4365_;
v___y_4227_ = v_a_4359_;
v___y_4228_ = v___x_4402_;
goto v___jp_4225_;
}
}
case 3:
{
lean_object* v_val_4403_; lean_object* v___f_4404_; lean_object* v___f_4405_; lean_object* v___x_4406_; lean_object* v_env_4407_; lean_object* v___x_4408_; 
lean_del_object(v___x_4361_);
v_val_4403_ = lean_ctor_get(v_decl_3786_, 0);
lean_inc_ref_n(v_val_4403_, 3);
lean_dec_ref_known(v_decl_3786_, 1);
v___f_4404_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__8___boxed), 7, 2);
lean_closure_set(v___f_4404_, 0, v_val_4403_);
lean_closure_set(v___f_4404_, 1, v___f_4387_);
lean_inc_ref(v___f_4404_);
v___f_4405_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10___boxed), 6, 2);
lean_closure_set(v___f_4405_, 0, v_val_4403_);
lean_closure_set(v___f_4405_, 1, v___f_4404_);
v___x_4406_ = lean_st_ref_get(v_a_3789_);
v_env_4407_ = lean_ctor_get(v___x_4406_, 0);
lean_inc_ref(v_env_4407_);
lean_dec(v___x_4406_);
v___x_4408_ = lean_st_ref_get(v_a_3789_);
if (v_forceExpose_3787_ == 0)
{
lean_object* v_env_4409_; 
v_env_4409_ = lean_ctor_get(v___x_4408_, 0);
lean_inc_ref(v_env_4409_);
lean_dec(v___x_4408_);
v___y_4299_ = v___x_4365_;
v___y_4300_ = v___f_4404_;
v___y_4301_ = v___x_4364_;
v___y_4302_ = v_val_4403_;
v___y_4303_ = v___x_4384_;
v___y_4304_ = v_env_4407_;
v___y_4305_ = v___f_4405_;
v___y_4306_ = v_env_4409_;
v___y_4307_ = v_a_4359_;
goto v___jp_4298_;
}
else
{
if (v___x_4364_ == 0)
{
lean_dec(v___x_4408_);
lean_dec_ref(v_env_4407_);
lean_dec_ref(v___f_4405_);
lean_dec_ref(v_val_4403_);
v___y_4292_ = v___x_4365_;
v___y_4293_ = v___f_4404_;
v___y_4294_ = v___x_4384_;
v___y_4295_ = v_a_4359_;
goto v___jp_4291_;
}
else
{
lean_object* v_env_4410_; 
v_env_4410_ = lean_ctor_get(v___x_4408_, 0);
lean_inc_ref(v_env_4410_);
lean_dec(v___x_4408_);
v___y_4299_ = v___x_4365_;
v___y_4300_ = v___f_4404_;
v___y_4301_ = v___x_4364_;
v___y_4302_ = v_val_4403_;
v___y_4303_ = v___x_4384_;
v___y_4304_ = v_env_4407_;
v___y_4305_ = v___f_4405_;
v___y_4306_ = v_env_4410_;
v___y_4307_ = v_a_4359_;
goto v___jp_4298_;
}
}
}
case 0:
{
lean_object* v_val_4411_; lean_object* v_toConstantVal_4412_; lean_object* v_name_4413_; lean_object* v___x_4415_; 
lean_dec_ref(v___f_4387_);
v_val_4411_ = lean_ctor_get(v_decl_3786_, 0);
v_toConstantVal_4412_ = lean_ctor_get(v_val_4411_, 0);
v_name_4413_ = lean_ctor_get(v_toConstantVal_4412_, 0);
lean_inc_ref(v_val_4411_);
if (v_isShared_4362_ == 0)
{
lean_ctor_set(v___x_4361_, 0, v_val_4411_);
v___x_4415_ = v___x_4361_;
goto v_reusejp_4414_;
}
else
{
lean_object* v_reuseFailAlloc_4421_; 
v_reuseFailAlloc_4421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4421_, 0, v_val_4411_);
v___x_4415_ = v_reuseFailAlloc_4421_;
goto v_reusejp_4414_;
}
v_reusejp_4414_:
{
uint8_t v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; lean_object* v___x_4420_; 
v___x_4416_ = 2;
v___x_4417_ = lean_box(v___x_4416_);
v___x_4418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4418_, 0, v___x_4415_);
lean_ctor_set(v___x_4418_, 1, v___x_4417_);
lean_inc(v_name_4413_);
v___x_4419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4419_, 0, v_name_4413_);
lean_ctor_set(v___x_4419_, 1, v___x_4418_);
v___x_4420_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9(v_decl_3786_, v_hasTrace_3846_, v___x_4364_, v___x_4380_, v_cls_3982_, v___x_4384_, v___x_4419_, v___x_4384_, v_a_3788_, v_a_3789_);
v___y_4226_ = v___x_4365_;
v___y_4227_ = v_a_4359_;
v___y_4228_ = v___x_4420_;
goto v___jp_4225_;
}
}
default: 
{
lean_object* v___x_4422_; 
lean_dec_ref(v___f_4387_);
lean_del_object(v___x_4361_);
lean_inc(v_decl_3786_);
v___x_4422_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(v_decl_3786_, v_cls_3982_, v_decl_3786_, v_a_3788_, v_a_3789_);
lean_dec(v_decl_3786_);
v___y_4226_ = v___x_4365_;
v___y_4227_ = v_a_4359_;
v___y_4228_ = v___x_4422_;
goto v___jp_4225_;
}
}
}
}
}
else
{
lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v_env_4428_; lean_object* v_nextMacroScope_4429_; lean_object* v_ngen_4430_; lean_object* v_auxDeclNGen_4431_; lean_object* v_traceState_4432_; lean_object* v_messages_4433_; lean_object* v_infoState_4434_; lean_object* v_snapshotTasks_4435_; lean_object* v___x_4437_; uint8_t v_isShared_4438_; uint8_t v_isSharedCheck_4508_; 
v___x_4426_ = lean_io_get_num_heartbeats();
v___x_4427_ = lean_st_ref_take(v_a_3789_);
v_env_4428_ = lean_ctor_get(v___x_4427_, 0);
v_nextMacroScope_4429_ = lean_ctor_get(v___x_4427_, 1);
v_ngen_4430_ = lean_ctor_get(v___x_4427_, 2);
v_auxDeclNGen_4431_ = lean_ctor_get(v___x_4427_, 3);
v_traceState_4432_ = lean_ctor_get(v___x_4427_, 4);
v_messages_4433_ = lean_ctor_get(v___x_4427_, 6);
v_infoState_4434_ = lean_ctor_get(v___x_4427_, 7);
v_snapshotTasks_4435_ = lean_ctor_get(v___x_4427_, 8);
v_isSharedCheck_4508_ = !lean_is_exclusive(v___x_4427_);
if (v_isSharedCheck_4508_ == 0)
{
lean_object* v_unused_4509_; 
v_unused_4509_ = lean_ctor_get(v___x_4427_, 5);
lean_dec(v_unused_4509_);
v___x_4437_ = v___x_4427_;
v_isShared_4438_ = v_isSharedCheck_4508_;
goto v_resetjp_4436_;
}
else
{
lean_inc(v_snapshotTasks_4435_);
lean_inc(v_infoState_4434_);
lean_inc(v_messages_4433_);
lean_inc(v_traceState_4432_);
lean_inc(v_auxDeclNGen_4431_);
lean_inc(v_ngen_4430_);
lean_inc(v_nextMacroScope_4429_);
lean_inc(v_env_4428_);
lean_dec(v___x_4427_);
v___x_4437_ = lean_box(0);
v_isShared_4438_ = v_isSharedCheck_4508_;
goto v_resetjp_4436_;
}
v_resetjp_4436_:
{
lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4443_; 
lean_inc(v_decl_3786_);
v___x_4439_ = l_Lean_Declaration_getNames(v_decl_3786_);
v___x_4440_ = l_List_foldl___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__1(v_env_4428_, v___x_4439_);
v___x_4441_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_4438_ == 0)
{
lean_ctor_set(v___x_4437_, 5, v___x_4441_);
lean_ctor_set(v___x_4437_, 0, v___x_4440_);
v___x_4443_ = v___x_4437_;
goto v_reusejp_4442_;
}
else
{
lean_object* v_reuseFailAlloc_4507_; 
v_reuseFailAlloc_4507_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4507_, 0, v___x_4440_);
lean_ctor_set(v_reuseFailAlloc_4507_, 1, v_nextMacroScope_4429_);
lean_ctor_set(v_reuseFailAlloc_4507_, 2, v_ngen_4430_);
lean_ctor_set(v_reuseFailAlloc_4507_, 3, v_auxDeclNGen_4431_);
lean_ctor_set(v_reuseFailAlloc_4507_, 4, v_traceState_4432_);
lean_ctor_set(v_reuseFailAlloc_4507_, 5, v___x_4441_);
lean_ctor_set(v_reuseFailAlloc_4507_, 6, v_messages_4433_);
lean_ctor_set(v_reuseFailAlloc_4507_, 7, v_infoState_4434_);
lean_ctor_set(v_reuseFailAlloc_4507_, 8, v_snapshotTasks_4435_);
v___x_4443_ = v_reuseFailAlloc_4507_;
goto v_reusejp_4442_;
}
v_reusejp_4442_:
{
lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___f_4447_; 
v___x_4444_ = lean_st_ref_put(v_a_3789_, v___x_4443_);
v___x_4445_ = lean_box(0);
v___x_4446_ = lean_box(v___x_4364_);
lean_inc(v_decl_3786_);
v___f_4447_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__14___boxed), 10, 5);
lean_closure_set(v___f_4447_, 0, v_decl_3786_);
lean_closure_set(v___f_4447_, 1, v___x_4446_);
lean_closure_set(v___f_4447_, 2, v_cls_3982_);
lean_closure_set(v___f_4447_, 3, v___x_4441_);
lean_closure_set(v___f_4447_, 4, v___x_4445_);
switch(lean_obj_tag(v_decl_3786_))
{
case 2:
{
lean_object* v_val_4448_; lean_object* v___f_4449_; lean_object* v___x_4450_; 
lean_del_object(v___x_4361_);
v_val_4448_ = lean_ctor_get(v_decl_3786_, 0);
lean_inc_ref_n(v_val_4448_, 2);
lean_dec_ref_known(v_decl_3786_, 1);
v___f_4449_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__6___boxed), 7, 2);
lean_closure_set(v___f_4449_, 0, v_val_4448_);
lean_closure_set(v___f_4449_, 1, v___f_4447_);
v___x_4450_ = lean_st_ref_get(v_a_3789_);
if (v_forceExpose_3787_ == 0)
{
if (v___x_4364_ == 0)
{
lean_dec(v___x_4450_);
lean_dec_ref(v_val_4448_);
v___y_4351_ = v___x_4445_;
v___y_4352_ = v_a_4359_;
v___y_4353_ = v___x_4426_;
v___y_4354_ = v___f_4449_;
goto v___jp_4350_;
}
else
{
lean_object* v_env_4451_; lean_object* v___x_4452_; uint8_t v_isModule_4453_; 
v_env_4451_ = lean_ctor_get(v___x_4450_, 0);
lean_inc_ref(v_env_4451_);
lean_dec(v___x_4450_);
v___x_4452_ = l_Lean_Environment_header(v_env_4451_);
lean_dec_ref(v_env_4451_);
v_isModule_4453_ = lean_ctor_get_uint8(v___x_4452_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4452_);
if (v_isModule_4453_ == 0)
{
lean_dec_ref(v_val_4448_);
v___y_4351_ = v___x_4445_;
v___y_4352_ = v_a_4359_;
v___y_4353_ = v___x_4426_;
v___y_4354_ = v___f_4449_;
goto v___jp_4350_;
}
else
{
if (v___x_4209_ == 0)
{
lean_object* v___x_4454_; lean_object* v___x_4455_; 
v___x_4454_ = lean_box(0);
v___x_4455_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__13(v_val_4448_, v___f_4449_, v___x_4454_, v_a_3788_, v_a_3789_);
lean_dec_ref(v_val_4448_);
v___y_4324_ = v___x_4426_;
v___y_4325_ = v_a_4359_;
v___y_4326_ = v___x_4455_;
goto v___jp_4323_;
}
else
{
lean_object* v_toConstantVal_4456_; lean_object* v_name_4457_; lean_object* v___x_4458_; lean_object* v___x_4459_; lean_object* v___x_4460_; lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; 
v_toConstantVal_4456_ = lean_ctor_get(v_val_4448_, 0);
v_name_4457_ = lean_ctor_get(v_toConstantVal_4456_, 0);
v___x_4458_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__2);
lean_inc(v_name_4457_);
v___x_4459_ = l_Lean_MessageData_ofName(v_name_4457_);
v___x_4460_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4460_, 0, v___x_4458_);
lean_ctor_set(v___x_4460_, 1, v___x_4459_);
v___x_4461_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_4462_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4462_, 0, v___x_4460_);
lean_ctor_set(v___x_4462_, 1, v___x_4461_);
v___x_4463_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3982_, v___x_4462_, v_a_3788_, v_a_3789_);
if (lean_obj_tag(v___x_4463_) == 0)
{
lean_object* v_a_4464_; lean_object* v___x_4465_; 
v_a_4464_ = lean_ctor_get(v___x_4463_, 0);
lean_inc(v_a_4464_);
lean_dec_ref_known(v___x_4463_, 1);
v___x_4465_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__13(v_val_4448_, v___f_4449_, v_a_4464_, v_a_3788_, v_a_3789_);
lean_dec_ref(v_val_4448_);
v___y_4324_ = v___x_4426_;
v___y_4325_ = v_a_4359_;
v___y_4326_ = v___x_4465_;
goto v___jp_4323_;
}
else
{
lean_dec_ref(v___f_4449_);
lean_dec_ref(v_val_4448_);
v___y_4324_ = v___x_4426_;
v___y_4325_ = v_a_4359_;
v___y_4326_ = v___x_4463_;
goto v___jp_4323_;
}
}
}
}
}
else
{
lean_dec(v___x_4450_);
lean_dec_ref(v_val_4448_);
v___y_4351_ = v___x_4445_;
v___y_4352_ = v_a_4359_;
v___y_4353_ = v___x_4426_;
v___y_4354_ = v___f_4449_;
goto v___jp_4350_;
}
}
case 1:
{
lean_object* v_val_4466_; lean_object* v___x_4467_; 
lean_del_object(v___x_4361_);
v_val_4466_ = lean_ctor_get(v_decl_3786_, 0);
lean_inc_ref(v_val_4466_);
lean_dec_ref_known(v_decl_3786_, 1);
v___x_4467_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__11(v___f_4447_, v_forceExpose_3787_, v___x_4364_, v___x_4445_, v_cls_3982_, v_val_4466_, v_a_3788_, v_a_3789_);
v___y_4324_ = v___x_4426_;
v___y_4325_ = v_a_4359_;
v___y_4326_ = v___x_4467_;
goto v___jp_4323_;
}
case 5:
{
lean_object* v_defns_4468_; 
lean_del_object(v___x_4361_);
v_defns_4468_ = lean_ctor_get(v_decl_3786_, 0);
if (lean_obj_tag(v_defns_4468_) == 1)
{
lean_object* v_tail_4469_; 
v_tail_4469_ = lean_ctor_get(v_defns_4468_, 1);
if (lean_obj_tag(v_tail_4469_) == 0)
{
lean_object* v_head_4470_; lean_object* v___x_4471_; 
lean_inc_ref(v_defns_4468_);
lean_dec_ref_known(v_decl_3786_, 1);
v_head_4470_ = lean_ctor_get(v_defns_4468_, 0);
lean_inc(v_head_4470_);
lean_dec_ref_known(v_defns_4468_, 2);
v___x_4471_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__11(v___f_4447_, v_forceExpose_3787_, v___x_4364_, v___x_4445_, v_cls_3982_, v_head_4470_, v_a_3788_, v_a_3789_);
v___y_4324_ = v___x_4426_;
v___y_4325_ = v_a_4359_;
v___y_4326_ = v___x_4471_;
goto v___jp_4323_;
}
else
{
lean_object* v___x_4472_; 
lean_dec_ref(v___f_4447_);
lean_inc_ref(v_decl_3786_);
v___x_4472_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(v_decl_3786_, v_cls_3982_, v_decl_3786_, v_a_3788_, v_a_3789_);
lean_dec_ref_known(v_decl_3786_, 1);
v___y_4324_ = v___x_4426_;
v___y_4325_ = v_a_4359_;
v___y_4326_ = v___x_4472_;
goto v___jp_4323_;
}
}
else
{
lean_object* v___x_4473_; 
lean_dec_ref(v___f_4447_);
lean_inc_ref(v_decl_3786_);
v___x_4473_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(v_decl_3786_, v_cls_3982_, v_decl_3786_, v_a_3788_, v_a_3789_);
lean_dec_ref_known(v_decl_3786_, 1);
v___y_4324_ = v___x_4426_;
v___y_4325_ = v_a_4359_;
v___y_4326_ = v___x_4473_;
goto v___jp_4323_;
}
}
case 3:
{
lean_object* v_val_4474_; lean_object* v___f_4475_; lean_object* v___x_4476_; lean_object* v_env_4477_; lean_object* v___x_4478_; 
lean_del_object(v___x_4361_);
v_val_4474_ = lean_ctor_get(v_decl_3786_, 0);
lean_inc_ref_n(v_val_4474_, 2);
lean_dec_ref_known(v_decl_3786_, 1);
v___f_4475_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__8___boxed), 7, 2);
lean_closure_set(v___f_4475_, 0, v_val_4474_);
lean_closure_set(v___f_4475_, 1, v___f_4447_);
v___x_4476_ = lean_st_ref_get(v_a_3789_);
v_env_4477_ = lean_ctor_get(v___x_4476_, 0);
lean_inc_ref(v_env_4477_);
lean_dec(v___x_4476_);
v___x_4478_ = lean_st_ref_get(v_a_3789_);
if (v_forceExpose_3787_ == 0)
{
if (v___x_4364_ == 0)
{
lean_dec(v___x_4478_);
lean_dec_ref(v_env_4477_);
lean_dec_ref(v_val_4474_);
v___y_4344_ = v___x_4445_;
v___y_4345_ = v___f_4475_;
v___y_4346_ = v_a_4359_;
v___y_4347_ = v___x_4426_;
goto v___jp_4343_;
}
else
{
lean_object* v_env_4479_; lean_object* v___x_4480_; uint8_t v_isModule_4481_; 
v_env_4479_ = lean_ctor_get(v___x_4478_, 0);
lean_inc_ref(v_env_4479_);
lean_dec(v___x_4478_);
v___x_4480_ = l_Lean_Environment_header(v_env_4477_);
lean_dec_ref(v_env_4477_);
v_isModule_4481_ = lean_ctor_get_uint8(v___x_4480_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4480_);
if (v_isModule_4481_ == 0)
{
lean_dec_ref(v_env_4479_);
lean_dec_ref(v_val_4474_);
v___y_4344_ = v___x_4445_;
v___y_4345_ = v___f_4475_;
v___y_4346_ = v_a_4359_;
v___y_4347_ = v___x_4426_;
goto v___jp_4343_;
}
else
{
uint8_t v_isExporting_4482_; 
v_isExporting_4482_ = lean_ctor_get_uint8(v_env_4479_, sizeof(void*)*8);
lean_dec_ref(v_env_4479_);
if (v_isExporting_4482_ == 0)
{
if (v___x_4209_ == 0)
{
lean_object* v___x_4483_; lean_object* v___x_4484_; 
v___x_4483_ = lean_box(0);
v___x_4484_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10(v_val_4474_, v___f_4475_, v___x_4483_, v_a_3788_, v_a_3789_);
lean_dec_ref(v_val_4474_);
v___y_4324_ = v___x_4426_;
v___y_4325_ = v_a_4359_;
v___y_4326_ = v___x_4484_;
goto v___jp_4323_;
}
else
{
lean_object* v_toConstantVal_4485_; lean_object* v_name_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; 
v_toConstantVal_4485_ = lean_ctor_get(v_val_4474_, 0);
v_name_4486_ = lean_ctor_get(v_toConstantVal_4485_, 0);
v___x_4487_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__4);
lean_inc(v_name_4486_);
v___x_4488_ = l_Lean_MessageData_ofName(v_name_4486_);
v___x_4489_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4489_, 0, v___x_4487_);
lean_ctor_set(v___x_4489_, 1, v___x_4488_);
v___x_4490_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__5___closed__3);
v___x_4491_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4491_, 0, v___x_4489_);
lean_ctor_set(v___x_4491_, 1, v___x_4490_);
v___x_4492_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3982_, v___x_4491_, v_a_3788_, v_a_3789_);
if (lean_obj_tag(v___x_4492_) == 0)
{
lean_object* v_a_4493_; lean_object* v___x_4494_; 
v_a_4493_ = lean_ctor_get(v___x_4492_, 0);
lean_inc(v_a_4493_);
lean_dec_ref_known(v___x_4492_, 1);
v___x_4494_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__10(v_val_4474_, v___f_4475_, v_a_4493_, v_a_3788_, v_a_3789_);
lean_dec_ref(v_val_4474_);
v___y_4324_ = v___x_4426_;
v___y_4325_ = v_a_4359_;
v___y_4326_ = v___x_4494_;
goto v___jp_4323_;
}
else
{
lean_dec_ref(v___f_4475_);
lean_dec_ref(v_val_4474_);
v___y_4324_ = v___x_4426_;
v___y_4325_ = v_a_4359_;
v___y_4326_ = v___x_4492_;
goto v___jp_4323_;
}
}
}
else
{
lean_dec_ref(v_val_4474_);
v___y_4344_ = v___x_4445_;
v___y_4345_ = v___f_4475_;
v___y_4346_ = v_a_4359_;
v___y_4347_ = v___x_4426_;
goto v___jp_4343_;
}
}
}
}
else
{
lean_dec(v___x_4478_);
lean_dec_ref(v_env_4477_);
lean_dec_ref(v_val_4474_);
v___y_4344_ = v___x_4445_;
v___y_4345_ = v___f_4475_;
v___y_4346_ = v_a_4359_;
v___y_4347_ = v___x_4426_;
goto v___jp_4343_;
}
}
case 0:
{
lean_object* v_val_4495_; lean_object* v_toConstantVal_4496_; lean_object* v_name_4497_; lean_object* v___x_4499_; 
lean_dec_ref(v___f_4447_);
v_val_4495_ = lean_ctor_get(v_decl_3786_, 0);
v_toConstantVal_4496_ = lean_ctor_get(v_val_4495_, 0);
v_name_4497_ = lean_ctor_get(v_toConstantVal_4496_, 0);
lean_inc_ref(v_val_4495_);
if (v_isShared_4362_ == 0)
{
lean_ctor_set(v___x_4361_, 0, v_val_4495_);
v___x_4499_ = v___x_4361_;
goto v_reusejp_4498_;
}
else
{
lean_object* v_reuseFailAlloc_4505_; 
v_reuseFailAlloc_4505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4505_, 0, v_val_4495_);
v___x_4499_ = v_reuseFailAlloc_4505_;
goto v_reusejp_4498_;
}
v_reusejp_4498_:
{
uint8_t v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; 
v___x_4500_ = 2;
v___x_4501_ = lean_box(v___x_4500_);
v___x_4502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4502_, 0, v___x_4499_);
lean_ctor_set(v___x_4502_, 1, v___x_4501_);
lean_inc(v_name_4497_);
v___x_4503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4503_, 0, v_name_4497_);
lean_ctor_set(v___x_4503_, 1, v___x_4502_);
v___x_4504_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__14(v_decl_3786_, v___x_4364_, v_cls_3982_, v___x_4441_, v___x_4445_, v___x_4503_, v___x_4445_, v_a_3788_, v_a_3789_);
v___y_4324_ = v___x_4426_;
v___y_4325_ = v_a_4359_;
v___y_4326_ = v___x_4504_;
goto v___jp_4323_;
}
}
default: 
{
lean_object* v___x_4506_; 
lean_dec_ref(v___f_4447_);
lean_del_object(v___x_4361_);
lean_inc(v_decl_3786_);
v___x_4506_ = l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4(v_decl_3786_, v_cls_3982_, v_decl_3786_, v_a_3788_, v_a_3789_);
lean_dec(v_decl_3786_);
v___y_4324_ = v___x_4426_;
v___y_4325_ = v_a_4359_;
v___y_4326_ = v___x_4506_;
goto v___jp_4323_;
}
}
}
}
}
}
}
}
v___jp_3791_:
{
lean_object* v___x_3795_; lean_object* v___x_3797_; uint8_t v_isShared_3798_; uint8_t v_isSharedCheck_3802_; 
v___x_3795_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3792_, v___y_3793_);
v_isSharedCheck_3802_ = !lean_is_exclusive(v___x_3795_);
if (v_isSharedCheck_3802_ == 0)
{
lean_object* v_unused_3803_; 
v_unused_3803_ = lean_ctor_get(v___x_3795_, 0);
lean_dec(v_unused_3803_);
v___x_3797_ = v___x_3795_;
v_isShared_3798_ = v_isSharedCheck_3802_;
goto v_resetjp_3796_;
}
else
{
lean_dec(v___x_3795_);
v___x_3797_ = lean_box(0);
v_isShared_3798_ = v_isSharedCheck_3802_;
goto v_resetjp_3796_;
}
v_resetjp_3796_:
{
lean_object* v___x_3800_; 
if (v_isShared_3798_ == 0)
{
lean_ctor_set(v___x_3797_, 0, v_a_3794_);
v___x_3800_ = v___x_3797_;
goto v_reusejp_3799_;
}
else
{
lean_object* v_reuseFailAlloc_3801_; 
v_reuseFailAlloc_3801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3801_, 0, v_a_3794_);
v___x_3800_ = v_reuseFailAlloc_3801_;
goto v_reusejp_3799_;
}
v_reusejp_3799_:
{
return v___x_3800_;
}
}
}
v___jp_3804_:
{
lean_object* v___x_3808_; lean_object* v___x_3810_; uint8_t v_isShared_3811_; uint8_t v_isSharedCheck_3815_; 
v___x_3808_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3805_, v___y_3806_);
v_isSharedCheck_3815_ = !lean_is_exclusive(v___x_3808_);
if (v_isSharedCheck_3815_ == 0)
{
lean_object* v_unused_3816_; 
v_unused_3816_ = lean_ctor_get(v___x_3808_, 0);
lean_dec(v_unused_3816_);
v___x_3810_ = v___x_3808_;
v_isShared_3811_ = v_isSharedCheck_3815_;
goto v_resetjp_3809_;
}
else
{
lean_dec(v___x_3808_);
v___x_3810_ = lean_box(0);
v_isShared_3811_ = v_isSharedCheck_3815_;
goto v_resetjp_3809_;
}
v_resetjp_3809_:
{
lean_object* v___x_3813_; 
if (v_isShared_3811_ == 0)
{
lean_ctor_set_tag(v___x_3810_, 1);
lean_ctor_set(v___x_3810_, 0, v_a_3807_);
v___x_3813_ = v___x_3810_;
goto v_reusejp_3812_;
}
else
{
lean_object* v_reuseFailAlloc_3814_; 
v_reuseFailAlloc_3814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3814_, 0, v_a_3807_);
v___x_3813_ = v_reuseFailAlloc_3814_;
goto v_reusejp_3812_;
}
v_reusejp_3812_:
{
return v___x_3813_;
}
}
}
v___jp_3817_:
{
lean_object* v___x_3821_; lean_object* v___x_3823_; uint8_t v_isShared_3824_; uint8_t v_isSharedCheck_3828_; 
v___x_3821_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3819_, v___y_3818_);
v_isSharedCheck_3828_ = !lean_is_exclusive(v___x_3821_);
if (v_isSharedCheck_3828_ == 0)
{
lean_object* v_unused_3829_; 
v_unused_3829_ = lean_ctor_get(v___x_3821_, 0);
lean_dec(v_unused_3829_);
v___x_3823_ = v___x_3821_;
v_isShared_3824_ = v_isSharedCheck_3828_;
goto v_resetjp_3822_;
}
else
{
lean_dec(v___x_3821_);
v___x_3823_ = lean_box(0);
v_isShared_3824_ = v_isSharedCheck_3828_;
goto v_resetjp_3822_;
}
v_resetjp_3822_:
{
lean_object* v___x_3826_; 
if (v_isShared_3824_ == 0)
{
lean_ctor_set(v___x_3823_, 0, v_a_3820_);
v___x_3826_ = v___x_3823_;
goto v_reusejp_3825_;
}
else
{
lean_object* v_reuseFailAlloc_3827_; 
v_reuseFailAlloc_3827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3827_, 0, v_a_3820_);
v___x_3826_ = v_reuseFailAlloc_3827_;
goto v_reusejp_3825_;
}
v_reusejp_3825_:
{
return v___x_3826_;
}
}
}
v___jp_3830_:
{
lean_object* v___x_3834_; lean_object* v___x_3836_; uint8_t v_isShared_3837_; uint8_t v_isSharedCheck_3841_; 
v___x_3834_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3832_, v___y_3831_);
v_isSharedCheck_3841_ = !lean_is_exclusive(v___x_3834_);
if (v_isSharedCheck_3841_ == 0)
{
lean_object* v_unused_3842_; 
v_unused_3842_ = lean_ctor_get(v___x_3834_, 0);
lean_dec(v_unused_3842_);
v___x_3836_ = v___x_3834_;
v_isShared_3837_ = v_isSharedCheck_3841_;
goto v_resetjp_3835_;
}
else
{
lean_dec(v___x_3834_);
v___x_3836_ = lean_box(0);
v_isShared_3837_ = v_isSharedCheck_3841_;
goto v_resetjp_3835_;
}
v_resetjp_3835_:
{
lean_object* v___x_3839_; 
if (v_isShared_3837_ == 0)
{
lean_ctor_set_tag(v___x_3836_, 1);
lean_ctor_set(v___x_3836_, 0, v_a_3833_);
v___x_3839_ = v___x_3836_;
goto v_reusejp_3838_;
}
else
{
lean_object* v_reuseFailAlloc_3840_; 
v_reuseFailAlloc_3840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3840_, 0, v_a_3833_);
v___x_3839_ = v_reuseFailAlloc_3840_;
goto v_reusejp_3838_;
}
v_reusejp_3838_:
{
return v___x_3839_;
}
}
}
v___jp_3847_:
{
lean_object* v___x_3861_; 
lean_inc_ref(v___y_3858_);
v___x_3861_ = l_Lean_Environment_AddConstAsyncResult_commitConst(v___y_3857_, v___y_3858_, v___y_3859_, v___y_3860_);
if (lean_obj_tag(v___x_3861_) == 0)
{
lean_object* v___x_3862_; lean_object* v___x_3864_; uint8_t v_isShared_3865_; uint8_t v_isSharedCheck_3908_; 
lean_dec_ref_known(v___x_3861_, 1);
lean_dec(v___y_3848_);
lean_inc_ref(v___y_3851_);
v___x_3862_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3851_, v___y_3850_);
v_isSharedCheck_3908_ = !lean_is_exclusive(v___x_3862_);
if (v_isSharedCheck_3908_ == 0)
{
lean_object* v_unused_3909_; 
v_unused_3909_ = lean_ctor_get(v___x_3862_, 0);
lean_dec(v_unused_3909_);
v___x_3864_ = v___x_3862_;
v_isShared_3865_ = v_isSharedCheck_3908_;
goto v_resetjp_3863_;
}
else
{
lean_dec(v___x_3862_);
v___x_3864_ = lean_box(0);
v_isShared_3865_ = v_isSharedCheck_3908_;
goto v_resetjp_3863_;
}
v_resetjp_3863_:
{
lean_object* v_options_3866_; lean_object* v___x_3867_; uint8_t v___x_3868_; 
v_options_3866_ = lean_ctor_get(v___y_3852_, 2);
v___x_3867_ = l_Lean_Elab_async;
v___x_3868_ = l_Lean_Option_get___at___00Lean_Kernel_Environment_addDecl_spec__0(v_options_3866_, v___x_3867_);
if (v___x_3868_ == 0)
{
lean_object* v___x_3869_; lean_object* v_r_3870_; 
lean_del_object(v___x_3864_);
lean_dec_ref(v___y_3856_);
lean_dec_ref(v___y_3849_);
v___x_3869_ = l_Lean_setEnv___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_addAsAxiom_spec__1___redArg(v___y_3858_, v___y_3850_);
lean_dec_ref(v___x_3869_);
v_r_3870_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_3786_, v___y_3853_, v___y_3850_);
if (lean_obj_tag(v_r_3870_) == 0)
{
lean_object* v_a_3871_; lean_object* v___x_3873_; uint8_t v_isShared_3874_; uint8_t v_isSharedCheck_3880_; 
v_a_3871_ = lean_ctor_get(v_r_3870_, 0);
v_isSharedCheck_3880_ = !lean_is_exclusive(v_r_3870_);
if (v_isSharedCheck_3880_ == 0)
{
v___x_3873_ = v_r_3870_;
v_isShared_3874_ = v_isSharedCheck_3880_;
goto v_resetjp_3872_;
}
else
{
lean_inc(v_a_3871_);
lean_dec(v_r_3870_);
v___x_3873_ = lean_box(0);
v_isShared_3874_ = v_isSharedCheck_3880_;
goto v_resetjp_3872_;
}
v_resetjp_3872_:
{
lean_object* v___x_3876_; 
lean_inc(v_a_3871_);
if (v_isShared_3874_ == 0)
{
lean_ctor_set_tag(v___x_3873_, 1);
v___x_3876_ = v___x_3873_;
goto v_reusejp_3875_;
}
else
{
lean_object* v_reuseFailAlloc_3879_; 
v_reuseFailAlloc_3879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3879_, 0, v_a_3871_);
v___x_3876_ = v_reuseFailAlloc_3879_;
goto v_reusejp_3875_;
}
v_reusejp_3875_:
{
lean_object* v___x_3877_; 
v___x_3877_ = lean_apply_2(v___y_3855_, v___x_3876_, lean_box(0));
if (lean_obj_tag(v___x_3877_) == 0)
{
lean_dec_ref_known(v___x_3877_, 1);
v___y_3818_ = v___y_3850_;
v___y_3819_ = v___y_3851_;
v_a_3820_ = v_a_3871_;
goto v___jp_3817_;
}
else
{
lean_object* v_a_3878_; 
lean_dec(v_a_3871_);
v_a_3878_ = lean_ctor_get(v___x_3877_, 0);
lean_inc(v_a_3878_);
lean_dec_ref_known(v___x_3877_, 1);
v___y_3831_ = v___y_3850_;
v___y_3832_ = v___y_3851_;
v_a_3833_ = v_a_3878_;
goto v___jp_3830_;
}
}
}
}
else
{
lean_object* v_a_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; 
v_a_3881_ = lean_ctor_get(v_r_3870_, 0);
lean_inc(v_a_3881_);
lean_dec_ref_known(v_r_3870_, 1);
v___x_3882_ = lean_box(0);
v___x_3883_ = lean_apply_2(v___y_3855_, v___x_3882_, lean_box(0));
if (lean_obj_tag(v___x_3883_) == 0)
{
lean_dec_ref_known(v___x_3883_, 1);
v___y_3831_ = v___y_3850_;
v___y_3832_ = v___y_3851_;
v_a_3833_ = v_a_3881_;
goto v___jp_3830_;
}
else
{
lean_object* v_a_3884_; 
lean_dec(v_a_3881_);
v_a_3884_ = lean_ctor_get(v___x_3883_, 0);
lean_inc(v_a_3884_);
lean_dec_ref_known(v___x_3883_, 1);
v___y_3831_ = v___y_3850_;
v___y_3832_ = v___y_3851_;
v_a_3833_ = v_a_3884_;
goto v___jp_3830_;
}
}
}
else
{
lean_object* v___x_3885_; lean_object* v___x_3887_; 
lean_dec_ref(v___y_3858_);
lean_dec_ref(v___y_3855_);
lean_dec_ref(v___y_3851_);
lean_dec(v_decl_3786_);
v___x_3885_ = l_IO_CancelToken_new();
if (v_isShared_3865_ == 0)
{
lean_ctor_set_tag(v___x_3864_, 1);
lean_ctor_set(v___x_3864_, 0, v___x_3885_);
v___x_3887_ = v___x_3864_;
goto v_reusejp_3886_;
}
else
{
lean_object* v_reuseFailAlloc_3907_; 
v_reuseFailAlloc_3907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3907_, 0, v___x_3885_);
v___x_3887_ = v_reuseFailAlloc_3907_;
goto v_reusejp_3886_;
}
v_reusejp_3886_:
{
lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; 
v___x_3888_ = lean_unsigned_to_nat(0u);
v___x_3889_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__9___closed__1);
v___x_3890_ = l_Lean_Name_toString(v___x_3889_, v___y_3854_);
lean_inc_ref(v___x_3887_);
v___x_3891_ = l_Lean_Core_wrapAsyncAsSnapshot___redArg(v___y_3849_, v___x_3887_, v___x_3890_, v___y_3853_, v___y_3850_);
if (lean_obj_tag(v___x_3891_) == 0)
{
lean_object* v_a_3892_; lean_object* v_checked_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; 
v_a_3892_ = lean_ctor_get(v___x_3891_, 0);
lean_inc(v_a_3892_);
lean_dec_ref_known(v___x_3891_, 1);
v_checked_3893_ = lean_ctor_get(v___y_3856_, 2);
lean_inc_ref(v_checked_3893_);
lean_dec_ref(v___y_3856_);
v___x_3894_ = lean_io_map_task(v_a_3892_, v_checked_3893_, v___x_3888_, v_hasTrace_3846_);
v___x_3895_ = lean_box(0);
v___x_3896_ = lean_box(2);
v___x_3897_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3897_, 0, v___x_3895_);
lean_ctor_set(v___x_3897_, 1, v___x_3896_);
lean_ctor_set(v___x_3897_, 2, v___x_3887_);
lean_ctor_set(v___x_3897_, 3, v___x_3894_);
v___x_3898_ = l_Lean_Core_logSnapshotTask___redArg(v___x_3897_, v___y_3850_);
return v___x_3898_;
}
else
{
lean_object* v_a_3899_; lean_object* v___x_3901_; uint8_t v_isShared_3902_; uint8_t v_isSharedCheck_3906_; 
lean_dec_ref(v___x_3887_);
lean_dec_ref(v___y_3856_);
v_a_3899_ = lean_ctor_get(v___x_3891_, 0);
v_isSharedCheck_3906_ = !lean_is_exclusive(v___x_3891_);
if (v_isSharedCheck_3906_ == 0)
{
v___x_3901_ = v___x_3891_;
v_isShared_3902_ = v_isSharedCheck_3906_;
goto v_resetjp_3900_;
}
else
{
lean_inc(v_a_3899_);
lean_dec(v___x_3891_);
v___x_3901_ = lean_box(0);
v_isShared_3902_ = v_isSharedCheck_3906_;
goto v_resetjp_3900_;
}
v_resetjp_3900_:
{
lean_object* v___x_3904_; 
if (v_isShared_3902_ == 0)
{
v___x_3904_ = v___x_3901_;
goto v_reusejp_3903_;
}
else
{
lean_object* v_reuseFailAlloc_3905_; 
v_reuseFailAlloc_3905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3905_, 0, v_a_3899_);
v___x_3904_ = v_reuseFailAlloc_3905_;
goto v_reusejp_3903_;
}
v_reusejp_3903_:
{
return v___x_3904_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3910_; lean_object* v___x_3912_; uint8_t v_isShared_3913_; uint8_t v_isSharedCheck_3921_; 
lean_dec_ref(v___y_3858_);
lean_dec_ref(v___y_3856_);
lean_dec_ref(v___y_3855_);
lean_dec_ref(v___y_3851_);
lean_dec_ref(v___y_3849_);
lean_dec(v_decl_3786_);
v_a_3910_ = lean_ctor_get(v___x_3861_, 0);
v_isSharedCheck_3921_ = !lean_is_exclusive(v___x_3861_);
if (v_isSharedCheck_3921_ == 0)
{
v___x_3912_ = v___x_3861_;
v_isShared_3913_ = v_isSharedCheck_3921_;
goto v_resetjp_3911_;
}
else
{
lean_inc(v_a_3910_);
lean_dec(v___x_3861_);
v___x_3912_ = lean_box(0);
v_isShared_3913_ = v_isSharedCheck_3921_;
goto v_resetjp_3911_;
}
v_resetjp_3911_:
{
lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3919_; 
v___x_3914_ = lean_io_error_to_string(v_a_3910_);
v___x_3915_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3915_, 0, v___x_3914_);
v___x_3916_ = l_Lean_MessageData_ofFormat(v___x_3915_);
v___x_3917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3917_, 0, v___y_3848_);
lean_ctor_set(v___x_3917_, 1, v___x_3916_);
if (v_isShared_3913_ == 0)
{
lean_ctor_set(v___x_3912_, 0, v___x_3917_);
v___x_3919_ = v___x_3912_;
goto v_reusejp_3918_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v___x_3917_);
v___x_3919_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3918_;
}
v_reusejp_3918_:
{
return v___x_3919_;
}
}
}
}
v___jp_3922_:
{
lean_object* v_toCold_3931_; lean_object* v_ref_3932_; uint8_t v___x_3933_; lean_object* v___x_3934_; 
v_toCold_3931_ = lean_ctor_get(v___y_3923_, 0);
v_ref_3932_ = lean_ctor_get(v___y_3923_, 2);
v___x_3933_ = 1;
lean_inc_ref(v___y_3929_);
v___x_3934_ = l_Lean_Environment_addConstAsync(v___y_3929_, v___y_3927_, v___y_3924_, v___y_3930_, v_hasTrace_3846_, v___x_3933_);
if (lean_obj_tag(v___x_3934_) == 0)
{
lean_object* v_a_3935_; lean_object* v_mainEnv_3936_; lean_object* v_asyncEnv_3937_; lean_object* v___f_3938_; lean_object* v___f_3939_; lean_object* v___x_3940_; 
v_a_3935_ = lean_ctor_get(v___x_3934_, 0);
lean_inc_n(v_a_3935_, 3);
lean_dec_ref_known(v___x_3934_, 1);
v_mainEnv_3936_ = lean_ctor_get(v_a_3935_, 0);
lean_inc_ref(v_mainEnv_3936_);
v_asyncEnv_3937_ = lean_ctor_get(v_a_3935_, 1);
lean_inc_ref_n(v_asyncEnv_3937_, 2);
lean_inc(v_ref_3932_);
lean_inc(v___y_3926_);
v___f_3938_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3938_, 0, v___y_3926_);
lean_closure_set(v___f_3938_, 1, v_a_3935_);
lean_closure_set(v___f_3938_, 2, v_ref_3932_);
lean_inc(v_decl_3786_);
v___f_3939_ = lean_alloc_closure((void*)(l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__2___boxed), 7, 3);
lean_closure_set(v___f_3939_, 0, v_a_3935_);
lean_closure_set(v___f_3939_, 1, v_asyncEnv_3937_);
lean_closure_set(v___f_3939_, 2, v_decl_3786_);
v___x_3940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3940_, 0, v___y_3925_);
if (lean_obj_tag(v___y_3928_) == 0)
{
lean_inc_ref(v___x_3940_);
lean_inc(v_ref_3932_);
v___y_3848_ = v_ref_3932_;
v___y_3849_ = v___f_3939_;
v___y_3850_ = v___y_3926_;
v___y_3851_ = v_mainEnv_3936_;
v___y_3852_ = v_toCold_3931_;
v___y_3853_ = v___y_3923_;
v___y_3854_ = v___x_3933_;
v___y_3855_ = v___f_3938_;
v___y_3856_ = v___y_3929_;
v___y_3857_ = v_a_3935_;
v___y_3858_ = v_asyncEnv_3937_;
v___y_3859_ = v___x_3940_;
v___y_3860_ = v___x_3940_;
goto v___jp_3847_;
}
else
{
lean_inc(v_ref_3932_);
v___y_3848_ = v_ref_3932_;
v___y_3849_ = v___f_3939_;
v___y_3850_ = v___y_3926_;
v___y_3851_ = v_mainEnv_3936_;
v___y_3852_ = v_toCold_3931_;
v___y_3853_ = v___y_3923_;
v___y_3854_ = v___x_3933_;
v___y_3855_ = v___f_3938_;
v___y_3856_ = v___y_3929_;
v___y_3857_ = v_a_3935_;
v___y_3858_ = v_asyncEnv_3937_;
v___y_3859_ = v___x_3940_;
v___y_3860_ = v___y_3928_;
goto v___jp_3847_;
}
}
else
{
lean_object* v_a_3941_; lean_object* v___x_3943_; uint8_t v_isShared_3944_; uint8_t v_isSharedCheck_3952_; 
lean_dec_ref(v___y_3929_);
lean_dec(v___y_3928_);
lean_dec_ref(v___y_3925_);
lean_dec(v_decl_3786_);
v_a_3941_ = lean_ctor_get(v___x_3934_, 0);
v_isSharedCheck_3952_ = !lean_is_exclusive(v___x_3934_);
if (v_isSharedCheck_3952_ == 0)
{
v___x_3943_ = v___x_3934_;
v_isShared_3944_ = v_isSharedCheck_3952_;
goto v_resetjp_3942_;
}
else
{
lean_inc(v_a_3941_);
lean_dec(v___x_3934_);
v___x_3943_ = lean_box(0);
v_isShared_3944_ = v_isSharedCheck_3952_;
goto v_resetjp_3942_;
}
v_resetjp_3942_:
{
lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3950_; 
v___x_3945_ = lean_io_error_to_string(v_a_3941_);
v___x_3946_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3946_, 0, v___x_3945_);
v___x_3947_ = l_Lean_MessageData_ofFormat(v___x_3946_);
lean_inc(v_ref_3932_);
v___x_3948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3948_, 0, v_ref_3932_);
lean_ctor_set(v___x_3948_, 1, v___x_3947_);
if (v_isShared_3944_ == 0)
{
lean_ctor_set(v___x_3943_, 0, v___x_3948_);
v___x_3950_ = v___x_3943_;
goto v_reusejp_3949_;
}
else
{
lean_object* v_reuseFailAlloc_3951_; 
v_reuseFailAlloc_3951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3951_, 0, v___x_3948_);
v___x_3950_ = v_reuseFailAlloc_3951_;
goto v_reusejp_3949_;
}
v_reusejp_3949_:
{
return v___x_3950_;
}
}
}
}
v___jp_3953_:
{
lean_object* v___x_3960_; 
v___x_3960_ = lean_st_ref_get(v___y_3959_);
if (lean_obj_tag(v_exportedInfo_x3f_3957_) == 0)
{
lean_object* v_env_3961_; lean_object* v___x_3962_; 
v_env_3961_ = lean_ctor_get(v___x_3960_, 0);
lean_inc_ref(v_env_3961_);
lean_dec(v___x_3960_);
v___x_3962_ = lean_box(0);
v___y_3923_ = v___y_3958_;
v___y_3924_ = v___y_3954_;
v___y_3925_ = v___y_3955_;
v___y_3926_ = v___y_3959_;
v___y_3927_ = v___y_3956_;
v___y_3928_ = v_exportedInfo_x3f_3957_;
v___y_3929_ = v_env_3961_;
v___y_3930_ = v___x_3962_;
goto v___jp_3922_;
}
else
{
lean_object* v_env_3963_; lean_object* v_val_3964_; uint8_t v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; 
v_env_3963_ = lean_ctor_get(v___x_3960_, 0);
lean_inc_ref(v_env_3963_);
lean_dec(v___x_3960_);
v_val_3964_ = lean_ctor_get(v_exportedInfo_x3f_3957_, 0);
v___x_3965_ = l_Lean_ConstantKind_ofConstantInfo(v_val_3964_);
v___x_3966_ = lean_box(v___x_3965_);
v___x_3967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3967_, 0, v___x_3966_);
v___y_3923_ = v___y_3958_;
v___y_3924_ = v___y_3954_;
v___y_3925_ = v___y_3955_;
v___y_3926_ = v___y_3959_;
v___y_3927_ = v___y_3956_;
v___y_3928_ = v_exportedInfo_x3f_3957_;
v___y_3929_ = v_env_3963_;
v___y_3930_ = v___x_3967_;
goto v___jp_3922_;
}
}
v___jp_3968_:
{
lean_object* v___x_3974_; 
lean_inc_ref(v___y_3970_);
v___x_3974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3974_, 0, v___y_3970_);
v___y_3954_ = v___y_3969_;
v___y_3955_ = v___y_3970_;
v___y_3956_ = v___y_3971_;
v_exportedInfo_x3f_3957_ = v___x_3974_;
v___y_3958_ = v___y_3972_;
v___y_3959_ = v___y_3973_;
goto v___jp_3953_;
}
v___jp_3975_:
{
lean_object* v___x_3981_; 
lean_inc_ref(v___y_3977_);
v___x_3981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3981_, 0, v___y_3977_);
v___y_3954_ = v___y_3976_;
v___y_3955_ = v___y_3977_;
v___y_3956_ = v___y_3978_;
v_exportedInfo_x3f_3957_ = v___x_3981_;
v___y_3958_ = v___y_3979_;
v___y_3959_ = v___y_3980_;
goto v___jp_3953_;
}
v___jp_3983_:
{
lean_object* v___x_3988_; uint8_t v___x_3989_; 
v___x_3988_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0, &l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___closed__0);
v___x_3989_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3986_, v_options_3985_, v___x_3988_);
if (v___x_3989_ == 0)
{
lean_object* v___x_3990_; 
v___x_3990_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_3786_, v___y_3984_, v___y_3987_);
return v___x_3990_;
}
else
{
lean_object* v___x_3991_; lean_object* v___x_3992_; 
v___x_3991_ = lean_obj_once(&l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1, &l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1_once, _init_l___private_Lean_AddDecl_0__Lean_addDeclCore___lam__4___closed__1);
v___x_3992_ = l_Lean_addTrace___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__0(v_cls_3982_, v___x_3991_, v___y_3984_, v___y_3987_);
if (lean_obj_tag(v___x_3992_) == 0)
{
lean_object* v___x_3993_; 
lean_dec_ref_known(v___x_3992_, 1);
v___x_3993_ = l___private_Lean_AddDecl_0__Lean_addDeclCore_doAdd(v_decl_3786_, v___y_3984_, v___y_3987_);
return v___x_3993_;
}
else
{
lean_dec(v_decl_3786_);
return v___x_3992_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_AddDecl_0__Lean_addDeclCore___boxed(lean_object* v_decl_4888_, lean_object* v_forceExpose_4889_, lean_object* v_a_4890_, lean_object* v_a_4891_, lean_object* v_a_4892_){
_start:
{
uint8_t v_forceExpose_boxed_4893_; lean_object* v_res_4894_; 
v_forceExpose_boxed_4893_ = lean_unbox(v_forceExpose_4889_);
v_res_4894_ = l___private_Lean_AddDecl_0__Lean_addDeclCore(v_decl_4888_, v_forceExpose_boxed_4893_, v_a_4890_, v_a_4891_);
lean_dec(v_a_4891_);
lean_dec_ref(v_a_4890_);
return v_res_4894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3(lean_object* v_opt_4895_, lean_object* v___y_4896_, lean_object* v___y_4897_){
_start:
{
lean_object* v___x_4899_; 
v___x_4899_ = l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___redArg(v_opt_4895_, v___y_4896_);
return v___x_4899_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3___boxed(lean_object* v_opt_4900_, lean_object* v___y_4901_, lean_object* v___y_4902_, lean_object* v___y_4903_){
_start:
{
lean_object* v_res_4904_; 
v_res_4904_ = l_Lean_Option_getM___at___00__private_Lean_AddDecl_0__Lean_addDeclCore_spec__3(v_opt_4900_, v___y_4901_, v___y_4902_);
lean_dec(v___y_4902_);
lean_dec_ref(v___y_4901_);
lean_dec_ref(v_opt_4900_);
return v_res_4904_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_addDecl_spec__0(lean_object* v_x_4905_, lean_object* v_x_4906_, lean_object* v___y_4907_, lean_object* v___y_4908_){
_start:
{
if (lean_obj_tag(v_x_4905_) == 0)
{
lean_object* v___x_4910_; lean_object* v___x_4911_; 
v___x_4910_ = l_List_reverse___redArg(v_x_4906_);
v___x_4911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4911_, 0, v___x_4910_);
return v___x_4911_;
}
else
{
lean_object* v_head_4912_; lean_object* v_tail_4913_; lean_object* v___x_4915_; uint8_t v_isShared_4916_; uint8_t v_isSharedCheck_4931_; 
v_head_4912_ = lean_ctor_get(v_x_4905_, 0);
v_tail_4913_ = lean_ctor_get(v_x_4905_, 1);
v_isSharedCheck_4931_ = !lean_is_exclusive(v_x_4905_);
if (v_isSharedCheck_4931_ == 0)
{
v___x_4915_ = v_x_4905_;
v_isShared_4916_ = v_isSharedCheck_4931_;
goto v_resetjp_4914_;
}
else
{
lean_inc(v_tail_4913_);
lean_inc(v_head_4912_);
lean_dec(v_x_4905_);
v___x_4915_ = lean_box(0);
v_isShared_4916_ = v_isSharedCheck_4931_;
goto v_resetjp_4914_;
}
v_resetjp_4914_:
{
lean_object* v___x_4917_; 
v___x_4917_ = l_Lean_snapshotEnvLinterOptions(v_head_4912_, v___y_4907_, v___y_4908_);
if (lean_obj_tag(v___x_4917_) == 0)
{
lean_object* v_a_4918_; lean_object* v___x_4920_; 
v_a_4918_ = lean_ctor_get(v___x_4917_, 0);
lean_inc(v_a_4918_);
lean_dec_ref_known(v___x_4917_, 1);
if (v_isShared_4916_ == 0)
{
lean_ctor_set(v___x_4915_, 1, v_x_4906_);
lean_ctor_set(v___x_4915_, 0, v_a_4918_);
v___x_4920_ = v___x_4915_;
goto v_reusejp_4919_;
}
else
{
lean_object* v_reuseFailAlloc_4922_; 
v_reuseFailAlloc_4922_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4922_, 0, v_a_4918_);
lean_ctor_set(v_reuseFailAlloc_4922_, 1, v_x_4906_);
v___x_4920_ = v_reuseFailAlloc_4922_;
goto v_reusejp_4919_;
}
v_reusejp_4919_:
{
v_x_4905_ = v_tail_4913_;
v_x_4906_ = v___x_4920_;
goto _start;
}
}
else
{
lean_object* v_a_4923_; lean_object* v___x_4925_; uint8_t v_isShared_4926_; uint8_t v_isSharedCheck_4930_; 
lean_del_object(v___x_4915_);
lean_dec(v_tail_4913_);
lean_dec(v_x_4906_);
v_a_4923_ = lean_ctor_get(v___x_4917_, 0);
v_isSharedCheck_4930_ = !lean_is_exclusive(v___x_4917_);
if (v_isSharedCheck_4930_ == 0)
{
v___x_4925_ = v___x_4917_;
v_isShared_4926_ = v_isSharedCheck_4930_;
goto v_resetjp_4924_;
}
else
{
lean_inc(v_a_4923_);
lean_dec(v___x_4917_);
v___x_4925_ = lean_box(0);
v_isShared_4926_ = v_isSharedCheck_4930_;
goto v_resetjp_4924_;
}
v_resetjp_4924_:
{
lean_object* v___x_4928_; 
if (v_isShared_4926_ == 0)
{
v___x_4928_ = v___x_4925_;
goto v_reusejp_4927_;
}
else
{
lean_object* v_reuseFailAlloc_4929_; 
v_reuseFailAlloc_4929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4929_, 0, v_a_4923_);
v___x_4928_ = v_reuseFailAlloc_4929_;
goto v_reusejp_4927_;
}
v_reusejp_4927_:
{
return v___x_4928_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_addDecl_spec__0___boxed(lean_object* v_x_4932_, lean_object* v_x_4933_, lean_object* v___y_4934_, lean_object* v___y_4935_, lean_object* v___y_4936_){
_start:
{
lean_object* v_res_4937_; 
v_res_4937_ = l_List_mapM_loop___at___00Lean_addDecl_spec__0(v_x_4932_, v_x_4933_, v___y_4934_, v___y_4935_);
lean_dec(v___y_4935_);
lean_dec_ref(v___y_4934_);
return v_res_4937_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDecl(lean_object* v_decl_4938_, uint8_t v_forceExpose_4939_, lean_object* v_a_4940_, lean_object* v_a_4941_){
_start:
{
lean_object* v___x_4943_; 
lean_inc(v_decl_4938_);
v___x_4943_ = l___private_Lean_AddDecl_0__Lean_addDeclCore(v_decl_4938_, v_forceExpose_4939_, v_a_4940_, v_a_4941_);
if (lean_obj_tag(v___x_4943_) == 0)
{
lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; 
lean_dec_ref_known(v___x_4943_, 1);
v___x_4944_ = l_Lean_Declaration_getTopLevelNames(v_decl_4938_);
v___x_4945_ = lean_box(0);
v___x_4946_ = lean_box(0);
v___x_4947_ = l_List_mapM_loop___at___00Lean_addDecl_spec__0(v___x_4944_, v___x_4945_, v_a_4940_, v_a_4941_);
if (lean_obj_tag(v___x_4947_) == 0)
{
lean_object* v___x_4949_; uint8_t v_isShared_4950_; uint8_t v_isSharedCheck_4954_; 
v_isSharedCheck_4954_ = !lean_is_exclusive(v___x_4947_);
if (v_isSharedCheck_4954_ == 0)
{
lean_object* v_unused_4955_; 
v_unused_4955_ = lean_ctor_get(v___x_4947_, 0);
lean_dec(v_unused_4955_);
v___x_4949_ = v___x_4947_;
v_isShared_4950_ = v_isSharedCheck_4954_;
goto v_resetjp_4948_;
}
else
{
lean_dec(v___x_4947_);
v___x_4949_ = lean_box(0);
v_isShared_4950_ = v_isSharedCheck_4954_;
goto v_resetjp_4948_;
}
v_resetjp_4948_:
{
lean_object* v___x_4952_; 
if (v_isShared_4950_ == 0)
{
lean_ctor_set(v___x_4949_, 0, v___x_4946_);
v___x_4952_ = v___x_4949_;
goto v_reusejp_4951_;
}
else
{
lean_object* v_reuseFailAlloc_4953_; 
v_reuseFailAlloc_4953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4953_, 0, v___x_4946_);
v___x_4952_ = v_reuseFailAlloc_4953_;
goto v_reusejp_4951_;
}
v_reusejp_4951_:
{
return v___x_4952_;
}
}
}
else
{
lean_object* v_a_4956_; lean_object* v___x_4958_; uint8_t v_isShared_4959_; uint8_t v_isSharedCheck_4963_; 
v_a_4956_ = lean_ctor_get(v___x_4947_, 0);
v_isSharedCheck_4963_ = !lean_is_exclusive(v___x_4947_);
if (v_isSharedCheck_4963_ == 0)
{
v___x_4958_ = v___x_4947_;
v_isShared_4959_ = v_isSharedCheck_4963_;
goto v_resetjp_4957_;
}
else
{
lean_inc(v_a_4956_);
lean_dec(v___x_4947_);
v___x_4958_ = lean_box(0);
v_isShared_4959_ = v_isSharedCheck_4963_;
goto v_resetjp_4957_;
}
v_resetjp_4957_:
{
lean_object* v___x_4961_; 
if (v_isShared_4959_ == 0)
{
v___x_4961_ = v___x_4958_;
goto v_reusejp_4960_;
}
else
{
lean_object* v_reuseFailAlloc_4962_; 
v_reuseFailAlloc_4962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4962_, 0, v_a_4956_);
v___x_4961_ = v_reuseFailAlloc_4962_;
goto v_reusejp_4960_;
}
v_reusejp_4960_:
{
return v___x_4961_;
}
}
}
}
else
{
lean_dec(v_decl_4938_);
return v___x_4943_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDecl___boxed(lean_object* v_decl_4964_, lean_object* v_forceExpose_4965_, lean_object* v_a_4966_, lean_object* v_a_4967_, lean_object* v_a_4968_){
_start:
{
uint8_t v_forceExpose_boxed_4969_; lean_object* v_res_4970_; 
v_forceExpose_boxed_4969_ = lean_unbox(v_forceExpose_4965_);
v_res_4970_ = l_Lean_addDecl(v_decl_4964_, v_forceExpose_boxed_4969_, v_a_4966_, v_a_4967_);
lean_dec(v_a_4967_);
lean_dec_ref(v_a_4966_);
return v_res_4970_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___redArg(lean_object* v_as_x27_4971_, lean_object* v_b_4972_, lean_object* v___y_4973_){
_start:
{
if (lean_obj_tag(v_as_x27_4971_) == 0)
{
lean_object* v___x_4975_; 
v___x_4975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4975_, 0, v_b_4972_);
return v___x_4975_;
}
else
{
lean_object* v_head_4976_; lean_object* v_tail_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v_env_4980_; lean_object* v_nextMacroScope_4981_; lean_object* v_ngen_4982_; lean_object* v_auxDeclNGen_4983_; lean_object* v_traceState_4984_; lean_object* v_messages_4985_; lean_object* v_infoState_4986_; lean_object* v_snapshotTasks_4987_; lean_object* v___x_4989_; uint8_t v_isShared_4990_; uint8_t v_isSharedCheck_4998_; 
v_head_4976_ = lean_ctor_get(v_as_x27_4971_, 0);
v_tail_4977_ = lean_ctor_get(v_as_x27_4971_, 1);
v___x_4978_ = lean_box(0);
v___x_4979_ = lean_st_ref_take(v___y_4973_);
v_env_4980_ = lean_ctor_get(v___x_4979_, 0);
v_nextMacroScope_4981_ = lean_ctor_get(v___x_4979_, 1);
v_ngen_4982_ = lean_ctor_get(v___x_4979_, 2);
v_auxDeclNGen_4983_ = lean_ctor_get(v___x_4979_, 3);
v_traceState_4984_ = lean_ctor_get(v___x_4979_, 4);
v_messages_4985_ = lean_ctor_get(v___x_4979_, 6);
v_infoState_4986_ = lean_ctor_get(v___x_4979_, 7);
v_snapshotTasks_4987_ = lean_ctor_get(v___x_4979_, 8);
v_isSharedCheck_4998_ = !lean_is_exclusive(v___x_4979_);
if (v_isSharedCheck_4998_ == 0)
{
lean_object* v_unused_4999_; 
v_unused_4999_ = lean_ctor_get(v___x_4979_, 5);
lean_dec(v_unused_4999_);
v___x_4989_ = v___x_4979_;
v_isShared_4990_ = v_isSharedCheck_4998_;
goto v_resetjp_4988_;
}
else
{
lean_inc(v_snapshotTasks_4987_);
lean_inc(v_infoState_4986_);
lean_inc(v_messages_4985_);
lean_inc(v_traceState_4984_);
lean_inc(v_auxDeclNGen_4983_);
lean_inc(v_ngen_4982_);
lean_inc(v_nextMacroScope_4981_);
lean_inc(v_env_4980_);
lean_dec(v___x_4979_);
v___x_4989_ = lean_box(0);
v_isShared_4990_ = v_isSharedCheck_4998_;
goto v_resetjp_4988_;
}
v_resetjp_4988_:
{
lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4994_; 
lean_inc(v_head_4976_);
v___x_4991_ = l_Lean_markMeta(v_env_4980_, v_head_4976_);
v___x_4992_ = lean_obj_once(&l_Lean_snapshotEnvLinterOptions___closed__2, &l_Lean_snapshotEnvLinterOptions___closed__2_once, _init_l_Lean_snapshotEnvLinterOptions___closed__2);
if (v_isShared_4990_ == 0)
{
lean_ctor_set(v___x_4989_, 5, v___x_4992_);
lean_ctor_set(v___x_4989_, 0, v___x_4991_);
v___x_4994_ = v___x_4989_;
goto v_reusejp_4993_;
}
else
{
lean_object* v_reuseFailAlloc_4997_; 
v_reuseFailAlloc_4997_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4997_, 0, v___x_4991_);
lean_ctor_set(v_reuseFailAlloc_4997_, 1, v_nextMacroScope_4981_);
lean_ctor_set(v_reuseFailAlloc_4997_, 2, v_ngen_4982_);
lean_ctor_set(v_reuseFailAlloc_4997_, 3, v_auxDeclNGen_4983_);
lean_ctor_set(v_reuseFailAlloc_4997_, 4, v_traceState_4984_);
lean_ctor_set(v_reuseFailAlloc_4997_, 5, v___x_4992_);
lean_ctor_set(v_reuseFailAlloc_4997_, 6, v_messages_4985_);
lean_ctor_set(v_reuseFailAlloc_4997_, 7, v_infoState_4986_);
lean_ctor_set(v_reuseFailAlloc_4997_, 8, v_snapshotTasks_4987_);
v___x_4994_ = v_reuseFailAlloc_4997_;
goto v_reusejp_4993_;
}
v_reusejp_4993_:
{
lean_object* v___x_4995_; 
v___x_4995_ = lean_st_ref_put(v___y_4973_, v___x_4994_);
v_as_x27_4971_ = v_tail_4977_;
v_b_4972_ = v___x_4978_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___redArg___boxed(lean_object* v_as_x27_5000_, lean_object* v_b_5001_, lean_object* v___y_5002_, lean_object* v___y_5003_){
_start:
{
lean_object* v_res_5004_; 
v_res_5004_ = l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___redArg(v_as_x27_5000_, v_b_5001_, v___y_5002_);
lean_dec(v___y_5002_);
lean_dec(v_as_x27_5000_);
return v_res_5004_;
}
}
LEAN_EXPORT lean_object* l_Lean_addAndCompile(lean_object* v_decl_5005_, uint8_t v_logCompileErrors_5006_, uint8_t v_markMeta_5007_, lean_object* v_a_5008_, lean_object* v_a_5009_){
_start:
{
uint8_t v___x_5011_; lean_object* v___x_5012_; 
v___x_5011_ = 0;
lean_inc(v_decl_5005_);
v___x_5012_ = l_Lean_addDecl(v_decl_5005_, v___x_5011_, v_a_5008_, v_a_5009_);
if (lean_obj_tag(v___x_5012_) == 0)
{
lean_dec_ref_known(v___x_5012_, 1);
if (v_markMeta_5007_ == 0)
{
lean_object* v___x_5013_; 
v___x_5013_ = l_Lean_compileDecl(v_decl_5005_, v_logCompileErrors_5006_, v_a_5008_, v_a_5009_);
return v___x_5013_;
}
else
{
lean_object* v___x_5014_; lean_object* v___x_5015_; lean_object* v___x_5016_; lean_object* v___x_5017_; 
lean_inc(v_decl_5005_);
v___x_5014_ = l_Lean_Declaration_getNames(v_decl_5005_);
v___x_5015_ = lean_box(0);
v___x_5016_ = l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___redArg(v___x_5014_, v___x_5015_, v_a_5009_);
lean_dec(v___x_5014_);
lean_dec_ref(v___x_5016_);
v___x_5017_ = l_Lean_compileDecl(v_decl_5005_, v_logCompileErrors_5006_, v_a_5008_, v_a_5009_);
return v___x_5017_;
}
}
else
{
lean_dec(v_decl_5005_);
return v___x_5012_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addAndCompile___boxed(lean_object* v_decl_5018_, lean_object* v_logCompileErrors_5019_, lean_object* v_markMeta_5020_, lean_object* v_a_5021_, lean_object* v_a_5022_, lean_object* v_a_5023_){
_start:
{
uint8_t v_logCompileErrors_boxed_5024_; uint8_t v_markMeta_boxed_5025_; lean_object* v_res_5026_; 
v_logCompileErrors_boxed_5024_ = lean_unbox(v_logCompileErrors_5019_);
v_markMeta_boxed_5025_ = lean_unbox(v_markMeta_5020_);
v_res_5026_ = l_Lean_addAndCompile(v_decl_5018_, v_logCompileErrors_boxed_5024_, v_markMeta_boxed_5025_, v_a_5021_, v_a_5022_);
lean_dec(v_a_5022_);
lean_dec_ref(v_a_5021_);
return v_res_5026_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0(lean_object* v_as_5027_, lean_object* v_as_x27_5028_, lean_object* v_b_5029_, lean_object* v_a_5030_, lean_object* v___y_5031_, lean_object* v___y_5032_){
_start:
{
lean_object* v___x_5034_; 
v___x_5034_ = l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___redArg(v_as_x27_5028_, v_b_5029_, v___y_5032_);
return v___x_5034_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0___boxed(lean_object* v_as_5035_, lean_object* v_as_x27_5036_, lean_object* v_b_5037_, lean_object* v_a_5038_, lean_object* v___y_5039_, lean_object* v___y_5040_, lean_object* v___y_5041_){
_start:
{
lean_object* v_res_5042_; 
v_res_5042_ = l_List_forIn_x27_loop___at___00Lean_addAndCompile_spec__0(v_as_5035_, v_as_x27_5036_, v_b_5037_, v_a_5038_, v___y_5039_, v___y_5040_);
lean_dec(v___y_5040_);
lean_dec_ref(v___y_5039_);
lean_dec(v_as_x27_5036_);
lean_dec(v_as_5035_);
return v_res_5042_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sorry(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectAxioms(uint8_t builtin);
lean_object* runtime_initialize_Lean_OriginalConstKind(uint8_t builtin);
lean_object* runtime_initialize_Lean_AutoDecl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_MetaAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_RecDepth(uint8_t builtin);
lean_object* runtime_initialize_Lean_OriginalConstKind(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_AddDecl(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sorry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectAxioms(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_AutoDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_MetaAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_RecDepth(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_1069955831____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_warn_sorry = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_warn_sorry);
lean_dec_ref(res);
res = l___private_Lean_AddDecl_0__Lean_initFn_00___x40_Lean_AddDecl_337188874____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_AddDecl(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sorry(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectAxioms(uint8_t builtin);
lean_object* initialize_Lean_OriginalConstKind(uint8_t builtin);
lean_object* initialize_Lean_AutoDecl(uint8_t builtin);
lean_object* initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* initialize_Lean_Compiler_MetaAttr(uint8_t builtin);
lean_object* initialize_Lean_Util_RecDepth(uint8_t builtin);
lean_object* initialize_Lean_OriginalConstKind(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_AddDecl(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sorry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectAxioms(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_AutoDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_MetaAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_RecDepth(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_AddDecl(builtin);
}
#ifdef __cplusplus
}
#endif

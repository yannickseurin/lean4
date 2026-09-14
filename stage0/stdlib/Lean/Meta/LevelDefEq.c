// Lean compiler output
// Module: Lean.Meta.LevelDefEq
// Imports: public import Lean.Util.CollectMVars public import Lean.Meta.DecLevel public import Lean.Meta.HasAssignableMVar
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
uint8_t lean_level_eq(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableLevelMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqLevelMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_mkLevelMVar(lean_object*);
lean_object* l_Lean_MessageData_ofLevel(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Bool_toLBool(uint8_t);
lean_object* l_Lean_Level_mvarId_x21(lean_object*);
lean_object* l_Lean_LMVarId_isReadOnly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LMVarId_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Level_occurs(lean_object*, lean_object*);
uint8_t l_Lean_Level_isMax(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLevelMax_x27(lean_object*, lean_object*);
lean_object* lean_is_level_def_eq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_decLevel_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Level_isParam(lean_object*);
uint8_t l_Lean_Level_isMVar(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* lean_io_mono_nanos_now();
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
extern lean_object* l_Lean_diagnostics;
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lean_Level_getLevelOffset(lean_object*);
lean_object* l_Lean_Meta_throwIsDefEqStuck___redArg();
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* lean_instantiate_level_mvars(lean_object*, lean_object*);
lean_object* l_Lean_Level_normalize(lean_object*);
uint8_t l_Lean_instBEqLBool_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_hasAssignableLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_getOffset(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Meta.LevelDefEq"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__0 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__0_value;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "_private.Lean.Meta.LevelDefEq.0.Lean.Meta.solveSelfMax"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1_value;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "assertion violation: v.isMax\n  "};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__2 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__3;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4_value;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "isLevelDefEq"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__5 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__5_value;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "step"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__6 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__5_value),LEAN_SCALAR_PTR_LITERAL(198, 68, 1, 201, 101, 121, 53, 108)}};
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__6_value),LEAN_SCALAR_PTR_LITERAL(214, 1, 100, 166, 77, 133, 145, 204)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7_value;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__8 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__8_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__9 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "solveSelfMax: "};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__11 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__12;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__13 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__13_value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "tryApproxSelfMax "};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___closed__0 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "tryApproxMaxMax "};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__0 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "stuck"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__0 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__5_value),LEAN_SCALAR_PTR_LITERAL(198, 68, 1, 201, 101, 121, 53, 108)}};
static const lean_ctor_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 131, 35, 104, 114, 254, 231, 20)}};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__2;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " =\?= "};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__3 = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_isMVarWithGreaterDepth(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_isMVarWithGreaterDepth___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__2(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__7___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_isLevelDefEqAuxImpl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_isLevelDefEqAuxImpl___closed__0;
static lean_once_cell_t l_Lean_Meta_isLevelDefEqAuxImpl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___closed__1;
static lean_once_cell_t l_Lean_Meta_isLevelDefEqAuxImpl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___closed__2;
static lean_once_cell_t l_Lean_Meta_isLevelDefEqAuxImpl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___closed__3;
static const lean_string_object l_Lean_Meta_isLevelDefEqAuxImpl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "pp"};
static const lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___closed__4 = (const lean_object*)&l_Lean_Meta_isLevelDefEqAuxImpl___closed__4_value;
static const lean_string_object l_Lean_Meta_isLevelDefEqAuxImpl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "instantiateMVars"};
static const lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___closed__5 = (const lean_object*)&l_Lean_Meta_isLevelDefEqAuxImpl___closed__5_value;
static const lean_ctor_object l_Lean_Meta_isLevelDefEqAuxImpl___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_isLevelDefEqAuxImpl___closed__4_value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l_Lean_Meta_isLevelDefEqAuxImpl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_isLevelDefEqAuxImpl___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_isLevelDefEqAuxImpl___closed__5_value),LEAN_SCALAR_PTR_LITERAL(249, 167, 243, 240, 112, 42, 66, 234)}};
static const lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___closed__6 = (const lean_object*)&l_Lean_Meta_isLevelDefEqAuxImpl___closed__6_value;
static const lean_ctor_object l_Lean_Meta_isLevelDefEqAuxImpl___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_isLevelDefEqAuxImpl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_isLevelDefEqAuxImpl___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__5_value),LEAN_SCALAR_PTR_LITERAL(198, 68, 1, 201, 101, 121, 53, 108)}};
static const lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___closed__7 = (const lean_object*)&l_Lean_Meta_isLevelDefEqAuxImpl___closed__7_value;
static lean_once_cell_t l_Lean_Meta_isLevelDefEqAuxImpl___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___closed__8;
LEAN_EXPORT lean_object* lean_is_level_def_eq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "LevelDefEq"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(lean_object* v_lvl_1_, lean_object* v_a_2_){
_start:
{
if (lean_obj_tag(v_a_2_) == 2)
{
lean_object* v_a_3_; lean_object* v_a_4_; uint8_t v___x_5_; 
v_a_3_ = lean_ctor_get(v_a_2_, 0);
v_a_4_ = lean_ctor_get(v_a_2_, 1);
v___x_5_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(v_lvl_1_, v_a_3_);
if (v___x_5_ == 0)
{
v_a_2_ = v_a_4_;
goto _start;
}
else
{
return v___x_5_;
}
}
else
{
uint8_t v___x_7_; 
v___x_7_ = lean_level_eq(v_a_2_, v_lvl_1_);
if (v___x_7_ == 0)
{
uint8_t v___x_8_; 
v___x_8_ = l_Lean_Level_occurs(v_lvl_1_, v_a_2_);
return v___x_8_;
}
else
{
uint8_t v___x_9_; 
v___x_9_ = 0;
return v___x_9_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit___boxed(lean_object* v_lvl_10_, lean_object* v_a_11_){
_start:
{
uint8_t v_res_12_; lean_object* v_r_13_; 
v_res_12_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(v_lvl_10_, v_a_11_);
lean_dec(v_a_11_);
lean_dec(v_lvl_10_);
v_r_13_ = lean_box(v_res_12_);
return v_r_13_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax(lean_object* v_lvl_14_, lean_object* v_x_15_){
_start:
{
if (lean_obj_tag(v_x_15_) == 2)
{
lean_object* v_a_16_; lean_object* v_a_17_; uint8_t v___x_18_; 
v_a_16_ = lean_ctor_get(v_x_15_, 0);
v_a_17_ = lean_ctor_get(v_x_15_, 1);
v___x_18_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(v_lvl_14_, v_a_16_);
if (v___x_18_ == 0)
{
uint8_t v___x_19_; 
v___x_19_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax_visit(v_lvl_14_, v_a_17_);
return v___x_19_;
}
else
{
return v___x_18_;
}
}
else
{
uint8_t v___x_20_; 
v___x_20_ = 0;
return v___x_20_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax___boxed(lean_object* v_lvl_21_, lean_object* v_x_22_){
_start:
{
uint8_t v_res_23_; lean_object* v_r_24_; 
v_res_23_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax(v_lvl_21_, v_x_22_);
lean_dec(v_x_22_);
lean_dec(v_lvl_21_);
v_r_24_ = lean_box(v_res_23_);
return v_r_24_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff(lean_object* v_mvarId_25_, lean_object* v_x_26_, lean_object* v_x_27_){
_start:
{
switch(lean_obj_tag(v_x_26_))
{
case 2:
{
lean_object* v_a_28_; lean_object* v_a_29_; lean_object* v___x_30_; 
v_a_28_ = lean_ctor_get(v_x_26_, 0);
lean_inc(v_a_28_);
v_a_29_ = lean_ctor_get(v_x_26_, 1);
lean_inc(v_a_29_);
lean_dec_ref_known(v_x_26_, 2);
v___x_30_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff(v_mvarId_25_, v_a_28_, v_x_27_);
v_x_26_ = v_a_29_;
v_x_27_ = v___x_30_;
goto _start;
}
case 5:
{
lean_object* v_a_32_; uint8_t v___x_33_; 
v_a_32_ = lean_ctor_get(v_x_26_, 0);
v___x_33_ = l_Lean_instBEqLevelMVarId_beq(v_a_32_, v_mvarId_25_);
if (v___x_33_ == 0)
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_mkLevelMax_x27(v_x_27_, v_x_26_);
return v___x_34_;
}
else
{
lean_dec_ref_known(v_x_26_, 1);
return v_x_27_;
}
}
default: 
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_mkLevelMax_x27(v_x_27_, v_x_26_);
return v___x_35_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff___boxed(lean_object* v_mvarId_36_, lean_object* v_x_37_, lean_object* v_x_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff(v_mvarId_36_, v_x_37_, v_x_38_);
lean_dec(v_mvarId_36_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__0(lean_object* v_msg_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_){
_start:
{
lean_object* v___f_47_; lean_object* v___x_935__overap_48_; lean_object* v___x_49_; 
v___f_47_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__0___closed__0));
v___x_935__overap_48_ = lean_panic_fn_borrowed(v___f_47_, v_msg_41_);
lean_inc(v___y_45_);
lean_inc_ref(v___y_44_);
lean_inc(v___y_43_);
lean_inc_ref(v___y_42_);
v___x_49_ = lean_apply_5(v___x_935__overap_48_, v___y_42_, v___y_43_, v___y_44_, v___y_45_, lean_box(0));
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__0___boxed(lean_object* v_msg_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l_panic___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__0(v_msg_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_);
lean_dec(v___y_54_);
lean_dec_ref(v___y_53_);
lean_dec(v___y_52_);
lean_dec_ref(v___y_51_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5_spec__6___redArg(lean_object* v_x_57_, lean_object* v_x_58_, lean_object* v_x_59_, lean_object* v_x_60_){
_start:
{
lean_object* v_ks_61_; lean_object* v_vs_62_; lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_86_; 
v_ks_61_ = lean_ctor_get(v_x_57_, 0);
v_vs_62_ = lean_ctor_get(v_x_57_, 1);
v_isSharedCheck_86_ = !lean_is_exclusive(v_x_57_);
if (v_isSharedCheck_86_ == 0)
{
v___x_64_ = v_x_57_;
v_isShared_65_ = v_isSharedCheck_86_;
goto v_resetjp_63_;
}
else
{
lean_inc(v_vs_62_);
lean_inc(v_ks_61_);
lean_dec(v_x_57_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_86_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
lean_object* v___x_66_; uint8_t v___x_67_; 
v___x_66_ = lean_array_get_size(v_ks_61_);
v___x_67_ = lean_nat_dec_lt(v_x_58_, v___x_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_71_; 
lean_dec(v_x_58_);
v___x_68_ = lean_array_push(v_ks_61_, v_x_59_);
v___x_69_ = lean_array_push(v_vs_62_, v_x_60_);
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 1, v___x_69_);
lean_ctor_set(v___x_64_, 0, v___x_68_);
v___x_71_ = v___x_64_;
goto v_reusejp_70_;
}
else
{
lean_object* v_reuseFailAlloc_72_; 
v_reuseFailAlloc_72_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_72_, 0, v___x_68_);
lean_ctor_set(v_reuseFailAlloc_72_, 1, v___x_69_);
v___x_71_ = v_reuseFailAlloc_72_;
goto v_reusejp_70_;
}
v_reusejp_70_:
{
return v___x_71_;
}
}
else
{
lean_object* v_k_x27_73_; uint8_t v___x_74_; 
v_k_x27_73_ = lean_array_fget_borrowed(v_ks_61_, v_x_58_);
v___x_74_ = l_Lean_instBEqLevelMVarId_beq(v_x_59_, v_k_x27_73_);
if (v___x_74_ == 0)
{
lean_object* v___x_76_; 
if (v_isShared_65_ == 0)
{
v___x_76_ = v___x_64_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v_ks_61_);
lean_ctor_set(v_reuseFailAlloc_80_, 1, v_vs_62_);
v___x_76_ = v_reuseFailAlloc_80_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_77_ = lean_unsigned_to_nat(1u);
v___x_78_ = lean_nat_add(v_x_58_, v___x_77_);
lean_dec(v_x_58_);
v_x_57_ = v___x_76_;
v_x_58_ = v___x_78_;
goto _start;
}
}
else
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_84_; 
v___x_81_ = lean_array_fset(v_ks_61_, v_x_58_, v_x_59_);
v___x_82_ = lean_array_fset(v_vs_62_, v_x_58_, v_x_60_);
lean_dec(v_x_58_);
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 1, v___x_82_);
lean_ctor_set(v___x_64_, 0, v___x_81_);
v___x_84_ = v___x_64_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v___x_81_);
lean_ctor_set(v_reuseFailAlloc_85_, 1, v___x_82_);
v___x_84_ = v_reuseFailAlloc_85_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
return v___x_84_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5___redArg(lean_object* v_n_87_, lean_object* v_k_88_, lean_object* v_v_89_){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_unsigned_to_nat(0u);
v___x_91_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5_spec__6___redArg(v_n_87_, v___x_90_, v_k_88_, v_v_89_);
return v___x_91_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = lean_box(0);
v___x_93_ = l_unsafeCast___redArg(v___x_92_);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg(lean_object* v_x_95_, size_t v_x_96_, size_t v_x_97_, lean_object* v_x_98_, lean_object* v_x_99_){
_start:
{
if (lean_obj_tag(v_x_95_) == 0)
{
lean_object* v_es_100_; size_t v___x_101_; size_t v___x_102_; lean_object* v_j_103_; lean_object* v___x_104_; uint8_t v___x_105_; 
v_es_100_ = lean_ctor_get(v_x_95_, 0);
v___x_101_ = ((size_t)31ULL);
v___x_102_ = lean_usize_land(v_x_96_, v___x_101_);
v_j_103_ = lean_usize_to_nat(v___x_102_);
v___x_104_ = lean_array_get_size(v_es_100_);
v___x_105_ = lean_nat_dec_lt(v_j_103_, v___x_104_);
if (v___x_105_ == 0)
{
lean_dec(v_j_103_);
lean_dec(v_x_99_);
lean_dec(v_x_98_);
return v_x_95_;
}
else
{
lean_object* v___x_107_; uint8_t v_isShared_108_; uint8_t v_isSharedCheck_144_; 
lean_inc_ref(v_es_100_);
v_isSharedCheck_144_ = !lean_is_exclusive(v_x_95_);
if (v_isSharedCheck_144_ == 0)
{
lean_object* v_unused_145_; 
v_unused_145_ = lean_ctor_get(v_x_95_, 0);
lean_dec(v_unused_145_);
v___x_107_ = v_x_95_;
v_isShared_108_ = v_isSharedCheck_144_;
goto v_resetjp_106_;
}
else
{
lean_dec(v_x_95_);
v___x_107_ = lean_box(0);
v_isShared_108_ = v_isSharedCheck_144_;
goto v_resetjp_106_;
}
v_resetjp_106_:
{
lean_object* v_v_109_; lean_object* v___x_110_; lean_object* v_xs_x27_111_; lean_object* v___y_113_; 
v_v_109_ = lean_array_fget(v_es_100_, v_j_103_);
v___x_110_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___closed__0);
v_xs_x27_111_ = lean_array_fset(v_es_100_, v_j_103_, v___x_110_);
switch(lean_obj_tag(v_v_109_))
{
case 0:
{
lean_object* v_key_118_; lean_object* v_val_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_129_; 
v_key_118_ = lean_ctor_get(v_v_109_, 0);
v_val_119_ = lean_ctor_get(v_v_109_, 1);
v_isSharedCheck_129_ = !lean_is_exclusive(v_v_109_);
if (v_isSharedCheck_129_ == 0)
{
v___x_121_ = v_v_109_;
v_isShared_122_ = v_isSharedCheck_129_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_val_119_);
lean_inc(v_key_118_);
lean_dec(v_v_109_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_129_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
uint8_t v___x_123_; 
v___x_123_ = l_Lean_instBEqLevelMVarId_beq(v_x_98_, v_key_118_);
if (v___x_123_ == 0)
{
lean_object* v___x_124_; lean_object* v___x_125_; 
lean_del_object(v___x_121_);
v___x_124_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_118_, v_val_119_, v_x_98_, v_x_99_);
v___x_125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
v___y_113_ = v___x_125_;
goto v___jp_112_;
}
else
{
lean_object* v___x_127_; 
lean_dec(v_val_119_);
lean_dec(v_key_118_);
if (v_isShared_122_ == 0)
{
lean_ctor_set(v___x_121_, 1, v_x_99_);
lean_ctor_set(v___x_121_, 0, v_x_98_);
v___x_127_ = v___x_121_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_x_98_);
lean_ctor_set(v_reuseFailAlloc_128_, 1, v_x_99_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
v___y_113_ = v___x_127_;
goto v___jp_112_;
}
}
}
}
case 1:
{
lean_object* v_node_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_142_; 
v_node_130_ = lean_ctor_get(v_v_109_, 0);
v_isSharedCheck_142_ = !lean_is_exclusive(v_v_109_);
if (v_isSharedCheck_142_ == 0)
{
v___x_132_ = v_v_109_;
v_isShared_133_ = v_isSharedCheck_142_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_node_130_);
lean_dec(v_v_109_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_142_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
size_t v___x_134_; size_t v___x_135_; size_t v___x_136_; size_t v___x_137_; lean_object* v___x_138_; lean_object* v___x_140_; 
v___x_134_ = ((size_t)5ULL);
v___x_135_ = lean_usize_shift_right(v_x_96_, v___x_134_);
v___x_136_ = ((size_t)1ULL);
v___x_137_ = lean_usize_add(v_x_97_, v___x_136_);
v___x_138_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg(v_node_130_, v___x_135_, v___x_137_, v_x_98_, v_x_99_);
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 0, v___x_138_);
v___x_140_ = v___x_132_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v___x_138_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
v___y_113_ = v___x_140_;
goto v___jp_112_;
}
}
}
default: 
{
lean_object* v___x_143_; 
v___x_143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_143_, 0, v_x_98_);
lean_ctor_set(v___x_143_, 1, v_x_99_);
v___y_113_ = v___x_143_;
goto v___jp_112_;
}
}
v___jp_112_:
{
lean_object* v___x_114_; lean_object* v___x_116_; 
v___x_114_ = lean_array_fset(v_xs_x27_111_, v_j_103_, v___y_113_);
lean_dec(v_j_103_);
if (v_isShared_108_ == 0)
{
lean_ctor_set(v___x_107_, 0, v___x_114_);
v___x_116_ = v___x_107_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v___x_114_);
v___x_116_ = v_reuseFailAlloc_117_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
return v___x_116_;
}
}
}
}
}
else
{
lean_object* v_ks_146_; lean_object* v_vs_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_165_; 
v_ks_146_ = lean_ctor_get(v_x_95_, 0);
v_vs_147_ = lean_ctor_get(v_x_95_, 1);
v_isSharedCheck_165_ = !lean_is_exclusive(v_x_95_);
if (v_isSharedCheck_165_ == 0)
{
v___x_149_ = v_x_95_;
v_isShared_150_ = v_isSharedCheck_165_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_vs_147_);
lean_inc(v_ks_146_);
lean_dec(v_x_95_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_165_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_152_; 
if (v_isShared_150_ == 0)
{
v___x_152_ = v___x_149_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_ks_146_);
lean_ctor_set(v_reuseFailAlloc_164_, 1, v_vs_147_);
v___x_152_ = v_reuseFailAlloc_164_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
lean_object* v_newNode_153_; size_t v___x_154_; uint8_t v___x_155_; 
v_newNode_153_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5___redArg(v___x_152_, v_x_98_, v_x_99_);
v___x_154_ = ((size_t)7ULL);
v___x_155_ = lean_usize_dec_le(v___x_154_, v_x_97_);
if (v___x_155_ == 0)
{
lean_object* v___x_156_; lean_object* v___x_157_; uint8_t v___x_158_; 
v___x_156_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_153_);
v___x_157_ = lean_unsigned_to_nat(4u);
v___x_158_ = lean_nat_dec_lt(v___x_156_, v___x_157_);
lean_dec(v___x_156_);
if (v___x_158_ == 0)
{
lean_object* v_ks_159_; lean_object* v_vs_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v_ks_159_ = lean_ctor_get(v_newNode_153_, 0);
lean_inc_ref(v_ks_159_);
v_vs_160_ = lean_ctor_get(v_newNode_153_, 1);
lean_inc_ref(v_vs_160_);
lean_dec_ref(v_newNode_153_);
v___x_161_ = lean_unsigned_to_nat(0u);
v___x_162_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___closed__1);
v___x_163_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6___redArg(v_x_97_, v_ks_159_, v_vs_160_, v___x_161_, v___x_162_);
lean_dec_ref(v_vs_160_);
lean_dec_ref(v_ks_159_);
return v___x_163_;
}
else
{
return v_newNode_153_;
}
}
else
{
return v_newNode_153_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6___redArg(size_t v_depth_166_, lean_object* v_keys_167_, lean_object* v_vals_168_, lean_object* v_i_169_, lean_object* v_entries_170_){
_start:
{
lean_object* v___x_171_; uint8_t v___x_172_; 
v___x_171_ = lean_array_get_size(v_keys_167_);
v___x_172_ = lean_nat_dec_lt(v_i_169_, v___x_171_);
if (v___x_172_ == 0)
{
lean_dec(v_i_169_);
return v_entries_170_;
}
else
{
lean_object* v_k_173_; lean_object* v_v_174_; uint64_t v___x_175_; size_t v_h_176_; size_t v___x_177_; lean_object* v___x_178_; size_t v___x_179_; size_t v___x_180_; size_t v___x_181_; size_t v_h_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v_k_173_ = lean_array_fget_borrowed(v_keys_167_, v_i_169_);
v_v_174_ = lean_array_fget_borrowed(v_vals_168_, v_i_169_);
v___x_175_ = l_Lean_instHashableLevelMVarId_hash(v_k_173_);
v_h_176_ = lean_uint64_to_usize(v___x_175_);
v___x_177_ = ((size_t)5ULL);
v___x_178_ = lean_unsigned_to_nat(1u);
v___x_179_ = ((size_t)1ULL);
v___x_180_ = lean_usize_sub(v_depth_166_, v___x_179_);
v___x_181_ = lean_usize_mul(v___x_177_, v___x_180_);
v_h_182_ = lean_usize_shift_right(v_h_176_, v___x_181_);
v___x_183_ = lean_nat_add(v_i_169_, v___x_178_);
lean_dec(v_i_169_);
lean_inc(v_v_174_);
lean_inc(v_k_173_);
v___x_184_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg(v_entries_170_, v_h_182_, v_depth_166_, v_k_173_, v_v_174_);
v_i_169_ = v___x_183_;
v_entries_170_ = v___x_184_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6___redArg___boxed(lean_object* v_depth_186_, lean_object* v_keys_187_, lean_object* v_vals_188_, lean_object* v_i_189_, lean_object* v_entries_190_){
_start:
{
size_t v_depth_boxed_191_; lean_object* v_res_192_; 
v_depth_boxed_191_ = lean_unbox_usize(v_depth_186_);
lean_dec(v_depth_186_);
v_res_192_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6___redArg(v_depth_boxed_191_, v_keys_187_, v_vals_188_, v_i_189_, v_entries_190_);
lean_dec_ref(v_vals_188_);
lean_dec_ref(v_keys_187_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_x_193_, lean_object* v_x_194_, lean_object* v_x_195_, lean_object* v_x_196_, lean_object* v_x_197_){
_start:
{
size_t v_x_2659__boxed_198_; size_t v_x_2660__boxed_199_; lean_object* v_res_200_; 
v_x_2659__boxed_198_ = lean_unbox_usize(v_x_194_);
lean_dec(v_x_194_);
v_x_2660__boxed_199_ = lean_unbox_usize(v_x_195_);
lean_dec(v_x_195_);
v_res_200_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg(v_x_193_, v_x_2659__boxed_198_, v_x_2660__boxed_199_, v_x_196_, v_x_197_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1___redArg(lean_object* v_x_201_, lean_object* v_x_202_, lean_object* v_x_203_){
_start:
{
uint64_t v___x_204_; size_t v___x_205_; size_t v___x_206_; lean_object* v___x_207_; 
v___x_204_ = l_Lean_instHashableLevelMVarId_hash(v_x_202_);
v___x_205_ = lean_uint64_to_usize(v___x_204_);
v___x_206_ = ((size_t)1ULL);
v___x_207_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg(v_x_201_, v___x_205_, v___x_206_, v_x_202_, v_x_203_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(lean_object* v_mvarId_208_, lean_object* v_val_209_, lean_object* v___y_210_){
_start:
{
lean_object* v___x_212_; lean_object* v_mctx_213_; lean_object* v_cache_214_; lean_object* v_zetaDeltaFVarIds_215_; lean_object* v_postponed_216_; lean_object* v_diag_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_246_; 
v___x_212_ = lean_st_ref_take(v___y_210_);
v_mctx_213_ = lean_ctor_get(v___x_212_, 0);
v_cache_214_ = lean_ctor_get(v___x_212_, 1);
v_zetaDeltaFVarIds_215_ = lean_ctor_get(v___x_212_, 2);
v_postponed_216_ = lean_ctor_get(v___x_212_, 3);
v_diag_217_ = lean_ctor_get(v___x_212_, 4);
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_212_);
if (v_isSharedCheck_246_ == 0)
{
v___x_219_ = v___x_212_;
v_isShared_220_ = v_isSharedCheck_246_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_diag_217_);
lean_inc(v_postponed_216_);
lean_inc(v_zetaDeltaFVarIds_215_);
lean_inc(v_cache_214_);
lean_inc(v_mctx_213_);
lean_dec(v___x_212_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_246_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v_depth_221_; lean_object* v_levelAssignDepth_222_; lean_object* v_lmvarCounter_223_; lean_object* v_mvarCounter_224_; lean_object* v_lDecls_225_; lean_object* v_decls_226_; lean_object* v_userNames_227_; lean_object* v_lAssignment_228_; lean_object* v_eAssignment_229_; lean_object* v_dAssignment_230_; lean_object* v_instanceTypedMVars_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_245_; 
v_depth_221_ = lean_ctor_get(v_mctx_213_, 0);
v_levelAssignDepth_222_ = lean_ctor_get(v_mctx_213_, 1);
v_lmvarCounter_223_ = lean_ctor_get(v_mctx_213_, 2);
v_mvarCounter_224_ = lean_ctor_get(v_mctx_213_, 3);
v_lDecls_225_ = lean_ctor_get(v_mctx_213_, 4);
v_decls_226_ = lean_ctor_get(v_mctx_213_, 5);
v_userNames_227_ = lean_ctor_get(v_mctx_213_, 6);
v_lAssignment_228_ = lean_ctor_get(v_mctx_213_, 7);
v_eAssignment_229_ = lean_ctor_get(v_mctx_213_, 8);
v_dAssignment_230_ = lean_ctor_get(v_mctx_213_, 9);
v_instanceTypedMVars_231_ = lean_ctor_get(v_mctx_213_, 10);
v_isSharedCheck_245_ = !lean_is_exclusive(v_mctx_213_);
if (v_isSharedCheck_245_ == 0)
{
v___x_233_ = v_mctx_213_;
v_isShared_234_ = v_isSharedCheck_245_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_instanceTypedMVars_231_);
lean_inc(v_dAssignment_230_);
lean_inc(v_eAssignment_229_);
lean_inc(v_lAssignment_228_);
lean_inc(v_userNames_227_);
lean_inc(v_decls_226_);
lean_inc(v_lDecls_225_);
lean_inc(v_mvarCounter_224_);
lean_inc(v_lmvarCounter_223_);
lean_inc(v_levelAssignDepth_222_);
lean_inc(v_depth_221_);
lean_dec(v_mctx_213_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_245_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_238_; 
v___x_235_ = lean_box(0);
v___x_236_ = l_Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1___redArg(v_lAssignment_228_, v_mvarId_208_, v_val_209_);
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 7, v___x_236_);
v___x_238_ = v___x_233_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_depth_221_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v_levelAssignDepth_222_);
lean_ctor_set(v_reuseFailAlloc_244_, 2, v_lmvarCounter_223_);
lean_ctor_set(v_reuseFailAlloc_244_, 3, v_mvarCounter_224_);
lean_ctor_set(v_reuseFailAlloc_244_, 4, v_lDecls_225_);
lean_ctor_set(v_reuseFailAlloc_244_, 5, v_decls_226_);
lean_ctor_set(v_reuseFailAlloc_244_, 6, v_userNames_227_);
lean_ctor_set(v_reuseFailAlloc_244_, 7, v___x_236_);
lean_ctor_set(v_reuseFailAlloc_244_, 8, v_eAssignment_229_);
lean_ctor_set(v_reuseFailAlloc_244_, 9, v_dAssignment_230_);
lean_ctor_set(v_reuseFailAlloc_244_, 10, v_instanceTypedMVars_231_);
v___x_238_ = v_reuseFailAlloc_244_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
lean_object* v___x_240_; 
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 0, v___x_238_);
v___x_240_ = v___x_219_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v___x_238_);
lean_ctor_set(v_reuseFailAlloc_243_, 1, v_cache_214_);
lean_ctor_set(v_reuseFailAlloc_243_, 2, v_zetaDeltaFVarIds_215_);
lean_ctor_set(v_reuseFailAlloc_243_, 3, v_postponed_216_);
lean_ctor_set(v_reuseFailAlloc_243_, 4, v_diag_217_);
v___x_240_ = v_reuseFailAlloc_243_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_241_ = lean_st_ref_put(v___y_210_, v___x_240_);
v___x_242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_242_, 0, v___x_235_);
return v___x_242_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg___boxed(lean_object* v_mvarId_247_, lean_object* v_val_248_, lean_object* v___y_249_, lean_object* v___y_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(v_mvarId_247_, v_val_248_, v___y_249_);
lean_dec(v___y_249_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2_spec__3(lean_object* v_msgData_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_){
_start:
{
lean_object* v___x_258_; lean_object* v_env_259_; lean_object* v___x_260_; lean_object* v_toCold_261_; lean_object* v_mctx_262_; lean_object* v_lctx_263_; lean_object* v_options_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_258_ = lean_st_ref_get(v___y_256_);
v_env_259_ = lean_ctor_get(v___x_258_, 0);
lean_inc_ref(v_env_259_);
lean_dec(v___x_258_);
v___x_260_ = lean_st_ref_get(v___y_254_);
v_toCold_261_ = lean_ctor_get(v___y_255_, 0);
v_mctx_262_ = lean_ctor_get(v___x_260_, 0);
lean_inc_ref(v_mctx_262_);
lean_dec(v___x_260_);
v_lctx_263_ = lean_ctor_get(v___y_253_, 2);
v_options_264_ = lean_ctor_get(v_toCold_261_, 2);
lean_inc_ref(v_options_264_);
lean_inc_ref(v_lctx_263_);
v___x_265_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_265_, 0, v_env_259_);
lean_ctor_set(v___x_265_, 1, v_mctx_262_);
lean_ctor_set(v___x_265_, 2, v_lctx_263_);
lean_ctor_set(v___x_265_, 3, v_options_264_);
v___x_266_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_266_, 0, v___x_265_);
lean_ctor_set(v___x_266_, 1, v_msgData_252_);
v___x_267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_267_, 0, v___x_266_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2_spec__3___boxed(lean_object* v_msgData_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2_spec__3(v_msgData_268_, v___y_269_, v___y_270_, v___y_271_, v___y_272_);
lean_dec(v___y_272_);
lean_dec_ref(v___y_271_);
lean_dec(v___y_270_);
lean_dec_ref(v___y_269_);
return v_res_274_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__0(void){
_start:
{
lean_object* v___x_275_; double v___x_276_; 
v___x_275_ = lean_unsigned_to_nat(0u);
v___x_276_ = lean_float_of_nat(v___x_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(lean_object* v_cls_280_, lean_object* v_msg_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_){
_start:
{
lean_object* v_ref_287_; lean_object* v___x_288_; lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_333_; 
v_ref_287_ = lean_ctor_get(v___y_284_, 2);
v___x_288_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2_spec__3(v_msg_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_);
v_a_289_ = lean_ctor_get(v___x_288_, 0);
v_isSharedCheck_333_ = !lean_is_exclusive(v___x_288_);
if (v_isSharedCheck_333_ == 0)
{
v___x_291_ = v___x_288_;
v_isShared_292_ = v_isSharedCheck_333_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v___x_288_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_333_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_293_; lean_object* v_traceState_294_; lean_object* v_env_295_; lean_object* v_nextMacroScope_296_; lean_object* v_ngen_297_; lean_object* v_auxDeclNGen_298_; lean_object* v_cache_299_; lean_object* v_messages_300_; lean_object* v_infoState_301_; lean_object* v_snapshotTasks_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_332_; 
v___x_293_ = lean_st_ref_take(v___y_285_);
v_traceState_294_ = lean_ctor_get(v___x_293_, 4);
v_env_295_ = lean_ctor_get(v___x_293_, 0);
v_nextMacroScope_296_ = lean_ctor_get(v___x_293_, 1);
v_ngen_297_ = lean_ctor_get(v___x_293_, 2);
v_auxDeclNGen_298_ = lean_ctor_get(v___x_293_, 3);
v_cache_299_ = lean_ctor_get(v___x_293_, 5);
v_messages_300_ = lean_ctor_get(v___x_293_, 6);
v_infoState_301_ = lean_ctor_get(v___x_293_, 7);
v_snapshotTasks_302_ = lean_ctor_get(v___x_293_, 8);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_293_);
if (v_isSharedCheck_332_ == 0)
{
v___x_304_ = v___x_293_;
v_isShared_305_ = v_isSharedCheck_332_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_snapshotTasks_302_);
lean_inc(v_infoState_301_);
lean_inc(v_messages_300_);
lean_inc(v_cache_299_);
lean_inc(v_traceState_294_);
lean_inc(v_auxDeclNGen_298_);
lean_inc(v_ngen_297_);
lean_inc(v_nextMacroScope_296_);
lean_inc(v_env_295_);
lean_dec(v___x_293_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_332_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
uint64_t v_tid_306_; lean_object* v_traces_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_331_; 
v_tid_306_ = lean_ctor_get_uint64(v_traceState_294_, sizeof(void*)*1);
v_traces_307_ = lean_ctor_get(v_traceState_294_, 0);
v_isSharedCheck_331_ = !lean_is_exclusive(v_traceState_294_);
if (v_isSharedCheck_331_ == 0)
{
v___x_309_ = v_traceState_294_;
v_isShared_310_ = v_isSharedCheck_331_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_traces_307_);
lean_dec(v_traceState_294_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_331_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_311_; lean_object* v___x_312_; double v___x_313_; uint8_t v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_322_; 
v___x_311_ = lean_box(0);
v___x_312_ = lean_box(0);
v___x_313_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__0);
v___x_314_ = 0;
v___x_315_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__1));
v___x_316_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_316_, 0, v_cls_280_);
lean_ctor_set(v___x_316_, 1, v___x_312_);
lean_ctor_set(v___x_316_, 2, v___x_315_);
lean_ctor_set_float(v___x_316_, sizeof(void*)*3, v___x_313_);
lean_ctor_set_float(v___x_316_, sizeof(void*)*3 + 8, v___x_313_);
lean_ctor_set_uint8(v___x_316_, sizeof(void*)*3 + 16, v___x_314_);
v___x_317_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__2));
v___x_318_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_318_, 0, v___x_316_);
lean_ctor_set(v___x_318_, 1, v_a_289_);
lean_ctor_set(v___x_318_, 2, v___x_317_);
lean_inc(v_ref_287_);
v___x_319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_319_, 0, v_ref_287_);
lean_ctor_set(v___x_319_, 1, v___x_318_);
v___x_320_ = l_Lean_PersistentArray_push___redArg(v_traces_307_, v___x_319_);
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 0, v___x_320_);
v___x_322_ = v___x_309_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v___x_320_);
lean_ctor_set_uint64(v_reuseFailAlloc_330_, sizeof(void*)*1, v_tid_306_);
v___x_322_ = v_reuseFailAlloc_330_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
lean_object* v___x_324_; 
if (v_isShared_305_ == 0)
{
lean_ctor_set(v___x_304_, 4, v___x_322_);
v___x_324_ = v___x_304_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_env_295_);
lean_ctor_set(v_reuseFailAlloc_329_, 1, v_nextMacroScope_296_);
lean_ctor_set(v_reuseFailAlloc_329_, 2, v_ngen_297_);
lean_ctor_set(v_reuseFailAlloc_329_, 3, v_auxDeclNGen_298_);
lean_ctor_set(v_reuseFailAlloc_329_, 4, v___x_322_);
lean_ctor_set(v_reuseFailAlloc_329_, 5, v_cache_299_);
lean_ctor_set(v_reuseFailAlloc_329_, 6, v_messages_300_);
lean_ctor_set(v_reuseFailAlloc_329_, 7, v_infoState_301_);
lean_ctor_set(v_reuseFailAlloc_329_, 8, v_snapshotTasks_302_);
v___x_324_ = v_reuseFailAlloc_329_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
lean_object* v___x_325_; lean_object* v___x_327_; 
v___x_325_ = lean_st_ref_put(v___y_285_, v___x_324_);
if (v_isShared_292_ == 0)
{
lean_ctor_set(v___x_291_, 0, v___x_311_);
v___x_327_ = v___x_291_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v___x_311_);
v___x_327_ = v_reuseFailAlloc_328_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
return v___x_327_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___boxed(lean_object* v_cls_334_, lean_object* v_msg_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(v_cls_334_, v_msg_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_);
lean_dec(v___y_339_);
lean_dec_ref(v___y_338_);
lean_dec(v___y_337_);
lean_dec_ref(v___y_336_);
return v_res_341_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__3(void){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_345_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__2));
v___x_346_ = lean_unsigned_to_nat(2u);
v___x_347_ = lean_unsigned_to_nat(39u);
v___x_348_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__1));
v___x_349_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__0));
v___x_350_ = l_mkPanicMessageWithDecl(v___x_349_, v___x_348_, v___x_347_, v___x_346_, v___x_345_);
return v___x_350_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10(void){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_361_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7));
v___x_362_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__9));
v___x_363_ = l_Lean_Name_append(v___x_362_, v___x_361_);
return v___x_363_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__12(void){
_start:
{
lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_365_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__11));
v___x_366_ = l_Lean_stringToMessageData(v___x_365_);
return v___x_366_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14(void){
_start:
{
lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_368_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__13));
v___x_369_ = l_Lean_stringToMessageData(v___x_368_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax(lean_object* v_mvarId_370_, lean_object* v_v_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_){
_start:
{
uint8_t v___x_377_; 
v___x_377_ = l_Lean_Level_isMax(v_v_371_);
if (v___x_377_ == 0)
{
lean_object* v___x_378_; lean_object* v___x_379_; 
lean_dec(v_v_371_);
lean_dec(v_mvarId_370_);
v___x_378_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__3, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__3_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__3);
v___x_379_ = l_panic___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__0(v___x_378_, v_a_372_, v_a_373_, v_a_374_, v_a_375_);
return v___x_379_;
}
else
{
lean_object* v___x_380_; 
v___x_380_ = l_Lean_Meta_mkFreshLevelMVar(v_a_372_, v_a_373_, v_a_374_, v_a_375_);
if (lean_obj_tag(v___x_380_) == 0)
{
lean_object* v_toCold_381_; lean_object* v_options_382_; lean_object* v_a_383_; lean_object* v_inheritedTraceOptions_384_; uint8_t v_hasTrace_385_; lean_object* v___x_386_; 
v_toCold_381_ = lean_ctor_get(v_a_374_, 0);
v_options_382_ = lean_ctor_get(v_toCold_381_, 2);
v_a_383_ = lean_ctor_get(v___x_380_, 0);
lean_inc(v_a_383_);
lean_dec_ref_known(v___x_380_, 1);
v_inheritedTraceOptions_384_ = lean_ctor_get(v_toCold_381_, 11);
v_hasTrace_385_ = lean_ctor_get_uint8(v_options_382_, sizeof(void*)*1);
v___x_386_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_mkMaxArgsDiff(v_mvarId_370_, v_v_371_, v_a_383_);
if (v_hasTrace_385_ == 0)
{
lean_object* v___x_387_; 
v___x_387_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(v_mvarId_370_, v___x_386_, v_a_373_);
return v___x_387_;
}
else
{
lean_object* v___x_388_; lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_388_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7));
v___x_389_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10);
v___x_390_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_384_, v_options_382_, v___x_389_);
if (v___x_390_ == 0)
{
lean_object* v___x_391_; 
v___x_391_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(v_mvarId_370_, v___x_386_, v_a_373_);
return v___x_391_;
}
else
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_392_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__12, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__12_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__12);
lean_inc(v_mvarId_370_);
v___x_393_ = l_Lean_mkLevelMVar(v_mvarId_370_);
v___x_394_ = l_Lean_MessageData_ofLevel(v___x_393_);
v___x_395_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_392_);
lean_ctor_set(v___x_395_, 1, v___x_394_);
v___x_396_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14);
v___x_397_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_397_, 0, v___x_395_);
lean_ctor_set(v___x_397_, 1, v___x_396_);
lean_inc(v___x_386_);
v___x_398_ = l_Lean_MessageData_ofLevel(v___x_386_);
v___x_399_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_399_, 0, v___x_397_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
v___x_400_ = l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(v___x_388_, v___x_399_, v_a_372_, v_a_373_, v_a_374_, v_a_375_);
if (lean_obj_tag(v___x_400_) == 0)
{
lean_object* v___x_401_; 
lean_dec_ref_known(v___x_400_, 1);
v___x_401_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(v_mvarId_370_, v___x_386_, v_a_373_);
return v___x_401_;
}
else
{
lean_dec(v___x_386_);
lean_dec(v_mvarId_370_);
return v___x_400_;
}
}
}
}
else
{
lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_409_; 
lean_dec(v_v_371_);
lean_dec(v_mvarId_370_);
v_a_402_ = lean_ctor_get(v___x_380_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_380_);
if (v_isSharedCheck_409_ == 0)
{
v___x_404_ = v___x_380_;
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_380_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_407_; 
if (v_isShared_405_ == 0)
{
v___x_407_ = v___x_404_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_a_402_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___boxed(lean_object* v_mvarId_410_, lean_object* v_v_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax(v_mvarId_410_, v_v_411_, v_a_412_, v_a_413_, v_a_414_, v_a_415_);
lean_dec(v_a_415_);
lean_dec_ref(v_a_414_);
lean_dec(v_a_413_);
lean_dec_ref(v_a_412_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1(lean_object* v_mvarId_418_, lean_object* v_val_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_){
_start:
{
lean_object* v___x_425_; 
v___x_425_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(v_mvarId_418_, v_val_419_, v___y_421_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___boxed(lean_object* v_mvarId_426_, lean_object* v_val_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1(v_mvarId_426_, v_val_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_);
lean_dec(v___y_431_);
lean_dec_ref(v___y_430_);
lean_dec(v___y_429_);
lean_dec_ref(v___y_428_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1(lean_object* v_00_u03b2_434_, lean_object* v_x_435_, lean_object* v_x_436_, lean_object* v_x_437_){
_start:
{
lean_object* v___x_438_; 
v___x_438_ = l_Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1___redArg(v_x_435_, v_x_436_, v_x_437_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_439_, lean_object* v_x_440_, size_t v_x_441_, size_t v_x_442_, lean_object* v_x_443_, lean_object* v_x_444_){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___redArg(v_x_440_, v_x_441_, v_x_442_, v_x_443_, v_x_444_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_446_, lean_object* v_x_447_, lean_object* v_x_448_, lean_object* v_x_449_, lean_object* v_x_450_, lean_object* v_x_451_){
_start:
{
size_t v_x_3169__boxed_452_; size_t v_x_3170__boxed_453_; lean_object* v_res_454_; 
v_x_3169__boxed_452_ = lean_unbox_usize(v_x_448_);
lean_dec(v_x_448_);
v_x_3170__boxed_453_ = lean_unbox_usize(v_x_449_);
lean_dec(v_x_449_);
v_res_454_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2(v_00_u03b2_446_, v_x_447_, v_x_3169__boxed_452_, v_x_3170__boxed_453_, v_x_450_, v_x_451_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_455_, lean_object* v_n_456_, lean_object* v_k_457_, lean_object* v_v_458_){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5___redArg(v_n_456_, v_k_457_, v_v_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6(lean_object* v_00_u03b2_460_, size_t v_depth_461_, lean_object* v_keys_462_, lean_object* v_vals_463_, lean_object* v_heq_464_, lean_object* v_i_465_, lean_object* v_entries_466_){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6___redArg(v_depth_461_, v_keys_462_, v_vals_463_, v_i_465_, v_entries_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6___boxed(lean_object* v_00_u03b2_468_, lean_object* v_depth_469_, lean_object* v_keys_470_, lean_object* v_vals_471_, lean_object* v_heq_472_, lean_object* v_i_473_, lean_object* v_entries_474_){
_start:
{
size_t v_depth_boxed_475_; lean_object* v_res_476_; 
v_depth_boxed_475_ = lean_unbox_usize(v_depth_469_);
lean_dec(v_depth_469_);
v_res_476_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__6(v_00_u03b2_468_, v_depth_boxed_475_, v_keys_470_, v_vals_471_, v_heq_472_, v_i_473_, v_entries_474_);
lean_dec_ref(v_vals_471_);
lean_dec_ref(v_keys_470_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5_spec__6(lean_object* v_00_u03b2_477_, lean_object* v_x_478_, lean_object* v_x_479_, lean_object* v_x_480_, lean_object* v_x_481_){
_start:
{
lean_object* v___x_482_; 
v___x_482_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1_spec__1_spec__2_spec__5_spec__6___redArg(v_x_478_, v_x_479_, v_x_480_, v_x_481_);
return v___x_482_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___closed__1(void){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_484_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___closed__0));
v___x_485_ = l_Lean_stringToMessageData(v___x_484_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve(lean_object* v_u_486_, lean_object* v_v_x27_487_, lean_object* v_mvarId_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_){
_start:
{
uint8_t v___x_494_; lean_object* v___y_496_; 
v___x_494_ = lean_level_eq(v_u_486_, v_v_x27_487_);
if (v___x_494_ == 0)
{
lean_object* v___x_507_; lean_object* v___x_508_; 
lean_dec(v_mvarId_488_);
lean_dec(v_u_486_);
v___x_507_ = lean_box(v___x_494_);
v___x_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
return v___x_508_;
}
else
{
lean_object* v_toCold_509_; lean_object* v_options_510_; uint8_t v_hasTrace_511_; 
v_toCold_509_ = lean_ctor_get(v_a_491_, 0);
v_options_510_ = lean_ctor_get(v_toCold_509_, 2);
v_hasTrace_511_ = lean_ctor_get_uint8(v_options_510_, sizeof(void*)*1);
if (v_hasTrace_511_ == 0)
{
v___y_496_ = v_a_490_;
goto v___jp_495_;
}
else
{
lean_object* v_inheritedTraceOptions_512_; lean_object* v_cls_513_; lean_object* v___x_514_; uint8_t v___x_515_; 
v_inheritedTraceOptions_512_ = lean_ctor_get(v_toCold_509_, 11);
v_cls_513_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7));
v___x_514_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10);
v___x_515_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_512_, v_options_510_, v___x_514_);
if (v___x_515_ == 0)
{
v___y_496_ = v_a_490_;
goto v___jp_495_;
}
else
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_516_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___closed__1, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___closed__1_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___closed__1);
lean_inc(v_mvarId_488_);
v___x_517_ = l_Lean_mkLevelMVar(v_mvarId_488_);
v___x_518_ = l_Lean_MessageData_ofLevel(v___x_517_);
v___x_519_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_519_, 0, v___x_516_);
lean_ctor_set(v___x_519_, 1, v___x_518_);
v___x_520_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14);
v___x_521_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_521_, 0, v___x_519_);
lean_ctor_set(v___x_521_, 1, v___x_520_);
lean_inc(v_u_486_);
v___x_522_ = l_Lean_MessageData_ofLevel(v_u_486_);
v___x_523_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_523_, 0, v___x_521_);
lean_ctor_set(v___x_523_, 1, v___x_522_);
v___x_524_ = l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(v_cls_513_, v___x_523_, v_a_489_, v_a_490_, v_a_491_, v_a_492_);
if (lean_obj_tag(v___x_524_) == 0)
{
lean_dec_ref_known(v___x_524_, 1);
v___y_496_ = v_a_490_;
goto v___jp_495_;
}
else
{
lean_object* v_a_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_532_; 
lean_dec(v_mvarId_488_);
lean_dec(v_u_486_);
v_a_525_ = lean_ctor_get(v___x_524_, 0);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_524_);
if (v_isSharedCheck_532_ == 0)
{
v___x_527_ = v___x_524_;
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_a_525_);
lean_dec(v___x_524_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_530_; 
if (v_isShared_528_ == 0)
{
v___x_530_ = v___x_527_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_a_525_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
}
}
}
v___jp_495_:
{
lean_object* v___x_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_505_; 
v___x_497_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(v_mvarId_488_, v_u_486_, v___y_496_);
v_isSharedCheck_505_ = !lean_is_exclusive(v___x_497_);
if (v_isSharedCheck_505_ == 0)
{
lean_object* v_unused_506_; 
v_unused_506_ = lean_ctor_get(v___x_497_, 0);
lean_dec(v_unused_506_);
v___x_499_ = v___x_497_;
v_isShared_500_ = v_isSharedCheck_505_;
goto v_resetjp_498_;
}
else
{
lean_dec(v___x_497_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_505_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_501_; lean_object* v___x_503_; 
v___x_501_ = lean_box(v___x_494_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v___x_501_);
v___x_503_ = v___x_499_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v___x_501_);
v___x_503_ = v_reuseFailAlloc_504_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
return v___x_503_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve___boxed(lean_object* v_u_533_, lean_object* v_v_x27_534_, lean_object* v_mvarId_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve(v_u_533_, v_v_x27_534_, v_mvarId_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_);
lean_dec(v_a_539_);
lean_dec_ref(v_a_538_);
lean_dec(v_a_537_);
lean_dec_ref(v_a_536_);
lean_dec(v_v_x27_534_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax(lean_object* v_u_542_, lean_object* v_v_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_){
_start:
{
if (lean_obj_tag(v_v_543_) == 2)
{
lean_object* v_a_553_; 
v_a_553_ = lean_ctor_get(v_v_543_, 1);
lean_inc(v_a_553_);
if (lean_obj_tag(v_a_553_) == 5)
{
lean_object* v_a_554_; lean_object* v_a_555_; lean_object* v___x_556_; 
v_a_554_ = lean_ctor_get(v_v_543_, 0);
lean_inc(v_a_554_);
lean_dec_ref_known(v_v_543_, 2);
v_a_555_ = lean_ctor_get(v_a_553_, 0);
lean_inc(v_a_555_);
lean_dec_ref_known(v_a_553_, 1);
v___x_556_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve(v_u_542_, v_a_554_, v_a_555_, v_a_544_, v_a_545_, v_a_546_, v_a_547_);
lean_dec(v_a_554_);
return v___x_556_;
}
else
{
lean_object* v_a_557_; 
v_a_557_ = lean_ctor_get(v_v_543_, 0);
lean_inc(v_a_557_);
lean_dec_ref_known(v_v_543_, 2);
if (lean_obj_tag(v_a_557_) == 5)
{
lean_object* v_a_558_; lean_object* v___x_559_; 
v_a_558_ = lean_ctor_get(v_a_557_, 0);
lean_inc(v_a_558_);
lean_dec_ref_known(v_a_557_, 1);
v___x_559_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax_solve(v_u_542_, v_a_553_, v_a_558_, v_a_544_, v_a_545_, v_a_546_, v_a_547_);
lean_dec(v_a_553_);
return v___x_559_;
}
else
{
lean_dec(v_a_557_);
lean_dec(v_a_553_);
lean_dec(v_u_542_);
goto v___jp_549_;
}
}
}
else
{
lean_dec(v_v_543_);
lean_dec(v_u_542_);
goto v___jp_549_;
}
v___jp_549_:
{
uint8_t v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_550_ = 0;
v___x_551_ = lean_box(v___x_550_);
v___x_552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_552_, 0, v___x_551_);
return v___x_552_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax___boxed(lean_object* v_u_560_, lean_object* v_v_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax(v_u_560_, v_v_561_, v_a_562_, v_a_563_, v_a_564_, v_a_565_);
lean_dec(v_a_565_);
lean_dec_ref(v_a_564_);
lean_dec(v_a_563_);
lean_dec_ref(v_a_562_);
return v_res_567_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__1(void){
_start:
{
lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_569_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__0));
v___x_570_ = l_Lean_stringToMessageData(v___x_569_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve(lean_object* v_u_u2081_571_, lean_object* v_u_u2082_572_, lean_object* v_v_x27_573_, lean_object* v_mvarId_574_, lean_object* v_a_575_, lean_object* v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_){
_start:
{
uint8_t v___x_580_; uint8_t v___x_581_; lean_object* v___y_583_; lean_object* v___y_595_; 
v___x_580_ = lean_level_eq(v_u_u2081_571_, v_v_x27_573_);
v___x_581_ = 1;
if (v___x_580_ == 0)
{
uint8_t v___x_606_; 
v___x_606_ = lean_level_eq(v_u_u2082_572_, v_v_x27_573_);
lean_dec(v_u_u2082_572_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; lean_object* v___x_608_; 
lean_dec(v_mvarId_574_);
lean_dec(v_u_u2081_571_);
v___x_607_ = lean_box(v___x_606_);
v___x_608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_608_, 0, v___x_607_);
return v___x_608_;
}
else
{
lean_object* v_toCold_609_; lean_object* v_options_610_; uint8_t v_hasTrace_611_; 
v_toCold_609_ = lean_ctor_get(v_a_577_, 0);
v_options_610_ = lean_ctor_get(v_toCold_609_, 2);
v_hasTrace_611_ = lean_ctor_get_uint8(v_options_610_, sizeof(void*)*1);
if (v_hasTrace_611_ == 0)
{
v___y_595_ = v_a_576_;
goto v___jp_594_;
}
else
{
lean_object* v_inheritedTraceOptions_612_; lean_object* v_cls_613_; lean_object* v___x_614_; uint8_t v___x_615_; 
v_inheritedTraceOptions_612_ = lean_ctor_get(v_toCold_609_, 11);
v_cls_613_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7));
v___x_614_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10);
v___x_615_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_612_, v_options_610_, v___x_614_);
if (v___x_615_ == 0)
{
v___y_595_ = v_a_576_;
goto v___jp_594_;
}
else
{
lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_616_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__1, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__1_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__1);
lean_inc(v_mvarId_574_);
v___x_617_ = l_Lean_mkLevelMVar(v_mvarId_574_);
v___x_618_ = l_Lean_MessageData_ofLevel(v___x_617_);
v___x_619_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_619_, 0, v___x_616_);
lean_ctor_set(v___x_619_, 1, v___x_618_);
v___x_620_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14);
v___x_621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_619_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
lean_inc(v_u_u2081_571_);
v___x_622_ = l_Lean_MessageData_ofLevel(v_u_u2081_571_);
v___x_623_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_623_, 0, v___x_621_);
lean_ctor_set(v___x_623_, 1, v___x_622_);
v___x_624_ = l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(v_cls_613_, v___x_623_, v_a_575_, v_a_576_, v_a_577_, v_a_578_);
if (lean_obj_tag(v___x_624_) == 0)
{
lean_dec_ref_known(v___x_624_, 1);
v___y_595_ = v_a_576_;
goto v___jp_594_;
}
else
{
lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_632_; 
lean_dec(v_mvarId_574_);
lean_dec(v_u_u2081_571_);
v_a_625_ = lean_ctor_get(v___x_624_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_632_ == 0)
{
v___x_627_ = v___x_624_;
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_624_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_630_; 
if (v_isShared_628_ == 0)
{
v___x_630_ = v___x_627_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_a_625_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
}
}
}
}
else
{
lean_object* v_toCold_633_; lean_object* v_options_634_; uint8_t v_hasTrace_635_; 
lean_dec(v_u_u2081_571_);
v_toCold_633_ = lean_ctor_get(v_a_577_, 0);
v_options_634_ = lean_ctor_get(v_toCold_633_, 2);
v_hasTrace_635_ = lean_ctor_get_uint8(v_options_634_, sizeof(void*)*1);
if (v_hasTrace_635_ == 0)
{
v___y_583_ = v_a_576_;
goto v___jp_582_;
}
else
{
lean_object* v_inheritedTraceOptions_636_; lean_object* v_cls_637_; lean_object* v___x_638_; uint8_t v___x_639_; 
v_inheritedTraceOptions_636_ = lean_ctor_get(v_toCold_633_, 11);
v_cls_637_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7));
v___x_638_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10);
v___x_639_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_636_, v_options_634_, v___x_638_);
if (v___x_639_ == 0)
{
v___y_583_ = v_a_576_;
goto v___jp_582_;
}
else
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_640_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__1, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__1_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___closed__1);
lean_inc(v_mvarId_574_);
v___x_641_ = l_Lean_mkLevelMVar(v_mvarId_574_);
v___x_642_ = l_Lean_MessageData_ofLevel(v___x_641_);
v___x_643_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_643_, 0, v___x_640_);
lean_ctor_set(v___x_643_, 1, v___x_642_);
v___x_644_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14);
v___x_645_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_645_, 0, v___x_643_);
lean_ctor_set(v___x_645_, 1, v___x_644_);
lean_inc(v_u_u2082_572_);
v___x_646_ = l_Lean_MessageData_ofLevel(v_u_u2082_572_);
v___x_647_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_647_, 0, v___x_645_);
lean_ctor_set(v___x_647_, 1, v___x_646_);
v___x_648_ = l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(v_cls_637_, v___x_647_, v_a_575_, v_a_576_, v_a_577_, v_a_578_);
if (lean_obj_tag(v___x_648_) == 0)
{
lean_dec_ref_known(v___x_648_, 1);
v___y_583_ = v_a_576_;
goto v___jp_582_;
}
else
{
lean_object* v_a_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_656_; 
lean_dec(v_mvarId_574_);
lean_dec(v_u_u2082_572_);
v_a_649_ = lean_ctor_get(v___x_648_, 0);
v_isSharedCheck_656_ = !lean_is_exclusive(v___x_648_);
if (v_isSharedCheck_656_ == 0)
{
v___x_651_ = v___x_648_;
v_isShared_652_ = v_isSharedCheck_656_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_a_649_);
lean_dec(v___x_648_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_656_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_654_; 
if (v_isShared_652_ == 0)
{
v___x_654_ = v___x_651_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v_a_649_);
v___x_654_ = v_reuseFailAlloc_655_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
return v___x_654_;
}
}
}
}
}
}
v___jp_582_:
{
lean_object* v___x_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_592_; 
v___x_584_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(v_mvarId_574_, v_u_u2082_572_, v___y_583_);
v_isSharedCheck_592_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_592_ == 0)
{
lean_object* v_unused_593_; 
v_unused_593_ = lean_ctor_get(v___x_584_, 0);
lean_dec(v_unused_593_);
v___x_586_ = v___x_584_;
v_isShared_587_ = v_isSharedCheck_592_;
goto v_resetjp_585_;
}
else
{
lean_dec(v___x_584_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_592_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_588_; lean_object* v___x_590_; 
v___x_588_ = lean_box(v___x_581_);
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 0, v___x_588_);
v___x_590_ = v___x_586_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v___x_588_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
v___jp_594_:
{
lean_object* v___x_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_604_; 
v___x_596_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(v_mvarId_574_, v_u_u2081_571_, v___y_595_);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_596_);
if (v_isSharedCheck_604_ == 0)
{
lean_object* v_unused_605_; 
v_unused_605_ = lean_ctor_get(v___x_596_, 0);
lean_dec(v_unused_605_);
v___x_598_ = v___x_596_;
v_isShared_599_ = v_isSharedCheck_604_;
goto v_resetjp_597_;
}
else
{
lean_dec(v___x_596_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_604_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___x_600_; lean_object* v___x_602_; 
v___x_600_ = lean_box(v___x_581_);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 0, v___x_600_);
v___x_602_ = v___x_598_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v___x_600_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve___boxed(lean_object* v_u_u2081_657_, lean_object* v_u_u2082_658_, lean_object* v_v_x27_659_, lean_object* v_mvarId_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve(v_u_u2081_657_, v_u_u2082_658_, v_v_x27_659_, v_mvarId_660_, v_a_661_, v_a_662_, v_a_663_, v_a_664_);
lean_dec(v_a_664_);
lean_dec_ref(v_a_663_);
lean_dec(v_a_662_);
lean_dec_ref(v_a_661_);
lean_dec(v_v_x27_659_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax(lean_object* v_u_667_, lean_object* v_v_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_){
_start:
{
if (lean_obj_tag(v_u_667_) == 2)
{
if (lean_obj_tag(v_v_668_) == 2)
{
lean_object* v_a_678_; 
v_a_678_ = lean_ctor_get(v_v_668_, 1);
lean_inc(v_a_678_);
if (lean_obj_tag(v_a_678_) == 5)
{
lean_object* v_a_679_; lean_object* v_a_680_; lean_object* v_a_681_; lean_object* v_a_682_; lean_object* v___x_683_; 
v_a_679_ = lean_ctor_get(v_u_667_, 0);
lean_inc(v_a_679_);
v_a_680_ = lean_ctor_get(v_u_667_, 1);
lean_inc(v_a_680_);
lean_dec_ref_known(v_u_667_, 2);
v_a_681_ = lean_ctor_get(v_v_668_, 0);
lean_inc(v_a_681_);
lean_dec_ref_known(v_v_668_, 2);
v_a_682_ = lean_ctor_get(v_a_678_, 0);
lean_inc(v_a_682_);
lean_dec_ref_known(v_a_678_, 1);
v___x_683_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve(v_a_679_, v_a_680_, v_a_681_, v_a_682_, v_a_669_, v_a_670_, v_a_671_, v_a_672_);
lean_dec(v_a_681_);
return v___x_683_;
}
else
{
lean_object* v_a_684_; 
v_a_684_ = lean_ctor_get(v_v_668_, 0);
lean_inc(v_a_684_);
lean_dec_ref_known(v_v_668_, 2);
if (lean_obj_tag(v_a_684_) == 5)
{
lean_object* v_a_685_; lean_object* v_a_686_; lean_object* v_a_687_; lean_object* v___x_688_; 
v_a_685_ = lean_ctor_get(v_u_667_, 0);
lean_inc(v_a_685_);
v_a_686_ = lean_ctor_get(v_u_667_, 1);
lean_inc(v_a_686_);
lean_dec_ref_known(v_u_667_, 2);
v_a_687_ = lean_ctor_get(v_a_684_, 0);
lean_inc(v_a_687_);
lean_dec_ref_known(v_a_684_, 1);
v___x_688_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax_solve(v_a_685_, v_a_686_, v_a_678_, v_a_687_, v_a_669_, v_a_670_, v_a_671_, v_a_672_);
lean_dec(v_a_678_);
return v___x_688_;
}
else
{
lean_dec(v_a_684_);
lean_dec(v_a_678_);
lean_dec_ref_known(v_u_667_, 2);
goto v___jp_674_;
}
}
}
else
{
lean_dec_ref_known(v_u_667_, 2);
lean_dec(v_v_668_);
goto v___jp_674_;
}
}
else
{
lean_dec(v_v_668_);
lean_dec(v_u_667_);
goto v___jp_674_;
}
v___jp_674_:
{
uint8_t v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_675_ = 0;
v___x_676_ = lean_box(v___x_675_);
v___x_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_677_, 0, v___x_676_);
return v___x_677_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax___boxed(lean_object* v_u_689_, lean_object* v_v_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax(v_u_689_, v_v_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_);
lean_dec(v_a_694_);
lean_dec_ref(v_a_693_);
lean_dec(v_a_692_);
lean_dec_ref(v_a_691_);
return v_res_696_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__2(void){
_start:
{
lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_702_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1));
v___x_703_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__9));
v___x_704_ = l_Lean_Name_append(v___x_703_, v___x_702_);
return v___x_704_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4(void){
_start:
{
lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_706_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__3));
v___x_707_ = l_Lean_stringToMessageData(v___x_706_);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(lean_object* v_lhs_708_, lean_object* v_rhs_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_){
_start:
{
lean_object* v_toCold_715_; lean_object* v_ref_716_; lean_object* v___y_718_; lean_object* v_options_738_; uint8_t v_hasTrace_739_; 
v_toCold_715_ = lean_ctor_get(v_a_712_, 0);
v_ref_716_ = lean_ctor_get(v_a_712_, 2);
v_options_738_ = lean_ctor_get(v_toCold_715_, 2);
v_hasTrace_739_ = lean_ctor_get_uint8(v_options_738_, sizeof(void*)*1);
if (v_hasTrace_739_ == 0)
{
v___y_718_ = v_a_711_;
goto v___jp_717_;
}
else
{
lean_object* v_inheritedTraceOptions_740_; lean_object* v___x_741_; lean_object* v___x_742_; uint8_t v___x_743_; 
v_inheritedTraceOptions_740_ = lean_ctor_get(v_toCold_715_, 11);
v___x_741_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1));
v___x_742_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__2, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__2_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__2);
v___x_743_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_740_, v_options_738_, v___x_742_);
if (v___x_743_ == 0)
{
v___y_718_ = v_a_711_;
goto v___jp_717_;
}
else
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
lean_inc(v_lhs_708_);
v___x_744_ = l_Lean_MessageData_ofLevel(v_lhs_708_);
v___x_745_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4);
v___x_746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_746_, 0, v___x_744_);
lean_ctor_set(v___x_746_, 1, v___x_745_);
lean_inc(v_rhs_709_);
v___x_747_ = l_Lean_MessageData_ofLevel(v_rhs_709_);
v___x_748_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_748_, 0, v___x_746_);
lean_ctor_set(v___x_748_, 1, v___x_747_);
v___x_749_ = l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(v___x_741_, v___x_748_, v_a_710_, v_a_711_, v_a_712_, v_a_713_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_dec_ref_known(v___x_749_, 1);
v___y_718_ = v_a_711_;
goto v___jp_717_;
}
else
{
lean_dec(v_rhs_709_);
lean_dec(v_lhs_708_);
return v___x_749_;
}
}
}
v___jp_717_:
{
lean_object* v___x_719_; lean_object* v_mctx_720_; lean_object* v_cache_721_; lean_object* v_zetaDeltaFVarIds_722_; lean_object* v_postponed_723_; lean_object* v_diag_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_737_; 
v___x_719_ = lean_st_ref_take(v___y_718_);
v_mctx_720_ = lean_ctor_get(v___x_719_, 0);
v_cache_721_ = lean_ctor_get(v___x_719_, 1);
v_zetaDeltaFVarIds_722_ = lean_ctor_get(v___x_719_, 2);
v_postponed_723_ = lean_ctor_get(v___x_719_, 3);
v_diag_724_ = lean_ctor_get(v___x_719_, 4);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_719_);
if (v_isSharedCheck_737_ == 0)
{
v___x_726_ = v___x_719_;
v_isShared_727_ = v_isSharedCheck_737_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_diag_724_);
lean_inc(v_postponed_723_);
lean_inc(v_zetaDeltaFVarIds_722_);
lean_inc(v_cache_721_);
lean_inc(v_mctx_720_);
lean_dec(v___x_719_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_737_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v_defEqCtx_x3f_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_733_; 
v_defEqCtx_x3f_728_ = lean_ctor_get(v_a_710_, 4);
v___x_729_ = lean_box(0);
lean_inc(v_defEqCtx_x3f_728_);
lean_inc(v_ref_716_);
v___x_730_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_730_, 0, v_ref_716_);
lean_ctor_set(v___x_730_, 1, v_lhs_708_);
lean_ctor_set(v___x_730_, 2, v_rhs_709_);
lean_ctor_set(v___x_730_, 3, v_defEqCtx_x3f_728_);
v___x_731_ = l_Lean_PersistentArray_push___redArg(v_postponed_723_, v___x_730_);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 3, v___x_731_);
v___x_733_ = v___x_726_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_mctx_720_);
lean_ctor_set(v_reuseFailAlloc_736_, 1, v_cache_721_);
lean_ctor_set(v_reuseFailAlloc_736_, 2, v_zetaDeltaFVarIds_722_);
lean_ctor_set(v_reuseFailAlloc_736_, 3, v___x_731_);
lean_ctor_set(v_reuseFailAlloc_736_, 4, v_diag_724_);
v___x_733_ = v_reuseFailAlloc_736_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_734_ = lean_st_ref_put(v___y_718_, v___x_733_);
v___x_735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_735_, 0, v___x_729_);
return v___x_735_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___boxed(lean_object* v_lhs_750_, lean_object* v_rhs_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(v_lhs_750_, v_rhs_751_, v_a_752_, v_a_753_, v_a_754_, v_a_755_);
lean_dec(v_a_755_);
lean_dec_ref(v_a_754_);
lean_dec(v_a_753_);
lean_dec_ref(v_a_752_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_isMVarWithGreaterDepth(lean_object* v_v_758_, lean_object* v_mvarId_759_, lean_object* v_a_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_){
_start:
{
if (lean_obj_tag(v_v_758_) == 5)
{
lean_object* v_a_765_; lean_object* v___x_766_; 
v_a_765_ = lean_ctor_get(v_v_758_, 0);
lean_inc(v_a_765_);
lean_dec_ref_known(v_v_758_, 1);
v___x_766_ = l_Lean_LMVarId_getLevel(v_a_765_, v_a_760_, v_a_761_, v_a_762_, v_a_763_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v___x_768_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_a_767_);
lean_dec_ref_known(v___x_766_, 1);
v___x_768_ = l_Lean_LMVarId_getLevel(v_mvarId_759_, v_a_760_, v_a_761_, v_a_762_, v_a_763_);
if (lean_obj_tag(v___x_768_) == 0)
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_778_; 
v_a_769_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_778_ == 0)
{
v___x_771_ = v___x_768_;
v_isShared_772_ = v_isSharedCheck_778_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_768_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_778_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
uint8_t v___x_773_; lean_object* v___x_774_; lean_object* v___x_776_; 
v___x_773_ = lean_nat_dec_lt(v_a_769_, v_a_767_);
lean_dec(v_a_767_);
lean_dec(v_a_769_);
v___x_774_ = lean_box(v___x_773_);
if (v_isShared_772_ == 0)
{
lean_ctor_set(v___x_771_, 0, v___x_774_);
v___x_776_ = v___x_771_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v___x_774_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
else
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_786_; 
lean_dec(v_a_767_);
v_a_779_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_786_ == 0)
{
v___x_781_ = v___x_768_;
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_768_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_784_; 
if (v_isShared_782_ == 0)
{
v___x_784_ = v___x_781_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_a_779_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
}
else
{
lean_object* v_a_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_794_; 
lean_dec(v_mvarId_759_);
v_a_787_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_794_ == 0)
{
v___x_789_ = v___x_766_;
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_a_787_);
lean_dec(v___x_766_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_792_; 
if (v_isShared_790_ == 0)
{
v___x_792_ = v___x_789_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_a_787_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
}
else
{
uint8_t v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
lean_dec(v_mvarId_759_);
lean_dec(v_v_758_);
v___x_795_ = 0;
v___x_796_ = lean_box(v___x_795_);
v___x_797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_797_, 0, v___x_796_);
return v___x_797_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_isMVarWithGreaterDepth___boxed(lean_object* v_v_798_, lean_object* v_mvarId_799_, lean_object* v_a_800_, lean_object* v_a_801_, lean_object* v_a_802_, lean_object* v_a_803_, lean_object* v_a_804_){
_start:
{
lean_object* v_res_805_; 
v_res_805_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_isMVarWithGreaterDepth(v_v_798_, v_mvarId_799_, v_a_800_, v_a_801_, v_a_802_, v_a_803_);
lean_dec(v_a_803_);
lean_dec_ref(v_a_802_);
lean_dec(v_a_801_);
lean_dec_ref(v_a_800_);
return v_res_805_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(lean_object* v_u_806_, lean_object* v_v_807_, lean_object* v_a_808_, lean_object* v_a_809_, lean_object* v_a_810_, lean_object* v_a_811_){
_start:
{
lean_object* v___y_814_; lean_object* v___y_839_; lean_object* v___y_840_; lean_object* v___y_841_; lean_object* v___y_842_; lean_object* v___y_889_; lean_object* v___y_903_; 
switch(lean_obj_tag(v_u_806_))
{
case 5:
{
lean_object* v_a_916_; lean_object* v___x_917_; 
v_a_916_ = lean_ctor_get(v_u_806_, 0);
lean_inc(v_a_916_);
v___x_917_ = l_Lean_LMVarId_isReadOnly(v_a_916_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
if (lean_obj_tag(v___x_917_) == 0)
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_1014_; 
v_a_918_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_920_ = v___x_917_;
v_isShared_921_ = v_isSharedCheck_1014_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_917_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_1014_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
uint8_t v___x_922_; 
v___x_922_ = lean_unbox(v_a_918_);
lean_dec(v_a_918_);
if (v___x_922_ == 0)
{
lean_object* v___x_923_; 
lean_del_object(v___x_920_);
lean_inc(v_a_916_);
lean_inc(v_v_807_);
v___x_923_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_isMVarWithGreaterDepth(v_v_807_, v_a_916_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
if (lean_obj_tag(v___x_923_) == 0)
{
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_1000_; 
v_a_924_ = lean_ctor_get(v___x_923_, 0);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___x_923_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_926_ = v___x_923_;
v_isShared_927_ = v_isSharedCheck_1000_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_923_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_1000_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
uint8_t v___x_934_; 
v___x_934_ = lean_unbox(v_a_924_);
lean_dec(v_a_924_);
if (v___x_934_ == 0)
{
uint8_t v___x_935_; 
v___x_935_ = l_Lean_Level_occurs(v_u_806_, v_v_807_);
if (v___x_935_ == 0)
{
lean_object* v_toCold_936_; lean_object* v_options_937_; uint8_t v_hasTrace_938_; 
lean_del_object(v___x_926_);
v_toCold_936_ = lean_ctor_get(v_a_810_, 0);
v_options_937_ = lean_ctor_get(v_toCold_936_, 2);
v_hasTrace_938_ = lean_ctor_get_uint8(v_options_937_, sizeof(void*)*1);
if (v_hasTrace_938_ == 0)
{
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec_ref(v_a_808_);
v___y_889_ = v_a_809_;
goto v___jp_888_;
}
else
{
lean_object* v_inheritedTraceOptions_939_; lean_object* v___x_940_; lean_object* v___x_941_; uint8_t v___x_942_; 
v_inheritedTraceOptions_939_ = lean_ctor_get(v_toCold_936_, 11);
v___x_940_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7));
v___x_941_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10);
v___x_942_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_939_, v_options_937_, v___x_941_);
if (v___x_942_ == 0)
{
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec_ref(v_a_808_);
v___y_889_ = v_a_809_;
goto v___jp_888_;
}
else
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
lean_inc_ref(v_u_806_);
v___x_943_ = l_Lean_MessageData_ofLevel(v_u_806_);
v___x_944_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14);
v___x_945_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_945_, 0, v___x_943_);
lean_ctor_set(v___x_945_, 1, v___x_944_);
lean_inc(v_v_807_);
v___x_946_ = l_Lean_MessageData_ofLevel(v_v_807_);
v___x_947_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_947_, 0, v___x_945_);
lean_ctor_set(v___x_947_, 1, v___x_946_);
v___x_948_ = l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(v___x_940_, v___x_947_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec_ref(v_a_808_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_dec_ref_known(v___x_948_, 1);
v___y_889_ = v_a_809_;
goto v___jp_888_;
}
else
{
lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_956_; 
lean_dec_ref_known(v_u_806_, 1);
lean_dec(v_a_809_);
lean_dec(v_v_807_);
v_a_949_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_956_ == 0)
{
v___x_951_ = v___x_948_;
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v___x_948_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_954_; 
if (v_isShared_952_ == 0)
{
v___x_954_ = v___x_951_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_a_949_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
}
}
}
else
{
uint8_t v___x_957_; 
v___x_957_ = l_Lean_Level_isMax(v_v_807_);
if (v___x_957_ == 0)
{
lean_dec_ref_known(v_u_806_, 1);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
lean_dec(v_v_807_);
goto v___jp_928_;
}
else
{
uint8_t v___x_958_; 
v___x_958_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_strictOccursMax(v_u_806_, v_v_807_);
if (v___x_958_ == 0)
{
if (v___x_957_ == 0)
{
lean_dec_ref_known(v_u_806_, 1);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
lean_dec(v_v_807_);
goto v___jp_928_;
}
else
{
lean_object* v___x_959_; lean_object* v___x_960_; 
lean_del_object(v___x_926_);
v___x_959_ = l_Lean_Level_mvarId_x21(v_u_806_);
lean_dec_ref_known(v_u_806_, 1);
v___x_960_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax(v___x_959_, v_v_807_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
if (lean_obj_tag(v___x_960_) == 0)
{
lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_969_; 
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_960_);
if (v_isSharedCheck_969_ == 0)
{
lean_object* v_unused_970_; 
v_unused_970_ = lean_ctor_get(v___x_960_, 0);
lean_dec(v_unused_970_);
v___x_962_ = v___x_960_;
v_isShared_963_ = v_isSharedCheck_969_;
goto v_resetjp_961_;
}
else
{
lean_dec(v___x_960_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_969_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
uint8_t v___x_964_; lean_object* v___x_965_; lean_object* v___x_967_; 
v___x_964_ = 1;
v___x_965_ = lean_box(v___x_964_);
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 0, v___x_965_);
v___x_967_ = v___x_962_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v___x_965_);
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
lean_object* v_a_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_978_; 
v_a_971_ = lean_ctor_get(v___x_960_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_960_);
if (v_isSharedCheck_978_ == 0)
{
v___x_973_ = v___x_960_;
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_a_971_);
lean_dec(v___x_960_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___x_976_; 
if (v_isShared_974_ == 0)
{
v___x_976_ = v___x_973_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_a_971_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_u_806_, 1);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
lean_dec(v_v_807_);
goto v___jp_928_;
}
}
}
}
else
{
lean_object* v_toCold_979_; lean_object* v_options_980_; uint8_t v_hasTrace_981_; 
lean_del_object(v___x_926_);
v_toCold_979_ = lean_ctor_get(v_a_810_, 0);
v_options_980_ = lean_ctor_get(v_toCold_979_, 2);
v_hasTrace_981_ = lean_ctor_get_uint8(v_options_980_, sizeof(void*)*1);
if (v_hasTrace_981_ == 0)
{
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec_ref(v_a_808_);
v___y_903_ = v_a_809_;
goto v___jp_902_;
}
else
{
lean_object* v_inheritedTraceOptions_982_; lean_object* v___x_983_; lean_object* v___x_984_; uint8_t v___x_985_; 
v_inheritedTraceOptions_982_ = lean_ctor_get(v_toCold_979_, 11);
v___x_983_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__7));
v___x_984_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__10);
v___x_985_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_982_, v_options_980_, v___x_984_);
if (v___x_985_ == 0)
{
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec_ref(v_a_808_);
v___y_903_ = v_a_809_;
goto v___jp_902_;
}
else
{
lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
lean_inc(v_v_807_);
v___x_986_ = l_Lean_MessageData_ofLevel(v_v_807_);
v___x_987_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__14);
v___x_988_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_988_, 0, v___x_986_);
lean_ctor_set(v___x_988_, 1, v___x_987_);
lean_inc_ref(v_u_806_);
v___x_989_ = l_Lean_MessageData_ofLevel(v_u_806_);
v___x_990_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_988_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
v___x_991_ = l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(v___x_983_, v___x_990_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec_ref(v_a_808_);
if (lean_obj_tag(v___x_991_) == 0)
{
lean_dec_ref_known(v___x_991_, 1);
v___y_903_ = v_a_809_;
goto v___jp_902_;
}
else
{
lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_999_; 
lean_dec_ref_known(v_u_806_, 1);
lean_dec(v_a_809_);
lean_dec(v_v_807_);
v_a_992_ = lean_ctor_get(v___x_991_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_999_ == 0)
{
v___x_994_ = v___x_991_;
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_dec(v___x_991_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_997_; 
if (v_isShared_995_ == 0)
{
v___x_997_ = v___x_994_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_a_992_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
return v___x_997_;
}
}
}
}
}
}
v___jp_928_:
{
uint8_t v___x_929_; lean_object* v___x_930_; lean_object* v___x_932_; 
v___x_929_ = 2;
v___x_930_ = lean_box(v___x_929_);
if (v_isShared_927_ == 0)
{
lean_ctor_set(v___x_926_, 0, v___x_930_);
v___x_932_ = v___x_926_;
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
}
else
{
lean_object* v_a_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1008_; 
lean_dec_ref_known(v_u_806_, 1);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
lean_dec(v_v_807_);
v_a_1001_ = lean_ctor_get(v___x_923_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_923_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_1003_ = v___x_923_;
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_a_1001_);
lean_dec(v___x_923_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v___x_1006_; 
if (v_isShared_1004_ == 0)
{
v___x_1006_ = v___x_1003_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_a_1001_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
}
}
else
{
uint8_t v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1012_; 
lean_dec_ref_known(v_u_806_, 1);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
lean_dec(v_v_807_);
v___x_1009_ = 2;
v___x_1010_ = lean_box(v___x_1009_);
if (v_isShared_921_ == 0)
{
lean_ctor_set(v___x_920_, 0, v___x_1010_);
v___x_1012_ = v___x_920_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v___x_1010_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
return v___x_1012_;
}
}
}
}
else
{
lean_object* v_a_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1022_; 
lean_dec_ref_known(v_u_806_, 1);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
lean_dec(v_v_807_);
v_a_1015_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1017_ = v___x_917_;
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_a_1015_);
lean_dec(v___x_917_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1020_; 
if (v_isShared_1018_ == 0)
{
v___x_1020_ = v___x_1017_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_a_1015_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
}
case 0:
{
switch(lean_obj_tag(v_v_807_))
{
case 5:
{
lean_dec_ref_known(v_v_807_, 1);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
goto v___jp_884_;
}
case 2:
{
lean_object* v_a_1023_; lean_object* v_a_1024_; lean_object* v___x_1025_; 
v_a_1023_ = lean_ctor_get(v_v_807_, 0);
lean_inc(v_a_1023_);
v_a_1024_ = lean_ctor_get(v_v_807_, 1);
lean_inc(v_a_1024_);
lean_dec_ref_known(v_v_807_, 2);
lean_inc(v_a_811_);
lean_inc_ref(v_a_810_);
lean_inc(v_a_809_);
lean_inc_ref(v_a_808_);
v___x_1025_ = lean_is_level_def_eq(v_u_806_, v_a_1023_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
if (lean_obj_tag(v___x_1025_) == 0)
{
lean_object* v_a_1026_; uint8_t v___x_1027_; 
v_a_1026_ = lean_ctor_get(v___x_1025_, 0);
lean_inc(v_a_1026_);
v___x_1027_ = lean_unbox(v_a_1026_);
lean_dec(v_a_1026_);
if (v___x_1027_ == 0)
{
lean_dec(v_a_1024_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
v___y_814_ = v___x_1025_;
goto v___jp_813_;
}
else
{
lean_object* v___x_1028_; 
lean_dec_ref_known(v___x_1025_, 1);
v___x_1028_ = lean_is_level_def_eq(v_u_806_, v_a_1024_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
v___y_814_ = v___x_1028_;
goto v___jp_813_;
}
}
else
{
lean_dec(v_a_1024_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
v___y_814_ = v___x_1025_;
goto v___jp_813_;
}
}
case 3:
{
lean_object* v_a_1029_; lean_object* v___x_1030_; 
v_a_1029_ = lean_ctor_get(v_v_807_, 1);
lean_inc(v_a_1029_);
lean_dec_ref_known(v_v_807_, 2);
v___x_1030_ = lean_is_level_def_eq(v_u_806_, v_a_1029_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_object* v_a_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1041_; 
v_a_1031_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1041_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1041_ == 0)
{
v___x_1033_ = v___x_1030_;
v_isShared_1034_ = v_isSharedCheck_1041_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_a_1031_);
lean_dec(v___x_1030_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1041_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
uint8_t v___x_1035_; uint8_t v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1039_; 
v___x_1035_ = lean_unbox(v_a_1031_);
lean_dec(v_a_1031_);
v___x_1036_ = l_Lean_Bool_toLBool(v___x_1035_);
v___x_1037_ = lean_box(v___x_1036_);
if (v_isShared_1034_ == 0)
{
lean_ctor_set(v___x_1033_, 0, v___x_1037_);
v___x_1039_ = v___x_1033_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v___x_1037_);
v___x_1039_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
return v___x_1039_;
}
}
}
else
{
lean_object* v_a_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1049_; 
v_a_1042_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1049_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1049_ == 0)
{
v___x_1044_ = v___x_1030_;
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_a_1042_);
lean_dec(v___x_1030_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v___x_1047_; 
if (v_isShared_1045_ == 0)
{
v___x_1047_ = v___x_1044_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v_a_1042_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
}
}
case 1:
{
uint8_t v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
lean_dec_ref_known(v_v_807_, 1);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
v___x_1050_ = 0;
v___x_1051_ = lean_box(v___x_1050_);
v___x_1052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1051_);
return v___x_1052_;
}
default: 
{
v___y_839_ = v_a_808_;
v___y_840_ = v_a_809_;
v___y_841_ = v_a_810_;
v___y_842_ = v_a_811_;
goto v___jp_838_;
}
}
}
case 1:
{
lean_object* v_a_1053_; uint8_t v___y_1055_; 
v_a_1053_ = lean_ctor_get(v_u_806_, 0);
lean_inc(v_a_1053_);
lean_dec_ref_known(v_u_806_, 1);
if (lean_obj_tag(v_v_807_) == 5)
{
lean_dec_ref_known(v_v_807_, 1);
lean_dec(v_a_1053_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
goto v___jp_884_;
}
else
{
uint8_t v___x_1099_; 
v___x_1099_ = l_Lean_Level_isParam(v_v_807_);
if (v___x_1099_ == 0)
{
uint8_t v___x_1100_; 
v___x_1100_ = l_Lean_Level_isMVar(v_a_1053_);
if (v___x_1100_ == 0)
{
v___y_1055_ = v___x_1099_;
goto v___jp_1054_;
}
else
{
uint8_t v___x_1101_; 
v___x_1101_ = l_Lean_Level_occurs(v_a_1053_, v_v_807_);
v___y_1055_ = v___x_1101_;
goto v___jp_1054_;
}
}
else
{
uint8_t v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; 
lean_dec(v_a_1053_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
lean_dec(v_v_807_);
v___x_1102_ = 0;
v___x_1103_ = lean_box(v___x_1102_);
v___x_1104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1103_);
return v___x_1104_;
}
}
v___jp_1054_:
{
if (v___y_1055_ == 0)
{
lean_object* v___x_1056_; 
v___x_1056_ = l_Lean_Meta_decLevel_x3f(v_v_807_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
if (lean_obj_tag(v___x_1056_) == 0)
{
lean_object* v_a_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1087_; 
v_a_1057_ = lean_ctor_get(v___x_1056_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1059_ = v___x_1056_;
v_isShared_1060_ = v_isSharedCheck_1087_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_a_1057_);
lean_dec(v___x_1056_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1087_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
if (lean_obj_tag(v_a_1057_) == 0)
{
uint8_t v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1064_; 
lean_dec(v_a_1053_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
v___x_1061_ = 2;
v___x_1062_ = lean_box(v___x_1061_);
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 0, v___x_1062_);
v___x_1064_ = v___x_1059_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v___x_1062_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
return v___x_1064_;
}
}
else
{
lean_object* v_val_1066_; lean_object* v___x_1067_; 
lean_del_object(v___x_1059_);
v_val_1066_ = lean_ctor_get(v_a_1057_, 0);
lean_inc(v_val_1066_);
lean_dec_ref_known(v_a_1057_, 1);
v___x_1067_ = lean_is_level_def_eq(v_a_1053_, v_val_1066_, v_a_808_, v_a_809_, v_a_810_, v_a_811_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1078_; 
v_a_1068_ = lean_ctor_get(v___x_1067_, 0);
v_isSharedCheck_1078_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1070_ = v___x_1067_;
v_isShared_1071_ = v_isSharedCheck_1078_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v___x_1067_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1078_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
uint8_t v___x_1072_; uint8_t v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1076_; 
v___x_1072_ = lean_unbox(v_a_1068_);
lean_dec(v_a_1068_);
v___x_1073_ = l_Lean_Bool_toLBool(v___x_1072_);
v___x_1074_ = lean_box(v___x_1073_);
if (v_isShared_1071_ == 0)
{
lean_ctor_set(v___x_1070_, 0, v___x_1074_);
v___x_1076_ = v___x_1070_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v___x_1074_);
v___x_1076_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
return v___x_1076_;
}
}
}
else
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1086_; 
v_a_1079_ = lean_ctor_get(v___x_1067_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1081_ = v___x_1067_;
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___x_1067_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1084_; 
if (v_isShared_1082_ == 0)
{
v___x_1084_ = v___x_1081_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1079_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
}
}
}
else
{
lean_object* v_a_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1095_; 
lean_dec(v_a_1053_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
v_a_1088_ = lean_ctor_get(v___x_1056_, 0);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1090_ = v___x_1056_;
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_a_1088_);
lean_dec(v___x_1056_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v___x_1093_; 
if (v_isShared_1091_ == 0)
{
v___x_1093_ = v___x_1090_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v_a_1088_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
}
}
else
{
uint8_t v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
lean_dec(v_a_1053_);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
lean_dec(v_v_807_);
v___x_1096_ = 2;
v___x_1097_ = lean_box(v___x_1096_);
v___x_1098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1097_);
return v___x_1098_;
}
}
}
default: 
{
if (lean_obj_tag(v_v_807_) == 5)
{
lean_dec_ref_known(v_v_807_, 1);
lean_dec(v_a_811_);
lean_dec_ref(v_a_810_);
lean_dec(v_a_809_);
lean_dec_ref(v_a_808_);
lean_dec(v_u_806_);
goto v___jp_884_;
}
else
{
v___y_839_ = v_a_808_;
v___y_840_ = v_a_809_;
v___y_841_ = v_a_810_;
v___y_842_ = v_a_811_;
goto v___jp_838_;
}
}
}
v___jp_813_:
{
if (lean_obj_tag(v___y_814_) == 0)
{
lean_object* v_a_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_825_; 
v_a_815_ = lean_ctor_get(v___y_814_, 0);
v_isSharedCheck_825_ = !lean_is_exclusive(v___y_814_);
if (v_isSharedCheck_825_ == 0)
{
v___x_817_ = v___y_814_;
v_isShared_818_ = v_isSharedCheck_825_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_a_815_);
lean_dec(v___y_814_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_825_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
uint8_t v___x_819_; uint8_t v___x_820_; lean_object* v___x_821_; lean_object* v___x_823_; 
v___x_819_ = lean_unbox(v_a_815_);
lean_dec(v_a_815_);
v___x_820_ = l_Lean_Bool_toLBool(v___x_819_);
v___x_821_ = lean_box(v___x_820_);
if (v_isShared_818_ == 0)
{
lean_ctor_set(v___x_817_, 0, v___x_821_);
v___x_823_ = v___x_817_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v___x_821_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
}
else
{
lean_object* v_a_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_833_; 
v_a_826_ = lean_ctor_get(v___y_814_, 0);
v_isSharedCheck_833_ = !lean_is_exclusive(v___y_814_);
if (v_isSharedCheck_833_ == 0)
{
v___x_828_ = v___y_814_;
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_a_826_);
lean_dec(v___y_814_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_831_; 
if (v_isShared_829_ == 0)
{
v___x_831_ = v___x_828_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v_a_826_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
}
}
v___jp_834_:
{
uint8_t v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_835_ = 2;
v___x_836_ = lean_box(v___x_835_);
v___x_837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
return v___x_837_;
}
v___jp_838_:
{
uint8_t v_univApprox_843_; 
v_univApprox_843_ = lean_ctor_get_uint8(v___y_839_, sizeof(void*)*7 + 1);
if (v_univApprox_843_ == 0)
{
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
lean_dec(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v_v_807_);
lean_dec(v_u_806_);
goto v___jp_834_;
}
else
{
lean_object* v___x_844_; 
lean_inc(v_v_807_);
lean_inc(v_u_806_);
v___x_844_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxSelfMax(v_u_806_, v_v_807_, v___y_839_, v___y_840_, v___y_841_, v___y_842_);
if (lean_obj_tag(v___x_844_) == 0)
{
lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_875_; 
v_a_845_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_875_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_875_ == 0)
{
v___x_847_ = v___x_844_;
v_isShared_848_ = v_isSharedCheck_875_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_a_845_);
lean_dec(v___x_844_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_875_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
uint8_t v___x_849_; 
v___x_849_ = lean_unbox(v_a_845_);
lean_dec(v_a_845_);
if (v___x_849_ == 0)
{
lean_object* v___x_850_; 
lean_del_object(v___x_847_);
v___x_850_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_tryApproxMaxMax(v_u_806_, v_v_807_, v___y_839_, v___y_840_, v___y_841_, v___y_842_);
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
lean_dec(v___y_840_);
lean_dec_ref(v___y_839_);
if (lean_obj_tag(v___x_850_) == 0)
{
lean_object* v_a_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_861_; 
v_a_851_ = lean_ctor_get(v___x_850_, 0);
v_isSharedCheck_861_ = !lean_is_exclusive(v___x_850_);
if (v_isSharedCheck_861_ == 0)
{
v___x_853_ = v___x_850_;
v_isShared_854_ = v_isSharedCheck_861_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_a_851_);
lean_dec(v___x_850_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_861_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
uint8_t v___x_855_; 
v___x_855_ = lean_unbox(v_a_851_);
lean_dec(v_a_851_);
if (v___x_855_ == 0)
{
lean_del_object(v___x_853_);
goto v___jp_834_;
}
else
{
uint8_t v___x_856_; lean_object* v___x_857_; lean_object* v___x_859_; 
v___x_856_ = 1;
v___x_857_ = lean_box(v___x_856_);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 0, v___x_857_);
v___x_859_ = v___x_853_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v___x_857_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
}
else
{
lean_object* v_a_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_869_; 
v_a_862_ = lean_ctor_get(v___x_850_, 0);
v_isSharedCheck_869_ = !lean_is_exclusive(v___x_850_);
if (v_isSharedCheck_869_ == 0)
{
v___x_864_ = v___x_850_;
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_a_862_);
lean_dec(v___x_850_);
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
else
{
uint8_t v___x_870_; lean_object* v___x_871_; lean_object* v___x_873_; 
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
lean_dec(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v_v_807_);
lean_dec(v_u_806_);
v___x_870_ = 1;
v___x_871_ = lean_box(v___x_870_);
if (v_isShared_848_ == 0)
{
lean_ctor_set(v___x_847_, 0, v___x_871_);
v___x_873_ = v___x_847_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v___x_871_);
v___x_873_ = v_reuseFailAlloc_874_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
return v___x_873_;
}
}
}
}
else
{
lean_object* v_a_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_883_; 
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
lean_dec(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v_v_807_);
lean_dec(v_u_806_);
v_a_876_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_883_ == 0)
{
v___x_878_ = v___x_844_;
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_a_876_);
lean_dec(v___x_844_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_881_; 
if (v_isShared_879_ == 0)
{
v___x_881_ = v___x_878_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_a_876_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
}
}
v___jp_884_:
{
uint8_t v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
v___x_885_ = 2;
v___x_886_ = lean_box(v___x_885_);
v___x_887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_887_, 0, v___x_886_);
return v___x_887_;
}
v___jp_888_:
{
lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_900_; 
v___x_890_ = l_Lean_Level_mvarId_x21(v_u_806_);
lean_dec(v_u_806_);
v___x_891_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(v___x_890_, v_v_807_, v___y_889_);
lean_dec(v___y_889_);
v_isSharedCheck_900_ = !lean_is_exclusive(v___x_891_);
if (v_isSharedCheck_900_ == 0)
{
lean_object* v_unused_901_; 
v_unused_901_ = lean_ctor_get(v___x_891_, 0);
lean_dec(v_unused_901_);
v___x_893_ = v___x_891_;
v_isShared_894_ = v_isSharedCheck_900_;
goto v_resetjp_892_;
}
else
{
lean_dec(v___x_891_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_900_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
uint8_t v___x_895_; lean_object* v___x_896_; lean_object* v___x_898_; 
v___x_895_ = 1;
v___x_896_ = lean_box(v___x_895_);
if (v_isShared_894_ == 0)
{
lean_ctor_set(v___x_893_, 0, v___x_896_);
v___x_898_ = v___x_893_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v___x_896_);
v___x_898_ = v_reuseFailAlloc_899_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
return v___x_898_;
}
}
}
v___jp_902_:
{
lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_914_; 
v___x_904_ = l_Lean_Level_mvarId_x21(v_v_807_);
lean_dec(v_v_807_);
v___x_905_ = l_Lean_assignLevelMVar___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__1___redArg(v___x_904_, v_u_806_, v___y_903_);
lean_dec(v___y_903_);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_905_);
if (v_isSharedCheck_914_ == 0)
{
lean_object* v_unused_915_; 
v_unused_915_ = lean_ctor_get(v___x_905_, 0);
lean_dec(v_unused_915_);
v___x_907_ = v___x_905_;
v_isShared_908_ = v_isSharedCheck_914_;
goto v_resetjp_906_;
}
else
{
lean_dec(v___x_905_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_914_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
uint8_t v___x_909_; lean_object* v___x_910_; lean_object* v___x_912_; 
v___x_909_ = 1;
v___x_910_ = lean_box(v___x_909_);
if (v_isShared_908_ == 0)
{
lean_ctor_set(v___x_907_, 0, v___x_910_);
v___x_912_ = v___x_907_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v___x_910_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve___boxed(lean_object* v_u_1105_, lean_object* v_v_1106_, lean_object* v_a_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(v_u_1105_, v_v_1106_, v_a_1107_, v_a_1108_, v_a_1109_, v_a_1110_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0___redArg(lean_object* v_l_1113_, lean_object* v___y_1114_){
_start:
{
lean_object* v___x_1116_; lean_object* v_mctx_1117_; lean_object* v___x_1118_; lean_object* v_fst_1119_; lean_object* v_snd_1120_; lean_object* v___x_1121_; lean_object* v_cache_1122_; lean_object* v_zetaDeltaFVarIds_1123_; lean_object* v_postponed_1124_; lean_object* v_diag_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1134_; 
v___x_1116_ = lean_st_ref_get(v___y_1114_);
v_mctx_1117_ = lean_ctor_get(v___x_1116_, 0);
lean_inc_ref(v_mctx_1117_);
lean_dec(v___x_1116_);
v___x_1118_ = lean_instantiate_level_mvars(v_mctx_1117_, v_l_1113_);
v_fst_1119_ = lean_ctor_get(v___x_1118_, 0);
lean_inc(v_fst_1119_);
v_snd_1120_ = lean_ctor_get(v___x_1118_, 1);
lean_inc(v_snd_1120_);
lean_dec_ref(v___x_1118_);
v___x_1121_ = lean_st_ref_take(v___y_1114_);
v_cache_1122_ = lean_ctor_get(v___x_1121_, 1);
v_zetaDeltaFVarIds_1123_ = lean_ctor_get(v___x_1121_, 2);
v_postponed_1124_ = lean_ctor_get(v___x_1121_, 3);
v_diag_1125_ = lean_ctor_get(v___x_1121_, 4);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1121_);
if (v_isSharedCheck_1134_ == 0)
{
lean_object* v_unused_1135_; 
v_unused_1135_ = lean_ctor_get(v___x_1121_, 0);
lean_dec(v_unused_1135_);
v___x_1127_ = v___x_1121_;
v_isShared_1128_ = v_isSharedCheck_1134_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_diag_1125_);
lean_inc(v_postponed_1124_);
lean_inc(v_zetaDeltaFVarIds_1123_);
lean_inc(v_cache_1122_);
lean_dec(v___x_1121_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1134_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1130_; 
if (v_isShared_1128_ == 0)
{
lean_ctor_set(v___x_1127_, 0, v_fst_1119_);
v___x_1130_ = v___x_1127_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v_fst_1119_);
lean_ctor_set(v_reuseFailAlloc_1133_, 1, v_cache_1122_);
lean_ctor_set(v_reuseFailAlloc_1133_, 2, v_zetaDeltaFVarIds_1123_);
lean_ctor_set(v_reuseFailAlloc_1133_, 3, v_postponed_1124_);
lean_ctor_set(v_reuseFailAlloc_1133_, 4, v_diag_1125_);
v___x_1130_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1131_ = lean_st_ref_put(v___y_1114_, v___x_1130_);
v___x_1132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1132_, 0, v_snd_1120_);
return v___x_1132_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0___redArg___boxed(lean_object* v_l_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0___redArg(v_l_1136_, v___y_1137_);
lean_dec(v___y_1137_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0(lean_object* v_l_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_){
_start:
{
lean_object* v___x_1146_; 
v___x_1146_ = l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0___redArg(v_l_1140_, v___y_1142_);
return v___x_1146_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0___boxed(lean_object* v_l_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_){
_start:
{
lean_object* v_res_1153_; 
v_res_1153_ = l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0(v_l_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_);
lean_dec(v___y_1151_);
lean_dec_ref(v___y_1150_);
lean_dec(v___y_1149_);
lean_dec_ref(v___y_1148_);
return v_res_1153_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1154_ = lean_unsigned_to_nat(32u);
v___x_1155_ = lean_mk_empty_array_with_capacity(v___x_1154_);
v___x_1156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1155_);
return v___x_1156_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1157_ = ((size_t)5ULL);
v___x_1158_ = lean_unsigned_to_nat(0u);
v___x_1159_ = lean_unsigned_to_nat(32u);
v___x_1160_ = lean_mk_empty_array_with_capacity(v___x_1159_);
v___x_1161_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__0);
v___x_1162_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1162_, 0, v___x_1161_);
lean_ctor_set(v___x_1162_, 1, v___x_1160_);
lean_ctor_set(v___x_1162_, 2, v___x_1158_);
lean_ctor_set(v___x_1162_, 3, v___x_1158_);
lean_ctor_set_usize(v___x_1162_, 4, v___x_1157_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg(lean_object* v___y_1163_){
_start:
{
lean_object* v___x_1165_; lean_object* v_traceState_1166_; lean_object* v_traces_1167_; lean_object* v___x_1168_; lean_object* v_traceState_1169_; lean_object* v_env_1170_; lean_object* v_nextMacroScope_1171_; lean_object* v_ngen_1172_; lean_object* v_auxDeclNGen_1173_; lean_object* v_cache_1174_; lean_object* v_messages_1175_; lean_object* v_infoState_1176_; lean_object* v_snapshotTasks_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1196_; 
v___x_1165_ = lean_st_ref_get(v___y_1163_);
v_traceState_1166_ = lean_ctor_get(v___x_1165_, 4);
lean_inc_ref(v_traceState_1166_);
lean_dec(v___x_1165_);
v_traces_1167_ = lean_ctor_get(v_traceState_1166_, 0);
lean_inc_ref(v_traces_1167_);
lean_dec_ref(v_traceState_1166_);
v___x_1168_ = lean_st_ref_take(v___y_1163_);
v_traceState_1169_ = lean_ctor_get(v___x_1168_, 4);
v_env_1170_ = lean_ctor_get(v___x_1168_, 0);
v_nextMacroScope_1171_ = lean_ctor_get(v___x_1168_, 1);
v_ngen_1172_ = lean_ctor_get(v___x_1168_, 2);
v_auxDeclNGen_1173_ = lean_ctor_get(v___x_1168_, 3);
v_cache_1174_ = lean_ctor_get(v___x_1168_, 5);
v_messages_1175_ = lean_ctor_get(v___x_1168_, 6);
v_infoState_1176_ = lean_ctor_get(v___x_1168_, 7);
v_snapshotTasks_1177_ = lean_ctor_get(v___x_1168_, 8);
v_isSharedCheck_1196_ = !lean_is_exclusive(v___x_1168_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1179_ = v___x_1168_;
v_isShared_1180_ = v_isSharedCheck_1196_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_snapshotTasks_1177_);
lean_inc(v_infoState_1176_);
lean_inc(v_messages_1175_);
lean_inc(v_cache_1174_);
lean_inc(v_traceState_1169_);
lean_inc(v_auxDeclNGen_1173_);
lean_inc(v_ngen_1172_);
lean_inc(v_nextMacroScope_1171_);
lean_inc(v_env_1170_);
lean_dec(v___x_1168_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1196_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
uint64_t v_tid_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1194_; 
v_tid_1181_ = lean_ctor_get_uint64(v_traceState_1169_, sizeof(void*)*1);
v_isSharedCheck_1194_ = !lean_is_exclusive(v_traceState_1169_);
if (v_isSharedCheck_1194_ == 0)
{
lean_object* v_unused_1195_; 
v_unused_1195_ = lean_ctor_get(v_traceState_1169_, 0);
lean_dec(v_unused_1195_);
v___x_1183_ = v_traceState_1169_;
v_isShared_1184_ = v_isSharedCheck_1194_;
goto v_resetjp_1182_;
}
else
{
lean_dec(v_traceState_1169_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1194_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v___x_1185_; lean_object* v___x_1187_; 
v___x_1185_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___closed__1);
if (v_isShared_1184_ == 0)
{
lean_ctor_set(v___x_1183_, 0, v___x_1185_);
v___x_1187_ = v___x_1183_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v___x_1185_);
lean_ctor_set_uint64(v_reuseFailAlloc_1193_, sizeof(void*)*1, v_tid_1181_);
v___x_1187_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
lean_object* v___x_1189_; 
if (v_isShared_1180_ == 0)
{
lean_ctor_set(v___x_1179_, 4, v___x_1187_);
v___x_1189_ = v___x_1179_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_env_1170_);
lean_ctor_set(v_reuseFailAlloc_1192_, 1, v_nextMacroScope_1171_);
lean_ctor_set(v_reuseFailAlloc_1192_, 2, v_ngen_1172_);
lean_ctor_set(v_reuseFailAlloc_1192_, 3, v_auxDeclNGen_1173_);
lean_ctor_set(v_reuseFailAlloc_1192_, 4, v___x_1187_);
lean_ctor_set(v_reuseFailAlloc_1192_, 5, v_cache_1174_);
lean_ctor_set(v_reuseFailAlloc_1192_, 6, v_messages_1175_);
lean_ctor_set(v_reuseFailAlloc_1192_, 7, v_infoState_1176_);
lean_ctor_set(v_reuseFailAlloc_1192_, 8, v_snapshotTasks_1177_);
v___x_1189_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1190_ = lean_st_ref_put(v___y_1163_, v___x_1189_);
v___x_1191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1191_, 0, v_traces_1167_);
return v___x_1191_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg___boxed(lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
lean_object* v_res_1199_; 
v_res_1199_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg(v___y_1197_);
lean_dec(v___y_1197_);
return v_res_1199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1(lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_){
_start:
{
lean_object* v___x_1205_; 
v___x_1205_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg(v___y_1203_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___boxed(lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_){
_start:
{
lean_object* v_res_1211_; 
v_res_1211_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1(v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_);
lean_dec(v___y_1209_);
lean_dec_ref(v___y_1208_);
lean_dec(v___y_1207_);
lean_dec_ref(v___y_1206_);
return v_res_1211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__2(lean_object* v_o_1212_, lean_object* v_k_1213_, uint8_t v_v_1214_){
_start:
{
lean_object* v_map_1215_; uint8_t v_hasTrace_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1230_; 
v_map_1215_ = lean_ctor_get(v_o_1212_, 0);
v_hasTrace_1216_ = lean_ctor_get_uint8(v_o_1212_, sizeof(void*)*1);
v_isSharedCheck_1230_ = !lean_is_exclusive(v_o_1212_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1218_ = v_o_1212_;
v_isShared_1219_ = v_isSharedCheck_1230_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_map_1215_);
lean_dec(v_o_1212_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1230_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v___x_1220_; lean_object* v___x_1221_; 
v___x_1220_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1220_, 0, v_v_1214_);
lean_inc(v_k_1213_);
v___x_1221_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_1213_, v___x_1220_, v_map_1215_);
if (v_hasTrace_1216_ == 0)
{
lean_object* v___x_1222_; uint8_t v___x_1223_; lean_object* v___x_1225_; 
v___x_1222_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__9));
v___x_1223_ = l_Lean_Name_isPrefixOf(v___x_1222_, v_k_1213_);
lean_dec(v_k_1213_);
if (v_isShared_1219_ == 0)
{
lean_ctor_set(v___x_1218_, 0, v___x_1221_);
v___x_1225_ = v___x_1218_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v___x_1221_);
v___x_1225_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
lean_ctor_set_uint8(v___x_1225_, sizeof(void*)*1, v___x_1223_);
return v___x_1225_;
}
}
else
{
lean_object* v___x_1228_; 
lean_dec(v_k_1213_);
if (v_isShared_1219_ == 0)
{
lean_ctor_set(v___x_1218_, 0, v___x_1221_);
v___x_1228_ = v___x_1218_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v___x_1221_);
lean_ctor_set_uint8(v_reuseFailAlloc_1229_, sizeof(void*)*1, v_hasTrace_1216_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__2___boxed(lean_object* v_o_1231_, lean_object* v_k_1232_, lean_object* v_v_1233_){
_start:
{
uint8_t v_v_boxed_1234_; lean_object* v_res_1235_; 
v_v_boxed_1234_ = lean_unbox(v_v_1233_);
v_res_1235_ = l_Lean_Options_set___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__2(v_o_1231_, v_k_1232_, v_v_boxed_1234_);
return v_res_1235_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__3(lean_object* v_opts_1236_, lean_object* v_opt_1237_){
_start:
{
lean_object* v_name_1238_; lean_object* v_defValue_1239_; lean_object* v_map_1240_; lean_object* v___x_1241_; 
v_name_1238_ = lean_ctor_get(v_opt_1237_, 0);
v_defValue_1239_ = lean_ctor_get(v_opt_1237_, 1);
v_map_1240_ = lean_ctor_get(v_opts_1236_, 0);
v___x_1241_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1240_, v_name_1238_);
if (lean_obj_tag(v___x_1241_) == 0)
{
uint8_t v___x_1242_; 
v___x_1242_ = lean_unbox(v_defValue_1239_);
return v___x_1242_;
}
else
{
lean_object* v_val_1243_; 
v_val_1243_ = lean_ctor_get(v___x_1241_, 0);
lean_inc(v_val_1243_);
lean_dec_ref_known(v___x_1241_, 1);
if (lean_obj_tag(v_val_1243_) == 1)
{
uint8_t v_v_1244_; 
v_v_1244_ = lean_ctor_get_uint8(v_val_1243_, 0);
lean_dec_ref_known(v_val_1243_, 0);
return v_v_1244_;
}
else
{
uint8_t v___x_1245_; 
lean_dec(v_val_1243_);
v___x_1245_ = lean_unbox(v_defValue_1239_);
return v___x_1245_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__3___boxed(lean_object* v_opts_1246_, lean_object* v_opt_1247_){
_start:
{
uint8_t v_res_1248_; lean_object* v_r_1249_; 
v_res_1248_ = l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__3(v_opts_1246_, v_opt_1247_);
lean_dec_ref(v_opt_1247_);
lean_dec_ref(v_opts_1246_);
v_r_1249_ = lean_box(v_res_1248_);
return v_r_1249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__4(lean_object* v_opts_1250_, lean_object* v_opt_1251_){
_start:
{
lean_object* v_name_1252_; lean_object* v_defValue_1253_; lean_object* v_map_1254_; lean_object* v___x_1255_; 
v_name_1252_ = lean_ctor_get(v_opt_1251_, 0);
v_defValue_1253_ = lean_ctor_get(v_opt_1251_, 1);
v_map_1254_ = lean_ctor_get(v_opts_1250_, 0);
v___x_1255_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1254_, v_name_1252_);
if (lean_obj_tag(v___x_1255_) == 0)
{
lean_inc(v_defValue_1253_);
return v_defValue_1253_;
}
else
{
lean_object* v_val_1256_; 
v_val_1256_ = lean_ctor_get(v___x_1255_, 0);
lean_inc(v_val_1256_);
lean_dec_ref_known(v___x_1255_, 1);
if (lean_obj_tag(v_val_1256_) == 3)
{
lean_object* v_v_1257_; 
v_v_1257_ = lean_ctor_get(v_val_1256_, 0);
lean_inc(v_v_1257_);
lean_dec_ref_known(v_val_1256_, 1);
return v_v_1257_;
}
else
{
lean_dec(v_val_1256_);
lean_inc(v_defValue_1253_);
return v_defValue_1253_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__4___boxed(lean_object* v_opts_1258_, lean_object* v_opt_1259_){
_start:
{
lean_object* v_res_1260_; 
v_res_1260_ = l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__4(v_opts_1258_, v_opt_1259_);
lean_dec_ref(v_opt_1259_);
lean_dec_ref(v_opts_1258_);
return v_res_1260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___lam__0(uint8_t v___x_1261_, lean_object* v___x_1262_, lean_object* v___x_1263_, lean_object* v_lhs_1264_, lean_object* v_rhs_1265_, uint8_t v___x_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_){
_start:
{
lean_object* v___y_1300_; 
if (v___x_1261_ == 0)
{
lean_object* v___x_1337_; lean_object* v_a_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v_a_1341_; lean_object* v___x_1342_; uint8_t v___x_1343_; 
lean_inc(v_lhs_1264_);
v___x_1337_ = l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0___redArg(v_lhs_1264_, v___y_1268_);
v_a_1338_ = lean_ctor_get(v___x_1337_, 0);
lean_inc(v_a_1338_);
lean_dec_ref(v___x_1337_);
v___x_1339_ = l_Lean_Level_normalize(v_a_1338_);
lean_dec(v_a_1338_);
lean_inc(v_rhs_1265_);
v___x_1340_ = l_Lean_instantiateLevelMVars___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__0___redArg(v_rhs_1265_, v___y_1268_);
v_a_1341_ = lean_ctor_get(v___x_1340_, 0);
lean_inc(v_a_1341_);
lean_dec_ref(v___x_1340_);
v___x_1342_ = l_Lean_Level_normalize(v_a_1341_);
lean_dec(v_a_1341_);
v___x_1343_ = lean_level_eq(v_lhs_1264_, v___x_1339_);
if (v___x_1343_ == 0)
{
lean_object* v___x_1344_; 
lean_dec(v_rhs_1265_);
lean_dec(v_lhs_1264_);
lean_dec_ref(v___x_1263_);
lean_dec_ref(v___x_1262_);
lean_inc(v___y_1270_);
lean_inc_ref(v___y_1269_);
lean_inc(v___y_1268_);
lean_inc_ref(v___y_1267_);
v___x_1344_ = lean_is_level_def_eq(v___x_1339_, v___x_1342_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_);
return v___x_1344_;
}
else
{
uint8_t v___x_1345_; 
v___x_1345_ = lean_level_eq(v_rhs_1265_, v___x_1342_);
if (v___x_1345_ == 0)
{
lean_object* v___x_1346_; 
lean_dec(v_rhs_1265_);
lean_dec(v_lhs_1264_);
lean_dec_ref(v___x_1263_);
lean_dec_ref(v___x_1262_);
lean_inc(v___y_1270_);
lean_inc_ref(v___y_1269_);
lean_inc(v___y_1268_);
lean_inc_ref(v___y_1267_);
v___x_1346_ = lean_is_level_def_eq(v___x_1339_, v___x_1342_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_);
return v___x_1346_;
}
else
{
lean_object* v___x_1347_; 
lean_dec(v___x_1342_);
lean_dec(v___x_1339_);
lean_inc(v___y_1270_);
lean_inc_ref(v___y_1269_);
lean_inc(v___y_1268_);
lean_inc_ref(v___y_1267_);
lean_inc(v_rhs_1265_);
lean_inc(v_lhs_1264_);
v___x_1347_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(v_lhs_1264_, v_rhs_1265_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_);
if (lean_obj_tag(v___x_1347_) == 0)
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1389_; 
v_a_1348_ = lean_ctor_get(v___x_1347_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v___x_1347_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1350_ = v___x_1347_;
v_isShared_1351_ = v_isSharedCheck_1389_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v___x_1347_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1389_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
uint8_t v___x_1352_; uint8_t v___x_1353_; uint8_t v___x_1354_; 
v___x_1352_ = 2;
v___x_1353_ = lean_unbox(v_a_1348_);
v___x_1354_ = l_Lean_instBEqLBool_beq(v___x_1353_, v___x_1352_);
if (v___x_1354_ == 0)
{
uint8_t v___x_1355_; uint8_t v___x_1356_; uint8_t v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1360_; 
lean_dec(v_rhs_1265_);
lean_dec(v_lhs_1264_);
lean_dec_ref(v___x_1263_);
lean_dec_ref(v___x_1262_);
v___x_1355_ = 1;
v___x_1356_ = lean_unbox(v_a_1348_);
lean_dec(v_a_1348_);
v___x_1357_ = l_Lean_instBEqLBool_beq(v___x_1356_, v___x_1355_);
v___x_1358_ = lean_box(v___x_1357_);
if (v_isShared_1351_ == 0)
{
lean_ctor_set(v___x_1350_, 0, v___x_1358_);
v___x_1360_ = v___x_1350_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v___x_1358_);
v___x_1360_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
return v___x_1360_;
}
}
else
{
lean_object* v___x_1362_; 
lean_del_object(v___x_1350_);
lean_dec(v_a_1348_);
lean_inc(v___y_1270_);
lean_inc_ref(v___y_1269_);
lean_inc(v___y_1268_);
lean_inc_ref(v___y_1267_);
lean_inc(v_lhs_1264_);
lean_inc(v_rhs_1265_);
v___x_1362_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solve(v_rhs_1265_, v_lhs_1264_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_);
if (lean_obj_tag(v___x_1362_) == 0)
{
lean_object* v_a_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1380_; 
v_a_1363_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1365_ = v___x_1362_;
v_isShared_1366_ = v_isSharedCheck_1380_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_a_1363_);
lean_dec(v___x_1362_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1380_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
uint8_t v___x_1367_; uint8_t v___x_1368_; 
v___x_1367_ = lean_unbox(v_a_1363_);
v___x_1368_ = l_Lean_instBEqLBool_beq(v___x_1367_, v___x_1352_);
if (v___x_1368_ == 0)
{
uint8_t v___x_1369_; uint8_t v___x_1370_; uint8_t v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1374_; 
lean_dec(v_rhs_1265_);
lean_dec(v_lhs_1264_);
lean_dec_ref(v___x_1263_);
lean_dec_ref(v___x_1262_);
v___x_1369_ = 1;
v___x_1370_ = lean_unbox(v_a_1363_);
lean_dec(v_a_1363_);
v___x_1371_ = l_Lean_instBEqLBool_beq(v___x_1370_, v___x_1369_);
v___x_1372_ = lean_box(v___x_1371_);
if (v_isShared_1366_ == 0)
{
lean_ctor_set(v___x_1365_, 0, v___x_1372_);
v___x_1374_ = v___x_1365_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v___x_1372_);
v___x_1374_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
return v___x_1374_;
}
}
else
{
lean_object* v___x_1376_; 
lean_del_object(v___x_1365_);
lean_dec(v_a_1363_);
lean_inc(v_lhs_1264_);
v___x_1376_ = l_Lean_Meta_hasAssignableLevelMVar(v_lhs_1264_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_);
if (lean_obj_tag(v___x_1376_) == 0)
{
lean_object* v_a_1377_; uint8_t v___x_1378_; 
v_a_1377_ = lean_ctor_get(v___x_1376_, 0);
lean_inc(v_a_1377_);
v___x_1378_ = lean_unbox(v_a_1377_);
lean_dec(v_a_1377_);
if (v___x_1378_ == 0)
{
lean_object* v___x_1379_; 
lean_dec_ref_known(v___x_1376_, 1);
lean_inc(v_rhs_1265_);
v___x_1379_ = l_Lean_Meta_hasAssignableLevelMVar(v_rhs_1265_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_);
v___y_1300_ = v___x_1379_;
goto v___jp_1299_;
}
else
{
v___y_1300_ = v___x_1376_;
goto v___jp_1299_;
}
}
else
{
v___y_1300_ = v___x_1376_;
goto v___jp_1299_;
}
}
}
}
else
{
lean_object* v_a_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1388_; 
lean_dec(v_rhs_1265_);
lean_dec(v_lhs_1264_);
lean_dec_ref(v___x_1263_);
lean_dec_ref(v___x_1262_);
v_a_1381_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1383_ = v___x_1362_;
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_a_1381_);
lean_dec(v___x_1362_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1386_; 
if (v_isShared_1384_ == 0)
{
v___x_1386_ = v___x_1383_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_a_1381_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
}
}
else
{
lean_object* v_a_1390_; lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1397_; 
lean_dec(v_rhs_1265_);
lean_dec(v_lhs_1264_);
lean_dec_ref(v___x_1263_);
lean_dec_ref(v___x_1262_);
v_a_1390_ = lean_ctor_get(v___x_1347_, 0);
v_isSharedCheck_1397_ = !lean_is_exclusive(v___x_1347_);
if (v_isSharedCheck_1397_ == 0)
{
v___x_1392_ = v___x_1347_;
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
else
{
lean_inc(v_a_1390_);
lean_dec(v___x_1347_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
lean_object* v___x_1395_; 
if (v_isShared_1393_ == 0)
{
v___x_1395_ = v___x_1392_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v_a_1390_);
v___x_1395_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
return v___x_1395_;
}
}
}
}
}
}
else
{
lean_object* v___x_1398_; lean_object* v___x_1399_; uint8_t v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; 
lean_dec_ref(v___x_1263_);
lean_dec_ref(v___x_1262_);
v___x_1398_ = l_Lean_Level_getOffset(v_lhs_1264_);
lean_dec(v_lhs_1264_);
v___x_1399_ = l_Lean_Level_getOffset(v_rhs_1265_);
lean_dec(v_rhs_1265_);
v___x_1400_ = lean_nat_dec_eq(v___x_1398_, v___x_1399_);
lean_dec(v___x_1399_);
lean_dec(v___x_1398_);
v___x_1401_ = lean_box(v___x_1400_);
v___x_1402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1401_);
return v___x_1402_;
}
v___jp_1272_:
{
lean_object* v_toCold_1273_; lean_object* v_options_1274_; uint8_t v_hasTrace_1275_; 
v_toCold_1273_ = lean_ctor_get(v___y_1269_, 0);
v_options_1274_ = lean_ctor_get(v_toCold_1273_, 2);
v_hasTrace_1275_ = lean_ctor_get_uint8(v_options_1274_, sizeof(void*)*1);
if (v_hasTrace_1275_ == 0)
{
lean_object* v___x_1276_; 
lean_dec(v_rhs_1265_);
lean_dec(v_lhs_1264_);
lean_dec_ref(v___x_1263_);
lean_dec_ref(v___x_1262_);
v___x_1276_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
return v___x_1276_;
}
else
{
lean_object* v_inheritedTraceOptions_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; uint8_t v___x_1282_; 
v_inheritedTraceOptions_1277_ = lean_ctor_get(v_toCold_1273_, 11);
v___x_1278_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__0));
v___x_1279_ = l_Lean_Name_mkStr3(v___x_1262_, v___x_1263_, v___x_1278_);
v___x_1280_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__9));
lean_inc(v___x_1279_);
v___x_1281_ = l_Lean_Name_append(v___x_1280_, v___x_1279_);
v___x_1282_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1277_, v_options_1274_, v___x_1281_);
lean_dec(v___x_1281_);
if (v___x_1282_ == 0)
{
lean_object* v___x_1283_; 
lean_dec(v___x_1279_);
lean_dec(v_rhs_1265_);
lean_dec(v_lhs_1264_);
v___x_1283_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
return v___x_1283_;
}
else
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; 
v___x_1284_ = l_Lean_MessageData_ofLevel(v_lhs_1264_);
v___x_1285_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4);
v___x_1286_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1286_, 0, v___x_1284_);
lean_ctor_set(v___x_1286_, 1, v___x_1285_);
v___x_1287_ = l_Lean_MessageData_ofLevel(v_rhs_1265_);
v___x_1288_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1286_);
lean_ctor_set(v___x_1288_, 1, v___x_1287_);
v___x_1289_ = l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2(v___x_1279_, v___x_1288_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_);
if (lean_obj_tag(v___x_1289_) == 0)
{
lean_object* v___x_1290_; 
lean_dec_ref_known(v___x_1289_, 1);
v___x_1290_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
return v___x_1290_;
}
else
{
lean_object* v_a_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1298_; 
v_a_1291_ = lean_ctor_get(v___x_1289_, 0);
v_isSharedCheck_1298_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1293_ = v___x_1289_;
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_a_1291_);
lean_dec(v___x_1289_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v___x_1296_; 
if (v_isShared_1294_ == 0)
{
v___x_1296_ = v___x_1293_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v_a_1291_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
}
}
}
v___jp_1299_:
{
if (lean_obj_tag(v___y_1300_) == 0)
{
lean_object* v_a_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1336_; 
v_a_1301_ = lean_ctor_get(v___y_1300_, 0);
v_isSharedCheck_1336_ = !lean_is_exclusive(v___y_1300_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1303_ = v___y_1300_;
v_isShared_1304_ = v_isSharedCheck_1336_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_a_1301_);
lean_dec(v___y_1300_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1336_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
uint8_t v___x_1305_; 
v___x_1305_ = lean_unbox(v_a_1301_);
lean_dec(v_a_1301_);
if (v___x_1305_ == 0)
{
lean_object* v___x_1306_; uint8_t v_isDefEqStuckEx_1307_; 
v___x_1306_ = l_Lean_Meta_Context_config(v___y_1267_);
v_isDefEqStuckEx_1307_ = lean_ctor_get_uint8(v___x_1306_, 4);
lean_dec_ref(v___x_1306_);
if (v_isDefEqStuckEx_1307_ == 0)
{
lean_object* v___x_1308_; lean_object* v___x_1310_; 
lean_dec(v_rhs_1265_);
lean_dec(v_lhs_1264_);
lean_dec_ref(v___x_1263_);
lean_dec_ref(v___x_1262_);
v___x_1308_ = lean_box(v___x_1261_);
if (v_isShared_1304_ == 0)
{
lean_ctor_set(v___x_1303_, 0, v___x_1308_);
v___x_1310_ = v___x_1303_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v___x_1308_);
v___x_1310_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
return v___x_1310_;
}
}
else
{
uint8_t v___x_1312_; 
v___x_1312_ = l_Lean_Level_isMVar(v_lhs_1264_);
if (v___x_1312_ == 0)
{
uint8_t v___x_1313_; 
v___x_1313_ = l_Lean_Level_isMVar(v_rhs_1265_);
if (v___x_1313_ == 0)
{
lean_object* v___x_1314_; lean_object* v___x_1316_; 
lean_dec(v_rhs_1265_);
lean_dec(v_lhs_1264_);
lean_dec_ref(v___x_1263_);
lean_dec_ref(v___x_1262_);
v___x_1314_ = lean_box(v___x_1313_);
if (v_isShared_1304_ == 0)
{
lean_ctor_set(v___x_1303_, 0, v___x_1314_);
v___x_1316_ = v___x_1303_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v___x_1314_);
v___x_1316_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
return v___x_1316_;
}
}
else
{
lean_del_object(v___x_1303_);
goto v___jp_1272_;
}
}
else
{
lean_del_object(v___x_1303_);
goto v___jp_1272_;
}
}
}
else
{
lean_object* v___x_1318_; 
lean_del_object(v___x_1303_);
lean_dec_ref(v___x_1263_);
lean_dec_ref(v___x_1262_);
v___x_1318_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq(v_lhs_1264_, v_rhs_1265_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_);
if (lean_obj_tag(v___x_1318_) == 0)
{
lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1326_; 
v_isSharedCheck_1326_ = !lean_is_exclusive(v___x_1318_);
if (v_isSharedCheck_1326_ == 0)
{
lean_object* v_unused_1327_; 
v_unused_1327_ = lean_ctor_get(v___x_1318_, 0);
lean_dec(v_unused_1327_);
v___x_1320_ = v___x_1318_;
v_isShared_1321_ = v_isSharedCheck_1326_;
goto v_resetjp_1319_;
}
else
{
lean_dec(v___x_1318_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1326_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1322_; lean_object* v___x_1324_; 
v___x_1322_ = lean_box(v___x_1266_);
if (v_isShared_1321_ == 0)
{
lean_ctor_set(v___x_1320_, 0, v___x_1322_);
v___x_1324_ = v___x_1320_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v___x_1322_);
v___x_1324_ = v_reuseFailAlloc_1325_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
return v___x_1324_;
}
}
}
else
{
lean_object* v_a_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1335_; 
v_a_1328_ = lean_ctor_get(v___x_1318_, 0);
v_isSharedCheck_1335_ = !lean_is_exclusive(v___x_1318_);
if (v_isSharedCheck_1335_ == 0)
{
v___x_1330_ = v___x_1318_;
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_a_1328_);
lean_dec(v___x_1318_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1333_; 
if (v_isShared_1331_ == 0)
{
v___x_1333_ = v___x_1330_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v_a_1328_);
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
}
}
else
{
lean_dec(v_rhs_1265_);
lean_dec(v_lhs_1264_);
lean_dec_ref(v___x_1263_);
lean_dec_ref(v___x_1262_);
return v___y_1300_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___lam__0___boxed(lean_object* v___x_1403_, lean_object* v___x_1404_, lean_object* v___x_1405_, lean_object* v_lhs_1406_, lean_object* v_rhs_1407_, lean_object* v___x_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_){
_start:
{
uint8_t v___x_13069__boxed_1414_; uint8_t v___x_13072__boxed_1415_; lean_object* v_res_1416_; 
v___x_13069__boxed_1414_ = lean_unbox(v___x_1403_);
v___x_13072__boxed_1415_ = lean_unbox(v___x_1408_);
v_res_1416_ = l_Lean_Meta_isLevelDefEqAuxImpl___lam__0(v___x_13069__boxed_1414_, v___x_1404_, v___x_1405_, v_lhs_1406_, v_rhs_1407_, v___x_13072__boxed_1415_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_);
lean_dec(v___y_1412_);
lean_dec_ref(v___y_1411_);
lean_dec(v___y_1410_);
lean_dec_ref(v___y_1409_);
return v_res_1416_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__7(lean_object* v_e_1417_){
_start:
{
if (lean_obj_tag(v_e_1417_) == 0)
{
uint8_t v___x_1418_; 
v___x_1418_ = 2;
return v___x_1418_;
}
else
{
lean_object* v_a_1419_; uint8_t v___x_1420_; 
v_a_1419_ = lean_ctor_get(v_e_1417_, 0);
v___x_1420_ = lean_unbox(v_a_1419_);
if (v___x_1420_ == 0)
{
uint8_t v___x_1421_; 
v___x_1421_ = 1;
return v___x_1421_;
}
else
{
uint8_t v___x_1422_; 
v___x_1422_ = 0;
return v___x_1422_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__7___boxed(lean_object* v_e_1423_){
_start:
{
uint8_t v_res_1424_; lean_object* v_r_1425_; 
v_res_1424_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__7(v_e_1423_);
lean_dec_ref(v_e_1423_);
v_r_1425_ = lean_box(v_res_1424_);
return v_r_1425_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6___redArg(lean_object* v_x_1426_){
_start:
{
if (lean_obj_tag(v_x_1426_) == 0)
{
lean_object* v_a_1428_; lean_object* v___x_1430_; uint8_t v_isShared_1431_; uint8_t v_isSharedCheck_1435_; 
v_a_1428_ = lean_ctor_get(v_x_1426_, 0);
v_isSharedCheck_1435_ = !lean_is_exclusive(v_x_1426_);
if (v_isSharedCheck_1435_ == 0)
{
v___x_1430_ = v_x_1426_;
v_isShared_1431_ = v_isSharedCheck_1435_;
goto v_resetjp_1429_;
}
else
{
lean_inc(v_a_1428_);
lean_dec(v_x_1426_);
v___x_1430_ = lean_box(0);
v_isShared_1431_ = v_isSharedCheck_1435_;
goto v_resetjp_1429_;
}
v_resetjp_1429_:
{
lean_object* v___x_1433_; 
if (v_isShared_1431_ == 0)
{
lean_ctor_set_tag(v___x_1430_, 1);
v___x_1433_ = v___x_1430_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v_a_1428_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
}
else
{
lean_object* v_a_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1443_; 
v_a_1436_ = lean_ctor_get(v_x_1426_, 0);
v_isSharedCheck_1443_ = !lean_is_exclusive(v_x_1426_);
if (v_isSharedCheck_1443_ == 0)
{
v___x_1438_ = v_x_1426_;
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_a_1436_);
lean_dec(v_x_1426_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v___x_1441_; 
if (v_isShared_1439_ == 0)
{
lean_ctor_set_tag(v___x_1438_, 0);
v___x_1441_ = v___x_1438_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v_a_1436_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
return v___x_1441_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6___redArg___boxed(lean_object* v_x_1444_, lean_object* v___y_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6___redArg(v_x_1444_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5_spec__6(size_t v_sz_1447_, size_t v_i_1448_, lean_object* v_bs_1449_){
_start:
{
uint8_t v___x_1450_; 
v___x_1450_ = lean_usize_dec_lt(v_i_1448_, v_sz_1447_);
if (v___x_1450_ == 0)
{
lean_object* v___x_1451_; 
v___x_1451_ = l_unsafeCast___redArg(v_bs_1449_);
lean_dec_ref(v_bs_1449_);
return v___x_1451_;
}
else
{
lean_object* v_v_1452_; lean_object* v___x_1453_; lean_object* v_msg_1454_; lean_object* v___x_1455_; lean_object* v_bs_x27_1456_; size_t v___x_1457_; size_t v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; 
v_v_1452_ = lean_array_uget_borrowed(v_bs_1449_, v_i_1448_);
v___x_1453_ = l_unsafeCast___redArg(v_v_1452_);
v_msg_1454_ = lean_ctor_get(v___x_1453_, 1);
lean_inc_ref(v_msg_1454_);
lean_dec(v___x_1453_);
v___x_1455_ = lean_unsigned_to_nat(0u);
v_bs_x27_1456_ = lean_array_uset(v_bs_1449_, v_i_1448_, v___x_1455_);
v___x_1457_ = ((size_t)1ULL);
v___x_1458_ = lean_usize_add(v_i_1448_, v___x_1457_);
v___x_1459_ = l_unsafeCast___redArg(v_msg_1454_);
lean_dec_ref(v_msg_1454_);
v___x_1460_ = lean_array_uset(v_bs_x27_1456_, v_i_1448_, v___x_1459_);
v_i_1448_ = v___x_1458_;
v_bs_1449_ = v___x_1460_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5_spec__6___boxed(lean_object* v_sz_1462_, lean_object* v_i_1463_, lean_object* v_bs_1464_){
_start:
{
size_t v_sz_boxed_1465_; size_t v_i_boxed_1466_; lean_object* v_res_1467_; 
v_sz_boxed_1465_ = lean_unbox_usize(v_sz_1462_);
lean_dec(v_sz_1462_);
v_i_boxed_1466_ = lean_unbox_usize(v_i_1463_);
lean_dec(v_i_1463_);
v_res_1467_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5_spec__6(v_sz_boxed_1465_, v_i_boxed_1466_, v_bs_1464_);
return v_res_1467_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5(lean_object* v_oldTraces_1468_, lean_object* v_data_1469_, lean_object* v_ref_1470_, lean_object* v_msg_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_){
_start:
{
lean_object* v_toCold_1477_; lean_object* v_currRecDepth_1478_; lean_object* v_ref_1479_; uint8_t v_diag_1480_; uint8_t v_suppressElabErrors_1481_; lean_object* v_ref_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v_traceState_1485_; lean_object* v_traces_1486_; lean_object* v___x_1487_; size_t v_sz_1488_; size_t v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v_msg_1493_; lean_object* v___x_1494_; lean_object* v_a_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1532_; 
v_toCold_1477_ = lean_ctor_get(v___y_1474_, 0);
v_currRecDepth_1478_ = lean_ctor_get(v___y_1474_, 1);
v_ref_1479_ = lean_ctor_get(v___y_1474_, 2);
v_diag_1480_ = lean_ctor_get_uint8(v___y_1474_, sizeof(void*)*3);
v_suppressElabErrors_1481_ = lean_ctor_get_uint8(v___y_1474_, sizeof(void*)*3 + 1);
v_ref_1482_ = l_Lean_replaceRef(v_ref_1470_, v_ref_1479_);
lean_inc(v_currRecDepth_1478_);
lean_inc_ref(v_toCold_1477_);
v___x_1483_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1483_, 0, v_toCold_1477_);
lean_ctor_set(v___x_1483_, 1, v_currRecDepth_1478_);
lean_ctor_set(v___x_1483_, 2, v_ref_1482_);
lean_ctor_set_uint8(v___x_1483_, sizeof(void*)*3, v_diag_1480_);
lean_ctor_set_uint8(v___x_1483_, sizeof(void*)*3 + 1, v_suppressElabErrors_1481_);
v___x_1484_ = lean_st_ref_get(v___y_1475_);
v_traceState_1485_ = lean_ctor_get(v___x_1484_, 4);
lean_inc_ref(v_traceState_1485_);
lean_dec(v___x_1484_);
v_traces_1486_ = lean_ctor_get(v_traceState_1485_, 0);
lean_inc_ref(v_traces_1486_);
lean_dec_ref(v_traceState_1485_);
v___x_1487_ = l_Lean_PersistentArray_toArray___redArg(v_traces_1486_);
lean_dec_ref(v_traces_1486_);
v_sz_1488_ = lean_array_size(v___x_1487_);
v___x_1489_ = ((size_t)0ULL);
v___x_1490_ = l_unsafeCast___redArg(v___x_1487_);
lean_dec_ref(v___x_1487_);
v___x_1491_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5_spec__6(v_sz_1488_, v___x_1489_, v___x_1490_);
v___x_1492_ = l_unsafeCast___redArg(v___x_1491_);
lean_dec_ref(v___x_1491_);
v_msg_1493_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_1493_, 0, v_data_1469_);
lean_ctor_set(v_msg_1493_, 1, v_msg_1471_);
lean_ctor_set(v_msg_1493_, 2, v___x_1492_);
v___x_1494_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2_spec__3(v_msg_1493_, v___y_1472_, v___y_1473_, v___x_1483_, v___y_1475_);
lean_dec_ref_known(v___x_1483_, 3);
v_a_1495_ = lean_ctor_get(v___x_1494_, 0);
v_isSharedCheck_1532_ = !lean_is_exclusive(v___x_1494_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1497_ = v___x_1494_;
v_isShared_1498_ = v_isSharedCheck_1532_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_a_1495_);
lean_dec(v___x_1494_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1532_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
lean_object* v___x_1499_; lean_object* v_traceState_1500_; lean_object* v_env_1501_; lean_object* v_nextMacroScope_1502_; lean_object* v_ngen_1503_; lean_object* v_auxDeclNGen_1504_; lean_object* v_cache_1505_; lean_object* v_messages_1506_; lean_object* v_infoState_1507_; lean_object* v_snapshotTasks_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1531_; 
v___x_1499_ = lean_st_ref_take(v___y_1475_);
v_traceState_1500_ = lean_ctor_get(v___x_1499_, 4);
v_env_1501_ = lean_ctor_get(v___x_1499_, 0);
v_nextMacroScope_1502_ = lean_ctor_get(v___x_1499_, 1);
v_ngen_1503_ = lean_ctor_get(v___x_1499_, 2);
v_auxDeclNGen_1504_ = lean_ctor_get(v___x_1499_, 3);
v_cache_1505_ = lean_ctor_get(v___x_1499_, 5);
v_messages_1506_ = lean_ctor_get(v___x_1499_, 6);
v_infoState_1507_ = lean_ctor_get(v___x_1499_, 7);
v_snapshotTasks_1508_ = lean_ctor_get(v___x_1499_, 8);
v_isSharedCheck_1531_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1531_ == 0)
{
v___x_1510_ = v___x_1499_;
v_isShared_1511_ = v_isSharedCheck_1531_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_snapshotTasks_1508_);
lean_inc(v_infoState_1507_);
lean_inc(v_messages_1506_);
lean_inc(v_cache_1505_);
lean_inc(v_traceState_1500_);
lean_inc(v_auxDeclNGen_1504_);
lean_inc(v_ngen_1503_);
lean_inc(v_nextMacroScope_1502_);
lean_inc(v_env_1501_);
lean_dec(v___x_1499_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1531_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
uint64_t v_tid_1512_; lean_object* v___x_1514_; uint8_t v_isShared_1515_; uint8_t v_isSharedCheck_1529_; 
v_tid_1512_ = lean_ctor_get_uint64(v_traceState_1500_, sizeof(void*)*1);
v_isSharedCheck_1529_ = !lean_is_exclusive(v_traceState_1500_);
if (v_isSharedCheck_1529_ == 0)
{
lean_object* v_unused_1530_; 
v_unused_1530_ = lean_ctor_get(v_traceState_1500_, 0);
lean_dec(v_unused_1530_);
v___x_1514_ = v_traceState_1500_;
v_isShared_1515_ = v_isSharedCheck_1529_;
goto v_resetjp_1513_;
}
else
{
lean_dec(v_traceState_1500_);
v___x_1514_ = lean_box(0);
v_isShared_1515_ = v_isSharedCheck_1529_;
goto v_resetjp_1513_;
}
v_resetjp_1513_:
{
lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1520_; 
v___x_1516_ = lean_box(0);
v___x_1517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1517_, 0, v_ref_1470_);
lean_ctor_set(v___x_1517_, 1, v_a_1495_);
v___x_1518_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_1468_, v___x_1517_);
if (v_isShared_1515_ == 0)
{
lean_ctor_set(v___x_1514_, 0, v___x_1518_);
v___x_1520_ = v___x_1514_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1528_; 
v_reuseFailAlloc_1528_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1528_, 0, v___x_1518_);
lean_ctor_set_uint64(v_reuseFailAlloc_1528_, sizeof(void*)*1, v_tid_1512_);
v___x_1520_ = v_reuseFailAlloc_1528_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
lean_object* v___x_1522_; 
if (v_isShared_1511_ == 0)
{
lean_ctor_set(v___x_1510_, 4, v___x_1520_);
v___x_1522_ = v___x_1510_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v_env_1501_);
lean_ctor_set(v_reuseFailAlloc_1527_, 1, v_nextMacroScope_1502_);
lean_ctor_set(v_reuseFailAlloc_1527_, 2, v_ngen_1503_);
lean_ctor_set(v_reuseFailAlloc_1527_, 3, v_auxDeclNGen_1504_);
lean_ctor_set(v_reuseFailAlloc_1527_, 4, v___x_1520_);
lean_ctor_set(v_reuseFailAlloc_1527_, 5, v_cache_1505_);
lean_ctor_set(v_reuseFailAlloc_1527_, 6, v_messages_1506_);
lean_ctor_set(v_reuseFailAlloc_1527_, 7, v_infoState_1507_);
lean_ctor_set(v_reuseFailAlloc_1527_, 8, v_snapshotTasks_1508_);
v___x_1522_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
lean_object* v___x_1523_; lean_object* v___x_1525_; 
v___x_1523_ = lean_st_ref_put(v___y_1475_, v___x_1522_);
if (v_isShared_1498_ == 0)
{
lean_ctor_set(v___x_1497_, 0, v___x_1516_);
v___x_1525_ = v___x_1497_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v___x_1516_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5___boxed(lean_object* v_oldTraces_1533_, lean_object* v_data_1534_, lean_object* v_ref_1535_, lean_object* v_msg_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_){
_start:
{
lean_object* v_res_1542_; 
v_res_1542_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5(v_oldTraces_1533_, v_data_1534_, v_ref_1535_, v_msg_1536_, v___y_1537_, v___y_1538_, v___y_1539_, v___y_1540_);
lean_dec(v___y_1540_);
lean_dec_ref(v___y_1539_);
lean_dec(v___y_1538_);
lean_dec_ref(v___y_1537_);
return v_res_1542_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1543_; double v___x_1544_; 
v___x_1543_ = lean_unsigned_to_nat(1000u);
v___x_1544_ = lean_float_of_nat(v___x_1543_);
return v___x_1544_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5(lean_object* v_cls_1545_, uint8_t v_collapsed_1546_, lean_object* v_tag_1547_, lean_object* v_opts_1548_, uint8_t v_clsEnabled_1549_, lean_object* v_oldTraces_1550_, lean_object* v_ref_1551_, lean_object* v_msg_1552_, lean_object* v_resStartStop_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_){
_start:
{
lean_object* v_fst_1559_; lean_object* v_snd_1560_; lean_object* v_data_1562_; lean_object* v_fst_1573_; lean_object* v_snd_1574_; lean_object* v___x_1575_; uint8_t v___x_1576_; uint8_t v___y_1587_; double v___y_1618_; 
v_fst_1559_ = lean_ctor_get(v_resStartStop_1553_, 0);
lean_inc(v_fst_1559_);
v_snd_1560_ = lean_ctor_get(v_resStartStop_1553_, 1);
lean_inc(v_snd_1560_);
lean_dec_ref(v_resStartStop_1553_);
v_fst_1573_ = lean_ctor_get(v_snd_1560_, 0);
lean_inc(v_fst_1573_);
v_snd_1574_ = lean_ctor_get(v_snd_1560_, 1);
lean_inc(v_snd_1574_);
lean_dec(v_snd_1560_);
v___x_1575_ = l_Lean_trace_profiler;
v___x_1576_ = l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__3(v_opts_1548_, v___x_1575_);
if (v___x_1576_ == 0)
{
v___y_1587_ = v___x_1576_;
goto v___jp_1586_;
}
else
{
lean_object* v___x_1623_; uint8_t v___x_1624_; 
v___x_1623_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1624_ = l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__3(v_opts_1548_, v___x_1623_);
if (v___x_1624_ == 0)
{
lean_object* v___x_1625_; lean_object* v___x_1626_; double v___x_1627_; double v___x_1628_; double v___x_1629_; 
v___x_1625_ = l_Lean_trace_profiler_threshold;
v___x_1626_ = l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__4(v_opts_1548_, v___x_1625_);
v___x_1627_ = lean_float_of_nat(v___x_1626_);
v___x_1628_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5___closed__0);
v___x_1629_ = lean_float_div(v___x_1627_, v___x_1628_);
v___y_1618_ = v___x_1629_;
goto v___jp_1617_;
}
else
{
lean_object* v___x_1630_; lean_object* v___x_1631_; double v___x_1632_; 
v___x_1630_ = l_Lean_trace_profiler_threshold;
v___x_1631_ = l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__4(v_opts_1548_, v___x_1630_);
v___x_1632_ = lean_float_of_nat(v___x_1631_);
v___y_1618_ = v___x_1632_;
goto v___jp_1617_;
}
}
v___jp_1561_:
{
lean_object* v___x_1563_; 
v___x_1563_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__5(v_oldTraces_1550_, v_data_1562_, v_ref_1551_, v_msg_1552_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_);
if (lean_obj_tag(v___x_1563_) == 0)
{
lean_object* v___x_1564_; 
lean_dec_ref_known(v___x_1563_, 1);
v___x_1564_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6___redArg(v_fst_1559_);
return v___x_1564_;
}
else
{
lean_object* v_a_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1572_; 
lean_dec(v_fst_1559_);
v_a_1565_ = lean_ctor_get(v___x_1563_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v___x_1563_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1567_ = v___x_1563_;
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_a_1565_);
lean_dec(v___x_1563_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v___x_1570_; 
if (v_isShared_1568_ == 0)
{
v___x_1570_ = v___x_1567_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v_a_1565_);
v___x_1570_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
return v___x_1570_;
}
}
}
}
v___jp_1577_:
{
uint8_t v_result_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; double v___x_1581_; lean_object* v_data_1582_; 
v_result_1578_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__7(v_fst_1559_);
v___x_1579_ = lean_box(v_result_1578_);
v___x_1580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1580_, 0, v___x_1579_);
v___x_1581_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__0);
lean_inc_ref(v_tag_1547_);
lean_inc_ref(v___x_1580_);
lean_inc(v_cls_1545_);
v_data_1582_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1582_, 0, v_cls_1545_);
lean_ctor_set(v_data_1582_, 1, v___x_1580_);
lean_ctor_set(v_data_1582_, 2, v_tag_1547_);
lean_ctor_set_float(v_data_1582_, sizeof(void*)*3, v___x_1581_);
lean_ctor_set_float(v_data_1582_, sizeof(void*)*3 + 8, v___x_1581_);
lean_ctor_set_uint8(v_data_1582_, sizeof(void*)*3 + 16, v_collapsed_1546_);
if (v___x_1576_ == 0)
{
lean_dec_ref_known(v___x_1580_, 1);
lean_dec(v_snd_1574_);
lean_dec(v_fst_1573_);
lean_dec_ref(v_tag_1547_);
lean_dec(v_cls_1545_);
v_data_1562_ = v_data_1582_;
goto v___jp_1561_;
}
else
{
lean_object* v_data_1583_; double v___x_1584_; double v___x_1585_; 
lean_dec_ref_known(v_data_1582_, 3);
v_data_1583_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1583_, 0, v_cls_1545_);
lean_ctor_set(v_data_1583_, 1, v___x_1580_);
lean_ctor_set(v_data_1583_, 2, v_tag_1547_);
v___x_1584_ = lean_unbox_float(v_fst_1573_);
lean_dec(v_fst_1573_);
lean_ctor_set_float(v_data_1583_, sizeof(void*)*3, v___x_1584_);
v___x_1585_ = lean_unbox_float(v_snd_1574_);
lean_dec(v_snd_1574_);
lean_ctor_set_float(v_data_1583_, sizeof(void*)*3 + 8, v___x_1585_);
lean_ctor_set_uint8(v_data_1583_, sizeof(void*)*3 + 16, v_collapsed_1546_);
v_data_1562_ = v_data_1583_;
goto v___jp_1561_;
}
}
v___jp_1586_:
{
if (v_clsEnabled_1549_ == 0)
{
if (v___y_1587_ == 0)
{
lean_object* v___x_1588_; lean_object* v_traceState_1589_; lean_object* v_env_1590_; lean_object* v_nextMacroScope_1591_; lean_object* v_ngen_1592_; lean_object* v_auxDeclNGen_1593_; lean_object* v_cache_1594_; lean_object* v_messages_1595_; lean_object* v_infoState_1596_; lean_object* v_snapshotTasks_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1616_; 
lean_dec(v_snd_1574_);
lean_dec(v_fst_1573_);
lean_dec_ref(v_msg_1552_);
lean_dec(v_ref_1551_);
lean_dec_ref(v_tag_1547_);
lean_dec(v_cls_1545_);
v___x_1588_ = lean_st_ref_take(v___y_1557_);
v_traceState_1589_ = lean_ctor_get(v___x_1588_, 4);
v_env_1590_ = lean_ctor_get(v___x_1588_, 0);
v_nextMacroScope_1591_ = lean_ctor_get(v___x_1588_, 1);
v_ngen_1592_ = lean_ctor_get(v___x_1588_, 2);
v_auxDeclNGen_1593_ = lean_ctor_get(v___x_1588_, 3);
v_cache_1594_ = lean_ctor_get(v___x_1588_, 5);
v_messages_1595_ = lean_ctor_get(v___x_1588_, 6);
v_infoState_1596_ = lean_ctor_get(v___x_1588_, 7);
v_snapshotTasks_1597_ = lean_ctor_get(v___x_1588_, 8);
v_isSharedCheck_1616_ = !lean_is_exclusive(v___x_1588_);
if (v_isSharedCheck_1616_ == 0)
{
v___x_1599_ = v___x_1588_;
v_isShared_1600_ = v_isSharedCheck_1616_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_snapshotTasks_1597_);
lean_inc(v_infoState_1596_);
lean_inc(v_messages_1595_);
lean_inc(v_cache_1594_);
lean_inc(v_traceState_1589_);
lean_inc(v_auxDeclNGen_1593_);
lean_inc(v_ngen_1592_);
lean_inc(v_nextMacroScope_1591_);
lean_inc(v_env_1590_);
lean_dec(v___x_1588_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1616_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
uint64_t v_tid_1601_; lean_object* v_traces_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1615_; 
v_tid_1601_ = lean_ctor_get_uint64(v_traceState_1589_, sizeof(void*)*1);
v_traces_1602_ = lean_ctor_get(v_traceState_1589_, 0);
v_isSharedCheck_1615_ = !lean_is_exclusive(v_traceState_1589_);
if (v_isSharedCheck_1615_ == 0)
{
v___x_1604_ = v_traceState_1589_;
v_isShared_1605_ = v_isSharedCheck_1615_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_traces_1602_);
lean_dec(v_traceState_1589_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1615_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1606_; lean_object* v___x_1608_; 
v___x_1606_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1550_, v_traces_1602_);
lean_dec_ref(v_traces_1602_);
if (v_isShared_1605_ == 0)
{
lean_ctor_set(v___x_1604_, 0, v___x_1606_);
v___x_1608_ = v___x_1604_;
goto v_reusejp_1607_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v___x_1606_);
lean_ctor_set_uint64(v_reuseFailAlloc_1614_, sizeof(void*)*1, v_tid_1601_);
v___x_1608_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1607_;
}
v_reusejp_1607_:
{
lean_object* v___x_1610_; 
if (v_isShared_1600_ == 0)
{
lean_ctor_set(v___x_1599_, 4, v___x_1608_);
v___x_1610_ = v___x_1599_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v_env_1590_);
lean_ctor_set(v_reuseFailAlloc_1613_, 1, v_nextMacroScope_1591_);
lean_ctor_set(v_reuseFailAlloc_1613_, 2, v_ngen_1592_);
lean_ctor_set(v_reuseFailAlloc_1613_, 3, v_auxDeclNGen_1593_);
lean_ctor_set(v_reuseFailAlloc_1613_, 4, v___x_1608_);
lean_ctor_set(v_reuseFailAlloc_1613_, 5, v_cache_1594_);
lean_ctor_set(v_reuseFailAlloc_1613_, 6, v_messages_1595_);
lean_ctor_set(v_reuseFailAlloc_1613_, 7, v_infoState_1596_);
lean_ctor_set(v_reuseFailAlloc_1613_, 8, v_snapshotTasks_1597_);
v___x_1610_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1611_ = lean_st_ref_put(v___y_1557_, v___x_1610_);
v___x_1612_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6___redArg(v_fst_1559_);
return v___x_1612_;
}
}
}
}
}
else
{
goto v___jp_1577_;
}
}
else
{
goto v___jp_1577_;
}
}
v___jp_1617_:
{
double v___x_1619_; double v___x_1620_; double v___x_1621_; uint8_t v___x_1622_; 
v___x_1619_ = lean_unbox_float(v_snd_1574_);
v___x_1620_ = lean_unbox_float(v_fst_1573_);
v___x_1621_ = lean_float_sub(v___x_1619_, v___x_1620_);
v___x_1622_ = lean_float_decLt(v___y_1618_, v___x_1621_);
v___y_1587_ = v___x_1622_;
goto v___jp_1586_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5___boxed(lean_object* v_cls_1633_, lean_object* v_collapsed_1634_, lean_object* v_tag_1635_, lean_object* v_opts_1636_, lean_object* v_clsEnabled_1637_, lean_object* v_oldTraces_1638_, lean_object* v_ref_1639_, lean_object* v_msg_1640_, lean_object* v_resStartStop_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_){
_start:
{
uint8_t v_collapsed_boxed_1647_; uint8_t v_clsEnabled_boxed_1648_; lean_object* v_res_1649_; 
v_collapsed_boxed_1647_ = lean_unbox(v_collapsed_1634_);
v_clsEnabled_boxed_1648_ = lean_unbox(v_clsEnabled_1637_);
v_res_1649_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5(v_cls_1633_, v_collapsed_boxed_1647_, v_tag_1635_, v_opts_1636_, v_clsEnabled_boxed_1648_, v_oldTraces_1638_, v_ref_1639_, v_msg_1640_, v_resStartStop_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_);
lean_dec(v___y_1645_);
lean_dec_ref(v___y_1644_);
lean_dec(v___y_1643_);
lean_dec_ref(v___y_1642_);
lean_dec_ref(v_opts_1636_);
return v_res_1649_;
}
}
static double _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__0(void){
_start:
{
lean_object* v___x_1650_; double v___x_1651_; 
v___x_1650_ = lean_unsigned_to_nat(1000000000u);
v___x_1651_ = lean_float_of_nat(v___x_1650_);
return v___x_1651_;
}
}
static lean_object* _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__1(void){
_start:
{
lean_object* v___x_1652_; 
v___x_1652_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1652_;
}
}
static lean_object* _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__2(void){
_start:
{
lean_object* v___x_1653_; lean_object* v___x_1654_; 
v___x_1653_ = lean_obj_once(&l_Lean_Meta_isLevelDefEqAuxImpl___closed__1, &l_Lean_Meta_isLevelDefEqAuxImpl___closed__1_once, _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__1);
v___x_1654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1653_);
return v___x_1654_;
}
}
static lean_object* _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__3(void){
_start:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; 
v___x_1655_ = lean_obj_once(&l_Lean_Meta_isLevelDefEqAuxImpl___closed__2, &l_Lean_Meta_isLevelDefEqAuxImpl___closed__2_once, _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__2);
v___x_1656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1655_);
lean_ctor_set(v___x_1656_, 1, v___x_1655_);
return v___x_1656_;
}
}
static lean_object* _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__8(void){
_start:
{
lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; 
v___x_1665_ = ((lean_object*)(l_Lean_Meta_isLevelDefEqAuxImpl___closed__7));
v___x_1666_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__9));
v___x_1667_ = l_Lean_Name_append(v___x_1666_, v___x_1665_);
return v___x_1667_;
}
}
LEAN_EXPORT lean_object* lean_is_level_def_eq(lean_object* v_x_1668_, lean_object* v_x_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_){
_start:
{
lean_object* v___y_1676_; lean_object* v___y_1677_; uint8_t v___y_1678_; lean_object* v___y_1679_; lean_object* v___y_1680_; uint8_t v___y_1681_; lean_object* v___y_1682_; lean_object* v___y_1683_; lean_object* v___y_1684_; lean_object* v___y_1685_; lean_object* v___y_1686_; lean_object* v___y_1687_; lean_object* v___y_1688_; lean_object* v_a_1689_; lean_object* v___y_1699_; lean_object* v___y_1700_; uint8_t v___y_1701_; lean_object* v___y_1702_; lean_object* v___y_1703_; uint8_t v___y_1704_; lean_object* v___y_1705_; lean_object* v___y_1706_; lean_object* v___y_1707_; lean_object* v___y_1708_; lean_object* v___y_1709_; lean_object* v___y_1710_; lean_object* v___y_1711_; lean_object* v_a_1712_; lean_object* v___y_1725_; uint8_t v___y_1726_; lean_object* v___y_1727_; uint8_t v___y_1728_; lean_object* v___y_1729_; uint8_t v___y_1730_; lean_object* v___y_1731_; lean_object* v___y_1732_; lean_object* v___y_1733_; lean_object* v___y_1734_; lean_object* v___y_1735_; lean_object* v___y_1736_; lean_object* v___y_1737_; lean_object* v___y_1738_; lean_object* v___y_1739_; lean_object* v___y_1740_; lean_object* v_toCold_1741_; lean_object* v_currRecDepth_1742_; lean_object* v_ref_1743_; uint8_t v_suppressElabErrors_1744_; lean_object* v___y_1745_; lean_object* v___y_1811_; uint8_t v___y_1812_; lean_object* v___y_1813_; uint8_t v___y_1814_; lean_object* v___y_1815_; uint8_t v___y_1816_; lean_object* v___y_1817_; lean_object* v___y_1818_; lean_object* v___y_1819_; lean_object* v___y_1820_; lean_object* v___y_1821_; lean_object* v___y_1822_; lean_object* v___y_1823_; lean_object* v___y_1824_; lean_object* v___y_1825_; lean_object* v___y_1826_; lean_object* v___y_1827_; lean_object* v___y_1828_; lean_object* v___y_1834_; uint8_t v___y_1835_; lean_object* v___y_1836_; uint8_t v___y_1837_; lean_object* v___y_1838_; uint8_t v___y_1839_; lean_object* v___y_1840_; lean_object* v___y_1841_; lean_object* v___y_1842_; lean_object* v___y_1843_; lean_object* v___y_1844_; lean_object* v___y_1845_; lean_object* v___y_1846_; lean_object* v___y_1847_; lean_object* v___y_1848_; lean_object* v___y_1849_; uint8_t v___y_1850_; lean_object* v___y_1872_; uint8_t v___y_1873_; lean_object* v___y_1874_; lean_object* v___y_1875_; uint8_t v___y_1876_; lean_object* v___y_1877_; lean_object* v___y_1878_; uint8_t v___y_1879_; lean_object* v___y_1880_; lean_object* v___y_1881_; lean_object* v___y_1882_; lean_object* v___y_1883_; lean_object* v___y_1884_; lean_object* v___y_1885_; lean_object* v___y_1886_; uint8_t v___y_1887_; lean_object* v___y_1888_; lean_object* v_lhs_1907_; lean_object* v_rhs_1908_; lean_object* v___y_1909_; lean_object* v___y_1910_; lean_object* v___y_1911_; lean_object* v___y_1912_; 
if (lean_obj_tag(v_x_1668_) == 1)
{
if (lean_obj_tag(v_x_1669_) == 1)
{
lean_object* v_a_1938_; lean_object* v_a_1939_; lean_object* v___x_1940_; 
v_a_1938_ = lean_ctor_get(v_x_1668_, 0);
lean_inc(v_a_1938_);
lean_dec_ref_known(v_x_1668_, 1);
v_a_1939_ = lean_ctor_get(v_x_1669_, 0);
lean_inc(v_a_1939_);
lean_dec_ref_known(v_x_1669_, 1);
v___x_1940_ = lean_is_level_def_eq(v_a_1938_, v_a_1939_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_);
return v___x_1940_;
}
else
{
v_lhs_1907_ = v_x_1668_;
v_rhs_1908_ = v_x_1669_;
v___y_1909_ = v_a_1670_;
v___y_1910_ = v_a_1671_;
v___y_1911_ = v_a_1672_;
v___y_1912_ = v_a_1673_;
goto v___jp_1906_;
}
}
else
{
v_lhs_1907_ = v_x_1668_;
v_rhs_1908_ = v_x_1669_;
v___y_1909_ = v_a_1670_;
v___y_1910_ = v_a_1671_;
v___y_1911_ = v_a_1672_;
v___y_1912_ = v_a_1673_;
goto v___jp_1906_;
}
v___jp_1675_:
{
lean_object* v___x_1690_; double v___x_1691_; double v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; 
v___x_1690_ = lean_io_get_num_heartbeats();
v___x_1691_ = lean_float_of_nat(v___y_1687_);
v___x_1692_ = lean_float_of_nat(v___x_1690_);
v___x_1693_ = lean_box_float(v___x_1691_);
v___x_1694_ = lean_box_float(v___x_1692_);
v___x_1695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1695_, 0, v___x_1693_);
lean_ctor_set(v___x_1695_, 1, v___x_1694_);
v___x_1696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1696_, 0, v_a_1689_);
lean_ctor_set(v___x_1696_, 1, v___x_1695_);
lean_inc_ref(v___y_1676_);
lean_inc(v___y_1688_);
v___x_1697_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5(v___y_1688_, v___y_1678_, v___y_1676_, v___y_1685_, v___y_1681_, v___y_1684_, v___y_1680_, v___y_1679_, v___x_1696_, v___y_1683_, v___y_1677_, v___y_1686_, v___y_1682_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1686_);
lean_dec(v___y_1677_);
lean_dec_ref(v___y_1683_);
lean_dec_ref(v___y_1685_);
return v___x_1697_;
}
v___jp_1698_:
{
lean_object* v___x_1713_; double v___x_1714_; double v___x_1715_; double v___x_1716_; double v___x_1717_; double v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1713_ = lean_io_mono_nanos_now();
v___x_1714_ = lean_float_of_nat(v___y_1707_);
v___x_1715_ = lean_float_once(&l_Lean_Meta_isLevelDefEqAuxImpl___closed__0, &l_Lean_Meta_isLevelDefEqAuxImpl___closed__0_once, _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__0);
v___x_1716_ = lean_float_div(v___x_1714_, v___x_1715_);
v___x_1717_ = lean_float_of_nat(v___x_1713_);
v___x_1718_ = lean_float_div(v___x_1717_, v___x_1715_);
v___x_1719_ = lean_box_float(v___x_1716_);
v___x_1720_ = lean_box_float(v___x_1718_);
v___x_1721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1721_, 0, v___x_1719_);
lean_ctor_set(v___x_1721_, 1, v___x_1720_);
v___x_1722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1722_, 0, v_a_1712_);
lean_ctor_set(v___x_1722_, 1, v___x_1721_);
lean_inc_ref(v___y_1699_);
lean_inc(v___y_1711_);
v___x_1723_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5(v___y_1711_, v___y_1701_, v___y_1699_, v___y_1709_, v___y_1704_, v___y_1708_, v___y_1703_, v___y_1702_, v___x_1722_, v___y_1706_, v___y_1700_, v___y_1710_, v___y_1705_);
lean_dec(v___y_1705_);
lean_dec_ref(v___y_1710_);
lean_dec(v___y_1700_);
lean_dec_ref(v___y_1706_);
lean_dec_ref(v___y_1709_);
return v___x_1723_;
}
v___jp_1724_:
{
lean_object* v_fileName_1746_; lean_object* v_fileMap_1747_; lean_object* v_currNamespace_1748_; lean_object* v_openDecls_1749_; lean_object* v_initHeartbeats_1750_; lean_object* v_maxHeartbeats_1751_; lean_object* v_quotContext_1752_; lean_object* v_currMacroScope_1753_; lean_object* v_cancelTk_x3f_1754_; lean_object* v_inheritedTraceOptions_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1807_; 
v_fileName_1746_ = lean_ctor_get(v_toCold_1741_, 0);
v_fileMap_1747_ = lean_ctor_get(v_toCold_1741_, 1);
v_currNamespace_1748_ = lean_ctor_get(v_toCold_1741_, 4);
v_openDecls_1749_ = lean_ctor_get(v_toCold_1741_, 5);
v_initHeartbeats_1750_ = lean_ctor_get(v_toCold_1741_, 6);
v_maxHeartbeats_1751_ = lean_ctor_get(v_toCold_1741_, 7);
v_quotContext_1752_ = lean_ctor_get(v_toCold_1741_, 8);
v_currMacroScope_1753_ = lean_ctor_get(v_toCold_1741_, 9);
v_cancelTk_x3f_1754_ = lean_ctor_get(v_toCold_1741_, 10);
v_inheritedTraceOptions_1755_ = lean_ctor_get(v_toCold_1741_, 11);
v_isSharedCheck_1807_ = !lean_is_exclusive(v_toCold_1741_);
if (v_isSharedCheck_1807_ == 0)
{
lean_object* v_unused_1808_; lean_object* v_unused_1809_; 
v_unused_1808_ = lean_ctor_get(v_toCold_1741_, 3);
lean_dec(v_unused_1808_);
v_unused_1809_ = lean_ctor_get(v_toCold_1741_, 2);
lean_dec(v_unused_1809_);
v___x_1757_ = v_toCold_1741_;
v_isShared_1758_ = v_isSharedCheck_1807_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_inheritedTraceOptions_1755_);
lean_inc(v_cancelTk_x3f_1754_);
lean_inc(v_currMacroScope_1753_);
lean_inc(v_quotContext_1752_);
lean_inc(v_maxHeartbeats_1751_);
lean_inc(v_initHeartbeats_1750_);
lean_inc(v_openDecls_1749_);
lean_inc(v_currNamespace_1748_);
lean_inc(v_fileMap_1747_);
lean_inc(v_fileName_1746_);
lean_dec(v_toCold_1741_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1807_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1762_; 
v___x_1759_ = l_Lean_maxRecDepth;
v___x_1760_ = l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__4(v___y_1732_, v___x_1759_);
if (v_isShared_1758_ == 0)
{
lean_ctor_set(v___x_1757_, 3, v___x_1760_);
lean_ctor_set(v___x_1757_, 2, v___y_1732_);
v___x_1762_ = v___x_1757_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1806_; 
v_reuseFailAlloc_1806_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1806_, 0, v_fileName_1746_);
lean_ctor_set(v_reuseFailAlloc_1806_, 1, v_fileMap_1747_);
lean_ctor_set(v_reuseFailAlloc_1806_, 2, v___y_1732_);
lean_ctor_set(v_reuseFailAlloc_1806_, 3, v___x_1760_);
lean_ctor_set(v_reuseFailAlloc_1806_, 4, v_currNamespace_1748_);
lean_ctor_set(v_reuseFailAlloc_1806_, 5, v_openDecls_1749_);
lean_ctor_set(v_reuseFailAlloc_1806_, 6, v_initHeartbeats_1750_);
lean_ctor_set(v_reuseFailAlloc_1806_, 7, v_maxHeartbeats_1751_);
lean_ctor_set(v_reuseFailAlloc_1806_, 8, v_quotContext_1752_);
lean_ctor_set(v_reuseFailAlloc_1806_, 9, v_currMacroScope_1753_);
lean_ctor_set(v_reuseFailAlloc_1806_, 10, v_cancelTk_x3f_1754_);
lean_ctor_set(v_reuseFailAlloc_1806_, 11, v_inheritedTraceOptions_1755_);
v___x_1762_ = v_reuseFailAlloc_1806_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v_a_1765_; lean_object* v___x_1766_; lean_object* v_a_1767_; lean_object* v___x_1768_; uint8_t v___x_1769_; 
v___x_1763_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1763_, 0, v___x_1762_);
lean_ctor_set(v___x_1763_, 1, v_currRecDepth_1742_);
lean_ctor_set(v___x_1763_, 2, v_ref_1743_);
lean_ctor_set_uint8(v___x_1763_, sizeof(void*)*3, v___y_1726_);
lean_ctor_set_uint8(v___x_1763_, sizeof(void*)*3 + 1, v_suppressElabErrors_1744_);
v___x_1764_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2_spec__3(v___y_1739_, v___y_1734_, v___y_1727_, v___x_1763_, v___y_1745_);
lean_dec(v___y_1745_);
lean_dec_ref_known(v___x_1763_, 3);
v_a_1765_ = lean_ctor_get(v___x_1764_, 0);
lean_inc(v_a_1765_);
lean_dec_ref(v___x_1764_);
v___x_1766_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2_spec__3(v_a_1765_, v___y_1734_, v___y_1727_, v___y_1735_, v___y_1731_);
lean_dec_ref(v___y_1735_);
v_a_1767_ = lean_ctor_get(v___x_1766_, 0);
lean_inc(v_a_1767_);
lean_dec_ref(v___x_1766_);
v___x_1768_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1769_ = l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__3(v___y_1738_, v___x_1768_);
if (v___x_1769_ == 0)
{
lean_object* v___x_1770_; lean_object* v___x_1771_; 
v___x_1770_ = lean_io_mono_nanos_now();
lean_inc(v___y_1731_);
lean_inc_ref(v___y_1737_);
lean_inc(v___y_1727_);
lean_inc_ref(v___y_1734_);
v___x_1771_ = lean_apply_5(v___y_1733_, v___y_1734_, v___y_1727_, v___y_1737_, v___y_1731_, lean_box(0));
if (lean_obj_tag(v___x_1771_) == 0)
{
lean_object* v_a_1772_; lean_object* v___x_1774_; uint8_t v_isShared_1775_; uint8_t v_isSharedCheck_1779_; 
v_a_1772_ = lean_ctor_get(v___x_1771_, 0);
v_isSharedCheck_1779_ = !lean_is_exclusive(v___x_1771_);
if (v_isSharedCheck_1779_ == 0)
{
v___x_1774_ = v___x_1771_;
v_isShared_1775_ = v_isSharedCheck_1779_;
goto v_resetjp_1773_;
}
else
{
lean_inc(v_a_1772_);
lean_dec(v___x_1771_);
v___x_1774_ = lean_box(0);
v_isShared_1775_ = v_isSharedCheck_1779_;
goto v_resetjp_1773_;
}
v_resetjp_1773_:
{
lean_object* v___x_1777_; 
if (v_isShared_1775_ == 0)
{
lean_ctor_set_tag(v___x_1774_, 1);
v___x_1777_ = v___x_1774_;
goto v_reusejp_1776_;
}
else
{
lean_object* v_reuseFailAlloc_1778_; 
v_reuseFailAlloc_1778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1778_, 0, v_a_1772_);
v___x_1777_ = v_reuseFailAlloc_1778_;
goto v_reusejp_1776_;
}
v_reusejp_1776_:
{
v___y_1699_ = v___y_1725_;
v___y_1700_ = v___y_1727_;
v___y_1701_ = v___y_1728_;
v___y_1702_ = v_a_1767_;
v___y_1703_ = v___y_1729_;
v___y_1704_ = v___y_1730_;
v___y_1705_ = v___y_1731_;
v___y_1706_ = v___y_1734_;
v___y_1707_ = v___x_1770_;
v___y_1708_ = v___y_1736_;
v___y_1709_ = v___y_1738_;
v___y_1710_ = v___y_1737_;
v___y_1711_ = v___y_1740_;
v_a_1712_ = v___x_1777_;
goto v___jp_1698_;
}
}
}
else
{
lean_object* v_a_1780_; lean_object* v___x_1782_; uint8_t v_isShared_1783_; uint8_t v_isSharedCheck_1787_; 
v_a_1780_ = lean_ctor_get(v___x_1771_, 0);
v_isSharedCheck_1787_ = !lean_is_exclusive(v___x_1771_);
if (v_isSharedCheck_1787_ == 0)
{
v___x_1782_ = v___x_1771_;
v_isShared_1783_ = v_isSharedCheck_1787_;
goto v_resetjp_1781_;
}
else
{
lean_inc(v_a_1780_);
lean_dec(v___x_1771_);
v___x_1782_ = lean_box(0);
v_isShared_1783_ = v_isSharedCheck_1787_;
goto v_resetjp_1781_;
}
v_resetjp_1781_:
{
lean_object* v___x_1785_; 
if (v_isShared_1783_ == 0)
{
lean_ctor_set_tag(v___x_1782_, 0);
v___x_1785_ = v___x_1782_;
goto v_reusejp_1784_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v_a_1780_);
v___x_1785_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1784_;
}
v_reusejp_1784_:
{
v___y_1699_ = v___y_1725_;
v___y_1700_ = v___y_1727_;
v___y_1701_ = v___y_1728_;
v___y_1702_ = v_a_1767_;
v___y_1703_ = v___y_1729_;
v___y_1704_ = v___y_1730_;
v___y_1705_ = v___y_1731_;
v___y_1706_ = v___y_1734_;
v___y_1707_ = v___x_1770_;
v___y_1708_ = v___y_1736_;
v___y_1709_ = v___y_1738_;
v___y_1710_ = v___y_1737_;
v___y_1711_ = v___y_1740_;
v_a_1712_ = v___x_1785_;
goto v___jp_1698_;
}
}
}
}
else
{
lean_object* v___x_1788_; lean_object* v___x_1789_; 
v___x_1788_ = lean_io_get_num_heartbeats();
lean_inc(v___y_1731_);
lean_inc_ref(v___y_1737_);
lean_inc(v___y_1727_);
lean_inc_ref(v___y_1734_);
v___x_1789_ = lean_apply_5(v___y_1733_, v___y_1734_, v___y_1727_, v___y_1737_, v___y_1731_, lean_box(0));
if (lean_obj_tag(v___x_1789_) == 0)
{
lean_object* v_a_1790_; lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1797_; 
v_a_1790_ = lean_ctor_get(v___x_1789_, 0);
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1789_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1792_ = v___x_1789_;
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
else
{
lean_inc(v_a_1790_);
lean_dec(v___x_1789_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v___x_1795_; 
if (v_isShared_1793_ == 0)
{
lean_ctor_set_tag(v___x_1792_, 1);
v___x_1795_ = v___x_1792_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v_a_1790_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
v___y_1676_ = v___y_1725_;
v___y_1677_ = v___y_1727_;
v___y_1678_ = v___y_1728_;
v___y_1679_ = v_a_1767_;
v___y_1680_ = v___y_1729_;
v___y_1681_ = v___y_1730_;
v___y_1682_ = v___y_1731_;
v___y_1683_ = v___y_1734_;
v___y_1684_ = v___y_1736_;
v___y_1685_ = v___y_1738_;
v___y_1686_ = v___y_1737_;
v___y_1687_ = v___x_1788_;
v___y_1688_ = v___y_1740_;
v_a_1689_ = v___x_1795_;
goto v___jp_1675_;
}
}
}
else
{
lean_object* v_a_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1805_; 
v_a_1798_ = lean_ctor_get(v___x_1789_, 0);
v_isSharedCheck_1805_ = !lean_is_exclusive(v___x_1789_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1800_ = v___x_1789_;
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_a_1798_);
lean_dec(v___x_1789_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1803_; 
if (v_isShared_1801_ == 0)
{
lean_ctor_set_tag(v___x_1800_, 0);
v___x_1803_ = v___x_1800_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_a_1798_);
v___x_1803_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
v___y_1676_ = v___y_1725_;
v___y_1677_ = v___y_1727_;
v___y_1678_ = v___y_1728_;
v___y_1679_ = v_a_1767_;
v___y_1680_ = v___y_1729_;
v___y_1681_ = v___y_1730_;
v___y_1682_ = v___y_1731_;
v___y_1683_ = v___y_1734_;
v___y_1684_ = v___y_1736_;
v___y_1685_ = v___y_1738_;
v___y_1686_ = v___y_1737_;
v___y_1687_ = v___x_1788_;
v___y_1688_ = v___y_1740_;
v_a_1689_ = v___x_1803_;
goto v___jp_1675_;
}
}
}
}
}
}
}
v___jp_1810_:
{
lean_object* v_toCold_1829_; lean_object* v_currRecDepth_1830_; lean_object* v_ref_1831_; uint8_t v_suppressElabErrors_1832_; 
v_toCold_1829_ = lean_ctor_get(v___y_1827_, 0);
lean_inc_ref(v_toCold_1829_);
v_currRecDepth_1830_ = lean_ctor_get(v___y_1827_, 1);
lean_inc(v_currRecDepth_1830_);
v_ref_1831_ = lean_ctor_get(v___y_1827_, 2);
lean_inc(v_ref_1831_);
v_suppressElabErrors_1832_ = lean_ctor_get_uint8(v___y_1827_, sizeof(void*)*3 + 1);
lean_dec_ref(v___y_1827_);
v___y_1725_ = v___y_1811_;
v___y_1726_ = v___y_1812_;
v___y_1727_ = v___y_1813_;
v___y_1728_ = v___y_1814_;
v___y_1729_ = v___y_1815_;
v___y_1730_ = v___y_1816_;
v___y_1731_ = v___y_1817_;
v___y_1732_ = v___y_1818_;
v___y_1733_ = v___y_1819_;
v___y_1734_ = v___y_1820_;
v___y_1735_ = v___y_1821_;
v___y_1736_ = v___y_1822_;
v___y_1737_ = v___y_1823_;
v___y_1738_ = v___y_1824_;
v___y_1739_ = v___y_1825_;
v___y_1740_ = v___y_1826_;
v_toCold_1741_ = v_toCold_1829_;
v_currRecDepth_1742_ = v_currRecDepth_1830_;
v_ref_1743_ = v_ref_1831_;
v_suppressElabErrors_1744_ = v_suppressElabErrors_1832_;
v___y_1745_ = v___y_1828_;
goto v___jp_1724_;
}
v___jp_1833_:
{
if (v___y_1850_ == 0)
{
lean_object* v___x_1851_; lean_object* v_env_1852_; lean_object* v_nextMacroScope_1853_; lean_object* v_ngen_1854_; lean_object* v_auxDeclNGen_1855_; lean_object* v_traceState_1856_; lean_object* v_messages_1857_; lean_object* v_infoState_1858_; lean_object* v_snapshotTasks_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1869_; 
v___x_1851_ = lean_st_ref_take(v___y_1840_);
v_env_1852_ = lean_ctor_get(v___x_1851_, 0);
v_nextMacroScope_1853_ = lean_ctor_get(v___x_1851_, 1);
v_ngen_1854_ = lean_ctor_get(v___x_1851_, 2);
v_auxDeclNGen_1855_ = lean_ctor_get(v___x_1851_, 3);
v_traceState_1856_ = lean_ctor_get(v___x_1851_, 4);
v_messages_1857_ = lean_ctor_get(v___x_1851_, 6);
v_infoState_1858_ = lean_ctor_get(v___x_1851_, 7);
v_snapshotTasks_1859_ = lean_ctor_get(v___x_1851_, 8);
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1851_);
if (v_isSharedCheck_1869_ == 0)
{
lean_object* v_unused_1870_; 
v_unused_1870_ = lean_ctor_get(v___x_1851_, 5);
lean_dec(v_unused_1870_);
v___x_1861_ = v___x_1851_;
v_isShared_1862_ = v_isSharedCheck_1869_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_snapshotTasks_1859_);
lean_inc(v_infoState_1858_);
lean_inc(v_messages_1857_);
lean_inc(v_traceState_1856_);
lean_inc(v_auxDeclNGen_1855_);
lean_inc(v_ngen_1854_);
lean_inc(v_nextMacroScope_1853_);
lean_inc(v_env_1852_);
lean_dec(v___x_1851_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1869_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1866_; 
v___x_1863_ = l_Lean_Kernel_enableDiag(v_env_1852_, v___y_1835_);
v___x_1864_ = lean_obj_once(&l_Lean_Meta_isLevelDefEqAuxImpl___closed__3, &l_Lean_Meta_isLevelDefEqAuxImpl___closed__3_once, _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__3);
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 5, v___x_1864_);
lean_ctor_set(v___x_1861_, 0, v___x_1863_);
v___x_1866_ = v___x_1861_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v___x_1863_);
lean_ctor_set(v_reuseFailAlloc_1868_, 1, v_nextMacroScope_1853_);
lean_ctor_set(v_reuseFailAlloc_1868_, 2, v_ngen_1854_);
lean_ctor_set(v_reuseFailAlloc_1868_, 3, v_auxDeclNGen_1855_);
lean_ctor_set(v_reuseFailAlloc_1868_, 4, v_traceState_1856_);
lean_ctor_set(v_reuseFailAlloc_1868_, 5, v___x_1864_);
lean_ctor_set(v_reuseFailAlloc_1868_, 6, v_messages_1857_);
lean_ctor_set(v_reuseFailAlloc_1868_, 7, v_infoState_1858_);
lean_ctor_set(v_reuseFailAlloc_1868_, 8, v_snapshotTasks_1859_);
v___x_1866_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
lean_object* v___x_1867_; 
v___x_1867_ = lean_st_ref_put(v___y_1840_, v___x_1866_);
lean_inc_ref(v___y_1844_);
lean_inc(v___y_1840_);
v___y_1811_ = v___y_1834_;
v___y_1812_ = v___y_1835_;
v___y_1813_ = v___y_1836_;
v___y_1814_ = v___y_1837_;
v___y_1815_ = v___y_1838_;
v___y_1816_ = v___y_1839_;
v___y_1817_ = v___y_1840_;
v___y_1818_ = v___y_1841_;
v___y_1819_ = v___y_1842_;
v___y_1820_ = v___y_1843_;
v___y_1821_ = v___y_1844_;
v___y_1822_ = v___y_1845_;
v___y_1823_ = v___y_1847_;
v___y_1824_ = v___y_1846_;
v___y_1825_ = v___y_1848_;
v___y_1826_ = v___y_1849_;
v___y_1827_ = v___y_1844_;
v___y_1828_ = v___y_1840_;
goto v___jp_1810_;
}
}
}
else
{
lean_inc_ref(v___y_1844_);
lean_inc(v___y_1840_);
v___y_1811_ = v___y_1834_;
v___y_1812_ = v___y_1835_;
v___y_1813_ = v___y_1836_;
v___y_1814_ = v___y_1837_;
v___y_1815_ = v___y_1838_;
v___y_1816_ = v___y_1839_;
v___y_1817_ = v___y_1840_;
v___y_1818_ = v___y_1841_;
v___y_1819_ = v___y_1842_;
v___y_1820_ = v___y_1843_;
v___y_1821_ = v___y_1844_;
v___y_1822_ = v___y_1845_;
v___y_1823_ = v___y_1847_;
v___y_1824_ = v___y_1846_;
v___y_1825_ = v___y_1848_;
v___y_1826_ = v___y_1849_;
v___y_1827_ = v___y_1844_;
v___y_1828_ = v___y_1840_;
goto v___jp_1810_;
}
}
v___jp_1871_:
{
lean_object* v___x_1889_; lean_object* v_a_1890_; lean_object* v_ref_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; uint8_t v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; uint8_t v___x_1902_; lean_object* v___x_1903_; lean_object* v_env_1904_; uint8_t v___x_1905_; 
v___x_1889_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__1___redArg(v___y_1881_);
v_a_1890_ = lean_ctor_get(v___x_1889_, 0);
lean_inc(v_a_1890_);
lean_dec_ref(v___x_1889_);
v_ref_1891_ = l_Lean_replaceRef(v___y_1878_, v___y_1878_);
lean_inc(v_ref_1891_);
lean_inc(v___y_1875_);
lean_inc_ref(v___y_1886_);
v___x_1892_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1892_, 0, v___y_1886_);
lean_ctor_set(v___x_1892_, 1, v___y_1875_);
lean_ctor_set(v___x_1892_, 2, v_ref_1891_);
lean_ctor_set_uint8(v___x_1892_, sizeof(void*)*3, v___y_1873_);
lean_ctor_set_uint8(v___x_1892_, sizeof(void*)*3 + 1, v___y_1887_);
v___x_1893_ = l_Lean_MessageData_ofLevel(v___y_1877_);
v___x_1894_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4_once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__4);
v___x_1895_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1895_, 0, v___x_1893_);
lean_ctor_set(v___x_1895_, 1, v___x_1894_);
v___x_1896_ = l_Lean_MessageData_ofLevel(v___y_1880_);
v___x_1897_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1897_, 0, v___x_1895_);
lean_ctor_set(v___x_1897_, 1, v___x_1896_);
v___x_1898_ = ((lean_object*)(l_Lean_Meta_isLevelDefEqAuxImpl___closed__6));
v___x_1899_ = 0;
lean_inc_ref(v___y_1885_);
v___x_1900_ = l_Lean_Options_set___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__2(v___y_1885_, v___x_1898_, v___x_1899_);
v___x_1901_ = l_Lean_diagnostics;
v___x_1902_ = l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__3(v___x_1900_, v___x_1901_);
v___x_1903_ = lean_st_ref_get(v___y_1881_);
v_env_1904_ = lean_ctor_get(v___x_1903_, 0);
lean_inc_ref(v_env_1904_);
lean_dec(v___x_1903_);
v___x_1905_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_1904_);
lean_dec_ref(v_env_1904_);
if (v___x_1902_ == 0)
{
if (v___x_1905_ == 0)
{
lean_inc(v___y_1881_);
v___y_1725_ = v___y_1872_;
v___y_1726_ = v___x_1902_;
v___y_1727_ = v___y_1874_;
v___y_1728_ = v___y_1876_;
v___y_1729_ = v___y_1878_;
v___y_1730_ = v___y_1879_;
v___y_1731_ = v___y_1881_;
v___y_1732_ = v___x_1900_;
v___y_1733_ = v___y_1882_;
v___y_1734_ = v___y_1883_;
v___y_1735_ = v___x_1892_;
v___y_1736_ = v_a_1890_;
v___y_1737_ = v___y_1884_;
v___y_1738_ = v___y_1885_;
v___y_1739_ = v___x_1897_;
v___y_1740_ = v___y_1888_;
v_toCold_1741_ = v___y_1886_;
v_currRecDepth_1742_ = v___y_1875_;
v_ref_1743_ = v_ref_1891_;
v_suppressElabErrors_1744_ = v___y_1887_;
v___y_1745_ = v___y_1881_;
goto v___jp_1724_;
}
else
{
lean_dec(v_ref_1891_);
lean_dec_ref(v___y_1886_);
lean_dec(v___y_1875_);
v___y_1834_ = v___y_1872_;
v___y_1835_ = v___x_1902_;
v___y_1836_ = v___y_1874_;
v___y_1837_ = v___y_1876_;
v___y_1838_ = v___y_1878_;
v___y_1839_ = v___y_1879_;
v___y_1840_ = v___y_1881_;
v___y_1841_ = v___x_1900_;
v___y_1842_ = v___y_1882_;
v___y_1843_ = v___y_1883_;
v___y_1844_ = v___x_1892_;
v___y_1845_ = v_a_1890_;
v___y_1846_ = v___y_1885_;
v___y_1847_ = v___y_1884_;
v___y_1848_ = v___x_1897_;
v___y_1849_ = v___y_1888_;
v___y_1850_ = v___x_1902_;
goto v___jp_1833_;
}
}
else
{
lean_dec(v_ref_1891_);
lean_dec_ref(v___y_1886_);
lean_dec(v___y_1875_);
v___y_1834_ = v___y_1872_;
v___y_1835_ = v___x_1902_;
v___y_1836_ = v___y_1874_;
v___y_1837_ = v___y_1876_;
v___y_1838_ = v___y_1878_;
v___y_1839_ = v___y_1879_;
v___y_1840_ = v___y_1881_;
v___y_1841_ = v___x_1900_;
v___y_1842_ = v___y_1882_;
v___y_1843_ = v___y_1883_;
v___y_1844_ = v___x_1892_;
v___y_1845_ = v_a_1890_;
v___y_1846_ = v___y_1885_;
v___y_1847_ = v___y_1884_;
v___y_1848_ = v___x_1897_;
v___y_1849_ = v___y_1888_;
v___y_1850_ = v___x_1905_;
goto v___jp_1833_;
}
}
v___jp_1906_:
{
lean_object* v_toCold_1913_; lean_object* v_options_1914_; lean_object* v_currRecDepth_1915_; lean_object* v_ref_1916_; uint8_t v_diag_1917_; uint8_t v_suppressElabErrors_1918_; lean_object* v_inheritedTraceOptions_1919_; uint8_t v_hasTrace_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; uint8_t v___x_1925_; uint8_t v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___y_1929_; 
v_toCold_1913_ = lean_ctor_get(v___y_1911_, 0);
v_options_1914_ = lean_ctor_get(v_toCold_1913_, 2);
v_currRecDepth_1915_ = lean_ctor_get(v___y_1911_, 1);
v_ref_1916_ = lean_ctor_get(v___y_1911_, 2);
v_diag_1917_ = lean_ctor_get_uint8(v___y_1911_, sizeof(void*)*3);
v_suppressElabErrors_1918_ = lean_ctor_get_uint8(v___y_1911_, sizeof(void*)*3 + 1);
v_inheritedTraceOptions_1919_ = lean_ctor_get(v_toCold_1913_, 11);
v_hasTrace_1920_ = lean_ctor_get_uint8(v_options_1914_, sizeof(void*)*1);
v___x_1921_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4));
v___x_1922_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__5));
v___x_1923_ = l_Lean_Level_getLevelOffset(v_lhs_1907_);
v___x_1924_ = l_Lean_Level_getLevelOffset(v_rhs_1908_);
v___x_1925_ = lean_level_eq(v___x_1923_, v___x_1924_);
lean_dec(v___x_1924_);
lean_dec(v___x_1923_);
v___x_1926_ = 1;
v___x_1927_ = lean_box(v___x_1925_);
v___x_1928_ = lean_box(v___x_1926_);
lean_inc(v_rhs_1908_);
lean_inc(v_lhs_1907_);
v___y_1929_ = lean_alloc_closure((void*)(l_Lean_Meta_isLevelDefEqAuxImpl___lam__0___boxed), 11, 6);
lean_closure_set(v___y_1929_, 0, v___x_1927_);
lean_closure_set(v___y_1929_, 1, v___x_1921_);
lean_closure_set(v___y_1929_, 2, v___x_1922_);
lean_closure_set(v___y_1929_, 3, v_lhs_1907_);
lean_closure_set(v___y_1929_, 4, v_rhs_1908_);
lean_closure_set(v___y_1929_, 5, v___x_1928_);
if (v_hasTrace_1920_ == 0)
{
lean_object* v___x_1930_; 
lean_dec_ref(v___y_1929_);
v___x_1930_ = l_Lean_Meta_isLevelDefEqAuxImpl___lam__0(v___x_1925_, v___x_1921_, v___x_1922_, v_lhs_1907_, v_rhs_1908_, v___x_1926_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_);
lean_dec(v___y_1912_);
lean_dec_ref(v___y_1911_);
lean_dec(v___y_1910_);
lean_dec_ref(v___y_1909_);
return v___x_1930_;
}
else
{
lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; uint8_t v___x_1934_; 
v___x_1931_ = ((lean_object*)(l_Lean_Meta_isLevelDefEqAuxImpl___closed__7));
v___x_1932_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax_spec__2___closed__1));
v___x_1933_ = lean_obj_once(&l_Lean_Meta_isLevelDefEqAuxImpl___closed__8, &l_Lean_Meta_isLevelDefEqAuxImpl___closed__8_once, _init_l_Lean_Meta_isLevelDefEqAuxImpl___closed__8);
v___x_1934_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1919_, v_options_1914_, v___x_1933_);
if (v___x_1934_ == 0)
{
lean_object* v___x_1935_; uint8_t v___x_1936_; 
v___x_1935_ = l_Lean_trace_profiler;
v___x_1936_ = l_Lean_Option_get___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__3(v_options_1914_, v___x_1935_);
if (v___x_1936_ == 0)
{
lean_object* v___x_1937_; 
lean_dec_ref(v___y_1929_);
v___x_1937_ = l_Lean_Meta_isLevelDefEqAuxImpl___lam__0(v___x_1925_, v___x_1921_, v___x_1922_, v_lhs_1907_, v_rhs_1908_, v___x_1926_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_);
lean_dec(v___y_1912_);
lean_dec_ref(v___y_1911_);
lean_dec(v___y_1910_);
lean_dec_ref(v___y_1909_);
return v___x_1937_;
}
else
{
lean_inc(v_ref_1916_);
lean_inc(v_currRecDepth_1915_);
lean_inc_ref(v_options_1914_);
lean_inc_ref(v_toCold_1913_);
v___y_1872_ = v___x_1932_;
v___y_1873_ = v_diag_1917_;
v___y_1874_ = v___y_1910_;
v___y_1875_ = v_currRecDepth_1915_;
v___y_1876_ = v___x_1926_;
v___y_1877_ = v_lhs_1907_;
v___y_1878_ = v_ref_1916_;
v___y_1879_ = v___x_1934_;
v___y_1880_ = v_rhs_1908_;
v___y_1881_ = v___y_1912_;
v___y_1882_ = v___y_1929_;
v___y_1883_ = v___y_1909_;
v___y_1884_ = v___y_1911_;
v___y_1885_ = v_options_1914_;
v___y_1886_ = v_toCold_1913_;
v___y_1887_ = v_suppressElabErrors_1918_;
v___y_1888_ = v___x_1931_;
goto v___jp_1871_;
}
}
else
{
lean_inc(v_ref_1916_);
lean_inc(v_currRecDepth_1915_);
lean_inc_ref(v_options_1914_);
lean_inc_ref(v_toCold_1913_);
v___y_1872_ = v___x_1932_;
v___y_1873_ = v_diag_1917_;
v___y_1874_ = v___y_1910_;
v___y_1875_ = v_currRecDepth_1915_;
v___y_1876_ = v___x_1926_;
v___y_1877_ = v_lhs_1907_;
v___y_1878_ = v_ref_1916_;
v___y_1879_ = v___x_1934_;
v___y_1880_ = v_rhs_1908_;
v___y_1881_ = v___y_1912_;
v___y_1882_ = v___y_1929_;
v___y_1883_ = v___y_1909_;
v___y_1884_ = v___y_1911_;
v___y_1885_ = v_options_1914_;
v___y_1886_ = v_toCold_1913_;
v___y_1887_ = v_suppressElabErrors_1918_;
v___y_1888_ = v___x_1931_;
goto v___jp_1871_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelDefEqAuxImpl___boxed(lean_object* v_x_1941_, lean_object* v_x_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_){
_start:
{
lean_object* v_res_1948_; 
v_res_1948_ = lean_is_level_def_eq(v_x_1941_, v_x_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_);
return v_res_1948_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6(lean_object* v_00_u03b1_1949_, lean_object* v_x_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_){
_start:
{
lean_object* v___x_1956_; 
v___x_1956_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6___redArg(v_x_1950_);
return v___x_1956_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6___boxed(lean_object* v_00_u03b1_1957_, lean_object* v_x_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_){
_start:
{
lean_object* v_res_1964_; 
v_res_1964_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___at___00Lean_Meta_isLevelDefEqAuxImpl_spec__5_spec__6(v_00_u03b1_1957_, v_x_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_);
lean_dec(v___y_1962_);
lean_dec_ref(v___y_1961_);
lean_dec(v___y_1960_);
lean_dec_ref(v___y_1959_);
return v_res_1964_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; 
v___x_1965_ = lean_box(0);
v___x_1966_ = l_unsafeCast___redArg(v___x_1965_);
return v___x_1966_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; 
v___x_1968_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_));
v___x_1969_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_);
v___x_1970_ = l_Lean_Name_str___override(v___x_1969_, v___x_1968_);
return v___x_1970_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; 
v___x_1972_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_));
v___x_1973_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_);
v___x_1974_ = l_Lean_Name_str___override(v___x_1973_, v___x_1972_);
return v___x_1974_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; 
v___x_1975_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4));
v___x_1976_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_);
v___x_1977_ = l_Lean_Name_str___override(v___x_1976_, v___x_1975_);
return v___x_1977_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1979_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_));
v___x_1980_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_);
v___x_1981_ = l_Lean_Name_str___override(v___x_1980_, v___x_1979_);
return v___x_1981_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; 
v___x_1982_ = lean_unsigned_to_nat(0u);
v___x_1983_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_);
v___x_1984_ = l_Lean_Name_num___override(v___x_1983_, v___x_1982_);
return v___x_1984_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; 
v___x_1985_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_));
v___x_1986_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_);
v___x_1987_ = l_Lean_Name_str___override(v___x_1986_, v___x_1985_);
return v___x_1987_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; 
v___x_1988_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4));
v___x_1989_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_);
v___x_1990_ = l_Lean_Name_str___override(v___x_1989_, v___x_1988_);
return v___x_1990_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1992_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_));
v___x_1993_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_);
v___x_1994_ = l_Lean_Name_str___override(v___x_1993_, v___x_1992_);
return v___x_1994_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; 
v___x_1996_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_));
v___x_1997_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_);
v___x_1998_ = l_Lean_Name_str___override(v___x_1997_, v___x_1996_);
return v___x_1998_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; 
v___x_1999_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_));
v___x_2000_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_);
v___x_2001_ = l_Lean_Name_str___override(v___x_2000_, v___x_1999_);
return v___x_2001_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; 
v___x_2002_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_solveSelfMax___closed__4));
v___x_2003_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_);
v___x_2004_ = l_Lean_Name_str___override(v___x_2003_, v___x_2002_);
return v___x_2004_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; 
v___x_2005_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_));
v___x_2006_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_);
v___x_2007_ = l_Lean_Name_str___override(v___x_2006_, v___x_2005_);
return v___x_2007_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; 
v___x_2008_ = lean_unsigned_to_nat(1935786688u);
v___x_2009_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_);
v___x_2010_ = l_Lean_Name_num___override(v___x_2009_, v___x_2008_);
return v___x_2010_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; 
v___x_2012_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_));
v___x_2013_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_);
v___x_2014_ = l_Lean_Name_str___override(v___x_2013_, v___x_2012_);
return v___x_2014_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; 
v___x_2016_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_));
v___x_2017_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_);
v___x_2018_ = l_Lean_Name_str___override(v___x_2017_, v___x_2016_);
return v___x_2018_;
}
}
static lean_object* _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; 
v___x_2019_ = lean_unsigned_to_nat(2u);
v___x_2020_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_);
v___x_2021_ = l_Lean_Name_num___override(v___x_2020_, v___x_2019_);
return v___x_2021_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2023_; uint8_t v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; 
v___x_2023_ = ((lean_object*)(l_Lean_Meta_isLevelDefEqAuxImpl___closed__7));
v___x_2024_ = 0;
v___x_2025_ = lean_obj_once(&l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_, &l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_);
v___x_2026_ = l_Lean_registerTraceClass(v___x_2023_, v___x_2024_, v___x_2025_);
if (lean_obj_tag(v___x_2026_) == 0)
{
lean_object* v___x_2027_; uint8_t v___x_2028_; lean_object* v___x_2029_; 
lean_dec_ref_known(v___x_2026_, 1);
v___x_2027_ = ((lean_object*)(l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___closed__1));
v___x_2028_ = 1;
v___x_2029_ = l_Lean_registerTraceClass(v___x_2027_, v___x_2028_, v___x_2025_);
return v___x_2029_;
}
else
{
return v___x_2026_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2____boxed(lean_object* v_a_2030_){
_start:
{
lean_object* v_res_2031_; 
v_res_2031_ = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_();
return v_res_2031_;
}
}
lean_object* runtime_initialize_Lean_Util_CollectMVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_DecLevel(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_HasAssignableMVar(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_LevelDefEq(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Util_CollectMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_DecLevel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_HasAssignableMVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_LevelDefEq_0__Lean_Meta_initFn_00___x40_Lean_Meta_LevelDefEq_1935786688____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_LevelDefEq(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_CollectMVars(uint8_t builtin);
lean_object* initialize_Lean_Meta_DecLevel(uint8_t builtin);
lean_object* initialize_Lean_Meta_HasAssignableMVar(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_LevelDefEq(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_CollectMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DecLevel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_HasAssignableMVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LevelDefEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_LevelDefEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_LevelDefEq(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Meta.Eqns
// Imports: public import Lean.Meta.Match.MatcherInfo public import Lean.DefEqAttrib public import Lean.Meta.RecExt public import Lean.Meta.LetToHave import Lean.Meta.AppBuilder
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
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Meta_isMatcherCore(lean_object*, lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_hasExposedBody(lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t l_Lean_Environment_containsOnBranch(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_EnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
uint8_t l_String_Slice_isNat(lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
uint8_t l_Lean_Environment_isSafeDefinition(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isRecursiveDefinition___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_letToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_inferDefEqAttr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_diagnostics;
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
extern lean_object* l_Lean_backward_defeqAttrib_useBackward;
lean_object* l_Lean_Meta_realizeConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_io_mono_nanos_now();
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_registerReservedNameAction(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_registerReservedNamePredicate(lean_object*);
uint8_t l_Lean_initializing();
lean_object* lean_mk_io_user_error(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "backward"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "eqns"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nonrecursive"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(235, 23, 21, 28, 3, 196, 180, 100)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(1, 23, 146, 109, 99, 186, 103, 88)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "Create fine-grained equational lemmas even for non-recursive definitions."};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "2026-03-30"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(32, 38, 242, 87, 165, 12, 140, 145)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(122, 217, 222, 73, 223, 67, 131, 25)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(156, 7, 83, 198, 209, 69, 31, 191)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_backward_eqns_nonrecursive;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "deepRecursiveSplit"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(235, 23, 21, 28, 3, 196, 180, 100)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(167, 67, 13, 105, 163, 80, 199, 218)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 339, .m_capacity = 339, .m_length = 338, .m_data = "Create equational lemmas for recursive functions like for non-recursive functions. If disabled, match statements in recursive function definitions that do not contain recursive calls do not cause further splits in the equational lemmas. This was the behavior before Lean 4.12, and the purpose of this option is to help migrating old code."};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(32, 38, 242, 87, 165, 12, 140, 145)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(122, 217, 222, 73, 223, 67, 131, 25)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(226, 35, 35, 130, 249, 93, 79, 68)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_backward_eqns_deepRecursiveSplit;
static lean_once_cell_t l_Lean_Meta_eqnAffectingOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_eqnAffectingOptions___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_eqnAffectingOptions;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value;
static const lean_array_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "eqnOptionsExt"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(22, 76, 144, 60, 245, 252, 84, 163)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eqnOptionsExt;
static const lean_string_object l_Lean_Meta_eqnThmSuffixBase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "eq"};
static const lean_object* l_Lean_Meta_eqnThmSuffixBase___closed__0 = (const lean_object*)&l_Lean_Meta_eqnThmSuffixBase___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_eqnThmSuffixBase = (const lean_object*)&l_Lean_Meta_eqnThmSuffixBase___closed__0_value;
static const lean_string_object l_Lean_Meta_eqnThmSuffixBasePrefix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "eq_"};
static const lean_object* l_Lean_Meta_eqnThmSuffixBasePrefix___closed__0 = (const lean_object*)&l_Lean_Meta_eqnThmSuffixBasePrefix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_eqnThmSuffixBasePrefix = (const lean_object*)&l_Lean_Meta_eqnThmSuffixBasePrefix___closed__0_value;
static const lean_string_object l_Lean_Meta_eqn1ThmSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "eq_1"};
static const lean_object* l_Lean_Meta_eqn1ThmSuffix___closed__0 = (const lean_object*)&l_Lean_Meta_eqn1ThmSuffix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_eqn1ThmSuffix = (const lean_object*)&l_Lean_Meta_eqn1ThmSuffix___closed__0_value;
static lean_once_cell_t l_Lean_Meta_isEqnReservedNameSuffix___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_isEqnReservedNameSuffix___closed__0;
LEAN_EXPORT uint8_t l_Lean_Meta_isEqnReservedNameSuffix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnReservedNameSuffix___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_unfoldThmSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "eq_def"};
static const lean_object* l_Lean_Meta_unfoldThmSuffix___closed__0 = (const lean_object*)&l_Lean_Meta_unfoldThmSuffix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_unfoldThmSuffix = (const lean_object*)&l_Lean_Meta_unfoldThmSuffix___closed__0_value;
static const lean_string_object l_Lean_Meta_eqUnfoldThmSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "eq_unfold"};
static const lean_object* l_Lean_Meta_eqUnfoldThmSuffix___closed__0 = (const lean_object*)&l_Lean_Meta_eqUnfoldThmSuffix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_eqUnfoldThmSuffix = (const lean_object*)&l_Lean_Meta_eqUnfoldThmSuffix___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_isEqnLikeSuffix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnLikeSuffix___boxed(lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_declFromEqLikeName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqLikeNameFor(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "failed to declare `"};
static const lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__1;
static const lean_string_object l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "` because `"};
static const lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__3;
static const lean_string_object l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "` has already been declared"};
static const lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__4_value;
static lean_once_cell_t l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ensureEqnReservedNamesAvailable(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ensureEqnReservedNamesAvailable___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3508565914____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3508565914____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFnsRef;
static const lean_string_object l_Lean_Meta_registerGetEqnsFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 104, .m_capacity = 104, .m_length = 103, .m_data = "failed to register equation getter, this kind of extension can only be registered during initialization"};
static const lean_object* l_Lean_Meta_registerGetEqnsFn___closed__0 = (const lean_object*)&l_Lean_Meta_registerGetEqnsFn___closed__0_value;
static lean_once_cell_t l_Lean_Meta_registerGetEqnsFn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_registerGetEqnsFn___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetEqnsFn(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetEqnsFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_shouldGenerateEqnThms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_shouldGenerateEqnThms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedEqnsExtState_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedEqnsExtState;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eqnsExt;
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_withEqnOptions___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_withEqnOptions___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_withEqnOptions___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_withEqnOptions___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_withEqnOptions___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_withEqnOptions___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_withEqnOptions___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_withEqnOptions___redArg___closed__3;
static lean_once_cell_t l_Lean_Meta_withEqnOptions___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_Meta_withEqnOptions___redArg___closed__4;
static lean_once_cell_t l_Lean_Meta_withEqnOptions___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_Meta_withEqnOptions___redArg___closed__5;
static lean_once_cell_t l_Lean_Meta_withEqnOptions___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_Meta_withEqnOptions___redArg___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkSimpleEqThm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkSimpleEqThm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_isEqnThm_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_isEqnThm_x3f___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1;
static const lean_array_object l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__2 = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getEqnsFor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getEqnsFor_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_saveEqnAffectingOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__0 = (const lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__0_value;
static lean_once_cell_t l_Lean_Meta_saveEqnAffectingOptions___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_Meta_saveEqnAffectingOptions___closed__1;
static lean_once_cell_t l_Lean_Meta_saveEqnAffectingOptions___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__2;
static const lean_string_object l_Lean_Meta_saveEqnAffectingOptions___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__3 = (const lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__3_value;
static const lean_string_object l_Lean_Meta_saveEqnAffectingOptions___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__4 = (const lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__4_value;
static const lean_ctor_object l_Lean_Meta_saveEqnAffectingOptions___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__3_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_Lean_Meta_saveEqnAffectingOptions___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__4_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l_Lean_Meta_saveEqnAffectingOptions___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(209, 70, 141, 178, 157, 107, 140, 91)}};
static const lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__5 = (const lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__5_value;
static lean_once_cell_t l_Lean_Meta_saveEqnAffectingOptions___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__6;
static const lean_string_object l_Lean_Meta_saveEqnAffectingOptions___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "saving equation-affecting options for "};
static const lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__7 = (const lean_object*)&l_Lean_Meta_saveEqnAffectingOptions___closed__7_value;
static lean_once_cell_t l_Lean_Meta_saveEqnAffectingOptions___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_saveEqnAffectingOptions___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_saveEqnAffectingOptions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_saveEqnAffectingOptions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_408789758____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_408789758____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getUnfoldEqnFnsRef;
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetUnfoldEqnFn(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetUnfoldEqnFn___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "invalid unfold theorem name `"};
static const lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__1;
static const lean_string_object l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "` has been generated expected `"};
static const lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__3;
static const lean_string_object l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__4 = (const lean_object*)&l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Meta.Eqns reserved name action for "};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "ReservedNameAction"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(111, 245, 189, 90, 36, 141, 82, 229)}};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed, .m_arity = 6, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Eqns"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_62_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_));
v___x_63_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_));
v___x_64_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_));
v___x_65_ = l_Lean_Option_register___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__spec__0(v___x_62_, v___x_63_, v___x_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4____boxed(lean_object* v_a_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_();
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_86_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_));
v___x_87_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_));
v___x_88_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_));
v___x_89_ = l_Lean_Option_register___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4__spec__0(v___x_86_, v___x_87_, v___x_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4____boxed(lean_object* v_a_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_();
return v_res_91_;
}
}
static lean_object* _init_l_Lean_Meta_eqnAffectingOptions___closed__0(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_92_ = l_Lean_backward_defeqAttrib_useBackward;
v___x_93_ = l_Lean_Meta_backward_eqns_deepRecursiveSplit;
v___x_94_ = l_Lean_Meta_backward_eqns_nonrecursive;
v___x_95_ = lean_unsigned_to_nat(3u);
v___x_96_ = lean_mk_empty_array_with_capacity(v___x_95_);
v___x_97_ = lean_array_push(v___x_96_, v___x_94_);
v___x_98_ = lean_array_push(v___x_97_, v___x_93_);
v___x_99_ = lean_array_push(v___x_98_, v___x_92_);
return v___x_99_;
}
}
static lean_object* _init_l_Lean_Meta_eqnAffectingOptions(void){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lean_obj_once(&l_Lean_Meta_eqnAffectingOptions___closed__0, &l_Lean_Meta_eqnAffectingOptions___closed__0_once, _init_l_Lean_Meta_eqnAffectingOptions___closed__0);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__1(lean_object* v_env_101_, lean_object* v_as_102_, size_t v_i_103_, size_t v_stop_104_, lean_object* v_b_105_){
_start:
{
lean_object* v___y_107_; uint8_t v___x_111_; 
v___x_111_ = lean_usize_dec_eq(v_i_103_, v_stop_104_);
if (v___x_111_ == 0)
{
lean_object* v___x_112_; lean_object* v_fst_113_; uint8_t v___x_114_; 
v___x_112_ = lean_array_uget_borrowed(v_as_102_, v_i_103_);
v_fst_113_ = lean_ctor_get(v___x_112_, 0);
lean_inc(v_fst_113_);
lean_inc_ref(v_env_101_);
v___x_114_ = l_Lean_Environment_contains(v_env_101_, v_fst_113_, v___x_111_);
if (v___x_114_ == 0)
{
v___y_107_ = v_b_105_;
goto v___jp_106_;
}
else
{
lean_object* v___x_115_; 
lean_inc(v___x_112_);
v___x_115_ = lean_array_push(v_b_105_, v___x_112_);
v___y_107_ = v___x_115_;
goto v___jp_106_;
}
}
else
{
lean_dec_ref(v_env_101_);
return v_b_105_;
}
v___jp_106_:
{
size_t v___x_108_; size_t v___x_109_; 
v___x_108_ = ((size_t)1ULL);
v___x_109_ = lean_usize_add(v_i_103_, v___x_108_);
v_i_103_ = v___x_109_;
v_b_105_ = v___y_107_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__1___boxed(lean_object* v_env_116_, lean_object* v_as_117_, lean_object* v_i_118_, lean_object* v_stop_119_, lean_object* v_b_120_){
_start:
{
size_t v_i_boxed_121_; size_t v_stop_boxed_122_; lean_object* v_res_123_; 
v_i_boxed_121_ = lean_unbox_usize(v_i_118_);
lean_dec(v_i_118_);
v_stop_boxed_122_ = lean_unbox_usize(v_stop_119_);
lean_dec(v_stop_119_);
v_res_123_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__1(v_env_116_, v_as_117_, v_i_boxed_121_, v_stop_boxed_122_, v_b_120_);
lean_dec_ref(v_as_117_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_124_, lean_object* v_x_125_){
_start:
{
if (lean_obj_tag(v_x_125_) == 0)
{
lean_object* v_k_126_; lean_object* v_v_127_; lean_object* v_l_128_; lean_object* v_r_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v_k_126_ = lean_ctor_get(v_x_125_, 1);
v_v_127_ = lean_ctor_get(v_x_125_, 2);
v_l_128_ = lean_ctor_get(v_x_125_, 3);
v_r_129_ = lean_ctor_get(v_x_125_, 4);
v___x_130_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0_spec__0(v_init_124_, v_l_128_);
lean_inc(v_v_127_);
lean_inc(v_k_126_);
v___x_131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_131_, 0, v_k_126_);
lean_ctor_set(v___x_131_, 1, v_v_127_);
v___x_132_ = lean_array_push(v___x_130_, v___x_131_);
v_init_124_ = v___x_132_;
v_x_125_ = v_r_129_;
goto _start;
}
else
{
return v_init_124_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_134_, lean_object* v_x_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0_spec__0(v_init_134_, v_x_135_);
lean_dec(v_x_135_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_(lean_object* v_env_143_, lean_object* v_s_144_){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; uint8_t v___x_150_; 
v___x_145_ = lean_unsigned_to_nat(0u);
v___x_146_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_));
v___x_147_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0_spec__0(v___x_146_, v_s_144_);
v___x_148_ = lean_array_get_size(v___x_147_);
v___x_149_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__1_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_));
v___x_150_ = lean_nat_dec_lt(v___x_145_, v___x_148_);
if (v___x_150_ == 0)
{
lean_object* v___x_151_; 
lean_dec_ref(v___x_147_);
lean_dec_ref(v_env_143_);
v___x_151_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_));
return v___x_151_;
}
else
{
uint8_t v___x_152_; 
v___x_152_ = lean_nat_dec_le(v___x_148_, v___x_148_);
if (v___x_152_ == 0)
{
if (v___x_150_ == 0)
{
lean_object* v___x_153_; 
lean_dec_ref(v___x_147_);
lean_dec_ref(v_env_143_);
v___x_153_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_));
return v___x_153_;
}
else
{
size_t v___x_154_; size_t v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_154_ = ((size_t)0ULL);
v___x_155_ = lean_usize_of_nat(v___x_148_);
v___x_156_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__1(v_env_143_, v___x_147_, v___x_154_, v___x_155_, v___x_149_);
lean_dec_ref(v___x_147_);
lean_inc_ref_n(v___x_156_, 2);
v___x_157_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
lean_ctor_set(v___x_157_, 1, v___x_156_);
lean_ctor_set(v___x_157_, 2, v___x_156_);
return v___x_157_;
}
}
else
{
size_t v___x_158_; size_t v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_158_ = ((size_t)0ULL);
v___x_159_ = lean_usize_of_nat(v___x_148_);
v___x_160_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__1(v_env_143_, v___x_147_, v___x_158_, v___x_159_, v___x_149_);
lean_dec_ref(v___x_147_);
lean_inc_ref_n(v___x_160_, 2);
v___x_161_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
lean_ctor_set(v___x_161_, 1, v___x_160_);
lean_ctor_set(v___x_161_, 2, v___x_160_);
return v___x_161_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2____boxed(lean_object* v_env_162_, lean_object* v_s_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_(v_env_162_, v_s_163_);
lean_dec(v_s_163_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v___f_172_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_));
v___x_173_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_));
v___x_174_ = lean_box(1);
v___x_175_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_173_, v___x_174_, v___f_172_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2____boxed(lean_object* v_a_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_();
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0(lean_object* v_init_178_, lean_object* v_t_179_){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0_spec__0(v_init_178_, v_t_179_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_181_, lean_object* v_t_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2__spec__0(v_init_181_, v_t_182_);
lean_dec(v_t_182_);
return v_res_183_;
}
}
static lean_object* _init_l_Lean_Meta_isEqnReservedNameSuffix___closed__0(void){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = ((lean_object*)(l_Lean_Meta_eqnThmSuffixBasePrefix___closed__0));
v___x_191_ = lean_string_utf8_byte_size(v___x_190_);
return v___x_191_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_isEqnReservedNameSuffix(lean_object* v_s_192_){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; uint8_t v___x_196_; 
v___x_193_ = ((lean_object*)(l_Lean_Meta_eqnThmSuffixBasePrefix___closed__0));
v___x_194_ = lean_string_utf8_byte_size(v_s_192_);
v___x_195_ = lean_obj_once(&l_Lean_Meta_isEqnReservedNameSuffix___closed__0, &l_Lean_Meta_isEqnReservedNameSuffix___closed__0_once, _init_l_Lean_Meta_isEqnReservedNameSuffix___closed__0);
v___x_196_ = lean_nat_dec_le(v___x_195_, v___x_194_);
if (v___x_196_ == 0)
{
lean_dec_ref(v_s_192_);
return v___x_196_;
}
else
{
lean_object* v___x_197_; uint8_t v___x_198_; 
v___x_197_ = lean_unsigned_to_nat(0u);
v___x_198_ = lean_string_memcmp(v_s_192_, v___x_193_, v___x_197_, v___x_197_, v___x_195_);
if (v___x_198_ == 0)
{
lean_dec_ref(v_s_192_);
return v___x_198_;
}
else
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; uint8_t v___x_203_; 
v___x_199_ = lean_unsigned_to_nat(3u);
lean_inc_ref(v_s_192_);
v___x_200_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_200_, 0, v_s_192_);
lean_ctor_set(v___x_200_, 1, v___x_197_);
lean_ctor_set(v___x_200_, 2, v___x_194_);
v___x_201_ = l_String_Slice_Pos_nextn(v___x_200_, v___x_197_, v___x_199_);
lean_dec_ref_known(v___x_200_, 3);
v___x_202_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_202_, 0, v_s_192_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
lean_ctor_set(v___x_202_, 2, v___x_194_);
v___x_203_ = l_String_Slice_isNat(v___x_202_);
lean_dec_ref_known(v___x_202_, 3);
return v___x_203_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnReservedNameSuffix___boxed(lean_object* v_s_204_){
_start:
{
uint8_t v_res_205_; lean_object* v_r_206_; 
v_res_205_ = l_Lean_Meta_isEqnReservedNameSuffix(v_s_204_);
v_r_206_ = lean_box(v_res_205_);
return v_r_206_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_isEqnLikeSuffix(lean_object* v_s_211_){
_start:
{
lean_object* v___x_212_; uint8_t v___x_213_; 
v___x_212_ = ((lean_object*)(l_Lean_Meta_unfoldThmSuffix___closed__0));
v___x_213_ = lean_string_dec_eq(v_s_211_, v___x_212_);
if (v___x_213_ == 0)
{
lean_object* v___x_214_; uint8_t v___x_215_; 
v___x_214_ = ((lean_object*)(l_Lean_Meta_eqUnfoldThmSuffix___closed__0));
v___x_215_ = lean_string_dec_eq(v_s_211_, v___x_214_);
if (v___x_215_ == 0)
{
uint8_t v___x_216_; 
v___x_216_ = l_Lean_Meta_isEqnReservedNameSuffix(v_s_211_);
return v___x_216_;
}
else
{
lean_dec_ref(v_s_211_);
return v___x_215_;
}
}
else
{
lean_dec_ref(v_s_211_);
return v___x_213_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnLikeSuffix___boxed(lean_object* v_s_217_){
_start:
{
uint8_t v_res_218_; lean_object* v_r_219_; 
v_res_218_ = l_Lean_Meta_isEqnLikeSuffix(v_s_217_);
v_r_219_ = lean_box(v_res_218_);
return v_r_219_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg(lean_object* v_str_223_, lean_object* v_env_224_, uint8_t v___x_225_, lean_object* v_as_x27_226_, lean_object* v_b_227_){
_start:
{
if (lean_obj_tag(v_as_x27_226_) == 0)
{
lean_dec_ref(v_env_224_);
lean_dec_ref(v_str_223_);
lean_inc_ref(v_b_227_);
return v_b_227_;
}
else
{
lean_object* v_head_228_; lean_object* v_tail_229_; lean_object* v___x_230_; lean_object* v___x_231_; uint8_t v___y_233_; uint8_t v___x_239_; lean_object* v___x_240_; uint8_t v___x_241_; 
v_head_228_ = lean_ctor_get(v_as_x27_226_, 0);
v_tail_229_ = lean_ctor_get(v_as_x27_226_, 1);
v___x_230_ = lean_box(0);
v___x_231_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg___closed__0));
v___x_239_ = 0;
lean_inc_ref(v_env_224_);
v___x_240_ = l_Lean_Environment_setExporting(v_env_224_, v___x_239_);
lean_inc(v_head_228_);
v___x_241_ = l_Lean_Environment_isSafeDefinition(v___x_240_, v_head_228_);
if (v___x_241_ == 0)
{
v___y_233_ = v___x_241_;
goto v___jp_232_;
}
else
{
uint8_t v___x_242_; 
lean_inc(v_head_228_);
lean_inc_ref(v_env_224_);
v___x_242_ = l_Lean_Meta_isMatcherCore(v_env_224_, v_head_228_);
if (v___x_242_ == 0)
{
v___y_233_ = v___x_225_;
goto v___jp_232_;
}
else
{
v_as_x27_226_ = v_tail_229_;
v_b_227_ = v___x_231_;
goto _start;
}
}
v___jp_232_:
{
if (v___y_233_ == 0)
{
v_as_x27_226_ = v_tail_229_;
v_b_227_ = v___x_231_;
goto _start;
}
else
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
lean_dec_ref(v_env_224_);
lean_inc(v_head_228_);
v___x_235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_235_, 0, v_head_228_);
lean_ctor_set(v___x_235_, 1, v_str_223_);
v___x_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
v___x_237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
v___x_238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
lean_ctor_set(v___x_238_, 1, v___x_230_);
return v___x_238_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg___boxed(lean_object* v_str_244_, lean_object* v_env_245_, lean_object* v___x_246_, lean_object* v_as_x27_247_, lean_object* v_b_248_){
_start:
{
uint8_t v___x_616__boxed_249_; lean_object* v_res_250_; 
v___x_616__boxed_249_ = lean_unbox(v___x_246_);
v_res_250_ = l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg(v_str_244_, v_env_245_, v___x_616__boxed_249_, v_as_x27_247_, v_b_248_);
lean_dec_ref(v_b_248_);
lean_dec(v_as_x27_247_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_declFromEqLikeName(lean_object* v_env_251_, lean_object* v_name_252_){
_start:
{
if (lean_obj_tag(v_name_252_) == 1)
{
lean_object* v_pre_253_; lean_object* v_str_254_; uint8_t v___x_255_; 
v_pre_253_ = lean_ctor_get(v_name_252_, 0);
lean_inc(v_pre_253_);
v_str_254_ = lean_ctor_get(v_name_252_, 1);
lean_inc_ref_n(v_str_254_, 2);
lean_dec_ref_known(v_name_252_, 2);
v___x_255_ = l_Lean_Meta_isEqnLikeSuffix(v_str_254_);
if (v___x_255_ == 0)
{
lean_object* v___x_256_; 
lean_dec_ref(v_str_254_);
lean_dec(v_pre_253_);
lean_dec_ref(v_env_251_);
v___x_256_ = lean_box(0);
return v___x_256_;
}
else
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v_fst_264_; 
lean_inc(v_pre_253_);
v___x_257_ = l_Lean_privateToUserName(v_pre_253_);
v___x_258_ = lean_box(0);
v___x_259_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_259_, 0, v___x_257_);
lean_ctor_set(v___x_259_, 1, v___x_258_);
v___x_260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_260_, 0, v_pre_253_);
lean_ctor_set(v___x_260_, 1, v___x_259_);
v___x_261_ = lean_box(0);
v___x_262_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg___closed__0));
v___x_263_ = l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg(v_str_254_, v_env_251_, v___x_255_, v___x_260_, v___x_262_);
lean_dec_ref_known(v___x_260_, 2);
v_fst_264_ = lean_ctor_get(v___x_263_, 0);
lean_inc(v_fst_264_);
lean_dec_ref(v___x_263_);
if (lean_obj_tag(v_fst_264_) == 0)
{
return v___x_261_;
}
else
{
lean_object* v_val_265_; 
v_val_265_ = lean_ctor_get(v_fst_264_, 0);
lean_inc(v_val_265_);
lean_dec_ref_known(v_fst_264_, 1);
return v_val_265_;
}
}
}
else
{
lean_object* v___x_266_; 
lean_dec(v_name_252_);
lean_dec_ref(v_env_251_);
v___x_266_ = lean_box(0);
return v___x_266_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0(lean_object* v_str_267_, lean_object* v_env_268_, uint8_t v___x_269_, lean_object* v_as_270_, lean_object* v_as_x27_271_, lean_object* v_b_272_, lean_object* v_a_273_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___redArg(v_str_267_, v_env_268_, v___x_269_, v_as_x27_271_, v_b_272_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0___boxed(lean_object* v_str_275_, lean_object* v_env_276_, lean_object* v___x_277_, lean_object* v_as_278_, lean_object* v_as_x27_279_, lean_object* v_b_280_, lean_object* v_a_281_){
_start:
{
uint8_t v___x_687__boxed_282_; lean_object* v_res_283_; 
v___x_687__boxed_282_ = lean_unbox(v___x_277_);
v_res_283_ = l_List_forIn_x27_loop___at___00Lean_Meta_declFromEqLikeName_spec__0(v_str_275_, v_env_276_, v___x_687__boxed_282_, v_as_278_, v_as_x27_279_, v_b_280_, v_a_281_);
lean_dec_ref(v_b_280_);
lean_dec(v_as_x27_279_);
lean_dec(v_as_278_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkEqLikeNameFor(lean_object* v_env_284_, lean_object* v_declName_285_, lean_object* v_suffix_286_){
_start:
{
uint8_t v_isExposed_287_; lean_object* v_name_288_; 
lean_inc(v_declName_285_);
lean_inc_ref(v_env_284_);
v_isExposed_287_ = l_Lean_Environment_hasExposedBody(v_env_284_, v_declName_285_);
v_name_288_ = l_Lean_Name_str___override(v_declName_285_, v_suffix_286_);
if (v_isExposed_287_ == 0)
{
lean_object* v___x_289_; 
v___x_289_ = l_Lean_mkPrivateName(v_env_284_, v_name_288_);
lean_dec_ref(v_env_284_);
return v___x_289_;
}
else
{
lean_dec_ref(v_env_284_);
return v_name_288_;
}
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_290_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0);
v___x_292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_292_, 0, v___x_291_);
return v___x_292_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__2(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_293_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1);
v___x_294_ = lean_unsigned_to_nat(0u);
v___x_295_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
lean_ctor_set(v___x_295_, 1, v___x_294_);
lean_ctor_set(v___x_295_, 2, v___x_294_);
lean_ctor_set(v___x_295_, 3, v___x_294_);
lean_ctor_set(v___x_295_, 4, v___x_293_);
lean_ctor_set(v___x_295_, 5, v___x_293_);
lean_ctor_set(v___x_295_, 6, v___x_293_);
lean_ctor_set(v___x_295_, 7, v___x_293_);
lean_ctor_set(v___x_295_, 8, v___x_293_);
lean_ctor_set(v___x_295_, 9, v___x_293_);
lean_ctor_set(v___x_295_, 10, v___x_293_);
return v___x_295_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__3(void){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_296_ = lean_unsigned_to_nat(32u);
v___x_297_ = lean_mk_empty_array_with_capacity(v___x_296_);
v___x_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
return v___x_298_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4(void){
_start:
{
size_t v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_299_ = ((size_t)5ULL);
v___x_300_ = lean_unsigned_to_nat(0u);
v___x_301_ = lean_unsigned_to_nat(32u);
v___x_302_ = lean_mk_empty_array_with_capacity(v___x_301_);
v___x_303_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__3);
v___x_304_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_304_, 0, v___x_303_);
lean_ctor_set(v___x_304_, 1, v___x_302_);
lean_ctor_set(v___x_304_, 2, v___x_300_);
lean_ctor_set(v___x_304_, 3, v___x_300_);
lean_ctor_set_usize(v___x_304_, 4, v___x_299_);
return v___x_304_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__5(void){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_305_ = lean_box(1);
v___x_306_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_307_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__1);
v___x_308_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_308_, 0, v___x_307_);
lean_ctor_set(v___x_308_, 1, v___x_306_);
lean_ctor_set(v___x_308_, 2, v___x_305_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2(lean_object* v_msgData_309_, lean_object* v___y_310_, lean_object* v___y_311_){
_start:
{
lean_object* v___x_313_; lean_object* v_toCold_314_; lean_object* v_env_315_; lean_object* v_options_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_313_ = lean_st_ref_get(v___y_311_);
v_toCold_314_ = lean_ctor_get(v___y_310_, 0);
v_env_315_ = lean_ctor_get(v___x_313_, 0);
lean_inc_ref(v_env_315_);
lean_dec(v___x_313_);
v_options_316_ = lean_ctor_get(v_toCold_314_, 2);
v___x_317_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__2);
v___x_318_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__5);
lean_inc_ref(v_options_316_);
v___x_319_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_319_, 0, v_env_315_);
lean_ctor_set(v___x_319_, 1, v___x_317_);
lean_ctor_set(v___x_319_, 2, v___x_318_);
lean_ctor_set(v___x_319_, 3, v_options_316_);
v___x_320_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
lean_ctor_set(v___x_320_, 1, v_msgData_309_);
v___x_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_321_, 0, v___x_320_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_msgData_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2(v_msgData_322_, v___y_323_, v___y_324_);
lean_dec(v___y_324_);
lean_dec_ref(v___y_323_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___redArg(lean_object* v_msg_327_, lean_object* v___y_328_, lean_object* v___y_329_){
_start:
{
lean_object* v_ref_331_; lean_object* v___x_332_; lean_object* v_a_333_; lean_object* v___x_335_; uint8_t v_isShared_336_; uint8_t v_isSharedCheck_341_; 
v_ref_331_ = lean_ctor_get(v___y_328_, 2);
v___x_332_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2(v_msg_327_, v___y_328_, v___y_329_);
v_a_333_ = lean_ctor_get(v___x_332_, 0);
v_isSharedCheck_341_ = !lean_is_exclusive(v___x_332_);
if (v_isSharedCheck_341_ == 0)
{
v___x_335_ = v___x_332_;
v_isShared_336_ = v_isSharedCheck_341_;
goto v_resetjp_334_;
}
else
{
lean_inc(v_a_333_);
lean_dec(v___x_332_);
v___x_335_ = lean_box(0);
v_isShared_336_ = v_isSharedCheck_341_;
goto v_resetjp_334_;
}
v_resetjp_334_:
{
lean_object* v___x_337_; lean_object* v___x_339_; 
lean_inc(v_ref_331_);
v___x_337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_337_, 0, v_ref_331_);
lean_ctor_set(v___x_337_, 1, v_a_333_);
if (v_isShared_336_ == 0)
{
lean_ctor_set_tag(v___x_335_, 1);
lean_ctor_set(v___x_335_, 0, v___x_337_);
v___x_339_ = v___x_335_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v___x_337_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_msg_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___redArg(v_msg_342_, v___y_343_, v___y_344_);
lean_dec(v___y_344_);
lean_dec_ref(v___y_343_);
return v_res_346_;
}
}
static lean_object* _init_l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_348_ = ((lean_object*)(l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__0));
v___x_349_ = l_Lean_stringToMessageData(v___x_348_);
return v___x_349_;
}
}
static lean_object* _init_l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_351_ = ((lean_object*)(l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__2));
v___x_352_ = l_Lean_stringToMessageData(v___x_351_);
return v___x_352_;
}
}
static lean_object* _init_l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_354_ = ((lean_object*)(l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__4));
v___x_355_ = l_Lean_stringToMessageData(v___x_354_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0(lean_object* v_declName_356_, lean_object* v_reservedName_357_, lean_object* v___y_358_, lean_object* v___y_359_){
_start:
{
lean_object* v___x_361_; uint8_t v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; uint8_t v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_361_ = lean_obj_once(&l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__1, &l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__1_once, _init_l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__1);
v___x_362_ = 0;
v___x_363_ = l_Lean_MessageData_ofConstName(v_declName_356_, v___x_362_);
v___x_364_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_364_, 0, v___x_361_);
lean_ctor_set(v___x_364_, 1, v___x_363_);
v___x_365_ = lean_obj_once(&l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__3, &l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__3_once, _init_l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__3);
v___x_366_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_366_, 0, v___x_364_);
lean_ctor_set(v___x_366_, 1, v___x_365_);
v___x_367_ = 1;
v___x_368_ = l_Lean_MessageData_ofConstName(v_reservedName_357_, v___x_367_);
v___x_369_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_369_, 0, v___x_366_);
lean_ctor_set(v___x_369_, 1, v___x_368_);
v___x_370_ = lean_obj_once(&l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__5, &l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__5_once, _init_l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___closed__5);
v___x_371_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_371_, 0, v___x_369_);
lean_ctor_set(v___x_371_, 1, v___x_370_);
v___x_372_ = l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___redArg(v___x_371_, v___y_358_, v___y_359_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0___boxed(lean_object* v_declName_373_, lean_object* v_reservedName_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0(v_declName_373_, v_reservedName_374_, v___y_375_, v___y_376_);
lean_dec(v___y_376_);
lean_dec_ref(v___y_375_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0(lean_object* v_declName_379_, lean_object* v_suffix_380_, lean_object* v___y_381_, lean_object* v___y_382_){
_start:
{
lean_object* v_reservedName_384_; lean_object* v___x_385_; lean_object* v_env_386_; uint8_t v___x_387_; uint8_t v___x_388_; 
lean_inc(v_declName_379_);
v_reservedName_384_ = l_Lean_Name_str___override(v_declName_379_, v_suffix_380_);
v___x_385_ = lean_st_ref_get(v___y_382_);
v_env_386_ = lean_ctor_get(v___x_385_, 0);
lean_inc_ref(v_env_386_);
lean_dec(v___x_385_);
v___x_387_ = 1;
lean_inc(v_reservedName_384_);
v___x_388_ = l_Lean_Environment_contains(v_env_386_, v_reservedName_384_, v___x_387_);
if (v___x_388_ == 0)
{
lean_object* v___x_389_; lean_object* v___x_390_; 
lean_dec(v_reservedName_384_);
lean_dec(v_declName_379_);
v___x_389_ = lean_box(0);
v___x_390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_390_, 0, v___x_389_);
return v___x_390_;
}
else
{
lean_object* v___x_391_; 
v___x_391_ = l_Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0(v_declName_379_, v_reservedName_384_, v___y_381_, v___y_382_);
return v___x_391_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0___boxed(lean_object* v_declName_392_, lean_object* v_suffix_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0(v_declName_392_, v_suffix_393_, v___y_394_, v___y_395_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ensureEqnReservedNamesAvailable(lean_object* v_declName_398_, lean_object* v_a_399_, lean_object* v_a_400_){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_402_ = ((lean_object*)(l_Lean_Meta_eqUnfoldThmSuffix___closed__0));
lean_inc(v_declName_398_);
v___x_403_ = l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0(v_declName_398_, v___x_402_, v_a_399_, v_a_400_);
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v___x_404_; lean_object* v___x_405_; 
lean_dec_ref_known(v___x_403_, 1);
v___x_404_ = ((lean_object*)(l_Lean_Meta_unfoldThmSuffix___closed__0));
lean_inc(v_declName_398_);
v___x_405_ = l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0(v_declName_398_, v___x_404_, v_a_399_, v_a_400_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v___x_406_; lean_object* v___x_407_; 
lean_dec_ref_known(v___x_405_, 1);
v___x_406_ = ((lean_object*)(l_Lean_Meta_eqn1ThmSuffix___closed__0));
v___x_407_ = l_Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0(v_declName_398_, v___x_406_, v_a_399_, v_a_400_);
return v___x_407_;
}
else
{
lean_dec(v_declName_398_);
return v___x_405_;
}
}
else
{
lean_dec(v_declName_398_);
return v___x_403_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ensureEqnReservedNamesAvailable___boxed(lean_object* v_declName_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l_Lean_Meta_ensureEqnReservedNamesAvailable(v_declName_408_, v_a_409_, v_a_410_);
lean_dec(v_a_410_);
lean_dec_ref(v_a_409_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_413_, lean_object* v_msg_414_, lean_object* v___y_415_, lean_object* v___y_416_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___redArg(v_msg_414_, v___y_415_, v___y_416_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_419_, lean_object* v_msg_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = l_Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1(v_00_u03b1_419_, v_msg_420_, v___y_421_, v___y_422_);
lean_dec(v___y_422_);
lean_dec_ref(v___y_421_);
return v_res_424_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_(lean_object* v_env_425_, lean_object* v_n_426_){
_start:
{
lean_object* v___x_427_; 
lean_inc(v_n_426_);
lean_inc_ref(v_env_425_);
v___x_427_ = l_Lean_Meta_declFromEqLikeName(v_env_425_, v_n_426_);
if (lean_obj_tag(v___x_427_) == 1)
{
lean_object* v_val_428_; lean_object* v_fst_429_; lean_object* v_snd_430_; lean_object* v___x_431_; uint8_t v___x_432_; 
v_val_428_ = lean_ctor_get(v___x_427_, 0);
lean_inc(v_val_428_);
lean_dec_ref_known(v___x_427_, 1);
v_fst_429_ = lean_ctor_get(v_val_428_, 0);
lean_inc(v_fst_429_);
v_snd_430_ = lean_ctor_get(v_val_428_, 1);
lean_inc(v_snd_430_);
lean_dec(v_val_428_);
v___x_431_ = l_Lean_Meta_mkEqLikeNameFor(v_env_425_, v_fst_429_, v_snd_430_);
v___x_432_ = lean_name_eq(v_n_426_, v___x_431_);
lean_dec(v___x_431_);
lean_dec(v_n_426_);
return v___x_432_;
}
else
{
uint8_t v___x_433_; 
lean_dec(v___x_427_);
lean_dec(v_n_426_);
lean_dec_ref(v_env_425_);
v___x_433_ = 0;
return v___x_433_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2____boxed(lean_object* v_env_434_, lean_object* v_n_435_){
_start:
{
uint8_t v_res_436_; lean_object* v_r_437_; 
v_res_436_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_(v_env_434_, v_n_435_);
v_r_437_ = lean_box(v_res_436_);
return v_r_437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_440_; lean_object* v___x_441_; 
v___f_440_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_));
v___x_441_ = l_Lean_registerReservedNamePredicate(v___f_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2____boxed(lean_object* v_a_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_();
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3508565914____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_445_ = lean_box(0);
v___x_446_ = lean_st_mk_ref(v___x_445_);
v___x_447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_447_, 0, v___x_446_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3508565914____hygCtx___hyg_2____boxed(lean_object* v_a_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3508565914____hygCtx___hyg_2_();
return v_res_449_;
}
}
static lean_object* _init_l_Lean_Meta_registerGetEqnsFn___closed__1(void){
_start:
{
lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_451_ = ((lean_object*)(l_Lean_Meta_registerGetEqnsFn___closed__0));
v___x_452_ = lean_mk_io_user_error(v___x_451_);
return v___x_452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetEqnsFn(lean_object* v_f_453_){
_start:
{
uint8_t v___x_455_; 
v___x_455_ = l_Lean_initializing();
if (v___x_455_ == 0)
{
lean_object* v___x_456_; lean_object* v___x_457_; 
lean_dec_ref(v_f_453_);
v___x_456_ = lean_obj_once(&l_Lean_Meta_registerGetEqnsFn___closed__1, &l_Lean_Meta_registerGetEqnsFn___closed__1_once, _init_l_Lean_Meta_registerGetEqnsFn___closed__1);
v___x_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_457_, 0, v___x_456_);
return v___x_457_;
}
else
{
lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_458_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFnsRef;
v___x_459_ = lean_st_ref_take(v___x_458_);
v___x_460_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_460_, 0, v_f_453_);
lean_ctor_set(v___x_460_, 1, v___x_459_);
v___x_461_ = lean_st_ref_put(v___x_458_, v___x_460_);
v___x_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_462_, 0, v___x_461_);
return v___x_462_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetEqnsFn___boxed(lean_object* v_f_463_, lean_object* v_a_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_Lean_Meta_registerGetEqnsFn(v_f_463_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_shouldGenerateEqnThms(lean_object* v_declName_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_){
_start:
{
lean_object* v___x_476_; lean_object* v_env_477_; uint8_t v___x_478_; lean_object* v___x_479_; 
v___x_476_ = lean_st_ref_get(v_a_470_);
v_env_477_ = lean_ctor_get(v___x_476_, 0);
lean_inc_ref(v_env_477_);
lean_dec(v___x_476_);
v___x_478_ = 0;
lean_inc(v_declName_466_);
v___x_479_ = l_Lean_Environment_findAsync_x3f(v_env_477_, v_declName_466_, v___x_478_);
if (lean_obj_tag(v___x_479_) == 1)
{
lean_object* v_val_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_511_; 
v_val_480_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_511_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_511_ == 0)
{
v___x_482_ = v___x_479_;
v_isShared_483_ = v_isSharedCheck_511_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_val_480_);
lean_dec(v___x_479_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_511_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
uint8_t v_kind_484_; 
v_kind_484_ = lean_ctor_get_uint8(v_val_480_, sizeof(void*)*3);
if (v_kind_484_ == 0)
{
lean_object* v_sig_485_; lean_object* v___x_486_; lean_object* v_env_487_; uint8_t v___x_488_; 
v_sig_485_ = lean_ctor_get(v_val_480_, 1);
lean_inc_ref(v_sig_485_);
lean_dec(v_val_480_);
v___x_486_ = lean_st_ref_get(v_a_470_);
v_env_487_ = lean_ctor_get(v___x_486_, 0);
lean_inc_ref(v_env_487_);
lean_dec(v___x_486_);
v___x_488_ = l_Lean_Meta_isMatcherCore(v_env_487_, v_declName_466_);
if (v___x_488_ == 0)
{
lean_object* v___x_489_; lean_object* v_type_490_; lean_object* v___x_491_; 
lean_del_object(v___x_482_);
v___x_489_ = lean_task_get_own(v_sig_485_);
v_type_490_ = lean_ctor_get(v___x_489_, 2);
lean_inc_ref(v_type_490_);
lean_dec(v___x_489_);
v___x_491_ = l_Lean_Meta_isProp(v_type_490_, v_a_467_, v_a_468_, v_a_469_, v_a_470_);
if (lean_obj_tag(v___x_491_) == 0)
{
lean_object* v_a_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_506_; 
v_a_492_ = lean_ctor_get(v___x_491_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_491_);
if (v_isSharedCheck_506_ == 0)
{
v___x_494_ = v___x_491_;
v_isShared_495_ = v_isSharedCheck_506_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_a_492_);
lean_dec(v___x_491_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_506_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
uint8_t v___x_496_; 
v___x_496_ = lean_unbox(v_a_492_);
lean_dec(v_a_492_);
if (v___x_496_ == 0)
{
uint8_t v___x_497_; lean_object* v___x_498_; lean_object* v___x_500_; 
v___x_497_ = 1;
v___x_498_ = lean_box(v___x_497_);
if (v_isShared_495_ == 0)
{
lean_ctor_set(v___x_494_, 0, v___x_498_);
v___x_500_ = v___x_494_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v___x_498_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
return v___x_500_;
}
}
else
{
lean_object* v___x_502_; lean_object* v___x_504_; 
v___x_502_ = lean_box(v___x_488_);
if (v_isShared_495_ == 0)
{
lean_ctor_set(v___x_494_, 0, v___x_502_);
v___x_504_ = v___x_494_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v___x_502_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
}
}
else
{
return v___x_491_;
}
}
else
{
lean_object* v___x_507_; lean_object* v___x_509_; 
lean_dec_ref(v_sig_485_);
v___x_507_ = lean_box(v___x_478_);
if (v_isShared_483_ == 0)
{
lean_ctor_set_tag(v___x_482_, 0);
lean_ctor_set(v___x_482_, 0, v___x_507_);
v___x_509_ = v___x_482_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v___x_507_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
return v___x_509_;
}
}
}
else
{
lean_del_object(v___x_482_);
lean_dec(v_val_480_);
lean_dec(v_declName_466_);
goto v___jp_472_;
}
}
}
else
{
lean_dec(v___x_479_);
lean_dec(v_declName_466_);
goto v___jp_472_;
}
v___jp_472_:
{
uint8_t v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_473_ = 0;
v___x_474_ = lean_box(v___x_473_);
v___x_475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_475_, 0, v___x_474_);
return v___x_475_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_shouldGenerateEqnThms___boxed(lean_object* v_declName_512_, lean_object* v_a_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_shouldGenerateEqnThms(v_declName_512_, v_a_513_, v_a_514_, v_a_515_, v_a_516_);
lean_dec(v_a_516_);
lean_dec_ref(v_a_515_);
lean_dec(v_a_514_);
lean_dec_ref(v_a_513_);
return v_res_518_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0(void){
_start:
{
lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_519_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0);
v___x_520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_520_, 0, v___x_519_);
return v___x_520_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedEqnsExtState_default(void){
_start:
{
lean_object* v___x_521_; 
v___x_521_ = lean_obj_once(&l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0, &l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0_once, _init_l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0);
return v___x_521_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedEqnsExtState(void){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = l_Lean_Meta_instInhabitedEqnsExtState_default;
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_(lean_object* v___x_523_){
_start:
{
lean_object* v___x_525_; 
v___x_525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_525_, 0, v___x_523_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2____boxed(lean_object* v___x_526_, lean_object* v___y_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_(v___x_526_);
return v_res_528_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_529_; lean_object* v___f_530_; 
v___x_529_ = lean_obj_once(&l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0, &l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0_once, _init_l_Lean_Meta_instInhabitedEqnsExtState_default___closed__0);
v___f_530_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_530_, 0, v___x_529_);
return v___f_530_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v___f_532_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_);
v___x_533_ = lean_box(0);
v___x_534_ = lean_box(1);
v___x_535_ = l_Lean_registerEnvExtension___redArg(v___f_532_, v___x_533_, v___x_534_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2____boxed(lean_object* v_a_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_();
return v_res_537_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(lean_object* v_opts_538_, lean_object* v_opt_539_){
_start:
{
lean_object* v_name_540_; lean_object* v_defValue_541_; lean_object* v_map_542_; lean_object* v___x_543_; 
v_name_540_ = lean_ctor_get(v_opt_539_, 0);
v_defValue_541_ = lean_ctor_get(v_opt_539_, 1);
v_map_542_ = lean_ctor_get(v_opts_538_, 0);
v___x_543_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_542_, v_name_540_);
if (lean_obj_tag(v___x_543_) == 0)
{
uint8_t v___x_544_; 
v___x_544_ = lean_unbox(v_defValue_541_);
return v___x_544_;
}
else
{
lean_object* v_val_545_; 
v_val_545_ = lean_ctor_get(v___x_543_, 0);
lean_inc(v_val_545_);
lean_dec_ref_known(v___x_543_, 1);
if (lean_obj_tag(v_val_545_) == 1)
{
uint8_t v_v_546_; 
v_v_546_ = lean_ctor_get_uint8(v_val_545_, 0);
lean_dec_ref_known(v_val_545_, 0);
return v_v_546_;
}
else
{
uint8_t v___x_547_; 
lean_dec(v_val_545_);
v___x_547_ = lean_unbox(v_defValue_541_);
return v___x_547_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1___boxed(lean_object* v_opts_548_, lean_object* v_opt_549_){
_start:
{
uint8_t v_res_550_; lean_object* v_r_551_; 
v_res_550_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(v_opts_548_, v_opt_549_);
lean_dec_ref(v_opt_549_);
lean_dec_ref(v_opts_548_);
v_r_551_ = lean_box(v_res_550_);
return v_r_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__2(lean_object* v_opts_552_, lean_object* v_opt_553_){
_start:
{
lean_object* v_name_554_; lean_object* v_defValue_555_; lean_object* v_map_556_; lean_object* v___x_557_; 
v_name_554_ = lean_ctor_get(v_opt_553_, 0);
v_defValue_555_ = lean_ctor_get(v_opt_553_, 1);
v_map_556_ = lean_ctor_get(v_opts_552_, 0);
v___x_557_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_556_, v_name_554_);
if (lean_obj_tag(v___x_557_) == 0)
{
lean_inc(v_defValue_555_);
return v_defValue_555_;
}
else
{
lean_object* v_val_558_; 
v_val_558_ = lean_ctor_get(v___x_557_, 0);
lean_inc(v_val_558_);
lean_dec_ref_known(v___x_557_, 1);
if (lean_obj_tag(v_val_558_) == 3)
{
lean_object* v_v_559_; 
v_v_559_ = lean_ctor_get(v_val_558_, 0);
lean_inc(v_v_559_);
lean_dec_ref_known(v_val_558_, 1);
return v_v_559_;
}
else
{
lean_dec(v_val_558_);
lean_inc(v_defValue_555_);
return v_defValue_555_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__2___boxed(lean_object* v_opts_560_, lean_object* v_opt_561_){
_start:
{
lean_object* v_res_562_; 
v_res_562_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__2(v_opts_560_, v_opt_561_);
lean_dec_ref(v_opt_561_);
lean_dec_ref(v_opts_560_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3(lean_object* v_as_566_, size_t v_sz_567_, size_t v_i_568_, lean_object* v_b_569_){
_start:
{
lean_object* v_a_571_; uint8_t v___x_575_; 
v___x_575_ = lean_usize_dec_lt(v_i_568_, v_sz_567_);
if (v___x_575_ == 0)
{
return v_b_569_;
}
else
{
lean_object* v_a_576_; lean_object* v_fst_577_; lean_object* v_snd_578_; lean_object* v_map_579_; uint8_t v_hasTrace_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_593_; 
v_a_576_ = lean_array_uget_borrowed(v_as_566_, v_i_568_);
v_fst_577_ = lean_ctor_get(v_a_576_, 0);
v_snd_578_ = lean_ctor_get(v_a_576_, 1);
v_map_579_ = lean_ctor_get(v_b_569_, 0);
v_hasTrace_580_ = lean_ctor_get_uint8(v_b_569_, sizeof(void*)*1);
v_isSharedCheck_593_ = !lean_is_exclusive(v_b_569_);
if (v_isSharedCheck_593_ == 0)
{
v___x_582_ = v_b_569_;
v_isShared_583_ = v_isSharedCheck_593_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_map_579_);
lean_dec(v_b_569_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_593_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_584_; 
lean_inc(v_snd_578_);
lean_inc(v_fst_577_);
v___x_584_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_577_, v_snd_578_, v_map_579_);
if (v_hasTrace_580_ == 0)
{
lean_object* v___x_585_; uint8_t v___x_586_; lean_object* v___x_588_; 
v___x_585_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__1));
v___x_586_ = l_Lean_Name_isPrefixOf(v___x_585_, v_fst_577_);
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 0, v___x_584_);
v___x_588_ = v___x_582_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v___x_584_);
v___x_588_ = v_reuseFailAlloc_589_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
lean_ctor_set_uint8(v___x_588_, sizeof(void*)*1, v___x_586_);
v_a_571_ = v___x_588_;
goto v___jp_570_;
}
}
else
{
lean_object* v___x_591_; 
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 0, v___x_584_);
v___x_591_ = v___x_582_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v___x_584_);
lean_ctor_set_uint8(v_reuseFailAlloc_592_, sizeof(void*)*1, v_hasTrace_580_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
v_a_571_ = v___x_591_;
goto v___jp_570_;
}
}
}
}
v___jp_570_:
{
size_t v___x_572_; size_t v___x_573_; 
v___x_572_ = ((size_t)1ULL);
v___x_573_ = lean_usize_add(v_i_568_, v___x_572_);
v_i_568_ = v___x_573_;
v_b_569_ = v_a_571_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___boxed(lean_object* v_as_594_, lean_object* v_sz_595_, lean_object* v_i_596_, lean_object* v_b_597_){
_start:
{
size_t v_sz_boxed_598_; size_t v_i_boxed_599_; lean_object* v_res_600_; 
v_sz_boxed_598_ = lean_unbox_usize(v_sz_595_);
lean_dec(v_sz_595_);
v_i_boxed_599_ = lean_unbox_usize(v_i_596_);
lean_dec(v_i_596_);
v_res_600_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3(v_as_594_, v_sz_boxed_598_, v_i_boxed_599_, v_b_597_);
lean_dec_ref(v_as_594_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0_spec__0(lean_object* v_o_601_, lean_object* v_k_602_, uint8_t v_v_603_){
_start:
{
lean_object* v_map_604_; uint8_t v_hasTrace_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_619_; 
v_map_604_ = lean_ctor_get(v_o_601_, 0);
v_hasTrace_605_ = lean_ctor_get_uint8(v_o_601_, sizeof(void*)*1);
v_isSharedCheck_619_ = !lean_is_exclusive(v_o_601_);
if (v_isSharedCheck_619_ == 0)
{
v___x_607_ = v_o_601_;
v_isShared_608_ = v_isSharedCheck_619_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_map_604_);
lean_dec(v_o_601_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_619_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_609_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_609_, 0, v_v_603_);
lean_inc(v_k_602_);
v___x_610_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_602_, v___x_609_, v_map_604_);
if (v_hasTrace_605_ == 0)
{
lean_object* v___x_611_; uint8_t v___x_612_; lean_object* v___x_614_; 
v___x_611_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__1));
v___x_612_ = l_Lean_Name_isPrefixOf(v___x_611_, v_k_602_);
lean_dec(v_k_602_);
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 0, v___x_610_);
v___x_614_ = v___x_607_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v___x_610_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
lean_ctor_set_uint8(v___x_614_, sizeof(void*)*1, v___x_612_);
return v___x_614_;
}
}
else
{
lean_object* v___x_617_; 
lean_dec(v_k_602_);
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 0, v___x_610_);
v___x_617_ = v___x_607_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v___x_610_);
lean_ctor_set_uint8(v_reuseFailAlloc_618_, sizeof(void*)*1, v_hasTrace_605_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
return v___x_617_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0_spec__0___boxed(lean_object* v_o_620_, lean_object* v_k_621_, lean_object* v_v_622_){
_start:
{
uint8_t v_v_boxed_623_; lean_object* v_res_624_; 
v_v_boxed_623_ = lean_unbox(v_v_622_);
v_res_624_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0_spec__0(v_o_620_, v_k_621_, v_v_boxed_623_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0(lean_object* v_opts_625_, lean_object* v_opt_626_, uint8_t v_val_627_){
_start:
{
lean_object* v_name_628_; lean_object* v___x_629_; 
v_name_628_ = lean_ctor_get(v_opt_626_, 0);
lean_inc(v_name_628_);
lean_dec_ref(v_opt_626_);
v___x_629_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0_spec__0(v_opts_625_, v_name_628_, v_val_627_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0___boxed(lean_object* v_opts_630_, lean_object* v_opt_631_, lean_object* v_val_632_){
_start:
{
uint8_t v_val_boxed_633_; lean_object* v_res_634_; 
v_val_boxed_633_ = lean_unbox(v_val_632_);
v_res_634_ = l_Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0(v_opts_630_, v_opt_631_, v_val_boxed_633_);
return v_res_634_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__4(lean_object* v_as_635_, size_t v_i_636_, size_t v_stop_637_, lean_object* v_b_638_){
_start:
{
uint8_t v___x_639_; 
v___x_639_ = lean_usize_dec_eq(v_i_636_, v_stop_637_);
if (v___x_639_ == 0)
{
lean_object* v___x_640_; lean_object* v_defValue_641_; uint8_t v___x_642_; lean_object* v___x_643_; size_t v___x_644_; size_t v___x_645_; 
v___x_640_ = lean_array_uget_borrowed(v_as_635_, v_i_636_);
v_defValue_641_ = lean_ctor_get(v___x_640_, 1);
v___x_642_ = lean_unbox(v_defValue_641_);
lean_inc(v___x_640_);
v___x_643_ = l_Lean_Option_set___at___00Lean_Meta_withEqnOptions_spec__0(v_b_638_, v___x_640_, v___x_642_);
v___x_644_ = ((size_t)1ULL);
v___x_645_ = lean_usize_add(v_i_636_, v___x_644_);
v_i_636_ = v___x_645_;
v_b_638_ = v___x_643_;
goto _start;
}
else
{
return v_b_638_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__4___boxed(lean_object* v_as_647_, lean_object* v_i_648_, lean_object* v_stop_649_, lean_object* v_b_650_){
_start:
{
size_t v_i_boxed_651_; size_t v_stop_boxed_652_; lean_object* v_res_653_; 
v_i_boxed_651_ = lean_unbox_usize(v_i_648_);
lean_dec(v_i_648_);
v_stop_boxed_652_ = lean_unbox_usize(v_stop_649_);
lean_dec(v_stop_649_);
v_res_653_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__4(v_as_647_, v_i_boxed_651_, v_stop_boxed_652_, v_b_650_);
lean_dec_ref(v_as_647_);
return v_res_653_;
}
}
static lean_object* _init_l_Lean_Meta_withEqnOptions___redArg___closed__0(void){
_start:
{
lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_654_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0);
v___x_655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_655_, 0, v___x_654_);
return v___x_655_;
}
}
static lean_object* _init_l_Lean_Meta_withEqnOptions___redArg___closed__1(void){
_start:
{
lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_656_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__0, &l_Lean_Meta_withEqnOptions___redArg___closed__0_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__0);
v___x_657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_657_, 0, v___x_656_);
lean_ctor_set(v___x_657_, 1, v___x_656_);
return v___x_657_;
}
}
static lean_object* _init_l_Lean_Meta_withEqnOptions___redArg___closed__2(void){
_start:
{
lean_object* v___x_658_; 
v___x_658_ = l_Array_instInhabited___redArg();
return v___x_658_;
}
}
static lean_object* _init_l_Lean_Meta_withEqnOptions___redArg___closed__3(void){
_start:
{
lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_659_ = l_Lean_Meta_eqnAffectingOptions;
v___x_660_ = lean_array_get_size(v___x_659_);
return v___x_660_;
}
}
static uint8_t _init_l_Lean_Meta_withEqnOptions___redArg___closed__4(void){
_start:
{
lean_object* v___x_661_; lean_object* v___x_662_; uint8_t v___x_663_; 
v___x_661_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__3, &l_Lean_Meta_withEqnOptions___redArg___closed__3_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__3);
v___x_662_ = lean_unsigned_to_nat(0u);
v___x_663_ = lean_nat_dec_lt(v___x_662_, v___x_661_);
return v___x_663_;
}
}
static uint8_t _init_l_Lean_Meta_withEqnOptions___redArg___closed__5(void){
_start:
{
lean_object* v___x_664_; uint8_t v___x_665_; 
v___x_664_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__3, &l_Lean_Meta_withEqnOptions___redArg___closed__3_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__3);
v___x_665_ = lean_nat_dec_le(v___x_664_, v___x_664_);
return v___x_665_;
}
}
static size_t _init_l_Lean_Meta_withEqnOptions___redArg___closed__6(void){
_start:
{
lean_object* v___x_666_; size_t v___x_667_; 
v___x_666_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__3, &l_Lean_Meta_withEqnOptions___redArg___closed__3_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__3);
v___x_667_ = lean_usize_of_nat(v___x_666_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions___redArg(lean_object* v_declName_668_, lean_object* v_act_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_){
_start:
{
lean_object* v___y_676_; uint8_t v___y_677_; lean_object* v_fileName_678_; lean_object* v_fileMap_679_; lean_object* v_currNamespace_680_; lean_object* v_openDecls_681_; lean_object* v_initHeartbeats_682_; lean_object* v_maxHeartbeats_683_; lean_object* v_quotContext_684_; lean_object* v_currMacroScope_685_; lean_object* v_cancelTk_x3f_686_; lean_object* v_inheritedTraceOptions_687_; lean_object* v_currRecDepth_688_; lean_object* v_ref_689_; uint8_t v_suppressElabErrors_690_; lean_object* v___y_691_; lean_object* v___y_698_; uint8_t v___y_699_; lean_object* v___y_700_; lean_object* v___y_701_; lean_object* v___y_717_; uint8_t v___y_718_; uint8_t v___y_719_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v_env_742_; lean_object* v___x_743_; lean_object* v_toEnvExtension_744_; lean_object* v_toCold_745_; lean_object* v_asyncMode_746_; lean_object* v_currRecDepth_747_; lean_object* v_ref_748_; uint8_t v_suppressElabErrors_749_; lean_object* v_fileName_750_; lean_object* v_fileMap_751_; lean_object* v_options_752_; lean_object* v_currNamespace_753_; lean_object* v_openDecls_754_; lean_object* v_initHeartbeats_755_; lean_object* v_maxHeartbeats_756_; lean_object* v_quotContext_757_; lean_object* v_currMacroScope_758_; lean_object* v_cancelTk_x3f_759_; lean_object* v_inheritedTraceOptions_760_; lean_object* v___y_762_; uint8_t v___x_768_; lean_object* v___x_769_; 
v___x_740_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__2, &l_Lean_Meta_withEqnOptions___redArg___closed__2_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__2);
v___x_741_ = lean_st_ref_get(v_a_673_);
v_env_742_ = lean_ctor_get(v___x_741_, 0);
lean_inc_ref(v_env_742_);
lean_dec(v___x_741_);
v___x_743_ = l_Lean_Meta_eqnOptionsExt;
v_toEnvExtension_744_ = lean_ctor_get(v___x_743_, 0);
v_toCold_745_ = lean_ctor_get(v_a_672_, 0);
v_asyncMode_746_ = lean_ctor_get(v_toEnvExtension_744_, 2);
v_currRecDepth_747_ = lean_ctor_get(v_a_672_, 1);
v_ref_748_ = lean_ctor_get(v_a_672_, 2);
v_suppressElabErrors_749_ = lean_ctor_get_uint8(v_a_672_, sizeof(void*)*3 + 1);
v_fileName_750_ = lean_ctor_get(v_toCold_745_, 0);
v_fileMap_751_ = lean_ctor_get(v_toCold_745_, 1);
v_options_752_ = lean_ctor_get(v_toCold_745_, 2);
v_currNamespace_753_ = lean_ctor_get(v_toCold_745_, 4);
v_openDecls_754_ = lean_ctor_get(v_toCold_745_, 5);
v_initHeartbeats_755_ = lean_ctor_get(v_toCold_745_, 6);
v_maxHeartbeats_756_ = lean_ctor_get(v_toCold_745_, 7);
v_quotContext_757_ = lean_ctor_get(v_toCold_745_, 8);
v_currMacroScope_758_ = lean_ctor_get(v_toCold_745_, 9);
v_cancelTk_x3f_759_ = lean_ctor_get(v_toCold_745_, 10);
v_inheritedTraceOptions_760_ = lean_ctor_get(v_toCold_745_, 11);
v___x_768_ = 0;
v___x_769_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_740_, v___x_743_, v_env_742_, v_declName_668_, v_asyncMode_746_, v___x_768_);
if (lean_obj_tag(v___x_769_) == 1)
{
lean_object* v_val_770_; lean_object* v___y_772_; lean_object* v___x_776_; uint8_t v___x_777_; 
v_val_770_ = lean_ctor_get(v___x_769_, 0);
lean_inc(v_val_770_);
lean_dec_ref_known(v___x_769_, 1);
v___x_776_ = l_Lean_Meta_eqnAffectingOptions;
v___x_777_ = lean_uint8_once(&l_Lean_Meta_withEqnOptions___redArg___closed__4, &l_Lean_Meta_withEqnOptions___redArg___closed__4_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__4);
if (v___x_777_ == 0)
{
lean_inc_ref(v_options_752_);
v___y_772_ = v_options_752_;
goto v___jp_771_;
}
else
{
uint8_t v___x_778_; 
v___x_778_ = lean_uint8_once(&l_Lean_Meta_withEqnOptions___redArg___closed__5, &l_Lean_Meta_withEqnOptions___redArg___closed__5_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__5);
if (v___x_778_ == 0)
{
if (v___x_777_ == 0)
{
lean_inc_ref(v_options_752_);
v___y_772_ = v_options_752_;
goto v___jp_771_;
}
else
{
size_t v___x_779_; size_t v___x_780_; lean_object* v___x_781_; 
v___x_779_ = ((size_t)0ULL);
v___x_780_ = lean_usize_once(&l_Lean_Meta_withEqnOptions___redArg___closed__6, &l_Lean_Meta_withEqnOptions___redArg___closed__6_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__6);
lean_inc_ref(v_options_752_);
v___x_781_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__4(v___x_776_, v___x_779_, v___x_780_, v_options_752_);
v___y_772_ = v___x_781_;
goto v___jp_771_;
}
}
else
{
size_t v___x_782_; size_t v___x_783_; lean_object* v___x_784_; 
v___x_782_ = ((size_t)0ULL);
v___x_783_ = lean_usize_once(&l_Lean_Meta_withEqnOptions___redArg___closed__6, &l_Lean_Meta_withEqnOptions___redArg___closed__6_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__6);
lean_inc_ref(v_options_752_);
v___x_784_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__4(v___x_776_, v___x_782_, v___x_783_, v_options_752_);
v___y_772_ = v___x_784_;
goto v___jp_771_;
}
}
v___jp_771_:
{
size_t v_sz_773_; size_t v___x_774_; lean_object* v___x_775_; 
v_sz_773_ = lean_array_size(v_val_770_);
v___x_774_ = ((size_t)0ULL);
v___x_775_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3(v_val_770_, v_sz_773_, v___x_774_, v___y_772_);
lean_dec(v_val_770_);
v___y_762_ = v___x_775_;
goto v___jp_761_;
}
}
else
{
lean_object* v___x_785_; uint8_t v___x_786_; 
lean_dec(v___x_769_);
v___x_785_ = l_Lean_Meta_eqnAffectingOptions;
v___x_786_ = lean_uint8_once(&l_Lean_Meta_withEqnOptions___redArg___closed__4, &l_Lean_Meta_withEqnOptions___redArg___closed__4_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__4);
if (v___x_786_ == 0)
{
lean_inc_ref(v_options_752_);
v___y_762_ = v_options_752_;
goto v___jp_761_;
}
else
{
uint8_t v___x_787_; 
v___x_787_ = lean_uint8_once(&l_Lean_Meta_withEqnOptions___redArg___closed__5, &l_Lean_Meta_withEqnOptions___redArg___closed__5_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__5);
if (v___x_787_ == 0)
{
if (v___x_786_ == 0)
{
lean_inc_ref(v_options_752_);
v___y_762_ = v_options_752_;
goto v___jp_761_;
}
else
{
size_t v___x_788_; size_t v___x_789_; lean_object* v___x_790_; 
v___x_788_ = ((size_t)0ULL);
v___x_789_ = lean_usize_once(&l_Lean_Meta_withEqnOptions___redArg___closed__6, &l_Lean_Meta_withEqnOptions___redArg___closed__6_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__6);
lean_inc_ref(v_options_752_);
v___x_790_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__4(v___x_785_, v___x_788_, v___x_789_, v_options_752_);
v___y_762_ = v___x_790_;
goto v___jp_761_;
}
}
else
{
size_t v___x_791_; size_t v___x_792_; lean_object* v___x_793_; 
v___x_791_ = ((size_t)0ULL);
v___x_792_ = lean_usize_once(&l_Lean_Meta_withEqnOptions___redArg___closed__6, &l_Lean_Meta_withEqnOptions___redArg___closed__6_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__6);
lean_inc_ref(v_options_752_);
v___x_793_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withEqnOptions_spec__4(v___x_785_, v___x_791_, v___x_792_, v_options_752_);
v___y_762_ = v___x_793_;
goto v___jp_761_;
}
}
}
v___jp_675_:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_692_ = l_Lean_maxRecDepth;
v___x_693_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__2(v___y_676_, v___x_692_);
v___x_694_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_694_, 0, v_fileName_678_);
lean_ctor_set(v___x_694_, 1, v_fileMap_679_);
lean_ctor_set(v___x_694_, 2, v___y_676_);
lean_ctor_set(v___x_694_, 3, v___x_693_);
lean_ctor_set(v___x_694_, 4, v_currNamespace_680_);
lean_ctor_set(v___x_694_, 5, v_openDecls_681_);
lean_ctor_set(v___x_694_, 6, v_initHeartbeats_682_);
lean_ctor_set(v___x_694_, 7, v_maxHeartbeats_683_);
lean_ctor_set(v___x_694_, 8, v_quotContext_684_);
lean_ctor_set(v___x_694_, 9, v_currMacroScope_685_);
lean_ctor_set(v___x_694_, 10, v_cancelTk_x3f_686_);
lean_ctor_set(v___x_694_, 11, v_inheritedTraceOptions_687_);
lean_inc(v_ref_689_);
lean_inc(v_currRecDepth_688_);
v___x_695_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_695_, 0, v___x_694_);
lean_ctor_set(v___x_695_, 1, v_currRecDepth_688_);
lean_ctor_set(v___x_695_, 2, v_ref_689_);
lean_ctor_set_uint8(v___x_695_, sizeof(void*)*3, v___y_677_);
lean_ctor_set_uint8(v___x_695_, sizeof(void*)*3 + 1, v_suppressElabErrors_690_);
lean_inc(v___y_691_);
lean_inc(v_a_671_);
lean_inc_ref(v_a_670_);
v___x_696_ = lean_apply_5(v_act_669_, v_a_670_, v_a_671_, v___x_695_, v___y_691_, lean_box(0));
return v___x_696_;
}
v___jp_697_:
{
lean_object* v_toCold_702_; lean_object* v_currRecDepth_703_; lean_object* v_ref_704_; uint8_t v_suppressElabErrors_705_; lean_object* v_fileName_706_; lean_object* v_fileMap_707_; lean_object* v_currNamespace_708_; lean_object* v_openDecls_709_; lean_object* v_initHeartbeats_710_; lean_object* v_maxHeartbeats_711_; lean_object* v_quotContext_712_; lean_object* v_currMacroScope_713_; lean_object* v_cancelTk_x3f_714_; lean_object* v_inheritedTraceOptions_715_; 
v_toCold_702_ = lean_ctor_get(v___y_700_, 0);
v_currRecDepth_703_ = lean_ctor_get(v___y_700_, 1);
v_ref_704_ = lean_ctor_get(v___y_700_, 2);
v_suppressElabErrors_705_ = lean_ctor_get_uint8(v___y_700_, sizeof(void*)*3 + 1);
v_fileName_706_ = lean_ctor_get(v_toCold_702_, 0);
v_fileMap_707_ = lean_ctor_get(v_toCold_702_, 1);
v_currNamespace_708_ = lean_ctor_get(v_toCold_702_, 4);
v_openDecls_709_ = lean_ctor_get(v_toCold_702_, 5);
v_initHeartbeats_710_ = lean_ctor_get(v_toCold_702_, 6);
v_maxHeartbeats_711_ = lean_ctor_get(v_toCold_702_, 7);
v_quotContext_712_ = lean_ctor_get(v_toCold_702_, 8);
v_currMacroScope_713_ = lean_ctor_get(v_toCold_702_, 9);
v_cancelTk_x3f_714_ = lean_ctor_get(v_toCold_702_, 10);
v_inheritedTraceOptions_715_ = lean_ctor_get(v_toCold_702_, 11);
lean_inc_ref(v_inheritedTraceOptions_715_);
lean_inc(v_cancelTk_x3f_714_);
lean_inc(v_currMacroScope_713_);
lean_inc(v_quotContext_712_);
lean_inc(v_maxHeartbeats_711_);
lean_inc(v_initHeartbeats_710_);
lean_inc(v_openDecls_709_);
lean_inc(v_currNamespace_708_);
lean_inc_ref(v_fileMap_707_);
lean_inc_ref(v_fileName_706_);
v___y_676_ = v___y_698_;
v___y_677_ = v___y_699_;
v_fileName_678_ = v_fileName_706_;
v_fileMap_679_ = v_fileMap_707_;
v_currNamespace_680_ = v_currNamespace_708_;
v_openDecls_681_ = v_openDecls_709_;
v_initHeartbeats_682_ = v_initHeartbeats_710_;
v_maxHeartbeats_683_ = v_maxHeartbeats_711_;
v_quotContext_684_ = v_quotContext_712_;
v_currMacroScope_685_ = v_currMacroScope_713_;
v_cancelTk_x3f_686_ = v_cancelTk_x3f_714_;
v_inheritedTraceOptions_687_ = v_inheritedTraceOptions_715_;
v_currRecDepth_688_ = v_currRecDepth_703_;
v_ref_689_ = v_ref_704_;
v_suppressElabErrors_690_ = v_suppressElabErrors_705_;
v___y_691_ = v___y_701_;
goto v___jp_675_;
}
v___jp_716_:
{
if (v___y_719_ == 0)
{
lean_object* v___x_720_; lean_object* v_env_721_; lean_object* v_nextMacroScope_722_; lean_object* v_ngen_723_; lean_object* v_auxDeclNGen_724_; lean_object* v_traceState_725_; lean_object* v_messages_726_; lean_object* v_infoState_727_; lean_object* v_snapshotTasks_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_738_; 
v___x_720_ = lean_st_ref_take(v_a_673_);
v_env_721_ = lean_ctor_get(v___x_720_, 0);
v_nextMacroScope_722_ = lean_ctor_get(v___x_720_, 1);
v_ngen_723_ = lean_ctor_get(v___x_720_, 2);
v_auxDeclNGen_724_ = lean_ctor_get(v___x_720_, 3);
v_traceState_725_ = lean_ctor_get(v___x_720_, 4);
v_messages_726_ = lean_ctor_get(v___x_720_, 6);
v_infoState_727_ = lean_ctor_get(v___x_720_, 7);
v_snapshotTasks_728_ = lean_ctor_get(v___x_720_, 8);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_720_);
if (v_isSharedCheck_738_ == 0)
{
lean_object* v_unused_739_; 
v_unused_739_ = lean_ctor_get(v___x_720_, 5);
lean_dec(v_unused_739_);
v___x_730_ = v___x_720_;
v_isShared_731_ = v_isSharedCheck_738_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_snapshotTasks_728_);
lean_inc(v_infoState_727_);
lean_inc(v_messages_726_);
lean_inc(v_traceState_725_);
lean_inc(v_auxDeclNGen_724_);
lean_inc(v_ngen_723_);
lean_inc(v_nextMacroScope_722_);
lean_inc(v_env_721_);
lean_dec(v___x_720_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_738_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_735_; 
v___x_732_ = l_Lean_Kernel_enableDiag(v_env_721_, v___y_718_);
v___x_733_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__1, &l_Lean_Meta_withEqnOptions___redArg___closed__1_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__1);
if (v_isShared_731_ == 0)
{
lean_ctor_set(v___x_730_, 5, v___x_733_);
lean_ctor_set(v___x_730_, 0, v___x_732_);
v___x_735_ = v___x_730_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v___x_732_);
lean_ctor_set(v_reuseFailAlloc_737_, 1, v_nextMacroScope_722_);
lean_ctor_set(v_reuseFailAlloc_737_, 2, v_ngen_723_);
lean_ctor_set(v_reuseFailAlloc_737_, 3, v_auxDeclNGen_724_);
lean_ctor_set(v_reuseFailAlloc_737_, 4, v_traceState_725_);
lean_ctor_set(v_reuseFailAlloc_737_, 5, v___x_733_);
lean_ctor_set(v_reuseFailAlloc_737_, 6, v_messages_726_);
lean_ctor_set(v_reuseFailAlloc_737_, 7, v_infoState_727_);
lean_ctor_set(v_reuseFailAlloc_737_, 8, v_snapshotTasks_728_);
v___x_735_ = v_reuseFailAlloc_737_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
lean_object* v___x_736_; 
v___x_736_ = lean_st_ref_put(v_a_673_, v___x_735_);
v___y_698_ = v___y_717_;
v___y_699_ = v___y_718_;
v___y_700_ = v_a_672_;
v___y_701_ = v_a_673_;
goto v___jp_697_;
}
}
}
else
{
v___y_698_ = v___y_717_;
v___y_699_ = v___y_718_;
v___y_700_ = v_a_672_;
v___y_701_ = v_a_673_;
goto v___jp_697_;
}
}
v___jp_761_:
{
lean_object* v___x_763_; uint8_t v___x_764_; lean_object* v___x_765_; lean_object* v_env_766_; uint8_t v___x_767_; 
v___x_763_ = l_Lean_diagnostics;
v___x_764_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(v___y_762_, v___x_763_);
v___x_765_ = lean_st_ref_get(v_a_673_);
v_env_766_ = lean_ctor_get(v___x_765_, 0);
lean_inc_ref(v_env_766_);
lean_dec(v___x_765_);
v___x_767_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_766_);
lean_dec_ref(v_env_766_);
if (v___x_764_ == 0)
{
if (v___x_767_ == 0)
{
lean_inc_ref(v_inheritedTraceOptions_760_);
lean_inc(v_cancelTk_x3f_759_);
lean_inc(v_currMacroScope_758_);
lean_inc(v_quotContext_757_);
lean_inc(v_maxHeartbeats_756_);
lean_inc(v_initHeartbeats_755_);
lean_inc(v_openDecls_754_);
lean_inc(v_currNamespace_753_);
lean_inc_ref(v_fileMap_751_);
lean_inc_ref(v_fileName_750_);
v___y_676_ = v___y_762_;
v___y_677_ = v___x_764_;
v_fileName_678_ = v_fileName_750_;
v_fileMap_679_ = v_fileMap_751_;
v_currNamespace_680_ = v_currNamespace_753_;
v_openDecls_681_ = v_openDecls_754_;
v_initHeartbeats_682_ = v_initHeartbeats_755_;
v_maxHeartbeats_683_ = v_maxHeartbeats_756_;
v_quotContext_684_ = v_quotContext_757_;
v_currMacroScope_685_ = v_currMacroScope_758_;
v_cancelTk_x3f_686_ = v_cancelTk_x3f_759_;
v_inheritedTraceOptions_687_ = v_inheritedTraceOptions_760_;
v_currRecDepth_688_ = v_currRecDepth_747_;
v_ref_689_ = v_ref_748_;
v_suppressElabErrors_690_ = v_suppressElabErrors_749_;
v___y_691_ = v_a_673_;
goto v___jp_675_;
}
else
{
v___y_717_ = v___y_762_;
v___y_718_ = v___x_764_;
v___y_719_ = v___x_764_;
goto v___jp_716_;
}
}
else
{
v___y_717_ = v___y_762_;
v___y_718_ = v___x_764_;
v___y_719_ = v___x_767_;
goto v___jp_716_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions___redArg___boxed(lean_object* v_declName_794_, lean_object* v_act_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_, lean_object* v_a_799_, lean_object* v_a_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l_Lean_Meta_withEqnOptions___redArg(v_declName_794_, v_act_795_, v_a_796_, v_a_797_, v_a_798_, v_a_799_);
lean_dec(v_a_799_);
lean_dec_ref(v_a_798_);
lean_dec(v_a_797_);
lean_dec_ref(v_a_796_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions(lean_object* v_00_u03b1_802_, lean_object* v_declName_803_, lean_object* v_act_804_, lean_object* v_a_805_, lean_object* v_a_806_, lean_object* v_a_807_, lean_object* v_a_808_){
_start:
{
lean_object* v___x_810_; 
v___x_810_ = l_Lean_Meta_withEqnOptions___redArg(v_declName_803_, v_act_804_, v_a_805_, v_a_806_, v_a_807_, v_a_808_);
return v___x_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withEqnOptions___boxed(lean_object* v_00_u03b1_811_, lean_object* v_declName_812_, lean_object* v_act_813_, lean_object* v_a_814_, lean_object* v_a_815_, lean_object* v_a_816_, lean_object* v_a_817_, lean_object* v_a_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_Lean_Meta_withEqnOptions(v_00_u03b1_811_, v_declName_812_, v_act_813_, v_a_814_, v_a_815_, v_a_816_, v_a_817_);
lean_dec(v_a_817_);
lean_dec_ref(v_a_816_);
lean_dec(v_a_815_);
lean_dec_ref(v_a_814_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___redArg(lean_object* v_thm_820_, lean_object* v___y_821_){
_start:
{
lean_object* v___x_823_; lean_object* v_env_824_; lean_object* v_toConstantVal_825_; lean_object* v_value_826_; lean_object* v_all_827_; uint8_t v___y_829_; lean_object* v_type_837_; uint8_t v___x_838_; 
v___x_823_ = lean_st_ref_get(v___y_821_);
v_env_824_ = lean_ctor_get(v___x_823_, 0);
lean_inc_ref_n(v_env_824_, 2);
lean_dec(v___x_823_);
v_toConstantVal_825_ = lean_ctor_get(v_thm_820_, 0);
v_value_826_ = lean_ctor_get(v_thm_820_, 1);
v_all_827_ = lean_ctor_get(v_thm_820_, 2);
v_type_837_ = lean_ctor_get(v_toConstantVal_825_, 2);
v___x_838_ = l_Lean_Environment_hasUnsafe(v_env_824_, v_type_837_);
if (v___x_838_ == 0)
{
uint8_t v___x_839_; 
v___x_839_ = l_Lean_Environment_hasUnsafe(v_env_824_, v_value_826_);
v___y_829_ = v___x_839_;
goto v___jp_828_;
}
else
{
lean_dec_ref(v_env_824_);
v___y_829_ = v___x_838_;
goto v___jp_828_;
}
v___jp_828_:
{
if (v___y_829_ == 0)
{
lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_830_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_830_, 0, v_thm_820_);
v___x_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
return v___x_831_;
}
else
{
lean_object* v___x_832_; uint8_t v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
lean_inc(v_all_827_);
lean_inc_ref(v_value_826_);
lean_inc_ref(v_toConstantVal_825_);
lean_dec_ref(v_thm_820_);
v___x_832_ = lean_box(0);
v___x_833_ = 0;
v___x_834_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_834_, 0, v_toConstantVal_825_);
lean_ctor_set(v___x_834_, 1, v_value_826_);
lean_ctor_set(v___x_834_, 2, v___x_832_);
lean_ctor_set(v___x_834_, 3, v_all_827_);
lean_ctor_set_uint8(v___x_834_, sizeof(void*)*4, v___x_833_);
v___x_835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_835_, 0, v___x_834_);
v___x_836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_836_, 0, v___x_835_);
return v___x_836_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___redArg___boxed(lean_object* v_thm_840_, lean_object* v___y_841_, lean_object* v___y_842_){
_start:
{
lean_object* v_res_843_; 
v_res_843_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___redArg(v_thm_840_, v___y_841_);
lean_dec(v___y_841_);
return v_res_843_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1(lean_object* v_thm_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_){
_start:
{
lean_object* v___x_850_; 
v___x_850_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___redArg(v_thm_844_, v___y_848_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___boxed(lean_object* v_thm_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1(v_thm_851_, v___y_852_, v___y_853_, v___y_854_, v___y_855_);
lean_dec(v___y_855_);
lean_dec_ref(v___y_854_);
lean_dec(v___y_853_);
lean_dec_ref(v___y_852_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___lam__0(lean_object* v_k_858_, lean_object* v_b_859_, lean_object* v_c_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_){
_start:
{
lean_object* v___x_866_; 
lean_inc(v___y_864_);
lean_inc_ref(v___y_863_);
lean_inc(v___y_862_);
lean_inc_ref(v___y_861_);
v___x_866_ = lean_apply_7(v_k_858_, v_b_859_, v_c_860_, v___y_861_, v___y_862_, v___y_863_, v___y_864_, lean_box(0));
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___lam__0___boxed(lean_object* v_k_867_, lean_object* v_b_868_, lean_object* v_c_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_){
_start:
{
lean_object* v_res_875_; 
v_res_875_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___lam__0(v_k_867_, v_b_868_, v_c_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_);
lean_dec(v___y_873_);
lean_dec_ref(v___y_872_);
lean_dec(v___y_871_);
lean_dec_ref(v___y_870_);
return v_res_875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg(lean_object* v_e_876_, lean_object* v_k_877_, uint8_t v_cleanupAnnotations_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_){
_start:
{
lean_object* v___f_884_; uint8_t v___x_885_; uint8_t v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v___f_884_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_884_, 0, v_k_877_);
v___x_885_ = 1;
v___x_886_ = 0;
v___x_887_ = lean_box(0);
v___x_888_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_876_, v___x_885_, v___x_886_, v___x_885_, v___x_886_, v___x_887_, v___f_884_, v_cleanupAnnotations_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_);
if (lean_obj_tag(v___x_888_) == 0)
{
lean_object* v_a_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_896_; 
v_a_889_ = lean_ctor_get(v___x_888_, 0);
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_888_);
if (v_isSharedCheck_896_ == 0)
{
v___x_891_ = v___x_888_;
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_a_889_);
lean_dec(v___x_888_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_894_; 
if (v_isShared_892_ == 0)
{
v___x_894_ = v___x_891_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_a_889_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
else
{
lean_object* v_a_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_904_; 
v_a_897_ = lean_ctor_get(v___x_888_, 0);
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_888_);
if (v_isSharedCheck_904_ == 0)
{
v___x_899_ = v___x_888_;
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_a_897_);
lean_dec(v___x_888_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_902_; 
if (v_isShared_900_ == 0)
{
v___x_902_ = v___x_899_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_a_897_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
return v___x_902_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg___boxed(lean_object* v_e_905_, lean_object* v_k_906_, lean_object* v_cleanupAnnotations_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_913_; lean_object* v_res_914_; 
v_cleanupAnnotations_boxed_913_ = lean_unbox(v_cleanupAnnotations_907_);
v_res_914_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg(v_e_905_, v_k_906_, v_cleanupAnnotations_boxed_913_, v___y_908_, v___y_909_, v___y_910_, v___y_911_);
lean_dec(v___y_911_);
lean_dec_ref(v___y_910_);
lean_dec(v___y_909_);
lean_dec_ref(v___y_908_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2(lean_object* v_00_u03b1_915_, lean_object* v_e_916_, lean_object* v_k_917_, uint8_t v_cleanupAnnotations_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_){
_start:
{
lean_object* v___x_924_; 
v___x_924_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg(v_e_916_, v_k_917_, v_cleanupAnnotations_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___boxed(lean_object* v_00_u03b1_925_, lean_object* v_e_926_, lean_object* v_k_927_, lean_object* v_cleanupAnnotations_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_934_; lean_object* v_res_935_; 
v_cleanupAnnotations_boxed_934_ = lean_unbox(v_cleanupAnnotations_928_);
v_res_935_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2(v_00_u03b1_925_, v_e_926_, v_k_927_, v_cleanupAnnotations_boxed_934_, v___y_929_, v___y_930_, v___y_931_, v___y_932_);
lean_dec(v___y_932_);
lean_dec_ref(v___y_931_);
lean_dec(v___y_930_);
lean_dec_ref(v___y_929_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__0(lean_object* v_a_936_, lean_object* v_a_937_){
_start:
{
if (lean_obj_tag(v_a_936_) == 0)
{
lean_object* v___x_938_; 
v___x_938_ = l_List_reverse___redArg(v_a_937_);
return v___x_938_;
}
else
{
lean_object* v_head_939_; lean_object* v_tail_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_949_; 
v_head_939_ = lean_ctor_get(v_a_936_, 0);
v_tail_940_ = lean_ctor_get(v_a_936_, 1);
v_isSharedCheck_949_ = !lean_is_exclusive(v_a_936_);
if (v_isSharedCheck_949_ == 0)
{
v___x_942_ = v_a_936_;
v_isShared_943_ = v_isSharedCheck_949_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_tail_940_);
lean_inc(v_head_939_);
lean_dec(v_a_936_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_949_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_944_; lean_object* v___x_946_; 
v___x_944_ = l_Lean_mkLevelParam(v_head_939_);
if (v_isShared_943_ == 0)
{
lean_ctor_set(v___x_942_, 1, v_a_937_);
lean_ctor_set(v___x_942_, 0, v___x_944_);
v___x_946_ = v___x_942_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v___x_944_);
lean_ctor_set(v_reuseFailAlloc_948_, 1, v_a_937_);
v___x_946_ = v_reuseFailAlloc_948_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
v_a_936_ = v_tail_940_;
v_a_937_ = v___x_946_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___lam__0(lean_object* v_toConstantVal_950_, lean_object* v_name_951_, lean_object* v_xs_952_, lean_object* v_body_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_){
_start:
{
lean_object* v_name_959_; lean_object* v_levelParams_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_1030_; 
v_name_959_ = lean_ctor_get(v_toConstantVal_950_, 0);
v_levelParams_960_ = lean_ctor_get(v_toConstantVal_950_, 1);
v_isSharedCheck_1030_ = !lean_is_exclusive(v_toConstantVal_950_);
if (v_isSharedCheck_1030_ == 0)
{
lean_object* v_unused_1031_; 
v_unused_1031_ = lean_ctor_get(v_toConstantVal_950_, 2);
lean_dec(v_unused_1031_);
v___x_962_ = v_toConstantVal_950_;
v_isShared_963_ = v_isSharedCheck_1030_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_levelParams_960_);
lean_inc(v_name_959_);
lean_dec(v_toConstantVal_950_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_1030_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v_lhs_967_; lean_object* v___x_968_; 
v___x_964_ = lean_box(0);
lean_inc(v_levelParams_960_);
v___x_965_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__0(v_levelParams_960_, v___x_964_);
v___x_966_ = l_Lean_mkConst(v_name_959_, v___x_965_);
v_lhs_967_ = l_Lean_mkAppN(v___x_966_, v_xs_952_);
lean_inc_ref(v_lhs_967_);
v___x_968_ = l_Lean_Meta_mkEq(v_lhs_967_, v_body_953_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v_a_969_; uint8_t v___x_970_; uint8_t v___x_971_; uint8_t v___x_972_; lean_object* v___x_973_; 
v_a_969_ = lean_ctor_get(v___x_968_, 0);
lean_inc(v_a_969_);
lean_dec_ref_known(v___x_968_, 1);
v___x_970_ = 0;
v___x_971_ = 1;
v___x_972_ = 1;
lean_inc_ref(v_xs_952_);
v___x_973_ = l_Lean_Meta_mkForallFVars(v_xs_952_, v_a_969_, v___x_970_, v___x_971_, v___x_971_, v___x_972_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
if (lean_obj_tag(v___x_973_) == 0)
{
lean_object* v_a_974_; lean_object* v___x_975_; 
v_a_974_ = lean_ctor_get(v___x_973_, 0);
lean_inc(v_a_974_);
lean_dec_ref_known(v___x_973_, 1);
v___x_975_ = l_Lean_Meta_letToHave(v_a_974_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
if (lean_obj_tag(v___x_975_) == 0)
{
lean_object* v_a_976_; lean_object* v___x_977_; 
v_a_976_ = lean_ctor_get(v___x_975_, 0);
lean_inc(v_a_976_);
lean_dec_ref_known(v___x_975_, 1);
v___x_977_ = l_Lean_Meta_mkEqRefl(v_lhs_967_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
if (lean_obj_tag(v___x_977_) == 0)
{
lean_object* v_a_978_; lean_object* v___x_979_; 
v_a_978_ = lean_ctor_get(v___x_977_, 0);
lean_inc(v_a_978_);
lean_dec_ref_known(v___x_977_, 1);
v___x_979_ = l_Lean_Meta_mkLambdaFVars(v_xs_952_, v_a_978_, v___x_970_, v___x_971_, v___x_970_, v___x_971_, v___x_972_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
if (lean_obj_tag(v___x_979_) == 0)
{
lean_object* v_a_980_; lean_object* v___x_982_; 
v_a_980_ = lean_ctor_get(v___x_979_, 0);
lean_inc(v_a_980_);
lean_dec_ref_known(v___x_979_, 1);
lean_inc(v_name_951_);
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 2, v_a_976_);
lean_ctor_set(v___x_962_, 0, v_name_951_);
v___x_982_ = v___x_962_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_name_951_);
lean_ctor_set(v_reuseFailAlloc_989_, 1, v_levelParams_960_);
lean_ctor_set(v_reuseFailAlloc_989_, 2, v_a_976_);
v___x_982_ = v_reuseFailAlloc_989_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v_a_986_; lean_object* v___x_987_; 
lean_inc(v_name_951_);
v___x_983_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_983_, 0, v_name_951_);
lean_ctor_set(v___x_983_, 1, v___x_964_);
v___x_984_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_984_, 0, v___x_982_);
lean_ctor_set(v___x_984_, 1, v_a_980_);
lean_ctor_set(v___x_984_, 2, v___x_983_);
v___x_985_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__1___redArg(v___x_984_, v___y_957_);
v_a_986_ = lean_ctor_get(v___x_985_, 0);
lean_inc(v_a_986_);
lean_dec_ref(v___x_985_);
v___x_987_ = l_Lean_addDecl(v_a_986_, v___x_970_, v___y_956_, v___y_957_);
if (lean_obj_tag(v___x_987_) == 0)
{
lean_object* v___x_988_; 
lean_dec_ref_known(v___x_987_, 1);
v___x_988_ = l_Lean_inferDefEqAttr(v_name_951_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
return v___x_988_;
}
else
{
lean_dec(v_name_951_);
return v___x_987_;
}
}
}
else
{
lean_object* v_a_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_997_; 
lean_dec(v_a_976_);
lean_del_object(v___x_962_);
lean_dec(v_levelParams_960_);
lean_dec(v_name_951_);
v_a_990_ = lean_ctor_get(v___x_979_, 0);
v_isSharedCheck_997_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_997_ == 0)
{
v___x_992_ = v___x_979_;
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_a_990_);
lean_dec(v___x_979_);
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
else
{
lean_object* v_a_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1005_; 
lean_dec(v_a_976_);
lean_del_object(v___x_962_);
lean_dec(v_levelParams_960_);
lean_dec_ref(v_xs_952_);
lean_dec(v_name_951_);
v_a_998_ = lean_ctor_get(v___x_977_, 0);
v_isSharedCheck_1005_ = !lean_is_exclusive(v___x_977_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_1000_ = v___x_977_;
v_isShared_1001_ = v_isSharedCheck_1005_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_a_998_);
lean_dec(v___x_977_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1005_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1003_; 
if (v_isShared_1001_ == 0)
{
v___x_1003_ = v___x_1000_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v_a_998_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
return v___x_1003_;
}
}
}
}
else
{
lean_object* v_a_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1013_; 
lean_dec_ref(v_lhs_967_);
lean_del_object(v___x_962_);
lean_dec(v_levelParams_960_);
lean_dec_ref(v_xs_952_);
lean_dec(v_name_951_);
v_a_1006_ = lean_ctor_get(v___x_975_, 0);
v_isSharedCheck_1013_ = !lean_is_exclusive(v___x_975_);
if (v_isSharedCheck_1013_ == 0)
{
v___x_1008_ = v___x_975_;
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_a_1006_);
lean_dec(v___x_975_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1011_; 
if (v_isShared_1009_ == 0)
{
v___x_1011_ = v___x_1008_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v_a_1006_);
v___x_1011_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
return v___x_1011_;
}
}
}
}
else
{
lean_object* v_a_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1021_; 
lean_dec_ref(v_lhs_967_);
lean_del_object(v___x_962_);
lean_dec(v_levelParams_960_);
lean_dec_ref(v_xs_952_);
lean_dec(v_name_951_);
v_a_1014_ = lean_ctor_get(v___x_973_, 0);
v_isSharedCheck_1021_ = !lean_is_exclusive(v___x_973_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_1016_ = v___x_973_;
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_a_1014_);
lean_dec(v___x_973_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v___x_1019_; 
if (v_isShared_1017_ == 0)
{
v___x_1019_ = v___x_1016_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v_a_1014_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
return v___x_1019_;
}
}
}
}
else
{
lean_object* v_a_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1029_; 
lean_dec_ref(v_lhs_967_);
lean_del_object(v___x_962_);
lean_dec(v_levelParams_960_);
lean_dec_ref(v_xs_952_);
lean_dec(v_name_951_);
v_a_1022_ = lean_ctor_get(v___x_968_, 0);
v_isSharedCheck_1029_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_1029_ == 0)
{
v___x_1024_ = v___x_968_;
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_a_1022_);
lean_dec(v___x_968_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v___x_1027_; 
if (v_isShared_1025_ == 0)
{
v___x_1027_ = v___x_1024_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_a_1022_);
v___x_1027_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
return v___x_1027_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___lam__0___boxed(lean_object* v_toConstantVal_1032_, lean_object* v_name_1033_, lean_object* v_xs_1034_, lean_object* v_body_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___lam__0(v_toConstantVal_1032_, v_name_1033_, v_xs_1034_, v_body_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize(lean_object* v_name_1042_, lean_object* v_info_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_){
_start:
{
lean_object* v_toConstantVal_1049_; lean_object* v_value_1050_; lean_object* v___f_1051_; uint8_t v___x_1052_; lean_object* v___x_1053_; 
v_toConstantVal_1049_ = lean_ctor_get(v_info_1043_, 0);
lean_inc_ref(v_toConstantVal_1049_);
v_value_1050_ = lean_ctor_get(v_info_1043_, 1);
lean_inc_ref(v_value_1050_);
lean_dec_ref(v_info_1043_);
v___f_1051_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___lam__0___boxed), 9, 2);
lean_closure_set(v___f_1051_, 0, v_toConstantVal_1049_);
lean_closure_set(v___f_1051_, 1, v_name_1042_);
v___x_1052_ = 1;
v___x_1053_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize_spec__2___redArg(v_value_1050_, v___f_1051_, v___x_1052_, v_a_1044_, v_a_1045_, v_a_1046_, v_a_1047_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___boxed(lean_object* v_name_1054_, lean_object* v_info_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_){
_start:
{
lean_object* v_res_1061_; 
v_res_1061_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize(v_name_1054_, v_info_1055_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_);
lean_dec(v_a_1059_);
lean_dec_ref(v_a_1058_);
lean_dec(v_a_1057_);
lean_dec_ref(v_a_1056_);
return v_res_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSimpleEqThm(lean_object* v_declName_1062_, lean_object* v_name_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_, lean_object* v_a_1066_, lean_object* v_a_1067_){
_start:
{
lean_object* v___x_1072_; lean_object* v_env_1073_; uint8_t v___x_1074_; lean_object* v___x_1075_; 
v___x_1072_ = lean_st_ref_get(v_a_1067_);
v_env_1073_ = lean_ctor_get(v___x_1072_, 0);
lean_inc_ref(v_env_1073_);
lean_dec(v___x_1072_);
v___x_1074_ = 0;
lean_inc(v_declName_1062_);
v___x_1075_ = l_Lean_Environment_find_x3f(v_env_1073_, v_declName_1062_, v___x_1074_);
if (lean_obj_tag(v___x_1075_) == 1)
{
lean_object* v_val_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1103_; 
v_val_1076_ = lean_ctor_get(v___x_1075_, 0);
v_isSharedCheck_1103_ = !lean_is_exclusive(v___x_1075_);
if (v_isSharedCheck_1103_ == 0)
{
v___x_1078_ = v___x_1075_;
v_isShared_1079_ = v_isSharedCheck_1103_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_val_1076_);
lean_dec(v___x_1075_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1103_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
if (lean_obj_tag(v_val_1076_) == 1)
{
lean_object* v_val_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v_val_1080_ = lean_ctor_get(v_val_1076_, 0);
lean_inc_ref(v_val_1080_);
lean_dec_ref_known(v_val_1076_, 1);
lean_inc_n(v_name_1063_, 2);
v___x_1081_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_mkSimpleEqThm_doRealize___boxed), 7, 2);
lean_closure_set(v___x_1081_, 0, v_name_1063_);
lean_closure_set(v___x_1081_, 1, v_val_1080_);
lean_inc(v_declName_1062_);
v___x_1082_ = lean_alloc_closure((void*)(l_Lean_Meta_withEqnOptions___boxed), 8, 3);
lean_closure_set(v___x_1082_, 0, lean_box(0));
lean_closure_set(v___x_1082_, 1, v_declName_1062_);
lean_closure_set(v___x_1082_, 2, v___x_1081_);
v___x_1083_ = l_Lean_Meta_realizeConst(v_declName_1062_, v_name_1063_, v___x_1082_, v_a_1064_, v_a_1065_, v_a_1066_, v_a_1067_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1093_; 
v_isSharedCheck_1093_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1093_ == 0)
{
lean_object* v_unused_1094_; 
v_unused_1094_ = lean_ctor_get(v___x_1083_, 0);
lean_dec(v_unused_1094_);
v___x_1085_ = v___x_1083_;
v_isShared_1086_ = v_isSharedCheck_1093_;
goto v_resetjp_1084_;
}
else
{
lean_dec(v___x_1083_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1093_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1088_; 
if (v_isShared_1079_ == 0)
{
lean_ctor_set(v___x_1078_, 0, v_name_1063_);
v___x_1088_ = v___x_1078_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v_name_1063_);
v___x_1088_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
lean_object* v___x_1090_; 
if (v_isShared_1086_ == 0)
{
lean_ctor_set(v___x_1085_, 0, v___x_1088_);
v___x_1090_ = v___x_1085_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v___x_1088_);
v___x_1090_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
return v___x_1090_;
}
}
}
}
else
{
lean_object* v_a_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1102_; 
lean_del_object(v___x_1078_);
lean_dec(v_name_1063_);
v_a_1095_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1097_ = v___x_1083_;
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_a_1095_);
lean_dec(v___x_1083_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1100_; 
if (v_isShared_1098_ == 0)
{
v___x_1100_ = v___x_1097_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_a_1095_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
return v___x_1100_;
}
}
}
}
else
{
lean_del_object(v___x_1078_);
lean_dec(v_val_1076_);
lean_dec(v_name_1063_);
lean_dec(v_declName_1062_);
goto v___jp_1069_;
}
}
}
else
{
lean_dec(v___x_1075_);
lean_dec(v_name_1063_);
lean_dec(v_declName_1062_);
goto v___jp_1069_;
}
v___jp_1069_:
{
lean_object* v___x_1070_; lean_object* v___x_1071_; 
v___x_1070_ = lean_box(0);
v___x_1071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1070_);
return v___x_1071_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkSimpleEqThm___boxed(lean_object* v_declName_1104_, lean_object* v_name_1105_, lean_object* v_a_1106_, lean_object* v_a_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l_Lean_Meta_mkSimpleEqThm(v_declName_1104_, v_name_1105_, v_a_1106_, v_a_1107_, v_a_1108_, v_a_1109_);
lean_dec(v_a_1109_);
lean_dec_ref(v_a_1108_);
lean_dec(v_a_1107_);
lean_dec_ref(v_a_1106_);
return v_res_1111_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1112_, lean_object* v_vals_1113_, lean_object* v_i_1114_, lean_object* v_k_1115_){
_start:
{
lean_object* v___x_1116_; uint8_t v___x_1117_; 
v___x_1116_ = lean_array_get_size(v_keys_1112_);
v___x_1117_ = lean_nat_dec_lt(v_i_1114_, v___x_1116_);
if (v___x_1117_ == 0)
{
lean_object* v___x_1118_; 
lean_dec(v_i_1114_);
v___x_1118_ = lean_box(0);
return v___x_1118_;
}
else
{
lean_object* v_k_x27_1119_; uint8_t v___x_1120_; 
v_k_x27_1119_ = lean_array_fget_borrowed(v_keys_1112_, v_i_1114_);
v___x_1120_ = lean_name_eq(v_k_1115_, v_k_x27_1119_);
if (v___x_1120_ == 0)
{
lean_object* v___x_1121_; lean_object* v___x_1122_; 
v___x_1121_ = lean_unsigned_to_nat(1u);
v___x_1122_ = lean_nat_add(v_i_1114_, v___x_1121_);
lean_dec(v_i_1114_);
v_i_1114_ = v___x_1122_;
goto _start;
}
else
{
lean_object* v___x_1124_; lean_object* v___x_1125_; 
v___x_1124_ = lean_array_fget_borrowed(v_vals_1113_, v_i_1114_);
lean_dec(v_i_1114_);
lean_inc(v___x_1124_);
v___x_1125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1125_, 0, v___x_1124_);
return v___x_1125_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1126_, lean_object* v_vals_1127_, lean_object* v_i_1128_, lean_object* v_k_1129_){
_start:
{
lean_object* v_res_1130_; 
v_res_1130_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___redArg(v_keys_1126_, v_vals_1127_, v_i_1128_, v_k_1129_);
lean_dec(v_k_1129_);
lean_dec_ref(v_vals_1127_);
lean_dec_ref(v_keys_1126_);
return v_res_1130_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___redArg(lean_object* v_x_1131_, size_t v_x_1132_, lean_object* v_x_1133_){
_start:
{
if (lean_obj_tag(v_x_1131_) == 0)
{
lean_object* v_es_1134_; lean_object* v___x_1135_; size_t v___x_1136_; size_t v___x_1137_; lean_object* v_j_1138_; lean_object* v___x_1139_; 
v_es_1134_ = lean_ctor_get(v_x_1131_, 0);
v___x_1135_ = lean_box(2);
v___x_1136_ = ((size_t)31ULL);
v___x_1137_ = lean_usize_land(v_x_1132_, v___x_1136_);
v_j_1138_ = lean_usize_to_nat(v___x_1137_);
v___x_1139_ = lean_array_get_borrowed(v___x_1135_, v_es_1134_, v_j_1138_);
lean_dec(v_j_1138_);
switch(lean_obj_tag(v___x_1139_))
{
case 0:
{
lean_object* v_key_1140_; lean_object* v_val_1141_; uint8_t v___x_1142_; 
v_key_1140_ = lean_ctor_get(v___x_1139_, 0);
v_val_1141_ = lean_ctor_get(v___x_1139_, 1);
v___x_1142_ = lean_name_eq(v_x_1133_, v_key_1140_);
if (v___x_1142_ == 0)
{
lean_object* v___x_1143_; 
v___x_1143_ = lean_box(0);
return v___x_1143_;
}
else
{
lean_object* v___x_1144_; 
lean_inc(v_val_1141_);
v___x_1144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1144_, 0, v_val_1141_);
return v___x_1144_;
}
}
case 1:
{
lean_object* v_node_1145_; size_t v___x_1146_; size_t v___x_1147_; 
v_node_1145_ = lean_ctor_get(v___x_1139_, 0);
v___x_1146_ = ((size_t)5ULL);
v___x_1147_ = lean_usize_shift_right(v_x_1132_, v___x_1146_);
v_x_1131_ = v_node_1145_;
v_x_1132_ = v___x_1147_;
goto _start;
}
default: 
{
lean_object* v___x_1149_; 
v___x_1149_ = lean_box(0);
return v___x_1149_;
}
}
}
else
{
lean_object* v_ks_1150_; lean_object* v_vs_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
v_ks_1150_ = lean_ctor_get(v_x_1131_, 0);
v_vs_1151_ = lean_ctor_get(v_x_1131_, 1);
v___x_1152_ = lean_unsigned_to_nat(0u);
v___x_1153_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___redArg(v_ks_1150_, v_vs_1151_, v___x_1152_, v_x_1133_);
return v___x_1153_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_1154_, lean_object* v_x_1155_, lean_object* v_x_1156_){
_start:
{
size_t v_x_343__boxed_1157_; lean_object* v_res_1158_; 
v_x_343__boxed_1157_ = lean_unbox_usize(v_x_1155_);
lean_dec(v_x_1155_);
v_res_1158_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___redArg(v_x_1154_, v_x_343__boxed_1157_, v_x_1156_);
lean_dec(v_x_1156_);
lean_dec_ref(v_x_1154_);
return v_res_1158_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg(lean_object* v_x_1159_, lean_object* v_x_1160_){
_start:
{
uint64_t v___y_1162_; lean_object* v___x_1165_; 
v___x_1165_ = l_unsafeCast___redArg(v_x_1160_);
if (lean_obj_tag(v___x_1165_) == 0)
{
uint64_t v___x_1166_; 
v___x_1166_ = 1723ULL;
v___y_1162_ = v___x_1166_;
goto v___jp_1161_;
}
else
{
uint64_t v_hash_1167_; 
v_hash_1167_ = lean_ctor_get_uint64(v___x_1165_, sizeof(void*)*2);
lean_dec(v___x_1165_);
v___y_1162_ = v_hash_1167_;
goto v___jp_1161_;
}
v___jp_1161_:
{
size_t v___x_1163_; lean_object* v___x_1164_; 
v___x_1163_ = lean_uint64_to_usize(v___y_1162_);
v___x_1164_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___redArg(v_x_1159_, v___x_1163_, v_x_1160_);
return v___x_1164_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg___boxed(lean_object* v_x_1168_, lean_object* v_x_1169_){
_start:
{
lean_object* v_res_1170_; 
v_res_1170_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg(v_x_1168_, v_x_1169_);
lean_dec(v_x_1169_);
lean_dec_ref(v_x_1168_);
return v_res_1170_;
}
}
static lean_object* _init_l_Lean_Meta_isEqnThm_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; 
v___x_1171_ = lean_box(0);
v___x_1172_ = l_unsafeCast___redArg(v___x_1171_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f___redArg(lean_object* v_thmName_1173_, lean_object* v_a_1174_){
_start:
{
lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v_env_1178_; lean_object* v___x_1179_; lean_object* v_asyncMode_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1176_ = l_Lean_Meta_instInhabitedEqnsExtState_default;
v___x_1177_ = lean_st_ref_get(v_a_1174_);
v_env_1178_ = lean_ctor_get(v___x_1177_, 0);
lean_inc_ref(v_env_1178_);
lean_dec(v___x_1177_);
v___x_1179_ = l_Lean_Meta_eqnsExt;
v_asyncMode_1180_ = lean_ctor_get(v___x_1179_, 2);
v___x_1181_ = lean_obj_once(&l_Lean_Meta_isEqnThm_x3f___redArg___closed__0, &l_Lean_Meta_isEqnThm_x3f___redArg___closed__0_once, _init_l_Lean_Meta_isEqnThm_x3f___redArg___closed__0);
v___x_1182_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_1176_, v___x_1179_, v_env_1178_, v_asyncMode_1180_, v___x_1181_);
v___x_1183_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg(v___x_1182_, v_thmName_1173_);
lean_dec(v___x_1182_);
v___x_1184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1183_);
return v___x_1184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f___redArg___boxed(lean_object* v_thmName_1185_, lean_object* v_a_1186_, lean_object* v_a_1187_){
_start:
{
lean_object* v_res_1188_; 
v_res_1188_ = l_Lean_Meta_isEqnThm_x3f___redArg(v_thmName_1185_, v_a_1186_);
lean_dec(v_a_1186_);
lean_dec(v_thmName_1185_);
return v_res_1188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f(lean_object* v_thmName_1189_, lean_object* v_a_1190_, lean_object* v_a_1191_){
_start:
{
lean_object* v___x_1193_; 
v___x_1193_ = l_Lean_Meta_isEqnThm_x3f___redArg(v_thmName_1189_, v_a_1191_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm_x3f___boxed(lean_object* v_thmName_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_){
_start:
{
lean_object* v_res_1198_; 
v_res_1198_ = l_Lean_Meta_isEqnThm_x3f(v_thmName_1194_, v_a_1195_, v_a_1196_);
lean_dec(v_a_1196_);
lean_dec_ref(v_a_1195_);
lean_dec(v_thmName_1194_);
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0(lean_object* v_00_u03b2_1199_, lean_object* v_x_1200_, lean_object* v_x_1201_){
_start:
{
lean_object* v___x_1202_; 
v___x_1202_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___redArg(v_x_1200_, v_x_1201_);
return v___x_1202_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0___boxed(lean_object* v_00_u03b2_1203_, lean_object* v_x_1204_, lean_object* v_x_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0(v_00_u03b2_1203_, v_x_1204_, v_x_1205_);
lean_dec(v_x_1205_);
lean_dec_ref(v_x_1204_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0(lean_object* v_00_u03b2_1207_, lean_object* v_x_1208_, size_t v_x_1209_, lean_object* v_x_1210_){
_start:
{
lean_object* v___x_1211_; 
v___x_1211_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___redArg(v_x_1208_, v_x_1209_, v_x_1210_);
return v___x_1211_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1212_, lean_object* v_x_1213_, lean_object* v_x_1214_, lean_object* v_x_1215_){
_start:
{
size_t v_x_444__boxed_1216_; lean_object* v_res_1217_; 
v_x_444__boxed_1216_ = lean_unbox_usize(v_x_1214_);
lean_dec(v_x_1214_);
v_res_1217_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0(v_00_u03b2_1212_, v_x_1213_, v_x_444__boxed_1216_, v_x_1215_);
lean_dec(v_x_1215_);
lean_dec_ref(v_x_1213_);
return v_res_1217_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1218_, lean_object* v_keys_1219_, lean_object* v_vals_1220_, lean_object* v_heq_1221_, lean_object* v_i_1222_, lean_object* v_k_1223_){
_start:
{
lean_object* v___x_1224_; 
v___x_1224_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___redArg(v_keys_1219_, v_vals_1220_, v_i_1222_, v_k_1223_);
return v___x_1224_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1225_, lean_object* v_keys_1226_, lean_object* v_vals_1227_, lean_object* v_heq_1228_, lean_object* v_i_1229_, lean_object* v_k_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isEqnThm_x3f_spec__0_spec__0_spec__1(v_00_u03b2_1225_, v_keys_1226_, v_vals_1227_, v_heq_1228_, v_i_1229_, v_k_1230_);
lean_dec(v_k_1230_);
lean_dec_ref(v_vals_1227_);
lean_dec_ref(v_keys_1226_);
return v_res_1231_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1232_, lean_object* v_i_1233_, lean_object* v_k_1234_){
_start:
{
lean_object* v___x_1235_; uint8_t v___x_1236_; 
v___x_1235_ = lean_array_get_size(v_keys_1232_);
v___x_1236_ = lean_nat_dec_lt(v_i_1233_, v___x_1235_);
if (v___x_1236_ == 0)
{
lean_dec(v_i_1233_);
return v___x_1236_;
}
else
{
lean_object* v_k_x27_1237_; uint8_t v___x_1238_; 
v_k_x27_1237_ = lean_array_fget_borrowed(v_keys_1232_, v_i_1233_);
v___x_1238_ = lean_name_eq(v_k_1234_, v_k_x27_1237_);
if (v___x_1238_ == 0)
{
lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1239_ = lean_unsigned_to_nat(1u);
v___x_1240_ = lean_nat_add(v_i_1233_, v___x_1239_);
lean_dec(v_i_1233_);
v_i_1233_ = v___x_1240_;
goto _start;
}
else
{
lean_dec(v_i_1233_);
return v___x_1236_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1242_, lean_object* v_i_1243_, lean_object* v_k_1244_){
_start:
{
uint8_t v_res_1245_; lean_object* v_r_1246_; 
v_res_1245_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___redArg(v_keys_1242_, v_i_1243_, v_k_1244_);
lean_dec(v_k_1244_);
lean_dec_ref(v_keys_1242_);
v_r_1246_ = lean_box(v_res_1245_);
return v_r_1246_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___redArg(lean_object* v_x_1247_, size_t v_x_1248_, lean_object* v_x_1249_){
_start:
{
if (lean_obj_tag(v_x_1247_) == 0)
{
lean_object* v_es_1250_; lean_object* v___x_1251_; size_t v___x_1252_; size_t v___x_1253_; lean_object* v_j_1254_; lean_object* v___x_1255_; 
v_es_1250_ = lean_ctor_get(v_x_1247_, 0);
v___x_1251_ = lean_box(2);
v___x_1252_ = ((size_t)31ULL);
v___x_1253_ = lean_usize_land(v_x_1248_, v___x_1252_);
v_j_1254_ = lean_usize_to_nat(v___x_1253_);
v___x_1255_ = lean_array_get_borrowed(v___x_1251_, v_es_1250_, v_j_1254_);
lean_dec(v_j_1254_);
switch(lean_obj_tag(v___x_1255_))
{
case 0:
{
lean_object* v_key_1256_; uint8_t v___x_1257_; 
v_key_1256_ = lean_ctor_get(v___x_1255_, 0);
v___x_1257_ = lean_name_eq(v_x_1249_, v_key_1256_);
return v___x_1257_;
}
case 1:
{
lean_object* v_node_1258_; size_t v___x_1259_; size_t v___x_1260_; 
v_node_1258_ = lean_ctor_get(v___x_1255_, 0);
v___x_1259_ = ((size_t)5ULL);
v___x_1260_ = lean_usize_shift_right(v_x_1248_, v___x_1259_);
v_x_1247_ = v_node_1258_;
v_x_1248_ = v___x_1260_;
goto _start;
}
default: 
{
uint8_t v___x_1262_; 
v___x_1262_ = 0;
return v___x_1262_;
}
}
}
else
{
lean_object* v_ks_1263_; lean_object* v___x_1264_; uint8_t v___x_1265_; 
v_ks_1263_ = lean_ctor_get(v_x_1247_, 0);
v___x_1264_ = lean_unsigned_to_nat(0u);
v___x_1265_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___redArg(v_ks_1263_, v___x_1264_, v_x_1249_);
return v___x_1265_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___redArg___boxed(lean_object* v_x_1266_, lean_object* v_x_1267_, lean_object* v_x_1268_){
_start:
{
size_t v_x_327__boxed_1269_; uint8_t v_res_1270_; lean_object* v_r_1271_; 
v_x_327__boxed_1269_ = lean_unbox_usize(v_x_1267_);
lean_dec(v_x_1267_);
v_res_1270_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___redArg(v_x_1266_, v_x_327__boxed_1269_, v_x_1268_);
lean_dec(v_x_1268_);
lean_dec_ref(v_x_1266_);
v_r_1271_ = lean_box(v_res_1270_);
return v_r_1271_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___redArg(lean_object* v_x_1272_, lean_object* v_x_1273_){
_start:
{
uint64_t v___y_1275_; lean_object* v___x_1278_; 
v___x_1278_ = l_unsafeCast___redArg(v_x_1273_);
if (lean_obj_tag(v___x_1278_) == 0)
{
uint64_t v___x_1279_; 
v___x_1279_ = 1723ULL;
v___y_1275_ = v___x_1279_;
goto v___jp_1274_;
}
else
{
uint64_t v_hash_1280_; 
v_hash_1280_ = lean_ctor_get_uint64(v___x_1278_, sizeof(void*)*2);
lean_dec(v___x_1278_);
v___y_1275_ = v_hash_1280_;
goto v___jp_1274_;
}
v___jp_1274_:
{
size_t v___x_1276_; uint8_t v___x_1277_; 
v___x_1276_ = lean_uint64_to_usize(v___y_1275_);
v___x_1277_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___redArg(v_x_1272_, v___x_1276_, v_x_1273_);
return v___x_1277_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___redArg___boxed(lean_object* v_x_1281_, lean_object* v_x_1282_){
_start:
{
uint8_t v_res_1283_; lean_object* v_r_1284_; 
v_res_1283_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___redArg(v_x_1281_, v_x_1282_);
lean_dec(v_x_1282_);
lean_dec_ref(v_x_1281_);
v_r_1284_ = lean_box(v_res_1283_);
return v_r_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm___redArg(lean_object* v_thmName_1285_, lean_object* v_a_1286_){
_start:
{
lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v_env_1290_; lean_object* v___x_1291_; lean_object* v_asyncMode_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; uint8_t v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; 
v___x_1288_ = l_Lean_Meta_instInhabitedEqnsExtState_default;
v___x_1289_ = lean_st_ref_get(v_a_1286_);
v_env_1290_ = lean_ctor_get(v___x_1289_, 0);
lean_inc_ref(v_env_1290_);
lean_dec(v___x_1289_);
v___x_1291_ = l_Lean_Meta_eqnsExt;
v_asyncMode_1292_ = lean_ctor_get(v___x_1291_, 2);
v___x_1293_ = lean_obj_once(&l_Lean_Meta_isEqnThm_x3f___redArg___closed__0, &l_Lean_Meta_isEqnThm_x3f___redArg___closed__0_once, _init_l_Lean_Meta_isEqnThm_x3f___redArg___closed__0);
v___x_1294_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_1288_, v___x_1291_, v_env_1290_, v_asyncMode_1292_, v___x_1293_);
v___x_1295_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___redArg(v___x_1294_, v_thmName_1285_);
lean_dec(v___x_1294_);
v___x_1296_ = lean_box(v___x_1295_);
v___x_1297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1296_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm___redArg___boxed(lean_object* v_thmName_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_){
_start:
{
lean_object* v_res_1301_; 
v_res_1301_ = l_Lean_Meta_isEqnThm___redArg(v_thmName_1298_, v_a_1299_);
lean_dec(v_a_1299_);
lean_dec(v_thmName_1298_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm(lean_object* v_thmName_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_){
_start:
{
lean_object* v___x_1306_; 
v___x_1306_ = l_Lean_Meta_isEqnThm___redArg(v_thmName_1302_, v_a_1304_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isEqnThm___boxed(lean_object* v_thmName_1307_, lean_object* v_a_1308_, lean_object* v_a_1309_, lean_object* v_a_1310_){
_start:
{
lean_object* v_res_1311_; 
v_res_1311_ = l_Lean_Meta_isEqnThm(v_thmName_1307_, v_a_1308_, v_a_1309_);
lean_dec(v_a_1309_);
lean_dec_ref(v_a_1308_);
lean_dec(v_thmName_1307_);
return v_res_1311_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0(lean_object* v_00_u03b2_1312_, lean_object* v_x_1313_, lean_object* v_x_1314_){
_start:
{
uint8_t v___x_1315_; 
v___x_1315_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___redArg(v_x_1313_, v_x_1314_);
return v___x_1315_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0___boxed(lean_object* v_00_u03b2_1316_, lean_object* v_x_1317_, lean_object* v_x_1318_){
_start:
{
uint8_t v_res_1319_; lean_object* v_r_1320_; 
v_res_1319_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0(v_00_u03b2_1316_, v_x_1317_, v_x_1318_);
lean_dec(v_x_1318_);
lean_dec_ref(v_x_1317_);
v_r_1320_ = lean_box(v_res_1319_);
return v_r_1320_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0(lean_object* v_00_u03b2_1321_, lean_object* v_x_1322_, size_t v_x_1323_, lean_object* v_x_1324_){
_start:
{
uint8_t v___x_1325_; 
v___x_1325_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___redArg(v_x_1322_, v_x_1323_, v_x_1324_);
return v___x_1325_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1326_, lean_object* v_x_1327_, lean_object* v_x_1328_, lean_object* v_x_1329_){
_start:
{
size_t v_x_421__boxed_1330_; uint8_t v_res_1331_; lean_object* v_r_1332_; 
v_x_421__boxed_1330_ = lean_unbox_usize(v_x_1328_);
lean_dec(v_x_1328_);
v_res_1331_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0(v_00_u03b2_1326_, v_x_1327_, v_x_421__boxed_1330_, v_x_1329_);
lean_dec(v_x_1329_);
lean_dec_ref(v_x_1327_);
v_r_1332_ = lean_box(v_res_1331_);
return v_r_1332_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1333_, lean_object* v_keys_1334_, lean_object* v_vals_1335_, lean_object* v_heq_1336_, lean_object* v_i_1337_, lean_object* v_k_1338_){
_start:
{
uint8_t v___x_1339_; 
v___x_1339_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___redArg(v_keys_1334_, v_i_1337_, v_k_1338_);
return v___x_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1340_, lean_object* v_keys_1341_, lean_object* v_vals_1342_, lean_object* v_heq_1343_, lean_object* v_i_1344_, lean_object* v_k_1345_){
_start:
{
uint8_t v_res_1346_; lean_object* v_r_1347_; 
v_res_1346_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_isEqnThm_spec__0_spec__0_spec__1(v_00_u03b2_1340_, v_keys_1341_, v_vals_1342_, v_heq_1343_, v_i_1344_, v_k_1345_);
lean_dec(v_k_1345_);
lean_dec_ref(v_vals_1342_);
lean_dec_ref(v_keys_1341_);
v_r_1347_ = lean_box(v_res_1346_);
return v_r_1347_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_x_1348_, lean_object* v_x_1349_, lean_object* v_x_1350_, lean_object* v_x_1351_){
_start:
{
lean_object* v_ks_1352_; lean_object* v_vs_1353_; lean_object* v___x_1355_; uint8_t v_isShared_1356_; uint8_t v_isSharedCheck_1377_; 
v_ks_1352_ = lean_ctor_get(v_x_1348_, 0);
v_vs_1353_ = lean_ctor_get(v_x_1348_, 1);
v_isSharedCheck_1377_ = !lean_is_exclusive(v_x_1348_);
if (v_isSharedCheck_1377_ == 0)
{
v___x_1355_ = v_x_1348_;
v_isShared_1356_ = v_isSharedCheck_1377_;
goto v_resetjp_1354_;
}
else
{
lean_inc(v_vs_1353_);
lean_inc(v_ks_1352_);
lean_dec(v_x_1348_);
v___x_1355_ = lean_box(0);
v_isShared_1356_ = v_isSharedCheck_1377_;
goto v_resetjp_1354_;
}
v_resetjp_1354_:
{
lean_object* v___x_1357_; uint8_t v___x_1358_; 
v___x_1357_ = lean_array_get_size(v_ks_1352_);
v___x_1358_ = lean_nat_dec_lt(v_x_1349_, v___x_1357_);
if (v___x_1358_ == 0)
{
lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1362_; 
lean_dec(v_x_1349_);
v___x_1359_ = lean_array_push(v_ks_1352_, v_x_1350_);
v___x_1360_ = lean_array_push(v_vs_1353_, v_x_1351_);
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 1, v___x_1360_);
lean_ctor_set(v___x_1355_, 0, v___x_1359_);
v___x_1362_ = v___x_1355_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v___x_1359_);
lean_ctor_set(v_reuseFailAlloc_1363_, 1, v___x_1360_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
else
{
lean_object* v_k_x27_1364_; uint8_t v___x_1365_; 
v_k_x27_1364_ = lean_array_fget_borrowed(v_ks_1352_, v_x_1349_);
v___x_1365_ = lean_name_eq(v_x_1350_, v_k_x27_1364_);
if (v___x_1365_ == 0)
{
lean_object* v___x_1367_; 
if (v_isShared_1356_ == 0)
{
v___x_1367_ = v___x_1355_;
goto v_reusejp_1366_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v_ks_1352_);
lean_ctor_set(v_reuseFailAlloc_1371_, 1, v_vs_1353_);
v___x_1367_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1366_;
}
v_reusejp_1366_:
{
lean_object* v___x_1368_; lean_object* v___x_1369_; 
v___x_1368_ = lean_unsigned_to_nat(1u);
v___x_1369_ = lean_nat_add(v_x_1349_, v___x_1368_);
lean_dec(v_x_1349_);
v_x_1348_ = v___x_1367_;
v_x_1349_ = v___x_1369_;
goto _start;
}
}
else
{
lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1375_; 
v___x_1372_ = lean_array_fset(v_ks_1352_, v_x_1349_, v_x_1350_);
v___x_1373_ = lean_array_fset(v_vs_1353_, v_x_1349_, v_x_1351_);
lean_dec(v_x_1349_);
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 1, v___x_1373_);
lean_ctor_set(v___x_1355_, 0, v___x_1372_);
v___x_1375_ = v___x_1355_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v___x_1372_);
lean_ctor_set(v_reuseFailAlloc_1376_, 1, v___x_1373_);
v___x_1375_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
return v___x_1375_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1___redArg(lean_object* v_n_1378_, lean_object* v_k_1379_, lean_object* v_v_1380_){
_start:
{
lean_object* v___x_1381_; lean_object* v___x_1382_; 
v___x_1381_ = lean_unsigned_to_nat(0u);
v___x_1382_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1_spec__3___redArg(v_n_1378_, v___x_1381_, v_k_1379_, v_v_1380_);
return v___x_1382_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1383_ = lean_box(0);
v___x_1384_ = l_unsafeCast___redArg(v___x_1383_);
return v___x_1384_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1385_; 
v___x_1385_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1385_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg(lean_object* v_x_1386_, size_t v_x_1387_, size_t v_x_1388_, lean_object* v_x_1389_, lean_object* v_x_1390_){
_start:
{
if (lean_obj_tag(v_x_1386_) == 0)
{
lean_object* v_es_1391_; size_t v___x_1392_; size_t v___x_1393_; lean_object* v_j_1394_; lean_object* v___x_1395_; uint8_t v___x_1396_; 
v_es_1391_ = lean_ctor_get(v_x_1386_, 0);
v___x_1392_ = ((size_t)31ULL);
v___x_1393_ = lean_usize_land(v_x_1387_, v___x_1392_);
v_j_1394_ = lean_usize_to_nat(v___x_1393_);
v___x_1395_ = lean_array_get_size(v_es_1391_);
v___x_1396_ = lean_nat_dec_lt(v_j_1394_, v___x_1395_);
if (v___x_1396_ == 0)
{
lean_dec(v_j_1394_);
lean_dec(v_x_1390_);
lean_dec(v_x_1389_);
return v_x_1386_;
}
else
{
lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1435_; 
lean_inc_ref(v_es_1391_);
v_isSharedCheck_1435_ = !lean_is_exclusive(v_x_1386_);
if (v_isSharedCheck_1435_ == 0)
{
lean_object* v_unused_1436_; 
v_unused_1436_ = lean_ctor_get(v_x_1386_, 0);
lean_dec(v_unused_1436_);
v___x_1398_ = v_x_1386_;
v_isShared_1399_ = v_isSharedCheck_1435_;
goto v_resetjp_1397_;
}
else
{
lean_dec(v_x_1386_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1435_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
lean_object* v_v_1400_; lean_object* v___x_1401_; lean_object* v_xs_x27_1402_; lean_object* v___y_1404_; 
v_v_1400_ = lean_array_fget(v_es_1391_, v_j_1394_);
v___x_1401_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__0);
v_xs_x27_1402_ = lean_array_fset(v_es_1391_, v_j_1394_, v___x_1401_);
switch(lean_obj_tag(v_v_1400_))
{
case 0:
{
lean_object* v_key_1409_; lean_object* v_val_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1420_; 
v_key_1409_ = lean_ctor_get(v_v_1400_, 0);
v_val_1410_ = lean_ctor_get(v_v_1400_, 1);
v_isSharedCheck_1420_ = !lean_is_exclusive(v_v_1400_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1412_ = v_v_1400_;
v_isShared_1413_ = v_isSharedCheck_1420_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_val_1410_);
lean_inc(v_key_1409_);
lean_dec(v_v_1400_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1420_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
uint8_t v___x_1414_; 
v___x_1414_ = lean_name_eq(v_x_1389_, v_key_1409_);
if (v___x_1414_ == 0)
{
lean_object* v___x_1415_; lean_object* v___x_1416_; 
lean_del_object(v___x_1412_);
v___x_1415_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1409_, v_val_1410_, v_x_1389_, v_x_1390_);
v___x_1416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1415_);
v___y_1404_ = v___x_1416_;
goto v___jp_1403_;
}
else
{
lean_object* v___x_1418_; 
lean_dec(v_val_1410_);
lean_dec(v_key_1409_);
if (v_isShared_1413_ == 0)
{
lean_ctor_set(v___x_1412_, 1, v_x_1390_);
lean_ctor_set(v___x_1412_, 0, v_x_1389_);
v___x_1418_ = v___x_1412_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v_x_1389_);
lean_ctor_set(v_reuseFailAlloc_1419_, 1, v_x_1390_);
v___x_1418_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
v___y_1404_ = v___x_1418_;
goto v___jp_1403_;
}
}
}
}
case 1:
{
lean_object* v_node_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1433_; 
v_node_1421_ = lean_ctor_get(v_v_1400_, 0);
v_isSharedCheck_1433_ = !lean_is_exclusive(v_v_1400_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1423_ = v_v_1400_;
v_isShared_1424_ = v_isSharedCheck_1433_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_node_1421_);
lean_dec(v_v_1400_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1433_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
size_t v___x_1425_; size_t v___x_1426_; size_t v___x_1427_; size_t v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1431_; 
v___x_1425_ = ((size_t)5ULL);
v___x_1426_ = lean_usize_shift_right(v_x_1387_, v___x_1425_);
v___x_1427_ = ((size_t)1ULL);
v___x_1428_ = lean_usize_add(v_x_1388_, v___x_1427_);
v___x_1429_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg(v_node_1421_, v___x_1426_, v___x_1428_, v_x_1389_, v_x_1390_);
if (v_isShared_1424_ == 0)
{
lean_ctor_set(v___x_1423_, 0, v___x_1429_);
v___x_1431_ = v___x_1423_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v___x_1429_);
v___x_1431_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
v___y_1404_ = v___x_1431_;
goto v___jp_1403_;
}
}
}
default: 
{
lean_object* v___x_1434_; 
v___x_1434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1434_, 0, v_x_1389_);
lean_ctor_set(v___x_1434_, 1, v_x_1390_);
v___y_1404_ = v___x_1434_;
goto v___jp_1403_;
}
}
v___jp_1403_:
{
lean_object* v___x_1405_; lean_object* v___x_1407_; 
v___x_1405_ = lean_array_fset(v_xs_x27_1402_, v_j_1394_, v___y_1404_);
lean_dec(v_j_1394_);
if (v_isShared_1399_ == 0)
{
lean_ctor_set(v___x_1398_, 0, v___x_1405_);
v___x_1407_ = v___x_1398_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1408_; 
v_reuseFailAlloc_1408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1408_, 0, v___x_1405_);
v___x_1407_ = v_reuseFailAlloc_1408_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
return v___x_1407_;
}
}
}
}
}
else
{
lean_object* v_ks_1437_; lean_object* v_vs_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1456_; 
v_ks_1437_ = lean_ctor_get(v_x_1386_, 0);
v_vs_1438_ = lean_ctor_get(v_x_1386_, 1);
v_isSharedCheck_1456_ = !lean_is_exclusive(v_x_1386_);
if (v_isSharedCheck_1456_ == 0)
{
v___x_1440_ = v_x_1386_;
v_isShared_1441_ = v_isSharedCheck_1456_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_vs_1438_);
lean_inc(v_ks_1437_);
lean_dec(v_x_1386_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1456_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1443_; 
if (v_isShared_1441_ == 0)
{
v___x_1443_ = v___x_1440_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v_ks_1437_);
lean_ctor_set(v_reuseFailAlloc_1455_, 1, v_vs_1438_);
v___x_1443_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
lean_object* v_newNode_1444_; size_t v___x_1445_; uint8_t v___x_1446_; 
v_newNode_1444_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1___redArg(v___x_1443_, v_x_1389_, v_x_1390_);
v___x_1445_ = ((size_t)7ULL);
v___x_1446_ = lean_usize_dec_le(v___x_1445_, v_x_1388_);
if (v___x_1446_ == 0)
{
lean_object* v___x_1447_; lean_object* v___x_1448_; uint8_t v___x_1449_; 
v___x_1447_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1444_);
v___x_1448_ = lean_unsigned_to_nat(4u);
v___x_1449_ = lean_nat_dec_lt(v___x_1447_, v___x_1448_);
lean_dec(v___x_1447_);
if (v___x_1449_ == 0)
{
lean_object* v_ks_1450_; lean_object* v_vs_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; 
v_ks_1450_ = lean_ctor_get(v_newNode_1444_, 0);
lean_inc_ref(v_ks_1450_);
v_vs_1451_ = lean_ctor_get(v_newNode_1444_, 1);
lean_inc_ref(v_vs_1451_);
lean_dec_ref(v_newNode_1444_);
v___x_1452_ = lean_unsigned_to_nat(0u);
v___x_1453_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___closed__1);
v___x_1454_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___redArg(v_x_1388_, v_ks_1450_, v_vs_1451_, v___x_1452_, v___x_1453_);
lean_dec_ref(v_vs_1451_);
lean_dec_ref(v_ks_1450_);
return v___x_1454_;
}
else
{
return v_newNode_1444_;
}
}
else
{
return v_newNode_1444_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___redArg(size_t v_depth_1457_, lean_object* v_keys_1458_, lean_object* v_vals_1459_, lean_object* v_i_1460_, lean_object* v_entries_1461_){
_start:
{
lean_object* v___x_1462_; uint8_t v___x_1463_; 
v___x_1462_ = lean_array_get_size(v_keys_1458_);
v___x_1463_ = lean_nat_dec_lt(v_i_1460_, v___x_1462_);
if (v___x_1463_ == 0)
{
lean_dec(v_i_1460_);
return v_entries_1461_;
}
else
{
lean_object* v_k_1464_; lean_object* v_v_1465_; uint64_t v___y_1467_; lean_object* v___x_1478_; 
v_k_1464_ = lean_array_fget_borrowed(v_keys_1458_, v_i_1460_);
v_v_1465_ = lean_array_fget_borrowed(v_vals_1459_, v_i_1460_);
v___x_1478_ = l_unsafeCast___redArg(v_k_1464_);
if (lean_obj_tag(v___x_1478_) == 0)
{
uint64_t v___x_1479_; 
v___x_1479_ = 1723ULL;
v___y_1467_ = v___x_1479_;
goto v___jp_1466_;
}
else
{
uint64_t v_hash_1480_; 
v_hash_1480_ = lean_ctor_get_uint64(v___x_1478_, sizeof(void*)*2);
lean_dec(v___x_1478_);
v___y_1467_ = v_hash_1480_;
goto v___jp_1466_;
}
v___jp_1466_:
{
size_t v_h_1468_; size_t v___x_1469_; lean_object* v___x_1470_; size_t v___x_1471_; size_t v___x_1472_; size_t v___x_1473_; size_t v_h_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; 
v_h_1468_ = lean_uint64_to_usize(v___y_1467_);
v___x_1469_ = ((size_t)5ULL);
v___x_1470_ = lean_unsigned_to_nat(1u);
v___x_1471_ = ((size_t)1ULL);
v___x_1472_ = lean_usize_sub(v_depth_1457_, v___x_1471_);
v___x_1473_ = lean_usize_mul(v___x_1469_, v___x_1472_);
v_h_1474_ = lean_usize_shift_right(v_h_1468_, v___x_1473_);
v___x_1475_ = lean_nat_add(v_i_1460_, v___x_1470_);
lean_dec(v_i_1460_);
lean_inc(v_v_1465_);
lean_inc(v_k_1464_);
v___x_1476_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg(v_entries_1461_, v_h_1474_, v_depth_1457_, v_k_1464_, v_v_1465_);
v_i_1460_ = v___x_1475_;
v_entries_1461_ = v___x_1476_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_1481_, lean_object* v_keys_1482_, lean_object* v_vals_1483_, lean_object* v_i_1484_, lean_object* v_entries_1485_){
_start:
{
size_t v_depth_boxed_1486_; lean_object* v_res_1487_; 
v_depth_boxed_1486_ = lean_unbox_usize(v_depth_1481_);
lean_dec(v_depth_1481_);
v_res_1487_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___redArg(v_depth_boxed_1486_, v_keys_1482_, v_vals_1483_, v_i_1484_, v_entries_1485_);
lean_dec_ref(v_vals_1483_);
lean_dec_ref(v_keys_1482_);
return v_res_1487_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg___boxed(lean_object* v_x_1488_, lean_object* v_x_1489_, lean_object* v_x_1490_, lean_object* v_x_1491_, lean_object* v_x_1492_){
_start:
{
size_t v_x_641__boxed_1493_; size_t v_x_642__boxed_1494_; lean_object* v_res_1495_; 
v_x_641__boxed_1493_ = lean_unbox_usize(v_x_1489_);
lean_dec(v_x_1489_);
v_x_642__boxed_1494_ = lean_unbox_usize(v_x_1490_);
lean_dec(v_x_1490_);
v_res_1495_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg(v_x_1488_, v_x_641__boxed_1493_, v_x_642__boxed_1494_, v_x_1491_, v_x_1492_);
return v_res_1495_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0___redArg(lean_object* v_x_1496_, lean_object* v_x_1497_, lean_object* v_x_1498_){
_start:
{
uint64_t v___y_1500_; lean_object* v___x_1504_; 
v___x_1504_ = l_unsafeCast___redArg(v_x_1497_);
if (lean_obj_tag(v___x_1504_) == 0)
{
uint64_t v___x_1505_; 
v___x_1505_ = 1723ULL;
v___y_1500_ = v___x_1505_;
goto v___jp_1499_;
}
else
{
uint64_t v_hash_1506_; 
v_hash_1506_ = lean_ctor_get_uint64(v___x_1504_, sizeof(void*)*2);
lean_dec(v___x_1504_);
v___y_1500_ = v_hash_1506_;
goto v___jp_1499_;
}
v___jp_1499_:
{
size_t v___x_1501_; size_t v___x_1502_; lean_object* v___x_1503_; 
v___x_1501_ = lean_uint64_to_usize(v___y_1500_);
v___x_1502_ = ((size_t)1ULL);
v___x_1503_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg(v_x_1496_, v___x_1501_, v___x_1502_, v_x_1497_, v_x_1498_);
return v___x_1503_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__1(lean_object* v_declName_1507_, lean_object* v_as_1508_, size_t v_i_1509_, size_t v_stop_1510_, lean_object* v_b_1511_){
_start:
{
uint8_t v___x_1512_; 
v___x_1512_ = lean_usize_dec_eq(v_i_1509_, v_stop_1510_);
if (v___x_1512_ == 0)
{
lean_object* v___x_1513_; lean_object* v___x_1514_; size_t v___x_1515_; size_t v___x_1516_; 
v___x_1513_ = lean_array_uget_borrowed(v_as_1508_, v_i_1509_);
lean_inc(v_declName_1507_);
lean_inc(v___x_1513_);
v___x_1514_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0___redArg(v_b_1511_, v___x_1513_, v_declName_1507_);
v___x_1515_ = ((size_t)1ULL);
v___x_1516_ = lean_usize_add(v_i_1509_, v___x_1515_);
v_i_1509_ = v___x_1516_;
v_b_1511_ = v___x_1514_;
goto _start;
}
else
{
lean_dec(v_declName_1507_);
return v_b_1511_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__1___boxed(lean_object* v_declName_1518_, lean_object* v_as_1519_, lean_object* v_i_1520_, lean_object* v_stop_1521_, lean_object* v_b_1522_){
_start:
{
size_t v_i_boxed_1523_; size_t v_stop_boxed_1524_; lean_object* v_res_1525_; 
v_i_boxed_1523_ = lean_unbox_usize(v_i_1520_);
lean_dec(v_i_1520_);
v_stop_boxed_1524_ = lean_unbox_usize(v_stop_1521_);
lean_dec(v_stop_1521_);
v_res_1525_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__1(v_declName_1518_, v_as_1519_, v_i_boxed_1523_, v_stop_boxed_1524_, v_b_1522_);
lean_dec_ref(v_as_1519_);
return v_res_1525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___lam__0(lean_object* v_eqThms_1526_, lean_object* v_declName_1527_, lean_object* v_s_1528_){
_start:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; uint8_t v___x_1531_; 
v___x_1529_ = lean_unsigned_to_nat(0u);
v___x_1530_ = lean_array_get_size(v_eqThms_1526_);
v___x_1531_ = lean_nat_dec_lt(v___x_1529_, v___x_1530_);
if (v___x_1531_ == 0)
{
lean_dec(v_declName_1527_);
return v_s_1528_;
}
else
{
uint8_t v___x_1532_; 
v___x_1532_ = lean_nat_dec_le(v___x_1530_, v___x_1530_);
if (v___x_1532_ == 0)
{
if (v___x_1531_ == 0)
{
lean_dec(v_declName_1527_);
return v_s_1528_;
}
else
{
size_t v___x_1533_; size_t v___x_1534_; lean_object* v___x_1535_; 
v___x_1533_ = ((size_t)0ULL);
v___x_1534_ = lean_usize_of_nat(v___x_1530_);
v___x_1535_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__1(v_declName_1527_, v_eqThms_1526_, v___x_1533_, v___x_1534_, v_s_1528_);
return v___x_1535_;
}
}
else
{
size_t v___x_1536_; size_t v___x_1537_; lean_object* v___x_1538_; 
v___x_1536_ = ((size_t)0ULL);
v___x_1537_ = lean_usize_of_nat(v___x_1530_);
v___x_1538_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__1(v_declName_1527_, v_eqThms_1526_, v___x_1536_, v___x_1537_, v_s_1528_);
return v___x_1538_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___lam__0___boxed(lean_object* v_eqThms_1539_, lean_object* v_declName_1540_, lean_object* v_s_1541_){
_start:
{
lean_object* v_res_1542_; 
v_res_1542_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___lam__0(v_eqThms_1539_, v_declName_1540_, v_s_1541_);
lean_dec_ref(v_eqThms_1539_);
return v_res_1542_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg(lean_object* v_declName_1543_, lean_object* v_eqThms_1544_, lean_object* v_a_1545_){
_start:
{
lean_object* v___f_1547_; lean_object* v___x_1548_; lean_object* v_env_1549_; lean_object* v_nextMacroScope_1550_; lean_object* v_ngen_1551_; lean_object* v_auxDeclNGen_1552_; lean_object* v_traceState_1553_; lean_object* v_messages_1554_; lean_object* v_infoState_1555_; lean_object* v_snapshotTasks_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1571_; 
v___f_1547_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1547_, 0, v_eqThms_1544_);
lean_closure_set(v___f_1547_, 1, v_declName_1543_);
v___x_1548_ = lean_st_ref_take(v_a_1545_);
v_env_1549_ = lean_ctor_get(v___x_1548_, 0);
v_nextMacroScope_1550_ = lean_ctor_get(v___x_1548_, 1);
v_ngen_1551_ = lean_ctor_get(v___x_1548_, 2);
v_auxDeclNGen_1552_ = lean_ctor_get(v___x_1548_, 3);
v_traceState_1553_ = lean_ctor_get(v___x_1548_, 4);
v_messages_1554_ = lean_ctor_get(v___x_1548_, 6);
v_infoState_1555_ = lean_ctor_get(v___x_1548_, 7);
v_snapshotTasks_1556_ = lean_ctor_get(v___x_1548_, 8);
v_isSharedCheck_1571_ = !lean_is_exclusive(v___x_1548_);
if (v_isSharedCheck_1571_ == 0)
{
lean_object* v_unused_1572_; 
v_unused_1572_ = lean_ctor_get(v___x_1548_, 5);
lean_dec(v_unused_1572_);
v___x_1558_ = v___x_1548_;
v_isShared_1559_ = v_isSharedCheck_1571_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_snapshotTasks_1556_);
lean_inc(v_infoState_1555_);
lean_inc(v_messages_1554_);
lean_inc(v_traceState_1553_);
lean_inc(v_auxDeclNGen_1552_);
lean_inc(v_ngen_1551_);
lean_inc(v_nextMacroScope_1550_);
lean_inc(v_env_1549_);
lean_dec(v___x_1548_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1571_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1560_; lean_object* v_asyncMode_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1567_; 
v___x_1560_ = l_Lean_Meta_eqnsExt;
v_asyncMode_1561_ = lean_ctor_get(v___x_1560_, 2);
v___x_1562_ = lean_box(0);
v___x_1563_ = lean_obj_once(&l_Lean_Meta_isEqnThm_x3f___redArg___closed__0, &l_Lean_Meta_isEqnThm_x3f___redArg___closed__0_once, _init_l_Lean_Meta_isEqnThm_x3f___redArg___closed__0);
v___x_1564_ = l_Lean_EnvExtension_modifyState___redArg(v___x_1560_, v_env_1549_, v___f_1547_, v_asyncMode_1561_, v___x_1563_);
v___x_1565_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__1, &l_Lean_Meta_withEqnOptions___redArg___closed__1_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__1);
if (v_isShared_1559_ == 0)
{
lean_ctor_set(v___x_1558_, 5, v___x_1565_);
lean_ctor_set(v___x_1558_, 0, v___x_1564_);
v___x_1567_ = v___x_1558_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v___x_1564_);
lean_ctor_set(v_reuseFailAlloc_1570_, 1, v_nextMacroScope_1550_);
lean_ctor_set(v_reuseFailAlloc_1570_, 2, v_ngen_1551_);
lean_ctor_set(v_reuseFailAlloc_1570_, 3, v_auxDeclNGen_1552_);
lean_ctor_set(v_reuseFailAlloc_1570_, 4, v_traceState_1553_);
lean_ctor_set(v_reuseFailAlloc_1570_, 5, v___x_1565_);
lean_ctor_set(v_reuseFailAlloc_1570_, 6, v_messages_1554_);
lean_ctor_set(v_reuseFailAlloc_1570_, 7, v_infoState_1555_);
lean_ctor_set(v_reuseFailAlloc_1570_, 8, v_snapshotTasks_1556_);
v___x_1567_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; 
v___x_1568_ = lean_st_ref_put(v_a_1545_, v___x_1567_);
v___x_1569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1569_, 0, v___x_1562_);
return v___x_1569_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg___boxed(lean_object* v_declName_1573_, lean_object* v_eqThms_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_){
_start:
{
lean_object* v_res_1577_; 
v_res_1577_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg(v_declName_1573_, v_eqThms_1574_, v_a_1575_);
lean_dec(v_a_1575_);
return v_res_1577_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms(lean_object* v_declName_1578_, lean_object* v_eqThms_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_){
_start:
{
lean_object* v___x_1583_; 
v___x_1583_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg(v_declName_1578_, v_eqThms_1579_, v_a_1581_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___boxed(lean_object* v_declName_1584_, lean_object* v_eqThms_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_, lean_object* v_a_1588_){
_start:
{
lean_object* v_res_1589_; 
v_res_1589_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms(v_declName_1584_, v_eqThms_1585_, v_a_1586_, v_a_1587_);
lean_dec(v_a_1587_);
lean_dec_ref(v_a_1586_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0(lean_object* v_00_u03b2_1590_, lean_object* v_x_1591_, lean_object* v_x_1592_, lean_object* v_x_1593_){
_start:
{
lean_object* v___x_1594_; 
v___x_1594_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0___redArg(v_x_1591_, v_x_1592_, v_x_1593_);
return v___x_1594_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0(lean_object* v_00_u03b2_1595_, lean_object* v_x_1596_, size_t v_x_1597_, size_t v_x_1598_, lean_object* v_x_1599_, lean_object* v_x_1600_){
_start:
{
lean_object* v___x_1601_; 
v___x_1601_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___redArg(v_x_1596_, v_x_1597_, v_x_1598_, v_x_1599_, v_x_1600_);
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1602_, lean_object* v_x_1603_, lean_object* v_x_1604_, lean_object* v_x_1605_, lean_object* v_x_1606_, lean_object* v_x_1607_){
_start:
{
size_t v_x_911__boxed_1608_; size_t v_x_912__boxed_1609_; lean_object* v_res_1610_; 
v_x_911__boxed_1608_ = lean_unbox_usize(v_x_1604_);
lean_dec(v_x_1604_);
v_x_912__boxed_1609_ = lean_unbox_usize(v_x_1605_);
lean_dec(v_x_1605_);
v_res_1610_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0(v_00_u03b2_1602_, v_x_1603_, v_x_911__boxed_1608_, v_x_912__boxed_1609_, v_x_1606_, v_x_1607_);
return v_res_1610_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1611_, lean_object* v_n_1612_, lean_object* v_k_1613_, lean_object* v_v_1614_){
_start:
{
lean_object* v___x_1615_; 
v___x_1615_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1___redArg(v_n_1612_, v_k_1613_, v_v_1614_);
return v___x_1615_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1616_, size_t v_depth_1617_, lean_object* v_keys_1618_, lean_object* v_vals_1619_, lean_object* v_heq_1620_, lean_object* v_i_1621_, lean_object* v_entries_1622_){
_start:
{
lean_object* v___x_1623_; 
v___x_1623_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___redArg(v_depth_1617_, v_keys_1618_, v_vals_1619_, v_i_1621_, v_entries_1622_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1624_, lean_object* v_depth_1625_, lean_object* v_keys_1626_, lean_object* v_vals_1627_, lean_object* v_heq_1628_, lean_object* v_i_1629_, lean_object* v_entries_1630_){
_start:
{
size_t v_depth_boxed_1631_; lean_object* v_res_1632_; 
v_depth_boxed_1631_ = lean_unbox_usize(v_depth_1625_);
lean_dec(v_depth_1625_);
v_res_1632_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__2(v_00_u03b2_1624_, v_depth_boxed_1631_, v_keys_1626_, v_vals_1627_, v_heq_1628_, v_i_1629_, v_entries_1630_);
lean_dec_ref(v_vals_1627_);
lean_dec_ref(v_keys_1626_);
return v_res_1632_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_1633_, lean_object* v_x_1634_, lean_object* v_x_1635_, lean_object* v_x_1636_, lean_object* v_x_1637_){
_start:
{
lean_object* v___x_1638_; 
v___x_1638_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms_spec__0_spec__0_spec__1_spec__3___redArg(v_x_1634_, v_x_1635_, v_x_1636_, v_x_1637_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___redArg(lean_object* v_declName_1639_, lean_object* v_env_1640_, lean_object* v_idx_1641_, lean_object* v_eqs_1642_){
_start:
{
lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v_nextEq_1649_; uint8_t v___x_1650_; 
v___x_1644_ = ((lean_object*)(l_Lean_Meta_eqnThmSuffixBasePrefix___closed__0));
v___x_1645_ = lean_unsigned_to_nat(1u);
v___x_1646_ = lean_nat_add(v_idx_1641_, v___x_1645_);
lean_dec(v_idx_1641_);
lean_inc(v___x_1646_);
v___x_1647_ = l_Nat_reprFast(v___x_1646_);
v___x_1648_ = lean_string_append(v___x_1644_, v___x_1647_);
lean_dec_ref(v___x_1647_);
lean_inc(v_declName_1639_);
lean_inc_ref(v_env_1640_);
v_nextEq_1649_ = l_Lean_Meta_mkEqLikeNameFor(v_env_1640_, v_declName_1639_, v___x_1648_);
v___x_1650_ = l_Lean_Environment_containsOnBranch(v_env_1640_, v_nextEq_1649_);
if (v___x_1650_ == 0)
{
lean_object* v___x_1651_; 
lean_dec(v_nextEq_1649_);
lean_dec(v___x_1646_);
lean_dec_ref(v_env_1640_);
lean_dec(v_declName_1639_);
v___x_1651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1651_, 0, v_eqs_1642_);
return v___x_1651_;
}
else
{
lean_object* v___x_1652_; 
v___x_1652_ = lean_array_push(v_eqs_1642_, v_nextEq_1649_);
v_idx_1641_ = v___x_1646_;
v_eqs_1642_ = v___x_1652_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___redArg___boxed(lean_object* v_declName_1654_, lean_object* v_env_1655_, lean_object* v_idx_1656_, lean_object* v_eqs_1657_, lean_object* v_a_1658_){
_start:
{
lean_object* v_res_1659_; 
v_res_1659_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___redArg(v_declName_1654_, v_env_1655_, v_idx_1656_, v_eqs_1657_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop(lean_object* v_declName_1660_, lean_object* v_env_1661_, lean_object* v_idx_1662_, lean_object* v_eqs_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_){
_start:
{
lean_object* v___x_1669_; 
v___x_1669_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___redArg(v_declName_1660_, v_env_1661_, v_idx_1662_, v_eqs_1663_);
return v___x_1669_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___boxed(lean_object* v_declName_1670_, lean_object* v_env_1671_, lean_object* v_idx_1672_, lean_object* v_eqs_1673_, lean_object* v_a_1674_, lean_object* v_a_1675_, lean_object* v_a_1676_, lean_object* v_a_1677_, lean_object* v_a_1678_){
_start:
{
lean_object* v_res_1679_; 
v_res_1679_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop(v_declName_1670_, v_env_1671_, v_idx_1672_, v_eqs_1673_, v_a_1674_, v_a_1675_, v_a_1676_, v_a_1677_);
lean_dec(v_a_1677_);
lean_dec_ref(v_a_1676_);
lean_dec(v_a_1675_);
lean_dec_ref(v_a_1674_);
return v_res_1679_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f___redArg(lean_object* v_declName_1680_, lean_object* v_a_1681_){
_start:
{
lean_object* v___x_1683_; lean_object* v_env_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; uint8_t v___x_1687_; uint8_t v___x_1688_; 
v___x_1683_ = lean_st_ref_get(v_a_1681_);
v_env_1684_ = lean_ctor_get(v___x_1683_, 0);
lean_inc_ref_n(v_env_1684_, 3);
lean_dec(v___x_1683_);
v___x_1685_ = ((lean_object*)(l_Lean_Meta_eqn1ThmSuffix___closed__0));
lean_inc(v_declName_1680_);
v___x_1686_ = l_Lean_Meta_mkEqLikeNameFor(v_env_1684_, v_declName_1680_, v___x_1685_);
v___x_1687_ = 1;
lean_inc(v___x_1686_);
v___x_1688_ = l_Lean_Environment_contains(v_env_1684_, v___x_1686_, v___x_1687_);
if (v___x_1688_ == 0)
{
lean_object* v___x_1689_; lean_object* v___x_1690_; 
lean_dec(v___x_1686_);
lean_dec_ref(v_env_1684_);
lean_dec(v_declName_1680_);
v___x_1689_ = lean_box(0);
v___x_1690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1690_, 0, v___x_1689_);
return v___x_1690_;
}
else
{
lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; 
v___x_1691_ = lean_unsigned_to_nat(1u);
v___x_1692_ = lean_mk_empty_array_with_capacity(v___x_1691_);
v___x_1693_ = lean_array_push(v___x_1692_, v___x_1686_);
lean_inc(v_declName_1680_);
v___x_1694_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f_loop___redArg(v_declName_1680_, v_env_1684_, v___x_1691_, v___x_1693_);
if (lean_obj_tag(v___x_1694_) == 0)
{
lean_object* v_a_1695_; lean_object* v___x_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1704_; 
v_a_1695_ = lean_ctor_get(v___x_1694_, 0);
lean_inc_n(v_a_1695_, 2);
lean_dec_ref_known(v___x_1694_, 1);
v___x_1696_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg(v_declName_1680_, v_a_1695_, v_a_1681_);
v_isSharedCheck_1704_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1704_ == 0)
{
lean_object* v_unused_1705_; 
v_unused_1705_ = lean_ctor_get(v___x_1696_, 0);
lean_dec(v_unused_1705_);
v___x_1698_ = v___x_1696_;
v_isShared_1699_ = v_isSharedCheck_1704_;
goto v_resetjp_1697_;
}
else
{
lean_dec(v___x_1696_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1704_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
lean_object* v___x_1700_; lean_object* v___x_1702_; 
v___x_1700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1700_, 0, v_a_1695_);
if (v_isShared_1699_ == 0)
{
lean_ctor_set(v___x_1698_, 0, v___x_1700_);
v___x_1702_ = v___x_1698_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v___x_1700_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
}
}
}
else
{
lean_object* v_a_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1713_; 
lean_dec(v_declName_1680_);
v_a_1706_ = lean_ctor_get(v___x_1694_, 0);
v_isSharedCheck_1713_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1708_ = v___x_1694_;
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_a_1706_);
lean_dec(v___x_1694_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1713_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v___x_1711_; 
if (v_isShared_1709_ == 0)
{
v___x_1711_ = v___x_1708_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v_a_1706_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
return v___x_1711_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f___redArg___boxed(lean_object* v_declName_1714_, lean_object* v_a_1715_, lean_object* v_a_1716_){
_start:
{
lean_object* v_res_1717_; 
v_res_1717_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f___redArg(v_declName_1714_, v_a_1715_);
lean_dec(v_a_1715_);
return v_res_1717_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f(lean_object* v_declName_1718_, lean_object* v_a_1719_, lean_object* v_a_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_){
_start:
{
lean_object* v___x_1724_; 
v___x_1724_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f___redArg(v_declName_1718_, v_a_1722_);
return v___x_1724_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f___boxed(lean_object* v_declName_1725_, lean_object* v_a_1726_, lean_object* v_a_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_){
_start:
{
lean_object* v_res_1731_; 
v_res_1731_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f(v_declName_1725_, v_a_1726_, v_a_1727_, v_a_1728_, v_a_1729_);
lean_dec(v_a_1729_);
lean_dec_ref(v_a_1728_);
lean_dec(v_a_1727_);
lean_dec_ref(v_a_1726_);
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg(lean_object* v_lctx_1732_, lean_object* v_localInsts_1733_, lean_object* v_x_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_){
_start:
{
lean_object* v___x_1740_; 
v___x_1740_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_1732_, v_localInsts_1733_, v_x_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_);
if (lean_obj_tag(v___x_1740_) == 0)
{
lean_object* v_a_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1748_; 
v_a_1741_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1748_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1748_ == 0)
{
v___x_1743_ = v___x_1740_;
v_isShared_1744_ = v_isSharedCheck_1748_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_a_1741_);
lean_dec(v___x_1740_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1748_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
lean_object* v___x_1746_; 
if (v_isShared_1744_ == 0)
{
v___x_1746_ = v___x_1743_;
goto v_reusejp_1745_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v_a_1741_);
v___x_1746_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1745_;
}
v_reusejp_1745_:
{
return v___x_1746_;
}
}
}
else
{
lean_object* v_a_1749_; lean_object* v___x_1751_; uint8_t v_isShared_1752_; uint8_t v_isSharedCheck_1756_; 
v_a_1749_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1756_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1751_ = v___x_1740_;
v_isShared_1752_ = v_isSharedCheck_1756_;
goto v_resetjp_1750_;
}
else
{
lean_inc(v_a_1749_);
lean_dec(v___x_1740_);
v___x_1751_ = lean_box(0);
v_isShared_1752_ = v_isSharedCheck_1756_;
goto v_resetjp_1750_;
}
v_resetjp_1750_:
{
lean_object* v___x_1754_; 
if (v_isShared_1752_ == 0)
{
v___x_1754_ = v___x_1751_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v_a_1749_);
v___x_1754_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
return v___x_1754_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg___boxed(lean_object* v_lctx_1757_, lean_object* v_localInsts_1758_, lean_object* v_x_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_){
_start:
{
lean_object* v_res_1765_; 
v_res_1765_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg(v_lctx_1757_, v_localInsts_1758_, v_x_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_);
lean_dec(v___y_1763_);
lean_dec_ref(v___y_1762_);
lean_dec(v___y_1761_);
lean_dec_ref(v___y_1760_);
return v_res_1765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1(lean_object* v_00_u03b1_1766_, lean_object* v_lctx_1767_, lean_object* v_localInsts_1768_, lean_object* v_x_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_){
_start:
{
lean_object* v___x_1775_; 
v___x_1775_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg(v_lctx_1767_, v_localInsts_1768_, v_x_1769_, v___y_1770_, v___y_1771_, v___y_1772_, v___y_1773_);
return v___x_1775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___boxed(lean_object* v_00_u03b1_1776_, lean_object* v_lctx_1777_, lean_object* v_localInsts_1778_, lean_object* v_x_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_){
_start:
{
lean_object* v_res_1785_; 
v_res_1785_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1(v_00_u03b1_1776_, v_lctx_1777_, v_localInsts_1778_, v_x_1779_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_);
lean_dec(v___y_1783_);
lean_dec_ref(v___y_1782_);
lean_dec(v___y_1781_);
lean_dec_ref(v___y_1780_);
return v_res_1785_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg(lean_object* v_declName_1789_, lean_object* v_as_x27_1790_, lean_object* v_b_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_){
_start:
{
if (lean_obj_tag(v_as_x27_1790_) == 0)
{
lean_object* v___x_1797_; 
lean_dec(v_declName_1789_);
v___x_1797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1797_, 0, v_b_1791_);
return v___x_1797_;
}
else
{
lean_object* v_head_1798_; lean_object* v_tail_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; 
lean_dec_ref(v_b_1791_);
v_head_1798_ = lean_ctor_get(v_as_x27_1790_, 0);
v_tail_1799_ = lean_ctor_get(v_as_x27_1790_, 1);
v___x_1800_ = lean_box(0);
v___x_1801_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg___closed__0));
lean_inc(v_head_1798_);
lean_inc(v___y_1795_);
lean_inc_ref(v___y_1794_);
lean_inc(v___y_1793_);
lean_inc_ref(v___y_1792_);
lean_inc(v_declName_1789_);
v___x_1802_ = lean_apply_6(v_head_1798_, v_declName_1789_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_, lean_box(0));
if (lean_obj_tag(v___x_1802_) == 0)
{
lean_object* v_a_1803_; 
v_a_1803_ = lean_ctor_get(v___x_1802_, 0);
lean_inc(v_a_1803_);
lean_dec_ref_known(v___x_1802_, 1);
if (lean_obj_tag(v_a_1803_) == 1)
{
lean_object* v_val_1804_; lean_object* v___x_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1814_; 
v_val_1804_ = lean_ctor_get(v_a_1803_, 0);
lean_inc(v_val_1804_);
v___x_1805_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_registerEqnThms___redArg(v_declName_1789_, v_val_1804_, v___y_1795_);
v_isSharedCheck_1814_ = !lean_is_exclusive(v___x_1805_);
if (v_isSharedCheck_1814_ == 0)
{
lean_object* v_unused_1815_; 
v_unused_1815_ = lean_ctor_get(v___x_1805_, 0);
lean_dec(v_unused_1815_);
v___x_1807_ = v___x_1805_;
v_isShared_1808_ = v_isSharedCheck_1814_;
goto v_resetjp_1806_;
}
else
{
lean_dec(v___x_1805_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1814_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1812_; 
v___x_1809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1809_, 0, v_a_1803_);
v___x_1810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1809_);
lean_ctor_set(v___x_1810_, 1, v___x_1800_);
if (v_isShared_1808_ == 0)
{
lean_ctor_set(v___x_1807_, 0, v___x_1810_);
v___x_1812_ = v___x_1807_;
goto v_reusejp_1811_;
}
else
{
lean_object* v_reuseFailAlloc_1813_; 
v_reuseFailAlloc_1813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1813_, 0, v___x_1810_);
v___x_1812_ = v_reuseFailAlloc_1813_;
goto v_reusejp_1811_;
}
v_reusejp_1811_:
{
return v___x_1812_;
}
}
}
else
{
lean_dec(v_a_1803_);
v_as_x27_1790_ = v_tail_1799_;
v_b_1791_ = v___x_1801_;
goto _start;
}
}
else
{
lean_object* v_a_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1824_; 
lean_dec(v_declName_1789_);
v_a_1817_ = lean_ctor_get(v___x_1802_, 0);
v_isSharedCheck_1824_ = !lean_is_exclusive(v___x_1802_);
if (v_isSharedCheck_1824_ == 0)
{
v___x_1819_ = v___x_1802_;
v_isShared_1820_ = v_isSharedCheck_1824_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_a_1817_);
lean_dec(v___x_1802_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1824_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
lean_object* v___x_1822_; 
if (v_isShared_1820_ == 0)
{
v___x_1822_ = v___x_1819_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v_a_1817_);
v___x_1822_ = v_reuseFailAlloc_1823_;
goto v_reusejp_1821_;
}
v_reusejp_1821_:
{
return v___x_1822_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg___boxed(lean_object* v_declName_1825_, lean_object* v_as_x27_1826_, lean_object* v_b_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_){
_start:
{
lean_object* v_res_1833_; 
v_res_1833_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg(v_declName_1825_, v_as_x27_1826_, v_b_1827_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_);
lean_dec(v___y_1831_);
lean_dec_ref(v___y_1830_);
lean_dec(v___y_1829_);
lean_dec_ref(v___y_1828_);
lean_dec(v_as_x27_1826_);
return v_res_1833_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___lam__0(lean_object* v_declName_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_){
_start:
{
lean_object* v___x_1840_; 
lean_inc(v_declName_1834_);
v___x_1840_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_shouldGenerateEqnThms(v_declName_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_);
if (lean_obj_tag(v___x_1840_) == 0)
{
lean_object* v_a_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1878_; 
v_a_1841_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1878_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1878_ == 0)
{
v___x_1843_ = v___x_1840_;
v_isShared_1844_ = v_isSharedCheck_1878_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_a_1841_);
lean_dec(v___x_1840_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1878_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
uint8_t v___x_1845_; 
v___x_1845_ = lean_unbox(v_a_1841_);
lean_dec(v_a_1841_);
if (v___x_1845_ == 0)
{
lean_object* v___x_1846_; lean_object* v___x_1848_; 
lean_dec(v_declName_1834_);
v___x_1846_ = lean_box(0);
if (v_isShared_1844_ == 0)
{
lean_ctor_set(v___x_1843_, 0, v___x_1846_);
v___x_1848_ = v___x_1843_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v___x_1846_);
v___x_1848_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
return v___x_1848_;
}
}
else
{
lean_object* v___x_1850_; 
lean_del_object(v___x_1843_);
lean_inc(v_declName_1834_);
v___x_1850_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_alreadyGenerated_x3f___redArg(v_declName_1834_, v___y_1838_);
if (lean_obj_tag(v___x_1850_) == 0)
{
lean_object* v_a_1851_; 
v_a_1851_ = lean_ctor_get(v___x_1850_, 0);
lean_inc(v_a_1851_);
if (lean_obj_tag(v_a_1851_) == 1)
{
lean_dec_ref_known(v_a_1851_, 1);
lean_dec(v_declName_1834_);
return v___x_1850_;
}
else
{
lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
lean_dec(v_a_1851_);
lean_dec_ref_known(v___x_1850_, 1);
v___x_1852_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFnsRef;
v___x_1853_ = lean_st_ref_get(v___x_1852_);
v___x_1854_ = lean_box(0);
v___x_1855_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg___closed__0));
v___x_1856_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg(v_declName_1834_, v___x_1853_, v___x_1855_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_);
lean_dec(v___x_1853_);
if (lean_obj_tag(v___x_1856_) == 0)
{
lean_object* v_a_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1869_; 
v_a_1857_ = lean_ctor_get(v___x_1856_, 0);
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1856_);
if (v_isSharedCheck_1869_ == 0)
{
v___x_1859_ = v___x_1856_;
v_isShared_1860_ = v_isSharedCheck_1869_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_a_1857_);
lean_dec(v___x_1856_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1869_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v_fst_1861_; 
v_fst_1861_ = lean_ctor_get(v_a_1857_, 0);
lean_inc(v_fst_1861_);
lean_dec(v_a_1857_);
if (lean_obj_tag(v_fst_1861_) == 0)
{
lean_object* v___x_1863_; 
if (v_isShared_1860_ == 0)
{
lean_ctor_set(v___x_1859_, 0, v___x_1854_);
v___x_1863_ = v___x_1859_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v___x_1854_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
return v___x_1863_;
}
}
else
{
lean_object* v_val_1865_; lean_object* v___x_1867_; 
v_val_1865_ = lean_ctor_get(v_fst_1861_, 0);
lean_inc(v_val_1865_);
lean_dec_ref_known(v_fst_1861_, 1);
if (v_isShared_1860_ == 0)
{
lean_ctor_set(v___x_1859_, 0, v_val_1865_);
v___x_1867_ = v___x_1859_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v_val_1865_);
v___x_1867_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
return v___x_1867_;
}
}
}
}
else
{
lean_object* v_a_1870_; lean_object* v___x_1872_; uint8_t v_isShared_1873_; uint8_t v_isSharedCheck_1877_; 
v_a_1870_ = lean_ctor_get(v___x_1856_, 0);
v_isSharedCheck_1877_ = !lean_is_exclusive(v___x_1856_);
if (v_isSharedCheck_1877_ == 0)
{
v___x_1872_ = v___x_1856_;
v_isShared_1873_ = v_isSharedCheck_1877_;
goto v_resetjp_1871_;
}
else
{
lean_inc(v_a_1870_);
lean_dec(v___x_1856_);
v___x_1872_ = lean_box(0);
v_isShared_1873_ = v_isSharedCheck_1877_;
goto v_resetjp_1871_;
}
v_resetjp_1871_:
{
lean_object* v___x_1875_; 
if (v_isShared_1873_ == 0)
{
v___x_1875_ = v___x_1872_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v_a_1870_);
v___x_1875_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
return v___x_1875_;
}
}
}
}
}
else
{
lean_dec(v_declName_1834_);
return v___x_1850_;
}
}
}
}
else
{
lean_object* v_a_1879_; lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1886_; 
lean_dec(v_declName_1834_);
v_a_1879_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1886_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1886_ == 0)
{
v___x_1881_ = v___x_1840_;
v_isShared_1882_ = v_isSharedCheck_1886_;
goto v_resetjp_1880_;
}
else
{
lean_inc(v_a_1879_);
lean_dec(v___x_1840_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1886_;
goto v_resetjp_1880_;
}
v_resetjp_1880_:
{
lean_object* v___x_1884_; 
if (v_isShared_1882_ == 0)
{
v___x_1884_ = v___x_1881_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1885_; 
v_reuseFailAlloc_1885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1885_, 0, v_a_1879_);
v___x_1884_ = v_reuseFailAlloc_1885_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
return v___x_1884_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___lam__0___boxed(lean_object* v_declName_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_){
_start:
{
lean_object* v_res_1893_; 
v_res_1893_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___lam__0(v_declName_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_);
lean_dec(v___y_1891_);
lean_dec_ref(v___y_1890_);
lean_dec(v___y_1889_);
lean_dec_ref(v___y_1888_);
return v_res_1893_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0(void){
_start:
{
lean_object* v___x_1894_; lean_object* v___x_1895_; 
v___x_1894_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__0);
v___x_1895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1895_, 0, v___x_1894_);
return v___x_1895_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1(void){
_start:
{
lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; 
v___x_1896_ = lean_box(1);
v___x_1897_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_1898_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0);
v___x_1899_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1899_, 0, v___x_1898_);
lean_ctor_set(v___x_1899_, 1, v___x_1897_);
lean_ctor_set(v___x_1899_, 2, v___x_1896_);
return v___x_1899_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore(lean_object* v_declName_1902_, lean_object* v_a_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_){
_start:
{
lean_object* v___f_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; 
v___f_1908_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1908_, 0, v_declName_1902_);
v___x_1909_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_1910_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__2));
v___x_1911_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg(v___x_1909_, v___x_1910_, v___f_1908_, v_a_1903_, v_a_1904_, v_a_1905_, v_a_1906_);
return v___x_1911_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___boxed(lean_object* v_declName_1912_, lean_object* v_a_1913_, lean_object* v_a_1914_, lean_object* v_a_1915_, lean_object* v_a_1916_, lean_object* v_a_1917_){
_start:
{
lean_object* v_res_1918_; 
v_res_1918_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore(v_declName_1912_, v_a_1913_, v_a_1914_, v_a_1915_, v_a_1916_);
lean_dec(v_a_1916_);
lean_dec_ref(v_a_1915_);
lean_dec(v_a_1914_);
lean_dec_ref(v_a_1913_);
return v_res_1918_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0(lean_object* v_declName_1919_, lean_object* v_as_1920_, lean_object* v_as_x27_1921_, lean_object* v_b_1922_, lean_object* v_a_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_){
_start:
{
lean_object* v___x_1929_; 
v___x_1929_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___redArg(v_declName_1919_, v_as_x27_1921_, v_b_1922_, v___y_1924_, v___y_1925_, v___y_1926_, v___y_1927_);
return v___x_1929_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0___boxed(lean_object* v_declName_1930_, lean_object* v_as_1931_, lean_object* v_as_x27_1932_, lean_object* v_b_1933_, lean_object* v_a_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_){
_start:
{
lean_object* v_res_1940_; 
v_res_1940_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__0(v_declName_1930_, v_as_1931_, v_as_x27_1932_, v_b_1933_, v_a_1934_, v___y_1935_, v___y_1936_, v___y_1937_, v___y_1938_);
lean_dec(v___y_1938_);
lean_dec_ref(v___y_1937_);
lean_dec(v___y_1936_);
lean_dec_ref(v___y_1935_);
lean_dec(v_as_x27_1932_);
lean_dec(v_as_1931_);
return v_res_1940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getEqnsFor_x3f(lean_object* v_declName_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_){
_start:
{
lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
v___x_1947_ = lean_unsigned_to_nat(32u);
v___x_1948_ = lean_mk_empty_array_with_capacity(v___x_1947_);
lean_dec_ref(v___x_1948_);
v___x_1949_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_1950_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__2));
lean_inc(v_declName_1941_);
v___x_1951_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___boxed), 6, 1);
lean_closure_set(v___x_1951_, 0, v_declName_1941_);
v___x_1952_ = lean_alloc_closure((void*)(l_Lean_Meta_withEqnOptions___boxed), 8, 3);
lean_closure_set(v___x_1952_, 0, lean_box(0));
lean_closure_set(v___x_1952_, 1, v_declName_1941_);
lean_closure_set(v___x_1952_, 2, v___x_1951_);
v___x_1953_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg(v___x_1949_, v___x_1950_, v___x_1952_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_);
return v___x_1953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getEqnsFor_x3f___boxed(lean_object* v_declName_1954_, lean_object* v_a_1955_, lean_object* v_a_1956_, lean_object* v_a_1957_, lean_object* v_a_1958_, lean_object* v_a_1959_){
_start:
{
lean_object* v_res_1960_; 
v_res_1960_ = l_Lean_Meta_getEqnsFor_x3f(v_declName_1954_, v_a_1955_, v_a_1956_, v_a_1957_, v_a_1958_);
lean_dec(v_a_1958_);
lean_dec_ref(v_a_1957_);
lean_dec(v_a_1956_);
lean_dec_ref(v_a_1955_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1_spec__1(lean_object* v_msgData_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_){
_start:
{
lean_object* v___x_1967_; lean_object* v_env_1968_; lean_object* v___x_1969_; lean_object* v_toCold_1970_; lean_object* v_mctx_1971_; lean_object* v_lctx_1972_; lean_object* v_options_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; 
v___x_1967_ = lean_st_ref_get(v___y_1965_);
v_env_1968_ = lean_ctor_get(v___x_1967_, 0);
lean_inc_ref(v_env_1968_);
lean_dec(v___x_1967_);
v___x_1969_ = lean_st_ref_get(v___y_1963_);
v_toCold_1970_ = lean_ctor_get(v___y_1964_, 0);
v_mctx_1971_ = lean_ctor_get(v___x_1969_, 0);
lean_inc_ref(v_mctx_1971_);
lean_dec(v___x_1969_);
v_lctx_1972_ = lean_ctor_get(v___y_1962_, 2);
v_options_1973_ = lean_ctor_get(v_toCold_1970_, 2);
lean_inc_ref(v_options_1973_);
lean_inc_ref(v_lctx_1972_);
v___x_1974_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1974_, 0, v_env_1968_);
lean_ctor_set(v___x_1974_, 1, v_mctx_1971_);
lean_ctor_set(v___x_1974_, 2, v_lctx_1972_);
lean_ctor_set(v___x_1974_, 3, v_options_1973_);
v___x_1975_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1975_, 0, v___x_1974_);
lean_ctor_set(v___x_1975_, 1, v_msgData_1961_);
v___x_1976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1976_, 0, v___x_1975_);
return v___x_1976_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1_spec__1___boxed(lean_object* v_msgData_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_){
_start:
{
lean_object* v_res_1983_; 
v_res_1983_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1_spec__1(v_msgData_1977_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_);
lean_dec(v___y_1981_);
lean_dec_ref(v___y_1980_);
lean_dec(v___y_1979_);
lean_dec_ref(v___y_1978_);
return v_res_1983_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1984_; double v___x_1985_; 
v___x_1984_ = lean_unsigned_to_nat(0u);
v___x_1985_ = lean_float_of_nat(v___x_1984_);
return v___x_1985_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1(lean_object* v_cls_1989_, lean_object* v_msg_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_){
_start:
{
lean_object* v_ref_1996_; lean_object* v___x_1997_; lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2042_; 
v_ref_1996_ = lean_ctor_get(v___y_1993_, 2);
v___x_1997_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1_spec__1(v_msg_1990_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_);
v_a_1998_ = lean_ctor_get(v___x_1997_, 0);
v_isSharedCheck_2042_ = !lean_is_exclusive(v___x_1997_);
if (v_isSharedCheck_2042_ == 0)
{
v___x_2000_ = v___x_1997_;
v_isShared_2001_ = v_isSharedCheck_2042_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v___x_1997_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2042_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2002_; lean_object* v_traceState_2003_; lean_object* v_env_2004_; lean_object* v_nextMacroScope_2005_; lean_object* v_ngen_2006_; lean_object* v_auxDeclNGen_2007_; lean_object* v_cache_2008_; lean_object* v_messages_2009_; lean_object* v_infoState_2010_; lean_object* v_snapshotTasks_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2041_; 
v___x_2002_ = lean_st_ref_take(v___y_1994_);
v_traceState_2003_ = lean_ctor_get(v___x_2002_, 4);
v_env_2004_ = lean_ctor_get(v___x_2002_, 0);
v_nextMacroScope_2005_ = lean_ctor_get(v___x_2002_, 1);
v_ngen_2006_ = lean_ctor_get(v___x_2002_, 2);
v_auxDeclNGen_2007_ = lean_ctor_get(v___x_2002_, 3);
v_cache_2008_ = lean_ctor_get(v___x_2002_, 5);
v_messages_2009_ = lean_ctor_get(v___x_2002_, 6);
v_infoState_2010_ = lean_ctor_get(v___x_2002_, 7);
v_snapshotTasks_2011_ = lean_ctor_get(v___x_2002_, 8);
v_isSharedCheck_2041_ = !lean_is_exclusive(v___x_2002_);
if (v_isSharedCheck_2041_ == 0)
{
v___x_2013_ = v___x_2002_;
v_isShared_2014_ = v_isSharedCheck_2041_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_snapshotTasks_2011_);
lean_inc(v_infoState_2010_);
lean_inc(v_messages_2009_);
lean_inc(v_cache_2008_);
lean_inc(v_traceState_2003_);
lean_inc(v_auxDeclNGen_2007_);
lean_inc(v_ngen_2006_);
lean_inc(v_nextMacroScope_2005_);
lean_inc(v_env_2004_);
lean_dec(v___x_2002_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2041_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
uint64_t v_tid_2015_; lean_object* v_traces_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2040_; 
v_tid_2015_ = lean_ctor_get_uint64(v_traceState_2003_, sizeof(void*)*1);
v_traces_2016_ = lean_ctor_get(v_traceState_2003_, 0);
v_isSharedCheck_2040_ = !lean_is_exclusive(v_traceState_2003_);
if (v_isSharedCheck_2040_ == 0)
{
v___x_2018_ = v_traceState_2003_;
v_isShared_2019_ = v_isSharedCheck_2040_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_traces_2016_);
lean_dec(v_traceState_2003_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2040_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___x_2020_; lean_object* v___x_2021_; double v___x_2022_; uint8_t v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2031_; 
v___x_2020_ = lean_box(0);
v___x_2021_ = lean_box(0);
v___x_2022_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__0, &l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__0);
v___x_2023_ = 0;
v___x_2024_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__1));
v___x_2025_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2025_, 0, v_cls_1989_);
lean_ctor_set(v___x_2025_, 1, v___x_2021_);
lean_ctor_set(v___x_2025_, 2, v___x_2024_);
lean_ctor_set_float(v___x_2025_, sizeof(void*)*3, v___x_2022_);
lean_ctor_set_float(v___x_2025_, sizeof(void*)*3 + 8, v___x_2022_);
lean_ctor_set_uint8(v___x_2025_, sizeof(void*)*3 + 16, v___x_2023_);
v___x_2026_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__2));
v___x_2027_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2027_, 0, v___x_2025_);
lean_ctor_set(v___x_2027_, 1, v_a_1998_);
lean_ctor_set(v___x_2027_, 2, v___x_2026_);
lean_inc(v_ref_1996_);
v___x_2028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2028_, 0, v_ref_1996_);
lean_ctor_set(v___x_2028_, 1, v___x_2027_);
v___x_2029_ = l_Lean_PersistentArray_push___redArg(v_traces_2016_, v___x_2028_);
if (v_isShared_2019_ == 0)
{
lean_ctor_set(v___x_2018_, 0, v___x_2029_);
v___x_2031_ = v___x_2018_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v___x_2029_);
lean_ctor_set_uint64(v_reuseFailAlloc_2039_, sizeof(void*)*1, v_tid_2015_);
v___x_2031_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
lean_object* v___x_2033_; 
if (v_isShared_2014_ == 0)
{
lean_ctor_set(v___x_2013_, 4, v___x_2031_);
v___x_2033_ = v___x_2013_;
goto v_reusejp_2032_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v_env_2004_);
lean_ctor_set(v_reuseFailAlloc_2038_, 1, v_nextMacroScope_2005_);
lean_ctor_set(v_reuseFailAlloc_2038_, 2, v_ngen_2006_);
lean_ctor_set(v_reuseFailAlloc_2038_, 3, v_auxDeclNGen_2007_);
lean_ctor_set(v_reuseFailAlloc_2038_, 4, v___x_2031_);
lean_ctor_set(v_reuseFailAlloc_2038_, 5, v_cache_2008_);
lean_ctor_set(v_reuseFailAlloc_2038_, 6, v_messages_2009_);
lean_ctor_set(v_reuseFailAlloc_2038_, 7, v_infoState_2010_);
lean_ctor_set(v_reuseFailAlloc_2038_, 8, v_snapshotTasks_2011_);
v___x_2033_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2032_;
}
v_reusejp_2032_:
{
lean_object* v___x_2034_; lean_object* v___x_2036_; 
v___x_2034_ = lean_st_ref_put(v___y_1994_, v___x_2033_);
if (v_isShared_2001_ == 0)
{
lean_ctor_set(v___x_2000_, 0, v___x_2020_);
v___x_2036_ = v___x_2000_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v___x_2020_);
v___x_2036_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
return v___x_2036_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___boxed(lean_object* v_cls_2043_, lean_object* v_msg_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_){
_start:
{
lean_object* v_res_2050_; 
v_res_2050_ = l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1(v_cls_2043_, v_msg_2044_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_);
lean_dec(v___y_2048_);
lean_dec_ref(v___y_2047_);
lean_dec(v___y_2046_);
lean_dec_ref(v___y_2045_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0___redArg(lean_object* v___x_2051_, lean_object* v_as_2052_, size_t v_sz_2053_, size_t v_i_2054_, lean_object* v_b_2055_){
_start:
{
lean_object* v_a_2058_; uint8_t v___x_2062_; 
v___x_2062_ = lean_usize_dec_lt(v_i_2054_, v_sz_2053_);
if (v___x_2062_ == 0)
{
lean_object* v___x_2063_; 
v___x_2063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2063_, 0, v_b_2055_);
return v___x_2063_;
}
else
{
lean_object* v_a_2064_; lean_object* v_defValue_2065_; uint8_t v___x_2066_; uint8_t v___y_2080_; uint8_t v___x_2081_; 
v_a_2064_ = lean_array_uget(v_as_2052_, v_i_2054_);
v_defValue_2065_ = lean_ctor_get(v_a_2064_, 1);
v___x_2066_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(v___x_2051_, v_a_2064_);
v___x_2081_ = lean_unbox(v_defValue_2065_);
if (v___x_2081_ == 0)
{
if (v___x_2066_ == 0)
{
v___y_2080_ = v___x_2062_;
goto v___jp_2079_;
}
else
{
goto v___jp_2067_;
}
}
else
{
v___y_2080_ = v___x_2066_;
goto v___jp_2079_;
}
v___jp_2067_:
{
lean_object* v_name_2068_; lean_object* v___x_2070_; uint8_t v_isShared_2071_; uint8_t v_isSharedCheck_2077_; 
v_name_2068_ = lean_ctor_get(v_a_2064_, 0);
v_isSharedCheck_2077_ = !lean_is_exclusive(v_a_2064_);
if (v_isSharedCheck_2077_ == 0)
{
lean_object* v_unused_2078_; 
v_unused_2078_ = lean_ctor_get(v_a_2064_, 1);
lean_dec(v_unused_2078_);
v___x_2070_ = v_a_2064_;
v_isShared_2071_ = v_isSharedCheck_2077_;
goto v_resetjp_2069_;
}
else
{
lean_inc(v_name_2068_);
lean_dec(v_a_2064_);
v___x_2070_ = lean_box(0);
v_isShared_2071_ = v_isSharedCheck_2077_;
goto v_resetjp_2069_;
}
v_resetjp_2069_:
{
lean_object* v___x_2072_; lean_object* v___x_2074_; 
v___x_2072_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2072_, 0, v___x_2066_);
if (v_isShared_2071_ == 0)
{
lean_ctor_set(v___x_2070_, 1, v___x_2072_);
v___x_2074_ = v___x_2070_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_name_2068_);
lean_ctor_set(v_reuseFailAlloc_2076_, 1, v___x_2072_);
v___x_2074_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
lean_object* v___x_2075_; 
v___x_2075_ = lean_array_push(v_b_2055_, v___x_2074_);
v_a_2058_ = v___x_2075_;
goto v___jp_2057_;
}
}
}
v___jp_2079_:
{
if (v___y_2080_ == 0)
{
goto v___jp_2067_;
}
else
{
lean_dec(v_a_2064_);
v_a_2058_ = v_b_2055_;
goto v___jp_2057_;
}
}
}
v___jp_2057_:
{
size_t v___x_2059_; size_t v___x_2060_; 
v___x_2059_ = ((size_t)1ULL);
v___x_2060_ = lean_usize_add(v_i_2054_, v___x_2059_);
v_i_2054_ = v___x_2060_;
v_b_2055_ = v_a_2058_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0___redArg___boxed(lean_object* v___x_2082_, lean_object* v_as_2083_, lean_object* v_sz_2084_, lean_object* v_i_2085_, lean_object* v_b_2086_, lean_object* v___y_2087_){
_start:
{
size_t v_sz_boxed_2088_; size_t v_i_boxed_2089_; lean_object* v_res_2090_; 
v_sz_boxed_2088_ = lean_unbox_usize(v_sz_2084_);
lean_dec(v_sz_2084_);
v_i_boxed_2089_ = lean_unbox_usize(v_i_2085_);
lean_dec(v_i_2085_);
v_res_2090_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0___redArg(v___x_2082_, v_as_2083_, v_sz_boxed_2088_, v_i_boxed_2089_, v_b_2086_);
lean_dec_ref(v_as_2083_);
lean_dec_ref(v___x_2082_);
return v_res_2090_;
}
}
static size_t _init_l_Lean_Meta_saveEqnAffectingOptions___closed__1(void){
_start:
{
lean_object* v___x_2093_; size_t v_sz_2094_; 
v___x_2093_ = l_Lean_Meta_eqnAffectingOptions;
v_sz_2094_ = lean_array_size(v___x_2093_);
return v_sz_2094_;
}
}
static lean_object* _init_l_Lean_Meta_saveEqnAffectingOptions___closed__2(void){
_start:
{
lean_object* v___x_2095_; lean_object* v___x_2096_; 
v___x_2095_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__0, &l_Lean_Meta_withEqnOptions___redArg___closed__0_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__0);
v___x_2096_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2095_);
lean_ctor_set(v___x_2096_, 1, v___x_2095_);
lean_ctor_set(v___x_2096_, 2, v___x_2095_);
lean_ctor_set(v___x_2096_, 3, v___x_2095_);
lean_ctor_set(v___x_2096_, 4, v___x_2095_);
lean_ctor_set(v___x_2096_, 5, v___x_2095_);
return v___x_2096_;
}
}
static lean_object* _init_l_Lean_Meta_saveEqnAffectingOptions___closed__6(void){
_start:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; 
v___x_2103_ = ((lean_object*)(l_Lean_Meta_saveEqnAffectingOptions___closed__5));
v___x_2104_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__1));
v___x_2105_ = l_Lean_Name_append(v___x_2104_, v___x_2103_);
return v___x_2105_;
}
}
static lean_object* _init_l_Lean_Meta_saveEqnAffectingOptions___closed__8(void){
_start:
{
lean_object* v___x_2107_; lean_object* v___x_2108_; 
v___x_2107_ = ((lean_object*)(l_Lean_Meta_saveEqnAffectingOptions___closed__7));
v___x_2108_ = l_Lean_stringToMessageData(v___x_2107_);
return v___x_2108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_saveEqnAffectingOptions(lean_object* v_declName_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_){
_start:
{
lean_object* v_toCold_2115_; lean_object* v_options_2116_; lean_object* v_inheritedTraceOptions_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; size_t v_sz_2121_; size_t v___x_2122_; lean_object* v___x_2123_; 
v_toCold_2115_ = lean_ctor_get(v_a_2112_, 0);
v_options_2116_ = lean_ctor_get(v_toCold_2115_, 2);
v_inheritedTraceOptions_2117_ = lean_ctor_get(v_toCold_2115_, 11);
v___x_2118_ = lean_unsigned_to_nat(0u);
v___x_2119_ = ((lean_object*)(l_Lean_Meta_saveEqnAffectingOptions___closed__0));
v___x_2120_ = l_Lean_Meta_eqnAffectingOptions;
v_sz_2121_ = lean_usize_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__1, &l_Lean_Meta_saveEqnAffectingOptions___closed__1_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__1);
v___x_2122_ = ((size_t)0ULL);
v___x_2123_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0___redArg(v_options_2116_, v___x_2120_, v_sz_2121_, v___x_2122_, v___x_2119_);
if (lean_obj_tag(v___x_2123_) == 0)
{
lean_object* v_a_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2183_; 
v_a_2124_ = lean_ctor_get(v___x_2123_, 0);
v_isSharedCheck_2183_ = !lean_is_exclusive(v___x_2123_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2126_ = v___x_2123_;
v_isShared_2127_ = v_isSharedCheck_2183_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_a_2124_);
lean_dec(v___x_2123_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2183_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___y_2129_; lean_object* v___y_2130_; lean_object* v___x_2171_; uint8_t v___x_2172_; 
v___x_2171_ = lean_array_get_size(v_a_2124_);
v___x_2172_ = lean_nat_dec_eq(v___x_2171_, v___x_2118_);
if (v___x_2172_ == 0)
{
uint8_t v_hasTrace_2173_; 
v_hasTrace_2173_ = lean_ctor_get_uint8(v_options_2116_, sizeof(void*)*1);
if (v_hasTrace_2173_ == 0)
{
v___y_2129_ = v_a_2111_;
v___y_2130_ = v_a_2113_;
goto v___jp_2128_;
}
else
{
lean_object* v___x_2174_; lean_object* v___x_2175_; uint8_t v___x_2176_; 
v___x_2174_ = ((lean_object*)(l_Lean_Meta_saveEqnAffectingOptions___closed__5));
v___x_2175_ = lean_obj_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__6, &l_Lean_Meta_saveEqnAffectingOptions___closed__6_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__6);
v___x_2176_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2117_, v_options_2116_, v___x_2175_);
if (v___x_2176_ == 0)
{
v___y_2129_ = v_a_2111_;
v___y_2130_ = v_a_2113_;
goto v___jp_2128_;
}
else
{
lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; 
v___x_2177_ = lean_obj_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__8, &l_Lean_Meta_saveEqnAffectingOptions___closed__8_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__8);
lean_inc(v_declName_2109_);
v___x_2178_ = l_Lean_MessageData_ofName(v_declName_2109_);
v___x_2179_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2179_, 0, v___x_2177_);
lean_ctor_set(v___x_2179_, 1, v___x_2178_);
v___x_2180_ = l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1(v___x_2174_, v___x_2179_, v_a_2110_, v_a_2111_, v_a_2112_, v_a_2113_);
if (lean_obj_tag(v___x_2180_) == 0)
{
lean_dec_ref_known(v___x_2180_, 1);
v___y_2129_ = v_a_2111_;
v___y_2130_ = v_a_2113_;
goto v___jp_2128_;
}
else
{
lean_del_object(v___x_2126_);
lean_dec(v_a_2124_);
lean_dec(v_declName_2109_);
return v___x_2180_;
}
}
}
}
else
{
lean_object* v___x_2181_; lean_object* v___x_2182_; 
lean_del_object(v___x_2126_);
lean_dec(v_a_2124_);
lean_dec(v_declName_2109_);
v___x_2181_ = lean_box(0);
v___x_2182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2182_, 0, v___x_2181_);
return v___x_2182_;
}
v___jp_2128_:
{
lean_object* v___x_2131_; lean_object* v_env_2132_; lean_object* v_nextMacroScope_2133_; lean_object* v_ngen_2134_; lean_object* v_auxDeclNGen_2135_; lean_object* v_traceState_2136_; lean_object* v_messages_2137_; lean_object* v_infoState_2138_; lean_object* v_snapshotTasks_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2169_; 
v___x_2131_ = lean_st_ref_take(v___y_2130_);
v_env_2132_ = lean_ctor_get(v___x_2131_, 0);
v_nextMacroScope_2133_ = lean_ctor_get(v___x_2131_, 1);
v_ngen_2134_ = lean_ctor_get(v___x_2131_, 2);
v_auxDeclNGen_2135_ = lean_ctor_get(v___x_2131_, 3);
v_traceState_2136_ = lean_ctor_get(v___x_2131_, 4);
v_messages_2137_ = lean_ctor_get(v___x_2131_, 6);
v_infoState_2138_ = lean_ctor_get(v___x_2131_, 7);
v_snapshotTasks_2139_ = lean_ctor_get(v___x_2131_, 8);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2131_);
if (v_isSharedCheck_2169_ == 0)
{
lean_object* v_unused_2170_; 
v_unused_2170_ = lean_ctor_get(v___x_2131_, 5);
lean_dec(v_unused_2170_);
v___x_2141_ = v___x_2131_;
v_isShared_2142_ = v_isSharedCheck_2169_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_snapshotTasks_2139_);
lean_inc(v_infoState_2138_);
lean_inc(v_messages_2137_);
lean_inc(v_traceState_2136_);
lean_inc(v_auxDeclNGen_2135_);
lean_inc(v_ngen_2134_);
lean_inc(v_nextMacroScope_2133_);
lean_inc(v_env_2132_);
lean_dec(v___x_2131_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2169_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2147_; 
v___x_2143_ = l_Lean_Meta_eqnOptionsExt;
v___x_2144_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2143_, v_env_2132_, v_declName_2109_, v_a_2124_);
v___x_2145_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__1, &l_Lean_Meta_withEqnOptions___redArg___closed__1_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__1);
if (v_isShared_2142_ == 0)
{
lean_ctor_set(v___x_2141_, 5, v___x_2145_);
lean_ctor_set(v___x_2141_, 0, v___x_2144_);
v___x_2147_ = v___x_2141_;
goto v_reusejp_2146_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v___x_2144_);
lean_ctor_set(v_reuseFailAlloc_2168_, 1, v_nextMacroScope_2133_);
lean_ctor_set(v_reuseFailAlloc_2168_, 2, v_ngen_2134_);
lean_ctor_set(v_reuseFailAlloc_2168_, 3, v_auxDeclNGen_2135_);
lean_ctor_set(v_reuseFailAlloc_2168_, 4, v_traceState_2136_);
lean_ctor_set(v_reuseFailAlloc_2168_, 5, v___x_2145_);
lean_ctor_set(v_reuseFailAlloc_2168_, 6, v_messages_2137_);
lean_ctor_set(v_reuseFailAlloc_2168_, 7, v_infoState_2138_);
lean_ctor_set(v_reuseFailAlloc_2168_, 8, v_snapshotTasks_2139_);
v___x_2147_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2146_;
}
v_reusejp_2146_:
{
lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v_mctx_2150_; lean_object* v_zetaDeltaFVarIds_2151_; lean_object* v_postponed_2152_; lean_object* v_diag_2153_; lean_object* v___x_2155_; uint8_t v_isShared_2156_; uint8_t v_isSharedCheck_2166_; 
v___x_2148_ = lean_st_ref_put(v___y_2130_, v___x_2147_);
v___x_2149_ = lean_st_ref_take(v___y_2129_);
v_mctx_2150_ = lean_ctor_get(v___x_2149_, 0);
v_zetaDeltaFVarIds_2151_ = lean_ctor_get(v___x_2149_, 2);
v_postponed_2152_ = lean_ctor_get(v___x_2149_, 3);
v_diag_2153_ = lean_ctor_get(v___x_2149_, 4);
v_isSharedCheck_2166_ = !lean_is_exclusive(v___x_2149_);
if (v_isSharedCheck_2166_ == 0)
{
lean_object* v_unused_2167_; 
v_unused_2167_ = lean_ctor_get(v___x_2149_, 1);
lean_dec(v_unused_2167_);
v___x_2155_ = v___x_2149_;
v_isShared_2156_ = v_isSharedCheck_2166_;
goto v_resetjp_2154_;
}
else
{
lean_inc(v_diag_2153_);
lean_inc(v_postponed_2152_);
lean_inc(v_zetaDeltaFVarIds_2151_);
lean_inc(v_mctx_2150_);
lean_dec(v___x_2149_);
v___x_2155_ = lean_box(0);
v_isShared_2156_ = v_isSharedCheck_2166_;
goto v_resetjp_2154_;
}
v_resetjp_2154_:
{
lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2160_; 
v___x_2157_ = lean_box(0);
v___x_2158_ = lean_obj_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__2, &l_Lean_Meta_saveEqnAffectingOptions___closed__2_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__2);
if (v_isShared_2156_ == 0)
{
lean_ctor_set(v___x_2155_, 1, v___x_2158_);
v___x_2160_ = v___x_2155_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v_mctx_2150_);
lean_ctor_set(v_reuseFailAlloc_2165_, 1, v___x_2158_);
lean_ctor_set(v_reuseFailAlloc_2165_, 2, v_zetaDeltaFVarIds_2151_);
lean_ctor_set(v_reuseFailAlloc_2165_, 3, v_postponed_2152_);
lean_ctor_set(v_reuseFailAlloc_2165_, 4, v_diag_2153_);
v___x_2160_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
lean_object* v___x_2161_; lean_object* v___x_2163_; 
v___x_2161_ = lean_st_ref_put(v___y_2129_, v___x_2160_);
if (v_isShared_2127_ == 0)
{
lean_ctor_set(v___x_2126_, 0, v___x_2157_);
v___x_2163_ = v___x_2126_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v___x_2157_);
v___x_2163_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
return v___x_2163_;
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
lean_object* v_a_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2191_; 
lean_dec(v_declName_2109_);
v_a_2184_ = lean_ctor_get(v___x_2123_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___x_2123_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2186_ = v___x_2123_;
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___x_2123_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2189_; 
if (v_isShared_2187_ == 0)
{
v___x_2189_ = v___x_2186_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v_a_2184_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
return v___x_2189_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_saveEqnAffectingOptions___boxed(lean_object* v_declName_2192_, lean_object* v_a_2193_, lean_object* v_a_2194_, lean_object* v_a_2195_, lean_object* v_a_2196_, lean_object* v_a_2197_){
_start:
{
lean_object* v_res_2198_; 
v_res_2198_ = l_Lean_Meta_saveEqnAffectingOptions(v_declName_2192_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_);
lean_dec(v_a_2196_);
lean_dec_ref(v_a_2195_);
lean_dec(v_a_2194_);
lean_dec_ref(v_a_2193_);
return v_res_2198_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0(lean_object* v___x_2199_, lean_object* v_as_2200_, size_t v_sz_2201_, size_t v_i_2202_, lean_object* v_b_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_){
_start:
{
lean_object* v___x_2209_; 
v___x_2209_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0___redArg(v___x_2199_, v_as_2200_, v_sz_2201_, v_i_2202_, v_b_2203_);
return v___x_2209_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0___boxed(lean_object* v___x_2210_, lean_object* v_as_2211_, lean_object* v_sz_2212_, lean_object* v_i_2213_, lean_object* v_b_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_){
_start:
{
size_t v_sz_boxed_2220_; size_t v_i_boxed_2221_; lean_object* v_res_2222_; 
v_sz_boxed_2220_ = lean_unbox_usize(v_sz_2212_);
lean_dec(v_sz_2212_);
v_i_boxed_2221_ = lean_unbox_usize(v_i_2213_);
lean_dec(v_i_2213_);
v_res_2222_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_saveEqnAffectingOptions_spec__0(v___x_2210_, v_as_2211_, v_sz_boxed_2220_, v_i_boxed_2221_, v_b_2214_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_);
lean_dec(v___y_2218_);
lean_dec_ref(v___y_2217_);
lean_dec(v___y_2216_);
lean_dec_ref(v___y_2215_);
lean_dec_ref(v_as_2211_);
lean_dec_ref(v___x_2210_);
return v_res_2222_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_408789758____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; 
v___x_2224_ = lean_box(0);
v___x_2225_ = lean_st_mk_ref(v___x_2224_);
v___x_2226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2225_);
return v___x_2226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_408789758____hygCtx___hyg_2____boxed(lean_object* v_a_2227_){
_start:
{
lean_object* v_res_2228_; 
v_res_2228_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_408789758____hygCtx___hyg_2_();
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetUnfoldEqnFn(lean_object* v_f_2229_){
_start:
{
uint8_t v___x_2231_; 
v___x_2231_ = l_Lean_initializing();
if (v___x_2231_ == 0)
{
lean_object* v___x_2232_; lean_object* v___x_2233_; 
lean_dec_ref(v_f_2229_);
v___x_2232_ = lean_obj_once(&l_Lean_Meta_registerGetEqnsFn___closed__1, &l_Lean_Meta_registerGetEqnsFn___closed__1_once, _init_l_Lean_Meta_registerGetEqnsFn___closed__1);
v___x_2233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2233_, 0, v___x_2232_);
return v___x_2233_;
}
else
{
lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; 
v___x_2234_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_getUnfoldEqnFnsRef;
v___x_2235_ = lean_st_ref_take(v___x_2234_);
v___x_2236_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2236_, 0, v_f_2229_);
lean_ctor_set(v___x_2236_, 1, v___x_2235_);
v___x_2237_ = lean_st_ref_put(v___x_2234_, v___x_2236_);
v___x_2238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2238_, 0, v___x_2237_);
return v___x_2238_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_registerGetUnfoldEqnFn___boxed(lean_object* v_f_2239_, lean_object* v_a_2240_){
_start:
{
lean_object* v_res_2241_; 
v_res_2241_ = l_Lean_Meta_registerGetUnfoldEqnFn(v_f_2239_);
return v_res_2241_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg(lean_object* v_declName_2245_, lean_object* v_as_x27_2246_, lean_object* v_b_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_){
_start:
{
if (lean_obj_tag(v_as_x27_2246_) == 0)
{
lean_object* v___x_2253_; 
lean_dec(v_declName_2245_);
v___x_2253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2253_, 0, v_b_2247_);
return v___x_2253_;
}
else
{
lean_object* v_head_2254_; lean_object* v_tail_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; 
lean_dec_ref(v_b_2247_);
v_head_2254_ = lean_ctor_get(v_as_x27_2246_, 0);
v_tail_2255_ = lean_ctor_get(v_as_x27_2246_, 1);
v___x_2256_ = lean_box(0);
v___x_2257_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg___closed__0));
lean_inc(v_head_2254_);
lean_inc(v___y_2251_);
lean_inc_ref(v___y_2250_);
lean_inc(v___y_2249_);
lean_inc_ref(v___y_2248_);
lean_inc(v_declName_2245_);
v___x_2258_ = lean_apply_6(v_head_2254_, v_declName_2245_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_, lean_box(0));
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_object* v_a_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2269_; 
v_a_2259_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2269_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2269_ == 0)
{
v___x_2261_ = v___x_2258_;
v_isShared_2262_ = v_isSharedCheck_2269_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_a_2259_);
lean_dec(v___x_2258_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2269_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
if (lean_obj_tag(v_a_2259_) == 1)
{
lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2266_; 
lean_dec(v_declName_2245_);
v___x_2263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2263_, 0, v_a_2259_);
v___x_2264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2264_, 0, v___x_2263_);
lean_ctor_set(v___x_2264_, 1, v___x_2256_);
if (v_isShared_2262_ == 0)
{
lean_ctor_set(v___x_2261_, 0, v___x_2264_);
v___x_2266_ = v___x_2261_;
goto v_reusejp_2265_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v___x_2264_);
v___x_2266_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2265_;
}
v_reusejp_2265_:
{
return v___x_2266_;
}
}
else
{
lean_del_object(v___x_2261_);
lean_dec(v_a_2259_);
v_as_x27_2246_ = v_tail_2255_;
v_b_2247_ = v___x_2257_;
goto _start;
}
}
}
else
{
lean_object* v_a_2270_; lean_object* v___x_2272_; uint8_t v_isShared_2273_; uint8_t v_isSharedCheck_2277_; 
lean_dec(v_declName_2245_);
v_a_2270_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2277_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2277_ == 0)
{
v___x_2272_ = v___x_2258_;
v_isShared_2273_ = v_isSharedCheck_2277_;
goto v_resetjp_2271_;
}
else
{
lean_inc(v_a_2270_);
lean_dec(v___x_2258_);
v___x_2272_ = lean_box(0);
v_isShared_2273_ = v_isSharedCheck_2277_;
goto v_resetjp_2271_;
}
v_resetjp_2271_:
{
lean_object* v___x_2275_; 
if (v_isShared_2273_ == 0)
{
v___x_2275_ = v___x_2272_;
goto v_reusejp_2274_;
}
else
{
lean_object* v_reuseFailAlloc_2276_; 
v_reuseFailAlloc_2276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2276_, 0, v_a_2270_);
v___x_2275_ = v_reuseFailAlloc_2276_;
goto v_reusejp_2274_;
}
v_reusejp_2274_:
{
return v___x_2275_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg___boxed(lean_object* v_declName_2278_, lean_object* v_as_x27_2279_, lean_object* v_b_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_){
_start:
{
lean_object* v_res_2286_; 
v_res_2286_ = l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg(v_declName_2278_, v_as_x27_2279_, v_b_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_);
lean_dec(v___y_2284_);
lean_dec_ref(v___y_2283_);
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
lean_dec(v_as_x27_2279_);
return v_res_2286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__0(lean_object* v___x_2287_, lean_object* v_declName_2288_, uint8_t v_nonRec_2289_, lean_object* v___x_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_){
_start:
{
lean_object* v___x_2299_; lean_object* v_env_2300_; uint8_t v___x_2301_; uint8_t v___x_2302_; 
v___x_2299_ = lean_st_ref_get(v___y_2294_);
v_env_2300_ = lean_ctor_get(v___x_2299_, 0);
lean_inc_ref(v_env_2300_);
lean_dec(v___x_2299_);
v___x_2301_ = 1;
lean_inc(v___x_2287_);
v___x_2302_ = l_Lean_Environment_contains(v_env_2300_, v___x_2287_, v___x_2301_);
if (v___x_2302_ == 0)
{
lean_object* v___x_2303_; 
lean_dec(v___x_2287_);
lean_inc(v_declName_2288_);
v___x_2303_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_shouldGenerateEqnThms(v_declName_2288_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_);
if (lean_obj_tag(v___x_2303_) == 0)
{
lean_object* v_a_2304_; uint8_t v___x_2305_; 
v_a_2304_ = lean_ctor_get(v___x_2303_, 0);
lean_inc(v_a_2304_);
lean_dec_ref_known(v___x_2303_, 1);
v___x_2305_ = lean_unbox(v_a_2304_);
lean_dec(v_a_2304_);
if (v___x_2305_ == 0)
{
lean_dec_ref(v___x_2290_);
lean_dec(v_declName_2288_);
goto v___jp_2296_;
}
else
{
lean_object* v___x_2306_; 
lean_inc(v_declName_2288_);
v___x_2306_ = l_Lean_Meta_isRecursiveDefinition___redArg(v_declName_2288_, v___y_2294_);
if (lean_obj_tag(v___x_2306_) == 0)
{
lean_object* v_a_2307_; uint8_t v___x_2308_; 
v_a_2307_ = lean_ctor_get(v___x_2306_, 0);
lean_inc(v_a_2307_);
lean_dec_ref_known(v___x_2306_, 1);
v___x_2308_ = lean_unbox(v_a_2307_);
lean_dec(v_a_2307_);
if (v___x_2308_ == 0)
{
if (v_nonRec_2289_ == 0)
{
lean_dec_ref(v___x_2290_);
lean_dec(v_declName_2288_);
goto v___jp_2296_;
}
else
{
lean_object* v___x_2309_; lean_object* v_env_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2309_ = lean_st_ref_get(v___y_2294_);
v_env_2310_ = lean_ctor_get(v___x_2309_, 0);
lean_inc_ref(v_env_2310_);
lean_dec(v___x_2309_);
lean_inc(v_declName_2288_);
v___x_2311_ = l_Lean_Meta_mkEqLikeNameFor(v_env_2310_, v_declName_2288_, v___x_2290_);
v___x_2312_ = l_Lean_Meta_mkSimpleEqThm(v_declName_2288_, v___x_2311_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_);
return v___x_2312_;
}
}
else
{
lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
lean_dec_ref(v___x_2290_);
v___x_2313_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_getUnfoldEqnFnsRef;
v___x_2314_ = lean_st_ref_get(v___x_2313_);
v___x_2315_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg___closed__0));
v___x_2316_ = l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg(v_declName_2288_, v___x_2314_, v___x_2315_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_);
lean_dec(v___x_2314_);
if (lean_obj_tag(v___x_2316_) == 0)
{
lean_object* v_a_2317_; lean_object* v___x_2319_; uint8_t v_isShared_2320_; uint8_t v_isSharedCheck_2326_; 
v_a_2317_ = lean_ctor_get(v___x_2316_, 0);
v_isSharedCheck_2326_ = !lean_is_exclusive(v___x_2316_);
if (v_isSharedCheck_2326_ == 0)
{
v___x_2319_ = v___x_2316_;
v_isShared_2320_ = v_isSharedCheck_2326_;
goto v_resetjp_2318_;
}
else
{
lean_inc(v_a_2317_);
lean_dec(v___x_2316_);
v___x_2319_ = lean_box(0);
v_isShared_2320_ = v_isSharedCheck_2326_;
goto v_resetjp_2318_;
}
v_resetjp_2318_:
{
lean_object* v_fst_2321_; 
v_fst_2321_ = lean_ctor_get(v_a_2317_, 0);
lean_inc(v_fst_2321_);
lean_dec(v_a_2317_);
if (lean_obj_tag(v_fst_2321_) == 0)
{
lean_del_object(v___x_2319_);
goto v___jp_2296_;
}
else
{
lean_object* v_val_2322_; lean_object* v___x_2324_; 
v_val_2322_ = lean_ctor_get(v_fst_2321_, 0);
lean_inc(v_val_2322_);
lean_dec_ref_known(v_fst_2321_, 1);
if (v_isShared_2320_ == 0)
{
lean_ctor_set(v___x_2319_, 0, v_val_2322_);
v___x_2324_ = v___x_2319_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v_val_2322_);
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
lean_object* v_a_2327_; lean_object* v___x_2329_; uint8_t v_isShared_2330_; uint8_t v_isSharedCheck_2334_; 
v_a_2327_ = lean_ctor_get(v___x_2316_, 0);
v_isSharedCheck_2334_ = !lean_is_exclusive(v___x_2316_);
if (v_isSharedCheck_2334_ == 0)
{
v___x_2329_ = v___x_2316_;
v_isShared_2330_ = v_isSharedCheck_2334_;
goto v_resetjp_2328_;
}
else
{
lean_inc(v_a_2327_);
lean_dec(v___x_2316_);
v___x_2329_ = lean_box(0);
v_isShared_2330_ = v_isSharedCheck_2334_;
goto v_resetjp_2328_;
}
v_resetjp_2328_:
{
lean_object* v___x_2332_; 
if (v_isShared_2330_ == 0)
{
v___x_2332_ = v___x_2329_;
goto v_reusejp_2331_;
}
else
{
lean_object* v_reuseFailAlloc_2333_; 
v_reuseFailAlloc_2333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2333_, 0, v_a_2327_);
v___x_2332_ = v_reuseFailAlloc_2333_;
goto v_reusejp_2331_;
}
v_reusejp_2331_:
{
return v___x_2332_;
}
}
}
}
}
else
{
lean_object* v_a_2335_; lean_object* v___x_2337_; uint8_t v_isShared_2338_; uint8_t v_isSharedCheck_2342_; 
lean_dec_ref(v___x_2290_);
lean_dec(v_declName_2288_);
v_a_2335_ = lean_ctor_get(v___x_2306_, 0);
v_isSharedCheck_2342_ = !lean_is_exclusive(v___x_2306_);
if (v_isSharedCheck_2342_ == 0)
{
v___x_2337_ = v___x_2306_;
v_isShared_2338_ = v_isSharedCheck_2342_;
goto v_resetjp_2336_;
}
else
{
lean_inc(v_a_2335_);
lean_dec(v___x_2306_);
v___x_2337_ = lean_box(0);
v_isShared_2338_ = v_isSharedCheck_2342_;
goto v_resetjp_2336_;
}
v_resetjp_2336_:
{
lean_object* v___x_2340_; 
if (v_isShared_2338_ == 0)
{
v___x_2340_ = v___x_2337_;
goto v_reusejp_2339_;
}
else
{
lean_object* v_reuseFailAlloc_2341_; 
v_reuseFailAlloc_2341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2341_, 0, v_a_2335_);
v___x_2340_ = v_reuseFailAlloc_2341_;
goto v_reusejp_2339_;
}
v_reusejp_2339_:
{
return v___x_2340_;
}
}
}
}
}
else
{
lean_object* v_a_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2350_; 
lean_dec_ref(v___x_2290_);
lean_dec(v_declName_2288_);
v_a_2343_ = lean_ctor_get(v___x_2303_, 0);
v_isSharedCheck_2350_ = !lean_is_exclusive(v___x_2303_);
if (v_isSharedCheck_2350_ == 0)
{
v___x_2345_ = v___x_2303_;
v_isShared_2346_ = v_isSharedCheck_2350_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_a_2343_);
lean_dec(v___x_2303_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2350_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v___x_2348_; 
if (v_isShared_2346_ == 0)
{
v___x_2348_ = v___x_2345_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_a_2343_);
v___x_2348_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
return v___x_2348_;
}
}
}
}
else
{
lean_object* v___x_2351_; lean_object* v___x_2352_; 
lean_dec_ref(v___x_2290_);
lean_dec(v_declName_2288_);
v___x_2351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2351_, 0, v___x_2287_);
v___x_2352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2352_, 0, v___x_2351_);
return v___x_2352_;
}
v___jp_2296_:
{
lean_object* v___x_2297_; lean_object* v___x_2298_; 
v___x_2297_ = lean_box(0);
v___x_2298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2298_, 0, v___x_2297_);
return v___x_2298_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__0___boxed(lean_object* v___x_2353_, lean_object* v_declName_2354_, lean_object* v_nonRec_2355_, lean_object* v___x_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_){
_start:
{
uint8_t v_nonRec_boxed_2362_; lean_object* v_res_2363_; 
v_nonRec_boxed_2362_ = lean_unbox(v_nonRec_2355_);
v_res_2363_ = l_Lean_Meta_getUnfoldEqnFor_x3f___lam__0(v___x_2353_, v_declName_2354_, v_nonRec_boxed_2362_, v___x_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_);
lean_dec(v___y_2360_);
lean_dec_ref(v___y_2359_);
lean_dec(v___y_2358_);
lean_dec_ref(v___y_2357_);
return v_res_2363_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___redArg(lean_object* v_msg_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_){
_start:
{
lean_object* v_ref_2370_; lean_object* v___x_2371_; lean_object* v_a_2372_; lean_object* v___x_2374_; uint8_t v_isShared_2375_; uint8_t v_isSharedCheck_2380_; 
v_ref_2370_ = lean_ctor_get(v___y_2367_, 2);
v___x_2371_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1_spec__1(v_msg_2364_, v___y_2365_, v___y_2366_, v___y_2367_, v___y_2368_);
v_a_2372_ = lean_ctor_get(v___x_2371_, 0);
v_isSharedCheck_2380_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2380_ == 0)
{
v___x_2374_ = v___x_2371_;
v_isShared_2375_ = v_isSharedCheck_2380_;
goto v_resetjp_2373_;
}
else
{
lean_inc(v_a_2372_);
lean_dec(v___x_2371_);
v___x_2374_ = lean_box(0);
v_isShared_2375_ = v_isSharedCheck_2380_;
goto v_resetjp_2373_;
}
v_resetjp_2373_:
{
lean_object* v___x_2376_; lean_object* v___x_2378_; 
lean_inc(v_ref_2370_);
v___x_2376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2376_, 0, v_ref_2370_);
lean_ctor_set(v___x_2376_, 1, v_a_2372_);
if (v_isShared_2375_ == 0)
{
lean_ctor_set_tag(v___x_2374_, 1);
lean_ctor_set(v___x_2374_, 0, v___x_2376_);
v___x_2378_ = v___x_2374_;
goto v_reusejp_2377_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v___x_2376_);
v___x_2378_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2377_;
}
v_reusejp_2377_:
{
return v___x_2378_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___redArg___boxed(lean_object* v_msg_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_){
_start:
{
lean_object* v_res_2387_; 
v_res_2387_ = l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___redArg(v_msg_2381_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_);
lean_dec(v___y_2385_);
lean_dec_ref(v___y_2384_);
lean_dec(v___y_2383_);
lean_dec_ref(v___y_2382_);
return v_res_2387_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___lam__0(lean_object* v___y_2388_, uint8_t v_isExporting_2389_, lean_object* v___x_2390_, lean_object* v___y_2391_, lean_object* v___x_2392_, lean_object* v_a_x3f_2393_){
_start:
{
lean_object* v___x_2395_; lean_object* v_env_2396_; lean_object* v_nextMacroScope_2397_; lean_object* v_ngen_2398_; lean_object* v_auxDeclNGen_2399_; lean_object* v_traceState_2400_; lean_object* v_messages_2401_; lean_object* v_infoState_2402_; lean_object* v_snapshotTasks_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2428_; 
v___x_2395_ = lean_st_ref_take(v___y_2388_);
v_env_2396_ = lean_ctor_get(v___x_2395_, 0);
v_nextMacroScope_2397_ = lean_ctor_get(v___x_2395_, 1);
v_ngen_2398_ = lean_ctor_get(v___x_2395_, 2);
v_auxDeclNGen_2399_ = lean_ctor_get(v___x_2395_, 3);
v_traceState_2400_ = lean_ctor_get(v___x_2395_, 4);
v_messages_2401_ = lean_ctor_get(v___x_2395_, 6);
v_infoState_2402_ = lean_ctor_get(v___x_2395_, 7);
v_snapshotTasks_2403_ = lean_ctor_get(v___x_2395_, 8);
v_isSharedCheck_2428_ = !lean_is_exclusive(v___x_2395_);
if (v_isSharedCheck_2428_ == 0)
{
lean_object* v_unused_2429_; 
v_unused_2429_ = lean_ctor_get(v___x_2395_, 5);
lean_dec(v_unused_2429_);
v___x_2405_ = v___x_2395_;
v_isShared_2406_ = v_isSharedCheck_2428_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_snapshotTasks_2403_);
lean_inc(v_infoState_2402_);
lean_inc(v_messages_2401_);
lean_inc(v_traceState_2400_);
lean_inc(v_auxDeclNGen_2399_);
lean_inc(v_ngen_2398_);
lean_inc(v_nextMacroScope_2397_);
lean_inc(v_env_2396_);
lean_dec(v___x_2395_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2428_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
lean_object* v___x_2407_; lean_object* v___x_2409_; 
v___x_2407_ = l_Lean_Environment_setExporting(v_env_2396_, v_isExporting_2389_);
if (v_isShared_2406_ == 0)
{
lean_ctor_set(v___x_2405_, 5, v___x_2390_);
lean_ctor_set(v___x_2405_, 0, v___x_2407_);
v___x_2409_ = v___x_2405_;
goto v_reusejp_2408_;
}
else
{
lean_object* v_reuseFailAlloc_2427_; 
v_reuseFailAlloc_2427_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2427_, 0, v___x_2407_);
lean_ctor_set(v_reuseFailAlloc_2427_, 1, v_nextMacroScope_2397_);
lean_ctor_set(v_reuseFailAlloc_2427_, 2, v_ngen_2398_);
lean_ctor_set(v_reuseFailAlloc_2427_, 3, v_auxDeclNGen_2399_);
lean_ctor_set(v_reuseFailAlloc_2427_, 4, v_traceState_2400_);
lean_ctor_set(v_reuseFailAlloc_2427_, 5, v___x_2390_);
lean_ctor_set(v_reuseFailAlloc_2427_, 6, v_messages_2401_);
lean_ctor_set(v_reuseFailAlloc_2427_, 7, v_infoState_2402_);
lean_ctor_set(v_reuseFailAlloc_2427_, 8, v_snapshotTasks_2403_);
v___x_2409_ = v_reuseFailAlloc_2427_;
goto v_reusejp_2408_;
}
v_reusejp_2408_:
{
lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v_mctx_2412_; lean_object* v_zetaDeltaFVarIds_2413_; lean_object* v_postponed_2414_; lean_object* v_diag_2415_; lean_object* v___x_2417_; uint8_t v_isShared_2418_; uint8_t v_isSharedCheck_2425_; 
v___x_2410_ = lean_st_ref_put(v___y_2388_, v___x_2409_);
v___x_2411_ = lean_st_ref_take(v___y_2391_);
v_mctx_2412_ = lean_ctor_get(v___x_2411_, 0);
v_zetaDeltaFVarIds_2413_ = lean_ctor_get(v___x_2411_, 2);
v_postponed_2414_ = lean_ctor_get(v___x_2411_, 3);
v_diag_2415_ = lean_ctor_get(v___x_2411_, 4);
v_isSharedCheck_2425_ = !lean_is_exclusive(v___x_2411_);
if (v_isSharedCheck_2425_ == 0)
{
lean_object* v_unused_2426_; 
v_unused_2426_ = lean_ctor_get(v___x_2411_, 1);
lean_dec(v_unused_2426_);
v___x_2417_ = v___x_2411_;
v_isShared_2418_ = v_isSharedCheck_2425_;
goto v_resetjp_2416_;
}
else
{
lean_inc(v_diag_2415_);
lean_inc(v_postponed_2414_);
lean_inc(v_zetaDeltaFVarIds_2413_);
lean_inc(v_mctx_2412_);
lean_dec(v___x_2411_);
v___x_2417_ = lean_box(0);
v_isShared_2418_ = v_isSharedCheck_2425_;
goto v_resetjp_2416_;
}
v_resetjp_2416_:
{
lean_object* v___x_2419_; lean_object* v___x_2421_; 
v___x_2419_ = lean_box(0);
if (v_isShared_2418_ == 0)
{
lean_ctor_set(v___x_2417_, 1, v___x_2392_);
v___x_2421_ = v___x_2417_;
goto v_reusejp_2420_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_mctx_2412_);
lean_ctor_set(v_reuseFailAlloc_2424_, 1, v___x_2392_);
lean_ctor_set(v_reuseFailAlloc_2424_, 2, v_zetaDeltaFVarIds_2413_);
lean_ctor_set(v_reuseFailAlloc_2424_, 3, v_postponed_2414_);
lean_ctor_set(v_reuseFailAlloc_2424_, 4, v_diag_2415_);
v___x_2421_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2420_;
}
v_reusejp_2420_:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; 
v___x_2422_ = lean_st_ref_put(v___y_2391_, v___x_2421_);
v___x_2423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2423_, 0, v___x_2419_);
return v___x_2423_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___lam__0___boxed(lean_object* v___y_2430_, lean_object* v_isExporting_2431_, lean_object* v___x_2432_, lean_object* v___y_2433_, lean_object* v___x_2434_, lean_object* v_a_x3f_2435_, lean_object* v___y_2436_){
_start:
{
uint8_t v_isExporting_boxed_2437_; lean_object* v_res_2438_; 
v_isExporting_boxed_2437_ = lean_unbox(v_isExporting_2431_);
v_res_2438_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___lam__0(v___y_2430_, v_isExporting_boxed_2437_, v___x_2432_, v___y_2433_, v___x_2434_, v_a_x3f_2435_);
lean_dec(v_a_x3f_2435_);
lean_dec(v___y_2433_);
lean_dec(v___y_2430_);
return v_res_2438_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg(lean_object* v_x_2439_, uint8_t v_isExporting_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_){
_start:
{
lean_object* v___x_2446_; lean_object* v_env_2447_; lean_object* v___x_2448_; uint8_t v_isModule_2449_; 
v___x_2446_ = lean_st_ref_get(v___y_2444_);
v_env_2447_ = lean_ctor_get(v___x_2446_, 0);
lean_inc_ref(v_env_2447_);
lean_dec(v___x_2446_);
v___x_2448_ = l_Lean_Environment_header(v_env_2447_);
v_isModule_2449_ = lean_ctor_get_uint8(v___x_2448_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2448_);
if (v_isModule_2449_ == 0)
{
lean_object* v___x_2450_; 
lean_dec_ref(v_env_2447_);
lean_inc(v___y_2444_);
lean_inc_ref(v___y_2443_);
lean_inc(v___y_2442_);
lean_inc_ref(v___y_2441_);
v___x_2450_ = lean_apply_5(v_x_2439_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_, lean_box(0));
return v___x_2450_;
}
else
{
uint8_t v_isExporting_2451_; 
v_isExporting_2451_ = lean_ctor_get_uint8(v_env_2447_, sizeof(void*)*8);
lean_dec_ref(v_env_2447_);
if (v_isExporting_2440_ == 0)
{
if (v_isExporting_2451_ == 0)
{
lean_object* v___x_2517_; 
lean_inc(v___y_2444_);
lean_inc_ref(v___y_2443_);
lean_inc(v___y_2442_);
lean_inc_ref(v___y_2441_);
v___x_2517_ = lean_apply_5(v_x_2439_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_, lean_box(0));
return v___x_2517_;
}
else
{
goto v___jp_2452_;
}
}
else
{
if (v_isExporting_2451_ == 0)
{
goto v___jp_2452_;
}
else
{
lean_object* v___x_2518_; 
lean_inc(v___y_2444_);
lean_inc_ref(v___y_2443_);
lean_inc(v___y_2442_);
lean_inc_ref(v___y_2441_);
v___x_2518_ = lean_apply_5(v_x_2439_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_, lean_box(0));
return v___x_2518_;
}
}
v___jp_2452_:
{
lean_object* v___x_2453_; lean_object* v_env_2454_; lean_object* v_nextMacroScope_2455_; lean_object* v_ngen_2456_; lean_object* v_auxDeclNGen_2457_; lean_object* v_traceState_2458_; lean_object* v_messages_2459_; lean_object* v_infoState_2460_; lean_object* v_snapshotTasks_2461_; lean_object* v___x_2463_; uint8_t v_isShared_2464_; uint8_t v_isSharedCheck_2515_; 
v___x_2453_ = lean_st_ref_take(v___y_2444_);
v_env_2454_ = lean_ctor_get(v___x_2453_, 0);
v_nextMacroScope_2455_ = lean_ctor_get(v___x_2453_, 1);
v_ngen_2456_ = lean_ctor_get(v___x_2453_, 2);
v_auxDeclNGen_2457_ = lean_ctor_get(v___x_2453_, 3);
v_traceState_2458_ = lean_ctor_get(v___x_2453_, 4);
v_messages_2459_ = lean_ctor_get(v___x_2453_, 6);
v_infoState_2460_ = lean_ctor_get(v___x_2453_, 7);
v_snapshotTasks_2461_ = lean_ctor_get(v___x_2453_, 8);
v_isSharedCheck_2515_ = !lean_is_exclusive(v___x_2453_);
if (v_isSharedCheck_2515_ == 0)
{
lean_object* v_unused_2516_; 
v_unused_2516_ = lean_ctor_get(v___x_2453_, 5);
lean_dec(v_unused_2516_);
v___x_2463_ = v___x_2453_;
v_isShared_2464_ = v_isSharedCheck_2515_;
goto v_resetjp_2462_;
}
else
{
lean_inc(v_snapshotTasks_2461_);
lean_inc(v_infoState_2460_);
lean_inc(v_messages_2459_);
lean_inc(v_traceState_2458_);
lean_inc(v_auxDeclNGen_2457_);
lean_inc(v_ngen_2456_);
lean_inc(v_nextMacroScope_2455_);
lean_inc(v_env_2454_);
lean_dec(v___x_2453_);
v___x_2463_ = lean_box(0);
v_isShared_2464_ = v_isSharedCheck_2515_;
goto v_resetjp_2462_;
}
v_resetjp_2462_:
{
lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2468_; 
v___x_2465_ = l_Lean_Environment_setExporting(v_env_2454_, v_isExporting_2440_);
v___x_2466_ = lean_obj_once(&l_Lean_Meta_withEqnOptions___redArg___closed__1, &l_Lean_Meta_withEqnOptions___redArg___closed__1_once, _init_l_Lean_Meta_withEqnOptions___redArg___closed__1);
if (v_isShared_2464_ == 0)
{
lean_ctor_set(v___x_2463_, 5, v___x_2466_);
lean_ctor_set(v___x_2463_, 0, v___x_2465_);
v___x_2468_ = v___x_2463_;
goto v_reusejp_2467_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v___x_2465_);
lean_ctor_set(v_reuseFailAlloc_2514_, 1, v_nextMacroScope_2455_);
lean_ctor_set(v_reuseFailAlloc_2514_, 2, v_ngen_2456_);
lean_ctor_set(v_reuseFailAlloc_2514_, 3, v_auxDeclNGen_2457_);
lean_ctor_set(v_reuseFailAlloc_2514_, 4, v_traceState_2458_);
lean_ctor_set(v_reuseFailAlloc_2514_, 5, v___x_2466_);
lean_ctor_set(v_reuseFailAlloc_2514_, 6, v_messages_2459_);
lean_ctor_set(v_reuseFailAlloc_2514_, 7, v_infoState_2460_);
lean_ctor_set(v_reuseFailAlloc_2514_, 8, v_snapshotTasks_2461_);
v___x_2468_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2467_;
}
v_reusejp_2467_:
{
lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v_mctx_2471_; lean_object* v_zetaDeltaFVarIds_2472_; lean_object* v_postponed_2473_; lean_object* v_diag_2474_; lean_object* v___x_2476_; uint8_t v_isShared_2477_; uint8_t v_isSharedCheck_2512_; 
v___x_2469_ = lean_st_ref_put(v___y_2444_, v___x_2468_);
v___x_2470_ = lean_st_ref_take(v___y_2442_);
v_mctx_2471_ = lean_ctor_get(v___x_2470_, 0);
v_zetaDeltaFVarIds_2472_ = lean_ctor_get(v___x_2470_, 2);
v_postponed_2473_ = lean_ctor_get(v___x_2470_, 3);
v_diag_2474_ = lean_ctor_get(v___x_2470_, 4);
v_isSharedCheck_2512_ = !lean_is_exclusive(v___x_2470_);
if (v_isSharedCheck_2512_ == 0)
{
lean_object* v_unused_2513_; 
v_unused_2513_ = lean_ctor_get(v___x_2470_, 1);
lean_dec(v_unused_2513_);
v___x_2476_ = v___x_2470_;
v_isShared_2477_ = v_isSharedCheck_2512_;
goto v_resetjp_2475_;
}
else
{
lean_inc(v_diag_2474_);
lean_inc(v_postponed_2473_);
lean_inc(v_zetaDeltaFVarIds_2472_);
lean_inc(v_mctx_2471_);
lean_dec(v___x_2470_);
v___x_2476_ = lean_box(0);
v_isShared_2477_ = v_isSharedCheck_2512_;
goto v_resetjp_2475_;
}
v_resetjp_2475_:
{
lean_object* v___x_2478_; lean_object* v___x_2480_; 
v___x_2478_ = lean_obj_once(&l_Lean_Meta_saveEqnAffectingOptions___closed__2, &l_Lean_Meta_saveEqnAffectingOptions___closed__2_once, _init_l_Lean_Meta_saveEqnAffectingOptions___closed__2);
if (v_isShared_2477_ == 0)
{
lean_ctor_set(v___x_2476_, 1, v___x_2478_);
v___x_2480_ = v___x_2476_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2511_; 
v_reuseFailAlloc_2511_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2511_, 0, v_mctx_2471_);
lean_ctor_set(v_reuseFailAlloc_2511_, 1, v___x_2478_);
lean_ctor_set(v_reuseFailAlloc_2511_, 2, v_zetaDeltaFVarIds_2472_);
lean_ctor_set(v_reuseFailAlloc_2511_, 3, v_postponed_2473_);
lean_ctor_set(v_reuseFailAlloc_2511_, 4, v_diag_2474_);
v___x_2480_ = v_reuseFailAlloc_2511_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
lean_object* v___x_2481_; lean_object* v_r_2482_; 
v___x_2481_ = lean_st_ref_put(v___y_2442_, v___x_2480_);
lean_inc(v___y_2444_);
lean_inc_ref(v___y_2443_);
lean_inc(v___y_2442_);
lean_inc_ref(v___y_2441_);
v_r_2482_ = lean_apply_5(v_x_2439_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_, lean_box(0));
if (lean_obj_tag(v_r_2482_) == 0)
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2499_; 
v_a_2483_ = lean_ctor_get(v_r_2482_, 0);
v_isSharedCheck_2499_ = !lean_is_exclusive(v_r_2482_);
if (v_isSharedCheck_2499_ == 0)
{
v___x_2485_ = v_r_2482_;
v_isShared_2486_ = v_isSharedCheck_2499_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v_r_2482_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2499_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2488_; 
lean_inc(v_a_2483_);
if (v_isShared_2486_ == 0)
{
lean_ctor_set_tag(v___x_2485_, 1);
v___x_2488_ = v___x_2485_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2498_; 
v_reuseFailAlloc_2498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2498_, 0, v_a_2483_);
v___x_2488_ = v_reuseFailAlloc_2498_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
lean_object* v___x_2489_; lean_object* v___x_2491_; uint8_t v_isShared_2492_; uint8_t v_isSharedCheck_2496_; 
v___x_2489_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___lam__0(v___y_2444_, v_isExporting_2451_, v___x_2466_, v___y_2442_, v___x_2478_, v___x_2488_);
lean_dec_ref(v___x_2488_);
v_isSharedCheck_2496_ = !lean_is_exclusive(v___x_2489_);
if (v_isSharedCheck_2496_ == 0)
{
lean_object* v_unused_2497_; 
v_unused_2497_ = lean_ctor_get(v___x_2489_, 0);
lean_dec(v_unused_2497_);
v___x_2491_ = v___x_2489_;
v_isShared_2492_ = v_isSharedCheck_2496_;
goto v_resetjp_2490_;
}
else
{
lean_dec(v___x_2489_);
v___x_2491_ = lean_box(0);
v_isShared_2492_ = v_isSharedCheck_2496_;
goto v_resetjp_2490_;
}
v_resetjp_2490_:
{
lean_object* v___x_2494_; 
if (v_isShared_2492_ == 0)
{
lean_ctor_set(v___x_2491_, 0, v_a_2483_);
v___x_2494_ = v___x_2491_;
goto v_reusejp_2493_;
}
else
{
lean_object* v_reuseFailAlloc_2495_; 
v_reuseFailAlloc_2495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2495_, 0, v_a_2483_);
v___x_2494_ = v_reuseFailAlloc_2495_;
goto v_reusejp_2493_;
}
v_reusejp_2493_:
{
return v___x_2494_;
}
}
}
}
}
else
{
lean_object* v_a_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2504_; uint8_t v_isShared_2505_; uint8_t v_isSharedCheck_2509_; 
v_a_2500_ = lean_ctor_get(v_r_2482_, 0);
lean_inc(v_a_2500_);
lean_dec_ref_known(v_r_2482_, 1);
v___x_2501_ = lean_box(0);
v___x_2502_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___lam__0(v___y_2444_, v_isExporting_2451_, v___x_2466_, v___y_2442_, v___x_2478_, v___x_2501_);
v_isSharedCheck_2509_ = !lean_is_exclusive(v___x_2502_);
if (v_isSharedCheck_2509_ == 0)
{
lean_object* v_unused_2510_; 
v_unused_2510_ = lean_ctor_get(v___x_2502_, 0);
lean_dec(v_unused_2510_);
v___x_2504_ = v___x_2502_;
v_isShared_2505_ = v_isSharedCheck_2509_;
goto v_resetjp_2503_;
}
else
{
lean_dec(v___x_2502_);
v___x_2504_ = lean_box(0);
v_isShared_2505_ = v_isSharedCheck_2509_;
goto v_resetjp_2503_;
}
v_resetjp_2503_:
{
lean_object* v___x_2507_; 
if (v_isShared_2505_ == 0)
{
lean_ctor_set_tag(v___x_2504_, 1);
lean_ctor_set(v___x_2504_, 0, v_a_2500_);
v___x_2507_ = v___x_2504_;
goto v_reusejp_2506_;
}
else
{
lean_object* v_reuseFailAlloc_2508_; 
v_reuseFailAlloc_2508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2508_, 0, v_a_2500_);
v___x_2507_ = v_reuseFailAlloc_2508_;
goto v_reusejp_2506_;
}
v_reusejp_2506_:
{
return v___x_2507_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg___boxed(lean_object* v_x_2519_, lean_object* v_isExporting_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_){
_start:
{
uint8_t v_isExporting_boxed_2526_; lean_object* v_res_2527_; 
v_isExporting_boxed_2526_ = lean_unbox(v_isExporting_2520_);
v_res_2527_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg(v_x_2519_, v_isExporting_boxed_2526_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_);
lean_dec(v___y_2524_);
lean_dec_ref(v___y_2523_);
lean_dec(v___y_2522_);
lean_dec_ref(v___y_2521_);
return v_res_2527_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___redArg(lean_object* v_x_2528_, uint8_t v_when_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_){
_start:
{
if (v_when_2529_ == 0)
{
lean_object* v___x_2535_; 
lean_inc(v___y_2533_);
lean_inc_ref(v___y_2532_);
lean_inc(v___y_2531_);
lean_inc_ref(v___y_2530_);
v___x_2535_ = lean_apply_5(v_x_2528_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_, lean_box(0));
return v___x_2535_;
}
else
{
uint8_t v___x_2536_; lean_object* v___x_2537_; 
v___x_2536_ = 0;
v___x_2537_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg(v_x_2528_, v___x_2536_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_);
return v___x_2537_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___redArg___boxed(lean_object* v_x_2538_, lean_object* v_when_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_){
_start:
{
uint8_t v_when_boxed_2545_; lean_object* v_res_2546_; 
v_when_boxed_2545_ = lean_unbox(v_when_2539_);
v_res_2546_ = l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___redArg(v_x_2538_, v_when_boxed_2545_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_);
lean_dec(v___y_2543_);
lean_dec_ref(v___y_2542_);
lean_dec(v___y_2541_);
lean_dec_ref(v___y_2540_);
return v_res_2546_;
}
}
static lean_object* _init_l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2548_; lean_object* v___x_2549_; 
v___x_2548_ = ((lean_object*)(l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__0));
v___x_2549_ = l_Lean_stringToMessageData(v___x_2548_);
return v___x_2549_;
}
}
static lean_object* _init_l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2551_; lean_object* v___x_2552_; 
v___x_2551_ = ((lean_object*)(l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__2));
v___x_2552_ = l_Lean_stringToMessageData(v___x_2551_);
return v___x_2552_;
}
}
static lean_object* _init_l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__5(void){
_start:
{
lean_object* v___x_2554_; lean_object* v___x_2555_; 
v___x_2554_ = ((lean_object*)(l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__4));
v___x_2555_ = l_Lean_stringToMessageData(v___x_2554_);
return v___x_2555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1(lean_object* v_declName_2556_, uint8_t v_nonRec_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_){
_start:
{
lean_object* v___x_2563_; lean_object* v_env_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___f_2568_; uint8_t v___x_2569_; lean_object* v___x_2570_; 
v___x_2563_ = lean_st_ref_get(v___y_2561_);
v_env_2564_ = lean_ctor_get(v___x_2563_, 0);
lean_inc_ref(v_env_2564_);
lean_dec(v___x_2563_);
v___x_2565_ = ((lean_object*)(l_Lean_Meta_unfoldThmSuffix___closed__0));
lean_inc(v_declName_2556_);
v___x_2566_ = l_Lean_Meta_mkEqLikeNameFor(v_env_2564_, v_declName_2556_, v___x_2565_);
v___x_2567_ = lean_box(v_nonRec_2557_);
lean_inc(v___x_2566_);
v___f_2568_ = lean_alloc_closure((void*)(l_Lean_Meta_getUnfoldEqnFor_x3f___lam__0___boxed), 9, 4);
lean_closure_set(v___f_2568_, 0, v___x_2566_);
lean_closure_set(v___f_2568_, 1, v_declName_2556_);
lean_closure_set(v___f_2568_, 2, v___x_2567_);
lean_closure_set(v___f_2568_, 3, v___x_2565_);
v___x_2569_ = 1;
v___x_2570_ = l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___redArg(v___f_2568_, v___x_2569_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_);
if (lean_obj_tag(v___x_2570_) == 0)
{
lean_object* v_a_2571_; 
v_a_2571_ = lean_ctor_get(v___x_2570_, 0);
lean_inc(v_a_2571_);
if (lean_obj_tag(v_a_2571_) == 1)
{
lean_object* v_val_2572_; uint8_t v___x_2573_; 
v_val_2572_ = lean_ctor_get(v_a_2571_, 0);
lean_inc(v_val_2572_);
lean_dec_ref_known(v_a_2571_, 1);
v___x_2573_ = lean_name_eq(v_val_2572_, v___x_2566_);
if (v___x_2573_ == 0)
{
lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v_a_2584_; lean_object* v___x_2586_; uint8_t v_isShared_2587_; uint8_t v_isSharedCheck_2591_; 
lean_dec_ref_known(v___x_2570_, 1);
v___x_2574_ = lean_obj_once(&l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__1, &l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__1_once, _init_l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__1);
v___x_2575_ = l_Lean_MessageData_ofName(v_val_2572_);
v___x_2576_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2576_, 0, v___x_2574_);
lean_ctor_set(v___x_2576_, 1, v___x_2575_);
v___x_2577_ = lean_obj_once(&l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__3, &l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__3_once, _init_l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__3);
v___x_2578_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2578_, 0, v___x_2576_);
lean_ctor_set(v___x_2578_, 1, v___x_2577_);
v___x_2579_ = l_Lean_MessageData_ofName(v___x_2566_);
v___x_2580_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2580_, 0, v___x_2578_);
lean_ctor_set(v___x_2580_, 1, v___x_2579_);
v___x_2581_ = lean_obj_once(&l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__5, &l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__5_once, _init_l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___closed__5);
v___x_2582_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2582_, 0, v___x_2580_);
lean_ctor_set(v___x_2582_, 1, v___x_2581_);
v___x_2583_ = l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___redArg(v___x_2582_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_);
v_a_2584_ = lean_ctor_get(v___x_2583_, 0);
v_isSharedCheck_2591_ = !lean_is_exclusive(v___x_2583_);
if (v_isSharedCheck_2591_ == 0)
{
v___x_2586_ = v___x_2583_;
v_isShared_2587_ = v_isSharedCheck_2591_;
goto v_resetjp_2585_;
}
else
{
lean_inc(v_a_2584_);
lean_dec(v___x_2583_);
v___x_2586_ = lean_box(0);
v_isShared_2587_ = v_isSharedCheck_2591_;
goto v_resetjp_2585_;
}
v_resetjp_2585_:
{
lean_object* v___x_2589_; 
if (v_isShared_2587_ == 0)
{
v___x_2589_ = v___x_2586_;
goto v_reusejp_2588_;
}
else
{
lean_object* v_reuseFailAlloc_2590_; 
v_reuseFailAlloc_2590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2590_, 0, v_a_2584_);
v___x_2589_ = v_reuseFailAlloc_2590_;
goto v_reusejp_2588_;
}
v_reusejp_2588_:
{
return v___x_2589_;
}
}
}
else
{
lean_dec(v_val_2572_);
lean_dec(v___x_2566_);
return v___x_2570_;
}
}
else
{
lean_dec(v_a_2571_);
lean_dec(v___x_2566_);
return v___x_2570_;
}
}
else
{
lean_dec(v___x_2566_);
return v___x_2570_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___boxed(lean_object* v_declName_2592_, lean_object* v_nonRec_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_){
_start:
{
uint8_t v_nonRec_boxed_2599_; lean_object* v_res_2600_; 
v_nonRec_boxed_2599_ = lean_unbox(v_nonRec_2593_);
v_res_2600_ = l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1(v_declName_2592_, v_nonRec_boxed_2599_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_);
lean_dec(v___y_2597_);
lean_dec_ref(v___y_2596_);
lean_dec(v___y_2595_);
lean_dec_ref(v___y_2594_);
return v_res_2600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f(lean_object* v_declName_2601_, uint8_t v_nonRec_2602_, lean_object* v_a_2603_, lean_object* v_a_2604_, lean_object* v_a_2605_, lean_object* v_a_2606_){
_start:
{
lean_object* v___x_2608_; lean_object* v___f_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; 
v___x_2608_ = lean_box(v_nonRec_2602_);
v___f_2609_ = lean_alloc_closure((void*)(l_Lean_Meta_getUnfoldEqnFor_x3f___lam__1___boxed), 7, 2);
lean_closure_set(v___f_2609_, 0, v_declName_2601_);
lean_closure_set(v___f_2609_, 1, v___x_2608_);
v___x_2610_ = lean_unsigned_to_nat(32u);
v___x_2611_ = lean_mk_empty_array_with_capacity(v___x_2610_);
lean_dec_ref(v___x_2611_);
v___x_2612_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_2613_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__2));
v___x_2614_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore_spec__1___redArg(v___x_2612_, v___x_2613_, v___f_2609_, v_a_2603_, v_a_2604_, v_a_2605_, v_a_2606_);
return v___x_2614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldEqnFor_x3f___boxed(lean_object* v_declName_2615_, lean_object* v_nonRec_2616_, lean_object* v_a_2617_, lean_object* v_a_2618_, lean_object* v_a_2619_, lean_object* v_a_2620_, lean_object* v_a_2621_){
_start:
{
uint8_t v_nonRec_boxed_2622_; lean_object* v_res_2623_; 
v_nonRec_boxed_2622_ = lean_unbox(v_nonRec_2616_);
v_res_2623_ = l_Lean_Meta_getUnfoldEqnFor_x3f(v_declName_2615_, v_nonRec_boxed_2622_, v_a_2617_, v_a_2618_, v_a_2619_, v_a_2620_);
lean_dec(v_a_2620_);
lean_dec_ref(v_a_2619_);
lean_dec(v_a_2618_);
lean_dec_ref(v_a_2617_);
return v_res_2623_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0(lean_object* v_declName_2624_, lean_object* v_as_2625_, lean_object* v_as_x27_2626_, lean_object* v_b_2627_, lean_object* v_a_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_){
_start:
{
lean_object* v___x_2634_; 
v___x_2634_ = l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___redArg(v_declName_2624_, v_as_x27_2626_, v_b_2627_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_);
return v___x_2634_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0___boxed(lean_object* v_declName_2635_, lean_object* v_as_2636_, lean_object* v_as_x27_2637_, lean_object* v_b_2638_, lean_object* v_a_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_){
_start:
{
lean_object* v_res_2645_; 
v_res_2645_ = l_List_forIn_x27_loop___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__0(v_declName_2635_, v_as_2636_, v_as_x27_2637_, v_b_2638_, v_a_2639_, v___y_2640_, v___y_2641_, v___y_2642_, v___y_2643_);
lean_dec(v___y_2643_);
lean_dec_ref(v___y_2642_);
lean_dec(v___y_2641_);
lean_dec_ref(v___y_2640_);
lean_dec(v_as_x27_2637_);
lean_dec(v_as_2636_);
return v_res_2645_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1(lean_object* v_00_u03b1_2646_, lean_object* v_x_2647_, uint8_t v_isExporting_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_){
_start:
{
lean_object* v___x_2654_; 
v___x_2654_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___redArg(v_x_2647_, v_isExporting_2648_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_);
return v___x_2654_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1___boxed(lean_object* v_00_u03b1_2655_, lean_object* v_x_2656_, lean_object* v_isExporting_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_){
_start:
{
uint8_t v_isExporting_boxed_2663_; lean_object* v_res_2664_; 
v_isExporting_boxed_2663_ = lean_unbox(v_isExporting_2657_);
v_res_2664_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1_spec__1(v_00_u03b1_2655_, v_x_2656_, v_isExporting_boxed_2663_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_);
lean_dec(v___y_2661_);
lean_dec_ref(v___y_2660_);
lean_dec(v___y_2659_);
lean_dec_ref(v___y_2658_);
return v_res_2664_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1(lean_object* v_00_u03b1_2665_, lean_object* v_x_2666_, uint8_t v_when_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_){
_start:
{
lean_object* v___x_2673_; 
v___x_2673_ = l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___redArg(v_x_2666_, v_when_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_);
return v___x_2673_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1___boxed(lean_object* v_00_u03b1_2674_, lean_object* v_x_2675_, lean_object* v_when_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_){
_start:
{
uint8_t v_when_boxed_2682_; lean_object* v_res_2683_; 
v_when_boxed_2682_ = lean_unbox(v_when_2676_);
v_res_2683_ = l_Lean_withoutExporting___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__1(v_00_u03b1_2674_, v_x_2675_, v_when_boxed_2682_, v___y_2677_, v___y_2678_, v___y_2679_, v___y_2680_);
lean_dec(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2678_);
lean_dec_ref(v___y_2677_);
return v_res_2683_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2(lean_object* v_00_u03b1_2684_, lean_object* v_msg_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_){
_start:
{
lean_object* v___x_2691_; 
v___x_2691_ = l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___redArg(v_msg_2685_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_);
return v___x_2691_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2___boxed(lean_object* v_00_u03b1_2692_, lean_object* v_msg_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_){
_start:
{
lean_object* v_res_2699_; 
v_res_2699_ = l_Lean_throwError___at___00Lean_Meta_getUnfoldEqnFor_x3f_spec__2(v_00_u03b1_2692_, v_msg_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_);
lean_dec(v___y_2697_);
lean_dec_ref(v___y_2696_);
lean_dec(v___y_2695_);
lean_dec_ref(v___y_2694_);
return v_res_2699_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; 
v___x_2700_ = lean_unsigned_to_nat(32u);
v___x_2701_ = lean_mk_empty_array_with_capacity(v___x_2700_);
v___x_2702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2702_, 0, v___x_2701_);
return v___x_2702_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; 
v___x_2703_ = ((size_t)5ULL);
v___x_2704_ = lean_unsigned_to_nat(0u);
v___x_2705_ = lean_unsigned_to_nat(32u);
v___x_2706_ = lean_mk_empty_array_with_capacity(v___x_2705_);
v___x_2707_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__0);
v___x_2708_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2708_, 0, v___x_2707_);
lean_ctor_set(v___x_2708_, 1, v___x_2706_);
lean_ctor_set(v___x_2708_, 2, v___x_2704_);
lean_ctor_set(v___x_2708_, 3, v___x_2704_);
lean_ctor_set_usize(v___x_2708_, 4, v___x_2703_);
return v___x_2708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg(lean_object* v___y_2709_){
_start:
{
lean_object* v___x_2711_; lean_object* v_traceState_2712_; lean_object* v_traces_2713_; lean_object* v___x_2714_; lean_object* v_traceState_2715_; lean_object* v_env_2716_; lean_object* v_nextMacroScope_2717_; lean_object* v_ngen_2718_; lean_object* v_auxDeclNGen_2719_; lean_object* v_cache_2720_; lean_object* v_messages_2721_; lean_object* v_infoState_2722_; lean_object* v_snapshotTasks_2723_; lean_object* v___x_2725_; uint8_t v_isShared_2726_; uint8_t v_isSharedCheck_2742_; 
v___x_2711_ = lean_st_ref_get(v___y_2709_);
v_traceState_2712_ = lean_ctor_get(v___x_2711_, 4);
lean_inc_ref(v_traceState_2712_);
lean_dec(v___x_2711_);
v_traces_2713_ = lean_ctor_get(v_traceState_2712_, 0);
lean_inc_ref(v_traces_2713_);
lean_dec_ref(v_traceState_2712_);
v___x_2714_ = lean_st_ref_take(v___y_2709_);
v_traceState_2715_ = lean_ctor_get(v___x_2714_, 4);
v_env_2716_ = lean_ctor_get(v___x_2714_, 0);
v_nextMacroScope_2717_ = lean_ctor_get(v___x_2714_, 1);
v_ngen_2718_ = lean_ctor_get(v___x_2714_, 2);
v_auxDeclNGen_2719_ = lean_ctor_get(v___x_2714_, 3);
v_cache_2720_ = lean_ctor_get(v___x_2714_, 5);
v_messages_2721_ = lean_ctor_get(v___x_2714_, 6);
v_infoState_2722_ = lean_ctor_get(v___x_2714_, 7);
v_snapshotTasks_2723_ = lean_ctor_get(v___x_2714_, 8);
v_isSharedCheck_2742_ = !lean_is_exclusive(v___x_2714_);
if (v_isSharedCheck_2742_ == 0)
{
v___x_2725_ = v___x_2714_;
v_isShared_2726_ = v_isSharedCheck_2742_;
goto v_resetjp_2724_;
}
else
{
lean_inc(v_snapshotTasks_2723_);
lean_inc(v_infoState_2722_);
lean_inc(v_messages_2721_);
lean_inc(v_cache_2720_);
lean_inc(v_traceState_2715_);
lean_inc(v_auxDeclNGen_2719_);
lean_inc(v_ngen_2718_);
lean_inc(v_nextMacroScope_2717_);
lean_inc(v_env_2716_);
lean_dec(v___x_2714_);
v___x_2725_ = lean_box(0);
v_isShared_2726_ = v_isSharedCheck_2742_;
goto v_resetjp_2724_;
}
v_resetjp_2724_:
{
uint64_t v_tid_2727_; lean_object* v___x_2729_; uint8_t v_isShared_2730_; uint8_t v_isSharedCheck_2740_; 
v_tid_2727_ = lean_ctor_get_uint64(v_traceState_2715_, sizeof(void*)*1);
v_isSharedCheck_2740_ = !lean_is_exclusive(v_traceState_2715_);
if (v_isSharedCheck_2740_ == 0)
{
lean_object* v_unused_2741_; 
v_unused_2741_ = lean_ctor_get(v_traceState_2715_, 0);
lean_dec(v_unused_2741_);
v___x_2729_ = v_traceState_2715_;
v_isShared_2730_ = v_isSharedCheck_2740_;
goto v_resetjp_2728_;
}
else
{
lean_dec(v_traceState_2715_);
v___x_2729_ = lean_box(0);
v_isShared_2730_ = v_isSharedCheck_2740_;
goto v_resetjp_2728_;
}
v_resetjp_2728_:
{
lean_object* v___x_2731_; lean_object* v___x_2733_; 
v___x_2731_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___closed__1);
if (v_isShared_2730_ == 0)
{
lean_ctor_set(v___x_2729_, 0, v___x_2731_);
v___x_2733_ = v___x_2729_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2739_; 
v_reuseFailAlloc_2739_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2739_, 0, v___x_2731_);
lean_ctor_set_uint64(v_reuseFailAlloc_2739_, sizeof(void*)*1, v_tid_2727_);
v___x_2733_ = v_reuseFailAlloc_2739_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
lean_object* v___x_2735_; 
if (v_isShared_2726_ == 0)
{
lean_ctor_set(v___x_2725_, 4, v___x_2733_);
v___x_2735_ = v___x_2725_;
goto v_reusejp_2734_;
}
else
{
lean_object* v_reuseFailAlloc_2738_; 
v_reuseFailAlloc_2738_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2738_, 0, v_env_2716_);
lean_ctor_set(v_reuseFailAlloc_2738_, 1, v_nextMacroScope_2717_);
lean_ctor_set(v_reuseFailAlloc_2738_, 2, v_ngen_2718_);
lean_ctor_set(v_reuseFailAlloc_2738_, 3, v_auxDeclNGen_2719_);
lean_ctor_set(v_reuseFailAlloc_2738_, 4, v___x_2733_);
lean_ctor_set(v_reuseFailAlloc_2738_, 5, v_cache_2720_);
lean_ctor_set(v_reuseFailAlloc_2738_, 6, v_messages_2721_);
lean_ctor_set(v_reuseFailAlloc_2738_, 7, v_infoState_2722_);
lean_ctor_set(v_reuseFailAlloc_2738_, 8, v_snapshotTasks_2723_);
v___x_2735_ = v_reuseFailAlloc_2738_;
goto v_reusejp_2734_;
}
v_reusejp_2734_:
{
lean_object* v___x_2736_; lean_object* v___x_2737_; 
v___x_2736_ = lean_st_ref_put(v___y_2709_, v___x_2735_);
v___x_2737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2737_, 0, v_traces_2713_);
return v___x_2737_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v___y_2743_, lean_object* v___y_2744_){
_start:
{
lean_object* v_res_2745_; 
v_res_2745_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg(v___y_2743_);
lean_dec(v___y_2743_);
return v_res_2745_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0(lean_object* v___y_2746_, lean_object* v___y_2747_){
_start:
{
lean_object* v___x_2749_; 
v___x_2749_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg(v___y_2747_);
return v___x_2749_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___boxed(lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_){
_start:
{
lean_object* v_res_2753_; 
v_res_2753_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0(v___y_2750_, v___y_2751_);
lean_dec(v___y_2751_);
lean_dec_ref(v___y_2750_);
return v_res_2753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(lean_object* v_____r_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_){
_start:
{
uint8_t v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; 
v___x_2758_ = 0;
v___x_2759_ = lean_box(v___x_2758_);
v___x_2760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2760_, 0, v___x_2759_);
return v___x_2760_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object* v_____r_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_){
_start:
{
lean_object* v_res_2765_; 
v_res_2765_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(v_____r_2761_, v___y_2762_, v___y_2763_);
lean_dec(v___y_2763_);
lean_dec_ref(v___y_2762_);
return v_res_2765_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2767_; lean_object* v___x_2768_; 
v___x_2767_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_2768_ = l_Lean_stringToMessageData(v___x_2767_);
return v___x_2768_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(lean_object* v_name_2769_, lean_object* v_x_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_){
_start:
{
lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; 
v___x_2774_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_2775_ = l_Lean_MessageData_ofName(v_name_2769_);
v___x_2776_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2776_, 0, v___x_2774_);
lean_ctor_set(v___x_2776_, 1, v___x_2775_);
v___x_2777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2777_, 0, v___x_2776_);
return v___x_2777_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object* v_name_2778_, lean_object* v_x_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_){
_start:
{
lean_object* v_res_2783_; 
v_res_2783_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(v_name_2778_, v_x_2779_, v___y_2780_, v___y_2781_);
lean_dec(v___y_2781_);
lean_dec_ref(v___y_2780_);
lean_dec_ref(v_x_2779_);
return v_res_2783_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_x_2784_){
_start:
{
if (lean_obj_tag(v_x_2784_) == 0)
{
lean_object* v_a_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2793_; 
v_a_2786_ = lean_ctor_get(v_x_2784_, 0);
v_isSharedCheck_2793_ = !lean_is_exclusive(v_x_2784_);
if (v_isSharedCheck_2793_ == 0)
{
v___x_2788_ = v_x_2784_;
v_isShared_2789_ = v_isSharedCheck_2793_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_a_2786_);
lean_dec(v_x_2784_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2793_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
lean_object* v___x_2791_; 
if (v_isShared_2789_ == 0)
{
lean_ctor_set_tag(v___x_2788_, 1);
v___x_2791_ = v___x_2788_;
goto v_reusejp_2790_;
}
else
{
lean_object* v_reuseFailAlloc_2792_; 
v_reuseFailAlloc_2792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2792_, 0, v_a_2786_);
v___x_2791_ = v_reuseFailAlloc_2792_;
goto v_reusejp_2790_;
}
v_reusejp_2790_:
{
return v___x_2791_;
}
}
}
else
{
lean_object* v_a_2794_; lean_object* v___x_2796_; uint8_t v_isShared_2797_; uint8_t v_isSharedCheck_2801_; 
v_a_2794_ = lean_ctor_get(v_x_2784_, 0);
v_isSharedCheck_2801_ = !lean_is_exclusive(v_x_2784_);
if (v_isSharedCheck_2801_ == 0)
{
v___x_2796_ = v_x_2784_;
v_isShared_2797_ = v_isSharedCheck_2801_;
goto v_resetjp_2795_;
}
else
{
lean_inc(v_a_2794_);
lean_dec(v_x_2784_);
v___x_2796_ = lean_box(0);
v_isShared_2797_ = v_isSharedCheck_2801_;
goto v_resetjp_2795_;
}
v_resetjp_2795_:
{
lean_object* v___x_2799_; 
if (v_isShared_2797_ == 0)
{
lean_ctor_set_tag(v___x_2796_, 0);
v___x_2799_ = v___x_2796_;
goto v_reusejp_2798_;
}
else
{
lean_object* v_reuseFailAlloc_2800_; 
v_reuseFailAlloc_2800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2800_, 0, v_a_2794_);
v___x_2799_ = v_reuseFailAlloc_2800_;
goto v_reusejp_2798_;
}
v_reusejp_2798_:
{
return v___x_2799_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_x_2802_, lean_object* v___y_2803_){
_start:
{
lean_object* v_res_2804_; 
v_res_2804_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg(v_x_2802_);
return v_res_2804_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__3(lean_object* v_e_2805_){
_start:
{
if (lean_obj_tag(v_e_2805_) == 0)
{
uint8_t v___x_2806_; 
v___x_2806_ = 2;
return v___x_2806_;
}
else
{
lean_object* v_a_2807_; uint8_t v___x_2808_; 
v_a_2807_ = lean_ctor_get(v_e_2805_, 0);
v___x_2808_ = lean_unbox(v_a_2807_);
if (v___x_2808_ == 0)
{
uint8_t v___x_2809_; 
v___x_2809_ = 1;
return v___x_2809_;
}
else
{
uint8_t v___x_2810_; 
v___x_2810_ = 0;
return v___x_2810_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__3___boxed(lean_object* v_e_2811_){
_start:
{
uint8_t v_res_2812_; lean_object* v_r_2813_; 
v_res_2812_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__3(v_e_2811_);
lean_dec_ref(v_e_2811_);
v_r_2813_ = lean_box(v_res_2812_);
return v_r_2813_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1_spec__2(size_t v_sz_2814_, size_t v_i_2815_, lean_object* v_bs_2816_){
_start:
{
uint8_t v___x_2817_; 
v___x_2817_ = lean_usize_dec_lt(v_i_2815_, v_sz_2814_);
if (v___x_2817_ == 0)
{
lean_object* v___x_2818_; 
v___x_2818_ = l_unsafeCast___redArg(v_bs_2816_);
lean_dec_ref(v_bs_2816_);
return v___x_2818_;
}
else
{
lean_object* v_v_2819_; lean_object* v___x_2820_; lean_object* v_msg_2821_; lean_object* v___x_2822_; lean_object* v_bs_x27_2823_; size_t v___x_2824_; size_t v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; 
v_v_2819_ = lean_array_uget_borrowed(v_bs_2816_, v_i_2815_);
v___x_2820_ = l_unsafeCast___redArg(v_v_2819_);
v_msg_2821_ = lean_ctor_get(v___x_2820_, 1);
lean_inc_ref(v_msg_2821_);
lean_dec(v___x_2820_);
v___x_2822_ = lean_unsigned_to_nat(0u);
v_bs_x27_2823_ = lean_array_uset(v_bs_2816_, v_i_2815_, v___x_2822_);
v___x_2824_ = ((size_t)1ULL);
v___x_2825_ = lean_usize_add(v_i_2815_, v___x_2824_);
v___x_2826_ = l_unsafeCast___redArg(v_msg_2821_);
lean_dec_ref(v_msg_2821_);
v___x_2827_ = lean_array_uset(v_bs_x27_2823_, v_i_2815_, v___x_2826_);
v_i_2815_ = v___x_2825_;
v_bs_2816_ = v___x_2827_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1_spec__2___boxed(lean_object* v_sz_2829_, lean_object* v_i_2830_, lean_object* v_bs_2831_){
_start:
{
size_t v_sz_boxed_2832_; size_t v_i_boxed_2833_; lean_object* v_res_2834_; 
v_sz_boxed_2832_ = lean_unbox_usize(v_sz_2829_);
lean_dec(v_sz_2829_);
v_i_boxed_2833_ = lean_unbox_usize(v_i_2830_);
lean_dec(v_i_2830_);
v_res_2834_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1_spec__2(v_sz_boxed_2832_, v_i_boxed_2833_, v_bs_2831_);
return v_res_2834_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1(lean_object* v_oldTraces_2835_, lean_object* v_data_2836_, lean_object* v_ref_2837_, lean_object* v_msg_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_){
_start:
{
lean_object* v_toCold_2842_; lean_object* v_currRecDepth_2843_; lean_object* v_ref_2844_; uint8_t v_diag_2845_; uint8_t v_suppressElabErrors_2846_; lean_object* v_ref_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v_traceState_2850_; lean_object* v_traces_2851_; lean_object* v___x_2852_; size_t v_sz_2853_; size_t v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v_msg_2858_; lean_object* v___x_2859_; lean_object* v_a_2860_; lean_object* v___x_2862_; uint8_t v_isShared_2863_; uint8_t v_isSharedCheck_2897_; 
v_toCold_2842_ = lean_ctor_get(v___y_2839_, 0);
v_currRecDepth_2843_ = lean_ctor_get(v___y_2839_, 1);
v_ref_2844_ = lean_ctor_get(v___y_2839_, 2);
v_diag_2845_ = lean_ctor_get_uint8(v___y_2839_, sizeof(void*)*3);
v_suppressElabErrors_2846_ = lean_ctor_get_uint8(v___y_2839_, sizeof(void*)*3 + 1);
v_ref_2847_ = l_Lean_replaceRef(v_ref_2837_, v_ref_2844_);
lean_inc(v_currRecDepth_2843_);
lean_inc_ref(v_toCold_2842_);
v___x_2848_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2848_, 0, v_toCold_2842_);
lean_ctor_set(v___x_2848_, 1, v_currRecDepth_2843_);
lean_ctor_set(v___x_2848_, 2, v_ref_2847_);
lean_ctor_set_uint8(v___x_2848_, sizeof(void*)*3, v_diag_2845_);
lean_ctor_set_uint8(v___x_2848_, sizeof(void*)*3 + 1, v_suppressElabErrors_2846_);
v___x_2849_ = lean_st_ref_get(v___y_2840_);
v_traceState_2850_ = lean_ctor_get(v___x_2849_, 4);
lean_inc_ref(v_traceState_2850_);
lean_dec(v___x_2849_);
v_traces_2851_ = lean_ctor_get(v_traceState_2850_, 0);
lean_inc_ref(v_traces_2851_);
lean_dec_ref(v_traceState_2850_);
v___x_2852_ = l_Lean_PersistentArray_toArray___redArg(v_traces_2851_);
lean_dec_ref(v_traces_2851_);
v_sz_2853_ = lean_array_size(v___x_2852_);
v___x_2854_ = ((size_t)0ULL);
v___x_2855_ = l_unsafeCast___redArg(v___x_2852_);
lean_dec_ref(v___x_2852_);
v___x_2856_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1_spec__2(v_sz_2853_, v___x_2854_, v___x_2855_);
v___x_2857_ = l_unsafeCast___redArg(v___x_2856_);
lean_dec_ref(v___x_2856_);
v_msg_2858_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_2858_, 0, v_data_2836_);
lean_ctor_set(v_msg_2858_, 1, v_msg_2838_);
lean_ctor_set(v_msg_2858_, 2, v___x_2857_);
v___x_2859_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2(v_msg_2858_, v___x_2848_, v___y_2840_);
lean_dec_ref_known(v___x_2848_, 3);
v_a_2860_ = lean_ctor_get(v___x_2859_, 0);
v_isSharedCheck_2897_ = !lean_is_exclusive(v___x_2859_);
if (v_isSharedCheck_2897_ == 0)
{
v___x_2862_ = v___x_2859_;
v_isShared_2863_ = v_isSharedCheck_2897_;
goto v_resetjp_2861_;
}
else
{
lean_inc(v_a_2860_);
lean_dec(v___x_2859_);
v___x_2862_ = lean_box(0);
v_isShared_2863_ = v_isSharedCheck_2897_;
goto v_resetjp_2861_;
}
v_resetjp_2861_:
{
lean_object* v___x_2864_; lean_object* v_traceState_2865_; lean_object* v_env_2866_; lean_object* v_nextMacroScope_2867_; lean_object* v_ngen_2868_; lean_object* v_auxDeclNGen_2869_; lean_object* v_cache_2870_; lean_object* v_messages_2871_; lean_object* v_infoState_2872_; lean_object* v_snapshotTasks_2873_; lean_object* v___x_2875_; uint8_t v_isShared_2876_; uint8_t v_isSharedCheck_2896_; 
v___x_2864_ = lean_st_ref_take(v___y_2840_);
v_traceState_2865_ = lean_ctor_get(v___x_2864_, 4);
v_env_2866_ = lean_ctor_get(v___x_2864_, 0);
v_nextMacroScope_2867_ = lean_ctor_get(v___x_2864_, 1);
v_ngen_2868_ = lean_ctor_get(v___x_2864_, 2);
v_auxDeclNGen_2869_ = lean_ctor_get(v___x_2864_, 3);
v_cache_2870_ = lean_ctor_get(v___x_2864_, 5);
v_messages_2871_ = lean_ctor_get(v___x_2864_, 6);
v_infoState_2872_ = lean_ctor_get(v___x_2864_, 7);
v_snapshotTasks_2873_ = lean_ctor_get(v___x_2864_, 8);
v_isSharedCheck_2896_ = !lean_is_exclusive(v___x_2864_);
if (v_isSharedCheck_2896_ == 0)
{
v___x_2875_ = v___x_2864_;
v_isShared_2876_ = v_isSharedCheck_2896_;
goto v_resetjp_2874_;
}
else
{
lean_inc(v_snapshotTasks_2873_);
lean_inc(v_infoState_2872_);
lean_inc(v_messages_2871_);
lean_inc(v_cache_2870_);
lean_inc(v_traceState_2865_);
lean_inc(v_auxDeclNGen_2869_);
lean_inc(v_ngen_2868_);
lean_inc(v_nextMacroScope_2867_);
lean_inc(v_env_2866_);
lean_dec(v___x_2864_);
v___x_2875_ = lean_box(0);
v_isShared_2876_ = v_isSharedCheck_2896_;
goto v_resetjp_2874_;
}
v_resetjp_2874_:
{
uint64_t v_tid_2877_; lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_2894_; 
v_tid_2877_ = lean_ctor_get_uint64(v_traceState_2865_, sizeof(void*)*1);
v_isSharedCheck_2894_ = !lean_is_exclusive(v_traceState_2865_);
if (v_isSharedCheck_2894_ == 0)
{
lean_object* v_unused_2895_; 
v_unused_2895_ = lean_ctor_get(v_traceState_2865_, 0);
lean_dec(v_unused_2895_);
v___x_2879_ = v_traceState_2865_;
v_isShared_2880_ = v_isSharedCheck_2894_;
goto v_resetjp_2878_;
}
else
{
lean_dec(v_traceState_2865_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_2894_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2885_; 
v___x_2881_ = lean_box(0);
v___x_2882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2882_, 0, v_ref_2837_);
lean_ctor_set(v___x_2882_, 1, v_a_2860_);
v___x_2883_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_2835_, v___x_2882_);
if (v_isShared_2880_ == 0)
{
lean_ctor_set(v___x_2879_, 0, v___x_2883_);
v___x_2885_ = v___x_2879_;
goto v_reusejp_2884_;
}
else
{
lean_object* v_reuseFailAlloc_2893_; 
v_reuseFailAlloc_2893_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2893_, 0, v___x_2883_);
lean_ctor_set_uint64(v_reuseFailAlloc_2893_, sizeof(void*)*1, v_tid_2877_);
v___x_2885_ = v_reuseFailAlloc_2893_;
goto v_reusejp_2884_;
}
v_reusejp_2884_:
{
lean_object* v___x_2887_; 
if (v_isShared_2876_ == 0)
{
lean_ctor_set(v___x_2875_, 4, v___x_2885_);
v___x_2887_ = v___x_2875_;
goto v_reusejp_2886_;
}
else
{
lean_object* v_reuseFailAlloc_2892_; 
v_reuseFailAlloc_2892_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2892_, 0, v_env_2866_);
lean_ctor_set(v_reuseFailAlloc_2892_, 1, v_nextMacroScope_2867_);
lean_ctor_set(v_reuseFailAlloc_2892_, 2, v_ngen_2868_);
lean_ctor_set(v_reuseFailAlloc_2892_, 3, v_auxDeclNGen_2869_);
lean_ctor_set(v_reuseFailAlloc_2892_, 4, v___x_2885_);
lean_ctor_set(v_reuseFailAlloc_2892_, 5, v_cache_2870_);
lean_ctor_set(v_reuseFailAlloc_2892_, 6, v_messages_2871_);
lean_ctor_set(v_reuseFailAlloc_2892_, 7, v_infoState_2872_);
lean_ctor_set(v_reuseFailAlloc_2892_, 8, v_snapshotTasks_2873_);
v___x_2887_ = v_reuseFailAlloc_2892_;
goto v_reusejp_2886_;
}
v_reusejp_2886_:
{
lean_object* v___x_2888_; lean_object* v___x_2890_; 
v___x_2888_ = lean_st_ref_put(v___y_2840_, v___x_2887_);
if (v_isShared_2863_ == 0)
{
lean_ctor_set(v___x_2862_, 0, v___x_2881_);
v___x_2890_ = v___x_2862_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2891_; 
v_reuseFailAlloc_2891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2891_, 0, v___x_2881_);
v___x_2890_ = v_reuseFailAlloc_2891_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
return v___x_2890_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object* v_oldTraces_2898_, lean_object* v_data_2899_, lean_object* v_ref_2900_, lean_object* v_msg_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_){
_start:
{
lean_object* v_res_2905_; 
v_res_2905_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1(v_oldTraces_2898_, v_data_2899_, v_ref_2900_, v_msg_2901_, v___y_2902_, v___y_2903_);
lean_dec(v___y_2903_);
lean_dec_ref(v___y_2902_);
return v_res_2905_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__1(void){
_start:
{
lean_object* v___x_2907_; lean_object* v___x_2908_; 
v___x_2907_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__0));
v___x_2908_ = l_Lean_stringToMessageData(v___x_2907_);
return v___x_2908_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__2(void){
_start:
{
lean_object* v___x_2909_; double v___x_2910_; 
v___x_2909_ = lean_unsigned_to_nat(1000u);
v___x_2910_ = lean_float_of_nat(v___x_2909_);
return v___x_2910_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1(lean_object* v_cls_2911_, uint8_t v_collapsed_2912_, lean_object* v_tag_2913_, lean_object* v_opts_2914_, uint8_t v_clsEnabled_2915_, lean_object* v_oldTraces_2916_, lean_object* v_msg_2917_, lean_object* v_resStartStop_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_){
_start:
{
lean_object* v_fst_2922_; lean_object* v_snd_2923_; lean_object* v___y_2925_; lean_object* v___y_2926_; lean_object* v_data_2927_; lean_object* v_fst_2938_; lean_object* v_snd_2939_; lean_object* v___x_2940_; uint8_t v___x_2941_; lean_object* v___y_2943_; lean_object* v_a_2944_; uint8_t v___y_2959_; double v___y_2990_; 
v_fst_2922_ = lean_ctor_get(v_resStartStop_2918_, 0);
lean_inc(v_fst_2922_);
v_snd_2923_ = lean_ctor_get(v_resStartStop_2918_, 1);
lean_inc(v_snd_2923_);
lean_dec_ref(v_resStartStop_2918_);
v_fst_2938_ = lean_ctor_get(v_snd_2923_, 0);
lean_inc(v_fst_2938_);
v_snd_2939_ = lean_ctor_get(v_snd_2923_, 1);
lean_inc(v_snd_2939_);
lean_dec(v_snd_2923_);
v___x_2940_ = l_Lean_trace_profiler;
v___x_2941_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(v_opts_2914_, v___x_2940_);
if (v___x_2941_ == 0)
{
v___y_2959_ = v___x_2941_;
goto v___jp_2958_;
}
else
{
lean_object* v___x_2995_; uint8_t v___x_2996_; 
v___x_2995_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2996_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(v_opts_2914_, v___x_2995_);
if (v___x_2996_ == 0)
{
lean_object* v___x_2997_; lean_object* v___x_2998_; double v___x_2999_; double v___x_3000_; double v___x_3001_; 
v___x_2997_ = l_Lean_trace_profiler_threshold;
v___x_2998_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__2(v_opts_2914_, v___x_2997_);
v___x_2999_ = lean_float_of_nat(v___x_2998_);
v___x_3000_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__2);
v___x_3001_ = lean_float_div(v___x_2999_, v___x_3000_);
v___y_2990_ = v___x_3001_;
goto v___jp_2989_;
}
else
{
lean_object* v___x_3002_; lean_object* v___x_3003_; double v___x_3004_; 
v___x_3002_ = l_Lean_trace_profiler_threshold;
v___x_3003_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__2(v_opts_2914_, v___x_3002_);
v___x_3004_ = lean_float_of_nat(v___x_3003_);
v___y_2990_ = v___x_3004_;
goto v___jp_2989_;
}
}
v___jp_2924_:
{
lean_object* v___x_2928_; 
lean_inc(v___y_2926_);
v___x_2928_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__1(v_oldTraces_2916_, v_data_2927_, v___y_2926_, v___y_2925_, v___y_2919_, v___y_2920_);
if (lean_obj_tag(v___x_2928_) == 0)
{
lean_object* v___x_2929_; 
lean_dec_ref_known(v___x_2928_, 1);
v___x_2929_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg(v_fst_2922_);
return v___x_2929_;
}
else
{
lean_object* v_a_2930_; lean_object* v___x_2932_; uint8_t v_isShared_2933_; uint8_t v_isSharedCheck_2937_; 
lean_dec(v_fst_2922_);
v_a_2930_ = lean_ctor_get(v___x_2928_, 0);
v_isSharedCheck_2937_ = !lean_is_exclusive(v___x_2928_);
if (v_isSharedCheck_2937_ == 0)
{
v___x_2932_ = v___x_2928_;
v_isShared_2933_ = v_isSharedCheck_2937_;
goto v_resetjp_2931_;
}
else
{
lean_inc(v_a_2930_);
lean_dec(v___x_2928_);
v___x_2932_ = lean_box(0);
v_isShared_2933_ = v_isSharedCheck_2937_;
goto v_resetjp_2931_;
}
v_resetjp_2931_:
{
lean_object* v___x_2935_; 
if (v_isShared_2933_ == 0)
{
v___x_2935_ = v___x_2932_;
goto v_reusejp_2934_;
}
else
{
lean_object* v_reuseFailAlloc_2936_; 
v_reuseFailAlloc_2936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2936_, 0, v_a_2930_);
v___x_2935_ = v_reuseFailAlloc_2936_;
goto v_reusejp_2934_;
}
v_reusejp_2934_:
{
return v___x_2935_;
}
}
}
}
v___jp_2942_:
{
uint8_t v_result_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; double v___x_2948_; lean_object* v_data_2949_; 
v_result_2945_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__3(v_fst_2922_);
v___x_2946_ = lean_box(v_result_2945_);
v___x_2947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2947_, 0, v___x_2946_);
v___x_2948_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__0, &l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__0);
lean_inc_ref(v_tag_2913_);
lean_inc_ref(v___x_2947_);
lean_inc(v_cls_2911_);
v_data_2949_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2949_, 0, v_cls_2911_);
lean_ctor_set(v_data_2949_, 1, v___x_2947_);
lean_ctor_set(v_data_2949_, 2, v_tag_2913_);
lean_ctor_set_float(v_data_2949_, sizeof(void*)*3, v___x_2948_);
lean_ctor_set_float(v_data_2949_, sizeof(void*)*3 + 8, v___x_2948_);
lean_ctor_set_uint8(v_data_2949_, sizeof(void*)*3 + 16, v_collapsed_2912_);
if (v___x_2941_ == 0)
{
lean_dec_ref_known(v___x_2947_, 1);
lean_dec(v_snd_2939_);
lean_dec(v_fst_2938_);
lean_dec_ref(v_tag_2913_);
lean_dec(v_cls_2911_);
v___y_2925_ = v_a_2944_;
v___y_2926_ = v___y_2943_;
v_data_2927_ = v_data_2949_;
goto v___jp_2924_;
}
else
{
lean_object* v_data_2950_; double v___x_2951_; double v___x_2952_; 
lean_dec_ref_known(v_data_2949_, 3);
v_data_2950_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2950_, 0, v_cls_2911_);
lean_ctor_set(v_data_2950_, 1, v___x_2947_);
lean_ctor_set(v_data_2950_, 2, v_tag_2913_);
v___x_2951_ = lean_unbox_float(v_fst_2938_);
lean_dec(v_fst_2938_);
lean_ctor_set_float(v_data_2950_, sizeof(void*)*3, v___x_2951_);
v___x_2952_ = lean_unbox_float(v_snd_2939_);
lean_dec(v_snd_2939_);
lean_ctor_set_float(v_data_2950_, sizeof(void*)*3 + 8, v___x_2952_);
lean_ctor_set_uint8(v_data_2950_, sizeof(void*)*3 + 16, v_collapsed_2912_);
v___y_2925_ = v_a_2944_;
v___y_2926_ = v___y_2943_;
v_data_2927_ = v_data_2950_;
goto v___jp_2924_;
}
}
v___jp_2953_:
{
lean_object* v_ref_2954_; lean_object* v___x_2955_; 
v_ref_2954_ = lean_ctor_get(v___y_2919_, 2);
lean_inc(v___y_2920_);
lean_inc_ref(v___y_2919_);
lean_inc(v_fst_2922_);
v___x_2955_ = lean_apply_4(v_msg_2917_, v_fst_2922_, v___y_2919_, v___y_2920_, lean_box(0));
if (lean_obj_tag(v___x_2955_) == 0)
{
lean_object* v_a_2956_; 
v_a_2956_ = lean_ctor_get(v___x_2955_, 0);
lean_inc(v_a_2956_);
lean_dec_ref_known(v___x_2955_, 1);
v___y_2943_ = v_ref_2954_;
v_a_2944_ = v_a_2956_;
goto v___jp_2942_;
}
else
{
lean_object* v___x_2957_; 
lean_dec_ref_known(v___x_2955_, 1);
v___x_2957_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___closed__1);
v___y_2943_ = v_ref_2954_;
v_a_2944_ = v___x_2957_;
goto v___jp_2942_;
}
}
v___jp_2958_:
{
if (v_clsEnabled_2915_ == 0)
{
if (v___y_2959_ == 0)
{
lean_object* v___x_2960_; lean_object* v_traceState_2961_; lean_object* v_env_2962_; lean_object* v_nextMacroScope_2963_; lean_object* v_ngen_2964_; lean_object* v_auxDeclNGen_2965_; lean_object* v_cache_2966_; lean_object* v_messages_2967_; lean_object* v_infoState_2968_; lean_object* v_snapshotTasks_2969_; lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2988_; 
lean_dec(v_snd_2939_);
lean_dec(v_fst_2938_);
lean_dec_ref(v_msg_2917_);
lean_dec_ref(v_tag_2913_);
lean_dec(v_cls_2911_);
v___x_2960_ = lean_st_ref_take(v___y_2920_);
v_traceState_2961_ = lean_ctor_get(v___x_2960_, 4);
v_env_2962_ = lean_ctor_get(v___x_2960_, 0);
v_nextMacroScope_2963_ = lean_ctor_get(v___x_2960_, 1);
v_ngen_2964_ = lean_ctor_get(v___x_2960_, 2);
v_auxDeclNGen_2965_ = lean_ctor_get(v___x_2960_, 3);
v_cache_2966_ = lean_ctor_get(v___x_2960_, 5);
v_messages_2967_ = lean_ctor_get(v___x_2960_, 6);
v_infoState_2968_ = lean_ctor_get(v___x_2960_, 7);
v_snapshotTasks_2969_ = lean_ctor_get(v___x_2960_, 8);
v_isSharedCheck_2988_ = !lean_is_exclusive(v___x_2960_);
if (v_isSharedCheck_2988_ == 0)
{
v___x_2971_ = v___x_2960_;
v_isShared_2972_ = v_isSharedCheck_2988_;
goto v_resetjp_2970_;
}
else
{
lean_inc(v_snapshotTasks_2969_);
lean_inc(v_infoState_2968_);
lean_inc(v_messages_2967_);
lean_inc(v_cache_2966_);
lean_inc(v_traceState_2961_);
lean_inc(v_auxDeclNGen_2965_);
lean_inc(v_ngen_2964_);
lean_inc(v_nextMacroScope_2963_);
lean_inc(v_env_2962_);
lean_dec(v___x_2960_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2988_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
uint64_t v_tid_2973_; lean_object* v_traces_2974_; lean_object* v___x_2976_; uint8_t v_isShared_2977_; uint8_t v_isSharedCheck_2987_; 
v_tid_2973_ = lean_ctor_get_uint64(v_traceState_2961_, sizeof(void*)*1);
v_traces_2974_ = lean_ctor_get(v_traceState_2961_, 0);
v_isSharedCheck_2987_ = !lean_is_exclusive(v_traceState_2961_);
if (v_isSharedCheck_2987_ == 0)
{
v___x_2976_ = v_traceState_2961_;
v_isShared_2977_ = v_isSharedCheck_2987_;
goto v_resetjp_2975_;
}
else
{
lean_inc(v_traces_2974_);
lean_dec(v_traceState_2961_);
v___x_2976_ = lean_box(0);
v_isShared_2977_ = v_isSharedCheck_2987_;
goto v_resetjp_2975_;
}
v_resetjp_2975_:
{
lean_object* v___x_2978_; lean_object* v___x_2980_; 
v___x_2978_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2916_, v_traces_2974_);
lean_dec_ref(v_traces_2974_);
if (v_isShared_2977_ == 0)
{
lean_ctor_set(v___x_2976_, 0, v___x_2978_);
v___x_2980_ = v___x_2976_;
goto v_reusejp_2979_;
}
else
{
lean_object* v_reuseFailAlloc_2986_; 
v_reuseFailAlloc_2986_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2986_, 0, v___x_2978_);
lean_ctor_set_uint64(v_reuseFailAlloc_2986_, sizeof(void*)*1, v_tid_2973_);
v___x_2980_ = v_reuseFailAlloc_2986_;
goto v_reusejp_2979_;
}
v_reusejp_2979_:
{
lean_object* v___x_2982_; 
if (v_isShared_2972_ == 0)
{
lean_ctor_set(v___x_2971_, 4, v___x_2980_);
v___x_2982_ = v___x_2971_;
goto v_reusejp_2981_;
}
else
{
lean_object* v_reuseFailAlloc_2985_; 
v_reuseFailAlloc_2985_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2985_, 0, v_env_2962_);
lean_ctor_set(v_reuseFailAlloc_2985_, 1, v_nextMacroScope_2963_);
lean_ctor_set(v_reuseFailAlloc_2985_, 2, v_ngen_2964_);
lean_ctor_set(v_reuseFailAlloc_2985_, 3, v_auxDeclNGen_2965_);
lean_ctor_set(v_reuseFailAlloc_2985_, 4, v___x_2980_);
lean_ctor_set(v_reuseFailAlloc_2985_, 5, v_cache_2966_);
lean_ctor_set(v_reuseFailAlloc_2985_, 6, v_messages_2967_);
lean_ctor_set(v_reuseFailAlloc_2985_, 7, v_infoState_2968_);
lean_ctor_set(v_reuseFailAlloc_2985_, 8, v_snapshotTasks_2969_);
v___x_2982_ = v_reuseFailAlloc_2985_;
goto v_reusejp_2981_;
}
v_reusejp_2981_:
{
lean_object* v___x_2983_; lean_object* v___x_2984_; 
v___x_2983_ = lean_st_ref_put(v___y_2920_, v___x_2982_);
v___x_2984_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg(v_fst_2922_);
return v___x_2984_;
}
}
}
}
}
else
{
goto v___jp_2953_;
}
}
else
{
goto v___jp_2953_;
}
}
v___jp_2989_:
{
double v___x_2991_; double v___x_2992_; double v___x_2993_; uint8_t v___x_2994_; 
v___x_2991_ = lean_unbox_float(v_snd_2939_);
v___x_2992_ = lean_unbox_float(v_fst_2938_);
v___x_2993_ = lean_float_sub(v___x_2991_, v___x_2992_);
v___x_2994_ = lean_float_decLt(v___y_2990_, v___x_2993_);
v___y_2959_ = v___x_2994_;
goto v___jp_2958_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1___boxed(lean_object* v_cls_3005_, lean_object* v_collapsed_3006_, lean_object* v_tag_3007_, lean_object* v_opts_3008_, lean_object* v_clsEnabled_3009_, lean_object* v_oldTraces_3010_, lean_object* v_msg_3011_, lean_object* v_resStartStop_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_){
_start:
{
uint8_t v_collapsed_boxed_3016_; uint8_t v_clsEnabled_boxed_3017_; lean_object* v_res_3018_; 
v_collapsed_boxed_3016_ = lean_unbox(v_collapsed_3006_);
v_clsEnabled_boxed_3017_ = lean_unbox(v_clsEnabled_3009_);
v_res_3018_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1(v_cls_3005_, v_collapsed_boxed_3016_, v_tag_3007_, v_opts_3008_, v_clsEnabled_boxed_3017_, v_oldTraces_3010_, v_msg_3011_, v_resStartStop_3012_, v___y_3013_, v___y_3014_);
lean_dec(v___y_3014_);
lean_dec_ref(v___y_3013_);
lean_dec_ref(v_opts_3008_);
return v_res_3018_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; 
v___x_3021_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0);
v___x_3022_ = lean_unsigned_to_nat(0u);
v___x_3023_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_3023_, 0, v___x_3022_);
lean_ctor_set(v___x_3023_, 1, v___x_3022_);
lean_ctor_set(v___x_3023_, 2, v___x_3022_);
lean_ctor_set(v___x_3023_, 3, v___x_3022_);
lean_ctor_set(v___x_3023_, 4, v___x_3021_);
lean_ctor_set(v___x_3023_, 5, v___x_3021_);
lean_ctor_set(v___x_3023_, 6, v___x_3021_);
lean_ctor_set(v___x_3023_, 7, v___x_3021_);
lean_ctor_set(v___x_3023_, 8, v___x_3021_);
lean_ctor_set(v___x_3023_, 9, v___x_3021_);
lean_ctor_set(v___x_3023_, 10, v___x_3021_);
return v___x_3023_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3024_; lean_object* v___x_3025_; 
v___x_3024_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0);
v___x_3025_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3025_, 0, v___x_3024_);
lean_ctor_set(v___x_3025_, 1, v___x_3024_);
lean_ctor_set(v___x_3025_, 2, v___x_3024_);
lean_ctor_set(v___x_3025_, 3, v___x_3024_);
lean_ctor_set(v___x_3025_, 4, v___x_3024_);
lean_ctor_set(v___x_3025_, 5, v___x_3024_);
return v___x_3025_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3026_; lean_object* v___x_3027_; 
v___x_3026_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__0);
v___x_3027_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3027_, 0, v___x_3026_);
lean_ctor_set(v___x_3027_, 1, v___x_3026_);
lean_ctor_set(v___x_3027_, 2, v___x_3026_);
lean_ctor_set(v___x_3027_, 3, v___x_3026_);
lean_ctor_set(v___x_3027_, 4, v___x_3026_);
return v___x_3027_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; 
v___x_3031_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3032_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_withEqnOptions_spec__3___closed__1));
v___x_3033_ = l_Lean_Name_append(v___x_3032_, v___x_3031_);
return v___x_3033_;
}
}
static double _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3034_; double v___x_3035_; 
v___x_3034_ = lean_unsigned_to_nat(1000000000u);
v___x_3035_ = lean_float_of_nat(v___x_3034_);
return v___x_3035_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(lean_object* v___x_3036_, lean_object* v___f_3037_, lean_object* v_name_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_){
_start:
{
lean_object* v_toCold_3042_; lean_object* v_options_3043_; uint8_t v_hasTrace_3044_; 
v_toCold_3042_ = lean_ctor_get(v___y_3039_, 0);
v_options_3043_ = lean_ctor_get(v_toCold_3042_, 2);
v_hasTrace_3044_ = lean_ctor_get_uint8(v_options_3043_, sizeof(void*)*1);
if (v_hasTrace_3044_ == 0)
{
lean_object* v___x_3045_; lean_object* v_env_3046_; lean_object* v___x_3047_; 
lean_dec_ref(v___f_3037_);
v___x_3045_ = lean_st_ref_get(v___y_3040_);
v_env_3046_ = lean_ctor_get(v___x_3045_, 0);
lean_inc_ref(v_env_3046_);
lean_dec(v___x_3045_);
lean_inc(v_name_3038_);
v___x_3047_ = l_Lean_Meta_declFromEqLikeName(v_env_3046_, v_name_3038_);
if (lean_obj_tag(v___x_3047_) == 1)
{
lean_object* v_val_3048_; lean_object* v___x_3050_; uint8_t v_isShared_3051_; uint8_t v_isSharedCheck_3153_; 
v_val_3048_ = lean_ctor_get(v___x_3047_, 0);
v_isSharedCheck_3153_ = !lean_is_exclusive(v___x_3047_);
if (v_isSharedCheck_3153_ == 0)
{
v___x_3050_ = v___x_3047_;
v_isShared_3051_ = v_isSharedCheck_3153_;
goto v_resetjp_3049_;
}
else
{
lean_inc(v_val_3048_);
lean_dec(v___x_3047_);
v___x_3050_ = lean_box(0);
v_isShared_3051_ = v_isSharedCheck_3153_;
goto v_resetjp_3049_;
}
v_resetjp_3049_:
{
lean_object* v_fst_3052_; lean_object* v_snd_3053_; lean_object* v___x_3054_; lean_object* v_env_3055_; lean_object* v___x_3056_; uint8_t v___x_3057_; 
v_fst_3052_ = lean_ctor_get(v_val_3048_, 0);
lean_inc_n(v_fst_3052_, 2);
v_snd_3053_ = lean_ctor_get(v_val_3048_, 1);
lean_inc_n(v_snd_3053_, 2);
lean_dec(v_val_3048_);
v___x_3054_ = lean_st_ref_get(v___y_3040_);
v_env_3055_ = lean_ctor_get(v___x_3054_, 0);
lean_inc_ref(v_env_3055_);
lean_dec(v___x_3054_);
v___x_3056_ = l_Lean_Meta_mkEqLikeNameFor(v_env_3055_, v_fst_3052_, v_snd_3053_);
v___x_3057_ = lean_name_eq(v_name_3038_, v___x_3056_);
lean_dec(v___x_3056_);
lean_dec(v_name_3038_);
if (v___x_3057_ == 0)
{
lean_object* v___x_3058_; lean_object* v___x_3060_; 
lean_dec(v_snd_3053_);
lean_dec(v_fst_3052_);
lean_dec(v___x_3036_);
v___x_3058_ = lean_box(v_hasTrace_3044_);
if (v_isShared_3051_ == 0)
{
lean_ctor_set_tag(v___x_3050_, 0);
lean_ctor_set(v___x_3050_, 0, v___x_3058_);
v___x_3060_ = v___x_3050_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3061_; 
v_reuseFailAlloc_3061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3061_, 0, v___x_3058_);
v___x_3060_ = v_reuseFailAlloc_3061_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
return v___x_3060_;
}
}
else
{
uint8_t v___x_3062_; lean_object* v_a_3064_; 
lean_inc(v_snd_3053_);
v___x_3062_ = l_Lean_Meta_isEqnReservedNameSuffix(v_snd_3053_);
if (v___x_3062_ == 0)
{
lean_object* v___x_3078_; uint8_t v___x_3079_; lean_object* v_a_3081_; 
lean_del_object(v___x_3050_);
v___x_3078_ = ((lean_object*)(l_Lean_Meta_unfoldThmSuffix___closed__0));
v___x_3079_ = lean_string_dec_eq(v_snd_3053_, v___x_3078_);
lean_dec(v_snd_3053_);
if (v___x_3079_ == 0)
{
lean_object* v___x_3093_; lean_object* v___x_3094_; 
lean_dec(v_fst_3052_);
lean_dec(v___x_3036_);
v___x_3093_ = lean_box(v_hasTrace_3044_);
v___x_3094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3094_, 0, v___x_3093_);
return v___x_3094_;
}
else
{
uint8_t v___x_3095_; uint8_t v___x_3096_; uint8_t v___x_3097_; lean_object* v___x_3098_; uint64_t v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; 
v___x_3095_ = 1;
v___x_3096_ = 0;
v___x_3097_ = 2;
v___x_3098_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3098_, 0, v___x_3062_);
lean_ctor_set_uint8(v___x_3098_, 1, v___x_3062_);
lean_ctor_set_uint8(v___x_3098_, 2, v___x_3062_);
lean_ctor_set_uint8(v___x_3098_, 3, v___x_3062_);
lean_ctor_set_uint8(v___x_3098_, 4, v___x_3062_);
lean_ctor_set_uint8(v___x_3098_, 5, v___x_3079_);
lean_ctor_set_uint8(v___x_3098_, 6, v___x_3079_);
lean_ctor_set_uint8(v___x_3098_, 7, v___x_3062_);
lean_ctor_set_uint8(v___x_3098_, 8, v___x_3079_);
lean_ctor_set_uint8(v___x_3098_, 9, v___x_3095_);
lean_ctor_set_uint8(v___x_3098_, 10, v___x_3096_);
lean_ctor_set_uint8(v___x_3098_, 11, v___x_3079_);
lean_ctor_set_uint8(v___x_3098_, 12, v___x_3079_);
lean_ctor_set_uint8(v___x_3098_, 13, v___x_3079_);
lean_ctor_set_uint8(v___x_3098_, 14, v___x_3097_);
lean_ctor_set_uint8(v___x_3098_, 15, v___x_3079_);
lean_ctor_set_uint8(v___x_3098_, 16, v___x_3079_);
lean_ctor_set_uint8(v___x_3098_, 17, v___x_3079_);
lean_ctor_set_uint8(v___x_3098_, 18, v___x_3079_);
lean_ctor_set_uint8(v___x_3098_, 19, v___x_3062_);
v___x_3099_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3098_);
v___x_3100_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3100_, 0, v___x_3098_);
lean_ctor_set_uint64(v___x_3100_, sizeof(void*)*1, v___x_3099_);
v___x_3101_ = lean_unsigned_to_nat(0u);
v___x_3102_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_3103_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3104_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3105_ = lean_box(0);
lean_inc(v___x_3036_);
v___x_3106_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3106_, 0, v___x_3100_);
lean_ctor_set(v___x_3106_, 1, v___x_3036_);
lean_ctor_set(v___x_3106_, 2, v___x_3103_);
lean_ctor_set(v___x_3106_, 3, v___x_3104_);
lean_ctor_set(v___x_3106_, 4, v___x_3105_);
lean_ctor_set(v___x_3106_, 5, v___x_3101_);
lean_ctor_set(v___x_3106_, 6, v___x_3105_);
lean_ctor_set_uint8(v___x_3106_, sizeof(void*)*7, v___x_3062_);
lean_ctor_set_uint8(v___x_3106_, sizeof(void*)*7 + 1, v___x_3062_);
lean_ctor_set_uint8(v___x_3106_, sizeof(void*)*7 + 2, v___x_3062_);
lean_ctor_set_uint8(v___x_3106_, sizeof(void*)*7 + 3, v___x_3057_);
v___x_3107_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3108_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3109_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3110_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3107_);
lean_ctor_set(v___x_3110_, 1, v___x_3108_);
lean_ctor_set(v___x_3110_, 2, v___x_3036_);
lean_ctor_set(v___x_3110_, 3, v___x_3102_);
lean_ctor_set(v___x_3110_, 4, v___x_3109_);
v___x_3111_ = lean_st_mk_ref(v___x_3110_);
v___x_3112_ = l_Lean_Meta_getUnfoldEqnFor_x3f(v_fst_3052_, v___x_3057_, v___x_3106_, v___x_3111_, v___y_3039_, v___y_3040_);
lean_dec_ref_known(v___x_3106_, 7);
if (lean_obj_tag(v___x_3112_) == 0)
{
lean_object* v_a_3113_; lean_object* v___x_3114_; 
v_a_3113_ = lean_ctor_get(v___x_3112_, 0);
lean_inc(v_a_3113_);
lean_dec_ref_known(v___x_3112_, 1);
v___x_3114_ = lean_st_ref_get(v___x_3111_);
lean_dec(v___x_3111_);
lean_dec(v___x_3114_);
v_a_3081_ = v_a_3113_;
goto v___jp_3080_;
}
else
{
lean_dec(v___x_3111_);
if (lean_obj_tag(v___x_3112_) == 0)
{
lean_object* v_a_3115_; 
v_a_3115_ = lean_ctor_get(v___x_3112_, 0);
lean_inc(v_a_3115_);
lean_dec_ref_known(v___x_3112_, 1);
v_a_3081_ = v_a_3115_;
goto v___jp_3080_;
}
else
{
lean_object* v_a_3116_; lean_object* v___x_3118_; uint8_t v_isShared_3119_; uint8_t v_isSharedCheck_3123_; 
v_a_3116_ = lean_ctor_get(v___x_3112_, 0);
v_isSharedCheck_3123_ = !lean_is_exclusive(v___x_3112_);
if (v_isSharedCheck_3123_ == 0)
{
v___x_3118_ = v___x_3112_;
v_isShared_3119_ = v_isSharedCheck_3123_;
goto v_resetjp_3117_;
}
else
{
lean_inc(v_a_3116_);
lean_dec(v___x_3112_);
v___x_3118_ = lean_box(0);
v_isShared_3119_ = v_isSharedCheck_3123_;
goto v_resetjp_3117_;
}
v_resetjp_3117_:
{
lean_object* v___x_3121_; 
if (v_isShared_3119_ == 0)
{
v___x_3121_ = v___x_3118_;
goto v_reusejp_3120_;
}
else
{
lean_object* v_reuseFailAlloc_3122_; 
v_reuseFailAlloc_3122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3122_, 0, v_a_3116_);
v___x_3121_ = v_reuseFailAlloc_3122_;
goto v_reusejp_3120_;
}
v_reusejp_3120_:
{
return v___x_3121_;
}
}
}
}
}
v___jp_3080_:
{
if (lean_obj_tag(v_a_3081_) == 0)
{
lean_object* v___x_3082_; lean_object* v___x_3083_; 
v___x_3082_ = lean_box(v___x_3062_);
v___x_3083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3083_, 0, v___x_3082_);
return v___x_3083_;
}
else
{
lean_object* v___x_3085_; uint8_t v_isShared_3086_; uint8_t v_isSharedCheck_3091_; 
v_isSharedCheck_3091_ = !lean_is_exclusive(v_a_3081_);
if (v_isSharedCheck_3091_ == 0)
{
lean_object* v_unused_3092_; 
v_unused_3092_ = lean_ctor_get(v_a_3081_, 0);
lean_dec(v_unused_3092_);
v___x_3085_ = v_a_3081_;
v_isShared_3086_ = v_isSharedCheck_3091_;
goto v_resetjp_3084_;
}
else
{
lean_dec(v_a_3081_);
v___x_3085_ = lean_box(0);
v_isShared_3086_ = v_isSharedCheck_3091_;
goto v_resetjp_3084_;
}
v_resetjp_3084_:
{
lean_object* v___x_3087_; lean_object* v___x_3089_; 
v___x_3087_ = lean_box(v___x_3079_);
if (v_isShared_3086_ == 0)
{
lean_ctor_set_tag(v___x_3085_, 0);
lean_ctor_set(v___x_3085_, 0, v___x_3087_);
v___x_3089_ = v___x_3085_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v___x_3087_);
v___x_3089_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
return v___x_3089_;
}
}
}
}
}
else
{
uint8_t v___x_3124_; uint8_t v___x_3125_; uint8_t v___x_3126_; lean_object* v___x_3127_; uint64_t v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; 
lean_dec(v_snd_3053_);
v___x_3124_ = 1;
v___x_3125_ = 0;
v___x_3126_ = 2;
v___x_3127_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3127_, 0, v_hasTrace_3044_);
lean_ctor_set_uint8(v___x_3127_, 1, v_hasTrace_3044_);
lean_ctor_set_uint8(v___x_3127_, 2, v_hasTrace_3044_);
lean_ctor_set_uint8(v___x_3127_, 3, v_hasTrace_3044_);
lean_ctor_set_uint8(v___x_3127_, 4, v_hasTrace_3044_);
lean_ctor_set_uint8(v___x_3127_, 5, v___x_3062_);
lean_ctor_set_uint8(v___x_3127_, 6, v___x_3062_);
lean_ctor_set_uint8(v___x_3127_, 7, v_hasTrace_3044_);
lean_ctor_set_uint8(v___x_3127_, 8, v___x_3062_);
lean_ctor_set_uint8(v___x_3127_, 9, v___x_3124_);
lean_ctor_set_uint8(v___x_3127_, 10, v___x_3125_);
lean_ctor_set_uint8(v___x_3127_, 11, v___x_3062_);
lean_ctor_set_uint8(v___x_3127_, 12, v___x_3062_);
lean_ctor_set_uint8(v___x_3127_, 13, v___x_3062_);
lean_ctor_set_uint8(v___x_3127_, 14, v___x_3126_);
lean_ctor_set_uint8(v___x_3127_, 15, v___x_3062_);
lean_ctor_set_uint8(v___x_3127_, 16, v___x_3062_);
lean_ctor_set_uint8(v___x_3127_, 17, v___x_3062_);
lean_ctor_set_uint8(v___x_3127_, 18, v___x_3062_);
lean_ctor_set_uint8(v___x_3127_, 19, v_hasTrace_3044_);
v___x_3128_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3127_);
v___x_3129_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3129_, 0, v___x_3127_);
lean_ctor_set_uint64(v___x_3129_, sizeof(void*)*1, v___x_3128_);
v___x_3130_ = lean_unsigned_to_nat(0u);
v___x_3131_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_3132_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3133_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3134_ = lean_box(0);
lean_inc(v___x_3036_);
v___x_3135_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3135_, 0, v___x_3129_);
lean_ctor_set(v___x_3135_, 1, v___x_3036_);
lean_ctor_set(v___x_3135_, 2, v___x_3132_);
lean_ctor_set(v___x_3135_, 3, v___x_3133_);
lean_ctor_set(v___x_3135_, 4, v___x_3134_);
lean_ctor_set(v___x_3135_, 5, v___x_3130_);
lean_ctor_set(v___x_3135_, 6, v___x_3134_);
lean_ctor_set_uint8(v___x_3135_, sizeof(void*)*7, v_hasTrace_3044_);
lean_ctor_set_uint8(v___x_3135_, sizeof(void*)*7 + 1, v_hasTrace_3044_);
lean_ctor_set_uint8(v___x_3135_, sizeof(void*)*7 + 2, v_hasTrace_3044_);
lean_ctor_set_uint8(v___x_3135_, sizeof(void*)*7 + 3, v___x_3057_);
v___x_3136_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3137_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3138_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3139_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3139_, 0, v___x_3136_);
lean_ctor_set(v___x_3139_, 1, v___x_3137_);
lean_ctor_set(v___x_3139_, 2, v___x_3036_);
lean_ctor_set(v___x_3139_, 3, v___x_3131_);
lean_ctor_set(v___x_3139_, 4, v___x_3138_);
v___x_3140_ = lean_st_mk_ref(v___x_3139_);
v___x_3141_ = l_Lean_Meta_getEqnsFor_x3f(v_fst_3052_, v___x_3135_, v___x_3140_, v___y_3039_, v___y_3040_);
lean_dec_ref_known(v___x_3135_, 7);
if (lean_obj_tag(v___x_3141_) == 0)
{
lean_object* v_a_3142_; lean_object* v___x_3143_; 
v_a_3142_ = lean_ctor_get(v___x_3141_, 0);
lean_inc(v_a_3142_);
lean_dec_ref_known(v___x_3141_, 1);
v___x_3143_ = lean_st_ref_get(v___x_3140_);
lean_dec(v___x_3140_);
lean_dec(v___x_3143_);
v_a_3064_ = v_a_3142_;
goto v___jp_3063_;
}
else
{
lean_dec(v___x_3140_);
if (lean_obj_tag(v___x_3141_) == 0)
{
lean_object* v_a_3144_; 
v_a_3144_ = lean_ctor_get(v___x_3141_, 0);
lean_inc(v_a_3144_);
lean_dec_ref_known(v___x_3141_, 1);
v_a_3064_ = v_a_3144_;
goto v___jp_3063_;
}
else
{
lean_object* v_a_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3152_; 
lean_del_object(v___x_3050_);
v_a_3145_ = lean_ctor_get(v___x_3141_, 0);
v_isSharedCheck_3152_ = !lean_is_exclusive(v___x_3141_);
if (v_isSharedCheck_3152_ == 0)
{
v___x_3147_ = v___x_3141_;
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_a_3145_);
lean_dec(v___x_3141_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
v_resetjp_3146_:
{
lean_object* v___x_3150_; 
if (v_isShared_3148_ == 0)
{
v___x_3150_ = v___x_3147_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v_a_3145_);
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
v___jp_3063_:
{
if (lean_obj_tag(v_a_3064_) == 0)
{
lean_object* v___x_3065_; lean_object* v___x_3067_; 
v___x_3065_ = lean_box(v_hasTrace_3044_);
if (v_isShared_3051_ == 0)
{
lean_ctor_set_tag(v___x_3050_, 0);
lean_ctor_set(v___x_3050_, 0, v___x_3065_);
v___x_3067_ = v___x_3050_;
goto v_reusejp_3066_;
}
else
{
lean_object* v_reuseFailAlloc_3068_; 
v_reuseFailAlloc_3068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3068_, 0, v___x_3065_);
v___x_3067_ = v_reuseFailAlloc_3068_;
goto v_reusejp_3066_;
}
v_reusejp_3066_:
{
return v___x_3067_;
}
}
else
{
lean_object* v___x_3070_; uint8_t v_isShared_3071_; uint8_t v_isSharedCheck_3076_; 
lean_del_object(v___x_3050_);
v_isSharedCheck_3076_ = !lean_is_exclusive(v_a_3064_);
if (v_isSharedCheck_3076_ == 0)
{
lean_object* v_unused_3077_; 
v_unused_3077_ = lean_ctor_get(v_a_3064_, 0);
lean_dec(v_unused_3077_);
v___x_3070_ = v_a_3064_;
v_isShared_3071_ = v_isSharedCheck_3076_;
goto v_resetjp_3069_;
}
else
{
lean_dec(v_a_3064_);
v___x_3070_ = lean_box(0);
v_isShared_3071_ = v_isSharedCheck_3076_;
goto v_resetjp_3069_;
}
v_resetjp_3069_:
{
lean_object* v___x_3072_; lean_object* v___x_3074_; 
v___x_3072_ = lean_box(v___x_3062_);
if (v_isShared_3071_ == 0)
{
lean_ctor_set_tag(v___x_3070_, 0);
lean_ctor_set(v___x_3070_, 0, v___x_3072_);
v___x_3074_ = v___x_3070_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v___x_3072_);
v___x_3074_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
return v___x_3074_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3154_; lean_object* v___x_3155_; 
lean_dec(v___x_3047_);
lean_dec(v_name_3038_);
lean_dec(v___x_3036_);
v___x_3154_ = lean_box(v_hasTrace_3044_);
v___x_3155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3155_, 0, v___x_3154_);
return v___x_3155_;
}
}
else
{
lean_object* v_inheritedTraceOptions_3156_; lean_object* v___f_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; uint8_t v___x_3161_; lean_object* v___y_3163_; lean_object* v___y_3164_; lean_object* v_a_3165_; lean_object* v___y_3178_; lean_object* v___y_3179_; uint8_t v_a_3180_; lean_object* v___y_3184_; lean_object* v___y_3185_; uint8_t v___y_3186_; uint8_t v___y_3187_; lean_object* v_a_3188_; lean_object* v___y_3190_; lean_object* v___y_3191_; uint8_t v___y_3192_; uint8_t v___y_3193_; lean_object* v_a_3194_; lean_object* v___y_3196_; lean_object* v___y_3197_; lean_object* v_a_3198_; lean_object* v___y_3201_; lean_object* v___y_3202_; lean_object* v_a_3203_; lean_object* v___y_3213_; lean_object* v___y_3214_; lean_object* v_a_3215_; lean_object* v___y_3218_; lean_object* v___y_3219_; uint8_t v_a_3220_; lean_object* v___y_3224_; lean_object* v___y_3225_; lean_object* v___y_3226_; lean_object* v___y_3231_; uint8_t v___y_3232_; lean_object* v___y_3233_; lean_object* v_a_3234_; lean_object* v___y_3237_; uint8_t v___y_3238_; uint8_t v___y_3239_; lean_object* v___y_3240_; lean_object* v_a_3241_; 
v_inheritedTraceOptions_3156_ = lean_ctor_get(v_toCold_3042_, 11);
lean_inc(v_name_3038_);
v___f_3157_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed), 5, 1);
lean_closure_set(v___f_3157_, 0, v_name_3038_);
v___x_3158_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3159_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_saveEqnAffectingOptions_spec__1___closed__1));
v___x_3160_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3161_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3156_, v_options_3043_, v___x_3160_);
if (v___x_3161_ == 0)
{
lean_object* v___x_3370_; uint8_t v___x_3371_; 
v___x_3370_ = l_Lean_trace_profiler;
v___x_3371_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(v_options_3043_, v___x_3370_);
if (v___x_3371_ == 0)
{
lean_object* v___x_3372_; lean_object* v_env_3373_; lean_object* v___x_3374_; 
lean_dec_ref(v___f_3157_);
lean_dec_ref(v___f_3037_);
v___x_3372_ = lean_st_ref_get(v___y_3040_);
v_env_3373_ = lean_ctor_get(v___x_3372_, 0);
lean_inc_ref(v_env_3373_);
lean_dec(v___x_3372_);
lean_inc(v_name_3038_);
v___x_3374_ = l_Lean_Meta_declFromEqLikeName(v_env_3373_, v_name_3038_);
if (lean_obj_tag(v___x_3374_) == 1)
{
lean_object* v_val_3375_; lean_object* v___x_3377_; uint8_t v_isShared_3378_; uint8_t v_isSharedCheck_3480_; 
v_val_3375_ = lean_ctor_get(v___x_3374_, 0);
v_isSharedCheck_3480_ = !lean_is_exclusive(v___x_3374_);
if (v_isSharedCheck_3480_ == 0)
{
v___x_3377_ = v___x_3374_;
v_isShared_3378_ = v_isSharedCheck_3480_;
goto v_resetjp_3376_;
}
else
{
lean_inc(v_val_3375_);
lean_dec(v___x_3374_);
v___x_3377_ = lean_box(0);
v_isShared_3378_ = v_isSharedCheck_3480_;
goto v_resetjp_3376_;
}
v_resetjp_3376_:
{
lean_object* v_fst_3379_; lean_object* v_snd_3380_; lean_object* v___x_3381_; lean_object* v_env_3382_; lean_object* v___x_3383_; uint8_t v___x_3384_; 
v_fst_3379_ = lean_ctor_get(v_val_3375_, 0);
lean_inc_n(v_fst_3379_, 2);
v_snd_3380_ = lean_ctor_get(v_val_3375_, 1);
lean_inc_n(v_snd_3380_, 2);
lean_dec(v_val_3375_);
v___x_3381_ = lean_st_ref_get(v___y_3040_);
v_env_3382_ = lean_ctor_get(v___x_3381_, 0);
lean_inc_ref(v_env_3382_);
lean_dec(v___x_3381_);
v___x_3383_ = l_Lean_Meta_mkEqLikeNameFor(v_env_3382_, v_fst_3379_, v_snd_3380_);
v___x_3384_ = lean_name_eq(v_name_3038_, v___x_3383_);
lean_dec(v___x_3383_);
lean_dec(v_name_3038_);
if (v___x_3384_ == 0)
{
lean_object* v___x_3385_; lean_object* v___x_3387_; 
lean_dec(v_snd_3380_);
lean_dec(v_fst_3379_);
lean_dec(v___x_3036_);
v___x_3385_ = lean_box(v___x_3371_);
if (v_isShared_3378_ == 0)
{
lean_ctor_set_tag(v___x_3377_, 0);
lean_ctor_set(v___x_3377_, 0, v___x_3385_);
v___x_3387_ = v___x_3377_;
goto v_reusejp_3386_;
}
else
{
lean_object* v_reuseFailAlloc_3388_; 
v_reuseFailAlloc_3388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3388_, 0, v___x_3385_);
v___x_3387_ = v_reuseFailAlloc_3388_;
goto v_reusejp_3386_;
}
v_reusejp_3386_:
{
return v___x_3387_;
}
}
else
{
uint8_t v___x_3389_; lean_object* v_a_3391_; 
lean_inc(v_snd_3380_);
v___x_3389_ = l_Lean_Meta_isEqnReservedNameSuffix(v_snd_3380_);
if (v___x_3389_ == 0)
{
lean_object* v___x_3405_; uint8_t v___x_3406_; lean_object* v_a_3408_; 
lean_del_object(v___x_3377_);
v___x_3405_ = ((lean_object*)(l_Lean_Meta_unfoldThmSuffix___closed__0));
v___x_3406_ = lean_string_dec_eq(v_snd_3380_, v___x_3405_);
lean_dec(v_snd_3380_);
if (v___x_3406_ == 0)
{
lean_object* v___x_3420_; lean_object* v___x_3421_; 
lean_dec(v_fst_3379_);
lean_dec(v___x_3036_);
v___x_3420_ = lean_box(v___x_3371_);
v___x_3421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3421_, 0, v___x_3420_);
return v___x_3421_;
}
else
{
uint8_t v___x_3422_; uint8_t v___x_3423_; uint8_t v___x_3424_; lean_object* v___x_3425_; uint64_t v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; 
v___x_3422_ = 1;
v___x_3423_ = 0;
v___x_3424_ = 2;
v___x_3425_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3425_, 0, v___x_3389_);
lean_ctor_set_uint8(v___x_3425_, 1, v___x_3389_);
lean_ctor_set_uint8(v___x_3425_, 2, v___x_3389_);
lean_ctor_set_uint8(v___x_3425_, 3, v___x_3389_);
lean_ctor_set_uint8(v___x_3425_, 4, v___x_3389_);
lean_ctor_set_uint8(v___x_3425_, 5, v___x_3406_);
lean_ctor_set_uint8(v___x_3425_, 6, v___x_3406_);
lean_ctor_set_uint8(v___x_3425_, 7, v___x_3389_);
lean_ctor_set_uint8(v___x_3425_, 8, v___x_3406_);
lean_ctor_set_uint8(v___x_3425_, 9, v___x_3422_);
lean_ctor_set_uint8(v___x_3425_, 10, v___x_3423_);
lean_ctor_set_uint8(v___x_3425_, 11, v___x_3406_);
lean_ctor_set_uint8(v___x_3425_, 12, v___x_3406_);
lean_ctor_set_uint8(v___x_3425_, 13, v___x_3406_);
lean_ctor_set_uint8(v___x_3425_, 14, v___x_3424_);
lean_ctor_set_uint8(v___x_3425_, 15, v___x_3406_);
lean_ctor_set_uint8(v___x_3425_, 16, v___x_3406_);
lean_ctor_set_uint8(v___x_3425_, 17, v___x_3406_);
lean_ctor_set_uint8(v___x_3425_, 18, v___x_3406_);
lean_ctor_set_uint8(v___x_3425_, 19, v___x_3389_);
v___x_3426_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3425_);
v___x_3427_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3427_, 0, v___x_3425_);
lean_ctor_set_uint64(v___x_3427_, sizeof(void*)*1, v___x_3426_);
v___x_3428_ = lean_unsigned_to_nat(0u);
v___x_3429_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_3430_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3431_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3432_ = lean_box(0);
lean_inc(v___x_3036_);
v___x_3433_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3433_, 0, v___x_3427_);
lean_ctor_set(v___x_3433_, 1, v___x_3036_);
lean_ctor_set(v___x_3433_, 2, v___x_3430_);
lean_ctor_set(v___x_3433_, 3, v___x_3431_);
lean_ctor_set(v___x_3433_, 4, v___x_3432_);
lean_ctor_set(v___x_3433_, 5, v___x_3428_);
lean_ctor_set(v___x_3433_, 6, v___x_3432_);
lean_ctor_set_uint8(v___x_3433_, sizeof(void*)*7, v___x_3389_);
lean_ctor_set_uint8(v___x_3433_, sizeof(void*)*7 + 1, v___x_3389_);
lean_ctor_set_uint8(v___x_3433_, sizeof(void*)*7 + 2, v___x_3389_);
lean_ctor_set_uint8(v___x_3433_, sizeof(void*)*7 + 3, v_hasTrace_3044_);
v___x_3434_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3435_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3436_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3437_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3437_, 0, v___x_3434_);
lean_ctor_set(v___x_3437_, 1, v___x_3435_);
lean_ctor_set(v___x_3437_, 2, v___x_3036_);
lean_ctor_set(v___x_3437_, 3, v___x_3429_);
lean_ctor_set(v___x_3437_, 4, v___x_3436_);
v___x_3438_ = lean_st_mk_ref(v___x_3437_);
v___x_3439_ = l_Lean_Meta_getUnfoldEqnFor_x3f(v_fst_3379_, v_hasTrace_3044_, v___x_3433_, v___x_3438_, v___y_3039_, v___y_3040_);
lean_dec_ref_known(v___x_3433_, 7);
if (lean_obj_tag(v___x_3439_) == 0)
{
lean_object* v_a_3440_; lean_object* v___x_3441_; 
v_a_3440_ = lean_ctor_get(v___x_3439_, 0);
lean_inc(v_a_3440_);
lean_dec_ref_known(v___x_3439_, 1);
v___x_3441_ = lean_st_ref_get(v___x_3438_);
lean_dec(v___x_3438_);
lean_dec(v___x_3441_);
v_a_3408_ = v_a_3440_;
goto v___jp_3407_;
}
else
{
lean_dec(v___x_3438_);
if (lean_obj_tag(v___x_3439_) == 0)
{
lean_object* v_a_3442_; 
v_a_3442_ = lean_ctor_get(v___x_3439_, 0);
lean_inc(v_a_3442_);
lean_dec_ref_known(v___x_3439_, 1);
v_a_3408_ = v_a_3442_;
goto v___jp_3407_;
}
else
{
lean_object* v_a_3443_; lean_object* v___x_3445_; uint8_t v_isShared_3446_; uint8_t v_isSharedCheck_3450_; 
v_a_3443_ = lean_ctor_get(v___x_3439_, 0);
v_isSharedCheck_3450_ = !lean_is_exclusive(v___x_3439_);
if (v_isSharedCheck_3450_ == 0)
{
v___x_3445_ = v___x_3439_;
v_isShared_3446_ = v_isSharedCheck_3450_;
goto v_resetjp_3444_;
}
else
{
lean_inc(v_a_3443_);
lean_dec(v___x_3439_);
v___x_3445_ = lean_box(0);
v_isShared_3446_ = v_isSharedCheck_3450_;
goto v_resetjp_3444_;
}
v_resetjp_3444_:
{
lean_object* v___x_3448_; 
if (v_isShared_3446_ == 0)
{
v___x_3448_ = v___x_3445_;
goto v_reusejp_3447_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v_a_3443_);
v___x_3448_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3447_;
}
v_reusejp_3447_:
{
return v___x_3448_;
}
}
}
}
}
v___jp_3407_:
{
if (lean_obj_tag(v_a_3408_) == 0)
{
lean_object* v___x_3409_; lean_object* v___x_3410_; 
v___x_3409_ = lean_box(v___x_3389_);
v___x_3410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3410_, 0, v___x_3409_);
return v___x_3410_;
}
else
{
lean_object* v___x_3412_; uint8_t v_isShared_3413_; uint8_t v_isSharedCheck_3418_; 
v_isSharedCheck_3418_ = !lean_is_exclusive(v_a_3408_);
if (v_isSharedCheck_3418_ == 0)
{
lean_object* v_unused_3419_; 
v_unused_3419_ = lean_ctor_get(v_a_3408_, 0);
lean_dec(v_unused_3419_);
v___x_3412_ = v_a_3408_;
v_isShared_3413_ = v_isSharedCheck_3418_;
goto v_resetjp_3411_;
}
else
{
lean_dec(v_a_3408_);
v___x_3412_ = lean_box(0);
v_isShared_3413_ = v_isSharedCheck_3418_;
goto v_resetjp_3411_;
}
v_resetjp_3411_:
{
lean_object* v___x_3414_; lean_object* v___x_3416_; 
v___x_3414_ = lean_box(v___x_3406_);
if (v_isShared_3413_ == 0)
{
lean_ctor_set_tag(v___x_3412_, 0);
lean_ctor_set(v___x_3412_, 0, v___x_3414_);
v___x_3416_ = v___x_3412_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v___x_3414_);
v___x_3416_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
return v___x_3416_;
}
}
}
}
}
else
{
uint8_t v___x_3451_; uint8_t v___x_3452_; uint8_t v___x_3453_; lean_object* v___x_3454_; uint64_t v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; 
lean_dec(v_snd_3380_);
v___x_3451_ = 1;
v___x_3452_ = 0;
v___x_3453_ = 2;
v___x_3454_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3454_, 0, v___x_3371_);
lean_ctor_set_uint8(v___x_3454_, 1, v___x_3371_);
lean_ctor_set_uint8(v___x_3454_, 2, v___x_3371_);
lean_ctor_set_uint8(v___x_3454_, 3, v___x_3371_);
lean_ctor_set_uint8(v___x_3454_, 4, v___x_3371_);
lean_ctor_set_uint8(v___x_3454_, 5, v___x_3389_);
lean_ctor_set_uint8(v___x_3454_, 6, v___x_3389_);
lean_ctor_set_uint8(v___x_3454_, 7, v___x_3371_);
lean_ctor_set_uint8(v___x_3454_, 8, v___x_3389_);
lean_ctor_set_uint8(v___x_3454_, 9, v___x_3451_);
lean_ctor_set_uint8(v___x_3454_, 10, v___x_3452_);
lean_ctor_set_uint8(v___x_3454_, 11, v___x_3389_);
lean_ctor_set_uint8(v___x_3454_, 12, v___x_3389_);
lean_ctor_set_uint8(v___x_3454_, 13, v___x_3389_);
lean_ctor_set_uint8(v___x_3454_, 14, v___x_3453_);
lean_ctor_set_uint8(v___x_3454_, 15, v___x_3389_);
lean_ctor_set_uint8(v___x_3454_, 16, v___x_3389_);
lean_ctor_set_uint8(v___x_3454_, 17, v___x_3389_);
lean_ctor_set_uint8(v___x_3454_, 18, v___x_3389_);
lean_ctor_set_uint8(v___x_3454_, 19, v___x_3371_);
v___x_3455_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3454_);
v___x_3456_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3456_, 0, v___x_3454_);
lean_ctor_set_uint64(v___x_3456_, sizeof(void*)*1, v___x_3455_);
v___x_3457_ = lean_unsigned_to_nat(0u);
v___x_3458_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_3459_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3460_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3461_ = lean_box(0);
lean_inc(v___x_3036_);
v___x_3462_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3462_, 0, v___x_3456_);
lean_ctor_set(v___x_3462_, 1, v___x_3036_);
lean_ctor_set(v___x_3462_, 2, v___x_3459_);
lean_ctor_set(v___x_3462_, 3, v___x_3460_);
lean_ctor_set(v___x_3462_, 4, v___x_3461_);
lean_ctor_set(v___x_3462_, 5, v___x_3457_);
lean_ctor_set(v___x_3462_, 6, v___x_3461_);
lean_ctor_set_uint8(v___x_3462_, sizeof(void*)*7, v___x_3371_);
lean_ctor_set_uint8(v___x_3462_, sizeof(void*)*7 + 1, v___x_3371_);
lean_ctor_set_uint8(v___x_3462_, sizeof(void*)*7 + 2, v___x_3371_);
lean_ctor_set_uint8(v___x_3462_, sizeof(void*)*7 + 3, v_hasTrace_3044_);
v___x_3463_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3464_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3465_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3466_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3466_, 0, v___x_3463_);
lean_ctor_set(v___x_3466_, 1, v___x_3464_);
lean_ctor_set(v___x_3466_, 2, v___x_3036_);
lean_ctor_set(v___x_3466_, 3, v___x_3458_);
lean_ctor_set(v___x_3466_, 4, v___x_3465_);
v___x_3467_ = lean_st_mk_ref(v___x_3466_);
v___x_3468_ = l_Lean_Meta_getEqnsFor_x3f(v_fst_3379_, v___x_3462_, v___x_3467_, v___y_3039_, v___y_3040_);
lean_dec_ref_known(v___x_3462_, 7);
if (lean_obj_tag(v___x_3468_) == 0)
{
lean_object* v_a_3469_; lean_object* v___x_3470_; 
v_a_3469_ = lean_ctor_get(v___x_3468_, 0);
lean_inc(v_a_3469_);
lean_dec_ref_known(v___x_3468_, 1);
v___x_3470_ = lean_st_ref_get(v___x_3467_);
lean_dec(v___x_3467_);
lean_dec(v___x_3470_);
v_a_3391_ = v_a_3469_;
goto v___jp_3390_;
}
else
{
lean_dec(v___x_3467_);
if (lean_obj_tag(v___x_3468_) == 0)
{
lean_object* v_a_3471_; 
v_a_3471_ = lean_ctor_get(v___x_3468_, 0);
lean_inc(v_a_3471_);
lean_dec_ref_known(v___x_3468_, 1);
v_a_3391_ = v_a_3471_;
goto v___jp_3390_;
}
else
{
lean_object* v_a_3472_; lean_object* v___x_3474_; uint8_t v_isShared_3475_; uint8_t v_isSharedCheck_3479_; 
lean_del_object(v___x_3377_);
v_a_3472_ = lean_ctor_get(v___x_3468_, 0);
v_isSharedCheck_3479_ = !lean_is_exclusive(v___x_3468_);
if (v_isSharedCheck_3479_ == 0)
{
v___x_3474_ = v___x_3468_;
v_isShared_3475_ = v_isSharedCheck_3479_;
goto v_resetjp_3473_;
}
else
{
lean_inc(v_a_3472_);
lean_dec(v___x_3468_);
v___x_3474_ = lean_box(0);
v_isShared_3475_ = v_isSharedCheck_3479_;
goto v_resetjp_3473_;
}
v_resetjp_3473_:
{
lean_object* v___x_3477_; 
if (v_isShared_3475_ == 0)
{
v___x_3477_ = v___x_3474_;
goto v_reusejp_3476_;
}
else
{
lean_object* v_reuseFailAlloc_3478_; 
v_reuseFailAlloc_3478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3478_, 0, v_a_3472_);
v___x_3477_ = v_reuseFailAlloc_3478_;
goto v_reusejp_3476_;
}
v_reusejp_3476_:
{
return v___x_3477_;
}
}
}
}
}
v___jp_3390_:
{
if (lean_obj_tag(v_a_3391_) == 0)
{
lean_object* v___x_3392_; lean_object* v___x_3394_; 
v___x_3392_ = lean_box(v___x_3371_);
if (v_isShared_3378_ == 0)
{
lean_ctor_set_tag(v___x_3377_, 0);
lean_ctor_set(v___x_3377_, 0, v___x_3392_);
v___x_3394_ = v___x_3377_;
goto v_reusejp_3393_;
}
else
{
lean_object* v_reuseFailAlloc_3395_; 
v_reuseFailAlloc_3395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3395_, 0, v___x_3392_);
v___x_3394_ = v_reuseFailAlloc_3395_;
goto v_reusejp_3393_;
}
v_reusejp_3393_:
{
return v___x_3394_;
}
}
else
{
lean_object* v___x_3397_; uint8_t v_isShared_3398_; uint8_t v_isSharedCheck_3403_; 
lean_del_object(v___x_3377_);
v_isSharedCheck_3403_ = !lean_is_exclusive(v_a_3391_);
if (v_isSharedCheck_3403_ == 0)
{
lean_object* v_unused_3404_; 
v_unused_3404_ = lean_ctor_get(v_a_3391_, 0);
lean_dec(v_unused_3404_);
v___x_3397_ = v_a_3391_;
v_isShared_3398_ = v_isSharedCheck_3403_;
goto v_resetjp_3396_;
}
else
{
lean_dec(v_a_3391_);
v___x_3397_ = lean_box(0);
v_isShared_3398_ = v_isSharedCheck_3403_;
goto v_resetjp_3396_;
}
v_resetjp_3396_:
{
lean_object* v___x_3399_; lean_object* v___x_3401_; 
v___x_3399_ = lean_box(v___x_3389_);
if (v_isShared_3398_ == 0)
{
lean_ctor_set_tag(v___x_3397_, 0);
lean_ctor_set(v___x_3397_, 0, v___x_3399_);
v___x_3401_ = v___x_3397_;
goto v_reusejp_3400_;
}
else
{
lean_object* v_reuseFailAlloc_3402_; 
v_reuseFailAlloc_3402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3402_, 0, v___x_3399_);
v___x_3401_ = v_reuseFailAlloc_3402_;
goto v_reusejp_3400_;
}
v_reusejp_3400_:
{
return v___x_3401_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3481_; lean_object* v___x_3482_; 
lean_dec(v___x_3374_);
lean_dec(v_name_3038_);
lean_dec(v___x_3036_);
v___x_3481_ = lean_box(v___x_3371_);
v___x_3482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3482_, 0, v___x_3481_);
return v___x_3482_;
}
}
else
{
goto v___jp_3242_;
}
}
else
{
goto v___jp_3242_;
}
v___jp_3162_:
{
lean_object* v___x_3166_; double v___x_3167_; double v___x_3168_; double v___x_3169_; double v___x_3170_; double v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; 
v___x_3166_ = lean_io_mono_nanos_now();
v___x_3167_ = lean_float_of_nat(v___y_3164_);
v___x_3168_ = lean_float_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3169_ = lean_float_div(v___x_3167_, v___x_3168_);
v___x_3170_ = lean_float_of_nat(v___x_3166_);
v___x_3171_ = lean_float_div(v___x_3170_, v___x_3168_);
v___x_3172_ = lean_box_float(v___x_3169_);
v___x_3173_ = lean_box_float(v___x_3171_);
v___x_3174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3174_, 0, v___x_3172_);
lean_ctor_set(v___x_3174_, 1, v___x_3173_);
v___x_3175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3175_, 0, v_a_3165_);
lean_ctor_set(v___x_3175_, 1, v___x_3174_);
v___x_3176_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1(v___x_3158_, v_hasTrace_3044_, v___x_3159_, v_options_3043_, v___x_3161_, v___y_3163_, v___f_3157_, v___x_3175_, v___y_3039_, v___y_3040_);
return v___x_3176_;
}
v___jp_3177_:
{
lean_object* v___x_3181_; lean_object* v___x_3182_; 
v___x_3181_ = lean_box(v_a_3180_);
v___x_3182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3182_, 0, v___x_3181_);
v___y_3163_ = v___y_3179_;
v___y_3164_ = v___y_3178_;
v_a_3165_ = v___x_3182_;
goto v___jp_3162_;
}
v___jp_3183_:
{
if (lean_obj_tag(v_a_3188_) == 0)
{
v___y_3178_ = v___y_3185_;
v___y_3179_ = v___y_3184_;
v_a_3180_ = v___y_3186_;
goto v___jp_3177_;
}
else
{
lean_dec_ref_known(v_a_3188_, 1);
v___y_3178_ = v___y_3185_;
v___y_3179_ = v___y_3184_;
v_a_3180_ = v___y_3187_;
goto v___jp_3177_;
}
}
v___jp_3189_:
{
if (lean_obj_tag(v_a_3194_) == 0)
{
v___y_3178_ = v___y_3191_;
v___y_3179_ = v___y_3190_;
v_a_3180_ = v___y_3192_;
goto v___jp_3177_;
}
else
{
lean_dec_ref_known(v_a_3194_, 1);
v___y_3178_ = v___y_3191_;
v___y_3179_ = v___y_3190_;
v_a_3180_ = v___y_3193_;
goto v___jp_3177_;
}
}
v___jp_3195_:
{
lean_object* v___x_3199_; 
v___x_3199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3199_, 0, v_a_3198_);
v___y_3163_ = v___y_3197_;
v___y_3164_ = v___y_3196_;
v_a_3165_ = v___x_3199_;
goto v___jp_3162_;
}
v___jp_3200_:
{
lean_object* v___x_3204_; double v___x_3205_; double v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; 
v___x_3204_ = lean_io_get_num_heartbeats();
v___x_3205_ = lean_float_of_nat(v___y_3202_);
v___x_3206_ = lean_float_of_nat(v___x_3204_);
v___x_3207_ = lean_box_float(v___x_3205_);
v___x_3208_ = lean_box_float(v___x_3206_);
v___x_3209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3209_, 0, v___x_3207_);
lean_ctor_set(v___x_3209_, 1, v___x_3208_);
v___x_3210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3210_, 0, v_a_3203_);
lean_ctor_set(v___x_3210_, 1, v___x_3209_);
v___x_3211_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1(v___x_3158_, v_hasTrace_3044_, v___x_3159_, v_options_3043_, v___x_3161_, v___y_3201_, v___f_3157_, v___x_3210_, v___y_3039_, v___y_3040_);
return v___x_3211_;
}
v___jp_3212_:
{
lean_object* v___x_3216_; 
v___x_3216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3216_, 0, v_a_3215_);
v___y_3201_ = v___y_3213_;
v___y_3202_ = v___y_3214_;
v_a_3203_ = v___x_3216_;
goto v___jp_3200_;
}
v___jp_3217_:
{
lean_object* v___x_3221_; lean_object* v___x_3222_; 
v___x_3221_ = lean_box(v_a_3220_);
v___x_3222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3222_, 0, v___x_3221_);
v___y_3201_ = v___y_3218_;
v___y_3202_ = v___y_3219_;
v_a_3203_ = v___x_3222_;
goto v___jp_3200_;
}
v___jp_3223_:
{
if (lean_obj_tag(v___y_3226_) == 0)
{
lean_object* v_a_3227_; uint8_t v___x_3228_; 
v_a_3227_ = lean_ctor_get(v___y_3226_, 0);
lean_inc(v_a_3227_);
lean_dec_ref_known(v___y_3226_, 1);
v___x_3228_ = lean_unbox(v_a_3227_);
lean_dec(v_a_3227_);
v___y_3218_ = v___y_3224_;
v___y_3219_ = v___y_3225_;
v_a_3220_ = v___x_3228_;
goto v___jp_3217_;
}
else
{
lean_object* v_a_3229_; 
v_a_3229_ = lean_ctor_get(v___y_3226_, 0);
lean_inc(v_a_3229_);
lean_dec_ref_known(v___y_3226_, 1);
v___y_3213_ = v___y_3224_;
v___y_3214_ = v___y_3225_;
v_a_3215_ = v_a_3229_;
goto v___jp_3212_;
}
}
v___jp_3230_:
{
if (lean_obj_tag(v_a_3234_) == 0)
{
uint8_t v___x_3235_; 
v___x_3235_ = 0;
v___y_3218_ = v___y_3231_;
v___y_3219_ = v___y_3233_;
v_a_3220_ = v___x_3235_;
goto v___jp_3217_;
}
else
{
lean_dec_ref_known(v_a_3234_, 1);
v___y_3218_ = v___y_3231_;
v___y_3219_ = v___y_3233_;
v_a_3220_ = v___y_3232_;
goto v___jp_3217_;
}
}
v___jp_3236_:
{
if (lean_obj_tag(v_a_3241_) == 0)
{
v___y_3218_ = v___y_3237_;
v___y_3219_ = v___y_3240_;
v_a_3220_ = v___y_3239_;
goto v___jp_3217_;
}
else
{
lean_dec_ref_known(v_a_3241_, 1);
v___y_3218_ = v___y_3237_;
v___y_3219_ = v___y_3240_;
v_a_3220_ = v___y_3238_;
goto v___jp_3217_;
}
}
v___jp_3242_:
{
lean_object* v___x_3243_; lean_object* v_a_3244_; lean_object* v___x_3245_; uint8_t v___x_3246_; 
v___x_3243_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__0___redArg(v___y_3040_);
v_a_3244_ = lean_ctor_get(v___x_3243_, 0);
lean_inc(v_a_3244_);
lean_dec_ref(v___x_3243_);
v___x_3245_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3246_ = l_Lean_Option_get___at___00Lean_Meta_withEqnOptions_spec__1(v_options_3043_, v___x_3245_);
if (v___x_3246_ == 0)
{
lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v_env_3249_; lean_object* v___x_3250_; 
lean_dec_ref(v___f_3037_);
v___x_3247_ = lean_io_mono_nanos_now();
v___x_3248_ = lean_st_ref_get(v___y_3040_);
v_env_3249_ = lean_ctor_get(v___x_3248_, 0);
lean_inc_ref(v_env_3249_);
lean_dec(v___x_3248_);
lean_inc(v_name_3038_);
v___x_3250_ = l_Lean_Meta_declFromEqLikeName(v_env_3249_, v_name_3038_);
if (lean_obj_tag(v___x_3250_) == 1)
{
lean_object* v_val_3251_; lean_object* v_fst_3252_; lean_object* v_snd_3253_; lean_object* v___x_3254_; lean_object* v_env_3255_; lean_object* v___x_3256_; uint8_t v___x_3257_; 
v_val_3251_ = lean_ctor_get(v___x_3250_, 0);
lean_inc(v_val_3251_);
lean_dec_ref_known(v___x_3250_, 1);
v_fst_3252_ = lean_ctor_get(v_val_3251_, 0);
lean_inc_n(v_fst_3252_, 2);
v_snd_3253_ = lean_ctor_get(v_val_3251_, 1);
lean_inc_n(v_snd_3253_, 2);
lean_dec(v_val_3251_);
v___x_3254_ = lean_st_ref_get(v___y_3040_);
v_env_3255_ = lean_ctor_get(v___x_3254_, 0);
lean_inc_ref(v_env_3255_);
lean_dec(v___x_3254_);
v___x_3256_ = l_Lean_Meta_mkEqLikeNameFor(v_env_3255_, v_fst_3252_, v_snd_3253_);
v___x_3257_ = lean_name_eq(v_name_3038_, v___x_3256_);
lean_dec(v___x_3256_);
lean_dec(v_name_3038_);
if (v___x_3257_ == 0)
{
lean_dec(v_snd_3253_);
lean_dec(v_fst_3252_);
lean_dec(v___x_3036_);
v___y_3178_ = v___x_3247_;
v___y_3179_ = v_a_3244_;
v_a_3180_ = v___x_3246_;
goto v___jp_3177_;
}
else
{
uint8_t v___x_3258_; 
lean_inc(v_snd_3253_);
v___x_3258_ = l_Lean_Meta_isEqnReservedNameSuffix(v_snd_3253_);
if (v___x_3258_ == 0)
{
lean_object* v___x_3259_; uint8_t v___x_3260_; 
v___x_3259_ = ((lean_object*)(l_Lean_Meta_unfoldThmSuffix___closed__0));
v___x_3260_ = lean_string_dec_eq(v_snd_3253_, v___x_3259_);
lean_dec(v_snd_3253_);
if (v___x_3260_ == 0)
{
lean_dec(v_fst_3252_);
lean_dec(v___x_3036_);
v___y_3178_ = v___x_3247_;
v___y_3179_ = v_a_3244_;
v_a_3180_ = v___x_3246_;
goto v___jp_3177_;
}
else
{
uint8_t v___x_3261_; uint8_t v___x_3262_; uint8_t v___x_3263_; lean_object* v___x_3264_; uint64_t v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; 
v___x_3261_ = 1;
v___x_3262_ = 0;
v___x_3263_ = 2;
v___x_3264_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3264_, 0, v___x_3258_);
lean_ctor_set_uint8(v___x_3264_, 1, v___x_3258_);
lean_ctor_set_uint8(v___x_3264_, 2, v___x_3258_);
lean_ctor_set_uint8(v___x_3264_, 3, v___x_3258_);
lean_ctor_set_uint8(v___x_3264_, 4, v___x_3258_);
lean_ctor_set_uint8(v___x_3264_, 5, v___x_3260_);
lean_ctor_set_uint8(v___x_3264_, 6, v___x_3260_);
lean_ctor_set_uint8(v___x_3264_, 7, v___x_3258_);
lean_ctor_set_uint8(v___x_3264_, 8, v___x_3260_);
lean_ctor_set_uint8(v___x_3264_, 9, v___x_3261_);
lean_ctor_set_uint8(v___x_3264_, 10, v___x_3262_);
lean_ctor_set_uint8(v___x_3264_, 11, v___x_3260_);
lean_ctor_set_uint8(v___x_3264_, 12, v___x_3260_);
lean_ctor_set_uint8(v___x_3264_, 13, v___x_3260_);
lean_ctor_set_uint8(v___x_3264_, 14, v___x_3263_);
lean_ctor_set_uint8(v___x_3264_, 15, v___x_3260_);
lean_ctor_set_uint8(v___x_3264_, 16, v___x_3260_);
lean_ctor_set_uint8(v___x_3264_, 17, v___x_3260_);
lean_ctor_set_uint8(v___x_3264_, 18, v___x_3260_);
lean_ctor_set_uint8(v___x_3264_, 19, v___x_3258_);
v___x_3265_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3264_);
v___x_3266_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3266_, 0, v___x_3264_);
lean_ctor_set_uint64(v___x_3266_, sizeof(void*)*1, v___x_3265_);
v___x_3267_ = lean_unsigned_to_nat(0u);
v___x_3268_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_3269_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3270_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3271_ = lean_box(0);
lean_inc(v___x_3036_);
v___x_3272_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3272_, 0, v___x_3266_);
lean_ctor_set(v___x_3272_, 1, v___x_3036_);
lean_ctor_set(v___x_3272_, 2, v___x_3269_);
lean_ctor_set(v___x_3272_, 3, v___x_3270_);
lean_ctor_set(v___x_3272_, 4, v___x_3271_);
lean_ctor_set(v___x_3272_, 5, v___x_3267_);
lean_ctor_set(v___x_3272_, 6, v___x_3271_);
lean_ctor_set_uint8(v___x_3272_, sizeof(void*)*7, v___x_3258_);
lean_ctor_set_uint8(v___x_3272_, sizeof(void*)*7 + 1, v___x_3258_);
lean_ctor_set_uint8(v___x_3272_, sizeof(void*)*7 + 2, v___x_3258_);
lean_ctor_set_uint8(v___x_3272_, sizeof(void*)*7 + 3, v_hasTrace_3044_);
v___x_3273_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3274_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3275_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3276_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3276_, 0, v___x_3273_);
lean_ctor_set(v___x_3276_, 1, v___x_3274_);
lean_ctor_set(v___x_3276_, 2, v___x_3036_);
lean_ctor_set(v___x_3276_, 3, v___x_3268_);
lean_ctor_set(v___x_3276_, 4, v___x_3275_);
v___x_3277_ = lean_st_mk_ref(v___x_3276_);
v___x_3278_ = l_Lean_Meta_getUnfoldEqnFor_x3f(v_fst_3252_, v_hasTrace_3044_, v___x_3272_, v___x_3277_, v___y_3039_, v___y_3040_);
lean_dec_ref_known(v___x_3272_, 7);
if (lean_obj_tag(v___x_3278_) == 0)
{
lean_object* v_a_3279_; lean_object* v___x_3280_; 
v_a_3279_ = lean_ctor_get(v___x_3278_, 0);
lean_inc(v_a_3279_);
lean_dec_ref_known(v___x_3278_, 1);
v___x_3280_ = lean_st_ref_get(v___x_3277_);
lean_dec(v___x_3277_);
lean_dec(v___x_3280_);
v___y_3184_ = v_a_3244_;
v___y_3185_ = v___x_3247_;
v___y_3186_ = v___x_3258_;
v___y_3187_ = v___x_3260_;
v_a_3188_ = v_a_3279_;
goto v___jp_3183_;
}
else
{
lean_dec(v___x_3277_);
if (lean_obj_tag(v___x_3278_) == 0)
{
lean_object* v_a_3281_; 
v_a_3281_ = lean_ctor_get(v___x_3278_, 0);
lean_inc(v_a_3281_);
lean_dec_ref_known(v___x_3278_, 1);
v___y_3184_ = v_a_3244_;
v___y_3185_ = v___x_3247_;
v___y_3186_ = v___x_3258_;
v___y_3187_ = v___x_3260_;
v_a_3188_ = v_a_3281_;
goto v___jp_3183_;
}
else
{
lean_object* v_a_3282_; 
v_a_3282_ = lean_ctor_get(v___x_3278_, 0);
lean_inc(v_a_3282_);
lean_dec_ref_known(v___x_3278_, 1);
v___y_3196_ = v___x_3247_;
v___y_3197_ = v_a_3244_;
v_a_3198_ = v_a_3282_;
goto v___jp_3195_;
}
}
}
}
else
{
uint8_t v___x_3283_; uint8_t v___x_3284_; uint8_t v___x_3285_; lean_object* v___x_3286_; uint64_t v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; 
lean_dec(v_snd_3253_);
v___x_3283_ = 1;
v___x_3284_ = 0;
v___x_3285_ = 2;
v___x_3286_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3286_, 0, v___x_3246_);
lean_ctor_set_uint8(v___x_3286_, 1, v___x_3246_);
lean_ctor_set_uint8(v___x_3286_, 2, v___x_3246_);
lean_ctor_set_uint8(v___x_3286_, 3, v___x_3246_);
lean_ctor_set_uint8(v___x_3286_, 4, v___x_3246_);
lean_ctor_set_uint8(v___x_3286_, 5, v___x_3258_);
lean_ctor_set_uint8(v___x_3286_, 6, v___x_3258_);
lean_ctor_set_uint8(v___x_3286_, 7, v___x_3246_);
lean_ctor_set_uint8(v___x_3286_, 8, v___x_3258_);
lean_ctor_set_uint8(v___x_3286_, 9, v___x_3283_);
lean_ctor_set_uint8(v___x_3286_, 10, v___x_3284_);
lean_ctor_set_uint8(v___x_3286_, 11, v___x_3258_);
lean_ctor_set_uint8(v___x_3286_, 12, v___x_3258_);
lean_ctor_set_uint8(v___x_3286_, 13, v___x_3258_);
lean_ctor_set_uint8(v___x_3286_, 14, v___x_3285_);
lean_ctor_set_uint8(v___x_3286_, 15, v___x_3258_);
lean_ctor_set_uint8(v___x_3286_, 16, v___x_3258_);
lean_ctor_set_uint8(v___x_3286_, 17, v___x_3258_);
lean_ctor_set_uint8(v___x_3286_, 18, v___x_3258_);
lean_ctor_set_uint8(v___x_3286_, 19, v___x_3246_);
v___x_3287_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3286_);
v___x_3288_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3288_, 0, v___x_3286_);
lean_ctor_set_uint64(v___x_3288_, sizeof(void*)*1, v___x_3287_);
v___x_3289_ = lean_unsigned_to_nat(0u);
v___x_3290_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_3291_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3292_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3293_ = lean_box(0);
lean_inc(v___x_3036_);
v___x_3294_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3294_, 0, v___x_3288_);
lean_ctor_set(v___x_3294_, 1, v___x_3036_);
lean_ctor_set(v___x_3294_, 2, v___x_3291_);
lean_ctor_set(v___x_3294_, 3, v___x_3292_);
lean_ctor_set(v___x_3294_, 4, v___x_3293_);
lean_ctor_set(v___x_3294_, 5, v___x_3289_);
lean_ctor_set(v___x_3294_, 6, v___x_3293_);
lean_ctor_set_uint8(v___x_3294_, sizeof(void*)*7, v___x_3246_);
lean_ctor_set_uint8(v___x_3294_, sizeof(void*)*7 + 1, v___x_3246_);
lean_ctor_set_uint8(v___x_3294_, sizeof(void*)*7 + 2, v___x_3246_);
lean_ctor_set_uint8(v___x_3294_, sizeof(void*)*7 + 3, v_hasTrace_3044_);
v___x_3295_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3296_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3297_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3298_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3298_, 0, v___x_3295_);
lean_ctor_set(v___x_3298_, 1, v___x_3296_);
lean_ctor_set(v___x_3298_, 2, v___x_3036_);
lean_ctor_set(v___x_3298_, 3, v___x_3290_);
lean_ctor_set(v___x_3298_, 4, v___x_3297_);
v___x_3299_ = lean_st_mk_ref(v___x_3298_);
v___x_3300_ = l_Lean_Meta_getEqnsFor_x3f(v_fst_3252_, v___x_3294_, v___x_3299_, v___y_3039_, v___y_3040_);
lean_dec_ref_known(v___x_3294_, 7);
if (lean_obj_tag(v___x_3300_) == 0)
{
lean_object* v_a_3301_; lean_object* v___x_3302_; 
v_a_3301_ = lean_ctor_get(v___x_3300_, 0);
lean_inc(v_a_3301_);
lean_dec_ref_known(v___x_3300_, 1);
v___x_3302_ = lean_st_ref_get(v___x_3299_);
lean_dec(v___x_3299_);
lean_dec(v___x_3302_);
v___y_3190_ = v_a_3244_;
v___y_3191_ = v___x_3247_;
v___y_3192_ = v___x_3246_;
v___y_3193_ = v___x_3258_;
v_a_3194_ = v_a_3301_;
goto v___jp_3189_;
}
else
{
lean_dec(v___x_3299_);
if (lean_obj_tag(v___x_3300_) == 0)
{
lean_object* v_a_3303_; 
v_a_3303_ = lean_ctor_get(v___x_3300_, 0);
lean_inc(v_a_3303_);
lean_dec_ref_known(v___x_3300_, 1);
v___y_3190_ = v_a_3244_;
v___y_3191_ = v___x_3247_;
v___y_3192_ = v___x_3246_;
v___y_3193_ = v___x_3258_;
v_a_3194_ = v_a_3303_;
goto v___jp_3189_;
}
else
{
lean_object* v_a_3304_; 
v_a_3304_ = lean_ctor_get(v___x_3300_, 0);
lean_inc(v_a_3304_);
lean_dec_ref_known(v___x_3300_, 1);
v___y_3196_ = v___x_3247_;
v___y_3197_ = v_a_3244_;
v_a_3198_ = v_a_3304_;
goto v___jp_3195_;
}
}
}
}
}
else
{
lean_dec(v___x_3250_);
lean_dec(v_name_3038_);
lean_dec(v___x_3036_);
v___y_3178_ = v___x_3247_;
v___y_3179_ = v_a_3244_;
v_a_3180_ = v___x_3246_;
goto v___jp_3177_;
}
}
else
{
lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v_env_3307_; lean_object* v___x_3308_; 
v___x_3305_ = lean_io_get_num_heartbeats();
v___x_3306_ = lean_st_ref_get(v___y_3040_);
v_env_3307_ = lean_ctor_get(v___x_3306_, 0);
lean_inc_ref(v_env_3307_);
lean_dec(v___x_3306_);
lean_inc(v_name_3038_);
v___x_3308_ = l_Lean_Meta_declFromEqLikeName(v_env_3307_, v_name_3038_);
if (lean_obj_tag(v___x_3308_) == 1)
{
lean_object* v_val_3309_; lean_object* v_fst_3310_; lean_object* v_snd_3311_; lean_object* v___x_3312_; lean_object* v_env_3313_; lean_object* v___x_3314_; uint8_t v___x_3315_; 
v_val_3309_ = lean_ctor_get(v___x_3308_, 0);
lean_inc(v_val_3309_);
lean_dec_ref_known(v___x_3308_, 1);
v_fst_3310_ = lean_ctor_get(v_val_3309_, 0);
lean_inc_n(v_fst_3310_, 2);
v_snd_3311_ = lean_ctor_get(v_val_3309_, 1);
lean_inc_n(v_snd_3311_, 2);
lean_dec(v_val_3309_);
v___x_3312_ = lean_st_ref_get(v___y_3040_);
v_env_3313_ = lean_ctor_get(v___x_3312_, 0);
lean_inc_ref(v_env_3313_);
lean_dec(v___x_3312_);
v___x_3314_ = l_Lean_Meta_mkEqLikeNameFor(v_env_3313_, v_fst_3310_, v_snd_3311_);
v___x_3315_ = lean_name_eq(v_name_3038_, v___x_3314_);
lean_dec(v___x_3314_);
lean_dec(v_name_3038_);
if (v___x_3315_ == 0)
{
lean_object* v___x_3316_; lean_object* v___x_3317_; 
lean_dec(v_snd_3311_);
lean_dec(v_fst_3310_);
lean_dec(v___x_3036_);
v___x_3316_ = lean_box(0);
lean_inc(v___y_3040_);
lean_inc_ref(v___y_3039_);
v___x_3317_ = lean_apply_4(v___f_3037_, v___x_3316_, v___y_3039_, v___y_3040_, lean_box(0));
v___y_3224_ = v_a_3244_;
v___y_3225_ = v___x_3305_;
v___y_3226_ = v___x_3317_;
goto v___jp_3223_;
}
else
{
uint8_t v___x_3318_; 
lean_inc(v_snd_3311_);
v___x_3318_ = l_Lean_Meta_isEqnReservedNameSuffix(v_snd_3311_);
if (v___x_3318_ == 0)
{
lean_object* v___x_3319_; uint8_t v___x_3320_; 
v___x_3319_ = ((lean_object*)(l_Lean_Meta_unfoldThmSuffix___closed__0));
v___x_3320_ = lean_string_dec_eq(v_snd_3311_, v___x_3319_);
lean_dec(v_snd_3311_);
if (v___x_3320_ == 0)
{
lean_object* v___x_3321_; lean_object* v___x_3322_; 
lean_dec(v_fst_3310_);
lean_dec(v___x_3036_);
v___x_3321_ = lean_box(0);
lean_inc(v___y_3040_);
lean_inc_ref(v___y_3039_);
v___x_3322_ = lean_apply_4(v___f_3037_, v___x_3321_, v___y_3039_, v___y_3040_, lean_box(0));
v___y_3224_ = v_a_3244_;
v___y_3225_ = v___x_3305_;
v___y_3226_ = v___x_3322_;
goto v___jp_3223_;
}
else
{
uint8_t v___x_3323_; uint8_t v___x_3324_; uint8_t v___x_3325_; lean_object* v___x_3326_; uint64_t v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; 
lean_dec_ref(v___f_3037_);
v___x_3323_ = 1;
v___x_3324_ = 0;
v___x_3325_ = 2;
v___x_3326_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3326_, 0, v___x_3318_);
lean_ctor_set_uint8(v___x_3326_, 1, v___x_3318_);
lean_ctor_set_uint8(v___x_3326_, 2, v___x_3318_);
lean_ctor_set_uint8(v___x_3326_, 3, v___x_3318_);
lean_ctor_set_uint8(v___x_3326_, 4, v___x_3318_);
lean_ctor_set_uint8(v___x_3326_, 5, v___x_3320_);
lean_ctor_set_uint8(v___x_3326_, 6, v___x_3320_);
lean_ctor_set_uint8(v___x_3326_, 7, v___x_3318_);
lean_ctor_set_uint8(v___x_3326_, 8, v___x_3320_);
lean_ctor_set_uint8(v___x_3326_, 9, v___x_3323_);
lean_ctor_set_uint8(v___x_3326_, 10, v___x_3324_);
lean_ctor_set_uint8(v___x_3326_, 11, v___x_3320_);
lean_ctor_set_uint8(v___x_3326_, 12, v___x_3320_);
lean_ctor_set_uint8(v___x_3326_, 13, v___x_3320_);
lean_ctor_set_uint8(v___x_3326_, 14, v___x_3325_);
lean_ctor_set_uint8(v___x_3326_, 15, v___x_3320_);
lean_ctor_set_uint8(v___x_3326_, 16, v___x_3320_);
lean_ctor_set_uint8(v___x_3326_, 17, v___x_3320_);
lean_ctor_set_uint8(v___x_3326_, 18, v___x_3320_);
lean_ctor_set_uint8(v___x_3326_, 19, v___x_3318_);
v___x_3327_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3326_);
v___x_3328_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3328_, 0, v___x_3326_);
lean_ctor_set_uint64(v___x_3328_, sizeof(void*)*1, v___x_3327_);
v___x_3329_ = lean_unsigned_to_nat(0u);
v___x_3330_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_3331_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3332_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3333_ = lean_box(0);
lean_inc(v___x_3036_);
v___x_3334_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3334_, 0, v___x_3328_);
lean_ctor_set(v___x_3334_, 1, v___x_3036_);
lean_ctor_set(v___x_3334_, 2, v___x_3331_);
lean_ctor_set(v___x_3334_, 3, v___x_3332_);
lean_ctor_set(v___x_3334_, 4, v___x_3333_);
lean_ctor_set(v___x_3334_, 5, v___x_3329_);
lean_ctor_set(v___x_3334_, 6, v___x_3333_);
lean_ctor_set_uint8(v___x_3334_, sizeof(void*)*7, v___x_3318_);
lean_ctor_set_uint8(v___x_3334_, sizeof(void*)*7 + 1, v___x_3318_);
lean_ctor_set_uint8(v___x_3334_, sizeof(void*)*7 + 2, v___x_3318_);
lean_ctor_set_uint8(v___x_3334_, sizeof(void*)*7 + 3, v___x_3246_);
v___x_3335_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3336_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3337_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3338_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3338_, 0, v___x_3335_);
lean_ctor_set(v___x_3338_, 1, v___x_3336_);
lean_ctor_set(v___x_3338_, 2, v___x_3036_);
lean_ctor_set(v___x_3338_, 3, v___x_3330_);
lean_ctor_set(v___x_3338_, 4, v___x_3337_);
v___x_3339_ = lean_st_mk_ref(v___x_3338_);
v___x_3340_ = l_Lean_Meta_getUnfoldEqnFor_x3f(v_fst_3310_, v___x_3246_, v___x_3334_, v___x_3339_, v___y_3039_, v___y_3040_);
lean_dec_ref_known(v___x_3334_, 7);
if (lean_obj_tag(v___x_3340_) == 0)
{
lean_object* v_a_3341_; lean_object* v___x_3342_; 
v_a_3341_ = lean_ctor_get(v___x_3340_, 0);
lean_inc(v_a_3341_);
lean_dec_ref_known(v___x_3340_, 1);
v___x_3342_ = lean_st_ref_get(v___x_3339_);
lean_dec(v___x_3339_);
lean_dec(v___x_3342_);
v___y_3237_ = v_a_3244_;
v___y_3238_ = v___x_3320_;
v___y_3239_ = v___x_3318_;
v___y_3240_ = v___x_3305_;
v_a_3241_ = v_a_3341_;
goto v___jp_3236_;
}
else
{
lean_dec(v___x_3339_);
if (lean_obj_tag(v___x_3340_) == 0)
{
lean_object* v_a_3343_; 
v_a_3343_ = lean_ctor_get(v___x_3340_, 0);
lean_inc(v_a_3343_);
lean_dec_ref_known(v___x_3340_, 1);
v___y_3237_ = v_a_3244_;
v___y_3238_ = v___x_3320_;
v___y_3239_ = v___x_3318_;
v___y_3240_ = v___x_3305_;
v_a_3241_ = v_a_3343_;
goto v___jp_3236_;
}
else
{
lean_object* v_a_3344_; 
v_a_3344_ = lean_ctor_get(v___x_3340_, 0);
lean_inc(v_a_3344_);
lean_dec_ref_known(v___x_3340_, 1);
v___y_3213_ = v_a_3244_;
v___y_3214_ = v___x_3305_;
v_a_3215_ = v_a_3344_;
goto v___jp_3212_;
}
}
}
}
else
{
uint8_t v___x_3345_; uint8_t v___x_3346_; uint8_t v___x_3347_; uint8_t v___x_3348_; lean_object* v___x_3349_; uint64_t v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; 
lean_dec(v_snd_3311_);
lean_dec_ref(v___f_3037_);
v___x_3345_ = 0;
v___x_3346_ = 1;
v___x_3347_ = 0;
v___x_3348_ = 2;
v___x_3349_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v___x_3349_, 0, v___x_3345_);
lean_ctor_set_uint8(v___x_3349_, 1, v___x_3345_);
lean_ctor_set_uint8(v___x_3349_, 2, v___x_3345_);
lean_ctor_set_uint8(v___x_3349_, 3, v___x_3345_);
lean_ctor_set_uint8(v___x_3349_, 4, v___x_3345_);
lean_ctor_set_uint8(v___x_3349_, 5, v___x_3318_);
lean_ctor_set_uint8(v___x_3349_, 6, v___x_3318_);
lean_ctor_set_uint8(v___x_3349_, 7, v___x_3345_);
lean_ctor_set_uint8(v___x_3349_, 8, v___x_3318_);
lean_ctor_set_uint8(v___x_3349_, 9, v___x_3346_);
lean_ctor_set_uint8(v___x_3349_, 10, v___x_3347_);
lean_ctor_set_uint8(v___x_3349_, 11, v___x_3318_);
lean_ctor_set_uint8(v___x_3349_, 12, v___x_3318_);
lean_ctor_set_uint8(v___x_3349_, 13, v___x_3318_);
lean_ctor_set_uint8(v___x_3349_, 14, v___x_3348_);
lean_ctor_set_uint8(v___x_3349_, 15, v___x_3318_);
lean_ctor_set_uint8(v___x_3349_, 16, v___x_3318_);
lean_ctor_set_uint8(v___x_3349_, 17, v___x_3318_);
lean_ctor_set_uint8(v___x_3349_, 18, v___x_3318_);
lean_ctor_set_uint8(v___x_3349_, 19, v___x_3345_);
v___x_3350_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3349_);
v___x_3351_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3351_, 0, v___x_3349_);
lean_ctor_set_uint64(v___x_3351_, sizeof(void*)*1, v___x_3350_);
v___x_3352_ = lean_unsigned_to_nat(0u);
v___x_3353_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwReservedNameNotAvailable___at___00Lean_ensureReservedNameAvailable___at___00Lean_Meta_ensureEqnReservedNamesAvailable_spec__0_spec__0_spec__1_spec__2___closed__4);
v___x_3354_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1, &l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1_once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFor_x3fCore___closed__1);
v___x_3355_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__0_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3356_ = lean_box(0);
lean_inc(v___x_3036_);
v___x_3357_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3357_, 0, v___x_3351_);
lean_ctor_set(v___x_3357_, 1, v___x_3036_);
lean_ctor_set(v___x_3357_, 2, v___x_3354_);
lean_ctor_set(v___x_3357_, 3, v___x_3355_);
lean_ctor_set(v___x_3357_, 4, v___x_3356_);
lean_ctor_set(v___x_3357_, 5, v___x_3352_);
lean_ctor_set(v___x_3357_, 6, v___x_3356_);
lean_ctor_set_uint8(v___x_3357_, sizeof(void*)*7, v___x_3345_);
lean_ctor_set_uint8(v___x_3357_, sizeof(void*)*7 + 1, v___x_3345_);
lean_ctor_set_uint8(v___x_3357_, sizeof(void*)*7 + 2, v___x_3345_);
lean_ctor_set_uint8(v___x_3357_, sizeof(void*)*7 + 3, v___x_3246_);
v___x_3358_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3359_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3360_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3361_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3361_, 0, v___x_3358_);
lean_ctor_set(v___x_3361_, 1, v___x_3359_);
lean_ctor_set(v___x_3361_, 2, v___x_3036_);
lean_ctor_set(v___x_3361_, 3, v___x_3353_);
lean_ctor_set(v___x_3361_, 4, v___x_3360_);
v___x_3362_ = lean_st_mk_ref(v___x_3361_);
v___x_3363_ = l_Lean_Meta_getEqnsFor_x3f(v_fst_3310_, v___x_3357_, v___x_3362_, v___y_3039_, v___y_3040_);
lean_dec_ref_known(v___x_3357_, 7);
if (lean_obj_tag(v___x_3363_) == 0)
{
lean_object* v_a_3364_; lean_object* v___x_3365_; 
v_a_3364_ = lean_ctor_get(v___x_3363_, 0);
lean_inc(v_a_3364_);
lean_dec_ref_known(v___x_3363_, 1);
v___x_3365_ = lean_st_ref_get(v___x_3362_);
lean_dec(v___x_3362_);
lean_dec(v___x_3365_);
v___y_3231_ = v_a_3244_;
v___y_3232_ = v___x_3318_;
v___y_3233_ = v___x_3305_;
v_a_3234_ = v_a_3364_;
goto v___jp_3230_;
}
else
{
lean_dec(v___x_3362_);
if (lean_obj_tag(v___x_3363_) == 0)
{
lean_object* v_a_3366_; 
v_a_3366_ = lean_ctor_get(v___x_3363_, 0);
lean_inc(v_a_3366_);
lean_dec_ref_known(v___x_3363_, 1);
v___y_3231_ = v_a_3244_;
v___y_3232_ = v___x_3318_;
v___y_3233_ = v___x_3305_;
v_a_3234_ = v_a_3366_;
goto v___jp_3230_;
}
else
{
lean_object* v_a_3367_; 
v_a_3367_ = lean_ctor_get(v___x_3363_, 0);
lean_inc(v_a_3367_);
lean_dec_ref_known(v___x_3363_, 1);
v___y_3213_ = v_a_3244_;
v___y_3214_ = v___x_3305_;
v_a_3215_ = v_a_3367_;
goto v___jp_3212_;
}
}
}
}
}
else
{
lean_object* v___x_3368_; lean_object* v___x_3369_; 
lean_dec(v___x_3308_);
lean_dec(v_name_3038_);
lean_dec(v___x_3036_);
v___x_3368_ = lean_box(0);
lean_inc(v___y_3040_);
lean_inc_ref(v___y_3039_);
v___x_3369_ = lean_apply_4(v___f_3037_, v___x_3368_, v___y_3039_, v___y_3040_, lean_box(0));
v___y_3224_ = v_a_3244_;
v___y_3225_ = v___x_3305_;
v___y_3226_ = v___x_3369_;
goto v___jp_3223_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object* v___x_3483_, lean_object* v___f_3484_, lean_object* v_name_3485_, lean_object* v___y_3486_, lean_object* v___y_3487_, lean_object* v___y_3488_){
_start:
{
lean_object* v_res_3489_; 
v_res_3489_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___lam__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(v___x_3483_, v___f_3484_, v_name_3485_, v___y_3486_, v___y_3487_);
lean_dec(v___y_3487_);
lean_dec_ref(v___y_3486_);
return v_res_3489_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; 
v___x_3495_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3496_ = lean_obj_once(&l_Lean_Meta_isEqnThm_x3f___redArg___closed__0, &l_Lean_Meta_isEqnThm_x3f___redArg___closed__0_once, _init_l_Lean_Meta_isEqnThm_x3f___redArg___closed__0);
v___x_3497_ = l_Lean_Name_str___override(v___x_3496_, v___x_3495_);
return v___x_3497_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; 
v___x_3498_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_));
v___x_3499_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3500_ = l_Lean_Name_str___override(v___x_3499_, v___x_3498_);
return v___x_3500_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; 
v___x_3501_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_));
v___x_3502_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3503_ = l_Lean_Name_str___override(v___x_3502_, v___x_3501_);
return v___x_3503_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; 
v___x_3505_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3506_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3507_ = l_Lean_Name_str___override(v___x_3506_, v___x_3505_);
return v___x_3507_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; 
v___x_3508_ = lean_unsigned_to_nat(0u);
v___x_3509_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3510_ = l_Lean_Name_num___override(v___x_3509_, v___x_3508_);
return v___x_3510_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; 
v___x_3511_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_));
v___x_3512_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3513_ = l_Lean_Name_str___override(v___x_3512_, v___x_3511_);
return v___x_3513_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; 
v___x_3514_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_));
v___x_3515_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3516_ = l_Lean_Name_str___override(v___x_3515_, v___x_3514_);
return v___x_3516_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; 
v___x_3518_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3519_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3520_ = l_Lean_Name_str___override(v___x_3519_, v___x_3518_);
return v___x_3520_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; 
v___x_3522_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3523_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3524_ = l_Lean_Name_str___override(v___x_3523_, v___x_3522_);
return v___x_3524_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; 
v___x_3525_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_));
v___x_3526_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3527_ = l_Lean_Name_str___override(v___x_3526_, v___x_3525_);
return v___x_3527_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; 
v___x_3528_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_));
v___x_3529_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3530_ = l_Lean_Name_str___override(v___x_3529_, v___x_3528_);
return v___x_3530_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; 
v___x_3531_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3532_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3533_ = l_Lean_Name_str___override(v___x_3532_, v___x_3531_);
return v___x_3533_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; 
v___x_3534_ = lean_unsigned_to_nat(3137104340u);
v___x_3535_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3536_ = l_Lean_Name_num___override(v___x_3535_, v___x_3534_);
return v___x_3536_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; 
v___x_3538_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3539_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3540_ = l_Lean_Name_str___override(v___x_3539_, v___x_3538_);
return v___x_3540_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; 
v___x_3542_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3543_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3544_ = l_Lean_Name_str___override(v___x_3543_, v___x_3542_);
return v___x_3544_;
}
}
static lean_object* _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; 
v___x_3545_ = lean_unsigned_to_nat(2u);
v___x_3546_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3547_ = l_Lean_Name_num___override(v___x_3546_, v___x_3545_);
return v___x_3547_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_3549_; lean_object* v___x_3550_; 
v___f_3549_ = ((lean_object*)(l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_));
v___x_3550_ = l_Lean_registerReservedNameAction(v___f_3549_);
if (lean_obj_tag(v___x_3550_) == 0)
{
lean_object* v___x_3551_; uint8_t v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; 
lean_dec_ref_known(v___x_3550_, 1);
v___x_3551_ = ((lean_object*)(l_Lean_Meta_saveEqnAffectingOptions___closed__5));
v___x_3552_ = 0;
v___x_3553_ = lean_obj_once(&l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_, &l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_);
v___x_3554_ = l_Lean_registerTraceClass(v___x_3551_, v___x_3552_, v___x_3553_);
return v___x_3554_;
}
else
{
return v___x_3550_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2____boxed(lean_object* v_a_3555_){
_start:
{
lean_object* v_res_3556_; 
v_res_3556_ = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_();
return v_res_3556_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_00_u03b1_3557_, lean_object* v_x_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_){
_start:
{
lean_object* v___x_3562_; 
v___x_3562_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___redArg(v_x_3558_);
return v___x_3562_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_00_u03b1_3563_, lean_object* v_x_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_){
_start:
{
lean_object* v_res_3568_; 
v_res_3568_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2__spec__1_spec__2(v_00_u03b1_3563_, v_x_3564_, v___y_3565_, v___y_3566_);
lean_dec(v___y_3566_);
lean_dec_ref(v___y_3565_);
return v_res_3568_;
}
}
lean_object* runtime_initialize_Lean_Meta_Match_MatcherInfo(uint8_t builtin);
lean_object* runtime_initialize_Lean_DefEqAttrib(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_RecExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_LetToHave(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Match_MatcherInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DefEqAttrib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_RecExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LetToHave(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1128896756____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_backward_eqns_nonrecursive = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_backward_eqns_nonrecursive);
lean_dec_ref(res);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_1234379183____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_backward_eqns_deepRecursiveSplit = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_backward_eqns_deepRecursiveSplit);
lean_dec_ref(res);
l_Lean_Meta_eqnAffectingOptions = _init_l_Lean_Meta_eqnAffectingOptions();
lean_mark_persistent(l_Lean_Meta_eqnAffectingOptions);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_177189230____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_eqnOptionsExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_eqnOptionsExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_758090479____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3508565914____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFnsRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Meta_Eqns_0__Lean_Meta_getEqnsFnsRef);
lean_dec_ref(res);
l_Lean_Meta_instInhabitedEqnsExtState_default = _init_l_Lean_Meta_instInhabitedEqnsExtState_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedEqnsExtState_default);
l_Lean_Meta_instInhabitedEqnsExtState = _init_l_Lean_Meta_instInhabitedEqnsExtState();
lean_mark_persistent(l_Lean_Meta_instInhabitedEqnsExtState);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3570318411____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_eqnsExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_eqnsExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_408789758____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Meta_Eqns_0__Lean_Meta_getUnfoldEqnFnsRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Meta_Eqns_0__Lean_Meta_getUnfoldEqnFnsRef);
lean_dec_ref(res);
res = l___private_Lean_Meta_Eqns_0__Lean_Meta_initFn_00___x40_Lean_Meta_Eqns_3137104340____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Match_MatcherInfo(uint8_t builtin);
lean_object* initialize_Lean_DefEqAttrib(uint8_t builtin);
lean_object* initialize_Lean_Meta_RecExt(uint8_t builtin);
lean_object* initialize_Lean_Meta_LetToHave(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Match_MatcherInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DefEqAttrib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_RecExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LetToHave(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Eqns(builtin);
}
#ifdef __cplusplus
}
#endif

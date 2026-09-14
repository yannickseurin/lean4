// Lean compiler output
// Module: Lean.Meta.FunInfo
// Imports: public import Lean.Meta.InferType import Init.Data.Range.Polymorphic.Iterators
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
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Meta_instBEqInfoCacheKey_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
uint64_t lean_uint64_of_nat(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Level_hasMVar(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(lean_object*, lean_object*);
extern lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_373817412____hygCtx___hyg_13_;
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Environment_areRealizationsEnabledForConst(lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats();
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_realizeValue_realizeAndReport___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_set_heartbeats(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint64_t l_Lean_Level_hash(lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* lean_io_promise_new();
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_finished___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Core_logSnapshotTask___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_setAllDiagRanges(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
lean_object* l_Lean_getOutParamPositions_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClass_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_383016249____hygCtx___hyg_24_;
lean_object* l_Lean_Meta_mkInfoCacheKey___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_hasMVar___boxed(lean_object*);
lean_object* l_Lean_Meta_instBEqInfoCacheKey_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instHashableInfoCacheKey___private__1___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_any___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_realizeValue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey___closed__0_value;
LEAN_EXPORT uint64_t l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__0_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__0_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_;
static const lean_string_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__1_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__1_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__1_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static lean_once_cell_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__2_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__2_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_;
static const lean_string_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__3_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__3_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__3_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static lean_once_cell_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__4_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__4_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_;
static const lean_string_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__5_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__5_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__5_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static lean_once_cell_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__6_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__6_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_;
static const lean_string_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__7_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "FunInfo"};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__7_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__7_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static lean_once_cell_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__8_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__8_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_;
static lean_once_cell_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__9_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__9_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_;
static lean_once_cell_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__10_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__10_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_;
static lean_once_cell_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__11_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__11_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_;
static const lean_string_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__12_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "FunInfoEnvCacheKey"};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__12_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__12_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__value;
static lean_once_cell_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__13_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__13_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_;
static lean_once_cell_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__14_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__14_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instTypeNameFunInfoEnvCacheKey;
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_hasMVar___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instBEqInfoCacheKey_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1_value;
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instHashableInfoCacheKey___private__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__2 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__2;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Meta.FunInfo"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "_private.Lean.Meta.FunInfo.0.Lean.Meta.getFunInfoAux"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__4_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__6;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__24___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0;
static lean_once_cell_t l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17_spec__22___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17_spec__22___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "trying to realize `"};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__0 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__0_value;
static const lean_string_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "` value but `enableRealizationsForConst` must be called for '"};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__1 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__1_value;
static const lean_string_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "' first"};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__2 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__2_value;
static const lean_string_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "Environment.realizeConst: `realizedImportedConsts` is empty"};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__3 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__3_value;
static const lean_ctor_object l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__3_value)}};
static const lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__4 = (const lean_object*)&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2;
static const lean_string_object l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lean.Meta.Basic"};
static const lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3_value;
static const lean_string_object l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Meta.realizeValue"};
static const lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5;
static lean_once_cell_t l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___boxed, .m_arity = 8, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__0 = (const lean_object*)&l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17_spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17_spec__22___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfoNArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInfo_getArity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_FunInfo_getArity___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 1;
return v___x_3_;
}
else
{
uint8_t v___x_4_; 
v___x_4_ = 0;
return v___x_4_;
}
}
else
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_5_; 
v___x_5_ = 0;
return v___x_5_;
}
else
{
lean_object* v_val_6_; lean_object* v_val_7_; uint8_t v___x_8_; 
v_val_6_ = lean_ctor_get(v_x_1_, 0);
v_val_7_ = lean_ctor_get(v_x_2_, 0);
v___x_8_ = lean_nat_dec_eq(v_val_6_, v_val_7_);
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1___boxed(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = l_Option_instBEq_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1(v_x_9_, v_x_10_);
lean_dec(v_x_10_);
lean_dec(v_x_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0(lean_object* v_x_13_, lean_object* v_x_14_){
_start:
{
if (lean_obj_tag(v_x_13_) == 0)
{
if (lean_obj_tag(v_x_14_) == 0)
{
uint8_t v___x_15_; 
v___x_15_ = 1;
return v___x_15_;
}
else
{
uint8_t v___x_16_; 
v___x_16_ = 0;
return v___x_16_;
}
}
else
{
if (lean_obj_tag(v_x_14_) == 0)
{
uint8_t v___x_17_; 
v___x_17_ = 0;
return v___x_17_;
}
else
{
lean_object* v_head_18_; lean_object* v_tail_19_; lean_object* v_head_20_; lean_object* v_tail_21_; uint8_t v___x_22_; 
v_head_18_ = lean_ctor_get(v_x_13_, 0);
v_tail_19_ = lean_ctor_get(v_x_13_, 1);
v_head_20_ = lean_ctor_get(v_x_14_, 0);
v_tail_21_ = lean_ctor_get(v_x_14_, 1);
v___x_22_ = lean_level_eq(v_head_18_, v_head_20_);
if (v___x_22_ == 0)
{
return v___x_22_;
}
else
{
v_x_13_ = v_tail_19_;
v_x_14_ = v_tail_21_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0___boxed(lean_object* v_x_24_, lean_object* v_x_25_){
_start:
{
uint8_t v_res_26_; lean_object* v_r_27_; 
v_res_26_ = l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0(v_x_24_, v_x_25_);
lean_dec(v_x_25_);
lean_dec(v_x_24_);
v_r_27_ = lean_box(v_res_26_);
return v_r_27_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(lean_object* v_x_28_, lean_object* v_x_29_){
_start:
{
lean_object* v_c_30_; lean_object* v_ls_31_; lean_object* v_maxArgs_x3f_32_; lean_object* v_c_33_; lean_object* v_ls_34_; lean_object* v_maxArgs_x3f_35_; uint8_t v___x_36_; 
v_c_30_ = lean_ctor_get(v_x_28_, 0);
v_ls_31_ = lean_ctor_get(v_x_28_, 1);
v_maxArgs_x3f_32_ = lean_ctor_get(v_x_28_, 2);
v_c_33_ = lean_ctor_get(v_x_29_, 0);
v_ls_34_ = lean_ctor_get(v_x_29_, 1);
v_maxArgs_x3f_35_ = lean_ctor_get(v_x_29_, 2);
v___x_36_ = lean_name_eq(v_c_30_, v_c_33_);
if (v___x_36_ == 0)
{
return v___x_36_;
}
else
{
uint8_t v___x_37_; 
v___x_37_ = l_List_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__0(v_ls_31_, v_ls_34_);
if (v___x_37_ == 0)
{
return v___x_37_;
}
else
{
uint8_t v___x_38_; 
v___x_38_ = l_Option_instBEq_beq___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq_spec__1(v_maxArgs_x3f_32_, v_maxArgs_x3f_35_);
return v___x_38_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq___boxed(lean_object* v_x_39_, lean_object* v_x_40_){
_start:
{
uint8_t v_res_41_; lean_object* v_r_42_; 
v_res_41_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_x_39_, v_x_40_);
lean_dec_ref(v_x_40_);
lean_dec_ref(v_x_39_);
v_r_42_ = lean_box(v_res_41_);
return v_r_42_;
}
}
LEAN_EXPORT uint64_t l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0(uint64_t v_x_45_, lean_object* v_x_46_){
_start:
{
if (lean_obj_tag(v_x_46_) == 0)
{
return v_x_45_;
}
else
{
lean_object* v_head_47_; lean_object* v_tail_48_; uint64_t v___x_49_; uint64_t v___x_50_; 
v_head_47_ = lean_ctor_get(v_x_46_, 0);
v_tail_48_ = lean_ctor_get(v_x_46_, 1);
v___x_49_ = l_Lean_Level_hash(v_head_47_);
v___x_50_ = lean_uint64_mix_hash(v_x_45_, v___x_49_);
v_x_45_ = v___x_50_;
v_x_46_ = v_tail_48_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0___boxed(lean_object* v_x_52_, lean_object* v_x_53_){
_start:
{
uint64_t v_x_109__boxed_54_; uint64_t v_res_55_; lean_object* v_r_56_; 
v_x_109__boxed_54_ = lean_unbox_uint64(v_x_52_);
lean_dec_ref(v_x_52_);
v_res_55_ = l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0(v_x_109__boxed_54_, v_x_53_);
lean_dec(v_x_53_);
v_r_56_ = lean_box_uint64(v_res_55_);
return v_r_56_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(lean_object* v_x_57_){
_start:
{
lean_object* v_c_58_; lean_object* v_ls_59_; lean_object* v_maxArgs_x3f_60_; uint64_t v___x_61_; uint64_t v___y_63_; lean_object* v___x_75_; 
v_c_58_ = lean_ctor_get(v_x_57_, 0);
v_ls_59_ = lean_ctor_get(v_x_57_, 1);
v_maxArgs_x3f_60_ = lean_ctor_get(v_x_57_, 2);
v___x_61_ = 0ULL;
v___x_75_ = l_unsafeCast___redArg(v_c_58_);
if (lean_obj_tag(v___x_75_) == 0)
{
uint64_t v___x_76_; 
v___x_76_ = 1723ULL;
v___y_63_ = v___x_76_;
goto v___jp_62_;
}
else
{
uint64_t v_hash_77_; 
v_hash_77_ = lean_ctor_get_uint64(v___x_75_, sizeof(void*)*2);
lean_dec(v___x_75_);
v___y_63_ = v_hash_77_;
goto v___jp_62_;
}
v___jp_62_:
{
uint64_t v___x_64_; uint64_t v___x_65_; uint64_t v___x_66_; uint64_t v___x_67_; 
v___x_64_ = lean_uint64_mix_hash(v___x_61_, v___y_63_);
v___x_65_ = 7ULL;
v___x_66_ = l_List_foldl___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash_spec__0(v___x_65_, v_ls_59_);
v___x_67_ = lean_uint64_mix_hash(v___x_64_, v___x_66_);
if (lean_obj_tag(v_maxArgs_x3f_60_) == 0)
{
uint64_t v___x_68_; uint64_t v___x_69_; 
v___x_68_ = 11ULL;
v___x_69_ = lean_uint64_mix_hash(v___x_67_, v___x_68_);
return v___x_69_;
}
else
{
lean_object* v_val_70_; uint64_t v___x_71_; uint64_t v___x_72_; uint64_t v___x_73_; uint64_t v___x_74_; 
v_val_70_ = lean_ctor_get(v_maxArgs_x3f_60_, 0);
v___x_71_ = lean_uint64_of_nat(v_val_70_);
v___x_72_ = 13ULL;
v___x_73_ = lean_uint64_mix_hash(v___x_71_, v___x_72_);
v___x_74_ = lean_uint64_mix_hash(v___x_67_, v___x_73_);
return v___x_74_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash___boxed(lean_object* v_x_78_){
_start:
{
uint64_t v_res_79_; lean_object* v_r_80_; 
v_res_79_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(v_x_78_);
lean_dec_ref(v_x_78_);
v_r_80_ = lean_box_uint64(v_res_79_);
return v_r_80_;
}
}
static lean_object* _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__0_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = lean_box(0);
v___x_84_ = l_unsafeCast___redArg(v___x_83_);
return v___x_84_;
}
}
static lean_object* _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__2_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_(void){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_86_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__1_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_));
v___x_87_ = lean_obj_once(&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__0_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_, &l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__0_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__once, _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__0_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_);
v___x_88_ = l_Lean_Name_str___override(v___x_87_, v___x_86_);
return v___x_88_;
}
}
static lean_object* _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__4_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_90_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__3_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_));
v___x_91_ = lean_obj_once(&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__2_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_, &l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__2_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__once, _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__2_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_);
v___x_92_ = l_Lean_Name_str___override(v___x_91_, v___x_90_);
return v___x_92_;
}
}
static lean_object* _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__6_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__5_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_));
v___x_95_ = lean_obj_once(&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__4_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_, &l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__4_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__once, _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__4_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_);
v___x_96_ = l_Lean_Name_str___override(v___x_95_, v___x_94_);
return v___x_96_;
}
}
static lean_object* _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__8_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_98_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__7_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_));
v___x_99_ = lean_obj_once(&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__6_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_, &l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__6_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__once, _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__6_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_);
v___x_100_ = l_Lean_Name_str___override(v___x_99_, v___x_98_);
return v___x_100_;
}
}
static lean_object* _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__9_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_101_ = lean_unsigned_to_nat(0u);
v___x_102_ = lean_obj_once(&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__8_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_, &l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__8_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__once, _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__8_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_);
v___x_103_ = l_Lean_Name_num___override(v___x_102_, v___x_101_);
return v___x_103_;
}
}
static lean_object* _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__10_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_104_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__3_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_));
v___x_105_ = lean_obj_once(&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__9_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_, &l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__9_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__once, _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__9_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_);
v___x_106_ = l_Lean_Name_str___override(v___x_105_, v___x_104_);
return v___x_106_;
}
}
static lean_object* _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__11_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_107_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__5_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_));
v___x_108_ = lean_obj_once(&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__10_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_, &l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__10_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__once, _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__10_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_);
v___x_109_ = l_Lean_Name_str___override(v___x_108_, v___x_107_);
return v___x_109_;
}
}
static lean_object* _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__13_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_111_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__12_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_));
v___x_112_ = lean_obj_once(&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__11_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_, &l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__11_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__once, _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__11_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_);
v___x_113_ = l_Lean_Name_str___override(v___x_112_, v___x_111_);
return v___x_113_;
}
}
static lean_object* _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__14_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_114_ = lean_obj_once(&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__13_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_, &l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__13_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__once, _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__13_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_);
v___x_115_ = l_unsafeCast___redArg(v___x_114_);
return v___x_115_;
}
}
static lean_object* _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_(void){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = lean_obj_once(&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__14_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_, &l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__14_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__once, _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__14_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_);
return v___x_116_;
}
}
static lean_object* _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instTypeNameFunInfoEnvCacheKey(void){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_;
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache(lean_object* v_fn_121_, lean_object* v_maxArgs_x3f_122_, lean_object* v_k_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_){
_start:
{
lean_object* v___f_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v___f_129_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__0));
v___x_130_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__1));
v___x_131_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___closed__2));
v___x_132_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey___closed__0));
v___x_133_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey___closed__0));
v___x_134_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_;
v___x_135_ = l_Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_383016249____hygCtx___hyg_24_;
lean_inc(v_maxArgs_x3f_122_);
lean_inc_ref(v_fn_121_);
v___x_136_ = l_Lean_Meta_mkInfoCacheKey___redArg(v_fn_121_, v_maxArgs_x3f_122_, v_a_124_);
if (lean_obj_tag(v___x_136_) == 0)
{
lean_object* v_a_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_197_; 
v_a_137_ = lean_ctor_get(v___x_136_, 0);
v_isSharedCheck_197_ = !lean_is_exclusive(v___x_136_);
if (v_isSharedCheck_197_ == 0)
{
v___x_139_ = v___x_136_;
v_isShared_140_ = v_isSharedCheck_197_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_a_137_);
lean_dec(v___x_136_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_197_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v_finfo_142_; lean_object* v___y_143_; lean_object* v___x_175_; lean_object* v_cache_176_; lean_object* v_funInfo_177_; lean_object* v___x_178_; 
v___x_175_ = lean_st_ref_get(v_a_125_);
v_cache_176_ = lean_ctor_get(v___x_175_, 1);
lean_inc_ref(v_cache_176_);
lean_dec(v___x_175_);
v_funInfo_177_ = lean_ctor_get(v_cache_176_, 1);
lean_inc_ref(v_funInfo_177_);
lean_dec_ref(v_cache_176_);
lean_inc(v_a_137_);
v___x_178_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___x_130_, v___x_131_, v_funInfo_177_, v_a_137_);
lean_dec_ref(v_funInfo_177_);
if (lean_obj_tag(v___x_178_) == 0)
{
if (lean_obj_tag(v_fn_121_) == 4)
{
lean_object* v_declName_179_; lean_object* v_us_180_; uint8_t v___x_181_; 
v_declName_179_ = lean_ctor_get(v_fn_121_, 0);
lean_inc(v_declName_179_);
v_us_180_ = lean_ctor_get(v_fn_121_, 1);
lean_inc_n(v_us_180_, 2);
lean_dec_ref_known(v_fn_121_, 2);
v___x_181_ = l_List_any___redArg(v_us_180_, v___f_129_);
if (v___x_181_ == 0)
{
lean_object* v___x_182_; lean_object* v___x_183_; 
lean_inc(v_declName_179_);
v___x_182_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_182_, 0, v_declName_179_);
lean_ctor_set(v___x_182_, 1, v_us_180_);
lean_ctor_set(v___x_182_, 2, v_maxArgs_x3f_122_);
v___x_183_ = l_Lean_Meta_realizeValue___redArg(v___x_132_, v___x_133_, v___x_134_, v___x_135_, v_declName_179_, v___x_182_, v_k_123_, v_a_124_, v_a_125_, v_a_126_, v_a_127_);
if (lean_obj_tag(v___x_183_) == 0)
{
lean_object* v_a_184_; 
v_a_184_ = lean_ctor_get(v___x_183_, 0);
lean_inc(v_a_184_);
lean_dec_ref_known(v___x_183_, 1);
v_finfo_142_ = v_a_184_;
v___y_143_ = v_a_125_;
goto v___jp_141_;
}
else
{
lean_del_object(v___x_139_);
lean_dec(v_a_137_);
return v___x_183_;
}
}
else
{
lean_object* v___x_185_; 
lean_dec(v_us_180_);
lean_dec(v_declName_179_);
lean_dec(v_maxArgs_x3f_122_);
lean_inc(v_a_127_);
lean_inc_ref(v_a_126_);
lean_inc(v_a_125_);
lean_inc_ref(v_a_124_);
v___x_185_ = lean_apply_5(v_k_123_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, lean_box(0));
if (lean_obj_tag(v___x_185_) == 0)
{
lean_object* v_a_186_; 
v_a_186_ = lean_ctor_get(v___x_185_, 0);
lean_inc(v_a_186_);
lean_dec_ref_known(v___x_185_, 1);
v_finfo_142_ = v_a_186_;
v___y_143_ = v_a_125_;
goto v___jp_141_;
}
else
{
lean_del_object(v___x_139_);
lean_dec(v_a_137_);
return v___x_185_;
}
}
}
else
{
lean_object* v___x_187_; 
lean_dec(v_maxArgs_x3f_122_);
lean_dec_ref(v_fn_121_);
lean_inc(v_a_127_);
lean_inc_ref(v_a_126_);
lean_inc(v_a_125_);
lean_inc_ref(v_a_124_);
v___x_187_ = lean_apply_5(v_k_123_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, lean_box(0));
if (lean_obj_tag(v___x_187_) == 0)
{
lean_object* v_a_188_; 
v_a_188_ = lean_ctor_get(v___x_187_, 0);
lean_inc(v_a_188_);
lean_dec_ref_known(v___x_187_, 1);
v_finfo_142_ = v_a_188_;
v___y_143_ = v_a_125_;
goto v___jp_141_;
}
else
{
lean_del_object(v___x_139_);
lean_dec(v_a_137_);
return v___x_187_;
}
}
}
else
{
lean_object* v_val_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_196_; 
lean_del_object(v___x_139_);
lean_dec(v_a_137_);
lean_dec_ref(v_k_123_);
lean_dec(v_maxArgs_x3f_122_);
lean_dec_ref(v_fn_121_);
v_val_189_ = lean_ctor_get(v___x_178_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_196_ == 0)
{
v___x_191_ = v___x_178_;
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_val_189_);
lean_dec(v___x_178_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_194_; 
if (v_isShared_192_ == 0)
{
lean_ctor_set_tag(v___x_191_, 0);
v___x_194_ = v___x_191_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_val_189_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
}
v___jp_141_:
{
lean_object* v___x_144_; lean_object* v_cache_145_; lean_object* v_mctx_146_; lean_object* v_zetaDeltaFVarIds_147_; lean_object* v_postponed_148_; lean_object* v_diag_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_174_; 
v___x_144_ = lean_st_ref_take(v___y_143_);
v_cache_145_ = lean_ctor_get(v___x_144_, 1);
v_mctx_146_ = lean_ctor_get(v___x_144_, 0);
v_zetaDeltaFVarIds_147_ = lean_ctor_get(v___x_144_, 2);
v_postponed_148_ = lean_ctor_get(v___x_144_, 3);
v_diag_149_ = lean_ctor_get(v___x_144_, 4);
v_isSharedCheck_174_ = !lean_is_exclusive(v___x_144_);
if (v_isSharedCheck_174_ == 0)
{
v___x_151_ = v___x_144_;
v_isShared_152_ = v_isSharedCheck_174_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_diag_149_);
lean_inc(v_postponed_148_);
lean_inc(v_zetaDeltaFVarIds_147_);
lean_inc(v_cache_145_);
lean_inc(v_mctx_146_);
lean_dec(v___x_144_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_174_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v_inferType_153_; lean_object* v_funInfo_154_; lean_object* v_synthInstance_155_; lean_object* v_whnf_156_; lean_object* v_defEqTrans_157_; lean_object* v_defEqPerm_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_173_; 
v_inferType_153_ = lean_ctor_get(v_cache_145_, 0);
v_funInfo_154_ = lean_ctor_get(v_cache_145_, 1);
v_synthInstance_155_ = lean_ctor_get(v_cache_145_, 2);
v_whnf_156_ = lean_ctor_get(v_cache_145_, 3);
v_defEqTrans_157_ = lean_ctor_get(v_cache_145_, 4);
v_defEqPerm_158_ = lean_ctor_get(v_cache_145_, 5);
v_isSharedCheck_173_ = !lean_is_exclusive(v_cache_145_);
if (v_isSharedCheck_173_ == 0)
{
v___x_160_ = v_cache_145_;
v_isShared_161_ = v_isSharedCheck_173_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_defEqPerm_158_);
lean_inc(v_defEqTrans_157_);
lean_inc(v_whnf_156_);
lean_inc(v_synthInstance_155_);
lean_inc(v_funInfo_154_);
lean_inc(v_inferType_153_);
lean_dec(v_cache_145_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_173_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_162_; lean_object* v___x_164_; 
lean_inc_ref(v_finfo_142_);
v___x_162_ = l_Lean_PersistentHashMap_insert___redArg(v___x_130_, v___x_131_, v_funInfo_154_, v_a_137_, v_finfo_142_);
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 1, v___x_162_);
v___x_164_ = v___x_160_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v_inferType_153_);
lean_ctor_set(v_reuseFailAlloc_172_, 1, v___x_162_);
lean_ctor_set(v_reuseFailAlloc_172_, 2, v_synthInstance_155_);
lean_ctor_set(v_reuseFailAlloc_172_, 3, v_whnf_156_);
lean_ctor_set(v_reuseFailAlloc_172_, 4, v_defEqTrans_157_);
lean_ctor_set(v_reuseFailAlloc_172_, 5, v_defEqPerm_158_);
v___x_164_ = v_reuseFailAlloc_172_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
lean_object* v___x_166_; 
if (v_isShared_152_ == 0)
{
lean_ctor_set(v___x_151_, 1, v___x_164_);
v___x_166_ = v___x_151_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v_mctx_146_);
lean_ctor_set(v_reuseFailAlloc_171_, 1, v___x_164_);
lean_ctor_set(v_reuseFailAlloc_171_, 2, v_zetaDeltaFVarIds_147_);
lean_ctor_set(v_reuseFailAlloc_171_, 3, v_postponed_148_);
lean_ctor_set(v_reuseFailAlloc_171_, 4, v_diag_149_);
v___x_166_ = v_reuseFailAlloc_171_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
lean_object* v___x_167_; lean_object* v___x_169_; 
v___x_167_ = lean_st_ref_put(v___y_143_, v___x_166_);
if (v_isShared_140_ == 0)
{
lean_ctor_set(v___x_139_, 0, v_finfo_142_);
v___x_169_ = v___x_139_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_finfo_142_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
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
lean_object* v_a_198_; lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_205_; 
lean_dec_ref(v_k_123_);
lean_dec(v_maxArgs_x3f_122_);
lean_dec_ref(v_fn_121_);
v_a_198_ = lean_ctor_get(v___x_136_, 0);
v_isSharedCheck_205_ = !lean_is_exclusive(v___x_136_);
if (v_isSharedCheck_205_ == 0)
{
v___x_200_ = v___x_136_;
v_isShared_201_ = v_isSharedCheck_205_;
goto v_resetjp_199_;
}
else
{
lean_inc(v_a_198_);
lean_dec(v___x_136_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_205_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v___x_203_; 
if (v_isShared_201_ == 0)
{
v___x_203_ = v___x_200_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v_a_198_);
v___x_203_ = v_reuseFailAlloc_204_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
return v___x_203_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache___boxed(lean_object* v_fn_206_, lean_object* v_maxArgs_x3f_207_, lean_object* v_k_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_checkFunInfoCache(v_fn_206_, v_maxArgs_x3f_207_, v_k_208_, v_a_209_, v_a_210_, v_a_211_, v_a_212_);
lean_dec(v_a_212_);
lean_dec_ref(v_a_211_);
lean_dec(v_a_210_);
lean_dec_ref(v_a_209_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg(lean_object* v_e_215_, lean_object* v_deps_216_, lean_object* v_k_217_){
_start:
{
uint8_t v___x_218_; 
v___x_218_ = l_Lean_Expr_hasFVar(v_e_215_);
if (v___x_218_ == 0)
{
lean_dec(v_k_217_);
return v_deps_216_;
}
else
{
lean_object* v___x_219_; 
v___x_219_ = lean_apply_1(v_k_217_, v_deps_216_);
return v___x_219_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg___boxed(lean_object* v_e_220_, lean_object* v_deps_221_, lean_object* v_k_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___redArg(v_e_220_, v_deps_221_, v_k_222_);
lean_dec_ref(v_e_220_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar(lean_object* v_00_u03b1_224_, lean_object* v_e_225_, lean_object* v_deps_226_, lean_object* v_k_227_){
_start:
{
uint8_t v___x_228_; 
v___x_228_ = l_Lean_Expr_hasFVar(v_e_225_);
if (v___x_228_ == 0)
{
lean_dec(v_k_227_);
return v_deps_226_;
}
else
{
lean_object* v___x_229_; 
v___x_229_ = lean_apply_1(v_k_227_, v_deps_226_);
return v___x_229_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar___boxed(lean_object* v_00_u03b1_230_, lean_object* v_e_231_, lean_object* v_deps_232_, lean_object* v_k_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_whenHasVar(v_00_u03b1_230_, v_e_231_, v_deps_232_, v_k_233_);
lean_dec_ref(v_e_231_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1(lean_object* v_xs_235_, lean_object* v_v_236_, lean_object* v_i_237_){
_start:
{
lean_object* v___x_238_; uint8_t v___x_239_; 
v___x_238_ = lean_array_get_size(v_xs_235_);
v___x_239_ = lean_nat_dec_lt(v_i_237_, v___x_238_);
if (v___x_239_ == 0)
{
lean_object* v___x_240_; 
lean_dec(v_i_237_);
v___x_240_ = lean_box(0);
return v___x_240_;
}
else
{
lean_object* v___x_241_; uint8_t v___x_242_; 
v___x_241_ = lean_array_fget_borrowed(v_xs_235_, v_i_237_);
v___x_242_ = lean_expr_eqv(v___x_241_, v_v_236_);
if (v___x_242_ == 0)
{
lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_243_ = lean_unsigned_to_nat(1u);
v___x_244_ = lean_nat_add(v_i_237_, v___x_243_);
lean_dec(v_i_237_);
v_i_237_ = v___x_244_;
goto _start;
}
else
{
lean_object* v___x_246_; 
v___x_246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_246_, 0, v_i_237_);
return v___x_246_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1___boxed(lean_object* v_xs_247_, lean_object* v_v_248_, lean_object* v_i_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1(v_xs_247_, v_v_248_, v_i_249_);
lean_dec_ref(v_v_248_);
lean_dec_ref(v_xs_247_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0(lean_object* v_xs_251_, lean_object* v_v_252_){
_start:
{
lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_253_ = lean_unsigned_to_nat(0u);
v___x_254_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0_spec__1(v_xs_251_, v_v_252_, v___x_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0___boxed(lean_object* v_xs_255_, lean_object* v_v_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0(v_xs_255_, v_v_256_);
lean_dec_ref(v_v_256_);
lean_dec_ref(v_xs_255_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(lean_object* v_xs_258_, lean_object* v_v_259_){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0_spec__0(v_xs_258_, v_v_259_);
if (lean_obj_tag(v___x_260_) == 0)
{
lean_object* v___x_261_; 
v___x_261_ = lean_box(0);
return v___x_261_;
}
else
{
lean_object* v_val_262_; lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_269_; 
v_val_262_ = lean_ctor_get(v___x_260_, 0);
v_isSharedCheck_269_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_269_ == 0)
{
v___x_264_ = v___x_260_;
v_isShared_265_ = v_isSharedCheck_269_;
goto v_resetjp_263_;
}
else
{
lean_inc(v_val_262_);
lean_dec(v___x_260_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_269_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
lean_object* v___x_267_; 
if (v_isShared_265_ == 0)
{
v___x_267_ = v___x_264_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_val_262_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
return v___x_267_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0___boxed(lean_object* v_xs_270_, lean_object* v_v_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(v_xs_270_, v_v_271_);
lean_dec_ref(v_v_271_);
lean_dec_ref(v_xs_270_);
return v_res_272_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2(lean_object* v_a_273_, lean_object* v_as_274_, size_t v_i_275_, size_t v_stop_276_){
_start:
{
uint8_t v___x_277_; 
v___x_277_ = lean_usize_dec_eq(v_i_275_, v_stop_276_);
if (v___x_277_ == 0)
{
lean_object* v___x_278_; uint8_t v___x_279_; 
v___x_278_ = lean_array_uget_borrowed(v_as_274_, v_i_275_);
v___x_279_ = lean_nat_dec_eq(v_a_273_, v___x_278_);
if (v___x_279_ == 0)
{
size_t v___x_280_; size_t v___x_281_; 
v___x_280_ = ((size_t)1ULL);
v___x_281_ = lean_usize_add(v_i_275_, v___x_280_);
v_i_275_ = v___x_281_;
goto _start;
}
else
{
return v___x_279_;
}
}
else
{
uint8_t v___x_283_; 
v___x_283_ = 0;
return v___x_283_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2___boxed(lean_object* v_a_284_, lean_object* v_as_285_, lean_object* v_i_286_, lean_object* v_stop_287_){
_start:
{
size_t v_i_boxed_288_; size_t v_stop_boxed_289_; uint8_t v_res_290_; lean_object* v_r_291_; 
v_i_boxed_288_ = lean_unbox_usize(v_i_286_);
lean_dec(v_i_286_);
v_stop_boxed_289_ = lean_unbox_usize(v_stop_287_);
lean_dec(v_stop_287_);
v_res_290_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2(v_a_284_, v_as_285_, v_i_boxed_288_, v_stop_boxed_289_);
lean_dec_ref(v_as_285_);
lean_dec(v_a_284_);
v_r_291_ = lean_box(v_res_290_);
return v_r_291_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(lean_object* v_as_292_, lean_object* v_a_293_){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; uint8_t v___x_296_; 
v___x_294_ = lean_unsigned_to_nat(0u);
v___x_295_ = lean_array_get_size(v_as_292_);
v___x_296_ = lean_nat_dec_lt(v___x_294_, v___x_295_);
if (v___x_296_ == 0)
{
return v___x_296_;
}
else
{
if (v___x_296_ == 0)
{
return v___x_296_;
}
else
{
size_t v___x_297_; size_t v___x_298_; uint8_t v___x_299_; 
v___x_297_ = ((size_t)0ULL);
v___x_298_ = lean_usize_of_nat(v___x_295_);
v___x_299_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1_spec__2(v_a_293_, v_as_292_, v___x_297_, v___x_298_);
return v___x_299_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1___boxed(lean_object* v_as_300_, lean_object* v_a_301_){
_start:
{
uint8_t v_res_302_; lean_object* v_r_303_; 
v_res_302_ = l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(v_as_300_, v_a_301_);
lean_dec(v_a_301_);
lean_dec_ref(v_as_300_);
v_r_303_ = lean_box(v_res_302_);
return v_r_303_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(lean_object* v_fvars_304_, lean_object* v_e_305_, lean_object* v_deps_306_){
_start:
{
lean_object* v_d_308_; lean_object* v_b_309_; 
switch(lean_obj_tag(v_e_305_))
{
case 5:
{
lean_object* v_fn_313_; lean_object* v_arg_314_; uint8_t v___x_315_; 
v_fn_313_ = lean_ctor_get(v_e_305_, 0);
v_arg_314_ = lean_ctor_get(v_e_305_, 1);
v___x_315_ = l_Lean_Expr_hasFVar(v_e_305_);
if (v___x_315_ == 0)
{
return v_deps_306_;
}
else
{
lean_object* v___x_316_; 
v___x_316_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_304_, v_fn_313_, v_deps_306_);
v_e_305_ = v_arg_314_;
v_deps_306_ = v___x_316_;
goto _start;
}
}
case 7:
{
lean_object* v_binderType_318_; lean_object* v_body_319_; 
v_binderType_318_ = lean_ctor_get(v_e_305_, 1);
v_body_319_ = lean_ctor_get(v_e_305_, 2);
v_d_308_ = v_binderType_318_;
v_b_309_ = v_body_319_;
goto v___jp_307_;
}
case 6:
{
lean_object* v_binderType_320_; lean_object* v_body_321_; 
v_binderType_320_ = lean_ctor_get(v_e_305_, 1);
v_body_321_ = lean_ctor_get(v_e_305_, 2);
v_d_308_ = v_binderType_320_;
v_b_309_ = v_body_321_;
goto v___jp_307_;
}
case 8:
{
lean_object* v_type_322_; lean_object* v_value_323_; lean_object* v_body_324_; uint8_t v___x_325_; 
v_type_322_ = lean_ctor_get(v_e_305_, 1);
v_value_323_ = lean_ctor_get(v_e_305_, 2);
v_body_324_ = lean_ctor_get(v_e_305_, 3);
v___x_325_ = l_Lean_Expr_hasFVar(v_e_305_);
if (v___x_325_ == 0)
{
return v_deps_306_;
}
else
{
lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_326_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_304_, v_type_322_, v_deps_306_);
v___x_327_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_304_, v_value_323_, v___x_326_);
v_e_305_ = v_body_324_;
v_deps_306_ = v___x_327_;
goto _start;
}
}
case 11:
{
lean_object* v_struct_329_; 
v_struct_329_ = lean_ctor_get(v_e_305_, 2);
v_e_305_ = v_struct_329_;
goto _start;
}
case 10:
{
lean_object* v_expr_331_; 
v_expr_331_ = lean_ctor_get(v_e_305_, 1);
v_e_305_ = v_expr_331_;
goto _start;
}
case 1:
{
lean_object* v___x_333_; 
v___x_333_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(v_fvars_304_, v_e_305_);
if (lean_obj_tag(v___x_333_) == 0)
{
return v_deps_306_;
}
else
{
lean_object* v_val_334_; uint8_t v___x_335_; 
v_val_334_ = lean_ctor_get(v___x_333_, 0);
lean_inc(v_val_334_);
lean_dec_ref_known(v___x_333_, 1);
v___x_335_ = l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(v_deps_306_, v_val_334_);
if (v___x_335_ == 0)
{
lean_object* v___x_336_; 
v___x_336_ = lean_array_push(v_deps_306_, v_val_334_);
return v___x_336_;
}
else
{
lean_dec(v_val_334_);
return v_deps_306_;
}
}
}
default: 
{
return v_deps_306_;
}
}
v___jp_307_:
{
uint8_t v___x_310_; 
v___x_310_ = l_Lean_Expr_hasFVar(v_e_305_);
if (v___x_310_ == 0)
{
return v_deps_306_;
}
else
{
lean_object* v___x_311_; 
v___x_311_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_304_, v_d_308_, v_deps_306_);
v_e_305_ = v_b_309_;
v_deps_306_ = v___x_311_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit___boxed(lean_object* v_fvars_337_, lean_object* v_e_338_, lean_object* v_deps_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_337_, v_e_338_, v_deps_339_);
lean_dec_ref(v_e_338_);
lean_dec_ref(v_fvars_337_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(lean_object* v_hi_341_, lean_object* v_pivot_342_, lean_object* v_as_343_, lean_object* v_i_344_, lean_object* v_k_345_){
_start:
{
uint8_t v___x_346_; 
v___x_346_ = lean_nat_dec_lt(v_k_345_, v_hi_341_);
if (v___x_346_ == 0)
{
lean_object* v___x_347_; lean_object* v___x_348_; 
lean_dec(v_k_345_);
v___x_347_ = lean_array_fswap(v_as_343_, v_i_344_, v_hi_341_);
v___x_348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_348_, 0, v_i_344_);
lean_ctor_set(v___x_348_, 1, v___x_347_);
return v___x_348_;
}
else
{
lean_object* v___x_349_; uint8_t v___x_350_; 
v___x_349_ = lean_array_fget_borrowed(v_as_343_, v_k_345_);
v___x_350_ = lean_nat_dec_lt(v___x_349_, v_pivot_342_);
if (v___x_350_ == 0)
{
lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_351_ = lean_unsigned_to_nat(1u);
v___x_352_ = lean_nat_add(v_k_345_, v___x_351_);
lean_dec(v_k_345_);
v_k_345_ = v___x_352_;
goto _start;
}
else
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_354_ = lean_array_fswap(v_as_343_, v_i_344_, v_k_345_);
v___x_355_ = lean_unsigned_to_nat(1u);
v___x_356_ = lean_nat_add(v_i_344_, v___x_355_);
lean_dec(v_i_344_);
v___x_357_ = lean_nat_add(v_k_345_, v___x_355_);
lean_dec(v_k_345_);
v_as_343_ = v___x_354_;
v_i_344_ = v___x_356_;
v_k_345_ = v___x_357_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg___boxed(lean_object* v_hi_359_, lean_object* v_pivot_360_, lean_object* v_as_361_, lean_object* v_i_362_, lean_object* v_k_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(v_hi_359_, v_pivot_360_, v_as_361_, v_i_362_, v_k_363_);
lean_dec(v_pivot_360_);
lean_dec(v_hi_359_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(lean_object* v_n_365_, lean_object* v_as_366_, lean_object* v_lo_367_, lean_object* v_hi_368_){
_start:
{
lean_object* v___y_370_; uint8_t v___x_380_; 
v___x_380_ = lean_nat_dec_lt(v_lo_367_, v_hi_368_);
if (v___x_380_ == 0)
{
lean_dec(v_lo_367_);
return v_as_366_;
}
else
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v_mid_383_; lean_object* v___y_385_; lean_object* v___y_391_; lean_object* v___x_396_; lean_object* v___x_397_; uint8_t v___x_398_; 
v___x_381_ = lean_nat_add(v_lo_367_, v_hi_368_);
v___x_382_ = lean_unsigned_to_nat(1u);
v_mid_383_ = lean_nat_shiftr(v___x_381_, v___x_382_);
lean_dec(v___x_381_);
v___x_396_ = lean_array_fget_borrowed(v_as_366_, v_mid_383_);
v___x_397_ = lean_array_fget_borrowed(v_as_366_, v_lo_367_);
v___x_398_ = lean_nat_dec_lt(v___x_396_, v___x_397_);
if (v___x_398_ == 0)
{
v___y_391_ = v_as_366_;
goto v___jp_390_;
}
else
{
lean_object* v___x_399_; 
v___x_399_ = lean_array_fswap(v_as_366_, v_lo_367_, v_mid_383_);
v___y_391_ = v___x_399_;
goto v___jp_390_;
}
v___jp_384_:
{
lean_object* v___x_386_; lean_object* v___x_387_; uint8_t v___x_388_; 
v___x_386_ = lean_array_fget_borrowed(v___y_385_, v_mid_383_);
v___x_387_ = lean_array_fget_borrowed(v___y_385_, v_hi_368_);
v___x_388_ = lean_nat_dec_lt(v___x_386_, v___x_387_);
if (v___x_388_ == 0)
{
lean_dec(v_mid_383_);
v___y_370_ = v___y_385_;
goto v___jp_369_;
}
else
{
lean_object* v___x_389_; 
v___x_389_ = lean_array_fswap(v___y_385_, v_mid_383_, v_hi_368_);
lean_dec(v_mid_383_);
v___y_370_ = v___x_389_;
goto v___jp_369_;
}
}
v___jp_390_:
{
lean_object* v___x_392_; lean_object* v___x_393_; uint8_t v___x_394_; 
v___x_392_ = lean_array_fget_borrowed(v___y_391_, v_hi_368_);
v___x_393_ = lean_array_fget_borrowed(v___y_391_, v_lo_367_);
v___x_394_ = lean_nat_dec_lt(v___x_392_, v___x_393_);
if (v___x_394_ == 0)
{
v___y_385_ = v___y_391_;
goto v___jp_384_;
}
else
{
lean_object* v___x_395_; 
v___x_395_ = lean_array_fswap(v___y_391_, v_lo_367_, v_hi_368_);
v___y_385_ = v___x_395_;
goto v___jp_384_;
}
}
}
v___jp_369_:
{
lean_object* v_pivot_371_; lean_object* v___x_372_; lean_object* v_fst_373_; lean_object* v_snd_374_; uint8_t v___x_375_; 
v_pivot_371_ = lean_array_fget(v___y_370_, v_hi_368_);
lean_inc_n(v_lo_367_, 2);
v___x_372_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(v_hi_368_, v_pivot_371_, v___y_370_, v_lo_367_, v_lo_367_);
lean_dec(v_pivot_371_);
v_fst_373_ = lean_ctor_get(v___x_372_, 0);
lean_inc(v_fst_373_);
v_snd_374_ = lean_ctor_get(v___x_372_, 1);
lean_inc(v_snd_374_);
lean_dec_ref(v___x_372_);
v___x_375_ = lean_nat_dec_le(v_hi_368_, v_fst_373_);
if (v___x_375_ == 0)
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_376_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v_n_365_, v_snd_374_, v_lo_367_, v_fst_373_);
v___x_377_ = lean_unsigned_to_nat(1u);
v___x_378_ = lean_nat_add(v_fst_373_, v___x_377_);
lean_dec(v_fst_373_);
v_as_366_ = v___x_376_;
v_lo_367_ = v___x_378_;
goto _start;
}
else
{
lean_dec(v_fst_373_);
lean_dec(v_lo_367_);
return v_snd_374_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg___boxed(lean_object* v_n_400_, lean_object* v_as_401_, lean_object* v_lo_402_, lean_object* v_hi_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v_n_400_, v_as_401_, v_lo_402_, v_hi_403_);
lean_dec(v_hi_403_);
lean_dec(v_n_400_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(lean_object* v_fvars_407_, lean_object* v_e_408_){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v_deps_411_; lean_object* v___x_412_; uint8_t v___x_413_; 
v___x_409_ = lean_unsigned_to_nat(0u);
v___x_410_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___closed__0));
v_deps_411_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit(v_fvars_407_, v_e_408_, v___x_410_);
v___x_412_ = lean_array_get_size(v_deps_411_);
v___x_413_ = lean_nat_dec_eq(v___x_412_, v___x_409_);
if (v___x_413_ == 0)
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___y_417_; uint8_t v___x_421_; 
v___x_414_ = lean_unsigned_to_nat(1u);
v___x_415_ = lean_nat_sub(v___x_412_, v___x_414_);
v___x_421_ = lean_nat_dec_le(v___x_409_, v___x_415_);
if (v___x_421_ == 0)
{
lean_inc(v___x_415_);
v___y_417_ = v___x_415_;
goto v___jp_416_;
}
else
{
v___y_417_ = v___x_409_;
goto v___jp_416_;
}
v___jp_416_:
{
uint8_t v___x_418_; 
v___x_418_ = lean_nat_dec_le(v___y_417_, v___x_415_);
if (v___x_418_ == 0)
{
lean_object* v___x_419_; 
lean_dec(v___x_415_);
lean_inc(v___y_417_);
v___x_419_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v___x_412_, v_deps_411_, v___y_417_, v___y_417_);
lean_dec(v___y_417_);
return v___x_419_;
}
else
{
lean_object* v___x_420_; 
v___x_420_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v___x_412_, v_deps_411_, v___y_417_, v___x_415_);
lean_dec(v___x_415_);
return v___x_420_;
}
}
}
else
{
return v_deps_411_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps___boxed(lean_object* v_fvars_422_, lean_object* v_e_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(v_fvars_422_, v_e_423_);
lean_dec_ref(v_e_423_);
lean_dec_ref(v_fvars_422_);
return v_res_424_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0(lean_object* v_n_425_, lean_object* v_as_426_, lean_object* v_lo_427_, lean_object* v_hi_428_, lean_object* v_w_429_, lean_object* v_hlo_430_, lean_object* v_hhi_431_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___redArg(v_n_425_, v_as_426_, v_lo_427_, v_hi_428_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0___boxed(lean_object* v_n_433_, lean_object* v_as_434_, lean_object* v_lo_435_, lean_object* v_hi_436_, lean_object* v_w_437_, lean_object* v_hlo_438_, lean_object* v_hhi_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0(v_n_433_, v_as_434_, v_lo_435_, v_hi_436_, v_w_437_, v_hlo_438_, v_hhi_439_);
lean_dec(v_hi_436_);
lean_dec(v_n_433_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0(lean_object* v_n_441_, lean_object* v_lo_442_, lean_object* v_hi_443_, lean_object* v_hhi_444_, lean_object* v_pivot_445_, lean_object* v_as_446_, lean_object* v_i_447_, lean_object* v_k_448_, lean_object* v_ilo_449_, lean_object* v_ik_450_, lean_object* v_w_451_){
_start:
{
lean_object* v___x_452_; 
v___x_452_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___redArg(v_hi_443_, v_pivot_445_, v_as_446_, v_i_447_, v_k_448_);
return v___x_452_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0___boxed(lean_object* v_n_453_, lean_object* v_lo_454_, lean_object* v_hi_455_, lean_object* v_hhi_456_, lean_object* v_pivot_457_, lean_object* v_as_458_, lean_object* v_i_459_, lean_object* v_k_460_, lean_object* v_ilo_461_, lean_object* v_ik_462_, lean_object* v_w_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_spec__0_spec__0(v_n_453_, v_lo_454_, v_hi_455_, v_hhi_456_, v_pivot_457_, v_as_458_, v_i_459_, v_k_460_, v_ilo_461_, v_ik_462_, v_w_463_);
lean_dec(v_pivot_457_);
lean_dec(v_hi_455_);
lean_dec(v_lo_454_);
lean_dec(v_n_453_);
return v_res_464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(lean_object* v_backDeps_465_, size_t v_sz_466_, size_t v_i_467_, lean_object* v_bs_468_){
_start:
{
uint8_t v___x_469_; 
v___x_469_ = lean_usize_dec_lt(v_i_467_, v_sz_466_);
if (v___x_469_ == 0)
{
lean_object* v___x_470_; 
v___x_470_ = l_unsafeCast___redArg(v_bs_468_);
lean_dec_ref(v_bs_468_);
return v___x_470_;
}
else
{
lean_object* v_v_471_; lean_object* v___x_472_; uint8_t v_binderInfo_473_; uint8_t v_hasFwdDeps_474_; lean_object* v_backDeps_475_; uint8_t v_isProp_476_; uint8_t v_isDecInst_477_; uint8_t v_isInstance_478_; uint8_t v_higherOrderOutParam_479_; uint8_t v_dependsOnHigherOrderOutParam_480_; lean_object* v___x_481_; lean_object* v_bs_x27_482_; lean_object* v___y_484_; 
v_v_471_ = lean_array_uget_borrowed(v_bs_468_, v_i_467_);
v___x_472_ = l_unsafeCast___redArg(v_v_471_);
v_binderInfo_473_ = lean_ctor_get_uint8(v___x_472_, sizeof(void*)*1);
v_hasFwdDeps_474_ = lean_ctor_get_uint8(v___x_472_, sizeof(void*)*1 + 1);
v_backDeps_475_ = lean_ctor_get(v___x_472_, 0);
lean_inc_ref(v_backDeps_475_);
v_isProp_476_ = lean_ctor_get_uint8(v___x_472_, sizeof(void*)*1 + 2);
v_isDecInst_477_ = lean_ctor_get_uint8(v___x_472_, sizeof(void*)*1 + 3);
v_isInstance_478_ = lean_ctor_get_uint8(v___x_472_, sizeof(void*)*1 + 4);
v_higherOrderOutParam_479_ = lean_ctor_get_uint8(v___x_472_, sizeof(void*)*1 + 5);
v_dependsOnHigherOrderOutParam_480_ = lean_ctor_get_uint8(v___x_472_, sizeof(void*)*1 + 6);
v___x_481_ = lean_unsigned_to_nat(0u);
v_bs_x27_482_ = lean_array_uset(v_bs_468_, v_i_467_, v___x_481_);
if (v_hasFwdDeps_474_ == 0)
{
lean_object* v___x_490_; uint8_t v___x_491_; 
v___x_490_ = lean_usize_to_nat(v_i_467_);
v___x_491_ = l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(v_backDeps_465_, v___x_490_);
lean_dec(v___x_490_);
if (v___x_491_ == 0)
{
lean_dec_ref(v_backDeps_475_);
v___y_484_ = v___x_472_;
goto v___jp_483_;
}
else
{
lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_498_; 
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_498_ == 0)
{
lean_object* v_unused_499_; 
v_unused_499_ = lean_ctor_get(v___x_472_, 0);
lean_dec(v_unused_499_);
v___x_493_ = v___x_472_;
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
else
{
lean_dec(v___x_472_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_496_; 
if (v_isShared_494_ == 0)
{
v___x_496_ = v___x_493_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(0, 1, 7);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v_backDeps_475_);
lean_ctor_set_uint8(v_reuseFailAlloc_497_, sizeof(void*)*1, v_binderInfo_473_);
lean_ctor_set_uint8(v_reuseFailAlloc_497_, sizeof(void*)*1 + 2, v_isProp_476_);
lean_ctor_set_uint8(v_reuseFailAlloc_497_, sizeof(void*)*1 + 3, v_isDecInst_477_);
lean_ctor_set_uint8(v_reuseFailAlloc_497_, sizeof(void*)*1 + 4, v_isInstance_478_);
lean_ctor_set_uint8(v_reuseFailAlloc_497_, sizeof(void*)*1 + 5, v_higherOrderOutParam_479_);
lean_ctor_set_uint8(v_reuseFailAlloc_497_, sizeof(void*)*1 + 6, v_dependsOnHigherOrderOutParam_480_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
lean_ctor_set_uint8(v___x_496_, sizeof(void*)*1 + 1, v___x_491_);
v___y_484_ = v___x_496_;
goto v___jp_483_;
}
}
}
}
else
{
lean_dec_ref(v_backDeps_475_);
v___y_484_ = v___x_472_;
goto v___jp_483_;
}
v___jp_483_:
{
size_t v___x_485_; size_t v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_485_ = ((size_t)1ULL);
v___x_486_ = lean_usize_add(v_i_467_, v___x_485_);
v___x_487_ = l_unsafeCast___redArg(v___y_484_);
lean_dec_ref(v___y_484_);
v___x_488_ = lean_array_uset(v_bs_x27_482_, v_i_467_, v___x_487_);
v_i_467_ = v___x_486_;
v_bs_468_ = v___x_488_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg___boxed(lean_object* v_backDeps_500_, lean_object* v_sz_501_, lean_object* v_i_502_, lean_object* v_bs_503_){
_start:
{
size_t v_sz_boxed_504_; size_t v_i_boxed_505_; lean_object* v_res_506_; 
v_sz_boxed_504_ = lean_unbox_usize(v_sz_501_);
lean_dec(v_sz_501_);
v_i_boxed_505_ = lean_unbox_usize(v_i_502_);
lean_dec(v_i_502_);
v_res_506_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(v_backDeps_500_, v_sz_boxed_504_, v_i_boxed_505_, v_bs_503_);
lean_dec_ref(v_backDeps_500_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(lean_object* v_pinfo_507_, lean_object* v_backDeps_508_){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; uint8_t v___x_511_; 
v___x_509_ = lean_array_get_size(v_backDeps_508_);
v___x_510_ = lean_unsigned_to_nat(0u);
v___x_511_ = lean_nat_dec_eq(v___x_509_, v___x_510_);
if (v___x_511_ == 0)
{
size_t v_sz_512_; size_t v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v_sz_512_ = lean_array_size(v_pinfo_507_);
v___x_513_ = ((size_t)0ULL);
v___x_514_ = l_unsafeCast___redArg(v_pinfo_507_);
v___x_515_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(v_backDeps_508_, v_sz_512_, v___x_513_, v___x_514_);
v___x_516_ = l_unsafeCast___redArg(v___x_515_);
lean_dec_ref(v___x_515_);
return v___x_516_;
}
else
{
lean_inc_ref(v_pinfo_507_);
return v_pinfo_507_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps___boxed(lean_object* v_pinfo_517_, lean_object* v_backDeps_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(v_pinfo_517_, v_backDeps_518_);
lean_dec_ref(v_backDeps_518_);
lean_dec_ref(v_pinfo_517_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0(lean_object* v_backDeps_520_, lean_object* v_as_521_, size_t v_sz_522_, size_t v_i_523_, lean_object* v_bs_524_){
_start:
{
lean_object* v___x_525_; 
v___x_525_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___redArg(v_backDeps_520_, v_sz_522_, v_i_523_, v_bs_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0___boxed(lean_object* v_backDeps_526_, lean_object* v_as_527_, lean_object* v_sz_528_, lean_object* v_i_529_, lean_object* v_bs_530_){
_start:
{
size_t v_sz_boxed_531_; size_t v_i_boxed_532_; lean_object* v_res_533_; 
v_sz_boxed_531_ = lean_unbox_usize(v_sz_528_);
lean_dec(v_sz_528_);
v_i_boxed_532_ = lean_unbox_usize(v_i_529_);
lean_dec(v_i_529_);
v_res_533_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps_spec__0(v_backDeps_526_, v_as_527_, v_sz_boxed_531_, v_i_boxed_532_, v_bs_530_);
lean_dec_ref(v_as_527_);
lean_dec_ref(v_backDeps_526_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0(lean_object* v_k_534_, lean_object* v_b_535_, lean_object* v_c_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_){
_start:
{
lean_object* v___x_542_; 
lean_inc(v___y_540_);
lean_inc_ref(v___y_539_);
lean_inc(v___y_538_);
lean_inc_ref(v___y_537_);
v___x_542_ = lean_apply_7(v_k_534_, v_b_535_, v_c_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, lean_box(0));
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0___boxed(lean_object* v_k_543_, lean_object* v_b_544_, lean_object* v_c_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0(v_k_543_, v_b_544_, v_c_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_);
lean_dec(v___y_549_);
lean_dec_ref(v___y_548_);
lean_dec(v___y_547_);
lean_dec_ref(v___y_546_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(lean_object* v_type_552_, lean_object* v_k_553_, uint8_t v_cleanupAnnotations_554_, uint8_t v_whnfType_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_){
_start:
{
lean_object* v___f_561_; lean_object* v___x_562_; 
v___f_561_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_561_, 0, v_k_553_);
v___x_562_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_552_, v___f_561_, v_cleanupAnnotations_554_, v_whnfType_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v_a_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_570_; 
v_a_563_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_570_ == 0)
{
v___x_565_ = v___x_562_;
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_a_563_);
lean_dec(v___x_562_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_568_; 
if (v_isShared_566_ == 0)
{
v___x_568_ = v___x_565_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_a_563_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
return v___x_568_;
}
}
}
else
{
lean_object* v_a_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_578_; 
v_a_571_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_578_ == 0)
{
v___x_573_ = v___x_562_;
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_a_571_);
lean_dec(v___x_562_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___x_576_; 
if (v_isShared_574_ == 0)
{
v___x_576_ = v___x_573_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_a_571_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
return v___x_576_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___boxed(lean_object* v_type_579_, lean_object* v_k_580_, lean_object* v_cleanupAnnotations_581_, lean_object* v_whnfType_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_588_; uint8_t v_whnfType_boxed_589_; lean_object* v_res_590_; 
v_cleanupAnnotations_boxed_588_ = lean_unbox(v_cleanupAnnotations_581_);
v_whnfType_boxed_589_ = lean_unbox(v_whnfType_582_);
v_res_590_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(v_type_579_, v_k_580_, v_cleanupAnnotations_boxed_588_, v_whnfType_boxed_589_, v___y_583_, v___y_584_, v___y_585_, v___y_586_);
lean_dec(v___y_586_);
lean_dec_ref(v___y_585_);
lean_dec(v___y_584_);
lean_dec_ref(v___y_583_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1(lean_object* v_00_u03b1_591_, lean_object* v_type_592_, lean_object* v_k_593_, uint8_t v_cleanupAnnotations_594_, uint8_t v_whnfType_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_){
_start:
{
lean_object* v___x_601_; 
v___x_601_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(v_type_592_, v_k_593_, v_cleanupAnnotations_594_, v_whnfType_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___boxed(lean_object* v_00_u03b1_602_, lean_object* v_type_603_, lean_object* v_k_604_, lean_object* v_cleanupAnnotations_605_, lean_object* v_whnfType_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_612_; uint8_t v_whnfType_boxed_613_; lean_object* v_res_614_; 
v_cleanupAnnotations_boxed_612_ = lean_unbox(v_cleanupAnnotations_605_);
v_whnfType_boxed_613_ = lean_unbox(v_whnfType_606_);
v_res_614_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1(v_00_u03b1_602_, v_type_603_, v_k_604_, v_cleanupAnnotations_boxed_612_, v_whnfType_boxed_613_, v___y_607_, v___y_608_, v___y_609_, v___y_610_);
lean_dec(v___y_610_);
lean_dec_ref(v___y_609_);
lean_dec(v___y_608_);
lean_dec_ref(v___y_607_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3(lean_object* v_msg_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_){
_start:
{
lean_object* v___f_622_; lean_object* v___x_8526__overap_623_; lean_object* v___x_624_; 
v___f_622_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___closed__0));
v___x_8526__overap_623_ = lean_panic_fn_borrowed(v___f_622_, v_msg_616_);
lean_inc(v___y_620_);
lean_inc_ref(v___y_619_);
lean_inc(v___y_618_);
lean_inc_ref(v___y_617_);
v___x_624_ = lean_apply_5(v___x_8526__overap_623_, v___y_617_, v___y_618_, v___y_619_, v___y_620_, lean_box(0));
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___boxed(lean_object* v_msg_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3(v_msg_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_);
lean_dec(v___y_629_);
lean_dec_ref(v___y_628_);
lean_dec(v___y_627_);
lean_dec_ref(v___y_626_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(lean_object* v_type_632_, lean_object* v_maxFVars_x3f_633_, lean_object* v_k_634_, uint8_t v_cleanupAnnotations_635_, uint8_t v_whnfType_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_){
_start:
{
lean_object* v___f_642_; lean_object* v___x_643_; 
v___f_642_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_642_, 0, v_k_634_);
v___x_643_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_632_, v_maxFVars_x3f_633_, v___f_642_, v_cleanupAnnotations_635_, v_whnfType_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_);
if (lean_obj_tag(v___x_643_) == 0)
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_651_; 
v_a_644_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_651_ == 0)
{
v___x_646_ = v___x_643_;
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_643_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v___x_649_; 
if (v_isShared_647_ == 0)
{
v___x_649_ = v___x_646_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_a_644_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
else
{
lean_object* v_a_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_659_; 
v_a_652_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_659_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_659_ == 0)
{
v___x_654_ = v___x_643_;
v_isShared_655_ = v_isSharedCheck_659_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_a_652_);
lean_dec(v___x_643_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_659_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_657_; 
if (v_isShared_655_ == 0)
{
v___x_657_ = v___x_654_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_a_652_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg___boxed(lean_object* v_type_660_, lean_object* v_maxFVars_x3f_661_, lean_object* v_k_662_, lean_object* v_cleanupAnnotations_663_, lean_object* v_whnfType_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_670_; uint8_t v_whnfType_boxed_671_; lean_object* v_res_672_; 
v_cleanupAnnotations_boxed_670_ = lean_unbox(v_cleanupAnnotations_663_);
v_whnfType_boxed_671_ = lean_unbox(v_whnfType_664_);
v_res_672_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(v_type_660_, v_maxFVars_x3f_661_, v_k_662_, v_cleanupAnnotations_boxed_670_, v_whnfType_boxed_671_, v___y_665_, v___y_666_, v___y_667_, v___y_668_);
lean_dec(v___y_668_);
lean_dec_ref(v___y_667_);
lean_dec(v___y_666_);
lean_dec_ref(v___y_665_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5(lean_object* v_00_u03b1_673_, lean_object* v_type_674_, lean_object* v_maxFVars_x3f_675_, lean_object* v_k_676_, uint8_t v_cleanupAnnotations_677_, uint8_t v_whnfType_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_){
_start:
{
lean_object* v___x_684_; 
v___x_684_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(v_type_674_, v_maxFVars_x3f_675_, v_k_676_, v_cleanupAnnotations_677_, v_whnfType_678_, v___y_679_, v___y_680_, v___y_681_, v___y_682_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___boxed(lean_object* v_00_u03b1_685_, lean_object* v_type_686_, lean_object* v_maxFVars_x3f_687_, lean_object* v_k_688_, lean_object* v_cleanupAnnotations_689_, lean_object* v_whnfType_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_696_; uint8_t v_whnfType_boxed_697_; lean_object* v_res_698_; 
v_cleanupAnnotations_boxed_696_ = lean_unbox(v_cleanupAnnotations_689_);
v_whnfType_boxed_697_ = lean_unbox(v_whnfType_690_);
v_res_698_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5(v_00_u03b1_685_, v_type_686_, v_maxFVars_x3f_687_, v_k_688_, v_cleanupAnnotations_boxed_696_, v_whnfType_boxed_697_, v___y_691_, v___y_692_, v___y_693_, v___y_694_);
lean_dec(v___y_694_);
lean_dec_ref(v___y_693_);
lean_dec(v___y_692_);
lean_dec_ref(v___y_691_);
return v_res_698_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_699_ = lean_box(0);
v___x_700_ = l_unsafeCast___redArg(v___x_699_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg(lean_object* v_upperBound_701_, lean_object* v_val_702_, lean_object* v___x_703_, lean_object* v_fvars_704_, lean_object* v_next_705_, lean_object* v_upperBound_706_, lean_object* v_a_707_, lean_object* v_b_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_){
_start:
{
lean_object* v_a_715_; uint8_t v___x_719_; 
v___x_719_ = lean_nat_dec_lt(v_a_707_, v_upperBound_701_);
if (v___x_719_ == 0)
{
lean_object* v___x_720_; 
lean_dec(v_a_707_);
v___x_720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_720_, 0, v_b_708_);
return v___x_720_;
}
else
{
lean_object* v_fst_721_; lean_object* v_snd_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_786_; 
v_fst_721_ = lean_ctor_get(v_b_708_, 0);
v_snd_722_ = lean_ctor_get(v_b_708_, 1);
v_isSharedCheck_786_ = !lean_is_exclusive(v_b_708_);
if (v_isSharedCheck_786_ == 0)
{
v___x_724_ = v_b_708_;
v_isShared_725_ = v_isSharedCheck_786_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_snd_722_);
lean_inc(v_fst_721_);
lean_dec(v_b_708_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_786_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
uint8_t v___x_726_; 
v___x_726_ = l_Array_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__1(v_val_702_, v_a_707_);
if (v___x_726_ == 0)
{
lean_object* v___x_728_; 
if (v_isShared_725_ == 0)
{
v___x_728_ = v___x_724_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_fst_721_);
lean_ctor_set(v_reuseFailAlloc_729_, 1, v_snd_722_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
v_a_715_ = v___x_728_;
goto v___jp_714_;
}
}
else
{
lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_730_ = lean_array_fget_borrowed(v___x_703_, v_a_707_);
v___x_731_ = l_Array_idxOf_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps_visit_spec__0(v_fvars_704_, v___x_730_);
if (lean_obj_tag(v___x_731_) == 1)
{
lean_object* v_val_732_; uint8_t v___x_733_; lean_object* v___x_734_; 
v_val_732_ = lean_ctor_get(v___x_731_, 0);
lean_inc(v_val_732_);
lean_dec_ref_known(v___x_731_, 1);
v___x_733_ = lean_nat_dec_lt(v_next_705_, v_upperBound_706_);
lean_inc(v___y_712_);
lean_inc_ref(v___y_711_);
lean_inc(v___y_710_);
lean_inc_ref(v___y_709_);
lean_inc(v___x_730_);
v___x_734_ = lean_infer_type(v___x_730_, v___y_709_, v___y_710_, v___y_711_, v___y_712_);
if (lean_obj_tag(v___x_734_) == 0)
{
lean_object* v_a_735_; lean_object* v___x_736_; 
v_a_735_ = lean_ctor_get(v___x_734_, 0);
lean_inc(v_a_735_);
lean_dec_ref_known(v___x_734_, 1);
lean_inc(v___y_712_);
lean_inc_ref(v___y_711_);
lean_inc(v___y_710_);
lean_inc_ref(v___y_709_);
v___x_736_ = lean_whnf(v_a_735_, v___y_709_, v___y_710_, v___y_711_, v___y_712_);
if (lean_obj_tag(v___x_736_) == 0)
{
lean_object* v_a_737_; lean_object* v___y_739_; uint8_t v___x_745_; 
v_a_737_ = lean_ctor_get(v___x_736_, 0);
lean_inc(v_a_737_);
lean_dec_ref_known(v___x_736_, 1);
v___x_745_ = l_Lean_Expr_isForall(v_a_737_);
lean_dec(v_a_737_);
if (v___x_745_ == 0)
{
lean_object* v___x_746_; 
lean_dec(v_val_732_);
lean_del_object(v___x_724_);
v___x_746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_746_, 0, v_fst_721_);
lean_ctor_set(v___x_746_, 1, v_snd_722_);
v_a_715_ = v___x_746_;
goto v___jp_714_;
}
else
{
lean_object* v___x_747_; uint8_t v___x_748_; 
v___x_747_ = lean_array_get_size(v_fst_721_);
v___x_748_ = lean_nat_dec_lt(v_val_732_, v___x_747_);
if (v___x_748_ == 0)
{
lean_dec(v_val_732_);
v___y_739_ = v_fst_721_;
goto v___jp_738_;
}
else
{
lean_object* v_v_749_; uint8_t v_binderInfo_750_; uint8_t v_hasFwdDeps_751_; lean_object* v_backDeps_752_; uint8_t v_isProp_753_; uint8_t v_isDecInst_754_; uint8_t v_isInstance_755_; uint8_t v_dependsOnHigherOrderOutParam_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_766_; 
v_v_749_ = lean_array_fget(v_fst_721_, v_val_732_);
v_binderInfo_750_ = lean_ctor_get_uint8(v_v_749_, sizeof(void*)*1);
v_hasFwdDeps_751_ = lean_ctor_get_uint8(v_v_749_, sizeof(void*)*1 + 1);
v_backDeps_752_ = lean_ctor_get(v_v_749_, 0);
v_isProp_753_ = lean_ctor_get_uint8(v_v_749_, sizeof(void*)*1 + 2);
v_isDecInst_754_ = lean_ctor_get_uint8(v_v_749_, sizeof(void*)*1 + 3);
v_isInstance_755_ = lean_ctor_get_uint8(v_v_749_, sizeof(void*)*1 + 4);
v_dependsOnHigherOrderOutParam_756_ = lean_ctor_get_uint8(v_v_749_, sizeof(void*)*1 + 6);
v_isSharedCheck_766_ = !lean_is_exclusive(v_v_749_);
if (v_isSharedCheck_766_ == 0)
{
v___x_758_ = v_v_749_;
v_isShared_759_ = v_isSharedCheck_766_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_backDeps_752_);
lean_dec(v_v_749_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_766_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_760_; lean_object* v_xs_x27_761_; lean_object* v___x_763_; 
v___x_760_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg___closed__0);
v_xs_x27_761_ = lean_array_fset(v_fst_721_, v_val_732_, v___x_760_);
if (v_isShared_759_ == 0)
{
v___x_763_ = v___x_758_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(0, 1, 7);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v_backDeps_752_);
lean_ctor_set_uint8(v_reuseFailAlloc_765_, sizeof(void*)*1, v_binderInfo_750_);
lean_ctor_set_uint8(v_reuseFailAlloc_765_, sizeof(void*)*1 + 1, v_hasFwdDeps_751_);
lean_ctor_set_uint8(v_reuseFailAlloc_765_, sizeof(void*)*1 + 2, v_isProp_753_);
lean_ctor_set_uint8(v_reuseFailAlloc_765_, sizeof(void*)*1 + 3, v_isDecInst_754_);
lean_ctor_set_uint8(v_reuseFailAlloc_765_, sizeof(void*)*1 + 4, v_isInstance_755_);
lean_ctor_set_uint8(v_reuseFailAlloc_765_, sizeof(void*)*1 + 6, v_dependsOnHigherOrderOutParam_756_);
v___x_763_ = v_reuseFailAlloc_765_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
lean_object* v___x_764_; 
lean_ctor_set_uint8(v___x_763_, sizeof(void*)*1 + 5, v___x_733_);
v___x_764_ = lean_array_fset(v_xs_x27_761_, v_val_732_, v___x_763_);
lean_dec(v_val_732_);
v___y_739_ = v___x_764_;
goto v___jp_738_;
}
}
}
}
v___jp_738_:
{
lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_743_; 
v___x_740_ = l_Lean_Expr_fvarId_x21(v___x_730_);
v___x_741_ = l_Lean_FVarIdSet_insert(v_snd_722_, v___x_740_);
if (v_isShared_725_ == 0)
{
lean_ctor_set(v___x_724_, 1, v___x_741_);
lean_ctor_set(v___x_724_, 0, v___y_739_);
v___x_743_ = v___x_724_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v___y_739_);
lean_ctor_set(v_reuseFailAlloc_744_, 1, v___x_741_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
v_a_715_ = v___x_743_;
goto v___jp_714_;
}
}
}
else
{
lean_object* v_a_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_774_; 
lean_dec(v_val_732_);
lean_del_object(v___x_724_);
lean_dec(v_snd_722_);
lean_dec(v_fst_721_);
lean_dec(v_a_707_);
v_a_767_ = lean_ctor_get(v___x_736_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_774_ == 0)
{
v___x_769_ = v___x_736_;
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_a_767_);
lean_dec(v___x_736_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_770_ == 0)
{
v___x_772_ = v___x_769_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_a_767_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
}
else
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
lean_dec(v_val_732_);
lean_del_object(v___x_724_);
lean_dec(v_snd_722_);
lean_dec(v_fst_721_);
lean_dec(v_a_707_);
v_a_775_ = lean_ctor_get(v___x_734_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_782_ == 0)
{
v___x_777_ = v___x_734_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_734_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
}
else
{
lean_object* v___x_784_; 
lean_dec(v___x_731_);
if (v_isShared_725_ == 0)
{
v___x_784_ = v___x_724_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_fst_721_);
lean_ctor_set(v_reuseFailAlloc_785_, 1, v_snd_722_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
v_a_715_ = v___x_784_;
goto v___jp_714_;
}
}
}
}
}
v___jp_714_:
{
lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_716_ = lean_unsigned_to_nat(1u);
v___x_717_ = lean_nat_add(v_a_707_, v___x_716_);
lean_dec(v_a_707_);
v_a_707_ = v___x_717_;
v_b_708_ = v_a_715_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg___boxed(lean_object* v_upperBound_787_, lean_object* v_val_788_, lean_object* v___x_789_, lean_object* v_fvars_790_, lean_object* v_next_791_, lean_object* v_upperBound_792_, lean_object* v_a_793_, lean_object* v_b_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg(v_upperBound_787_, v_val_788_, v___x_789_, v_fvars_790_, v_next_791_, v_upperBound_792_, v_a_793_, v_b_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_);
lean_dec(v___y_798_);
lean_dec_ref(v___y_797_);
lean_dec(v___y_796_);
lean_dec_ref(v___y_795_);
lean_dec(v_upperBound_792_);
lean_dec(v_next_791_);
lean_dec_ref(v_fvars_790_);
lean_dec_ref(v___x_789_);
lean_dec_ref(v_val_788_);
lean_dec(v_upperBound_787_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0(lean_object* v_x_804_, lean_object* v_type_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
lean_object* v___x_811_; uint8_t v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v___x_811_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___closed__1));
v___x_812_ = l_Lean_Expr_isAppOf(v_type_805_, v___x_811_);
v___x_813_ = lean_box(v___x_812_);
v___x_814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_814_, 0, v___x_813_);
return v___x_814_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0___boxed(lean_object* v_x_815_, lean_object* v_type_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__0(v_x_815_, v_type_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec_ref(v_type_816_);
lean_dec_ref(v_x_815_);
return v_res_822_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(lean_object* v_k_823_, lean_object* v_t_824_){
_start:
{
if (lean_obj_tag(v_t_824_) == 0)
{
lean_object* v_k_825_; lean_object* v_l_826_; lean_object* v_r_827_; uint8_t v___x_828_; 
v_k_825_ = lean_ctor_get(v_t_824_, 1);
v_l_826_ = lean_ctor_get(v_t_824_, 3);
v_r_827_ = lean_ctor_get(v_t_824_, 4);
v___x_828_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_823_, v_k_825_);
switch(v___x_828_)
{
case 0:
{
v_t_824_ = v_l_826_;
goto _start;
}
case 1:
{
uint8_t v___x_830_; 
v___x_830_ = 1;
return v___x_830_;
}
default: 
{
v_t_824_ = v_r_827_;
goto _start;
}
}
}
else
{
uint8_t v___x_832_; 
v___x_832_ = 0;
return v___x_832_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg___boxed(lean_object* v_k_833_, lean_object* v_t_834_){
_start:
{
uint8_t v_res_835_; lean_object* v_r_836_; 
v_res_835_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(v_k_833_, v_t_834_);
lean_dec(v_t_834_);
lean_dec(v_k_833_);
v_r_836_ = lean_box(v_res_835_);
return v_r_836_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1(lean_object* v_snd_837_, lean_object* v_e_838_){
_start:
{
uint8_t v___x_839_; 
v___x_839_ = l_Lean_Expr_isFVar(v_e_838_);
if (v___x_839_ == 0)
{
return v___x_839_;
}
else
{
lean_object* v___x_840_; uint8_t v___x_841_; 
v___x_840_ = l_Lean_Expr_fvarId_x21(v_e_838_);
v___x_841_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(v___x_840_, v_snd_837_);
lean_dec(v___x_840_);
return v___x_841_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1___boxed(lean_object* v_snd_842_, lean_object* v_e_843_){
_start:
{
uint8_t v_res_844_; lean_object* v_r_845_; 
v_res_844_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1(v_snd_842_, v_e_843_);
lean_dec_ref(v_e_843_);
lean_dec(v_snd_842_);
v_r_845_ = lean_box(v_res_844_);
return v_r_845_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_847_ = lean_box(0);
v___x_848_ = l_unsafeCast___redArg(v___x_847_);
return v___x_848_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_849_; lean_object* v_dummy_850_; 
v___x_849_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__1);
v_dummy_850_ = l_Lean_Expr_sort___override(v___x_849_);
return v_dummy_850_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__6(void){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_854_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5));
v___x_855_ = lean_unsigned_to_nat(47u);
v___x_856_ = lean_unsigned_to_nat(121u);
v___x_857_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__4));
v___x_858_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__3));
v___x_859_ = l_mkPanicMessageWithDecl(v___x_858_, v___x_857_, v___x_856_, v___x_855_, v___x_854_);
return v___x_859_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(lean_object* v_upperBound_860_, lean_object* v_fvars_861_, lean_object* v_a_862_, lean_object* v_b_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_){
_start:
{
lean_object* v_a_870_; uint8_t v___x_874_; 
v___x_874_ = lean_nat_dec_lt(v_a_862_, v_upperBound_860_);
if (v___x_874_ == 0)
{
lean_object* v___x_875_; 
lean_dec(v_a_862_);
v___x_875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_875_, 0, v_b_863_);
return v___x_875_;
}
else
{
lean_object* v_fst_876_; lean_object* v_snd_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_997_; 
v_fst_876_ = lean_ctor_get(v_b_863_, 0);
v_snd_877_ = lean_ctor_get(v_b_863_, 1);
v_isSharedCheck_997_ = !lean_is_exclusive(v_b_863_);
if (v_isSharedCheck_997_ == 0)
{
v___x_879_ = v_b_863_;
v_isShared_880_ = v_isSharedCheck_997_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_snd_877_);
lean_inc(v_fst_876_);
lean_dec(v_b_863_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_997_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___f_881_; lean_object* v___f_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
v___f_881_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__0));
lean_inc(v_snd_877_);
v___f_882_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_882_, 0, v_snd_877_);
v___x_883_ = lean_array_fget_borrowed(v_fvars_861_, v_a_862_);
v___x_884_ = l_Lean_Meta_getFVarLocalDecl___redArg(v___x_883_, v___y_864_, v___y_866_, v___y_867_);
if (lean_obj_tag(v___x_884_) == 0)
{
lean_object* v_a_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___y_889_; uint8_t v___y_890_; uint8_t v___y_891_; uint8_t v___y_971_; 
v_a_885_ = lean_ctor_get(v___x_884_, 0);
lean_inc(v_a_885_);
lean_dec_ref_known(v___x_884_, 1);
v___x_886_ = l_Lean_LocalDecl_type(v_a_885_);
v___x_887_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(v_fvars_861_, v___x_886_);
if (lean_obj_tag(v_snd_877_) == 0)
{
lean_object* v___x_986_; 
v___x_986_ = lean_find_expr(v___f_882_, v___x_886_);
lean_dec_ref(v___f_882_);
if (lean_obj_tag(v___x_986_) == 0)
{
uint8_t v___x_987_; 
v___x_987_ = 0;
v___y_971_ = v___x_987_;
goto v___jp_970_;
}
else
{
lean_dec_ref_known(v___x_986_, 1);
v___y_971_ = v___x_874_;
goto v___jp_970_;
}
}
else
{
uint8_t v___x_988_; 
lean_dec_ref(v___f_882_);
v___x_988_ = 0;
v___y_971_ = v___x_988_;
goto v___jp_970_;
}
v___jp_888_:
{
lean_object* v___x_892_; lean_object* v___x_893_; 
v___x_892_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(v_fst_876_, v___x_887_);
lean_dec(v_fst_876_);
lean_inc_ref(v___x_886_);
v___x_893_ = l_Lean_Meta_isProp(v___x_886_, v___y_864_, v___y_865_, v___y_866_, v___y_867_);
if (lean_obj_tag(v___x_893_) == 0)
{
lean_object* v_a_894_; uint8_t v___x_895_; lean_object* v___x_896_; 
v_a_894_ = lean_ctor_get(v___x_893_, 0);
lean_inc(v_a_894_);
lean_dec_ref_known(v___x_893_, 1);
v___x_895_ = 0;
lean_inc_ref(v___x_886_);
v___x_896_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__1___redArg(v___x_886_, v___f_881_, v___x_895_, v___x_895_, v___y_864_, v___y_865_, v___y_866_, v___y_867_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; uint8_t v___x_898_; lean_object* v___x_899_; uint8_t v___x_900_; uint8_t v___x_901_; lean_object* v___x_902_; 
v_a_897_ = lean_ctor_get(v___x_896_, 0);
lean_inc(v_a_897_);
lean_dec_ref_known(v___x_896_, 1);
v___x_898_ = l_Lean_LocalDecl_binderInfo(v_a_885_);
lean_dec(v_a_885_);
v___x_899_ = lean_alloc_ctor(0, 1, 7);
lean_ctor_set(v___x_899_, 0, v___x_887_);
lean_ctor_set_uint8(v___x_899_, sizeof(void*)*1, v___x_898_);
lean_ctor_set_uint8(v___x_899_, sizeof(void*)*1 + 1, v___x_895_);
v___x_900_ = lean_unbox(v_a_894_);
lean_dec(v_a_894_);
lean_ctor_set_uint8(v___x_899_, sizeof(void*)*1 + 2, v___x_900_);
v___x_901_ = lean_unbox(v_a_897_);
lean_dec(v_a_897_);
lean_ctor_set_uint8(v___x_899_, sizeof(void*)*1 + 3, v___x_901_);
lean_ctor_set_uint8(v___x_899_, sizeof(void*)*1 + 4, v___y_891_);
lean_ctor_set_uint8(v___x_899_, sizeof(void*)*1 + 5, v___x_895_);
lean_ctor_set_uint8(v___x_899_, sizeof(void*)*1 + 6, v___y_890_);
v___x_902_ = lean_array_push(v___x_892_, v___x_899_);
if (v___y_891_ == 0)
{
lean_object* v___x_904_; 
lean_dec(v___y_889_);
lean_dec_ref(v___x_886_);
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 0, v___x_902_);
v___x_904_ = v___x_879_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v___x_902_);
lean_ctor_set(v_reuseFailAlloc_905_, 1, v_snd_877_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
v_a_870_ = v___x_904_;
goto v___jp_869_;
}
}
else
{
if (lean_obj_tag(v___y_889_) == 1)
{
lean_object* v_val_906_; lean_object* v___x_907_; lean_object* v_env_908_; lean_object* v___x_909_; 
v_val_906_ = lean_ctor_get(v___y_889_, 0);
lean_inc(v_val_906_);
lean_dec_ref_known(v___y_889_, 1);
v___x_907_ = lean_st_ref_get(v___y_867_);
v_env_908_ = lean_ctor_get(v___x_907_, 0);
lean_inc_ref(v_env_908_);
lean_dec(v___x_907_);
v___x_909_ = l_Lean_getOutParamPositions_x3f(v_env_908_, v_val_906_);
lean_dec(v_val_906_);
if (lean_obj_tag(v___x_909_) == 1)
{
lean_object* v_val_910_; lean_object* v___x_911_; lean_object* v___x_912_; uint8_t v___x_913_; 
v_val_910_ = lean_ctor_get(v___x_909_, 0);
lean_inc(v_val_910_);
lean_dec_ref_known(v___x_909_, 1);
v___x_911_ = lean_array_get_size(v_val_910_);
v___x_912_ = lean_unsigned_to_nat(0u);
v___x_913_ = lean_nat_dec_eq(v___x_911_, v___x_912_);
if (v___x_913_ == 0)
{
lean_object* v_dummy_914_; lean_object* v_nargs_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_922_; 
v_dummy_914_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__2, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__2);
v_nargs_915_ = l_Lean_Expr_getAppNumArgs(v___x_886_);
lean_inc(v_nargs_915_);
v___x_916_ = lean_mk_array(v_nargs_915_, v_dummy_914_);
v___x_917_ = lean_unsigned_to_nat(1u);
v___x_918_ = lean_nat_sub(v_nargs_915_, v___x_917_);
lean_dec(v_nargs_915_);
v___x_919_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_886_, v___x_916_, v___x_918_);
v___x_920_ = lean_array_get_size(v___x_919_);
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 0, v___x_902_);
v___x_922_ = v___x_879_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v___x_902_);
lean_ctor_set(v_reuseFailAlloc_934_, 1, v_snd_877_);
v___x_922_ = v_reuseFailAlloc_934_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
lean_object* v___x_923_; 
v___x_923_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg(v___x_920_, v_val_910_, v___x_919_, v_fvars_861_, v_a_862_, v_upperBound_860_, v___x_912_, v___x_922_, v___y_864_, v___y_865_, v___y_866_, v___y_867_);
lean_dec_ref(v___x_919_);
lean_dec(v_val_910_);
if (lean_obj_tag(v___x_923_) == 0)
{
lean_object* v_a_924_; lean_object* v_fst_925_; lean_object* v_snd_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
v_a_924_ = lean_ctor_get(v___x_923_, 0);
lean_inc(v_a_924_);
lean_dec_ref_known(v___x_923_, 1);
v_fst_925_ = lean_ctor_get(v_a_924_, 0);
v_snd_926_ = lean_ctor_get(v_a_924_, 1);
v_isSharedCheck_933_ = !lean_is_exclusive(v_a_924_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v_a_924_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_snd_926_);
lean_inc(v_fst_925_);
lean_dec(v_a_924_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_fst_925_);
lean_ctor_set(v_reuseFailAlloc_932_, 1, v_snd_926_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
v_a_870_ = v___x_931_;
goto v___jp_869_;
}
}
}
else
{
lean_dec(v_a_862_);
return v___x_923_;
}
}
}
else
{
lean_object* v___x_936_; 
lean_dec(v_val_910_);
lean_dec_ref(v___x_886_);
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 0, v___x_902_);
v___x_936_ = v___x_879_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v___x_902_);
lean_ctor_set(v_reuseFailAlloc_937_, 1, v_snd_877_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
v_a_870_ = v___x_936_;
goto v___jp_869_;
}
}
}
else
{
lean_object* v___x_939_; 
lean_dec(v___x_909_);
lean_dec_ref(v___x_886_);
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 0, v___x_902_);
v___x_939_ = v___x_879_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v___x_902_);
lean_ctor_set(v_reuseFailAlloc_940_, 1, v_snd_877_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
v_a_870_ = v___x_939_;
goto v___jp_869_;
}
}
}
else
{
lean_object* v___x_941_; lean_object* v___x_942_; 
lean_dec(v___y_889_);
lean_dec_ref(v___x_886_);
v___x_941_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__6);
v___x_942_ = l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3(v___x_941_, v___y_864_, v___y_865_, v___y_866_, v___y_867_);
if (lean_obj_tag(v___x_942_) == 0)
{
lean_object* v___x_944_; 
lean_dec_ref_known(v___x_942_, 1);
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 0, v___x_902_);
v___x_944_ = v___x_879_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v___x_902_);
lean_ctor_set(v_reuseFailAlloc_945_, 1, v_snd_877_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
v_a_870_ = v___x_944_;
goto v___jp_869_;
}
}
else
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
lean_dec_ref(v___x_902_);
lean_del_object(v___x_879_);
lean_dec(v_snd_877_);
lean_dec(v_a_862_);
v_a_946_ = lean_ctor_get(v___x_942_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_942_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_942_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_942_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_a_946_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
}
}
}
else
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
lean_dec(v_a_894_);
lean_dec_ref(v___x_892_);
lean_dec(v___y_889_);
lean_dec_ref(v___x_887_);
lean_dec_ref(v___x_886_);
lean_dec(v_a_885_);
lean_del_object(v___x_879_);
lean_dec(v_snd_877_);
lean_dec(v_a_862_);
v_a_954_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_961_ == 0)
{
v___x_956_ = v___x_896_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_896_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_a_954_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
}
else
{
lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_969_; 
lean_dec_ref(v___x_892_);
lean_dec(v___y_889_);
lean_dec_ref(v___x_887_);
lean_dec_ref(v___x_886_);
lean_dec(v_a_885_);
lean_del_object(v___x_879_);
lean_dec(v_snd_877_);
lean_dec(v_a_862_);
v_a_962_ = lean_ctor_get(v___x_893_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_893_);
if (v_isSharedCheck_969_ == 0)
{
v___x_964_ = v___x_893_;
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_dec(v___x_893_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_967_; 
if (v_isShared_965_ == 0)
{
v___x_967_ = v___x_964_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_a_962_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
return v___x_967_;
}
}
}
}
v___jp_970_:
{
lean_object* v___x_972_; 
lean_inc_ref(v___x_886_);
v___x_972_ = l_Lean_Meta_isClass_x3f(v___x_886_, v___y_864_, v___y_865_, v___y_866_, v___y_867_);
if (lean_obj_tag(v___x_972_) == 0)
{
lean_object* v_a_973_; 
v_a_973_ = lean_ctor_get(v___x_972_, 0);
lean_inc(v_a_973_);
lean_dec_ref_known(v___x_972_, 1);
if (lean_obj_tag(v_a_973_) == 0)
{
uint8_t v___x_974_; 
v___x_974_ = 0;
v___y_889_ = v_a_973_;
v___y_890_ = v___y_971_;
v___y_891_ = v___x_974_;
goto v___jp_888_;
}
else
{
uint8_t v___x_975_; uint8_t v___x_976_; 
v___x_975_ = l_Lean_LocalDecl_binderInfo(v_a_885_);
v___x_976_ = l_Lean_BinderInfo_isExplicit(v___x_975_);
if (v___x_976_ == 0)
{
v___y_889_ = v_a_973_;
v___y_890_ = v___y_971_;
v___y_891_ = v___x_874_;
goto v___jp_888_;
}
else
{
uint8_t v___x_977_; 
v___x_977_ = 0;
v___y_889_ = v_a_973_;
v___y_890_ = v___y_971_;
v___y_891_ = v___x_977_;
goto v___jp_888_;
}
}
}
else
{
lean_object* v_a_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_985_; 
lean_dec_ref(v___x_887_);
lean_dec_ref(v___x_886_);
lean_dec(v_a_885_);
lean_del_object(v___x_879_);
lean_dec(v_snd_877_);
lean_dec(v_fst_876_);
lean_dec(v_a_862_);
v_a_978_ = lean_ctor_get(v___x_972_, 0);
v_isSharedCheck_985_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_985_ == 0)
{
v___x_980_ = v___x_972_;
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_a_978_);
lean_dec(v___x_972_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v___x_983_; 
if (v_isShared_981_ == 0)
{
v___x_983_ = v___x_980_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_a_978_);
v___x_983_ = v_reuseFailAlloc_984_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
return v___x_983_;
}
}
}
}
}
else
{
lean_object* v_a_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_996_; 
lean_dec_ref(v___f_882_);
lean_del_object(v___x_879_);
lean_dec(v_snd_877_);
lean_dec(v_fst_876_);
lean_dec(v_a_862_);
v_a_989_ = lean_ctor_get(v___x_884_, 0);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_996_ == 0)
{
v___x_991_ = v___x_884_;
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_a_989_);
lean_dec(v___x_884_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_994_; 
if (v_isShared_992_ == 0)
{
v___x_994_ = v___x_991_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v_a_989_);
v___x_994_ = v_reuseFailAlloc_995_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
return v___x_994_;
}
}
}
}
}
v___jp_869_:
{
lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_871_ = lean_unsigned_to_nat(1u);
v___x_872_ = lean_nat_add(v_a_862_, v___x_871_);
lean_dec(v_a_862_);
v_a_862_ = v___x_872_;
v_b_863_ = v_a_870_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___boxed(lean_object* v_upperBound_998_, lean_object* v_fvars_999_, lean_object* v_a_1000_, lean_object* v_b_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v_res_1007_; 
v_res_1007_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(v_upperBound_998_, v_fvars_999_, v_a_1000_, v_b_1001_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_);
lean_dec(v___y_1005_);
lean_dec_ref(v___y_1004_);
lean_dec(v___y_1003_);
lean_dec_ref(v___y_1002_);
lean_dec_ref(v_fvars_999_);
lean_dec(v_upperBound_998_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0(lean_object* v___x_1010_, lean_object* v_fvars_1011_, lean_object* v_type_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1018_ = lean_array_get_size(v_fvars_1011_);
v___x_1019_ = lean_unsigned_to_nat(0u);
v___x_1020_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___closed__0));
v___x_1021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1021_, 0, v___x_1020_);
lean_ctor_set(v___x_1021_, 1, v___x_1010_);
v___x_1022_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(v___x_1018_, v_fvars_1011_, v___x_1019_, v___x_1021_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
if (lean_obj_tag(v___x_1022_) == 0)
{
lean_object* v_a_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1041_; 
v_a_1023_ = lean_ctor_get(v___x_1022_, 0);
v_isSharedCheck_1041_ = !lean_is_exclusive(v___x_1022_);
if (v_isSharedCheck_1041_ == 0)
{
v___x_1025_ = v___x_1022_;
v_isShared_1026_ = v_isSharedCheck_1041_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_a_1023_);
lean_dec(v___x_1022_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1041_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v_fst_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1039_; 
v_fst_1027_ = lean_ctor_get(v_a_1023_, 0);
v_isSharedCheck_1039_ = !lean_is_exclusive(v_a_1023_);
if (v_isSharedCheck_1039_ == 0)
{
lean_object* v_unused_1040_; 
v_unused_1040_ = lean_ctor_get(v_a_1023_, 1);
lean_dec(v_unused_1040_);
v___x_1029_ = v_a_1023_;
v_isShared_1030_ = v_isSharedCheck_1039_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_fst_1027_);
lean_dec(v_a_1023_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1039_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1034_; 
v___x_1031_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_collectDeps(v_fvars_1011_, v_type_1012_);
v___x_1032_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_updateHasFwdDeps(v_fst_1027_, v___x_1031_);
lean_dec(v_fst_1027_);
if (v_isShared_1030_ == 0)
{
lean_ctor_set(v___x_1029_, 1, v___x_1031_);
lean_ctor_set(v___x_1029_, 0, v___x_1032_);
v___x_1034_ = v___x_1029_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v___x_1032_);
lean_ctor_set(v_reuseFailAlloc_1038_, 1, v___x_1031_);
v___x_1034_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
lean_object* v___x_1036_; 
if (v_isShared_1026_ == 0)
{
lean_ctor_set(v___x_1025_, 0, v___x_1034_);
v___x_1036_ = v___x_1025_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_1034_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
}
}
}
}
}
else
{
lean_object* v_a_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1049_; 
v_a_1042_ = lean_ctor_get(v___x_1022_, 0);
v_isSharedCheck_1049_ = !lean_is_exclusive(v___x_1022_);
if (v_isSharedCheck_1049_ == 0)
{
v___x_1044_ = v___x_1022_;
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_a_1042_);
lean_dec(v___x_1022_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0___boxed(lean_object* v___x_1050_, lean_object* v_fvars_1051_, lean_object* v_type_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_){
_start:
{
lean_object* v_res_1058_; 
v_res_1058_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__0(v___x_1050_, v_fvars_1051_, v_type_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_);
lean_dec(v___y_1056_);
lean_dec_ref(v___y_1055_);
lean_dec(v___y_1054_);
lean_dec_ref(v___y_1053_);
lean_dec_ref(v_type_1052_);
lean_dec_ref(v_fvars_1051_);
return v_res_1058_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(lean_object* v_fn_1059_, lean_object* v_maxArgs_x3f_1060_, lean_object* v___f_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_){
_start:
{
lean_object* v___y_1068_; lean_object* v___x_1085_; 
lean_inc(v___y_1065_);
lean_inc_ref(v___y_1064_);
lean_inc(v___y_1063_);
lean_inc_ref(v___y_1062_);
v___x_1085_ = lean_infer_type(v_fn_1059_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_);
if (lean_obj_tag(v___x_1085_) == 0)
{
lean_object* v_a_1086_; lean_object* v___x_1087_; uint8_t v_transparency_1088_; uint8_t v___x_1089_; uint8_t v___x_1090_; uint8_t v___x_1091_; 
v_a_1086_ = lean_ctor_get(v___x_1085_, 0);
lean_inc(v_a_1086_);
lean_dec_ref_known(v___x_1085_, 1);
v___x_1087_ = l_Lean_Meta_Context_config(v___y_1062_);
v_transparency_1088_ = lean_ctor_get_uint8(v___x_1087_, 9);
lean_dec_ref(v___x_1087_);
v___x_1089_ = 1;
v___x_1090_ = 0;
v___x_1091_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_1088_, v___x_1089_);
if (v___x_1091_ == 0)
{
lean_object* v___x_1092_; 
v___x_1092_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(v_a_1086_, v_maxArgs_x3f_1060_, v___f_1061_, v___x_1090_, v___x_1090_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_);
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
v___y_1068_ = v___x_1092_;
goto v___jp_1067_;
}
else
{
lean_object* v_keyedConfig_1093_; uint8_t v_trackZetaDelta_1094_; lean_object* v_zetaDeltaSet_1095_; lean_object* v_lctx_1096_; lean_object* v_localInstances_1097_; lean_object* v_defEqCtx_x3f_1098_; lean_object* v_synthPendingDepth_1099_; lean_object* v_customCanUnfoldPredicate_x3f_1100_; uint8_t v_univApprox_1101_; uint8_t v_inTypeClassResolution_1102_; uint8_t v_cacheInferType_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1112_; 
v_keyedConfig_1093_ = lean_ctor_get(v___y_1062_, 0);
v_trackZetaDelta_1094_ = lean_ctor_get_uint8(v___y_1062_, sizeof(void*)*7);
v_zetaDeltaSet_1095_ = lean_ctor_get(v___y_1062_, 1);
v_lctx_1096_ = lean_ctor_get(v___y_1062_, 2);
v_localInstances_1097_ = lean_ctor_get(v___y_1062_, 3);
v_defEqCtx_x3f_1098_ = lean_ctor_get(v___y_1062_, 4);
v_synthPendingDepth_1099_ = lean_ctor_get(v___y_1062_, 5);
v_customCanUnfoldPredicate_x3f_1100_ = lean_ctor_get(v___y_1062_, 6);
v_univApprox_1101_ = lean_ctor_get_uint8(v___y_1062_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1102_ = lean_ctor_get_uint8(v___y_1062_, sizeof(void*)*7 + 2);
v_cacheInferType_1103_ = lean_ctor_get_uint8(v___y_1062_, sizeof(void*)*7 + 3);
v_isSharedCheck_1112_ = !lean_is_exclusive(v___y_1062_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1105_ = v___y_1062_;
v_isShared_1106_ = v_isSharedCheck_1112_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_1100_);
lean_inc(v_synthPendingDepth_1099_);
lean_inc(v_defEqCtx_x3f_1098_);
lean_inc(v_localInstances_1097_);
lean_inc(v_lctx_1096_);
lean_inc(v_zetaDeltaSet_1095_);
lean_inc(v_keyedConfig_1093_);
lean_dec(v___y_1062_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1112_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1107_; lean_object* v___x_1109_; 
v___x_1107_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1089_, v_keyedConfig_1093_);
if (v_isShared_1106_ == 0)
{
lean_ctor_set(v___x_1105_, 0, v___x_1107_);
v___x_1109_ = v___x_1105_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v___x_1107_);
lean_ctor_set(v_reuseFailAlloc_1111_, 1, v_zetaDeltaSet_1095_);
lean_ctor_set(v_reuseFailAlloc_1111_, 2, v_lctx_1096_);
lean_ctor_set(v_reuseFailAlloc_1111_, 3, v_localInstances_1097_);
lean_ctor_set(v_reuseFailAlloc_1111_, 4, v_defEqCtx_x3f_1098_);
lean_ctor_set(v_reuseFailAlloc_1111_, 5, v_synthPendingDepth_1099_);
lean_ctor_set(v_reuseFailAlloc_1111_, 6, v_customCanUnfoldPredicate_x3f_1100_);
lean_ctor_set_uint8(v_reuseFailAlloc_1111_, sizeof(void*)*7, v_trackZetaDelta_1094_);
lean_ctor_set_uint8(v_reuseFailAlloc_1111_, sizeof(void*)*7 + 1, v_univApprox_1101_);
lean_ctor_set_uint8(v_reuseFailAlloc_1111_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1102_);
lean_ctor_set_uint8(v_reuseFailAlloc_1111_, sizeof(void*)*7 + 3, v_cacheInferType_1103_);
v___x_1109_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
lean_object* v___x_1110_; 
v___x_1110_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__5___redArg(v_a_1086_, v_maxArgs_x3f_1060_, v___f_1061_, v___x_1090_, v___x_1090_, v___x_1109_, v___y_1063_, v___y_1064_, v___y_1065_);
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
lean_dec(v___y_1063_);
lean_dec_ref(v___x_1109_);
v___y_1068_ = v___x_1110_;
goto v___jp_1067_;
}
}
}
}
else
{
lean_object* v_a_1113_; lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1120_; 
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
lean_dec_ref(v___f_1061_);
lean_dec(v_maxArgs_x3f_1060_);
v_a_1113_ = lean_ctor_get(v___x_1085_, 0);
v_isSharedCheck_1120_ = !lean_is_exclusive(v___x_1085_);
if (v_isSharedCheck_1120_ == 0)
{
v___x_1115_ = v___x_1085_;
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
else
{
lean_inc(v_a_1113_);
lean_dec(v___x_1085_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v___x_1118_; 
if (v_isShared_1116_ == 0)
{
v___x_1118_ = v___x_1115_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v_a_1113_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
return v___x_1118_;
}
}
}
v___jp_1067_:
{
if (lean_obj_tag(v___y_1068_) == 0)
{
lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1076_; 
v_a_1069_ = lean_ctor_get(v___y_1068_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___y_1068_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1071_ = v___y_1068_;
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_dec(v___y_1068_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1074_; 
if (v_isShared_1072_ == 0)
{
v___x_1074_ = v___x_1071_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_a_1069_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
return v___x_1074_;
}
}
}
else
{
lean_object* v_a_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1084_; 
v_a_1077_ = lean_ctor_get(v___y_1068_, 0);
v_isSharedCheck_1084_ = !lean_is_exclusive(v___y_1068_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1079_ = v___y_1068_;
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_a_1077_);
lean_dec(v___y_1068_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___x_1082_; 
if (v_isShared_1080_ == 0)
{
v___x_1082_ = v___x_1079_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v_a_1077_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
return v___x_1082_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1___boxed(lean_object* v_fn_1121_, lean_object* v_maxArgs_x3f_1122_, lean_object* v___f_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_){
_start:
{
lean_object* v_res_1129_; 
v_res_1129_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(v_fn_1121_, v_maxArgs_x3f_1122_, v___f_1123_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_);
return v_res_1129_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg(lean_object* v_keys_1130_, lean_object* v_vals_1131_, lean_object* v_i_1132_, lean_object* v_k_1133_){
_start:
{
lean_object* v___x_1134_; uint8_t v___x_1135_; 
v___x_1134_ = lean_array_get_size(v_keys_1130_);
v___x_1135_ = lean_nat_dec_lt(v_i_1132_, v___x_1134_);
if (v___x_1135_ == 0)
{
lean_object* v___x_1136_; 
lean_dec(v_i_1132_);
v___x_1136_ = lean_box(0);
return v___x_1136_;
}
else
{
lean_object* v_k_x27_1137_; uint8_t v___x_1138_; 
v_k_x27_1137_ = lean_array_fget_borrowed(v_keys_1130_, v_i_1132_);
v___x_1138_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_k_1133_, v_k_x27_1137_);
if (v___x_1138_ == 0)
{
lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1139_ = lean_unsigned_to_nat(1u);
v___x_1140_ = lean_nat_add(v_i_1132_, v___x_1139_);
lean_dec(v_i_1132_);
v_i_1132_ = v___x_1140_;
goto _start;
}
else
{
lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1142_ = lean_array_fget_borrowed(v_vals_1131_, v_i_1132_);
lean_dec(v_i_1132_);
lean_inc(v___x_1142_);
v___x_1143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1142_);
return v___x_1143_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg___boxed(lean_object* v_keys_1144_, lean_object* v_vals_1145_, lean_object* v_i_1146_, lean_object* v_k_1147_){
_start:
{
lean_object* v_res_1148_; 
v_res_1148_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg(v_keys_1144_, v_vals_1145_, v_i_1146_, v_k_1147_);
lean_dec_ref(v_k_1147_);
lean_dec_ref(v_vals_1145_);
lean_dec_ref(v_keys_1144_);
return v_res_1148_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg(lean_object* v_x_1149_, size_t v_x_1150_, lean_object* v_x_1151_){
_start:
{
if (lean_obj_tag(v_x_1149_) == 0)
{
lean_object* v_es_1152_; lean_object* v___x_1153_; size_t v___x_1154_; size_t v___x_1155_; lean_object* v_j_1156_; lean_object* v___x_1157_; 
v_es_1152_ = lean_ctor_get(v_x_1149_, 0);
v___x_1153_ = lean_box(2);
v___x_1154_ = ((size_t)31ULL);
v___x_1155_ = lean_usize_land(v_x_1150_, v___x_1154_);
v_j_1156_ = lean_usize_to_nat(v___x_1155_);
v___x_1157_ = lean_array_get_borrowed(v___x_1153_, v_es_1152_, v_j_1156_);
lean_dec(v_j_1156_);
switch(lean_obj_tag(v___x_1157_))
{
case 0:
{
lean_object* v_key_1158_; lean_object* v_val_1159_; uint8_t v___x_1160_; 
v_key_1158_ = lean_ctor_get(v___x_1157_, 0);
v_val_1159_ = lean_ctor_get(v___x_1157_, 1);
v___x_1160_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_x_1151_, v_key_1158_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1161_; 
v___x_1161_ = lean_box(0);
return v___x_1161_;
}
else
{
lean_object* v___x_1162_; 
lean_inc(v_val_1159_);
v___x_1162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1162_, 0, v_val_1159_);
return v___x_1162_;
}
}
case 1:
{
lean_object* v_node_1163_; size_t v___x_1164_; size_t v___x_1165_; 
v_node_1163_ = lean_ctor_get(v___x_1157_, 0);
v___x_1164_ = ((size_t)5ULL);
v___x_1165_ = lean_usize_shift_right(v_x_1150_, v___x_1164_);
v_x_1149_ = v_node_1163_;
v_x_1150_ = v___x_1165_;
goto _start;
}
default: 
{
lean_object* v___x_1167_; 
v___x_1167_ = lean_box(0);
return v___x_1167_;
}
}
}
else
{
lean_object* v_ks_1168_; lean_object* v_vs_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; 
v_ks_1168_ = lean_ctor_get(v_x_1149_, 0);
v_vs_1169_ = lean_ctor_get(v_x_1149_, 1);
v___x_1170_ = lean_unsigned_to_nat(0u);
v___x_1171_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg(v_ks_1168_, v_vs_1169_, v___x_1170_, v_x_1151_);
return v___x_1171_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg___boxed(lean_object* v_x_1172_, lean_object* v_x_1173_, lean_object* v_x_1174_){
_start:
{
size_t v_x_11778__boxed_1175_; lean_object* v_res_1176_; 
v_x_11778__boxed_1175_ = lean_unbox_usize(v_x_1173_);
lean_dec(v_x_1173_);
v_res_1176_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg(v_x_1172_, v_x_11778__boxed_1175_, v_x_1174_);
lean_dec_ref(v_x_1174_);
lean_dec_ref(v_x_1172_);
return v_res_1176_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(lean_object* v_x_1177_, lean_object* v_x_1178_){
_start:
{
uint64_t v___x_1179_; size_t v___x_1180_; lean_object* v___x_1181_; 
v___x_1179_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(v_x_1178_);
v___x_1180_ = lean_uint64_to_usize(v___x_1179_);
v___x_1181_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg(v_x_1177_, v___x_1180_, v_x_1178_);
return v___x_1181_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg___boxed(lean_object* v_x_1182_, lean_object* v_x_1183_){
_start:
{
lean_object* v_res_1184_; 
v_res_1184_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(v_x_1182_, v_x_1183_);
lean_dec_ref(v_x_1183_);
lean_dec_ref(v_x_1182_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__24___redArg(lean_object* v_x_1185_, lean_object* v_x_1186_, lean_object* v_x_1187_, lean_object* v_x_1188_){
_start:
{
lean_object* v_ks_1189_; lean_object* v_vs_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1214_; 
v_ks_1189_ = lean_ctor_get(v_x_1185_, 0);
v_vs_1190_ = lean_ctor_get(v_x_1185_, 1);
v_isSharedCheck_1214_ = !lean_is_exclusive(v_x_1185_);
if (v_isSharedCheck_1214_ == 0)
{
v___x_1192_ = v_x_1185_;
v_isShared_1193_ = v_isSharedCheck_1214_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_vs_1190_);
lean_inc(v_ks_1189_);
lean_dec(v_x_1185_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1214_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1194_; uint8_t v___x_1195_; 
v___x_1194_ = lean_array_get_size(v_ks_1189_);
v___x_1195_ = lean_nat_dec_lt(v_x_1186_, v___x_1194_);
if (v___x_1195_ == 0)
{
lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1199_; 
lean_dec(v_x_1186_);
v___x_1196_ = lean_array_push(v_ks_1189_, v_x_1187_);
v___x_1197_ = lean_array_push(v_vs_1190_, v_x_1188_);
if (v_isShared_1193_ == 0)
{
lean_ctor_set(v___x_1192_, 1, v___x_1197_);
lean_ctor_set(v___x_1192_, 0, v___x_1196_);
v___x_1199_ = v___x_1192_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v___x_1196_);
lean_ctor_set(v_reuseFailAlloc_1200_, 1, v___x_1197_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
}
}
else
{
lean_object* v_k_x27_1201_; uint8_t v___x_1202_; 
v_k_x27_1201_ = lean_array_fget_borrowed(v_ks_1189_, v_x_1186_);
v___x_1202_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_x_1187_, v_k_x27_1201_);
if (v___x_1202_ == 0)
{
lean_object* v___x_1204_; 
if (v_isShared_1193_ == 0)
{
v___x_1204_ = v___x_1192_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v_ks_1189_);
lean_ctor_set(v_reuseFailAlloc_1208_, 1, v_vs_1190_);
v___x_1204_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; 
v___x_1205_ = lean_unsigned_to_nat(1u);
v___x_1206_ = lean_nat_add(v_x_1186_, v___x_1205_);
lean_dec(v_x_1186_);
v_x_1185_ = v___x_1204_;
v_x_1186_ = v___x_1206_;
goto _start;
}
}
else
{
lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1212_; 
v___x_1209_ = lean_array_fset(v_ks_1189_, v_x_1186_, v_x_1187_);
v___x_1210_ = lean_array_fset(v_vs_1190_, v_x_1186_, v_x_1188_);
lean_dec(v_x_1186_);
if (v_isShared_1193_ == 0)
{
lean_ctor_set(v___x_1192_, 1, v___x_1210_);
lean_ctor_set(v___x_1192_, 0, v___x_1209_);
v___x_1212_ = v___x_1192_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v___x_1209_);
lean_ctor_set(v_reuseFailAlloc_1213_, 1, v___x_1210_);
v___x_1212_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
return v___x_1212_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22___redArg(lean_object* v_n_1215_, lean_object* v_k_1216_, lean_object* v_v_1217_){
_start:
{
lean_object* v___x_1218_; lean_object* v___x_1219_; 
v___x_1218_ = lean_unsigned_to_nat(0u);
v___x_1219_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__24___redArg(v_n_1215_, v___x_1218_, v_k_1216_, v_v_1217_);
return v___x_1219_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0(void){
_start:
{
lean_object* v___x_1220_; 
v___x_1220_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1220_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(lean_object* v_x_1221_, size_t v_x_1222_, size_t v_x_1223_, lean_object* v_x_1224_, lean_object* v_x_1225_){
_start:
{
if (lean_obj_tag(v_x_1221_) == 0)
{
lean_object* v_es_1226_; size_t v___x_1227_; size_t v___x_1228_; lean_object* v_j_1229_; lean_object* v___x_1230_; uint8_t v___x_1231_; 
v_es_1226_ = lean_ctor_get(v_x_1221_, 0);
v___x_1227_ = ((size_t)31ULL);
v___x_1228_ = lean_usize_land(v_x_1222_, v___x_1227_);
v_j_1229_ = lean_usize_to_nat(v___x_1228_);
v___x_1230_ = lean_array_get_size(v_es_1226_);
v___x_1231_ = lean_nat_dec_lt(v_j_1229_, v___x_1230_);
if (v___x_1231_ == 0)
{
lean_dec(v_j_1229_);
lean_dec(v_x_1225_);
lean_dec_ref(v_x_1224_);
return v_x_1221_;
}
else
{
lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1270_; 
lean_inc_ref(v_es_1226_);
v_isSharedCheck_1270_ = !lean_is_exclusive(v_x_1221_);
if (v_isSharedCheck_1270_ == 0)
{
lean_object* v_unused_1271_; 
v_unused_1271_ = lean_ctor_get(v_x_1221_, 0);
lean_dec(v_unused_1271_);
v___x_1233_ = v_x_1221_;
v_isShared_1234_ = v_isSharedCheck_1270_;
goto v_resetjp_1232_;
}
else
{
lean_dec(v_x_1221_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1270_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v_v_1235_; lean_object* v___x_1236_; lean_object* v_xs_x27_1237_; lean_object* v___y_1239_; 
v_v_1235_ = lean_array_fget(v_es_1226_, v_j_1229_);
v___x_1236_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg___closed__0);
v_xs_x27_1237_ = lean_array_fset(v_es_1226_, v_j_1229_, v___x_1236_);
switch(lean_obj_tag(v_v_1235_))
{
case 0:
{
lean_object* v_key_1244_; lean_object* v_val_1245_; lean_object* v___x_1247_; uint8_t v_isShared_1248_; uint8_t v_isSharedCheck_1255_; 
v_key_1244_ = lean_ctor_get(v_v_1235_, 0);
v_val_1245_ = lean_ctor_get(v_v_1235_, 1);
v_isSharedCheck_1255_ = !lean_is_exclusive(v_v_1235_);
if (v_isSharedCheck_1255_ == 0)
{
v___x_1247_ = v_v_1235_;
v_isShared_1248_ = v_isSharedCheck_1255_;
goto v_resetjp_1246_;
}
else
{
lean_inc(v_val_1245_);
lean_inc(v_key_1244_);
lean_dec(v_v_1235_);
v___x_1247_ = lean_box(0);
v_isShared_1248_ = v_isSharedCheck_1255_;
goto v_resetjp_1246_;
}
v_resetjp_1246_:
{
uint8_t v___x_1249_; 
v___x_1249_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instBEqFunInfoEnvCacheKey_beq(v_x_1224_, v_key_1244_);
if (v___x_1249_ == 0)
{
lean_object* v___x_1250_; lean_object* v___x_1251_; 
lean_del_object(v___x_1247_);
v___x_1250_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1244_, v_val_1245_, v_x_1224_, v_x_1225_);
v___x_1251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1250_);
v___y_1239_ = v___x_1251_;
goto v___jp_1238_;
}
else
{
lean_object* v___x_1253_; 
lean_dec(v_val_1245_);
lean_dec(v_key_1244_);
if (v_isShared_1248_ == 0)
{
lean_ctor_set(v___x_1247_, 1, v_x_1225_);
lean_ctor_set(v___x_1247_, 0, v_x_1224_);
v___x_1253_ = v___x_1247_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v_x_1224_);
lean_ctor_set(v_reuseFailAlloc_1254_, 1, v_x_1225_);
v___x_1253_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
v___y_1239_ = v___x_1253_;
goto v___jp_1238_;
}
}
}
}
case 1:
{
lean_object* v_node_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1268_; 
v_node_1256_ = lean_ctor_get(v_v_1235_, 0);
v_isSharedCheck_1268_ = !lean_is_exclusive(v_v_1235_);
if (v_isSharedCheck_1268_ == 0)
{
v___x_1258_ = v_v_1235_;
v_isShared_1259_ = v_isSharedCheck_1268_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_node_1256_);
lean_dec(v_v_1235_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1268_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
size_t v___x_1260_; size_t v___x_1261_; size_t v___x_1262_; size_t v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1266_; 
v___x_1260_ = ((size_t)5ULL);
v___x_1261_ = lean_usize_shift_right(v_x_1222_, v___x_1260_);
v___x_1262_ = ((size_t)1ULL);
v___x_1263_ = lean_usize_add(v_x_1223_, v___x_1262_);
v___x_1264_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(v_node_1256_, v___x_1261_, v___x_1263_, v_x_1224_, v_x_1225_);
if (v_isShared_1259_ == 0)
{
lean_ctor_set(v___x_1258_, 0, v___x_1264_);
v___x_1266_ = v___x_1258_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v___x_1264_);
v___x_1266_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
v___y_1239_ = v___x_1266_;
goto v___jp_1238_;
}
}
}
default: 
{
lean_object* v___x_1269_; 
v___x_1269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1269_, 0, v_x_1224_);
lean_ctor_set(v___x_1269_, 1, v_x_1225_);
v___y_1239_ = v___x_1269_;
goto v___jp_1238_;
}
}
v___jp_1238_:
{
lean_object* v___x_1240_; lean_object* v___x_1242_; 
v___x_1240_ = lean_array_fset(v_xs_x27_1237_, v_j_1229_, v___y_1239_);
lean_dec(v_j_1229_);
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 0, v___x_1240_);
v___x_1242_ = v___x_1233_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v___x_1240_);
v___x_1242_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
return v___x_1242_;
}
}
}
}
}
else
{
lean_object* v_ks_1272_; lean_object* v_vs_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1291_; 
v_ks_1272_ = lean_ctor_get(v_x_1221_, 0);
v_vs_1273_ = lean_ctor_get(v_x_1221_, 1);
v_isSharedCheck_1291_ = !lean_is_exclusive(v_x_1221_);
if (v_isSharedCheck_1291_ == 0)
{
v___x_1275_ = v_x_1221_;
v_isShared_1276_ = v_isSharedCheck_1291_;
goto v_resetjp_1274_;
}
else
{
lean_inc(v_vs_1273_);
lean_inc(v_ks_1272_);
lean_dec(v_x_1221_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1291_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v___x_1278_; 
if (v_isShared_1276_ == 0)
{
v___x_1278_ = v___x_1275_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1290_; 
v_reuseFailAlloc_1290_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1290_, 0, v_ks_1272_);
lean_ctor_set(v_reuseFailAlloc_1290_, 1, v_vs_1273_);
v___x_1278_ = v_reuseFailAlloc_1290_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
lean_object* v_newNode_1279_; size_t v___x_1280_; uint8_t v___x_1281_; 
v_newNode_1279_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22___redArg(v___x_1278_, v_x_1224_, v_x_1225_);
v___x_1280_ = ((size_t)7ULL);
v___x_1281_ = lean_usize_dec_le(v___x_1280_, v_x_1223_);
if (v___x_1281_ == 0)
{
lean_object* v___x_1282_; lean_object* v___x_1283_; uint8_t v___x_1284_; 
v___x_1282_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1279_);
v___x_1283_ = lean_unsigned_to_nat(4u);
v___x_1284_ = lean_nat_dec_lt(v___x_1282_, v___x_1283_);
lean_dec(v___x_1282_);
if (v___x_1284_ == 0)
{
lean_object* v_ks_1285_; lean_object* v_vs_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; 
v_ks_1285_ = lean_ctor_get(v_newNode_1279_, 0);
lean_inc_ref(v_ks_1285_);
v_vs_1286_ = lean_ctor_get(v_newNode_1279_, 1);
lean_inc_ref(v_vs_1286_);
lean_dec_ref(v_newNode_1279_);
v___x_1287_ = lean_unsigned_to_nat(0u);
v___x_1288_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0);
v___x_1289_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg(v_x_1223_, v_ks_1285_, v_vs_1286_, v___x_1287_, v___x_1288_);
lean_dec_ref(v_vs_1286_);
lean_dec_ref(v_ks_1285_);
return v___x_1289_;
}
else
{
return v_newNode_1279_;
}
}
else
{
return v_newNode_1279_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg(size_t v_depth_1292_, lean_object* v_keys_1293_, lean_object* v_vals_1294_, lean_object* v_i_1295_, lean_object* v_entries_1296_){
_start:
{
lean_object* v___x_1297_; uint8_t v___x_1298_; 
v___x_1297_ = lean_array_get_size(v_keys_1293_);
v___x_1298_ = lean_nat_dec_lt(v_i_1295_, v___x_1297_);
if (v___x_1298_ == 0)
{
lean_dec(v_i_1295_);
return v_entries_1296_;
}
else
{
lean_object* v_k_1299_; lean_object* v_v_1300_; uint64_t v___x_1301_; size_t v_h_1302_; size_t v___x_1303_; lean_object* v___x_1304_; size_t v___x_1305_; size_t v___x_1306_; size_t v___x_1307_; size_t v_h_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v_k_1299_ = lean_array_fget_borrowed(v_keys_1293_, v_i_1295_);
v_v_1300_ = lean_array_fget_borrowed(v_vals_1294_, v_i_1295_);
v___x_1301_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(v_k_1299_);
v_h_1302_ = lean_uint64_to_usize(v___x_1301_);
v___x_1303_ = ((size_t)5ULL);
v___x_1304_ = lean_unsigned_to_nat(1u);
v___x_1305_ = ((size_t)1ULL);
v___x_1306_ = lean_usize_sub(v_depth_1292_, v___x_1305_);
v___x_1307_ = lean_usize_mul(v___x_1303_, v___x_1306_);
v_h_1308_ = lean_usize_shift_right(v_h_1302_, v___x_1307_);
v___x_1309_ = lean_nat_add(v_i_1295_, v___x_1304_);
lean_dec(v_i_1295_);
lean_inc(v_v_1300_);
lean_inc(v_k_1299_);
v___x_1310_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(v_entries_1296_, v_h_1308_, v_depth_1292_, v_k_1299_, v_v_1300_);
v_i_1295_ = v___x_1309_;
v_entries_1296_ = v___x_1310_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg___boxed(lean_object* v_depth_1312_, lean_object* v_keys_1313_, lean_object* v_vals_1314_, lean_object* v_i_1315_, lean_object* v_entries_1316_){
_start:
{
size_t v_depth_boxed_1317_; lean_object* v_res_1318_; 
v_depth_boxed_1317_ = lean_unbox_usize(v_depth_1312_);
lean_dec(v_depth_1312_);
v_res_1318_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg(v_depth_boxed_1317_, v_keys_1313_, v_vals_1314_, v_i_1315_, v_entries_1316_);
lean_dec_ref(v_vals_1314_);
lean_dec_ref(v_keys_1313_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___boxed(lean_object* v_x_1319_, lean_object* v_x_1320_, lean_object* v_x_1321_, lean_object* v_x_1322_, lean_object* v_x_1323_){
_start:
{
size_t v_x_11915__boxed_1324_; size_t v_x_11916__boxed_1325_; lean_object* v_res_1326_; 
v_x_11915__boxed_1324_ = lean_unbox_usize(v_x_1320_);
lean_dec(v_x_1320_);
v_x_11916__boxed_1325_ = lean_unbox_usize(v_x_1321_);
lean_dec(v_x_1321_);
v_res_1326_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(v_x_1319_, v_x_11915__boxed_1324_, v_x_11916__boxed_1325_, v_x_1322_, v_x_1323_);
return v_res_1326_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16___redArg(lean_object* v_x_1327_, lean_object* v_x_1328_, lean_object* v_x_1329_){
_start:
{
uint64_t v___x_1330_; size_t v___x_1331_; size_t v___x_1332_; lean_object* v___x_1333_; 
v___x_1330_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instHashableFunInfoEnvCacheKey_hash(v_x_1328_);
v___x_1331_ = lean_uint64_to_usize(v___x_1330_);
v___x_1332_ = ((size_t)1ULL);
v___x_1333_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(v_x_1327_, v___x_1331_, v___x_1332_, v_x_1328_, v_x_1329_);
return v___x_1333_;
}
}
static lean_object* _init_l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1334_; 
v___x_1334_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1334_;
}
}
static lean_object* _init_l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1335_ = lean_obj_once(&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0, &l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0_once, _init_l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__0);
v___x_1336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1335_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0(lean_object* v_realizeMapRef_1337_, lean_object* v_env_1338_, lean_object* v_forConst_1339_, lean_object* v_ctx_1340_, lean_object* v_importRealizationCtx_x3f_1341_, lean_object* v_realize_1342_, lean_object* v_opts_1343_, lean_object* v_inst_1344_, lean_object* v_key_1345_, lean_object* v_____r_1346_){
_start:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v_fst_1351_; lean_object* v_snd_1352_; lean_object* v___x_1384_; lean_object* v___y_1386_; lean_object* v___x_1392_; 
v___x_1348_ = lean_io_promise_new();
v___x_1349_ = lean_st_ref_take(v_realizeMapRef_1337_);
v___x_1384_ = l_unsafeCast___redArg(v_inst_1344_);
v___x_1392_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1349_, v___x_1384_);
if (lean_obj_tag(v___x_1392_) == 0)
{
lean_object* v___x_1393_; 
v___x_1393_ = lean_obj_once(&l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1, &l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1_once, _init_l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___closed__1);
v___y_1386_ = v___x_1393_;
goto v___jp_1385_;
}
else
{
lean_object* v_val_1394_; lean_object* v___x_1395_; 
v_val_1394_ = lean_ctor_get(v___x_1392_, 0);
lean_inc(v_val_1394_);
lean_dec_ref_known(v___x_1392_, 1);
v___x_1395_ = l_unsafeCast___redArg(v_val_1394_);
lean_dec(v_val_1394_);
v___y_1386_ = v___x_1395_;
goto v___jp_1385_;
}
v___jp_1350_:
{
lean_object* v___x_1353_; 
v___x_1353_ = lean_st_ref_put(v_realizeMapRef_1337_, v_snd_1352_);
if (lean_obj_tag(v_fst_1351_) == 1)
{
lean_object* v_val_1354_; lean_object* v___x_1356_; uint8_t v_isShared_1357_; uint8_t v_isSharedCheck_1362_; 
lean_dec(v___x_1348_);
lean_dec_ref(v_opts_1343_);
lean_dec_ref(v_realize_1342_);
lean_dec(v_importRealizationCtx_x3f_1341_);
lean_dec_ref(v_ctx_1340_);
lean_dec(v_forConst_1339_);
v_val_1354_ = lean_ctor_get(v_fst_1351_, 0);
v_isSharedCheck_1362_ = !lean_is_exclusive(v_fst_1351_);
if (v_isSharedCheck_1362_ == 0)
{
v___x_1356_ = v_fst_1351_;
v_isShared_1357_ = v_isSharedCheck_1362_;
goto v_resetjp_1355_;
}
else
{
lean_inc(v_val_1354_);
lean_dec(v_fst_1351_);
v___x_1356_ = lean_box(0);
v_isShared_1357_ = v_isSharedCheck_1362_;
goto v_resetjp_1355_;
}
v_resetjp_1355_:
{
lean_object* v___x_1358_; lean_object* v___x_1360_; 
v___x_1358_ = lean_task_get_own(v_val_1354_);
if (v_isShared_1357_ == 0)
{
lean_ctor_set_tag(v___x_1356_, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1358_);
v___x_1360_ = v___x_1356_;
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
}
else
{
lean_object* v___x_1363_; lean_object* v_base_1364_; lean_object* v_serverBaseExts_1365_; lean_object* v_checked_1366_; lean_object* v_asyncConstsMap_1367_; lean_object* v_asyncCtx_x3f_1368_; lean_object* v_localRealizationCtxMap_1369_; lean_object* v_allRealizations_1370_; uint8_t v_isExporting_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1382_; 
lean_dec(v_fst_1351_);
v___x_1363_ = l_unsafeCast___redArg(v_env_1338_);
v_base_1364_ = lean_ctor_get(v___x_1363_, 0);
v_serverBaseExts_1365_ = lean_ctor_get(v___x_1363_, 1);
v_checked_1366_ = lean_ctor_get(v___x_1363_, 2);
v_asyncConstsMap_1367_ = lean_ctor_get(v___x_1363_, 3);
v_asyncCtx_x3f_1368_ = lean_ctor_get(v___x_1363_, 4);
v_localRealizationCtxMap_1369_ = lean_ctor_get(v___x_1363_, 6);
v_allRealizations_1370_ = lean_ctor_get(v___x_1363_, 7);
v_isExporting_1371_ = lean_ctor_get_uint8(v___x_1363_, sizeof(void*)*8);
v_isSharedCheck_1382_ = !lean_is_exclusive(v___x_1363_);
if (v_isSharedCheck_1382_ == 0)
{
lean_object* v_unused_1383_; 
v_unused_1383_ = lean_ctor_get(v___x_1363_, 5);
lean_dec(v_unused_1383_);
v___x_1373_ = v___x_1363_;
v_isShared_1374_ = v_isSharedCheck_1382_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_allRealizations_1370_);
lean_inc(v_localRealizationCtxMap_1369_);
lean_inc(v_asyncCtx_x3f_1368_);
lean_inc(v_asyncConstsMap_1367_);
lean_inc(v_checked_1366_);
lean_inc(v_serverBaseExts_1365_);
lean_inc(v_base_1364_);
lean_dec(v___x_1363_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1382_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v___x_1375_; lean_object* v___x_1377_; 
v___x_1375_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_forConst_1339_, v_ctx_1340_, v_localRealizationCtxMap_1369_);
if (v_isShared_1374_ == 0)
{
lean_ctor_set(v___x_1373_, 6, v___x_1375_);
lean_ctor_set(v___x_1373_, 5, v_importRealizationCtx_x3f_1341_);
v___x_1377_ = v___x_1373_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v_base_1364_);
lean_ctor_set(v_reuseFailAlloc_1381_, 1, v_serverBaseExts_1365_);
lean_ctor_set(v_reuseFailAlloc_1381_, 2, v_checked_1366_);
lean_ctor_set(v_reuseFailAlloc_1381_, 3, v_asyncConstsMap_1367_);
lean_ctor_set(v_reuseFailAlloc_1381_, 4, v_asyncCtx_x3f_1368_);
lean_ctor_set(v_reuseFailAlloc_1381_, 5, v_importRealizationCtx_x3f_1341_);
lean_ctor_set(v_reuseFailAlloc_1381_, 6, v___x_1375_);
lean_ctor_set(v_reuseFailAlloc_1381_, 7, v_allRealizations_1370_);
lean_ctor_set_uint8(v_reuseFailAlloc_1381_, sizeof(void*)*8, v_isExporting_1371_);
v___x_1377_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1378_ = lean_apply_3(v_realize_1342_, v___x_1377_, v_opts_1343_, lean_box(0));
lean_inc(v___x_1378_);
v___x_1379_ = lean_io_promise_resolve(v___x_1378_, v___x_1348_);
lean_dec(v___x_1348_);
v___x_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1378_);
return v___x_1380_;
}
}
}
}
v___jp_1385_:
{
lean_object* v___x_1387_; 
v___x_1387_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(v___y_1386_, v_key_1345_);
if (lean_obj_tag(v___x_1387_) == 0)
{
lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; 
v___x_1388_ = l_IO_Promise_result_x21___redArg(v___x_1348_);
v___x_1389_ = l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16___redArg(v___y_1386_, v_key_1345_, v___x_1388_);
v___x_1390_ = l_unsafeCast___redArg(v___x_1389_);
lean_dec_ref(v___x_1389_);
v___x_1391_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_1384_, v___x_1390_, v___x_1349_);
v_fst_1351_ = v___x_1387_;
v_snd_1352_ = v___x_1391_;
goto v___jp_1350_;
}
else
{
lean_dec_ref(v___y_1386_);
lean_dec(v___x_1384_);
lean_dec_ref(v_key_1345_);
v_fst_1351_ = v___x_1387_;
v_snd_1352_ = v___x_1349_;
goto v___jp_1350_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0___boxed(lean_object* v_realizeMapRef_1396_, lean_object* v_env_1397_, lean_object* v_forConst_1398_, lean_object* v_ctx_1399_, lean_object* v_importRealizationCtx_x3f_1400_, lean_object* v_realize_1401_, lean_object* v_opts_1402_, lean_object* v_inst_1403_, lean_object* v_key_1404_, lean_object* v_____r_1405_, lean_object* v___y_1406_){
_start:
{
lean_object* v_res_1407_; 
v_res_1407_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0(v_realizeMapRef_1396_, v_env_1397_, v_forConst_1398_, v_ctx_1399_, v_importRealizationCtx_x3f_1400_, v_realize_1401_, v_opts_1402_, v_inst_1403_, v_key_1404_, v_____r_1405_);
lean_dec(v_inst_1403_);
lean_dec(v_env_1397_);
lean_dec(v_realizeMapRef_1396_);
return v_res_1407_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17_spec__22___redArg(lean_object* v_a_1408_, lean_object* v_x_1409_){
_start:
{
if (lean_obj_tag(v_x_1409_) == 0)
{
uint8_t v___x_1410_; 
v___x_1410_ = 0;
return v___x_1410_;
}
else
{
lean_object* v_key_1411_; lean_object* v_tail_1412_; uint8_t v___x_1413_; 
v_key_1411_ = lean_ctor_get(v_x_1409_, 0);
v_tail_1412_ = lean_ctor_get(v_x_1409_, 2);
v___x_1413_ = lean_name_eq(v_key_1411_, v_a_1408_);
if (v___x_1413_ == 0)
{
v_x_1409_ = v_tail_1412_;
goto _start;
}
else
{
return v___x_1413_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17_spec__22___redArg___boxed(lean_object* v_a_1415_, lean_object* v_x_1416_){
_start:
{
uint8_t v_res_1417_; lean_object* v_r_1418_; 
v_res_1417_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17_spec__22___redArg(v_a_1415_, v_x_1416_);
lean_dec(v_x_1416_);
lean_dec(v_a_1415_);
v_r_1418_ = lean_box(v_res_1417_);
return v_r_1418_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17___redArg(lean_object* v_m_1419_, lean_object* v_a_1420_){
_start:
{
lean_object* v_buckets_1421_; lean_object* v___x_1422_; uint64_t v___y_1424_; lean_object* v___x_1438_; 
v_buckets_1421_ = lean_ctor_get(v_m_1419_, 1);
v___x_1422_ = lean_array_get_size(v_buckets_1421_);
v___x_1438_ = l_unsafeCast___redArg(v_a_1420_);
if (lean_obj_tag(v___x_1438_) == 0)
{
uint64_t v___x_1439_; 
v___x_1439_ = 1723ULL;
v___y_1424_ = v___x_1439_;
goto v___jp_1423_;
}
else
{
uint64_t v_hash_1440_; 
v_hash_1440_ = lean_ctor_get_uint64(v___x_1438_, sizeof(void*)*2);
lean_dec(v___x_1438_);
v___y_1424_ = v_hash_1440_;
goto v___jp_1423_;
}
v___jp_1423_:
{
uint64_t v___x_1425_; uint64_t v___x_1426_; uint64_t v_fold_1427_; uint64_t v___x_1428_; uint64_t v___x_1429_; uint64_t v___x_1430_; size_t v___x_1431_; size_t v___x_1432_; size_t v___x_1433_; size_t v___x_1434_; size_t v___x_1435_; lean_object* v___x_1436_; uint8_t v___x_1437_; 
v___x_1425_ = 32ULL;
v___x_1426_ = lean_uint64_shift_right(v___y_1424_, v___x_1425_);
v_fold_1427_ = lean_uint64_xor(v___y_1424_, v___x_1426_);
v___x_1428_ = 16ULL;
v___x_1429_ = lean_uint64_shift_right(v_fold_1427_, v___x_1428_);
v___x_1430_ = lean_uint64_xor(v_fold_1427_, v___x_1429_);
v___x_1431_ = lean_uint64_to_usize(v___x_1430_);
v___x_1432_ = lean_usize_of_nat(v___x_1422_);
v___x_1433_ = ((size_t)1ULL);
v___x_1434_ = lean_usize_sub(v___x_1432_, v___x_1433_);
v___x_1435_ = lean_usize_land(v___x_1431_, v___x_1434_);
v___x_1436_ = lean_array_uget_borrowed(v_buckets_1421_, v___x_1435_);
v___x_1437_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17_spec__22___redArg(v_a_1420_, v___x_1436_);
return v___x_1437_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17___redArg___boxed(lean_object* v_m_1441_, lean_object* v_a_1442_){
_start:
{
uint8_t v_res_1443_; lean_object* v_r_1444_; 
v_res_1443_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17___redArg(v_m_1441_, v_a_1442_);
lean_dec(v_a_1442_);
lean_dec_ref(v_m_1441_);
v_r_1444_ = lean_box(v_res_1443_);
return v_r_1444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11(lean_object* v_inst_1451_, lean_object* v_env_1452_, lean_object* v_forConst_1453_, lean_object* v_key_1454_, lean_object* v_realize_1455_){
_start:
{
lean_object* v___x_1457_; lean_object* v_a_1459_; lean_object* v___y_1463_; lean_object* v_base_1465_; lean_object* v_importRealizationCtx_x3f_1466_; lean_object* v_localRealizationCtxMap_1467_; uint8_t v_isExporting_1468_; lean_object* v_ctx_1470_; lean_object* v___y_1487_; 
v___x_1457_ = lean_io_get_num_heartbeats();
v_base_1465_ = lean_ctor_get(v_env_1452_, 0);
lean_inc_ref(v_base_1465_);
v_importRealizationCtx_x3f_1466_ = lean_ctor_get(v_env_1452_, 5);
lean_inc(v_importRealizationCtx_x3f_1466_);
v_localRealizationCtxMap_1467_ = lean_ctor_get(v_env_1452_, 6);
lean_inc(v_localRealizationCtxMap_1467_);
v_isExporting_1468_ = lean_ctor_get_uint8(v_env_1452_, sizeof(void*)*8);
lean_dec_ref(v_env_1452_);
if (v_isExporting_1468_ == 0)
{
lean_object* v_private_1508_; 
v_private_1508_ = lean_ctor_get(v_base_1465_, 0);
lean_inc(v_private_1508_);
lean_dec_ref(v_base_1465_);
v___y_1487_ = v_private_1508_;
goto v___jp_1486_;
}
else
{
lean_object* v_public_1509_; 
v_public_1509_ = lean_ctor_get(v_base_1465_, 1);
lean_inc(v_public_1509_);
lean_dec_ref(v_base_1465_);
v___y_1487_ = v_public_1509_;
goto v___jp_1486_;
}
v___jp_1458_:
{
lean_object* v___x_1460_; lean_object* v___x_1461_; 
v___x_1460_ = lean_io_set_heartbeats(v___x_1457_);
v___x_1461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1461_, 0, v_a_1459_);
return v___x_1461_;
}
v___jp_1462_:
{
lean_object* v_a_1464_; 
v_a_1464_ = lean_ctor_get(v___y_1463_, 0);
lean_inc(v_a_1464_);
lean_dec_ref(v___y_1463_);
v_a_1459_ = v_a_1464_;
goto v___jp_1458_;
}
v___jp_1469_:
{
lean_object* v_env_1471_; lean_object* v_opts_1472_; lean_object* v_realizeMapRef_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; 
v_env_1471_ = lean_ctor_get(v_ctx_1470_, 0);
lean_inc(v_env_1471_);
v_opts_1472_ = lean_ctor_get(v_ctx_1470_, 1);
lean_inc_ref(v_opts_1472_);
v_realizeMapRef_1473_ = lean_ctor_get(v_ctx_1470_, 2);
lean_inc(v_realizeMapRef_1473_);
v___x_1474_ = lean_st_ref_get(v_realizeMapRef_1473_);
v___x_1475_ = l_unsafeCast___redArg(v_inst_1451_);
v___x_1476_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1474_, v___x_1475_);
lean_dec(v___x_1475_);
lean_dec(v___x_1474_);
if (lean_obj_tag(v___x_1476_) == 1)
{
lean_object* v_val_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; 
v_val_1477_ = lean_ctor_get(v___x_1476_, 0);
lean_inc(v_val_1477_);
lean_dec_ref_known(v___x_1476_, 1);
v___x_1478_ = l_unsafeCast___redArg(v_val_1477_);
lean_dec(v_val_1477_);
v___x_1479_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(v___x_1478_, v_key_1454_);
lean_dec(v___x_1478_);
if (lean_obj_tag(v___x_1479_) == 1)
{
lean_object* v_val_1480_; lean_object* v___x_1481_; 
lean_dec(v_realizeMapRef_1473_);
lean_dec_ref(v_opts_1472_);
lean_dec(v_env_1471_);
lean_dec_ref(v_ctx_1470_);
lean_dec(v_importRealizationCtx_x3f_1466_);
lean_dec_ref(v_realize_1455_);
lean_dec_ref(v_key_1454_);
lean_dec(v_forConst_1453_);
v_val_1480_ = lean_ctor_get(v___x_1479_, 0);
lean_inc(v_val_1480_);
lean_dec_ref_known(v___x_1479_, 1);
v___x_1481_ = lean_task_get_own(v_val_1480_);
v_a_1459_ = v___x_1481_;
goto v___jp_1458_;
}
else
{
lean_object* v___x_1482_; lean_object* v___x_1483_; 
lean_dec(v___x_1479_);
v___x_1482_ = lean_box(0);
v___x_1483_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0(v_realizeMapRef_1473_, v_env_1471_, v_forConst_1453_, v_ctx_1470_, v_importRealizationCtx_x3f_1466_, v_realize_1455_, v_opts_1472_, v_inst_1451_, v_key_1454_, v___x_1482_);
lean_dec(v_env_1471_);
lean_dec(v_realizeMapRef_1473_);
v___y_1463_ = v___x_1483_;
goto v___jp_1462_;
}
}
else
{
lean_object* v___x_1484_; lean_object* v___x_1485_; 
lean_dec(v___x_1476_);
v___x_1484_ = lean_box(0);
v___x_1485_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___lam__0(v_realizeMapRef_1473_, v_env_1471_, v_forConst_1453_, v_ctx_1470_, v_importRealizationCtx_x3f_1466_, v_realize_1455_, v_opts_1472_, v_inst_1451_, v_key_1454_, v___x_1484_);
lean_dec(v_env_1471_);
lean_dec(v_realizeMapRef_1473_);
v___y_1463_ = v___x_1485_;
goto v___jp_1462_;
}
}
v___jp_1486_:
{
lean_object* v_const2ModIdx_1488_; uint8_t v___x_1489_; 
v_const2ModIdx_1488_ = lean_ctor_get(v___y_1487_, 2);
lean_inc_ref(v_const2ModIdx_1488_);
lean_dec_ref(v___y_1487_);
v___x_1489_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17___redArg(v_const2ModIdx_1488_, v_forConst_1453_);
lean_dec_ref(v_const2ModIdx_1488_);
if (v___x_1489_ == 0)
{
lean_object* v___x_1490_; 
v___x_1490_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_localRealizationCtxMap_1467_, v_forConst_1453_);
lean_dec(v_localRealizationCtxMap_1467_);
if (lean_obj_tag(v___x_1490_) == 0)
{
lean_object* v___x_1491_; lean_object* v___x_1492_; uint8_t v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; 
lean_dec(v_importRealizationCtx_x3f_1466_);
lean_dec(v___x_1457_);
lean_dec_ref(v_realize_1455_);
lean_dec_ref(v_key_1454_);
v___x_1491_ = ((lean_object*)(l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__0));
v___x_1492_ = l_unsafeCast___redArg(v_inst_1451_);
v___x_1493_ = 1;
v___x_1494_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1492_, v___x_1493_);
v___x_1495_ = lean_string_append(v___x_1491_, v___x_1494_);
lean_dec_ref(v___x_1494_);
v___x_1496_ = ((lean_object*)(l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__1));
v___x_1497_ = lean_string_append(v___x_1495_, v___x_1496_);
v___x_1498_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_forConst_1453_, v___x_1493_);
v___x_1499_ = lean_string_append(v___x_1497_, v___x_1498_);
lean_dec_ref(v___x_1498_);
v___x_1500_ = ((lean_object*)(l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__2));
v___x_1501_ = lean_string_append(v___x_1499_, v___x_1500_);
v___x_1502_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1502_, 0, v___x_1501_);
v___x_1503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1503_, 0, v___x_1502_);
return v___x_1503_;
}
else
{
lean_object* v_val_1504_; 
v_val_1504_ = lean_ctor_get(v___x_1490_, 0);
lean_inc(v_val_1504_);
lean_dec_ref_known(v___x_1490_, 1);
v_ctx_1470_ = v_val_1504_;
goto v___jp_1469_;
}
}
else
{
lean_dec(v_localRealizationCtxMap_1467_);
if (lean_obj_tag(v_importRealizationCtx_x3f_1466_) == 0)
{
lean_object* v___x_1505_; lean_object* v___x_1506_; 
lean_dec(v___x_1457_);
lean_dec_ref(v_realize_1455_);
lean_dec_ref(v_key_1454_);
lean_dec(v_forConst_1453_);
v___x_1505_ = ((lean_object*)(l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___closed__4));
v___x_1506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1506_, 0, v___x_1505_);
return v___x_1506_;
}
else
{
lean_object* v_val_1507_; 
v_val_1507_ = lean_ctor_get(v_importRealizationCtx_x3f_1466_, 0);
lean_inc(v_val_1507_);
v_ctx_1470_ = v_val_1507_;
goto v___jp_1469_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11___boxed(lean_object* v_inst_1510_, lean_object* v_env_1511_, lean_object* v_forConst_1512_, lean_object* v_key_1513_, lean_object* v_realize_1514_, lean_object* v_a_1515_){
_start:
{
lean_object* v_res_1516_; 
v_res_1516_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11(v_inst_1510_, v_env_1511_, v_forConst_1512_, v_key_1513_, v_realize_1514_);
lean_dec(v_inst_1510_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(lean_object* v_msg_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
lean_object* v___f_1523_; lean_object* v___x_10000__overap_1524_; lean_object* v___x_1525_; 
v___f_1523_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__3___closed__0));
v___x_10000__overap_1524_ = lean_panic_fn_borrowed(v___f_1523_, v_msg_1517_);
lean_inc(v___y_1521_);
lean_inc_ref(v___y_1520_);
lean_inc(v___y_1519_);
lean_inc_ref(v___y_1518_);
v___x_1525_ = lean_apply_5(v___x_10000__overap_1524_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, lean_box(0));
return v___x_1525_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg___boxed(lean_object* v_msg_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_){
_start:
{
lean_object* v_res_1532_; 
v_res_1532_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(v_msg_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_);
lean_dec(v___y_1530_);
lean_dec_ref(v___y_1529_);
lean_dec(v___y_1528_);
lean_dec_ref(v___y_1527_);
return v_res_1532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0(lean_object* v_realize_1533_, lean_object* v_inst_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_){
_start:
{
lean_object* v___x_1540_; 
lean_inc(v___y_1538_);
lean_inc_ref(v___y_1537_);
lean_inc(v___y_1536_);
v___x_1540_ = lean_apply_5(v_realize_1533_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_, lean_box(0));
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v_a_1541_; lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1549_; 
v_a_1541_ = lean_ctor_get(v___x_1540_, 0);
v_isSharedCheck_1549_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1549_ == 0)
{
v___x_1543_ = v___x_1540_;
v_isShared_1544_ = v_isSharedCheck_1549_;
goto v_resetjp_1542_;
}
else
{
lean_inc(v_a_1541_);
lean_dec(v___x_1540_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1549_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
lean_object* v___x_1545_; lean_object* v___x_1547_; 
v___x_1545_ = l___private_Init_Dynamic_0__Dynamic_mkImpl___redArg(v_inst_1534_, v_a_1541_);
lean_dec(v_a_1541_);
if (v_isShared_1544_ == 0)
{
lean_ctor_set(v___x_1543_, 0, v___x_1545_);
v___x_1547_ = v___x_1543_;
goto v_reusejp_1546_;
}
else
{
lean_object* v_reuseFailAlloc_1548_; 
v_reuseFailAlloc_1548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1548_, 0, v___x_1545_);
v___x_1547_ = v_reuseFailAlloc_1548_;
goto v_reusejp_1546_;
}
v_reusejp_1546_:
{
return v___x_1547_;
}
}
}
else
{
lean_object* v_a_1550_; lean_object* v___x_1552_; uint8_t v_isShared_1553_; uint8_t v_isSharedCheck_1557_; 
v_a_1550_ = lean_ctor_get(v___x_1540_, 0);
v_isSharedCheck_1557_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1557_ == 0)
{
v___x_1552_ = v___x_1540_;
v_isShared_1553_ = v_isSharedCheck_1557_;
goto v_resetjp_1551_;
}
else
{
lean_inc(v_a_1550_);
lean_dec(v___x_1540_);
v___x_1552_ = lean_box(0);
v_isShared_1553_ = v_isSharedCheck_1557_;
goto v_resetjp_1551_;
}
v_resetjp_1551_:
{
lean_object* v___x_1555_; 
if (v_isShared_1553_ == 0)
{
v___x_1555_ = v___x_1552_;
goto v_reusejp_1554_;
}
else
{
lean_object* v_reuseFailAlloc_1556_; 
v_reuseFailAlloc_1556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1556_, 0, v_a_1550_);
v___x_1555_ = v_reuseFailAlloc_1556_;
goto v_reusejp_1554_;
}
v_reusejp_1554_:
{
return v___x_1555_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0___boxed(lean_object* v_realize_1558_, lean_object* v_inst_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_){
_start:
{
lean_object* v_res_1565_; 
v_res_1565_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0(v_realize_1558_, v_inst_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_);
lean_dec(v___y_1563_);
lean_dec_ref(v___y_1562_);
lean_dec(v___y_1561_);
lean_dec(v_inst_1559_);
return v_res_1565_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_1566_; lean_object* v___x_1567_; 
v___x_1566_ = l_Lean_Options_empty;
v___x_1567_ = l_Lean_Core_getMaxHeartbeats(v___x_1566_);
return v___x_1567_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1568_ = lean_box(0);
v___x_1569_ = lean_unsigned_to_nat(16u);
v___x_1570_ = lean_mk_array(v___x_1569_, v___x_1568_);
return v___x_1570_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; 
v___x_1571_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__1);
v___x_1572_ = lean_unsigned_to_nat(0u);
v___x_1573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1572_);
lean_ctor_set(v___x_1573_, 1, v___x_1571_);
return v___x_1573_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5(void){
_start:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; 
v___x_1576_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5));
v___x_1577_ = lean_unsigned_to_nat(36u);
v___x_1578_ = lean_unsigned_to_nat(2665u);
v___x_1579_ = ((lean_object*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__4));
v___x_1580_ = ((lean_object*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3));
v___x_1581_ = l_mkPanicMessageWithDecl(v___x_1580_, v___x_1579_, v___x_1578_, v___x_1577_, v___x_1576_);
return v___x_1581_;
}
}
static lean_object* _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6(void){
_start:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; 
v___x_1582_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg___closed__5));
v___x_1583_ = lean_unsigned_to_nat(48u);
v___x_1584_ = lean_unsigned_to_nat(2656u);
v___x_1585_ = ((lean_object*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__4));
v___x_1586_ = ((lean_object*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__3));
v___x_1587_ = l_mkPanicMessageWithDecl(v___x_1586_, v___x_1585_, v___x_1584_, v___x_1583_, v___x_1582_);
return v___x_1587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg(lean_object* v_inst_1588_, lean_object* v_inst_1589_, lean_object* v_forConst_1590_, lean_object* v_key_1591_, lean_object* v_realize_1592_, lean_object* v_a_1593_, lean_object* v_a_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_){
_start:
{
lean_object* v___f_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v_env_1601_; uint8_t v___x_1602_; 
lean_inc(v_inst_1589_);
lean_inc_ref(v_realize_1592_);
v___f_1598_ = lean_alloc_closure((void*)(l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_1598_, 0, v_realize_1592_);
lean_closure_set(v___f_1598_, 1, v_inst_1589_);
v___x_1599_ = l___private_Lean_Meta_Basic_0__Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_373817412____hygCtx___hyg_13_;
v___x_1600_ = lean_st_ref_get(v_a_1596_);
v_env_1601_ = lean_ctor_get(v___x_1600_, 0);
lean_inc_ref(v_env_1601_);
lean_dec(v___x_1600_);
v___x_1602_ = l_Lean_Environment_areRealizationsEnabledForConst(v_env_1601_, v_forConst_1590_);
if (v___x_1602_ == 0)
{
lean_object* v___x_1603_; 
lean_dec_ref(v_env_1601_);
lean_dec_ref(v___f_1598_);
lean_dec_ref(v_key_1591_);
lean_dec(v_forConst_1590_);
lean_dec(v_inst_1589_);
lean_inc(v_a_1596_);
lean_inc_ref(v_a_1595_);
lean_inc(v_a_1594_);
lean_inc_ref(v_a_1593_);
v___x_1603_ = lean_apply_5(v_realize_1592_, v_a_1593_, v_a_1594_, v_a_1595_, v_a_1596_, lean_box(0));
return v___x_1603_;
}
else
{
uint8_t v___x_1604_; lean_object* v___x_1605_; lean_object* v_toCold_1606_; lean_object* v_ref_1607_; lean_object* v_fileName_1608_; lean_object* v_fileMap_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
lean_dec_ref(v_realize_1592_);
v___x_1604_ = 0;
v___x_1605_ = lean_io_get_num_heartbeats();
v_toCold_1606_ = lean_ctor_get(v_a_1595_, 0);
v_ref_1607_ = lean_ctor_get(v_a_1595_, 2);
v_fileName_1608_ = lean_ctor_get(v_toCold_1606_, 0);
v_fileMap_1609_ = lean_ctor_get(v_toCold_1606_, 1);
v___x_1610_ = l_Lean_Options_empty;
v___x_1611_ = lean_unsigned_to_nat(1000u);
v___x_1612_ = lean_obj_once(&l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__0_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_, &l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__0_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65__once, _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl___closed__0_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_);
v___x_1613_ = lean_box(0);
v___x_1614_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__0);
v___x_1615_ = l_Lean_firstFrontendMacroScope;
v___x_1616_ = lean_box(0);
v___x_1617_ = lean_unsigned_to_nat(0u);
v___x_1618_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__2);
lean_inc_ref(v_fileMap_1609_);
lean_inc_ref(v_fileName_1608_);
v___x_1619_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1619_, 0, v_fileName_1608_);
lean_ctor_set(v___x_1619_, 1, v_fileMap_1609_);
lean_ctor_set(v___x_1619_, 2, v___x_1610_);
lean_ctor_set(v___x_1619_, 3, v___x_1611_);
lean_ctor_set(v___x_1619_, 4, v___x_1612_);
lean_ctor_set(v___x_1619_, 5, v___x_1613_);
lean_ctor_set(v___x_1619_, 6, v___x_1605_);
lean_ctor_set(v___x_1619_, 7, v___x_1614_);
lean_ctor_set(v___x_1619_, 8, v___x_1612_);
lean_ctor_set(v___x_1619_, 9, v___x_1615_);
lean_ctor_set(v___x_1619_, 10, v___x_1616_);
lean_ctor_set(v___x_1619_, 11, v___x_1618_);
v___x_1620_ = lean_box(0);
v___x_1621_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1621_, 0, v___x_1619_);
lean_ctor_set(v___x_1621_, 1, v___x_1617_);
lean_ctor_set(v___x_1621_, 2, v___x_1620_);
lean_ctor_set_uint8(v___x_1621_, sizeof(void*)*3, v___x_1604_);
lean_ctor_set_uint8(v___x_1621_, sizeof(void*)*3 + 1, v___x_1604_);
v___x_1622_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_realizeValue_realizeAndReport___boxed), 5, 2);
lean_closure_set(v___x_1622_, 0, v___f_1598_);
lean_closure_set(v___x_1622_, 1, v___x_1621_);
v___x_1623_ = l_Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11(v_inst_1588_, v_env_1601_, v_forConst_1590_, v_key_1591_, v___x_1622_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_a_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1675_; 
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1626_ = v___x_1623_;
v_isShared_1627_ = v_isSharedCheck_1675_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_a_1624_);
lean_dec(v___x_1623_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1675_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
lean_object* v___x_1628_; 
v___x_1628_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_a_1624_, v___x_1599_);
lean_dec(v_a_1624_);
if (lean_obj_tag(v___x_1628_) == 1)
{
lean_object* v_val_1629_; lean_object* v_res_x3f_1630_; lean_object* v_snap_x3f_1631_; lean_object* v___y_1633_; lean_object* v___y_1634_; lean_object* v___y_1635_; lean_object* v___y_1636_; lean_object* v_snap_1650_; lean_object* v___y_1651_; lean_object* v___y_1652_; lean_object* v___y_1653_; lean_object* v___y_1654_; 
v_val_1629_ = lean_ctor_get(v___x_1628_, 0);
lean_inc(v_val_1629_);
lean_dec_ref_known(v___x_1628_, 1);
v_res_x3f_1630_ = lean_ctor_get(v_val_1629_, 0);
lean_inc_ref(v_res_x3f_1630_);
v_snap_x3f_1631_ = lean_ctor_get(v_val_1629_, 1);
lean_inc(v_snap_x3f_1631_);
lean_dec(v_val_1629_);
if (lean_obj_tag(v_snap_x3f_1631_) == 1)
{
lean_object* v_val_1665_; lean_object* v___x_1666_; 
v_val_1665_ = lean_ctor_get(v_snap_x3f_1631_, 0);
lean_inc(v_val_1665_);
lean_dec_ref_known(v_snap_x3f_1631_, 1);
v___x_1666_ = l_Lean_Syntax_getRange_x3f(v_ref_1607_, v___x_1604_);
if (lean_obj_tag(v___x_1666_) == 1)
{
lean_object* v_val_1667_; lean_object* v_start_1668_; lean_object* v_stop_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; 
v_val_1667_ = lean_ctor_get(v___x_1666_, 0);
lean_inc(v_val_1667_);
lean_dec_ref_known(v___x_1666_, 1);
v_start_1668_ = lean_ctor_get(v_val_1667_, 0);
lean_inc(v_start_1668_);
v_stop_1669_ = lean_ctor_get(v_val_1667_, 1);
lean_inc(v_stop_1669_);
lean_dec(v_val_1667_);
lean_inc_ref_n(v_fileMap_1609_, 2);
v___x_1670_ = l_Lean_FileMap_toPosition(v_fileMap_1609_, v_start_1668_);
lean_dec(v_start_1668_);
v___x_1671_ = l_Lean_FileMap_toPosition(v_fileMap_1609_, v_stop_1669_);
lean_dec(v_stop_1669_);
v___x_1672_ = l___private_Lean_Meta_Basic_0__Lean_Meta_setAllDiagRanges(v_val_1665_, v___x_1670_, v___x_1671_);
v_snap_1650_ = v___x_1672_;
v___y_1651_ = v_a_1593_;
v___y_1652_ = v_a_1594_;
v___y_1653_ = v_a_1595_;
v___y_1654_ = v_a_1596_;
goto v___jp_1649_;
}
else
{
lean_dec(v___x_1666_);
v_snap_1650_ = v_val_1665_;
v___y_1651_ = v_a_1593_;
v___y_1652_ = v_a_1594_;
v___y_1653_ = v_a_1595_;
v___y_1654_ = v_a_1596_;
goto v___jp_1649_;
}
}
else
{
lean_dec(v_snap_x3f_1631_);
v___y_1633_ = v_a_1593_;
v___y_1634_ = v_a_1594_;
v___y_1635_ = v_a_1595_;
v___y_1636_ = v_a_1596_;
goto v___jp_1632_;
}
v___jp_1632_:
{
if (lean_obj_tag(v_res_x3f_1630_) == 0)
{
lean_object* v_a_1637_; lean_object* v___x_1639_; 
lean_dec(v_inst_1589_);
v_a_1637_ = lean_ctor_get(v_res_x3f_1630_, 0);
lean_inc(v_a_1637_);
lean_dec_ref_known(v_res_x3f_1630_, 1);
if (v_isShared_1627_ == 0)
{
lean_ctor_set_tag(v___x_1626_, 1);
lean_ctor_set(v___x_1626_, 0, v_a_1637_);
v___x_1639_ = v___x_1626_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v_a_1637_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
return v___x_1639_;
}
}
else
{
lean_object* v_a_1641_; lean_object* v___x_1642_; 
v_a_1641_ = lean_ctor_get(v_res_x3f_1630_, 0);
lean_inc(v_a_1641_);
lean_dec_ref_known(v_res_x3f_1630_, 1);
v___x_1642_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_a_1641_, v_inst_1589_);
lean_dec(v_inst_1589_);
lean_dec(v_a_1641_);
if (lean_obj_tag(v___x_1642_) == 0)
{
lean_object* v___x_1643_; lean_object* v___x_1644_; 
lean_del_object(v___x_1626_);
v___x_1643_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__5);
v___x_1644_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(v___x_1643_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
return v___x_1644_;
}
else
{
lean_object* v_val_1645_; lean_object* v___x_1647_; 
v_val_1645_ = lean_ctor_get(v___x_1642_, 0);
lean_inc(v_val_1645_);
lean_dec_ref_known(v___x_1642_, 1);
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 0, v_val_1645_);
v___x_1647_ = v___x_1626_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v_val_1645_);
v___x_1647_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
return v___x_1647_;
}
}
}
}
v___jp_1649_:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; 
v___x_1655_ = l_Lean_Language_SnapshotTask_finished___redArg(v___x_1616_, v_snap_1650_);
v___x_1656_ = l_Lean_Core_logSnapshotTask___redArg(v___x_1655_, v___y_1654_);
if (lean_obj_tag(v___x_1656_) == 0)
{
lean_dec_ref_known(v___x_1656_, 1);
v___y_1633_ = v___y_1651_;
v___y_1634_ = v___y_1652_;
v___y_1635_ = v___y_1653_;
v___y_1636_ = v___y_1654_;
goto v___jp_1632_;
}
else
{
lean_object* v_a_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1664_; 
lean_dec_ref(v_res_x3f_1630_);
lean_del_object(v___x_1626_);
lean_dec(v_inst_1589_);
v_a_1657_ = lean_ctor_get(v___x_1656_, 0);
v_isSharedCheck_1664_ = !lean_is_exclusive(v___x_1656_);
if (v_isSharedCheck_1664_ == 0)
{
v___x_1659_ = v___x_1656_;
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_a_1657_);
lean_dec(v___x_1656_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1662_; 
if (v_isShared_1660_ == 0)
{
v___x_1662_ = v___x_1659_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v_a_1657_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
return v___x_1662_;
}
}
}
}
}
else
{
lean_object* v___x_1673_; lean_object* v___x_1674_; 
lean_dec(v___x_1628_);
lean_del_object(v___x_1626_);
lean_dec(v_inst_1589_);
v___x_1673_ = lean_obj_once(&l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6, &l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6_once, _init_l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___closed__6);
v___x_1674_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(v___x_1673_, v_a_1593_, v_a_1594_, v_a_1595_, v_a_1596_);
return v___x_1674_;
}
}
}
else
{
lean_object* v_a_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1687_; 
lean_dec(v_inst_1589_);
v_a_1676_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1687_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1687_ == 0)
{
v___x_1678_ = v___x_1623_;
v_isShared_1679_ = v_isSharedCheck_1687_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_a_1676_);
lean_dec(v___x_1623_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1687_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1685_; 
v___x_1680_ = lean_io_error_to_string(v_a_1676_);
v___x_1681_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1680_);
v___x_1682_ = l_Lean_MessageData_ofFormat(v___x_1681_);
lean_inc(v_ref_1607_);
v___x_1683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1683_, 0, v_ref_1607_);
lean_ctor_set(v___x_1683_, 1, v___x_1682_);
if (v_isShared_1679_ == 0)
{
lean_ctor_set(v___x_1678_, 0, v___x_1683_);
v___x_1685_ = v___x_1678_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1686_; 
v_reuseFailAlloc_1686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1686_, 0, v___x_1683_);
v___x_1685_ = v_reuseFailAlloc_1686_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
return v___x_1685_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg___boxed(lean_object* v_inst_1688_, lean_object* v_inst_1689_, lean_object* v_forConst_1690_, lean_object* v_key_1691_, lean_object* v_realize_1692_, lean_object* v_a_1693_, lean_object* v_a_1694_, lean_object* v_a_1695_, lean_object* v_a_1696_, lean_object* v_a_1697_){
_start:
{
lean_object* v_res_1698_; 
v_res_1698_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg(v_inst_1688_, v_inst_1689_, v_forConst_1690_, v_key_1691_, v_realize_1692_, v_a_1693_, v_a_1694_, v_a_1695_, v_a_1696_);
lean_dec(v_a_1696_);
lean_dec_ref(v_a_1695_);
lean_dec(v_a_1694_);
lean_dec_ref(v_a_1693_);
lean_dec(v_inst_1688_);
return v_res_1698_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg(lean_object* v_keys_1699_, lean_object* v_vals_1700_, lean_object* v_i_1701_, lean_object* v_k_1702_){
_start:
{
lean_object* v___x_1703_; uint8_t v___x_1704_; 
v___x_1703_ = lean_array_get_size(v_keys_1699_);
v___x_1704_ = lean_nat_dec_lt(v_i_1701_, v___x_1703_);
if (v___x_1704_ == 0)
{
lean_object* v___x_1705_; 
lean_dec(v_i_1701_);
v___x_1705_ = lean_box(0);
return v___x_1705_;
}
else
{
lean_object* v_k_x27_1706_; uint8_t v___x_1707_; 
v_k_x27_1706_ = lean_array_fget_borrowed(v_keys_1699_, v_i_1701_);
v___x_1707_ = l_Lean_Meta_instBEqInfoCacheKey_beq(v_k_1702_, v_k_x27_1706_);
if (v___x_1707_ == 0)
{
lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1708_ = lean_unsigned_to_nat(1u);
v___x_1709_ = lean_nat_add(v_i_1701_, v___x_1708_);
lean_dec(v_i_1701_);
v_i_1701_ = v___x_1709_;
goto _start;
}
else
{
lean_object* v___x_1711_; lean_object* v___x_1712_; 
v___x_1711_ = lean_array_fget_borrowed(v_vals_1700_, v_i_1701_);
lean_dec(v_i_1701_);
lean_inc(v___x_1711_);
v___x_1712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1712_, 0, v___x_1711_);
return v___x_1712_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg___boxed(lean_object* v_keys_1713_, lean_object* v_vals_1714_, lean_object* v_i_1715_, lean_object* v_k_1716_){
_start:
{
lean_object* v_res_1717_; 
v_res_1717_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg(v_keys_1713_, v_vals_1714_, v_i_1715_, v_k_1716_);
lean_dec_ref(v_k_1716_);
lean_dec_ref(v_vals_1714_);
lean_dec_ref(v_keys_1713_);
return v_res_1717_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg(lean_object* v_x_1718_, size_t v_x_1719_, lean_object* v_x_1720_){
_start:
{
if (lean_obj_tag(v_x_1718_) == 0)
{
lean_object* v_es_1721_; lean_object* v___x_1722_; size_t v___x_1723_; size_t v___x_1724_; lean_object* v_j_1725_; lean_object* v___x_1726_; 
v_es_1721_ = lean_ctor_get(v_x_1718_, 0);
v___x_1722_ = lean_box(2);
v___x_1723_ = ((size_t)31ULL);
v___x_1724_ = lean_usize_land(v_x_1719_, v___x_1723_);
v_j_1725_ = lean_usize_to_nat(v___x_1724_);
v___x_1726_ = lean_array_get_borrowed(v___x_1722_, v_es_1721_, v_j_1725_);
lean_dec(v_j_1725_);
switch(lean_obj_tag(v___x_1726_))
{
case 0:
{
lean_object* v_key_1727_; lean_object* v_val_1728_; uint8_t v___x_1729_; 
v_key_1727_ = lean_ctor_get(v___x_1726_, 0);
v_val_1728_ = lean_ctor_get(v___x_1726_, 1);
v___x_1729_ = l_Lean_Meta_instBEqInfoCacheKey_beq(v_x_1720_, v_key_1727_);
if (v___x_1729_ == 0)
{
lean_object* v___x_1730_; 
v___x_1730_ = lean_box(0);
return v___x_1730_;
}
else
{
lean_object* v___x_1731_; 
lean_inc(v_val_1728_);
v___x_1731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1731_, 0, v_val_1728_);
return v___x_1731_;
}
}
case 1:
{
lean_object* v_node_1732_; size_t v___x_1733_; size_t v___x_1734_; 
v_node_1732_ = lean_ctor_get(v___x_1726_, 0);
v___x_1733_ = ((size_t)5ULL);
v___x_1734_ = lean_usize_shift_right(v_x_1719_, v___x_1733_);
v_x_1718_ = v_node_1732_;
v_x_1719_ = v___x_1734_;
goto _start;
}
default: 
{
lean_object* v___x_1736_; 
v___x_1736_ = lean_box(0);
return v___x_1736_;
}
}
}
else
{
lean_object* v_ks_1737_; lean_object* v_vs_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v_ks_1737_ = lean_ctor_get(v_x_1718_, 0);
v_vs_1738_ = lean_ctor_get(v_x_1718_, 1);
v___x_1739_ = lean_unsigned_to_nat(0u);
v___x_1740_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg(v_ks_1737_, v_vs_1738_, v___x_1739_, v_x_1720_);
return v___x_1740_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg___boxed(lean_object* v_x_1741_, lean_object* v_x_1742_, lean_object* v_x_1743_){
_start:
{
size_t v_x_12674__boxed_1744_; lean_object* v_res_1745_; 
v_x_12674__boxed_1744_ = lean_unbox_usize(v_x_1742_);
lean_dec(v_x_1742_);
v_res_1745_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg(v_x_1741_, v_x_12674__boxed_1744_, v_x_1743_);
lean_dec_ref(v_x_1743_);
lean_dec_ref(v_x_1741_);
return v_res_1745_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg(lean_object* v_x_1746_, lean_object* v_x_1747_){
_start:
{
uint64_t v_configKey_1748_; lean_object* v_expr_1749_; lean_object* v_nargs_x3f_1750_; uint64_t v___x_1751_; uint64_t v___y_1753_; 
v_configKey_1748_ = lean_ctor_get_uint64(v_x_1747_, sizeof(void*)*2);
v_expr_1749_ = lean_ctor_get(v_x_1747_, 0);
v_nargs_x3f_1750_ = lean_ctor_get(v_x_1747_, 1);
v___x_1751_ = l_Lean_Expr_hash(v_expr_1749_);
if (lean_obj_tag(v_nargs_x3f_1750_) == 0)
{
uint64_t v___x_1758_; 
v___x_1758_ = 11ULL;
v___y_1753_ = v___x_1758_;
goto v___jp_1752_;
}
else
{
lean_object* v_val_1759_; uint64_t v___x_1760_; uint64_t v___x_1761_; uint64_t v___x_1762_; 
v_val_1759_ = lean_ctor_get(v_nargs_x3f_1750_, 0);
v___x_1760_ = lean_uint64_of_nat(v_val_1759_);
v___x_1761_ = 13ULL;
v___x_1762_ = lean_uint64_mix_hash(v___x_1760_, v___x_1761_);
v___y_1753_ = v___x_1762_;
goto v___jp_1752_;
}
v___jp_1752_:
{
uint64_t v___x_1754_; uint64_t v___x_1755_; size_t v___x_1756_; lean_object* v___x_1757_; 
v___x_1754_ = lean_uint64_mix_hash(v___x_1751_, v___y_1753_);
v___x_1755_ = lean_uint64_mix_hash(v_configKey_1748_, v___x_1754_);
v___x_1756_ = lean_uint64_to_usize(v___x_1755_);
v___x_1757_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg(v_x_1746_, v___x_1756_, v_x_1747_);
return v___x_1757_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg___boxed(lean_object* v_x_1763_, lean_object* v_x_1764_){
_start:
{
lean_object* v_res_1765_; 
v_res_1765_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg(v_x_1763_, v_x_1764_);
lean_dec_ref(v_x_1764_);
lean_dec_ref(v_x_1763_);
return v_res_1765_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12___redArg(lean_object* v_x_1766_, lean_object* v_x_1767_, lean_object* v_x_1768_, lean_object* v_x_1769_){
_start:
{
lean_object* v_ks_1770_; lean_object* v_vs_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1795_; 
v_ks_1770_ = lean_ctor_get(v_x_1766_, 0);
v_vs_1771_ = lean_ctor_get(v_x_1766_, 1);
v_isSharedCheck_1795_ = !lean_is_exclusive(v_x_1766_);
if (v_isSharedCheck_1795_ == 0)
{
v___x_1773_ = v_x_1766_;
v_isShared_1774_ = v_isSharedCheck_1795_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_vs_1771_);
lean_inc(v_ks_1770_);
lean_dec(v_x_1766_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1795_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1775_; uint8_t v___x_1776_; 
v___x_1775_ = lean_array_get_size(v_ks_1770_);
v___x_1776_ = lean_nat_dec_lt(v_x_1767_, v___x_1775_);
if (v___x_1776_ == 0)
{
lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1780_; 
lean_dec(v_x_1767_);
v___x_1777_ = lean_array_push(v_ks_1770_, v_x_1768_);
v___x_1778_ = lean_array_push(v_vs_1771_, v_x_1769_);
if (v_isShared_1774_ == 0)
{
lean_ctor_set(v___x_1773_, 1, v___x_1778_);
lean_ctor_set(v___x_1773_, 0, v___x_1777_);
v___x_1780_ = v___x_1773_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v___x_1777_);
lean_ctor_set(v_reuseFailAlloc_1781_, 1, v___x_1778_);
v___x_1780_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
return v___x_1780_;
}
}
else
{
lean_object* v_k_x27_1782_; uint8_t v___x_1783_; 
v_k_x27_1782_ = lean_array_fget_borrowed(v_ks_1770_, v_x_1767_);
v___x_1783_ = l_Lean_Meta_instBEqInfoCacheKey_beq(v_x_1768_, v_k_x27_1782_);
if (v___x_1783_ == 0)
{
lean_object* v___x_1785_; 
if (v_isShared_1774_ == 0)
{
v___x_1785_ = v___x_1773_;
goto v_reusejp_1784_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v_ks_1770_);
lean_ctor_set(v_reuseFailAlloc_1789_, 1, v_vs_1771_);
v___x_1785_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1784_;
}
v_reusejp_1784_:
{
lean_object* v___x_1786_; lean_object* v___x_1787_; 
v___x_1786_ = lean_unsigned_to_nat(1u);
v___x_1787_ = lean_nat_add(v_x_1767_, v___x_1786_);
lean_dec(v_x_1767_);
v_x_1766_ = v___x_1785_;
v_x_1767_ = v___x_1787_;
goto _start;
}
}
else
{
lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1793_; 
v___x_1790_ = lean_array_fset(v_ks_1770_, v_x_1767_, v_x_1768_);
v___x_1791_ = lean_array_fset(v_vs_1771_, v_x_1767_, v_x_1769_);
lean_dec(v_x_1767_);
if (v_isShared_1774_ == 0)
{
lean_ctor_set(v___x_1773_, 1, v___x_1791_);
lean_ctor_set(v___x_1773_, 0, v___x_1790_);
v___x_1793_ = v___x_1773_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v___x_1790_);
lean_ctor_set(v_reuseFailAlloc_1794_, 1, v___x_1791_);
v___x_1793_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
return v___x_1793_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7___redArg(lean_object* v_n_1796_, lean_object* v_k_1797_, lean_object* v_v_1798_){
_start:
{
lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1799_ = lean_unsigned_to_nat(0u);
v___x_1800_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12___redArg(v_n_1796_, v___x_1799_, v_k_1797_, v_v_1798_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(lean_object* v_x_1801_, size_t v_x_1802_, size_t v_x_1803_, lean_object* v_x_1804_, lean_object* v_x_1805_){
_start:
{
if (lean_obj_tag(v_x_1801_) == 0)
{
lean_object* v_es_1806_; size_t v___x_1807_; size_t v___x_1808_; lean_object* v_j_1809_; lean_object* v___x_1810_; uint8_t v___x_1811_; 
v_es_1806_ = lean_ctor_get(v_x_1801_, 0);
v___x_1807_ = ((size_t)31ULL);
v___x_1808_ = lean_usize_land(v_x_1802_, v___x_1807_);
v_j_1809_ = lean_usize_to_nat(v___x_1808_);
v___x_1810_ = lean_array_get_size(v_es_1806_);
v___x_1811_ = lean_nat_dec_lt(v_j_1809_, v___x_1810_);
if (v___x_1811_ == 0)
{
lean_dec(v_j_1809_);
lean_dec(v_x_1805_);
lean_dec_ref(v_x_1804_);
return v_x_1801_;
}
else
{
lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1850_; 
lean_inc_ref(v_es_1806_);
v_isSharedCheck_1850_ = !lean_is_exclusive(v_x_1801_);
if (v_isSharedCheck_1850_ == 0)
{
lean_object* v_unused_1851_; 
v_unused_1851_ = lean_ctor_get(v_x_1801_, 0);
lean_dec(v_unused_1851_);
v___x_1813_ = v_x_1801_;
v_isShared_1814_ = v_isSharedCheck_1850_;
goto v_resetjp_1812_;
}
else
{
lean_dec(v_x_1801_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1850_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
lean_object* v_v_1815_; lean_object* v___x_1816_; lean_object* v_xs_x27_1817_; lean_object* v___y_1819_; 
v_v_1815_ = lean_array_fget(v_es_1806_, v_j_1809_);
v___x_1816_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg___closed__0);
v_xs_x27_1817_ = lean_array_fset(v_es_1806_, v_j_1809_, v___x_1816_);
switch(lean_obj_tag(v_v_1815_))
{
case 0:
{
lean_object* v_key_1824_; lean_object* v_val_1825_; lean_object* v___x_1827_; uint8_t v_isShared_1828_; uint8_t v_isSharedCheck_1835_; 
v_key_1824_ = lean_ctor_get(v_v_1815_, 0);
v_val_1825_ = lean_ctor_get(v_v_1815_, 1);
v_isSharedCheck_1835_ = !lean_is_exclusive(v_v_1815_);
if (v_isSharedCheck_1835_ == 0)
{
v___x_1827_ = v_v_1815_;
v_isShared_1828_ = v_isSharedCheck_1835_;
goto v_resetjp_1826_;
}
else
{
lean_inc(v_val_1825_);
lean_inc(v_key_1824_);
lean_dec(v_v_1815_);
v___x_1827_ = lean_box(0);
v_isShared_1828_ = v_isSharedCheck_1835_;
goto v_resetjp_1826_;
}
v_resetjp_1826_:
{
uint8_t v___x_1829_; 
v___x_1829_ = l_Lean_Meta_instBEqInfoCacheKey_beq(v_x_1804_, v_key_1824_);
if (v___x_1829_ == 0)
{
lean_object* v___x_1830_; lean_object* v___x_1831_; 
lean_del_object(v___x_1827_);
v___x_1830_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1824_, v_val_1825_, v_x_1804_, v_x_1805_);
v___x_1831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1830_);
v___y_1819_ = v___x_1831_;
goto v___jp_1818_;
}
else
{
lean_object* v___x_1833_; 
lean_dec(v_val_1825_);
lean_dec(v_key_1824_);
if (v_isShared_1828_ == 0)
{
lean_ctor_set(v___x_1827_, 1, v_x_1805_);
lean_ctor_set(v___x_1827_, 0, v_x_1804_);
v___x_1833_ = v___x_1827_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1834_; 
v_reuseFailAlloc_1834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1834_, 0, v_x_1804_);
lean_ctor_set(v_reuseFailAlloc_1834_, 1, v_x_1805_);
v___x_1833_ = v_reuseFailAlloc_1834_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
v___y_1819_ = v___x_1833_;
goto v___jp_1818_;
}
}
}
}
case 1:
{
lean_object* v_node_1836_; lean_object* v___x_1838_; uint8_t v_isShared_1839_; uint8_t v_isSharedCheck_1848_; 
v_node_1836_ = lean_ctor_get(v_v_1815_, 0);
v_isSharedCheck_1848_ = !lean_is_exclusive(v_v_1815_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1838_ = v_v_1815_;
v_isShared_1839_ = v_isSharedCheck_1848_;
goto v_resetjp_1837_;
}
else
{
lean_inc(v_node_1836_);
lean_dec(v_v_1815_);
v___x_1838_ = lean_box(0);
v_isShared_1839_ = v_isSharedCheck_1848_;
goto v_resetjp_1837_;
}
v_resetjp_1837_:
{
size_t v___x_1840_; size_t v___x_1841_; size_t v___x_1842_; size_t v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1846_; 
v___x_1840_ = ((size_t)5ULL);
v___x_1841_ = lean_usize_shift_right(v_x_1802_, v___x_1840_);
v___x_1842_ = ((size_t)1ULL);
v___x_1843_ = lean_usize_add(v_x_1803_, v___x_1842_);
v___x_1844_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(v_node_1836_, v___x_1841_, v___x_1843_, v_x_1804_, v_x_1805_);
if (v_isShared_1839_ == 0)
{
lean_ctor_set(v___x_1838_, 0, v___x_1844_);
v___x_1846_ = v___x_1838_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v___x_1844_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
v___y_1819_ = v___x_1846_;
goto v___jp_1818_;
}
}
}
default: 
{
lean_object* v___x_1849_; 
v___x_1849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1849_, 0, v_x_1804_);
lean_ctor_set(v___x_1849_, 1, v_x_1805_);
v___y_1819_ = v___x_1849_;
goto v___jp_1818_;
}
}
v___jp_1818_:
{
lean_object* v___x_1820_; lean_object* v___x_1822_; 
v___x_1820_ = lean_array_fset(v_xs_x27_1817_, v_j_1809_, v___y_1819_);
lean_dec(v_j_1809_);
if (v_isShared_1814_ == 0)
{
lean_ctor_set(v___x_1813_, 0, v___x_1820_);
v___x_1822_ = v___x_1813_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v___x_1820_);
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
else
{
lean_object* v_ks_1852_; lean_object* v_vs_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1871_; 
v_ks_1852_ = lean_ctor_get(v_x_1801_, 0);
v_vs_1853_ = lean_ctor_get(v_x_1801_, 1);
v_isSharedCheck_1871_ = !lean_is_exclusive(v_x_1801_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1855_ = v_x_1801_;
v_isShared_1856_ = v_isSharedCheck_1871_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_vs_1853_);
lean_inc(v_ks_1852_);
lean_dec(v_x_1801_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1871_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1858_; 
if (v_isShared_1856_ == 0)
{
v___x_1858_ = v___x_1855_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_ks_1852_);
lean_ctor_set(v_reuseFailAlloc_1870_, 1, v_vs_1853_);
v___x_1858_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
lean_object* v_newNode_1859_; size_t v___x_1860_; uint8_t v___x_1861_; 
v_newNode_1859_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7___redArg(v___x_1858_, v_x_1804_, v_x_1805_);
v___x_1860_ = ((size_t)7ULL);
v___x_1861_ = lean_usize_dec_le(v___x_1860_, v_x_1803_);
if (v___x_1861_ == 0)
{
lean_object* v___x_1862_; lean_object* v___x_1863_; uint8_t v___x_1864_; 
v___x_1862_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1859_);
v___x_1863_ = lean_unsigned_to_nat(4u);
v___x_1864_ = lean_nat_dec_lt(v___x_1862_, v___x_1863_);
lean_dec(v___x_1862_);
if (v___x_1864_ == 0)
{
lean_object* v_ks_1865_; lean_object* v_vs_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; 
v_ks_1865_ = lean_ctor_get(v_newNode_1859_, 0);
lean_inc_ref(v_ks_1865_);
v_vs_1866_ = lean_ctor_get(v_newNode_1859_, 1);
lean_inc_ref(v_vs_1866_);
lean_dec_ref(v_newNode_1859_);
v___x_1867_ = lean_unsigned_to_nat(0u);
v___x_1868_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg___closed__0);
v___x_1869_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg(v_x_1803_, v_ks_1865_, v_vs_1866_, v___x_1867_, v___x_1868_);
lean_dec_ref(v_vs_1866_);
lean_dec_ref(v_ks_1865_);
return v___x_1869_;
}
else
{
return v_newNode_1859_;
}
}
else
{
return v_newNode_1859_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg(size_t v_depth_1872_, lean_object* v_keys_1873_, lean_object* v_vals_1874_, lean_object* v_i_1875_, lean_object* v_entries_1876_){
_start:
{
lean_object* v___x_1877_; uint8_t v___x_1878_; 
v___x_1877_ = lean_array_get_size(v_keys_1873_);
v___x_1878_ = lean_nat_dec_lt(v_i_1875_, v___x_1877_);
if (v___x_1878_ == 0)
{
lean_dec(v_i_1875_);
return v_entries_1876_;
}
else
{
lean_object* v_k_1879_; uint64_t v_configKey_1880_; lean_object* v_expr_1881_; lean_object* v_nargs_x3f_1882_; lean_object* v_v_1883_; uint64_t v___x_1884_; uint64_t v___y_1886_; 
v_k_1879_ = lean_array_fget_borrowed(v_keys_1873_, v_i_1875_);
v_configKey_1880_ = lean_ctor_get_uint64(v_k_1879_, sizeof(void*)*2);
v_expr_1881_ = lean_ctor_get(v_k_1879_, 0);
v_nargs_x3f_1882_ = lean_ctor_get(v_k_1879_, 1);
v_v_1883_ = lean_array_fget_borrowed(v_vals_1874_, v_i_1875_);
v___x_1884_ = l_Lean_Expr_hash(v_expr_1881_);
if (lean_obj_tag(v_nargs_x3f_1882_) == 0)
{
uint64_t v___x_1899_; 
v___x_1899_ = 11ULL;
v___y_1886_ = v___x_1899_;
goto v___jp_1885_;
}
else
{
lean_object* v_val_1900_; uint64_t v___x_1901_; uint64_t v___x_1902_; uint64_t v___x_1903_; 
v_val_1900_ = lean_ctor_get(v_nargs_x3f_1882_, 0);
v___x_1901_ = lean_uint64_of_nat(v_val_1900_);
v___x_1902_ = 13ULL;
v___x_1903_ = lean_uint64_mix_hash(v___x_1901_, v___x_1902_);
v___y_1886_ = v___x_1903_;
goto v___jp_1885_;
}
v___jp_1885_:
{
uint64_t v___x_1887_; uint64_t v___x_1888_; size_t v_h_1889_; size_t v___x_1890_; lean_object* v___x_1891_; size_t v___x_1892_; size_t v___x_1893_; size_t v___x_1894_; size_t v_h_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; 
v___x_1887_ = lean_uint64_mix_hash(v___x_1884_, v___y_1886_);
v___x_1888_ = lean_uint64_mix_hash(v_configKey_1880_, v___x_1887_);
v_h_1889_ = lean_uint64_to_usize(v___x_1888_);
v___x_1890_ = ((size_t)5ULL);
v___x_1891_ = lean_unsigned_to_nat(1u);
v___x_1892_ = ((size_t)1ULL);
v___x_1893_ = lean_usize_sub(v_depth_1872_, v___x_1892_);
v___x_1894_ = lean_usize_mul(v___x_1890_, v___x_1893_);
v_h_1895_ = lean_usize_shift_right(v_h_1889_, v___x_1894_);
v___x_1896_ = lean_nat_add(v_i_1875_, v___x_1891_);
lean_dec(v_i_1875_);
lean_inc(v_v_1883_);
lean_inc(v_k_1879_);
v___x_1897_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(v_entries_1876_, v_h_1895_, v_depth_1872_, v_k_1879_, v_v_1883_);
v_i_1875_ = v___x_1896_;
v_entries_1876_ = v___x_1897_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg___boxed(lean_object* v_depth_1904_, lean_object* v_keys_1905_, lean_object* v_vals_1906_, lean_object* v_i_1907_, lean_object* v_entries_1908_){
_start:
{
size_t v_depth_boxed_1909_; lean_object* v_res_1910_; 
v_depth_boxed_1909_ = lean_unbox_usize(v_depth_1904_);
lean_dec(v_depth_1904_);
v_res_1910_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg(v_depth_boxed_1909_, v_keys_1905_, v_vals_1906_, v_i_1907_, v_entries_1908_);
lean_dec_ref(v_vals_1906_);
lean_dec_ref(v_keys_1905_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg___boxed(lean_object* v_x_1911_, lean_object* v_x_1912_, lean_object* v_x_1913_, lean_object* v_x_1914_, lean_object* v_x_1915_){
_start:
{
size_t v_x_12846__boxed_1916_; size_t v_x_12847__boxed_1917_; lean_object* v_res_1918_; 
v_x_12846__boxed_1916_ = lean_unbox_usize(v_x_1912_);
lean_dec(v_x_1912_);
v_x_12847__boxed_1917_ = lean_unbox_usize(v_x_1913_);
lean_dec(v_x_1913_);
v_res_1918_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(v_x_1911_, v_x_12846__boxed_1916_, v_x_12847__boxed_1917_, v_x_1914_, v_x_1915_);
return v_res_1918_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg(lean_object* v_x_1919_, lean_object* v_x_1920_, lean_object* v_x_1921_){
_start:
{
uint64_t v_configKey_1922_; lean_object* v_expr_1923_; lean_object* v_nargs_x3f_1924_; uint64_t v___x_1925_; uint64_t v___y_1927_; 
v_configKey_1922_ = lean_ctor_get_uint64(v_x_1920_, sizeof(void*)*2);
v_expr_1923_ = lean_ctor_get(v_x_1920_, 0);
v_nargs_x3f_1924_ = lean_ctor_get(v_x_1920_, 1);
v___x_1925_ = l_Lean_Expr_hash(v_expr_1923_);
if (lean_obj_tag(v_nargs_x3f_1924_) == 0)
{
uint64_t v___x_1933_; 
v___x_1933_ = 11ULL;
v___y_1927_ = v___x_1933_;
goto v___jp_1926_;
}
else
{
lean_object* v_val_1934_; uint64_t v___x_1935_; uint64_t v___x_1936_; uint64_t v___x_1937_; 
v_val_1934_ = lean_ctor_get(v_nargs_x3f_1924_, 0);
v___x_1935_ = lean_uint64_of_nat(v_val_1934_);
v___x_1936_ = 13ULL;
v___x_1937_ = lean_uint64_mix_hash(v___x_1935_, v___x_1936_);
v___y_1927_ = v___x_1937_;
goto v___jp_1926_;
}
v___jp_1926_:
{
uint64_t v___x_1928_; uint64_t v___x_1929_; size_t v___x_1930_; size_t v___x_1931_; lean_object* v___x_1932_; 
v___x_1928_ = lean_uint64_mix_hash(v___x_1925_, v___y_1927_);
v___x_1929_ = lean_uint64_mix_hash(v_configKey_1922_, v___x_1928_);
v___x_1930_ = lean_uint64_to_usize(v___x_1929_);
v___x_1931_ = ((size_t)1ULL);
v___x_1932_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(v_x_1919_, v___x_1930_, v___x_1931_, v_x_1920_, v_x_1921_);
return v___x_1932_;
}
}
}
LEAN_EXPORT uint8_t l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8(lean_object* v_x_1938_){
_start:
{
if (lean_obj_tag(v_x_1938_) == 0)
{
uint8_t v___x_1939_; 
v___x_1939_ = 0;
return v___x_1939_;
}
else
{
lean_object* v_head_1940_; lean_object* v_tail_1941_; uint8_t v___x_1942_; 
v_head_1940_ = lean_ctor_get(v_x_1938_, 0);
v_tail_1941_ = lean_ctor_get(v_x_1938_, 1);
v___x_1942_ = l_Lean_Level_hasMVar(v_head_1940_);
if (v___x_1942_ == 0)
{
v_x_1938_ = v_tail_1941_;
goto _start;
}
else
{
return v___x_1942_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8___boxed(lean_object* v_x_1944_){
_start:
{
uint8_t v_res_1945_; lean_object* v_r_1946_; 
v_res_1945_ = l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8(v_x_1944_);
lean_dec(v_x_1944_);
v_r_1946_ = lean_box(v_res_1945_);
return v_r_1946_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(lean_object* v_fn_1949_, lean_object* v_maxArgs_x3f_1950_, lean_object* v_a_1951_, lean_object* v_a_1952_, lean_object* v_a_1953_, lean_object* v_a_1954_){
_start:
{
lean_object* v___f_1956_; lean_object* v___f_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; 
v___f_1956_ = ((lean_object*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___closed__0));
lean_inc_n(v_maxArgs_x3f_1950_, 2);
lean_inc_ref_n(v_fn_1949_, 2);
v___f_1957_ = lean_alloc_closure((void*)(l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1___boxed), 8, 3);
lean_closure_set(v___f_1957_, 0, v_fn_1949_);
lean_closure_set(v___f_1957_, 1, v_maxArgs_x3f_1950_);
lean_closure_set(v___f_1957_, 2, v___f_1956_);
v___x_1958_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_;
v___x_1959_ = l_Lean_Meta_instImpl_00___x40_Lean_Meta_Basic_383016249____hygCtx___hyg_24_;
v___x_1960_ = l_Lean_Meta_mkInfoCacheKey___redArg(v_fn_1949_, v_maxArgs_x3f_1950_, v_a_1951_);
if (lean_obj_tag(v___x_1960_) == 0)
{
lean_object* v_a_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_2021_; 
v_a_1961_ = lean_ctor_get(v___x_1960_, 0);
v_isSharedCheck_2021_ = !lean_is_exclusive(v___x_1960_);
if (v_isSharedCheck_2021_ == 0)
{
v___x_1963_ = v___x_1960_;
v_isShared_1964_ = v_isSharedCheck_2021_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_a_1961_);
lean_dec(v___x_1960_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_2021_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v_finfo_1966_; lean_object* v___y_1967_; lean_object* v___x_1999_; lean_object* v_cache_2000_; lean_object* v_funInfo_2001_; lean_object* v___x_2002_; 
v___x_1999_ = lean_st_ref_get(v_a_1952_);
v_cache_2000_ = lean_ctor_get(v___x_1999_, 1);
lean_inc_ref(v_cache_2000_);
lean_dec(v___x_1999_);
v_funInfo_2001_ = lean_ctor_get(v_cache_2000_, 1);
lean_inc_ref(v_funInfo_2001_);
lean_dec_ref(v_cache_2000_);
v___x_2002_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg(v_funInfo_2001_, v_a_1961_);
lean_dec_ref(v_funInfo_2001_);
if (lean_obj_tag(v___x_2002_) == 0)
{
if (lean_obj_tag(v_fn_1949_) == 4)
{
lean_object* v_declName_2003_; lean_object* v_us_2004_; uint8_t v___x_2005_; 
v_declName_2003_ = lean_ctor_get(v_fn_1949_, 0);
v_us_2004_ = lean_ctor_get(v_fn_1949_, 1);
v___x_2005_ = l_List_any___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__8(v_us_2004_);
if (v___x_2005_ == 0)
{
lean_object* v___x_2006_; lean_object* v___x_2007_; 
lean_inc(v_us_2004_);
lean_inc_n(v_declName_2003_, 2);
lean_dec_ref_known(v_fn_1949_, 2);
v___x_2006_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2006_, 0, v_declName_2003_);
lean_ctor_set(v___x_2006_, 1, v_us_2004_);
lean_ctor_set(v___x_2006_, 2, v_maxArgs_x3f_1950_);
v___x_2007_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg(v___x_1958_, v___x_1959_, v_declName_2003_, v___x_2006_, v___f_1957_, v_a_1951_, v_a_1952_, v_a_1953_, v_a_1954_);
if (lean_obj_tag(v___x_2007_) == 0)
{
lean_object* v_a_2008_; 
v_a_2008_ = lean_ctor_get(v___x_2007_, 0);
lean_inc(v_a_2008_);
lean_dec_ref_known(v___x_2007_, 1);
v_finfo_1966_ = v_a_2008_;
v___y_1967_ = v_a_1952_;
goto v___jp_1965_;
}
else
{
lean_del_object(v___x_1963_);
lean_dec(v_a_1961_);
return v___x_2007_;
}
}
else
{
lean_object* v___x_2009_; 
lean_dec_ref(v___f_1957_);
lean_inc(v_a_1954_);
lean_inc_ref(v_a_1953_);
lean_inc(v_a_1952_);
lean_inc_ref(v_a_1951_);
v___x_2009_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(v_fn_1949_, v_maxArgs_x3f_1950_, v___f_1956_, v_a_1951_, v_a_1952_, v_a_1953_, v_a_1954_);
if (lean_obj_tag(v___x_2009_) == 0)
{
lean_object* v_a_2010_; 
v_a_2010_ = lean_ctor_get(v___x_2009_, 0);
lean_inc(v_a_2010_);
lean_dec_ref_known(v___x_2009_, 1);
v_finfo_1966_ = v_a_2010_;
v___y_1967_ = v_a_1952_;
goto v___jp_1965_;
}
else
{
lean_del_object(v___x_1963_);
lean_dec(v_a_1961_);
return v___x_2009_;
}
}
}
else
{
lean_object* v___x_2011_; 
lean_dec_ref(v___f_1957_);
lean_inc(v_a_1954_);
lean_inc_ref(v_a_1953_);
lean_inc(v_a_1952_);
lean_inc_ref(v_a_1951_);
v___x_2011_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___lam__1(v_fn_1949_, v_maxArgs_x3f_1950_, v___f_1956_, v_a_1951_, v_a_1952_, v_a_1953_, v_a_1954_);
if (lean_obj_tag(v___x_2011_) == 0)
{
lean_object* v_a_2012_; 
v_a_2012_ = lean_ctor_get(v___x_2011_, 0);
lean_inc(v_a_2012_);
lean_dec_ref_known(v___x_2011_, 1);
v_finfo_1966_ = v_a_2012_;
v___y_1967_ = v_a_1952_;
goto v___jp_1965_;
}
else
{
lean_del_object(v___x_1963_);
lean_dec(v_a_1961_);
return v___x_2011_;
}
}
}
else
{
lean_object* v_val_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2020_; 
lean_del_object(v___x_1963_);
lean_dec(v_a_1961_);
lean_dec_ref(v___f_1957_);
lean_dec(v_maxArgs_x3f_1950_);
lean_dec_ref(v_fn_1949_);
v_val_2013_ = lean_ctor_get(v___x_2002_, 0);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_2002_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_2015_ = v___x_2002_;
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
else
{
lean_inc(v_val_2013_);
lean_dec(v___x_2002_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v___x_2018_; 
if (v_isShared_2016_ == 0)
{
lean_ctor_set_tag(v___x_2015_, 0);
v___x_2018_ = v___x_2015_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v_val_2013_);
v___x_2018_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
return v___x_2018_;
}
}
}
v___jp_1965_:
{
lean_object* v___x_1968_; lean_object* v_cache_1969_; lean_object* v_mctx_1970_; lean_object* v_zetaDeltaFVarIds_1971_; lean_object* v_postponed_1972_; lean_object* v_diag_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1998_; 
v___x_1968_ = lean_st_ref_take(v___y_1967_);
v_cache_1969_ = lean_ctor_get(v___x_1968_, 1);
v_mctx_1970_ = lean_ctor_get(v___x_1968_, 0);
v_zetaDeltaFVarIds_1971_ = lean_ctor_get(v___x_1968_, 2);
v_postponed_1972_ = lean_ctor_get(v___x_1968_, 3);
v_diag_1973_ = lean_ctor_get(v___x_1968_, 4);
v_isSharedCheck_1998_ = !lean_is_exclusive(v___x_1968_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1975_ = v___x_1968_;
v_isShared_1976_ = v_isSharedCheck_1998_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_diag_1973_);
lean_inc(v_postponed_1972_);
lean_inc(v_zetaDeltaFVarIds_1971_);
lean_inc(v_cache_1969_);
lean_inc(v_mctx_1970_);
lean_dec(v___x_1968_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_1998_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
lean_object* v_inferType_1977_; lean_object* v_funInfo_1978_; lean_object* v_synthInstance_1979_; lean_object* v_whnf_1980_; lean_object* v_defEqTrans_1981_; lean_object* v_defEqPerm_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_1997_; 
v_inferType_1977_ = lean_ctor_get(v_cache_1969_, 0);
v_funInfo_1978_ = lean_ctor_get(v_cache_1969_, 1);
v_synthInstance_1979_ = lean_ctor_get(v_cache_1969_, 2);
v_whnf_1980_ = lean_ctor_get(v_cache_1969_, 3);
v_defEqTrans_1981_ = lean_ctor_get(v_cache_1969_, 4);
v_defEqPerm_1982_ = lean_ctor_get(v_cache_1969_, 5);
v_isSharedCheck_1997_ = !lean_is_exclusive(v_cache_1969_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1984_ = v_cache_1969_;
v_isShared_1985_ = v_isSharedCheck_1997_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_defEqPerm_1982_);
lean_inc(v_defEqTrans_1981_);
lean_inc(v_whnf_1980_);
lean_inc(v_synthInstance_1979_);
lean_inc(v_funInfo_1978_);
lean_inc(v_inferType_1977_);
lean_dec(v_cache_1969_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_1997_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v___x_1986_; lean_object* v___x_1988_; 
lean_inc_ref(v_finfo_1966_);
v___x_1986_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg(v_funInfo_1978_, v_a_1961_, v_finfo_1966_);
if (v_isShared_1985_ == 0)
{
lean_ctor_set(v___x_1984_, 1, v___x_1986_);
v___x_1988_ = v___x_1984_;
goto v_reusejp_1987_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v_inferType_1977_);
lean_ctor_set(v_reuseFailAlloc_1996_, 1, v___x_1986_);
lean_ctor_set(v_reuseFailAlloc_1996_, 2, v_synthInstance_1979_);
lean_ctor_set(v_reuseFailAlloc_1996_, 3, v_whnf_1980_);
lean_ctor_set(v_reuseFailAlloc_1996_, 4, v_defEqTrans_1981_);
lean_ctor_set(v_reuseFailAlloc_1996_, 5, v_defEqPerm_1982_);
v___x_1988_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1987_;
}
v_reusejp_1987_:
{
lean_object* v___x_1990_; 
if (v_isShared_1976_ == 0)
{
lean_ctor_set(v___x_1975_, 1, v___x_1988_);
v___x_1990_ = v___x_1975_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v_mctx_1970_);
lean_ctor_set(v_reuseFailAlloc_1995_, 1, v___x_1988_);
lean_ctor_set(v_reuseFailAlloc_1995_, 2, v_zetaDeltaFVarIds_1971_);
lean_ctor_set(v_reuseFailAlloc_1995_, 3, v_postponed_1972_);
lean_ctor_set(v_reuseFailAlloc_1995_, 4, v_diag_1973_);
v___x_1990_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
lean_object* v___x_1991_; lean_object* v___x_1993_; 
v___x_1991_ = lean_st_ref_put(v___y_1967_, v___x_1990_);
if (v_isShared_1964_ == 0)
{
lean_ctor_set(v___x_1963_, 0, v_finfo_1966_);
v___x_1993_ = v___x_1963_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v_finfo_1966_);
v___x_1993_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
return v___x_1993_;
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
lean_object* v_a_2022_; lean_object* v___x_2024_; uint8_t v_isShared_2025_; uint8_t v_isSharedCheck_2029_; 
lean_dec_ref(v___f_1957_);
lean_dec(v_maxArgs_x3f_1950_);
lean_dec_ref(v_fn_1949_);
v_a_2022_ = lean_ctor_get(v___x_1960_, 0);
v_isSharedCheck_2029_ = !lean_is_exclusive(v___x_1960_);
if (v_isSharedCheck_2029_ == 0)
{
v___x_2024_ = v___x_1960_;
v_isShared_2025_ = v_isSharedCheck_2029_;
goto v_resetjp_2023_;
}
else
{
lean_inc(v_a_2022_);
lean_dec(v___x_1960_);
v___x_2024_ = lean_box(0);
v_isShared_2025_ = v_isSharedCheck_2029_;
goto v_resetjp_2023_;
}
v_resetjp_2023_:
{
lean_object* v___x_2027_; 
if (v_isShared_2025_ == 0)
{
v___x_2027_ = v___x_2024_;
goto v_reusejp_2026_;
}
else
{
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v_a_2022_);
v___x_2027_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2026_;
}
v_reusejp_2026_:
{
return v___x_2027_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux___boxed(lean_object* v_fn_2030_, lean_object* v_maxArgs_x3f_2031_, lean_object* v_a_2032_, lean_object* v_a_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_, lean_object* v_a_2036_){
_start:
{
lean_object* v_res_2037_; 
v_res_2037_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(v_fn_2030_, v_maxArgs_x3f_2031_, v_a_2032_, v_a_2033_, v_a_2034_, v_a_2035_);
lean_dec(v_a_2035_);
lean_dec_ref(v_a_2034_);
lean_dec(v_a_2033_);
lean_dec_ref(v_a_2032_);
return v_res_2037_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0(lean_object* v_00_u03b2_2038_, lean_object* v_k_2039_, lean_object* v_t_2040_){
_start:
{
uint8_t v___x_2041_; 
v___x_2041_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___redArg(v_k_2039_, v_t_2040_);
return v___x_2041_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0___boxed(lean_object* v_00_u03b2_2042_, lean_object* v_k_2043_, lean_object* v_t_2044_){
_start:
{
uint8_t v_res_2045_; lean_object* v_r_2046_; 
v_res_2045_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__0(v_00_u03b2_2042_, v_k_2043_, v_t_2044_);
lean_dec(v_t_2044_);
lean_dec(v_k_2043_);
v_r_2046_ = lean_box(v_res_2045_);
return v_r_2046_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2(lean_object* v_upperBound_2047_, lean_object* v_val_2048_, lean_object* v___x_2049_, lean_object* v_fvars_2050_, lean_object* v_next_2051_, lean_object* v_upperBound_2052_, lean_object* v_inst_2053_, lean_object* v_R_2054_, lean_object* v_a_2055_, lean_object* v_b_2056_, lean_object* v_c_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_){
_start:
{
lean_object* v___x_2063_; 
v___x_2063_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___redArg(v_upperBound_2047_, v_val_2048_, v___x_2049_, v_fvars_2050_, v_next_2051_, v_upperBound_2052_, v_a_2055_, v_b_2056_, v___y_2058_, v___y_2059_, v___y_2060_, v___y_2061_);
return v___x_2063_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2___boxed(lean_object* v_upperBound_2064_, lean_object* v_val_2065_, lean_object* v___x_2066_, lean_object* v_fvars_2067_, lean_object* v_next_2068_, lean_object* v_upperBound_2069_, lean_object* v_inst_2070_, lean_object* v_R_2071_, lean_object* v_a_2072_, lean_object* v_b_2073_, lean_object* v_c_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_){
_start:
{
lean_object* v_res_2080_; 
v_res_2080_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__2(v_upperBound_2064_, v_val_2065_, v___x_2066_, v_fvars_2067_, v_next_2068_, v_upperBound_2069_, v_inst_2070_, v_R_2071_, v_a_2072_, v_b_2073_, v_c_2074_, v___y_2075_, v___y_2076_, v___y_2077_, v___y_2078_);
lean_dec(v___y_2078_);
lean_dec_ref(v___y_2077_);
lean_dec(v___y_2076_);
lean_dec_ref(v___y_2075_);
lean_dec(v_upperBound_2069_);
lean_dec(v_next_2068_);
lean_dec_ref(v_fvars_2067_);
lean_dec_ref(v___x_2066_);
lean_dec_ref(v_val_2065_);
lean_dec(v_upperBound_2064_);
return v_res_2080_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4(lean_object* v_upperBound_2081_, lean_object* v_fvars_2082_, lean_object* v_inst_2083_, lean_object* v_R_2084_, lean_object* v_a_2085_, lean_object* v_b_2086_, lean_object* v_c_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_){
_start:
{
lean_object* v___x_2093_; 
v___x_2093_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___redArg(v_upperBound_2081_, v_fvars_2082_, v_a_2085_, v_b_2086_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_);
return v___x_2093_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4___boxed(lean_object* v_upperBound_2094_, lean_object* v_fvars_2095_, lean_object* v_inst_2096_, lean_object* v_R_2097_, lean_object* v_a_2098_, lean_object* v_b_2099_, lean_object* v_c_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_){
_start:
{
lean_object* v_res_2106_; 
v_res_2106_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__4(v_upperBound_2094_, v_fvars_2095_, v_inst_2096_, v_R_2097_, v_a_2098_, v_b_2099_, v_c_2100_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_);
lean_dec(v___y_2104_);
lean_dec_ref(v___y_2103_);
lean_dec(v___y_2102_);
lean_dec_ref(v___y_2101_);
lean_dec_ref(v_fvars_2095_);
lean_dec(v_upperBound_2094_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6(lean_object* v_00_u03b2_2107_, lean_object* v_x_2108_, lean_object* v_x_2109_, lean_object* v_x_2110_){
_start:
{
lean_object* v___x_2111_; 
v___x_2111_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6___redArg(v_x_2108_, v_x_2109_, v_x_2110_);
return v___x_2111_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7(lean_object* v_00_u03b2_2112_, lean_object* v_x_2113_, lean_object* v_x_2114_){
_start:
{
lean_object* v___x_2115_; 
v___x_2115_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___redArg(v_x_2113_, v_x_2114_);
return v___x_2115_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7___boxed(lean_object* v_00_u03b2_2116_, lean_object* v_x_2117_, lean_object* v_x_2118_){
_start:
{
lean_object* v_res_2119_; 
v_res_2119_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7(v_00_u03b2_2116_, v_x_2117_, v_x_2118_);
lean_dec_ref(v_x_2118_);
lean_dec_ref(v_x_2117_);
return v_res_2119_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12(lean_object* v_00_u03b2_2120_, lean_object* v_msg_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_){
_start:
{
lean_object* v___x_2127_; 
v___x_2127_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___redArg(v_msg_2121_, v___y_2122_, v___y_2123_, v___y_2124_, v___y_2125_);
return v___x_2127_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12___boxed(lean_object* v_00_u03b2_2128_, lean_object* v_msg_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_){
_start:
{
lean_object* v_res_2135_; 
v_res_2135_ = l_panic___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__12(v_00_u03b2_2128_, v_msg_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_);
lean_dec(v___y_2133_);
lean_dec_ref(v___y_2132_);
lean_dec(v___y_2131_);
lean_dec_ref(v___y_2130_);
return v_res_2135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9(lean_object* v_00_u03b2_2136_, lean_object* v_inst_2137_, lean_object* v_inst_2138_, lean_object* v_forConst_2139_, lean_object* v_key_2140_, lean_object* v_realize_2141_, lean_object* v_a_2142_, lean_object* v_a_2143_, lean_object* v_a_2144_, lean_object* v_a_2145_){
_start:
{
lean_object* v___x_2147_; 
v___x_2147_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___redArg(v_inst_2137_, v_inst_2138_, v_forConst_2139_, v_key_2140_, v_realize_2141_, v_a_2142_, v_a_2143_, v_a_2144_, v_a_2145_);
return v___x_2147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9___boxed(lean_object* v_00_u03b2_2148_, lean_object* v_inst_2149_, lean_object* v_inst_2150_, lean_object* v_forConst_2151_, lean_object* v_key_2152_, lean_object* v_realize_2153_, lean_object* v_a_2154_, lean_object* v_a_2155_, lean_object* v_a_2156_, lean_object* v_a_2157_, lean_object* v_a_2158_){
_start:
{
lean_object* v_res_2159_; 
v_res_2159_ = l_Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9(v_00_u03b2_2148_, v_inst_2149_, v_inst_2150_, v_forConst_2151_, v_key_2152_, v_realize_2153_, v_a_2154_, v_a_2155_, v_a_2156_, v_a_2157_);
lean_dec(v_a_2157_);
lean_dec_ref(v_a_2156_);
lean_dec(v_a_2155_);
lean_dec_ref(v_a_2154_);
lean_dec(v_inst_2149_);
return v_res_2159_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6(lean_object* v_00_u03b2_2160_, lean_object* v_x_2161_, size_t v_x_2162_, size_t v_x_2163_, lean_object* v_x_2164_, lean_object* v_x_2165_){
_start:
{
lean_object* v___x_2166_; 
v___x_2166_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___redArg(v_x_2161_, v_x_2162_, v_x_2163_, v_x_2164_, v_x_2165_);
return v___x_2166_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6___boxed(lean_object* v_00_u03b2_2167_, lean_object* v_x_2168_, lean_object* v_x_2169_, lean_object* v_x_2170_, lean_object* v_x_2171_, lean_object* v_x_2172_){
_start:
{
size_t v_x_13294__boxed_2173_; size_t v_x_13295__boxed_2174_; lean_object* v_res_2175_; 
v_x_13294__boxed_2173_ = lean_unbox_usize(v_x_2169_);
lean_dec(v_x_2169_);
v_x_13295__boxed_2174_ = lean_unbox_usize(v_x_2170_);
lean_dec(v_x_2170_);
v_res_2175_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6(v_00_u03b2_2167_, v_x_2168_, v_x_13294__boxed_2173_, v_x_13295__boxed_2174_, v_x_2171_, v_x_2172_);
return v_res_2175_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8(lean_object* v_00_u03b2_2176_, lean_object* v_x_2177_, size_t v_x_2178_, lean_object* v_x_2179_){
_start:
{
lean_object* v___x_2180_; 
v___x_2180_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___redArg(v_x_2177_, v_x_2178_, v_x_2179_);
return v___x_2180_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8___boxed(lean_object* v_00_u03b2_2181_, lean_object* v_x_2182_, lean_object* v_x_2183_, lean_object* v_x_2184_){
_start:
{
size_t v_x_13311__boxed_2185_; lean_object* v_res_2186_; 
v_x_13311__boxed_2185_ = lean_unbox_usize(v_x_2183_);
lean_dec(v_x_2183_);
v_res_2186_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8(v_00_u03b2_2181_, v_x_2182_, v_x_13311__boxed_2185_, v_x_2184_);
lean_dec_ref(v_x_2184_);
lean_dec_ref(v_x_2182_);
return v_res_2186_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7(lean_object* v_00_u03b2_2187_, lean_object* v_n_2188_, lean_object* v_k_2189_, lean_object* v_v_2190_){
_start:
{
lean_object* v___x_2191_; 
v___x_2191_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7___redArg(v_n_2188_, v_k_2189_, v_v_2190_);
return v___x_2191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8(lean_object* v_00_u03b2_2192_, size_t v_depth_2193_, lean_object* v_keys_2194_, lean_object* v_vals_2195_, lean_object* v_heq_2196_, lean_object* v_i_2197_, lean_object* v_entries_2198_){
_start:
{
lean_object* v___x_2199_; 
v___x_2199_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___redArg(v_depth_2193_, v_keys_2194_, v_vals_2195_, v_i_2197_, v_entries_2198_);
return v___x_2199_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8___boxed(lean_object* v_00_u03b2_2200_, lean_object* v_depth_2201_, lean_object* v_keys_2202_, lean_object* v_vals_2203_, lean_object* v_heq_2204_, lean_object* v_i_2205_, lean_object* v_entries_2206_){
_start:
{
size_t v_depth_boxed_2207_; lean_object* v_res_2208_; 
v_depth_boxed_2207_ = lean_unbox_usize(v_depth_2201_);
lean_dec(v_depth_2201_);
v_res_2208_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__8(v_00_u03b2_2200_, v_depth_boxed_2207_, v_keys_2202_, v_vals_2203_, v_heq_2204_, v_i_2205_, v_entries_2206_);
lean_dec_ref(v_vals_2203_);
lean_dec_ref(v_keys_2202_);
return v_res_2208_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11(lean_object* v_00_u03b2_2209_, lean_object* v_keys_2210_, lean_object* v_vals_2211_, lean_object* v_heq_2212_, lean_object* v_i_2213_, lean_object* v_k_2214_){
_start:
{
lean_object* v___x_2215_; 
v___x_2215_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___redArg(v_keys_2210_, v_vals_2211_, v_i_2213_, v_k_2214_);
return v___x_2215_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11___boxed(lean_object* v_00_u03b2_2216_, lean_object* v_keys_2217_, lean_object* v_vals_2218_, lean_object* v_heq_2219_, lean_object* v_i_2220_, lean_object* v_k_2221_){
_start:
{
lean_object* v_res_2222_; 
v_res_2222_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__7_spec__8_spec__11(v_00_u03b2_2216_, v_keys_2217_, v_vals_2218_, v_heq_2219_, v_i_2220_, v_k_2221_);
lean_dec_ref(v_k_2221_);
lean_dec_ref(v_vals_2218_);
lean_dec_ref(v_keys_2217_);
return v_res_2222_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15(lean_object* v_00_u03b2_2223_, lean_object* v_x_2224_, lean_object* v_x_2225_){
_start:
{
lean_object* v___x_2226_; 
v___x_2226_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___redArg(v_x_2224_, v_x_2225_);
return v___x_2226_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15___boxed(lean_object* v_00_u03b2_2227_, lean_object* v_x_2228_, lean_object* v_x_2229_){
_start:
{
lean_object* v_res_2230_; 
v_res_2230_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15(v_00_u03b2_2227_, v_x_2228_, v_x_2229_);
lean_dec_ref(v_x_2229_);
lean_dec_ref(v_x_2228_);
return v_res_2230_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16(lean_object* v_00_u03b2_2231_, lean_object* v_x_2232_, lean_object* v_x_2233_, lean_object* v_x_2234_){
_start:
{
lean_object* v___x_2235_; 
v___x_2235_ = l_Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16___redArg(v_x_2232_, v_x_2233_, v_x_2234_);
return v___x_2235_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17(lean_object* v_00_u03b2_2236_, lean_object* v_m_2237_, lean_object* v_a_2238_){
_start:
{
uint8_t v___x_2239_; 
v___x_2239_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17___redArg(v_m_2237_, v_a_2238_);
return v___x_2239_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17___boxed(lean_object* v_00_u03b2_2240_, lean_object* v_m_2241_, lean_object* v_a_2242_){
_start:
{
uint8_t v_res_2243_; lean_object* v_r_2244_; 
v_res_2243_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17(v_00_u03b2_2240_, v_m_2241_, v_a_2242_);
lean_dec(v_a_2242_);
lean_dec_ref(v_m_2241_);
v_r_2244_ = lean_box(v_res_2243_);
return v_r_2244_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12(lean_object* v_00_u03b2_2245_, lean_object* v_x_2246_, lean_object* v_x_2247_, lean_object* v_x_2248_, lean_object* v_x_2249_){
_start:
{
lean_object* v___x_2250_; 
v___x_2250_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__6_spec__6_spec__7_spec__12___redArg(v_x_2246_, v_x_2247_, v_x_2248_, v_x_2249_);
return v___x_2250_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18(lean_object* v_00_u03b2_2251_, lean_object* v_x_2252_, size_t v_x_2253_, lean_object* v_x_2254_){
_start:
{
lean_object* v___x_2255_; 
v___x_2255_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___redArg(v_x_2252_, v_x_2253_, v_x_2254_);
return v___x_2255_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18___boxed(lean_object* v_00_u03b2_2256_, lean_object* v_x_2257_, lean_object* v_x_2258_, lean_object* v_x_2259_){
_start:
{
size_t v_x_13356__boxed_2260_; lean_object* v_res_2261_; 
v_x_13356__boxed_2260_ = lean_unbox_usize(v_x_2258_);
lean_dec(v_x_2258_);
v_res_2261_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18(v_00_u03b2_2256_, v_x_2257_, v_x_13356__boxed_2260_, v_x_2259_);
lean_dec_ref(v_x_2259_);
lean_dec_ref(v_x_2257_);
return v_res_2261_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20(lean_object* v_00_u03b2_2262_, lean_object* v_x_2263_, size_t v_x_2264_, size_t v_x_2265_, lean_object* v_x_2266_, lean_object* v_x_2267_){
_start:
{
lean_object* v___x_2268_; 
v___x_2268_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___redArg(v_x_2263_, v_x_2264_, v_x_2265_, v_x_2266_, v_x_2267_);
return v___x_2268_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20___boxed(lean_object* v_00_u03b2_2269_, lean_object* v_x_2270_, lean_object* v_x_2271_, lean_object* v_x_2272_, lean_object* v_x_2273_, lean_object* v_x_2274_){
_start:
{
size_t v_x_13367__boxed_2275_; size_t v_x_13368__boxed_2276_; lean_object* v_res_2277_; 
v_x_13367__boxed_2275_ = lean_unbox_usize(v_x_2271_);
lean_dec(v_x_2271_);
v_x_13368__boxed_2276_ = lean_unbox_usize(v_x_2272_);
lean_dec(v_x_2272_);
v_res_2277_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20(v_00_u03b2_2269_, v_x_2270_, v_x_13367__boxed_2275_, v_x_13368__boxed_2276_, v_x_2273_, v_x_2274_);
return v_res_2277_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17_spec__22(lean_object* v_00_u03b2_2278_, lean_object* v_a_2279_, lean_object* v_x_2280_){
_start:
{
uint8_t v___x_2281_; 
v___x_2281_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17_spec__22___redArg(v_a_2279_, v_x_2280_);
return v___x_2281_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17_spec__22___boxed(lean_object* v_00_u03b2_2282_, lean_object* v_a_2283_, lean_object* v_x_2284_){
_start:
{
uint8_t v_res_2285_; lean_object* v_r_2286_; 
v_res_2285_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__17_spec__22(v_00_u03b2_2282_, v_a_2283_, v_x_2284_);
lean_dec(v_x_2284_);
lean_dec(v_a_2283_);
v_r_2286_ = lean_box(v_res_2285_);
return v_r_2286_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19(lean_object* v_00_u03b2_2287_, lean_object* v_keys_2288_, lean_object* v_vals_2289_, lean_object* v_heq_2290_, lean_object* v_i_2291_, lean_object* v_k_2292_){
_start:
{
lean_object* v___x_2293_; 
v___x_2293_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___redArg(v_keys_2288_, v_vals_2289_, v_i_2291_, v_k_2292_);
return v___x_2293_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19___boxed(lean_object* v_00_u03b2_2294_, lean_object* v_keys_2295_, lean_object* v_vals_2296_, lean_object* v_heq_2297_, lean_object* v_i_2298_, lean_object* v_k_2299_){
_start:
{
lean_object* v_res_2300_; 
v_res_2300_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__15_spec__18_spec__19(v_00_u03b2_2294_, v_keys_2295_, v_vals_2296_, v_heq_2297_, v_i_2298_, v_k_2299_);
lean_dec_ref(v_k_2299_);
lean_dec_ref(v_vals_2296_);
lean_dec_ref(v_keys_2295_);
return v_res_2300_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22(lean_object* v_00_u03b2_2301_, lean_object* v_n_2302_, lean_object* v_k_2303_, lean_object* v_v_2304_){
_start:
{
lean_object* v___x_2305_; 
v___x_2305_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22___redArg(v_n_2302_, v_k_2303_, v_v_2304_);
return v___x_2305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23(lean_object* v_00_u03b2_2306_, size_t v_depth_2307_, lean_object* v_keys_2308_, lean_object* v_vals_2309_, lean_object* v_heq_2310_, lean_object* v_i_2311_, lean_object* v_entries_2312_){
_start:
{
lean_object* v___x_2313_; 
v___x_2313_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___redArg(v_depth_2307_, v_keys_2308_, v_vals_2309_, v_i_2311_, v_entries_2312_);
return v___x_2313_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23___boxed(lean_object* v_00_u03b2_2314_, lean_object* v_depth_2315_, lean_object* v_keys_2316_, lean_object* v_vals_2317_, lean_object* v_heq_2318_, lean_object* v_i_2319_, lean_object* v_entries_2320_){
_start:
{
size_t v_depth_boxed_2321_; lean_object* v_res_2322_; 
v_depth_boxed_2321_ = lean_unbox_usize(v_depth_2315_);
lean_dec(v_depth_2315_);
v_res_2322_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__23(v_00_u03b2_2314_, v_depth_boxed_2321_, v_keys_2316_, v_vals_2317_, v_heq_2318_, v_i_2319_, v_entries_2320_);
lean_dec_ref(v_vals_2317_);
lean_dec_ref(v_keys_2316_);
return v_res_2322_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__24(lean_object* v_00_u03b2_2323_, lean_object* v_x_2324_, lean_object* v_x_2325_, lean_object* v_x_2326_, lean_object* v_x_2327_){
_start:
{
lean_object* v___x_2328_; 
v___x_2328_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Environment_realizeValue___at___00Lean_Meta_realizeValue___at___00__private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux_spec__9_spec__11_spec__16_spec__20_spec__22_spec__24___redArg(v_x_2324_, v_x_2325_, v_x_2326_, v_x_2327_);
return v___x_2328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfo(lean_object* v_fn_2329_, lean_object* v_maxArgs_x3f_2330_, lean_object* v_a_2331_, lean_object* v_a_2332_, lean_object* v_a_2333_, lean_object* v_a_2334_){
_start:
{
lean_object* v___x_2336_; 
v___x_2336_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(v_fn_2329_, v_maxArgs_x3f_2330_, v_a_2331_, v_a_2332_, v_a_2333_, v_a_2334_);
return v___x_2336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfo___boxed(lean_object* v_fn_2337_, lean_object* v_maxArgs_x3f_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_){
_start:
{
lean_object* v_res_2344_; 
v_res_2344_ = l_Lean_Meta_getFunInfo(v_fn_2337_, v_maxArgs_x3f_2338_, v_a_2339_, v_a_2340_, v_a_2341_, v_a_2342_);
lean_dec(v_a_2342_);
lean_dec_ref(v_a_2341_);
lean_dec(v_a_2340_);
lean_dec_ref(v_a_2339_);
return v_res_2344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object* v_fn_2345_, lean_object* v_nargs_2346_, lean_object* v_a_2347_, lean_object* v_a_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_){
_start:
{
lean_object* v___x_2352_; lean_object* v___x_2353_; 
v___x_2352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2352_, 0, v_nargs_2346_);
v___x_2353_ = l___private_Lean_Meta_FunInfo_0__Lean_Meta_getFunInfoAux(v_fn_2345_, v___x_2352_, v_a_2347_, v_a_2348_, v_a_2349_, v_a_2350_);
return v___x_2353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getFunInfoNArgs___boxed(lean_object* v_fn_2354_, lean_object* v_nargs_2355_, lean_object* v_a_2356_, lean_object* v_a_2357_, lean_object* v_a_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_){
_start:
{
lean_object* v_res_2361_; 
v_res_2361_ = l_Lean_Meta_getFunInfoNArgs(v_fn_2354_, v_nargs_2355_, v_a_2356_, v_a_2357_, v_a_2358_, v_a_2359_);
lean_dec(v_a_2359_);
lean_dec_ref(v_a_2358_);
lean_dec(v_a_2357_);
lean_dec_ref(v_a_2356_);
return v_res_2361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInfo_getArity(lean_object* v_info_2362_){
_start:
{
lean_object* v_paramInfo_2363_; lean_object* v___x_2364_; 
v_paramInfo_2363_ = lean_ctor_get(v_info_2362_, 0);
v___x_2364_ = lean_array_get_size(v_paramInfo_2363_);
return v___x_2364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_FunInfo_getArity___boxed(lean_object* v_info_2365_){
_start:
{
lean_object* v_res_2366_; 
v_res_2366_ = l_Lean_Meta_FunInfo_getArity(v_info_2365_);
lean_dec_ref(v_info_2365_);
return v_res_2366_;
}
}
lean_object* runtime_initialize_Lean_Meta_InferType(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_FunInfo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_ = _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_();
lean_mark_persistent(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instImpl_00___x40_Lean_Meta_FunInfo_117766202____hygCtx___hyg_65_);
l___private_Lean_Meta_FunInfo_0__Lean_Meta_instTypeNameFunInfoEnvCacheKey = _init_l___private_Lean_Meta_FunInfo_0__Lean_Meta_instTypeNameFunInfoEnvCacheKey();
lean_mark_persistent(l___private_Lean_Meta_FunInfo_0__Lean_Meta_instTypeNameFunInfoEnvCacheKey);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_FunInfo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_InferType(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_FunInfo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_FunInfo(builtin);
}
#ifdef __cplusplus
}
#endif

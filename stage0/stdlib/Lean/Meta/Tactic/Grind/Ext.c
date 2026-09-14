// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Ext
// Imports: public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Tactic.Grind.SynthInstance
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
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getMaxGeneration___redArg(lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addNewRawFact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_Sym_synthInstanceAndAssign___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getFalseExpr___redArg(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__12_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__12___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "failed to synthesize instance when instantiating extensionality theorem `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__2;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "` for "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___boxed(lean_object**);
static const lean_string_object l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "failed to apply extensionality theorem `"};
static const lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__3;
static const lean_string_object l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "\nis not definitionally equal to"};
static const lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__5;
static const lean_string_object l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "\nresulting terms contain metavariables"};
static const lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__7;
static const lean_string_object l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__8_value;
static const lean_string_object l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ext"};
static const lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__10_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(189, 159, 161, 247, 89, 7, 26, 174)}};
static const lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__10_value;
static const lean_string_object l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__13;
static const lean_string_object l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__14_value;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__15;
static const lean_string_object l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__16_value;
static const lean_ctor_object l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__17_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(183, 66, 254, 161, 210, 133, 94, 78)}};
static const lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__17 = (const lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__17_value;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__18;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__19;
static lean_once_cell_t l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__20;
static const lean_array_object l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__21 = (const lean_object*)&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__21_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__12_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3___redArg(lean_object* v_e_1_, lean_object* v___y_2_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = l_Lean_Expr_hasMVar(v_e_1_);
if (v___x_4_ == 0)
{
lean_object* v___x_5_; 
v___x_5_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5_, 0, v_e_1_);
return v___x_5_;
}
else
{
lean_object* v___x_6_; lean_object* v_mctx_7_; lean_object* v___x_8_; lean_object* v_fst_9_; lean_object* v_snd_10_; lean_object* v___x_11_; lean_object* v_cache_12_; lean_object* v_zetaDeltaFVarIds_13_; lean_object* v_postponed_14_; lean_object* v_diag_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_24_; 
v___x_6_ = lean_st_ref_get(v___y_2_);
v_mctx_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc_ref(v_mctx_7_);
lean_dec(v___x_6_);
v___x_8_ = l_Lean_instantiateMVarsCore(v_mctx_7_, v_e_1_);
v_fst_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc(v_fst_9_);
v_snd_10_ = lean_ctor_get(v___x_8_, 1);
lean_inc(v_snd_10_);
lean_dec_ref(v___x_8_);
v___x_11_ = lean_st_ref_take(v___y_2_);
v_cache_12_ = lean_ctor_get(v___x_11_, 1);
v_zetaDeltaFVarIds_13_ = lean_ctor_get(v___x_11_, 2);
v_postponed_14_ = lean_ctor_get(v___x_11_, 3);
v_diag_15_ = lean_ctor_get(v___x_11_, 4);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_24_ == 0)
{
lean_object* v_unused_25_; 
v_unused_25_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_25_);
v___x_17_ = v___x_11_;
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_diag_15_);
lean_inc(v_postponed_14_);
lean_inc(v_zetaDeltaFVarIds_13_);
lean_inc(v_cache_12_);
lean_dec(v___x_11_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_20_; 
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 0, v_snd_10_);
v___x_20_ = v___x_17_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_snd_10_);
lean_ctor_set(v_reuseFailAlloc_23_, 1, v_cache_12_);
lean_ctor_set(v_reuseFailAlloc_23_, 2, v_zetaDeltaFVarIds_13_);
lean_ctor_set(v_reuseFailAlloc_23_, 3, v_postponed_14_);
lean_ctor_set(v_reuseFailAlloc_23_, 4, v_diag_15_);
v___x_20_ = v_reuseFailAlloc_23_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_st_ref_put(v___y_2_, v___x_20_);
v___x_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_22_, 0, v_fst_9_);
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3___redArg___boxed(lean_object* v_e_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3___redArg(v_e_26_, v___y_27_);
lean_dec(v___y_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3(lean_object* v_e_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3___redArg(v_e_30_, v___y_38_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3___boxed(lean_object* v_e_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3(v_e_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
lean_dec(v___y_49_);
lean_dec_ref(v___y_48_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec(v___y_45_);
lean_dec(v___y_44_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg___lam__0(lean_object* v_k_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v___x_68_; 
lean_inc(v___y_62_);
lean_inc_ref(v___y_61_);
lean_inc(v___y_60_);
lean_inc_ref(v___y_59_);
lean_inc(v___y_58_);
lean_inc(v___y_57_);
v___x_68_ = lean_apply_11(v_k_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_, lean_box(0));
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg___lam__0___boxed(lean_object* v_k_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg___lam__0(v_k_69_, v___y_70_, v___y_71_, v___y_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_);
lean_dec(v___y_75_);
lean_dec_ref(v___y_74_);
lean_dec(v___y_73_);
lean_dec_ref(v___y_72_);
lean_dec(v___y_71_);
lean_dec(v___y_70_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg(lean_object* v_k_82_, uint8_t v_allowLevelAssignments_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_){
_start:
{
lean_object* v___f_95_; lean_object* v___x_96_; 
lean_inc(v___y_89_);
lean_inc_ref(v___y_88_);
lean_inc(v___y_87_);
lean_inc_ref(v___y_86_);
lean_inc(v___y_85_);
lean_inc(v___y_84_);
v___f_95_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg___lam__0___boxed), 12, 7);
lean_closure_set(v___f_95_, 0, v_k_82_);
lean_closure_set(v___f_95_, 1, v___y_84_);
lean_closure_set(v___f_95_, 2, v___y_85_);
lean_closure_set(v___f_95_, 3, v___y_86_);
lean_closure_set(v___f_95_, 4, v___y_87_);
lean_closure_set(v___f_95_, 5, v___y_88_);
lean_closure_set(v___f_95_, 6, v___y_89_);
v___x_96_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_83_, v___f_95_, v___y_90_, v___y_91_, v___y_92_, v___y_93_);
if (lean_obj_tag(v___x_96_) == 0)
{
return v___x_96_;
}
else
{
lean_object* v_a_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_104_; 
v_a_97_ = lean_ctor_get(v___x_96_, 0);
v_isSharedCheck_104_ = !lean_is_exclusive(v___x_96_);
if (v_isSharedCheck_104_ == 0)
{
v___x_99_ = v___x_96_;
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_a_97_);
lean_dec(v___x_96_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___x_102_; 
if (v_isShared_100_ == 0)
{
v___x_102_ = v___x_99_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v_a_97_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
return v___x_102_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg___boxed(lean_object* v_k_105_, lean_object* v_allowLevelAssignments_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_118_; lean_object* v_res_119_; 
v_allowLevelAssignments_boxed_118_ = lean_unbox(v_allowLevelAssignments_106_);
v_res_119_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg(v_k_105_, v_allowLevelAssignments_boxed_118_, v___y_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_);
lean_dec(v___y_116_);
lean_dec_ref(v___y_115_);
lean_dec(v___y_114_);
lean_dec_ref(v___y_113_);
lean_dec(v___y_112_);
lean_dec_ref(v___y_111_);
lean_dec(v___y_110_);
lean_dec_ref(v___y_109_);
lean_dec(v___y_108_);
lean_dec(v___y_107_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6(lean_object* v_00_u03b1_120_, lean_object* v_k_121_, uint8_t v_allowLevelAssignments_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg(v_k_121_, v_allowLevelAssignments_122_, v___y_123_, v___y_124_, v___y_125_, v___y_126_, v___y_127_, v___y_128_, v___y_129_, v___y_130_, v___y_131_, v___y_132_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___boxed(lean_object* v_00_u03b1_135_, lean_object* v_k_136_, lean_object* v_allowLevelAssignments_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_149_; lean_object* v_res_150_; 
v_allowLevelAssignments_boxed_149_ = lean_unbox(v_allowLevelAssignments_137_);
v_res_150_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6(v_00_u03b1_135_, v_k_136_, v_allowLevelAssignments_boxed_149_, v___y_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_);
lean_dec(v___y_147_);
lean_dec_ref(v___y_146_);
lean_dec(v___y_145_);
lean_dec_ref(v___y_144_);
lean_dec(v___y_143_);
lean_dec_ref(v___y_142_);
lean_dec(v___y_141_);
lean_dec_ref(v___y_140_);
lean_dec(v___y_139_);
lean_dec(v___y_138_);
return v_res_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__12_spec__13___redArg(lean_object* v_x_151_, lean_object* v_x_152_, lean_object* v_x_153_, lean_object* v_x_154_){
_start:
{
lean_object* v_ks_155_; lean_object* v_vs_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_180_; 
v_ks_155_ = lean_ctor_get(v_x_151_, 0);
v_vs_156_ = lean_ctor_get(v_x_151_, 1);
v_isSharedCheck_180_ = !lean_is_exclusive(v_x_151_);
if (v_isSharedCheck_180_ == 0)
{
v___x_158_ = v_x_151_;
v_isShared_159_ = v_isSharedCheck_180_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_vs_156_);
lean_inc(v_ks_155_);
lean_dec(v_x_151_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_180_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_160_; uint8_t v___x_161_; 
v___x_160_ = lean_array_get_size(v_ks_155_);
v___x_161_ = lean_nat_dec_lt(v_x_152_, v___x_160_);
if (v___x_161_ == 0)
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_165_; 
lean_dec(v_x_152_);
v___x_162_ = lean_array_push(v_ks_155_, v_x_153_);
v___x_163_ = lean_array_push(v_vs_156_, v_x_154_);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 1, v___x_163_);
lean_ctor_set(v___x_158_, 0, v___x_162_);
v___x_165_ = v___x_158_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v___x_162_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v___x_163_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
else
{
lean_object* v_k_x27_167_; uint8_t v___x_168_; 
v_k_x27_167_ = lean_array_fget_borrowed(v_ks_155_, v_x_152_);
v___x_168_ = l_Lean_instBEqMVarId_beq(v_x_153_, v_k_x27_167_);
if (v___x_168_ == 0)
{
lean_object* v___x_170_; 
if (v_isShared_159_ == 0)
{
v___x_170_ = v___x_158_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_ks_155_);
lean_ctor_set(v_reuseFailAlloc_174_, 1, v_vs_156_);
v___x_170_ = v_reuseFailAlloc_174_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = lean_unsigned_to_nat(1u);
v___x_172_ = lean_nat_add(v_x_152_, v___x_171_);
lean_dec(v_x_152_);
v_x_151_ = v___x_170_;
v_x_152_ = v___x_172_;
goto _start;
}
}
else
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_178_; 
v___x_175_ = lean_array_fset(v_ks_155_, v_x_152_, v_x_153_);
v___x_176_ = lean_array_fset(v_vs_156_, v_x_152_, v_x_154_);
lean_dec(v_x_152_);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 1, v___x_176_);
lean_ctor_set(v___x_158_, 0, v___x_175_);
v___x_178_ = v___x_158_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v___x_175_);
lean_ctor_set(v_reuseFailAlloc_179_, 1, v___x_176_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__12___redArg(lean_object* v_n_181_, lean_object* v_k_182_, lean_object* v_v_183_){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_184_ = lean_unsigned_to_nat(0u);
v___x_185_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__12_spec__13___redArg(v_n_181_, v___x_184_, v_k_182_, v_v_183_);
return v___x_185_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = lean_box(0);
v___x_187_ = l_unsafeCast___redArg(v___x_186_);
return v___x_187_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_188_; 
v___x_188_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg(lean_object* v_x_189_, size_t v_x_190_, size_t v_x_191_, lean_object* v_x_192_, lean_object* v_x_193_){
_start:
{
if (lean_obj_tag(v_x_189_) == 0)
{
lean_object* v_es_194_; size_t v___x_195_; size_t v___x_196_; lean_object* v_j_197_; lean_object* v___x_198_; uint8_t v___x_199_; 
v_es_194_ = lean_ctor_get(v_x_189_, 0);
v___x_195_ = ((size_t)31ULL);
v___x_196_ = lean_usize_land(v_x_190_, v___x_195_);
v_j_197_ = lean_usize_to_nat(v___x_196_);
v___x_198_ = lean_array_get_size(v_es_194_);
v___x_199_ = lean_nat_dec_lt(v_j_197_, v___x_198_);
if (v___x_199_ == 0)
{
lean_dec(v_j_197_);
lean_dec(v_x_193_);
lean_dec(v_x_192_);
return v_x_189_;
}
else
{
lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_238_; 
lean_inc_ref(v_es_194_);
v_isSharedCheck_238_ = !lean_is_exclusive(v_x_189_);
if (v_isSharedCheck_238_ == 0)
{
lean_object* v_unused_239_; 
v_unused_239_ = lean_ctor_get(v_x_189_, 0);
lean_dec(v_unused_239_);
v___x_201_ = v_x_189_;
v_isShared_202_ = v_isSharedCheck_238_;
goto v_resetjp_200_;
}
else
{
lean_dec(v_x_189_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_238_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v_v_203_; lean_object* v___x_204_; lean_object* v_xs_x27_205_; lean_object* v___y_207_; 
v_v_203_ = lean_array_fget(v_es_194_, v_j_197_);
v___x_204_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg___closed__0);
v_xs_x27_205_ = lean_array_fset(v_es_194_, v_j_197_, v___x_204_);
switch(lean_obj_tag(v_v_203_))
{
case 0:
{
lean_object* v_key_212_; lean_object* v_val_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_223_; 
v_key_212_ = lean_ctor_get(v_v_203_, 0);
v_val_213_ = lean_ctor_get(v_v_203_, 1);
v_isSharedCheck_223_ = !lean_is_exclusive(v_v_203_);
if (v_isSharedCheck_223_ == 0)
{
v___x_215_ = v_v_203_;
v_isShared_216_ = v_isSharedCheck_223_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_val_213_);
lean_inc(v_key_212_);
lean_dec(v_v_203_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_223_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
uint8_t v___x_217_; 
v___x_217_ = l_Lean_instBEqMVarId_beq(v_x_192_, v_key_212_);
if (v___x_217_ == 0)
{
lean_object* v___x_218_; lean_object* v___x_219_; 
lean_del_object(v___x_215_);
v___x_218_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_212_, v_val_213_, v_x_192_, v_x_193_);
v___x_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
v___y_207_ = v___x_219_;
goto v___jp_206_;
}
else
{
lean_object* v___x_221_; 
lean_dec(v_val_213_);
lean_dec(v_key_212_);
if (v_isShared_216_ == 0)
{
lean_ctor_set(v___x_215_, 1, v_x_193_);
lean_ctor_set(v___x_215_, 0, v_x_192_);
v___x_221_ = v___x_215_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v_x_192_);
lean_ctor_set(v_reuseFailAlloc_222_, 1, v_x_193_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
v___y_207_ = v___x_221_;
goto v___jp_206_;
}
}
}
}
case 1:
{
lean_object* v_node_224_; lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_236_; 
v_node_224_ = lean_ctor_get(v_v_203_, 0);
v_isSharedCheck_236_ = !lean_is_exclusive(v_v_203_);
if (v_isSharedCheck_236_ == 0)
{
v___x_226_ = v_v_203_;
v_isShared_227_ = v_isSharedCheck_236_;
goto v_resetjp_225_;
}
else
{
lean_inc(v_node_224_);
lean_dec(v_v_203_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_236_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
size_t v___x_228_; size_t v___x_229_; size_t v___x_230_; size_t v___x_231_; lean_object* v___x_232_; lean_object* v___x_234_; 
v___x_228_ = ((size_t)5ULL);
v___x_229_ = lean_usize_shift_right(v_x_190_, v___x_228_);
v___x_230_ = ((size_t)1ULL);
v___x_231_ = lean_usize_add(v_x_191_, v___x_230_);
v___x_232_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg(v_node_224_, v___x_229_, v___x_231_, v_x_192_, v_x_193_);
if (v_isShared_227_ == 0)
{
lean_ctor_set(v___x_226_, 0, v___x_232_);
v___x_234_ = v___x_226_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_232_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
v___y_207_ = v___x_234_;
goto v___jp_206_;
}
}
}
default: 
{
lean_object* v___x_237_; 
v___x_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_237_, 0, v_x_192_);
lean_ctor_set(v___x_237_, 1, v_x_193_);
v___y_207_ = v___x_237_;
goto v___jp_206_;
}
}
v___jp_206_:
{
lean_object* v___x_208_; lean_object* v___x_210_; 
v___x_208_ = lean_array_fset(v_xs_x27_205_, v_j_197_, v___y_207_);
lean_dec(v_j_197_);
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 0, v___x_208_);
v___x_210_ = v___x_201_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v___x_208_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
}
}
else
{
lean_object* v_ks_240_; lean_object* v_vs_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_259_; 
v_ks_240_ = lean_ctor_get(v_x_189_, 0);
v_vs_241_ = lean_ctor_get(v_x_189_, 1);
v_isSharedCheck_259_ = !lean_is_exclusive(v_x_189_);
if (v_isSharedCheck_259_ == 0)
{
v___x_243_ = v_x_189_;
v_isShared_244_ = v_isSharedCheck_259_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_vs_241_);
lean_inc(v_ks_240_);
lean_dec(v_x_189_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_259_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v___x_246_; 
if (v_isShared_244_ == 0)
{
v___x_246_ = v___x_243_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v_ks_240_);
lean_ctor_set(v_reuseFailAlloc_258_, 1, v_vs_241_);
v___x_246_ = v_reuseFailAlloc_258_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
lean_object* v_newNode_247_; size_t v___x_248_; uint8_t v___x_249_; 
v_newNode_247_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__12___redArg(v___x_246_, v_x_192_, v_x_193_);
v___x_248_ = ((size_t)7ULL);
v___x_249_ = lean_usize_dec_le(v___x_248_, v_x_191_);
if (v___x_249_ == 0)
{
lean_object* v___x_250_; lean_object* v___x_251_; uint8_t v___x_252_; 
v___x_250_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_247_);
v___x_251_ = lean_unsigned_to_nat(4u);
v___x_252_ = lean_nat_dec_lt(v___x_250_, v___x_251_);
lean_dec(v___x_250_);
if (v___x_252_ == 0)
{
lean_object* v_ks_253_; lean_object* v_vs_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v_ks_253_ = lean_ctor_get(v_newNode_247_, 0);
lean_inc_ref(v_ks_253_);
v_vs_254_ = lean_ctor_get(v_newNode_247_, 1);
lean_inc_ref(v_vs_254_);
lean_dec_ref(v_newNode_247_);
v___x_255_ = lean_unsigned_to_nat(0u);
v___x_256_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg___closed__1);
v___x_257_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13___redArg(v_x_191_, v_ks_253_, v_vs_254_, v___x_255_, v___x_256_);
lean_dec_ref(v_vs_254_);
lean_dec_ref(v_ks_253_);
return v___x_257_;
}
else
{
return v_newNode_247_;
}
}
else
{
return v_newNode_247_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13___redArg(size_t v_depth_260_, lean_object* v_keys_261_, lean_object* v_vals_262_, lean_object* v_i_263_, lean_object* v_entries_264_){
_start:
{
lean_object* v___x_265_; uint8_t v___x_266_; 
v___x_265_ = lean_array_get_size(v_keys_261_);
v___x_266_ = lean_nat_dec_lt(v_i_263_, v___x_265_);
if (v___x_266_ == 0)
{
lean_dec(v_i_263_);
return v_entries_264_;
}
else
{
lean_object* v_k_267_; lean_object* v_v_268_; uint64_t v___x_269_; size_t v_h_270_; size_t v___x_271_; lean_object* v___x_272_; size_t v___x_273_; size_t v___x_274_; size_t v___x_275_; size_t v_h_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v_k_267_ = lean_array_fget_borrowed(v_keys_261_, v_i_263_);
v_v_268_ = lean_array_fget_borrowed(v_vals_262_, v_i_263_);
v___x_269_ = l_Lean_instHashableMVarId_hash(v_k_267_);
v_h_270_ = lean_uint64_to_usize(v___x_269_);
v___x_271_ = ((size_t)5ULL);
v___x_272_ = lean_unsigned_to_nat(1u);
v___x_273_ = ((size_t)1ULL);
v___x_274_ = lean_usize_sub(v_depth_260_, v___x_273_);
v___x_275_ = lean_usize_mul(v___x_271_, v___x_274_);
v_h_276_ = lean_usize_shift_right(v_h_270_, v___x_275_);
v___x_277_ = lean_nat_add(v_i_263_, v___x_272_);
lean_dec(v_i_263_);
lean_inc(v_v_268_);
lean_inc(v_k_267_);
v___x_278_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg(v_entries_264_, v_h_276_, v_depth_260_, v_k_267_, v_v_268_);
v_i_263_ = v___x_277_;
v_entries_264_ = v___x_278_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13___redArg___boxed(lean_object* v_depth_280_, lean_object* v_keys_281_, lean_object* v_vals_282_, lean_object* v_i_283_, lean_object* v_entries_284_){
_start:
{
size_t v_depth_boxed_285_; lean_object* v_res_286_; 
v_depth_boxed_285_ = lean_unbox_usize(v_depth_280_);
lean_dec(v_depth_280_);
v_res_286_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13___redArg(v_depth_boxed_285_, v_keys_281_, v_vals_282_, v_i_283_, v_entries_284_);
lean_dec_ref(v_vals_282_);
lean_dec_ref(v_keys_281_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg___boxed(lean_object* v_x_287_, lean_object* v_x_288_, lean_object* v_x_289_, lean_object* v_x_290_, lean_object* v_x_291_){
_start:
{
size_t v_x_144798__boxed_292_; size_t v_x_144799__boxed_293_; lean_object* v_res_294_; 
v_x_144798__boxed_292_ = lean_unbox_usize(v_x_288_);
lean_dec(v_x_288_);
v_x_144799__boxed_293_ = lean_unbox_usize(v_x_289_);
lean_dec(v_x_289_);
v_res_294_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg(v_x_287_, v_x_144798__boxed_292_, v_x_144799__boxed_293_, v_x_290_, v_x_291_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2___redArg(lean_object* v_x_295_, lean_object* v_x_296_, lean_object* v_x_297_){
_start:
{
uint64_t v___x_298_; size_t v___x_299_; size_t v___x_300_; lean_object* v___x_301_; 
v___x_298_ = l_Lean_instHashableMVarId_hash(v_x_296_);
v___x_299_ = lean_uint64_to_usize(v___x_298_);
v___x_300_ = ((size_t)1ULL);
v___x_301_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg(v_x_295_, v___x_299_, v___x_300_, v_x_296_, v_x_297_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1___redArg(lean_object* v_mvarId_302_, lean_object* v_val_303_, lean_object* v___y_304_){
_start:
{
lean_object* v___x_306_; lean_object* v_mctx_307_; lean_object* v_cache_308_; lean_object* v_zetaDeltaFVarIds_309_; lean_object* v_postponed_310_; lean_object* v_diag_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_340_; 
v___x_306_ = lean_st_ref_take(v___y_304_);
v_mctx_307_ = lean_ctor_get(v___x_306_, 0);
v_cache_308_ = lean_ctor_get(v___x_306_, 1);
v_zetaDeltaFVarIds_309_ = lean_ctor_get(v___x_306_, 2);
v_postponed_310_ = lean_ctor_get(v___x_306_, 3);
v_diag_311_ = lean_ctor_get(v___x_306_, 4);
v_isSharedCheck_340_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_340_ == 0)
{
v___x_313_ = v___x_306_;
v_isShared_314_ = v_isSharedCheck_340_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_diag_311_);
lean_inc(v_postponed_310_);
lean_inc(v_zetaDeltaFVarIds_309_);
lean_inc(v_cache_308_);
lean_inc(v_mctx_307_);
lean_dec(v___x_306_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_340_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v_depth_315_; lean_object* v_levelAssignDepth_316_; lean_object* v_lmvarCounter_317_; lean_object* v_mvarCounter_318_; lean_object* v_lDecls_319_; lean_object* v_decls_320_; lean_object* v_userNames_321_; lean_object* v_lAssignment_322_; lean_object* v_eAssignment_323_; lean_object* v_dAssignment_324_; lean_object* v_instanceTypedMVars_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_339_; 
v_depth_315_ = lean_ctor_get(v_mctx_307_, 0);
v_levelAssignDepth_316_ = lean_ctor_get(v_mctx_307_, 1);
v_lmvarCounter_317_ = lean_ctor_get(v_mctx_307_, 2);
v_mvarCounter_318_ = lean_ctor_get(v_mctx_307_, 3);
v_lDecls_319_ = lean_ctor_get(v_mctx_307_, 4);
v_decls_320_ = lean_ctor_get(v_mctx_307_, 5);
v_userNames_321_ = lean_ctor_get(v_mctx_307_, 6);
v_lAssignment_322_ = lean_ctor_get(v_mctx_307_, 7);
v_eAssignment_323_ = lean_ctor_get(v_mctx_307_, 8);
v_dAssignment_324_ = lean_ctor_get(v_mctx_307_, 9);
v_instanceTypedMVars_325_ = lean_ctor_get(v_mctx_307_, 10);
v_isSharedCheck_339_ = !lean_is_exclusive(v_mctx_307_);
if (v_isSharedCheck_339_ == 0)
{
v___x_327_ = v_mctx_307_;
v_isShared_328_ = v_isSharedCheck_339_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_instanceTypedMVars_325_);
lean_inc(v_dAssignment_324_);
lean_inc(v_eAssignment_323_);
lean_inc(v_lAssignment_322_);
lean_inc(v_userNames_321_);
lean_inc(v_decls_320_);
lean_inc(v_lDecls_319_);
lean_inc(v_mvarCounter_318_);
lean_inc(v_lmvarCounter_317_);
lean_inc(v_levelAssignDepth_316_);
lean_inc(v_depth_315_);
lean_dec(v_mctx_307_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_339_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_332_; 
v___x_329_ = lean_box(0);
v___x_330_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2___redArg(v_eAssignment_323_, v_mvarId_302_, v_val_303_);
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 8, v___x_330_);
v___x_332_ = v___x_327_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v_depth_315_);
lean_ctor_set(v_reuseFailAlloc_338_, 1, v_levelAssignDepth_316_);
lean_ctor_set(v_reuseFailAlloc_338_, 2, v_lmvarCounter_317_);
lean_ctor_set(v_reuseFailAlloc_338_, 3, v_mvarCounter_318_);
lean_ctor_set(v_reuseFailAlloc_338_, 4, v_lDecls_319_);
lean_ctor_set(v_reuseFailAlloc_338_, 5, v_decls_320_);
lean_ctor_set(v_reuseFailAlloc_338_, 6, v_userNames_321_);
lean_ctor_set(v_reuseFailAlloc_338_, 7, v_lAssignment_322_);
lean_ctor_set(v_reuseFailAlloc_338_, 8, v___x_330_);
lean_ctor_set(v_reuseFailAlloc_338_, 9, v_dAssignment_324_);
lean_ctor_set(v_reuseFailAlloc_338_, 10, v_instanceTypedMVars_325_);
v___x_332_ = v_reuseFailAlloc_338_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
lean_object* v___x_334_; 
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 0, v___x_332_);
v___x_334_ = v___x_313_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v___x_332_);
lean_ctor_set(v_reuseFailAlloc_337_, 1, v_cache_308_);
lean_ctor_set(v_reuseFailAlloc_337_, 2, v_zetaDeltaFVarIds_309_);
lean_ctor_set(v_reuseFailAlloc_337_, 3, v_postponed_310_);
lean_ctor_set(v_reuseFailAlloc_337_, 4, v_diag_311_);
v___x_334_ = v_reuseFailAlloc_337_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = lean_st_ref_put(v___y_304_, v___x_334_);
v___x_336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_336_, 0, v___x_329_);
return v___x_336_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1___redArg___boxed(lean_object* v_mvarId_341_, lean_object* v_val_342_, lean_object* v___y_343_, lean_object* v___y_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1___redArg(v_mvarId_341_, v_val_342_, v___y_343_);
lean_dec(v___y_343_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__0(uint8_t v___x_346_, lean_object* v_p_347_, lean_object* v_e_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_){
_start:
{
uint8_t v___x_360_; 
v___x_360_ = l_Lean_Expr_isMVar(v_p_347_);
if (v___x_360_ == 0)
{
lean_object* v___x_361_; 
v___x_361_ = l_Lean_Meta_isExprDefEq(v_p_347_, v_e_348_, v___y_355_, v___y_356_, v___y_357_, v___y_358_);
return v___x_361_;
}
else
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_371_; 
v___x_362_ = l_Lean_Expr_mvarId_x21(v_p_347_);
lean_dec_ref(v_p_347_);
v___x_363_ = l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1___redArg(v___x_362_, v_e_348_, v___y_356_);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_371_ == 0)
{
lean_object* v_unused_372_; 
v_unused_372_ = lean_ctor_get(v___x_363_, 0);
lean_dec(v_unused_372_);
v___x_365_ = v___x_363_;
v_isShared_366_ = v_isSharedCheck_371_;
goto v_resetjp_364_;
}
else
{
lean_dec(v___x_363_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_371_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v___x_367_; lean_object* v___x_369_; 
v___x_367_ = lean_box(v___x_346_);
if (v_isShared_366_ == 0)
{
lean_ctor_set(v___x_365_, 0, v___x_367_);
v___x_369_ = v___x_365_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v___x_367_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__0___boxed(lean_object* v___x_373_, lean_object* v_p_374_, lean_object* v_e_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_){
_start:
{
uint8_t v___x_145009__boxed_387_; lean_object* v_res_388_; 
v___x_145009__boxed_387_ = lean_unbox(v___x_373_);
v_res_388_ = l_Lean_Meta_Grind_instantiateExtTheorem___lam__0(v___x_145009__boxed_387_, v_p_374_, v_e_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_);
lean_dec(v___y_385_);
lean_dec_ref(v___y_384_);
lean_dec(v___y_383_);
lean_dec_ref(v___y_382_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec(v___y_376_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4_spec__6(lean_object* v_msgData_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_){
_start:
{
lean_object* v___x_395_; lean_object* v_env_396_; lean_object* v___x_397_; lean_object* v_toCold_398_; lean_object* v_mctx_399_; lean_object* v_lctx_400_; lean_object* v_options_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_395_ = lean_st_ref_get(v___y_393_);
v_env_396_ = lean_ctor_get(v___x_395_, 0);
lean_inc_ref(v_env_396_);
lean_dec(v___x_395_);
v___x_397_ = lean_st_ref_get(v___y_391_);
v_toCold_398_ = lean_ctor_get(v___y_392_, 0);
v_mctx_399_ = lean_ctor_get(v___x_397_, 0);
lean_inc_ref(v_mctx_399_);
lean_dec(v___x_397_);
v_lctx_400_ = lean_ctor_get(v___y_390_, 2);
v_options_401_ = lean_ctor_get(v_toCold_398_, 2);
lean_inc_ref(v_options_401_);
lean_inc_ref(v_lctx_400_);
v___x_402_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_402_, 0, v_env_396_);
lean_ctor_set(v___x_402_, 1, v_mctx_399_);
lean_ctor_set(v___x_402_, 2, v_lctx_400_);
lean_ctor_set(v___x_402_, 3, v_options_401_);
v___x_403_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_403_, 0, v___x_402_);
lean_ctor_set(v___x_403_, 1, v_msgData_389_);
v___x_404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_404_, 0, v___x_403_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4_spec__6___boxed(lean_object* v_msgData_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4_spec__6(v_msgData_405_, v___y_406_, v___y_407_, v___y_408_, v___y_409_);
lean_dec(v___y_409_);
lean_dec_ref(v___y_408_);
lean_dec(v___y_407_);
lean_dec_ref(v___y_406_);
return v_res_411_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_412_; double v___x_413_; 
v___x_412_ = lean_unsigned_to_nat(0u);
v___x_413_ = lean_float_of_nat(v___x_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg(lean_object* v_cls_417_, lean_object* v_msg_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_){
_start:
{
lean_object* v_ref_424_; lean_object* v___x_425_; lean_object* v_a_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_470_; 
v_ref_424_ = lean_ctor_get(v___y_421_, 2);
v___x_425_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4_spec__6(v_msg_418_, v___y_419_, v___y_420_, v___y_421_, v___y_422_);
v_a_426_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_470_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_470_ == 0)
{
v___x_428_ = v___x_425_;
v_isShared_429_ = v_isSharedCheck_470_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_a_426_);
lean_dec(v___x_425_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_470_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v___x_430_; lean_object* v_traceState_431_; lean_object* v_env_432_; lean_object* v_nextMacroScope_433_; lean_object* v_ngen_434_; lean_object* v_auxDeclNGen_435_; lean_object* v_cache_436_; lean_object* v_messages_437_; lean_object* v_infoState_438_; lean_object* v_snapshotTasks_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_469_; 
v___x_430_ = lean_st_ref_take(v___y_422_);
v_traceState_431_ = lean_ctor_get(v___x_430_, 4);
v_env_432_ = lean_ctor_get(v___x_430_, 0);
v_nextMacroScope_433_ = lean_ctor_get(v___x_430_, 1);
v_ngen_434_ = lean_ctor_get(v___x_430_, 2);
v_auxDeclNGen_435_ = lean_ctor_get(v___x_430_, 3);
v_cache_436_ = lean_ctor_get(v___x_430_, 5);
v_messages_437_ = lean_ctor_get(v___x_430_, 6);
v_infoState_438_ = lean_ctor_get(v___x_430_, 7);
v_snapshotTasks_439_ = lean_ctor_get(v___x_430_, 8);
v_isSharedCheck_469_ = !lean_is_exclusive(v___x_430_);
if (v_isSharedCheck_469_ == 0)
{
v___x_441_ = v___x_430_;
v_isShared_442_ = v_isSharedCheck_469_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_snapshotTasks_439_);
lean_inc(v_infoState_438_);
lean_inc(v_messages_437_);
lean_inc(v_cache_436_);
lean_inc(v_traceState_431_);
lean_inc(v_auxDeclNGen_435_);
lean_inc(v_ngen_434_);
lean_inc(v_nextMacroScope_433_);
lean_inc(v_env_432_);
lean_dec(v___x_430_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_469_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
uint64_t v_tid_443_; lean_object* v_traces_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_468_; 
v_tid_443_ = lean_ctor_get_uint64(v_traceState_431_, sizeof(void*)*1);
v_traces_444_ = lean_ctor_get(v_traceState_431_, 0);
v_isSharedCheck_468_ = !lean_is_exclusive(v_traceState_431_);
if (v_isSharedCheck_468_ == 0)
{
v___x_446_ = v_traceState_431_;
v_isShared_447_ = v_isSharedCheck_468_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_traces_444_);
lean_dec(v_traceState_431_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_468_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_448_; lean_object* v___x_449_; double v___x_450_; uint8_t v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_459_; 
v___x_448_ = lean_box(0);
v___x_449_ = lean_box(0);
v___x_450_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__0);
v___x_451_ = 0;
v___x_452_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__1));
v___x_453_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_453_, 0, v_cls_417_);
lean_ctor_set(v___x_453_, 1, v___x_449_);
lean_ctor_set(v___x_453_, 2, v___x_452_);
lean_ctor_set_float(v___x_453_, sizeof(void*)*3, v___x_450_);
lean_ctor_set_float(v___x_453_, sizeof(void*)*3 + 8, v___x_450_);
lean_ctor_set_uint8(v___x_453_, sizeof(void*)*3 + 16, v___x_451_);
v___x_454_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___closed__2));
v___x_455_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_455_, 0, v___x_453_);
lean_ctor_set(v___x_455_, 1, v_a_426_);
lean_ctor_set(v___x_455_, 2, v___x_454_);
lean_inc(v_ref_424_);
v___x_456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_456_, 0, v_ref_424_);
lean_ctor_set(v___x_456_, 1, v___x_455_);
v___x_457_ = l_Lean_PersistentArray_push___redArg(v_traces_444_, v___x_456_);
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 0, v___x_457_);
v___x_459_ = v___x_446_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v___x_457_);
lean_ctor_set_uint64(v_reuseFailAlloc_467_, sizeof(void*)*1, v_tid_443_);
v___x_459_ = v_reuseFailAlloc_467_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
lean_object* v___x_461_; 
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 4, v___x_459_);
v___x_461_ = v___x_441_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_env_432_);
lean_ctor_set(v_reuseFailAlloc_466_, 1, v_nextMacroScope_433_);
lean_ctor_set(v_reuseFailAlloc_466_, 2, v_ngen_434_);
lean_ctor_set(v_reuseFailAlloc_466_, 3, v_auxDeclNGen_435_);
lean_ctor_set(v_reuseFailAlloc_466_, 4, v___x_459_);
lean_ctor_set(v_reuseFailAlloc_466_, 5, v_cache_436_);
lean_ctor_set(v_reuseFailAlloc_466_, 6, v_messages_437_);
lean_ctor_set(v_reuseFailAlloc_466_, 7, v_infoState_438_);
lean_ctor_set(v_reuseFailAlloc_466_, 8, v_snapshotTasks_439_);
v___x_461_ = v_reuseFailAlloc_466_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
lean_object* v___x_462_; lean_object* v___x_464_; 
v___x_462_ = lean_st_ref_put(v___y_422_, v___x_461_);
if (v_isShared_429_ == 0)
{
lean_ctor_set(v___x_428_, 0, v___x_448_);
v___x_464_ = v___x_428_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v___x_448_);
v___x_464_ = v_reuseFailAlloc_465_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
return v___x_464_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg___boxed(lean_object* v_cls_471_, lean_object* v_msg_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg(v_cls_471_, v_msg_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_);
lean_dec(v___y_476_);
lean_dec_ref(v___y_475_);
lean_dec(v___y_474_);
lean_dec_ref(v___y_473_);
return v_res_478_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9___redArg(lean_object* v_keys_479_, lean_object* v_i_480_, lean_object* v_k_481_){
_start:
{
lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_482_ = lean_array_get_size(v_keys_479_);
v___x_483_ = lean_nat_dec_lt(v_i_480_, v___x_482_);
if (v___x_483_ == 0)
{
lean_dec(v_i_480_);
return v___x_483_;
}
else
{
lean_object* v_k_x27_484_; uint8_t v___x_485_; 
v_k_x27_484_ = lean_array_fget_borrowed(v_keys_479_, v_i_480_);
v___x_485_ = l_Lean_instBEqMVarId_beq(v_k_481_, v_k_x27_484_);
if (v___x_485_ == 0)
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = lean_unsigned_to_nat(1u);
v___x_487_ = lean_nat_add(v_i_480_, v___x_486_);
lean_dec(v_i_480_);
v_i_480_ = v___x_487_;
goto _start;
}
else
{
lean_dec(v_i_480_);
return v___x_483_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9___redArg___boxed(lean_object* v_keys_489_, lean_object* v_i_490_, lean_object* v_k_491_){
_start:
{
uint8_t v_res_492_; lean_object* v_r_493_; 
v_res_492_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9___redArg(v_keys_489_, v_i_490_, v_k_491_);
lean_dec(v_k_491_);
lean_dec_ref(v_keys_489_);
v_r_493_ = lean_box(v_res_492_);
return v_r_493_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg(lean_object* v_x_494_, size_t v_x_495_, lean_object* v_x_496_){
_start:
{
if (lean_obj_tag(v_x_494_) == 0)
{
lean_object* v_es_497_; lean_object* v___x_498_; size_t v___x_499_; size_t v___x_500_; lean_object* v_j_501_; lean_object* v___x_502_; 
v_es_497_ = lean_ctor_get(v_x_494_, 0);
v___x_498_ = lean_box(2);
v___x_499_ = ((size_t)31ULL);
v___x_500_ = lean_usize_land(v_x_495_, v___x_499_);
v_j_501_ = lean_usize_to_nat(v___x_500_);
v___x_502_ = lean_array_get_borrowed(v___x_498_, v_es_497_, v_j_501_);
lean_dec(v_j_501_);
switch(lean_obj_tag(v___x_502_))
{
case 0:
{
lean_object* v_key_503_; uint8_t v___x_504_; 
v_key_503_ = lean_ctor_get(v___x_502_, 0);
v___x_504_ = l_Lean_instBEqMVarId_beq(v_x_496_, v_key_503_);
return v___x_504_;
}
case 1:
{
lean_object* v_node_505_; size_t v___x_506_; size_t v___x_507_; 
v_node_505_ = lean_ctor_get(v___x_502_, 0);
v___x_506_ = ((size_t)5ULL);
v___x_507_ = lean_usize_shift_right(v_x_495_, v___x_506_);
v_x_494_ = v_node_505_;
v_x_495_ = v___x_507_;
goto _start;
}
default: 
{
uint8_t v___x_509_; 
v___x_509_ = 0;
return v___x_509_;
}
}
}
else
{
lean_object* v_ks_510_; lean_object* v___x_511_; uint8_t v___x_512_; 
v_ks_510_ = lean_ctor_get(v_x_494_, 0);
v___x_511_ = lean_unsigned_to_nat(0u);
v___x_512_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9___redArg(v_ks_510_, v___x_511_, v_x_496_);
return v___x_512_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_x_513_, lean_object* v_x_514_, lean_object* v_x_515_){
_start:
{
size_t v_x_145212__boxed_516_; uint8_t v_res_517_; lean_object* v_r_518_; 
v_x_145212__boxed_516_ = lean_unbox_usize(v_x_514_);
lean_dec(v_x_514_);
v_res_517_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg(v_x_513_, v_x_145212__boxed_516_, v_x_515_);
lean_dec(v_x_515_);
lean_dec_ref(v_x_513_);
v_r_518_ = lean_box(v_res_517_);
return v_r_518_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0___redArg(lean_object* v_x_519_, lean_object* v_x_520_){
_start:
{
uint64_t v___x_521_; size_t v___x_522_; uint8_t v___x_523_; 
v___x_521_ = l_Lean_instHashableMVarId_hash(v_x_520_);
v___x_522_ = lean_uint64_to_usize(v___x_521_);
v___x_523_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg(v_x_519_, v___x_522_, v_x_520_);
return v___x_523_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0___redArg___boxed(lean_object* v_x_524_, lean_object* v_x_525_){
_start:
{
uint8_t v_res_526_; lean_object* v_r_527_; 
v_res_526_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0___redArg(v_x_524_, v_x_525_);
lean_dec(v_x_525_);
lean_dec_ref(v_x_524_);
v_r_527_ = lean_box(v_res_526_);
return v_r_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0___redArg(lean_object* v_mvarId_528_, lean_object* v___y_529_){
_start:
{
lean_object* v___x_531_; lean_object* v_mctx_532_; lean_object* v_eAssignment_533_; uint8_t v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_531_ = lean_st_ref_get(v___y_529_);
v_mctx_532_ = lean_ctor_get(v___x_531_, 0);
lean_inc_ref(v_mctx_532_);
lean_dec(v___x_531_);
v_eAssignment_533_ = lean_ctor_get(v_mctx_532_, 8);
lean_inc_ref(v_eAssignment_533_);
lean_dec_ref(v_mctx_532_);
v___x_534_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0___redArg(v_eAssignment_533_, v_mvarId_528_);
lean_dec_ref(v_eAssignment_533_);
v___x_535_ = lean_box(v___x_534_);
v___x_536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_536_, 0, v___x_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0___redArg___boxed(lean_object* v_mvarId_537_, lean_object* v___y_538_, lean_object* v___y_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0___redArg(v_mvarId_537_, v___y_538_);
lean_dec(v___y_538_);
lean_dec(v_mvarId_537_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__5(lean_object* v_as_541_, size_t v_i_542_, size_t v_stop_543_, lean_object* v_b_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_){
_start:
{
lean_object* v_a_557_; uint8_t v___x_561_; 
v___x_561_ = lean_usize_dec_eq(v_i_542_, v_stop_543_);
if (v___x_561_ == 0)
{
lean_object* v___x_562_; lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_562_ = lean_array_uget_borrowed(v_as_541_, v_i_542_);
v___x_565_ = l_Lean_Expr_mvarId_x21(v___x_562_);
v___x_566_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0___redArg(v___x_565_, v___y_552_);
lean_dec(v___x_565_);
if (lean_obj_tag(v___x_566_) == 0)
{
lean_object* v_a_567_; uint8_t v___x_568_; 
v_a_567_ = lean_ctor_get(v___x_566_, 0);
lean_inc(v_a_567_);
lean_dec_ref_known(v___x_566_, 1);
v___x_568_ = lean_unbox(v_a_567_);
lean_dec(v_a_567_);
if (v___x_568_ == 0)
{
goto v___jp_563_;
}
else
{
v_a_557_ = v_b_544_;
goto v___jp_556_;
}
}
else
{
if (lean_obj_tag(v___x_566_) == 0)
{
lean_object* v_a_569_; uint8_t v___x_570_; 
v_a_569_ = lean_ctor_get(v___x_566_, 0);
lean_inc(v_a_569_);
lean_dec_ref_known(v___x_566_, 1);
v___x_570_ = lean_unbox(v_a_569_);
lean_dec(v_a_569_);
if (v___x_570_ == 0)
{
v_a_557_ = v_b_544_;
goto v___jp_556_;
}
else
{
goto v___jp_563_;
}
}
else
{
lean_object* v_a_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_578_; 
lean_dec_ref(v_b_544_);
v_a_571_ = lean_ctor_get(v___x_566_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_566_);
if (v_isSharedCheck_578_ == 0)
{
v___x_573_ = v___x_566_;
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_a_571_);
lean_dec(v___x_566_);
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
v___jp_563_:
{
lean_object* v___x_564_; 
lean_inc(v___x_562_);
v___x_564_ = lean_array_push(v_b_544_, v___x_562_);
v_a_557_ = v___x_564_;
goto v___jp_556_;
}
}
else
{
lean_object* v___x_579_; 
v___x_579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_579_, 0, v_b_544_);
return v___x_579_;
}
v___jp_556_:
{
size_t v___x_558_; size_t v___x_559_; 
v___x_558_ = ((size_t)1ULL);
v___x_559_ = lean_usize_add(v_i_542_, v___x_558_);
v_i_542_ = v___x_559_;
v_b_544_ = v_a_557_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__5___boxed(lean_object* v_as_580_, lean_object* v_i_581_, lean_object* v_stop_582_, lean_object* v_b_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_){
_start:
{
size_t v_i_boxed_595_; size_t v_stop_boxed_596_; lean_object* v_res_597_; 
v_i_boxed_595_ = lean_unbox_usize(v_i_581_);
lean_dec(v_i_581_);
v_stop_boxed_596_ = lean_unbox_usize(v_stop_582_);
lean_dec(v_stop_582_);
v_res_597_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__5(v_as_580_, v_i_boxed_595_, v_stop_boxed_596_, v_b_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
lean_dec(v___y_593_);
lean_dec_ref(v___y_592_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
lean_dec(v___y_589_);
lean_dec_ref(v___y_588_);
lean_dec(v___y_587_);
lean_dec_ref(v___y_586_);
lean_dec(v___y_585_);
lean_dec(v___y_584_);
lean_dec_ref(v_as_580_);
return v_res_597_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__2(void){
_start:
{
lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_601_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__1));
v___x_602_ = l_Lean_stringToMessageData(v___x_601_);
return v___x_602_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4(void){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_604_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__3));
v___x_605_ = l_Lean_stringToMessageData(v___x_604_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2(lean_object* v___x_606_, lean_object* v_e_607_, lean_object* v_as_608_, size_t v_sz_609_, size_t v_i_610_, lean_object* v_b_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_){
_start:
{
lean_object* v_a_624_; uint8_t v___x_628_; 
v___x_628_ = lean_usize_dec_lt(v_i_610_, v_sz_609_);
if (v___x_628_ == 0)
{
lean_object* v___x_629_; 
lean_dec_ref(v_e_607_);
lean_dec(v___x_606_);
v___x_629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_629_, 0, v_b_611_);
return v___x_629_;
}
else
{
lean_object* v_snd_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_729_; 
v_snd_630_ = lean_ctor_get(v_b_611_, 1);
v_isSharedCheck_729_ = !lean_is_exclusive(v_b_611_);
if (v_isSharedCheck_729_ == 0)
{
lean_object* v_unused_730_; 
v_unused_730_ = lean_ctor_get(v_b_611_, 0);
lean_dec(v_unused_730_);
v___x_632_ = v_b_611_;
v_isShared_633_ = v_isSharedCheck_729_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_snd_630_);
lean_dec(v_b_611_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_729_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v_array_634_; lean_object* v_start_635_; lean_object* v_stop_636_; lean_object* v___x_637_; uint8_t v___x_638_; 
v_array_634_ = lean_ctor_get(v_snd_630_, 0);
v_start_635_ = lean_ctor_get(v_snd_630_, 1);
v_stop_636_ = lean_ctor_get(v_snd_630_, 2);
v___x_637_ = lean_box(0);
v___x_638_ = lean_nat_dec_lt(v_start_635_, v_stop_636_);
if (v___x_638_ == 0)
{
lean_object* v___x_640_; 
lean_dec_ref(v_e_607_);
lean_dec(v___x_606_);
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 0, v___x_637_);
v___x_640_ = v___x_632_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v___x_637_);
lean_ctor_set(v_reuseFailAlloc_642_, 1, v_snd_630_);
v___x_640_ = v_reuseFailAlloc_642_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
lean_object* v___x_641_; 
v___x_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
return v___x_641_;
}
}
else
{
lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_725_; 
lean_inc(v_stop_636_);
lean_inc(v_start_635_);
lean_inc_ref(v_array_634_);
v_isSharedCheck_725_ = !lean_is_exclusive(v_snd_630_);
if (v_isSharedCheck_725_ == 0)
{
lean_object* v_unused_726_; lean_object* v_unused_727_; lean_object* v_unused_728_; 
v_unused_726_ = lean_ctor_get(v_snd_630_, 2);
lean_dec(v_unused_726_);
v_unused_727_ = lean_ctor_get(v_snd_630_, 1);
lean_dec(v_unused_727_);
v_unused_728_ = lean_ctor_get(v_snd_630_, 0);
lean_dec(v_unused_728_);
v___x_644_ = v_snd_630_;
v_isShared_645_ = v_isSharedCheck_725_;
goto v_resetjp_643_;
}
else
{
lean_dec(v_snd_630_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_725_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v_a_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_651_; 
v_a_646_ = lean_array_uget_borrowed(v_as_608_, v_i_610_);
v___x_647_ = lean_array_fget(v_array_634_, v_start_635_);
v___x_648_ = lean_unsigned_to_nat(1u);
v___x_649_ = lean_nat_add(v_start_635_, v___x_648_);
lean_dec(v_start_635_);
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 1, v___x_649_);
v___x_651_ = v___x_644_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_array_634_);
lean_ctor_set(v_reuseFailAlloc_724_, 1, v___x_649_);
lean_ctor_set(v_reuseFailAlloc_724_, 2, v_stop_636_);
v___x_651_ = v_reuseFailAlloc_724_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
lean_object* v___x_658_; lean_object* v___x_659_; 
v___x_658_ = l_Lean_Expr_mvarId_x21(v_a_646_);
v___x_659_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0___redArg(v___x_658_, v___y_619_);
lean_dec(v___x_658_);
if (lean_obj_tag(v___x_659_) == 0)
{
lean_object* v_a_660_; uint8_t v___x_713_; uint8_t v___x_714_; 
v_a_660_ = lean_ctor_get(v___x_659_, 0);
lean_inc(v_a_660_);
lean_dec_ref_known(v___x_659_, 1);
v___x_713_ = lean_unbox(v___x_647_);
lean_dec(v___x_647_);
v___x_714_ = l_Lean_BinderInfo_isInstImplicit(v___x_713_);
if (v___x_714_ == 0)
{
lean_dec(v_a_660_);
if (v___x_714_ == 0)
{
lean_del_object(v___x_632_);
goto v___jp_711_;
}
else
{
goto v___jp_661_;
}
}
else
{
uint8_t v___x_715_; 
v___x_715_ = lean_unbox(v_a_660_);
lean_dec(v_a_660_);
if (v___x_715_ == 0)
{
goto v___jp_661_;
}
else
{
lean_del_object(v___x_632_);
goto v___jp_711_;
}
}
v___jp_661_:
{
lean_object* v___x_662_; 
lean_inc(v___y_621_);
lean_inc_ref(v___y_620_);
lean_inc(v___y_619_);
lean_inc_ref(v___y_618_);
lean_inc(v_a_646_);
v___x_662_ = lean_infer_type(v_a_646_, v___y_618_, v___y_619_, v___y_620_, v___y_621_);
if (lean_obj_tag(v___x_662_) == 0)
{
lean_object* v_a_663_; lean_object* v___x_664_; 
v_a_663_ = lean_ctor_get(v___x_662_, 0);
lean_inc(v_a_663_);
lean_dec_ref_known(v___x_662_, 1);
lean_inc(v_a_646_);
v___x_664_ = l_Lean_Meta_Sym_synthInstanceAndAssign___redArg(v_a_646_, v_a_663_, v___y_617_, v___y_618_, v___y_619_, v___y_620_, v___y_621_);
if (lean_obj_tag(v___x_664_) == 0)
{
lean_object* v_a_665_; uint8_t v___x_666_; 
v_a_665_ = lean_ctor_get(v___x_664_, 0);
lean_inc(v_a_665_);
lean_dec_ref_known(v___x_664_, 1);
v___x_666_ = lean_unbox(v_a_665_);
lean_dec(v_a_665_);
if (v___x_666_ == 0)
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_667_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__2);
v___x_668_ = l_Lean_MessageData_ofName(v___x_606_);
v___x_669_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_669_, 0, v___x_667_);
lean_ctor_set(v___x_669_, 1, v___x_668_);
v___x_670_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4);
v___x_671_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_671_, 0, v___x_669_);
lean_ctor_set(v___x_671_, 1, v___x_670_);
v___x_672_ = l_Lean_indentExpr(v_e_607_);
v___x_673_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_671_);
lean_ctor_set(v___x_673_, 1, v___x_672_);
v___x_674_ = l_Lean_Meta_Sym_getConfig___redArg(v___y_616_);
if (lean_obj_tag(v___x_674_) == 0)
{
lean_object* v_a_675_; uint8_t v_verbose_676_; 
v_a_675_ = lean_ctor_get(v___x_674_, 0);
lean_inc(v_a_675_);
lean_dec_ref_known(v___x_674_, 1);
v_verbose_676_ = lean_ctor_get_uint8(v_a_675_, 0);
lean_dec(v_a_675_);
if (v_verbose_676_ == 0)
{
lean_dec_ref_known(v___x_673_, 2);
goto v___jp_652_;
}
else
{
lean_object* v___x_677_; 
v___x_677_ = l_Lean_Meta_Sym_reportIssue(v___x_673_, v___y_616_, v___y_617_, v___y_618_, v___y_619_, v___y_620_, v___y_621_);
if (lean_obj_tag(v___x_677_) == 0)
{
lean_dec_ref_known(v___x_677_, 1);
goto v___jp_652_;
}
else
{
lean_object* v_a_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_685_; 
lean_dec_ref(v___x_651_);
lean_del_object(v___x_632_);
v_a_678_ = lean_ctor_get(v___x_677_, 0);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_677_);
if (v_isSharedCheck_685_ == 0)
{
v___x_680_ = v___x_677_;
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_a_678_);
lean_dec(v___x_677_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_683_; 
if (v_isShared_681_ == 0)
{
v___x_683_ = v___x_680_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_a_678_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
}
}
else
{
lean_object* v_a_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_693_; 
lean_dec_ref_known(v___x_673_, 2);
lean_dec_ref(v___x_651_);
lean_del_object(v___x_632_);
v_a_686_ = lean_ctor_get(v___x_674_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v___x_674_);
if (v_isSharedCheck_693_ == 0)
{
v___x_688_ = v___x_674_;
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_a_686_);
lean_dec(v___x_674_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_691_; 
if (v_isShared_689_ == 0)
{
v___x_691_ = v___x_688_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_686_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
}
else
{
lean_object* v___x_694_; 
lean_del_object(v___x_632_);
v___x_694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_694_, 0, v___x_637_);
lean_ctor_set(v___x_694_, 1, v___x_651_);
v_a_624_ = v___x_694_;
goto v___jp_623_;
}
}
else
{
lean_object* v_a_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_702_; 
lean_dec_ref(v___x_651_);
lean_del_object(v___x_632_);
lean_dec_ref(v_e_607_);
lean_dec(v___x_606_);
v_a_695_ = lean_ctor_get(v___x_664_, 0);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_664_);
if (v_isSharedCheck_702_ == 0)
{
v___x_697_ = v___x_664_;
v_isShared_698_ = v_isSharedCheck_702_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_a_695_);
lean_dec(v___x_664_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_702_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v___x_700_; 
if (v_isShared_698_ == 0)
{
v___x_700_ = v___x_697_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_a_695_);
v___x_700_ = v_reuseFailAlloc_701_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
return v___x_700_;
}
}
}
}
else
{
lean_object* v_a_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_710_; 
lean_dec_ref(v___x_651_);
lean_del_object(v___x_632_);
lean_dec_ref(v_e_607_);
lean_dec(v___x_606_);
v_a_703_ = lean_ctor_get(v___x_662_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_710_ == 0)
{
v___x_705_ = v___x_662_;
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_a_703_);
lean_dec(v___x_662_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_708_; 
if (v_isShared_706_ == 0)
{
v___x_708_ = v___x_705_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_a_703_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
}
v___jp_711_:
{
lean_object* v___x_712_; 
v___x_712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_712_, 0, v___x_637_);
lean_ctor_set(v___x_712_, 1, v___x_651_);
v_a_624_ = v___x_712_;
goto v___jp_623_;
}
}
else
{
lean_object* v_a_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_723_; 
lean_dec_ref(v___x_651_);
lean_dec(v___x_647_);
lean_del_object(v___x_632_);
lean_dec_ref(v_e_607_);
lean_dec(v___x_606_);
v_a_716_ = lean_ctor_get(v___x_659_, 0);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_659_);
if (v_isSharedCheck_723_ == 0)
{
v___x_718_ = v___x_659_;
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_a_716_);
lean_dec(v___x_659_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_721_; 
if (v_isShared_719_ == 0)
{
v___x_721_ = v___x_718_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v_a_716_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
return v___x_721_;
}
}
}
v___jp_652_:
{
lean_object* v___x_653_; lean_object* v___x_655_; 
v___x_653_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__0));
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 1, v___x_651_);
lean_ctor_set(v___x_632_, 0, v___x_653_);
v___x_655_ = v___x_632_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v___x_653_);
lean_ctor_set(v_reuseFailAlloc_657_, 1, v___x_651_);
v___x_655_ = v_reuseFailAlloc_657_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
lean_object* v___x_656_; 
v___x_656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_656_, 0, v___x_655_);
return v___x_656_;
}
}
}
}
}
}
}
v___jp_623_:
{
size_t v___x_625_; size_t v___x_626_; 
v___x_625_ = ((size_t)1ULL);
v___x_626_ = lean_usize_add(v_i_610_, v___x_625_);
v_i_610_ = v___x_626_;
v_b_611_ = v_a_624_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___boxed(lean_object** _args){
lean_object* v___x_731_ = _args[0];
lean_object* v_e_732_ = _args[1];
lean_object* v_as_733_ = _args[2];
lean_object* v_sz_734_ = _args[3];
lean_object* v_i_735_ = _args[4];
lean_object* v_b_736_ = _args[5];
lean_object* v___y_737_ = _args[6];
lean_object* v___y_738_ = _args[7];
lean_object* v___y_739_ = _args[8];
lean_object* v___y_740_ = _args[9];
lean_object* v___y_741_ = _args[10];
lean_object* v___y_742_ = _args[11];
lean_object* v___y_743_ = _args[12];
lean_object* v___y_744_ = _args[13];
lean_object* v___y_745_ = _args[14];
lean_object* v___y_746_ = _args[15];
lean_object* v___y_747_ = _args[16];
_start:
{
size_t v_sz_boxed_748_; size_t v_i_boxed_749_; lean_object* v_res_750_; 
v_sz_boxed_748_ = lean_unbox_usize(v_sz_734_);
lean_dec(v_sz_734_);
v_i_boxed_749_ = lean_unbox_usize(v_i_735_);
lean_dec(v_i_735_);
v_res_750_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2(v___x_731_, v_e_732_, v_as_733_, v_sz_boxed_748_, v_i_boxed_749_, v_b_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_);
lean_dec(v___y_746_);
lean_dec_ref(v___y_745_);
lean_dec(v___y_744_);
lean_dec_ref(v___y_743_);
lean_dec(v___y_742_);
lean_dec_ref(v___y_741_);
lean_dec(v___y_740_);
lean_dec_ref(v___y_739_);
lean_dec(v___y_738_);
lean_dec(v___y_737_);
lean_dec_ref(v_as_733_);
return v_res_750_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__3(void){
_start:
{
lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_755_ = ((lean_object*)(l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__2));
v___x_756_ = l_Lean_stringToMessageData(v___x_755_);
return v___x_756_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__5(void){
_start:
{
lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_758_ = ((lean_object*)(l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__4));
v___x_759_ = l_Lean_stringToMessageData(v___x_758_);
return v___x_759_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__7(void){
_start:
{
lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_761_ = ((lean_object*)(l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__6));
v___x_762_ = l_Lean_stringToMessageData(v___x_761_);
return v___x_762_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__13(void){
_start:
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_771_ = ((lean_object*)(l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__10));
v___x_772_ = ((lean_object*)(l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__12));
v___x_773_ = l_Lean_Name_append(v___x_772_, v___x_771_);
return v___x_773_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__15(void){
_start:
{
lean_object* v___x_775_; lean_object* v___x_776_; 
v___x_775_ = ((lean_object*)(l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__14));
v___x_776_ = l_Lean_stringToMessageData(v___x_775_);
return v___x_776_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__18(void){
_start:
{
lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_781_ = lean_box(0);
v___x_782_ = l_unsafeCast___redArg(v___x_781_);
return v___x_782_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__19(void){
_start:
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_783_ = lean_box(0);
v___x_784_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__18, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__18_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__18);
v___x_785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
lean_ctor_set(v___x_785_, 1, v___x_783_);
return v___x_785_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__20(void){
_start:
{
lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_786_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__19, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__19_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__19);
v___x_787_ = ((lean_object*)(l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__17));
v___x_788_ = l_Lean_mkConst(v___x_787_, v___x_786_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1(lean_object* v_e_791_, lean_object* v_thm_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_){
_start:
{
lean_object* v___x_816_; 
v___x_816_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_791_, v___y_793_);
if (lean_obj_tag(v___x_816_) == 0)
{
lean_object* v_a_817_; lean_object* v___x_818_; 
v_a_817_ = lean_ctor_get(v___x_816_, 0);
lean_inc(v_a_817_);
lean_dec_ref_known(v___x_816_, 1);
v___x_818_ = l_Lean_Meta_Grind_getMaxGeneration___redArg(v___y_795_);
if (lean_obj_tag(v___x_818_) == 0)
{
lean_object* v_a_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_1126_; 
v_a_819_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_821_ = v___x_818_;
v_isShared_822_ = v_isSharedCheck_1126_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_a_819_);
lean_dec(v___x_818_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_1126_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
uint8_t v___x_823_; 
v___x_823_ = lean_nat_dec_lt(v_a_817_, v_a_819_);
lean_dec(v_a_819_);
lean_dec(v_a_817_);
if (v___x_823_ == 0)
{
lean_object* v___x_824_; lean_object* v___x_826_; 
lean_dec_ref(v_thm_792_);
lean_dec_ref(v_e_791_);
v___x_824_ = lean_box(0);
if (v_isShared_822_ == 0)
{
lean_ctor_set(v___x_821_, 0, v___x_824_);
v___x_826_ = v___x_821_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v___x_824_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
else
{
lean_object* v___x_828_; uint8_t v___x_829_; 
lean_del_object(v___x_821_);
lean_inc_ref(v_e_791_);
v___x_828_ = l_Lean_Expr_cleanupAnnotations(v_e_791_);
v___x_829_ = l_Lean_Expr_isApp(v___x_828_);
if (v___x_829_ == 0)
{
lean_dec_ref(v___x_828_);
lean_dec_ref(v_thm_792_);
lean_dec_ref(v_e_791_);
goto v___jp_813_;
}
else
{
lean_object* v_arg_830_; lean_object* v___x_831_; uint8_t v___x_832_; 
v_arg_830_ = lean_ctor_get(v___x_828_, 1);
lean_inc_ref(v_arg_830_);
v___x_831_ = l_Lean_Expr_appFnCleanup___redArg(v___x_828_);
v___x_832_ = l_Lean_Expr_isApp(v___x_831_);
if (v___x_832_ == 0)
{
lean_dec_ref(v___x_831_);
lean_dec_ref(v_arg_830_);
lean_dec_ref(v_thm_792_);
lean_dec_ref(v_e_791_);
goto v___jp_813_;
}
else
{
lean_object* v_arg_833_; lean_object* v___x_834_; uint8_t v___x_835_; 
v_arg_833_ = lean_ctor_get(v___x_831_, 1);
lean_inc_ref(v_arg_833_);
v___x_834_ = l_Lean_Expr_appFnCleanup___redArg(v___x_831_);
v___x_835_ = l_Lean_Expr_isApp(v___x_834_);
if (v___x_835_ == 0)
{
lean_dec_ref(v___x_834_);
lean_dec_ref(v_arg_833_);
lean_dec_ref(v_arg_830_);
lean_dec_ref(v_thm_792_);
lean_dec_ref(v_e_791_);
goto v___jp_813_;
}
else
{
lean_object* v_arg_836_; lean_object* v___x_837_; lean_object* v___x_838_; uint8_t v___x_839_; 
v_arg_836_ = lean_ctor_get(v___x_834_, 1);
lean_inc_ref(v_arg_836_);
v___x_837_ = l_Lean_Expr_appFnCleanup___redArg(v___x_834_);
v___x_838_ = ((lean_object*)(l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__1));
v___x_839_ = l_Lean_Expr_isConstOf(v___x_837_, v___x_838_);
lean_dec_ref(v___x_837_);
if (v___x_839_ == 0)
{
lean_dec_ref(v_arg_836_);
lean_dec_ref(v_arg_833_);
lean_dec_ref(v_arg_830_);
lean_dec_ref(v_thm_792_);
lean_dec_ref(v_e_791_);
goto v___jp_813_;
}
else
{
lean_object* v_declName_840_; lean_object* v___y_842_; lean_object* v___y_889_; lean_object* v___y_890_; lean_object* v___y_891_; lean_object* v___y_892_; lean_object* v___y_893_; lean_object* v___y_894_; lean_object* v___y_895_; lean_object* v___y_896_; lean_object* v___y_897_; lean_object* v___y_898_; lean_object* v___y_899_; lean_object* v___y_900_; lean_object* v___y_917_; lean_object* v_a_918_; lean_object* v___y_959_; lean_object* v___y_960_; lean_object* v___x_970_; 
v_declName_840_ = lean_ctor_get(v_thm_792_, 0);
lean_inc_n(v_declName_840_, 2);
lean_dec_ref(v_thm_792_);
v___x_970_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v_declName_840_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
if (lean_obj_tag(v___x_970_) == 0)
{
lean_object* v_a_971_; lean_object* v___y_973_; lean_object* v___y_974_; lean_object* v___y_975_; lean_object* v___y_976_; lean_object* v___y_1047_; lean_object* v___x_1087_; 
v_a_971_ = lean_ctor_get(v___x_970_, 0);
lean_inc_n(v_a_971_, 2);
lean_dec_ref_known(v___x_970_, 1);
lean_inc(v___y_802_);
lean_inc_ref(v___y_801_);
lean_inc(v___y_800_);
lean_inc_ref(v___y_799_);
v___x_1087_ = lean_infer_type(v_a_971_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
if (lean_obj_tag(v___x_1087_) == 0)
{
lean_object* v_a_1088_; lean_object* v___x_1089_; uint8_t v_transparency_1090_; lean_object* v___x_1091_; uint8_t v___x_1092_; uint8_t v___x_1093_; uint8_t v___x_1094_; 
v_a_1088_ = lean_ctor_get(v___x_1087_, 0);
lean_inc(v_a_1088_);
lean_dec_ref_known(v___x_1087_, 1);
v___x_1089_ = l_Lean_Meta_Context_config(v___y_799_);
v_transparency_1090_ = lean_ctor_get_uint8(v___x_1089_, 9);
lean_dec_ref(v___x_1089_);
v___x_1091_ = lean_box(0);
v___x_1092_ = 0;
v___x_1093_ = 1;
v___x_1094_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1090_, v___x_1093_);
if (v___x_1094_ == 0)
{
lean_object* v_keyedConfig_1095_; uint8_t v_trackZetaDelta_1096_; lean_object* v_zetaDeltaSet_1097_; lean_object* v_lctx_1098_; lean_object* v_localInstances_1099_; lean_object* v_defEqCtx_x3f_1100_; lean_object* v_synthPendingDepth_1101_; lean_object* v_customCanUnfoldPredicate_x3f_1102_; uint8_t v_univApprox_1103_; uint8_t v_inTypeClassResolution_1104_; uint8_t v_cacheInferType_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; 
v_keyedConfig_1095_ = lean_ctor_get(v___y_799_, 0);
v_trackZetaDelta_1096_ = lean_ctor_get_uint8(v___y_799_, sizeof(void*)*7);
v_zetaDeltaSet_1097_ = lean_ctor_get(v___y_799_, 1);
v_lctx_1098_ = lean_ctor_get(v___y_799_, 2);
v_localInstances_1099_ = lean_ctor_get(v___y_799_, 3);
v_defEqCtx_x3f_1100_ = lean_ctor_get(v___y_799_, 4);
v_synthPendingDepth_1101_ = lean_ctor_get(v___y_799_, 5);
v_customCanUnfoldPredicate_x3f_1102_ = lean_ctor_get(v___y_799_, 6);
v_univApprox_1103_ = lean_ctor_get_uint8(v___y_799_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1104_ = lean_ctor_get_uint8(v___y_799_, sizeof(void*)*7 + 2);
v_cacheInferType_1105_ = lean_ctor_get_uint8(v___y_799_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1095_);
v___x_1106_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1093_, v_keyedConfig_1095_);
lean_inc(v_customCanUnfoldPredicate_x3f_1102_);
lean_inc(v_synthPendingDepth_1101_);
lean_inc(v_defEqCtx_x3f_1100_);
lean_inc_ref(v_localInstances_1099_);
lean_inc_ref(v_lctx_1098_);
lean_inc(v_zetaDeltaSet_1097_);
v___x_1107_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1107_, 0, v___x_1106_);
lean_ctor_set(v___x_1107_, 1, v_zetaDeltaSet_1097_);
lean_ctor_set(v___x_1107_, 2, v_lctx_1098_);
lean_ctor_set(v___x_1107_, 3, v_localInstances_1099_);
lean_ctor_set(v___x_1107_, 4, v_defEqCtx_x3f_1100_);
lean_ctor_set(v___x_1107_, 5, v_synthPendingDepth_1101_);
lean_ctor_set(v___x_1107_, 6, v_customCanUnfoldPredicate_x3f_1102_);
lean_ctor_set_uint8(v___x_1107_, sizeof(void*)*7, v_trackZetaDelta_1096_);
lean_ctor_set_uint8(v___x_1107_, sizeof(void*)*7 + 1, v_univApprox_1103_);
lean_ctor_set_uint8(v___x_1107_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1104_);
lean_ctor_set_uint8(v___x_1107_, sizeof(void*)*7 + 3, v_cacheInferType_1105_);
v___x_1108_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_1088_, v___x_1091_, v___x_1092_, v___x_1107_, v___y_800_, v___y_801_, v___y_802_);
lean_dec_ref_known(v___x_1107_, 7);
v___y_1047_ = v___x_1108_;
goto v___jp_1046_;
}
else
{
lean_object* v___x_1109_; 
v___x_1109_ = l_Lean_Meta_forallMetaTelescopeReducing(v_a_1088_, v___x_1091_, v___x_1092_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
v___y_1047_ = v___x_1109_;
goto v___jp_1046_;
}
}
else
{
lean_object* v_a_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1117_; 
lean_dec(v_a_971_);
lean_dec(v_declName_840_);
lean_dec_ref(v_arg_836_);
lean_dec_ref(v_arg_833_);
lean_dec_ref(v_arg_830_);
lean_dec_ref(v_e_791_);
v_a_1110_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1112_ = v___x_1087_;
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_a_1110_);
lean_dec(v___x_1087_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1115_; 
if (v_isShared_1113_ == 0)
{
v___x_1115_ = v___x_1112_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_a_1110_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
v___jp_972_:
{
if (lean_obj_tag(v___y_976_) == 0)
{
lean_object* v_a_977_; uint8_t v___x_978_; 
v_a_977_ = lean_ctor_get(v___y_976_, 0);
lean_inc(v_a_977_);
lean_dec_ref_known(v___y_976_, 1);
v___x_978_ = lean_unbox(v_a_977_);
lean_dec(v_a_977_);
if (v___x_978_ == 0)
{
lean_dec_ref(v___y_975_);
lean_dec_ref(v___y_974_);
lean_dec(v_a_971_);
v___y_842_ = v___y_973_;
goto v___jp_841_;
}
else
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; size_t v_sz_984_; size_t v___x_985_; lean_object* v___x_986_; 
lean_dec_ref(v___y_973_);
v___x_979_ = lean_unsigned_to_nat(0u);
v___x_980_ = lean_array_get_size(v___y_975_);
v___x_981_ = l_Array_toSubarray___redArg(v___y_975_, v___x_979_, v___x_980_);
v___x_982_ = lean_box(0);
v___x_983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_983_, 0, v___x_982_);
lean_ctor_set(v___x_983_, 1, v___x_981_);
v_sz_984_ = lean_array_size(v___y_974_);
v___x_985_ = ((size_t)0ULL);
lean_inc_ref(v_e_791_);
lean_inc(v_declName_840_);
v___x_986_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2(v_declName_840_, v_e_791_, v___y_974_, v_sz_984_, v___x_985_, v___x_983_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
if (lean_obj_tag(v___x_986_) == 0)
{
lean_object* v_a_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_1029_; 
v_a_987_ = lean_ctor_get(v___x_986_, 0);
v_isSharedCheck_1029_ = !lean_is_exclusive(v___x_986_);
if (v_isSharedCheck_1029_ == 0)
{
v___x_989_ = v___x_986_;
v_isShared_990_ = v_isSharedCheck_1029_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_a_987_);
lean_dec(v___x_986_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_1029_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v_fst_991_; 
v_fst_991_ = lean_ctor_get(v_a_987_, 0);
lean_inc(v_fst_991_);
lean_dec(v_a_987_);
if (lean_obj_tag(v_fst_991_) == 0)
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v_a_994_; lean_object* v___x_995_; 
lean_del_object(v___x_989_);
v___x_992_ = l_Lean_mkAppN(v_a_971_, v___y_974_);
v___x_993_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3___redArg(v___x_992_, v___y_800_);
v_a_994_ = lean_ctor_get(v___x_993_, 0);
lean_inc(v_a_994_);
lean_dec_ref(v___x_993_);
lean_inc_ref(v_e_791_);
v___x_995_ = l_Lean_Meta_Grind_mkEqFalseProof(v_e_791_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
if (lean_obj_tag(v___x_995_) == 0)
{
lean_object* v_a_996_; lean_object* v___x_997_; 
v_a_996_ = lean_ctor_get(v___x_995_, 0);
lean_inc(v_a_996_);
lean_dec_ref_known(v___x_995_, 1);
v___x_997_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v___y_797_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v_a_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; uint8_t v___x_1003_; 
v_a_998_ = lean_ctor_get(v___x_997_, 0);
lean_inc(v_a_998_);
lean_dec_ref_known(v___x_997_, 1);
v___x_999_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__20, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__20_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__20);
lean_inc_ref(v_e_791_);
v___x_1000_ = l_Lean_mkApp4(v___x_999_, v_e_791_, v_a_998_, v_a_996_, v_a_994_);
v___x_1001_ = lean_array_get_size(v___y_974_);
v___x_1002_ = ((lean_object*)(l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__21));
v___x_1003_ = lean_nat_dec_lt(v___x_979_, v___x_1001_);
if (v___x_1003_ == 0)
{
lean_dec_ref(v___y_974_);
v___y_917_ = v___x_1000_;
v_a_918_ = v___x_1002_;
goto v___jp_916_;
}
else
{
uint8_t v___x_1004_; 
v___x_1004_ = lean_nat_dec_le(v___x_1001_, v___x_1001_);
if (v___x_1004_ == 0)
{
if (v___x_1003_ == 0)
{
lean_dec_ref(v___y_974_);
v___y_917_ = v___x_1000_;
v_a_918_ = v___x_1002_;
goto v___jp_916_;
}
else
{
size_t v___x_1005_; lean_object* v___x_1006_; 
v___x_1005_ = lean_usize_of_nat(v___x_1001_);
v___x_1006_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__5(v___y_974_, v___x_985_, v___x_1005_, v___x_1002_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
lean_dec_ref(v___y_974_);
v___y_959_ = v___x_1000_;
v___y_960_ = v___x_1006_;
goto v___jp_958_;
}
}
else
{
size_t v___x_1007_; lean_object* v___x_1008_; 
v___x_1007_ = lean_usize_of_nat(v___x_1001_);
v___x_1008_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__5(v___y_974_, v___x_985_, v___x_1007_, v___x_1002_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
lean_dec_ref(v___y_974_);
v___y_959_ = v___x_1000_;
v___y_960_ = v___x_1008_;
goto v___jp_958_;
}
}
}
else
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1016_; 
lean_dec(v_a_996_);
lean_dec(v_a_994_);
lean_dec_ref(v___y_974_);
lean_dec(v_declName_840_);
lean_dec_ref(v_e_791_);
v_a_1009_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1011_ = v___x_997_;
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_997_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1014_; 
if (v_isShared_1012_ == 0)
{
v___x_1014_ = v___x_1011_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_a_1009_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
lean_dec(v_a_994_);
lean_dec_ref(v___y_974_);
lean_dec(v_declName_840_);
lean_dec_ref(v_e_791_);
v_a_1017_ = lean_ctor_get(v___x_995_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_995_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_995_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1022_; 
if (v_isShared_1020_ == 0)
{
v___x_1022_ = v___x_1019_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_a_1017_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
}
else
{
lean_object* v_val_1025_; lean_object* v___x_1027_; 
lean_dec_ref(v___y_974_);
lean_dec(v_a_971_);
lean_dec(v_declName_840_);
lean_dec_ref(v_e_791_);
v_val_1025_ = lean_ctor_get(v_fst_991_, 0);
lean_inc(v_val_1025_);
lean_dec_ref_known(v_fst_991_, 1);
if (v_isShared_990_ == 0)
{
lean_ctor_set(v___x_989_, 0, v_val_1025_);
v___x_1027_ = v___x_989_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_val_1025_);
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
else
{
lean_object* v_a_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1037_; 
lean_dec_ref(v___y_974_);
lean_dec(v_a_971_);
lean_dec(v_declName_840_);
lean_dec_ref(v_e_791_);
v_a_1030_ = lean_ctor_get(v___x_986_, 0);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_986_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1032_ = v___x_986_;
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_a_1030_);
lean_dec(v___x_986_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___x_1035_; 
if (v_isShared_1033_ == 0)
{
v___x_1035_ = v___x_1032_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v_a_1030_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
}
}
}
else
{
lean_object* v_a_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1045_; 
lean_dec_ref(v___y_975_);
lean_dec_ref(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec(v_a_971_);
lean_dec(v_declName_840_);
lean_dec_ref(v_e_791_);
v_a_1038_ = lean_ctor_get(v___y_976_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___y_976_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1040_ = v___y_976_;
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_a_1038_);
lean_dec(v___y_976_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1043_; 
if (v_isShared_1041_ == 0)
{
v___x_1043_ = v___x_1040_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v_a_1038_);
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
v___jp_1046_:
{
if (lean_obj_tag(v___y_1047_) == 0)
{
lean_object* v_a_1048_; lean_object* v_snd_1049_; lean_object* v_fst_1050_; lean_object* v_fst_1051_; lean_object* v_snd_1052_; lean_object* v___x_1053_; uint8_t v___x_1054_; 
v_a_1048_ = lean_ctor_get(v___y_1047_, 0);
lean_inc(v_a_1048_);
lean_dec_ref_known(v___y_1047_, 1);
v_snd_1049_ = lean_ctor_get(v_a_1048_, 1);
lean_inc(v_snd_1049_);
v_fst_1050_ = lean_ctor_get(v_a_1048_, 0);
lean_inc(v_fst_1050_);
lean_dec(v_a_1048_);
v_fst_1051_ = lean_ctor_get(v_snd_1049_, 0);
lean_inc(v_fst_1051_);
v_snd_1052_ = lean_ctor_get(v_snd_1049_, 1);
lean_inc_n(v_snd_1052_, 2);
lean_dec(v_snd_1049_);
v___x_1053_ = l_Lean_Expr_cleanupAnnotations(v_snd_1052_);
v___x_1054_ = l_Lean_Expr_isApp(v___x_1053_);
if (v___x_1054_ == 0)
{
lean_dec_ref(v___x_1053_);
lean_dec(v_snd_1052_);
lean_dec(v_fst_1051_);
lean_dec(v_fst_1050_);
lean_dec(v_a_971_);
lean_dec(v_declName_840_);
lean_dec_ref(v_arg_836_);
lean_dec_ref(v_arg_833_);
lean_dec_ref(v_arg_830_);
lean_dec_ref(v_e_791_);
goto v___jp_810_;
}
else
{
lean_object* v_arg_1055_; lean_object* v___x_1056_; uint8_t v___x_1057_; 
v_arg_1055_ = lean_ctor_get(v___x_1053_, 1);
lean_inc_ref(v_arg_1055_);
v___x_1056_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1053_);
v___x_1057_ = l_Lean_Expr_isApp(v___x_1056_);
if (v___x_1057_ == 0)
{
lean_dec_ref(v___x_1056_);
lean_dec_ref(v_arg_1055_);
lean_dec(v_snd_1052_);
lean_dec(v_fst_1051_);
lean_dec(v_fst_1050_);
lean_dec(v_a_971_);
lean_dec(v_declName_840_);
lean_dec_ref(v_arg_836_);
lean_dec_ref(v_arg_833_);
lean_dec_ref(v_arg_830_);
lean_dec_ref(v_e_791_);
goto v___jp_810_;
}
else
{
lean_object* v_arg_1058_; lean_object* v___x_1059_; uint8_t v___x_1060_; 
v_arg_1058_ = lean_ctor_get(v___x_1056_, 1);
lean_inc_ref(v_arg_1058_);
v___x_1059_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1056_);
v___x_1060_ = l_Lean_Expr_isApp(v___x_1059_);
if (v___x_1060_ == 0)
{
lean_dec_ref(v___x_1059_);
lean_dec_ref(v_arg_1058_);
lean_dec_ref(v_arg_1055_);
lean_dec(v_snd_1052_);
lean_dec(v_fst_1051_);
lean_dec(v_fst_1050_);
lean_dec(v_a_971_);
lean_dec(v_declName_840_);
lean_dec_ref(v_arg_836_);
lean_dec_ref(v_arg_833_);
lean_dec_ref(v_arg_830_);
lean_dec_ref(v_e_791_);
goto v___jp_810_;
}
else
{
lean_object* v_arg_1061_; lean_object* v___x_1062_; uint8_t v___x_1063_; 
v_arg_1061_ = lean_ctor_get(v___x_1059_, 1);
lean_inc_ref(v_arg_1061_);
v___x_1062_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1059_);
v___x_1063_ = l_Lean_Expr_isConstOf(v___x_1062_, v___x_838_);
lean_dec_ref(v___x_1062_);
if (v___x_1063_ == 0)
{
lean_dec_ref(v_arg_1061_);
lean_dec_ref(v_arg_1058_);
lean_dec_ref(v_arg_1055_);
lean_dec(v_snd_1052_);
lean_dec(v_fst_1051_);
lean_dec(v_fst_1050_);
lean_dec(v_a_971_);
lean_dec(v_declName_840_);
lean_dec_ref(v_arg_836_);
lean_dec_ref(v_arg_833_);
lean_dec_ref(v_arg_830_);
lean_dec_ref(v_e_791_);
goto v___jp_810_;
}
else
{
lean_object* v___x_1064_; 
v___x_1064_ = l_Lean_Meta_isExprDefEq(v_arg_836_, v_arg_1061_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
if (lean_obj_tag(v___x_1064_) == 0)
{
lean_object* v_a_1065_; uint8_t v___x_1066_; 
v_a_1065_ = lean_ctor_get(v___x_1064_, 0);
lean_inc(v_a_1065_);
v___x_1066_ = lean_unbox(v_a_1065_);
lean_dec(v_a_1065_);
if (v___x_1066_ == 0)
{
lean_dec_ref(v_arg_1058_);
lean_dec_ref(v_arg_1055_);
lean_dec_ref(v_arg_833_);
lean_dec_ref(v_arg_830_);
v___y_973_ = v_snd_1052_;
v___y_974_ = v_fst_1050_;
v___y_975_ = v_fst_1051_;
v___y_976_ = v___x_1064_;
goto v___jp_972_;
}
else
{
lean_object* v___x_1067_; 
lean_dec_ref_known(v___x_1064_, 1);
v___x_1067_ = l_Lean_Meta_Grind_instantiateExtTheorem___lam__0(v___x_823_, v_arg_1058_, v_arg_833_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_object* v_a_1068_; uint8_t v___x_1069_; 
v_a_1068_ = lean_ctor_get(v___x_1067_, 0);
lean_inc(v_a_1068_);
lean_dec_ref_known(v___x_1067_, 1);
v___x_1069_ = lean_unbox(v_a_1068_);
lean_dec(v_a_1068_);
if (v___x_1069_ == 0)
{
lean_dec_ref(v_arg_1055_);
lean_dec(v_fst_1051_);
lean_dec(v_fst_1050_);
lean_dec(v_a_971_);
lean_dec_ref(v_arg_830_);
v___y_842_ = v_snd_1052_;
goto v___jp_841_;
}
else
{
lean_object* v___x_1070_; 
v___x_1070_ = l_Lean_Meta_Grind_instantiateExtTheorem___lam__0(v___x_823_, v_arg_1055_, v_arg_830_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
v___y_973_ = v_snd_1052_;
v___y_974_ = v_fst_1050_;
v___y_975_ = v_fst_1051_;
v___y_976_ = v___x_1070_;
goto v___jp_972_;
}
}
else
{
lean_object* v_a_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1078_; 
lean_dec_ref(v_arg_1055_);
lean_dec(v_snd_1052_);
lean_dec(v_fst_1051_);
lean_dec(v_fst_1050_);
lean_dec(v_a_971_);
lean_dec(v_declName_840_);
lean_dec_ref(v_arg_830_);
lean_dec_ref(v_e_791_);
v_a_1071_ = lean_ctor_get(v___x_1067_, 0);
v_isSharedCheck_1078_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1073_ = v___x_1067_;
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_a_1071_);
lean_dec(v___x_1067_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1076_; 
if (v_isShared_1074_ == 0)
{
v___x_1076_ = v___x_1073_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v_a_1071_);
v___x_1076_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
return v___x_1076_;
}
}
}
}
}
else
{
lean_dec_ref(v_arg_1058_);
lean_dec_ref(v_arg_1055_);
lean_dec_ref(v_arg_833_);
lean_dec_ref(v_arg_830_);
v___y_973_ = v_snd_1052_;
v___y_974_ = v_fst_1050_;
v___y_975_ = v_fst_1051_;
v___y_976_ = v___x_1064_;
goto v___jp_972_;
}
}
}
}
}
}
else
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1086_; 
lean_dec(v_a_971_);
lean_dec(v_declName_840_);
lean_dec_ref(v_arg_836_);
lean_dec_ref(v_arg_833_);
lean_dec_ref(v_arg_830_);
lean_dec_ref(v_e_791_);
v_a_1079_ = lean_ctor_get(v___y_1047_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___y_1047_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1081_ = v___y_1047_;
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___y_1047_);
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
else
{
lean_object* v_a_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1125_; 
lean_dec(v_declName_840_);
lean_dec_ref(v_arg_836_);
lean_dec_ref(v_arg_833_);
lean_dec_ref(v_arg_830_);
lean_dec_ref(v_e_791_);
v_a_1118_ = lean_ctor_get(v___x_970_, 0);
v_isSharedCheck_1125_ = !lean_is_exclusive(v___x_970_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1120_ = v___x_970_;
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_a_1118_);
lean_dec(v___x_970_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v___x_1123_; 
if (v_isShared_1121_ == 0)
{
v___x_1123_ = v___x_1120_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_a_1118_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
}
}
}
v___jp_841_:
{
lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_843_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__3, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__3_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__3);
v___x_844_ = l_Lean_MessageData_ofName(v_declName_840_);
v___x_845_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_845_, 0, v___x_843_);
lean_ctor_set(v___x_845_, 1, v___x_844_);
v___x_846_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4);
v___x_847_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_847_, 0, v___x_845_);
lean_ctor_set(v___x_847_, 1, v___x_846_);
v___x_848_ = l_Lean_indentExpr(v_e_791_);
v___x_849_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_849_, 0, v___x_847_);
lean_ctor_set(v___x_849_, 1, v___x_848_);
v___x_850_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__5, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__5_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__5);
v___x_851_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_851_, 0, v___x_849_);
lean_ctor_set(v___x_851_, 1, v___x_850_);
v___x_852_ = l_Lean_indentExpr(v___y_842_);
v___x_853_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_853_, 0, v___x_851_);
lean_ctor_set(v___x_853_, 1, v___x_852_);
v___x_854_ = l_Lean_Meta_Sym_getConfig___redArg(v___y_797_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_object* v_a_855_; uint8_t v_verbose_856_; 
v_a_855_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_a_855_);
lean_dec_ref_known(v___x_854_, 1);
v_verbose_856_ = lean_ctor_get_uint8(v_a_855_, 0);
lean_dec(v_a_855_);
if (v_verbose_856_ == 0)
{
lean_dec_ref_known(v___x_853_, 2);
goto v___jp_807_;
}
else
{
lean_object* v___x_857_; 
v___x_857_ = l_Lean_Meta_Sym_reportIssue(v___x_853_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
if (lean_obj_tag(v___x_857_) == 0)
{
lean_dec_ref_known(v___x_857_, 1);
goto v___jp_807_;
}
else
{
return v___x_857_;
}
}
}
else
{
lean_object* v_a_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_865_; 
lean_dec_ref_known(v___x_853_, 2);
v_a_858_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_865_ == 0)
{
v___x_860_ = v___x_854_;
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_a_858_);
lean_dec(v___x_854_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v___x_863_; 
if (v_isShared_861_ == 0)
{
v___x_863_ = v___x_860_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_a_858_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
}
v___jp_866_:
{
lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_867_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__3, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__3_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__3);
v___x_868_ = l_Lean_MessageData_ofName(v_declName_840_);
v___x_869_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_869_, 0, v___x_867_);
lean_ctor_set(v___x_869_, 1, v___x_868_);
v___x_870_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__2___closed__4);
v___x_871_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_871_, 0, v___x_869_);
lean_ctor_set(v___x_871_, 1, v___x_870_);
v___x_872_ = l_Lean_indentExpr(v_e_791_);
v___x_873_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_873_, 0, v___x_871_);
lean_ctor_set(v___x_873_, 1, v___x_872_);
v___x_874_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__7, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__7_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__7);
v___x_875_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_875_, 0, v___x_873_);
lean_ctor_set(v___x_875_, 1, v___x_874_);
v___x_876_ = l_Lean_Meta_Sym_getConfig___redArg(v___y_797_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; uint8_t v_verbose_878_; 
v_a_877_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_a_877_);
lean_dec_ref_known(v___x_876_, 1);
v_verbose_878_ = lean_ctor_get_uint8(v_a_877_, 0);
lean_dec(v_a_877_);
if (v_verbose_878_ == 0)
{
lean_dec_ref_known(v___x_875_, 2);
goto v___jp_804_;
}
else
{
lean_object* v___x_879_; 
v___x_879_ = l_Lean_Meta_Sym_reportIssue(v___x_875_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_dec_ref_known(v___x_879_, 1);
goto v___jp_804_;
}
else
{
return v___x_879_;
}
}
}
else
{
lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_887_; 
lean_dec_ref_known(v___x_875_, 2);
v_a_880_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_887_ == 0)
{
v___x_882_ = v___x_876_;
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v___x_876_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_885_; 
if (v_isShared_883_ == 0)
{
v___x_885_ = v___x_882_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_a_880_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
}
v___jp_888_:
{
lean_object* v___x_901_; 
v___x_901_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_791_, v___y_891_);
lean_dec_ref(v_e_791_);
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v_a_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; 
v_a_902_ = lean_ctor_get(v___x_901_, 0);
lean_inc(v_a_902_);
lean_dec_ref_known(v___x_901_, 1);
v___x_903_ = lean_unsigned_to_nat(1u);
v___x_904_ = lean_nat_add(v_a_902_, v___x_903_);
lean_dec(v_a_902_);
v___x_905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_905_, 0, v_declName_840_);
v___x_906_ = lean_box(1);
v___x_907_ = l_Lean_Meta_Grind_addNewRawFact(v___y_890_, v___y_889_, v___x_904_, v___x_905_, v___x_906_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_);
return v___x_907_;
}
else
{
lean_object* v_a_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_915_; 
lean_dec_ref(v___y_890_);
lean_dec_ref(v___y_889_);
lean_dec(v_declName_840_);
v_a_908_ = lean_ctor_get(v___x_901_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_915_ == 0)
{
v___x_910_ = v___x_901_;
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_a_908_);
lean_dec(v___x_901_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_913_; 
if (v_isShared_911_ == 0)
{
v___x_913_ = v___x_910_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v_a_908_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
}
v___jp_916_:
{
uint8_t v___x_919_; uint8_t v___x_920_; lean_object* v___x_921_; 
v___x_919_ = 0;
v___x_920_ = 1;
v___x_921_ = l_Lean_Meta_mkLambdaFVars(v_a_918_, v___y_917_, v___x_919_, v___x_823_, v___x_919_, v___x_823_, v___x_920_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v_a_922_; lean_object* v___x_923_; lean_object* v_a_924_; lean_object* v___x_925_; 
v_a_922_ = lean_ctor_get(v___x_921_, 0);
lean_inc(v_a_922_);
lean_dec_ref_known(v___x_921_, 1);
v___x_923_ = l_Lean_instantiateMVars___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__3___redArg(v_a_922_, v___y_800_);
v_a_924_ = lean_ctor_get(v___x_923_, 0);
lean_inc_n(v_a_924_, 2);
lean_dec_ref(v___x_923_);
lean_inc(v___y_802_);
lean_inc_ref(v___y_801_);
lean_inc(v___y_800_);
lean_inc_ref(v___y_799_);
v___x_925_ = lean_infer_type(v_a_924_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
if (lean_obj_tag(v___x_925_) == 0)
{
lean_object* v_a_926_; uint8_t v___x_927_; 
v_a_926_ = lean_ctor_get(v___x_925_, 0);
lean_inc(v_a_926_);
lean_dec_ref_known(v___x_925_, 1);
v___x_927_ = l_Lean_Expr_hasMVar(v_a_924_);
if (v___x_927_ == 0)
{
uint8_t v___x_928_; 
v___x_928_ = l_Lean_Expr_hasMVar(v_a_926_);
if (v___x_928_ == 0)
{
lean_object* v_toCold_929_; lean_object* v_options_930_; uint8_t v_hasTrace_931_; 
v_toCold_929_ = lean_ctor_get(v___y_801_, 0);
v_options_930_ = lean_ctor_get(v_toCold_929_, 2);
v_hasTrace_931_ = lean_ctor_get_uint8(v_options_930_, sizeof(void*)*1);
if (v_hasTrace_931_ == 0)
{
v___y_889_ = v_a_926_;
v___y_890_ = v_a_924_;
v___y_891_ = v___y_793_;
v___y_892_ = v___y_794_;
v___y_893_ = v___y_795_;
v___y_894_ = v___y_796_;
v___y_895_ = v___y_797_;
v___y_896_ = v___y_798_;
v___y_897_ = v___y_799_;
v___y_898_ = v___y_800_;
v___y_899_ = v___y_801_;
v___y_900_ = v___y_802_;
goto v___jp_888_;
}
else
{
lean_object* v_inheritedTraceOptions_932_; lean_object* v___x_933_; lean_object* v___x_934_; uint8_t v___x_935_; 
v_inheritedTraceOptions_932_ = lean_ctor_get(v_toCold_929_, 11);
v___x_933_ = ((lean_object*)(l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__10));
v___x_934_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__13, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__13_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__13);
v___x_935_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_932_, v_options_930_, v___x_934_);
if (v___x_935_ == 0)
{
v___y_889_ = v_a_926_;
v___y_890_ = v_a_924_;
v___y_891_ = v___y_793_;
v___y_892_ = v___y_794_;
v___y_893_ = v___y_795_;
v___y_894_ = v___y_796_;
v___y_895_ = v___y_797_;
v___y_896_ = v___y_798_;
v___y_897_ = v___y_799_;
v___y_898_ = v___y_800_;
v___y_899_ = v___y_801_;
v___y_900_ = v___y_802_;
goto v___jp_888_;
}
else
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
lean_inc(v_declName_840_);
v___x_936_ = l_Lean_MessageData_ofName(v_declName_840_);
v___x_937_ = lean_obj_once(&l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__15, &l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__15_once, _init_l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___closed__15);
v___x_938_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_938_, 0, v___x_936_);
lean_ctor_set(v___x_938_, 1, v___x_937_);
lean_inc(v_a_926_);
v___x_939_ = l_Lean_MessageData_ofExpr(v_a_926_);
v___x_940_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_940_, 0, v___x_938_);
lean_ctor_set(v___x_940_, 1, v___x_939_);
v___x_941_ = l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg(v___x_933_, v___x_940_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
if (lean_obj_tag(v___x_941_) == 0)
{
lean_dec_ref_known(v___x_941_, 1);
v___y_889_ = v_a_926_;
v___y_890_ = v_a_924_;
v___y_891_ = v___y_793_;
v___y_892_ = v___y_794_;
v___y_893_ = v___y_795_;
v___y_894_ = v___y_796_;
v___y_895_ = v___y_797_;
v___y_896_ = v___y_798_;
v___y_897_ = v___y_799_;
v___y_898_ = v___y_800_;
v___y_899_ = v___y_801_;
v___y_900_ = v___y_802_;
goto v___jp_888_;
}
else
{
lean_dec(v_a_926_);
lean_dec(v_a_924_);
lean_dec(v_declName_840_);
lean_dec_ref(v_e_791_);
return v___x_941_;
}
}
}
}
else
{
lean_dec(v_a_926_);
lean_dec(v_a_924_);
goto v___jp_866_;
}
}
else
{
lean_dec(v_a_926_);
lean_dec(v_a_924_);
goto v___jp_866_;
}
}
else
{
lean_object* v_a_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_949_; 
lean_dec(v_a_924_);
lean_dec(v_declName_840_);
lean_dec_ref(v_e_791_);
v_a_942_ = lean_ctor_get(v___x_925_, 0);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_949_ == 0)
{
v___x_944_ = v___x_925_;
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_a_942_);
lean_dec(v___x_925_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_947_; 
if (v_isShared_945_ == 0)
{
v___x_947_ = v___x_944_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_a_942_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
}
else
{
lean_object* v_a_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_957_; 
lean_dec(v_declName_840_);
lean_dec_ref(v_e_791_);
v_a_950_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_957_ == 0)
{
v___x_952_ = v___x_921_;
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_a_950_);
lean_dec(v___x_921_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_955_; 
if (v_isShared_953_ == 0)
{
v___x_955_ = v___x_952_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_a_950_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
}
}
v___jp_958_:
{
if (lean_obj_tag(v___y_960_) == 0)
{
lean_object* v_a_961_; 
v_a_961_ = lean_ctor_get(v___y_960_, 0);
lean_inc(v_a_961_);
lean_dec_ref_known(v___y_960_, 1);
v___y_917_ = v___y_959_;
v_a_918_ = v_a_961_;
goto v___jp_916_;
}
else
{
lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_969_; 
lean_dec_ref(v___y_959_);
lean_dec(v_declName_840_);
lean_dec_ref(v_e_791_);
v_a_962_ = lean_ctor_get(v___y_960_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___y_960_);
if (v_isSharedCheck_969_ == 0)
{
v___x_964_ = v___y_960_;
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_dec(v___y_960_);
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
}
}
}
}
}
}
}
else
{
lean_object* v_a_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1134_; 
lean_dec(v_a_817_);
lean_dec_ref(v_thm_792_);
lean_dec_ref(v_e_791_);
v_a_1127_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1129_ = v___x_818_;
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_a_1127_);
lean_dec(v___x_818_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v___x_1132_; 
if (v_isShared_1130_ == 0)
{
v___x_1132_ = v___x_1129_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v_a_1127_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
return v___x_1132_;
}
}
}
}
else
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1142_; 
lean_dec_ref(v_thm_792_);
lean_dec_ref(v_e_791_);
v_a_1135_ = lean_ctor_get(v___x_816_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_816_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1137_ = v___x_816_;
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v___x_816_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1140_; 
if (v_isShared_1138_ == 0)
{
v___x_1140_ = v___x_1137_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v_a_1135_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
return v___x_1140_;
}
}
}
v___jp_804_:
{
lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_805_ = lean_box(0);
v___x_806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_806_, 0, v___x_805_);
return v___x_806_;
}
v___jp_807_:
{
lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_808_ = lean_box(0);
v___x_809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_809_, 0, v___x_808_);
return v___x_809_;
}
v___jp_810_:
{
lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_811_ = lean_box(0);
v___x_812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_812_, 0, v___x_811_);
return v___x_812_;
}
v___jp_813_:
{
lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_814_ = lean_box(0);
v___x_815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_815_, 0, v___x_814_);
return v___x_815_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___boxed(lean_object* v_e_1143_, lean_object* v_thm_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_){
_start:
{
lean_object* v_res_1156_; 
v_res_1156_ = l_Lean_Meta_Grind_instantiateExtTheorem___lam__1(v_e_1143_, v_thm_1144_, v___y_1145_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_);
lean_dec(v___y_1154_);
lean_dec_ref(v___y_1153_);
lean_dec(v___y_1152_);
lean_dec_ref(v___y_1151_);
lean_dec(v___y_1150_);
lean_dec_ref(v___y_1149_);
lean_dec(v___y_1148_);
lean_dec_ref(v___y_1147_);
lean_dec(v___y_1146_);
lean_dec(v___y_1145_);
return v_res_1156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem(lean_object* v_thm_1157_, lean_object* v_e_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_){
_start:
{
lean_object* v___f_1170_; uint8_t v___x_1171_; lean_object* v___x_1172_; 
v___f_1170_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_instantiateExtTheorem___lam__1___boxed), 13, 2);
lean_closure_set(v___f_1170_, 0, v_e_1158_);
lean_closure_set(v___f_1170_, 1, v_thm_1157_);
v___x_1171_ = 0;
v___x_1172_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__6___redArg(v___f_1170_, v___x_1171_, v_a_1159_, v_a_1160_, v_a_1161_, v_a_1162_, v_a_1163_, v_a_1164_, v_a_1165_, v_a_1166_, v_a_1167_, v_a_1168_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_instantiateExtTheorem___boxed(lean_object* v_thm_1173_, lean_object* v_e_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_){
_start:
{
lean_object* v_res_1186_; 
v_res_1186_ = l_Lean_Meta_Grind_instantiateExtTheorem(v_thm_1173_, v_e_1174_, v_a_1175_, v_a_1176_, v_a_1177_, v_a_1178_, v_a_1179_, v_a_1180_, v_a_1181_, v_a_1182_, v_a_1183_, v_a_1184_);
lean_dec(v_a_1184_);
lean_dec_ref(v_a_1183_);
lean_dec(v_a_1182_);
lean_dec_ref(v_a_1181_);
lean_dec(v_a_1180_);
lean_dec_ref(v_a_1179_);
lean_dec(v_a_1178_);
lean_dec_ref(v_a_1177_);
lean_dec(v_a_1176_);
lean_dec(v_a_1175_);
return v_res_1186_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0(lean_object* v_mvarId_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_){
_start:
{
lean_object* v___x_1199_; 
v___x_1199_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0___redArg(v_mvarId_1187_, v___y_1195_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0___boxed(lean_object* v_mvarId_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_){
_start:
{
lean_object* v_res_1212_; 
v_res_1212_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0(v_mvarId_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_, v___y_1210_);
lean_dec(v___y_1210_);
lean_dec_ref(v___y_1209_);
lean_dec(v___y_1208_);
lean_dec_ref(v___y_1207_);
lean_dec(v___y_1206_);
lean_dec_ref(v___y_1205_);
lean_dec(v___y_1204_);
lean_dec_ref(v___y_1203_);
lean_dec(v___y_1202_);
lean_dec(v___y_1201_);
lean_dec(v_mvarId_1200_);
return v_res_1212_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1(lean_object* v_mvarId_1213_, lean_object* v_val_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_){
_start:
{
lean_object* v___x_1226_; 
v___x_1226_ = l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1___redArg(v_mvarId_1213_, v_val_1214_, v___y_1222_);
return v___x_1226_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1___boxed(lean_object* v_mvarId_1227_, lean_object* v_val_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_){
_start:
{
lean_object* v_res_1240_; 
v_res_1240_ = l_Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1(v_mvarId_1227_, v_val_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_, v___y_1238_);
lean_dec(v___y_1238_);
lean_dec_ref(v___y_1237_);
lean_dec(v___y_1236_);
lean_dec_ref(v___y_1235_);
lean_dec(v___y_1234_);
lean_dec_ref(v___y_1233_);
lean_dec(v___y_1232_);
lean_dec_ref(v___y_1231_);
lean_dec(v___y_1230_);
lean_dec(v___y_1229_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4(lean_object* v_cls_1241_, lean_object* v_msg_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_){
_start:
{
lean_object* v___x_1254_; 
v___x_1254_ = l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___redArg(v_cls_1241_, v_msg_1242_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
return v___x_1254_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4___boxed(lean_object* v_cls_1255_, lean_object* v_msg_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_){
_start:
{
lean_object* v_res_1268_; 
v_res_1268_ = l_Lean_addTrace___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__4(v_cls_1255_, v_msg_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
lean_dec(v___y_1266_);
lean_dec_ref(v___y_1265_);
lean_dec(v___y_1264_);
lean_dec_ref(v___y_1263_);
lean_dec(v___y_1262_);
lean_dec_ref(v___y_1261_);
lean_dec(v___y_1260_);
lean_dec_ref(v___y_1259_);
lean_dec(v___y_1258_);
lean_dec(v___y_1257_);
return v_res_1268_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0(lean_object* v_00_u03b2_1269_, lean_object* v_x_1270_, lean_object* v_x_1271_){
_start:
{
uint8_t v___x_1272_; 
v___x_1272_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0___redArg(v_x_1270_, v_x_1271_);
return v___x_1272_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1273_, lean_object* v_x_1274_, lean_object* v_x_1275_){
_start:
{
uint8_t v_res_1276_; lean_object* v_r_1277_; 
v_res_1276_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0(v_00_u03b2_1273_, v_x_1274_, v_x_1275_);
lean_dec(v_x_1275_);
lean_dec_ref(v_x_1274_);
v_r_1277_ = lean_box(v_res_1276_);
return v_r_1277_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2(lean_object* v_00_u03b2_1278_, lean_object* v_x_1279_, lean_object* v_x_1280_, lean_object* v_x_1281_){
_start:
{
lean_object* v___x_1282_; 
v___x_1282_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2___redArg(v_x_1279_, v_x_1280_, v_x_1281_);
return v___x_1282_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_1283_, lean_object* v_x_1284_, size_t v_x_1285_, lean_object* v_x_1286_){
_start:
{
uint8_t v___x_1287_; 
v___x_1287_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___redArg(v_x_1284_, v_x_1285_, v_x_1286_);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_1288_, lean_object* v_x_1289_, lean_object* v_x_1290_, lean_object* v_x_1291_){
_start:
{
size_t v_x_146568__boxed_1292_; uint8_t v_res_1293_; lean_object* v_r_1294_; 
v_x_146568__boxed_1292_ = lean_unbox_usize(v_x_1290_);
lean_dec(v_x_1290_);
v_res_1293_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3(v_00_u03b2_1288_, v_x_1289_, v_x_146568__boxed_1292_, v_x_1291_);
lean_dec(v_x_1291_);
lean_dec_ref(v_x_1289_);
v_r_1294_ = lean_box(v_res_1293_);
return v_r_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6(lean_object* v_00_u03b2_1295_, lean_object* v_x_1296_, size_t v_x_1297_, size_t v_x_1298_, lean_object* v_x_1299_, lean_object* v_x_1300_){
_start:
{
lean_object* v___x_1301_; 
v___x_1301_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___redArg(v_x_1296_, v_x_1297_, v_x_1298_, v_x_1299_, v_x_1300_);
return v___x_1301_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6___boxed(lean_object* v_00_u03b2_1302_, lean_object* v_x_1303_, lean_object* v_x_1304_, lean_object* v_x_1305_, lean_object* v_x_1306_, lean_object* v_x_1307_){
_start:
{
size_t v_x_146579__boxed_1308_; size_t v_x_146580__boxed_1309_; lean_object* v_res_1310_; 
v_x_146579__boxed_1308_ = lean_unbox_usize(v_x_1304_);
lean_dec(v_x_1304_);
v_x_146580__boxed_1309_ = lean_unbox_usize(v_x_1305_);
lean_dec(v_x_1305_);
v_res_1310_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6(v_00_u03b2_1302_, v_x_1303_, v_x_146579__boxed_1308_, v_x_146580__boxed_1309_, v_x_1306_, v_x_1307_);
return v_res_1310_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9(lean_object* v_00_u03b2_1311_, lean_object* v_keys_1312_, lean_object* v_vals_1313_, lean_object* v_heq_1314_, lean_object* v_i_1315_, lean_object* v_k_1316_){
_start:
{
uint8_t v___x_1317_; 
v___x_1317_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9___redArg(v_keys_1312_, v_i_1315_, v_k_1316_);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9___boxed(lean_object* v_00_u03b2_1318_, lean_object* v_keys_1319_, lean_object* v_vals_1320_, lean_object* v_heq_1321_, lean_object* v_i_1322_, lean_object* v_k_1323_){
_start:
{
uint8_t v_res_1324_; lean_object* v_r_1325_; 
v_res_1324_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__0_spec__0_spec__3_spec__9(v_00_u03b2_1318_, v_keys_1319_, v_vals_1320_, v_heq_1321_, v_i_1322_, v_k_1323_);
lean_dec(v_k_1323_);
lean_dec_ref(v_vals_1320_);
lean_dec_ref(v_keys_1319_);
v_r_1325_ = lean_box(v_res_1324_);
return v_r_1325_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__12(lean_object* v_00_u03b2_1326_, lean_object* v_n_1327_, lean_object* v_k_1328_, lean_object* v_v_1329_){
_start:
{
lean_object* v___x_1330_; 
v___x_1330_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__12___redArg(v_n_1327_, v_k_1328_, v_v_1329_);
return v___x_1330_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13(lean_object* v_00_u03b2_1331_, size_t v_depth_1332_, lean_object* v_keys_1333_, lean_object* v_vals_1334_, lean_object* v_heq_1335_, lean_object* v_i_1336_, lean_object* v_entries_1337_){
_start:
{
lean_object* v___x_1338_; 
v___x_1338_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13___redArg(v_depth_1332_, v_keys_1333_, v_vals_1334_, v_i_1336_, v_entries_1337_);
return v___x_1338_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13___boxed(lean_object* v_00_u03b2_1339_, lean_object* v_depth_1340_, lean_object* v_keys_1341_, lean_object* v_vals_1342_, lean_object* v_heq_1343_, lean_object* v_i_1344_, lean_object* v_entries_1345_){
_start:
{
size_t v_depth_boxed_1346_; lean_object* v_res_1347_; 
v_depth_boxed_1346_ = lean_unbox_usize(v_depth_1340_);
lean_dec(v_depth_1340_);
v_res_1347_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__13(v_00_u03b2_1339_, v_depth_boxed_1346_, v_keys_1341_, v_vals_1342_, v_heq_1343_, v_i_1344_, v_entries_1345_);
lean_dec_ref(v_vals_1342_);
lean_dec_ref(v_keys_1341_);
return v_res_1347_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__12_spec__13(lean_object* v_00_u03b2_1348_, lean_object* v_x_1349_, lean_object* v_x_1350_, lean_object* v_x_1351_, lean_object* v_x_1352_){
_start:
{
lean_object* v___x_1353_; 
v___x_1353_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Grind_instantiateExtTheorem_spec__1_spec__2_spec__6_spec__12_spec__13___redArg(v_x_1349_, v_x_1350_, v_x_1351_, v_x_1352_);
return v___x_1353_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_SynthInstance(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Ext(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Ext(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_SynthInstance(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Ext(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Ext(builtin);
}
#ifdef __cplusplus
}
#endif

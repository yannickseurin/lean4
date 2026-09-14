// Lean compiler output
// Module: Lean.Meta.Closure
// Imports: public import Lean.Meta.Check public import Lean.Meta.Tactic.AuxLemma import Lean.Util.ForEachExpr
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instInhabitedCoreM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
extern lean_object* l_Lean_instEmptyCollectionFVarIdHashSet;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint64_t l_Lean_Level_hash(lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_get_x21(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
extern lean_object* l_Lean_instInhabitedFVarId_default;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_expr_abstract_range(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* lean_expr_lower_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_check(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint8_t l_Lean_Expr_hasLevelParam(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
uint8_t l_Lean_Level_hasMVar(lean_object*);
uint8_t l_Lean_Level_hasParam(lean_object*);
lean_object* l_Lean_mkLevelMax_x27(lean_object*, lean_object*);
lean_object* l_Lean_simpLevelMax_x27(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLevelIMax_x27(lean_object*, lean_object*);
lean_object* l_Lean_simpLevelIMax_x27(lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
uint8_t l_ptrEqList___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getValue_x3f___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getZetaDeltaFVarIds___redArg(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_replaceFVarId(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAuxLemma(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Nat_foldRev___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
extern lean_object* l_Lean_instInhabitedLevel;
lean_object* l_Lean_Level_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Level_hash___boxed(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_hash___boxed(lean_object*);
lean_object* l_Lean_ExprStructEq_beq___boxed(lean_object*, lean_object*);
uint32_t l_Lean_getMaxHeight(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_compileDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
static lean_once_cell_t l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_instInhabitedToProcessElement_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_instInhabitedToProcessElement;
static const lean_closure_object l_Lean_Meta_Closure_visitLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_visitLevel___closed__0 = (const lean_object*)&l_Lean_Meta_Closure_visitLevel___closed__0_value;
static const lean_closure_object l_Lean_Meta_Closure_visitLevel___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_visitLevel___closed__1 = (const lean_object*)&l_Lean_Meta_Closure_visitLevel___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitLevel(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Closure_visitExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_visitExpr___closed__0 = (const lean_object*)&l_Lean_Meta_Closure_visitExpr___closed__0_value;
static const lean_closure_object l_Lean_Meta_Closure_visitExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ExprStructEq_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_visitExpr___closed__1 = (const lean_object*)&l_Lean_Meta_Closure_visitExpr___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitExpr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "u"};
static const lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 178, 247, 241, 102, 42, 87, 174)}};
static const lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_collectLevelAux_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_preprocess(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_preprocess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Closure_mkNextUserName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Closure_mkNextUserName___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Closure_mkNextUserName___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Closure_mkNextUserName___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Closure_mkNextUserName___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExpr(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcessAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushLocalDecl(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_process(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_process___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_LocalDecl_toExpr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__0 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__0_value;
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__1 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__1_value;
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__2 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__2_value;
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__3 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__3_value;
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__4 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__4_value;
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__5 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__5_value;
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__6 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__6_value;
static const lean_closure_object l_Lean_Meta_Closure_mkBinding___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__7 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__7_value;
static const lean_ctor_object l_Lean_Meta_Closure_mkBinding___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__1_value),((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__2_value)}};
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__8 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Closure_mkBinding___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__8_value),((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__3_value),((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__4_value),((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__5_value),((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__6_value)}};
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__9 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Closure_mkBinding___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__9_value),((lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__7_value)}};
static const lean_object* l_Lean_Meta_Closure_mkBinding___closed__10 = (const lean_object*)&l_Lean_Meta_Closure_mkBinding___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkLambda(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkLambda___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkForall(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkForall___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__2_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17_spec__18___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 83, .m_data = "assertion violation: !decl.isLet (allowNondep := true) -- should all be cdecls\n    "};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__4 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "_private.Lean.Meta.Closure.0.Lean.Meta.Closure.sortDecls.visit"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__3 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Meta.Closure"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "cycle detected in sorting abstracted variables"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__6 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Closure"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9_value),LEAN_SCALAR_PTR_LITERAL(248, 96, 54, 247, 94, 45, 114, 27)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__11 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__11_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__12 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__12_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Sorting decl "};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__14 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__16 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__16_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17_spec__18(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instInhabitedCoreM___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "_private.Lean.Meta.Closure.0.Lean.Meta.Closure.sortDecls"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "assertion violation: sortedDecls.size = sortedArgs.size\n  "};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__1 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "assertion violation: toSortDecls.size = toSortArgs.size\n  "};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__3 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Sorted fvars: "};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__7 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "MVars to abstract, topologically sorting the abstracted variables"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__9 = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosure___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__0;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosure___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__1;
static const lean_array_object l_Lean_Meta_Closure_mkValueTypeClosure___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__2 = (const lean_object*)&l_Lean_Meta_Closure_mkValueTypeClosure___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosure___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__3;
static const lean_string_object l_Lean_Meta_Closure_mkValueTypeClosure___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Meta.Closure.mkValueTypeClosure"};
static const lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__4 = (const lean_object*)&l_Lean_Meta_Closure_mkValueTypeClosure___closed__4_value;
static const lean_string_object l_Lean_Meta_Closure_mkValueTypeClosure___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 124, .m_capacity = 124, .m_length = 123, .m_data = "assertion violation: !value.hasFVar  -- In case https://github.com/leanprover/lean4/issues/10705 resurfaces in a new way\n  "};
static const lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__5 = (const lean_object*)&l_Lean_Meta_Closure_mkValueTypeClosure___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Closure_mkValueTypeClosure___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosure(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinition(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinitionFor(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinitionFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxTheorem(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = l_Lean_instInhabitedFVarId_default;
v___x_2_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2_, 0, v___x_1_);
lean_ctor_set(v___x_2_, 1, v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_instInhabitedToProcessElement_default(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_obj_once(&l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0, &l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0_once, _init_l_Lean_Meta_Closure_instInhabitedToProcessElement_default___closed__0);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_instInhabitedToProcessElement(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = l_Lean_Meta_Closure_instInhabitedToProcessElement_default;
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitLevel(lean_object* v_f_7_, lean_object* v_u_8_, uint8_t v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_, lean_object* v_a_13_, lean_object* v_a_14_){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; uint8_t v___x_62_; 
v___x_16_ = ((lean_object*)(l_Lean_Meta_Closure_visitLevel___closed__0));
v___x_17_ = ((lean_object*)(l_Lean_Meta_Closure_visitLevel___closed__1));
v___x_62_ = l_Lean_Level_hasMVar(v_u_8_);
if (v___x_62_ == 0)
{
uint8_t v___x_63_; 
v___x_63_ = l_Lean_Level_hasParam(v_u_8_);
if (v___x_63_ == 0)
{
lean_object* v___x_64_; 
lean_dec_ref(v_f_7_);
v___x_64_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_64_, 0, v_u_8_);
return v___x_64_;
}
else
{
goto v___jp_18_;
}
}
else
{
goto v___jp_18_;
}
v___jp_18_:
{
lean_object* v___x_19_; lean_object* v_visitedLevel_20_; lean_object* v___x_21_; 
v___x_19_ = lean_st_ref_get(v_a_10_);
v_visitedLevel_20_ = lean_ctor_get(v___x_19_, 0);
lean_inc_ref(v_visitedLevel_20_);
lean_dec(v___x_19_);
lean_inc(v_u_8_);
v___x_21_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_16_, v___x_17_, v_visitedLevel_20_, v_u_8_);
lean_dec_ref(v_visitedLevel_20_);
if (lean_obj_tag(v___x_21_) == 0)
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_box(v_a_9_);
lean_inc(v_a_14_);
lean_inc_ref(v_a_13_);
lean_inc(v_a_12_);
lean_inc_ref(v_a_11_);
lean_inc(v_a_10_);
lean_inc(v_u_8_);
v___x_23_ = lean_apply_8(v_f_7_, v_u_8_, v___x_22_, v_a_10_, v_a_11_, v_a_12_, v_a_13_, v_a_14_, lean_box(0));
if (lean_obj_tag(v___x_23_) == 0)
{
lean_object* v_a_24_; lean_object* v___x_26_; uint8_t v_isShared_27_; uint8_t v_isSharedCheck_53_; 
v_a_24_ = lean_ctor_get(v___x_23_, 0);
v_isSharedCheck_53_ = !lean_is_exclusive(v___x_23_);
if (v_isSharedCheck_53_ == 0)
{
v___x_26_ = v___x_23_;
v_isShared_27_ = v_isSharedCheck_53_;
goto v_resetjp_25_;
}
else
{
lean_inc(v_a_24_);
lean_dec(v___x_23_);
v___x_26_ = lean_box(0);
v_isShared_27_ = v_isSharedCheck_53_;
goto v_resetjp_25_;
}
v_resetjp_25_:
{
lean_object* v___x_28_; lean_object* v_visitedLevel_29_; lean_object* v_visitedExpr_30_; lean_object* v_levelParams_31_; lean_object* v_nextLevelIdx_32_; lean_object* v_levelArgs_33_; lean_object* v_newLocalDecls_34_; lean_object* v_newLocalDeclsForMVars_35_; lean_object* v_newLetDecls_36_; lean_object* v_nextExprIdx_37_; lean_object* v_exprMVarArgs_38_; lean_object* v_exprFVarArgs_39_; lean_object* v_toProcess_40_; lean_object* v___x_42_; uint8_t v_isShared_43_; uint8_t v_isSharedCheck_52_; 
v___x_28_ = lean_st_ref_take(v_a_10_);
v_visitedLevel_29_ = lean_ctor_get(v___x_28_, 0);
v_visitedExpr_30_ = lean_ctor_get(v___x_28_, 1);
v_levelParams_31_ = lean_ctor_get(v___x_28_, 2);
v_nextLevelIdx_32_ = lean_ctor_get(v___x_28_, 3);
v_levelArgs_33_ = lean_ctor_get(v___x_28_, 4);
v_newLocalDecls_34_ = lean_ctor_get(v___x_28_, 5);
v_newLocalDeclsForMVars_35_ = lean_ctor_get(v___x_28_, 6);
v_newLetDecls_36_ = lean_ctor_get(v___x_28_, 7);
v_nextExprIdx_37_ = lean_ctor_get(v___x_28_, 8);
v_exprMVarArgs_38_ = lean_ctor_get(v___x_28_, 9);
v_exprFVarArgs_39_ = lean_ctor_get(v___x_28_, 10);
v_toProcess_40_ = lean_ctor_get(v___x_28_, 11);
v_isSharedCheck_52_ = !lean_is_exclusive(v___x_28_);
if (v_isSharedCheck_52_ == 0)
{
v___x_42_ = v___x_28_;
v_isShared_43_ = v_isSharedCheck_52_;
goto v_resetjp_41_;
}
else
{
lean_inc(v_toProcess_40_);
lean_inc(v_exprFVarArgs_39_);
lean_inc(v_exprMVarArgs_38_);
lean_inc(v_nextExprIdx_37_);
lean_inc(v_newLetDecls_36_);
lean_inc(v_newLocalDeclsForMVars_35_);
lean_inc(v_newLocalDecls_34_);
lean_inc(v_levelArgs_33_);
lean_inc(v_nextLevelIdx_32_);
lean_inc(v_levelParams_31_);
lean_inc(v_visitedExpr_30_);
lean_inc(v_visitedLevel_29_);
lean_dec(v___x_28_);
v___x_42_ = lean_box(0);
v_isShared_43_ = v_isSharedCheck_52_;
goto v_resetjp_41_;
}
v_resetjp_41_:
{
lean_object* v___x_44_; lean_object* v___x_46_; 
lean_inc(v_a_24_);
v___x_44_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_16_, v___x_17_, v_visitedLevel_29_, v_u_8_, v_a_24_);
if (v_isShared_43_ == 0)
{
lean_ctor_set(v___x_42_, 0, v___x_44_);
v___x_46_ = v___x_42_;
goto v_reusejp_45_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v___x_44_);
lean_ctor_set(v_reuseFailAlloc_51_, 1, v_visitedExpr_30_);
lean_ctor_set(v_reuseFailAlloc_51_, 2, v_levelParams_31_);
lean_ctor_set(v_reuseFailAlloc_51_, 3, v_nextLevelIdx_32_);
lean_ctor_set(v_reuseFailAlloc_51_, 4, v_levelArgs_33_);
lean_ctor_set(v_reuseFailAlloc_51_, 5, v_newLocalDecls_34_);
lean_ctor_set(v_reuseFailAlloc_51_, 6, v_newLocalDeclsForMVars_35_);
lean_ctor_set(v_reuseFailAlloc_51_, 7, v_newLetDecls_36_);
lean_ctor_set(v_reuseFailAlloc_51_, 8, v_nextExprIdx_37_);
lean_ctor_set(v_reuseFailAlloc_51_, 9, v_exprMVarArgs_38_);
lean_ctor_set(v_reuseFailAlloc_51_, 10, v_exprFVarArgs_39_);
lean_ctor_set(v_reuseFailAlloc_51_, 11, v_toProcess_40_);
v___x_46_ = v_reuseFailAlloc_51_;
goto v_reusejp_45_;
}
v_reusejp_45_:
{
lean_object* v___x_47_; lean_object* v___x_49_; 
v___x_47_ = lean_st_ref_put(v_a_10_, v___x_46_);
if (v_isShared_27_ == 0)
{
v___x_49_ = v___x_26_;
goto v_reusejp_48_;
}
else
{
lean_object* v_reuseFailAlloc_50_; 
v_reuseFailAlloc_50_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_50_, 0, v_a_24_);
v___x_49_ = v_reuseFailAlloc_50_;
goto v_reusejp_48_;
}
v_reusejp_48_:
{
return v___x_49_;
}
}
}
}
}
else
{
lean_dec(v_u_8_);
return v___x_23_;
}
}
else
{
lean_object* v_val_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_61_; 
lean_dec(v_u_8_);
lean_dec_ref(v_f_7_);
v_val_54_ = lean_ctor_get(v___x_21_, 0);
v_isSharedCheck_61_ = !lean_is_exclusive(v___x_21_);
if (v_isSharedCheck_61_ == 0)
{
v___x_56_ = v___x_21_;
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
else
{
lean_inc(v_val_54_);
lean_dec(v___x_21_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v___x_59_; 
if (v_isShared_57_ == 0)
{
lean_ctor_set_tag(v___x_56_, 0);
v___x_59_ = v___x_56_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v_val_54_);
v___x_59_ = v_reuseFailAlloc_60_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
return v___x_59_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitLevel___boxed(lean_object* v_f_65_, lean_object* v_u_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_){
_start:
{
uint8_t v_a_boxed_74_; lean_object* v_res_75_; 
v_a_boxed_74_ = lean_unbox(v_a_67_);
v_res_75_ = l_Lean_Meta_Closure_visitLevel(v_f_65_, v_u_66_, v_a_boxed_74_, v_a_68_, v_a_69_, v_a_70_, v_a_71_, v_a_72_);
lean_dec(v_a_72_);
lean_dec_ref(v_a_71_);
lean_dec(v_a_70_);
lean_dec_ref(v_a_69_);
lean_dec(v_a_68_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitExpr(lean_object* v_f_78_, lean_object* v_e_79_, uint8_t v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; uint8_t v___x_133_; 
v___x_87_ = ((lean_object*)(l_Lean_Meta_Closure_visitExpr___closed__0));
v___x_88_ = ((lean_object*)(l_Lean_Meta_Closure_visitExpr___closed__1));
v___x_133_ = l_Lean_Expr_hasLevelParam(v_e_79_);
if (v___x_133_ == 0)
{
uint8_t v___x_134_; 
v___x_134_ = l_Lean_Expr_hasFVar(v_e_79_);
if (v___x_134_ == 0)
{
uint8_t v___x_135_; 
v___x_135_ = l_Lean_Expr_hasMVar(v_e_79_);
if (v___x_135_ == 0)
{
lean_object* v___x_136_; 
lean_dec_ref(v_f_78_);
v___x_136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_136_, 0, v_e_79_);
return v___x_136_;
}
else
{
goto v___jp_89_;
}
}
else
{
goto v___jp_89_;
}
}
else
{
goto v___jp_89_;
}
v___jp_89_:
{
lean_object* v___x_90_; lean_object* v_visitedExpr_91_; lean_object* v___x_92_; 
v___x_90_ = lean_st_ref_get(v_a_81_);
v_visitedExpr_91_ = lean_ctor_get(v___x_90_, 1);
lean_inc_ref(v_visitedExpr_91_);
lean_dec(v___x_90_);
lean_inc_ref(v_e_79_);
v___x_92_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_87_, v___x_88_, v_visitedExpr_91_, v_e_79_);
lean_dec_ref(v_visitedExpr_91_);
if (lean_obj_tag(v___x_92_) == 0)
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = lean_box(v_a_80_);
lean_inc(v_a_85_);
lean_inc_ref(v_a_84_);
lean_inc(v_a_83_);
lean_inc_ref(v_a_82_);
lean_inc(v_a_81_);
lean_inc_ref(v_e_79_);
v___x_94_ = lean_apply_8(v_f_78_, v_e_79_, v___x_93_, v_a_81_, v_a_82_, v_a_83_, v_a_84_, v_a_85_, lean_box(0));
if (lean_obj_tag(v___x_94_) == 0)
{
lean_object* v_a_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_124_; 
v_a_95_ = lean_ctor_get(v___x_94_, 0);
v_isSharedCheck_124_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_124_ == 0)
{
v___x_97_ = v___x_94_;
v_isShared_98_ = v_isSharedCheck_124_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_a_95_);
lean_dec(v___x_94_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_124_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_99_; lean_object* v_visitedLevel_100_; lean_object* v_visitedExpr_101_; lean_object* v_levelParams_102_; lean_object* v_nextLevelIdx_103_; lean_object* v_levelArgs_104_; lean_object* v_newLocalDecls_105_; lean_object* v_newLocalDeclsForMVars_106_; lean_object* v_newLetDecls_107_; lean_object* v_nextExprIdx_108_; lean_object* v_exprMVarArgs_109_; lean_object* v_exprFVarArgs_110_; lean_object* v_toProcess_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_123_; 
v___x_99_ = lean_st_ref_take(v_a_81_);
v_visitedLevel_100_ = lean_ctor_get(v___x_99_, 0);
v_visitedExpr_101_ = lean_ctor_get(v___x_99_, 1);
v_levelParams_102_ = lean_ctor_get(v___x_99_, 2);
v_nextLevelIdx_103_ = lean_ctor_get(v___x_99_, 3);
v_levelArgs_104_ = lean_ctor_get(v___x_99_, 4);
v_newLocalDecls_105_ = lean_ctor_get(v___x_99_, 5);
v_newLocalDeclsForMVars_106_ = lean_ctor_get(v___x_99_, 6);
v_newLetDecls_107_ = lean_ctor_get(v___x_99_, 7);
v_nextExprIdx_108_ = lean_ctor_get(v___x_99_, 8);
v_exprMVarArgs_109_ = lean_ctor_get(v___x_99_, 9);
v_exprFVarArgs_110_ = lean_ctor_get(v___x_99_, 10);
v_toProcess_111_ = lean_ctor_get(v___x_99_, 11);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_123_ == 0)
{
v___x_113_ = v___x_99_;
v_isShared_114_ = v_isSharedCheck_123_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_toProcess_111_);
lean_inc(v_exprFVarArgs_110_);
lean_inc(v_exprMVarArgs_109_);
lean_inc(v_nextExprIdx_108_);
lean_inc(v_newLetDecls_107_);
lean_inc(v_newLocalDeclsForMVars_106_);
lean_inc(v_newLocalDecls_105_);
lean_inc(v_levelArgs_104_);
lean_inc(v_nextLevelIdx_103_);
lean_inc(v_levelParams_102_);
lean_inc(v_visitedExpr_101_);
lean_inc(v_visitedLevel_100_);
lean_dec(v___x_99_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_123_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_115_; lean_object* v___x_117_; 
lean_inc(v_a_95_);
v___x_115_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_87_, v___x_88_, v_visitedExpr_101_, v_e_79_, v_a_95_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 1, v___x_115_);
v___x_117_ = v___x_113_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v_visitedLevel_100_);
lean_ctor_set(v_reuseFailAlloc_122_, 1, v___x_115_);
lean_ctor_set(v_reuseFailAlloc_122_, 2, v_levelParams_102_);
lean_ctor_set(v_reuseFailAlloc_122_, 3, v_nextLevelIdx_103_);
lean_ctor_set(v_reuseFailAlloc_122_, 4, v_levelArgs_104_);
lean_ctor_set(v_reuseFailAlloc_122_, 5, v_newLocalDecls_105_);
lean_ctor_set(v_reuseFailAlloc_122_, 6, v_newLocalDeclsForMVars_106_);
lean_ctor_set(v_reuseFailAlloc_122_, 7, v_newLetDecls_107_);
lean_ctor_set(v_reuseFailAlloc_122_, 8, v_nextExprIdx_108_);
lean_ctor_set(v_reuseFailAlloc_122_, 9, v_exprMVarArgs_109_);
lean_ctor_set(v_reuseFailAlloc_122_, 10, v_exprFVarArgs_110_);
lean_ctor_set(v_reuseFailAlloc_122_, 11, v_toProcess_111_);
v___x_117_ = v_reuseFailAlloc_122_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
lean_object* v___x_118_; lean_object* v___x_120_; 
v___x_118_ = lean_st_ref_put(v_a_81_, v___x_117_);
if (v_isShared_98_ == 0)
{
v___x_120_ = v___x_97_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_a_95_);
v___x_120_ = v_reuseFailAlloc_121_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
return v___x_120_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_79_);
return v___x_94_;
}
}
else
{
lean_object* v_val_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_132_; 
lean_dec_ref(v_e_79_);
lean_dec_ref(v_f_78_);
v_val_125_ = lean_ctor_get(v___x_92_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v___x_92_);
if (v_isSharedCheck_132_ == 0)
{
v___x_127_ = v___x_92_;
v_isShared_128_ = v_isSharedCheck_132_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_val_125_);
lean_dec(v___x_92_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_132_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_130_; 
if (v_isShared_128_ == 0)
{
lean_ctor_set_tag(v___x_127_, 0);
v___x_130_ = v___x_127_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_val_125_);
v___x_130_ = v_reuseFailAlloc_131_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
return v___x_130_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_visitExpr___boxed(lean_object* v_f_137_, lean_object* v_e_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_){
_start:
{
uint8_t v_a_boxed_146_; lean_object* v_res_147_; 
v_a_boxed_146_ = lean_unbox(v_a_139_);
v_res_147_ = l_Lean_Meta_Closure_visitExpr(v_f_137_, v_e_138_, v_a_boxed_146_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_);
lean_dec(v_a_144_);
lean_dec_ref(v_a_143_);
lean_dec(v_a_142_);
lean_dec_ref(v_a_141_);
lean_dec(v_a_140_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg(lean_object* v_u_151_, lean_object* v_a_152_){
_start:
{
lean_object* v___x_154_; lean_object* v_nextLevelIdx_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v_visitedLevel_159_; lean_object* v_visitedExpr_160_; lean_object* v_levelParams_161_; lean_object* v_nextLevelIdx_162_; lean_object* v_levelArgs_163_; lean_object* v_newLocalDecls_164_; lean_object* v_newLocalDeclsForMVars_165_; lean_object* v_newLetDecls_166_; lean_object* v_nextExprIdx_167_; lean_object* v_exprMVarArgs_168_; lean_object* v_exprFVarArgs_169_; lean_object* v_toProcess_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_184_; 
v___x_154_ = lean_st_ref_get(v_a_152_);
v_nextLevelIdx_155_ = lean_ctor_get(v___x_154_, 3);
lean_inc(v_nextLevelIdx_155_);
lean_dec(v___x_154_);
v___x_156_ = ((lean_object*)(l_Lean_Meta_Closure_mkNewLevelParam___redArg___closed__1));
v___x_157_ = lean_name_append_index_after(v___x_156_, v_nextLevelIdx_155_);
v___x_158_ = lean_st_ref_take(v_a_152_);
v_visitedLevel_159_ = lean_ctor_get(v___x_158_, 0);
v_visitedExpr_160_ = lean_ctor_get(v___x_158_, 1);
v_levelParams_161_ = lean_ctor_get(v___x_158_, 2);
v_nextLevelIdx_162_ = lean_ctor_get(v___x_158_, 3);
v_levelArgs_163_ = lean_ctor_get(v___x_158_, 4);
v_newLocalDecls_164_ = lean_ctor_get(v___x_158_, 5);
v_newLocalDeclsForMVars_165_ = lean_ctor_get(v___x_158_, 6);
v_newLetDecls_166_ = lean_ctor_get(v___x_158_, 7);
v_nextExprIdx_167_ = lean_ctor_get(v___x_158_, 8);
v_exprMVarArgs_168_ = lean_ctor_get(v___x_158_, 9);
v_exprFVarArgs_169_ = lean_ctor_get(v___x_158_, 10);
v_toProcess_170_ = lean_ctor_get(v___x_158_, 11);
v_isSharedCheck_184_ = !lean_is_exclusive(v___x_158_);
if (v_isSharedCheck_184_ == 0)
{
v___x_172_ = v___x_158_;
v_isShared_173_ = v_isSharedCheck_184_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_toProcess_170_);
lean_inc(v_exprFVarArgs_169_);
lean_inc(v_exprMVarArgs_168_);
lean_inc(v_nextExprIdx_167_);
lean_inc(v_newLetDecls_166_);
lean_inc(v_newLocalDeclsForMVars_165_);
lean_inc(v_newLocalDecls_164_);
lean_inc(v_levelArgs_163_);
lean_inc(v_nextLevelIdx_162_);
lean_inc(v_levelParams_161_);
lean_inc(v_visitedExpr_160_);
lean_inc(v_visitedLevel_159_);
lean_dec(v___x_158_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_184_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_179_; 
lean_inc(v___x_157_);
v___x_174_ = lean_array_push(v_levelParams_161_, v___x_157_);
v___x_175_ = lean_unsigned_to_nat(1u);
v___x_176_ = lean_nat_add(v_nextLevelIdx_162_, v___x_175_);
lean_dec(v_nextLevelIdx_162_);
v___x_177_ = lean_array_push(v_levelArgs_163_, v_u_151_);
if (v_isShared_173_ == 0)
{
lean_ctor_set(v___x_172_, 4, v___x_177_);
lean_ctor_set(v___x_172_, 3, v___x_176_);
lean_ctor_set(v___x_172_, 2, v___x_174_);
v___x_179_ = v___x_172_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_visitedLevel_159_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v_visitedExpr_160_);
lean_ctor_set(v_reuseFailAlloc_183_, 2, v___x_174_);
lean_ctor_set(v_reuseFailAlloc_183_, 3, v___x_176_);
lean_ctor_set(v_reuseFailAlloc_183_, 4, v___x_177_);
lean_ctor_set(v_reuseFailAlloc_183_, 5, v_newLocalDecls_164_);
lean_ctor_set(v_reuseFailAlloc_183_, 6, v_newLocalDeclsForMVars_165_);
lean_ctor_set(v_reuseFailAlloc_183_, 7, v_newLetDecls_166_);
lean_ctor_set(v_reuseFailAlloc_183_, 8, v_nextExprIdx_167_);
lean_ctor_set(v_reuseFailAlloc_183_, 9, v_exprMVarArgs_168_);
lean_ctor_set(v_reuseFailAlloc_183_, 10, v_exprFVarArgs_169_);
lean_ctor_set(v_reuseFailAlloc_183_, 11, v_toProcess_170_);
v___x_179_ = v_reuseFailAlloc_183_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_180_ = lean_st_ref_put(v_a_152_, v___x_179_);
v___x_181_ = l_Lean_mkLevelParam(v___x_157_);
v___x_182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
return v___x_182_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___redArg___boxed(lean_object* v_u_185_, lean_object* v_a_186_, lean_object* v_a_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l_Lean_Meta_Closure_mkNewLevelParam___redArg(v_u_185_, v_a_186_);
lean_dec(v_a_186_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam(lean_object* v_u_189_, uint8_t v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = l_Lean_Meta_Closure_mkNewLevelParam___redArg(v_u_189_, v_a_191_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNewLevelParam___boxed(lean_object* v_u_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_, lean_object* v_a_204_, lean_object* v_a_205_){
_start:
{
uint8_t v_a_boxed_206_; lean_object* v_res_207_; 
v_a_boxed_206_ = lean_unbox(v_a_199_);
v_res_207_ = l_Lean_Meta_Closure_mkNewLevelParam(v_u_198_, v_a_boxed_206_, v_a_200_, v_a_201_, v_a_202_, v_a_203_, v_a_204_);
lean_dec(v_a_204_);
lean_dec_ref(v_a_203_);
lean_dec(v_a_202_);
lean_dec_ref(v_a_201_);
lean_dec(v_a_200_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_collectLevelAux_spec__0(lean_object* v_msg_208_){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = l_Lean_instInhabitedLevel;
v___x_210_ = lean_panic_fn_borrowed(v___x_209_, v_msg_208_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg(lean_object* v_a_211_, lean_object* v_x_212_){
_start:
{
if (lean_obj_tag(v_x_212_) == 0)
{
lean_object* v___x_213_; 
v___x_213_ = lean_box(0);
return v___x_213_;
}
else
{
lean_object* v_key_214_; lean_object* v_value_215_; lean_object* v_tail_216_; uint8_t v___x_217_; 
v_key_214_ = lean_ctor_get(v_x_212_, 0);
v_value_215_ = lean_ctor_get(v_x_212_, 1);
v_tail_216_ = lean_ctor_get(v_x_212_, 2);
v___x_217_ = lean_level_eq(v_key_214_, v_a_211_);
if (v___x_217_ == 0)
{
v_x_212_ = v_tail_216_;
goto _start;
}
else
{
lean_object* v___x_219_; 
lean_inc(v_value_215_);
v___x_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_219_, 0, v_value_215_);
return v___x_219_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg___boxed(lean_object* v_a_220_, lean_object* v_x_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg(v_a_220_, v_x_221_);
lean_dec(v_x_221_);
lean_dec(v_a_220_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(lean_object* v_m_223_, lean_object* v_a_224_){
_start:
{
lean_object* v_buckets_225_; lean_object* v___x_226_; uint64_t v___x_227_; uint64_t v___x_228_; uint64_t v___x_229_; uint64_t v_fold_230_; uint64_t v___x_231_; uint64_t v___x_232_; uint64_t v___x_233_; size_t v___x_234_; size_t v___x_235_; size_t v___x_236_; size_t v___x_237_; size_t v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v_buckets_225_ = lean_ctor_get(v_m_223_, 1);
v___x_226_ = lean_array_get_size(v_buckets_225_);
v___x_227_ = l_Lean_Level_hash(v_a_224_);
v___x_228_ = 32ULL;
v___x_229_ = lean_uint64_shift_right(v___x_227_, v___x_228_);
v_fold_230_ = lean_uint64_xor(v___x_227_, v___x_229_);
v___x_231_ = 16ULL;
v___x_232_ = lean_uint64_shift_right(v_fold_230_, v___x_231_);
v___x_233_ = lean_uint64_xor(v_fold_230_, v___x_232_);
v___x_234_ = lean_uint64_to_usize(v___x_233_);
v___x_235_ = lean_usize_of_nat(v___x_226_);
v___x_236_ = ((size_t)1ULL);
v___x_237_ = lean_usize_sub(v___x_235_, v___x_236_);
v___x_238_ = lean_usize_land(v___x_234_, v___x_237_);
v___x_239_ = lean_array_uget_borrowed(v_buckets_225_, v___x_238_);
v___x_240_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg(v_a_224_, v___x_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg___boxed(lean_object* v_m_241_, lean_object* v_a_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_m_241_, v_a_242_);
lean_dec(v_a_242_);
lean_dec_ref(v_m_241_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6___redArg(lean_object* v_x_244_, lean_object* v_x_245_){
_start:
{
if (lean_obj_tag(v_x_245_) == 0)
{
return v_x_244_;
}
else
{
lean_object* v_key_246_; lean_object* v_value_247_; lean_object* v_tail_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_271_; 
v_key_246_ = lean_ctor_get(v_x_245_, 0);
v_value_247_ = lean_ctor_get(v_x_245_, 1);
v_tail_248_ = lean_ctor_get(v_x_245_, 2);
v_isSharedCheck_271_ = !lean_is_exclusive(v_x_245_);
if (v_isSharedCheck_271_ == 0)
{
v___x_250_ = v_x_245_;
v_isShared_251_ = v_isSharedCheck_271_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_tail_248_);
lean_inc(v_value_247_);
lean_inc(v_key_246_);
lean_dec(v_x_245_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_271_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_252_; uint64_t v___x_253_; uint64_t v___x_254_; uint64_t v___x_255_; uint64_t v_fold_256_; uint64_t v___x_257_; uint64_t v___x_258_; uint64_t v___x_259_; size_t v___x_260_; size_t v___x_261_; size_t v___x_262_; size_t v___x_263_; size_t v___x_264_; lean_object* v___x_265_; lean_object* v___x_267_; 
v___x_252_ = lean_array_get_size(v_x_244_);
v___x_253_ = l_Lean_Level_hash(v_key_246_);
v___x_254_ = 32ULL;
v___x_255_ = lean_uint64_shift_right(v___x_253_, v___x_254_);
v_fold_256_ = lean_uint64_xor(v___x_253_, v___x_255_);
v___x_257_ = 16ULL;
v___x_258_ = lean_uint64_shift_right(v_fold_256_, v___x_257_);
v___x_259_ = lean_uint64_xor(v_fold_256_, v___x_258_);
v___x_260_ = lean_uint64_to_usize(v___x_259_);
v___x_261_ = lean_usize_of_nat(v___x_252_);
v___x_262_ = ((size_t)1ULL);
v___x_263_ = lean_usize_sub(v___x_261_, v___x_262_);
v___x_264_ = lean_usize_land(v___x_260_, v___x_263_);
v___x_265_ = lean_array_uget_borrowed(v_x_244_, v___x_264_);
lean_inc(v___x_265_);
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 2, v___x_265_);
v___x_267_ = v___x_250_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_key_246_);
lean_ctor_set(v_reuseFailAlloc_270_, 1, v_value_247_);
lean_ctor_set(v_reuseFailAlloc_270_, 2, v___x_265_);
v___x_267_ = v_reuseFailAlloc_270_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
lean_object* v___x_268_; 
v___x_268_ = lean_array_uset(v_x_244_, v___x_264_, v___x_267_);
v_x_244_ = v___x_268_;
v_x_245_ = v_tail_248_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5___redArg(lean_object* v_i_272_, lean_object* v_source_273_, lean_object* v_target_274_){
_start:
{
lean_object* v___x_275_; uint8_t v___x_276_; 
v___x_275_ = lean_array_get_size(v_source_273_);
v___x_276_ = lean_nat_dec_lt(v_i_272_, v___x_275_);
if (v___x_276_ == 0)
{
lean_dec_ref(v_source_273_);
lean_dec(v_i_272_);
return v_target_274_;
}
else
{
lean_object* v_es_277_; lean_object* v___x_278_; lean_object* v_source_279_; lean_object* v_target_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v_es_277_ = lean_array_fget(v_source_273_, v_i_272_);
v___x_278_ = lean_box(0);
v_source_279_ = lean_array_fset(v_source_273_, v_i_272_, v___x_278_);
v_target_280_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6___redArg(v_target_274_, v_es_277_);
v___x_281_ = lean_unsigned_to_nat(1u);
v___x_282_ = lean_nat_add(v_i_272_, v___x_281_);
lean_dec(v_i_272_);
v_i_272_ = v___x_282_;
v_source_273_ = v_source_279_;
v_target_274_ = v_target_280_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4___redArg(lean_object* v_data_284_){
_start:
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v_nbuckets_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_285_ = lean_array_get_size(v_data_284_);
v___x_286_ = lean_unsigned_to_nat(2u);
v_nbuckets_287_ = lean_nat_mul(v___x_285_, v___x_286_);
v___x_288_ = lean_unsigned_to_nat(0u);
v___x_289_ = lean_box(0);
v___x_290_ = lean_mk_array(v_nbuckets_287_, v___x_289_);
v___x_291_ = lean_array_propagate_mark(v_data_284_, v___x_290_);
v___x_292_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5___redArg(v___x_288_, v_data_284_, v___x_291_);
return v___x_292_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg(lean_object* v_a_293_, lean_object* v_x_294_){
_start:
{
if (lean_obj_tag(v_x_294_) == 0)
{
uint8_t v___x_295_; 
v___x_295_ = 0;
return v___x_295_;
}
else
{
lean_object* v_key_296_; lean_object* v_tail_297_; uint8_t v___x_298_; 
v_key_296_ = lean_ctor_get(v_x_294_, 0);
v_tail_297_ = lean_ctor_get(v_x_294_, 2);
v___x_298_ = lean_level_eq(v_key_296_, v_a_293_);
if (v___x_298_ == 0)
{
v_x_294_ = v_tail_297_;
goto _start;
}
else
{
return v___x_298_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg___boxed(lean_object* v_a_300_, lean_object* v_x_301_){
_start:
{
uint8_t v_res_302_; lean_object* v_r_303_; 
v_res_302_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg(v_a_300_, v_x_301_);
lean_dec(v_x_301_);
lean_dec(v_a_300_);
v_r_303_ = lean_box(v_res_302_);
return v_r_303_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5___redArg(lean_object* v_a_304_, lean_object* v_b_305_, lean_object* v_x_306_){
_start:
{
if (lean_obj_tag(v_x_306_) == 0)
{
lean_dec(v_b_305_);
lean_dec(v_a_304_);
return v_x_306_;
}
else
{
lean_object* v_key_307_; lean_object* v_value_308_; lean_object* v_tail_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_321_; 
v_key_307_ = lean_ctor_get(v_x_306_, 0);
v_value_308_ = lean_ctor_get(v_x_306_, 1);
v_tail_309_ = lean_ctor_get(v_x_306_, 2);
v_isSharedCheck_321_ = !lean_is_exclusive(v_x_306_);
if (v_isSharedCheck_321_ == 0)
{
v___x_311_ = v_x_306_;
v_isShared_312_ = v_isSharedCheck_321_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_tail_309_);
lean_inc(v_value_308_);
lean_inc(v_key_307_);
lean_dec(v_x_306_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_321_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
uint8_t v___x_313_; 
v___x_313_ = lean_level_eq(v_key_307_, v_a_304_);
if (v___x_313_ == 0)
{
lean_object* v___x_314_; lean_object* v___x_316_; 
v___x_314_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5___redArg(v_a_304_, v_b_305_, v_tail_309_);
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 2, v___x_314_);
v___x_316_ = v___x_311_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v_key_307_);
lean_ctor_set(v_reuseFailAlloc_317_, 1, v_value_308_);
lean_ctor_set(v_reuseFailAlloc_317_, 2, v___x_314_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
return v___x_316_;
}
}
else
{
lean_object* v___x_319_; 
lean_dec(v_value_308_);
lean_dec(v_key_307_);
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 1, v_b_305_);
lean_ctor_set(v___x_311_, 0, v_a_304_);
v___x_319_ = v___x_311_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_a_304_);
lean_ctor_set(v_reuseFailAlloc_320_, 1, v_b_305_);
lean_ctor_set(v_reuseFailAlloc_320_, 2, v_tail_309_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(lean_object* v_m_322_, lean_object* v_a_323_, lean_object* v_b_324_){
_start:
{
lean_object* v_size_325_; lean_object* v_buckets_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_369_; 
v_size_325_ = lean_ctor_get(v_m_322_, 0);
v_buckets_326_ = lean_ctor_get(v_m_322_, 1);
v_isSharedCheck_369_ = !lean_is_exclusive(v_m_322_);
if (v_isSharedCheck_369_ == 0)
{
v___x_328_ = v_m_322_;
v_isShared_329_ = v_isSharedCheck_369_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_buckets_326_);
lean_inc(v_size_325_);
lean_dec(v_m_322_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_369_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_330_; uint64_t v___x_331_; uint64_t v___x_332_; uint64_t v___x_333_; uint64_t v_fold_334_; uint64_t v___x_335_; uint64_t v___x_336_; uint64_t v___x_337_; size_t v___x_338_; size_t v___x_339_; size_t v___x_340_; size_t v___x_341_; size_t v___x_342_; lean_object* v_bkt_343_; uint8_t v___x_344_; 
v___x_330_ = lean_array_get_size(v_buckets_326_);
v___x_331_ = l_Lean_Level_hash(v_a_323_);
v___x_332_ = 32ULL;
v___x_333_ = lean_uint64_shift_right(v___x_331_, v___x_332_);
v_fold_334_ = lean_uint64_xor(v___x_331_, v___x_333_);
v___x_335_ = 16ULL;
v___x_336_ = lean_uint64_shift_right(v_fold_334_, v___x_335_);
v___x_337_ = lean_uint64_xor(v_fold_334_, v___x_336_);
v___x_338_ = lean_uint64_to_usize(v___x_337_);
v___x_339_ = lean_usize_of_nat(v___x_330_);
v___x_340_ = ((size_t)1ULL);
v___x_341_ = lean_usize_sub(v___x_339_, v___x_340_);
v___x_342_ = lean_usize_land(v___x_338_, v___x_341_);
v_bkt_343_ = lean_array_uget_borrowed(v_buckets_326_, v___x_342_);
v___x_344_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg(v_a_323_, v_bkt_343_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; lean_object* v_size_x27_346_; lean_object* v___x_347_; lean_object* v_buckets_x27_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; uint8_t v___x_354_; 
v___x_345_ = lean_unsigned_to_nat(1u);
v_size_x27_346_ = lean_nat_add(v_size_325_, v___x_345_);
lean_dec(v_size_325_);
lean_inc(v_bkt_343_);
v___x_347_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_347_, 0, v_a_323_);
lean_ctor_set(v___x_347_, 1, v_b_324_);
lean_ctor_set(v___x_347_, 2, v_bkt_343_);
v_buckets_x27_348_ = lean_array_uset(v_buckets_326_, v___x_342_, v___x_347_);
v___x_349_ = lean_unsigned_to_nat(4u);
v___x_350_ = lean_nat_mul(v_size_x27_346_, v___x_349_);
v___x_351_ = lean_unsigned_to_nat(3u);
v___x_352_ = lean_nat_div(v___x_350_, v___x_351_);
lean_dec(v___x_350_);
v___x_353_ = lean_array_get_size(v_buckets_x27_348_);
v___x_354_ = lean_nat_dec_le(v___x_352_, v___x_353_);
lean_dec(v___x_352_);
if (v___x_354_ == 0)
{
lean_object* v_val_355_; lean_object* v___x_357_; 
v_val_355_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4___redArg(v_buckets_x27_348_);
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 1, v_val_355_);
lean_ctor_set(v___x_328_, 0, v_size_x27_346_);
v___x_357_ = v___x_328_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_size_x27_346_);
lean_ctor_set(v_reuseFailAlloc_358_, 1, v_val_355_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
else
{
lean_object* v___x_360_; 
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 1, v_buckets_x27_348_);
lean_ctor_set(v___x_328_, 0, v_size_x27_346_);
v___x_360_ = v___x_328_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v_size_x27_346_);
lean_ctor_set(v_reuseFailAlloc_361_, 1, v_buckets_x27_348_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
return v___x_360_;
}
}
}
else
{
lean_object* v___x_362_; lean_object* v_buckets_x27_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_367_; 
lean_inc(v_bkt_343_);
v___x_362_ = lean_box(0);
v_buckets_x27_363_ = lean_array_uset(v_buckets_326_, v___x_342_, v___x_362_);
v___x_364_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5___redArg(v_a_323_, v_b_324_, v_bkt_343_);
v___x_365_ = lean_array_uset(v_buckets_x27_363_, v___x_342_, v___x_364_);
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 1, v___x_365_);
v___x_367_ = v___x_328_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_size_325_);
lean_ctor_set(v_reuseFailAlloc_368_, 1, v___x_365_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___redArg(lean_object* v_x_370_, lean_object* v_a_371_){
_start:
{
switch(lean_obj_tag(v_x_370_))
{
case 0:
{
lean_object* v___x_373_; 
v___x_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_373_, 0, v_x_370_);
return v___x_373_;
}
case 1:
{
lean_object* v_a_374_; lean_object* v_a_376_; uint8_t v___x_413_; 
v_a_374_ = lean_ctor_get(v_x_370_, 0);
v___x_413_ = l_Lean_Level_hasMVar(v_a_374_);
if (v___x_413_ == 0)
{
uint8_t v___x_414_; 
v___x_414_ = l_Lean_Level_hasParam(v_a_374_);
if (v___x_414_ == 0)
{
lean_inc(v_a_374_);
v_a_376_ = v_a_374_;
goto v___jp_375_;
}
else
{
goto v___jp_383_;
}
}
else
{
goto v___jp_383_;
}
v___jp_375_:
{
size_t v___x_377_; size_t v___x_378_; uint8_t v___x_379_; 
v___x_377_ = lean_ptr_addr(v_a_374_);
v___x_378_ = lean_ptr_addr(v_a_376_);
v___x_379_ = lean_usize_dec_eq(v___x_377_, v___x_378_);
if (v___x_379_ == 0)
{
lean_object* v___x_380_; lean_object* v___x_381_; 
lean_dec_ref_known(v_x_370_, 1);
v___x_380_ = l_Lean_Level_succ___override(v_a_376_);
v___x_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_381_, 0, v___x_380_);
return v___x_381_;
}
else
{
lean_object* v___x_382_; 
lean_dec(v_a_376_);
v___x_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_382_, 0, v_x_370_);
return v___x_382_;
}
}
v___jp_383_:
{
lean_object* v___x_384_; lean_object* v_visitedLevel_385_; lean_object* v___x_386_; 
v___x_384_ = lean_st_ref_get(v_a_371_);
v_visitedLevel_385_ = lean_ctor_get(v___x_384_, 0);
lean_inc_ref(v_visitedLevel_385_);
lean_dec(v___x_384_);
v___x_386_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_385_, v_a_374_);
lean_dec_ref(v_visitedLevel_385_);
if (lean_obj_tag(v___x_386_) == 0)
{
lean_object* v___x_387_; 
lean_inc(v_a_374_);
v___x_387_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_a_374_, v_a_371_);
if (lean_obj_tag(v___x_387_) == 0)
{
lean_object* v_a_388_; lean_object* v___x_389_; lean_object* v_visitedLevel_390_; lean_object* v_visitedExpr_391_; lean_object* v_levelParams_392_; lean_object* v_nextLevelIdx_393_; lean_object* v_levelArgs_394_; lean_object* v_newLocalDecls_395_; lean_object* v_newLocalDeclsForMVars_396_; lean_object* v_newLetDecls_397_; lean_object* v_nextExprIdx_398_; lean_object* v_exprMVarArgs_399_; lean_object* v_exprFVarArgs_400_; lean_object* v_toProcess_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_410_; 
v_a_388_ = lean_ctor_get(v___x_387_, 0);
lean_inc(v_a_388_);
lean_dec_ref_known(v___x_387_, 1);
v___x_389_ = lean_st_ref_take(v_a_371_);
v_visitedLevel_390_ = lean_ctor_get(v___x_389_, 0);
v_visitedExpr_391_ = lean_ctor_get(v___x_389_, 1);
v_levelParams_392_ = lean_ctor_get(v___x_389_, 2);
v_nextLevelIdx_393_ = lean_ctor_get(v___x_389_, 3);
v_levelArgs_394_ = lean_ctor_get(v___x_389_, 4);
v_newLocalDecls_395_ = lean_ctor_get(v___x_389_, 5);
v_newLocalDeclsForMVars_396_ = lean_ctor_get(v___x_389_, 6);
v_newLetDecls_397_ = lean_ctor_get(v___x_389_, 7);
v_nextExprIdx_398_ = lean_ctor_get(v___x_389_, 8);
v_exprMVarArgs_399_ = lean_ctor_get(v___x_389_, 9);
v_exprFVarArgs_400_ = lean_ctor_get(v___x_389_, 10);
v_toProcess_401_ = lean_ctor_get(v___x_389_, 11);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_410_ == 0)
{
v___x_403_ = v___x_389_;
v_isShared_404_ = v_isSharedCheck_410_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_toProcess_401_);
lean_inc(v_exprFVarArgs_400_);
lean_inc(v_exprMVarArgs_399_);
lean_inc(v_nextExprIdx_398_);
lean_inc(v_newLetDecls_397_);
lean_inc(v_newLocalDeclsForMVars_396_);
lean_inc(v_newLocalDecls_395_);
lean_inc(v_levelArgs_394_);
lean_inc(v_nextLevelIdx_393_);
lean_inc(v_levelParams_392_);
lean_inc(v_visitedExpr_391_);
lean_inc(v_visitedLevel_390_);
lean_dec(v___x_389_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_410_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_405_; lean_object* v___x_407_; 
lean_inc(v_a_388_);
lean_inc(v_a_374_);
v___x_405_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_390_, v_a_374_, v_a_388_);
if (v_isShared_404_ == 0)
{
lean_ctor_set(v___x_403_, 0, v___x_405_);
v___x_407_ = v___x_403_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v___x_405_);
lean_ctor_set(v_reuseFailAlloc_409_, 1, v_visitedExpr_391_);
lean_ctor_set(v_reuseFailAlloc_409_, 2, v_levelParams_392_);
lean_ctor_set(v_reuseFailAlloc_409_, 3, v_nextLevelIdx_393_);
lean_ctor_set(v_reuseFailAlloc_409_, 4, v_levelArgs_394_);
lean_ctor_set(v_reuseFailAlloc_409_, 5, v_newLocalDecls_395_);
lean_ctor_set(v_reuseFailAlloc_409_, 6, v_newLocalDeclsForMVars_396_);
lean_ctor_set(v_reuseFailAlloc_409_, 7, v_newLetDecls_397_);
lean_ctor_set(v_reuseFailAlloc_409_, 8, v_nextExprIdx_398_);
lean_ctor_set(v_reuseFailAlloc_409_, 9, v_exprMVarArgs_399_);
lean_ctor_set(v_reuseFailAlloc_409_, 10, v_exprFVarArgs_400_);
lean_ctor_set(v_reuseFailAlloc_409_, 11, v_toProcess_401_);
v___x_407_ = v_reuseFailAlloc_409_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
lean_object* v___x_408_; 
v___x_408_ = lean_st_ref_put(v_a_371_, v___x_407_);
v_a_376_ = v_a_388_;
goto v___jp_375_;
}
}
}
else
{
if (lean_obj_tag(v___x_387_) == 0)
{
lean_object* v_a_411_; 
v_a_411_ = lean_ctor_get(v___x_387_, 0);
lean_inc(v_a_411_);
lean_dec_ref_known(v___x_387_, 1);
v_a_376_ = v_a_411_;
goto v___jp_375_;
}
else
{
lean_dec_ref_known(v_x_370_, 1);
return v___x_387_;
}
}
}
else
{
lean_object* v_val_412_; 
v_val_412_ = lean_ctor_get(v___x_386_, 0);
lean_inc(v_val_412_);
lean_dec_ref_known(v___x_386_, 1);
v_a_376_ = v_val_412_;
goto v___jp_375_;
}
}
}
case 2:
{
lean_object* v_a_415_; lean_object* v_a_416_; lean_object* v___y_418_; lean_object* v_a_419_; lean_object* v___y_433_; lean_object* v_a_464_; uint8_t v___x_497_; 
v_a_415_ = lean_ctor_get(v_x_370_, 0);
v_a_416_ = lean_ctor_get(v_x_370_, 1);
v___x_497_ = l_Lean_Level_hasMVar(v_a_415_);
if (v___x_497_ == 0)
{
uint8_t v___x_498_; 
v___x_498_ = l_Lean_Level_hasParam(v_a_415_);
if (v___x_498_ == 0)
{
lean_inc(v_a_415_);
v_a_464_ = v_a_415_;
goto v___jp_463_;
}
else
{
goto v___jp_467_;
}
}
else
{
goto v___jp_467_;
}
v___jp_417_:
{
size_t v___x_420_; size_t v___x_421_; uint8_t v___x_422_; 
v___x_420_ = lean_ptr_addr(v_a_415_);
v___x_421_ = lean_ptr_addr(v___y_418_);
v___x_422_ = lean_usize_dec_eq(v___x_420_, v___x_421_);
if (v___x_422_ == 0)
{
lean_object* v___x_423_; lean_object* v___x_424_; 
lean_dec_ref_known(v_x_370_, 2);
v___x_423_ = l_Lean_mkLevelMax_x27(v___y_418_, v_a_419_);
v___x_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_424_, 0, v___x_423_);
return v___x_424_;
}
else
{
size_t v___x_425_; size_t v___x_426_; uint8_t v___x_427_; 
v___x_425_ = lean_ptr_addr(v_a_416_);
v___x_426_ = lean_ptr_addr(v_a_419_);
v___x_427_ = lean_usize_dec_eq(v___x_425_, v___x_426_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; lean_object* v___x_429_; 
lean_dec_ref_known(v_x_370_, 2);
v___x_428_ = l_Lean_mkLevelMax_x27(v___y_418_, v_a_419_);
v___x_429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
return v___x_429_;
}
else
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = l_Lean_simpLevelMax_x27(v___y_418_, v_a_419_, v_x_370_);
lean_dec_ref_known(v_x_370_, 2);
lean_dec(v_a_419_);
lean_dec(v___y_418_);
v___x_431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
return v___x_431_;
}
}
}
v___jp_432_:
{
lean_object* v___x_434_; lean_object* v_visitedLevel_435_; lean_object* v___x_436_; 
v___x_434_ = lean_st_ref_get(v_a_371_);
v_visitedLevel_435_ = lean_ctor_get(v___x_434_, 0);
lean_inc_ref(v_visitedLevel_435_);
lean_dec(v___x_434_);
v___x_436_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_435_, v_a_416_);
lean_dec_ref(v_visitedLevel_435_);
if (lean_obj_tag(v___x_436_) == 0)
{
lean_object* v___x_437_; 
lean_inc(v_a_416_);
v___x_437_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_a_416_, v_a_371_);
if (lean_obj_tag(v___x_437_) == 0)
{
lean_object* v_a_438_; lean_object* v___x_439_; lean_object* v_visitedLevel_440_; lean_object* v_visitedExpr_441_; lean_object* v_levelParams_442_; lean_object* v_nextLevelIdx_443_; lean_object* v_levelArgs_444_; lean_object* v_newLocalDecls_445_; lean_object* v_newLocalDeclsForMVars_446_; lean_object* v_newLetDecls_447_; lean_object* v_nextExprIdx_448_; lean_object* v_exprMVarArgs_449_; lean_object* v_exprFVarArgs_450_; lean_object* v_toProcess_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_460_; 
v_a_438_ = lean_ctor_get(v___x_437_, 0);
lean_inc(v_a_438_);
lean_dec_ref_known(v___x_437_, 1);
v___x_439_ = lean_st_ref_take(v_a_371_);
v_visitedLevel_440_ = lean_ctor_get(v___x_439_, 0);
v_visitedExpr_441_ = lean_ctor_get(v___x_439_, 1);
v_levelParams_442_ = lean_ctor_get(v___x_439_, 2);
v_nextLevelIdx_443_ = lean_ctor_get(v___x_439_, 3);
v_levelArgs_444_ = lean_ctor_get(v___x_439_, 4);
v_newLocalDecls_445_ = lean_ctor_get(v___x_439_, 5);
v_newLocalDeclsForMVars_446_ = lean_ctor_get(v___x_439_, 6);
v_newLetDecls_447_ = lean_ctor_get(v___x_439_, 7);
v_nextExprIdx_448_ = lean_ctor_get(v___x_439_, 8);
v_exprMVarArgs_449_ = lean_ctor_get(v___x_439_, 9);
v_exprFVarArgs_450_ = lean_ctor_get(v___x_439_, 10);
v_toProcess_451_ = lean_ctor_get(v___x_439_, 11);
v_isSharedCheck_460_ = !lean_is_exclusive(v___x_439_);
if (v_isSharedCheck_460_ == 0)
{
v___x_453_ = v___x_439_;
v_isShared_454_ = v_isSharedCheck_460_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_toProcess_451_);
lean_inc(v_exprFVarArgs_450_);
lean_inc(v_exprMVarArgs_449_);
lean_inc(v_nextExprIdx_448_);
lean_inc(v_newLetDecls_447_);
lean_inc(v_newLocalDeclsForMVars_446_);
lean_inc(v_newLocalDecls_445_);
lean_inc(v_levelArgs_444_);
lean_inc(v_nextLevelIdx_443_);
lean_inc(v_levelParams_442_);
lean_inc(v_visitedExpr_441_);
lean_inc(v_visitedLevel_440_);
lean_dec(v___x_439_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_460_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_455_; lean_object* v___x_457_; 
lean_inc(v_a_438_);
lean_inc(v_a_416_);
v___x_455_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_440_, v_a_416_, v_a_438_);
if (v_isShared_454_ == 0)
{
lean_ctor_set(v___x_453_, 0, v___x_455_);
v___x_457_ = v___x_453_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v___x_455_);
lean_ctor_set(v_reuseFailAlloc_459_, 1, v_visitedExpr_441_);
lean_ctor_set(v_reuseFailAlloc_459_, 2, v_levelParams_442_);
lean_ctor_set(v_reuseFailAlloc_459_, 3, v_nextLevelIdx_443_);
lean_ctor_set(v_reuseFailAlloc_459_, 4, v_levelArgs_444_);
lean_ctor_set(v_reuseFailAlloc_459_, 5, v_newLocalDecls_445_);
lean_ctor_set(v_reuseFailAlloc_459_, 6, v_newLocalDeclsForMVars_446_);
lean_ctor_set(v_reuseFailAlloc_459_, 7, v_newLetDecls_447_);
lean_ctor_set(v_reuseFailAlloc_459_, 8, v_nextExprIdx_448_);
lean_ctor_set(v_reuseFailAlloc_459_, 9, v_exprMVarArgs_449_);
lean_ctor_set(v_reuseFailAlloc_459_, 10, v_exprFVarArgs_450_);
lean_ctor_set(v_reuseFailAlloc_459_, 11, v_toProcess_451_);
v___x_457_ = v_reuseFailAlloc_459_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
lean_object* v___x_458_; 
v___x_458_ = lean_st_ref_put(v_a_371_, v___x_457_);
v___y_418_ = v___y_433_;
v_a_419_ = v_a_438_;
goto v___jp_417_;
}
}
}
else
{
if (lean_obj_tag(v___x_437_) == 0)
{
lean_object* v_a_461_; 
v_a_461_ = lean_ctor_get(v___x_437_, 0);
lean_inc(v_a_461_);
lean_dec_ref_known(v___x_437_, 1);
v___y_418_ = v___y_433_;
v_a_419_ = v_a_461_;
goto v___jp_417_;
}
else
{
lean_dec(v___y_433_);
lean_dec_ref_known(v_x_370_, 2);
return v___x_437_;
}
}
}
else
{
lean_object* v_val_462_; 
v_val_462_ = lean_ctor_get(v___x_436_, 0);
lean_inc(v_val_462_);
lean_dec_ref_known(v___x_436_, 1);
v___y_418_ = v___y_433_;
v_a_419_ = v_val_462_;
goto v___jp_417_;
}
}
v___jp_463_:
{
uint8_t v___x_465_; 
v___x_465_ = l_Lean_Level_hasMVar(v_a_416_);
if (v___x_465_ == 0)
{
uint8_t v___x_466_; 
v___x_466_ = l_Lean_Level_hasParam(v_a_416_);
if (v___x_466_ == 0)
{
lean_inc(v_a_416_);
v___y_418_ = v_a_464_;
v_a_419_ = v_a_416_;
goto v___jp_417_;
}
else
{
v___y_433_ = v_a_464_;
goto v___jp_432_;
}
}
else
{
v___y_433_ = v_a_464_;
goto v___jp_432_;
}
}
v___jp_467_:
{
lean_object* v___x_468_; lean_object* v_visitedLevel_469_; lean_object* v___x_470_; 
v___x_468_ = lean_st_ref_get(v_a_371_);
v_visitedLevel_469_ = lean_ctor_get(v___x_468_, 0);
lean_inc_ref(v_visitedLevel_469_);
lean_dec(v___x_468_);
v___x_470_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_469_, v_a_415_);
lean_dec_ref(v_visitedLevel_469_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v___x_471_; 
lean_inc(v_a_415_);
v___x_471_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_a_415_, v_a_371_);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v_a_472_; lean_object* v___x_473_; lean_object* v_visitedLevel_474_; lean_object* v_visitedExpr_475_; lean_object* v_levelParams_476_; lean_object* v_nextLevelIdx_477_; lean_object* v_levelArgs_478_; lean_object* v_newLocalDecls_479_; lean_object* v_newLocalDeclsForMVars_480_; lean_object* v_newLetDecls_481_; lean_object* v_nextExprIdx_482_; lean_object* v_exprMVarArgs_483_; lean_object* v_exprFVarArgs_484_; lean_object* v_toProcess_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_494_; 
v_a_472_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_a_472_);
lean_dec_ref_known(v___x_471_, 1);
v___x_473_ = lean_st_ref_take(v_a_371_);
v_visitedLevel_474_ = lean_ctor_get(v___x_473_, 0);
v_visitedExpr_475_ = lean_ctor_get(v___x_473_, 1);
v_levelParams_476_ = lean_ctor_get(v___x_473_, 2);
v_nextLevelIdx_477_ = lean_ctor_get(v___x_473_, 3);
v_levelArgs_478_ = lean_ctor_get(v___x_473_, 4);
v_newLocalDecls_479_ = lean_ctor_get(v___x_473_, 5);
v_newLocalDeclsForMVars_480_ = lean_ctor_get(v___x_473_, 6);
v_newLetDecls_481_ = lean_ctor_get(v___x_473_, 7);
v_nextExprIdx_482_ = lean_ctor_get(v___x_473_, 8);
v_exprMVarArgs_483_ = lean_ctor_get(v___x_473_, 9);
v_exprFVarArgs_484_ = lean_ctor_get(v___x_473_, 10);
v_toProcess_485_ = lean_ctor_get(v___x_473_, 11);
v_isSharedCheck_494_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_494_ == 0)
{
v___x_487_ = v___x_473_;
v_isShared_488_ = v_isSharedCheck_494_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_toProcess_485_);
lean_inc(v_exprFVarArgs_484_);
lean_inc(v_exprMVarArgs_483_);
lean_inc(v_nextExprIdx_482_);
lean_inc(v_newLetDecls_481_);
lean_inc(v_newLocalDeclsForMVars_480_);
lean_inc(v_newLocalDecls_479_);
lean_inc(v_levelArgs_478_);
lean_inc(v_nextLevelIdx_477_);
lean_inc(v_levelParams_476_);
lean_inc(v_visitedExpr_475_);
lean_inc(v_visitedLevel_474_);
lean_dec(v___x_473_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_494_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_489_; lean_object* v___x_491_; 
lean_inc(v_a_472_);
lean_inc(v_a_415_);
v___x_489_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_474_, v_a_415_, v_a_472_);
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v___x_489_);
v___x_491_ = v___x_487_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v___x_489_);
lean_ctor_set(v_reuseFailAlloc_493_, 1, v_visitedExpr_475_);
lean_ctor_set(v_reuseFailAlloc_493_, 2, v_levelParams_476_);
lean_ctor_set(v_reuseFailAlloc_493_, 3, v_nextLevelIdx_477_);
lean_ctor_set(v_reuseFailAlloc_493_, 4, v_levelArgs_478_);
lean_ctor_set(v_reuseFailAlloc_493_, 5, v_newLocalDecls_479_);
lean_ctor_set(v_reuseFailAlloc_493_, 6, v_newLocalDeclsForMVars_480_);
lean_ctor_set(v_reuseFailAlloc_493_, 7, v_newLetDecls_481_);
lean_ctor_set(v_reuseFailAlloc_493_, 8, v_nextExprIdx_482_);
lean_ctor_set(v_reuseFailAlloc_493_, 9, v_exprMVarArgs_483_);
lean_ctor_set(v_reuseFailAlloc_493_, 10, v_exprFVarArgs_484_);
lean_ctor_set(v_reuseFailAlloc_493_, 11, v_toProcess_485_);
v___x_491_ = v_reuseFailAlloc_493_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
lean_object* v___x_492_; 
v___x_492_ = lean_st_ref_put(v_a_371_, v___x_491_);
v_a_464_ = v_a_472_;
goto v___jp_463_;
}
}
}
else
{
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v_a_495_; 
v_a_495_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_a_495_);
lean_dec_ref_known(v___x_471_, 1);
v_a_464_ = v_a_495_;
goto v___jp_463_;
}
else
{
lean_dec_ref_known(v_x_370_, 2);
return v___x_471_;
}
}
}
else
{
lean_object* v_val_496_; 
v_val_496_ = lean_ctor_get(v___x_470_, 0);
lean_inc(v_val_496_);
lean_dec_ref_known(v___x_470_, 1);
v_a_464_ = v_val_496_;
goto v___jp_463_;
}
}
}
case 3:
{
lean_object* v_a_499_; lean_object* v_a_500_; lean_object* v___y_502_; lean_object* v_a_503_; lean_object* v___y_517_; lean_object* v_a_548_; uint8_t v___x_581_; 
v_a_499_ = lean_ctor_get(v_x_370_, 0);
v_a_500_ = lean_ctor_get(v_x_370_, 1);
v___x_581_ = l_Lean_Level_hasMVar(v_a_499_);
if (v___x_581_ == 0)
{
uint8_t v___x_582_; 
v___x_582_ = l_Lean_Level_hasParam(v_a_499_);
if (v___x_582_ == 0)
{
lean_inc(v_a_499_);
v_a_548_ = v_a_499_;
goto v___jp_547_;
}
else
{
goto v___jp_551_;
}
}
else
{
goto v___jp_551_;
}
v___jp_501_:
{
size_t v___x_504_; size_t v___x_505_; uint8_t v___x_506_; 
v___x_504_ = lean_ptr_addr(v_a_499_);
v___x_505_ = lean_ptr_addr(v___y_502_);
v___x_506_ = lean_usize_dec_eq(v___x_504_, v___x_505_);
if (v___x_506_ == 0)
{
lean_object* v___x_507_; lean_object* v___x_508_; 
lean_dec_ref_known(v_x_370_, 2);
v___x_507_ = l_Lean_mkLevelIMax_x27(v___y_502_, v_a_503_);
v___x_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
return v___x_508_;
}
else
{
size_t v___x_509_; size_t v___x_510_; uint8_t v___x_511_; 
v___x_509_ = lean_ptr_addr(v_a_500_);
v___x_510_ = lean_ptr_addr(v_a_503_);
v___x_511_ = lean_usize_dec_eq(v___x_509_, v___x_510_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; lean_object* v___x_513_; 
lean_dec_ref_known(v_x_370_, 2);
v___x_512_ = l_Lean_mkLevelIMax_x27(v___y_502_, v_a_503_);
v___x_513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_513_, 0, v___x_512_);
return v___x_513_;
}
else
{
lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_514_ = l_Lean_simpLevelIMax_x27(v___y_502_, v_a_503_, v_x_370_);
lean_dec_ref_known(v_x_370_, 2);
v___x_515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_515_, 0, v___x_514_);
return v___x_515_;
}
}
}
v___jp_516_:
{
lean_object* v___x_518_; lean_object* v_visitedLevel_519_; lean_object* v___x_520_; 
v___x_518_ = lean_st_ref_get(v_a_371_);
v_visitedLevel_519_ = lean_ctor_get(v___x_518_, 0);
lean_inc_ref(v_visitedLevel_519_);
lean_dec(v___x_518_);
v___x_520_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_519_, v_a_500_);
lean_dec_ref(v_visitedLevel_519_);
if (lean_obj_tag(v___x_520_) == 0)
{
lean_object* v___x_521_; 
lean_inc(v_a_500_);
v___x_521_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_a_500_, v_a_371_);
if (lean_obj_tag(v___x_521_) == 0)
{
lean_object* v_a_522_; lean_object* v___x_523_; lean_object* v_visitedLevel_524_; lean_object* v_visitedExpr_525_; lean_object* v_levelParams_526_; lean_object* v_nextLevelIdx_527_; lean_object* v_levelArgs_528_; lean_object* v_newLocalDecls_529_; lean_object* v_newLocalDeclsForMVars_530_; lean_object* v_newLetDecls_531_; lean_object* v_nextExprIdx_532_; lean_object* v_exprMVarArgs_533_; lean_object* v_exprFVarArgs_534_; lean_object* v_toProcess_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_544_; 
v_a_522_ = lean_ctor_get(v___x_521_, 0);
lean_inc(v_a_522_);
lean_dec_ref_known(v___x_521_, 1);
v___x_523_ = lean_st_ref_take(v_a_371_);
v_visitedLevel_524_ = lean_ctor_get(v___x_523_, 0);
v_visitedExpr_525_ = lean_ctor_get(v___x_523_, 1);
v_levelParams_526_ = lean_ctor_get(v___x_523_, 2);
v_nextLevelIdx_527_ = lean_ctor_get(v___x_523_, 3);
v_levelArgs_528_ = lean_ctor_get(v___x_523_, 4);
v_newLocalDecls_529_ = lean_ctor_get(v___x_523_, 5);
v_newLocalDeclsForMVars_530_ = lean_ctor_get(v___x_523_, 6);
v_newLetDecls_531_ = lean_ctor_get(v___x_523_, 7);
v_nextExprIdx_532_ = lean_ctor_get(v___x_523_, 8);
v_exprMVarArgs_533_ = lean_ctor_get(v___x_523_, 9);
v_exprFVarArgs_534_ = lean_ctor_get(v___x_523_, 10);
v_toProcess_535_ = lean_ctor_get(v___x_523_, 11);
v_isSharedCheck_544_ = !lean_is_exclusive(v___x_523_);
if (v_isSharedCheck_544_ == 0)
{
v___x_537_ = v___x_523_;
v_isShared_538_ = v_isSharedCheck_544_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_toProcess_535_);
lean_inc(v_exprFVarArgs_534_);
lean_inc(v_exprMVarArgs_533_);
lean_inc(v_nextExprIdx_532_);
lean_inc(v_newLetDecls_531_);
lean_inc(v_newLocalDeclsForMVars_530_);
lean_inc(v_newLocalDecls_529_);
lean_inc(v_levelArgs_528_);
lean_inc(v_nextLevelIdx_527_);
lean_inc(v_levelParams_526_);
lean_inc(v_visitedExpr_525_);
lean_inc(v_visitedLevel_524_);
lean_dec(v___x_523_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_544_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_539_; lean_object* v___x_541_; 
lean_inc(v_a_522_);
lean_inc(v_a_500_);
v___x_539_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_524_, v_a_500_, v_a_522_);
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 0, v___x_539_);
v___x_541_ = v___x_537_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v___x_539_);
lean_ctor_set(v_reuseFailAlloc_543_, 1, v_visitedExpr_525_);
lean_ctor_set(v_reuseFailAlloc_543_, 2, v_levelParams_526_);
lean_ctor_set(v_reuseFailAlloc_543_, 3, v_nextLevelIdx_527_);
lean_ctor_set(v_reuseFailAlloc_543_, 4, v_levelArgs_528_);
lean_ctor_set(v_reuseFailAlloc_543_, 5, v_newLocalDecls_529_);
lean_ctor_set(v_reuseFailAlloc_543_, 6, v_newLocalDeclsForMVars_530_);
lean_ctor_set(v_reuseFailAlloc_543_, 7, v_newLetDecls_531_);
lean_ctor_set(v_reuseFailAlloc_543_, 8, v_nextExprIdx_532_);
lean_ctor_set(v_reuseFailAlloc_543_, 9, v_exprMVarArgs_533_);
lean_ctor_set(v_reuseFailAlloc_543_, 10, v_exprFVarArgs_534_);
lean_ctor_set(v_reuseFailAlloc_543_, 11, v_toProcess_535_);
v___x_541_ = v_reuseFailAlloc_543_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_542_; 
v___x_542_ = lean_st_ref_put(v_a_371_, v___x_541_);
v___y_502_ = v___y_517_;
v_a_503_ = v_a_522_;
goto v___jp_501_;
}
}
}
else
{
if (lean_obj_tag(v___x_521_) == 0)
{
lean_object* v_a_545_; 
v_a_545_ = lean_ctor_get(v___x_521_, 0);
lean_inc(v_a_545_);
lean_dec_ref_known(v___x_521_, 1);
v___y_502_ = v___y_517_;
v_a_503_ = v_a_545_;
goto v___jp_501_;
}
else
{
lean_dec(v___y_517_);
lean_dec_ref_known(v_x_370_, 2);
return v___x_521_;
}
}
}
else
{
lean_object* v_val_546_; 
v_val_546_ = lean_ctor_get(v___x_520_, 0);
lean_inc(v_val_546_);
lean_dec_ref_known(v___x_520_, 1);
v___y_502_ = v___y_517_;
v_a_503_ = v_val_546_;
goto v___jp_501_;
}
}
v___jp_547_:
{
uint8_t v___x_549_; 
v___x_549_ = l_Lean_Level_hasMVar(v_a_500_);
if (v___x_549_ == 0)
{
uint8_t v___x_550_; 
v___x_550_ = l_Lean_Level_hasParam(v_a_500_);
if (v___x_550_ == 0)
{
lean_inc(v_a_500_);
v___y_502_ = v_a_548_;
v_a_503_ = v_a_500_;
goto v___jp_501_;
}
else
{
v___y_517_ = v_a_548_;
goto v___jp_516_;
}
}
else
{
v___y_517_ = v_a_548_;
goto v___jp_516_;
}
}
v___jp_551_:
{
lean_object* v___x_552_; lean_object* v_visitedLevel_553_; lean_object* v___x_554_; 
v___x_552_ = lean_st_ref_get(v_a_371_);
v_visitedLevel_553_ = lean_ctor_get(v___x_552_, 0);
lean_inc_ref(v_visitedLevel_553_);
lean_dec(v___x_552_);
v___x_554_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_553_, v_a_499_);
lean_dec_ref(v_visitedLevel_553_);
if (lean_obj_tag(v___x_554_) == 0)
{
lean_object* v___x_555_; 
lean_inc(v_a_499_);
v___x_555_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_a_499_, v_a_371_);
if (lean_obj_tag(v___x_555_) == 0)
{
lean_object* v_a_556_; lean_object* v___x_557_; lean_object* v_visitedLevel_558_; lean_object* v_visitedExpr_559_; lean_object* v_levelParams_560_; lean_object* v_nextLevelIdx_561_; lean_object* v_levelArgs_562_; lean_object* v_newLocalDecls_563_; lean_object* v_newLocalDeclsForMVars_564_; lean_object* v_newLetDecls_565_; lean_object* v_nextExprIdx_566_; lean_object* v_exprMVarArgs_567_; lean_object* v_exprFVarArgs_568_; lean_object* v_toProcess_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_578_; 
v_a_556_ = lean_ctor_get(v___x_555_, 0);
lean_inc(v_a_556_);
lean_dec_ref_known(v___x_555_, 1);
v___x_557_ = lean_st_ref_take(v_a_371_);
v_visitedLevel_558_ = lean_ctor_get(v___x_557_, 0);
v_visitedExpr_559_ = lean_ctor_get(v___x_557_, 1);
v_levelParams_560_ = lean_ctor_get(v___x_557_, 2);
v_nextLevelIdx_561_ = lean_ctor_get(v___x_557_, 3);
v_levelArgs_562_ = lean_ctor_get(v___x_557_, 4);
v_newLocalDecls_563_ = lean_ctor_get(v___x_557_, 5);
v_newLocalDeclsForMVars_564_ = lean_ctor_get(v___x_557_, 6);
v_newLetDecls_565_ = lean_ctor_get(v___x_557_, 7);
v_nextExprIdx_566_ = lean_ctor_get(v___x_557_, 8);
v_exprMVarArgs_567_ = lean_ctor_get(v___x_557_, 9);
v_exprFVarArgs_568_ = lean_ctor_get(v___x_557_, 10);
v_toProcess_569_ = lean_ctor_get(v___x_557_, 11);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_578_ == 0)
{
v___x_571_ = v___x_557_;
v_isShared_572_ = v_isSharedCheck_578_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_toProcess_569_);
lean_inc(v_exprFVarArgs_568_);
lean_inc(v_exprMVarArgs_567_);
lean_inc(v_nextExprIdx_566_);
lean_inc(v_newLetDecls_565_);
lean_inc(v_newLocalDeclsForMVars_564_);
lean_inc(v_newLocalDecls_563_);
lean_inc(v_levelArgs_562_);
lean_inc(v_nextLevelIdx_561_);
lean_inc(v_levelParams_560_);
lean_inc(v_visitedExpr_559_);
lean_inc(v_visitedLevel_558_);
lean_dec(v___x_557_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_578_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_573_; lean_object* v___x_575_; 
lean_inc(v_a_556_);
lean_inc(v_a_499_);
v___x_573_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_558_, v_a_499_, v_a_556_);
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 0, v___x_573_);
v___x_575_ = v___x_571_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v___x_573_);
lean_ctor_set(v_reuseFailAlloc_577_, 1, v_visitedExpr_559_);
lean_ctor_set(v_reuseFailAlloc_577_, 2, v_levelParams_560_);
lean_ctor_set(v_reuseFailAlloc_577_, 3, v_nextLevelIdx_561_);
lean_ctor_set(v_reuseFailAlloc_577_, 4, v_levelArgs_562_);
lean_ctor_set(v_reuseFailAlloc_577_, 5, v_newLocalDecls_563_);
lean_ctor_set(v_reuseFailAlloc_577_, 6, v_newLocalDeclsForMVars_564_);
lean_ctor_set(v_reuseFailAlloc_577_, 7, v_newLetDecls_565_);
lean_ctor_set(v_reuseFailAlloc_577_, 8, v_nextExprIdx_566_);
lean_ctor_set(v_reuseFailAlloc_577_, 9, v_exprMVarArgs_567_);
lean_ctor_set(v_reuseFailAlloc_577_, 10, v_exprFVarArgs_568_);
lean_ctor_set(v_reuseFailAlloc_577_, 11, v_toProcess_569_);
v___x_575_ = v_reuseFailAlloc_577_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
lean_object* v___x_576_; 
v___x_576_ = lean_st_ref_put(v_a_371_, v___x_575_);
v_a_548_ = v_a_556_;
goto v___jp_547_;
}
}
}
else
{
if (lean_obj_tag(v___x_555_) == 0)
{
lean_object* v_a_579_; 
v_a_579_ = lean_ctor_get(v___x_555_, 0);
lean_inc(v_a_579_);
lean_dec_ref_known(v___x_555_, 1);
v_a_548_ = v_a_579_;
goto v___jp_547_;
}
else
{
lean_dec_ref_known(v_x_370_, 2);
return v___x_555_;
}
}
}
else
{
lean_object* v_val_580_; 
v_val_580_ = lean_ctor_get(v___x_554_, 0);
lean_inc(v_val_580_);
lean_dec_ref_known(v___x_554_, 1);
v_a_548_ = v_val_580_;
goto v___jp_547_;
}
}
}
default: 
{
lean_object* v___x_583_; 
v___x_583_ = l_Lean_Meta_Closure_mkNewLevelParam___redArg(v_x_370_, v_a_371_);
return v___x_583_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___redArg___boxed(lean_object* v_x_584_, lean_object* v_a_585_, lean_object* v_a_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_x_584_, v_a_585_);
lean_dec(v_a_585_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux(lean_object* v_x_588_, uint8_t v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_){
_start:
{
lean_object* v___x_596_; 
v___x_596_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_x_588_, v_a_590_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevelAux___boxed(lean_object* v_x_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_){
_start:
{
uint8_t v_a_boxed_605_; lean_object* v_res_606_; 
v_a_boxed_605_ = lean_unbox(v_a_598_);
v_res_606_ = l_Lean_Meta_Closure_collectLevelAux(v_x_597_, v_a_boxed_605_, v_a_599_, v_a_600_, v_a_601_, v_a_602_, v_a_603_);
lean_dec(v_a_603_);
lean_dec_ref(v_a_602_);
lean_dec(v_a_601_);
lean_dec_ref(v_a_600_);
lean_dec(v_a_599_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1(lean_object* v_00_u03b2_607_, lean_object* v_m_608_, lean_object* v_a_609_){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_m_608_, v_a_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___boxed(lean_object* v_00_u03b2_611_, lean_object* v_m_612_, lean_object* v_a_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1(v_00_u03b2_611_, v_m_612_, v_a_613_);
lean_dec(v_a_613_);
lean_dec_ref(v_m_612_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2(lean_object* v_00_u03b2_615_, lean_object* v_m_616_, lean_object* v_a_617_, lean_object* v_b_618_){
_start:
{
lean_object* v___x_619_; 
v___x_619_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_m_616_, v_a_617_, v_b_618_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1(lean_object* v_00_u03b2_620_, lean_object* v_a_621_, lean_object* v_x_622_){
_start:
{
lean_object* v___x_623_; 
v___x_623_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___redArg(v_a_621_, v_x_622_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1___boxed(lean_object* v_00_u03b2_624_, lean_object* v_a_625_, lean_object* v_x_626_){
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1_spec__1(v_00_u03b2_624_, v_a_625_, v_x_626_);
lean_dec(v_x_626_);
lean_dec(v_a_625_);
return v_res_627_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3(lean_object* v_00_u03b2_628_, lean_object* v_a_629_, lean_object* v_x_630_){
_start:
{
uint8_t v___x_631_; 
v___x_631_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___redArg(v_a_629_, v_x_630_);
return v___x_631_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3___boxed(lean_object* v_00_u03b2_632_, lean_object* v_a_633_, lean_object* v_x_634_){
_start:
{
uint8_t v_res_635_; lean_object* v_r_636_; 
v_res_635_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__3(v_00_u03b2_632_, v_a_633_, v_x_634_);
lean_dec(v_x_634_);
lean_dec(v_a_633_);
v_r_636_ = lean_box(v_res_635_);
return v_r_636_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4(lean_object* v_00_u03b2_637_, lean_object* v_data_638_){
_start:
{
lean_object* v___x_639_; 
v___x_639_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4___redArg(v_data_638_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5(lean_object* v_00_u03b2_640_, lean_object* v_a_641_, lean_object* v_b_642_, lean_object* v_x_643_){
_start:
{
lean_object* v___x_644_; 
v___x_644_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__5___redArg(v_a_641_, v_b_642_, v_x_643_);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_645_, lean_object* v_i_646_, lean_object* v_source_647_, lean_object* v_target_648_){
_start:
{
lean_object* v___x_649_; 
v___x_649_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5___redArg(v_i_646_, v_source_647_, v_target_648_);
return v___x_649_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_650_, lean_object* v_x_651_, lean_object* v_x_652_){
_start:
{
lean_object* v___x_653_; 
v___x_653_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2_spec__4_spec__5_spec__6___redArg(v_x_651_, v_x_652_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___redArg(lean_object* v_u_654_, lean_object* v_a_655_){
_start:
{
uint8_t v___x_700_; 
v___x_700_ = l_Lean_Level_hasMVar(v_u_654_);
if (v___x_700_ == 0)
{
uint8_t v___x_701_; 
v___x_701_ = l_Lean_Level_hasParam(v_u_654_);
if (v___x_701_ == 0)
{
lean_object* v___x_702_; 
v___x_702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_702_, 0, v_u_654_);
return v___x_702_;
}
else
{
goto v___jp_657_;
}
}
else
{
goto v___jp_657_;
}
v___jp_657_:
{
lean_object* v___x_658_; lean_object* v_visitedLevel_659_; lean_object* v___x_660_; 
v___x_658_ = lean_st_ref_get(v_a_655_);
v_visitedLevel_659_ = lean_ctor_get(v___x_658_, 0);
lean_inc_ref(v_visitedLevel_659_);
lean_dec(v___x_658_);
v___x_660_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectLevelAux_spec__1___redArg(v_visitedLevel_659_, v_u_654_);
lean_dec_ref(v_visitedLevel_659_);
if (lean_obj_tag(v___x_660_) == 0)
{
lean_object* v___x_661_; 
lean_inc(v_u_654_);
v___x_661_ = l_Lean_Meta_Closure_collectLevelAux___redArg(v_u_654_, v_a_655_);
if (lean_obj_tag(v___x_661_) == 0)
{
lean_object* v_a_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_691_; 
v_a_662_ = lean_ctor_get(v___x_661_, 0);
v_isSharedCheck_691_ = !lean_is_exclusive(v___x_661_);
if (v_isSharedCheck_691_ == 0)
{
v___x_664_ = v___x_661_;
v_isShared_665_ = v_isSharedCheck_691_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_a_662_);
lean_dec(v___x_661_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_691_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_666_; lean_object* v_visitedLevel_667_; lean_object* v_visitedExpr_668_; lean_object* v_levelParams_669_; lean_object* v_nextLevelIdx_670_; lean_object* v_levelArgs_671_; lean_object* v_newLocalDecls_672_; lean_object* v_newLocalDeclsForMVars_673_; lean_object* v_newLetDecls_674_; lean_object* v_nextExprIdx_675_; lean_object* v_exprMVarArgs_676_; lean_object* v_exprFVarArgs_677_; lean_object* v_toProcess_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_690_; 
v___x_666_ = lean_st_ref_take(v_a_655_);
v_visitedLevel_667_ = lean_ctor_get(v___x_666_, 0);
v_visitedExpr_668_ = lean_ctor_get(v___x_666_, 1);
v_levelParams_669_ = lean_ctor_get(v___x_666_, 2);
v_nextLevelIdx_670_ = lean_ctor_get(v___x_666_, 3);
v_levelArgs_671_ = lean_ctor_get(v___x_666_, 4);
v_newLocalDecls_672_ = lean_ctor_get(v___x_666_, 5);
v_newLocalDeclsForMVars_673_ = lean_ctor_get(v___x_666_, 6);
v_newLetDecls_674_ = lean_ctor_get(v___x_666_, 7);
v_nextExprIdx_675_ = lean_ctor_get(v___x_666_, 8);
v_exprMVarArgs_676_ = lean_ctor_get(v___x_666_, 9);
v_exprFVarArgs_677_ = lean_ctor_get(v___x_666_, 10);
v_toProcess_678_ = lean_ctor_get(v___x_666_, 11);
v_isSharedCheck_690_ = !lean_is_exclusive(v___x_666_);
if (v_isSharedCheck_690_ == 0)
{
v___x_680_ = v___x_666_;
v_isShared_681_ = v_isSharedCheck_690_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_toProcess_678_);
lean_inc(v_exprFVarArgs_677_);
lean_inc(v_exprMVarArgs_676_);
lean_inc(v_nextExprIdx_675_);
lean_inc(v_newLetDecls_674_);
lean_inc(v_newLocalDeclsForMVars_673_);
lean_inc(v_newLocalDecls_672_);
lean_inc(v_levelArgs_671_);
lean_inc(v_nextLevelIdx_670_);
lean_inc(v_levelParams_669_);
lean_inc(v_visitedExpr_668_);
lean_inc(v_visitedLevel_667_);
lean_dec(v___x_666_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_690_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_682_; lean_object* v___x_684_; 
lean_inc(v_a_662_);
v___x_682_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectLevelAux_spec__2___redArg(v_visitedLevel_667_, v_u_654_, v_a_662_);
if (v_isShared_681_ == 0)
{
lean_ctor_set(v___x_680_, 0, v___x_682_);
v___x_684_ = v___x_680_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v___x_682_);
lean_ctor_set(v_reuseFailAlloc_689_, 1, v_visitedExpr_668_);
lean_ctor_set(v_reuseFailAlloc_689_, 2, v_levelParams_669_);
lean_ctor_set(v_reuseFailAlloc_689_, 3, v_nextLevelIdx_670_);
lean_ctor_set(v_reuseFailAlloc_689_, 4, v_levelArgs_671_);
lean_ctor_set(v_reuseFailAlloc_689_, 5, v_newLocalDecls_672_);
lean_ctor_set(v_reuseFailAlloc_689_, 6, v_newLocalDeclsForMVars_673_);
lean_ctor_set(v_reuseFailAlloc_689_, 7, v_newLetDecls_674_);
lean_ctor_set(v_reuseFailAlloc_689_, 8, v_nextExprIdx_675_);
lean_ctor_set(v_reuseFailAlloc_689_, 9, v_exprMVarArgs_676_);
lean_ctor_set(v_reuseFailAlloc_689_, 10, v_exprFVarArgs_677_);
lean_ctor_set(v_reuseFailAlloc_689_, 11, v_toProcess_678_);
v___x_684_ = v_reuseFailAlloc_689_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
lean_object* v___x_685_; lean_object* v___x_687_; 
v___x_685_ = lean_st_ref_put(v_a_655_, v___x_684_);
if (v_isShared_665_ == 0)
{
v___x_687_ = v___x_664_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_a_662_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
}
}
}
else
{
lean_dec(v_u_654_);
return v___x_661_;
}
}
else
{
lean_object* v_val_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_699_; 
lean_dec(v_u_654_);
v_val_692_ = lean_ctor_get(v___x_660_, 0);
v_isSharedCheck_699_ = !lean_is_exclusive(v___x_660_);
if (v_isSharedCheck_699_ == 0)
{
v___x_694_ = v___x_660_;
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_val_692_);
lean_dec(v___x_660_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v___x_697_; 
if (v_isShared_695_ == 0)
{
lean_ctor_set_tag(v___x_694_, 0);
v___x_697_ = v___x_694_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_val_692_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___redArg___boxed(lean_object* v_u_703_, lean_object* v_a_704_, lean_object* v_a_705_){
_start:
{
lean_object* v_res_706_; 
v_res_706_ = l_Lean_Meta_Closure_collectLevel___redArg(v_u_703_, v_a_704_);
lean_dec(v_a_704_);
return v_res_706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel(lean_object* v_u_707_, uint8_t v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = l_Lean_Meta_Closure_collectLevel___redArg(v_u_707_, v_a_709_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectLevel___boxed(lean_object* v_u_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_){
_start:
{
uint8_t v_a_boxed_724_; lean_object* v_res_725_; 
v_a_boxed_724_ = lean_unbox(v_a_717_);
v_res_725_ = l_Lean_Meta_Closure_collectLevel(v_u_716_, v_a_boxed_724_, v_a_718_, v_a_719_, v_a_720_, v_a_721_, v_a_722_);
lean_dec(v_a_722_);
lean_dec_ref(v_a_721_);
lean_dec(v_a_720_);
lean_dec_ref(v_a_719_);
lean_dec(v_a_718_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg(lean_object* v_e_726_, lean_object* v___y_727_){
_start:
{
uint8_t v___x_729_; 
v___x_729_ = l_Lean_Expr_hasMVar(v_e_726_);
if (v___x_729_ == 0)
{
lean_object* v___x_730_; 
v___x_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_730_, 0, v_e_726_);
return v___x_730_;
}
else
{
lean_object* v___x_731_; lean_object* v_mctx_732_; lean_object* v___x_733_; lean_object* v_fst_734_; lean_object* v_snd_735_; lean_object* v___x_736_; lean_object* v_cache_737_; lean_object* v_zetaDeltaFVarIds_738_; lean_object* v_postponed_739_; lean_object* v_diag_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_749_; 
v___x_731_ = lean_st_ref_get(v___y_727_);
v_mctx_732_ = lean_ctor_get(v___x_731_, 0);
lean_inc_ref(v_mctx_732_);
lean_dec(v___x_731_);
v___x_733_ = l_Lean_instantiateMVarsCore(v_mctx_732_, v_e_726_);
v_fst_734_ = lean_ctor_get(v___x_733_, 0);
lean_inc(v_fst_734_);
v_snd_735_ = lean_ctor_get(v___x_733_, 1);
lean_inc(v_snd_735_);
lean_dec_ref(v___x_733_);
v___x_736_ = lean_st_ref_take(v___y_727_);
v_cache_737_ = lean_ctor_get(v___x_736_, 1);
v_zetaDeltaFVarIds_738_ = lean_ctor_get(v___x_736_, 2);
v_postponed_739_ = lean_ctor_get(v___x_736_, 3);
v_diag_740_ = lean_ctor_get(v___x_736_, 4);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_749_ == 0)
{
lean_object* v_unused_750_; 
v_unused_750_ = lean_ctor_get(v___x_736_, 0);
lean_dec(v_unused_750_);
v___x_742_ = v___x_736_;
v_isShared_743_ = v_isSharedCheck_749_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_diag_740_);
lean_inc(v_postponed_739_);
lean_inc(v_zetaDeltaFVarIds_738_);
lean_inc(v_cache_737_);
lean_dec(v___x_736_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_749_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_743_ == 0)
{
lean_ctor_set(v___x_742_, 0, v_snd_735_);
v___x_745_ = v___x_742_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_snd_735_);
lean_ctor_set(v_reuseFailAlloc_748_, 1, v_cache_737_);
lean_ctor_set(v_reuseFailAlloc_748_, 2, v_zetaDeltaFVarIds_738_);
lean_ctor_set(v_reuseFailAlloc_748_, 3, v_postponed_739_);
lean_ctor_set(v_reuseFailAlloc_748_, 4, v_diag_740_);
v___x_745_ = v_reuseFailAlloc_748_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = lean_st_ref_put(v___y_727_, v___x_745_);
v___x_747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_747_, 0, v_fst_734_);
return v___x_747_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg___boxed(lean_object* v_e_751_, lean_object* v___y_752_, lean_object* v___y_753_){
_start:
{
lean_object* v_res_754_; 
v_res_754_ = l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg(v_e_751_, v___y_752_);
lean_dec(v___y_752_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0(lean_object* v_e_755_, uint8_t v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_){
_start:
{
lean_object* v___x_763_; 
v___x_763_ = l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg(v_e_755_, v___y_759_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___boxed(lean_object* v_e_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_){
_start:
{
uint8_t v___y_2276__boxed_772_; lean_object* v_res_773_; 
v___y_2276__boxed_772_ = lean_unbox(v___y_765_);
v_res_773_ = l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0(v_e_764_, v___y_2276__boxed_772_, v___y_766_, v___y_767_, v___y_768_, v___y_769_, v___y_770_);
lean_dec(v___y_770_);
lean_dec_ref(v___y_769_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec(v___y_766_);
return v_res_773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_preprocess(lean_object* v_e_774_, uint8_t v_a_775_, lean_object* v_a_776_, lean_object* v_a_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_){
_start:
{
lean_object* v___x_782_; 
v___x_782_ = l_Lean_instantiateMVars___at___00Lean_Meta_Closure_preprocess_spec__0___redArg(v_e_774_, v_a_778_);
if (v_a_775_ == 0)
{
lean_object* v_a_783_; uint8_t v___x_784_; lean_object* v___x_785_; 
v_a_783_ = lean_ctor_get(v___x_782_, 0);
lean_inc_n(v_a_783_, 2);
lean_dec_ref(v___x_782_);
v___x_784_ = 0;
v___x_785_ = l_Lean_Meta_check(v_a_783_, v___x_784_, v_a_777_, v_a_778_, v_a_779_, v_a_780_);
if (lean_obj_tag(v___x_785_) == 0)
{
lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_792_; 
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_785_);
if (v_isSharedCheck_792_ == 0)
{
lean_object* v_unused_793_; 
v_unused_793_ = lean_ctor_get(v___x_785_, 0);
lean_dec(v_unused_793_);
v___x_787_ = v___x_785_;
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
else
{
lean_dec(v___x_785_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_790_; 
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 0, v_a_783_);
v___x_790_ = v___x_787_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_a_783_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
else
{
lean_object* v_a_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_801_; 
lean_dec(v_a_783_);
v_a_794_ = lean_ctor_get(v___x_785_, 0);
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_785_);
if (v_isSharedCheck_801_ == 0)
{
v___x_796_ = v___x_785_;
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_a_794_);
lean_dec(v___x_785_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_799_; 
if (v_isShared_797_ == 0)
{
v___x_799_ = v___x_796_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_a_794_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
}
else
{
return v___x_782_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_preprocess___boxed(lean_object* v_e_802_, lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v_a_805_, lean_object* v_a_806_, lean_object* v_a_807_, lean_object* v_a_808_, lean_object* v_a_809_){
_start:
{
uint8_t v_a_boxed_810_; lean_object* v_res_811_; 
v_a_boxed_810_ = lean_unbox(v_a_803_);
v_res_811_ = l_Lean_Meta_Closure_preprocess(v_e_802_, v_a_boxed_810_, v_a_804_, v_a_805_, v_a_806_, v_a_807_, v_a_808_);
lean_dec(v_a_808_);
lean_dec_ref(v_a_807_);
lean_dec(v_a_806_);
lean_dec_ref(v_a_805_);
lean_dec(v_a_804_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg(lean_object* v_a_815_){
_start:
{
lean_object* v___x_817_; lean_object* v_nextExprIdx_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v_visitedLevel_822_; lean_object* v_visitedExpr_823_; lean_object* v_levelParams_824_; lean_object* v_nextLevelIdx_825_; lean_object* v_levelArgs_826_; lean_object* v_newLocalDecls_827_; lean_object* v_newLocalDeclsForMVars_828_; lean_object* v_newLetDecls_829_; lean_object* v_nextExprIdx_830_; lean_object* v_exprMVarArgs_831_; lean_object* v_exprFVarArgs_832_; lean_object* v_toProcess_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_844_; 
v___x_817_ = lean_st_ref_get(v_a_815_);
v_nextExprIdx_818_ = lean_ctor_get(v___x_817_, 8);
lean_inc(v_nextExprIdx_818_);
lean_dec(v___x_817_);
v___x_819_ = ((lean_object*)(l_Lean_Meta_Closure_mkNextUserName___redArg___closed__1));
v___x_820_ = lean_name_append_index_after(v___x_819_, v_nextExprIdx_818_);
v___x_821_ = lean_st_ref_take(v_a_815_);
v_visitedLevel_822_ = lean_ctor_get(v___x_821_, 0);
v_visitedExpr_823_ = lean_ctor_get(v___x_821_, 1);
v_levelParams_824_ = lean_ctor_get(v___x_821_, 2);
v_nextLevelIdx_825_ = lean_ctor_get(v___x_821_, 3);
v_levelArgs_826_ = lean_ctor_get(v___x_821_, 4);
v_newLocalDecls_827_ = lean_ctor_get(v___x_821_, 5);
v_newLocalDeclsForMVars_828_ = lean_ctor_get(v___x_821_, 6);
v_newLetDecls_829_ = lean_ctor_get(v___x_821_, 7);
v_nextExprIdx_830_ = lean_ctor_get(v___x_821_, 8);
v_exprMVarArgs_831_ = lean_ctor_get(v___x_821_, 9);
v_exprFVarArgs_832_ = lean_ctor_get(v___x_821_, 10);
v_toProcess_833_ = lean_ctor_get(v___x_821_, 11);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_821_);
if (v_isSharedCheck_844_ == 0)
{
v___x_835_ = v___x_821_;
v_isShared_836_ = v_isSharedCheck_844_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_toProcess_833_);
lean_inc(v_exprFVarArgs_832_);
lean_inc(v_exprMVarArgs_831_);
lean_inc(v_nextExprIdx_830_);
lean_inc(v_newLetDecls_829_);
lean_inc(v_newLocalDeclsForMVars_828_);
lean_inc(v_newLocalDecls_827_);
lean_inc(v_levelArgs_826_);
lean_inc(v_nextLevelIdx_825_);
lean_inc(v_levelParams_824_);
lean_inc(v_visitedExpr_823_);
lean_inc(v_visitedLevel_822_);
lean_dec(v___x_821_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_844_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_840_; 
v___x_837_ = lean_unsigned_to_nat(1u);
v___x_838_ = lean_nat_add(v_nextExprIdx_830_, v___x_837_);
lean_dec(v_nextExprIdx_830_);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 8, v___x_838_);
v___x_840_ = v___x_835_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v_visitedLevel_822_);
lean_ctor_set(v_reuseFailAlloc_843_, 1, v_visitedExpr_823_);
lean_ctor_set(v_reuseFailAlloc_843_, 2, v_levelParams_824_);
lean_ctor_set(v_reuseFailAlloc_843_, 3, v_nextLevelIdx_825_);
lean_ctor_set(v_reuseFailAlloc_843_, 4, v_levelArgs_826_);
lean_ctor_set(v_reuseFailAlloc_843_, 5, v_newLocalDecls_827_);
lean_ctor_set(v_reuseFailAlloc_843_, 6, v_newLocalDeclsForMVars_828_);
lean_ctor_set(v_reuseFailAlloc_843_, 7, v_newLetDecls_829_);
lean_ctor_set(v_reuseFailAlloc_843_, 8, v___x_838_);
lean_ctor_set(v_reuseFailAlloc_843_, 9, v_exprMVarArgs_831_);
lean_ctor_set(v_reuseFailAlloc_843_, 10, v_exprFVarArgs_832_);
lean_ctor_set(v_reuseFailAlloc_843_, 11, v_toProcess_833_);
v___x_840_ = v_reuseFailAlloc_843_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_841_ = lean_st_ref_put(v_a_815_, v___x_840_);
v___x_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_842_, 0, v___x_820_);
return v___x_842_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___redArg___boxed(lean_object* v_a_845_, lean_object* v_a_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_Lean_Meta_Closure_mkNextUserName___redArg(v_a_845_);
lean_dec(v_a_845_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName(uint8_t v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_, lean_object* v_a_851_, lean_object* v_a_852_, lean_object* v_a_853_){
_start:
{
lean_object* v___x_855_; 
v___x_855_ = l_Lean_Meta_Closure_mkNextUserName___redArg(v_a_849_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkNextUserName___boxed(lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_){
_start:
{
uint8_t v_a_boxed_863_; lean_object* v_res_864_; 
v_a_boxed_863_ = lean_unbox(v_a_856_);
v_res_864_ = l_Lean_Meta_Closure_mkNextUserName(v_a_boxed_863_, v_a_857_, v_a_858_, v_a_859_, v_a_860_, v_a_861_);
lean_dec(v_a_861_);
lean_dec_ref(v_a_860_);
lean_dec(v_a_859_);
lean_dec_ref(v_a_858_);
lean_dec(v_a_857_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___redArg(lean_object* v_elem_865_, lean_object* v_a_866_){
_start:
{
lean_object* v___x_868_; lean_object* v_visitedLevel_869_; lean_object* v_visitedExpr_870_; lean_object* v_levelParams_871_; lean_object* v_nextLevelIdx_872_; lean_object* v_levelArgs_873_; lean_object* v_newLocalDecls_874_; lean_object* v_newLocalDeclsForMVars_875_; lean_object* v_newLetDecls_876_; lean_object* v_nextExprIdx_877_; lean_object* v_exprMVarArgs_878_; lean_object* v_exprFVarArgs_879_; lean_object* v_toProcess_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_891_; 
v___x_868_ = lean_st_ref_take(v_a_866_);
v_visitedLevel_869_ = lean_ctor_get(v___x_868_, 0);
v_visitedExpr_870_ = lean_ctor_get(v___x_868_, 1);
v_levelParams_871_ = lean_ctor_get(v___x_868_, 2);
v_nextLevelIdx_872_ = lean_ctor_get(v___x_868_, 3);
v_levelArgs_873_ = lean_ctor_get(v___x_868_, 4);
v_newLocalDecls_874_ = lean_ctor_get(v___x_868_, 5);
v_newLocalDeclsForMVars_875_ = lean_ctor_get(v___x_868_, 6);
v_newLetDecls_876_ = lean_ctor_get(v___x_868_, 7);
v_nextExprIdx_877_ = lean_ctor_get(v___x_868_, 8);
v_exprMVarArgs_878_ = lean_ctor_get(v___x_868_, 9);
v_exprFVarArgs_879_ = lean_ctor_get(v___x_868_, 10);
v_toProcess_880_ = lean_ctor_get(v___x_868_, 11);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_868_);
if (v_isSharedCheck_891_ == 0)
{
v___x_882_ = v___x_868_;
v_isShared_883_ = v_isSharedCheck_891_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_toProcess_880_);
lean_inc(v_exprFVarArgs_879_);
lean_inc(v_exprMVarArgs_878_);
lean_inc(v_nextExprIdx_877_);
lean_inc(v_newLetDecls_876_);
lean_inc(v_newLocalDeclsForMVars_875_);
lean_inc(v_newLocalDecls_874_);
lean_inc(v_levelArgs_873_);
lean_inc(v_nextLevelIdx_872_);
lean_inc(v_levelParams_871_);
lean_inc(v_visitedExpr_870_);
lean_inc(v_visitedLevel_869_);
lean_dec(v___x_868_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_891_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_887_; 
v___x_884_ = lean_box(0);
v___x_885_ = lean_array_push(v_toProcess_880_, v_elem_865_);
if (v_isShared_883_ == 0)
{
lean_ctor_set(v___x_882_, 11, v___x_885_);
v___x_887_ = v___x_882_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v_visitedLevel_869_);
lean_ctor_set(v_reuseFailAlloc_890_, 1, v_visitedExpr_870_);
lean_ctor_set(v_reuseFailAlloc_890_, 2, v_levelParams_871_);
lean_ctor_set(v_reuseFailAlloc_890_, 3, v_nextLevelIdx_872_);
lean_ctor_set(v_reuseFailAlloc_890_, 4, v_levelArgs_873_);
lean_ctor_set(v_reuseFailAlloc_890_, 5, v_newLocalDecls_874_);
lean_ctor_set(v_reuseFailAlloc_890_, 6, v_newLocalDeclsForMVars_875_);
lean_ctor_set(v_reuseFailAlloc_890_, 7, v_newLetDecls_876_);
lean_ctor_set(v_reuseFailAlloc_890_, 8, v_nextExprIdx_877_);
lean_ctor_set(v_reuseFailAlloc_890_, 9, v_exprMVarArgs_878_);
lean_ctor_set(v_reuseFailAlloc_890_, 10, v_exprFVarArgs_879_);
lean_ctor_set(v_reuseFailAlloc_890_, 11, v___x_885_);
v___x_887_ = v_reuseFailAlloc_890_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_888_ = lean_st_ref_put(v_a_866_, v___x_887_);
v___x_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_889_, 0, v___x_884_);
return v___x_889_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___redArg___boxed(lean_object* v_elem_892_, lean_object* v_a_893_, lean_object* v_a_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = l_Lean_Meta_Closure_pushToProcess___redArg(v_elem_892_, v_a_893_);
lean_dec(v_a_893_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess(lean_object* v_elem_896_, uint8_t v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_){
_start:
{
lean_object* v___x_904_; 
v___x_904_ = l_Lean_Meta_Closure_pushToProcess___redArg(v_elem_896_, v_a_898_);
return v___x_904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushToProcess___boxed(lean_object* v_elem_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_){
_start:
{
uint8_t v_a_boxed_913_; lean_object* v_res_914_; 
v_a_boxed_913_ = lean_unbox(v_a_906_);
v_res_914_ = l_Lean_Meta_Closure_pushToProcess(v_elem_905_, v_a_boxed_913_, v_a_907_, v_a_908_, v_a_909_, v_a_910_, v_a_911_);
lean_dec(v_a_911_);
lean_dec_ref(v_a_910_);
lean_dec(v_a_909_);
lean_dec_ref(v_a_908_);
lean_dec(v_a_907_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg(lean_object* v_mvarId_915_, lean_object* v___y_916_){
_start:
{
lean_object* v___x_918_; lean_object* v_mctx_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_918_ = lean_st_ref_get(v___y_916_);
v_mctx_919_ = lean_ctor_get(v___x_918_, 0);
lean_inc_ref(v_mctx_919_);
lean_dec(v___x_918_);
v___x_920_ = l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(v_mctx_919_, v_mvarId_915_);
lean_dec_ref(v_mctx_919_);
v___x_921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_921_, 0, v___x_920_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg___boxed(lean_object* v_mvarId_922_, lean_object* v___y_923_, lean_object* v___y_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg(v_mvarId_922_, v___y_923_);
lean_dec(v___y_923_);
lean_dec(v_mvarId_922_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4(lean_object* v_mvarId_926_, uint8_t v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_){
_start:
{
lean_object* v___x_934_; 
v___x_934_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg(v_mvarId_926_, v___y_930_);
return v___x_934_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___boxed(lean_object* v_mvarId_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_){
_start:
{
uint8_t v___y_18037__boxed_943_; lean_object* v_res_944_; 
v___y_18037__boxed_943_ = lean_unbox(v___y_936_);
v_res_944_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4(v_mvarId_935_, v___y_18037__boxed_943_, v___y_937_, v___y_938_, v___y_939_, v___y_940_, v___y_941_);
lean_dec(v___y_941_);
lean_dec_ref(v___y_940_);
lean_dec(v___y_939_);
lean_dec_ref(v___y_938_);
lean_dec(v___y_937_);
lean_dec(v_mvarId_935_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0(lean_object* v_k_945_, uint8_t v___y_946_, lean_object* v___y_947_, lean_object* v_b_948_, lean_object* v_c_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_){
_start:
{
lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_955_ = lean_box(v___y_946_);
lean_inc(v___y_953_);
lean_inc_ref(v___y_952_);
lean_inc(v___y_951_);
lean_inc_ref(v___y_950_);
lean_inc(v___y_947_);
v___x_956_ = lean_apply_9(v_k_945_, v_b_948_, v_c_949_, v___x_955_, v___y_947_, v___y_950_, v___y_951_, v___y_952_, v___y_953_, lean_box(0));
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0___boxed(lean_object* v_k_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v_b_960_, lean_object* v_c_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_){
_start:
{
uint8_t v___y_18060__boxed_967_; lean_object* v_res_968_; 
v___y_18060__boxed_967_ = lean_unbox(v___y_958_);
v_res_968_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0(v_k_957_, v___y_18060__boxed_967_, v___y_959_, v_b_960_, v_c_961_, v___y_962_, v___y_963_, v___y_964_, v___y_965_);
lean_dec(v___y_965_);
lean_dec_ref(v___y_964_);
lean_dec(v___y_963_);
lean_dec_ref(v___y_962_);
lean_dec(v___y_959_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg(lean_object* v_type_969_, lean_object* v_maxFVars_x3f_970_, lean_object* v_k_971_, uint8_t v_cleanupAnnotations_972_, uint8_t v_whnfType_973_, uint8_t v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_){
_start:
{
lean_object* v___x_981_; lean_object* v___f_982_; lean_object* v___x_983_; 
v___x_981_ = lean_box(v___y_974_);
lean_inc(v___y_975_);
v___f_982_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_982_, 0, v_k_971_);
lean_closure_set(v___f_982_, 1, v___x_981_);
lean_closure_set(v___f_982_, 2, v___y_975_);
v___x_983_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_969_, v_maxFVars_x3f_970_, v___f_982_, v_cleanupAnnotations_972_, v_whnfType_973_, v___y_976_, v___y_977_, v___y_978_, v___y_979_);
if (lean_obj_tag(v___x_983_) == 0)
{
return v___x_983_;
}
else
{
lean_object* v_a_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_991_; 
v_a_984_ = lean_ctor_get(v___x_983_, 0);
v_isSharedCheck_991_ = !lean_is_exclusive(v___x_983_);
if (v_isSharedCheck_991_ == 0)
{
v___x_986_ = v___x_983_;
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
else
{
lean_inc(v_a_984_);
lean_dec(v___x_983_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
lean_object* v___x_989_; 
if (v_isShared_987_ == 0)
{
v___x_989_ = v___x_986_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_a_984_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg___boxed(lean_object* v_type_992_, lean_object* v_maxFVars_x3f_993_, lean_object* v_k_994_, lean_object* v_cleanupAnnotations_995_, lean_object* v_whnfType_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1004_; uint8_t v_whnfType_boxed_1005_; uint8_t v___y_18085__boxed_1006_; lean_object* v_res_1007_; 
v_cleanupAnnotations_boxed_1004_ = lean_unbox(v_cleanupAnnotations_995_);
v_whnfType_boxed_1005_ = lean_unbox(v_whnfType_996_);
v___y_18085__boxed_1006_ = lean_unbox(v___y_997_);
v_res_1007_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg(v_type_992_, v_maxFVars_x3f_993_, v_k_994_, v_cleanupAnnotations_boxed_1004_, v_whnfType_boxed_1005_, v___y_18085__boxed_1006_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_);
lean_dec(v___y_1002_);
lean_dec_ref(v___y_1001_);
lean_dec(v___y_1000_);
lean_dec_ref(v___y_999_);
lean_dec(v___y_998_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5(lean_object* v_00_u03b1_1008_, lean_object* v_type_1009_, lean_object* v_maxFVars_x3f_1010_, lean_object* v_k_1011_, uint8_t v_cleanupAnnotations_1012_, uint8_t v_whnfType_1013_, uint8_t v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_){
_start:
{
lean_object* v___x_1021_; 
v___x_1021_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg(v_type_1009_, v_maxFVars_x3f_1010_, v_k_1011_, v_cleanupAnnotations_1012_, v_whnfType_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_, v___y_1019_);
return v___x_1021_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___boxed(lean_object* v_00_u03b1_1022_, lean_object* v_type_1023_, lean_object* v_maxFVars_x3f_1024_, lean_object* v_k_1025_, lean_object* v_cleanupAnnotations_1026_, lean_object* v_whnfType_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1035_; uint8_t v_whnfType_boxed_1036_; uint8_t v___y_18129__boxed_1037_; lean_object* v_res_1038_; 
v_cleanupAnnotations_boxed_1035_ = lean_unbox(v_cleanupAnnotations_1026_);
v_whnfType_boxed_1036_ = lean_unbox(v_whnfType_1027_);
v___y_18129__boxed_1037_ = lean_unbox(v___y_1028_);
v_res_1038_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5(v_00_u03b1_1022_, v_type_1023_, v_maxFVars_x3f_1024_, v_k_1025_, v_cleanupAnnotations_boxed_1035_, v_whnfType_boxed_1036_, v___y_18129__boxed_1037_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
lean_dec(v___y_1033_);
lean_dec_ref(v___y_1032_);
lean_dec(v___y_1031_);
lean_dec_ref(v___y_1030_);
lean_dec(v___y_1029_);
return v_res_1038_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg(lean_object* v_a_1039_, lean_object* v_x_1040_){
_start:
{
if (lean_obj_tag(v_x_1040_) == 0)
{
lean_object* v___x_1041_; 
v___x_1041_ = lean_box(0);
return v___x_1041_;
}
else
{
lean_object* v_key_1042_; lean_object* v_value_1043_; lean_object* v_tail_1044_; uint8_t v___x_1045_; 
v_key_1042_ = lean_ctor_get(v_x_1040_, 0);
v_value_1043_ = lean_ctor_get(v_x_1040_, 1);
v_tail_1044_ = lean_ctor_get(v_x_1040_, 2);
v___x_1045_ = l_Lean_ExprStructEq_beq(v_key_1042_, v_a_1039_);
if (v___x_1045_ == 0)
{
v_x_1040_ = v_tail_1044_;
goto _start;
}
else
{
lean_object* v___x_1047_; 
lean_inc(v_value_1043_);
v___x_1047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1047_, 0, v_value_1043_);
return v___x_1047_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg___boxed(lean_object* v_a_1048_, lean_object* v_x_1049_){
_start:
{
lean_object* v_res_1050_; 
v_res_1050_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg(v_a_1048_, v_x_1049_);
lean_dec(v_x_1049_);
lean_dec_ref(v_a_1048_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(lean_object* v_m_1051_, lean_object* v_a_1052_){
_start:
{
lean_object* v_buckets_1053_; lean_object* v___x_1054_; uint64_t v___x_1055_; uint64_t v___x_1056_; uint64_t v___x_1057_; uint64_t v_fold_1058_; uint64_t v___x_1059_; uint64_t v___x_1060_; uint64_t v___x_1061_; size_t v___x_1062_; size_t v___x_1063_; size_t v___x_1064_; size_t v___x_1065_; size_t v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
v_buckets_1053_ = lean_ctor_get(v_m_1051_, 1);
v___x_1054_ = lean_array_get_size(v_buckets_1053_);
v___x_1055_ = l_Lean_ExprStructEq_hash(v_a_1052_);
v___x_1056_ = 32ULL;
v___x_1057_ = lean_uint64_shift_right(v___x_1055_, v___x_1056_);
v_fold_1058_ = lean_uint64_xor(v___x_1055_, v___x_1057_);
v___x_1059_ = 16ULL;
v___x_1060_ = lean_uint64_shift_right(v_fold_1058_, v___x_1059_);
v___x_1061_ = lean_uint64_xor(v_fold_1058_, v___x_1060_);
v___x_1062_ = lean_uint64_to_usize(v___x_1061_);
v___x_1063_ = lean_usize_of_nat(v___x_1054_);
v___x_1064_ = ((size_t)1ULL);
v___x_1065_ = lean_usize_sub(v___x_1063_, v___x_1064_);
v___x_1066_ = lean_usize_land(v___x_1062_, v___x_1065_);
v___x_1067_ = lean_array_uget_borrowed(v_buckets_1053_, v___x_1066_);
v___x_1068_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg(v_a_1052_, v___x_1067_);
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg___boxed(lean_object* v_m_1069_, lean_object* v_a_1070_){
_start:
{
lean_object* v_res_1071_; 
v_res_1071_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(v_m_1069_, v_a_1070_);
lean_dec_ref(v_a_1070_);
lean_dec_ref(v_m_1069_);
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg(lean_object* v_x_1072_, lean_object* v_x_1073_, lean_object* v___y_1074_){
_start:
{
if (lean_obj_tag(v_x_1072_) == 0)
{
lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1076_ = l_List_reverse___redArg(v_x_1073_);
v___x_1077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1076_);
return v___x_1077_;
}
else
{
lean_object* v_head_1078_; lean_object* v_tail_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1097_; 
v_head_1078_ = lean_ctor_get(v_x_1072_, 0);
v_tail_1079_ = lean_ctor_get(v_x_1072_, 1);
v_isSharedCheck_1097_ = !lean_is_exclusive(v_x_1072_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1081_ = v_x_1072_;
v_isShared_1082_ = v_isSharedCheck_1097_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_tail_1079_);
lean_inc(v_head_1078_);
lean_dec(v_x_1072_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1097_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1083_; 
v___x_1083_ = l_Lean_Meta_Closure_collectLevel___redArg(v_head_1078_, v___y_1074_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; lean_object* v___x_1086_; 
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_a_1084_);
lean_dec_ref_known(v___x_1083_, 1);
if (v_isShared_1082_ == 0)
{
lean_ctor_set(v___x_1081_, 1, v_x_1073_);
lean_ctor_set(v___x_1081_, 0, v_a_1084_);
v___x_1086_ = v___x_1081_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_a_1084_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v_x_1073_);
v___x_1086_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
v_x_1072_ = v_tail_1079_;
v_x_1073_ = v___x_1086_;
goto _start;
}
}
else
{
lean_object* v_a_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1096_; 
lean_del_object(v___x_1081_);
lean_dec(v_tail_1079_);
lean_dec(v_x_1073_);
v_a_1089_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1091_ = v___x_1083_;
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_a_1089_);
lean_dec(v___x_1083_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v___x_1094_; 
if (v_isShared_1092_ == 0)
{
v___x_1094_ = v___x_1091_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_a_1089_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
return v___x_1094_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg___boxed(lean_object* v_x_1098_, lean_object* v_x_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg(v_x_1098_, v_x_1099_, v___y_1100_);
lean_dec(v___y_1100_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg(lean_object* v___y_1103_){
_start:
{
lean_object* v___x_1105_; lean_object* v_ngen_1106_; lean_object* v_namePrefix_1107_; lean_object* v_idx_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1137_; 
v___x_1105_ = lean_st_ref_get(v___y_1103_);
v_ngen_1106_ = lean_ctor_get(v___x_1105_, 2);
lean_inc_ref(v_ngen_1106_);
lean_dec(v___x_1105_);
v_namePrefix_1107_ = lean_ctor_get(v_ngen_1106_, 0);
v_idx_1108_ = lean_ctor_get(v_ngen_1106_, 1);
v_isSharedCheck_1137_ = !lean_is_exclusive(v_ngen_1106_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1110_ = v_ngen_1106_;
v_isShared_1111_ = v_isSharedCheck_1137_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_idx_1108_);
lean_inc(v_namePrefix_1107_);
lean_dec(v_ngen_1106_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1137_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v_r_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1116_; 
lean_inc(v_idx_1108_);
lean_inc(v_namePrefix_1107_);
v_r_1112_ = l_Lean_Name_num___override(v_namePrefix_1107_, v_idx_1108_);
v___x_1113_ = lean_unsigned_to_nat(1u);
v___x_1114_ = lean_nat_add(v_idx_1108_, v___x_1113_);
lean_dec(v_idx_1108_);
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 1, v___x_1114_);
v___x_1116_ = v___x_1110_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_namePrefix_1107_);
lean_ctor_set(v_reuseFailAlloc_1136_, 1, v___x_1114_);
v___x_1116_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
lean_object* v___x_1117_; lean_object* v_env_1118_; lean_object* v_nextMacroScope_1119_; lean_object* v_auxDeclNGen_1120_; lean_object* v_traceState_1121_; lean_object* v_cache_1122_; lean_object* v_messages_1123_; lean_object* v_infoState_1124_; lean_object* v_snapshotTasks_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1134_; 
v___x_1117_ = lean_st_ref_take(v___y_1103_);
v_env_1118_ = lean_ctor_get(v___x_1117_, 0);
v_nextMacroScope_1119_ = lean_ctor_get(v___x_1117_, 1);
v_auxDeclNGen_1120_ = lean_ctor_get(v___x_1117_, 3);
v_traceState_1121_ = lean_ctor_get(v___x_1117_, 4);
v_cache_1122_ = lean_ctor_get(v___x_1117_, 5);
v_messages_1123_ = lean_ctor_get(v___x_1117_, 6);
v_infoState_1124_ = lean_ctor_get(v___x_1117_, 7);
v_snapshotTasks_1125_ = lean_ctor_get(v___x_1117_, 8);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1134_ == 0)
{
lean_object* v_unused_1135_; 
v_unused_1135_ = lean_ctor_get(v___x_1117_, 2);
lean_dec(v_unused_1135_);
v___x_1127_ = v___x_1117_;
v_isShared_1128_ = v_isSharedCheck_1134_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_snapshotTasks_1125_);
lean_inc(v_infoState_1124_);
lean_inc(v_messages_1123_);
lean_inc(v_cache_1122_);
lean_inc(v_traceState_1121_);
lean_inc(v_auxDeclNGen_1120_);
lean_inc(v_nextMacroScope_1119_);
lean_inc(v_env_1118_);
lean_dec(v___x_1117_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1134_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1130_; 
if (v_isShared_1128_ == 0)
{
lean_ctor_set(v___x_1127_, 2, v___x_1116_);
v___x_1130_ = v___x_1127_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v_env_1118_);
lean_ctor_set(v_reuseFailAlloc_1133_, 1, v_nextMacroScope_1119_);
lean_ctor_set(v_reuseFailAlloc_1133_, 2, v___x_1116_);
lean_ctor_set(v_reuseFailAlloc_1133_, 3, v_auxDeclNGen_1120_);
lean_ctor_set(v_reuseFailAlloc_1133_, 4, v_traceState_1121_);
lean_ctor_set(v_reuseFailAlloc_1133_, 5, v_cache_1122_);
lean_ctor_set(v_reuseFailAlloc_1133_, 6, v_messages_1123_);
lean_ctor_set(v_reuseFailAlloc_1133_, 7, v_infoState_1124_);
lean_ctor_set(v_reuseFailAlloc_1133_, 8, v_snapshotTasks_1125_);
v___x_1130_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1131_ = lean_st_ref_put(v___y_1103_, v___x_1130_);
v___x_1132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1132_, 0, v_r_1112_);
return v___x_1132_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg___boxed(lean_object* v___y_1138_, lean_object* v___y_1139_){
_start:
{
lean_object* v_res_1140_; 
v_res_1140_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg(v___y_1138_);
lean_dec(v___y_1138_);
return v_res_1140_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3(uint8_t v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_){
_start:
{
lean_object* v___x_1148_; lean_object* v_a_1149_; lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1156_; 
v___x_1148_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg(v___y_1146_);
v_a_1149_ = lean_ctor_get(v___x_1148_, 0);
v_isSharedCheck_1156_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1156_ == 0)
{
v___x_1151_ = v___x_1148_;
v_isShared_1152_ = v_isSharedCheck_1156_;
goto v_resetjp_1150_;
}
else
{
lean_inc(v_a_1149_);
lean_dec(v___x_1148_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1156_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
lean_object* v___x_1154_; 
if (v_isShared_1152_ == 0)
{
v___x_1154_ = v___x_1151_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v_a_1149_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
return v___x_1154_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3___boxed(lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_){
_start:
{
uint8_t v___y_18304__boxed_1164_; lean_object* v_res_1165_; 
v___y_18304__boxed_1164_ = lean_unbox(v___y_1157_);
v_res_1165_ = l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3(v___y_18304__boxed_1164_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
lean_dec(v___y_1162_);
lean_dec_ref(v___y_1161_);
lean_dec(v___y_1160_);
lean_dec_ref(v___y_1159_);
lean_dec(v___y_1158_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__1(lean_object* v_e_1166_, lean_object* v_args_1167_, lean_object* v_x_1168_, uint8_t v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_){
_start:
{
lean_object* v___x_1176_; uint8_t v___x_1177_; uint8_t v___x_1178_; uint8_t v___x_1179_; lean_object* v___x_1180_; 
v___x_1176_ = l_Lean_mkAppN(v_e_1166_, v_args_1167_);
v___x_1177_ = 0;
v___x_1178_ = 1;
v___x_1179_ = 1;
v___x_1180_ = l_Lean_Meta_mkLambdaFVars(v_args_1167_, v___x_1176_, v___x_1177_, v___x_1178_, v___x_1177_, v___x_1178_, v___x_1179_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__1___boxed(lean_object* v_e_1181_, lean_object* v_args_1182_, lean_object* v_x_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
uint8_t v___y_18345__boxed_1191_; lean_object* v_res_1192_; 
v___y_18345__boxed_1191_ = lean_unbox(v___y_1184_);
v_res_1192_ = l_Lean_Meta_Closure_collectExprAux___lam__1(v_e_1181_, v_args_1182_, v_x_1183_, v___y_18345__boxed_1191_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_);
lean_dec(v___y_1189_);
lean_dec_ref(v___y_1188_);
lean_dec(v___y_1187_);
lean_dec_ref(v___y_1186_);
lean_dec(v___y_1185_);
lean_dec_ref(v_x_1183_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10___redArg(lean_object* v_x_1193_, lean_object* v_x_1194_){
_start:
{
if (lean_obj_tag(v_x_1194_) == 0)
{
return v_x_1193_;
}
else
{
lean_object* v_key_1195_; lean_object* v_value_1196_; lean_object* v_tail_1197_; lean_object* v___x_1199_; uint8_t v_isShared_1200_; uint8_t v_isSharedCheck_1220_; 
v_key_1195_ = lean_ctor_get(v_x_1194_, 0);
v_value_1196_ = lean_ctor_get(v_x_1194_, 1);
v_tail_1197_ = lean_ctor_get(v_x_1194_, 2);
v_isSharedCheck_1220_ = !lean_is_exclusive(v_x_1194_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1199_ = v_x_1194_;
v_isShared_1200_ = v_isSharedCheck_1220_;
goto v_resetjp_1198_;
}
else
{
lean_inc(v_tail_1197_);
lean_inc(v_value_1196_);
lean_inc(v_key_1195_);
lean_dec(v_x_1194_);
v___x_1199_ = lean_box(0);
v_isShared_1200_ = v_isSharedCheck_1220_;
goto v_resetjp_1198_;
}
v_resetjp_1198_:
{
lean_object* v___x_1201_; uint64_t v___x_1202_; uint64_t v___x_1203_; uint64_t v___x_1204_; uint64_t v_fold_1205_; uint64_t v___x_1206_; uint64_t v___x_1207_; uint64_t v___x_1208_; size_t v___x_1209_; size_t v___x_1210_; size_t v___x_1211_; size_t v___x_1212_; size_t v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1216_; 
v___x_1201_ = lean_array_get_size(v_x_1193_);
v___x_1202_ = l_Lean_ExprStructEq_hash(v_key_1195_);
v___x_1203_ = 32ULL;
v___x_1204_ = lean_uint64_shift_right(v___x_1202_, v___x_1203_);
v_fold_1205_ = lean_uint64_xor(v___x_1202_, v___x_1204_);
v___x_1206_ = 16ULL;
v___x_1207_ = lean_uint64_shift_right(v_fold_1205_, v___x_1206_);
v___x_1208_ = lean_uint64_xor(v_fold_1205_, v___x_1207_);
v___x_1209_ = lean_uint64_to_usize(v___x_1208_);
v___x_1210_ = lean_usize_of_nat(v___x_1201_);
v___x_1211_ = ((size_t)1ULL);
v___x_1212_ = lean_usize_sub(v___x_1210_, v___x_1211_);
v___x_1213_ = lean_usize_land(v___x_1209_, v___x_1212_);
v___x_1214_ = lean_array_uget_borrowed(v_x_1193_, v___x_1213_);
lean_inc(v___x_1214_);
if (v_isShared_1200_ == 0)
{
lean_ctor_set(v___x_1199_, 2, v___x_1214_);
v___x_1216_ = v___x_1199_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_key_1195_);
lean_ctor_set(v_reuseFailAlloc_1219_, 1, v_value_1196_);
lean_ctor_set(v_reuseFailAlloc_1219_, 2, v___x_1214_);
v___x_1216_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
lean_object* v___x_1217_; 
v___x_1217_ = lean_array_uset(v_x_1193_, v___x_1213_, v___x_1216_);
v_x_1193_ = v___x_1217_;
v_x_1194_ = v_tail_1197_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6___redArg(lean_object* v_i_1221_, lean_object* v_source_1222_, lean_object* v_target_1223_){
_start:
{
lean_object* v___x_1224_; uint8_t v___x_1225_; 
v___x_1224_ = lean_array_get_size(v_source_1222_);
v___x_1225_ = lean_nat_dec_lt(v_i_1221_, v___x_1224_);
if (v___x_1225_ == 0)
{
lean_dec_ref(v_source_1222_);
lean_dec(v_i_1221_);
return v_target_1223_;
}
else
{
lean_object* v_es_1226_; lean_object* v___x_1227_; lean_object* v_source_1228_; lean_object* v_target_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
v_es_1226_ = lean_array_fget(v_source_1222_, v_i_1221_);
v___x_1227_ = lean_box(0);
v_source_1228_ = lean_array_fset(v_source_1222_, v_i_1221_, v___x_1227_);
v_target_1229_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10___redArg(v_target_1223_, v_es_1226_);
v___x_1230_ = lean_unsigned_to_nat(1u);
v___x_1231_ = lean_nat_add(v_i_1221_, v___x_1230_);
lean_dec(v_i_1221_);
v_i_1221_ = v___x_1231_;
v_source_1222_ = v_source_1228_;
v_target_1223_ = v_target_1229_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3___redArg(lean_object* v_data_1233_){
_start:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v_nbuckets_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
v___x_1234_ = lean_array_get_size(v_data_1233_);
v___x_1235_ = lean_unsigned_to_nat(2u);
v_nbuckets_1236_ = lean_nat_mul(v___x_1234_, v___x_1235_);
v___x_1237_ = lean_unsigned_to_nat(0u);
v___x_1238_ = lean_box(0);
v___x_1239_ = lean_mk_array(v_nbuckets_1236_, v___x_1238_);
v___x_1240_ = lean_array_propagate_mark(v_data_1233_, v___x_1239_);
v___x_1241_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6___redArg(v___x_1237_, v_data_1233_, v___x_1240_);
return v___x_1241_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4___redArg(lean_object* v_a_1242_, lean_object* v_b_1243_, lean_object* v_x_1244_){
_start:
{
if (lean_obj_tag(v_x_1244_) == 0)
{
lean_dec(v_b_1243_);
lean_dec_ref(v_a_1242_);
return v_x_1244_;
}
else
{
lean_object* v_key_1245_; lean_object* v_value_1246_; lean_object* v_tail_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1259_; 
v_key_1245_ = lean_ctor_get(v_x_1244_, 0);
v_value_1246_ = lean_ctor_get(v_x_1244_, 1);
v_tail_1247_ = lean_ctor_get(v_x_1244_, 2);
v_isSharedCheck_1259_ = !lean_is_exclusive(v_x_1244_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1249_ = v_x_1244_;
v_isShared_1250_ = v_isSharedCheck_1259_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_tail_1247_);
lean_inc(v_value_1246_);
lean_inc(v_key_1245_);
lean_dec(v_x_1244_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1259_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
uint8_t v___x_1251_; 
v___x_1251_ = l_Lean_ExprStructEq_beq(v_key_1245_, v_a_1242_);
if (v___x_1251_ == 0)
{
lean_object* v___x_1252_; lean_object* v___x_1254_; 
v___x_1252_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4___redArg(v_a_1242_, v_b_1243_, v_tail_1247_);
if (v_isShared_1250_ == 0)
{
lean_ctor_set(v___x_1249_, 2, v___x_1252_);
v___x_1254_ = v___x_1249_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v_key_1245_);
lean_ctor_set(v_reuseFailAlloc_1255_, 1, v_value_1246_);
lean_ctor_set(v_reuseFailAlloc_1255_, 2, v___x_1252_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
else
{
lean_object* v___x_1257_; 
lean_dec(v_value_1246_);
lean_dec(v_key_1245_);
if (v_isShared_1250_ == 0)
{
lean_ctor_set(v___x_1249_, 1, v_b_1243_);
lean_ctor_set(v___x_1249_, 0, v_a_1242_);
v___x_1257_ = v___x_1249_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v_a_1242_);
lean_ctor_set(v_reuseFailAlloc_1258_, 1, v_b_1243_);
lean_ctor_set(v_reuseFailAlloc_1258_, 2, v_tail_1247_);
v___x_1257_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
return v___x_1257_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg(lean_object* v_a_1260_, lean_object* v_x_1261_){
_start:
{
if (lean_obj_tag(v_x_1261_) == 0)
{
uint8_t v___x_1262_; 
v___x_1262_ = 0;
return v___x_1262_;
}
else
{
lean_object* v_key_1263_; lean_object* v_tail_1264_; uint8_t v___x_1265_; 
v_key_1263_ = lean_ctor_get(v_x_1261_, 0);
v_tail_1264_ = lean_ctor_get(v_x_1261_, 2);
v___x_1265_ = l_Lean_ExprStructEq_beq(v_key_1263_, v_a_1260_);
if (v___x_1265_ == 0)
{
v_x_1261_ = v_tail_1264_;
goto _start;
}
else
{
return v___x_1265_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg___boxed(lean_object* v_a_1267_, lean_object* v_x_1268_){
_start:
{
uint8_t v_res_1269_; lean_object* v_r_1270_; 
v_res_1269_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg(v_a_1267_, v_x_1268_);
lean_dec(v_x_1268_);
lean_dec_ref(v_a_1267_);
v_r_1270_ = lean_box(v_res_1269_);
return v_r_1270_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1___redArg(lean_object* v_m_1271_, lean_object* v_a_1272_, lean_object* v_b_1273_){
_start:
{
lean_object* v_size_1274_; lean_object* v_buckets_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1318_; 
v_size_1274_ = lean_ctor_get(v_m_1271_, 0);
v_buckets_1275_ = lean_ctor_get(v_m_1271_, 1);
v_isSharedCheck_1318_ = !lean_is_exclusive(v_m_1271_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1277_ = v_m_1271_;
v_isShared_1278_ = v_isSharedCheck_1318_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_buckets_1275_);
lean_inc(v_size_1274_);
lean_dec(v_m_1271_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1318_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v___x_1279_; uint64_t v___x_1280_; uint64_t v___x_1281_; uint64_t v___x_1282_; uint64_t v_fold_1283_; uint64_t v___x_1284_; uint64_t v___x_1285_; uint64_t v___x_1286_; size_t v___x_1287_; size_t v___x_1288_; size_t v___x_1289_; size_t v___x_1290_; size_t v___x_1291_; lean_object* v_bkt_1292_; uint8_t v___x_1293_; 
v___x_1279_ = lean_array_get_size(v_buckets_1275_);
v___x_1280_ = l_Lean_ExprStructEq_hash(v_a_1272_);
v___x_1281_ = 32ULL;
v___x_1282_ = lean_uint64_shift_right(v___x_1280_, v___x_1281_);
v_fold_1283_ = lean_uint64_xor(v___x_1280_, v___x_1282_);
v___x_1284_ = 16ULL;
v___x_1285_ = lean_uint64_shift_right(v_fold_1283_, v___x_1284_);
v___x_1286_ = lean_uint64_xor(v_fold_1283_, v___x_1285_);
v___x_1287_ = lean_uint64_to_usize(v___x_1286_);
v___x_1288_ = lean_usize_of_nat(v___x_1279_);
v___x_1289_ = ((size_t)1ULL);
v___x_1290_ = lean_usize_sub(v___x_1288_, v___x_1289_);
v___x_1291_ = lean_usize_land(v___x_1287_, v___x_1290_);
v_bkt_1292_ = lean_array_uget_borrowed(v_buckets_1275_, v___x_1291_);
v___x_1293_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg(v_a_1272_, v_bkt_1292_);
if (v___x_1293_ == 0)
{
lean_object* v___x_1294_; lean_object* v_size_x27_1295_; lean_object* v___x_1296_; lean_object* v_buckets_x27_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; uint8_t v___x_1303_; 
v___x_1294_ = lean_unsigned_to_nat(1u);
v_size_x27_1295_ = lean_nat_add(v_size_1274_, v___x_1294_);
lean_dec(v_size_1274_);
lean_inc(v_bkt_1292_);
v___x_1296_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1296_, 0, v_a_1272_);
lean_ctor_set(v___x_1296_, 1, v_b_1273_);
lean_ctor_set(v___x_1296_, 2, v_bkt_1292_);
v_buckets_x27_1297_ = lean_array_uset(v_buckets_1275_, v___x_1291_, v___x_1296_);
v___x_1298_ = lean_unsigned_to_nat(4u);
v___x_1299_ = lean_nat_mul(v_size_x27_1295_, v___x_1298_);
v___x_1300_ = lean_unsigned_to_nat(3u);
v___x_1301_ = lean_nat_div(v___x_1299_, v___x_1300_);
lean_dec(v___x_1299_);
v___x_1302_ = lean_array_get_size(v_buckets_x27_1297_);
v___x_1303_ = lean_nat_dec_le(v___x_1301_, v___x_1302_);
lean_dec(v___x_1301_);
if (v___x_1303_ == 0)
{
lean_object* v_val_1304_; lean_object* v___x_1306_; 
v_val_1304_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3___redArg(v_buckets_x27_1297_);
if (v_isShared_1278_ == 0)
{
lean_ctor_set(v___x_1277_, 1, v_val_1304_);
lean_ctor_set(v___x_1277_, 0, v_size_x27_1295_);
v___x_1306_ = v___x_1277_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_size_x27_1295_);
lean_ctor_set(v_reuseFailAlloc_1307_, 1, v_val_1304_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
else
{
lean_object* v___x_1309_; 
if (v_isShared_1278_ == 0)
{
lean_ctor_set(v___x_1277_, 1, v_buckets_x27_1297_);
lean_ctor_set(v___x_1277_, 0, v_size_x27_1295_);
v___x_1309_ = v___x_1277_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v_size_x27_1295_);
lean_ctor_set(v_reuseFailAlloc_1310_, 1, v_buckets_x27_1297_);
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
lean_object* v___x_1311_; lean_object* v_buckets_x27_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1316_; 
lean_inc(v_bkt_1292_);
v___x_1311_ = lean_box(0);
v_buckets_x27_1312_ = lean_array_uset(v_buckets_1275_, v___x_1291_, v___x_1311_);
v___x_1313_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4___redArg(v_a_1272_, v_b_1273_, v_bkt_1292_);
v___x_1314_ = lean_array_uset(v_buckets_x27_1312_, v___x_1291_, v___x_1313_);
if (v_isShared_1278_ == 0)
{
lean_ctor_set(v___x_1277_, 1, v___x_1314_);
v___x_1316_ = v___x_1277_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v_size_1274_);
lean_ctor_set(v_reuseFailAlloc_1317_, 1, v___x_1314_);
v___x_1316_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
return v___x_1316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux(lean_object* v_e_1319_, uint8_t v_a_1320_, lean_object* v_a_1321_, lean_object* v_a_1322_, lean_object* v_a_1323_, lean_object* v_a_1324_, lean_object* v_a_1325_){
_start:
{
switch(lean_obj_tag(v_e_1319_))
{
case 11:
{
lean_object* v_typeName_1327_; lean_object* v_idx_1328_; lean_object* v_struct_1329_; lean_object* v___x_1330_; 
v_typeName_1327_ = lean_ctor_get(v_e_1319_, 0);
v_idx_1328_ = lean_ctor_get(v_e_1319_, 1);
v_struct_1329_ = lean_ctor_get(v_e_1319_, 2);
lean_inc_ref(v_struct_1329_);
v___x_1330_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_struct_1329_, v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_, v_a_1324_, v_a_1325_);
if (lean_obj_tag(v___x_1330_) == 0)
{
lean_object* v_a_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1345_; 
v_a_1331_ = lean_ctor_get(v___x_1330_, 0);
v_isSharedCheck_1345_ = !lean_is_exclusive(v___x_1330_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1333_ = v___x_1330_;
v_isShared_1334_ = v_isSharedCheck_1345_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_a_1331_);
lean_dec(v___x_1330_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1345_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
size_t v___x_1335_; size_t v___x_1336_; uint8_t v___x_1337_; 
v___x_1335_ = lean_ptr_addr(v_struct_1329_);
v___x_1336_ = lean_ptr_addr(v_a_1331_);
v___x_1337_ = lean_usize_dec_eq(v___x_1335_, v___x_1336_);
if (v___x_1337_ == 0)
{
lean_object* v___x_1338_; lean_object* v___x_1340_; 
lean_inc(v_idx_1328_);
lean_inc(v_typeName_1327_);
lean_dec_ref_known(v_e_1319_, 3);
v___x_1338_ = l_Lean_Expr_proj___override(v_typeName_1327_, v_idx_1328_, v_a_1331_);
if (v_isShared_1334_ == 0)
{
lean_ctor_set(v___x_1333_, 0, v___x_1338_);
v___x_1340_ = v___x_1333_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v___x_1338_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
else
{
lean_object* v___x_1343_; 
lean_dec(v_a_1331_);
if (v_isShared_1334_ == 0)
{
lean_ctor_set(v___x_1333_, 0, v_e_1319_);
v___x_1343_ = v___x_1333_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v_e_1319_);
v___x_1343_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
return v___x_1343_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_1319_, 3);
return v___x_1330_;
}
}
case 7:
{
lean_object* v_binderName_1346_; lean_object* v_binderType_1347_; lean_object* v_body_1348_; uint8_t v_binderInfo_1349_; lean_object* v___x_1350_; 
v_binderName_1346_ = lean_ctor_get(v_e_1319_, 0);
v_binderType_1347_ = lean_ctor_get(v_e_1319_, 1);
v_body_1348_ = lean_ctor_get(v_e_1319_, 2);
v_binderInfo_1349_ = lean_ctor_get_uint8(v_e_1319_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1347_);
v___x_1350_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_binderType_1347_, v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_, v_a_1324_, v_a_1325_);
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_object* v_a_1351_; lean_object* v___x_1352_; 
v_a_1351_ = lean_ctor_get(v___x_1350_, 0);
lean_inc(v_a_1351_);
lean_dec_ref_known(v___x_1350_, 1);
lean_inc_ref(v_body_1348_);
v___x_1352_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_body_1348_, v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_, v_a_1324_, v_a_1325_);
if (lean_obj_tag(v___x_1352_) == 0)
{
lean_object* v_a_1353_; lean_object* v___x_1355_; uint8_t v_isShared_1356_; uint8_t v_isSharedCheck_1379_; 
v_a_1353_ = lean_ctor_get(v___x_1352_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1355_ = v___x_1352_;
v_isShared_1356_ = v_isSharedCheck_1379_;
goto v_resetjp_1354_;
}
else
{
lean_inc(v_a_1353_);
lean_dec(v___x_1352_);
v___x_1355_ = lean_box(0);
v_isShared_1356_ = v_isSharedCheck_1379_;
goto v_resetjp_1354_;
}
v_resetjp_1354_:
{
size_t v___x_1357_; size_t v___x_1358_; uint8_t v___x_1359_; 
v___x_1357_ = lean_ptr_addr(v_binderType_1347_);
v___x_1358_ = lean_ptr_addr(v_a_1351_);
v___x_1359_ = lean_usize_dec_eq(v___x_1357_, v___x_1358_);
if (v___x_1359_ == 0)
{
lean_object* v___x_1360_; lean_object* v___x_1362_; 
lean_inc(v_binderName_1346_);
lean_dec_ref_known(v_e_1319_, 3);
v___x_1360_ = l_Lean_Expr_forallE___override(v_binderName_1346_, v_a_1351_, v_a_1353_, v_binderInfo_1349_);
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 0, v___x_1360_);
v___x_1362_ = v___x_1355_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v___x_1360_);
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
size_t v___x_1364_; size_t v___x_1365_; uint8_t v___x_1366_; 
v___x_1364_ = lean_ptr_addr(v_body_1348_);
v___x_1365_ = lean_ptr_addr(v_a_1353_);
v___x_1366_ = lean_usize_dec_eq(v___x_1364_, v___x_1365_);
if (v___x_1366_ == 0)
{
lean_object* v___x_1367_; lean_object* v___x_1369_; 
lean_inc(v_binderName_1346_);
lean_dec_ref_known(v_e_1319_, 3);
v___x_1367_ = l_Lean_Expr_forallE___override(v_binderName_1346_, v_a_1351_, v_a_1353_, v_binderInfo_1349_);
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 0, v___x_1367_);
v___x_1369_ = v___x_1355_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v___x_1367_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
return v___x_1369_;
}
}
else
{
uint8_t v___x_1371_; 
v___x_1371_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1349_, v_binderInfo_1349_);
if (v___x_1371_ == 0)
{
lean_object* v___x_1372_; lean_object* v___x_1374_; 
lean_inc(v_binderName_1346_);
lean_dec_ref_known(v_e_1319_, 3);
v___x_1372_ = l_Lean_Expr_forallE___override(v_binderName_1346_, v_a_1351_, v_a_1353_, v_binderInfo_1349_);
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 0, v___x_1372_);
v___x_1374_ = v___x_1355_;
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
lean_object* v___x_1377_; 
lean_dec(v_a_1353_);
lean_dec(v_a_1351_);
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 0, v_e_1319_);
v___x_1377_ = v___x_1355_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_e_1319_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
}
}
}
else
{
lean_dec(v_a_1351_);
lean_dec_ref_known(v_e_1319_, 3);
return v___x_1352_;
}
}
else
{
lean_dec_ref_known(v_e_1319_, 3);
return v___x_1350_;
}
}
case 6:
{
lean_object* v_binderName_1380_; lean_object* v_binderType_1381_; lean_object* v_body_1382_; uint8_t v_binderInfo_1383_; lean_object* v___x_1384_; 
v_binderName_1380_ = lean_ctor_get(v_e_1319_, 0);
v_binderType_1381_ = lean_ctor_get(v_e_1319_, 1);
v_body_1382_ = lean_ctor_get(v_e_1319_, 2);
v_binderInfo_1383_ = lean_ctor_get_uint8(v_e_1319_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1381_);
v___x_1384_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_binderType_1381_, v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_, v_a_1324_, v_a_1325_);
if (lean_obj_tag(v___x_1384_) == 0)
{
lean_object* v_a_1385_; lean_object* v___x_1386_; 
v_a_1385_ = lean_ctor_get(v___x_1384_, 0);
lean_inc(v_a_1385_);
lean_dec_ref_known(v___x_1384_, 1);
lean_inc_ref(v_body_1382_);
v___x_1386_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_body_1382_, v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_, v_a_1324_, v_a_1325_);
if (lean_obj_tag(v___x_1386_) == 0)
{
lean_object* v_a_1387_; lean_object* v___x_1389_; uint8_t v_isShared_1390_; uint8_t v_isSharedCheck_1413_; 
v_a_1387_ = lean_ctor_get(v___x_1386_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1386_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1389_ = v___x_1386_;
v_isShared_1390_ = v_isSharedCheck_1413_;
goto v_resetjp_1388_;
}
else
{
lean_inc(v_a_1387_);
lean_dec(v___x_1386_);
v___x_1389_ = lean_box(0);
v_isShared_1390_ = v_isSharedCheck_1413_;
goto v_resetjp_1388_;
}
v_resetjp_1388_:
{
size_t v___x_1391_; size_t v___x_1392_; uint8_t v___x_1393_; 
v___x_1391_ = lean_ptr_addr(v_binderType_1381_);
v___x_1392_ = lean_ptr_addr(v_a_1385_);
v___x_1393_ = lean_usize_dec_eq(v___x_1391_, v___x_1392_);
if (v___x_1393_ == 0)
{
lean_object* v___x_1394_; lean_object* v___x_1396_; 
lean_inc(v_binderName_1380_);
lean_dec_ref_known(v_e_1319_, 3);
v___x_1394_ = l_Lean_Expr_lam___override(v_binderName_1380_, v_a_1385_, v_a_1387_, v_binderInfo_1383_);
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 0, v___x_1394_);
v___x_1396_ = v___x_1389_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v___x_1394_);
v___x_1396_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
return v___x_1396_;
}
}
else
{
size_t v___x_1398_; size_t v___x_1399_; uint8_t v___x_1400_; 
v___x_1398_ = lean_ptr_addr(v_body_1382_);
v___x_1399_ = lean_ptr_addr(v_a_1387_);
v___x_1400_ = lean_usize_dec_eq(v___x_1398_, v___x_1399_);
if (v___x_1400_ == 0)
{
lean_object* v___x_1401_; lean_object* v___x_1403_; 
lean_inc(v_binderName_1380_);
lean_dec_ref_known(v_e_1319_, 3);
v___x_1401_ = l_Lean_Expr_lam___override(v_binderName_1380_, v_a_1385_, v_a_1387_, v_binderInfo_1383_);
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 0, v___x_1401_);
v___x_1403_ = v___x_1389_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v___x_1401_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
return v___x_1403_;
}
}
else
{
uint8_t v___x_1405_; 
v___x_1405_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1383_, v_binderInfo_1383_);
if (v___x_1405_ == 0)
{
lean_object* v___x_1406_; lean_object* v___x_1408_; 
lean_inc(v_binderName_1380_);
lean_dec_ref_known(v_e_1319_, 3);
v___x_1406_ = l_Lean_Expr_lam___override(v_binderName_1380_, v_a_1385_, v_a_1387_, v_binderInfo_1383_);
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 0, v___x_1406_);
v___x_1408_ = v___x_1389_;
goto v_reusejp_1407_;
}
else
{
lean_object* v_reuseFailAlloc_1409_; 
v_reuseFailAlloc_1409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1409_, 0, v___x_1406_);
v___x_1408_ = v_reuseFailAlloc_1409_;
goto v_reusejp_1407_;
}
v_reusejp_1407_:
{
return v___x_1408_;
}
}
else
{
lean_object* v___x_1411_; 
lean_dec(v_a_1387_);
lean_dec(v_a_1385_);
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 0, v_e_1319_);
v___x_1411_ = v___x_1389_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_e_1319_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
}
}
else
{
lean_dec(v_a_1385_);
lean_dec_ref_known(v_e_1319_, 3);
return v___x_1386_;
}
}
else
{
lean_dec_ref_known(v_e_1319_, 3);
return v___x_1384_;
}
}
case 8:
{
lean_object* v_declName_1414_; lean_object* v_type_1415_; lean_object* v_value_1416_; lean_object* v_body_1417_; uint8_t v_nondep_1418_; lean_object* v___x_1419_; 
v_declName_1414_ = lean_ctor_get(v_e_1319_, 0);
v_type_1415_ = lean_ctor_get(v_e_1319_, 1);
v_value_1416_ = lean_ctor_get(v_e_1319_, 2);
v_body_1417_ = lean_ctor_get(v_e_1319_, 3);
v_nondep_1418_ = lean_ctor_get_uint8(v_e_1319_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_1415_);
v___x_1419_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_type_1415_, v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_, v_a_1324_, v_a_1325_);
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_object* v_a_1420_; lean_object* v___x_1421_; 
v_a_1420_ = lean_ctor_get(v___x_1419_, 0);
lean_inc(v_a_1420_);
lean_dec_ref_known(v___x_1419_, 1);
lean_inc_ref(v_value_1416_);
v___x_1421_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_value_1416_, v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_, v_a_1324_, v_a_1325_);
if (lean_obj_tag(v___x_1421_) == 0)
{
lean_object* v_a_1422_; lean_object* v___x_1423_; 
v_a_1422_ = lean_ctor_get(v___x_1421_, 0);
lean_inc(v_a_1422_);
lean_dec_ref_known(v___x_1421_, 1);
lean_inc_ref(v_body_1417_);
v___x_1423_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_body_1417_, v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_, v_a_1324_, v_a_1325_);
if (lean_obj_tag(v___x_1423_) == 0)
{
lean_object* v_a_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1452_; 
v_a_1424_ = lean_ctor_get(v___x_1423_, 0);
v_isSharedCheck_1452_ = !lean_is_exclusive(v___x_1423_);
if (v_isSharedCheck_1452_ == 0)
{
v___x_1426_ = v___x_1423_;
v_isShared_1427_ = v_isSharedCheck_1452_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_a_1424_);
lean_dec(v___x_1423_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1452_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
size_t v___x_1428_; size_t v___x_1429_; uint8_t v___x_1430_; 
v___x_1428_ = lean_ptr_addr(v_type_1415_);
v___x_1429_ = lean_ptr_addr(v_a_1420_);
v___x_1430_ = lean_usize_dec_eq(v___x_1428_, v___x_1429_);
if (v___x_1430_ == 0)
{
lean_object* v___x_1431_; lean_object* v___x_1433_; 
lean_inc(v_declName_1414_);
lean_dec_ref_known(v_e_1319_, 4);
v___x_1431_ = l_Lean_Expr_letE___override(v_declName_1414_, v_a_1420_, v_a_1422_, v_a_1424_, v_nondep_1418_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 0, v___x_1431_);
v___x_1433_ = v___x_1426_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v___x_1431_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
else
{
size_t v___x_1435_; size_t v___x_1436_; uint8_t v___x_1437_; 
v___x_1435_ = lean_ptr_addr(v_value_1416_);
v___x_1436_ = lean_ptr_addr(v_a_1422_);
v___x_1437_ = lean_usize_dec_eq(v___x_1435_, v___x_1436_);
if (v___x_1437_ == 0)
{
lean_object* v___x_1438_; lean_object* v___x_1440_; 
lean_inc(v_declName_1414_);
lean_dec_ref_known(v_e_1319_, 4);
v___x_1438_ = l_Lean_Expr_letE___override(v_declName_1414_, v_a_1420_, v_a_1422_, v_a_1424_, v_nondep_1418_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 0, v___x_1438_);
v___x_1440_ = v___x_1426_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v___x_1438_);
v___x_1440_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
return v___x_1440_;
}
}
else
{
size_t v___x_1442_; size_t v___x_1443_; uint8_t v___x_1444_; 
v___x_1442_ = lean_ptr_addr(v_body_1417_);
v___x_1443_ = lean_ptr_addr(v_a_1424_);
v___x_1444_ = lean_usize_dec_eq(v___x_1442_, v___x_1443_);
if (v___x_1444_ == 0)
{
lean_object* v___x_1445_; lean_object* v___x_1447_; 
lean_inc(v_declName_1414_);
lean_dec_ref_known(v_e_1319_, 4);
v___x_1445_ = l_Lean_Expr_letE___override(v_declName_1414_, v_a_1420_, v_a_1422_, v_a_1424_, v_nondep_1418_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 0, v___x_1445_);
v___x_1447_ = v___x_1426_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v___x_1445_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
return v___x_1447_;
}
}
else
{
lean_object* v___x_1450_; 
lean_dec(v_a_1424_);
lean_dec(v_a_1422_);
lean_dec(v_a_1420_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 0, v_e_1319_);
v___x_1450_ = v___x_1426_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1451_; 
v_reuseFailAlloc_1451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1451_, 0, v_e_1319_);
v___x_1450_ = v_reuseFailAlloc_1451_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
return v___x_1450_;
}
}
}
}
}
}
else
{
lean_dec(v_a_1422_);
lean_dec(v_a_1420_);
lean_dec_ref_known(v_e_1319_, 4);
return v___x_1423_;
}
}
else
{
lean_dec(v_a_1420_);
lean_dec_ref_known(v_e_1319_, 4);
return v___x_1421_;
}
}
else
{
lean_dec_ref_known(v_e_1319_, 4);
return v___x_1419_;
}
}
case 5:
{
lean_object* v_fn_1453_; lean_object* v_arg_1454_; lean_object* v___x_1455_; 
v_fn_1453_ = lean_ctor_get(v_e_1319_, 0);
v_arg_1454_ = lean_ctor_get(v_e_1319_, 1);
lean_inc_ref(v_fn_1453_);
v___x_1455_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_fn_1453_, v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_, v_a_1324_, v_a_1325_);
if (lean_obj_tag(v___x_1455_) == 0)
{
lean_object* v_a_1456_; lean_object* v___x_1457_; 
v_a_1456_ = lean_ctor_get(v___x_1455_, 0);
lean_inc(v_a_1456_);
lean_dec_ref_known(v___x_1455_, 1);
lean_inc_ref(v_arg_1454_);
v___x_1457_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_arg_1454_, v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_, v_a_1324_, v_a_1325_);
if (lean_obj_tag(v___x_1457_) == 0)
{
lean_object* v_a_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1479_; 
v_a_1458_ = lean_ctor_get(v___x_1457_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1457_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1460_ = v___x_1457_;
v_isShared_1461_ = v_isSharedCheck_1479_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_a_1458_);
lean_dec(v___x_1457_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1479_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
size_t v___x_1462_; size_t v___x_1463_; uint8_t v___x_1464_; 
v___x_1462_ = lean_ptr_addr(v_fn_1453_);
v___x_1463_ = lean_ptr_addr(v_a_1456_);
v___x_1464_ = lean_usize_dec_eq(v___x_1462_, v___x_1463_);
if (v___x_1464_ == 0)
{
lean_object* v___x_1465_; lean_object* v___x_1467_; 
lean_dec_ref_known(v_e_1319_, 2);
v___x_1465_ = l_Lean_Expr_app___override(v_a_1456_, v_a_1458_);
if (v_isShared_1461_ == 0)
{
lean_ctor_set(v___x_1460_, 0, v___x_1465_);
v___x_1467_ = v___x_1460_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v___x_1465_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
else
{
size_t v___x_1469_; size_t v___x_1470_; uint8_t v___x_1471_; 
v___x_1469_ = lean_ptr_addr(v_arg_1454_);
v___x_1470_ = lean_ptr_addr(v_a_1458_);
v___x_1471_ = lean_usize_dec_eq(v___x_1469_, v___x_1470_);
if (v___x_1471_ == 0)
{
lean_object* v___x_1472_; lean_object* v___x_1474_; 
lean_dec_ref_known(v_e_1319_, 2);
v___x_1472_ = l_Lean_Expr_app___override(v_a_1456_, v_a_1458_);
if (v_isShared_1461_ == 0)
{
lean_ctor_set(v___x_1460_, 0, v___x_1472_);
v___x_1474_ = v___x_1460_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v___x_1472_);
v___x_1474_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
return v___x_1474_;
}
}
else
{
lean_object* v___x_1477_; 
lean_dec(v_a_1458_);
lean_dec(v_a_1456_);
if (v_isShared_1461_ == 0)
{
lean_ctor_set(v___x_1460_, 0, v_e_1319_);
v___x_1477_ = v___x_1460_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_e_1319_);
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
else
{
lean_dec(v_a_1456_);
lean_dec_ref_known(v_e_1319_, 2);
return v___x_1457_;
}
}
else
{
lean_dec_ref_known(v_e_1319_, 2);
return v___x_1455_;
}
}
case 10:
{
lean_object* v_data_1480_; lean_object* v_expr_1481_; lean_object* v___x_1482_; 
v_data_1480_ = lean_ctor_get(v_e_1319_, 0);
v_expr_1481_ = lean_ctor_get(v_e_1319_, 1);
lean_inc_ref(v_expr_1481_);
v___x_1482_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_expr_1481_, v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_, v_a_1324_, v_a_1325_);
if (lean_obj_tag(v___x_1482_) == 0)
{
lean_object* v_a_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1497_; 
v_a_1483_ = lean_ctor_get(v___x_1482_, 0);
v_isSharedCheck_1497_ = !lean_is_exclusive(v___x_1482_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1485_ = v___x_1482_;
v_isShared_1486_ = v_isSharedCheck_1497_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_a_1483_);
lean_dec(v___x_1482_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1497_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
size_t v___x_1487_; size_t v___x_1488_; uint8_t v___x_1489_; 
v___x_1487_ = lean_ptr_addr(v_expr_1481_);
v___x_1488_ = lean_ptr_addr(v_a_1483_);
v___x_1489_ = lean_usize_dec_eq(v___x_1487_, v___x_1488_);
if (v___x_1489_ == 0)
{
lean_object* v___x_1490_; lean_object* v___x_1492_; 
lean_inc(v_data_1480_);
lean_dec_ref_known(v_e_1319_, 2);
v___x_1490_ = l_Lean_Expr_mdata___override(v_data_1480_, v_a_1483_);
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 0, v___x_1490_);
v___x_1492_ = v___x_1485_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v___x_1490_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
else
{
lean_object* v___x_1495_; 
lean_dec(v_a_1483_);
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 0, v_e_1319_);
v___x_1495_ = v___x_1485_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v_e_1319_);
v___x_1495_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
return v___x_1495_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_1319_, 2);
return v___x_1482_;
}
}
case 3:
{
lean_object* v_u_1498_; lean_object* v___x_1499_; 
v_u_1498_ = lean_ctor_get(v_e_1319_, 0);
lean_inc(v_u_1498_);
v___x_1499_ = l_Lean_Meta_Closure_collectLevel___redArg(v_u_1498_, v_a_1321_);
if (lean_obj_tag(v___x_1499_) == 0)
{
lean_object* v_a_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1514_; 
v_a_1500_ = lean_ctor_get(v___x_1499_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1502_ = v___x_1499_;
v_isShared_1503_ = v_isSharedCheck_1514_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_a_1500_);
lean_dec(v___x_1499_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1514_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
size_t v___x_1504_; size_t v___x_1505_; uint8_t v___x_1506_; 
v___x_1504_ = lean_ptr_addr(v_u_1498_);
v___x_1505_ = lean_ptr_addr(v_a_1500_);
v___x_1506_ = lean_usize_dec_eq(v___x_1504_, v___x_1505_);
if (v___x_1506_ == 0)
{
lean_object* v___x_1507_; lean_object* v___x_1509_; 
lean_dec_ref_known(v_e_1319_, 1);
v___x_1507_ = l_Lean_Expr_sort___override(v_a_1500_);
if (v_isShared_1503_ == 0)
{
lean_ctor_set(v___x_1502_, 0, v___x_1507_);
v___x_1509_ = v___x_1502_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v___x_1507_);
v___x_1509_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
return v___x_1509_;
}
}
else
{
lean_object* v___x_1512_; 
lean_dec(v_a_1500_);
if (v_isShared_1503_ == 0)
{
lean_ctor_set(v___x_1502_, 0, v_e_1319_);
v___x_1512_ = v___x_1502_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v_e_1319_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
}
else
{
lean_object* v_a_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1522_; 
lean_dec_ref_known(v_e_1319_, 1);
v_a_1515_ = lean_ctor_get(v___x_1499_, 0);
v_isSharedCheck_1522_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1517_ = v___x_1499_;
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_a_1515_);
lean_dec(v___x_1499_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
lean_object* v___x_1520_; 
if (v_isShared_1518_ == 0)
{
v___x_1520_ = v___x_1517_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v_a_1515_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
}
}
case 4:
{
lean_object* v_declName_1523_; lean_object* v_us_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; 
v_declName_1523_ = lean_ctor_get(v_e_1319_, 0);
v_us_1524_ = lean_ctor_get(v_e_1319_, 1);
v___x_1525_ = lean_box(0);
lean_inc(v_us_1524_);
v___x_1526_ = l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg(v_us_1524_, v___x_1525_, v_a_1321_);
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v_a_1527_; lean_object* v___x_1529_; uint8_t v_isShared_1530_; uint8_t v_isSharedCheck_1539_; 
v_a_1527_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1529_ = v___x_1526_;
v_isShared_1530_ = v_isSharedCheck_1539_;
goto v_resetjp_1528_;
}
else
{
lean_inc(v_a_1527_);
lean_dec(v___x_1526_);
v___x_1529_ = lean_box(0);
v_isShared_1530_ = v_isSharedCheck_1539_;
goto v_resetjp_1528_;
}
v_resetjp_1528_:
{
uint8_t v___x_1531_; 
v___x_1531_ = l_ptrEqList___redArg(v_us_1524_, v_a_1527_);
if (v___x_1531_ == 0)
{
lean_object* v___x_1532_; lean_object* v___x_1534_; 
lean_inc(v_declName_1523_);
lean_dec_ref_known(v_e_1319_, 2);
v___x_1532_ = l_Lean_Expr_const___override(v_declName_1523_, v_a_1527_);
if (v_isShared_1530_ == 0)
{
lean_ctor_set(v___x_1529_, 0, v___x_1532_);
v___x_1534_ = v___x_1529_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v___x_1532_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
return v___x_1534_;
}
}
else
{
lean_object* v___x_1537_; 
lean_dec(v_a_1527_);
if (v_isShared_1530_ == 0)
{
lean_ctor_set(v___x_1529_, 0, v_e_1319_);
v___x_1537_ = v___x_1529_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_e_1319_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
}
else
{
lean_object* v_a_1540_; lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1547_; 
lean_dec_ref_known(v_e_1319_, 2);
v_a_1540_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1547_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1547_ == 0)
{
v___x_1542_ = v___x_1526_;
v_isShared_1543_ = v_isSharedCheck_1547_;
goto v_resetjp_1541_;
}
else
{
lean_inc(v_a_1540_);
lean_dec(v___x_1526_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1547_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
lean_object* v___x_1545_; 
if (v_isShared_1543_ == 0)
{
v___x_1545_ = v___x_1542_;
goto v_reusejp_1544_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v_a_1540_);
v___x_1545_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1544_;
}
v_reusejp_1544_:
{
return v___x_1545_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_1548_; lean_object* v___f_1549_; lean_object* v___x_1550_; 
v_mvarId_1548_ = lean_ctor_get(v_e_1319_, 0);
lean_inc_ref(v_e_1319_);
v___f_1549_ = lean_alloc_closure((void*)(l_Lean_Meta_Closure_collectExprAux___lam__1___boxed), 10, 1);
lean_closure_set(v___f_1549_, 0, v_e_1319_);
lean_inc(v_mvarId_1548_);
v___x_1550_ = l_Lean_MVarId_getDecl(v_mvarId_1548_, v_a_1322_, v_a_1323_, v_a_1324_, v_a_1325_);
if (lean_obj_tag(v___x_1550_) == 0)
{
lean_object* v_a_1551_; lean_object* v_type_1552_; lean_object* v___x_1553_; 
v_a_1551_ = lean_ctor_get(v___x_1550_, 0);
lean_inc(v_a_1551_);
lean_dec_ref_known(v___x_1550_, 1);
v_type_1552_ = lean_ctor_get(v_a_1551_, 2);
lean_inc_ref_n(v_type_1552_, 2);
lean_dec(v_a_1551_);
v___x_1553_ = l_Lean_Meta_Closure_preprocess(v_type_1552_, v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_, v_a_1324_, v_a_1325_);
if (lean_obj_tag(v___x_1553_) == 0)
{
lean_object* v_a_1554_; lean_object* v___x_1555_; 
v_a_1554_ = lean_ctor_get(v___x_1553_, 0);
lean_inc(v_a_1554_);
lean_dec_ref_known(v___x_1553_, 1);
v___x_1555_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_a_1554_, v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_, v_a_1324_, v_a_1325_);
if (lean_obj_tag(v___x_1555_) == 0)
{
lean_object* v_a_1556_; lean_object* v___x_1557_; 
v_a_1556_ = lean_ctor_get(v___x_1555_, 0);
lean_inc(v_a_1556_);
lean_dec_ref_known(v___x_1555_, 1);
v___x_1557_ = l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3(v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_, v_a_1324_, v_a_1325_);
if (lean_obj_tag(v___x_1557_) == 0)
{
lean_object* v_a_1558_; lean_object* v___x_1559_; 
v_a_1558_ = lean_ctor_get(v___x_1557_, 0);
lean_inc(v_a_1558_);
lean_dec_ref_known(v___x_1557_, 1);
v___x_1559_ = l_Lean_Meta_Closure_mkNextUserName___redArg(v_a_1321_);
if (lean_obj_tag(v___x_1559_) == 0)
{
lean_object* v_a_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1621_; 
v_a_1560_ = lean_ctor_get(v___x_1559_, 0);
v_isSharedCheck_1621_ = !lean_is_exclusive(v___x_1559_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1562_ = v___x_1559_;
v_isShared_1563_ = v_isSharedCheck_1621_;
goto v_resetjp_1561_;
}
else
{
lean_inc(v_a_1560_);
lean_dec(v___x_1559_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1621_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
lean_object* v_e_x27_1565_; lean_object* v___y_1566_; lean_object* v___x_1598_; 
v___x_1598_ = l_Lean_getDelayedMVarAssignment_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__4___redArg(v_mvarId_1548_, v_a_1323_);
if (lean_obj_tag(v___x_1598_) == 0)
{
lean_object* v_a_1599_; 
v_a_1599_ = lean_ctor_get(v___x_1598_, 0);
lean_inc(v_a_1599_);
lean_dec_ref_known(v___x_1598_, 1);
if (lean_obj_tag(v_a_1599_) == 1)
{
lean_object* v_val_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1612_; 
lean_dec_ref_known(v_e_1319_, 1);
v_val_1600_ = lean_ctor_get(v_a_1599_, 0);
v_isSharedCheck_1612_ = !lean_is_exclusive(v_a_1599_);
if (v_isSharedCheck_1612_ == 0)
{
v___x_1602_ = v_a_1599_;
v_isShared_1603_ = v_isSharedCheck_1612_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_val_1600_);
lean_dec(v_a_1599_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1612_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v_fvars_1604_; lean_object* v___x_1605_; lean_object* v___x_1607_; 
v_fvars_1604_ = lean_ctor_get(v_val_1600_, 0);
lean_inc_ref(v_fvars_1604_);
lean_dec(v_val_1600_);
v___x_1605_ = lean_array_get_size(v_fvars_1604_);
lean_dec_ref(v_fvars_1604_);
if (v_isShared_1603_ == 0)
{
lean_ctor_set(v___x_1602_, 0, v___x_1605_);
v___x_1607_ = v___x_1602_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v___x_1605_);
v___x_1607_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
uint8_t v___x_1608_; lean_object* v___x_1609_; 
v___x_1608_ = 0;
v___x_1609_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_Closure_collectExprAux_spec__5___redArg(v_type_1552_, v___x_1607_, v___f_1549_, v___x_1608_, v___x_1608_, v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_, v_a_1324_, v_a_1325_);
if (lean_obj_tag(v___x_1609_) == 0)
{
lean_object* v_a_1610_; 
v_a_1610_ = lean_ctor_get(v___x_1609_, 0);
lean_inc(v_a_1610_);
lean_dec_ref_known(v___x_1609_, 1);
v_e_x27_1565_ = v_a_1610_;
v___y_1566_ = v_a_1321_;
goto v___jp_1564_;
}
else
{
lean_del_object(v___x_1562_);
lean_dec(v_a_1560_);
lean_dec(v_a_1558_);
lean_dec(v_a_1556_);
return v___x_1609_;
}
}
}
}
else
{
lean_dec(v_a_1599_);
lean_dec_ref(v_type_1552_);
lean_dec_ref(v___f_1549_);
v_e_x27_1565_ = v_e_1319_;
v___y_1566_ = v_a_1321_;
goto v___jp_1564_;
}
}
else
{
lean_object* v_a_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1620_; 
lean_del_object(v___x_1562_);
lean_dec(v_a_1560_);
lean_dec(v_a_1558_);
lean_dec(v_a_1556_);
lean_dec_ref(v_type_1552_);
lean_dec_ref(v___f_1549_);
lean_dec_ref_known(v_e_1319_, 1);
v_a_1613_ = lean_ctor_get(v___x_1598_, 0);
v_isSharedCheck_1620_ = !lean_is_exclusive(v___x_1598_);
if (v_isSharedCheck_1620_ == 0)
{
v___x_1615_ = v___x_1598_;
v_isShared_1616_ = v_isSharedCheck_1620_;
goto v_resetjp_1614_;
}
else
{
lean_inc(v_a_1613_);
lean_dec(v___x_1598_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1620_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
lean_object* v___x_1618_; 
if (v_isShared_1616_ == 0)
{
v___x_1618_ = v___x_1615_;
goto v_reusejp_1617_;
}
else
{
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v_a_1613_);
v___x_1618_ = v_reuseFailAlloc_1619_;
goto v_reusejp_1617_;
}
v_reusejp_1617_:
{
return v___x_1618_;
}
}
}
v___jp_1564_:
{
lean_object* v___x_1567_; lean_object* v_visitedLevel_1568_; lean_object* v_visitedExpr_1569_; lean_object* v_levelParams_1570_; lean_object* v_nextLevelIdx_1571_; lean_object* v_levelArgs_1572_; lean_object* v_newLocalDecls_1573_; lean_object* v_newLocalDeclsForMVars_1574_; lean_object* v_newLetDecls_1575_; lean_object* v_nextExprIdx_1576_; lean_object* v_exprMVarArgs_1577_; lean_object* v_exprFVarArgs_1578_; lean_object* v_toProcess_1579_; lean_object* v___x_1581_; uint8_t v_isShared_1582_; uint8_t v_isSharedCheck_1597_; 
v___x_1567_ = lean_st_ref_take(v___y_1566_);
v_visitedLevel_1568_ = lean_ctor_get(v___x_1567_, 0);
v_visitedExpr_1569_ = lean_ctor_get(v___x_1567_, 1);
v_levelParams_1570_ = lean_ctor_get(v___x_1567_, 2);
v_nextLevelIdx_1571_ = lean_ctor_get(v___x_1567_, 3);
v_levelArgs_1572_ = lean_ctor_get(v___x_1567_, 4);
v_newLocalDecls_1573_ = lean_ctor_get(v___x_1567_, 5);
v_newLocalDeclsForMVars_1574_ = lean_ctor_get(v___x_1567_, 6);
v_newLetDecls_1575_ = lean_ctor_get(v___x_1567_, 7);
v_nextExprIdx_1576_ = lean_ctor_get(v___x_1567_, 8);
v_exprMVarArgs_1577_ = lean_ctor_get(v___x_1567_, 9);
v_exprFVarArgs_1578_ = lean_ctor_get(v___x_1567_, 10);
v_toProcess_1579_ = lean_ctor_get(v___x_1567_, 11);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1567_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1581_ = v___x_1567_;
v_isShared_1582_ = v_isSharedCheck_1597_;
goto v_resetjp_1580_;
}
else
{
lean_inc(v_toProcess_1579_);
lean_inc(v_exprFVarArgs_1578_);
lean_inc(v_exprMVarArgs_1577_);
lean_inc(v_nextExprIdx_1576_);
lean_inc(v_newLetDecls_1575_);
lean_inc(v_newLocalDeclsForMVars_1574_);
lean_inc(v_newLocalDecls_1573_);
lean_inc(v_levelArgs_1572_);
lean_inc(v_nextLevelIdx_1571_);
lean_inc(v_levelParams_1570_);
lean_inc(v_visitedExpr_1569_);
lean_inc(v_visitedLevel_1568_);
lean_dec(v___x_1567_);
v___x_1581_ = lean_box(0);
v_isShared_1582_ = v_isSharedCheck_1597_;
goto v_resetjp_1580_;
}
v_resetjp_1580_:
{
lean_object* v___x_1583_; uint8_t v___x_1584_; uint8_t v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1590_; 
v___x_1583_ = lean_unsigned_to_nat(0u);
v___x_1584_ = 0;
v___x_1585_ = 0;
lean_inc(v_a_1558_);
v___x_1586_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1586_, 0, v___x_1583_);
lean_ctor_set(v___x_1586_, 1, v_a_1558_);
lean_ctor_set(v___x_1586_, 2, v_a_1560_);
lean_ctor_set(v___x_1586_, 3, v_a_1556_);
lean_ctor_set_uint8(v___x_1586_, sizeof(void*)*4, v___x_1584_);
lean_ctor_set_uint8(v___x_1586_, sizeof(void*)*4 + 1, v___x_1585_);
v___x_1587_ = lean_array_push(v_newLocalDeclsForMVars_1574_, v___x_1586_);
v___x_1588_ = lean_array_push(v_exprMVarArgs_1577_, v_e_x27_1565_);
if (v_isShared_1582_ == 0)
{
lean_ctor_set(v___x_1581_, 9, v___x_1588_);
lean_ctor_set(v___x_1581_, 6, v___x_1587_);
v___x_1590_ = v___x_1581_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v_visitedLevel_1568_);
lean_ctor_set(v_reuseFailAlloc_1596_, 1, v_visitedExpr_1569_);
lean_ctor_set(v_reuseFailAlloc_1596_, 2, v_levelParams_1570_);
lean_ctor_set(v_reuseFailAlloc_1596_, 3, v_nextLevelIdx_1571_);
lean_ctor_set(v_reuseFailAlloc_1596_, 4, v_levelArgs_1572_);
lean_ctor_set(v_reuseFailAlloc_1596_, 5, v_newLocalDecls_1573_);
lean_ctor_set(v_reuseFailAlloc_1596_, 6, v___x_1587_);
lean_ctor_set(v_reuseFailAlloc_1596_, 7, v_newLetDecls_1575_);
lean_ctor_set(v_reuseFailAlloc_1596_, 8, v_nextExprIdx_1576_);
lean_ctor_set(v_reuseFailAlloc_1596_, 9, v___x_1588_);
lean_ctor_set(v_reuseFailAlloc_1596_, 10, v_exprFVarArgs_1578_);
lean_ctor_set(v_reuseFailAlloc_1596_, 11, v_toProcess_1579_);
v___x_1590_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1594_; 
v___x_1591_ = lean_st_ref_put(v___y_1566_, v___x_1590_);
v___x_1592_ = l_Lean_mkFVar(v_a_1558_);
if (v_isShared_1563_ == 0)
{
lean_ctor_set(v___x_1562_, 0, v___x_1592_);
v___x_1594_ = v___x_1562_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v___x_1592_);
v___x_1594_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
return v___x_1594_;
}
}
}
}
}
}
else
{
lean_object* v_a_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1629_; 
lean_dec(v_a_1558_);
lean_dec(v_a_1556_);
lean_dec_ref(v_type_1552_);
lean_dec_ref(v___f_1549_);
lean_dec_ref_known(v_e_1319_, 1);
v_a_1622_ = lean_ctor_get(v___x_1559_, 0);
v_isSharedCheck_1629_ = !lean_is_exclusive(v___x_1559_);
if (v_isSharedCheck_1629_ == 0)
{
v___x_1624_ = v___x_1559_;
v_isShared_1625_ = v_isSharedCheck_1629_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_a_1622_);
lean_dec(v___x_1559_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1629_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1627_; 
if (v_isShared_1625_ == 0)
{
v___x_1627_ = v___x_1624_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v_a_1622_);
v___x_1627_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
return v___x_1627_;
}
}
}
}
else
{
lean_object* v_a_1630_; lean_object* v___x_1632_; uint8_t v_isShared_1633_; uint8_t v_isSharedCheck_1637_; 
lean_dec(v_a_1556_);
lean_dec_ref(v_type_1552_);
lean_dec_ref(v___f_1549_);
lean_dec_ref_known(v_e_1319_, 1);
v_a_1630_ = lean_ctor_get(v___x_1557_, 0);
v_isSharedCheck_1637_ = !lean_is_exclusive(v___x_1557_);
if (v_isSharedCheck_1637_ == 0)
{
v___x_1632_ = v___x_1557_;
v_isShared_1633_ = v_isSharedCheck_1637_;
goto v_resetjp_1631_;
}
else
{
lean_inc(v_a_1630_);
lean_dec(v___x_1557_);
v___x_1632_ = lean_box(0);
v_isShared_1633_ = v_isSharedCheck_1637_;
goto v_resetjp_1631_;
}
v_resetjp_1631_:
{
lean_object* v___x_1635_; 
if (v_isShared_1633_ == 0)
{
v___x_1635_ = v___x_1632_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v_a_1630_);
v___x_1635_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
return v___x_1635_;
}
}
}
}
else
{
lean_dec_ref(v_type_1552_);
lean_dec_ref(v___f_1549_);
lean_dec_ref_known(v_e_1319_, 1);
return v___x_1555_;
}
}
else
{
lean_dec_ref(v_type_1552_);
lean_dec_ref(v___f_1549_);
lean_dec_ref_known(v_e_1319_, 1);
return v___x_1553_;
}
}
else
{
lean_object* v_a_1638_; lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1645_; 
lean_dec_ref(v___f_1549_);
lean_dec_ref_known(v_e_1319_, 1);
v_a_1638_ = lean_ctor_get(v___x_1550_, 0);
v_isSharedCheck_1645_ = !lean_is_exclusive(v___x_1550_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1640_ = v___x_1550_;
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
else
{
lean_inc(v_a_1638_);
lean_dec(v___x_1550_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v___x_1643_; 
if (v_isShared_1641_ == 0)
{
v___x_1643_ = v___x_1640_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v_a_1638_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
}
}
case 1:
{
lean_object* v_fvarId_1646_; uint8_t v___y_1648_; lean_object* v___y_1649_; lean_object* v___y_1650_; lean_object* v___y_1651_; lean_object* v___y_1652_; lean_object* v___y_1653_; uint8_t v___x_1683_; lean_object* v___x_1684_; 
v_fvarId_1646_ = lean_ctor_get(v_e_1319_, 0);
lean_inc_n(v_fvarId_1646_, 2);
lean_dec_ref_known(v_e_1319_, 1);
v___x_1683_ = 0;
v___x_1684_ = l_Lean_FVarId_getValue_x3f___redArg(v_fvarId_1646_, v___x_1683_, v_a_1322_, v_a_1324_, v_a_1325_);
if (lean_obj_tag(v___x_1684_) == 0)
{
if (v_a_1320_ == 1)
{
lean_object* v_a_1685_; 
v_a_1685_ = lean_ctor_get(v___x_1684_, 0);
lean_inc(v_a_1685_);
lean_dec_ref_known(v___x_1684_, 1);
if (lean_obj_tag(v_a_1685_) == 1)
{
lean_object* v_val_1686_; lean_object* v___x_1687_; 
lean_dec(v_fvarId_1646_);
v_val_1686_ = lean_ctor_get(v_a_1685_, 0);
lean_inc(v_val_1686_);
lean_dec_ref_known(v_a_1685_, 1);
v___x_1687_ = l_Lean_Meta_Closure_preprocess(v_val_1686_, v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_, v_a_1324_, v_a_1325_);
if (lean_obj_tag(v___x_1687_) == 0)
{
lean_object* v_a_1688_; lean_object* v___x_1689_; 
v_a_1688_ = lean_ctor_get(v___x_1687_, 0);
lean_inc(v_a_1688_);
lean_dec_ref_known(v___x_1687_, 1);
v___x_1689_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_a_1688_, v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_, v_a_1324_, v_a_1325_);
return v___x_1689_;
}
else
{
return v___x_1687_;
}
}
else
{
lean_dec(v_a_1685_);
v___y_1648_ = v_a_1320_;
v___y_1649_ = v_a_1321_;
v___y_1650_ = v_a_1322_;
v___y_1651_ = v_a_1323_;
v___y_1652_ = v_a_1324_;
v___y_1653_ = v_a_1325_;
goto v___jp_1647_;
}
}
else
{
lean_dec_ref_known(v___x_1684_, 1);
v___y_1648_ = v_a_1320_;
v___y_1649_ = v_a_1321_;
v___y_1650_ = v_a_1322_;
v___y_1651_ = v_a_1323_;
v___y_1652_ = v_a_1324_;
v___y_1653_ = v_a_1325_;
goto v___jp_1647_;
}
}
else
{
lean_object* v_a_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1697_; 
lean_dec(v_fvarId_1646_);
v_a_1690_ = lean_ctor_get(v___x_1684_, 0);
v_isSharedCheck_1697_ = !lean_is_exclusive(v___x_1684_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1692_ = v___x_1684_;
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_a_1690_);
lean_dec(v___x_1684_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1695_; 
if (v_isShared_1693_ == 0)
{
v___x_1695_ = v___x_1692_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v_a_1690_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
return v___x_1695_;
}
}
}
v___jp_1647_:
{
lean_object* v___x_1654_; 
v___x_1654_ = l_Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3(v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_);
if (lean_obj_tag(v___x_1654_) == 0)
{
lean_object* v_a_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
v_a_1655_ = lean_ctor_get(v___x_1654_, 0);
lean_inc_n(v_a_1655_, 2);
lean_dec_ref_known(v___x_1654_, 1);
v___x_1656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1656_, 0, v_fvarId_1646_);
lean_ctor_set(v___x_1656_, 1, v_a_1655_);
v___x_1657_ = l_Lean_Meta_Closure_pushToProcess___redArg(v___x_1656_, v___y_1649_);
if (lean_obj_tag(v___x_1657_) == 0)
{
lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1665_; 
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1657_);
if (v_isSharedCheck_1665_ == 0)
{
lean_object* v_unused_1666_; 
v_unused_1666_ = lean_ctor_get(v___x_1657_, 0);
lean_dec(v_unused_1666_);
v___x_1659_ = v___x_1657_;
v_isShared_1660_ = v_isSharedCheck_1665_;
goto v_resetjp_1658_;
}
else
{
lean_dec(v___x_1657_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1665_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1661_; lean_object* v___x_1663_; 
v___x_1661_ = l_Lean_mkFVar(v_a_1655_);
if (v_isShared_1660_ == 0)
{
lean_ctor_set(v___x_1659_, 0, v___x_1661_);
v___x_1663_ = v___x_1659_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v___x_1661_);
v___x_1663_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
return v___x_1663_;
}
}
}
else
{
lean_object* v_a_1667_; lean_object* v___x_1669_; uint8_t v_isShared_1670_; uint8_t v_isSharedCheck_1674_; 
lean_dec(v_a_1655_);
v_a_1667_ = lean_ctor_get(v___x_1657_, 0);
v_isSharedCheck_1674_ = !lean_is_exclusive(v___x_1657_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1669_ = v___x_1657_;
v_isShared_1670_ = v_isSharedCheck_1674_;
goto v_resetjp_1668_;
}
else
{
lean_inc(v_a_1667_);
lean_dec(v___x_1657_);
v___x_1669_ = lean_box(0);
v_isShared_1670_ = v_isSharedCheck_1674_;
goto v_resetjp_1668_;
}
v_resetjp_1668_:
{
lean_object* v___x_1672_; 
if (v_isShared_1670_ == 0)
{
v___x_1672_ = v___x_1669_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v_a_1667_);
v___x_1672_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
return v___x_1672_;
}
}
}
}
else
{
lean_object* v_a_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1682_; 
lean_dec(v_fvarId_1646_);
v_a_1675_ = lean_ctor_get(v___x_1654_, 0);
v_isSharedCheck_1682_ = !lean_is_exclusive(v___x_1654_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1677_ = v___x_1654_;
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_a_1675_);
lean_dec(v___x_1654_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1680_; 
if (v_isShared_1678_ == 0)
{
v___x_1680_ = v___x_1677_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v_a_1675_);
v___x_1680_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
return v___x_1680_;
}
}
}
}
}
default: 
{
lean_object* v___x_1698_; 
v___x_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1698_, 0, v_e_1319_);
return v___x_1698_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__0(lean_object* v_e_1699_, uint8_t v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_){
_start:
{
uint8_t v___x_1750_; 
v___x_1750_ = l_Lean_Expr_hasLevelParam(v_e_1699_);
if (v___x_1750_ == 0)
{
uint8_t v___x_1751_; 
v___x_1751_ = l_Lean_Expr_hasFVar(v_e_1699_);
if (v___x_1751_ == 0)
{
uint8_t v___x_1752_; 
v___x_1752_ = l_Lean_Expr_hasMVar(v_e_1699_);
if (v___x_1752_ == 0)
{
lean_object* v___x_1753_; 
v___x_1753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1753_, 0, v_e_1699_);
return v___x_1753_;
}
else
{
goto v___jp_1707_;
}
}
else
{
goto v___jp_1707_;
}
}
else
{
goto v___jp_1707_;
}
v___jp_1707_:
{
lean_object* v___x_1708_; lean_object* v_visitedExpr_1709_; lean_object* v___x_1710_; 
v___x_1708_ = lean_st_ref_get(v___y_1701_);
v_visitedExpr_1709_ = lean_ctor_get(v___x_1708_, 1);
lean_inc_ref(v_visitedExpr_1709_);
lean_dec(v___x_1708_);
v___x_1710_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(v_visitedExpr_1709_, v_e_1699_);
lean_dec_ref(v_visitedExpr_1709_);
if (lean_obj_tag(v___x_1710_) == 0)
{
lean_object* v___x_1711_; 
lean_inc_ref(v_e_1699_);
v___x_1711_ = l_Lean_Meta_Closure_collectExprAux(v_e_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_, v___y_1705_);
if (lean_obj_tag(v___x_1711_) == 0)
{
lean_object* v_a_1712_; lean_object* v___x_1714_; uint8_t v_isShared_1715_; uint8_t v_isSharedCheck_1741_; 
v_a_1712_ = lean_ctor_get(v___x_1711_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v___x_1711_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1714_ = v___x_1711_;
v_isShared_1715_ = v_isSharedCheck_1741_;
goto v_resetjp_1713_;
}
else
{
lean_inc(v_a_1712_);
lean_dec(v___x_1711_);
v___x_1714_ = lean_box(0);
v_isShared_1715_ = v_isSharedCheck_1741_;
goto v_resetjp_1713_;
}
v_resetjp_1713_:
{
lean_object* v___x_1716_; lean_object* v_visitedLevel_1717_; lean_object* v_visitedExpr_1718_; lean_object* v_levelParams_1719_; lean_object* v_nextLevelIdx_1720_; lean_object* v_levelArgs_1721_; lean_object* v_newLocalDecls_1722_; lean_object* v_newLocalDeclsForMVars_1723_; lean_object* v_newLetDecls_1724_; lean_object* v_nextExprIdx_1725_; lean_object* v_exprMVarArgs_1726_; lean_object* v_exprFVarArgs_1727_; lean_object* v_toProcess_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1740_; 
v___x_1716_ = lean_st_ref_take(v___y_1701_);
v_visitedLevel_1717_ = lean_ctor_get(v___x_1716_, 0);
v_visitedExpr_1718_ = lean_ctor_get(v___x_1716_, 1);
v_levelParams_1719_ = lean_ctor_get(v___x_1716_, 2);
v_nextLevelIdx_1720_ = lean_ctor_get(v___x_1716_, 3);
v_levelArgs_1721_ = lean_ctor_get(v___x_1716_, 4);
v_newLocalDecls_1722_ = lean_ctor_get(v___x_1716_, 5);
v_newLocalDeclsForMVars_1723_ = lean_ctor_get(v___x_1716_, 6);
v_newLetDecls_1724_ = lean_ctor_get(v___x_1716_, 7);
v_nextExprIdx_1725_ = lean_ctor_get(v___x_1716_, 8);
v_exprMVarArgs_1726_ = lean_ctor_get(v___x_1716_, 9);
v_exprFVarArgs_1727_ = lean_ctor_get(v___x_1716_, 10);
v_toProcess_1728_ = lean_ctor_get(v___x_1716_, 11);
v_isSharedCheck_1740_ = !lean_is_exclusive(v___x_1716_);
if (v_isSharedCheck_1740_ == 0)
{
v___x_1730_ = v___x_1716_;
v_isShared_1731_ = v_isSharedCheck_1740_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_toProcess_1728_);
lean_inc(v_exprFVarArgs_1727_);
lean_inc(v_exprMVarArgs_1726_);
lean_inc(v_nextExprIdx_1725_);
lean_inc(v_newLetDecls_1724_);
lean_inc(v_newLocalDeclsForMVars_1723_);
lean_inc(v_newLocalDecls_1722_);
lean_inc(v_levelArgs_1721_);
lean_inc(v_nextLevelIdx_1720_);
lean_inc(v_levelParams_1719_);
lean_inc(v_visitedExpr_1718_);
lean_inc(v_visitedLevel_1717_);
lean_dec(v___x_1716_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1740_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1732_; lean_object* v___x_1734_; 
lean_inc(v_a_1712_);
v___x_1732_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1___redArg(v_visitedExpr_1718_, v_e_1699_, v_a_1712_);
if (v_isShared_1731_ == 0)
{
lean_ctor_set(v___x_1730_, 1, v___x_1732_);
v___x_1734_ = v___x_1730_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v_visitedLevel_1717_);
lean_ctor_set(v_reuseFailAlloc_1739_, 1, v___x_1732_);
lean_ctor_set(v_reuseFailAlloc_1739_, 2, v_levelParams_1719_);
lean_ctor_set(v_reuseFailAlloc_1739_, 3, v_nextLevelIdx_1720_);
lean_ctor_set(v_reuseFailAlloc_1739_, 4, v_levelArgs_1721_);
lean_ctor_set(v_reuseFailAlloc_1739_, 5, v_newLocalDecls_1722_);
lean_ctor_set(v_reuseFailAlloc_1739_, 6, v_newLocalDeclsForMVars_1723_);
lean_ctor_set(v_reuseFailAlloc_1739_, 7, v_newLetDecls_1724_);
lean_ctor_set(v_reuseFailAlloc_1739_, 8, v_nextExprIdx_1725_);
lean_ctor_set(v_reuseFailAlloc_1739_, 9, v_exprMVarArgs_1726_);
lean_ctor_set(v_reuseFailAlloc_1739_, 10, v_exprFVarArgs_1727_);
lean_ctor_set(v_reuseFailAlloc_1739_, 11, v_toProcess_1728_);
v___x_1734_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
lean_object* v___x_1735_; lean_object* v___x_1737_; 
v___x_1735_ = lean_st_ref_put(v___y_1701_, v___x_1734_);
if (v_isShared_1715_ == 0)
{
v___x_1737_ = v___x_1714_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_a_1712_);
v___x_1737_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
return v___x_1737_;
}
}
}
}
}
else
{
lean_dec_ref(v_e_1699_);
return v___x_1711_;
}
}
else
{
lean_object* v_val_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1749_; 
lean_dec_ref(v_e_1699_);
v_val_1742_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1744_ = v___x_1710_;
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_val_1742_);
lean_dec(v___x_1710_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v___x_1747_; 
if (v_isShared_1745_ == 0)
{
lean_ctor_set_tag(v___x_1744_, 0);
v___x_1747_ = v___x_1744_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_val_1742_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___lam__0___boxed(lean_object* v_e_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_){
_start:
{
uint8_t v___y_18584__boxed_1762_; lean_object* v_res_1763_; 
v___y_18584__boxed_1762_ = lean_unbox(v___y_1755_);
v_res_1763_ = l_Lean_Meta_Closure_collectExprAux___lam__0(v_e_1754_, v___y_18584__boxed_1762_, v___y_1756_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
lean_dec(v___y_1756_);
return v_res_1763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExprAux___boxed(lean_object* v_e_1764_, lean_object* v_a_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_, lean_object* v_a_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_){
_start:
{
uint8_t v_a_boxed_1772_; lean_object* v_res_1773_; 
v_a_boxed_1772_ = lean_unbox(v_a_1765_);
v_res_1773_ = l_Lean_Meta_Closure_collectExprAux(v_e_1764_, v_a_boxed_1772_, v_a_1766_, v_a_1767_, v_a_1768_, v_a_1769_, v_a_1770_);
lean_dec(v_a_1770_);
lean_dec_ref(v_a_1769_);
lean_dec(v_a_1768_);
lean_dec_ref(v_a_1767_);
lean_dec(v_a_1766_);
return v_res_1773_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0(lean_object* v_00_u03b2_1774_, lean_object* v_m_1775_, lean_object* v_a_1776_){
_start:
{
lean_object* v___x_1777_; 
v___x_1777_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(v_m_1775_, v_a_1776_);
return v___x_1777_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___boxed(lean_object* v_00_u03b2_1778_, lean_object* v_m_1779_, lean_object* v_a_1780_){
_start:
{
lean_object* v_res_1781_; 
v_res_1781_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0(v_00_u03b2_1778_, v_m_1779_, v_a_1780_);
lean_dec_ref(v_a_1780_);
lean_dec_ref(v_m_1779_);
return v_res_1781_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1(lean_object* v_00_u03b2_1782_, lean_object* v_m_1783_, lean_object* v_a_1784_, lean_object* v_b_1785_){
_start:
{
lean_object* v___x_1786_; 
v___x_1786_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1___redArg(v_m_1783_, v_a_1784_, v_b_1785_);
return v___x_1786_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2(lean_object* v_x_1787_, lean_object* v_x_1788_, uint8_t v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_){
_start:
{
lean_object* v___x_1796_; 
v___x_1796_ = l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___redArg(v_x_1787_, v_x_1788_, v___y_1790_);
return v___x_1796_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2___boxed(lean_object* v_x_1797_, lean_object* v_x_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_){
_start:
{
uint8_t v___y_19416__boxed_1806_; lean_object* v_res_1807_; 
v___y_19416__boxed_1806_ = lean_unbox(v___y_1799_);
v_res_1807_ = l_List_mapM_loop___at___00Lean_Meta_Closure_collectExprAux_spec__2(v_x_1797_, v_x_1798_, v___y_19416__boxed_1806_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_);
lean_dec(v___y_1804_);
lean_dec_ref(v___y_1803_);
lean_dec(v___y_1802_);
lean_dec_ref(v___y_1801_);
lean_dec(v___y_1800_);
return v_res_1807_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7(uint8_t v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_){
_start:
{
lean_object* v___x_1815_; 
v___x_1815_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___redArg(v___y_1813_);
return v___x_1815_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7___boxed(lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_){
_start:
{
uint8_t v___y_19443__boxed_1823_; lean_object* v_res_1824_; 
v___y_19443__boxed_1823_ = lean_unbox(v___y_1816_);
v_res_1824_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Meta_Closure_collectExprAux_spec__3_spec__7(v___y_19443__boxed_1823_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
lean_dec(v___y_1821_);
lean_dec_ref(v___y_1820_);
lean_dec(v___y_1819_);
lean_dec_ref(v___y_1818_);
lean_dec(v___y_1817_);
return v_res_1824_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0(lean_object* v_00_u03b2_1825_, lean_object* v_a_1826_, lean_object* v_x_1827_){
_start:
{
lean_object* v___x_1828_; 
v___x_1828_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___redArg(v_a_1826_, v_x_1827_);
return v___x_1828_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1829_, lean_object* v_a_1830_, lean_object* v_x_1831_){
_start:
{
lean_object* v_res_1832_; 
v_res_1832_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0_spec__0(v_00_u03b2_1829_, v_a_1830_, v_x_1831_);
lean_dec(v_x_1831_);
lean_dec_ref(v_a_1830_);
return v_res_1832_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2(lean_object* v_00_u03b2_1833_, lean_object* v_a_1834_, lean_object* v_x_1835_){
_start:
{
uint8_t v___x_1836_; 
v___x_1836_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___redArg(v_a_1834_, v_x_1835_);
return v___x_1836_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1837_, lean_object* v_a_1838_, lean_object* v_x_1839_){
_start:
{
uint8_t v_res_1840_; lean_object* v_r_1841_; 
v_res_1840_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__2(v_00_u03b2_1837_, v_a_1838_, v_x_1839_);
lean_dec(v_x_1839_);
lean_dec_ref(v_a_1838_);
v_r_1841_ = lean_box(v_res_1840_);
return v_r_1841_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3(lean_object* v_00_u03b2_1842_, lean_object* v_data_1843_){
_start:
{
lean_object* v___x_1844_; 
v___x_1844_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3___redArg(v_data_1843_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4(lean_object* v_00_u03b2_1845_, lean_object* v_a_1846_, lean_object* v_b_1847_, lean_object* v_x_1848_){
_start:
{
lean_object* v___x_1849_; 
v___x_1849_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__4___redArg(v_a_1846_, v_b_1847_, v_x_1848_);
return v___x_1849_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6(lean_object* v_00_u03b2_1850_, lean_object* v_i_1851_, lean_object* v_source_1852_, lean_object* v_target_1853_){
_start:
{
lean_object* v___x_1854_; 
v___x_1854_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6___redArg(v_i_1851_, v_source_1852_, v_target_1853_);
return v___x_1854_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10(lean_object* v_00_u03b2_1855_, lean_object* v_x_1856_, lean_object* v_x_1857_){
_start:
{
lean_object* v___x_1858_; 
v___x_1858_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1_spec__3_spec__6_spec__10___redArg(v_x_1856_, v_x_1857_);
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExpr(lean_object* v_e_1859_, uint8_t v_a_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_){
_start:
{
lean_object* v___x_1867_; 
v___x_1867_ = l_Lean_Meta_Closure_preprocess(v_e_1859_, v_a_1860_, v_a_1861_, v_a_1862_, v_a_1863_, v_a_1864_, v_a_1865_);
if (lean_obj_tag(v___x_1867_) == 0)
{
lean_object* v_a_1868_; uint8_t v___x_1912_; 
v_a_1868_ = lean_ctor_get(v___x_1867_, 0);
lean_inc(v_a_1868_);
v___x_1912_ = l_Lean_Expr_hasLevelParam(v_a_1868_);
if (v___x_1912_ == 0)
{
uint8_t v___x_1913_; 
v___x_1913_ = l_Lean_Expr_hasFVar(v_a_1868_);
if (v___x_1913_ == 0)
{
uint8_t v___x_1914_; 
v___x_1914_ = l_Lean_Expr_hasMVar(v_a_1868_);
if (v___x_1914_ == 0)
{
lean_dec(v_a_1868_);
return v___x_1867_;
}
else
{
lean_dec_ref_known(v___x_1867_, 1);
goto v___jp_1869_;
}
}
else
{
lean_dec_ref_known(v___x_1867_, 1);
goto v___jp_1869_;
}
}
else
{
lean_dec_ref_known(v___x_1867_, 1);
goto v___jp_1869_;
}
v___jp_1869_:
{
lean_object* v___x_1870_; lean_object* v_visitedExpr_1871_; lean_object* v___x_1872_; 
v___x_1870_ = lean_st_ref_get(v_a_1861_);
v_visitedExpr_1871_ = lean_ctor_get(v___x_1870_, 1);
lean_inc_ref(v_visitedExpr_1871_);
lean_dec(v___x_1870_);
v___x_1872_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Closure_collectExprAux_spec__0___redArg(v_visitedExpr_1871_, v_a_1868_);
lean_dec_ref(v_visitedExpr_1871_);
if (lean_obj_tag(v___x_1872_) == 0)
{
lean_object* v___x_1873_; 
lean_inc(v_a_1868_);
v___x_1873_ = l_Lean_Meta_Closure_collectExprAux(v_a_1868_, v_a_1860_, v_a_1861_, v_a_1862_, v_a_1863_, v_a_1864_, v_a_1865_);
if (lean_obj_tag(v___x_1873_) == 0)
{
lean_object* v_a_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1903_; 
v_a_1874_ = lean_ctor_get(v___x_1873_, 0);
v_isSharedCheck_1903_ = !lean_is_exclusive(v___x_1873_);
if (v_isSharedCheck_1903_ == 0)
{
v___x_1876_ = v___x_1873_;
v_isShared_1877_ = v_isSharedCheck_1903_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_a_1874_);
lean_dec(v___x_1873_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1903_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1878_; lean_object* v_visitedLevel_1879_; lean_object* v_visitedExpr_1880_; lean_object* v_levelParams_1881_; lean_object* v_nextLevelIdx_1882_; lean_object* v_levelArgs_1883_; lean_object* v_newLocalDecls_1884_; lean_object* v_newLocalDeclsForMVars_1885_; lean_object* v_newLetDecls_1886_; lean_object* v_nextExprIdx_1887_; lean_object* v_exprMVarArgs_1888_; lean_object* v_exprFVarArgs_1889_; lean_object* v_toProcess_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1902_; 
v___x_1878_ = lean_st_ref_take(v_a_1861_);
v_visitedLevel_1879_ = lean_ctor_get(v___x_1878_, 0);
v_visitedExpr_1880_ = lean_ctor_get(v___x_1878_, 1);
v_levelParams_1881_ = lean_ctor_get(v___x_1878_, 2);
v_nextLevelIdx_1882_ = lean_ctor_get(v___x_1878_, 3);
v_levelArgs_1883_ = lean_ctor_get(v___x_1878_, 4);
v_newLocalDecls_1884_ = lean_ctor_get(v___x_1878_, 5);
v_newLocalDeclsForMVars_1885_ = lean_ctor_get(v___x_1878_, 6);
v_newLetDecls_1886_ = lean_ctor_get(v___x_1878_, 7);
v_nextExprIdx_1887_ = lean_ctor_get(v___x_1878_, 8);
v_exprMVarArgs_1888_ = lean_ctor_get(v___x_1878_, 9);
v_exprFVarArgs_1889_ = lean_ctor_get(v___x_1878_, 10);
v_toProcess_1890_ = lean_ctor_get(v___x_1878_, 11);
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1878_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1892_ = v___x_1878_;
v_isShared_1893_ = v_isSharedCheck_1902_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_toProcess_1890_);
lean_inc(v_exprFVarArgs_1889_);
lean_inc(v_exprMVarArgs_1888_);
lean_inc(v_nextExprIdx_1887_);
lean_inc(v_newLetDecls_1886_);
lean_inc(v_newLocalDeclsForMVars_1885_);
lean_inc(v_newLocalDecls_1884_);
lean_inc(v_levelArgs_1883_);
lean_inc(v_nextLevelIdx_1882_);
lean_inc(v_levelParams_1881_);
lean_inc(v_visitedExpr_1880_);
lean_inc(v_visitedLevel_1879_);
lean_dec(v___x_1878_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1902_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1894_; lean_object* v___x_1896_; 
lean_inc(v_a_1874_);
v___x_1894_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Closure_collectExprAux_spec__1___redArg(v_visitedExpr_1880_, v_a_1868_, v_a_1874_);
if (v_isShared_1893_ == 0)
{
lean_ctor_set(v___x_1892_, 1, v___x_1894_);
v___x_1896_ = v___x_1892_;
goto v_reusejp_1895_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_visitedLevel_1879_);
lean_ctor_set(v_reuseFailAlloc_1901_, 1, v___x_1894_);
lean_ctor_set(v_reuseFailAlloc_1901_, 2, v_levelParams_1881_);
lean_ctor_set(v_reuseFailAlloc_1901_, 3, v_nextLevelIdx_1882_);
lean_ctor_set(v_reuseFailAlloc_1901_, 4, v_levelArgs_1883_);
lean_ctor_set(v_reuseFailAlloc_1901_, 5, v_newLocalDecls_1884_);
lean_ctor_set(v_reuseFailAlloc_1901_, 6, v_newLocalDeclsForMVars_1885_);
lean_ctor_set(v_reuseFailAlloc_1901_, 7, v_newLetDecls_1886_);
lean_ctor_set(v_reuseFailAlloc_1901_, 8, v_nextExprIdx_1887_);
lean_ctor_set(v_reuseFailAlloc_1901_, 9, v_exprMVarArgs_1888_);
lean_ctor_set(v_reuseFailAlloc_1901_, 10, v_exprFVarArgs_1889_);
lean_ctor_set(v_reuseFailAlloc_1901_, 11, v_toProcess_1890_);
v___x_1896_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1895_;
}
v_reusejp_1895_:
{
lean_object* v___x_1897_; lean_object* v___x_1899_; 
v___x_1897_ = lean_st_ref_put(v_a_1861_, v___x_1896_);
if (v_isShared_1877_ == 0)
{
v___x_1899_ = v___x_1876_;
goto v_reusejp_1898_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v_a_1874_);
v___x_1899_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1898_;
}
v_reusejp_1898_:
{
return v___x_1899_;
}
}
}
}
}
else
{
lean_dec(v_a_1868_);
return v___x_1873_;
}
}
else
{
lean_object* v_val_1904_; lean_object* v___x_1906_; uint8_t v_isShared_1907_; uint8_t v_isSharedCheck_1911_; 
lean_dec(v_a_1868_);
v_val_1904_ = lean_ctor_get(v___x_1872_, 0);
v_isSharedCheck_1911_ = !lean_is_exclusive(v___x_1872_);
if (v_isSharedCheck_1911_ == 0)
{
v___x_1906_ = v___x_1872_;
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
else
{
lean_inc(v_val_1904_);
lean_dec(v___x_1872_);
v___x_1906_ = lean_box(0);
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
v_resetjp_1905_:
{
lean_object* v___x_1909_; 
if (v_isShared_1907_ == 0)
{
lean_ctor_set_tag(v___x_1906_, 0);
v___x_1909_ = v___x_1906_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v_val_1904_);
v___x_1909_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
return v___x_1909_;
}
}
}
}
}
else
{
return v___x_1867_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_collectExpr___boxed(lean_object* v_e_1915_, lean_object* v_a_1916_, lean_object* v_a_1917_, lean_object* v_a_1918_, lean_object* v_a_1919_, lean_object* v_a_1920_, lean_object* v_a_1921_, lean_object* v_a_1922_){
_start:
{
uint8_t v_a_boxed_1923_; lean_object* v_res_1924_; 
v_a_boxed_1923_ = lean_unbox(v_a_1916_);
v_res_1924_ = l_Lean_Meta_Closure_collectExpr(v_e_1915_, v_a_boxed_1923_, v_a_1917_, v_a_1918_, v_a_1919_, v_a_1920_, v_a_1921_);
lean_dec(v_a_1921_);
lean_dec_ref(v_a_1920_);
lean_dec(v_a_1919_);
lean_dec_ref(v_a_1918_);
lean_dec(v_a_1917_);
return v_res_1924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcessAux(lean_object* v_lctx_1925_, lean_object* v_i_1926_, lean_object* v_toProcess_1927_, lean_object* v_elem_1928_){
_start:
{
lean_object* v___x_1929_; uint8_t v___x_1930_; 
v___x_1929_ = lean_array_get_size(v_toProcess_1927_);
v___x_1930_ = lean_nat_dec_lt(v_i_1926_, v___x_1929_);
if (v___x_1930_ == 0)
{
lean_object* v___x_1931_; 
lean_dec(v_i_1926_);
lean_dec_ref(v_lctx_1925_);
v___x_1931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1931_, 0, v_elem_1928_);
lean_ctor_set(v___x_1931_, 1, v_toProcess_1927_);
return v___x_1931_;
}
else
{
lean_object* v_fvarId_1932_; lean_object* v_elem_x27_1933_; lean_object* v_fvarId_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; uint8_t v___x_1939_; 
v_fvarId_1932_ = lean_ctor_get(v_elem_1928_, 0);
v_elem_x27_1933_ = lean_array_fget_borrowed(v_toProcess_1927_, v_i_1926_);
v_fvarId_1934_ = lean_ctor_get(v_elem_x27_1933_, 0);
lean_inc(v_fvarId_1932_);
lean_inc_ref_n(v_lctx_1925_, 2);
v___x_1935_ = l_Lean_LocalContext_get_x21(v_lctx_1925_, v_fvarId_1932_);
v___x_1936_ = l_Lean_LocalDecl_index(v___x_1935_);
lean_dec_ref(v___x_1935_);
lean_inc(v_fvarId_1934_);
v___x_1937_ = l_Lean_LocalContext_get_x21(v_lctx_1925_, v_fvarId_1934_);
v___x_1938_ = l_Lean_LocalDecl_index(v___x_1937_);
lean_dec_ref(v___x_1937_);
v___x_1939_ = lean_nat_dec_lt(v___x_1936_, v___x_1938_);
lean_dec(v___x_1938_);
lean_dec(v___x_1936_);
if (v___x_1939_ == 0)
{
lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1940_ = lean_unsigned_to_nat(1u);
v___x_1941_ = lean_nat_add(v_i_1926_, v___x_1940_);
lean_dec(v_i_1926_);
v_i_1926_ = v___x_1941_;
goto _start;
}
else
{
lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; 
lean_inc(v_elem_x27_1933_);
v___x_1943_ = lean_unsigned_to_nat(1u);
v___x_1944_ = lean_nat_add(v_i_1926_, v___x_1943_);
v___x_1945_ = lean_array_fset(v_toProcess_1927_, v_i_1926_, v_elem_1928_);
lean_dec(v_i_1926_);
v_i_1926_ = v___x_1944_;
v_toProcess_1927_ = v___x_1945_;
v_elem_1928_ = v_elem_x27_1933_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg(lean_object* v_a_1947_, lean_object* v_a_1948_){
_start:
{
lean_object* v_lctx_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v_toProcess_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; uint8_t v___x_1956_; 
v_lctx_1950_ = lean_ctor_get(v_a_1948_, 2);
v___x_1951_ = l_Lean_Meta_Closure_instInhabitedToProcessElement_default;
v___x_1952_ = lean_st_ref_get(v_a_1947_);
v_toProcess_1953_ = lean_ctor_get(v___x_1952_, 11);
lean_inc_ref(v_toProcess_1953_);
lean_dec(v___x_1952_);
v___x_1954_ = lean_array_get_size(v_toProcess_1953_);
lean_dec_ref(v_toProcess_1953_);
v___x_1955_ = lean_unsigned_to_nat(0u);
v___x_1956_ = lean_nat_dec_eq(v___x_1954_, v___x_1955_);
if (v___x_1956_ == 0)
{
lean_object* v___x_1957_; lean_object* v_visitedLevel_1958_; lean_object* v_visitedExpr_1959_; lean_object* v_levelParams_1960_; lean_object* v_nextLevelIdx_1961_; lean_object* v_levelArgs_1962_; lean_object* v_newLocalDecls_1963_; lean_object* v_newLocalDeclsForMVars_1964_; lean_object* v_newLetDecls_1965_; lean_object* v_nextExprIdx_1966_; lean_object* v_exprMVarArgs_1967_; lean_object* v_exprFVarArgs_1968_; lean_object* v_toProcess_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1987_; 
v___x_1957_ = lean_st_ref_take(v_a_1947_);
v_visitedLevel_1958_ = lean_ctor_get(v___x_1957_, 0);
v_visitedExpr_1959_ = lean_ctor_get(v___x_1957_, 1);
v_levelParams_1960_ = lean_ctor_get(v___x_1957_, 2);
v_nextLevelIdx_1961_ = lean_ctor_get(v___x_1957_, 3);
v_levelArgs_1962_ = lean_ctor_get(v___x_1957_, 4);
v_newLocalDecls_1963_ = lean_ctor_get(v___x_1957_, 5);
v_newLocalDeclsForMVars_1964_ = lean_ctor_get(v___x_1957_, 6);
v_newLetDecls_1965_ = lean_ctor_get(v___x_1957_, 7);
v_nextExprIdx_1966_ = lean_ctor_get(v___x_1957_, 8);
v_exprMVarArgs_1967_ = lean_ctor_get(v___x_1957_, 9);
v_exprFVarArgs_1968_ = lean_ctor_get(v___x_1957_, 10);
v_toProcess_1969_ = lean_ctor_get(v___x_1957_, 11);
v_isSharedCheck_1987_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_1987_ == 0)
{
v___x_1971_ = v___x_1957_;
v_isShared_1972_ = v_isSharedCheck_1987_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_toProcess_1969_);
lean_inc(v_exprFVarArgs_1968_);
lean_inc(v_exprMVarArgs_1967_);
lean_inc(v_nextExprIdx_1966_);
lean_inc(v_newLetDecls_1965_);
lean_inc(v_newLocalDeclsForMVars_1964_);
lean_inc(v_newLocalDecls_1963_);
lean_inc(v_levelArgs_1962_);
lean_inc(v_nextLevelIdx_1961_);
lean_inc(v_levelParams_1960_);
lean_inc(v_visitedExpr_1959_);
lean_inc(v_visitedLevel_1958_);
lean_dec(v___x_1957_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_1987_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v_fst_1979_; lean_object* v_snd_1980_; lean_object* v___x_1981_; lean_object* v___x_1983_; 
v___x_1973_ = lean_array_get_size(v_toProcess_1969_);
v___x_1974_ = lean_unsigned_to_nat(1u);
v___x_1975_ = lean_nat_sub(v___x_1973_, v___x_1974_);
v___x_1976_ = lean_array_get(v___x_1951_, v_toProcess_1969_, v___x_1975_);
lean_dec(v___x_1975_);
v___x_1977_ = lean_array_pop(v_toProcess_1969_);
lean_inc_ref(v_lctx_1950_);
v___x_1978_ = l_Lean_Meta_Closure_pickNextToProcessAux(v_lctx_1950_, v___x_1955_, v___x_1977_, v___x_1976_);
v_fst_1979_ = lean_ctor_get(v___x_1978_, 0);
lean_inc(v_fst_1979_);
v_snd_1980_ = lean_ctor_get(v___x_1978_, 1);
lean_inc(v_snd_1980_);
lean_dec_ref(v___x_1978_);
v___x_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1981_, 0, v_fst_1979_);
if (v_isShared_1972_ == 0)
{
lean_ctor_set(v___x_1971_, 11, v_snd_1980_);
v___x_1983_ = v___x_1971_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1986_; 
v_reuseFailAlloc_1986_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1986_, 0, v_visitedLevel_1958_);
lean_ctor_set(v_reuseFailAlloc_1986_, 1, v_visitedExpr_1959_);
lean_ctor_set(v_reuseFailAlloc_1986_, 2, v_levelParams_1960_);
lean_ctor_set(v_reuseFailAlloc_1986_, 3, v_nextLevelIdx_1961_);
lean_ctor_set(v_reuseFailAlloc_1986_, 4, v_levelArgs_1962_);
lean_ctor_set(v_reuseFailAlloc_1986_, 5, v_newLocalDecls_1963_);
lean_ctor_set(v_reuseFailAlloc_1986_, 6, v_newLocalDeclsForMVars_1964_);
lean_ctor_set(v_reuseFailAlloc_1986_, 7, v_newLetDecls_1965_);
lean_ctor_set(v_reuseFailAlloc_1986_, 8, v_nextExprIdx_1966_);
lean_ctor_set(v_reuseFailAlloc_1986_, 9, v_exprMVarArgs_1967_);
lean_ctor_set(v_reuseFailAlloc_1986_, 10, v_exprFVarArgs_1968_);
lean_ctor_set(v_reuseFailAlloc_1986_, 11, v_snd_1980_);
v___x_1983_ = v_reuseFailAlloc_1986_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
lean_object* v___x_1984_; lean_object* v___x_1985_; 
v___x_1984_ = lean_st_ref_put(v_a_1947_, v___x_1983_);
v___x_1985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1985_, 0, v___x_1981_);
return v___x_1985_;
}
}
}
else
{
lean_object* v___x_1988_; lean_object* v___x_1989_; 
v___x_1988_ = lean_box(0);
v___x_1989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1989_, 0, v___x_1988_);
return v___x_1989_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg___boxed(lean_object* v_a_1990_, lean_object* v_a_1991_, lean_object* v_a_1992_){
_start:
{
lean_object* v_res_1993_; 
v_res_1993_ = l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg(v_a_1990_, v_a_1991_);
lean_dec_ref(v_a_1991_);
lean_dec(v_a_1990_);
return v_res_1993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f(uint8_t v_a_1994_, lean_object* v_a_1995_, lean_object* v_a_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_){
_start:
{
lean_object* v___x_2001_; 
v___x_2001_ = l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg(v_a_1995_, v_a_1996_);
return v___x_2001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___boxed(lean_object* v_a_2002_, lean_object* v_a_2003_, lean_object* v_a_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_, lean_object* v_a_2007_, lean_object* v_a_2008_){
_start:
{
uint8_t v_a_boxed_2009_; lean_object* v_res_2010_; 
v_a_boxed_2009_ = lean_unbox(v_a_2002_);
v_res_2010_ = l_Lean_Meta_Closure_pickNextToProcess_x3f(v_a_boxed_2009_, v_a_2003_, v_a_2004_, v_a_2005_, v_a_2006_, v_a_2007_);
lean_dec(v_a_2007_);
lean_dec_ref(v_a_2006_);
lean_dec(v_a_2005_);
lean_dec_ref(v_a_2004_);
lean_dec(v_a_2003_);
return v_res_2010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___redArg(lean_object* v_e_2011_, lean_object* v_a_2012_){
_start:
{
lean_object* v___x_2014_; lean_object* v_visitedLevel_2015_; lean_object* v_visitedExpr_2016_; lean_object* v_levelParams_2017_; lean_object* v_nextLevelIdx_2018_; lean_object* v_levelArgs_2019_; lean_object* v_newLocalDecls_2020_; lean_object* v_newLocalDeclsForMVars_2021_; lean_object* v_newLetDecls_2022_; lean_object* v_nextExprIdx_2023_; lean_object* v_exprMVarArgs_2024_; lean_object* v_exprFVarArgs_2025_; lean_object* v_toProcess_2026_; lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2037_; 
v___x_2014_ = lean_st_ref_take(v_a_2012_);
v_visitedLevel_2015_ = lean_ctor_get(v___x_2014_, 0);
v_visitedExpr_2016_ = lean_ctor_get(v___x_2014_, 1);
v_levelParams_2017_ = lean_ctor_get(v___x_2014_, 2);
v_nextLevelIdx_2018_ = lean_ctor_get(v___x_2014_, 3);
v_levelArgs_2019_ = lean_ctor_get(v___x_2014_, 4);
v_newLocalDecls_2020_ = lean_ctor_get(v___x_2014_, 5);
v_newLocalDeclsForMVars_2021_ = lean_ctor_get(v___x_2014_, 6);
v_newLetDecls_2022_ = lean_ctor_get(v___x_2014_, 7);
v_nextExprIdx_2023_ = lean_ctor_get(v___x_2014_, 8);
v_exprMVarArgs_2024_ = lean_ctor_get(v___x_2014_, 9);
v_exprFVarArgs_2025_ = lean_ctor_get(v___x_2014_, 10);
v_toProcess_2026_ = lean_ctor_get(v___x_2014_, 11);
v_isSharedCheck_2037_ = !lean_is_exclusive(v___x_2014_);
if (v_isSharedCheck_2037_ == 0)
{
v___x_2028_ = v___x_2014_;
v_isShared_2029_ = v_isSharedCheck_2037_;
goto v_resetjp_2027_;
}
else
{
lean_inc(v_toProcess_2026_);
lean_inc(v_exprFVarArgs_2025_);
lean_inc(v_exprMVarArgs_2024_);
lean_inc(v_nextExprIdx_2023_);
lean_inc(v_newLetDecls_2022_);
lean_inc(v_newLocalDeclsForMVars_2021_);
lean_inc(v_newLocalDecls_2020_);
lean_inc(v_levelArgs_2019_);
lean_inc(v_nextLevelIdx_2018_);
lean_inc(v_levelParams_2017_);
lean_inc(v_visitedExpr_2016_);
lean_inc(v_visitedLevel_2015_);
lean_dec(v___x_2014_);
v___x_2028_ = lean_box(0);
v_isShared_2029_ = v_isSharedCheck_2037_;
goto v_resetjp_2027_;
}
v_resetjp_2027_:
{
lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2033_; 
v___x_2030_ = lean_box(0);
v___x_2031_ = lean_array_push(v_exprFVarArgs_2025_, v_e_2011_);
if (v_isShared_2029_ == 0)
{
lean_ctor_set(v___x_2028_, 10, v___x_2031_);
v___x_2033_ = v___x_2028_;
goto v_reusejp_2032_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v_visitedLevel_2015_);
lean_ctor_set(v_reuseFailAlloc_2036_, 1, v_visitedExpr_2016_);
lean_ctor_set(v_reuseFailAlloc_2036_, 2, v_levelParams_2017_);
lean_ctor_set(v_reuseFailAlloc_2036_, 3, v_nextLevelIdx_2018_);
lean_ctor_set(v_reuseFailAlloc_2036_, 4, v_levelArgs_2019_);
lean_ctor_set(v_reuseFailAlloc_2036_, 5, v_newLocalDecls_2020_);
lean_ctor_set(v_reuseFailAlloc_2036_, 6, v_newLocalDeclsForMVars_2021_);
lean_ctor_set(v_reuseFailAlloc_2036_, 7, v_newLetDecls_2022_);
lean_ctor_set(v_reuseFailAlloc_2036_, 8, v_nextExprIdx_2023_);
lean_ctor_set(v_reuseFailAlloc_2036_, 9, v_exprMVarArgs_2024_);
lean_ctor_set(v_reuseFailAlloc_2036_, 10, v___x_2031_);
lean_ctor_set(v_reuseFailAlloc_2036_, 11, v_toProcess_2026_);
v___x_2033_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2032_;
}
v_reusejp_2032_:
{
lean_object* v___x_2034_; lean_object* v___x_2035_; 
v___x_2034_ = lean_st_ref_put(v_a_2012_, v___x_2033_);
v___x_2035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2035_, 0, v___x_2030_);
return v___x_2035_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___redArg___boxed(lean_object* v_e_2038_, lean_object* v_a_2039_, lean_object* v_a_2040_){
_start:
{
lean_object* v_res_2041_; 
v_res_2041_ = l_Lean_Meta_Closure_pushFVarArg___redArg(v_e_2038_, v_a_2039_);
lean_dec(v_a_2039_);
return v_res_2041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg(lean_object* v_e_2042_, uint8_t v_a_2043_, lean_object* v_a_2044_, lean_object* v_a_2045_, lean_object* v_a_2046_, lean_object* v_a_2047_, lean_object* v_a_2048_){
_start:
{
lean_object* v___x_2050_; 
v___x_2050_ = l_Lean_Meta_Closure_pushFVarArg___redArg(v_e_2042_, v_a_2044_);
return v___x_2050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushFVarArg___boxed(lean_object* v_e_2051_, lean_object* v_a_2052_, lean_object* v_a_2053_, lean_object* v_a_2054_, lean_object* v_a_2055_, lean_object* v_a_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_){
_start:
{
uint8_t v_a_boxed_2059_; lean_object* v_res_2060_; 
v_a_boxed_2059_ = lean_unbox(v_a_2052_);
v_res_2060_ = l_Lean_Meta_Closure_pushFVarArg(v_e_2051_, v_a_boxed_2059_, v_a_2053_, v_a_2054_, v_a_2055_, v_a_2056_, v_a_2057_);
lean_dec(v_a_2057_);
lean_dec_ref(v_a_2056_);
lean_dec(v_a_2055_);
lean_dec_ref(v_a_2054_);
lean_dec(v_a_2053_);
return v_res_2060_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushLocalDecl(lean_object* v_newFVarId_2061_, lean_object* v_userName_2062_, lean_object* v_type_2063_, uint8_t v_bi_2064_, uint8_t v_a_2065_, lean_object* v_a_2066_, lean_object* v_a_2067_, lean_object* v_a_2068_, lean_object* v_a_2069_, lean_object* v_a_2070_){
_start:
{
lean_object* v___x_2072_; 
v___x_2072_ = l_Lean_Meta_Closure_collectExpr(v_type_2063_, v_a_2065_, v_a_2066_, v_a_2067_, v_a_2068_, v_a_2069_, v_a_2070_);
if (lean_obj_tag(v___x_2072_) == 0)
{
lean_object* v_a_2073_; lean_object* v___x_2075_; uint8_t v_isShared_2076_; uint8_t v_isSharedCheck_2106_; 
v_a_2073_ = lean_ctor_get(v___x_2072_, 0);
v_isSharedCheck_2106_ = !lean_is_exclusive(v___x_2072_);
if (v_isSharedCheck_2106_ == 0)
{
v___x_2075_ = v___x_2072_;
v_isShared_2076_ = v_isSharedCheck_2106_;
goto v_resetjp_2074_;
}
else
{
lean_inc(v_a_2073_);
lean_dec(v___x_2072_);
v___x_2075_ = lean_box(0);
v_isShared_2076_ = v_isSharedCheck_2106_;
goto v_resetjp_2074_;
}
v_resetjp_2074_:
{
lean_object* v___x_2077_; lean_object* v_visitedLevel_2078_; lean_object* v_visitedExpr_2079_; lean_object* v_levelParams_2080_; lean_object* v_nextLevelIdx_2081_; lean_object* v_levelArgs_2082_; lean_object* v_newLocalDecls_2083_; lean_object* v_newLocalDeclsForMVars_2084_; lean_object* v_newLetDecls_2085_; lean_object* v_nextExprIdx_2086_; lean_object* v_exprMVarArgs_2087_; lean_object* v_exprFVarArgs_2088_; lean_object* v_toProcess_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2105_; 
v___x_2077_ = lean_st_ref_take(v_a_2066_);
v_visitedLevel_2078_ = lean_ctor_get(v___x_2077_, 0);
v_visitedExpr_2079_ = lean_ctor_get(v___x_2077_, 1);
v_levelParams_2080_ = lean_ctor_get(v___x_2077_, 2);
v_nextLevelIdx_2081_ = lean_ctor_get(v___x_2077_, 3);
v_levelArgs_2082_ = lean_ctor_get(v___x_2077_, 4);
v_newLocalDecls_2083_ = lean_ctor_get(v___x_2077_, 5);
v_newLocalDeclsForMVars_2084_ = lean_ctor_get(v___x_2077_, 6);
v_newLetDecls_2085_ = lean_ctor_get(v___x_2077_, 7);
v_nextExprIdx_2086_ = lean_ctor_get(v___x_2077_, 8);
v_exprMVarArgs_2087_ = lean_ctor_get(v___x_2077_, 9);
v_exprFVarArgs_2088_ = lean_ctor_get(v___x_2077_, 10);
v_toProcess_2089_ = lean_ctor_get(v___x_2077_, 11);
v_isSharedCheck_2105_ = !lean_is_exclusive(v___x_2077_);
if (v_isSharedCheck_2105_ == 0)
{
v___x_2091_ = v___x_2077_;
v_isShared_2092_ = v_isSharedCheck_2105_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_toProcess_2089_);
lean_inc(v_exprFVarArgs_2088_);
lean_inc(v_exprMVarArgs_2087_);
lean_inc(v_nextExprIdx_2086_);
lean_inc(v_newLetDecls_2085_);
lean_inc(v_newLocalDeclsForMVars_2084_);
lean_inc(v_newLocalDecls_2083_);
lean_inc(v_levelArgs_2082_);
lean_inc(v_nextLevelIdx_2081_);
lean_inc(v_levelParams_2080_);
lean_inc(v_visitedExpr_2079_);
lean_inc(v_visitedLevel_2078_);
lean_dec(v___x_2077_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2105_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v___x_2093_; lean_object* v___x_2094_; uint8_t v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2099_; 
v___x_2093_ = lean_box(0);
v___x_2094_ = lean_unsigned_to_nat(0u);
v___x_2095_ = 0;
v___x_2096_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2096_, 0, v___x_2094_);
lean_ctor_set(v___x_2096_, 1, v_newFVarId_2061_);
lean_ctor_set(v___x_2096_, 2, v_userName_2062_);
lean_ctor_set(v___x_2096_, 3, v_a_2073_);
lean_ctor_set_uint8(v___x_2096_, sizeof(void*)*4, v_bi_2064_);
lean_ctor_set_uint8(v___x_2096_, sizeof(void*)*4 + 1, v___x_2095_);
v___x_2097_ = lean_array_push(v_newLocalDecls_2083_, v___x_2096_);
if (v_isShared_2092_ == 0)
{
lean_ctor_set(v___x_2091_, 5, v___x_2097_);
v___x_2099_ = v___x_2091_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v_visitedLevel_2078_);
lean_ctor_set(v_reuseFailAlloc_2104_, 1, v_visitedExpr_2079_);
lean_ctor_set(v_reuseFailAlloc_2104_, 2, v_levelParams_2080_);
lean_ctor_set(v_reuseFailAlloc_2104_, 3, v_nextLevelIdx_2081_);
lean_ctor_set(v_reuseFailAlloc_2104_, 4, v_levelArgs_2082_);
lean_ctor_set(v_reuseFailAlloc_2104_, 5, v___x_2097_);
lean_ctor_set(v_reuseFailAlloc_2104_, 6, v_newLocalDeclsForMVars_2084_);
lean_ctor_set(v_reuseFailAlloc_2104_, 7, v_newLetDecls_2085_);
lean_ctor_set(v_reuseFailAlloc_2104_, 8, v_nextExprIdx_2086_);
lean_ctor_set(v_reuseFailAlloc_2104_, 9, v_exprMVarArgs_2087_);
lean_ctor_set(v_reuseFailAlloc_2104_, 10, v_exprFVarArgs_2088_);
lean_ctor_set(v_reuseFailAlloc_2104_, 11, v_toProcess_2089_);
v___x_2099_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
lean_object* v___x_2100_; lean_object* v___x_2102_; 
v___x_2100_ = lean_st_ref_put(v_a_2066_, v___x_2099_);
if (v_isShared_2076_ == 0)
{
lean_ctor_set(v___x_2075_, 0, v___x_2093_);
v___x_2102_ = v___x_2075_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v___x_2093_);
v___x_2102_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
return v___x_2102_;
}
}
}
}
}
else
{
lean_object* v_a_2107_; lean_object* v___x_2109_; uint8_t v_isShared_2110_; uint8_t v_isSharedCheck_2114_; 
lean_dec(v_userName_2062_);
lean_dec(v_newFVarId_2061_);
v_a_2107_ = lean_ctor_get(v___x_2072_, 0);
v_isSharedCheck_2114_ = !lean_is_exclusive(v___x_2072_);
if (v_isSharedCheck_2114_ == 0)
{
v___x_2109_ = v___x_2072_;
v_isShared_2110_ = v_isSharedCheck_2114_;
goto v_resetjp_2108_;
}
else
{
lean_inc(v_a_2107_);
lean_dec(v___x_2072_);
v___x_2109_ = lean_box(0);
v_isShared_2110_ = v_isSharedCheck_2114_;
goto v_resetjp_2108_;
}
v_resetjp_2108_:
{
lean_object* v___x_2112_; 
if (v_isShared_2110_ == 0)
{
v___x_2112_ = v___x_2109_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2113_; 
v_reuseFailAlloc_2113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2113_, 0, v_a_2107_);
v___x_2112_ = v_reuseFailAlloc_2113_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
return v___x_2112_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_pushLocalDecl___boxed(lean_object* v_newFVarId_2115_, lean_object* v_userName_2116_, lean_object* v_type_2117_, lean_object* v_bi_2118_, lean_object* v_a_2119_, lean_object* v_a_2120_, lean_object* v_a_2121_, lean_object* v_a_2122_, lean_object* v_a_2123_, lean_object* v_a_2124_, lean_object* v_a_2125_){
_start:
{
uint8_t v_bi_boxed_2126_; uint8_t v_a_boxed_2127_; lean_object* v_res_2128_; 
v_bi_boxed_2126_ = lean_unbox(v_bi_2118_);
v_a_boxed_2127_ = lean_unbox(v_a_2119_);
v_res_2128_ = l_Lean_Meta_Closure_pushLocalDecl(v_newFVarId_2115_, v_userName_2116_, v_type_2117_, v_bi_boxed_2126_, v_a_boxed_2127_, v_a_2120_, v_a_2121_, v_a_2122_, v_a_2123_, v_a_2124_);
lean_dec(v_a_2124_);
lean_dec_ref(v_a_2123_);
lean_dec(v_a_2122_);
lean_dec_ref(v_a_2121_);
lean_dec(v_a_2120_);
return v_res_2128_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___redArg(lean_object* v_k_2129_, lean_object* v_t_2130_){
_start:
{
if (lean_obj_tag(v_t_2130_) == 0)
{
lean_object* v_k_2131_; lean_object* v_l_2132_; lean_object* v_r_2133_; uint8_t v___x_2134_; 
v_k_2131_ = lean_ctor_get(v_t_2130_, 1);
v_l_2132_ = lean_ctor_get(v_t_2130_, 3);
v_r_2133_ = lean_ctor_get(v_t_2130_, 4);
v___x_2134_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2129_, v_k_2131_);
switch(v___x_2134_)
{
case 0:
{
v_t_2130_ = v_l_2132_;
goto _start;
}
case 1:
{
uint8_t v___x_2136_; 
v___x_2136_ = 1;
return v___x_2136_;
}
default: 
{
v_t_2130_ = v_r_2133_;
goto _start;
}
}
}
else
{
uint8_t v___x_2138_; 
v___x_2138_ = 0;
return v___x_2138_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___redArg___boxed(lean_object* v_k_2139_, lean_object* v_t_2140_){
_start:
{
uint8_t v_res_2141_; lean_object* v_r_2142_; 
v_res_2141_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___redArg(v_k_2139_, v_t_2140_);
lean_dec(v_t_2140_);
lean_dec(v_k_2139_);
v_r_2142_ = lean_box(v_res_2141_);
return v_r_2142_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__1(lean_object* v_newFVarId_2143_, lean_object* v_a_2144_, size_t v_sz_2145_, size_t v_i_2146_, lean_object* v_bs_2147_){
_start:
{
uint8_t v___x_2148_; 
v___x_2148_ = lean_usize_dec_lt(v_i_2146_, v_sz_2145_);
if (v___x_2148_ == 0)
{
lean_object* v___x_2149_; 
lean_dec(v_newFVarId_2143_);
v___x_2149_ = l_unsafeCast___redArg(v_bs_2147_);
lean_dec_ref(v_bs_2147_);
return v___x_2149_;
}
else
{
lean_object* v_v_2150_; lean_object* v___x_2151_; lean_object* v_bs_x27_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; size_t v___x_2155_; size_t v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; 
v_v_2150_ = lean_array_uget(v_bs_2147_, v_i_2146_);
v___x_2151_ = lean_unsigned_to_nat(0u);
v_bs_x27_2152_ = lean_array_uset(v_bs_2147_, v_i_2146_, v___x_2151_);
v___x_2153_ = l_unsafeCast___redArg(v_v_2150_);
lean_dec(v_v_2150_);
lean_inc(v_newFVarId_2143_);
v___x_2154_ = l_Lean_LocalDecl_replaceFVarId(v_newFVarId_2143_, v_a_2144_, v___x_2153_);
v___x_2155_ = ((size_t)1ULL);
v___x_2156_ = lean_usize_add(v_i_2146_, v___x_2155_);
v___x_2157_ = l_unsafeCast___redArg(v___x_2154_);
lean_dec_ref(v___x_2154_);
v___x_2158_ = lean_array_uset(v_bs_x27_2152_, v_i_2146_, v___x_2157_);
v_i_2146_ = v___x_2156_;
v_bs_2147_ = v___x_2158_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__1___boxed(lean_object* v_newFVarId_2160_, lean_object* v_a_2161_, lean_object* v_sz_2162_, lean_object* v_i_2163_, lean_object* v_bs_2164_){
_start:
{
size_t v_sz_boxed_2165_; size_t v_i_boxed_2166_; lean_object* v_res_2167_; 
v_sz_boxed_2165_ = lean_unbox_usize(v_sz_2162_);
lean_dec(v_sz_2162_);
v_i_boxed_2166_ = lean_unbox_usize(v_i_2163_);
lean_dec(v_i_2163_);
v_res_2167_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__1(v_newFVarId_2160_, v_a_2161_, v_sz_boxed_2165_, v_i_boxed_2166_, v_bs_2164_);
lean_dec_ref(v_a_2161_);
return v_res_2167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_process(uint8_t v_a_2168_, lean_object* v_a_2169_, lean_object* v_a_2170_, lean_object* v_a_2171_, lean_object* v_a_2172_, lean_object* v_a_2173_){
_start:
{
lean_object* v___x_2175_; 
v___x_2175_ = l_Lean_Meta_Closure_pickNextToProcess_x3f___redArg(v_a_2169_, v_a_2170_);
if (lean_obj_tag(v___x_2175_) == 0)
{
lean_object* v_a_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2305_; 
v_a_2176_ = lean_ctor_get(v___x_2175_, 0);
v_isSharedCheck_2305_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2178_ = v___x_2175_;
v_isShared_2179_ = v_isSharedCheck_2305_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_a_2176_);
lean_dec(v___x_2175_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2305_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
if (lean_obj_tag(v_a_2176_) == 0)
{
lean_object* v___x_2180_; lean_object* v___x_2182_; 
v___x_2180_ = lean_box(0);
if (v_isShared_2179_ == 0)
{
lean_ctor_set(v___x_2178_, 0, v___x_2180_);
v___x_2182_ = v___x_2178_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2183_; 
v_reuseFailAlloc_2183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2183_, 0, v___x_2180_);
v___x_2182_ = v_reuseFailAlloc_2183_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
return v___x_2182_;
}
}
else
{
lean_object* v_val_2184_; lean_object* v_fvarId_2185_; lean_object* v_newFVarId_2186_; lean_object* v___x_2187_; 
lean_del_object(v___x_2178_);
v_val_2184_ = lean_ctor_get(v_a_2176_, 0);
lean_inc(v_val_2184_);
lean_dec_ref_known(v_a_2176_, 1);
v_fvarId_2185_ = lean_ctor_get(v_val_2184_, 0);
lean_inc_n(v_fvarId_2185_, 2);
v_newFVarId_2186_ = lean_ctor_get(v_val_2184_, 1);
lean_inc(v_newFVarId_2186_);
lean_dec(v_val_2184_);
v___x_2187_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_2185_, v_a_2170_, v_a_2172_, v_a_2173_);
if (lean_obj_tag(v___x_2187_) == 0)
{
lean_object* v_a_2188_; 
v_a_2188_ = lean_ctor_get(v___x_2187_, 0);
lean_inc(v_a_2188_);
lean_dec_ref_known(v___x_2187_, 1);
if (lean_obj_tag(v_a_2188_) == 0)
{
lean_object* v_userName_2189_; lean_object* v_type_2190_; uint8_t v_bi_2191_; lean_object* v___x_2192_; 
v_userName_2189_ = lean_ctor_get(v_a_2188_, 2);
lean_inc(v_userName_2189_);
v_type_2190_ = lean_ctor_get(v_a_2188_, 3);
lean_inc_ref(v_type_2190_);
v_bi_2191_ = lean_ctor_get_uint8(v_a_2188_, sizeof(void*)*4);
lean_dec_ref_known(v_a_2188_, 4);
v___x_2192_ = l_Lean_Meta_Closure_pushLocalDecl(v_newFVarId_2186_, v_userName_2189_, v_type_2190_, v_bi_2191_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_);
if (lean_obj_tag(v___x_2192_) == 0)
{
lean_object* v___x_2193_; lean_object* v___x_2194_; 
lean_dec_ref_known(v___x_2192_, 1);
v___x_2193_ = l_Lean_mkFVar(v_fvarId_2185_);
v___x_2194_ = l_Lean_Meta_Closure_pushFVarArg___redArg(v___x_2193_, v_a_2169_);
if (lean_obj_tag(v___x_2194_) == 0)
{
lean_dec_ref_known(v___x_2194_, 1);
goto _start;
}
else
{
return v___x_2194_;
}
}
else
{
lean_dec(v_fvarId_2185_);
return v___x_2192_;
}
}
else
{
lean_object* v_userName_2196_; lean_object* v_type_2197_; lean_object* v_value_2198_; uint8_t v_nondep_2199_; lean_object* v___x_2201_; uint8_t v_isShared_2202_; uint8_t v_isSharedCheck_2294_; 
v_userName_2196_ = lean_ctor_get(v_a_2188_, 2);
v_type_2197_ = lean_ctor_get(v_a_2188_, 3);
v_value_2198_ = lean_ctor_get(v_a_2188_, 4);
v_nondep_2199_ = lean_ctor_get_uint8(v_a_2188_, sizeof(void*)*5);
v_isSharedCheck_2294_ = !lean_is_exclusive(v_a_2188_);
if (v_isSharedCheck_2294_ == 0)
{
lean_object* v_unused_2295_; lean_object* v_unused_2296_; 
v_unused_2295_ = lean_ctor_get(v_a_2188_, 1);
lean_dec(v_unused_2295_);
v_unused_2296_ = lean_ctor_get(v_a_2188_, 0);
lean_dec(v_unused_2296_);
v___x_2201_ = v_a_2188_;
v_isShared_2202_ = v_isSharedCheck_2294_;
goto v_resetjp_2200_;
}
else
{
lean_inc(v_value_2198_);
lean_inc(v_type_2197_);
lean_inc(v_userName_2196_);
lean_dec(v_a_2188_);
v___x_2201_ = lean_box(0);
v_isShared_2202_ = v_isSharedCheck_2294_;
goto v_resetjp_2200_;
}
v_resetjp_2200_:
{
lean_object* v___x_2203_; 
v___x_2203_ = l_Lean_Meta_getZetaDeltaFVarIds___redArg(v_a_2171_);
if (lean_obj_tag(v___x_2203_) == 0)
{
lean_object* v_a_2204_; 
v_a_2204_ = lean_ctor_get(v___x_2203_, 0);
lean_inc(v_a_2204_);
lean_dec_ref_known(v___x_2203_, 1);
if (v_nondep_2199_ == 0)
{
uint8_t v___x_2211_; 
v___x_2211_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___redArg(v_fvarId_2185_, v_a_2204_);
lean_dec(v_a_2204_);
if (v___x_2211_ == 0)
{
lean_del_object(v___x_2201_);
lean_dec_ref(v_value_2198_);
goto v___jp_2205_;
}
else
{
lean_object* v___x_2212_; 
lean_dec(v_fvarId_2185_);
v___x_2212_ = l_Lean_Meta_Closure_collectExpr(v_type_2197_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_);
if (lean_obj_tag(v___x_2212_) == 0)
{
lean_object* v_a_2213_; lean_object* v___x_2214_; 
v_a_2213_ = lean_ctor_get(v___x_2212_, 0);
lean_inc(v_a_2213_);
lean_dec_ref_known(v___x_2212_, 1);
v___x_2214_ = l_Lean_Meta_Closure_collectExpr(v_value_2198_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_);
if (lean_obj_tag(v___x_2214_) == 0)
{
lean_object* v_a_2215_; lean_object* v___x_2216_; lean_object* v_visitedLevel_2217_; lean_object* v_visitedExpr_2218_; lean_object* v_levelParams_2219_; lean_object* v_nextLevelIdx_2220_; lean_object* v_levelArgs_2221_; lean_object* v_newLocalDecls_2222_; lean_object* v_newLocalDeclsForMVars_2223_; lean_object* v_newLetDecls_2224_; lean_object* v_nextExprIdx_2225_; lean_object* v_exprMVarArgs_2226_; lean_object* v_exprFVarArgs_2227_; lean_object* v_toProcess_2228_; lean_object* v___x_2230_; uint8_t v_isShared_2231_; uint8_t v_isSharedCheck_2269_; 
v_a_2215_ = lean_ctor_get(v___x_2214_, 0);
lean_inc(v_a_2215_);
lean_dec_ref_known(v___x_2214_, 1);
v___x_2216_ = lean_st_ref_take(v_a_2169_);
v_visitedLevel_2217_ = lean_ctor_get(v___x_2216_, 0);
v_visitedExpr_2218_ = lean_ctor_get(v___x_2216_, 1);
v_levelParams_2219_ = lean_ctor_get(v___x_2216_, 2);
v_nextLevelIdx_2220_ = lean_ctor_get(v___x_2216_, 3);
v_levelArgs_2221_ = lean_ctor_get(v___x_2216_, 4);
v_newLocalDecls_2222_ = lean_ctor_get(v___x_2216_, 5);
v_newLocalDeclsForMVars_2223_ = lean_ctor_get(v___x_2216_, 6);
v_newLetDecls_2224_ = lean_ctor_get(v___x_2216_, 7);
v_nextExprIdx_2225_ = lean_ctor_get(v___x_2216_, 8);
v_exprMVarArgs_2226_ = lean_ctor_get(v___x_2216_, 9);
v_exprFVarArgs_2227_ = lean_ctor_get(v___x_2216_, 10);
v_toProcess_2228_ = lean_ctor_get(v___x_2216_, 11);
v_isSharedCheck_2269_ = !lean_is_exclusive(v___x_2216_);
if (v_isSharedCheck_2269_ == 0)
{
v___x_2230_ = v___x_2216_;
v_isShared_2231_ = v_isSharedCheck_2269_;
goto v_resetjp_2229_;
}
else
{
lean_inc(v_toProcess_2228_);
lean_inc(v_exprFVarArgs_2227_);
lean_inc(v_exprMVarArgs_2226_);
lean_inc(v_nextExprIdx_2225_);
lean_inc(v_newLetDecls_2224_);
lean_inc(v_newLocalDeclsForMVars_2223_);
lean_inc(v_newLocalDecls_2222_);
lean_inc(v_levelArgs_2221_);
lean_inc(v_nextLevelIdx_2220_);
lean_inc(v_levelParams_2219_);
lean_inc(v_visitedExpr_2218_);
lean_inc(v_visitedLevel_2217_);
lean_dec(v___x_2216_);
v___x_2230_ = lean_box(0);
v_isShared_2231_ = v_isSharedCheck_2269_;
goto v_resetjp_2229_;
}
v_resetjp_2229_:
{
lean_object* v___x_2232_; uint8_t v___x_2233_; lean_object* v___x_2235_; 
v___x_2232_ = lean_unsigned_to_nat(0u);
v___x_2233_ = 0;
lean_inc(v_a_2215_);
lean_inc(v_newFVarId_2186_);
if (v_isShared_2202_ == 0)
{
lean_ctor_set(v___x_2201_, 4, v_a_2215_);
lean_ctor_set(v___x_2201_, 3, v_a_2213_);
lean_ctor_set(v___x_2201_, 1, v_newFVarId_2186_);
lean_ctor_set(v___x_2201_, 0, v___x_2232_);
v___x_2235_ = v___x_2201_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(1, 5, 2);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v___x_2232_);
lean_ctor_set(v_reuseFailAlloc_2268_, 1, v_newFVarId_2186_);
lean_ctor_set(v_reuseFailAlloc_2268_, 2, v_userName_2196_);
lean_ctor_set(v_reuseFailAlloc_2268_, 3, v_a_2213_);
lean_ctor_set(v_reuseFailAlloc_2268_, 4, v_a_2215_);
lean_ctor_set_uint8(v_reuseFailAlloc_2268_, sizeof(void*)*5, v_nondep_2199_);
v___x_2235_ = v_reuseFailAlloc_2268_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
lean_object* v___x_2236_; lean_object* v___x_2238_; 
lean_ctor_set_uint8(v___x_2235_, sizeof(void*)*5 + 1, v___x_2233_);
v___x_2236_ = lean_array_push(v_newLetDecls_2224_, v___x_2235_);
if (v_isShared_2231_ == 0)
{
lean_ctor_set(v___x_2230_, 7, v___x_2236_);
v___x_2238_ = v___x_2230_;
goto v_reusejp_2237_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v_visitedLevel_2217_);
lean_ctor_set(v_reuseFailAlloc_2267_, 1, v_visitedExpr_2218_);
lean_ctor_set(v_reuseFailAlloc_2267_, 2, v_levelParams_2219_);
lean_ctor_set(v_reuseFailAlloc_2267_, 3, v_nextLevelIdx_2220_);
lean_ctor_set(v_reuseFailAlloc_2267_, 4, v_levelArgs_2221_);
lean_ctor_set(v_reuseFailAlloc_2267_, 5, v_newLocalDecls_2222_);
lean_ctor_set(v_reuseFailAlloc_2267_, 6, v_newLocalDeclsForMVars_2223_);
lean_ctor_set(v_reuseFailAlloc_2267_, 7, v___x_2236_);
lean_ctor_set(v_reuseFailAlloc_2267_, 8, v_nextExprIdx_2225_);
lean_ctor_set(v_reuseFailAlloc_2267_, 9, v_exprMVarArgs_2226_);
lean_ctor_set(v_reuseFailAlloc_2267_, 10, v_exprFVarArgs_2227_);
lean_ctor_set(v_reuseFailAlloc_2267_, 11, v_toProcess_2228_);
v___x_2238_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2237_;
}
v_reusejp_2237_:
{
lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v_visitedLevel_2241_; lean_object* v_visitedExpr_2242_; lean_object* v_levelParams_2243_; lean_object* v_nextLevelIdx_2244_; lean_object* v_levelArgs_2245_; lean_object* v_newLocalDecls_2246_; lean_object* v_newLocalDeclsForMVars_2247_; lean_object* v_newLetDecls_2248_; lean_object* v_nextExprIdx_2249_; lean_object* v_exprMVarArgs_2250_; lean_object* v_exprFVarArgs_2251_; lean_object* v_toProcess_2252_; lean_object* v___x_2254_; uint8_t v_isShared_2255_; uint8_t v_isSharedCheck_2266_; 
v___x_2239_ = lean_st_ref_put(v_a_2169_, v___x_2238_);
v___x_2240_ = lean_st_ref_take(v_a_2169_);
v_visitedLevel_2241_ = lean_ctor_get(v___x_2240_, 0);
v_visitedExpr_2242_ = lean_ctor_get(v___x_2240_, 1);
v_levelParams_2243_ = lean_ctor_get(v___x_2240_, 2);
v_nextLevelIdx_2244_ = lean_ctor_get(v___x_2240_, 3);
v_levelArgs_2245_ = lean_ctor_get(v___x_2240_, 4);
v_newLocalDecls_2246_ = lean_ctor_get(v___x_2240_, 5);
v_newLocalDeclsForMVars_2247_ = lean_ctor_get(v___x_2240_, 6);
v_newLetDecls_2248_ = lean_ctor_get(v___x_2240_, 7);
v_nextExprIdx_2249_ = lean_ctor_get(v___x_2240_, 8);
v_exprMVarArgs_2250_ = lean_ctor_get(v___x_2240_, 9);
v_exprFVarArgs_2251_ = lean_ctor_get(v___x_2240_, 10);
v_toProcess_2252_ = lean_ctor_get(v___x_2240_, 11);
v_isSharedCheck_2266_ = !lean_is_exclusive(v___x_2240_);
if (v_isSharedCheck_2266_ == 0)
{
v___x_2254_ = v___x_2240_;
v_isShared_2255_ = v_isSharedCheck_2266_;
goto v_resetjp_2253_;
}
else
{
lean_inc(v_toProcess_2252_);
lean_inc(v_exprFVarArgs_2251_);
lean_inc(v_exprMVarArgs_2250_);
lean_inc(v_nextExprIdx_2249_);
lean_inc(v_newLetDecls_2248_);
lean_inc(v_newLocalDeclsForMVars_2247_);
lean_inc(v_newLocalDecls_2246_);
lean_inc(v_levelArgs_2245_);
lean_inc(v_nextLevelIdx_2244_);
lean_inc(v_levelParams_2243_);
lean_inc(v_visitedExpr_2242_);
lean_inc(v_visitedLevel_2241_);
lean_dec(v___x_2240_);
v___x_2254_ = lean_box(0);
v_isShared_2255_ = v_isSharedCheck_2266_;
goto v_resetjp_2253_;
}
v_resetjp_2253_:
{
size_t v_sz_2256_; size_t v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2262_; 
v_sz_2256_ = lean_array_size(v_newLocalDecls_2246_);
v___x_2257_ = ((size_t)0ULL);
v___x_2258_ = l_unsafeCast___redArg(v_newLocalDecls_2246_);
lean_dec_ref(v_newLocalDecls_2246_);
v___x_2259_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_process_spec__1(v_newFVarId_2186_, v_a_2215_, v_sz_2256_, v___x_2257_, v___x_2258_);
lean_dec(v_a_2215_);
v___x_2260_ = l_unsafeCast___redArg(v___x_2259_);
lean_dec_ref(v___x_2259_);
if (v_isShared_2255_ == 0)
{
lean_ctor_set(v___x_2254_, 5, v___x_2260_);
v___x_2262_ = v___x_2254_;
goto v_reusejp_2261_;
}
else
{
lean_object* v_reuseFailAlloc_2265_; 
v_reuseFailAlloc_2265_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_2265_, 0, v_visitedLevel_2241_);
lean_ctor_set(v_reuseFailAlloc_2265_, 1, v_visitedExpr_2242_);
lean_ctor_set(v_reuseFailAlloc_2265_, 2, v_levelParams_2243_);
lean_ctor_set(v_reuseFailAlloc_2265_, 3, v_nextLevelIdx_2244_);
lean_ctor_set(v_reuseFailAlloc_2265_, 4, v_levelArgs_2245_);
lean_ctor_set(v_reuseFailAlloc_2265_, 5, v___x_2260_);
lean_ctor_set(v_reuseFailAlloc_2265_, 6, v_newLocalDeclsForMVars_2247_);
lean_ctor_set(v_reuseFailAlloc_2265_, 7, v_newLetDecls_2248_);
lean_ctor_set(v_reuseFailAlloc_2265_, 8, v_nextExprIdx_2249_);
lean_ctor_set(v_reuseFailAlloc_2265_, 9, v_exprMVarArgs_2250_);
lean_ctor_set(v_reuseFailAlloc_2265_, 10, v_exprFVarArgs_2251_);
lean_ctor_set(v_reuseFailAlloc_2265_, 11, v_toProcess_2252_);
v___x_2262_ = v_reuseFailAlloc_2265_;
goto v_reusejp_2261_;
}
v_reusejp_2261_:
{
lean_object* v___x_2263_; 
v___x_2263_ = lean_st_ref_put(v_a_2169_, v___x_2262_);
goto _start;
}
}
}
}
}
}
else
{
lean_object* v_a_2270_; lean_object* v___x_2272_; uint8_t v_isShared_2273_; uint8_t v_isSharedCheck_2277_; 
lean_dec(v_a_2213_);
lean_del_object(v___x_2201_);
lean_dec(v_userName_2196_);
lean_dec(v_newFVarId_2186_);
v_a_2270_ = lean_ctor_get(v___x_2214_, 0);
v_isSharedCheck_2277_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2277_ == 0)
{
v___x_2272_ = v___x_2214_;
v_isShared_2273_ = v_isSharedCheck_2277_;
goto v_resetjp_2271_;
}
else
{
lean_inc(v_a_2270_);
lean_dec(v___x_2214_);
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
else
{
lean_object* v_a_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2285_; 
lean_del_object(v___x_2201_);
lean_dec_ref(v_value_2198_);
lean_dec(v_userName_2196_);
lean_dec(v_newFVarId_2186_);
v_a_2278_ = lean_ctor_get(v___x_2212_, 0);
v_isSharedCheck_2285_ = !lean_is_exclusive(v___x_2212_);
if (v_isSharedCheck_2285_ == 0)
{
v___x_2280_ = v___x_2212_;
v_isShared_2281_ = v_isSharedCheck_2285_;
goto v_resetjp_2279_;
}
else
{
lean_inc(v_a_2278_);
lean_dec(v___x_2212_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2285_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
lean_object* v___x_2283_; 
if (v_isShared_2281_ == 0)
{
v___x_2283_ = v___x_2280_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2284_; 
v_reuseFailAlloc_2284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2284_, 0, v_a_2278_);
v___x_2283_ = v_reuseFailAlloc_2284_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
return v___x_2283_;
}
}
}
}
}
else
{
lean_dec(v_a_2204_);
lean_del_object(v___x_2201_);
lean_dec_ref(v_value_2198_);
goto v___jp_2205_;
}
v___jp_2205_:
{
uint8_t v___x_2206_; lean_object* v___x_2207_; 
v___x_2206_ = 0;
v___x_2207_ = l_Lean_Meta_Closure_pushLocalDecl(v_newFVarId_2186_, v_userName_2196_, v_type_2197_, v___x_2206_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_);
if (lean_obj_tag(v___x_2207_) == 0)
{
lean_object* v___x_2208_; lean_object* v___x_2209_; 
lean_dec_ref_known(v___x_2207_, 1);
v___x_2208_ = l_Lean_mkFVar(v_fvarId_2185_);
v___x_2209_ = l_Lean_Meta_Closure_pushFVarArg___redArg(v___x_2208_, v_a_2169_);
if (lean_obj_tag(v___x_2209_) == 0)
{
lean_dec_ref_known(v___x_2209_, 1);
goto _start;
}
else
{
return v___x_2209_;
}
}
else
{
lean_dec(v_fvarId_2185_);
return v___x_2207_;
}
}
}
else
{
lean_object* v_a_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2293_; 
lean_del_object(v___x_2201_);
lean_dec_ref(v_value_2198_);
lean_dec_ref(v_type_2197_);
lean_dec(v_userName_2196_);
lean_dec(v_newFVarId_2186_);
lean_dec(v_fvarId_2185_);
v_a_2286_ = lean_ctor_get(v___x_2203_, 0);
v_isSharedCheck_2293_ = !lean_is_exclusive(v___x_2203_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2288_ = v___x_2203_;
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_a_2286_);
lean_dec(v___x_2203_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
lean_object* v___x_2291_; 
if (v_isShared_2289_ == 0)
{
v___x_2291_ = v___x_2288_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v_a_2286_);
v___x_2291_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2290_;
}
v_reusejp_2290_:
{
return v___x_2291_;
}
}
}
}
}
}
else
{
lean_object* v_a_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2304_; 
lean_dec(v_newFVarId_2186_);
lean_dec(v_fvarId_2185_);
v_a_2297_ = lean_ctor_get(v___x_2187_, 0);
v_isSharedCheck_2304_ = !lean_is_exclusive(v___x_2187_);
if (v_isSharedCheck_2304_ == 0)
{
v___x_2299_ = v___x_2187_;
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
else
{
lean_inc(v_a_2297_);
lean_dec(v___x_2187_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
lean_object* v___x_2302_; 
if (v_isShared_2300_ == 0)
{
v___x_2302_ = v___x_2299_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2303_; 
v_reuseFailAlloc_2303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2303_, 0, v_a_2297_);
v___x_2302_ = v_reuseFailAlloc_2303_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
return v___x_2302_;
}
}
}
}
}
}
else
{
lean_object* v_a_2306_; lean_object* v___x_2308_; uint8_t v_isShared_2309_; uint8_t v_isSharedCheck_2313_; 
v_a_2306_ = lean_ctor_get(v___x_2175_, 0);
v_isSharedCheck_2313_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2313_ == 0)
{
v___x_2308_ = v___x_2175_;
v_isShared_2309_ = v_isSharedCheck_2313_;
goto v_resetjp_2307_;
}
else
{
lean_inc(v_a_2306_);
lean_dec(v___x_2175_);
v___x_2308_ = lean_box(0);
v_isShared_2309_ = v_isSharedCheck_2313_;
goto v_resetjp_2307_;
}
v_resetjp_2307_:
{
lean_object* v___x_2311_; 
if (v_isShared_2309_ == 0)
{
v___x_2311_ = v___x_2308_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v_a_2306_);
v___x_2311_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
return v___x_2311_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_process___boxed(lean_object* v_a_2314_, lean_object* v_a_2315_, lean_object* v_a_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_, lean_object* v_a_2319_, lean_object* v_a_2320_){
_start:
{
uint8_t v_a_boxed_2321_; lean_object* v_res_2322_; 
v_a_boxed_2321_ = lean_unbox(v_a_2314_);
v_res_2322_ = l_Lean_Meta_Closure_process(v_a_boxed_2321_, v_a_2315_, v_a_2316_, v_a_2317_, v_a_2318_, v_a_2319_);
lean_dec(v_a_2319_);
lean_dec_ref(v_a_2318_);
lean_dec(v_a_2317_);
lean_dec_ref(v_a_2316_);
lean_dec(v_a_2315_);
return v_res_2322_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0(lean_object* v_00_u03b2_2323_, lean_object* v_k_2324_, lean_object* v_t_2325_){
_start:
{
uint8_t v___x_2326_; 
v___x_2326_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___redArg(v_k_2324_, v_t_2325_);
return v___x_2326_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0___boxed(lean_object* v_00_u03b2_2327_, lean_object* v_k_2328_, lean_object* v_t_2329_){
_start:
{
uint8_t v_res_2330_; lean_object* v_r_2331_; 
v_res_2330_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Closure_process_spec__0(v_00_u03b2_2327_, v_k_2328_, v_t_2329_);
lean_dec(v_t_2329_);
lean_dec(v_k_2328_);
v_r_2331_ = lean_box(v_res_2330_);
return v_r_2331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___lam__0(lean_object* v_decls_2332_, lean_object* v_xs_2333_, uint8_t v_isLambda_2334_, lean_object* v_i_2335_, lean_object* v_x_2336_, lean_object* v_b_2337_){
_start:
{
lean_object* v_decl_2338_; 
v_decl_2338_ = lean_array_fget_borrowed(v_decls_2332_, v_i_2335_);
if (lean_obj_tag(v_decl_2338_) == 0)
{
lean_object* v_userName_2339_; lean_object* v_type_2340_; uint8_t v_bi_2341_; lean_object* v_ty_2342_; 
v_userName_2339_ = lean_ctor_get(v_decl_2338_, 2);
v_type_2340_ = lean_ctor_get(v_decl_2338_, 3);
v_bi_2341_ = lean_ctor_get_uint8(v_decl_2338_, sizeof(void*)*4);
v_ty_2342_ = lean_expr_abstract_range(v_type_2340_, v_i_2335_, v_xs_2333_);
if (v_isLambda_2334_ == 0)
{
lean_object* v___x_2343_; 
lean_inc(v_userName_2339_);
v___x_2343_ = l_Lean_mkForall(v_userName_2339_, v_bi_2341_, v_ty_2342_, v_b_2337_);
return v___x_2343_;
}
else
{
lean_object* v___x_2344_; 
lean_inc(v_userName_2339_);
v___x_2344_ = l_Lean_mkLambda(v_userName_2339_, v_bi_2341_, v_ty_2342_, v_b_2337_);
return v___x_2344_;
}
}
else
{
lean_object* v_userName_2345_; lean_object* v_type_2346_; lean_object* v_value_2347_; uint8_t v_nondep_2348_; lean_object* v___x_2349_; uint8_t v___x_2350_; 
v_userName_2345_ = lean_ctor_get(v_decl_2338_, 2);
v_type_2346_ = lean_ctor_get(v_decl_2338_, 3);
v_value_2347_ = lean_ctor_get(v_decl_2338_, 4);
v_nondep_2348_ = lean_ctor_get_uint8(v_decl_2338_, sizeof(void*)*5);
v___x_2349_ = lean_unsigned_to_nat(0u);
v___x_2350_ = lean_expr_has_loose_bvar(v_b_2337_, v___x_2349_);
if (v___x_2350_ == 0)
{
lean_object* v___x_2351_; lean_object* v___x_2352_; 
v___x_2351_ = lean_unsigned_to_nat(1u);
v___x_2352_ = lean_expr_lower_loose_bvars(v_b_2337_, v___x_2351_, v___x_2351_);
lean_dec_ref(v_b_2337_);
return v___x_2352_;
}
else
{
lean_object* v_ty_2353_; lean_object* v_val_2354_; lean_object* v___x_2355_; 
v_ty_2353_ = lean_expr_abstract_range(v_type_2346_, v_i_2335_, v_xs_2333_);
v_val_2354_ = lean_expr_abstract_range(v_value_2347_, v_i_2335_, v_xs_2333_);
lean_inc(v_userName_2345_);
v___x_2355_ = l_Lean_Expr_letE___override(v_userName_2345_, v_ty_2353_, v_val_2354_, v_b_2337_, v_nondep_2348_);
return v___x_2355_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___lam__0___boxed(lean_object* v_decls_2356_, lean_object* v_xs_2357_, lean_object* v_isLambda_2358_, lean_object* v_i_2359_, lean_object* v_x_2360_, lean_object* v_b_2361_){
_start:
{
uint8_t v_isLambda_boxed_2362_; lean_object* v_res_2363_; 
v_isLambda_boxed_2362_ = lean_unbox(v_isLambda_2358_);
v_res_2363_ = l_Lean_Meta_Closure_mkBinding___lam__0(v_decls_2356_, v_xs_2357_, v_isLambda_boxed_2362_, v_i_2359_, v_x_2360_, v_b_2361_);
lean_dec(v_i_2359_);
lean_dec(v_xs_2357_);
lean_dec_ref(v_decls_2356_);
return v_res_2363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding(uint8_t v_isLambda_2384_, lean_object* v_decls_2385_, lean_object* v_b_2386_){
_start:
{
lean_object* v___f_2387_; lean_object* v___x_2388_; size_t v_sz_2389_; size_t v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v_xs_2393_; lean_object* v___x_2394_; lean_object* v___f_2395_; lean_object* v_b_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; 
v___f_2387_ = ((lean_object*)(l_Lean_Meta_Closure_mkBinding___closed__0));
v___x_2388_ = ((lean_object*)(l_Lean_Meta_Closure_mkBinding___closed__10));
v_sz_2389_ = lean_array_size(v_decls_2385_);
v___x_2390_ = ((size_t)0ULL);
v___x_2391_ = l_unsafeCast___redArg(v_decls_2385_);
v___x_2392_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2388_, v___f_2387_, v_sz_2389_, v___x_2390_, v___x_2391_);
v_xs_2393_ = l_unsafeCast___redArg(v___x_2392_);
lean_dec(v___x_2392_);
v___x_2394_ = lean_box(v_isLambda_2384_);
lean_inc(v_xs_2393_);
lean_inc_ref(v_decls_2385_);
v___f_2395_ = lean_alloc_closure((void*)(l_Lean_Meta_Closure_mkBinding___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2395_, 0, v_decls_2385_);
lean_closure_set(v___f_2395_, 1, v_xs_2393_);
lean_closure_set(v___f_2395_, 2, v___x_2394_);
v_b_2396_ = lean_expr_abstract(v_b_2386_, v_xs_2393_);
lean_dec(v_xs_2393_);
v___x_2397_ = lean_array_get_size(v_decls_2385_);
lean_dec_ref(v_decls_2385_);
v___x_2398_ = l_Nat_foldRev___redArg(v___x_2397_, v___f_2395_, v_b_2396_);
return v___x_2398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkBinding___boxed(lean_object* v_isLambda_2399_, lean_object* v_decls_2400_, lean_object* v_b_2401_){
_start:
{
uint8_t v_isLambda_boxed_2402_; lean_object* v_res_2403_; 
v_isLambda_boxed_2402_ = lean_unbox(v_isLambda_2399_);
v_res_2403_ = l_Lean_Meta_Closure_mkBinding(v_isLambda_boxed_2402_, v_decls_2400_, v_b_2401_);
lean_dec_ref(v_b_2401_);
return v_res_2403_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0(size_t v_sz_2404_, size_t v_i_2405_, lean_object* v_bs_2406_){
_start:
{
uint8_t v___x_2407_; 
v___x_2407_ = lean_usize_dec_lt(v_i_2405_, v_sz_2404_);
if (v___x_2407_ == 0)
{
lean_object* v___x_2408_; 
v___x_2408_ = l_unsafeCast___redArg(v_bs_2406_);
lean_dec_ref(v_bs_2406_);
return v___x_2408_;
}
else
{
lean_object* v_v_2409_; lean_object* v___x_2410_; lean_object* v_bs_x27_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; size_t v___x_2414_; size_t v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; 
v_v_2409_ = lean_array_uget(v_bs_2406_, v_i_2405_);
v___x_2410_ = lean_unsigned_to_nat(0u);
v_bs_x27_2411_ = lean_array_uset(v_bs_2406_, v_i_2405_, v___x_2410_);
v___x_2412_ = l_unsafeCast___redArg(v_v_2409_);
lean_dec(v_v_2409_);
v___x_2413_ = l_Lean_LocalDecl_toExpr(v___x_2412_);
v___x_2414_ = ((size_t)1ULL);
v___x_2415_ = lean_usize_add(v_i_2405_, v___x_2414_);
v___x_2416_ = l_unsafeCast___redArg(v___x_2413_);
lean_dec_ref(v___x_2413_);
v___x_2417_ = lean_array_uset(v_bs_x27_2411_, v_i_2405_, v___x_2416_);
v_i_2405_ = v___x_2415_;
v_bs_2406_ = v___x_2417_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0___boxed(lean_object* v_sz_2419_, lean_object* v_i_2420_, lean_object* v_bs_2421_){
_start:
{
size_t v_sz_boxed_2422_; size_t v_i_boxed_2423_; lean_object* v_res_2424_; 
v_sz_boxed_2422_ = lean_unbox_usize(v_sz_2419_);
lean_dec(v_sz_2419_);
v_i_boxed_2423_ = lean_unbox_usize(v_i_2420_);
lean_dec(v_i_2420_);
v_res_2424_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0(v_sz_boxed_2422_, v_i_boxed_2423_, v_bs_2421_);
return v_res_2424_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(lean_object* v_decls_2425_, lean_object* v_xs_2426_, lean_object* v_x_2427_, lean_object* v_x_2428_){
_start:
{
lean_object* v_zero_2429_; uint8_t v_isZero_2430_; 
v_zero_2429_ = lean_unsigned_to_nat(0u);
v_isZero_2430_ = lean_nat_dec_eq(v_x_2427_, v_zero_2429_);
if (v_isZero_2430_ == 1)
{
lean_dec(v_x_2427_);
return v_x_2428_;
}
else
{
lean_object* v_one_2431_; lean_object* v_n_2432_; lean_object* v_decl_2433_; 
v_one_2431_ = lean_unsigned_to_nat(1u);
v_n_2432_ = lean_nat_sub(v_x_2427_, v_one_2431_);
lean_dec(v_x_2427_);
v_decl_2433_ = lean_array_fget_borrowed(v_decls_2425_, v_n_2432_);
if (lean_obj_tag(v_decl_2433_) == 0)
{
lean_object* v_userName_2434_; lean_object* v_type_2435_; uint8_t v_bi_2436_; lean_object* v_ty_2437_; lean_object* v___x_2438_; 
v_userName_2434_ = lean_ctor_get(v_decl_2433_, 2);
v_type_2435_ = lean_ctor_get(v_decl_2433_, 3);
v_bi_2436_ = lean_ctor_get_uint8(v_decl_2433_, sizeof(void*)*4);
v_ty_2437_ = lean_expr_abstract_range(v_type_2435_, v_n_2432_, v_xs_2426_);
lean_inc(v_userName_2434_);
v___x_2438_ = l_Lean_mkLambda(v_userName_2434_, v_bi_2436_, v_ty_2437_, v_x_2428_);
v_x_2427_ = v_n_2432_;
v_x_2428_ = v___x_2438_;
goto _start;
}
else
{
lean_object* v_userName_2440_; lean_object* v_type_2441_; lean_object* v_value_2442_; uint8_t v_nondep_2443_; uint8_t v___x_2444_; 
v_userName_2440_ = lean_ctor_get(v_decl_2433_, 2);
v_type_2441_ = lean_ctor_get(v_decl_2433_, 3);
v_value_2442_ = lean_ctor_get(v_decl_2433_, 4);
v_nondep_2443_ = lean_ctor_get_uint8(v_decl_2433_, sizeof(void*)*5);
v___x_2444_ = lean_expr_has_loose_bvar(v_x_2428_, v_zero_2429_);
if (v___x_2444_ == 0)
{
lean_object* v___x_2445_; 
v___x_2445_ = lean_expr_lower_loose_bvars(v_x_2428_, v_one_2431_, v_one_2431_);
lean_dec_ref(v_x_2428_);
v_x_2427_ = v_n_2432_;
v_x_2428_ = v___x_2445_;
goto _start;
}
else
{
lean_object* v_ty_2447_; lean_object* v_val_2448_; lean_object* v___x_2449_; 
v_ty_2447_ = lean_expr_abstract_range(v_type_2441_, v_n_2432_, v_xs_2426_);
v_val_2448_ = lean_expr_abstract_range(v_value_2442_, v_n_2432_, v_xs_2426_);
lean_inc(v_userName_2440_);
v___x_2449_ = l_Lean_Expr_letE___override(v_userName_2440_, v_ty_2447_, v_val_2448_, v_x_2428_, v_nondep_2443_);
v_x_2427_ = v_n_2432_;
v_x_2428_ = v___x_2449_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1___boxed(lean_object* v_decls_2451_, lean_object* v_xs_2452_, lean_object* v_x_2453_, lean_object* v_x_2454_){
_start:
{
lean_object* v_res_2455_; 
v_res_2455_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(v_decls_2451_, v_xs_2452_, v_x_2453_, v_x_2454_);
lean_dec_ref(v_xs_2452_);
lean_dec_ref(v_decls_2451_);
return v_res_2455_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1(lean_object* v_decls_2456_, lean_object* v_xs_2457_, lean_object* v_x_2458_, lean_object* v_x_2459_){
_start:
{
lean_object* v_zero_2460_; uint8_t v_isZero_2461_; 
v_zero_2460_ = lean_unsigned_to_nat(0u);
v_isZero_2461_ = lean_nat_dec_eq(v_x_2458_, v_zero_2460_);
if (v_isZero_2461_ == 1)
{
return v_x_2459_;
}
else
{
lean_object* v_one_2462_; lean_object* v_n_2463_; lean_object* v_decl_2464_; 
v_one_2462_ = lean_unsigned_to_nat(1u);
v_n_2463_ = lean_nat_sub(v_x_2458_, v_one_2462_);
v_decl_2464_ = lean_array_fget_borrowed(v_decls_2456_, v_n_2463_);
if (lean_obj_tag(v_decl_2464_) == 0)
{
lean_object* v_userName_2465_; lean_object* v_type_2466_; uint8_t v_bi_2467_; lean_object* v_ty_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; 
v_userName_2465_ = lean_ctor_get(v_decl_2464_, 2);
v_type_2466_ = lean_ctor_get(v_decl_2464_, 3);
v_bi_2467_ = lean_ctor_get_uint8(v_decl_2464_, sizeof(void*)*4);
v_ty_2468_ = lean_expr_abstract_range(v_type_2466_, v_n_2463_, v_xs_2457_);
lean_inc(v_userName_2465_);
v___x_2469_ = l_Lean_mkLambda(v_userName_2465_, v_bi_2467_, v_ty_2468_, v_x_2459_);
v___x_2470_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(v_decls_2456_, v_xs_2457_, v_n_2463_, v___x_2469_);
return v___x_2470_;
}
else
{
lean_object* v_userName_2471_; lean_object* v_type_2472_; lean_object* v_value_2473_; uint8_t v_nondep_2474_; uint8_t v___x_2475_; 
v_userName_2471_ = lean_ctor_get(v_decl_2464_, 2);
v_type_2472_ = lean_ctor_get(v_decl_2464_, 3);
v_value_2473_ = lean_ctor_get(v_decl_2464_, 4);
v_nondep_2474_ = lean_ctor_get_uint8(v_decl_2464_, sizeof(void*)*5);
v___x_2475_ = lean_expr_has_loose_bvar(v_x_2459_, v_zero_2460_);
if (v___x_2475_ == 0)
{
lean_object* v___x_2476_; lean_object* v___x_2477_; 
v___x_2476_ = lean_expr_lower_loose_bvars(v_x_2459_, v_one_2462_, v_one_2462_);
lean_dec_ref(v_x_2459_);
v___x_2477_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(v_decls_2456_, v_xs_2457_, v_n_2463_, v___x_2476_);
return v___x_2477_;
}
else
{
lean_object* v_ty_2478_; lean_object* v_val_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; 
v_ty_2478_ = lean_expr_abstract_range(v_type_2472_, v_n_2463_, v_xs_2457_);
v_val_2479_ = lean_expr_abstract_range(v_value_2473_, v_n_2463_, v_xs_2457_);
lean_inc(v_userName_2471_);
v___x_2480_ = l_Lean_Expr_letE___override(v_userName_2471_, v_ty_2478_, v_val_2479_, v_x_2459_, v_nondep_2474_);
v___x_2481_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1_spec__1(v_decls_2456_, v_xs_2457_, v_n_2463_, v___x_2480_);
return v___x_2481_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1___boxed(lean_object* v_decls_2482_, lean_object* v_xs_2483_, lean_object* v_x_2484_, lean_object* v_x_2485_){
_start:
{
lean_object* v_res_2486_; 
v_res_2486_ = l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1(v_decls_2482_, v_xs_2483_, v_x_2484_, v_x_2485_);
lean_dec(v_x_2484_);
lean_dec_ref(v_xs_2483_);
lean_dec_ref(v_decls_2482_);
return v_res_2486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkLambda(lean_object* v_decls_2487_, lean_object* v_b_2488_){
_start:
{
size_t v_sz_2489_; size_t v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v_xs_2493_; lean_object* v_b_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; 
v_sz_2489_ = lean_array_size(v_decls_2487_);
v___x_2490_ = ((size_t)0ULL);
v___x_2491_ = l_unsafeCast___redArg(v_decls_2487_);
v___x_2492_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0(v_sz_2489_, v___x_2490_, v___x_2491_);
v_xs_2493_ = l_unsafeCast___redArg(v___x_2492_);
lean_dec_ref(v___x_2492_);
v_b_2494_ = lean_expr_abstract(v_b_2488_, v_xs_2493_);
v___x_2495_ = lean_array_get_size(v_decls_2487_);
v___x_2496_ = l_Nat_foldRev___at___00Lean_Meta_Closure_mkLambda_spec__1(v_decls_2487_, v_xs_2493_, v___x_2495_, v_b_2494_);
lean_dec(v_xs_2493_);
return v___x_2496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkLambda___boxed(lean_object* v_decls_2497_, lean_object* v_b_2498_){
_start:
{
lean_object* v_res_2499_; 
v_res_2499_ = l_Lean_Meta_Closure_mkLambda(v_decls_2497_, v_b_2498_);
lean_dec_ref(v_b_2498_);
lean_dec_ref(v_decls_2497_);
return v_res_2499_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(lean_object* v_decls_2500_, lean_object* v_xs_2501_, lean_object* v_x_2502_, lean_object* v_x_2503_){
_start:
{
lean_object* v_zero_2504_; uint8_t v_isZero_2505_; 
v_zero_2504_ = lean_unsigned_to_nat(0u);
v_isZero_2505_ = lean_nat_dec_eq(v_x_2502_, v_zero_2504_);
if (v_isZero_2505_ == 1)
{
lean_dec(v_x_2502_);
return v_x_2503_;
}
else
{
lean_object* v_one_2506_; lean_object* v_n_2507_; lean_object* v_decl_2508_; 
v_one_2506_ = lean_unsigned_to_nat(1u);
v_n_2507_ = lean_nat_sub(v_x_2502_, v_one_2506_);
lean_dec(v_x_2502_);
v_decl_2508_ = lean_array_fget_borrowed(v_decls_2500_, v_n_2507_);
if (lean_obj_tag(v_decl_2508_) == 0)
{
lean_object* v_userName_2509_; lean_object* v_type_2510_; uint8_t v_bi_2511_; lean_object* v_ty_2512_; lean_object* v___x_2513_; 
v_userName_2509_ = lean_ctor_get(v_decl_2508_, 2);
v_type_2510_ = lean_ctor_get(v_decl_2508_, 3);
v_bi_2511_ = lean_ctor_get_uint8(v_decl_2508_, sizeof(void*)*4);
v_ty_2512_ = lean_expr_abstract_range(v_type_2510_, v_n_2507_, v_xs_2501_);
lean_inc(v_userName_2509_);
v___x_2513_ = l_Lean_mkForall(v_userName_2509_, v_bi_2511_, v_ty_2512_, v_x_2503_);
v_x_2502_ = v_n_2507_;
v_x_2503_ = v___x_2513_;
goto _start;
}
else
{
lean_object* v_userName_2515_; lean_object* v_type_2516_; lean_object* v_value_2517_; uint8_t v_nondep_2518_; uint8_t v___x_2519_; 
v_userName_2515_ = lean_ctor_get(v_decl_2508_, 2);
v_type_2516_ = lean_ctor_get(v_decl_2508_, 3);
v_value_2517_ = lean_ctor_get(v_decl_2508_, 4);
v_nondep_2518_ = lean_ctor_get_uint8(v_decl_2508_, sizeof(void*)*5);
v___x_2519_ = lean_expr_has_loose_bvar(v_x_2503_, v_zero_2504_);
if (v___x_2519_ == 0)
{
lean_object* v___x_2520_; 
v___x_2520_ = lean_expr_lower_loose_bvars(v_x_2503_, v_one_2506_, v_one_2506_);
lean_dec_ref(v_x_2503_);
v_x_2502_ = v_n_2507_;
v_x_2503_ = v___x_2520_;
goto _start;
}
else
{
lean_object* v_ty_2522_; lean_object* v_val_2523_; lean_object* v___x_2524_; 
v_ty_2522_ = lean_expr_abstract_range(v_type_2516_, v_n_2507_, v_xs_2501_);
v_val_2523_ = lean_expr_abstract_range(v_value_2517_, v_n_2507_, v_xs_2501_);
lean_inc(v_userName_2515_);
v___x_2524_ = l_Lean_Expr_letE___override(v_userName_2515_, v_ty_2522_, v_val_2523_, v_x_2503_, v_nondep_2518_);
v_x_2502_ = v_n_2507_;
v_x_2503_ = v___x_2524_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0___boxed(lean_object* v_decls_2526_, lean_object* v_xs_2527_, lean_object* v_x_2528_, lean_object* v_x_2529_){
_start:
{
lean_object* v_res_2530_; 
v_res_2530_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(v_decls_2526_, v_xs_2527_, v_x_2528_, v_x_2529_);
lean_dec_ref(v_xs_2527_);
lean_dec_ref(v_decls_2526_);
return v_res_2530_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0(lean_object* v_decls_2531_, lean_object* v_xs_2532_, lean_object* v_x_2533_, lean_object* v_x_2534_){
_start:
{
lean_object* v_zero_2535_; uint8_t v_isZero_2536_; 
v_zero_2535_ = lean_unsigned_to_nat(0u);
v_isZero_2536_ = lean_nat_dec_eq(v_x_2533_, v_zero_2535_);
if (v_isZero_2536_ == 1)
{
return v_x_2534_;
}
else
{
lean_object* v_one_2537_; lean_object* v_n_2538_; lean_object* v_decl_2539_; 
v_one_2537_ = lean_unsigned_to_nat(1u);
v_n_2538_ = lean_nat_sub(v_x_2533_, v_one_2537_);
v_decl_2539_ = lean_array_fget_borrowed(v_decls_2531_, v_n_2538_);
if (lean_obj_tag(v_decl_2539_) == 0)
{
lean_object* v_userName_2540_; lean_object* v_type_2541_; uint8_t v_bi_2542_; lean_object* v_ty_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; 
v_userName_2540_ = lean_ctor_get(v_decl_2539_, 2);
v_type_2541_ = lean_ctor_get(v_decl_2539_, 3);
v_bi_2542_ = lean_ctor_get_uint8(v_decl_2539_, sizeof(void*)*4);
v_ty_2543_ = lean_expr_abstract_range(v_type_2541_, v_n_2538_, v_xs_2532_);
lean_inc(v_userName_2540_);
v___x_2544_ = l_Lean_mkForall(v_userName_2540_, v_bi_2542_, v_ty_2543_, v_x_2534_);
v___x_2545_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(v_decls_2531_, v_xs_2532_, v_n_2538_, v___x_2544_);
return v___x_2545_;
}
else
{
lean_object* v_userName_2546_; lean_object* v_type_2547_; lean_object* v_value_2548_; uint8_t v_nondep_2549_; uint8_t v___x_2550_; 
v_userName_2546_ = lean_ctor_get(v_decl_2539_, 2);
v_type_2547_ = lean_ctor_get(v_decl_2539_, 3);
v_value_2548_ = lean_ctor_get(v_decl_2539_, 4);
v_nondep_2549_ = lean_ctor_get_uint8(v_decl_2539_, sizeof(void*)*5);
v___x_2550_ = lean_expr_has_loose_bvar(v_x_2534_, v_zero_2535_);
if (v___x_2550_ == 0)
{
lean_object* v___x_2551_; lean_object* v___x_2552_; 
v___x_2551_ = lean_expr_lower_loose_bvars(v_x_2534_, v_one_2537_, v_one_2537_);
lean_dec_ref(v_x_2534_);
v___x_2552_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(v_decls_2531_, v_xs_2532_, v_n_2538_, v___x_2551_);
return v___x_2552_;
}
else
{
lean_object* v_ty_2553_; lean_object* v_val_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; 
v_ty_2553_ = lean_expr_abstract_range(v_type_2547_, v_n_2538_, v_xs_2532_);
v_val_2554_ = lean_expr_abstract_range(v_value_2548_, v_n_2538_, v_xs_2532_);
lean_inc(v_userName_2546_);
v___x_2555_ = l_Lean_Expr_letE___override(v_userName_2546_, v_ty_2553_, v_val_2554_, v_x_2534_, v_nondep_2549_);
v___x_2556_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0_spec__0(v_decls_2531_, v_xs_2532_, v_n_2538_, v___x_2555_);
return v___x_2556_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0___boxed(lean_object* v_decls_2557_, lean_object* v_xs_2558_, lean_object* v_x_2559_, lean_object* v_x_2560_){
_start:
{
lean_object* v_res_2561_; 
v_res_2561_ = l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0(v_decls_2557_, v_xs_2558_, v_x_2559_, v_x_2560_);
lean_dec(v_x_2559_);
lean_dec_ref(v_xs_2558_);
lean_dec_ref(v_decls_2557_);
return v_res_2561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkForall(lean_object* v_decls_2562_, lean_object* v_b_2563_){
_start:
{
size_t v_sz_2564_; size_t v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v_xs_2568_; lean_object* v_b_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; 
v_sz_2564_ = lean_array_size(v_decls_2562_);
v___x_2565_ = ((size_t)0ULL);
v___x_2566_ = l_unsafeCast___redArg(v_decls_2562_);
v___x_2567_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Closure_mkLambda_spec__0(v_sz_2564_, v___x_2565_, v___x_2566_);
v_xs_2568_ = l_unsafeCast___redArg(v___x_2567_);
lean_dec_ref(v___x_2567_);
v_b_2569_ = lean_expr_abstract(v_b_2563_, v_xs_2568_);
v___x_2570_ = lean_array_get_size(v_decls_2562_);
v___x_2571_ = l_Nat_foldRev___at___00Lean_Meta_Closure_mkForall_spec__0(v_decls_2562_, v_xs_2568_, v___x_2570_, v_b_2569_);
lean_dec(v_xs_2568_);
return v___x_2571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkForall___boxed(lean_object* v_decls_2572_, lean_object* v_b_2573_){
_start:
{
lean_object* v_res_2574_; 
v_res_2574_ = l_Lean_Meta_Closure_mkForall(v_decls_2572_, v_b_2573_);
lean_dec_ref(v_b_2573_);
lean_dec_ref(v_decls_2572_);
return v_res_2574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0(lean_object* v_a_2575_, lean_object* v_cache_2576_, lean_object* v_a_x3f_2577_){
_start:
{
lean_object* v___x_2579_; lean_object* v_mctx_2580_; lean_object* v_zetaDeltaFVarIds_2581_; lean_object* v_postponed_2582_; lean_object* v_diag_2583_; lean_object* v___x_2585_; uint8_t v_isShared_2586_; uint8_t v_isSharedCheck_2593_; 
v___x_2579_ = lean_st_ref_take(v_a_2575_);
v_mctx_2580_ = lean_ctor_get(v___x_2579_, 0);
v_zetaDeltaFVarIds_2581_ = lean_ctor_get(v___x_2579_, 2);
v_postponed_2582_ = lean_ctor_get(v___x_2579_, 3);
v_diag_2583_ = lean_ctor_get(v___x_2579_, 4);
v_isSharedCheck_2593_ = !lean_is_exclusive(v___x_2579_);
if (v_isSharedCheck_2593_ == 0)
{
lean_object* v_unused_2594_; 
v_unused_2594_ = lean_ctor_get(v___x_2579_, 1);
lean_dec(v_unused_2594_);
v___x_2585_ = v___x_2579_;
v_isShared_2586_ = v_isSharedCheck_2593_;
goto v_resetjp_2584_;
}
else
{
lean_inc(v_diag_2583_);
lean_inc(v_postponed_2582_);
lean_inc(v_zetaDeltaFVarIds_2581_);
lean_inc(v_mctx_2580_);
lean_dec(v___x_2579_);
v___x_2585_ = lean_box(0);
v_isShared_2586_ = v_isSharedCheck_2593_;
goto v_resetjp_2584_;
}
v_resetjp_2584_:
{
lean_object* v___x_2587_; lean_object* v___x_2589_; 
v___x_2587_ = lean_box(0);
if (v_isShared_2586_ == 0)
{
lean_ctor_set(v___x_2585_, 1, v_cache_2576_);
v___x_2589_ = v___x_2585_;
goto v_reusejp_2588_;
}
else
{
lean_object* v_reuseFailAlloc_2592_; 
v_reuseFailAlloc_2592_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2592_, 0, v_mctx_2580_);
lean_ctor_set(v_reuseFailAlloc_2592_, 1, v_cache_2576_);
lean_ctor_set(v_reuseFailAlloc_2592_, 2, v_zetaDeltaFVarIds_2581_);
lean_ctor_set(v_reuseFailAlloc_2592_, 3, v_postponed_2582_);
lean_ctor_set(v_reuseFailAlloc_2592_, 4, v_diag_2583_);
v___x_2589_ = v_reuseFailAlloc_2592_;
goto v_reusejp_2588_;
}
v_reusejp_2588_:
{
lean_object* v___x_2590_; lean_object* v___x_2591_; 
v___x_2590_ = lean_st_ref_put(v_a_2575_, v___x_2589_);
v___x_2591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2591_, 0, v___x_2587_);
return v___x_2591_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0___boxed(lean_object* v_a_2595_, lean_object* v_cache_2596_, lean_object* v_a_x3f_2597_, lean_object* v___y_2598_){
_start:
{
lean_object* v_res_2599_; 
v_res_2599_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0(v_a_2595_, v_cache_2596_, v_a_x3f_2597_);
lean_dec(v_a_x3f_2597_);
lean_dec(v_a_2595_);
return v_res_2599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1(lean_object* v_a_2600_, lean_object* v_zetaDeltaFVarIds_2601_, lean_object* v_a_x3f_2602_){
_start:
{
lean_object* v___x_2604_; lean_object* v_mctx_2605_; lean_object* v_cache_2606_; lean_object* v_postponed_2607_; lean_object* v_diag_2608_; lean_object* v___x_2610_; uint8_t v_isShared_2611_; uint8_t v_isSharedCheck_2618_; 
v___x_2604_ = lean_st_ref_take(v_a_2600_);
v_mctx_2605_ = lean_ctor_get(v___x_2604_, 0);
v_cache_2606_ = lean_ctor_get(v___x_2604_, 1);
v_postponed_2607_ = lean_ctor_get(v___x_2604_, 3);
v_diag_2608_ = lean_ctor_get(v___x_2604_, 4);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2604_);
if (v_isSharedCheck_2618_ == 0)
{
lean_object* v_unused_2619_; 
v_unused_2619_ = lean_ctor_get(v___x_2604_, 2);
lean_dec(v_unused_2619_);
v___x_2610_ = v___x_2604_;
v_isShared_2611_ = v_isSharedCheck_2618_;
goto v_resetjp_2609_;
}
else
{
lean_inc(v_diag_2608_);
lean_inc(v_postponed_2607_);
lean_inc(v_cache_2606_);
lean_inc(v_mctx_2605_);
lean_dec(v___x_2604_);
v___x_2610_ = lean_box(0);
v_isShared_2611_ = v_isSharedCheck_2618_;
goto v_resetjp_2609_;
}
v_resetjp_2609_:
{
lean_object* v___x_2612_; lean_object* v___x_2614_; 
v___x_2612_ = lean_box(0);
if (v_isShared_2611_ == 0)
{
lean_ctor_set(v___x_2610_, 2, v_zetaDeltaFVarIds_2601_);
v___x_2614_ = v___x_2610_;
goto v_reusejp_2613_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_mctx_2605_);
lean_ctor_set(v_reuseFailAlloc_2617_, 1, v_cache_2606_);
lean_ctor_set(v_reuseFailAlloc_2617_, 2, v_zetaDeltaFVarIds_2601_);
lean_ctor_set(v_reuseFailAlloc_2617_, 3, v_postponed_2607_);
lean_ctor_set(v_reuseFailAlloc_2617_, 4, v_diag_2608_);
v___x_2614_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2613_;
}
v_reusejp_2613_:
{
lean_object* v___x_2615_; lean_object* v___x_2616_; 
v___x_2615_ = lean_st_ref_put(v_a_2600_, v___x_2614_);
v___x_2616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2616_, 0, v___x_2612_);
return v___x_2616_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1___boxed(lean_object* v_a_2620_, lean_object* v_zetaDeltaFVarIds_2621_, lean_object* v_a_x3f_2622_, lean_object* v___y_2623_){
_start:
{
lean_object* v_res_2624_; 
v_res_2624_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1(v_a_2620_, v_zetaDeltaFVarIds_2621_, v_a_x3f_2622_);
lean_dec(v_a_x3f_2622_);
lean_dec(v_a_2620_);
return v_res_2624_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0(void){
_start:
{
lean_object* v___x_2625_; 
v___x_2625_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2625_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1(void){
_start:
{
lean_object* v___x_2626_; lean_object* v___x_2627_; 
v___x_2626_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0, &l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0_once, _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0);
v___x_2627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2627_, 0, v___x_2626_);
return v___x_2627_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2(void){
_start:
{
lean_object* v___x_2628_; lean_object* v___x_2629_; 
v___x_2628_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1, &l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1_once, _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__1);
v___x_2629_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2629_, 0, v___x_2628_);
lean_ctor_set(v___x_2629_, 1, v___x_2628_);
lean_ctor_set(v___x_2629_, 2, v___x_2628_);
lean_ctor_set(v___x_2629_, 3, v___x_2628_);
lean_ctor_set(v___x_2629_, 4, v___x_2628_);
lean_ctor_set(v___x_2629_, 5, v___x_2628_);
return v___x_2629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux(lean_object* v_type_2630_, lean_object* v_value_2631_, uint8_t v_a_2632_, lean_object* v_a_2633_, lean_object* v_a_2634_, lean_object* v_a_2635_, lean_object* v_a_2636_, lean_object* v_a_2637_){
_start:
{
lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v_cache_2641_; lean_object* v_a_2643_; lean_object* v___x_2654_; lean_object* v_mctx_2655_; lean_object* v_zetaDeltaFVarIds_2656_; lean_object* v_postponed_2657_; lean_object* v_diag_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2724_; 
v___x_2639_ = lean_box(1);
v___x_2640_ = lean_st_ref_get(v_a_2635_);
v_cache_2641_ = lean_ctor_get(v___x_2640_, 1);
lean_inc_ref(v_cache_2641_);
lean_dec(v___x_2640_);
v___x_2654_ = lean_st_ref_take(v_a_2635_);
v_mctx_2655_ = lean_ctor_get(v___x_2654_, 0);
v_zetaDeltaFVarIds_2656_ = lean_ctor_get(v___x_2654_, 2);
v_postponed_2657_ = lean_ctor_get(v___x_2654_, 3);
v_diag_2658_ = lean_ctor_get(v___x_2654_, 4);
v_isSharedCheck_2724_ = !lean_is_exclusive(v___x_2654_);
if (v_isSharedCheck_2724_ == 0)
{
lean_object* v_unused_2725_; 
v_unused_2725_ = lean_ctor_get(v___x_2654_, 1);
lean_dec(v_unused_2725_);
v___x_2660_ = v___x_2654_;
v_isShared_2661_ = v_isSharedCheck_2724_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_diag_2658_);
lean_inc(v_postponed_2657_);
lean_inc(v_zetaDeltaFVarIds_2656_);
lean_inc(v_mctx_2655_);
lean_dec(v___x_2654_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2724_;
goto v_resetjp_2659_;
}
v___jp_2642_:
{
lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2647_; uint8_t v_isShared_2648_; uint8_t v_isSharedCheck_2652_; 
v___x_2644_ = lean_box(0);
v___x_2645_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0(v_a_2635_, v_cache_2641_, v___x_2644_);
v_isSharedCheck_2652_ = !lean_is_exclusive(v___x_2645_);
if (v_isSharedCheck_2652_ == 0)
{
lean_object* v_unused_2653_; 
v_unused_2653_ = lean_ctor_get(v___x_2645_, 0);
lean_dec(v_unused_2653_);
v___x_2647_ = v___x_2645_;
v_isShared_2648_ = v_isSharedCheck_2652_;
goto v_resetjp_2646_;
}
else
{
lean_dec(v___x_2645_);
v___x_2647_ = lean_box(0);
v_isShared_2648_ = v_isSharedCheck_2652_;
goto v_resetjp_2646_;
}
v_resetjp_2646_:
{
lean_object* v___x_2650_; 
if (v_isShared_2648_ == 0)
{
lean_ctor_set_tag(v___x_2647_, 1);
lean_ctor_set(v___x_2647_, 0, v_a_2643_);
v___x_2650_ = v___x_2647_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2651_; 
v_reuseFailAlloc_2651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2651_, 0, v_a_2643_);
v___x_2650_ = v_reuseFailAlloc_2651_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
return v___x_2650_;
}
}
}
v_resetjp_2659_:
{
lean_object* v___x_2662_; lean_object* v___x_2664_; 
v___x_2662_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2, &l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2_once, _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__2);
if (v_isShared_2661_ == 0)
{
lean_ctor_set(v___x_2660_, 1, v___x_2662_);
v___x_2664_ = v___x_2660_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v_mctx_2655_);
lean_ctor_set(v_reuseFailAlloc_2723_, 1, v___x_2662_);
lean_ctor_set(v_reuseFailAlloc_2723_, 2, v_zetaDeltaFVarIds_2656_);
lean_ctor_set(v_reuseFailAlloc_2723_, 3, v_postponed_2657_);
lean_ctor_set(v_reuseFailAlloc_2723_, 4, v_diag_2658_);
v___x_2664_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
lean_object* v___x_2665_; lean_object* v_keyedConfig_2666_; lean_object* v_zetaDeltaSet_2667_; lean_object* v_lctx_2668_; lean_object* v_localInstances_2669_; lean_object* v_defEqCtx_x3f_2670_; lean_object* v_synthPendingDepth_2671_; lean_object* v_customCanUnfoldPredicate_x3f_2672_; uint8_t v_univApprox_2673_; uint8_t v_inTypeClassResolution_2674_; uint8_t v_cacheInferType_2675_; uint8_t v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v_mctx_2679_; lean_object* v_cache_2680_; lean_object* v_zetaDeltaFVarIds_2681_; lean_object* v_postponed_2682_; lean_object* v_diag_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2722_; 
v___x_2665_ = lean_st_ref_put(v_a_2635_, v___x_2664_);
v_keyedConfig_2666_ = lean_ctor_get(v_a_2634_, 0);
v_zetaDeltaSet_2667_ = lean_ctor_get(v_a_2634_, 1);
v_lctx_2668_ = lean_ctor_get(v_a_2634_, 2);
v_localInstances_2669_ = lean_ctor_get(v_a_2634_, 3);
v_defEqCtx_x3f_2670_ = lean_ctor_get(v_a_2634_, 4);
v_synthPendingDepth_2671_ = lean_ctor_get(v_a_2634_, 5);
v_customCanUnfoldPredicate_x3f_2672_ = lean_ctor_get(v_a_2634_, 6);
v_univApprox_2673_ = lean_ctor_get_uint8(v_a_2634_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2674_ = lean_ctor_get_uint8(v_a_2634_, sizeof(void*)*7 + 2);
v_cacheInferType_2675_ = lean_ctor_get_uint8(v_a_2634_, sizeof(void*)*7 + 3);
v___x_2676_ = 1;
lean_inc(v_customCanUnfoldPredicate_x3f_2672_);
lean_inc(v_synthPendingDepth_2671_);
lean_inc(v_defEqCtx_x3f_2670_);
lean_inc_ref(v_localInstances_2669_);
lean_inc_ref(v_lctx_2668_);
lean_inc(v_zetaDeltaSet_2667_);
lean_inc_ref(v_keyedConfig_2666_);
v___x_2677_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2677_, 0, v_keyedConfig_2666_);
lean_ctor_set(v___x_2677_, 1, v_zetaDeltaSet_2667_);
lean_ctor_set(v___x_2677_, 2, v_lctx_2668_);
lean_ctor_set(v___x_2677_, 3, v_localInstances_2669_);
lean_ctor_set(v___x_2677_, 4, v_defEqCtx_x3f_2670_);
lean_ctor_set(v___x_2677_, 5, v_synthPendingDepth_2671_);
lean_ctor_set(v___x_2677_, 6, v_customCanUnfoldPredicate_x3f_2672_);
lean_ctor_set_uint8(v___x_2677_, sizeof(void*)*7, v___x_2676_);
lean_ctor_set_uint8(v___x_2677_, sizeof(void*)*7 + 1, v_univApprox_2673_);
lean_ctor_set_uint8(v___x_2677_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2674_);
lean_ctor_set_uint8(v___x_2677_, sizeof(void*)*7 + 3, v_cacheInferType_2675_);
v___x_2678_ = lean_st_ref_take(v_a_2635_);
v_mctx_2679_ = lean_ctor_get(v___x_2678_, 0);
v_cache_2680_ = lean_ctor_get(v___x_2678_, 1);
v_zetaDeltaFVarIds_2681_ = lean_ctor_get(v___x_2678_, 2);
v_postponed_2682_ = lean_ctor_get(v___x_2678_, 3);
v_diag_2683_ = lean_ctor_get(v___x_2678_, 4);
v_isSharedCheck_2722_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2722_ == 0)
{
v___x_2685_ = v___x_2678_;
v_isShared_2686_ = v_isSharedCheck_2722_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_diag_2683_);
lean_inc(v_postponed_2682_);
lean_inc(v_zetaDeltaFVarIds_2681_);
lean_inc(v_cache_2680_);
lean_inc(v_mctx_2679_);
lean_dec(v___x_2678_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2722_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
lean_object* v_a_2688_; lean_object* v___x_2692_; 
if (v_isShared_2686_ == 0)
{
lean_ctor_set(v___x_2685_, 2, v___x_2639_);
v___x_2692_ = v___x_2685_;
goto v_reusejp_2691_;
}
else
{
lean_object* v_reuseFailAlloc_2721_; 
v_reuseFailAlloc_2721_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2721_, 0, v_mctx_2679_);
lean_ctor_set(v_reuseFailAlloc_2721_, 1, v_cache_2680_);
lean_ctor_set(v_reuseFailAlloc_2721_, 2, v___x_2639_);
lean_ctor_set(v_reuseFailAlloc_2721_, 3, v_postponed_2682_);
lean_ctor_set(v_reuseFailAlloc_2721_, 4, v_diag_2683_);
v___x_2692_ = v_reuseFailAlloc_2721_;
goto v_reusejp_2691_;
}
v___jp_2687_:
{
lean_object* v___x_2689_; lean_object* v___x_2690_; 
v___x_2689_ = lean_box(0);
v___x_2690_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1(v_a_2635_, v_zetaDeltaFVarIds_2681_, v___x_2689_);
lean_dec_ref(v___x_2690_);
v_a_2643_ = v_a_2688_;
goto v___jp_2642_;
}
v_reusejp_2691_:
{
lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___x_2693_ = lean_st_ref_put(v_a_2635_, v___x_2692_);
v___x_2694_ = l_Lean_Meta_Closure_collectExpr(v_type_2630_, v_a_2632_, v_a_2633_, v___x_2677_, v_a_2635_, v_a_2636_, v_a_2637_);
if (lean_obj_tag(v___x_2694_) == 0)
{
lean_object* v_a_2695_; lean_object* v___x_2696_; 
v_a_2695_ = lean_ctor_get(v___x_2694_, 0);
lean_inc(v_a_2695_);
lean_dec_ref_known(v___x_2694_, 1);
v___x_2696_ = l_Lean_Meta_Closure_collectExpr(v_value_2631_, v_a_2632_, v_a_2633_, v___x_2677_, v_a_2635_, v_a_2636_, v_a_2637_);
if (lean_obj_tag(v___x_2696_) == 0)
{
lean_object* v_a_2697_; lean_object* v___x_2698_; 
v_a_2697_ = lean_ctor_get(v___x_2696_, 0);
lean_inc(v_a_2697_);
lean_dec_ref_known(v___x_2696_, 1);
v___x_2698_ = l_Lean_Meta_Closure_process(v_a_2632_, v_a_2633_, v___x_2677_, v_a_2635_, v_a_2636_, v_a_2637_);
lean_dec_ref_known(v___x_2677_, 7);
if (lean_obj_tag(v___x_2698_) == 0)
{
lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2716_; 
v_isSharedCheck_2716_ = !lean_is_exclusive(v___x_2698_);
if (v_isSharedCheck_2716_ == 0)
{
lean_object* v_unused_2717_; 
v_unused_2717_ = lean_ctor_get(v___x_2698_, 0);
lean_dec(v_unused_2717_);
v___x_2700_ = v___x_2698_;
v_isShared_2701_ = v_isSharedCheck_2716_;
goto v_resetjp_2699_;
}
else
{
lean_dec(v___x_2698_);
v___x_2700_ = lean_box(0);
v_isShared_2701_ = v_isSharedCheck_2716_;
goto v_resetjp_2699_;
}
v_resetjp_2699_:
{
lean_object* v___x_2702_; lean_object* v___x_2704_; 
v___x_2702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2702_, 0, v_a_2695_);
lean_ctor_set(v___x_2702_, 1, v_a_2697_);
lean_inc_ref(v___x_2702_);
if (v_isShared_2701_ == 0)
{
lean_ctor_set_tag(v___x_2700_, 1);
lean_ctor_set(v___x_2700_, 0, v___x_2702_);
v___x_2704_ = v___x_2700_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v___x_2702_);
v___x_2704_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2708_; uint8_t v_isShared_2709_; uint8_t v_isSharedCheck_2713_; 
v___x_2705_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__1(v_a_2635_, v_zetaDeltaFVarIds_2681_, v___x_2704_);
lean_dec_ref(v___x_2705_);
v___x_2706_ = l_Lean_Meta_Closure_mkValueTypeClosureAux___lam__0(v_a_2635_, v_cache_2641_, v___x_2704_);
lean_dec_ref(v___x_2704_);
v_isSharedCheck_2713_ = !lean_is_exclusive(v___x_2706_);
if (v_isSharedCheck_2713_ == 0)
{
lean_object* v_unused_2714_; 
v_unused_2714_ = lean_ctor_get(v___x_2706_, 0);
lean_dec(v_unused_2714_);
v___x_2708_ = v___x_2706_;
v_isShared_2709_ = v_isSharedCheck_2713_;
goto v_resetjp_2707_;
}
else
{
lean_dec(v___x_2706_);
v___x_2708_ = lean_box(0);
v_isShared_2709_ = v_isSharedCheck_2713_;
goto v_resetjp_2707_;
}
v_resetjp_2707_:
{
lean_object* v___x_2711_; 
if (v_isShared_2709_ == 0)
{
lean_ctor_set(v___x_2708_, 0, v___x_2702_);
v___x_2711_ = v___x_2708_;
goto v_reusejp_2710_;
}
else
{
lean_object* v_reuseFailAlloc_2712_; 
v_reuseFailAlloc_2712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2712_, 0, v___x_2702_);
v___x_2711_ = v_reuseFailAlloc_2712_;
goto v_reusejp_2710_;
}
v_reusejp_2710_:
{
return v___x_2711_;
}
}
}
}
}
else
{
lean_object* v_a_2718_; 
lean_dec(v_a_2697_);
lean_dec(v_a_2695_);
v_a_2718_ = lean_ctor_get(v___x_2698_, 0);
lean_inc(v_a_2718_);
lean_dec_ref_known(v___x_2698_, 1);
v_a_2688_ = v_a_2718_;
goto v___jp_2687_;
}
}
else
{
lean_object* v_a_2719_; 
lean_dec(v_a_2695_);
lean_dec_ref_known(v___x_2677_, 7);
v_a_2719_ = lean_ctor_get(v___x_2696_, 0);
lean_inc(v_a_2719_);
lean_dec_ref_known(v___x_2696_, 1);
v_a_2688_ = v_a_2719_;
goto v___jp_2687_;
}
}
else
{
lean_object* v_a_2720_; 
lean_dec_ref_known(v___x_2677_, 7);
lean_dec_ref(v_value_2631_);
v_a_2720_ = lean_ctor_get(v___x_2694_, 0);
lean_inc(v_a_2720_);
lean_dec_ref_known(v___x_2694_, 1);
v_a_2688_ = v_a_2720_;
goto v___jp_2687_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___boxed(lean_object* v_type_2726_, lean_object* v_value_2727_, lean_object* v_a_2728_, lean_object* v_a_2729_, lean_object* v_a_2730_, lean_object* v_a_2731_, lean_object* v_a_2732_, lean_object* v_a_2733_, lean_object* v_a_2734_){
_start:
{
uint8_t v_a_boxed_2735_; lean_object* v_res_2736_; 
v_a_boxed_2735_ = lean_unbox(v_a_2728_);
v_res_2736_ = l_Lean_Meta_Closure_mkValueTypeClosureAux(v_type_2726_, v_value_2727_, v_a_boxed_2735_, v_a_2729_, v_a_2730_, v_a_2731_, v_a_2732_, v_a_2733_);
lean_dec(v_a_2733_);
lean_dec_ref(v_a_2732_);
lean_dec(v_a_2731_);
lean_dec_ref(v_a_2730_);
lean_dec(v_a_2729_);
return v_res_2736_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0(void){
_start:
{
lean_object* v___x_2737_; 
v___x_2737_ = l_instMonadEIO___redArg();
return v___x_2737_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4(lean_object* v_msg_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_){
_start:
{
lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v_toApplicative_2747_; lean_object* v___x_2749_; uint8_t v_isShared_2750_; uint8_t v_isSharedCheck_2788_; 
v___x_2745_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0, &l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__0);
v___x_2746_ = l_StateRefT_x27_instMonad___redArg(v___x_2745_);
v_toApplicative_2747_ = lean_ctor_get(v___x_2746_, 0);
v_isSharedCheck_2788_ = !lean_is_exclusive(v___x_2746_);
if (v_isSharedCheck_2788_ == 0)
{
lean_object* v_unused_2789_; 
v_unused_2789_ = lean_ctor_get(v___x_2746_, 1);
lean_dec(v_unused_2789_);
v___x_2749_ = v___x_2746_;
v_isShared_2750_ = v_isSharedCheck_2788_;
goto v_resetjp_2748_;
}
else
{
lean_inc(v_toApplicative_2747_);
lean_dec(v___x_2746_);
v___x_2749_ = lean_box(0);
v_isShared_2750_ = v_isSharedCheck_2788_;
goto v_resetjp_2748_;
}
v_resetjp_2748_:
{
lean_object* v_toFunctor_2751_; lean_object* v_toSeq_2752_; lean_object* v_toSeqLeft_2753_; lean_object* v_toSeqRight_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2786_; 
v_toFunctor_2751_ = lean_ctor_get(v_toApplicative_2747_, 0);
v_toSeq_2752_ = lean_ctor_get(v_toApplicative_2747_, 2);
v_toSeqLeft_2753_ = lean_ctor_get(v_toApplicative_2747_, 3);
v_toSeqRight_2754_ = lean_ctor_get(v_toApplicative_2747_, 4);
v_isSharedCheck_2786_ = !lean_is_exclusive(v_toApplicative_2747_);
if (v_isSharedCheck_2786_ == 0)
{
lean_object* v_unused_2787_; 
v_unused_2787_ = lean_ctor_get(v_toApplicative_2747_, 1);
lean_dec(v_unused_2787_);
v___x_2756_ = v_toApplicative_2747_;
v_isShared_2757_ = v_isSharedCheck_2786_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_toSeqRight_2754_);
lean_inc(v_toSeqLeft_2753_);
lean_inc(v_toSeq_2752_);
lean_inc(v_toFunctor_2751_);
lean_dec(v_toApplicative_2747_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2786_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v___f_2758_; lean_object* v___f_2759_; lean_object* v___f_2760_; lean_object* v___f_2761_; lean_object* v___x_2762_; lean_object* v___f_2763_; lean_object* v___f_2764_; lean_object* v___f_2765_; lean_object* v___x_2767_; 
v___f_2758_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__1));
v___f_2759_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___closed__2));
lean_inc_ref(v_toFunctor_2751_);
v___f_2760_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2760_, 0, v_toFunctor_2751_);
v___f_2761_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2761_, 0, v_toFunctor_2751_);
v___x_2762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2762_, 0, v___f_2760_);
lean_ctor_set(v___x_2762_, 1, v___f_2761_);
v___f_2763_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2763_, 0, v_toSeqRight_2754_);
v___f_2764_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2764_, 0, v_toSeqLeft_2753_);
v___f_2765_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2765_, 0, v_toSeq_2752_);
if (v_isShared_2757_ == 0)
{
lean_ctor_set(v___x_2756_, 4, v___f_2763_);
lean_ctor_set(v___x_2756_, 3, v___f_2764_);
lean_ctor_set(v___x_2756_, 2, v___f_2765_);
lean_ctor_set(v___x_2756_, 1, v___f_2758_);
lean_ctor_set(v___x_2756_, 0, v___x_2762_);
v___x_2767_ = v___x_2756_;
goto v_reusejp_2766_;
}
else
{
lean_object* v_reuseFailAlloc_2785_; 
v_reuseFailAlloc_2785_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2785_, 0, v___x_2762_);
lean_ctor_set(v_reuseFailAlloc_2785_, 1, v___f_2758_);
lean_ctor_set(v_reuseFailAlloc_2785_, 2, v___f_2765_);
lean_ctor_set(v_reuseFailAlloc_2785_, 3, v___f_2764_);
lean_ctor_set(v_reuseFailAlloc_2785_, 4, v___f_2763_);
v___x_2767_ = v_reuseFailAlloc_2785_;
goto v_reusejp_2766_;
}
v_reusejp_2766_:
{
lean_object* v___x_2769_; 
if (v_isShared_2750_ == 0)
{
lean_ctor_set(v___x_2749_, 1, v___f_2759_);
lean_ctor_set(v___x_2749_, 0, v___x_2767_);
v___x_2769_ = v___x_2749_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2784_; 
v_reuseFailAlloc_2784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2784_, 0, v___x_2767_);
lean_ctor_set(v_reuseFailAlloc_2784_, 1, v___f_2759_);
v___x_2769_ = v_reuseFailAlloc_2784_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
lean_object* v___f_2770_; lean_object* v___f_2771_; lean_object* v___f_2772_; lean_object* v___f_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_12454__overap_2782_; lean_object* v___x_2783_; 
lean_inc_ref_n(v___x_2769_, 6);
v___f_2770_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2770_, 0, v___x_2769_);
v___f_2771_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2771_, 0, v___x_2769_);
v___f_2772_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2772_, 0, v___x_2769_);
v___f_2773_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2773_, 0, v___x_2769_);
v___x_2774_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2774_, 0, lean_box(0));
lean_closure_set(v___x_2774_, 1, lean_box(0));
lean_closure_set(v___x_2774_, 2, v___x_2769_);
v___x_2775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2775_, 0, v___x_2774_);
lean_ctor_set(v___x_2775_, 1, v___f_2770_);
v___x_2776_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2776_, 0, lean_box(0));
lean_closure_set(v___x_2776_, 1, lean_box(0));
lean_closure_set(v___x_2776_, 2, v___x_2769_);
v___x_2777_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2777_, 0, v___x_2775_);
lean_ctor_set(v___x_2777_, 1, v___x_2776_);
lean_ctor_set(v___x_2777_, 2, v___f_2771_);
lean_ctor_set(v___x_2777_, 3, v___f_2772_);
lean_ctor_set(v___x_2777_, 4, v___f_2773_);
v___x_2778_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2778_, 0, lean_box(0));
lean_closure_set(v___x_2778_, 1, lean_box(0));
lean_closure_set(v___x_2778_, 2, v___x_2769_);
v___x_2779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2779_, 0, v___x_2777_);
lean_ctor_set(v___x_2779_, 1, v___x_2778_);
v___x_2780_ = lean_box(0);
v___x_2781_ = l_instInhabitedOfMonad___redArg(v___x_2779_, v___x_2780_);
v___x_12454__overap_2782_ = lean_panic_fn_borrowed(v___x_2781_, v_msg_2740_);
lean_dec(v___x_2781_);
lean_inc(v___y_2743_);
lean_inc_ref(v___y_2742_);
v___x_2783_ = lean_apply_4(v___x_12454__overap_2782_, v___y_2741_, v___y_2742_, v___y_2743_, lean_box(0));
return v___x_2783_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4___boxed(lean_object* v_msg_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_){
_start:
{
lean_object* v_res_2795_; 
v_res_2795_ = l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4(v_msg_2790_, v___y_2791_, v___y_2792_, v___y_2793_);
lean_dec(v___y_2793_);
lean_dec_ref(v___y_2792_);
return v_res_2795_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(lean_object* v_a_2796_, lean_object* v_x_2797_){
_start:
{
if (lean_obj_tag(v_x_2797_) == 0)
{
uint8_t v___x_2798_; 
v___x_2798_ = 0;
return v___x_2798_;
}
else
{
lean_object* v_key_2799_; lean_object* v_tail_2800_; uint8_t v___x_2801_; 
v_key_2799_ = lean_ctor_get(v_x_2797_, 0);
v_tail_2800_ = lean_ctor_get(v_x_2797_, 2);
v___x_2801_ = l_Lean_instBEqFVarId_beq(v_key_2799_, v_a_2796_);
if (v___x_2801_ == 0)
{
v_x_2797_ = v_tail_2800_;
goto _start;
}
else
{
return v___x_2801_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg___boxed(lean_object* v_a_2803_, lean_object* v_x_2804_){
_start:
{
uint8_t v_res_2805_; lean_object* v_r_2806_; 
v_res_2805_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(v_a_2803_, v_x_2804_);
lean_dec(v_x_2804_);
lean_dec(v_a_2803_);
v_r_2806_ = lean_box(v_res_2805_);
return v_r_2806_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6_spec__11___redArg(lean_object* v_x_2807_, lean_object* v_x_2808_){
_start:
{
if (lean_obj_tag(v_x_2808_) == 0)
{
return v_x_2807_;
}
else
{
lean_object* v_key_2809_; lean_object* v_value_2810_; lean_object* v_tail_2811_; lean_object* v___x_2813_; uint8_t v_isShared_2814_; uint8_t v_isSharedCheck_2834_; 
v_key_2809_ = lean_ctor_get(v_x_2808_, 0);
v_value_2810_ = lean_ctor_get(v_x_2808_, 1);
v_tail_2811_ = lean_ctor_get(v_x_2808_, 2);
v_isSharedCheck_2834_ = !lean_is_exclusive(v_x_2808_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2813_ = v_x_2808_;
v_isShared_2814_ = v_isSharedCheck_2834_;
goto v_resetjp_2812_;
}
else
{
lean_inc(v_tail_2811_);
lean_inc(v_value_2810_);
lean_inc(v_key_2809_);
lean_dec(v_x_2808_);
v___x_2813_ = lean_box(0);
v_isShared_2814_ = v_isSharedCheck_2834_;
goto v_resetjp_2812_;
}
v_resetjp_2812_:
{
lean_object* v___x_2815_; uint64_t v___x_2816_; uint64_t v___x_2817_; uint64_t v___x_2818_; uint64_t v_fold_2819_; uint64_t v___x_2820_; uint64_t v___x_2821_; uint64_t v___x_2822_; size_t v___x_2823_; size_t v___x_2824_; size_t v___x_2825_; size_t v___x_2826_; size_t v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2830_; 
v___x_2815_ = lean_array_get_size(v_x_2807_);
v___x_2816_ = l_Lean_instHashableFVarId_hash(v_key_2809_);
v___x_2817_ = 32ULL;
v___x_2818_ = lean_uint64_shift_right(v___x_2816_, v___x_2817_);
v_fold_2819_ = lean_uint64_xor(v___x_2816_, v___x_2818_);
v___x_2820_ = 16ULL;
v___x_2821_ = lean_uint64_shift_right(v_fold_2819_, v___x_2820_);
v___x_2822_ = lean_uint64_xor(v_fold_2819_, v___x_2821_);
v___x_2823_ = lean_uint64_to_usize(v___x_2822_);
v___x_2824_ = lean_usize_of_nat(v___x_2815_);
v___x_2825_ = ((size_t)1ULL);
v___x_2826_ = lean_usize_sub(v___x_2824_, v___x_2825_);
v___x_2827_ = lean_usize_land(v___x_2823_, v___x_2826_);
v___x_2828_ = lean_array_uget_borrowed(v_x_2807_, v___x_2827_);
lean_inc(v___x_2828_);
if (v_isShared_2814_ == 0)
{
lean_ctor_set(v___x_2813_, 2, v___x_2828_);
v___x_2830_ = v___x_2813_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_key_2809_);
lean_ctor_set(v_reuseFailAlloc_2833_, 1, v_value_2810_);
lean_ctor_set(v_reuseFailAlloc_2833_, 2, v___x_2828_);
v___x_2830_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
lean_object* v___x_2831_; 
v___x_2831_ = lean_array_uset(v_x_2807_, v___x_2827_, v___x_2830_);
v_x_2807_ = v___x_2831_;
v_x_2808_ = v_tail_2811_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6___redArg(lean_object* v_i_2835_, lean_object* v_source_2836_, lean_object* v_target_2837_){
_start:
{
lean_object* v___x_2838_; uint8_t v___x_2839_; 
v___x_2838_ = lean_array_get_size(v_source_2836_);
v___x_2839_ = lean_nat_dec_lt(v_i_2835_, v___x_2838_);
if (v___x_2839_ == 0)
{
lean_dec_ref(v_source_2836_);
lean_dec(v_i_2835_);
return v_target_2837_;
}
else
{
lean_object* v_es_2840_; lean_object* v___x_2841_; lean_object* v_source_2842_; lean_object* v_target_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; 
v_es_2840_ = lean_array_fget(v_source_2836_, v_i_2835_);
v___x_2841_ = lean_box(0);
v_source_2842_ = lean_array_fset(v_source_2836_, v_i_2835_, v___x_2841_);
v_target_2843_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6_spec__11___redArg(v_target_2837_, v_es_2840_);
v___x_2844_ = lean_unsigned_to_nat(1u);
v___x_2845_ = lean_nat_add(v_i_2835_, v___x_2844_);
lean_dec(v_i_2835_);
v_i_2835_ = v___x_2845_;
v_source_2836_ = v_source_2842_;
v_target_2837_ = v_target_2843_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4___redArg(lean_object* v_data_2847_){
_start:
{
lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v_nbuckets_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; 
v___x_2848_ = lean_array_get_size(v_data_2847_);
v___x_2849_ = lean_unsigned_to_nat(2u);
v_nbuckets_2850_ = lean_nat_mul(v___x_2848_, v___x_2849_);
v___x_2851_ = lean_unsigned_to_nat(0u);
v___x_2852_ = lean_box(0);
v___x_2853_ = lean_mk_array(v_nbuckets_2850_, v___x_2852_);
v___x_2854_ = lean_array_propagate_mark(v_data_2847_, v___x_2853_);
v___x_2855_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6___redArg(v___x_2851_, v_data_2847_, v___x_2854_);
return v___x_2855_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___redArg(lean_object* v_m_2856_, lean_object* v_a_2857_, lean_object* v_b_2858_){
_start:
{
lean_object* v_size_2859_; lean_object* v_buckets_2860_; lean_object* v___x_2861_; uint64_t v___x_2862_; uint64_t v___x_2863_; uint64_t v___x_2864_; uint64_t v_fold_2865_; uint64_t v___x_2866_; uint64_t v___x_2867_; uint64_t v___x_2868_; size_t v___x_2869_; size_t v___x_2870_; size_t v___x_2871_; size_t v___x_2872_; size_t v___x_2873_; lean_object* v_bkt_2874_; uint8_t v___x_2875_; 
v_size_2859_ = lean_ctor_get(v_m_2856_, 0);
v_buckets_2860_ = lean_ctor_get(v_m_2856_, 1);
v___x_2861_ = lean_array_get_size(v_buckets_2860_);
v___x_2862_ = l_Lean_instHashableFVarId_hash(v_a_2857_);
v___x_2863_ = 32ULL;
v___x_2864_ = lean_uint64_shift_right(v___x_2862_, v___x_2863_);
v_fold_2865_ = lean_uint64_xor(v___x_2862_, v___x_2864_);
v___x_2866_ = 16ULL;
v___x_2867_ = lean_uint64_shift_right(v_fold_2865_, v___x_2866_);
v___x_2868_ = lean_uint64_xor(v_fold_2865_, v___x_2867_);
v___x_2869_ = lean_uint64_to_usize(v___x_2868_);
v___x_2870_ = lean_usize_of_nat(v___x_2861_);
v___x_2871_ = ((size_t)1ULL);
v___x_2872_ = lean_usize_sub(v___x_2870_, v___x_2871_);
v___x_2873_ = lean_usize_land(v___x_2869_, v___x_2872_);
v_bkt_2874_ = lean_array_uget_borrowed(v_buckets_2860_, v___x_2873_);
v___x_2875_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(v_a_2857_, v_bkt_2874_);
if (v___x_2875_ == 0)
{
lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2896_; 
lean_inc_ref(v_buckets_2860_);
lean_inc(v_size_2859_);
v_isSharedCheck_2896_ = !lean_is_exclusive(v_m_2856_);
if (v_isSharedCheck_2896_ == 0)
{
lean_object* v_unused_2897_; lean_object* v_unused_2898_; 
v_unused_2897_ = lean_ctor_get(v_m_2856_, 1);
lean_dec(v_unused_2897_);
v_unused_2898_ = lean_ctor_get(v_m_2856_, 0);
lean_dec(v_unused_2898_);
v___x_2877_ = v_m_2856_;
v_isShared_2878_ = v_isSharedCheck_2896_;
goto v_resetjp_2876_;
}
else
{
lean_dec(v_m_2856_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2896_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v___x_2879_; lean_object* v_size_x27_2880_; lean_object* v___x_2881_; lean_object* v_buckets_x27_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; uint8_t v___x_2888_; 
v___x_2879_ = lean_unsigned_to_nat(1u);
v_size_x27_2880_ = lean_nat_add(v_size_2859_, v___x_2879_);
lean_dec(v_size_2859_);
lean_inc(v_bkt_2874_);
v___x_2881_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2881_, 0, v_a_2857_);
lean_ctor_set(v___x_2881_, 1, v_b_2858_);
lean_ctor_set(v___x_2881_, 2, v_bkt_2874_);
v_buckets_x27_2882_ = lean_array_uset(v_buckets_2860_, v___x_2873_, v___x_2881_);
v___x_2883_ = lean_unsigned_to_nat(4u);
v___x_2884_ = lean_nat_mul(v_size_x27_2880_, v___x_2883_);
v___x_2885_ = lean_unsigned_to_nat(3u);
v___x_2886_ = lean_nat_div(v___x_2884_, v___x_2885_);
lean_dec(v___x_2884_);
v___x_2887_ = lean_array_get_size(v_buckets_x27_2882_);
v___x_2888_ = lean_nat_dec_le(v___x_2886_, v___x_2887_);
lean_dec(v___x_2886_);
if (v___x_2888_ == 0)
{
lean_object* v_val_2889_; lean_object* v___x_2891_; 
v_val_2889_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4___redArg(v_buckets_x27_2882_);
if (v_isShared_2878_ == 0)
{
lean_ctor_set(v___x_2877_, 1, v_val_2889_);
lean_ctor_set(v___x_2877_, 0, v_size_x27_2880_);
v___x_2891_ = v___x_2877_;
goto v_reusejp_2890_;
}
else
{
lean_object* v_reuseFailAlloc_2892_; 
v_reuseFailAlloc_2892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2892_, 0, v_size_x27_2880_);
lean_ctor_set(v_reuseFailAlloc_2892_, 1, v_val_2889_);
v___x_2891_ = v_reuseFailAlloc_2892_;
goto v_reusejp_2890_;
}
v_reusejp_2890_:
{
return v___x_2891_;
}
}
else
{
lean_object* v___x_2894_; 
if (v_isShared_2878_ == 0)
{
lean_ctor_set(v___x_2877_, 1, v_buckets_x27_2882_);
lean_ctor_set(v___x_2877_, 0, v_size_x27_2880_);
v___x_2894_ = v___x_2877_;
goto v_reusejp_2893_;
}
else
{
lean_object* v_reuseFailAlloc_2895_; 
v_reuseFailAlloc_2895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2895_, 0, v_size_x27_2880_);
lean_ctor_set(v_reuseFailAlloc_2895_, 1, v_buckets_x27_2882_);
v___x_2894_ = v_reuseFailAlloc_2895_;
goto v_reusejp_2893_;
}
v_reusejp_2893_:
{
return v___x_2894_;
}
}
}
}
else
{
lean_dec(v_b_2858_);
lean_dec(v_a_2857_);
return v_m_2856_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg(lean_object* v_m_2899_, lean_object* v_a_2900_){
_start:
{
lean_object* v_buckets_2901_; lean_object* v___x_2902_; uint64_t v___x_2903_; uint64_t v___x_2904_; uint64_t v___x_2905_; uint64_t v_fold_2906_; uint64_t v___x_2907_; uint64_t v___x_2908_; uint64_t v___x_2909_; size_t v___x_2910_; size_t v___x_2911_; size_t v___x_2912_; size_t v___x_2913_; size_t v___x_2914_; lean_object* v___x_2915_; uint8_t v___x_2916_; 
v_buckets_2901_ = lean_ctor_get(v_m_2899_, 1);
v___x_2902_ = lean_array_get_size(v_buckets_2901_);
v___x_2903_ = l_Lean_instHashableFVarId_hash(v_a_2900_);
v___x_2904_ = 32ULL;
v___x_2905_ = lean_uint64_shift_right(v___x_2903_, v___x_2904_);
v_fold_2906_ = lean_uint64_xor(v___x_2903_, v___x_2905_);
v___x_2907_ = 16ULL;
v___x_2908_ = lean_uint64_shift_right(v_fold_2906_, v___x_2907_);
v___x_2909_ = lean_uint64_xor(v_fold_2906_, v___x_2908_);
v___x_2910_ = lean_uint64_to_usize(v___x_2909_);
v___x_2911_ = lean_usize_of_nat(v___x_2902_);
v___x_2912_ = ((size_t)1ULL);
v___x_2913_ = lean_usize_sub(v___x_2911_, v___x_2912_);
v___x_2914_ = lean_usize_land(v___x_2910_, v___x_2913_);
v___x_2915_ = lean_array_uget_borrowed(v_buckets_2901_, v___x_2914_);
v___x_2916_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(v_a_2900_, v___x_2915_);
return v___x_2916_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg___boxed(lean_object* v_m_2917_, lean_object* v_a_2918_){
_start:
{
uint8_t v_res_2919_; lean_object* v_r_2920_; 
v_res_2919_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg(v_m_2917_, v_a_2918_);
lean_dec(v_a_2918_);
lean_dec_ref(v_m_2917_);
v_r_2920_ = lean_box(v_res_2919_);
return v_r_2920_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___redArg(lean_object* v_a_2921_, lean_object* v_x_2922_){
_start:
{
if (lean_obj_tag(v_x_2922_) == 0)
{
lean_object* v___x_2923_; 
v___x_2923_ = lean_box(0);
return v___x_2923_;
}
else
{
lean_object* v_key_2924_; lean_object* v_value_2925_; lean_object* v_tail_2926_; uint8_t v___x_2927_; 
v_key_2924_ = lean_ctor_get(v_x_2922_, 0);
v_value_2925_ = lean_ctor_get(v_x_2922_, 1);
v_tail_2926_ = lean_ctor_get(v_x_2922_, 2);
v___x_2927_ = lean_expr_eqv(v_key_2924_, v_a_2921_);
if (v___x_2927_ == 0)
{
v_x_2922_ = v_tail_2926_;
goto _start;
}
else
{
lean_object* v___x_2929_; 
lean_inc(v_value_2925_);
v___x_2929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2929_, 0, v_value_2925_);
return v___x_2929_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___redArg___boxed(lean_object* v_a_2930_, lean_object* v_x_2931_){
_start:
{
lean_object* v_res_2932_; 
v_res_2932_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___redArg(v_a_2930_, v_x_2931_);
lean_dec(v_x_2931_);
lean_dec_ref(v_a_2930_);
return v_res_2932_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___redArg(lean_object* v_m_2933_, lean_object* v_a_2934_){
_start:
{
lean_object* v_buckets_2935_; lean_object* v___x_2936_; uint64_t v___x_2937_; uint64_t v___x_2938_; uint64_t v___x_2939_; uint64_t v_fold_2940_; uint64_t v___x_2941_; uint64_t v___x_2942_; uint64_t v___x_2943_; size_t v___x_2944_; size_t v___x_2945_; size_t v___x_2946_; size_t v___x_2947_; size_t v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; 
v_buckets_2935_ = lean_ctor_get(v_m_2933_, 1);
v___x_2936_ = lean_array_get_size(v_buckets_2935_);
v___x_2937_ = l_Lean_Expr_hash(v_a_2934_);
v___x_2938_ = 32ULL;
v___x_2939_ = lean_uint64_shift_right(v___x_2937_, v___x_2938_);
v_fold_2940_ = lean_uint64_xor(v___x_2937_, v___x_2939_);
v___x_2941_ = 16ULL;
v___x_2942_ = lean_uint64_shift_right(v_fold_2940_, v___x_2941_);
v___x_2943_ = lean_uint64_xor(v_fold_2940_, v___x_2942_);
v___x_2944_ = lean_uint64_to_usize(v___x_2943_);
v___x_2945_ = lean_usize_of_nat(v___x_2936_);
v___x_2946_ = ((size_t)1ULL);
v___x_2947_ = lean_usize_sub(v___x_2945_, v___x_2946_);
v___x_2948_ = lean_usize_land(v___x_2944_, v___x_2947_);
v___x_2949_ = lean_array_uget_borrowed(v_buckets_2935_, v___x_2948_);
v___x_2950_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___redArg(v_a_2934_, v___x_2949_);
return v___x_2950_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___redArg___boxed(lean_object* v_m_2951_, lean_object* v_a_2952_){
_start:
{
lean_object* v_res_2953_; 
v_res_2953_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___redArg(v_m_2951_, v_a_2952_);
lean_dec_ref(v_a_2952_);
lean_dec_ref(v_m_2951_);
return v_res_2953_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__13___redArg(lean_object* v_a_2954_, lean_object* v_b_2955_, lean_object* v_x_2956_){
_start:
{
if (lean_obj_tag(v_x_2956_) == 0)
{
lean_dec(v_b_2955_);
lean_dec_ref(v_a_2954_);
return v_x_2956_;
}
else
{
lean_object* v_key_2957_; lean_object* v_value_2958_; lean_object* v_tail_2959_; lean_object* v___x_2961_; uint8_t v_isShared_2962_; uint8_t v_isSharedCheck_2971_; 
v_key_2957_ = lean_ctor_get(v_x_2956_, 0);
v_value_2958_ = lean_ctor_get(v_x_2956_, 1);
v_tail_2959_ = lean_ctor_get(v_x_2956_, 2);
v_isSharedCheck_2971_ = !lean_is_exclusive(v_x_2956_);
if (v_isSharedCheck_2971_ == 0)
{
v___x_2961_ = v_x_2956_;
v_isShared_2962_ = v_isSharedCheck_2971_;
goto v_resetjp_2960_;
}
else
{
lean_inc(v_tail_2959_);
lean_inc(v_value_2958_);
lean_inc(v_key_2957_);
lean_dec(v_x_2956_);
v___x_2961_ = lean_box(0);
v_isShared_2962_ = v_isSharedCheck_2971_;
goto v_resetjp_2960_;
}
v_resetjp_2960_:
{
uint8_t v___x_2963_; 
v___x_2963_ = lean_expr_eqv(v_key_2957_, v_a_2954_);
if (v___x_2963_ == 0)
{
lean_object* v___x_2964_; lean_object* v___x_2966_; 
v___x_2964_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__13___redArg(v_a_2954_, v_b_2955_, v_tail_2959_);
if (v_isShared_2962_ == 0)
{
lean_ctor_set(v___x_2961_, 2, v___x_2964_);
v___x_2966_ = v___x_2961_;
goto v_reusejp_2965_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v_key_2957_);
lean_ctor_set(v_reuseFailAlloc_2967_, 1, v_value_2958_);
lean_ctor_set(v_reuseFailAlloc_2967_, 2, v___x_2964_);
v___x_2966_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2965_;
}
v_reusejp_2965_:
{
return v___x_2966_;
}
}
else
{
lean_object* v___x_2969_; 
lean_dec(v_value_2958_);
lean_dec(v_key_2957_);
if (v_isShared_2962_ == 0)
{
lean_ctor_set(v___x_2961_, 1, v_b_2955_);
lean_ctor_set(v___x_2961_, 0, v_a_2954_);
v___x_2969_ = v___x_2961_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2970_; 
v_reuseFailAlloc_2970_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2970_, 0, v_a_2954_);
lean_ctor_set(v_reuseFailAlloc_2970_, 1, v_b_2955_);
lean_ctor_set(v_reuseFailAlloc_2970_, 2, v_tail_2959_);
v___x_2969_ = v_reuseFailAlloc_2970_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
return v___x_2969_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17_spec__18___redArg(lean_object* v_x_2972_, lean_object* v_x_2973_){
_start:
{
if (lean_obj_tag(v_x_2973_) == 0)
{
return v_x_2972_;
}
else
{
lean_object* v_key_2974_; lean_object* v_value_2975_; lean_object* v_tail_2976_; lean_object* v___x_2978_; uint8_t v_isShared_2979_; uint8_t v_isSharedCheck_2999_; 
v_key_2974_ = lean_ctor_get(v_x_2973_, 0);
v_value_2975_ = lean_ctor_get(v_x_2973_, 1);
v_tail_2976_ = lean_ctor_get(v_x_2973_, 2);
v_isSharedCheck_2999_ = !lean_is_exclusive(v_x_2973_);
if (v_isSharedCheck_2999_ == 0)
{
v___x_2978_ = v_x_2973_;
v_isShared_2979_ = v_isSharedCheck_2999_;
goto v_resetjp_2977_;
}
else
{
lean_inc(v_tail_2976_);
lean_inc(v_value_2975_);
lean_inc(v_key_2974_);
lean_dec(v_x_2973_);
v___x_2978_ = lean_box(0);
v_isShared_2979_ = v_isSharedCheck_2999_;
goto v_resetjp_2977_;
}
v_resetjp_2977_:
{
lean_object* v___x_2980_; uint64_t v___x_2981_; uint64_t v___x_2982_; uint64_t v___x_2983_; uint64_t v_fold_2984_; uint64_t v___x_2985_; uint64_t v___x_2986_; uint64_t v___x_2987_; size_t v___x_2988_; size_t v___x_2989_; size_t v___x_2990_; size_t v___x_2991_; size_t v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2995_; 
v___x_2980_ = lean_array_get_size(v_x_2972_);
v___x_2981_ = l_Lean_Expr_hash(v_key_2974_);
v___x_2982_ = 32ULL;
v___x_2983_ = lean_uint64_shift_right(v___x_2981_, v___x_2982_);
v_fold_2984_ = lean_uint64_xor(v___x_2981_, v___x_2983_);
v___x_2985_ = 16ULL;
v___x_2986_ = lean_uint64_shift_right(v_fold_2984_, v___x_2985_);
v___x_2987_ = lean_uint64_xor(v_fold_2984_, v___x_2986_);
v___x_2988_ = lean_uint64_to_usize(v___x_2987_);
v___x_2989_ = lean_usize_of_nat(v___x_2980_);
v___x_2990_ = ((size_t)1ULL);
v___x_2991_ = lean_usize_sub(v___x_2989_, v___x_2990_);
v___x_2992_ = lean_usize_land(v___x_2988_, v___x_2991_);
v___x_2993_ = lean_array_uget_borrowed(v_x_2972_, v___x_2992_);
lean_inc(v___x_2993_);
if (v_isShared_2979_ == 0)
{
lean_ctor_set(v___x_2978_, 2, v___x_2993_);
v___x_2995_ = v___x_2978_;
goto v_reusejp_2994_;
}
else
{
lean_object* v_reuseFailAlloc_2998_; 
v_reuseFailAlloc_2998_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2998_, 0, v_key_2974_);
lean_ctor_set(v_reuseFailAlloc_2998_, 1, v_value_2975_);
lean_ctor_set(v_reuseFailAlloc_2998_, 2, v___x_2993_);
v___x_2995_ = v_reuseFailAlloc_2998_;
goto v_reusejp_2994_;
}
v_reusejp_2994_:
{
lean_object* v___x_2996_; 
v___x_2996_ = lean_array_uset(v_x_2972_, v___x_2992_, v___x_2995_);
v_x_2972_ = v___x_2996_;
v_x_2973_ = v_tail_2976_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17___redArg(lean_object* v_i_3000_, lean_object* v_source_3001_, lean_object* v_target_3002_){
_start:
{
lean_object* v___x_3003_; uint8_t v___x_3004_; 
v___x_3003_ = lean_array_get_size(v_source_3001_);
v___x_3004_ = lean_nat_dec_lt(v_i_3000_, v___x_3003_);
if (v___x_3004_ == 0)
{
lean_dec_ref(v_source_3001_);
lean_dec(v_i_3000_);
return v_target_3002_;
}
else
{
lean_object* v_es_3005_; lean_object* v___x_3006_; lean_object* v_source_3007_; lean_object* v_target_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; 
v_es_3005_ = lean_array_fget(v_source_3001_, v_i_3000_);
v___x_3006_ = lean_box(0);
v_source_3007_ = lean_array_fset(v_source_3001_, v_i_3000_, v___x_3006_);
v_target_3008_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17_spec__18___redArg(v_target_3002_, v_es_3005_);
v___x_3009_ = lean_unsigned_to_nat(1u);
v___x_3010_ = lean_nat_add(v_i_3000_, v___x_3009_);
lean_dec(v_i_3000_);
v_i_3000_ = v___x_3010_;
v_source_3001_ = v_source_3007_;
v_target_3002_ = v_target_3008_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12___redArg(lean_object* v_data_3012_){
_start:
{
lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v_nbuckets_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; 
v___x_3013_ = lean_array_get_size(v_data_3012_);
v___x_3014_ = lean_unsigned_to_nat(2u);
v_nbuckets_3015_ = lean_nat_mul(v___x_3013_, v___x_3014_);
v___x_3016_ = lean_unsigned_to_nat(0u);
v___x_3017_ = lean_box(0);
v___x_3018_ = lean_mk_array(v_nbuckets_3015_, v___x_3017_);
v___x_3019_ = lean_array_propagate_mark(v_data_3012_, v___x_3018_);
v___x_3020_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17___redArg(v___x_3016_, v_data_3012_, v___x_3019_);
return v___x_3020_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___redArg(lean_object* v_a_3021_, lean_object* v_x_3022_){
_start:
{
if (lean_obj_tag(v_x_3022_) == 0)
{
uint8_t v___x_3023_; 
v___x_3023_ = 0;
return v___x_3023_;
}
else
{
lean_object* v_key_3024_; lean_object* v_tail_3025_; uint8_t v___x_3026_; 
v_key_3024_ = lean_ctor_get(v_x_3022_, 0);
v_tail_3025_ = lean_ctor_get(v_x_3022_, 2);
v___x_3026_ = lean_expr_eqv(v_key_3024_, v_a_3021_);
if (v___x_3026_ == 0)
{
v_x_3022_ = v_tail_3025_;
goto _start;
}
else
{
return v___x_3026_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___redArg___boxed(lean_object* v_a_3028_, lean_object* v_x_3029_){
_start:
{
uint8_t v_res_3030_; lean_object* v_r_3031_; 
v_res_3030_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___redArg(v_a_3028_, v_x_3029_);
lean_dec(v_x_3029_);
lean_dec_ref(v_a_3028_);
v_r_3031_ = lean_box(v_res_3030_);
return v_r_3031_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7___redArg(lean_object* v_m_3032_, lean_object* v_a_3033_, lean_object* v_b_3034_){
_start:
{
lean_object* v_size_3035_; lean_object* v_buckets_3036_; lean_object* v___x_3038_; uint8_t v_isShared_3039_; uint8_t v_isSharedCheck_3079_; 
v_size_3035_ = lean_ctor_get(v_m_3032_, 0);
v_buckets_3036_ = lean_ctor_get(v_m_3032_, 1);
v_isSharedCheck_3079_ = !lean_is_exclusive(v_m_3032_);
if (v_isSharedCheck_3079_ == 0)
{
v___x_3038_ = v_m_3032_;
v_isShared_3039_ = v_isSharedCheck_3079_;
goto v_resetjp_3037_;
}
else
{
lean_inc(v_buckets_3036_);
lean_inc(v_size_3035_);
lean_dec(v_m_3032_);
v___x_3038_ = lean_box(0);
v_isShared_3039_ = v_isSharedCheck_3079_;
goto v_resetjp_3037_;
}
v_resetjp_3037_:
{
lean_object* v___x_3040_; uint64_t v___x_3041_; uint64_t v___x_3042_; uint64_t v___x_3043_; uint64_t v_fold_3044_; uint64_t v___x_3045_; uint64_t v___x_3046_; uint64_t v___x_3047_; size_t v___x_3048_; size_t v___x_3049_; size_t v___x_3050_; size_t v___x_3051_; size_t v___x_3052_; lean_object* v_bkt_3053_; uint8_t v___x_3054_; 
v___x_3040_ = lean_array_get_size(v_buckets_3036_);
v___x_3041_ = l_Lean_Expr_hash(v_a_3033_);
v___x_3042_ = 32ULL;
v___x_3043_ = lean_uint64_shift_right(v___x_3041_, v___x_3042_);
v_fold_3044_ = lean_uint64_xor(v___x_3041_, v___x_3043_);
v___x_3045_ = 16ULL;
v___x_3046_ = lean_uint64_shift_right(v_fold_3044_, v___x_3045_);
v___x_3047_ = lean_uint64_xor(v_fold_3044_, v___x_3046_);
v___x_3048_ = lean_uint64_to_usize(v___x_3047_);
v___x_3049_ = lean_usize_of_nat(v___x_3040_);
v___x_3050_ = ((size_t)1ULL);
v___x_3051_ = lean_usize_sub(v___x_3049_, v___x_3050_);
v___x_3052_ = lean_usize_land(v___x_3048_, v___x_3051_);
v_bkt_3053_ = lean_array_uget_borrowed(v_buckets_3036_, v___x_3052_);
v___x_3054_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___redArg(v_a_3033_, v_bkt_3053_);
if (v___x_3054_ == 0)
{
lean_object* v___x_3055_; lean_object* v_size_x27_3056_; lean_object* v___x_3057_; lean_object* v_buckets_x27_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; uint8_t v___x_3064_; 
v___x_3055_ = lean_unsigned_to_nat(1u);
v_size_x27_3056_ = lean_nat_add(v_size_3035_, v___x_3055_);
lean_dec(v_size_3035_);
lean_inc(v_bkt_3053_);
v___x_3057_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3057_, 0, v_a_3033_);
lean_ctor_set(v___x_3057_, 1, v_b_3034_);
lean_ctor_set(v___x_3057_, 2, v_bkt_3053_);
v_buckets_x27_3058_ = lean_array_uset(v_buckets_3036_, v___x_3052_, v___x_3057_);
v___x_3059_ = lean_unsigned_to_nat(4u);
v___x_3060_ = lean_nat_mul(v_size_x27_3056_, v___x_3059_);
v___x_3061_ = lean_unsigned_to_nat(3u);
v___x_3062_ = lean_nat_div(v___x_3060_, v___x_3061_);
lean_dec(v___x_3060_);
v___x_3063_ = lean_array_get_size(v_buckets_x27_3058_);
v___x_3064_ = lean_nat_dec_le(v___x_3062_, v___x_3063_);
lean_dec(v___x_3062_);
if (v___x_3064_ == 0)
{
lean_object* v_val_3065_; lean_object* v___x_3067_; 
v_val_3065_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12___redArg(v_buckets_x27_3058_);
if (v_isShared_3039_ == 0)
{
lean_ctor_set(v___x_3038_, 1, v_val_3065_);
lean_ctor_set(v___x_3038_, 0, v_size_x27_3056_);
v___x_3067_ = v___x_3038_;
goto v_reusejp_3066_;
}
else
{
lean_object* v_reuseFailAlloc_3068_; 
v_reuseFailAlloc_3068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3068_, 0, v_size_x27_3056_);
lean_ctor_set(v_reuseFailAlloc_3068_, 1, v_val_3065_);
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
lean_object* v___x_3070_; 
if (v_isShared_3039_ == 0)
{
lean_ctor_set(v___x_3038_, 1, v_buckets_x27_3058_);
lean_ctor_set(v___x_3038_, 0, v_size_x27_3056_);
v___x_3070_ = v___x_3038_;
goto v_reusejp_3069_;
}
else
{
lean_object* v_reuseFailAlloc_3071_; 
v_reuseFailAlloc_3071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3071_, 0, v_size_x27_3056_);
lean_ctor_set(v_reuseFailAlloc_3071_, 1, v_buckets_x27_3058_);
v___x_3070_ = v_reuseFailAlloc_3071_;
goto v_reusejp_3069_;
}
v_reusejp_3069_:
{
return v___x_3070_;
}
}
}
else
{
lean_object* v___x_3072_; lean_object* v_buckets_x27_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3077_; 
lean_inc(v_bkt_3053_);
v___x_3072_ = lean_box(0);
v_buckets_x27_3073_ = lean_array_uset(v_buckets_3036_, v___x_3052_, v___x_3072_);
v___x_3074_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__13___redArg(v_a_3033_, v_b_3034_, v_bkt_3053_);
v___x_3075_ = lean_array_uset(v_buckets_x27_3073_, v___x_3052_, v___x_3074_);
if (v_isShared_3039_ == 0)
{
lean_ctor_set(v___x_3038_, 1, v___x_3075_);
v___x_3077_ = v___x_3038_;
goto v_reusejp_3076_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v_size_3035_);
lean_ctor_set(v_reuseFailAlloc_3078_, 1, v___x_3075_);
v___x_3077_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3076_;
}
v_reusejp_3076_:
{
return v___x_3077_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(lean_object* v_g_3080_, lean_object* v_e_3081_, lean_object* v_a_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_){
_start:
{
lean_object* v_a_3088_; lean_object* v_fst_3089_; lean_object* v___y_3095_; lean_object* v___x_3098_; lean_object* v___x_3099_; 
v___x_3098_ = lean_st_ref_get(v_a_3082_);
v___x_3099_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___redArg(v___x_3098_, v_e_3081_);
lean_dec(v___x_3098_);
if (lean_obj_tag(v___x_3099_) == 0)
{
lean_object* v___x_3100_; 
lean_inc_ref(v_g_3080_);
lean_inc(v___y_3085_);
lean_inc_ref(v___y_3084_);
lean_inc_ref(v_e_3081_);
v___x_3100_ = lean_apply_5(v_g_3080_, v_e_3081_, v___y_3083_, v___y_3084_, v___y_3085_, lean_box(0));
if (lean_obj_tag(v___x_3100_) == 0)
{
lean_object* v_a_3101_; lean_object* v_fst_3102_; lean_object* v_snd_3103_; lean_object* v___x_3105_; uint8_t v_isShared_3106_; uint8_t v_isSharedCheck_3148_; 
v_a_3101_ = lean_ctor_get(v___x_3100_, 0);
lean_inc(v_a_3101_);
lean_dec_ref_known(v___x_3100_, 1);
v_fst_3102_ = lean_ctor_get(v_a_3101_, 0);
v_snd_3103_ = lean_ctor_get(v_a_3101_, 1);
v_isSharedCheck_3148_ = !lean_is_exclusive(v_a_3101_);
if (v_isSharedCheck_3148_ == 0)
{
v___x_3105_ = v_a_3101_;
v_isShared_3106_ = v_isSharedCheck_3148_;
goto v_resetjp_3104_;
}
else
{
lean_inc(v_snd_3103_);
lean_inc(v_fst_3102_);
lean_dec(v_a_3101_);
v___x_3105_ = lean_box(0);
v_isShared_3106_ = v_isSharedCheck_3148_;
goto v_resetjp_3104_;
}
v_resetjp_3104_:
{
lean_object* v_d_3108_; lean_object* v_b_3109_; lean_object* v___y_3110_; uint8_t v___x_3115_; 
v___x_3115_ = lean_unbox(v_fst_3102_);
lean_dec(v_fst_3102_);
if (v___x_3115_ == 0)
{
lean_object* v___x_3116_; lean_object* v___x_3118_; 
lean_dec_ref(v_g_3080_);
v___x_3116_ = lean_box(0);
if (v_isShared_3106_ == 0)
{
lean_ctor_set(v___x_3105_, 0, v___x_3116_);
v___x_3118_ = v___x_3105_;
goto v_reusejp_3117_;
}
else
{
lean_object* v_reuseFailAlloc_3119_; 
v_reuseFailAlloc_3119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3119_, 0, v___x_3116_);
lean_ctor_set(v_reuseFailAlloc_3119_, 1, v_snd_3103_);
v___x_3118_ = v_reuseFailAlloc_3119_;
goto v_reusejp_3117_;
}
v_reusejp_3117_:
{
v_a_3088_ = v___x_3118_;
v_fst_3089_ = v___x_3116_;
goto v___jp_3087_;
}
}
else
{
switch(lean_obj_tag(v_e_3081_))
{
case 7:
{
lean_object* v_binderType_3120_; lean_object* v_body_3121_; 
lean_del_object(v___x_3105_);
v_binderType_3120_ = lean_ctor_get(v_e_3081_, 1);
v_body_3121_ = lean_ctor_get(v_e_3081_, 2);
lean_inc_ref(v_body_3121_);
lean_inc_ref(v_binderType_3120_);
v_d_3108_ = v_binderType_3120_;
v_b_3109_ = v_body_3121_;
v___y_3110_ = v_a_3082_;
goto v___jp_3107_;
}
case 6:
{
lean_object* v_binderType_3122_; lean_object* v_body_3123_; 
lean_del_object(v___x_3105_);
v_binderType_3122_ = lean_ctor_get(v_e_3081_, 1);
v_body_3123_ = lean_ctor_get(v_e_3081_, 2);
lean_inc_ref(v_body_3123_);
lean_inc_ref(v_binderType_3122_);
v_d_3108_ = v_binderType_3122_;
v_b_3109_ = v_body_3123_;
v___y_3110_ = v_a_3082_;
goto v___jp_3107_;
}
case 8:
{
lean_object* v_type_3124_; lean_object* v_value_3125_; lean_object* v_body_3126_; lean_object* v___x_3127_; 
lean_del_object(v___x_3105_);
v_type_3124_ = lean_ctor_get(v_e_3081_, 1);
v_value_3125_ = lean_ctor_get(v_e_3081_, 2);
v_body_3126_ = lean_ctor_get(v_e_3081_, 3);
lean_inc_ref(v_type_3124_);
lean_inc_ref(v_g_3080_);
v___x_3127_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3080_, v_type_3124_, v_a_3082_, v_snd_3103_, v___y_3084_, v___y_3085_);
if (lean_obj_tag(v___x_3127_) == 0)
{
lean_object* v_a_3128_; lean_object* v_snd_3129_; lean_object* v___x_3130_; 
v_a_3128_ = lean_ctor_get(v___x_3127_, 0);
lean_inc(v_a_3128_);
lean_dec_ref_known(v___x_3127_, 1);
v_snd_3129_ = lean_ctor_get(v_a_3128_, 1);
lean_inc(v_snd_3129_);
lean_dec(v_a_3128_);
lean_inc_ref(v_value_3125_);
lean_inc_ref(v_g_3080_);
v___x_3130_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3080_, v_value_3125_, v_a_3082_, v_snd_3129_, v___y_3084_, v___y_3085_);
if (lean_obj_tag(v___x_3130_) == 0)
{
lean_object* v_a_3131_; lean_object* v_snd_3132_; lean_object* v___x_3133_; 
v_a_3131_ = lean_ctor_get(v___x_3130_, 0);
lean_inc(v_a_3131_);
lean_dec_ref_known(v___x_3130_, 1);
v_snd_3132_ = lean_ctor_get(v_a_3131_, 1);
lean_inc(v_snd_3132_);
lean_dec(v_a_3131_);
lean_inc_ref(v_body_3126_);
v___x_3133_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3080_, v_body_3126_, v_a_3082_, v_snd_3132_, v___y_3084_, v___y_3085_);
v___y_3095_ = v___x_3133_;
goto v___jp_3094_;
}
else
{
lean_dec_ref(v_g_3080_);
v___y_3095_ = v___x_3130_;
goto v___jp_3094_;
}
}
else
{
lean_dec_ref(v_g_3080_);
v___y_3095_ = v___x_3127_;
goto v___jp_3094_;
}
}
case 5:
{
lean_object* v_fn_3134_; lean_object* v_arg_3135_; lean_object* v___x_3136_; 
lean_del_object(v___x_3105_);
v_fn_3134_ = lean_ctor_get(v_e_3081_, 0);
v_arg_3135_ = lean_ctor_get(v_e_3081_, 1);
lean_inc_ref(v_fn_3134_);
lean_inc_ref(v_g_3080_);
v___x_3136_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3080_, v_fn_3134_, v_a_3082_, v_snd_3103_, v___y_3084_, v___y_3085_);
if (lean_obj_tag(v___x_3136_) == 0)
{
lean_object* v_a_3137_; lean_object* v_snd_3138_; lean_object* v___x_3139_; 
v_a_3137_ = lean_ctor_get(v___x_3136_, 0);
lean_inc(v_a_3137_);
lean_dec_ref_known(v___x_3136_, 1);
v_snd_3138_ = lean_ctor_get(v_a_3137_, 1);
lean_inc(v_snd_3138_);
lean_dec(v_a_3137_);
lean_inc_ref(v_arg_3135_);
v___x_3139_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3080_, v_arg_3135_, v_a_3082_, v_snd_3138_, v___y_3084_, v___y_3085_);
v___y_3095_ = v___x_3139_;
goto v___jp_3094_;
}
else
{
lean_dec_ref(v_g_3080_);
v___y_3095_ = v___x_3136_;
goto v___jp_3094_;
}
}
case 10:
{
lean_object* v_expr_3140_; lean_object* v___x_3141_; 
lean_del_object(v___x_3105_);
v_expr_3140_ = lean_ctor_get(v_e_3081_, 1);
lean_inc_ref(v_expr_3140_);
v___x_3141_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3080_, v_expr_3140_, v_a_3082_, v_snd_3103_, v___y_3084_, v___y_3085_);
v___y_3095_ = v___x_3141_;
goto v___jp_3094_;
}
case 11:
{
lean_object* v_struct_3142_; lean_object* v___x_3143_; 
lean_del_object(v___x_3105_);
v_struct_3142_ = lean_ctor_get(v_e_3081_, 2);
lean_inc_ref(v_struct_3142_);
v___x_3143_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3080_, v_struct_3142_, v_a_3082_, v_snd_3103_, v___y_3084_, v___y_3085_);
v___y_3095_ = v___x_3143_;
goto v___jp_3094_;
}
default: 
{
lean_object* v___x_3144_; lean_object* v___x_3146_; 
lean_dec_ref(v_g_3080_);
v___x_3144_ = lean_box(0);
if (v_isShared_3106_ == 0)
{
lean_ctor_set(v___x_3105_, 0, v___x_3144_);
v___x_3146_ = v___x_3105_;
goto v_reusejp_3145_;
}
else
{
lean_object* v_reuseFailAlloc_3147_; 
v_reuseFailAlloc_3147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3147_, 0, v___x_3144_);
lean_ctor_set(v_reuseFailAlloc_3147_, 1, v_snd_3103_);
v___x_3146_ = v_reuseFailAlloc_3147_;
goto v_reusejp_3145_;
}
v_reusejp_3145_:
{
v_a_3088_ = v___x_3146_;
v_fst_3089_ = v___x_3144_;
goto v___jp_3087_;
}
}
}
}
v___jp_3107_:
{
lean_object* v___x_3111_; 
lean_inc_ref(v_g_3080_);
v___x_3111_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3080_, v_d_3108_, v___y_3110_, v_snd_3103_, v___y_3084_, v___y_3085_);
if (lean_obj_tag(v___x_3111_) == 0)
{
lean_object* v_a_3112_; lean_object* v_snd_3113_; lean_object* v___x_3114_; 
v_a_3112_ = lean_ctor_get(v___x_3111_, 0);
lean_inc(v_a_3112_);
lean_dec_ref_known(v___x_3111_, 1);
v_snd_3113_ = lean_ctor_get(v_a_3112_, 1);
lean_inc(v_snd_3113_);
lean_dec(v_a_3112_);
v___x_3114_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3080_, v_b_3109_, v___y_3110_, v_snd_3113_, v___y_3084_, v___y_3085_);
v___y_3095_ = v___x_3114_;
goto v___jp_3094_;
}
else
{
lean_dec_ref(v_b_3109_);
lean_dec_ref(v_g_3080_);
v___y_3095_ = v___x_3111_;
goto v___jp_3094_;
}
}
}
}
else
{
lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3156_; 
lean_dec_ref(v_e_3081_);
lean_dec_ref(v_g_3080_);
v_a_3149_ = lean_ctor_get(v___x_3100_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3100_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3151_ = v___x_3100_;
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_dec(v___x_3100_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3154_; 
if (v_isShared_3152_ == 0)
{
v___x_3154_ = v___x_3151_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v_a_3149_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
}
else
{
lean_object* v_val_3157_; lean_object* v___x_3159_; uint8_t v_isShared_3160_; uint8_t v_isSharedCheck_3165_; 
lean_dec_ref(v_e_3081_);
lean_dec_ref(v_g_3080_);
v_val_3157_ = lean_ctor_get(v___x_3099_, 0);
v_isSharedCheck_3165_ = !lean_is_exclusive(v___x_3099_);
if (v_isSharedCheck_3165_ == 0)
{
v___x_3159_ = v___x_3099_;
v_isShared_3160_ = v_isSharedCheck_3165_;
goto v_resetjp_3158_;
}
else
{
lean_inc(v_val_3157_);
lean_dec(v___x_3099_);
v___x_3159_ = lean_box(0);
v_isShared_3160_ = v_isSharedCheck_3165_;
goto v_resetjp_3158_;
}
v_resetjp_3158_:
{
lean_object* v___x_3161_; lean_object* v___x_3163_; 
v___x_3161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3161_, 0, v_val_3157_);
lean_ctor_set(v___x_3161_, 1, v___y_3083_);
if (v_isShared_3160_ == 0)
{
lean_ctor_set_tag(v___x_3159_, 0);
lean_ctor_set(v___x_3159_, 0, v___x_3161_);
v___x_3163_ = v___x_3159_;
goto v_reusejp_3162_;
}
else
{
lean_object* v_reuseFailAlloc_3164_; 
v_reuseFailAlloc_3164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3164_, 0, v___x_3161_);
v___x_3163_ = v_reuseFailAlloc_3164_;
goto v_reusejp_3162_;
}
v_reusejp_3162_:
{
return v___x_3163_;
}
}
}
v___jp_3087_:
{
lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; 
v___x_3090_ = lean_st_ref_take(v_a_3082_);
v___x_3091_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7___redArg(v___x_3090_, v_e_3081_, v_fst_3089_);
v___x_3092_ = lean_st_ref_put(v_a_3082_, v___x_3091_);
v___x_3093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3093_, 0, v_a_3088_);
return v___x_3093_;
}
v___jp_3094_:
{
if (lean_obj_tag(v___y_3095_) == 0)
{
lean_object* v_a_3096_; lean_object* v_fst_3097_; 
v_a_3096_ = lean_ctor_get(v___y_3095_, 0);
lean_inc(v_a_3096_);
lean_dec_ref_known(v___y_3095_, 1);
v_fst_3097_ = lean_ctor_get(v_a_3096_, 0);
lean_inc(v_fst_3097_);
v_a_3088_ = v_a_3096_;
v_fst_3089_ = v_fst_3097_;
goto v___jp_3087_;
}
else
{
lean_dec_ref(v_e_3081_);
return v___y_3095_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3___boxed(lean_object* v_g_3166_, lean_object* v_e_3167_, lean_object* v_a_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_){
_start:
{
lean_object* v_res_3173_; 
v_res_3173_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v_g_3166_, v_e_3167_, v_a_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
lean_dec(v___y_3171_);
lean_dec_ref(v___y_3170_);
lean_dec(v_a_3168_);
return v_res_3173_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0(void){
_start:
{
lean_object* v___x_3174_; lean_object* v___x_3175_; 
v___x_3174_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0, &l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0_once, _init_l_Lean_Meta_Closure_mkValueTypeClosureAux___closed__0);
v___x_3175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3175_, 0, v___x_3174_);
return v___x_3175_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__1(void){
_start:
{
lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; 
v___x_3176_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0);
v___x_3177_ = lean_unsigned_to_nat(0u);
v___x_3178_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_3178_, 0, v___x_3177_);
lean_ctor_set(v___x_3178_, 1, v___x_3177_);
lean_ctor_set(v___x_3178_, 2, v___x_3177_);
lean_ctor_set(v___x_3178_, 3, v___x_3177_);
lean_ctor_set(v___x_3178_, 4, v___x_3176_);
lean_ctor_set(v___x_3178_, 5, v___x_3176_);
lean_ctor_set(v___x_3178_, 6, v___x_3176_);
lean_ctor_set(v___x_3178_, 7, v___x_3176_);
lean_ctor_set(v___x_3178_, 8, v___x_3176_);
lean_ctor_set(v___x_3178_, 9, v___x_3176_);
lean_ctor_set(v___x_3178_, 10, v___x_3176_);
return v___x_3178_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__2(void){
_start:
{
lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; 
v___x_3179_ = lean_unsigned_to_nat(32u);
v___x_3180_ = lean_mk_empty_array_with_capacity(v___x_3179_);
v___x_3181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3181_, 0, v___x_3180_);
return v___x_3181_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__3(void){
_start:
{
size_t v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; 
v___x_3182_ = ((size_t)5ULL);
v___x_3183_ = lean_unsigned_to_nat(0u);
v___x_3184_ = lean_unsigned_to_nat(32u);
v___x_3185_ = lean_mk_empty_array_with_capacity(v___x_3184_);
v___x_3186_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__2);
v___x_3187_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3187_, 0, v___x_3186_);
lean_ctor_set(v___x_3187_, 1, v___x_3185_);
lean_ctor_set(v___x_3187_, 2, v___x_3183_);
lean_ctor_set(v___x_3187_, 3, v___x_3183_);
lean_ctor_set_usize(v___x_3187_, 4, v___x_3182_);
return v___x_3187_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__4(void){
_start:
{
lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; 
v___x_3188_ = lean_box(1);
v___x_3189_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__3);
v___x_3190_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__0);
v___x_3191_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3191_, 0, v___x_3190_);
lean_ctor_set(v___x_3191_, 1, v___x_3189_);
lean_ctor_set(v___x_3191_, 2, v___x_3188_);
return v___x_3191_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10(lean_object* v_msgData_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_){
_start:
{
lean_object* v___x_3196_; lean_object* v_toCold_3197_; lean_object* v_env_3198_; lean_object* v_options_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; 
v___x_3196_ = lean_st_ref_get(v___y_3194_);
v_toCold_3197_ = lean_ctor_get(v___y_3193_, 0);
v_env_3198_ = lean_ctor_get(v___x_3196_, 0);
lean_inc_ref(v_env_3198_);
lean_dec(v___x_3196_);
v_options_3199_ = lean_ctor_get(v_toCold_3197_, 2);
v___x_3200_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__1);
v___x_3201_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___closed__4);
lean_inc_ref(v_options_3199_);
v___x_3202_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3202_, 0, v_env_3198_);
lean_ctor_set(v___x_3202_, 1, v___x_3200_);
lean_ctor_set(v___x_3202_, 2, v___x_3201_);
lean_ctor_set(v___x_3202_, 3, v_options_3199_);
v___x_3203_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3203_, 0, v___x_3202_);
lean_ctor_set(v___x_3203_, 1, v_msgData_3192_);
v___x_3204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3204_, 0, v___x_3203_);
return v___x_3204_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10___boxed(lean_object* v_msgData_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_){
_start:
{
lean_object* v_res_3209_; 
v_res_3209_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10(v_msgData_3205_, v___y_3206_, v___y_3207_);
lean_dec(v___y_3207_);
lean_dec_ref(v___y_3206_);
return v_res_3209_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___redArg(lean_object* v_msg_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_){
_start:
{
lean_object* v_ref_3214_; lean_object* v___x_3215_; lean_object* v_a_3216_; lean_object* v___x_3218_; uint8_t v_isShared_3219_; uint8_t v_isSharedCheck_3224_; 
v_ref_3214_ = lean_ctor_get(v___y_3211_, 2);
v___x_3215_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10(v_msg_3210_, v___y_3211_, v___y_3212_);
v_a_3216_ = lean_ctor_get(v___x_3215_, 0);
v_isSharedCheck_3224_ = !lean_is_exclusive(v___x_3215_);
if (v_isSharedCheck_3224_ == 0)
{
v___x_3218_ = v___x_3215_;
v_isShared_3219_ = v_isSharedCheck_3224_;
goto v_resetjp_3217_;
}
else
{
lean_inc(v_a_3216_);
lean_dec(v___x_3215_);
v___x_3218_ = lean_box(0);
v_isShared_3219_ = v_isSharedCheck_3224_;
goto v_resetjp_3217_;
}
v_resetjp_3217_:
{
lean_object* v___x_3220_; lean_object* v___x_3222_; 
lean_inc(v_ref_3214_);
v___x_3220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3220_, 0, v_ref_3214_);
lean_ctor_set(v___x_3220_, 1, v_a_3216_);
if (v_isShared_3219_ == 0)
{
lean_ctor_set_tag(v___x_3218_, 1);
lean_ctor_set(v___x_3218_, 0, v___x_3220_);
v___x_3222_ = v___x_3218_;
goto v_reusejp_3221_;
}
else
{
lean_object* v_reuseFailAlloc_3223_; 
v_reuseFailAlloc_3223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3223_, 0, v___x_3220_);
v___x_3222_ = v_reuseFailAlloc_3223_;
goto v_reusejp_3221_;
}
v_reusejp_3221_:
{
return v___x_3222_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___redArg___boxed(lean_object* v_msg_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_){
_start:
{
lean_object* v_res_3229_; 
v_res_3229_ = l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___redArg(v_msg_3225_, v___y_3226_, v___y_3227_);
lean_dec(v___y_3227_);
lean_dec_ref(v___y_3226_);
return v_res_3229_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0(void){
_start:
{
lean_object* v___x_3230_; double v___x_3231_; 
v___x_3230_ = lean_unsigned_to_nat(0u);
v___x_3231_ = lean_float_of_nat(v___x_3230_);
return v___x_3231_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6(lean_object* v_cls_3235_, lean_object* v_msg_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_){
_start:
{
lean_object* v_ref_3241_; lean_object* v___x_3242_; lean_object* v_a_3243_; lean_object* v___x_3245_; uint8_t v_isShared_3246_; uint8_t v_isSharedCheck_3288_; 
v_ref_3241_ = lean_ctor_get(v___y_3238_, 2);
v___x_3242_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10(v_msg_3236_, v___y_3238_, v___y_3239_);
v_a_3243_ = lean_ctor_get(v___x_3242_, 0);
v_isSharedCheck_3288_ = !lean_is_exclusive(v___x_3242_);
if (v_isSharedCheck_3288_ == 0)
{
v___x_3245_ = v___x_3242_;
v_isShared_3246_ = v_isSharedCheck_3288_;
goto v_resetjp_3244_;
}
else
{
lean_inc(v_a_3243_);
lean_dec(v___x_3242_);
v___x_3245_ = lean_box(0);
v_isShared_3246_ = v_isSharedCheck_3288_;
goto v_resetjp_3244_;
}
v_resetjp_3244_:
{
lean_object* v___x_3247_; lean_object* v_traceState_3248_; lean_object* v_env_3249_; lean_object* v_nextMacroScope_3250_; lean_object* v_ngen_3251_; lean_object* v_auxDeclNGen_3252_; lean_object* v_cache_3253_; lean_object* v_messages_3254_; lean_object* v_infoState_3255_; lean_object* v_snapshotTasks_3256_; lean_object* v___x_3258_; uint8_t v_isShared_3259_; uint8_t v_isSharedCheck_3287_; 
v___x_3247_ = lean_st_ref_take(v___y_3239_);
v_traceState_3248_ = lean_ctor_get(v___x_3247_, 4);
v_env_3249_ = lean_ctor_get(v___x_3247_, 0);
v_nextMacroScope_3250_ = lean_ctor_get(v___x_3247_, 1);
v_ngen_3251_ = lean_ctor_get(v___x_3247_, 2);
v_auxDeclNGen_3252_ = lean_ctor_get(v___x_3247_, 3);
v_cache_3253_ = lean_ctor_get(v___x_3247_, 5);
v_messages_3254_ = lean_ctor_get(v___x_3247_, 6);
v_infoState_3255_ = lean_ctor_get(v___x_3247_, 7);
v_snapshotTasks_3256_ = lean_ctor_get(v___x_3247_, 8);
v_isSharedCheck_3287_ = !lean_is_exclusive(v___x_3247_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3258_ = v___x_3247_;
v_isShared_3259_ = v_isSharedCheck_3287_;
goto v_resetjp_3257_;
}
else
{
lean_inc(v_snapshotTasks_3256_);
lean_inc(v_infoState_3255_);
lean_inc(v_messages_3254_);
lean_inc(v_cache_3253_);
lean_inc(v_traceState_3248_);
lean_inc(v_auxDeclNGen_3252_);
lean_inc(v_ngen_3251_);
lean_inc(v_nextMacroScope_3250_);
lean_inc(v_env_3249_);
lean_dec(v___x_3247_);
v___x_3258_ = lean_box(0);
v_isShared_3259_ = v_isSharedCheck_3287_;
goto v_resetjp_3257_;
}
v_resetjp_3257_:
{
uint64_t v_tid_3260_; lean_object* v_traces_3261_; lean_object* v___x_3263_; uint8_t v_isShared_3264_; uint8_t v_isSharedCheck_3286_; 
v_tid_3260_ = lean_ctor_get_uint64(v_traceState_3248_, sizeof(void*)*1);
v_traces_3261_ = lean_ctor_get(v_traceState_3248_, 0);
v_isSharedCheck_3286_ = !lean_is_exclusive(v_traceState_3248_);
if (v_isSharedCheck_3286_ == 0)
{
v___x_3263_ = v_traceState_3248_;
v_isShared_3264_ = v_isSharedCheck_3286_;
goto v_resetjp_3262_;
}
else
{
lean_inc(v_traces_3261_);
lean_dec(v_traceState_3248_);
v___x_3263_ = lean_box(0);
v_isShared_3264_ = v_isSharedCheck_3286_;
goto v_resetjp_3262_;
}
v_resetjp_3262_:
{
lean_object* v___x_3265_; lean_object* v___x_3266_; double v___x_3267_; uint8_t v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3276_; 
v___x_3265_ = lean_box(0);
v___x_3266_ = lean_box(0);
v___x_3267_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0);
v___x_3268_ = 0;
v___x_3269_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__1));
v___x_3270_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3270_, 0, v_cls_3235_);
lean_ctor_set(v___x_3270_, 1, v___x_3266_);
lean_ctor_set(v___x_3270_, 2, v___x_3269_);
lean_ctor_set_float(v___x_3270_, sizeof(void*)*3, v___x_3267_);
lean_ctor_set_float(v___x_3270_, sizeof(void*)*3 + 8, v___x_3267_);
lean_ctor_set_uint8(v___x_3270_, sizeof(void*)*3 + 16, v___x_3268_);
v___x_3271_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__2));
v___x_3272_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3272_, 0, v___x_3270_);
lean_ctor_set(v___x_3272_, 1, v_a_3243_);
lean_ctor_set(v___x_3272_, 2, v___x_3271_);
lean_inc(v_ref_3241_);
v___x_3273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3273_, 0, v_ref_3241_);
lean_ctor_set(v___x_3273_, 1, v___x_3272_);
v___x_3274_ = l_Lean_PersistentArray_push___redArg(v_traces_3261_, v___x_3273_);
if (v_isShared_3264_ == 0)
{
lean_ctor_set(v___x_3263_, 0, v___x_3274_);
v___x_3276_ = v___x_3263_;
goto v_reusejp_3275_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v___x_3274_);
lean_ctor_set_uint64(v_reuseFailAlloc_3285_, sizeof(void*)*1, v_tid_3260_);
v___x_3276_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3275_;
}
v_reusejp_3275_:
{
lean_object* v___x_3278_; 
if (v_isShared_3259_ == 0)
{
lean_ctor_set(v___x_3258_, 4, v___x_3276_);
v___x_3278_ = v___x_3258_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v_env_3249_);
lean_ctor_set(v_reuseFailAlloc_3284_, 1, v_nextMacroScope_3250_);
lean_ctor_set(v_reuseFailAlloc_3284_, 2, v_ngen_3251_);
lean_ctor_set(v_reuseFailAlloc_3284_, 3, v_auxDeclNGen_3252_);
lean_ctor_set(v_reuseFailAlloc_3284_, 4, v___x_3276_);
lean_ctor_set(v_reuseFailAlloc_3284_, 5, v_cache_3253_);
lean_ctor_set(v_reuseFailAlloc_3284_, 6, v_messages_3254_);
lean_ctor_set(v_reuseFailAlloc_3284_, 7, v_infoState_3255_);
lean_ctor_set(v_reuseFailAlloc_3284_, 8, v_snapshotTasks_3256_);
v___x_3278_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3282_; 
v___x_3279_ = lean_st_ref_put(v___y_3239_, v___x_3278_);
v___x_3280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3280_, 0, v___x_3265_);
lean_ctor_set(v___x_3280_, 1, v___y_3237_);
if (v_isShared_3246_ == 0)
{
lean_ctor_set(v___x_3245_, 0, v___x_3280_);
v___x_3282_ = v___x_3245_;
goto v_reusejp_3281_;
}
else
{
lean_object* v_reuseFailAlloc_3283_; 
v_reuseFailAlloc_3283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3283_, 0, v___x_3280_);
v___x_3282_ = v_reuseFailAlloc_3283_;
goto v_reusejp_3281_;
}
v_reusejp_3281_:
{
return v___x_3282_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___boxed(lean_object* v_cls_3289_, lean_object* v_msg_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_){
_start:
{
lean_object* v_res_3295_; 
v_res_3295_ = l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6(v_cls_3289_, v_msg_3290_, v___y_3291_, v___y_3292_, v___y_3293_);
lean_dec(v___y_3293_);
lean_dec_ref(v___y_3292_);
return v_res_3295_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg(lean_object* v_a_3296_, lean_object* v_x_3297_){
_start:
{
if (lean_obj_tag(v_x_3297_) == 0)
{
lean_object* v___x_3298_; 
v___x_3298_ = lean_box(0);
return v___x_3298_;
}
else
{
lean_object* v_key_3299_; lean_object* v_value_3300_; lean_object* v_tail_3301_; uint8_t v___x_3302_; 
v_key_3299_ = lean_ctor_get(v_x_3297_, 0);
v_value_3300_ = lean_ctor_get(v_x_3297_, 1);
v_tail_3301_ = lean_ctor_get(v_x_3297_, 2);
v___x_3302_ = l_Lean_instBEqFVarId_beq(v_key_3299_, v_a_3296_);
if (v___x_3302_ == 0)
{
v_x_3297_ = v_tail_3301_;
goto _start;
}
else
{
lean_object* v___x_3304_; 
lean_inc(v_value_3300_);
v___x_3304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3304_, 0, v_value_3300_);
return v___x_3304_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg___boxed(lean_object* v_a_3305_, lean_object* v_x_3306_){
_start:
{
lean_object* v_res_3307_; 
v_res_3307_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg(v_a_3305_, v_x_3306_);
lean_dec(v_x_3306_);
lean_dec(v_a_3305_);
return v_res_3307_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg(lean_object* v_m_3308_, lean_object* v_a_3309_){
_start:
{
lean_object* v_buckets_3310_; lean_object* v___x_3311_; uint64_t v___x_3312_; uint64_t v___x_3313_; uint64_t v___x_3314_; uint64_t v_fold_3315_; uint64_t v___x_3316_; uint64_t v___x_3317_; uint64_t v___x_3318_; size_t v___x_3319_; size_t v___x_3320_; size_t v___x_3321_; size_t v___x_3322_; size_t v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; 
v_buckets_3310_ = lean_ctor_get(v_m_3308_, 1);
v___x_3311_ = lean_array_get_size(v_buckets_3310_);
v___x_3312_ = l_Lean_instHashableFVarId_hash(v_a_3309_);
v___x_3313_ = 32ULL;
v___x_3314_ = lean_uint64_shift_right(v___x_3312_, v___x_3313_);
v_fold_3315_ = lean_uint64_xor(v___x_3312_, v___x_3314_);
v___x_3316_ = 16ULL;
v___x_3317_ = lean_uint64_shift_right(v_fold_3315_, v___x_3316_);
v___x_3318_ = lean_uint64_xor(v_fold_3315_, v___x_3317_);
v___x_3319_ = lean_uint64_to_usize(v___x_3318_);
v___x_3320_ = lean_usize_of_nat(v___x_3311_);
v___x_3321_ = ((size_t)1ULL);
v___x_3322_ = lean_usize_sub(v___x_3320_, v___x_3321_);
v___x_3323_ = lean_usize_land(v___x_3319_, v___x_3322_);
v___x_3324_ = lean_array_uget_borrowed(v_buckets_3310_, v___x_3323_);
v___x_3325_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg(v_a_3309_, v___x_3324_);
return v___x_3325_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg___boxed(lean_object* v_m_3326_, lean_object* v_a_3327_){
_start:
{
lean_object* v_res_3328_; 
v_res_3328_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg(v_m_3326_, v_a_3327_);
lean_dec(v_a_3327_);
lean_dec_ref(v_m_3326_);
return v_res_3328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0___boxed(lean_object* v___x_3329_, lean_object* v_m_3330_, lean_object* v_e_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_){
_start:
{
uint8_t v___x_17671__boxed_3336_; lean_object* v_res_3337_; 
v___x_17671__boxed_3336_ = lean_unbox(v___x_3329_);
v_res_3337_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0(v___x_17671__boxed_3336_, v_m_3330_, v_e_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
lean_dec(v___y_3334_);
lean_dec_ref(v___y_3333_);
lean_dec_ref(v_e_3331_);
return v_res_3337_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0(void){
_start:
{
lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; 
v___x_3338_ = lean_box(0);
v___x_3339_ = lean_unsigned_to_nat(16u);
v___x_3340_ = lean_mk_array(v___x_3339_, v___x_3338_);
return v___x_3340_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1(void){
_start:
{
lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; 
v___x_3341_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__0);
v___x_3342_ = lean_unsigned_to_nat(0u);
v___x_3343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3343_, 0, v___x_3342_);
lean_ctor_set(v___x_3343_, 1, v___x_3341_);
return v___x_3343_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5(void){
_start:
{
lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; 
v___x_3347_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__4));
v___x_3348_ = lean_unsigned_to_nat(4u);
v___x_3349_ = lean_unsigned_to_nat(384u);
v___x_3350_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__3));
v___x_3351_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2));
v___x_3352_ = l_mkPanicMessageWithDecl(v___x_3351_, v___x_3350_, v___x_3349_, v___x_3348_, v___x_3347_);
return v___x_3352_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7(void){
_start:
{
lean_object* v___x_3354_; lean_object* v___x_3355_; 
v___x_3354_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__6));
v___x_3355_ = l_Lean_stringToMessageData(v___x_3354_);
return v___x_3355_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13(void){
_start:
{
lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; 
v___x_3364_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10));
v___x_3365_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__12));
v___x_3366_ = l_Lean_Name_append(v___x_3365_, v___x_3364_);
return v___x_3366_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15(void){
_start:
{
lean_object* v___x_3368_; lean_object* v___x_3369_; 
v___x_3368_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__14));
v___x_3369_ = l_Lean_stringToMessageData(v___x_3368_);
return v___x_3369_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17(void){
_start:
{
lean_object* v___x_3371_; lean_object* v___x_3372_; 
v___x_3371_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__16));
v___x_3372_ = l_Lean_stringToMessageData(v___x_3371_);
return v___x_3372_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit(lean_object* v_m_3373_, lean_object* v_fvarId_3374_, lean_object* v_a_3375_, lean_object* v_a_3376_, lean_object* v_a_3377_){
_start:
{
lean_object* v___x_3379_; 
v___x_3379_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg(v_m_3373_, v_fvarId_3374_);
if (lean_obj_tag(v___x_3379_) == 1)
{
lean_object* v_val_3380_; lean_object* v___x_3382_; uint8_t v_isShared_3383_; uint8_t v_isSharedCheck_3494_; 
v_val_3380_ = lean_ctor_get(v___x_3379_, 0);
v_isSharedCheck_3494_ = !lean_is_exclusive(v___x_3379_);
if (v_isSharedCheck_3494_ == 0)
{
v___x_3382_ = v___x_3379_;
v_isShared_3383_ = v_isSharedCheck_3494_;
goto v_resetjp_3381_;
}
else
{
lean_inc(v_val_3380_);
lean_dec(v___x_3379_);
v___x_3382_ = lean_box(0);
v_isShared_3383_ = v_isSharedCheck_3494_;
goto v_resetjp_3381_;
}
v_resetjp_3381_:
{
lean_object* v_fst_3384_; lean_object* v_snd_3385_; lean_object* v___x_3387_; uint8_t v_isShared_3388_; uint8_t v_isSharedCheck_3493_; 
v_fst_3384_ = lean_ctor_get(v_val_3380_, 0);
v_snd_3385_ = lean_ctor_get(v_val_3380_, 1);
v_isSharedCheck_3493_ = !lean_is_exclusive(v_val_3380_);
if (v_isSharedCheck_3493_ == 0)
{
v___x_3387_ = v_val_3380_;
v_isShared_3388_ = v_isSharedCheck_3493_;
goto v_resetjp_3386_;
}
else
{
lean_inc(v_snd_3385_);
lean_inc(v_fst_3384_);
lean_dec(v_val_3380_);
v___x_3387_ = lean_box(0);
v_isShared_3388_ = v_isSharedCheck_3493_;
goto v_resetjp_3386_;
}
v_resetjp_3386_:
{
lean_object* v_tempMark_3389_; lean_object* v_doneMark_3390_; lean_object* v___x_3391_; uint8_t v___x_3392_; 
v_tempMark_3389_ = lean_ctor_get(v_a_3375_, 0);
v_doneMark_3390_ = lean_ctor_get(v_a_3375_, 1);
v___x_3391_ = l_Lean_LocalDecl_fvarId(v_fst_3384_);
v___x_3392_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg(v_doneMark_3390_, v___x_3391_);
if (v___x_3392_ == 0)
{
lean_object* v_toCold_3393_; lean_object* v_options_3394_; lean_object* v_inheritedTraceOptions_3395_; uint8_t v_hasTrace_3396_; uint8_t v___x_3397_; lean_object* v___x_3398_; lean_object* v___f_3399_; lean_object* v___y_3401_; lean_object* v___y_3402_; lean_object* v___y_3403_; lean_object* v___y_3454_; lean_object* v___y_3455_; lean_object* v___y_3456_; lean_object* v___y_3461_; lean_object* v_tempMark_3462_; lean_object* v___y_3463_; lean_object* v___y_3464_; 
lean_del_object(v___x_3387_);
lean_del_object(v___x_3382_);
v_toCold_3393_ = lean_ctor_get(v_a_3376_, 0);
v_options_3394_ = lean_ctor_get(v_toCold_3393_, 2);
v_inheritedTraceOptions_3395_ = lean_ctor_get(v_toCold_3393_, 11);
v_hasTrace_3396_ = lean_ctor_get_uint8(v_options_3394_, sizeof(void*)*1);
v___x_3397_ = 1;
v___x_3398_ = lean_box(v___x_3397_);
v___f_3399_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3399_, 0, v___x_3398_);
lean_closure_set(v___f_3399_, 1, v_m_3373_);
if (v_hasTrace_3396_ == 0)
{
lean_inc_ref(v_tempMark_3389_);
v___y_3461_ = v_a_3375_;
v_tempMark_3462_ = v_tempMark_3389_;
v___y_3463_ = v_a_3376_;
v___y_3464_ = v_a_3377_;
goto v___jp_3460_;
}
else
{
lean_object* v___x_3470_; lean_object* v___x_3471_; uint8_t v___x_3472_; 
v___x_3470_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10));
v___x_3471_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13);
v___x_3472_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3395_, v_options_3394_, v___x_3471_);
if (v___x_3472_ == 0)
{
lean_inc_ref(v_tempMark_3389_);
v___y_3461_ = v_a_3375_;
v_tempMark_3462_ = v_tempMark_3389_;
v___y_3463_ = v_a_3376_;
v___y_3464_ = v_a_3377_;
goto v___jp_3460_;
}
else
{
lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; 
v___x_3473_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__15);
lean_inc(v___x_3391_);
v___x_3474_ = l_Lean_mkFVar(v___x_3391_);
v___x_3475_ = l_Lean_MessageData_ofExpr(v___x_3474_);
v___x_3476_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3476_, 0, v___x_3473_);
lean_ctor_set(v___x_3476_, 1, v___x_3475_);
v___x_3477_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__17);
v___x_3478_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3478_, 0, v___x_3476_);
lean_ctor_set(v___x_3478_, 1, v___x_3477_);
v___x_3479_ = l_Lean_LocalDecl_type(v_fst_3384_);
v___x_3480_ = l_Lean_MessageData_ofExpr(v___x_3479_);
v___x_3481_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3481_, 0, v___x_3478_);
lean_ctor_set(v___x_3481_, 1, v___x_3480_);
v___x_3482_ = l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6(v___x_3470_, v___x_3481_, v_a_3375_, v_a_3376_, v_a_3377_);
if (lean_obj_tag(v___x_3482_) == 0)
{
lean_object* v_a_3483_; lean_object* v_snd_3484_; lean_object* v_tempMark_3485_; 
v_a_3483_ = lean_ctor_get(v___x_3482_, 0);
lean_inc(v_a_3483_);
lean_dec_ref_known(v___x_3482_, 1);
v_snd_3484_ = lean_ctor_get(v_a_3483_, 1);
lean_inc(v_snd_3484_);
lean_dec(v_a_3483_);
v_tempMark_3485_ = lean_ctor_get(v_snd_3484_, 0);
lean_inc_ref(v_tempMark_3485_);
v___y_3461_ = v_snd_3484_;
v_tempMark_3462_ = v_tempMark_3485_;
v___y_3463_ = v_a_3376_;
v___y_3464_ = v_a_3377_;
goto v___jp_3460_;
}
else
{
lean_dec_ref(v___f_3399_);
lean_dec(v___x_3391_);
lean_dec(v_snd_3385_);
lean_dec(v_fst_3384_);
return v___x_3482_;
}
}
}
v___jp_3400_:
{
lean_object* v_tempMark_3404_; lean_object* v_doneMark_3405_; lean_object* v_newDecls_3406_; lean_object* v_newArgs_3407_; lean_object* v___x_3409_; uint8_t v_isShared_3410_; uint8_t v_isSharedCheck_3452_; 
v_tempMark_3404_ = lean_ctor_get(v___y_3403_, 0);
v_doneMark_3405_ = lean_ctor_get(v___y_3403_, 1);
v_newDecls_3406_ = lean_ctor_get(v___y_3403_, 2);
v_newArgs_3407_ = lean_ctor_get(v___y_3403_, 3);
v_isSharedCheck_3452_ = !lean_is_exclusive(v___y_3403_);
if (v_isSharedCheck_3452_ == 0)
{
v___x_3409_ = v___y_3403_;
v_isShared_3410_ = v_isSharedCheck_3452_;
goto v_resetjp_3408_;
}
else
{
lean_inc(v_newArgs_3407_);
lean_inc(v_newDecls_3406_);
lean_inc(v_doneMark_3405_);
lean_inc(v_tempMark_3404_);
lean_dec(v___y_3403_);
v___x_3409_ = lean_box(0);
v_isShared_3410_ = v_isSharedCheck_3452_;
goto v_resetjp_3408_;
}
v_resetjp_3408_:
{
lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3414_; 
v___x_3411_ = lean_box(0);
lean_inc(v___x_3391_);
v___x_3412_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___redArg(v_tempMark_3404_, v___x_3391_, v___x_3411_);
if (v_isShared_3410_ == 0)
{
lean_ctor_set(v___x_3409_, 0, v___x_3412_);
v___x_3414_ = v___x_3409_;
goto v_reusejp_3413_;
}
else
{
lean_object* v_reuseFailAlloc_3451_; 
v_reuseFailAlloc_3451_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3451_, 0, v___x_3412_);
lean_ctor_set(v_reuseFailAlloc_3451_, 1, v_doneMark_3405_);
lean_ctor_set(v_reuseFailAlloc_3451_, 2, v_newDecls_3406_);
lean_ctor_set(v_reuseFailAlloc_3451_, 3, v_newArgs_3407_);
v___x_3414_ = v_reuseFailAlloc_3451_;
goto v_reusejp_3413_;
}
v_reusejp_3413_:
{
lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; 
v___x_3415_ = l_Lean_LocalDecl_type(v_fst_3384_);
v___x_3416_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__1);
v___x_3417_ = lean_st_mk_ref(v___x_3416_);
v___x_3418_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3(v___f_3399_, v___x_3415_, v___x_3417_, v___x_3414_, v___y_3401_, v___y_3402_);
if (lean_obj_tag(v___x_3418_) == 0)
{
lean_object* v_a_3419_; lean_object* v___x_3421_; uint8_t v_isShared_3422_; uint8_t v_isSharedCheck_3450_; 
v_a_3419_ = lean_ctor_get(v___x_3418_, 0);
v_isSharedCheck_3450_ = !lean_is_exclusive(v___x_3418_);
if (v_isSharedCheck_3450_ == 0)
{
v___x_3421_ = v___x_3418_;
v_isShared_3422_ = v_isSharedCheck_3450_;
goto v_resetjp_3420_;
}
else
{
lean_inc(v_a_3419_);
lean_dec(v___x_3418_);
v___x_3421_ = lean_box(0);
v_isShared_3422_ = v_isSharedCheck_3450_;
goto v_resetjp_3420_;
}
v_resetjp_3420_:
{
lean_object* v_snd_3423_; lean_object* v___x_3425_; uint8_t v_isShared_3426_; uint8_t v_isSharedCheck_3448_; 
v_snd_3423_ = lean_ctor_get(v_a_3419_, 1);
v_isSharedCheck_3448_ = !lean_is_exclusive(v_a_3419_);
if (v_isSharedCheck_3448_ == 0)
{
lean_object* v_unused_3449_; 
v_unused_3449_ = lean_ctor_get(v_a_3419_, 0);
lean_dec(v_unused_3449_);
v___x_3425_ = v_a_3419_;
v_isShared_3426_ = v_isSharedCheck_3448_;
goto v_resetjp_3424_;
}
else
{
lean_inc(v_snd_3423_);
lean_dec(v_a_3419_);
v___x_3425_ = lean_box(0);
v_isShared_3426_ = v_isSharedCheck_3448_;
goto v_resetjp_3424_;
}
v_resetjp_3424_:
{
lean_object* v___x_3427_; lean_object* v_tempMark_3428_; lean_object* v_doneMark_3429_; lean_object* v_newDecls_3430_; lean_object* v_newArgs_3431_; lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3447_; 
v___x_3427_ = lean_st_ref_get(v___x_3417_);
lean_dec(v___x_3417_);
lean_dec(v___x_3427_);
v_tempMark_3428_ = lean_ctor_get(v_snd_3423_, 0);
v_doneMark_3429_ = lean_ctor_get(v_snd_3423_, 1);
v_newDecls_3430_ = lean_ctor_get(v_snd_3423_, 2);
v_newArgs_3431_ = lean_ctor_get(v_snd_3423_, 3);
v_isSharedCheck_3447_ = !lean_is_exclusive(v_snd_3423_);
if (v_isSharedCheck_3447_ == 0)
{
v___x_3433_ = v_snd_3423_;
v_isShared_3434_ = v_isSharedCheck_3447_;
goto v_resetjp_3432_;
}
else
{
lean_inc(v_newArgs_3431_);
lean_inc(v_newDecls_3430_);
lean_inc(v_doneMark_3429_);
lean_inc(v_tempMark_3428_);
lean_dec(v_snd_3423_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3447_;
goto v_resetjp_3432_;
}
v_resetjp_3432_:
{
lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3439_; 
v___x_3435_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___redArg(v_doneMark_3429_, v___x_3391_, v___x_3411_);
v___x_3436_ = lean_array_push(v_newDecls_3430_, v_fst_3384_);
v___x_3437_ = lean_array_push(v_newArgs_3431_, v_snd_3385_);
if (v_isShared_3434_ == 0)
{
lean_ctor_set(v___x_3433_, 3, v___x_3437_);
lean_ctor_set(v___x_3433_, 2, v___x_3436_);
lean_ctor_set(v___x_3433_, 1, v___x_3435_);
v___x_3439_ = v___x_3433_;
goto v_reusejp_3438_;
}
else
{
lean_object* v_reuseFailAlloc_3446_; 
v_reuseFailAlloc_3446_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3446_, 0, v_tempMark_3428_);
lean_ctor_set(v_reuseFailAlloc_3446_, 1, v___x_3435_);
lean_ctor_set(v_reuseFailAlloc_3446_, 2, v___x_3436_);
lean_ctor_set(v_reuseFailAlloc_3446_, 3, v___x_3437_);
v___x_3439_ = v_reuseFailAlloc_3446_;
goto v_reusejp_3438_;
}
v_reusejp_3438_:
{
lean_object* v___x_3441_; 
if (v_isShared_3426_ == 0)
{
lean_ctor_set(v___x_3425_, 1, v___x_3439_);
lean_ctor_set(v___x_3425_, 0, v___x_3411_);
v___x_3441_ = v___x_3425_;
goto v_reusejp_3440_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v___x_3411_);
lean_ctor_set(v_reuseFailAlloc_3445_, 1, v___x_3439_);
v___x_3441_ = v_reuseFailAlloc_3445_;
goto v_reusejp_3440_;
}
v_reusejp_3440_:
{
lean_object* v___x_3443_; 
if (v_isShared_3422_ == 0)
{
lean_ctor_set(v___x_3421_, 0, v___x_3441_);
v___x_3443_ = v___x_3421_;
goto v_reusejp_3442_;
}
else
{
lean_object* v_reuseFailAlloc_3444_; 
v_reuseFailAlloc_3444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3444_, 0, v___x_3441_);
v___x_3443_ = v_reuseFailAlloc_3444_;
goto v_reusejp_3442_;
}
v_reusejp_3442_:
{
return v___x_3443_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_3417_);
lean_dec(v___x_3391_);
lean_dec(v_snd_3385_);
lean_dec(v_fst_3384_);
return v___x_3418_;
}
}
}
}
v___jp_3453_:
{
uint8_t v___x_3457_; 
v___x_3457_ = l_Lean_LocalDecl_isLet(v_fst_3384_, v___x_3397_);
if (v___x_3457_ == 0)
{
v___y_3401_ = v___y_3455_;
v___y_3402_ = v___y_3456_;
v___y_3403_ = v___y_3454_;
goto v___jp_3400_;
}
else
{
if (v___x_3392_ == 0)
{
lean_object* v___x_3458_; lean_object* v___x_3459_; 
lean_dec_ref(v___f_3399_);
lean_dec(v___x_3391_);
lean_dec(v_snd_3385_);
lean_dec(v_fst_3384_);
v___x_3458_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__5);
v___x_3459_ = l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__4(v___x_3458_, v___y_3454_, v___y_3455_, v___y_3456_);
return v___x_3459_;
}
else
{
v___y_3401_ = v___y_3455_;
v___y_3402_ = v___y_3456_;
v___y_3403_ = v___y_3454_;
goto v___jp_3400_;
}
}
}
v___jp_3460_:
{
uint8_t v___x_3465_; 
v___x_3465_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg(v_tempMark_3462_, v___x_3391_);
lean_dec_ref(v_tempMark_3462_);
if (v___x_3465_ == 0)
{
v___y_3454_ = v___y_3461_;
v___y_3455_ = v___y_3463_;
v___y_3456_ = v___y_3464_;
goto v___jp_3453_;
}
else
{
lean_object* v___x_3466_; lean_object* v___x_3467_; 
lean_dec_ref(v___y_3461_);
v___x_3466_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__7);
v___x_3467_ = l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___redArg(v___x_3466_, v___y_3463_, v___y_3464_);
if (lean_obj_tag(v___x_3467_) == 0)
{
lean_object* v_a_3468_; lean_object* v_snd_3469_; 
v_a_3468_ = lean_ctor_get(v___x_3467_, 0);
lean_inc(v_a_3468_);
lean_dec_ref_known(v___x_3467_, 1);
v_snd_3469_ = lean_ctor_get(v_a_3468_, 1);
lean_inc(v_snd_3469_);
lean_dec(v_a_3468_);
v___y_3454_ = v_snd_3469_;
v___y_3455_ = v___y_3463_;
v___y_3456_ = v___y_3464_;
goto v___jp_3453_;
}
else
{
lean_dec_ref(v___f_3399_);
lean_dec(v___x_3391_);
lean_dec(v_snd_3385_);
lean_dec(v_fst_3384_);
return v___x_3467_;
}
}
}
}
else
{
lean_object* v___x_3486_; lean_object* v___x_3488_; 
lean_dec(v___x_3391_);
lean_dec(v_snd_3385_);
lean_dec(v_fst_3384_);
lean_dec_ref(v_m_3373_);
v___x_3486_ = lean_box(0);
if (v_isShared_3388_ == 0)
{
lean_ctor_set(v___x_3387_, 1, v_a_3375_);
lean_ctor_set(v___x_3387_, 0, v___x_3486_);
v___x_3488_ = v___x_3387_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3492_; 
v_reuseFailAlloc_3492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3492_, 0, v___x_3486_);
lean_ctor_set(v_reuseFailAlloc_3492_, 1, v_a_3375_);
v___x_3488_ = v_reuseFailAlloc_3492_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
lean_object* v___x_3490_; 
if (v_isShared_3383_ == 0)
{
lean_ctor_set_tag(v___x_3382_, 0);
lean_ctor_set(v___x_3382_, 0, v___x_3488_);
v___x_3490_ = v___x_3382_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3491_; 
v_reuseFailAlloc_3491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3491_, 0, v___x_3488_);
v___x_3490_ = v_reuseFailAlloc_3491_;
goto v_reusejp_3489_;
}
v_reusejp_3489_:
{
return v___x_3490_;
}
}
}
}
}
}
else
{
lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; 
lean_dec(v___x_3379_);
lean_dec_ref(v_m_3373_);
v___x_3495_ = lean_box(0);
v___x_3496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3496_, 0, v___x_3495_);
lean_ctor_set(v___x_3496_, 1, v_a_3375_);
v___x_3497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3497_, 0, v___x_3496_);
return v___x_3497_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___lam__0(uint8_t v___x_3498_, lean_object* v_m_3499_, lean_object* v_e_3500_, lean_object* v___y_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_){
_start:
{
lean_object* v___y_3506_; uint8_t v___x_3510_; 
v___x_3510_ = l_Lean_Expr_hasFVar(v_e_3500_);
if (v___x_3510_ == 0)
{
lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; 
lean_dec_ref(v_m_3499_);
v___x_3511_ = lean_box(v___x_3510_);
v___x_3512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3512_, 0, v___x_3511_);
lean_ctor_set(v___x_3512_, 1, v___y_3501_);
v___x_3513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3513_, 0, v___x_3512_);
return v___x_3513_;
}
else
{
uint8_t v___x_3514_; 
v___x_3514_ = l_Lean_Expr_isFVar(v_e_3500_);
if (v___x_3514_ == 0)
{
lean_dec_ref(v_m_3499_);
v___y_3506_ = v___y_3501_;
goto v___jp_3505_;
}
else
{
lean_object* v___x_3515_; lean_object* v___x_3516_; 
v___x_3515_ = l_Lean_Expr_fvarId_x21(v_e_3500_);
v___x_3516_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit(v_m_3499_, v___x_3515_, v___y_3501_, v___y_3502_, v___y_3503_);
lean_dec(v___x_3515_);
if (lean_obj_tag(v___x_3516_) == 0)
{
lean_object* v_a_3517_; lean_object* v_snd_3518_; 
v_a_3517_ = lean_ctor_get(v___x_3516_, 0);
lean_inc(v_a_3517_);
lean_dec_ref_known(v___x_3516_, 1);
v_snd_3518_ = lean_ctor_get(v_a_3517_, 1);
lean_inc(v_snd_3518_);
lean_dec(v_a_3517_);
v___y_3506_ = v_snd_3518_;
goto v___jp_3505_;
}
else
{
lean_object* v_a_3519_; lean_object* v___x_3521_; uint8_t v_isShared_3522_; uint8_t v_isSharedCheck_3526_; 
v_a_3519_ = lean_ctor_get(v___x_3516_, 0);
v_isSharedCheck_3526_ = !lean_is_exclusive(v___x_3516_);
if (v_isSharedCheck_3526_ == 0)
{
v___x_3521_ = v___x_3516_;
v_isShared_3522_ = v_isSharedCheck_3526_;
goto v_resetjp_3520_;
}
else
{
lean_inc(v_a_3519_);
lean_dec(v___x_3516_);
v___x_3521_ = lean_box(0);
v_isShared_3522_ = v_isSharedCheck_3526_;
goto v_resetjp_3520_;
}
v_resetjp_3520_:
{
lean_object* v___x_3524_; 
if (v_isShared_3522_ == 0)
{
v___x_3524_ = v___x_3521_;
goto v_reusejp_3523_;
}
else
{
lean_object* v_reuseFailAlloc_3525_; 
v_reuseFailAlloc_3525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3525_, 0, v_a_3519_);
v___x_3524_ = v_reuseFailAlloc_3525_;
goto v_reusejp_3523_;
}
v_reusejp_3523_:
{
return v___x_3524_;
}
}
}
}
}
v___jp_3505_:
{
lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; 
v___x_3507_ = lean_box(v___x_3498_);
v___x_3508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3508_, 0, v___x_3507_);
lean_ctor_set(v___x_3508_, 1, v___y_3506_);
v___x_3509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3509_, 0, v___x_3508_);
return v___x_3509_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___boxed(lean_object* v_m_3527_, lean_object* v_fvarId_3528_, lean_object* v_a_3529_, lean_object* v_a_3530_, lean_object* v_a_3531_, lean_object* v_a_3532_){
_start:
{
lean_object* v_res_3533_; 
v_res_3533_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit(v_m_3527_, v_fvarId_3528_, v_a_3529_, v_a_3530_, v_a_3531_);
lean_dec(v_a_3531_);
lean_dec_ref(v_a_3530_);
lean_dec(v_fvarId_3528_);
return v_res_3533_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0(lean_object* v_00_u03b2_3534_, lean_object* v_m_3535_, lean_object* v_a_3536_){
_start:
{
lean_object* v___x_3537_; 
v___x_3537_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___redArg(v_m_3535_, v_a_3536_);
return v___x_3537_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0___boxed(lean_object* v_00_u03b2_3538_, lean_object* v_m_3539_, lean_object* v_a_3540_){
_start:
{
lean_object* v_res_3541_; 
v_res_3541_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0(v_00_u03b2_3538_, v_m_3539_, v_a_3540_);
lean_dec(v_a_3540_);
lean_dec_ref(v_m_3539_);
return v_res_3541_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(lean_object* v_00_u03b2_3542_, lean_object* v_m_3543_, lean_object* v_a_3544_){
_start:
{
uint8_t v___x_3545_; 
v___x_3545_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___redArg(v_m_3543_, v_a_3544_);
return v___x_3545_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1___boxed(lean_object* v_00_u03b2_3546_, lean_object* v_m_3547_, lean_object* v_a_3548_){
_start:
{
uint8_t v_res_3549_; lean_object* v_r_3550_; 
v_res_3549_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1(v_00_u03b2_3546_, v_m_3547_, v_a_3548_);
lean_dec(v_a_3548_);
lean_dec_ref(v_m_3547_);
v_r_3550_ = lean_box(v_res_3549_);
return v_r_3550_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2(lean_object* v_00_u03b2_3551_, lean_object* v_m_3552_, lean_object* v_a_3553_, lean_object* v_b_3554_){
_start:
{
lean_object* v___x_3555_; 
v___x_3555_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2___redArg(v_m_3552_, v_a_3553_, v_b_3554_);
return v___x_3555_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5(lean_object* v_00_u03b1_3556_, lean_object* v_msg_3557_, lean_object* v___y_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_){
_start:
{
lean_object* v___x_3562_; 
v___x_3562_ = l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___redArg(v_msg_3557_, v___y_3559_, v___y_3560_);
return v___x_3562_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5___boxed(lean_object* v_00_u03b1_3563_, lean_object* v_msg_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_, lean_object* v___y_3568_){
_start:
{
lean_object* v_res_3569_; 
v_res_3569_ = l_Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5(v_00_u03b1_3563_, v_msg_3564_, v___y_3565_, v___y_3566_, v___y_3567_);
lean_dec(v___y_3567_);
lean_dec_ref(v___y_3566_);
lean_dec_ref(v___y_3565_);
return v_res_3569_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0(lean_object* v_00_u03b2_3570_, lean_object* v_a_3571_, lean_object* v_x_3572_){
_start:
{
lean_object* v___x_3573_; 
v___x_3573_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___redArg(v_a_3571_, v_x_3572_);
return v___x_3573_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3574_, lean_object* v_a_3575_, lean_object* v_x_3576_){
_start:
{
lean_object* v_res_3577_; 
v_res_3577_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__0_spec__0(v_00_u03b2_3574_, v_a_3575_, v_x_3576_);
lean_dec(v_x_3576_);
lean_dec(v_a_3575_);
return v_res_3577_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2(lean_object* v_00_u03b2_3578_, lean_object* v_a_3579_, lean_object* v_x_3580_){
_start:
{
uint8_t v___x_3581_; 
v___x_3581_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(v_a_3579_, v_x_3580_);
return v___x_3581_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___boxed(lean_object* v_00_u03b2_3582_, lean_object* v_a_3583_, lean_object* v_x_3584_){
_start:
{
uint8_t v_res_3585_; lean_object* v_r_3586_; 
v_res_3585_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2(v_00_u03b2_3582_, v_a_3583_, v_x_3584_);
lean_dec(v_x_3584_);
lean_dec(v_a_3583_);
v_r_3586_ = lean_box(v_res_3585_);
return v_r_3586_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4(lean_object* v_00_u03b2_3587_, lean_object* v_data_3588_){
_start:
{
lean_object* v___x_3589_; 
v___x_3589_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4___redArg(v_data_3588_);
return v___x_3589_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6(lean_object* v_00_u03b2_3590_, lean_object* v_m_3591_, lean_object* v_a_3592_){
_start:
{
lean_object* v___x_3593_; 
v___x_3593_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___redArg(v_m_3591_, v_a_3592_);
return v___x_3593_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6___boxed(lean_object* v_00_u03b2_3594_, lean_object* v_m_3595_, lean_object* v_a_3596_){
_start:
{
lean_object* v_res_3597_; 
v_res_3597_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6(v_00_u03b2_3594_, v_m_3595_, v_a_3596_);
lean_dec_ref(v_a_3596_);
lean_dec_ref(v_m_3595_);
return v_res_3597_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7(lean_object* v_00_u03b2_3598_, lean_object* v_m_3599_, lean_object* v_a_3600_, lean_object* v_b_3601_){
_start:
{
lean_object* v___x_3602_; 
v___x_3602_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7___redArg(v_m_3599_, v_a_3600_, v_b_3601_);
return v___x_3602_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_3603_, lean_object* v_i_3604_, lean_object* v_source_3605_, lean_object* v_target_3606_){
_start:
{
lean_object* v___x_3607_; 
v___x_3607_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6___redArg(v_i_3604_, v_source_3605_, v_target_3606_);
return v___x_3607_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9(lean_object* v_00_u03b2_3608_, lean_object* v_a_3609_, lean_object* v_x_3610_){
_start:
{
lean_object* v___x_3611_; 
v___x_3611_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___redArg(v_a_3609_, v_x_3610_);
return v___x_3611_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9___boxed(lean_object* v_00_u03b2_3612_, lean_object* v_a_3613_, lean_object* v_x_3614_){
_start:
{
lean_object* v_res_3615_; 
v_res_3615_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__6_spec__9(v_00_u03b2_3612_, v_a_3613_, v_x_3614_);
lean_dec(v_x_3614_);
lean_dec_ref(v_a_3613_);
return v_res_3615_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11(lean_object* v_00_u03b2_3616_, lean_object* v_a_3617_, lean_object* v_x_3618_){
_start:
{
uint8_t v___x_3619_; 
v___x_3619_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___redArg(v_a_3617_, v_x_3618_);
return v___x_3619_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11___boxed(lean_object* v_00_u03b2_3620_, lean_object* v_a_3621_, lean_object* v_x_3622_){
_start:
{
uint8_t v_res_3623_; lean_object* v_r_3624_; 
v_res_3623_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__11(v_00_u03b2_3620_, v_a_3621_, v_x_3622_);
lean_dec(v_x_3622_);
lean_dec_ref(v_a_3621_);
v_r_3624_ = lean_box(v_res_3623_);
return v_r_3624_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12(lean_object* v_00_u03b2_3625_, lean_object* v_data_3626_){
_start:
{
lean_object* v___x_3627_; 
v___x_3627_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12___redArg(v_data_3626_);
return v___x_3627_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__13(lean_object* v_00_u03b2_3628_, lean_object* v_a_3629_, lean_object* v_b_3630_, lean_object* v_x_3631_){
_start:
{
lean_object* v___x_3632_; 
v___x_3632_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__13___redArg(v_a_3629_, v_b_3630_, v_x_3631_);
return v___x_3632_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6_spec__11(lean_object* v_00_u03b2_3633_, lean_object* v_x_3634_, lean_object* v_x_3635_){
_start:
{
lean_object* v___x_3636_; 
v___x_3636_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4_spec__6_spec__11___redArg(v_x_3634_, v_x_3635_);
return v___x_3636_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17(lean_object* v_00_u03b2_3637_, lean_object* v_i_3638_, lean_object* v_source_3639_, lean_object* v_target_3640_){
_start:
{
lean_object* v___x_3641_; 
v___x_3641_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17___redArg(v_i_3638_, v_source_3639_, v_target_3640_);
return v___x_3641_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17_spec__18(lean_object* v_00_u03b2_3642_, lean_object* v_x_3643_, lean_object* v_x_3644_){
_start:
{
lean_object* v___x_3645_; 
v___x_3645_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__3_spec__7_spec__12_spec__17_spec__18___redArg(v_x_3643_, v_x_3644_);
return v___x_3645_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1(lean_object* v_msg_3647_, lean_object* v___y_3648_, lean_object* v___y_3649_){
_start:
{
lean_object* v___f_3651_; lean_object* v___x_7454__overap_3652_; lean_object* v___x_3653_; 
v___f_3651_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___closed__0));
v___x_7454__overap_3652_ = lean_panic_fn_borrowed(v___f_3651_, v_msg_3647_);
lean_inc(v___y_3649_);
lean_inc_ref(v___y_3648_);
v___x_3653_ = lean_apply_3(v___x_7454__overap_3652_, v___y_3648_, v___y_3649_, lean_box(0));
return v___x_3653_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1___boxed(lean_object* v_msg_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_){
_start:
{
lean_object* v_res_3658_; 
v_res_3658_ = l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1(v_msg_3654_, v___y_3655_, v___y_3656_);
lean_dec(v___y_3656_);
lean_dec_ref(v___y_3655_);
return v_res_3658_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0(lean_object* v_newDecls_3659_, lean_object* v_newArgs_3660_, lean_object* v_____r_3661_, lean_object* v___y_3662_, lean_object* v___y_3663_, lean_object* v___y_3664_){
_start:
{
lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; 
v___x_3666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3666_, 0, v_newDecls_3659_);
lean_ctor_set(v___x_3666_, 1, v_newArgs_3660_);
v___x_3667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3667_, 0, v___x_3666_);
lean_ctor_set(v___x_3667_, 1, v___y_3662_);
v___x_3668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3668_, 0, v___x_3667_);
return v___x_3668_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0___boxed(lean_object* v_newDecls_3669_, lean_object* v_newArgs_3670_, lean_object* v_____r_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_, lean_object* v___y_3675_){
_start:
{
lean_object* v_res_3676_; 
v_res_3676_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0(v_newDecls_3669_, v_newArgs_3670_, v_____r_3671_, v___y_3672_, v___y_3673_, v___y_3674_);
lean_dec(v___y_3674_);
lean_dec_ref(v___y_3673_);
return v_res_3676_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6(lean_object* v_cls_3677_, lean_object* v_msg_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_){
_start:
{
lean_object* v_ref_3682_; lean_object* v___x_3683_; lean_object* v_a_3684_; lean_object* v___x_3686_; uint8_t v_isShared_3687_; uint8_t v_isSharedCheck_3728_; 
v_ref_3682_ = lean_ctor_get(v___y_3679_, 2);
v___x_3683_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__5_spec__10(v_msg_3678_, v___y_3679_, v___y_3680_);
v_a_3684_ = lean_ctor_get(v___x_3683_, 0);
v_isSharedCheck_3728_ = !lean_is_exclusive(v___x_3683_);
if (v_isSharedCheck_3728_ == 0)
{
v___x_3686_ = v___x_3683_;
v_isShared_3687_ = v_isSharedCheck_3728_;
goto v_resetjp_3685_;
}
else
{
lean_inc(v_a_3684_);
lean_dec(v___x_3683_);
v___x_3686_ = lean_box(0);
v_isShared_3687_ = v_isSharedCheck_3728_;
goto v_resetjp_3685_;
}
v_resetjp_3685_:
{
lean_object* v___x_3688_; lean_object* v_traceState_3689_; lean_object* v_env_3690_; lean_object* v_nextMacroScope_3691_; lean_object* v_ngen_3692_; lean_object* v_auxDeclNGen_3693_; lean_object* v_cache_3694_; lean_object* v_messages_3695_; lean_object* v_infoState_3696_; lean_object* v_snapshotTasks_3697_; lean_object* v___x_3699_; uint8_t v_isShared_3700_; uint8_t v_isSharedCheck_3727_; 
v___x_3688_ = lean_st_ref_take(v___y_3680_);
v_traceState_3689_ = lean_ctor_get(v___x_3688_, 4);
v_env_3690_ = lean_ctor_get(v___x_3688_, 0);
v_nextMacroScope_3691_ = lean_ctor_get(v___x_3688_, 1);
v_ngen_3692_ = lean_ctor_get(v___x_3688_, 2);
v_auxDeclNGen_3693_ = lean_ctor_get(v___x_3688_, 3);
v_cache_3694_ = lean_ctor_get(v___x_3688_, 5);
v_messages_3695_ = lean_ctor_get(v___x_3688_, 6);
v_infoState_3696_ = lean_ctor_get(v___x_3688_, 7);
v_snapshotTasks_3697_ = lean_ctor_get(v___x_3688_, 8);
v_isSharedCheck_3727_ = !lean_is_exclusive(v___x_3688_);
if (v_isSharedCheck_3727_ == 0)
{
v___x_3699_ = v___x_3688_;
v_isShared_3700_ = v_isSharedCheck_3727_;
goto v_resetjp_3698_;
}
else
{
lean_inc(v_snapshotTasks_3697_);
lean_inc(v_infoState_3696_);
lean_inc(v_messages_3695_);
lean_inc(v_cache_3694_);
lean_inc(v_traceState_3689_);
lean_inc(v_auxDeclNGen_3693_);
lean_inc(v_ngen_3692_);
lean_inc(v_nextMacroScope_3691_);
lean_inc(v_env_3690_);
lean_dec(v___x_3688_);
v___x_3699_ = lean_box(0);
v_isShared_3700_ = v_isSharedCheck_3727_;
goto v_resetjp_3698_;
}
v_resetjp_3698_:
{
uint64_t v_tid_3701_; lean_object* v_traces_3702_; lean_object* v___x_3704_; uint8_t v_isShared_3705_; uint8_t v_isSharedCheck_3726_; 
v_tid_3701_ = lean_ctor_get_uint64(v_traceState_3689_, sizeof(void*)*1);
v_traces_3702_ = lean_ctor_get(v_traceState_3689_, 0);
v_isSharedCheck_3726_ = !lean_is_exclusive(v_traceState_3689_);
if (v_isSharedCheck_3726_ == 0)
{
v___x_3704_ = v_traceState_3689_;
v_isShared_3705_ = v_isSharedCheck_3726_;
goto v_resetjp_3703_;
}
else
{
lean_inc(v_traces_3702_);
lean_dec(v_traceState_3689_);
v___x_3704_ = lean_box(0);
v_isShared_3705_ = v_isSharedCheck_3726_;
goto v_resetjp_3703_;
}
v_resetjp_3703_:
{
lean_object* v___x_3706_; lean_object* v___x_3707_; double v___x_3708_; uint8_t v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3717_; 
v___x_3706_ = lean_box(0);
v___x_3707_ = lean_box(0);
v___x_3708_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__0);
v___x_3709_ = 0;
v___x_3710_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__1));
v___x_3711_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3711_, 0, v_cls_3677_);
lean_ctor_set(v___x_3711_, 1, v___x_3707_);
lean_ctor_set(v___x_3711_, 2, v___x_3710_);
lean_ctor_set_float(v___x_3711_, sizeof(void*)*3, v___x_3708_);
lean_ctor_set_float(v___x_3711_, sizeof(void*)*3 + 8, v___x_3708_);
lean_ctor_set_uint8(v___x_3711_, sizeof(void*)*3 + 16, v___x_3709_);
v___x_3712_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6___closed__2));
v___x_3713_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3713_, 0, v___x_3711_);
lean_ctor_set(v___x_3713_, 1, v_a_3684_);
lean_ctor_set(v___x_3713_, 2, v___x_3712_);
lean_inc(v_ref_3682_);
v___x_3714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3714_, 0, v_ref_3682_);
lean_ctor_set(v___x_3714_, 1, v___x_3713_);
v___x_3715_ = l_Lean_PersistentArray_push___redArg(v_traces_3702_, v___x_3714_);
if (v_isShared_3705_ == 0)
{
lean_ctor_set(v___x_3704_, 0, v___x_3715_);
v___x_3717_ = v___x_3704_;
goto v_reusejp_3716_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v___x_3715_);
lean_ctor_set_uint64(v_reuseFailAlloc_3725_, sizeof(void*)*1, v_tid_3701_);
v___x_3717_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3716_;
}
v_reusejp_3716_:
{
lean_object* v___x_3719_; 
if (v_isShared_3700_ == 0)
{
lean_ctor_set(v___x_3699_, 4, v___x_3717_);
v___x_3719_ = v___x_3699_;
goto v_reusejp_3718_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v_env_3690_);
lean_ctor_set(v_reuseFailAlloc_3724_, 1, v_nextMacroScope_3691_);
lean_ctor_set(v_reuseFailAlloc_3724_, 2, v_ngen_3692_);
lean_ctor_set(v_reuseFailAlloc_3724_, 3, v_auxDeclNGen_3693_);
lean_ctor_set(v_reuseFailAlloc_3724_, 4, v___x_3717_);
lean_ctor_set(v_reuseFailAlloc_3724_, 5, v_cache_3694_);
lean_ctor_set(v_reuseFailAlloc_3724_, 6, v_messages_3695_);
lean_ctor_set(v_reuseFailAlloc_3724_, 7, v_infoState_3696_);
lean_ctor_set(v_reuseFailAlloc_3724_, 8, v_snapshotTasks_3697_);
v___x_3719_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3718_;
}
v_reusejp_3718_:
{
lean_object* v___x_3720_; lean_object* v___x_3722_; 
v___x_3720_ = lean_st_ref_put(v___y_3680_, v___x_3719_);
if (v_isShared_3687_ == 0)
{
lean_ctor_set(v___x_3686_, 0, v___x_3706_);
v___x_3722_ = v___x_3686_;
goto v_reusejp_3721_;
}
else
{
lean_object* v_reuseFailAlloc_3723_; 
v_reuseFailAlloc_3723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3723_, 0, v___x_3706_);
v___x_3722_ = v_reuseFailAlloc_3723_;
goto v_reusejp_3721_;
}
v_reusejp_3721_:
{
return v___x_3722_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6___boxed(lean_object* v_cls_3729_, lean_object* v_msg_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_, lean_object* v___y_3733_){
_start:
{
lean_object* v_res_3734_; 
v_res_3734_ = l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6(v_cls_3729_, v_msg_3730_, v___y_3731_, v___y_3732_);
lean_dec(v___y_3732_);
lean_dec_ref(v___y_3731_);
return v_res_3734_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4(size_t v_sz_3735_, size_t v_i_3736_, lean_object* v_bs_3737_){
_start:
{
uint8_t v___x_3738_; 
v___x_3738_ = lean_usize_dec_lt(v_i_3736_, v_sz_3735_);
if (v___x_3738_ == 0)
{
lean_object* v___x_3739_; 
v___x_3739_ = l_unsafeCast___redArg(v_bs_3737_);
lean_dec_ref(v_bs_3737_);
return v___x_3739_;
}
else
{
lean_object* v_v_3740_; lean_object* v___x_3741_; lean_object* v_bs_x27_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; size_t v___x_3746_; size_t v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; 
v_v_3740_ = lean_array_uget(v_bs_3737_, v_i_3736_);
v___x_3741_ = lean_unsigned_to_nat(0u);
v_bs_x27_3742_ = lean_array_uset(v_bs_3737_, v_i_3736_, v___x_3741_);
v___x_3743_ = l_unsafeCast___redArg(v_v_3740_);
lean_dec(v_v_3740_);
v___x_3744_ = l_Lean_LocalDecl_fvarId(v___x_3743_);
lean_dec(v___x_3743_);
v___x_3745_ = l_Lean_mkFVar(v___x_3744_);
v___x_3746_ = ((size_t)1ULL);
v___x_3747_ = lean_usize_add(v_i_3736_, v___x_3746_);
v___x_3748_ = l_unsafeCast___redArg(v___x_3745_);
lean_dec_ref(v___x_3745_);
v___x_3749_ = lean_array_uset(v_bs_x27_3742_, v_i_3736_, v___x_3748_);
v_i_3736_ = v___x_3747_;
v_bs_3737_ = v___x_3749_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4___boxed(lean_object* v_sz_3751_, lean_object* v_i_3752_, lean_object* v_bs_3753_){
_start:
{
size_t v_sz_boxed_3754_; size_t v_i_boxed_3755_; lean_object* v_res_3756_; 
v_sz_boxed_3754_ = lean_unbox_usize(v_sz_3751_);
lean_dec(v_sz_3751_);
v_i_boxed_3755_ = lean_unbox_usize(v_i_3752_);
lean_dec(v_i_3752_);
v_res_3756_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4(v_sz_boxed_3754_, v_i_boxed_3755_, v_bs_3753_);
return v_res_3756_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3(lean_object* v___x_3757_, lean_object* v_as_3758_, size_t v_sz_3759_, size_t v_i_3760_, lean_object* v_b_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_){
_start:
{
uint8_t v___x_3766_; 
v___x_3766_ = lean_usize_dec_lt(v_i_3760_, v_sz_3759_);
if (v___x_3766_ == 0)
{
lean_object* v___x_3767_; lean_object* v___x_3768_; 
lean_dec_ref(v___x_3757_);
v___x_3767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3767_, 0, v_b_3761_);
lean_ctor_set(v___x_3767_, 1, v___y_3762_);
v___x_3768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3768_, 0, v___x_3767_);
return v___x_3768_;
}
else
{
lean_object* v___x_3769_; lean_object* v_a_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; 
v___x_3769_ = lean_box(0);
v_a_3770_ = lean_array_uget_borrowed(v_as_3758_, v_i_3760_);
v___x_3771_ = l_Lean_LocalDecl_fvarId(v_a_3770_);
lean_inc_ref(v___x_3757_);
v___x_3772_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit(v___x_3757_, v___x_3771_, v___y_3762_, v___y_3763_, v___y_3764_);
lean_dec(v___x_3771_);
if (lean_obj_tag(v___x_3772_) == 0)
{
lean_object* v_a_3773_; lean_object* v_snd_3774_; size_t v___x_3775_; size_t v___x_3776_; 
v_a_3773_ = lean_ctor_get(v___x_3772_, 0);
lean_inc(v_a_3773_);
lean_dec_ref_known(v___x_3772_, 1);
v_snd_3774_ = lean_ctor_get(v_a_3773_, 1);
lean_inc(v_snd_3774_);
lean_dec(v_a_3773_);
v___x_3775_ = ((size_t)1ULL);
v___x_3776_ = lean_usize_add(v_i_3760_, v___x_3775_);
v_i_3760_ = v___x_3776_;
v_b_3761_ = v___x_3769_;
v___y_3762_ = v_snd_3774_;
goto _start;
}
else
{
lean_dec_ref(v___x_3757_);
return v___x_3772_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3___boxed(lean_object* v___x_3778_, lean_object* v_as_3779_, lean_object* v_sz_3780_, lean_object* v_i_3781_, lean_object* v_b_3782_, lean_object* v___y_3783_, lean_object* v___y_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_){
_start:
{
size_t v_sz_boxed_3787_; size_t v_i_boxed_3788_; lean_object* v_res_3789_; 
v_sz_boxed_3787_ = lean_unbox_usize(v_sz_3780_);
lean_dec(v_sz_3780_);
v_i_boxed_3788_ = lean_unbox_usize(v_i_3781_);
lean_dec(v_i_3781_);
v_res_3789_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3(v___x_3778_, v_as_3779_, v_sz_boxed_3787_, v_i_boxed_3788_, v_b_3782_, v___y_3783_, v___y_3784_, v___y_3785_);
lean_dec(v___y_3785_);
lean_dec_ref(v___y_3784_);
lean_dec_ref(v_as_3779_);
return v_res_3789_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__5(lean_object* v_a_3790_, lean_object* v_a_3791_){
_start:
{
if (lean_obj_tag(v_a_3790_) == 0)
{
lean_object* v___x_3792_; 
v___x_3792_ = l_List_reverse___redArg(v_a_3791_);
return v___x_3792_;
}
else
{
lean_object* v_head_3793_; lean_object* v_tail_3794_; lean_object* v___x_3796_; uint8_t v_isShared_3797_; uint8_t v_isSharedCheck_3803_; 
v_head_3793_ = lean_ctor_get(v_a_3790_, 0);
v_tail_3794_ = lean_ctor_get(v_a_3790_, 1);
v_isSharedCheck_3803_ = !lean_is_exclusive(v_a_3790_);
if (v_isSharedCheck_3803_ == 0)
{
v___x_3796_ = v_a_3790_;
v_isShared_3797_ = v_isSharedCheck_3803_;
goto v_resetjp_3795_;
}
else
{
lean_inc(v_tail_3794_);
lean_inc(v_head_3793_);
lean_dec(v_a_3790_);
v___x_3796_ = lean_box(0);
v_isShared_3797_ = v_isSharedCheck_3803_;
goto v_resetjp_3795_;
}
v_resetjp_3795_:
{
lean_object* v___x_3798_; lean_object* v___x_3800_; 
v___x_3798_ = l_Lean_MessageData_ofExpr(v_head_3793_);
if (v_isShared_3797_ == 0)
{
lean_ctor_set(v___x_3796_, 1, v_a_3791_);
lean_ctor_set(v___x_3796_, 0, v___x_3798_);
v___x_3800_ = v___x_3796_;
goto v_reusejp_3799_;
}
else
{
lean_object* v_reuseFailAlloc_3802_; 
v_reuseFailAlloc_3802_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3802_, 0, v___x_3798_);
lean_ctor_set(v_reuseFailAlloc_3802_, 1, v_a_3791_);
v___x_3800_ = v_reuseFailAlloc_3802_;
goto v_reusejp_3799_;
}
v_reusejp_3799_:
{
v_a_3790_ = v_tail_3794_;
v_a_3791_ = v___x_3800_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0___redArg(lean_object* v_a_3804_, lean_object* v_b_3805_, lean_object* v_x_3806_){
_start:
{
if (lean_obj_tag(v_x_3806_) == 0)
{
lean_dec(v_b_3805_);
lean_dec(v_a_3804_);
return v_x_3806_;
}
else
{
lean_object* v_key_3807_; lean_object* v_value_3808_; lean_object* v_tail_3809_; lean_object* v___x_3811_; uint8_t v_isShared_3812_; uint8_t v_isSharedCheck_3821_; 
v_key_3807_ = lean_ctor_get(v_x_3806_, 0);
v_value_3808_ = lean_ctor_get(v_x_3806_, 1);
v_tail_3809_ = lean_ctor_get(v_x_3806_, 2);
v_isSharedCheck_3821_ = !lean_is_exclusive(v_x_3806_);
if (v_isSharedCheck_3821_ == 0)
{
v___x_3811_ = v_x_3806_;
v_isShared_3812_ = v_isSharedCheck_3821_;
goto v_resetjp_3810_;
}
else
{
lean_inc(v_tail_3809_);
lean_inc(v_value_3808_);
lean_inc(v_key_3807_);
lean_dec(v_x_3806_);
v___x_3811_ = lean_box(0);
v_isShared_3812_ = v_isSharedCheck_3821_;
goto v_resetjp_3810_;
}
v_resetjp_3810_:
{
uint8_t v___x_3813_; 
v___x_3813_ = l_Lean_instBEqFVarId_beq(v_key_3807_, v_a_3804_);
if (v___x_3813_ == 0)
{
lean_object* v___x_3814_; lean_object* v___x_3816_; 
v___x_3814_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0___redArg(v_a_3804_, v_b_3805_, v_tail_3809_);
if (v_isShared_3812_ == 0)
{
lean_ctor_set(v___x_3811_, 2, v___x_3814_);
v___x_3816_ = v___x_3811_;
goto v_reusejp_3815_;
}
else
{
lean_object* v_reuseFailAlloc_3817_; 
v_reuseFailAlloc_3817_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3817_, 0, v_key_3807_);
lean_ctor_set(v_reuseFailAlloc_3817_, 1, v_value_3808_);
lean_ctor_set(v_reuseFailAlloc_3817_, 2, v___x_3814_);
v___x_3816_ = v_reuseFailAlloc_3817_;
goto v_reusejp_3815_;
}
v_reusejp_3815_:
{
return v___x_3816_;
}
}
else
{
lean_object* v___x_3819_; 
lean_dec(v_value_3808_);
lean_dec(v_key_3807_);
if (v_isShared_3812_ == 0)
{
lean_ctor_set(v___x_3811_, 1, v_b_3805_);
lean_ctor_set(v___x_3811_, 0, v_a_3804_);
v___x_3819_ = v___x_3811_;
goto v_reusejp_3818_;
}
else
{
lean_object* v_reuseFailAlloc_3820_; 
v_reuseFailAlloc_3820_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3820_, 0, v_a_3804_);
lean_ctor_set(v_reuseFailAlloc_3820_, 1, v_b_3805_);
lean_ctor_set(v_reuseFailAlloc_3820_, 2, v_tail_3809_);
v___x_3819_ = v_reuseFailAlloc_3820_;
goto v_reusejp_3818_;
}
v_reusejp_3818_:
{
return v___x_3819_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0___redArg(lean_object* v_m_3822_, lean_object* v_a_3823_, lean_object* v_b_3824_){
_start:
{
lean_object* v_size_3825_; lean_object* v_buckets_3826_; lean_object* v___x_3828_; uint8_t v_isShared_3829_; uint8_t v_isSharedCheck_3869_; 
v_size_3825_ = lean_ctor_get(v_m_3822_, 0);
v_buckets_3826_ = lean_ctor_get(v_m_3822_, 1);
v_isSharedCheck_3869_ = !lean_is_exclusive(v_m_3822_);
if (v_isSharedCheck_3869_ == 0)
{
v___x_3828_ = v_m_3822_;
v_isShared_3829_ = v_isSharedCheck_3869_;
goto v_resetjp_3827_;
}
else
{
lean_inc(v_buckets_3826_);
lean_inc(v_size_3825_);
lean_dec(v_m_3822_);
v___x_3828_ = lean_box(0);
v_isShared_3829_ = v_isSharedCheck_3869_;
goto v_resetjp_3827_;
}
v_resetjp_3827_:
{
lean_object* v___x_3830_; uint64_t v___x_3831_; uint64_t v___x_3832_; uint64_t v___x_3833_; uint64_t v_fold_3834_; uint64_t v___x_3835_; uint64_t v___x_3836_; uint64_t v___x_3837_; size_t v___x_3838_; size_t v___x_3839_; size_t v___x_3840_; size_t v___x_3841_; size_t v___x_3842_; lean_object* v_bkt_3843_; uint8_t v___x_3844_; 
v___x_3830_ = lean_array_get_size(v_buckets_3826_);
v___x_3831_ = l_Lean_instHashableFVarId_hash(v_a_3823_);
v___x_3832_ = 32ULL;
v___x_3833_ = lean_uint64_shift_right(v___x_3831_, v___x_3832_);
v_fold_3834_ = lean_uint64_xor(v___x_3831_, v___x_3833_);
v___x_3835_ = 16ULL;
v___x_3836_ = lean_uint64_shift_right(v_fold_3834_, v___x_3835_);
v___x_3837_ = lean_uint64_xor(v_fold_3834_, v___x_3836_);
v___x_3838_ = lean_uint64_to_usize(v___x_3837_);
v___x_3839_ = lean_usize_of_nat(v___x_3830_);
v___x_3840_ = ((size_t)1ULL);
v___x_3841_ = lean_usize_sub(v___x_3839_, v___x_3840_);
v___x_3842_ = lean_usize_land(v___x_3838_, v___x_3841_);
v_bkt_3843_ = lean_array_uget_borrowed(v_buckets_3826_, v___x_3842_);
v___x_3844_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__1_spec__2___redArg(v_a_3823_, v_bkt_3843_);
if (v___x_3844_ == 0)
{
lean_object* v___x_3845_; lean_object* v_size_x27_3846_; lean_object* v___x_3847_; lean_object* v_buckets_x27_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; uint8_t v___x_3854_; 
v___x_3845_ = lean_unsigned_to_nat(1u);
v_size_x27_3846_ = lean_nat_add(v_size_3825_, v___x_3845_);
lean_dec(v_size_3825_);
lean_inc(v_bkt_3843_);
v___x_3847_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3847_, 0, v_a_3823_);
lean_ctor_set(v___x_3847_, 1, v_b_3824_);
lean_ctor_set(v___x_3847_, 2, v_bkt_3843_);
v_buckets_x27_3848_ = lean_array_uset(v_buckets_3826_, v___x_3842_, v___x_3847_);
v___x_3849_ = lean_unsigned_to_nat(4u);
v___x_3850_ = lean_nat_mul(v_size_x27_3846_, v___x_3849_);
v___x_3851_ = lean_unsigned_to_nat(3u);
v___x_3852_ = lean_nat_div(v___x_3850_, v___x_3851_);
lean_dec(v___x_3850_);
v___x_3853_ = lean_array_get_size(v_buckets_x27_3848_);
v___x_3854_ = lean_nat_dec_le(v___x_3852_, v___x_3853_);
lean_dec(v___x_3852_);
if (v___x_3854_ == 0)
{
lean_object* v_val_3855_; lean_object* v___x_3857_; 
v_val_3855_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__2_spec__4___redArg(v_buckets_x27_3848_);
if (v_isShared_3829_ == 0)
{
lean_ctor_set(v___x_3828_, 1, v_val_3855_);
lean_ctor_set(v___x_3828_, 0, v_size_x27_3846_);
v___x_3857_ = v___x_3828_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v_size_x27_3846_);
lean_ctor_set(v_reuseFailAlloc_3858_, 1, v_val_3855_);
v___x_3857_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
return v___x_3857_;
}
}
else
{
lean_object* v___x_3860_; 
if (v_isShared_3829_ == 0)
{
lean_ctor_set(v___x_3828_, 1, v_buckets_x27_3848_);
lean_ctor_set(v___x_3828_, 0, v_size_x27_3846_);
v___x_3860_ = v___x_3828_;
goto v_reusejp_3859_;
}
else
{
lean_object* v_reuseFailAlloc_3861_; 
v_reuseFailAlloc_3861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3861_, 0, v_size_x27_3846_);
lean_ctor_set(v_reuseFailAlloc_3861_, 1, v_buckets_x27_3848_);
v___x_3860_ = v_reuseFailAlloc_3861_;
goto v_reusejp_3859_;
}
v_reusejp_3859_:
{
return v___x_3860_;
}
}
}
else
{
lean_object* v___x_3862_; lean_object* v_buckets_x27_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3867_; 
lean_inc(v_bkt_3843_);
v___x_3862_ = lean_box(0);
v_buckets_x27_3863_ = lean_array_uset(v_buckets_3826_, v___x_3842_, v___x_3862_);
v___x_3864_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0___redArg(v_a_3823_, v_b_3824_, v_bkt_3843_);
v___x_3865_ = lean_array_uset(v_buckets_x27_3863_, v___x_3842_, v___x_3864_);
if (v_isShared_3829_ == 0)
{
lean_ctor_set(v___x_3828_, 1, v___x_3865_);
v___x_3867_ = v___x_3828_;
goto v_reusejp_3866_;
}
else
{
lean_object* v_reuseFailAlloc_3868_; 
v_reuseFailAlloc_3868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3868_, 0, v_size_3825_);
lean_ctor_set(v_reuseFailAlloc_3868_, 1, v___x_3865_);
v___x_3867_ = v_reuseFailAlloc_3868_;
goto v_reusejp_3866_;
}
v_reusejp_3866_:
{
return v___x_3867_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(lean_object* v_as_3870_, size_t v_sz_3871_, size_t v_i_3872_, lean_object* v_b_3873_){
_start:
{
uint8_t v___x_3875_; 
v___x_3875_ = lean_usize_dec_lt(v_i_3872_, v_sz_3871_);
if (v___x_3875_ == 0)
{
lean_object* v___x_3876_; 
v___x_3876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3876_, 0, v_b_3873_);
return v___x_3876_;
}
else
{
lean_object* v_snd_3877_; lean_object* v_fst_3878_; lean_object* v___x_3880_; uint8_t v_isShared_3881_; uint8_t v_isSharedCheck_3913_; 
v_snd_3877_ = lean_ctor_get(v_b_3873_, 1);
v_fst_3878_ = lean_ctor_get(v_b_3873_, 0);
v_isSharedCheck_3913_ = !lean_is_exclusive(v_b_3873_);
if (v_isSharedCheck_3913_ == 0)
{
v___x_3880_ = v_b_3873_;
v_isShared_3881_ = v_isSharedCheck_3913_;
goto v_resetjp_3879_;
}
else
{
lean_inc(v_snd_3877_);
lean_inc(v_fst_3878_);
lean_dec(v_b_3873_);
v___x_3880_ = lean_box(0);
v_isShared_3881_ = v_isSharedCheck_3913_;
goto v_resetjp_3879_;
}
v_resetjp_3879_:
{
lean_object* v_array_3882_; lean_object* v_start_3883_; lean_object* v_stop_3884_; uint8_t v___x_3885_; 
v_array_3882_ = lean_ctor_get(v_snd_3877_, 0);
v_start_3883_ = lean_ctor_get(v_snd_3877_, 1);
v_stop_3884_ = lean_ctor_get(v_snd_3877_, 2);
v___x_3885_ = lean_nat_dec_lt(v_start_3883_, v_stop_3884_);
if (v___x_3885_ == 0)
{
lean_object* v___x_3887_; 
if (v_isShared_3881_ == 0)
{
v___x_3887_ = v___x_3880_;
goto v_reusejp_3886_;
}
else
{
lean_object* v_reuseFailAlloc_3889_; 
v_reuseFailAlloc_3889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3889_, 0, v_fst_3878_);
lean_ctor_set(v_reuseFailAlloc_3889_, 1, v_snd_3877_);
v___x_3887_ = v_reuseFailAlloc_3889_;
goto v_reusejp_3886_;
}
v_reusejp_3886_:
{
lean_object* v___x_3888_; 
v___x_3888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3888_, 0, v___x_3887_);
return v___x_3888_;
}
}
else
{
lean_object* v___x_3891_; uint8_t v_isShared_3892_; uint8_t v_isSharedCheck_3909_; 
lean_inc(v_stop_3884_);
lean_inc(v_start_3883_);
lean_inc_ref(v_array_3882_);
v_isSharedCheck_3909_ = !lean_is_exclusive(v_snd_3877_);
if (v_isSharedCheck_3909_ == 0)
{
lean_object* v_unused_3910_; lean_object* v_unused_3911_; lean_object* v_unused_3912_; 
v_unused_3910_ = lean_ctor_get(v_snd_3877_, 2);
lean_dec(v_unused_3910_);
v_unused_3911_ = lean_ctor_get(v_snd_3877_, 1);
lean_dec(v_unused_3911_);
v_unused_3912_ = lean_ctor_get(v_snd_3877_, 0);
lean_dec(v_unused_3912_);
v___x_3891_ = v_snd_3877_;
v_isShared_3892_ = v_isSharedCheck_3909_;
goto v_resetjp_3890_;
}
else
{
lean_dec(v_snd_3877_);
v___x_3891_ = lean_box(0);
v_isShared_3892_ = v_isSharedCheck_3909_;
goto v_resetjp_3890_;
}
v_resetjp_3890_:
{
lean_object* v_a_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3898_; 
v_a_3893_ = lean_array_uget_borrowed(v_as_3870_, v_i_3872_);
v___x_3894_ = lean_array_fget(v_array_3882_, v_start_3883_);
v___x_3895_ = lean_unsigned_to_nat(1u);
v___x_3896_ = lean_nat_add(v_start_3883_, v___x_3895_);
lean_dec(v_start_3883_);
if (v_isShared_3892_ == 0)
{
lean_ctor_set(v___x_3891_, 1, v___x_3896_);
v___x_3898_ = v___x_3891_;
goto v_reusejp_3897_;
}
else
{
lean_object* v_reuseFailAlloc_3908_; 
v_reuseFailAlloc_3908_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3908_, 0, v_array_3882_);
lean_ctor_set(v_reuseFailAlloc_3908_, 1, v___x_3896_);
lean_ctor_set(v_reuseFailAlloc_3908_, 2, v_stop_3884_);
v___x_3898_ = v_reuseFailAlloc_3908_;
goto v_reusejp_3897_;
}
v_reusejp_3897_:
{
lean_object* v___x_3899_; lean_object* v___x_3901_; 
v___x_3899_ = l_Lean_LocalDecl_fvarId(v_a_3893_);
lean_inc(v_a_3893_);
if (v_isShared_3881_ == 0)
{
lean_ctor_set(v___x_3880_, 1, v___x_3894_);
lean_ctor_set(v___x_3880_, 0, v_a_3893_);
v___x_3901_ = v___x_3880_;
goto v_reusejp_3900_;
}
else
{
lean_object* v_reuseFailAlloc_3907_; 
v_reuseFailAlloc_3907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3907_, 0, v_a_3893_);
lean_ctor_set(v_reuseFailAlloc_3907_, 1, v___x_3894_);
v___x_3901_ = v_reuseFailAlloc_3907_;
goto v_reusejp_3900_;
}
v_reusejp_3900_:
{
lean_object* v___x_3902_; lean_object* v___x_3903_; size_t v___x_3904_; size_t v___x_3905_; 
v___x_3902_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0___redArg(v_fst_3878_, v___x_3899_, v___x_3901_);
v___x_3903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3903_, 0, v___x_3902_);
lean_ctor_set(v___x_3903_, 1, v___x_3898_);
v___x_3904_ = ((size_t)1ULL);
v___x_3905_ = lean_usize_add(v_i_3872_, v___x_3904_);
v_i_3872_ = v___x_3905_;
v_b_3873_ = v___x_3903_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg___boxed(lean_object* v_as_3914_, lean_object* v_sz_3915_, lean_object* v_i_3916_, lean_object* v_b_3917_, lean_object* v___y_3918_){
_start:
{
size_t v_sz_boxed_3919_; size_t v_i_boxed_3920_; lean_object* v_res_3921_; 
v_sz_boxed_3919_ = lean_unbox_usize(v_sz_3915_);
lean_dec(v_sz_3915_);
v_i_boxed_3920_ = lean_unbox_usize(v_i_3916_);
lean_dec(v_i_3916_);
v_res_3921_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(v_as_3914_, v_sz_boxed_3919_, v_i_boxed_3920_, v_b_3917_);
lean_dec_ref(v_as_3914_);
return v_res_3921_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2(void){
_start:
{
lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; 
v___x_3924_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__1));
v___x_3925_ = lean_unsigned_to_nat(2u);
v___x_3926_ = lean_unsigned_to_nat(366u);
v___x_3927_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0));
v___x_3928_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2));
v___x_3929_ = l_mkPanicMessageWithDecl(v___x_3928_, v___x_3927_, v___x_3926_, v___x_3925_, v___x_3924_);
return v___x_3929_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4(void){
_start:
{
lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; 
v___x_3931_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__3));
v___x_3932_ = lean_unsigned_to_nat(2u);
v___x_3933_ = lean_unsigned_to_nat(367u);
v___x_3934_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__0));
v___x_3935_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2));
v___x_3936_ = l_mkPanicMessageWithDecl(v___x_3935_, v___x_3934_, v___x_3933_, v___x_3932_, v___x_3931_);
return v___x_3936_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5(void){
_start:
{
lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; 
v___x_3937_ = lean_box(0);
v___x_3938_ = lean_unsigned_to_nat(16u);
v___x_3939_ = lean_mk_array(v___x_3938_, v___x_3937_);
return v___x_3939_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6(void){
_start:
{
lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; 
v___x_3940_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__5);
v___x_3941_ = lean_unsigned_to_nat(0u);
v___x_3942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3942_, 0, v___x_3941_);
lean_ctor_set(v___x_3942_, 1, v___x_3940_);
return v___x_3942_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8(void){
_start:
{
lean_object* v___x_3944_; lean_object* v___x_3945_; 
v___x_3944_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__7));
v___x_3945_ = l_Lean_stringToMessageData(v___x_3944_);
return v___x_3945_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10(void){
_start:
{
lean_object* v___x_3947_; lean_object* v___x_3948_; 
v___x_3947_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__9));
v___x_3948_ = l_Lean_stringToMessageData(v___x_3947_);
return v___x_3948_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls(lean_object* v_sortedDecls_3949_, lean_object* v_sortedArgs_3950_, lean_object* v_toSortDecls_3951_, lean_object* v_toSortArgs_3952_, lean_object* v_a_3953_, lean_object* v_a_3954_){
_start:
{
lean_object* v___y_3957_; lean_object* v___y_3976_; lean_object* v___y_3977_; lean_object* v___y_3978_; lean_object* v___y_3979_; lean_object* v_snd_3980_; lean_object* v___x_3982_; lean_object* v___x_3983_; uint8_t v___x_3984_; 
v___x_3982_ = lean_array_get_size(v_sortedDecls_3949_);
v___x_3983_ = lean_array_get_size(v_sortedArgs_3950_);
v___x_3984_ = lean_nat_dec_eq(v___x_3982_, v___x_3983_);
if (v___x_3984_ == 0)
{
lean_object* v___x_3985_; lean_object* v___x_3986_; 
lean_dec_ref(v_toSortArgs_3952_);
lean_dec_ref(v_sortedArgs_3950_);
lean_dec_ref(v_sortedDecls_3949_);
v___x_3985_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__2);
v___x_3986_ = l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1(v___x_3985_, v_a_3953_, v_a_3954_);
return v___x_3986_;
}
else
{
lean_object* v___x_3987_; lean_object* v___x_3988_; uint8_t v___x_3989_; 
v___x_3987_ = lean_array_get_size(v_toSortDecls_3951_);
v___x_3988_ = lean_array_get_size(v_toSortArgs_3952_);
v___x_3989_ = lean_nat_dec_eq(v___x_3987_, v___x_3988_);
if (v___x_3989_ == 0)
{
lean_object* v___x_3990_; lean_object* v___x_3991_; 
lean_dec_ref(v_toSortArgs_3952_);
lean_dec_ref(v_sortedArgs_3950_);
lean_dec_ref(v_sortedDecls_3949_);
v___x_3990_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__4);
v___x_3991_ = l_panic___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__1(v___x_3990_, v_a_3953_, v_a_3954_);
return v___x_3991_;
}
else
{
lean_object* v___x_3992_; uint8_t v___x_3993_; 
v___x_3992_ = lean_unsigned_to_nat(0u);
v___x_3993_ = lean_nat_dec_eq(v___x_3987_, v___x_3992_);
if (v___x_3993_ == 0)
{
lean_object* v_toCold_3994_; lean_object* v_options_3995_; lean_object* v_inheritedTraceOptions_3996_; uint8_t v_hasTrace_3997_; lean_object* v___x_3998_; lean_object* v_cls_3999_; lean_object* v___y_4001_; lean_object* v___y_4002_; 
v_toCold_3994_ = lean_ctor_get(v_a_3953_, 0);
v_options_3995_ = lean_ctor_get(v_toCold_3994_, 2);
v_inheritedTraceOptions_3996_ = lean_ctor_get(v_toCold_3994_, 11);
v_hasTrace_3997_ = lean_ctor_get_uint8(v_options_3995_, sizeof(void*)*1);
v___x_3998_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v_cls_3999_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10));
if (v_hasTrace_3997_ == 0)
{
v___y_4001_ = v_a_3953_;
v___y_4002_ = v_a_3954_;
goto v___jp_4000_;
}
else
{
lean_object* v___x_4105_; uint8_t v___x_4106_; 
v___x_4105_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13);
v___x_4106_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3996_, v_options_3995_, v___x_4105_);
if (v___x_4106_ == 0)
{
v___y_4001_ = v_a_3953_;
v___y_4002_ = v_a_3954_;
goto v___jp_4000_;
}
else
{
lean_object* v___x_4107_; lean_object* v___x_4108_; 
v___x_4107_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__10);
v___x_4108_ = l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__6(v_cls_3999_, v___x_4107_, v_a_3953_, v_a_3954_);
if (lean_obj_tag(v___x_4108_) == 0)
{
lean_dec_ref_known(v___x_4108_, 1);
v___y_4001_ = v_a_3953_;
v___y_4002_ = v_a_3954_;
goto v___jp_4000_;
}
else
{
lean_object* v_a_4109_; lean_object* v___x_4111_; uint8_t v_isShared_4112_; uint8_t v_isSharedCheck_4116_; 
lean_dec_ref(v_toSortArgs_3952_);
lean_dec_ref(v_sortedArgs_3950_);
lean_dec_ref(v_sortedDecls_3949_);
v_a_4109_ = lean_ctor_get(v___x_4108_, 0);
v_isSharedCheck_4116_ = !lean_is_exclusive(v___x_4108_);
if (v_isSharedCheck_4116_ == 0)
{
v___x_4111_ = v___x_4108_;
v_isShared_4112_ = v_isSharedCheck_4116_;
goto v_resetjp_4110_;
}
else
{
lean_inc(v_a_4109_);
lean_dec(v___x_4108_);
v___x_4111_ = lean_box(0);
v_isShared_4112_ = v_isSharedCheck_4116_;
goto v_resetjp_4110_;
}
v_resetjp_4110_:
{
lean_object* v___x_4114_; 
if (v_isShared_4112_ == 0)
{
v___x_4114_ = v___x_4111_;
goto v_reusejp_4113_;
}
else
{
lean_object* v_reuseFailAlloc_4115_; 
v_reuseFailAlloc_4115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4115_, 0, v_a_4109_);
v___x_4114_ = v_reuseFailAlloc_4115_;
goto v_reusejp_4113_;
}
v_reusejp_4113_:
{
return v___x_4114_;
}
}
}
}
}
v___jp_4000_:
{
lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; size_t v_sz_4006_; size_t v___x_4007_; lean_object* v___x_4008_; 
v___x_4003_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__6);
v___x_4004_ = l_Array_toSubarray___redArg(v_sortedArgs_3950_, v___x_3992_, v___x_3983_);
v___x_4005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4005_, 0, v___x_4003_);
lean_ctor_set(v___x_4005_, 1, v___x_4004_);
v_sz_4006_ = lean_array_size(v_sortedDecls_3949_);
v___x_4007_ = ((size_t)0ULL);
v___x_4008_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(v_sortedDecls_3949_, v_sz_4006_, v___x_4007_, v___x_4005_);
if (lean_obj_tag(v___x_4008_) == 0)
{
lean_object* v_a_4009_; lean_object* v_fst_4010_; lean_object* v___x_4012_; uint8_t v_isShared_4013_; uint8_t v_isSharedCheck_4095_; 
v_a_4009_ = lean_ctor_get(v___x_4008_, 0);
lean_inc(v_a_4009_);
lean_dec_ref_known(v___x_4008_, 1);
v_fst_4010_ = lean_ctor_get(v_a_4009_, 0);
v_isSharedCheck_4095_ = !lean_is_exclusive(v_a_4009_);
if (v_isSharedCheck_4095_ == 0)
{
lean_object* v_unused_4096_; 
v_unused_4096_ = lean_ctor_get(v_a_4009_, 1);
lean_dec(v_unused_4096_);
v___x_4012_ = v_a_4009_;
v_isShared_4013_ = v_isSharedCheck_4095_;
goto v_resetjp_4011_;
}
else
{
lean_inc(v_fst_4010_);
lean_dec(v_a_4009_);
v___x_4012_ = lean_box(0);
v_isShared_4013_ = v_isSharedCheck_4095_;
goto v_resetjp_4011_;
}
v_resetjp_4011_:
{
lean_object* v___x_4014_; lean_object* v___x_4016_; 
v___x_4014_ = l_Array_toSubarray___redArg(v_toSortArgs_3952_, v___x_3992_, v___x_3988_);
if (v_isShared_4013_ == 0)
{
lean_ctor_set(v___x_4012_, 1, v___x_4014_);
v___x_4016_ = v___x_4012_;
goto v_reusejp_4015_;
}
else
{
lean_object* v_reuseFailAlloc_4094_; 
v_reuseFailAlloc_4094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4094_, 0, v_fst_4010_);
lean_ctor_set(v_reuseFailAlloc_4094_, 1, v___x_4014_);
v___x_4016_ = v_reuseFailAlloc_4094_;
goto v_reusejp_4015_;
}
v_reusejp_4015_:
{
size_t v_sz_4017_; lean_object* v___x_4018_; 
v_sz_4017_ = lean_array_size(v_toSortDecls_3951_);
v___x_4018_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(v_toSortDecls_3951_, v_sz_4017_, v___x_4007_, v___x_4016_);
if (lean_obj_tag(v___x_4018_) == 0)
{
lean_object* v_a_4019_; lean_object* v_fst_4020_; lean_object* v_size_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; 
v_a_4019_ = lean_ctor_get(v___x_4018_, 0);
lean_inc(v_a_4019_);
lean_dec_ref_known(v___x_4018_, 1);
v_fst_4020_ = lean_ctor_get(v_a_4019_, 0);
lean_inc_n(v_fst_4020_, 2);
lean_dec(v_a_4019_);
v_size_4021_ = lean_ctor_get(v_fst_4020_, 0);
v___x_4022_ = lean_mk_empty_array_with_capacity(v_size_4021_);
lean_inc_ref(v___x_4022_);
v___x_4023_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4023_, 0, v___x_3998_);
lean_ctor_set(v___x_4023_, 1, v___x_3998_);
lean_ctor_set(v___x_4023_, 2, v___x_4022_);
lean_ctor_set(v___x_4023_, 3, v___x_4022_);
v___x_4024_ = lean_box(0);
v___x_4025_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3(v_fst_4020_, v_sortedDecls_3949_, v_sz_4006_, v___x_4007_, v___x_4024_, v___x_4023_, v___y_4001_, v___y_4002_);
lean_dec_ref(v_sortedDecls_3949_);
if (lean_obj_tag(v___x_4025_) == 0)
{
lean_object* v_a_4026_; lean_object* v_snd_4027_; lean_object* v___x_4028_; 
v_a_4026_ = lean_ctor_get(v___x_4025_, 0);
lean_inc(v_a_4026_);
lean_dec_ref_known(v___x_4025_, 1);
v_snd_4027_ = lean_ctor_get(v_a_4026_, 1);
lean_inc(v_snd_4027_);
lean_dec(v_a_4026_);
v___x_4028_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__3(v_fst_4020_, v_toSortDecls_3951_, v_sz_4017_, v___x_4007_, v___x_4024_, v_snd_4027_, v___y_4001_, v___y_4002_);
if (lean_obj_tag(v___x_4028_) == 0)
{
lean_object* v_a_4029_; lean_object* v_snd_4030_; lean_object* v___x_4032_; uint8_t v_isShared_4033_; uint8_t v_isSharedCheck_4068_; 
v_a_4029_ = lean_ctor_get(v___x_4028_, 0);
lean_inc(v_a_4029_);
lean_dec_ref_known(v___x_4028_, 1);
v_snd_4030_ = lean_ctor_get(v_a_4029_, 1);
v_isSharedCheck_4068_ = !lean_is_exclusive(v_a_4029_);
if (v_isSharedCheck_4068_ == 0)
{
lean_object* v_unused_4069_; 
v_unused_4069_ = lean_ctor_get(v_a_4029_, 0);
lean_dec(v_unused_4069_);
v___x_4032_ = v_a_4029_;
v_isShared_4033_ = v_isSharedCheck_4068_;
goto v_resetjp_4031_;
}
else
{
lean_inc(v_snd_4030_);
lean_dec(v_a_4029_);
v___x_4032_ = lean_box(0);
v_isShared_4033_ = v_isSharedCheck_4068_;
goto v_resetjp_4031_;
}
v_resetjp_4031_:
{
lean_object* v_toCold_4034_; lean_object* v_options_4035_; lean_object* v_newDecls_4036_; lean_object* v_newArgs_4037_; lean_object* v_inheritedTraceOptions_4038_; uint8_t v_hasTrace_4039_; lean_object* v___f_4040_; 
v_toCold_4034_ = lean_ctor_get(v___y_4001_, 0);
v_options_4035_ = lean_ctor_get(v_toCold_4034_, 2);
v_newDecls_4036_ = lean_ctor_get(v_snd_4030_, 2);
v_newArgs_4037_ = lean_ctor_get(v_snd_4030_, 3);
v_inheritedTraceOptions_4038_ = lean_ctor_get(v_toCold_4034_, 11);
v_hasTrace_4039_ = lean_ctor_get_uint8(v_options_4035_, sizeof(void*)*1);
lean_inc_ref(v_newArgs_4037_);
lean_inc_ref(v_newDecls_4036_);
v___f_4040_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0___boxed), 7, 2);
lean_closure_set(v___f_4040_, 0, v_newDecls_4036_);
lean_closure_set(v___f_4040_, 1, v_newArgs_4037_);
if (v_hasTrace_4039_ == 0)
{
lean_del_object(v___x_4032_);
v___y_3976_ = v___y_4001_;
v___y_3977_ = v___f_4040_;
v___y_3978_ = v___x_4024_;
v___y_3979_ = v___y_4002_;
v_snd_3980_ = v_snd_4030_;
goto v___jp_3975_;
}
else
{
lean_object* v___x_4041_; uint8_t v___x_4042_; 
v___x_4041_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__13);
v___x_4042_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4038_, v_options_4035_, v___x_4041_);
if (v___x_4042_ == 0)
{
lean_del_object(v___x_4032_);
v___y_3976_ = v___y_4001_;
v___y_3977_ = v___f_4040_;
v___y_3978_ = v___x_4024_;
v___y_3979_ = v___y_4002_;
v_snd_3980_ = v_snd_4030_;
goto v___jp_3975_;
}
else
{
lean_object* v___x_4043_; size_t v_sz_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4053_; 
lean_inc_ref(v_newArgs_4037_);
lean_inc_ref(v_newDecls_4036_);
lean_dec_ref(v___f_4040_);
v___x_4043_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8, &l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8_once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___closed__8);
v_sz_4044_ = lean_array_size(v_newDecls_4036_);
v___x_4045_ = l_unsafeCast___redArg(v_newDecls_4036_);
v___x_4046_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__4(v_sz_4044_, v___x_4007_, v___x_4045_);
v___x_4047_ = l_unsafeCast___redArg(v___x_4046_);
lean_dec_ref(v___x_4046_);
v___x_4048_ = lean_array_to_list(v___x_4047_);
v___x_4049_ = lean_box(0);
v___x_4050_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__5(v___x_4048_, v___x_4049_);
v___x_4051_ = l_Lean_MessageData_ofList(v___x_4050_);
if (v_isShared_4033_ == 0)
{
lean_ctor_set_tag(v___x_4032_, 7);
lean_ctor_set(v___x_4032_, 1, v___x_4051_);
lean_ctor_set(v___x_4032_, 0, v___x_4043_);
v___x_4053_ = v___x_4032_;
goto v_reusejp_4052_;
}
else
{
lean_object* v_reuseFailAlloc_4067_; 
v_reuseFailAlloc_4067_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4067_, 0, v___x_4043_);
lean_ctor_set(v_reuseFailAlloc_4067_, 1, v___x_4051_);
v___x_4053_ = v_reuseFailAlloc_4067_;
goto v_reusejp_4052_;
}
v_reusejp_4052_:
{
lean_object* v___x_4054_; 
v___x_4054_ = l_Lean_addTrace___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit_spec__6(v_cls_3999_, v___x_4053_, v_snd_4030_, v___y_4001_, v___y_4002_);
if (lean_obj_tag(v___x_4054_) == 0)
{
lean_object* v_a_4055_; lean_object* v_fst_4056_; lean_object* v_snd_4057_; lean_object* v___x_4058_; 
v_a_4055_ = lean_ctor_get(v___x_4054_, 0);
lean_inc(v_a_4055_);
lean_dec_ref_known(v___x_4054_, 1);
v_fst_4056_ = lean_ctor_get(v_a_4055_, 0);
lean_inc(v_fst_4056_);
v_snd_4057_ = lean_ctor_get(v_a_4055_, 1);
lean_inc(v_snd_4057_);
lean_dec(v_a_4055_);
v___x_4058_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___lam__0(v_newDecls_4036_, v_newArgs_4037_, v_fst_4056_, v_snd_4057_, v___y_4001_, v___y_4002_);
v___y_3957_ = v___x_4058_;
goto v___jp_3956_;
}
else
{
lean_object* v_a_4059_; lean_object* v___x_4061_; uint8_t v_isShared_4062_; uint8_t v_isSharedCheck_4066_; 
lean_dec_ref(v_newArgs_4037_);
lean_dec_ref(v_newDecls_4036_);
v_a_4059_ = lean_ctor_get(v___x_4054_, 0);
v_isSharedCheck_4066_ = !lean_is_exclusive(v___x_4054_);
if (v_isSharedCheck_4066_ == 0)
{
v___x_4061_ = v___x_4054_;
v_isShared_4062_ = v_isSharedCheck_4066_;
goto v_resetjp_4060_;
}
else
{
lean_inc(v_a_4059_);
lean_dec(v___x_4054_);
v___x_4061_ = lean_box(0);
v_isShared_4062_ = v_isSharedCheck_4066_;
goto v_resetjp_4060_;
}
v_resetjp_4060_:
{
lean_object* v___x_4064_; 
if (v_isShared_4062_ == 0)
{
v___x_4064_ = v___x_4061_;
goto v_reusejp_4063_;
}
else
{
lean_object* v_reuseFailAlloc_4065_; 
v_reuseFailAlloc_4065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4065_, 0, v_a_4059_);
v___x_4064_ = v_reuseFailAlloc_4065_;
goto v_reusejp_4063_;
}
v_reusejp_4063_:
{
return v___x_4064_;
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
lean_object* v_a_4070_; lean_object* v___x_4072_; uint8_t v_isShared_4073_; uint8_t v_isSharedCheck_4077_; 
v_a_4070_ = lean_ctor_get(v___x_4028_, 0);
v_isSharedCheck_4077_ = !lean_is_exclusive(v___x_4028_);
if (v_isSharedCheck_4077_ == 0)
{
v___x_4072_ = v___x_4028_;
v_isShared_4073_ = v_isSharedCheck_4077_;
goto v_resetjp_4071_;
}
else
{
lean_inc(v_a_4070_);
lean_dec(v___x_4028_);
v___x_4072_ = lean_box(0);
v_isShared_4073_ = v_isSharedCheck_4077_;
goto v_resetjp_4071_;
}
v_resetjp_4071_:
{
lean_object* v___x_4075_; 
if (v_isShared_4073_ == 0)
{
v___x_4075_ = v___x_4072_;
goto v_reusejp_4074_;
}
else
{
lean_object* v_reuseFailAlloc_4076_; 
v_reuseFailAlloc_4076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4076_, 0, v_a_4070_);
v___x_4075_ = v_reuseFailAlloc_4076_;
goto v_reusejp_4074_;
}
v_reusejp_4074_:
{
return v___x_4075_;
}
}
}
}
else
{
lean_object* v_a_4078_; lean_object* v___x_4080_; uint8_t v_isShared_4081_; uint8_t v_isSharedCheck_4085_; 
lean_dec(v_fst_4020_);
v_a_4078_ = lean_ctor_get(v___x_4025_, 0);
v_isSharedCheck_4085_ = !lean_is_exclusive(v___x_4025_);
if (v_isSharedCheck_4085_ == 0)
{
v___x_4080_ = v___x_4025_;
v_isShared_4081_ = v_isSharedCheck_4085_;
goto v_resetjp_4079_;
}
else
{
lean_inc(v_a_4078_);
lean_dec(v___x_4025_);
v___x_4080_ = lean_box(0);
v_isShared_4081_ = v_isSharedCheck_4085_;
goto v_resetjp_4079_;
}
v_resetjp_4079_:
{
lean_object* v___x_4083_; 
if (v_isShared_4081_ == 0)
{
v___x_4083_ = v___x_4080_;
goto v_reusejp_4082_;
}
else
{
lean_object* v_reuseFailAlloc_4084_; 
v_reuseFailAlloc_4084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4084_, 0, v_a_4078_);
v___x_4083_ = v_reuseFailAlloc_4084_;
goto v_reusejp_4082_;
}
v_reusejp_4082_:
{
return v___x_4083_;
}
}
}
}
else
{
lean_object* v_a_4086_; lean_object* v___x_4088_; uint8_t v_isShared_4089_; uint8_t v_isSharedCheck_4093_; 
lean_dec_ref(v_sortedDecls_3949_);
v_a_4086_ = lean_ctor_get(v___x_4018_, 0);
v_isSharedCheck_4093_ = !lean_is_exclusive(v___x_4018_);
if (v_isSharedCheck_4093_ == 0)
{
v___x_4088_ = v___x_4018_;
v_isShared_4089_ = v_isSharedCheck_4093_;
goto v_resetjp_4087_;
}
else
{
lean_inc(v_a_4086_);
lean_dec(v___x_4018_);
v___x_4088_ = lean_box(0);
v_isShared_4089_ = v_isSharedCheck_4093_;
goto v_resetjp_4087_;
}
v_resetjp_4087_:
{
lean_object* v___x_4091_; 
if (v_isShared_4089_ == 0)
{
v___x_4091_ = v___x_4088_;
goto v_reusejp_4090_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v_a_4086_);
v___x_4091_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4090_;
}
v_reusejp_4090_:
{
return v___x_4091_;
}
}
}
}
}
}
else
{
lean_object* v_a_4097_; lean_object* v___x_4099_; uint8_t v_isShared_4100_; uint8_t v_isSharedCheck_4104_; 
lean_dec_ref(v_toSortArgs_3952_);
lean_dec_ref(v_sortedDecls_3949_);
v_a_4097_ = lean_ctor_get(v___x_4008_, 0);
v_isSharedCheck_4104_ = !lean_is_exclusive(v___x_4008_);
if (v_isSharedCheck_4104_ == 0)
{
v___x_4099_ = v___x_4008_;
v_isShared_4100_ = v_isSharedCheck_4104_;
goto v_resetjp_4098_;
}
else
{
lean_inc(v_a_4097_);
lean_dec(v___x_4008_);
v___x_4099_ = lean_box(0);
v_isShared_4100_ = v_isSharedCheck_4104_;
goto v_resetjp_4098_;
}
v_resetjp_4098_:
{
lean_object* v___x_4102_; 
if (v_isShared_4100_ == 0)
{
v___x_4102_ = v___x_4099_;
goto v_reusejp_4101_;
}
else
{
lean_object* v_reuseFailAlloc_4103_; 
v_reuseFailAlloc_4103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4103_, 0, v_a_4097_);
v___x_4102_ = v_reuseFailAlloc_4103_;
goto v_reusejp_4101_;
}
v_reusejp_4101_:
{
return v___x_4102_;
}
}
}
}
}
else
{
lean_object* v___x_4117_; lean_object* v___x_4118_; 
lean_dec_ref(v_toSortArgs_3952_);
v___x_4117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4117_, 0, v_sortedDecls_3949_);
lean_ctor_set(v___x_4117_, 1, v_sortedArgs_3950_);
v___x_4118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4118_, 0, v___x_4117_);
return v___x_4118_;
}
}
}
v___jp_3956_:
{
if (lean_obj_tag(v___y_3957_) == 0)
{
lean_object* v_a_3958_; lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_3966_; 
v_a_3958_ = lean_ctor_get(v___y_3957_, 0);
v_isSharedCheck_3966_ = !lean_is_exclusive(v___y_3957_);
if (v_isSharedCheck_3966_ == 0)
{
v___x_3960_ = v___y_3957_;
v_isShared_3961_ = v_isSharedCheck_3966_;
goto v_resetjp_3959_;
}
else
{
lean_inc(v_a_3958_);
lean_dec(v___y_3957_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_3966_;
goto v_resetjp_3959_;
}
v_resetjp_3959_:
{
lean_object* v_fst_3962_; lean_object* v___x_3964_; 
v_fst_3962_ = lean_ctor_get(v_a_3958_, 0);
lean_inc(v_fst_3962_);
lean_dec(v_a_3958_);
if (v_isShared_3961_ == 0)
{
lean_ctor_set(v___x_3960_, 0, v_fst_3962_);
v___x_3964_ = v___x_3960_;
goto v_reusejp_3963_;
}
else
{
lean_object* v_reuseFailAlloc_3965_; 
v_reuseFailAlloc_3965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3965_, 0, v_fst_3962_);
v___x_3964_ = v_reuseFailAlloc_3965_;
goto v_reusejp_3963_;
}
v_reusejp_3963_:
{
return v___x_3964_;
}
}
}
else
{
lean_object* v_a_3967_; lean_object* v___x_3969_; uint8_t v_isShared_3970_; uint8_t v_isSharedCheck_3974_; 
v_a_3967_ = lean_ctor_get(v___y_3957_, 0);
v_isSharedCheck_3974_ = !lean_is_exclusive(v___y_3957_);
if (v_isSharedCheck_3974_ == 0)
{
v___x_3969_ = v___y_3957_;
v_isShared_3970_ = v_isSharedCheck_3974_;
goto v_resetjp_3968_;
}
else
{
lean_inc(v_a_3967_);
lean_dec(v___y_3957_);
v___x_3969_ = lean_box(0);
v_isShared_3970_ = v_isSharedCheck_3974_;
goto v_resetjp_3968_;
}
v_resetjp_3968_:
{
lean_object* v___x_3972_; 
if (v_isShared_3970_ == 0)
{
v___x_3972_ = v___x_3969_;
goto v_reusejp_3971_;
}
else
{
lean_object* v_reuseFailAlloc_3973_; 
v_reuseFailAlloc_3973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3973_, 0, v_a_3967_);
v___x_3972_ = v_reuseFailAlloc_3973_;
goto v_reusejp_3971_;
}
v_reusejp_3971_:
{
return v___x_3972_;
}
}
}
}
v___jp_3975_:
{
lean_object* v___x_3981_; 
lean_inc(v___y_3979_);
lean_inc_ref(v___y_3976_);
v___x_3981_ = lean_apply_5(v___y_3977_, v___y_3978_, v_snd_3980_, v___y_3976_, v___y_3979_, lean_box(0));
v___y_3957_ = v___x_3981_;
goto v___jp_3956_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls___boxed(lean_object* v_sortedDecls_4119_, lean_object* v_sortedArgs_4120_, lean_object* v_toSortDecls_4121_, lean_object* v_toSortArgs_4122_, lean_object* v_a_4123_, lean_object* v_a_4124_, lean_object* v_a_4125_){
_start:
{
lean_object* v_res_4126_; 
v_res_4126_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls(v_sortedDecls_4119_, v_sortedArgs_4120_, v_toSortDecls_4121_, v_toSortArgs_4122_, v_a_4123_, v_a_4124_);
lean_dec(v_a_4124_);
lean_dec_ref(v_a_4123_);
lean_dec_ref(v_toSortDecls_4121_);
return v_res_4126_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0(lean_object* v_00_u03b2_4127_, lean_object* v_m_4128_, lean_object* v_a_4129_, lean_object* v_b_4130_){
_start:
{
lean_object* v___x_4131_; 
v___x_4131_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0___redArg(v_m_4128_, v_a_4129_, v_b_4130_);
return v___x_4131_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2(lean_object* v_as_4132_, size_t v_sz_4133_, size_t v_i_4134_, lean_object* v_b_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_){
_start:
{
lean_object* v___x_4139_; 
v___x_4139_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___redArg(v_as_4132_, v_sz_4133_, v_i_4134_, v_b_4135_);
return v___x_4139_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2___boxed(lean_object* v_as_4140_, lean_object* v_sz_4141_, lean_object* v_i_4142_, lean_object* v_b_4143_, lean_object* v___y_4144_, lean_object* v___y_4145_, lean_object* v___y_4146_){
_start:
{
size_t v_sz_boxed_4147_; size_t v_i_boxed_4148_; lean_object* v_res_4149_; 
v_sz_boxed_4147_ = lean_unbox_usize(v_sz_4141_);
lean_dec(v_sz_4141_);
v_i_boxed_4148_ = lean_unbox_usize(v_i_4142_);
lean_dec(v_i_4142_);
v_res_4149_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__2(v_as_4140_, v_sz_boxed_4147_, v_i_boxed_4148_, v_b_4143_, v___y_4144_, v___y_4145_);
lean_dec(v___y_4145_);
lean_dec_ref(v___y_4144_);
lean_dec_ref(v_as_4140_);
return v_res_4149_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0(lean_object* v_00_u03b2_4150_, lean_object* v_a_4151_, lean_object* v_b_4152_, lean_object* v_x_4153_){
_start:
{
lean_object* v___x_4154_; 
v___x_4154_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_spec__0_spec__0___redArg(v_a_4151_, v_b_4152_, v_x_4153_);
return v___x_4154_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0(lean_object* v_msg_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_, lean_object* v___y_4159_, lean_object* v___y_4160_){
_start:
{
lean_object* v___f_4162_; lean_object* v___x_1240__overap_4163_; lean_object* v___x_4164_; 
v___f_4162_ = ((lean_object*)(l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___closed__0));
v___x_1240__overap_4163_ = lean_panic_fn_borrowed(v___f_4162_, v_msg_4156_);
lean_inc(v___y_4160_);
lean_inc_ref(v___y_4159_);
lean_inc(v___y_4158_);
lean_inc_ref(v___y_4157_);
v___x_4164_ = lean_apply_5(v___x_1240__overap_4163_, v___y_4157_, v___y_4158_, v___y_4159_, v___y_4160_, lean_box(0));
return v___x_4164_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0___boxed(lean_object* v_msg_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_, lean_object* v___y_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_){
_start:
{
lean_object* v_res_4171_; 
v_res_4171_ = l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0(v_msg_4165_, v___y_4166_, v___y_4167_, v___y_4168_, v___y_4169_);
lean_dec(v___y_4169_);
lean_dec_ref(v___y_4168_);
lean_dec(v___y_4167_);
lean_dec_ref(v___y_4166_);
return v_res_4171_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__0(void){
_start:
{
lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; 
v___x_4172_ = lean_box(0);
v___x_4173_ = lean_unsigned_to_nat(16u);
v___x_4174_ = lean_mk_array(v___x_4173_, v___x_4172_);
return v___x_4174_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__1(void){
_start:
{
lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; 
v___x_4175_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosure___closed__0, &l_Lean_Meta_Closure_mkValueTypeClosure___closed__0_once, _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__0);
v___x_4176_ = lean_unsigned_to_nat(0u);
v___x_4177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4177_, 0, v___x_4176_);
lean_ctor_set(v___x_4177_, 1, v___x_4175_);
return v___x_4177_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__3(void){
_start:
{
lean_object* v___x_4180_; lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; 
v___x_4180_ = lean_unsigned_to_nat(1u);
v___x_4181_ = ((lean_object*)(l_Lean_Meta_Closure_mkValueTypeClosure___closed__2));
v___x_4182_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosure___closed__1, &l_Lean_Meta_Closure_mkValueTypeClosure___closed__1_once, _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__1);
v___x_4183_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_4183_, 0, v___x_4182_);
lean_ctor_set(v___x_4183_, 1, v___x_4182_);
lean_ctor_set(v___x_4183_, 2, v___x_4181_);
lean_ctor_set(v___x_4183_, 3, v___x_4180_);
lean_ctor_set(v___x_4183_, 4, v___x_4181_);
lean_ctor_set(v___x_4183_, 5, v___x_4181_);
lean_ctor_set(v___x_4183_, 6, v___x_4181_);
lean_ctor_set(v___x_4183_, 7, v___x_4181_);
lean_ctor_set(v___x_4183_, 8, v___x_4180_);
lean_ctor_set(v___x_4183_, 9, v___x_4181_);
lean_ctor_set(v___x_4183_, 10, v___x_4181_);
lean_ctor_set(v___x_4183_, 11, v___x_4181_);
return v___x_4183_;
}
}
static lean_object* _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__6(void){
_start:
{
lean_object* v___x_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; 
v___x_4186_ = ((lean_object*)(l_Lean_Meta_Closure_mkValueTypeClosure___closed__5));
v___x_4187_ = lean_unsigned_to_nat(2u);
v___x_4188_ = lean_unsigned_to_nat(417u);
v___x_4189_ = ((lean_object*)(l_Lean_Meta_Closure_mkValueTypeClosure___closed__4));
v___x_4190_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__2));
v___x_4191_ = l_mkPanicMessageWithDecl(v___x_4190_, v___x_4189_, v___x_4188_, v___x_4187_, v___x_4186_);
return v___x_4191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosure(lean_object* v_type_4192_, lean_object* v_value_4193_, uint8_t v_zetaDelta_4194_, lean_object* v_a_4195_, lean_object* v_a_4196_, lean_object* v_a_4197_, lean_object* v_a_4198_){
_start:
{
lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; 
v___x_4200_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosure___closed__3, &l_Lean_Meta_Closure_mkValueTypeClosure___closed__3_once, _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__3);
v___x_4201_ = lean_st_mk_ref(v___x_4200_);
v___x_4202_ = l_Lean_Meta_Closure_mkValueTypeClosureAux(v_type_4192_, v_value_4193_, v_zetaDelta_4194_, v___x_4201_, v_a_4195_, v_a_4196_, v_a_4197_, v_a_4198_);
if (lean_obj_tag(v___x_4202_) == 0)
{
lean_object* v_a_4203_; lean_object* v___x_4204_; lean_object* v_fst_4205_; lean_object* v_snd_4206_; lean_object* v_levelParams_4207_; lean_object* v_levelArgs_4208_; lean_object* v_newLocalDecls_4209_; lean_object* v_newLocalDeclsForMVars_4210_; lean_object* v_newLetDecls_4211_; lean_object* v_exprMVarArgs_4212_; lean_object* v_exprFVarArgs_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; 
v_a_4203_ = lean_ctor_get(v___x_4202_, 0);
lean_inc(v_a_4203_);
lean_dec_ref_known(v___x_4202_, 1);
v___x_4204_ = lean_st_ref_get(v___x_4201_);
lean_dec(v___x_4201_);
v_fst_4205_ = lean_ctor_get(v_a_4203_, 0);
lean_inc(v_fst_4205_);
v_snd_4206_ = lean_ctor_get(v_a_4203_, 1);
lean_inc(v_snd_4206_);
lean_dec(v_a_4203_);
v_levelParams_4207_ = lean_ctor_get(v___x_4204_, 2);
lean_inc_ref(v_levelParams_4207_);
v_levelArgs_4208_ = lean_ctor_get(v___x_4204_, 4);
lean_inc_ref(v_levelArgs_4208_);
v_newLocalDecls_4209_ = lean_ctor_get(v___x_4204_, 5);
lean_inc_ref(v_newLocalDecls_4209_);
v_newLocalDeclsForMVars_4210_ = lean_ctor_get(v___x_4204_, 6);
lean_inc_ref(v_newLocalDeclsForMVars_4210_);
v_newLetDecls_4211_ = lean_ctor_get(v___x_4204_, 7);
lean_inc_ref(v_newLetDecls_4211_);
v_exprMVarArgs_4212_ = lean_ctor_get(v___x_4204_, 9);
lean_inc_ref(v_exprMVarArgs_4212_);
v_exprFVarArgs_4213_ = lean_ctor_get(v___x_4204_, 10);
lean_inc_ref(v_exprFVarArgs_4213_);
lean_dec(v___x_4204_);
v___x_4214_ = l_Array_reverse___redArg(v_newLocalDecls_4209_);
v___x_4215_ = l_Array_reverse___redArg(v_exprFVarArgs_4213_);
v___x_4216_ = l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls(v___x_4214_, v___x_4215_, v_newLocalDeclsForMVars_4210_, v_exprMVarArgs_4212_, v_a_4197_, v_a_4198_);
lean_dec_ref(v_newLocalDeclsForMVars_4210_);
if (lean_obj_tag(v___x_4216_) == 0)
{
lean_object* v_a_4217_; lean_object* v___x_4219_; uint8_t v_isShared_4220_; uint8_t v_isSharedCheck_4235_; 
v_a_4217_ = lean_ctor_get(v___x_4216_, 0);
v_isSharedCheck_4235_ = !lean_is_exclusive(v___x_4216_);
if (v_isSharedCheck_4235_ == 0)
{
v___x_4219_ = v___x_4216_;
v_isShared_4220_ = v_isSharedCheck_4235_;
goto v_resetjp_4218_;
}
else
{
lean_inc(v_a_4217_);
lean_dec(v___x_4216_);
v___x_4219_ = lean_box(0);
v_isShared_4220_ = v_isSharedCheck_4235_;
goto v_resetjp_4218_;
}
v_resetjp_4218_:
{
lean_object* v_fst_4221_; lean_object* v_snd_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; uint8_t v___x_4226_; 
v_fst_4221_ = lean_ctor_get(v_a_4217_, 0);
lean_inc(v_fst_4221_);
v_snd_4222_ = lean_ctor_get(v_a_4217_, 1);
lean_inc(v_snd_4222_);
lean_dec(v_a_4217_);
v___x_4223_ = l_Array_reverse___redArg(v_newLetDecls_4211_);
v___x_4224_ = l_Lean_Meta_Closure_mkLambda(v___x_4223_, v_snd_4206_);
lean_dec(v_snd_4206_);
v___x_4225_ = l_Lean_Meta_Closure_mkLambda(v_fst_4221_, v___x_4224_);
lean_dec_ref(v___x_4224_);
v___x_4226_ = l_Lean_Expr_hasFVar(v___x_4225_);
if (v___x_4226_ == 0)
{
lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4231_; 
v___x_4227_ = l_Lean_Meta_Closure_mkForall(v___x_4223_, v_fst_4205_);
lean_dec(v_fst_4205_);
lean_dec_ref(v___x_4223_);
v___x_4228_ = l_Lean_Meta_Closure_mkForall(v_fst_4221_, v___x_4227_);
lean_dec_ref(v___x_4227_);
lean_dec(v_fst_4221_);
v___x_4229_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4229_, 0, v_levelParams_4207_);
lean_ctor_set(v___x_4229_, 1, v___x_4228_);
lean_ctor_set(v___x_4229_, 2, v___x_4225_);
lean_ctor_set(v___x_4229_, 3, v_levelArgs_4208_);
lean_ctor_set(v___x_4229_, 4, v_snd_4222_);
if (v_isShared_4220_ == 0)
{
lean_ctor_set(v___x_4219_, 0, v___x_4229_);
v___x_4231_ = v___x_4219_;
goto v_reusejp_4230_;
}
else
{
lean_object* v_reuseFailAlloc_4232_; 
v_reuseFailAlloc_4232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4232_, 0, v___x_4229_);
v___x_4231_ = v_reuseFailAlloc_4232_;
goto v_reusejp_4230_;
}
v_reusejp_4230_:
{
return v___x_4231_;
}
}
else
{
lean_object* v___x_4233_; lean_object* v___x_4234_; 
lean_dec_ref(v___x_4225_);
lean_dec_ref(v___x_4223_);
lean_dec(v_snd_4222_);
lean_dec(v_fst_4221_);
lean_del_object(v___x_4219_);
lean_dec_ref(v_levelArgs_4208_);
lean_dec_ref(v_levelParams_4207_);
lean_dec(v_fst_4205_);
v___x_4233_ = lean_obj_once(&l_Lean_Meta_Closure_mkValueTypeClosure___closed__6, &l_Lean_Meta_Closure_mkValueTypeClosure___closed__6_once, _init_l_Lean_Meta_Closure_mkValueTypeClosure___closed__6);
v___x_4234_ = l_panic___at___00Lean_Meta_Closure_mkValueTypeClosure_spec__0(v___x_4233_, v_a_4195_, v_a_4196_, v_a_4197_, v_a_4198_);
return v___x_4234_;
}
}
}
else
{
lean_object* v_a_4236_; lean_object* v___x_4238_; uint8_t v_isShared_4239_; uint8_t v_isSharedCheck_4243_; 
lean_dec_ref(v_newLetDecls_4211_);
lean_dec_ref(v_levelArgs_4208_);
lean_dec_ref(v_levelParams_4207_);
lean_dec(v_snd_4206_);
lean_dec(v_fst_4205_);
v_a_4236_ = lean_ctor_get(v___x_4216_, 0);
v_isSharedCheck_4243_ = !lean_is_exclusive(v___x_4216_);
if (v_isSharedCheck_4243_ == 0)
{
v___x_4238_ = v___x_4216_;
v_isShared_4239_ = v_isSharedCheck_4243_;
goto v_resetjp_4237_;
}
else
{
lean_inc(v_a_4236_);
lean_dec(v___x_4216_);
v___x_4238_ = lean_box(0);
v_isShared_4239_ = v_isSharedCheck_4243_;
goto v_resetjp_4237_;
}
v_resetjp_4237_:
{
lean_object* v___x_4241_; 
if (v_isShared_4239_ == 0)
{
v___x_4241_ = v___x_4238_;
goto v_reusejp_4240_;
}
else
{
lean_object* v_reuseFailAlloc_4242_; 
v_reuseFailAlloc_4242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4242_, 0, v_a_4236_);
v___x_4241_ = v_reuseFailAlloc_4242_;
goto v_reusejp_4240_;
}
v_reusejp_4240_:
{
return v___x_4241_;
}
}
}
}
else
{
lean_object* v_a_4244_; lean_object* v___x_4246_; uint8_t v_isShared_4247_; uint8_t v_isSharedCheck_4251_; 
lean_dec(v___x_4201_);
v_a_4244_ = lean_ctor_get(v___x_4202_, 0);
v_isSharedCheck_4251_ = !lean_is_exclusive(v___x_4202_);
if (v_isSharedCheck_4251_ == 0)
{
v___x_4246_ = v___x_4202_;
v_isShared_4247_ = v_isSharedCheck_4251_;
goto v_resetjp_4245_;
}
else
{
lean_inc(v_a_4244_);
lean_dec(v___x_4202_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___boxed(lean_object* v_type_4252_, lean_object* v_value_4253_, lean_object* v_zetaDelta_4254_, lean_object* v_a_4255_, lean_object* v_a_4256_, lean_object* v_a_4257_, lean_object* v_a_4258_, lean_object* v_a_4259_){
_start:
{
uint8_t v_zetaDelta_boxed_4260_; lean_object* v_res_4261_; 
v_zetaDelta_boxed_4260_ = lean_unbox(v_zetaDelta_4254_);
v_res_4261_ = l_Lean_Meta_Closure_mkValueTypeClosure(v_type_4252_, v_value_4253_, v_zetaDelta_boxed_4260_, v_a_4255_, v_a_4256_, v_a_4257_, v_a_4258_);
lean_dec(v_a_4258_);
lean_dec_ref(v_a_4257_);
lean_dec(v_a_4256_);
lean_dec_ref(v_a_4255_);
return v_res_4261_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg(lean_object* v_name_4262_, lean_object* v_levelParams_4263_, lean_object* v_type_4264_, lean_object* v_value_4265_, lean_object* v_hints_4266_, lean_object* v___y_4267_){
_start:
{
lean_object* v___x_4269_; uint8_t v___y_4271_; uint8_t v___y_4278_; lean_object* v_env_4281_; uint8_t v___x_4282_; 
v___x_4269_ = lean_st_ref_get(v___y_4267_);
v_env_4281_ = lean_ctor_get(v___x_4269_, 0);
lean_inc_ref_n(v_env_4281_, 2);
lean_dec(v___x_4269_);
v___x_4282_ = l_Lean_Environment_hasUnsafe(v_env_4281_, v_type_4264_);
if (v___x_4282_ == 0)
{
uint8_t v___x_4283_; 
v___x_4283_ = l_Lean_Environment_hasUnsafe(v_env_4281_, v_value_4265_);
v___y_4278_ = v___x_4283_;
goto v___jp_4277_;
}
else
{
lean_dec_ref(v_env_4281_);
v___y_4278_ = v___x_4282_;
goto v___jp_4277_;
}
v___jp_4270_:
{
lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; 
lean_inc(v_name_4262_);
v___x_4272_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4272_, 0, v_name_4262_);
lean_ctor_set(v___x_4272_, 1, v_levelParams_4263_);
lean_ctor_set(v___x_4272_, 2, v_type_4264_);
v___x_4273_ = lean_box(0);
v___x_4274_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4274_, 0, v_name_4262_);
lean_ctor_set(v___x_4274_, 1, v___x_4273_);
v___x_4275_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_4275_, 0, v___x_4272_);
lean_ctor_set(v___x_4275_, 1, v_value_4265_);
lean_ctor_set(v___x_4275_, 2, v_hints_4266_);
lean_ctor_set(v___x_4275_, 3, v___x_4274_);
lean_ctor_set_uint8(v___x_4275_, sizeof(void*)*4, v___y_4271_);
v___x_4276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4276_, 0, v___x_4275_);
return v___x_4276_;
}
v___jp_4277_:
{
if (v___y_4278_ == 0)
{
uint8_t v___x_4279_; 
v___x_4279_ = 1;
v___y_4271_ = v___x_4279_;
goto v___jp_4270_;
}
else
{
uint8_t v___x_4280_; 
v___x_4280_ = 0;
v___y_4271_ = v___x_4280_;
goto v___jp_4270_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg___boxed(lean_object* v_name_4284_, lean_object* v_levelParams_4285_, lean_object* v_type_4286_, lean_object* v_value_4287_, lean_object* v_hints_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_){
_start:
{
lean_object* v_res_4291_; 
v_res_4291_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg(v_name_4284_, v_levelParams_4285_, v_type_4286_, v_value_4287_, v_hints_4288_, v___y_4289_);
lean_dec(v___y_4289_);
return v_res_4291_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0(lean_object* v_name_4292_, lean_object* v_levelParams_4293_, lean_object* v_type_4294_, lean_object* v_value_4295_, lean_object* v_hints_4296_, lean_object* v___y_4297_, lean_object* v___y_4298_, lean_object* v___y_4299_, lean_object* v___y_4300_){
_start:
{
lean_object* v___x_4302_; 
v___x_4302_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg(v_name_4292_, v_levelParams_4293_, v_type_4294_, v_value_4295_, v_hints_4296_, v___y_4300_);
return v___x_4302_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___boxed(lean_object* v_name_4303_, lean_object* v_levelParams_4304_, lean_object* v_type_4305_, lean_object* v_value_4306_, lean_object* v_hints_4307_, lean_object* v___y_4308_, lean_object* v___y_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_, lean_object* v___y_4312_){
_start:
{
lean_object* v_res_4313_; 
v_res_4313_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0(v_name_4303_, v_levelParams_4304_, v_type_4305_, v_value_4306_, v_hints_4307_, v___y_4308_, v___y_4309_, v___y_4310_, v___y_4311_);
lean_dec(v___y_4311_);
lean_dec_ref(v___y_4310_);
lean_dec(v___y_4309_);
lean_dec_ref(v___y_4308_);
return v_res_4313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinition(lean_object* v_name_4314_, lean_object* v_type_4315_, lean_object* v_value_4316_, uint8_t v_zetaDelta_4317_, uint8_t v_compile_4318_, uint8_t v_logCompileErrors_4319_, lean_object* v_a_4320_, lean_object* v_a_4321_, lean_object* v_a_4322_, lean_object* v_a_4323_){
_start:
{
lean_object* v___x_4325_; 
v___x_4325_ = l_Lean_Meta_Closure_mkValueTypeClosure(v_type_4315_, v_value_4316_, v_zetaDelta_4317_, v_a_4320_, v_a_4321_, v_a_4322_, v_a_4323_);
if (lean_obj_tag(v___x_4325_) == 0)
{
lean_object* v_a_4326_; lean_object* v___x_4328_; uint8_t v_isShared_4329_; uint8_t v_isSharedCheck_4377_; 
v_a_4326_ = lean_ctor_get(v___x_4325_, 0);
v_isSharedCheck_4377_ = !lean_is_exclusive(v___x_4325_);
if (v_isSharedCheck_4377_ == 0)
{
v___x_4328_ = v___x_4325_;
v_isShared_4329_ = v_isSharedCheck_4377_;
goto v_resetjp_4327_;
}
else
{
lean_inc(v_a_4326_);
lean_dec(v___x_4325_);
v___x_4328_ = lean_box(0);
v_isShared_4329_ = v_isSharedCheck_4377_;
goto v_resetjp_4327_;
}
v_resetjp_4327_:
{
lean_object* v___x_4339_; lean_object* v_env_4340_; lean_object* v_levelParams_4341_; lean_object* v_type_4342_; lean_object* v_value_4343_; uint32_t v___x_4344_; uint32_t v___x_4345_; uint32_t v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; lean_object* v_a_4350_; lean_object* v___x_4352_; uint8_t v_isShared_4353_; uint8_t v_isSharedCheck_4376_; 
v___x_4339_ = lean_st_ref_get(v_a_4323_);
v_env_4340_ = lean_ctor_get(v___x_4339_, 0);
lean_inc_ref(v_env_4340_);
lean_dec(v___x_4339_);
v_levelParams_4341_ = lean_ctor_get(v_a_4326_, 0);
v_type_4342_ = lean_ctor_get(v_a_4326_, 1);
v_value_4343_ = lean_ctor_get(v_a_4326_, 2);
lean_inc_ref_n(v_value_4343_, 2);
v___x_4344_ = l_Lean_getMaxHeight(v_env_4340_, v_value_4343_);
v___x_4345_ = 1;
v___x_4346_ = lean_uint32_add(v___x_4344_, v___x_4345_);
v___x_4347_ = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(v___x_4347_, 0, v___x_4346_);
lean_inc_ref(v_levelParams_4341_);
v___x_4348_ = lean_array_to_list(v_levelParams_4341_);
lean_inc_ref(v_type_4342_);
lean_inc(v_name_4314_);
v___x_4349_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkAuxDefinition_spec__0___redArg(v_name_4314_, v___x_4348_, v_type_4342_, v_value_4343_, v___x_4347_, v_a_4323_);
v_a_4350_ = lean_ctor_get(v___x_4349_, 0);
v_isSharedCheck_4376_ = !lean_is_exclusive(v___x_4349_);
if (v_isSharedCheck_4376_ == 0)
{
v___x_4352_ = v___x_4349_;
v_isShared_4353_ = v_isSharedCheck_4376_;
goto v_resetjp_4351_;
}
else
{
lean_inc(v_a_4350_);
lean_dec(v___x_4349_);
v___x_4352_ = lean_box(0);
v_isShared_4353_ = v_isSharedCheck_4376_;
goto v_resetjp_4351_;
}
v___jp_4330_:
{
lean_object* v_levelArgs_4331_; lean_object* v_exprArgs_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4337_; 
v_levelArgs_4331_ = lean_ctor_get(v_a_4326_, 3);
lean_inc_ref(v_levelArgs_4331_);
v_exprArgs_4332_ = lean_ctor_get(v_a_4326_, 4);
lean_inc_ref(v_exprArgs_4332_);
lean_dec(v_a_4326_);
v___x_4333_ = lean_array_to_list(v_levelArgs_4331_);
v___x_4334_ = l_Lean_mkConst(v_name_4314_, v___x_4333_);
v___x_4335_ = l_Lean_mkAppN(v___x_4334_, v_exprArgs_4332_);
lean_dec_ref(v_exprArgs_4332_);
if (v_isShared_4329_ == 0)
{
lean_ctor_set(v___x_4328_, 0, v___x_4335_);
v___x_4337_ = v___x_4328_;
goto v_reusejp_4336_;
}
else
{
lean_object* v_reuseFailAlloc_4338_; 
v_reuseFailAlloc_4338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4338_, 0, v___x_4335_);
v___x_4337_ = v_reuseFailAlloc_4338_;
goto v_reusejp_4336_;
}
v_reusejp_4336_:
{
return v___x_4337_;
}
}
v_resetjp_4351_:
{
lean_object* v___x_4355_; 
if (v_isShared_4353_ == 0)
{
lean_ctor_set_tag(v___x_4352_, 1);
v___x_4355_ = v___x_4352_;
goto v_reusejp_4354_;
}
else
{
lean_object* v_reuseFailAlloc_4375_; 
v_reuseFailAlloc_4375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4375_, 0, v_a_4350_);
v___x_4355_ = v_reuseFailAlloc_4375_;
goto v_reusejp_4354_;
}
v_reusejp_4354_:
{
uint8_t v___x_4356_; lean_object* v___x_4357_; 
v___x_4356_ = 0;
lean_inc_ref(v___x_4355_);
v___x_4357_ = l_Lean_addDecl(v___x_4355_, v___x_4356_, v_a_4322_, v_a_4323_);
if (lean_obj_tag(v___x_4357_) == 0)
{
lean_dec_ref_known(v___x_4357_, 1);
if (v_compile_4318_ == 0)
{
lean_dec_ref(v___x_4355_);
goto v___jp_4330_;
}
else
{
lean_object* v___x_4358_; 
v___x_4358_ = l_Lean_compileDecl(v___x_4355_, v_logCompileErrors_4319_, v_a_4322_, v_a_4323_);
if (lean_obj_tag(v___x_4358_) == 0)
{
lean_dec_ref_known(v___x_4358_, 1);
goto v___jp_4330_;
}
else
{
lean_object* v_a_4359_; lean_object* v___x_4361_; uint8_t v_isShared_4362_; uint8_t v_isSharedCheck_4366_; 
lean_del_object(v___x_4328_);
lean_dec(v_a_4326_);
lean_dec(v_name_4314_);
v_a_4359_ = lean_ctor_get(v___x_4358_, 0);
v_isSharedCheck_4366_ = !lean_is_exclusive(v___x_4358_);
if (v_isSharedCheck_4366_ == 0)
{
v___x_4361_ = v___x_4358_;
v_isShared_4362_ = v_isSharedCheck_4366_;
goto v_resetjp_4360_;
}
else
{
lean_inc(v_a_4359_);
lean_dec(v___x_4358_);
v___x_4361_ = lean_box(0);
v_isShared_4362_ = v_isSharedCheck_4366_;
goto v_resetjp_4360_;
}
v_resetjp_4360_:
{
lean_object* v___x_4364_; 
if (v_isShared_4362_ == 0)
{
v___x_4364_ = v___x_4361_;
goto v_reusejp_4363_;
}
else
{
lean_object* v_reuseFailAlloc_4365_; 
v_reuseFailAlloc_4365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4365_, 0, v_a_4359_);
v___x_4364_ = v_reuseFailAlloc_4365_;
goto v_reusejp_4363_;
}
v_reusejp_4363_:
{
return v___x_4364_;
}
}
}
}
}
else
{
lean_object* v_a_4367_; lean_object* v___x_4369_; uint8_t v_isShared_4370_; uint8_t v_isSharedCheck_4374_; 
lean_dec_ref(v___x_4355_);
lean_del_object(v___x_4328_);
lean_dec(v_a_4326_);
lean_dec(v_name_4314_);
v_a_4367_ = lean_ctor_get(v___x_4357_, 0);
v_isSharedCheck_4374_ = !lean_is_exclusive(v___x_4357_);
if (v_isSharedCheck_4374_ == 0)
{
v___x_4369_ = v___x_4357_;
v_isShared_4370_ = v_isSharedCheck_4374_;
goto v_resetjp_4368_;
}
else
{
lean_inc(v_a_4367_);
lean_dec(v___x_4357_);
v___x_4369_ = lean_box(0);
v_isShared_4370_ = v_isSharedCheck_4374_;
goto v_resetjp_4368_;
}
v_resetjp_4368_:
{
lean_object* v___x_4372_; 
if (v_isShared_4370_ == 0)
{
v___x_4372_ = v___x_4369_;
goto v_reusejp_4371_;
}
else
{
lean_object* v_reuseFailAlloc_4373_; 
v_reuseFailAlloc_4373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4373_, 0, v_a_4367_);
v___x_4372_ = v_reuseFailAlloc_4373_;
goto v_reusejp_4371_;
}
v_reusejp_4371_:
{
return v___x_4372_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4378_; lean_object* v___x_4380_; uint8_t v_isShared_4381_; uint8_t v_isSharedCheck_4385_; 
lean_dec(v_name_4314_);
v_a_4378_ = lean_ctor_get(v___x_4325_, 0);
v_isSharedCheck_4385_ = !lean_is_exclusive(v___x_4325_);
if (v_isSharedCheck_4385_ == 0)
{
v___x_4380_ = v___x_4325_;
v_isShared_4381_ = v_isSharedCheck_4385_;
goto v_resetjp_4379_;
}
else
{
lean_inc(v_a_4378_);
lean_dec(v___x_4325_);
v___x_4380_ = lean_box(0);
v_isShared_4381_ = v_isSharedCheck_4385_;
goto v_resetjp_4379_;
}
v_resetjp_4379_:
{
lean_object* v___x_4383_; 
if (v_isShared_4381_ == 0)
{
v___x_4383_ = v___x_4380_;
goto v_reusejp_4382_;
}
else
{
lean_object* v_reuseFailAlloc_4384_; 
v_reuseFailAlloc_4384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4384_, 0, v_a_4378_);
v___x_4383_ = v_reuseFailAlloc_4384_;
goto v_reusejp_4382_;
}
v_reusejp_4382_:
{
return v___x_4383_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinition___boxed(lean_object* v_name_4386_, lean_object* v_type_4387_, lean_object* v_value_4388_, lean_object* v_zetaDelta_4389_, lean_object* v_compile_4390_, lean_object* v_logCompileErrors_4391_, lean_object* v_a_4392_, lean_object* v_a_4393_, lean_object* v_a_4394_, lean_object* v_a_4395_, lean_object* v_a_4396_){
_start:
{
uint8_t v_zetaDelta_boxed_4397_; uint8_t v_compile_boxed_4398_; uint8_t v_logCompileErrors_boxed_4399_; lean_object* v_res_4400_; 
v_zetaDelta_boxed_4397_ = lean_unbox(v_zetaDelta_4389_);
v_compile_boxed_4398_ = lean_unbox(v_compile_4390_);
v_logCompileErrors_boxed_4399_ = lean_unbox(v_logCompileErrors_4391_);
v_res_4400_ = l_Lean_Meta_mkAuxDefinition(v_name_4386_, v_type_4387_, v_value_4388_, v_zetaDelta_boxed_4397_, v_compile_boxed_4398_, v_logCompileErrors_boxed_4399_, v_a_4392_, v_a_4393_, v_a_4394_, v_a_4395_);
lean_dec(v_a_4395_);
lean_dec_ref(v_a_4394_);
lean_dec(v_a_4393_);
lean_dec_ref(v_a_4392_);
return v_res_4400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinitionFor(lean_object* v_name_4401_, lean_object* v_value_4402_, uint8_t v_zetaDelta_4403_, uint8_t v_compile_4404_, uint8_t v_logCompileErrors_4405_, lean_object* v_a_4406_, lean_object* v_a_4407_, lean_object* v_a_4408_, lean_object* v_a_4409_){
_start:
{
lean_object* v___x_4411_; 
lean_inc(v_a_4409_);
lean_inc_ref(v_a_4408_);
lean_inc(v_a_4407_);
lean_inc_ref(v_a_4406_);
lean_inc_ref(v_value_4402_);
v___x_4411_ = lean_infer_type(v_value_4402_, v_a_4406_, v_a_4407_, v_a_4408_, v_a_4409_);
if (lean_obj_tag(v___x_4411_) == 0)
{
lean_object* v_a_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; 
v_a_4412_ = lean_ctor_get(v___x_4411_, 0);
lean_inc(v_a_4412_);
lean_dec_ref_known(v___x_4411_, 1);
v___x_4413_ = l_Lean_Expr_headBeta(v_a_4412_);
v___x_4414_ = l_Lean_Meta_mkAuxDefinition(v_name_4401_, v___x_4413_, v_value_4402_, v_zetaDelta_4403_, v_compile_4404_, v_logCompileErrors_4405_, v_a_4406_, v_a_4407_, v_a_4408_, v_a_4409_);
return v___x_4414_;
}
else
{
lean_dec_ref(v_value_4402_);
lean_dec(v_name_4401_);
return v___x_4411_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxDefinitionFor___boxed(lean_object* v_name_4415_, lean_object* v_value_4416_, lean_object* v_zetaDelta_4417_, lean_object* v_compile_4418_, lean_object* v_logCompileErrors_4419_, lean_object* v_a_4420_, lean_object* v_a_4421_, lean_object* v_a_4422_, lean_object* v_a_4423_, lean_object* v_a_4424_){
_start:
{
uint8_t v_zetaDelta_boxed_4425_; uint8_t v_compile_boxed_4426_; uint8_t v_logCompileErrors_boxed_4427_; lean_object* v_res_4428_; 
v_zetaDelta_boxed_4425_ = lean_unbox(v_zetaDelta_4417_);
v_compile_boxed_4426_ = lean_unbox(v_compile_4418_);
v_logCompileErrors_boxed_4427_ = lean_unbox(v_logCompileErrors_4419_);
v_res_4428_ = l_Lean_Meta_mkAuxDefinitionFor(v_name_4415_, v_value_4416_, v_zetaDelta_boxed_4425_, v_compile_boxed_4426_, v_logCompileErrors_boxed_4427_, v_a_4420_, v_a_4421_, v_a_4422_, v_a_4423_);
lean_dec(v_a_4423_);
lean_dec_ref(v_a_4422_);
lean_dec(v_a_4421_);
lean_dec_ref(v_a_4420_);
return v_res_4428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxTheorem(lean_object* v_type_4429_, lean_object* v_value_4430_, uint8_t v_zetaDelta_4431_, lean_object* v_kind_x3f_4432_, uint8_t v_cache_4433_, lean_object* v_a_4434_, lean_object* v_a_4435_, lean_object* v_a_4436_, lean_object* v_a_4437_){
_start:
{
lean_object* v___x_4439_; 
v___x_4439_ = l_Lean_Meta_Closure_mkValueTypeClosure(v_type_4429_, v_value_4430_, v_zetaDelta_4431_, v_a_4434_, v_a_4435_, v_a_4436_, v_a_4437_);
if (lean_obj_tag(v___x_4439_) == 0)
{
lean_object* v_a_4440_; lean_object* v_levelParams_4441_; lean_object* v_type_4442_; lean_object* v_value_4443_; lean_object* v_levelArgs_4444_; lean_object* v_exprArgs_4445_; lean_object* v___x_4446_; uint8_t v___x_4447_; lean_object* v___x_4448_; 
v_a_4440_ = lean_ctor_get(v___x_4439_, 0);
lean_inc(v_a_4440_);
lean_dec_ref_known(v___x_4439_, 1);
v_levelParams_4441_ = lean_ctor_get(v_a_4440_, 0);
lean_inc_ref(v_levelParams_4441_);
v_type_4442_ = lean_ctor_get(v_a_4440_, 1);
lean_inc_ref(v_type_4442_);
v_value_4443_ = lean_ctor_get(v_a_4440_, 2);
lean_inc_ref(v_value_4443_);
v_levelArgs_4444_ = lean_ctor_get(v_a_4440_, 3);
lean_inc_ref(v_levelArgs_4444_);
v_exprArgs_4445_ = lean_ctor_get(v_a_4440_, 4);
lean_inc_ref(v_exprArgs_4445_);
lean_dec(v_a_4440_);
v___x_4446_ = lean_array_to_list(v_levelParams_4441_);
v___x_4447_ = 0;
v___x_4448_ = l_Lean_Meta_mkAuxLemma(v___x_4446_, v_type_4442_, v_value_4443_, v_kind_x3f_4432_, v_cache_4433_, v___x_4447_, v___x_4447_, v___x_4447_, v_a_4434_, v_a_4435_, v_a_4436_, v_a_4437_);
if (lean_obj_tag(v___x_4448_) == 0)
{
lean_object* v_a_4449_; lean_object* v___x_4451_; uint8_t v_isShared_4452_; uint8_t v_isSharedCheck_4459_; 
v_a_4449_ = lean_ctor_get(v___x_4448_, 0);
v_isSharedCheck_4459_ = !lean_is_exclusive(v___x_4448_);
if (v_isSharedCheck_4459_ == 0)
{
v___x_4451_ = v___x_4448_;
v_isShared_4452_ = v_isSharedCheck_4459_;
goto v_resetjp_4450_;
}
else
{
lean_inc(v_a_4449_);
lean_dec(v___x_4448_);
v___x_4451_ = lean_box(0);
v_isShared_4452_ = v_isSharedCheck_4459_;
goto v_resetjp_4450_;
}
v_resetjp_4450_:
{
lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4457_; 
v___x_4453_ = lean_array_to_list(v_levelArgs_4444_);
v___x_4454_ = l_Lean_mkConst(v_a_4449_, v___x_4453_);
v___x_4455_ = l_Lean_mkAppN(v___x_4454_, v_exprArgs_4445_);
lean_dec_ref(v_exprArgs_4445_);
if (v_isShared_4452_ == 0)
{
lean_ctor_set(v___x_4451_, 0, v___x_4455_);
v___x_4457_ = v___x_4451_;
goto v_reusejp_4456_;
}
else
{
lean_object* v_reuseFailAlloc_4458_; 
v_reuseFailAlloc_4458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4458_, 0, v___x_4455_);
v___x_4457_ = v_reuseFailAlloc_4458_;
goto v_reusejp_4456_;
}
v_reusejp_4456_:
{
return v___x_4457_;
}
}
}
else
{
lean_object* v_a_4460_; lean_object* v___x_4462_; uint8_t v_isShared_4463_; uint8_t v_isSharedCheck_4467_; 
lean_dec_ref(v_exprArgs_4445_);
lean_dec_ref(v_levelArgs_4444_);
v_a_4460_ = lean_ctor_get(v___x_4448_, 0);
v_isSharedCheck_4467_ = !lean_is_exclusive(v___x_4448_);
if (v_isSharedCheck_4467_ == 0)
{
v___x_4462_ = v___x_4448_;
v_isShared_4463_ = v_isSharedCheck_4467_;
goto v_resetjp_4461_;
}
else
{
lean_inc(v_a_4460_);
lean_dec(v___x_4448_);
v___x_4462_ = lean_box(0);
v_isShared_4463_ = v_isSharedCheck_4467_;
goto v_resetjp_4461_;
}
v_resetjp_4461_:
{
lean_object* v___x_4465_; 
if (v_isShared_4463_ == 0)
{
v___x_4465_ = v___x_4462_;
goto v_reusejp_4464_;
}
else
{
lean_object* v_reuseFailAlloc_4466_; 
v_reuseFailAlloc_4466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4466_, 0, v_a_4460_);
v___x_4465_ = v_reuseFailAlloc_4466_;
goto v_reusejp_4464_;
}
v_reusejp_4464_:
{
return v___x_4465_;
}
}
}
}
else
{
lean_object* v_a_4468_; lean_object* v___x_4470_; uint8_t v_isShared_4471_; uint8_t v_isSharedCheck_4475_; 
lean_dec(v_kind_x3f_4432_);
v_a_4468_ = lean_ctor_get(v___x_4439_, 0);
v_isSharedCheck_4475_ = !lean_is_exclusive(v___x_4439_);
if (v_isSharedCheck_4475_ == 0)
{
v___x_4470_ = v___x_4439_;
v_isShared_4471_ = v_isSharedCheck_4475_;
goto v_resetjp_4469_;
}
else
{
lean_inc(v_a_4468_);
lean_dec(v___x_4439_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkAuxTheorem___boxed(lean_object* v_type_4476_, lean_object* v_value_4477_, lean_object* v_zetaDelta_4478_, lean_object* v_kind_x3f_4479_, lean_object* v_cache_4480_, lean_object* v_a_4481_, lean_object* v_a_4482_, lean_object* v_a_4483_, lean_object* v_a_4484_, lean_object* v_a_4485_){
_start:
{
uint8_t v_zetaDelta_boxed_4486_; uint8_t v_cache_boxed_4487_; lean_object* v_res_4488_; 
v_zetaDelta_boxed_4486_ = lean_unbox(v_zetaDelta_4478_);
v_cache_boxed_4487_ = lean_unbox(v_cache_4480_);
v_res_4488_ = l_Lean_Meta_mkAuxTheorem(v_type_4476_, v_value_4477_, v_zetaDelta_boxed_4486_, v_kind_x3f_4479_, v_cache_boxed_4487_, v_a_4481_, v_a_4482_, v_a_4483_, v_a_4484_);
lean_dec(v_a_4484_);
lean_dec_ref(v_a_4483_);
lean_dec(v_a_4482_);
lean_dec_ref(v_a_4481_);
return v_res_4488_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4489_; lean_object* v___x_4490_; 
v___x_4489_ = lean_box(0);
v___x_4490_ = l_unsafeCast___redArg(v___x_4489_);
return v___x_4490_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; 
v___x_4492_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_));
v___x_4493_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_);
v___x_4494_ = l_Lean_Name_str___override(v___x_4493_, v___x_4492_);
return v___x_4494_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4496_; lean_object* v___x_4497_; lean_object* v___x_4498_; 
v___x_4496_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_));
v___x_4497_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_);
v___x_4498_ = l_Lean_Name_str___override(v___x_4497_, v___x_4496_);
return v___x_4498_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; 
v___x_4499_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8));
v___x_4500_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_);
v___x_4501_ = l_Lean_Name_str___override(v___x_4500_, v___x_4499_);
return v___x_4501_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; 
v___x_4502_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9));
v___x_4503_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_);
v___x_4504_ = l_Lean_Name_str___override(v___x_4503_, v___x_4502_);
return v___x_4504_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; 
v___x_4505_ = lean_unsigned_to_nat(0u);
v___x_4506_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_);
v___x_4507_ = l_Lean_Name_num___override(v___x_4506_, v___x_4505_);
return v___x_4507_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; 
v___x_4508_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_));
v___x_4509_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_);
v___x_4510_ = l_Lean_Name_str___override(v___x_4509_, v___x_4508_);
return v___x_4510_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; 
v___x_4511_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8));
v___x_4512_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_);
v___x_4513_ = l_Lean_Name_str___override(v___x_4512_, v___x_4511_);
return v___x_4513_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; 
v___x_4515_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_));
v___x_4516_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_);
v___x_4517_ = l_Lean_Name_str___override(v___x_4516_, v___x_4515_);
return v___x_4517_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; 
v___x_4519_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_));
v___x_4520_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_);
v___x_4521_ = l_Lean_Name_str___override(v___x_4520_, v___x_4519_);
return v___x_4521_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; 
v___x_4522_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_));
v___x_4523_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_);
v___x_4524_ = l_Lean_Name_str___override(v___x_4523_, v___x_4522_);
return v___x_4524_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; 
v___x_4525_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__8));
v___x_4526_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_);
v___x_4527_ = l_Lean_Name_str___override(v___x_4526_, v___x_4525_);
return v___x_4527_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4528_; lean_object* v___x_4529_; lean_object* v___x_4530_; 
v___x_4528_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__9));
v___x_4529_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_);
v___x_4530_ = l_Lean_Name_str___override(v___x_4529_, v___x_4528_);
return v___x_4530_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4531_; lean_object* v___x_4532_; lean_object* v___x_4533_; 
v___x_4531_ = lean_unsigned_to_nat(210311863u);
v___x_4532_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_);
v___x_4533_ = l_Lean_Name_num___override(v___x_4532_, v___x_4531_);
return v___x_4533_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; 
v___x_4535_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_));
v___x_4536_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_);
v___x_4537_ = l_Lean_Name_str___override(v___x_4536_, v___x_4535_);
return v___x_4537_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; 
v___x_4539_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_));
v___x_4540_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_);
v___x_4541_ = l_Lean_Name_str___override(v___x_4540_, v___x_4539_);
return v___x_4541_;
}
}
static lean_object* _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; 
v___x_4542_ = lean_unsigned_to_nat(2u);
v___x_4543_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_);
v___x_4544_ = l_Lean_Name_num___override(v___x_4543_, v___x_4542_);
return v___x_4544_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4546_; uint8_t v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; 
v___x_4546_ = ((lean_object*)(l___private_Lean_Meta_Closure_0__Lean_Meta_Closure_sortDecls_visit___closed__10));
v___x_4547_ = 0;
v___x_4548_ = lean_obj_once(&l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_, &l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Closure_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_);
v___x_4549_ = l_Lean_registerTraceClass(v___x_4546_, v___x_4547_, v___x_4548_);
return v___x_4549_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2____boxed(lean_object* v_a_4550_){
_start:
{
lean_object* v_res_4551_; 
v_res_4551_ = l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_();
return v_res_4551_;
}
}
lean_object* runtime_initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_AuxLemma(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_ForEachExpr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Closure(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_AuxLemma(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Closure_instInhabitedToProcessElement_default = _init_l_Lean_Meta_Closure_instInhabitedToProcessElement_default();
lean_mark_persistent(l_Lean_Meta_Closure_instInhabitedToProcessElement_default);
l_Lean_Meta_Closure_instInhabitedToProcessElement = _init_l_Lean_Meta_Closure_instInhabitedToProcessElement();
lean_mark_persistent(l_Lean_Meta_Closure_instInhabitedToProcessElement);
res = l___private_Lean_Meta_Closure_0__Lean_Meta_initFn_00___x40_Lean_Meta_Closure_210311863____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Closure(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_AuxLemma(uint8_t builtin);
lean_object* initialize_Lean_Util_ForEachExpr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Closure(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_AuxLemma(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Closure(builtin);
}
#ifdef __cplusplus
}
#endif

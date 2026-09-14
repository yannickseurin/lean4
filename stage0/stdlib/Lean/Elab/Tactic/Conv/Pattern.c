// Lean compiler output
// Module: Lean.Elab.Tactic.Conv.Pattern
// Imports: public import Lean.Elab.Tactic.Simp public import Lean.Elab.Tactic.Conv.Basic
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
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutErrToSorryImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Expr_toHeadIndex(lean_object*);
uint8_t l_Lean_instBEqHeadIndex_beq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_getSimpCongrTheorems___redArg(lean_object*);
extern lean_object* l_Lean_Meta_Simp_neutralConfig;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Meta_Simp_mkContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_getRhs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Result_getProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Context_setMemoize(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Meta_openAbstractMVarsResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_mkConvGoalFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_abstractMVars(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Conv_getLhs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_TSyntax_getNat(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_all_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_all_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_occs_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_occs_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Conv_PatternMatchState_isDone(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_isDone___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Conv_PatternMatchState_isReady(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_isReady___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_skip(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_accept(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "positive integer expected"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__6;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "'pattern' conv tactic failed, pattern was not found"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__7_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "'pattern' conv tactic failed, pattern was found only "};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__9_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__10;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " times but "};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__11_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__12;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " expected"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__13_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__14;
static const lean_array_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__15_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "occurrence list is not distinct"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__16_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__17;
static const lean_closure_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Conv_evalPattern___lam__2___boxed, .m_arity = 10, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__18_value;
static const lean_closure_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Conv_evalPattern___lam__3___boxed, .m_arity = 10, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__19_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__20_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__21_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__21_value)}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__22 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__22_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "occsWildcard"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__23 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__23_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "occsIndexed"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__24 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__24_value;
static const lean_array_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__25 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__25_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__25_value)}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__26 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__26_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "occs"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__27 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__27_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___boxed__const__1 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___boxed(lean_object**);
static const lean_closure_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Conv_evalPattern___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Conv"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "pattern"};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__4_value),LEAN_SCALAR_PTR_LITERAL(51, 212, 92, 235, 115, 8, 100, 36)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__5_value),LEAN_SCALAR_PTR_LITERAL(59, 139, 144, 223, 221, 17, 152, 53)}};
static const lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "evalPattern"};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__3_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Conv_evalPattern___closed__4_value),LEAN_SCALAR_PTR_LITERAL(32, 213, 99, 98, 130, 128, 15, 129)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(91, 226, 241, 79, 162, 140, 83, 90)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(105) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(142) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__0_value),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__1_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(105) << 1) | 1)),((lean_object*)(((size_t)(54) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(105) << 1) | 1)),((lean_object*)(((size_t)(65) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__3_value),((lean_object*)(((size_t)(54) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__4_value),((lean_object*)(((size_t)(65) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg(lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v_a_5_);
if (lean_obj_tag(v___x_7_) == 0)
{
lean_object* v_a_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v_a_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc(v_a_8_);
lean_dec_ref_known(v___x_7_, 1);
v___x_9_ = l_Lean_Meta_Simp_neutralConfig;
v___x_10_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg___closed__0));
v___x_11_ = l_Lean_Options_empty;
v___x_12_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_9_, v___x_10_, v_a_8_, v___x_11_, v_a_3_, v_a_4_, v_a_5_);
return v___x_12_;
}
else
{
lean_object* v_a_13_; lean_object* v___x_15_; uint8_t v_isShared_16_; uint8_t v_isSharedCheck_20_; 
v_a_13_ = lean_ctor_get(v___x_7_, 0);
v_isSharedCheck_20_ = !lean_is_exclusive(v___x_7_);
if (v_isSharedCheck_20_ == 0)
{
v___x_15_ = v___x_7_;
v_isShared_16_ = v_isSharedCheck_20_;
goto v_resetjp_14_;
}
else
{
lean_inc(v_a_13_);
lean_dec(v___x_7_);
v___x_15_ = lean_box(0);
v_isShared_16_ = v_isSharedCheck_20_;
goto v_resetjp_14_;
}
v_resetjp_14_:
{
lean_object* v___x_18_; 
if (v_isShared_16_ == 0)
{
v___x_18_ = v___x_15_;
goto v_reusejp_17_;
}
else
{
lean_object* v_reuseFailAlloc_19_; 
v_reuseFailAlloc_19_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_19_, 0, v_a_13_);
v___x_18_ = v_reuseFailAlloc_19_;
goto v_reusejp_17_;
}
v_reusejp_17_:
{
return v___x_18_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg___boxed(lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_, lean_object* v_a_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg(v_a_21_, v_a_22_, v_a_23_);
lean_dec(v_a_23_);
lean_dec_ref(v_a_22_);
lean_dec_ref(v_a_21_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext(lean_object* v_a_26_, lean_object* v_a_27_, lean_object* v_a_28_, lean_object* v_a_29_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg(v_a_26_, v_a_28_, v_a_29_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___boxed(lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext(v_a_32_, v_a_33_, v_a_34_, v_a_35_);
lean_dec(v_a_35_);
lean_dec_ref(v_a_34_);
lean_dec(v_a_33_);
lean_dec_ref(v_a_32_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f(lean_object* v_pattern_40_, lean_object* v_e_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; uint8_t v___x_49_; 
lean_inc_ref(v_e_41_);
v___x_47_ = l_Lean_Expr_toHeadIndex(v_e_41_);
lean_inc_ref(v_pattern_40_);
v___x_48_ = l_Lean_Expr_toHeadIndex(v_pattern_40_);
v___x_49_ = l_Lean_instBEqHeadIndex_beq(v___x_47_, v___x_48_);
lean_dec(v___x_48_);
lean_dec(v___x_47_);
if (v___x_49_ == 0)
{
lean_object* v___x_50_; lean_object* v___x_51_; 
lean_dec_ref(v_e_41_);
lean_dec_ref(v_pattern_40_);
v___x_50_ = lean_box(0);
v___x_51_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_51_, 0, v___x_50_);
return v___x_51_;
}
else
{
lean_object* v___x_52_; 
lean_inc_ref(v_e_41_);
lean_inc_ref(v_pattern_40_);
v___x_52_ = l_Lean_Meta_isExprDefEqGuarded(v_pattern_40_, v_e_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_);
if (lean_obj_tag(v___x_52_) == 0)
{
lean_object* v_a_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_99_; 
v_a_53_ = lean_ctor_get(v___x_52_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v___x_52_);
if (v_isSharedCheck_99_ == 0)
{
v___x_55_ = v___x_52_;
v_isShared_56_ = v_isSharedCheck_99_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_a_53_);
lean_dec(v___x_52_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_99_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
uint8_t v___x_57_; 
v___x_57_ = lean_unbox(v_a_53_);
lean_dec(v_a_53_);
if (v___x_57_ == 0)
{
uint8_t v___x_58_; 
v___x_58_ = l_Lean_Expr_isApp(v_e_41_);
if (v___x_58_ == 0)
{
lean_object* v___x_59_; lean_object* v___x_61_; 
lean_dec_ref(v_e_41_);
lean_dec_ref(v_pattern_40_);
v___x_59_ = lean_box(0);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 0, v___x_59_);
v___x_61_ = v___x_55_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v___x_59_);
v___x_61_ = v_reuseFailAlloc_62_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
return v___x_61_;
}
}
else
{
lean_object* v___x_63_; lean_object* v___x_64_; 
lean_del_object(v___x_55_);
v___x_63_ = l_Lean_Expr_appFn_x21(v_e_41_);
v___x_64_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f(v_pattern_40_, v___x_63_, v_a_42_, v_a_43_, v_a_44_, v_a_45_);
if (lean_obj_tag(v___x_64_) == 0)
{
lean_object* v_a_65_; 
v_a_65_ = lean_ctor_get(v___x_64_, 0);
lean_inc(v_a_65_);
if (lean_obj_tag(v_a_65_) == 0)
{
lean_dec_ref(v_e_41_);
return v___x_64_;
}
else
{
lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_91_; 
v_isSharedCheck_91_ = !lean_is_exclusive(v___x_64_);
if (v_isSharedCheck_91_ == 0)
{
lean_object* v_unused_92_; 
v_unused_92_ = lean_ctor_get(v___x_64_, 0);
lean_dec(v_unused_92_);
v___x_67_ = v___x_64_;
v_isShared_68_ = v_isSharedCheck_91_;
goto v_resetjp_66_;
}
else
{
lean_dec(v___x_64_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_91_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
lean_object* v_val_69_; lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_90_; 
v_val_69_ = lean_ctor_get(v_a_65_, 0);
v_isSharedCheck_90_ = !lean_is_exclusive(v_a_65_);
if (v_isSharedCheck_90_ == 0)
{
v___x_71_ = v_a_65_;
v_isShared_72_ = v_isSharedCheck_90_;
goto v_resetjp_70_;
}
else
{
lean_inc(v_val_69_);
lean_dec(v_a_65_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_90_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
lean_object* v_fst_73_; lean_object* v_snd_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_89_; 
v_fst_73_ = lean_ctor_get(v_val_69_, 0);
v_snd_74_ = lean_ctor_get(v_val_69_, 1);
v_isSharedCheck_89_ = !lean_is_exclusive(v_val_69_);
if (v_isSharedCheck_89_ == 0)
{
v___x_76_ = v_val_69_;
v_isShared_77_ = v_isSharedCheck_89_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_snd_74_);
lean_inc(v_fst_73_);
lean_dec(v_val_69_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_89_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_81_; 
v___x_78_ = l_Lean_Expr_appArg_x21(v_e_41_);
lean_dec_ref(v_e_41_);
v___x_79_ = lean_array_push(v_snd_74_, v___x_78_);
if (v_isShared_77_ == 0)
{
lean_ctor_set(v___x_76_, 1, v___x_79_);
v___x_81_ = v___x_76_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v_fst_73_);
lean_ctor_set(v_reuseFailAlloc_88_, 1, v___x_79_);
v___x_81_ = v_reuseFailAlloc_88_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
lean_object* v___x_83_; 
if (v_isShared_72_ == 0)
{
lean_ctor_set(v___x_71_, 0, v___x_81_);
v___x_83_ = v___x_71_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v___x_81_);
v___x_83_ = v_reuseFailAlloc_87_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
lean_object* v___x_85_; 
if (v_isShared_68_ == 0)
{
lean_ctor_set(v___x_67_, 0, v___x_83_);
v___x_85_ = v___x_67_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v___x_83_);
v___x_85_ = v_reuseFailAlloc_86_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
return v___x_85_;
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
lean_dec_ref(v_e_41_);
return v___x_64_;
}
}
}
else
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_97_; 
lean_dec_ref(v_pattern_40_);
v___x_93_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f___closed__0));
v___x_94_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_94_, 0, v_e_41_);
lean_ctor_set(v___x_94_, 1, v___x_93_);
v___x_95_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 0, v___x_95_);
v___x_97_ = v___x_55_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v___x_95_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
}
}
else
{
lean_object* v_a_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_107_; 
lean_dec_ref(v_e_41_);
lean_dec_ref(v_pattern_40_);
v_a_100_ = lean_ctor_get(v___x_52_, 0);
v_isSharedCheck_107_ = !lean_is_exclusive(v___x_52_);
if (v_isSharedCheck_107_ == 0)
{
v___x_102_ = v___x_52_;
v_isShared_103_ = v_isSharedCheck_107_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_a_100_);
lean_dec(v___x_52_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_107_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v___x_105_; 
if (v_isShared_103_ == 0)
{
v___x_105_ = v___x_102_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v_a_100_);
v___x_105_ = v_reuseFailAlloc_106_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
return v___x_105_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f___boxed(lean_object* v_pattern_108_, lean_object* v_e_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f(v_pattern_108_, v_e_109_, v_a_110_, v_a_111_, v_a_112_, v_a_113_);
lean_dec(v_a_113_);
lean_dec_ref(v_a_112_);
lean_dec(v_a_111_);
lean_dec_ref(v_a_110_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___redArg(lean_object* v_k_116_, uint8_t v_allowLevelAssignments_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_117_, v_k_116_, v___y_118_, v___y_119_, v___y_120_, v___y_121_);
if (lean_obj_tag(v___x_123_) == 0)
{
lean_object* v_a_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_131_; 
v_a_124_ = lean_ctor_get(v___x_123_, 0);
v_isSharedCheck_131_ = !lean_is_exclusive(v___x_123_);
if (v_isSharedCheck_131_ == 0)
{
v___x_126_ = v___x_123_;
v_isShared_127_ = v_isSharedCheck_131_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_a_124_);
lean_dec(v___x_123_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_131_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
lean_object* v___x_129_; 
if (v_isShared_127_ == 0)
{
v___x_129_ = v___x_126_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v_a_124_);
v___x_129_ = v_reuseFailAlloc_130_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
return v___x_129_;
}
}
}
else
{
lean_object* v_a_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_139_; 
v_a_132_ = lean_ctor_get(v___x_123_, 0);
v_isSharedCheck_139_ = !lean_is_exclusive(v___x_123_);
if (v_isSharedCheck_139_ == 0)
{
v___x_134_ = v___x_123_;
v_isShared_135_ = v_isSharedCheck_139_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_a_132_);
lean_dec(v___x_123_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_139_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_137_; 
if (v_isShared_135_ == 0)
{
v___x_137_ = v___x_134_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v_a_132_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___redArg___boxed(lean_object* v_k_140_, lean_object* v_allowLevelAssignments_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_147_; lean_object* v_res_148_; 
v_allowLevelAssignments_boxed_147_ = lean_unbox(v_allowLevelAssignments_141_);
v_res_148_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___redArg(v_k_140_, v_allowLevelAssignments_boxed_147_, v___y_142_, v___y_143_, v___y_144_, v___y_145_);
lean_dec(v___y_145_);
lean_dec_ref(v___y_144_);
lean_dec(v___y_143_);
lean_dec_ref(v___y_142_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0(lean_object* v_00_u03b1_149_, lean_object* v_k_150_, uint8_t v_allowLevelAssignments_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___redArg(v_k_150_, v_allowLevelAssignments_151_, v___y_152_, v___y_153_, v___y_154_, v___y_155_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___boxed(lean_object* v_00_u03b1_158_, lean_object* v_k_159_, lean_object* v_allowLevelAssignments_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_166_; lean_object* v_res_167_; 
v_allowLevelAssignments_boxed_166_ = lean_unbox(v_allowLevelAssignments_160_);
v_res_167_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0(v_00_u03b1_158_, v_k_159_, v_allowLevelAssignments_boxed_166_, v___y_161_, v___y_162_, v___y_163_, v___y_164_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
lean_dec(v___y_162_);
lean_dec_ref(v___y_161_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0(lean_object* v_pattern_168_, lean_object* v_e_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_){
_start:
{
lean_object* v___y_176_; lean_object* v___x_193_; 
v___x_193_ = l_Lean_Meta_openAbstractMVarsResult(v_pattern_168_, v___y_170_, v___y_171_, v___y_172_, v___y_173_);
if (lean_obj_tag(v___x_193_) == 0)
{
lean_object* v_a_194_; lean_object* v_snd_195_; lean_object* v_snd_196_; lean_object* v___x_197_; uint8_t v_transparency_198_; uint8_t v___x_199_; uint8_t v___x_200_; 
v_a_194_ = lean_ctor_get(v___x_193_, 0);
lean_inc(v_a_194_);
lean_dec_ref_known(v___x_193_, 1);
v_snd_195_ = lean_ctor_get(v_a_194_, 1);
lean_inc(v_snd_195_);
lean_dec(v_a_194_);
v_snd_196_ = lean_ctor_get(v_snd_195_, 1);
lean_inc(v_snd_196_);
lean_dec(v_snd_195_);
v___x_197_ = l_Lean_Meta_Context_config(v___y_170_);
v_transparency_198_ = lean_ctor_get_uint8(v___x_197_, 9);
lean_dec_ref(v___x_197_);
v___x_199_ = 2;
v___x_200_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_198_, v___x_199_);
if (v___x_200_ == 0)
{
lean_object* v_keyedConfig_201_; uint8_t v_trackZetaDelta_202_; lean_object* v_zetaDeltaSet_203_; lean_object* v_lctx_204_; lean_object* v_localInstances_205_; lean_object* v_defEqCtx_x3f_206_; lean_object* v_synthPendingDepth_207_; lean_object* v_customCanUnfoldPredicate_x3f_208_; uint8_t v_univApprox_209_; uint8_t v_inTypeClassResolution_210_; uint8_t v_cacheInferType_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_220_; 
v_keyedConfig_201_ = lean_ctor_get(v___y_170_, 0);
v_trackZetaDelta_202_ = lean_ctor_get_uint8(v___y_170_, sizeof(void*)*7);
v_zetaDeltaSet_203_ = lean_ctor_get(v___y_170_, 1);
v_lctx_204_ = lean_ctor_get(v___y_170_, 2);
v_localInstances_205_ = lean_ctor_get(v___y_170_, 3);
v_defEqCtx_x3f_206_ = lean_ctor_get(v___y_170_, 4);
v_synthPendingDepth_207_ = lean_ctor_get(v___y_170_, 5);
v_customCanUnfoldPredicate_x3f_208_ = lean_ctor_get(v___y_170_, 6);
v_univApprox_209_ = lean_ctor_get_uint8(v___y_170_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_210_ = lean_ctor_get_uint8(v___y_170_, sizeof(void*)*7 + 2);
v_cacheInferType_211_ = lean_ctor_get_uint8(v___y_170_, sizeof(void*)*7 + 3);
v_isSharedCheck_220_ = !lean_is_exclusive(v___y_170_);
if (v_isSharedCheck_220_ == 0)
{
v___x_213_ = v___y_170_;
v_isShared_214_ = v_isSharedCheck_220_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_208_);
lean_inc(v_synthPendingDepth_207_);
lean_inc(v_defEqCtx_x3f_206_);
lean_inc(v_localInstances_205_);
lean_inc(v_lctx_204_);
lean_inc(v_zetaDeltaSet_203_);
lean_inc(v_keyedConfig_201_);
lean_dec(v___y_170_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_220_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_215_; lean_object* v___x_217_; 
v___x_215_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_199_, v_keyedConfig_201_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 0, v___x_215_);
v___x_217_ = v___x_213_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v___x_215_);
lean_ctor_set(v_reuseFailAlloc_219_, 1, v_zetaDeltaSet_203_);
lean_ctor_set(v_reuseFailAlloc_219_, 2, v_lctx_204_);
lean_ctor_set(v_reuseFailAlloc_219_, 3, v_localInstances_205_);
lean_ctor_set(v_reuseFailAlloc_219_, 4, v_defEqCtx_x3f_206_);
lean_ctor_set(v_reuseFailAlloc_219_, 5, v_synthPendingDepth_207_);
lean_ctor_set(v_reuseFailAlloc_219_, 6, v_customCanUnfoldPredicate_x3f_208_);
lean_ctor_set_uint8(v_reuseFailAlloc_219_, sizeof(void*)*7, v_trackZetaDelta_202_);
lean_ctor_set_uint8(v_reuseFailAlloc_219_, sizeof(void*)*7 + 1, v_univApprox_209_);
lean_ctor_set_uint8(v_reuseFailAlloc_219_, sizeof(void*)*7 + 2, v_inTypeClassResolution_210_);
lean_ctor_set_uint8(v_reuseFailAlloc_219_, sizeof(void*)*7 + 3, v_cacheInferType_211_);
v___x_217_ = v_reuseFailAlloc_219_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
lean_object* v___x_218_; 
v___x_218_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f(v_snd_196_, v_e_169_, v___x_217_, v___y_171_, v___y_172_, v___y_173_);
lean_dec_ref(v___x_217_);
v___y_176_ = v___x_218_;
goto v___jp_175_;
}
}
}
else
{
lean_object* v___x_221_; 
v___x_221_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_matchPattern_x3f_go_x3f(v_snd_196_, v_e_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_);
lean_dec_ref(v___y_170_);
v___y_176_ = v___x_221_;
goto v___jp_175_;
}
}
else
{
lean_object* v_a_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_229_; 
lean_dec_ref(v___y_170_);
lean_dec_ref(v_e_169_);
v_a_222_ = lean_ctor_get(v___x_193_, 0);
v_isSharedCheck_229_ = !lean_is_exclusive(v___x_193_);
if (v_isSharedCheck_229_ == 0)
{
v___x_224_ = v___x_193_;
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_a_222_);
lean_dec(v___x_193_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_227_; 
if (v_isShared_225_ == 0)
{
v___x_227_ = v___x_224_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v_a_222_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
}
v___jp_175_:
{
if (lean_obj_tag(v___y_176_) == 0)
{
lean_object* v_a_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_184_; 
v_a_177_ = lean_ctor_get(v___y_176_, 0);
v_isSharedCheck_184_ = !lean_is_exclusive(v___y_176_);
if (v_isSharedCheck_184_ == 0)
{
v___x_179_ = v___y_176_;
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_a_177_);
lean_dec(v___y_176_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_182_; 
if (v_isShared_180_ == 0)
{
v___x_182_ = v___x_179_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_a_177_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
return v___x_182_;
}
}
}
else
{
lean_object* v_a_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_192_; 
v_a_185_ = lean_ctor_get(v___y_176_, 0);
v_isSharedCheck_192_ = !lean_is_exclusive(v___y_176_);
if (v_isSharedCheck_192_ == 0)
{
v___x_187_ = v___y_176_;
v_isShared_188_ = v_isSharedCheck_192_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_a_185_);
lean_dec(v___y_176_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_192_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v___x_190_; 
if (v_isShared_188_ == 0)
{
v___x_190_ = v___x_187_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v_a_185_);
v___x_190_ = v_reuseFailAlloc_191_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
return v___x_190_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0___boxed(lean_object* v_pattern_230_, lean_object* v_e_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0(v_pattern_230_, v_e_231_, v___y_232_, v___y_233_, v___y_234_, v___y_235_);
lean_dec(v___y_235_);
lean_dec_ref(v___y_234_);
lean_dec(v___y_233_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f(lean_object* v_pattern_238_, lean_object* v_e_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_){
_start:
{
lean_object* v___f_245_; uint8_t v___x_246_; lean_object* v___x_247_; 
v___f_245_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_matchPattern_x3f___lam__0___boxed), 7, 2);
lean_closure_set(v___f_245_, 0, v_pattern_238_);
lean_closure_set(v___f_245_, 1, v_e_239_);
v___x_246_ = 0;
v___x_247_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Conv_matchPattern_x3f_spec__0___redArg(v___f_245_, v___x_246_, v_a_240_, v_a_241_, v_a_242_, v_a_243_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_matchPattern_x3f___boxed(lean_object* v_pattern_248_, lean_object* v_e_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_Lean_Elab_Tactic_Conv_matchPattern_x3f(v_pattern_248_, v_e_249_, v_a_250_, v_a_251_, v_a_252_, v_a_253_);
lean_dec(v_a_253_);
lean_dec_ref(v_a_252_);
lean_dec(v_a_251_);
lean_dec_ref(v_a_250_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorIdx(lean_object* v_x_256_){
_start:
{
if (lean_obj_tag(v_x_256_) == 0)
{
lean_object* v___x_257_; 
v___x_257_ = lean_unsigned_to_nat(0u);
return v___x_257_;
}
else
{
lean_object* v___x_258_; 
v___x_258_ = lean_unsigned_to_nat(1u);
return v___x_258_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorIdx___boxed(lean_object* v_x_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorIdx(v_x_259_);
lean_dec_ref(v_x_259_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___redArg(lean_object* v_t_261_, lean_object* v_k_262_){
_start:
{
if (lean_obj_tag(v_t_261_) == 0)
{
lean_object* v_subgoals_263_; lean_object* v___x_264_; 
v_subgoals_263_ = lean_ctor_get(v_t_261_, 0);
lean_inc_ref(v_subgoals_263_);
lean_dec_ref_known(v_t_261_, 1);
v___x_264_ = lean_apply_1(v_k_262_, v_subgoals_263_);
return v___x_264_;
}
else
{
lean_object* v_subgoals_265_; lean_object* v_idx_266_; lean_object* v_remaining_267_; lean_object* v___x_268_; 
v_subgoals_265_ = lean_ctor_get(v_t_261_, 0);
lean_inc_ref(v_subgoals_265_);
v_idx_266_ = lean_ctor_get(v_t_261_, 1);
lean_inc(v_idx_266_);
v_remaining_267_ = lean_ctor_get(v_t_261_, 2);
lean_inc(v_remaining_267_);
lean_dec_ref_known(v_t_261_, 3);
v___x_268_ = lean_apply_3(v_k_262_, v_subgoals_265_, v_idx_266_, v_remaining_267_);
return v___x_268_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim(lean_object* v_motive_269_, lean_object* v_ctorIdx_270_, lean_object* v_t_271_, lean_object* v_h_272_, lean_object* v_k_273_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___redArg(v_t_271_, v_k_273_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___boxed(lean_object* v_motive_275_, lean_object* v_ctorIdx_276_, lean_object* v_t_277_, lean_object* v_h_278_, lean_object* v_k_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim(v_motive_275_, v_ctorIdx_276_, v_t_277_, v_h_278_, v_k_279_);
lean_dec(v_ctorIdx_276_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_all_elim___redArg(lean_object* v_t_281_, lean_object* v_all_282_){
_start:
{
lean_object* v___x_283_; 
v___x_283_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___redArg(v_t_281_, v_all_282_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_all_elim(lean_object* v_motive_284_, lean_object* v_t_285_, lean_object* v_h_286_, lean_object* v_all_287_){
_start:
{
lean_object* v___x_288_; 
v___x_288_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___redArg(v_t_285_, v_all_287_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_occs_elim___redArg(lean_object* v_t_289_, lean_object* v_occs_290_){
_start:
{
lean_object* v___x_291_; 
v___x_291_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___redArg(v_t_289_, v_occs_290_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_occs_elim(lean_object* v_motive_292_, lean_object* v_t_293_, lean_object* v_h_294_, lean_object* v_occs_295_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_ctorElim___redArg(v_t_293_, v_occs_295_);
return v___x_296_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Conv_PatternMatchState_isDone(lean_object* v_x_297_){
_start:
{
if (lean_obj_tag(v_x_297_) == 0)
{
uint8_t v___x_298_; 
v___x_298_ = 0;
return v___x_298_;
}
else
{
lean_object* v_remaining_299_; uint8_t v___x_300_; 
v_remaining_299_ = lean_ctor_get(v_x_297_, 2);
v___x_300_ = l_List_isEmpty___redArg(v_remaining_299_);
return v___x_300_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_isDone___boxed(lean_object* v_x_301_){
_start:
{
uint8_t v_res_302_; lean_object* v_r_303_; 
v_res_302_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_isDone(v_x_301_);
lean_dec_ref(v_x_301_);
v_r_303_ = lean_box(v_res_302_);
return v_r_303_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Conv_PatternMatchState_isReady(lean_object* v_x_304_){
_start:
{
if (lean_obj_tag(v_x_304_) == 0)
{
uint8_t v___x_305_; 
v___x_305_ = 1;
return v___x_305_;
}
else
{
lean_object* v_remaining_306_; 
v_remaining_306_ = lean_ctor_get(v_x_304_, 2);
if (lean_obj_tag(v_remaining_306_) == 1)
{
lean_object* v_head_307_; lean_object* v_idx_308_; lean_object* v_fst_309_; uint8_t v___x_310_; 
v_head_307_ = lean_ctor_get(v_remaining_306_, 0);
v_idx_308_ = lean_ctor_get(v_x_304_, 1);
v_fst_309_ = lean_ctor_get(v_head_307_, 0);
v___x_310_ = lean_nat_dec_eq(v_idx_308_, v_fst_309_);
return v___x_310_;
}
else
{
uint8_t v___x_311_; 
v___x_311_ = 0;
return v___x_311_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_isReady___boxed(lean_object* v_x_312_){
_start:
{
uint8_t v_res_313_; lean_object* v_r_314_; 
v_res_313_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_isReady(v_x_312_);
lean_dec_ref(v_x_312_);
v_r_314_ = lean_box(v_res_313_);
return v_r_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_skip(lean_object* v_x_315_){
_start:
{
if (lean_obj_tag(v_x_315_) == 1)
{
lean_object* v_subgoals_316_; lean_object* v_idx_317_; lean_object* v_remaining_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_327_; 
v_subgoals_316_ = lean_ctor_get(v_x_315_, 0);
v_idx_317_ = lean_ctor_get(v_x_315_, 1);
v_remaining_318_ = lean_ctor_get(v_x_315_, 2);
v_isSharedCheck_327_ = !lean_is_exclusive(v_x_315_);
if (v_isSharedCheck_327_ == 0)
{
v___x_320_ = v_x_315_;
v_isShared_321_ = v_isSharedCheck_327_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_remaining_318_);
lean_inc(v_idx_317_);
lean_inc(v_subgoals_316_);
lean_dec(v_x_315_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_327_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_325_; 
v___x_322_ = lean_unsigned_to_nat(1u);
v___x_323_ = lean_nat_add(v_idx_317_, v___x_322_);
lean_dec(v_idx_317_);
if (v_isShared_321_ == 0)
{
lean_ctor_set(v___x_320_, 1, v___x_323_);
v___x_325_ = v___x_320_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_subgoals_316_);
lean_ctor_set(v_reuseFailAlloc_326_, 1, v___x_323_);
lean_ctor_set(v_reuseFailAlloc_326_, 2, v_remaining_318_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
else
{
return v_x_315_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_PatternMatchState_accept(lean_object* v_mvarId_328_, lean_object* v_x_329_){
_start:
{
if (lean_obj_tag(v_x_329_) == 0)
{
lean_object* v_subgoals_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_338_; 
v_subgoals_330_ = lean_ctor_get(v_x_329_, 0);
v_isSharedCheck_338_ = !lean_is_exclusive(v_x_329_);
if (v_isSharedCheck_338_ == 0)
{
v___x_332_ = v_x_329_;
v_isShared_333_ = v_isSharedCheck_338_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_subgoals_330_);
lean_dec(v_x_329_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_338_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_334_; lean_object* v___x_336_; 
v___x_334_ = lean_array_push(v_subgoals_330_, v_mvarId_328_);
if (v_isShared_333_ == 0)
{
lean_ctor_set(v___x_332_, 0, v___x_334_);
v___x_336_ = v___x_332_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v___x_334_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
else
{
lean_object* v_remaining_339_; 
v_remaining_339_ = lean_ctor_get(v_x_329_, 2);
if (lean_obj_tag(v_remaining_339_) == 1)
{
lean_object* v_head_340_; lean_object* v_subgoals_341_; lean_object* v_idx_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_362_; 
lean_inc_ref(v_remaining_339_);
v_head_340_ = lean_ctor_get(v_remaining_339_, 0);
lean_inc(v_head_340_);
v_subgoals_341_ = lean_ctor_get(v_x_329_, 0);
v_idx_342_ = lean_ctor_get(v_x_329_, 1);
v_isSharedCheck_362_ = !lean_is_exclusive(v_x_329_);
if (v_isSharedCheck_362_ == 0)
{
lean_object* v_unused_363_; 
v_unused_363_ = lean_ctor_get(v_x_329_, 2);
lean_dec(v_unused_363_);
v___x_344_ = v_x_329_;
v_isShared_345_ = v_isSharedCheck_362_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_idx_342_);
lean_inc(v_subgoals_341_);
lean_dec(v_x_329_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_362_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v_tail_346_; lean_object* v_snd_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_360_; 
v_tail_346_ = lean_ctor_get(v_remaining_339_, 1);
lean_inc(v_tail_346_);
lean_dec_ref_known(v_remaining_339_, 2);
v_snd_347_ = lean_ctor_get(v_head_340_, 1);
v_isSharedCheck_360_ = !lean_is_exclusive(v_head_340_);
if (v_isSharedCheck_360_ == 0)
{
lean_object* v_unused_361_; 
v_unused_361_ = lean_ctor_get(v_head_340_, 0);
lean_dec(v_unused_361_);
v___x_349_ = v_head_340_;
v_isShared_350_ = v_isSharedCheck_360_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_snd_347_);
lean_dec(v_head_340_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_360_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_352_; 
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 1, v_mvarId_328_);
lean_ctor_set(v___x_349_, 0, v_snd_347_);
v___x_352_ = v___x_349_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_snd_347_);
lean_ctor_set(v_reuseFailAlloc_359_, 1, v_mvarId_328_);
v___x_352_ = v_reuseFailAlloc_359_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_357_; 
v___x_353_ = lean_array_push(v_subgoals_341_, v___x_352_);
v___x_354_ = lean_unsigned_to_nat(1u);
v___x_355_ = lean_nat_add(v_idx_342_, v___x_354_);
lean_dec(v_idx_342_);
if (v_isShared_345_ == 0)
{
lean_ctor_set(v___x_344_, 2, v_tail_346_);
lean_ctor_set(v___x_344_, 1, v___x_355_);
lean_ctor_set(v___x_344_, 0, v___x_353_);
v___x_357_ = v___x_344_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v___x_353_);
lean_ctor_set(v_reuseFailAlloc_358_, 1, v___x_355_);
lean_ctor_set(v_reuseFailAlloc_358_, 2, v_tail_346_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
}
}
}
else
{
lean_dec(v_mvarId_328_);
return v_x_329_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___redArg(lean_object* v_as_364_, size_t v_sz_365_, size_t v_i_366_, lean_object* v_b_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
uint8_t v___x_373_; 
v___x_373_ = lean_usize_dec_lt(v_i_366_, v_sz_365_);
if (v___x_373_ == 0)
{
lean_object* v___x_374_; 
v___x_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_374_, 0, v_b_367_);
return v___x_374_;
}
else
{
lean_object* v_a_375_; lean_object* v___x_376_; 
v_a_375_ = lean_array_uget_borrowed(v_as_364_, v_i_366_);
lean_inc(v_a_375_);
v___x_376_ = l_Lean_Meta_mkCongrFun(v_b_367_, v_a_375_, v___y_368_, v___y_369_, v___y_370_, v___y_371_);
if (lean_obj_tag(v___x_376_) == 0)
{
lean_object* v_a_377_; size_t v___x_378_; size_t v___x_379_; 
v_a_377_ = lean_ctor_get(v___x_376_, 0);
lean_inc(v_a_377_);
lean_dec_ref_known(v___x_376_, 1);
v___x_378_ = ((size_t)1ULL);
v___x_379_ = lean_usize_add(v_i_366_, v___x_378_);
v_i_366_ = v___x_379_;
v_b_367_ = v_a_377_;
goto _start;
}
else
{
return v___x_376_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___redArg___boxed(lean_object* v_as_381_, lean_object* v_sz_382_, lean_object* v_i_383_, lean_object* v_b_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_){
_start:
{
size_t v_sz_boxed_390_; size_t v_i_boxed_391_; lean_object* v_res_392_; 
v_sz_boxed_390_ = lean_unbox_usize(v_sz_382_);
lean_dec(v_sz_382_);
v_i_boxed_391_ = lean_unbox_usize(v_i_383_);
lean_dec(v_i_383_);
v_res_392_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___redArg(v_as_381_, v_sz_boxed_390_, v_i_boxed_391_, v_b_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec_ref(v_as_381_);
return v_res_392_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__1(void){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_395_ = lean_box(0);
v___x_396_ = l_unsafeCast___redArg(v___x_395_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre(lean_object* v_pattern_397_, lean_object* v_state_398_, lean_object* v_e_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_){
_start:
{
lean_object* v___x_408_; uint8_t v___x_409_; uint8_t v___x_410_; 
v___x_408_ = lean_st_ref_get(v_state_398_);
v___x_409_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_isDone(v___x_408_);
lean_dec(v___x_408_);
v___x_410_ = 1;
if (v___x_409_ == 0)
{
lean_object* v___x_411_; 
v___x_411_ = l_Lean_Elab_Tactic_Conv_matchPattern_x3f(v_pattern_397_, v_e_399_, v_a_403_, v_a_404_, v_a_405_, v_a_406_);
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v_a_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_478_; 
v_a_412_ = lean_ctor_get(v___x_411_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_478_ == 0)
{
v___x_414_ = v___x_411_;
v_isShared_415_ = v_isSharedCheck_478_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_a_412_);
lean_dec(v___x_411_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_478_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
if (lean_obj_tag(v_a_412_) == 1)
{
lean_object* v_val_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_473_; 
v_val_416_ = lean_ctor_get(v_a_412_, 0);
v_isSharedCheck_473_ = !lean_is_exclusive(v_a_412_);
if (v_isSharedCheck_473_ == 0)
{
v___x_418_ = v_a_412_;
v_isShared_419_ = v_isSharedCheck_473_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_val_416_);
lean_dec(v_a_412_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_473_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v_fst_420_; lean_object* v_snd_421_; lean_object* v___x_422_; uint8_t v___x_423_; 
v_fst_420_ = lean_ctor_get(v_val_416_, 0);
lean_inc(v_fst_420_);
v_snd_421_ = lean_ctor_get(v_val_416_, 1);
lean_inc(v_snd_421_);
lean_dec(v_val_416_);
v___x_422_ = lean_st_ref_get(v_state_398_);
v___x_423_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_isReady(v___x_422_);
lean_dec(v___x_422_);
if (v___x_423_ == 0)
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_429_; 
lean_dec(v_snd_421_);
lean_dec(v_fst_420_);
lean_del_object(v___x_418_);
v___x_424_ = lean_st_ref_take(v_state_398_);
v___x_425_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_skip(v___x_424_);
v___x_426_ = lean_st_ref_put(v_state_398_, v___x_425_);
v___x_427_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__0));
if (v_isShared_415_ == 0)
{
lean_ctor_set(v___x_414_, 0, v___x_427_);
v___x_429_ = v___x_414_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_427_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
else
{
lean_object* v___x_431_; lean_object* v___x_432_; 
lean_del_object(v___x_414_);
v___x_431_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__1, &l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__1_once, _init_l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__1);
v___x_432_ = l_Lean_Elab_Tactic_Conv_mkConvGoalFor(v_fst_420_, v___x_431_, v_a_403_, v_a_404_, v_a_405_, v_a_406_);
if (lean_obj_tag(v___x_432_) == 0)
{
lean_object* v_a_433_; lean_object* v_fst_434_; lean_object* v_snd_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; size_t v_sz_440_; size_t v___x_441_; lean_object* v___x_442_; 
v_a_433_ = lean_ctor_get(v___x_432_, 0);
lean_inc(v_a_433_);
lean_dec_ref_known(v___x_432_, 1);
v_fst_434_ = lean_ctor_get(v_a_433_, 0);
lean_inc(v_fst_434_);
v_snd_435_ = lean_ctor_get(v_a_433_, 1);
lean_inc(v_snd_435_);
lean_dec(v_a_433_);
v___x_436_ = lean_st_ref_take(v_state_398_);
v___x_437_ = l_Lean_Expr_mvarId_x21(v_snd_435_);
v___x_438_ = l_Lean_Elab_Tactic_Conv_PatternMatchState_accept(v___x_437_, v___x_436_);
v___x_439_ = lean_st_ref_put(v_state_398_, v___x_438_);
v_sz_440_ = lean_array_size(v_snd_421_);
v___x_441_ = ((size_t)0ULL);
v___x_442_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___redArg(v_snd_421_, v_sz_440_, v___x_441_, v_snd_435_, v_a_403_, v_a_404_, v_a_405_, v_a_406_);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_456_; 
v_a_443_ = lean_ctor_get(v___x_442_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_456_ == 0)
{
v___x_445_ = v___x_442_;
v_isShared_446_ = v_isSharedCheck_456_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_dec(v___x_442_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_456_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_447_; lean_object* v___x_449_; 
v___x_447_ = l_Lean_mkAppN(v_fst_434_, v_snd_421_);
lean_dec(v_snd_421_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 0, v_a_443_);
v___x_449_ = v___x_418_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_a_443_);
v___x_449_ = v_reuseFailAlloc_455_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_453_; 
v___x_450_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_450_, 0, v___x_447_);
lean_ctor_set(v___x_450_, 1, v___x_449_);
lean_ctor_set_uint8(v___x_450_, sizeof(void*)*2, v___x_410_);
v___x_451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
if (v_isShared_446_ == 0)
{
lean_ctor_set(v___x_445_, 0, v___x_451_);
v___x_453_ = v___x_445_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v___x_451_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_464_; 
lean_dec(v_fst_434_);
lean_dec(v_snd_421_);
lean_del_object(v___x_418_);
v_a_457_ = lean_ctor_get(v___x_442_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_464_ == 0)
{
v___x_459_ = v___x_442_;
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_442_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_462_; 
if (v_isShared_460_ == 0)
{
v___x_462_ = v___x_459_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_a_457_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
else
{
lean_object* v_a_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_472_; 
lean_dec(v_snd_421_);
lean_del_object(v___x_418_);
v_a_465_ = lean_ctor_get(v___x_432_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v___x_432_);
if (v_isSharedCheck_472_ == 0)
{
v___x_467_ = v___x_432_;
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_a_465_);
lean_dec(v___x_432_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_472_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_470_; 
if (v_isShared_468_ == 0)
{
v___x_470_ = v___x_467_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v_a_465_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
}
}
}
else
{
lean_object* v___x_474_; lean_object* v___x_476_; 
lean_dec(v_a_412_);
v___x_474_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___closed__0));
if (v_isShared_415_ == 0)
{
lean_ctor_set(v___x_414_, 0, v___x_474_);
v___x_476_ = v___x_414_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v___x_474_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
}
else
{
lean_object* v_a_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_486_; 
v_a_479_ = lean_ctor_get(v___x_411_, 0);
v_isSharedCheck_486_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_486_ == 0)
{
v___x_481_ = v___x_411_;
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_a_479_);
lean_dec(v___x_411_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_484_; 
if (v_isShared_482_ == 0)
{
v___x_484_ = v___x_481_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v_a_479_);
v___x_484_ = v_reuseFailAlloc_485_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
return v___x_484_;
}
}
}
}
else
{
lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
lean_dec_ref(v_pattern_397_);
v___x_487_ = lean_box(0);
v___x_488_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_488_, 0, v_e_399_);
lean_ctor_set(v___x_488_, 1, v___x_487_);
lean_ctor_set_uint8(v___x_488_, sizeof(void*)*2, v___x_410_);
v___x_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_489_, 0, v___x_488_);
v___x_490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
return v___x_490_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___boxed(lean_object* v_pattern_491_, lean_object* v_state_492_, lean_object* v_e_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre(v_pattern_491_, v_state_492_, v_e_493_, v_a_494_, v_a_495_, v_a_496_, v_a_497_, v_a_498_, v_a_499_, v_a_500_);
lean_dec(v_a_500_);
lean_dec_ref(v_a_499_);
lean_dec(v_a_498_);
lean_dec_ref(v_a_497_);
lean_dec(v_a_496_);
lean_dec_ref(v_a_495_);
lean_dec(v_a_494_);
lean_dec(v_state_492_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0(lean_object* v_as_503_, size_t v_sz_504_, size_t v_i_505_, lean_object* v_b_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___redArg(v_as_503_, v_sz_504_, v_i_505_, v_b_506_, v___y_510_, v___y_511_, v___y_512_, v___y_513_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0___boxed(lean_object* v_as_516_, lean_object* v_sz_517_, lean_object* v_i_518_, lean_object* v_b_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_){
_start:
{
size_t v_sz_boxed_528_; size_t v_i_boxed_529_; lean_object* v_res_530_; 
v_sz_boxed_528_ = lean_unbox_usize(v_sz_517_);
lean_dec(v_sz_517_);
v_i_boxed_529_ = lean_unbox_usize(v_i_518_);
lean_dec(v_i_518_);
v_res_530_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre_spec__0(v_as_516_, v_sz_boxed_528_, v_i_boxed_529_, v_b_519_, v___y_520_, v___y_521_, v___y_522_, v___y_523_, v___y_524_, v___y_525_, v___y_526_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v___y_524_);
lean_dec_ref(v___y_523_);
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v_as_516_);
return v_res_530_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_531_ = lean_box(0);
v___x_532_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_533_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_532_);
lean_ctor_set(v___x_533_, 1, v___x_531_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg(){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_535_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg___closed__0);
v___x_536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_536_, 0, v___x_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg___boxed(lean_object* v___y_537_){
_start:
{
lean_object* v_res_538_; 
v_res_538_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg();
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1(lean_object* v_00_u03b1_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_){
_start:
{
lean_object* v___x_549_; 
v___x_549_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg();
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___boxed(lean_object* v_00_u03b1_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1(v_00_u03b1_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_);
lean_dec(v___y_558_);
lean_dec_ref(v___y_557_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
lean_dec(v___y_552_);
lean_dec_ref(v___y_551_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2___redArg(lean_object* v_a_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_){
_start:
{
lean_object* v___x_569_; 
v___x_569_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_561_, v___y_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2___redArg___boxed(lean_object* v_a_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2___redArg(v_a_570_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
lean_dec(v___y_576_);
lean_dec_ref(v___y_575_);
lean_dec(v___y_574_);
lean_dec_ref(v___y_573_);
lean_dec(v___y_572_);
lean_dec_ref(v___y_571_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2(lean_object* v_00_u03b1_579_, lean_object* v_a_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_){
_start:
{
lean_object* v___x_588_; 
v___x_588_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2___boxed(lean_object* v_00_u03b1_589_, lean_object* v_a_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__2(v_00_u03b1_589_, v_a_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_);
lean_dec(v___y_596_);
lean_dec_ref(v___y_595_);
lean_dec(v___y_594_);
lean_dec_ref(v___y_593_);
lean_dec(v___y_592_);
lean_dec_ref(v___y_591_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__0(lean_object* v_e_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_608_, 0, v_e_599_);
v___x_609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_609_, 0, v___x_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__0___boxed(lean_object* v_e_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l_Lean_Elab_Tactic_Conv_evalPattern___lam__0(v_e_610_, v___y_611_, v___y_612_, v___y_613_, v___y_614_, v___y_615_, v___y_616_, v___y_617_);
lean_dec(v___y_617_);
lean_dec_ref(v___y_616_);
lean_dec(v___y_615_);
lean_dec_ref(v___y_614_);
lean_dec(v___y_613_);
lean_dec_ref(v___y_612_);
lean_dec(v___y_611_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__1(lean_object* v___x_620_, uint8_t v___x_621_, lean_object* v_e_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_631_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_631_, 0, v_e_622_);
lean_ctor_set(v___x_631_, 1, v___x_620_);
lean_ctor_set_uint8(v___x_631_, sizeof(void*)*2, v___x_621_);
v___x_632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_632_, 0, v___x_631_);
v___x_633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_633_, 0, v___x_632_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__1___boxed(lean_object* v___x_634_, lean_object* v___x_635_, lean_object* v_e_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_){
_start:
{
uint8_t v___x_15371__boxed_645_; lean_object* v_res_646_; 
v___x_15371__boxed_645_ = lean_unbox(v___x_635_);
v_res_646_ = l_Lean_Elab_Tactic_Conv_evalPattern___lam__1(v___x_634_, v___x_15371__boxed_645_, v_e_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_, v___y_641_, v___y_642_, v___y_643_);
lean_dec(v___y_643_);
lean_dec_ref(v___y_642_);
lean_dec(v___y_641_);
lean_dec_ref(v___y_640_);
lean_dec(v___y_639_);
lean_dec_ref(v___y_638_);
lean_dec(v___y_637_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__2(lean_object* v___x_647_, lean_object* v_x_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_){
_start:
{
lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_657_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_657_, 0, v___x_647_);
v___x_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_658_, 0, v___x_657_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__2___boxed(lean_object* v___x_659_, lean_object* v_x_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_){
_start:
{
lean_object* v_res_669_; 
v_res_669_ = l_Lean_Elab_Tactic_Conv_evalPattern___lam__2(v___x_659_, v_x_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_, v___y_665_, v___y_666_, v___y_667_);
lean_dec(v___y_667_);
lean_dec_ref(v___y_666_);
lean_dec(v___y_665_);
lean_dec_ref(v___y_664_);
lean_dec(v___y_663_);
lean_dec_ref(v___y_662_);
lean_dec(v___y_661_);
lean_dec_ref(v_x_660_);
return v_res_669_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__3(lean_object* v___x_670_, lean_object* v_x_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_){
_start:
{
lean_object* v___x_680_; 
v___x_680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_680_, 0, v___x_670_);
return v___x_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__3___boxed(lean_object* v___x_681_, lean_object* v_x_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = l_Lean_Elab_Tactic_Conv_evalPattern___lam__3(v___x_681_, v_x_682_, v___y_683_, v___y_684_, v___y_685_, v___y_686_, v___y_687_, v___y_688_, v___y_689_);
lean_dec(v___y_689_);
lean_dec_ref(v___y_688_);
lean_dec(v___y_687_);
lean_dec_ref(v___y_686_);
lean_dec(v___y_685_);
lean_dec_ref(v___y_684_);
lean_dec(v___y_683_);
lean_dec_ref(v_x_682_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__4(lean_object* v___x_692_, lean_object* v___x_693_, uint8_t v___x_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_){
_start:
{
lean_object* v___x_702_; 
v___x_702_ = l_Lean_Elab_Term_elabTerm(v___x_692_, v___x_693_, v___x_694_, v___x_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_, v___y_699_, v___y_700_);
if (lean_obj_tag(v___x_702_) == 0)
{
lean_object* v_a_703_; lean_object* v___x_704_; 
v_a_703_ = lean_ctor_get(v___x_702_, 0);
lean_inc(v_a_703_);
lean_dec_ref_known(v___x_702_, 1);
v___x_704_ = l_Lean_Meta_abstractMVars(v_a_703_, v___x_694_, v___y_697_, v___y_698_, v___y_699_, v___y_700_);
return v___x_704_;
}
else
{
lean_object* v_a_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_712_; 
v_a_705_ = lean_ctor_get(v___x_702_, 0);
v_isSharedCheck_712_ = !lean_is_exclusive(v___x_702_);
if (v_isSharedCheck_712_ == 0)
{
v___x_707_ = v___x_702_;
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_a_705_);
lean_dec(v___x_702_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v___x_710_; 
if (v_isShared_708_ == 0)
{
v___x_710_ = v___x_707_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v_a_705_);
v___x_710_ = v_reuseFailAlloc_711_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
return v___x_710_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__4___boxed(lean_object* v___x_713_, lean_object* v___x_714_, lean_object* v___x_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_){
_start:
{
uint8_t v___x_15474__boxed_723_; lean_object* v_res_724_; 
v___x_15474__boxed_723_ = lean_unbox(v___x_715_);
v_res_724_ = l_Lean_Elab_Tactic_Conv_evalPattern___lam__4(v___x_713_, v___x_714_, v___x_15474__boxed_723_, v___y_716_, v___y_717_, v___y_718_, v___y_719_, v___y_720_, v___y_721_);
lean_dec(v___y_721_);
lean_dec_ref(v___y_720_);
lean_dec(v___y_719_);
lean_dec_ref(v___y_718_);
lean_dec(v___y_717_);
lean_dec_ref(v___y_716_);
return v_res_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__5(lean_object* v___x_725_, lean_object* v___f_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_){
_start:
{
lean_object* v_toCold_734_; lean_object* v_currRecDepth_735_; lean_object* v_ref_736_; uint8_t v_diag_737_; uint8_t v_suppressElabErrors_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_747_; 
v_toCold_734_ = lean_ctor_get(v___y_731_, 0);
v_currRecDepth_735_ = lean_ctor_get(v___y_731_, 1);
v_ref_736_ = lean_ctor_get(v___y_731_, 2);
v_diag_737_ = lean_ctor_get_uint8(v___y_731_, sizeof(void*)*3);
v_suppressElabErrors_738_ = lean_ctor_get_uint8(v___y_731_, sizeof(void*)*3 + 1);
v_isSharedCheck_747_ = !lean_is_exclusive(v___y_731_);
if (v_isSharedCheck_747_ == 0)
{
v___x_740_ = v___y_731_;
v_isShared_741_ = v_isSharedCheck_747_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_ref_736_);
lean_inc(v_currRecDepth_735_);
lean_inc(v_toCold_734_);
lean_dec(v___y_731_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_747_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
lean_object* v_ref_742_; lean_object* v___x_744_; 
v_ref_742_ = l_Lean_replaceRef(v___x_725_, v_ref_736_);
lean_dec(v_ref_736_);
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 2, v_ref_742_);
v___x_744_ = v___x_740_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_toCold_734_);
lean_ctor_set(v_reuseFailAlloc_746_, 1, v_currRecDepth_735_);
lean_ctor_set(v_reuseFailAlloc_746_, 2, v_ref_742_);
lean_ctor_set_uint8(v_reuseFailAlloc_746_, sizeof(void*)*3, v_diag_737_);
lean_ctor_set_uint8(v_reuseFailAlloc_746_, sizeof(void*)*3 + 1, v_suppressElabErrors_738_);
v___x_744_ = v_reuseFailAlloc_746_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
lean_object* v___x_745_; 
v___x_745_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v___f_726_, v___y_727_, v___y_728_, v___y_729_, v___y_730_, v___x_744_, v___y_732_);
lean_dec_ref(v___x_744_);
return v___x_745_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__5___boxed(lean_object* v___x_748_, lean_object* v___f_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l_Lean_Elab_Tactic_Conv_evalPattern___lam__5(v___x_748_, v___f_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_, v___y_755_);
lean_dec(v___y_755_);
lean_dec(v___y_753_);
lean_dec_ref(v___y_752_);
lean_dec(v___y_751_);
lean_dec_ref(v___y_750_);
lean_dec(v___x_748_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__5(size_t v_sz_758_, size_t v_i_759_, lean_object* v_bs_760_){
_start:
{
uint8_t v___x_761_; 
v___x_761_ = lean_usize_dec_lt(v_i_759_, v_sz_758_);
if (v___x_761_ == 0)
{
lean_object* v___x_762_; 
v___x_762_ = l_unsafeCast___redArg(v_bs_760_);
lean_dec_ref(v_bs_760_);
return v___x_762_;
}
else
{
lean_object* v_v_763_; lean_object* v___x_764_; lean_object* v_snd_765_; lean_object* v___x_766_; lean_object* v_bs_x27_767_; size_t v___x_768_; size_t v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
v_v_763_ = lean_array_uget_borrowed(v_bs_760_, v_i_759_);
v___x_764_ = l_unsafeCast___redArg(v_v_763_);
v_snd_765_ = lean_ctor_get(v___x_764_, 1);
lean_inc(v_snd_765_);
lean_dec(v___x_764_);
v___x_766_ = lean_unsigned_to_nat(0u);
v_bs_x27_767_ = lean_array_uset(v_bs_760_, v_i_759_, v___x_766_);
v___x_768_ = ((size_t)1ULL);
v___x_769_ = lean_usize_add(v_i_759_, v___x_768_);
v___x_770_ = l_unsafeCast___redArg(v_snd_765_);
lean_dec(v_snd_765_);
v___x_771_ = lean_array_uset(v_bs_x27_767_, v_i_759_, v___x_770_);
v_i_759_ = v___x_769_;
v_bs_760_ = v___x_771_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__5___boxed(lean_object* v_sz_773_, lean_object* v_i_774_, lean_object* v_bs_775_){
_start:
{
size_t v_sz_boxed_776_; size_t v_i_boxed_777_; lean_object* v_res_778_; 
v_sz_boxed_776_ = lean_unbox_usize(v_sz_773_);
lean_dec(v_sz_773_);
v_i_boxed_777_ = lean_unbox_usize(v_i_774_);
lean_dec(v_i_774_);
v_res_778_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__5(v_sz_boxed_776_, v_i_boxed_777_, v_bs_775_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___redArg(lean_object* v_hi_779_, lean_object* v_pivot_780_, lean_object* v_as_781_, lean_object* v_i_782_, lean_object* v_k_783_){
_start:
{
uint8_t v___x_784_; 
v___x_784_ = lean_nat_dec_lt(v_k_783_, v_hi_779_);
if (v___x_784_ == 0)
{
lean_object* v___x_785_; lean_object* v___x_786_; 
lean_dec(v_k_783_);
v___x_785_ = lean_array_fswap(v_as_781_, v_i_782_, v_hi_779_);
v___x_786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_786_, 0, v_i_782_);
lean_ctor_set(v___x_786_, 1, v___x_785_);
return v___x_786_;
}
else
{
lean_object* v___x_787_; lean_object* v_fst_788_; lean_object* v_fst_789_; uint8_t v___x_790_; 
v___x_787_ = lean_array_fget_borrowed(v_as_781_, v_k_783_);
v_fst_788_ = lean_ctor_get(v___x_787_, 0);
v_fst_789_ = lean_ctor_get(v_pivot_780_, 0);
v___x_790_ = lean_nat_dec_lt(v_fst_788_, v_fst_789_);
if (v___x_790_ == 0)
{
lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_791_ = lean_unsigned_to_nat(1u);
v___x_792_ = lean_nat_add(v_k_783_, v___x_791_);
lean_dec(v_k_783_);
v_k_783_ = v___x_792_;
goto _start;
}
else
{
lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_794_ = lean_array_fswap(v_as_781_, v_i_782_, v_k_783_);
v___x_795_ = lean_unsigned_to_nat(1u);
v___x_796_ = lean_nat_add(v_i_782_, v___x_795_);
lean_dec(v_i_782_);
v___x_797_ = lean_nat_add(v_k_783_, v___x_795_);
lean_dec(v_k_783_);
v_as_781_ = v___x_794_;
v_i_782_ = v___x_796_;
v_k_783_ = v___x_797_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___redArg___boxed(lean_object* v_hi_799_, lean_object* v_pivot_800_, lean_object* v_as_801_, lean_object* v_i_802_, lean_object* v_k_803_){
_start:
{
lean_object* v_res_804_; 
v_res_804_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___redArg(v_hi_799_, v_pivot_800_, v_as_801_, v_i_802_, v_k_803_);
lean_dec_ref(v_pivot_800_);
lean_dec(v_hi_799_);
return v_res_804_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0(lean_object* v_x1_805_, lean_object* v_x2_806_){
_start:
{
lean_object* v_fst_807_; lean_object* v_fst_808_; uint8_t v___x_809_; 
v_fst_807_ = lean_ctor_get(v_x1_805_, 0);
v_fst_808_ = lean_ctor_get(v_x2_806_, 0);
v___x_809_ = lean_nat_dec_lt(v_fst_807_, v_fst_808_);
return v___x_809_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0___boxed(lean_object* v_x1_810_, lean_object* v_x2_811_){
_start:
{
uint8_t v_res_812_; lean_object* v_r_813_; 
v_res_812_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0(v_x1_810_, v_x2_811_);
lean_dec_ref(v_x2_811_);
lean_dec_ref(v_x1_810_);
v_r_813_ = lean_box(v_res_812_);
return v_r_813_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg(lean_object* v_n_814_, lean_object* v_as_815_, lean_object* v_lo_816_, lean_object* v_hi_817_){
_start:
{
lean_object* v___y_819_; uint8_t v___x_829_; 
v___x_829_ = lean_nat_dec_lt(v_lo_816_, v_hi_817_);
if (v___x_829_ == 0)
{
lean_dec(v_lo_816_);
return v_as_815_;
}
else
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v_mid_832_; lean_object* v___y_834_; lean_object* v___y_840_; lean_object* v___x_845_; lean_object* v___x_846_; uint8_t v___x_847_; 
v___x_830_ = lean_nat_add(v_lo_816_, v_hi_817_);
v___x_831_ = lean_unsigned_to_nat(1u);
v_mid_832_ = lean_nat_shiftr(v___x_830_, v___x_831_);
lean_dec(v___x_830_);
v___x_845_ = lean_array_fget_borrowed(v_as_815_, v_mid_832_);
v___x_846_ = lean_array_fget_borrowed(v_as_815_, v_lo_816_);
v___x_847_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0(v___x_845_, v___x_846_);
if (v___x_847_ == 0)
{
v___y_840_ = v_as_815_;
goto v___jp_839_;
}
else
{
lean_object* v___x_848_; 
v___x_848_ = lean_array_fswap(v_as_815_, v_lo_816_, v_mid_832_);
v___y_840_ = v___x_848_;
goto v___jp_839_;
}
v___jp_833_:
{
lean_object* v___x_835_; lean_object* v___x_836_; uint8_t v___x_837_; 
v___x_835_ = lean_array_fget_borrowed(v___y_834_, v_mid_832_);
v___x_836_ = lean_array_fget_borrowed(v___y_834_, v_hi_817_);
v___x_837_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0(v___x_835_, v___x_836_);
if (v___x_837_ == 0)
{
lean_dec(v_mid_832_);
v___y_819_ = v___y_834_;
goto v___jp_818_;
}
else
{
lean_object* v___x_838_; 
v___x_838_ = lean_array_fswap(v___y_834_, v_mid_832_, v_hi_817_);
lean_dec(v_mid_832_);
v___y_819_ = v___x_838_;
goto v___jp_818_;
}
}
v___jp_839_:
{
lean_object* v___x_841_; lean_object* v___x_842_; uint8_t v___x_843_; 
v___x_841_ = lean_array_fget_borrowed(v___y_840_, v_hi_817_);
v___x_842_ = lean_array_fget_borrowed(v___y_840_, v_lo_816_);
v___x_843_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___lam__0(v___x_841_, v___x_842_);
if (v___x_843_ == 0)
{
v___y_834_ = v___y_840_;
goto v___jp_833_;
}
else
{
lean_object* v___x_844_; 
v___x_844_ = lean_array_fswap(v___y_840_, v_lo_816_, v_hi_817_);
v___y_834_ = v___x_844_;
goto v___jp_833_;
}
}
}
v___jp_818_:
{
lean_object* v_pivot_820_; lean_object* v___x_821_; lean_object* v_fst_822_; lean_object* v_snd_823_; uint8_t v___x_824_; 
v_pivot_820_ = lean_array_fget(v___y_819_, v_hi_817_);
lean_inc_n(v_lo_816_, 2);
v___x_821_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___redArg(v_hi_817_, v_pivot_820_, v___y_819_, v_lo_816_, v_lo_816_);
lean_dec(v_pivot_820_);
v_fst_822_ = lean_ctor_get(v___x_821_, 0);
lean_inc(v_fst_822_);
v_snd_823_ = lean_ctor_get(v___x_821_, 1);
lean_inc(v_snd_823_);
lean_dec_ref(v___x_821_);
v___x_824_ = lean_nat_dec_le(v_hi_817_, v_fst_822_);
if (v___x_824_ == 0)
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_825_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg(v_n_814_, v_snd_823_, v_lo_816_, v_fst_822_);
v___x_826_ = lean_unsigned_to_nat(1u);
v___x_827_ = lean_nat_add(v_fst_822_, v___x_826_);
lean_dec(v_fst_822_);
v_as_815_ = v___x_825_;
v_lo_816_ = v___x_827_;
goto _start;
}
else
{
lean_dec(v_fst_822_);
lean_dec(v_lo_816_);
return v_snd_823_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg___boxed(lean_object* v_n_849_, lean_object* v_as_850_, lean_object* v_lo_851_, lean_object* v_hi_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg(v_n_849_, v_as_850_, v_lo_851_, v_hi_852_);
lean_dec(v_hi_852_);
lean_dec(v_n_849_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4_spec__5(lean_object* v_msgData_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_){
_start:
{
lean_object* v___x_860_; lean_object* v_env_861_; lean_object* v___x_862_; lean_object* v_toCold_863_; lean_object* v_mctx_864_; lean_object* v_lctx_865_; lean_object* v_options_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_860_ = lean_st_ref_get(v___y_858_);
v_env_861_ = lean_ctor_get(v___x_860_, 0);
lean_inc_ref(v_env_861_);
lean_dec(v___x_860_);
v___x_862_ = lean_st_ref_get(v___y_856_);
v_toCold_863_ = lean_ctor_get(v___y_857_, 0);
v_mctx_864_ = lean_ctor_get(v___x_862_, 0);
lean_inc_ref(v_mctx_864_);
lean_dec(v___x_862_);
v_lctx_865_ = lean_ctor_get(v___y_855_, 2);
v_options_866_ = lean_ctor_get(v_toCold_863_, 2);
lean_inc_ref(v_options_866_);
lean_inc_ref(v_lctx_865_);
v___x_867_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_867_, 0, v_env_861_);
lean_ctor_set(v___x_867_, 1, v_mctx_864_);
lean_ctor_set(v___x_867_, 2, v_lctx_865_);
lean_ctor_set(v___x_867_, 3, v_options_866_);
v___x_868_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_868_, 0, v___x_867_);
lean_ctor_set(v___x_868_, 1, v_msgData_854_);
v___x_869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_869_, 0, v___x_868_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4_spec__5___boxed(lean_object* v_msgData_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4_spec__5(v_msgData_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
lean_dec(v___y_872_);
lean_dec_ref(v___y_871_);
return v_res_876_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(lean_object* v_msg_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_){
_start:
{
lean_object* v_ref_883_; lean_object* v___x_884_; lean_object* v_a_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_893_; 
v_ref_883_ = lean_ctor_get(v___y_880_, 2);
v___x_884_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4_spec__5(v_msg_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_);
v_a_885_ = lean_ctor_get(v___x_884_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_893_ == 0)
{
v___x_887_ = v___x_884_;
v_isShared_888_ = v_isSharedCheck_893_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_a_885_);
lean_dec(v___x_884_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_893_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___x_889_; lean_object* v___x_891_; 
lean_inc(v_ref_883_);
v___x_889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_889_, 0, v_ref_883_);
lean_ctor_set(v___x_889_, 1, v_a_885_);
if (v_isShared_888_ == 0)
{
lean_ctor_set_tag(v___x_887_, 1);
lean_ctor_set(v___x_887_, 0, v___x_889_);
v___x_891_ = v___x_887_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_889_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg___boxed(lean_object* v_msg_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_){
_start:
{
lean_object* v_res_900_; 
v_res_900_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(v_msg_894_, v___y_895_, v___y_896_, v___y_897_, v___y_898_);
lean_dec(v___y_898_);
lean_dec_ref(v___y_897_);
lean_dec(v___y_896_);
lean_dec_ref(v___y_895_);
return v_res_900_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg(lean_object* v_ref_901_, lean_object* v_msg_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_){
_start:
{
lean_object* v_toCold_912_; lean_object* v_currRecDepth_913_; lean_object* v_ref_914_; uint8_t v_diag_915_; uint8_t v_suppressElabErrors_916_; lean_object* v_ref_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v_toCold_912_ = lean_ctor_get(v___y_909_, 0);
v_currRecDepth_913_ = lean_ctor_get(v___y_909_, 1);
v_ref_914_ = lean_ctor_get(v___y_909_, 2);
v_diag_915_ = lean_ctor_get_uint8(v___y_909_, sizeof(void*)*3);
v_suppressElabErrors_916_ = lean_ctor_get_uint8(v___y_909_, sizeof(void*)*3 + 1);
v_ref_917_ = l_Lean_replaceRef(v_ref_901_, v_ref_914_);
lean_inc(v_currRecDepth_913_);
lean_inc_ref(v_toCold_912_);
v___x_918_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_918_, 0, v_toCold_912_);
lean_ctor_set(v___x_918_, 1, v_currRecDepth_913_);
lean_ctor_set(v___x_918_, 2, v_ref_917_);
lean_ctor_set_uint8(v___x_918_, sizeof(void*)*3, v_diag_915_);
lean_ctor_set_uint8(v___x_918_, sizeof(void*)*3 + 1, v_suppressElabErrors_916_);
v___x_919_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(v_msg_902_, v___y_907_, v___y_908_, v___x_918_, v___y_910_);
lean_dec_ref_known(v___x_918_, 3);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg___boxed(lean_object* v_ref_920_, lean_object* v_msg_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_){
_start:
{
lean_object* v_res_931_; 
v_res_931_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg(v_ref_920_, v_msg_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_);
lean_dec(v___y_929_);
lean_dec_ref(v___y_928_);
lean_dec(v___y_927_);
lean_dec_ref(v___y_926_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
lean_dec(v_ref_920_);
return v_res_931_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_933_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__0));
v___x_934_ = l_Lean_stringToMessageData(v___x_933_);
return v___x_934_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg(size_t v_sz_935_, size_t v_i_936_, lean_object* v_bs_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_){
_start:
{
uint8_t v___x_947_; 
v___x_947_ = lean_usize_dec_lt(v_i_936_, v_sz_935_);
if (v___x_947_ == 0)
{
lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_948_ = l_unsafeCast___redArg(v_bs_937_);
lean_dec_ref(v_bs_937_);
v___x_949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_949_, 0, v___x_948_);
return v___x_949_;
}
else
{
lean_object* v_v_950_; lean_object* v___x_951_; lean_object* v_bs_x27_952_; lean_object* v_a_954_; lean_object* v___x_960_; lean_object* v___x_961_; uint8_t v_isZero_962_; 
v_v_950_ = lean_array_uget(v_bs_937_, v_i_936_);
v___x_951_ = lean_unsigned_to_nat(0u);
v_bs_x27_952_ = lean_array_uset(v_bs_937_, v_i_936_, v___x_951_);
v___x_960_ = l_unsafeCast___redArg(v_v_950_);
lean_dec(v_v_950_);
v___x_961_ = l_Lean_TSyntax_getNat(v___x_960_);
v_isZero_962_ = lean_nat_dec_eq(v___x_961_, v___x_951_);
if (v_isZero_962_ == 1)
{
lean_object* v___x_963_; lean_object* v___x_964_; 
lean_dec(v___x_961_);
v___x_963_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___closed__1);
v___x_964_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg(v___x_960_, v___x_963_, v___y_938_, v___y_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_);
lean_dec(v___x_960_);
if (lean_obj_tag(v___x_964_) == 0)
{
lean_object* v_a_965_; 
v_a_965_ = lean_ctor_get(v___x_964_, 0);
lean_inc(v_a_965_);
lean_dec_ref_known(v___x_964_, 1);
v_a_954_ = v_a_965_;
goto v___jp_953_;
}
else
{
lean_object* v_a_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_973_; 
lean_dec_ref(v_bs_x27_952_);
v_a_966_ = lean_ctor_get(v___x_964_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_973_ == 0)
{
v___x_968_ = v___x_964_;
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_a_966_);
lean_dec(v___x_964_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_971_; 
if (v_isShared_969_ == 0)
{
v___x_971_ = v___x_968_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v_a_966_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
}
else
{
lean_object* v___x_974_; lean_object* v_one_975_; lean_object* v_n_976_; lean_object* v___x_977_; 
lean_dec(v___x_960_);
v___x_974_ = lean_usize_to_nat(v_i_936_);
v_one_975_ = lean_unsigned_to_nat(1u);
v_n_976_ = lean_nat_sub(v___x_961_, v_one_975_);
lean_dec(v___x_961_);
v___x_977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_977_, 0, v_n_976_);
lean_ctor_set(v___x_977_, 1, v___x_974_);
v_a_954_ = v___x_977_;
goto v___jp_953_;
}
v___jp_953_:
{
size_t v___x_955_; size_t v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_955_ = ((size_t)1ULL);
v___x_956_ = lean_usize_add(v_i_936_, v___x_955_);
v___x_957_ = l_unsafeCast___redArg(v_a_954_);
lean_dec_ref(v_a_954_);
v___x_958_ = lean_array_uset(v_bs_x27_952_, v_i_936_, v___x_957_);
v_i_936_ = v___x_956_;
v_bs_937_ = v___x_958_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg___boxed(lean_object* v_sz_978_, lean_object* v_i_979_, lean_object* v_bs_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_){
_start:
{
size_t v_sz_boxed_990_; size_t v_i_boxed_991_; lean_object* v_res_992_; 
v_sz_boxed_990_ = lean_unbox_usize(v_sz_978_);
lean_dec(v_sz_978_);
v_i_boxed_991_ = lean_unbox_usize(v_i_979_);
lean_dec(v_i_979_);
v_res_992_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg(v_sz_boxed_990_, v_i_boxed_991_, v_bs_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec(v___y_984_);
lean_dec_ref(v___y_983_);
lean_dec(v___y_982_);
lean_dec_ref(v___y_981_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7(lean_object* v_as_993_, size_t v_sz_994_, size_t v_i_995_, lean_object* v_bs_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_){
_start:
{
lean_object* v___x_1006_; 
v___x_1006_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___redArg(v_sz_994_, v_i_995_, v_bs_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_);
return v___x_1006_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___boxed(lean_object* v_as_1007_, lean_object* v_sz_1008_, lean_object* v_i_1009_, lean_object* v_bs_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_){
_start:
{
size_t v_sz_boxed_1020_; size_t v_i_boxed_1021_; lean_object* v_res_1022_; 
v_sz_boxed_1020_ = lean_unbox_usize(v_sz_1008_);
lean_dec(v_sz_1008_);
v_i_boxed_1021_ = lean_unbox_usize(v_i_1009_);
lean_dec(v_i_1009_);
v_res_1022_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7(v_as_1007_, v_sz_boxed_1020_, v_i_boxed_1021_, v_bs_1010_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_);
lean_dec(v___y_1018_);
lean_dec_ref(v___y_1017_);
lean_dec(v___y_1016_);
lean_dec_ref(v___y_1015_);
lean_dec(v___y_1014_);
lean_dec_ref(v___y_1013_);
lean_dec(v___y_1012_);
lean_dec_ref(v___y_1011_);
lean_dec_ref(v_as_1007_);
return v_res_1022_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12_spec__16___redArg(lean_object* v_x_1023_, lean_object* v_x_1024_, lean_object* v_x_1025_, lean_object* v_x_1026_){
_start:
{
lean_object* v_ks_1027_; lean_object* v_vs_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1052_; 
v_ks_1027_ = lean_ctor_get(v_x_1023_, 0);
v_vs_1028_ = lean_ctor_get(v_x_1023_, 1);
v_isSharedCheck_1052_ = !lean_is_exclusive(v_x_1023_);
if (v_isSharedCheck_1052_ == 0)
{
v___x_1030_ = v_x_1023_;
v_isShared_1031_ = v_isSharedCheck_1052_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_vs_1028_);
lean_inc(v_ks_1027_);
lean_dec(v_x_1023_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1052_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1032_; uint8_t v___x_1033_; 
v___x_1032_ = lean_array_get_size(v_ks_1027_);
v___x_1033_ = lean_nat_dec_lt(v_x_1024_, v___x_1032_);
if (v___x_1033_ == 0)
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1037_; 
lean_dec(v_x_1024_);
v___x_1034_ = lean_array_push(v_ks_1027_, v_x_1025_);
v___x_1035_ = lean_array_push(v_vs_1028_, v_x_1026_);
if (v_isShared_1031_ == 0)
{
lean_ctor_set(v___x_1030_, 1, v___x_1035_);
lean_ctor_set(v___x_1030_, 0, v___x_1034_);
v___x_1037_ = v___x_1030_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v___x_1034_);
lean_ctor_set(v_reuseFailAlloc_1038_, 1, v___x_1035_);
v___x_1037_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
return v___x_1037_;
}
}
else
{
lean_object* v_k_x27_1039_; uint8_t v___x_1040_; 
v_k_x27_1039_ = lean_array_fget_borrowed(v_ks_1027_, v_x_1024_);
v___x_1040_ = l_Lean_instBEqMVarId_beq(v_x_1025_, v_k_x27_1039_);
if (v___x_1040_ == 0)
{
lean_object* v___x_1042_; 
if (v_isShared_1031_ == 0)
{
v___x_1042_ = v___x_1030_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v_ks_1027_);
lean_ctor_set(v_reuseFailAlloc_1046_, 1, v_vs_1028_);
v___x_1042_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1043_ = lean_unsigned_to_nat(1u);
v___x_1044_ = lean_nat_add(v_x_1024_, v___x_1043_);
lean_dec(v_x_1024_);
v_x_1023_ = v___x_1042_;
v_x_1024_ = v___x_1044_;
goto _start;
}
}
else
{
lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1050_; 
v___x_1047_ = lean_array_fset(v_ks_1027_, v_x_1024_, v_x_1025_);
v___x_1048_ = lean_array_fset(v_vs_1028_, v_x_1024_, v_x_1026_);
lean_dec(v_x_1024_);
if (v_isShared_1031_ == 0)
{
lean_ctor_set(v___x_1030_, 1, v___x_1048_);
lean_ctor_set(v___x_1030_, 0, v___x_1047_);
v___x_1050_ = v___x_1030_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v___x_1047_);
lean_ctor_set(v_reuseFailAlloc_1051_, 1, v___x_1048_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12___redArg(lean_object* v_n_1053_, lean_object* v_k_1054_, lean_object* v_v_1055_){
_start:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1056_ = lean_unsigned_to_nat(0u);
v___x_1057_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12_spec__16___redArg(v_n_1053_, v___x_1056_, v_k_1054_, v_v_1055_);
return v___x_1057_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; 
v___x_1058_ = lean_box(0);
v___x_1059_ = l_unsafeCast___redArg(v___x_1058_);
return v___x_1059_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_1060_; 
v___x_1060_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg(lean_object* v_x_1061_, size_t v_x_1062_, size_t v_x_1063_, lean_object* v_x_1064_, lean_object* v_x_1065_){
_start:
{
if (lean_obj_tag(v_x_1061_) == 0)
{
lean_object* v_es_1066_; size_t v___x_1067_; size_t v___x_1068_; lean_object* v_j_1069_; lean_object* v___x_1070_; uint8_t v___x_1071_; 
v_es_1066_ = lean_ctor_get(v_x_1061_, 0);
v___x_1067_ = ((size_t)31ULL);
v___x_1068_ = lean_usize_land(v_x_1062_, v___x_1067_);
v_j_1069_ = lean_usize_to_nat(v___x_1068_);
v___x_1070_ = lean_array_get_size(v_es_1066_);
v___x_1071_ = lean_nat_dec_lt(v_j_1069_, v___x_1070_);
if (v___x_1071_ == 0)
{
lean_dec(v_j_1069_);
lean_dec(v_x_1065_);
lean_dec(v_x_1064_);
return v_x_1061_;
}
else
{
lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1110_; 
lean_inc_ref(v_es_1066_);
v_isSharedCheck_1110_ = !lean_is_exclusive(v_x_1061_);
if (v_isSharedCheck_1110_ == 0)
{
lean_object* v_unused_1111_; 
v_unused_1111_ = lean_ctor_get(v_x_1061_, 0);
lean_dec(v_unused_1111_);
v___x_1073_ = v_x_1061_;
v_isShared_1074_ = v_isSharedCheck_1110_;
goto v_resetjp_1072_;
}
else
{
lean_dec(v_x_1061_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1110_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v_v_1075_; lean_object* v___x_1076_; lean_object* v_xs_x27_1077_; lean_object* v___y_1079_; 
v_v_1075_ = lean_array_fget(v_es_1066_, v_j_1069_);
v___x_1076_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__0);
v_xs_x27_1077_ = lean_array_fset(v_es_1066_, v_j_1069_, v___x_1076_);
switch(lean_obj_tag(v_v_1075_))
{
case 0:
{
lean_object* v_key_1084_; lean_object* v_val_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1095_; 
v_key_1084_ = lean_ctor_get(v_v_1075_, 0);
v_val_1085_ = lean_ctor_get(v_v_1075_, 1);
v_isSharedCheck_1095_ = !lean_is_exclusive(v_v_1075_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1087_ = v_v_1075_;
v_isShared_1088_ = v_isSharedCheck_1095_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_val_1085_);
lean_inc(v_key_1084_);
lean_dec(v_v_1075_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1095_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
uint8_t v___x_1089_; 
v___x_1089_ = l_Lean_instBEqMVarId_beq(v_x_1064_, v_key_1084_);
if (v___x_1089_ == 0)
{
lean_object* v___x_1090_; lean_object* v___x_1091_; 
lean_del_object(v___x_1087_);
v___x_1090_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1084_, v_val_1085_, v_x_1064_, v_x_1065_);
v___x_1091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1090_);
v___y_1079_ = v___x_1091_;
goto v___jp_1078_;
}
else
{
lean_object* v___x_1093_; 
lean_dec(v_val_1085_);
lean_dec(v_key_1084_);
if (v_isShared_1088_ == 0)
{
lean_ctor_set(v___x_1087_, 1, v_x_1065_);
lean_ctor_set(v___x_1087_, 0, v_x_1064_);
v___x_1093_ = v___x_1087_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v_x_1064_);
lean_ctor_set(v_reuseFailAlloc_1094_, 1, v_x_1065_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
v___y_1079_ = v___x_1093_;
goto v___jp_1078_;
}
}
}
}
case 1:
{
lean_object* v_node_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1108_; 
v_node_1096_ = lean_ctor_get(v_v_1075_, 0);
v_isSharedCheck_1108_ = !lean_is_exclusive(v_v_1075_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1098_ = v_v_1075_;
v_isShared_1099_ = v_isSharedCheck_1108_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_node_1096_);
lean_dec(v_v_1075_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1108_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
size_t v___x_1100_; size_t v___x_1101_; size_t v___x_1102_; size_t v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1106_; 
v___x_1100_ = ((size_t)5ULL);
v___x_1101_ = lean_usize_shift_right(v_x_1062_, v___x_1100_);
v___x_1102_ = ((size_t)1ULL);
v___x_1103_ = lean_usize_add(v_x_1063_, v___x_1102_);
v___x_1104_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg(v_node_1096_, v___x_1101_, v___x_1103_, v_x_1064_, v_x_1065_);
if (v_isShared_1099_ == 0)
{
lean_ctor_set(v___x_1098_, 0, v___x_1104_);
v___x_1106_ = v___x_1098_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___x_1104_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
v___y_1079_ = v___x_1106_;
goto v___jp_1078_;
}
}
}
default: 
{
lean_object* v___x_1109_; 
v___x_1109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1109_, 0, v_x_1064_);
lean_ctor_set(v___x_1109_, 1, v_x_1065_);
v___y_1079_ = v___x_1109_;
goto v___jp_1078_;
}
}
v___jp_1078_:
{
lean_object* v___x_1080_; lean_object* v___x_1082_; 
v___x_1080_ = lean_array_fset(v_xs_x27_1077_, v_j_1069_, v___y_1079_);
lean_dec(v_j_1069_);
if (v_isShared_1074_ == 0)
{
lean_ctor_set(v___x_1073_, 0, v___x_1080_);
v___x_1082_ = v___x_1073_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v___x_1080_);
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
else
{
lean_object* v_ks_1112_; lean_object* v_vs_1113_; lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1131_; 
v_ks_1112_ = lean_ctor_get(v_x_1061_, 0);
v_vs_1113_ = lean_ctor_get(v_x_1061_, 1);
v_isSharedCheck_1131_ = !lean_is_exclusive(v_x_1061_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1115_ = v_x_1061_;
v_isShared_1116_ = v_isSharedCheck_1131_;
goto v_resetjp_1114_;
}
else
{
lean_inc(v_vs_1113_);
lean_inc(v_ks_1112_);
lean_dec(v_x_1061_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1131_;
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
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v_ks_1112_);
lean_ctor_set(v_reuseFailAlloc_1130_, 1, v_vs_1113_);
v___x_1118_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
lean_object* v_newNode_1119_; size_t v___x_1120_; uint8_t v___x_1121_; 
v_newNode_1119_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12___redArg(v___x_1118_, v_x_1064_, v_x_1065_);
v___x_1120_ = ((size_t)7ULL);
v___x_1121_ = lean_usize_dec_le(v___x_1120_, v_x_1063_);
if (v___x_1121_ == 0)
{
lean_object* v___x_1122_; lean_object* v___x_1123_; uint8_t v___x_1124_; 
v___x_1122_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1119_);
v___x_1123_ = lean_unsigned_to_nat(4u);
v___x_1124_ = lean_nat_dec_lt(v___x_1122_, v___x_1123_);
lean_dec(v___x_1122_);
if (v___x_1124_ == 0)
{
lean_object* v_ks_1125_; lean_object* v_vs_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v_ks_1125_ = lean_ctor_get(v_newNode_1119_, 0);
lean_inc_ref(v_ks_1125_);
v_vs_1126_ = lean_ctor_get(v_newNode_1119_, 1);
lean_inc_ref(v_vs_1126_);
lean_dec_ref(v_newNode_1119_);
v___x_1127_ = lean_unsigned_to_nat(0u);
v___x_1128_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___closed__1);
v___x_1129_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___redArg(v_x_1063_, v_ks_1125_, v_vs_1126_, v___x_1127_, v___x_1128_);
lean_dec_ref(v_vs_1126_);
lean_dec_ref(v_ks_1125_);
return v___x_1129_;
}
else
{
return v_newNode_1119_;
}
}
else
{
return v_newNode_1119_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___redArg(size_t v_depth_1132_, lean_object* v_keys_1133_, lean_object* v_vals_1134_, lean_object* v_i_1135_, lean_object* v_entries_1136_){
_start:
{
lean_object* v___x_1137_; uint8_t v___x_1138_; 
v___x_1137_ = lean_array_get_size(v_keys_1133_);
v___x_1138_ = lean_nat_dec_lt(v_i_1135_, v___x_1137_);
if (v___x_1138_ == 0)
{
lean_dec(v_i_1135_);
return v_entries_1136_;
}
else
{
lean_object* v_k_1139_; lean_object* v_v_1140_; uint64_t v___x_1141_; size_t v_h_1142_; size_t v___x_1143_; lean_object* v___x_1144_; size_t v___x_1145_; size_t v___x_1146_; size_t v___x_1147_; size_t v_h_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
v_k_1139_ = lean_array_fget_borrowed(v_keys_1133_, v_i_1135_);
v_v_1140_ = lean_array_fget_borrowed(v_vals_1134_, v_i_1135_);
v___x_1141_ = l_Lean_instHashableMVarId_hash(v_k_1139_);
v_h_1142_ = lean_uint64_to_usize(v___x_1141_);
v___x_1143_ = ((size_t)5ULL);
v___x_1144_ = lean_unsigned_to_nat(1u);
v___x_1145_ = ((size_t)1ULL);
v___x_1146_ = lean_usize_sub(v_depth_1132_, v___x_1145_);
v___x_1147_ = lean_usize_mul(v___x_1143_, v___x_1146_);
v_h_1148_ = lean_usize_shift_right(v_h_1142_, v___x_1147_);
v___x_1149_ = lean_nat_add(v_i_1135_, v___x_1144_);
lean_dec(v_i_1135_);
lean_inc(v_v_1140_);
lean_inc(v_k_1139_);
v___x_1150_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg(v_entries_1136_, v_h_1148_, v_depth_1132_, v_k_1139_, v_v_1140_);
v_i_1135_ = v___x_1149_;
v_entries_1136_ = v___x_1150_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___redArg___boxed(lean_object* v_depth_1152_, lean_object* v_keys_1153_, lean_object* v_vals_1154_, lean_object* v_i_1155_, lean_object* v_entries_1156_){
_start:
{
size_t v_depth_boxed_1157_; lean_object* v_res_1158_; 
v_depth_boxed_1157_ = lean_unbox_usize(v_depth_1152_);
lean_dec(v_depth_1152_);
v_res_1158_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___redArg(v_depth_boxed_1157_, v_keys_1153_, v_vals_1154_, v_i_1155_, v_entries_1156_);
lean_dec_ref(v_vals_1154_);
lean_dec_ref(v_keys_1153_);
return v_res_1158_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg___boxed(lean_object* v_x_1159_, lean_object* v_x_1160_, lean_object* v_x_1161_, lean_object* v_x_1162_, lean_object* v_x_1163_){
_start:
{
size_t v_x_15969__boxed_1164_; size_t v_x_15970__boxed_1165_; lean_object* v_res_1166_; 
v_x_15969__boxed_1164_ = lean_unbox_usize(v_x_1160_);
lean_dec(v_x_1160_);
v_x_15970__boxed_1165_ = lean_unbox_usize(v_x_1161_);
lean_dec(v_x_1161_);
v_res_1166_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg(v_x_1159_, v_x_15969__boxed_1164_, v_x_15970__boxed_1165_, v_x_1162_, v_x_1163_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3___redArg(lean_object* v_x_1167_, lean_object* v_x_1168_, lean_object* v_x_1169_){
_start:
{
uint64_t v___x_1170_; size_t v___x_1171_; size_t v___x_1172_; lean_object* v___x_1173_; 
v___x_1170_ = l_Lean_instHashableMVarId_hash(v_x_1168_);
v___x_1171_ = lean_uint64_to_usize(v___x_1170_);
v___x_1172_ = ((size_t)1ULL);
v___x_1173_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg(v_x_1167_, v___x_1171_, v___x_1172_, v_x_1168_, v_x_1169_);
return v___x_1173_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg(lean_object* v_mvarId_1174_, lean_object* v_val_1175_, lean_object* v___y_1176_){
_start:
{
lean_object* v___x_1178_; lean_object* v_mctx_1179_; lean_object* v_cache_1180_; lean_object* v_zetaDeltaFVarIds_1181_; lean_object* v_postponed_1182_; lean_object* v_diag_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1212_; 
v___x_1178_ = lean_st_ref_take(v___y_1176_);
v_mctx_1179_ = lean_ctor_get(v___x_1178_, 0);
v_cache_1180_ = lean_ctor_get(v___x_1178_, 1);
v_zetaDeltaFVarIds_1181_ = lean_ctor_get(v___x_1178_, 2);
v_postponed_1182_ = lean_ctor_get(v___x_1178_, 3);
v_diag_1183_ = lean_ctor_get(v___x_1178_, 4);
v_isSharedCheck_1212_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1185_ = v___x_1178_;
v_isShared_1186_ = v_isSharedCheck_1212_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_diag_1183_);
lean_inc(v_postponed_1182_);
lean_inc(v_zetaDeltaFVarIds_1181_);
lean_inc(v_cache_1180_);
lean_inc(v_mctx_1179_);
lean_dec(v___x_1178_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1212_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v_depth_1187_; lean_object* v_levelAssignDepth_1188_; lean_object* v_lmvarCounter_1189_; lean_object* v_mvarCounter_1190_; lean_object* v_lDecls_1191_; lean_object* v_decls_1192_; lean_object* v_userNames_1193_; lean_object* v_lAssignment_1194_; lean_object* v_eAssignment_1195_; lean_object* v_dAssignment_1196_; lean_object* v_instanceTypedMVars_1197_; lean_object* v___x_1199_; uint8_t v_isShared_1200_; uint8_t v_isSharedCheck_1211_; 
v_depth_1187_ = lean_ctor_get(v_mctx_1179_, 0);
v_levelAssignDepth_1188_ = lean_ctor_get(v_mctx_1179_, 1);
v_lmvarCounter_1189_ = lean_ctor_get(v_mctx_1179_, 2);
v_mvarCounter_1190_ = lean_ctor_get(v_mctx_1179_, 3);
v_lDecls_1191_ = lean_ctor_get(v_mctx_1179_, 4);
v_decls_1192_ = lean_ctor_get(v_mctx_1179_, 5);
v_userNames_1193_ = lean_ctor_get(v_mctx_1179_, 6);
v_lAssignment_1194_ = lean_ctor_get(v_mctx_1179_, 7);
v_eAssignment_1195_ = lean_ctor_get(v_mctx_1179_, 8);
v_dAssignment_1196_ = lean_ctor_get(v_mctx_1179_, 9);
v_instanceTypedMVars_1197_ = lean_ctor_get(v_mctx_1179_, 10);
v_isSharedCheck_1211_ = !lean_is_exclusive(v_mctx_1179_);
if (v_isSharedCheck_1211_ == 0)
{
v___x_1199_ = v_mctx_1179_;
v_isShared_1200_ = v_isSharedCheck_1211_;
goto v_resetjp_1198_;
}
else
{
lean_inc(v_instanceTypedMVars_1197_);
lean_inc(v_dAssignment_1196_);
lean_inc(v_eAssignment_1195_);
lean_inc(v_lAssignment_1194_);
lean_inc(v_userNames_1193_);
lean_inc(v_decls_1192_);
lean_inc(v_lDecls_1191_);
lean_inc(v_mvarCounter_1190_);
lean_inc(v_lmvarCounter_1189_);
lean_inc(v_levelAssignDepth_1188_);
lean_inc(v_depth_1187_);
lean_dec(v_mctx_1179_);
v___x_1199_ = lean_box(0);
v_isShared_1200_ = v_isSharedCheck_1211_;
goto v_resetjp_1198_;
}
v_resetjp_1198_:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1204_; 
v___x_1201_ = lean_box(0);
v___x_1202_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3___redArg(v_eAssignment_1195_, v_mvarId_1174_, v_val_1175_);
if (v_isShared_1200_ == 0)
{
lean_ctor_set(v___x_1199_, 8, v___x_1202_);
v___x_1204_ = v___x_1199_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v_depth_1187_);
lean_ctor_set(v_reuseFailAlloc_1210_, 1, v_levelAssignDepth_1188_);
lean_ctor_set(v_reuseFailAlloc_1210_, 2, v_lmvarCounter_1189_);
lean_ctor_set(v_reuseFailAlloc_1210_, 3, v_mvarCounter_1190_);
lean_ctor_set(v_reuseFailAlloc_1210_, 4, v_lDecls_1191_);
lean_ctor_set(v_reuseFailAlloc_1210_, 5, v_decls_1192_);
lean_ctor_set(v_reuseFailAlloc_1210_, 6, v_userNames_1193_);
lean_ctor_set(v_reuseFailAlloc_1210_, 7, v_lAssignment_1194_);
lean_ctor_set(v_reuseFailAlloc_1210_, 8, v___x_1202_);
lean_ctor_set(v_reuseFailAlloc_1210_, 9, v_dAssignment_1196_);
lean_ctor_set(v_reuseFailAlloc_1210_, 10, v_instanceTypedMVars_1197_);
v___x_1204_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
lean_object* v___x_1206_; 
if (v_isShared_1186_ == 0)
{
lean_ctor_set(v___x_1185_, 0, v___x_1204_);
v___x_1206_ = v___x_1185_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v___x_1204_);
lean_ctor_set(v_reuseFailAlloc_1209_, 1, v_cache_1180_);
lean_ctor_set(v_reuseFailAlloc_1209_, 2, v_zetaDeltaFVarIds_1181_);
lean_ctor_set(v_reuseFailAlloc_1209_, 3, v_postponed_1182_);
lean_ctor_set(v_reuseFailAlloc_1209_, 4, v_diag_1183_);
v___x_1206_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1207_ = lean_st_ref_put(v___y_1176_, v___x_1206_);
v___x_1208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1208_, 0, v___x_1201_);
return v___x_1208_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg___boxed(lean_object* v_mvarId_1213_, lean_object* v_val_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_){
_start:
{
lean_object* v_res_1217_; 
v_res_1217_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg(v_mvarId_1213_, v_val_1214_, v___y_1215_);
lean_dec(v___y_1215_);
return v_res_1217_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0(lean_object* v_x1_1218_, lean_object* v_x2_1219_){
_start:
{
lean_object* v_fst_1220_; lean_object* v_fst_1221_; uint8_t v___x_1222_; 
v_fst_1220_ = lean_ctor_get(v_x1_1218_, 0);
v_fst_1221_ = lean_ctor_get(v_x2_1219_, 0);
v___x_1222_ = lean_nat_dec_lt(v_fst_1220_, v_fst_1221_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0___boxed(lean_object* v_x1_1223_, lean_object* v_x2_1224_){
_start:
{
uint8_t v_res_1225_; lean_object* v_r_1226_; 
v_res_1225_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0(v_x1_1223_, v_x2_1224_);
lean_dec_ref(v_x2_1224_);
lean_dec_ref(v_x1_1223_);
v_r_1226_ = lean_box(v_res_1225_);
return v_r_1226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___redArg(lean_object* v_hi_1227_, lean_object* v_pivot_1228_, lean_object* v_as_1229_, lean_object* v_i_1230_, lean_object* v_k_1231_){
_start:
{
uint8_t v___x_1232_; 
v___x_1232_ = lean_nat_dec_lt(v_k_1231_, v_hi_1227_);
if (v___x_1232_ == 0)
{
lean_object* v___x_1233_; lean_object* v___x_1234_; 
lean_dec(v_k_1231_);
v___x_1233_ = lean_array_fswap(v_as_1229_, v_i_1230_, v_hi_1227_);
v___x_1234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1234_, 0, v_i_1230_);
lean_ctor_set(v___x_1234_, 1, v___x_1233_);
return v___x_1234_;
}
else
{
lean_object* v___x_1235_; lean_object* v_fst_1236_; lean_object* v_fst_1237_; uint8_t v___x_1238_; 
v___x_1235_ = lean_array_fget_borrowed(v_as_1229_, v_k_1231_);
v_fst_1236_ = lean_ctor_get(v___x_1235_, 0);
v_fst_1237_ = lean_ctor_get(v_pivot_1228_, 0);
v___x_1238_ = lean_nat_dec_lt(v_fst_1236_, v_fst_1237_);
if (v___x_1238_ == 0)
{
lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1239_ = lean_unsigned_to_nat(1u);
v___x_1240_ = lean_nat_add(v_k_1231_, v___x_1239_);
lean_dec(v_k_1231_);
v_k_1231_ = v___x_1240_;
goto _start;
}
else
{
lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; 
v___x_1242_ = lean_array_fswap(v_as_1229_, v_i_1230_, v_k_1231_);
v___x_1243_ = lean_unsigned_to_nat(1u);
v___x_1244_ = lean_nat_add(v_i_1230_, v___x_1243_);
lean_dec(v_i_1230_);
v___x_1245_ = lean_nat_add(v_k_1231_, v___x_1243_);
lean_dec(v_k_1231_);
v_as_1229_ = v___x_1242_;
v_i_1230_ = v___x_1244_;
v_k_1231_ = v___x_1245_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___redArg___boxed(lean_object* v_hi_1247_, lean_object* v_pivot_1248_, lean_object* v_as_1249_, lean_object* v_i_1250_, lean_object* v_k_1251_){
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___redArg(v_hi_1247_, v_pivot_1248_, v_as_1249_, v_i_1250_, v_k_1251_);
lean_dec_ref(v_pivot_1248_);
lean_dec(v_hi_1247_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg(lean_object* v_n_1253_, lean_object* v_as_1254_, lean_object* v_lo_1255_, lean_object* v_hi_1256_){
_start:
{
lean_object* v___y_1258_; uint8_t v___x_1268_; 
v___x_1268_ = lean_nat_dec_lt(v_lo_1255_, v_hi_1256_);
if (v___x_1268_ == 0)
{
lean_dec(v_lo_1255_);
return v_as_1254_;
}
else
{
lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v_mid_1271_; lean_object* v___y_1273_; lean_object* v___y_1279_; lean_object* v___x_1284_; lean_object* v___x_1285_; uint8_t v___x_1286_; 
v___x_1269_ = lean_nat_add(v_lo_1255_, v_hi_1256_);
v___x_1270_ = lean_unsigned_to_nat(1u);
v_mid_1271_ = lean_nat_shiftr(v___x_1269_, v___x_1270_);
lean_dec(v___x_1269_);
v___x_1284_ = lean_array_fget_borrowed(v_as_1254_, v_mid_1271_);
v___x_1285_ = lean_array_fget_borrowed(v_as_1254_, v_lo_1255_);
v___x_1286_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0(v___x_1284_, v___x_1285_);
if (v___x_1286_ == 0)
{
v___y_1279_ = v_as_1254_;
goto v___jp_1278_;
}
else
{
lean_object* v___x_1287_; 
v___x_1287_ = lean_array_fswap(v_as_1254_, v_lo_1255_, v_mid_1271_);
v___y_1279_ = v___x_1287_;
goto v___jp_1278_;
}
v___jp_1272_:
{
lean_object* v___x_1274_; lean_object* v___x_1275_; uint8_t v___x_1276_; 
v___x_1274_ = lean_array_fget_borrowed(v___y_1273_, v_mid_1271_);
v___x_1275_ = lean_array_fget_borrowed(v___y_1273_, v_hi_1256_);
v___x_1276_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0(v___x_1274_, v___x_1275_);
if (v___x_1276_ == 0)
{
lean_dec(v_mid_1271_);
v___y_1258_ = v___y_1273_;
goto v___jp_1257_;
}
else
{
lean_object* v___x_1277_; 
v___x_1277_ = lean_array_fswap(v___y_1273_, v_mid_1271_, v_hi_1256_);
lean_dec(v_mid_1271_);
v___y_1258_ = v___x_1277_;
goto v___jp_1257_;
}
}
v___jp_1278_:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; uint8_t v___x_1282_; 
v___x_1280_ = lean_array_fget_borrowed(v___y_1279_, v_hi_1256_);
v___x_1281_ = lean_array_fget_borrowed(v___y_1279_, v_lo_1255_);
v___x_1282_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___lam__0(v___x_1280_, v___x_1281_);
if (v___x_1282_ == 0)
{
v___y_1273_ = v___y_1279_;
goto v___jp_1272_;
}
else
{
lean_object* v___x_1283_; 
v___x_1283_ = lean_array_fswap(v___y_1279_, v_lo_1255_, v_hi_1256_);
v___y_1273_ = v___x_1283_;
goto v___jp_1272_;
}
}
}
v___jp_1257_:
{
lean_object* v_pivot_1259_; lean_object* v___x_1260_; lean_object* v_fst_1261_; lean_object* v_snd_1262_; uint8_t v___x_1263_; 
v_pivot_1259_ = lean_array_fget(v___y_1258_, v_hi_1256_);
lean_inc_n(v_lo_1255_, 2);
v___x_1260_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___redArg(v_hi_1256_, v_pivot_1259_, v___y_1258_, v_lo_1255_, v_lo_1255_);
lean_dec(v_pivot_1259_);
v_fst_1261_ = lean_ctor_get(v___x_1260_, 0);
lean_inc(v_fst_1261_);
v_snd_1262_ = lean_ctor_get(v___x_1260_, 1);
lean_inc(v_snd_1262_);
lean_dec_ref(v___x_1260_);
v___x_1263_ = lean_nat_dec_le(v_hi_1256_, v_fst_1261_);
if (v___x_1263_ == 0)
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1264_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg(v_n_1253_, v_snd_1262_, v_lo_1255_, v_fst_1261_);
v___x_1265_ = lean_unsigned_to_nat(1u);
v___x_1266_ = lean_nat_add(v_fst_1261_, v___x_1265_);
lean_dec(v_fst_1261_);
v_as_1254_ = v___x_1264_;
v_lo_1255_ = v___x_1266_;
goto _start;
}
else
{
lean_dec(v_fst_1261_);
lean_dec(v_lo_1255_);
return v_snd_1262_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg___boxed(lean_object* v_n_1288_, lean_object* v_as_1289_, lean_object* v_lo_1290_, lean_object* v_hi_1291_){
_start:
{
lean_object* v_res_1292_; 
v_res_1292_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg(v_n_1288_, v_as_1289_, v_lo_1290_, v_hi_1291_);
lean_dec(v_hi_1291_);
lean_dec(v_n_1288_);
return v_res_1292_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___redArg(lean_object* v_as_1293_, lean_object* v_a_1294_, lean_object* v_x_1295_){
_start:
{
lean_object* v_zero_1296_; uint8_t v_isZero_1297_; 
v_zero_1296_ = lean_unsigned_to_nat(0u);
v_isZero_1297_ = lean_nat_dec_eq(v_x_1295_, v_zero_1296_);
if (v_isZero_1297_ == 1)
{
lean_dec(v_x_1295_);
return v_isZero_1297_;
}
else
{
lean_object* v_fst_1298_; lean_object* v_one_1299_; lean_object* v_n_1300_; lean_object* v___x_1301_; lean_object* v_fst_1302_; uint8_t v___x_1303_; 
v_fst_1298_ = lean_ctor_get(v_a_1294_, 0);
v_one_1299_ = lean_unsigned_to_nat(1u);
v_n_1300_ = lean_nat_sub(v_x_1295_, v_one_1299_);
lean_dec(v_x_1295_);
v___x_1301_ = lean_array_fget_borrowed(v_as_1293_, v_n_1300_);
v_fst_1302_ = lean_ctor_get(v___x_1301_, 0);
v___x_1303_ = lean_nat_dec_eq(v_fst_1298_, v_fst_1302_);
if (v___x_1303_ == 0)
{
v_x_1295_ = v_n_1300_;
goto _start;
}
else
{
lean_dec(v_n_1300_);
return v_isZero_1297_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___redArg___boxed(lean_object* v_as_1305_, lean_object* v_a_1306_, lean_object* v_x_1307_){
_start:
{
uint8_t v_res_1308_; lean_object* v_r_1309_; 
v_res_1308_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___redArg(v_as_1305_, v_a_1306_, v_x_1307_);
lean_dec_ref(v_a_1306_);
lean_dec_ref(v_as_1305_);
v_r_1309_ = lean_box(v_res_1308_);
return v_r_1309_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11(lean_object* v_as_1310_, lean_object* v_i_1311_){
_start:
{
lean_object* v___x_1312_; uint8_t v___x_1313_; 
v___x_1312_ = lean_array_get_size(v_as_1310_);
v___x_1313_ = lean_nat_dec_lt(v_i_1311_, v___x_1312_);
if (v___x_1313_ == 0)
{
uint8_t v___x_1314_; 
lean_dec(v_i_1311_);
v___x_1314_ = 1;
return v___x_1314_;
}
else
{
lean_object* v___x_1315_; uint8_t v___x_1316_; 
v___x_1315_ = lean_array_fget_borrowed(v_as_1310_, v_i_1311_);
lean_inc(v_i_1311_);
v___x_1316_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___redArg(v_as_1310_, v___x_1315_, v_i_1311_);
if (v___x_1316_ == 0)
{
lean_dec(v_i_1311_);
return v___x_1316_;
}
else
{
lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1317_ = lean_unsigned_to_nat(1u);
v___x_1318_ = lean_nat_add(v_i_1311_, v___x_1317_);
lean_dec(v_i_1311_);
v_i_1311_ = v___x_1318_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11___boxed(lean_object* v_as_1320_, lean_object* v_i_1321_){
_start:
{
uint8_t v_res_1322_; lean_object* v_r_1323_; 
v_res_1322_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11(v_as_1320_, v_i_1321_);
lean_dec_ref(v_as_1320_);
v_r_1323_ = lean_box(v_res_1322_);
return v_r_1323_;
}
}
LEAN_EXPORT uint8_t l_Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8(lean_object* v_as_1324_){
_start:
{
lean_object* v___x_1325_; uint8_t v___x_1326_; 
v___x_1325_ = lean_unsigned_to_nat(0u);
v___x_1326_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11(v_as_1324_, v___x_1325_);
return v___x_1326_;
}
}
LEAN_EXPORT lean_object* l_Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8___boxed(lean_object* v_as_1327_){
_start:
{
uint8_t v_res_1328_; lean_object* v_r_1329_; 
v_res_1328_ = l_Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8(v_as_1327_);
lean_dec_ref(v_as_1327_);
v_r_1329_ = lean_box(v_res_1328_);
return v_r_1329_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__0(void){
_start:
{
lean_object* v___x_1330_; 
v___x_1330_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1330_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1(void){
_start:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1331_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__0, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__0_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__0);
v___x_1332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1331_);
return v___x_1332_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__2(void){
_start:
{
lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1333_ = lean_unsigned_to_nat(0u);
v___x_1334_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1);
v___x_1335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1334_);
lean_ctor_set(v___x_1335_, 1, v___x_1333_);
return v___x_1335_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__3(void){
_start:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; 
v___x_1336_ = lean_unsigned_to_nat(32u);
v___x_1337_ = lean_mk_empty_array_with_capacity(v___x_1336_);
v___x_1338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1338_, 0, v___x_1337_);
return v___x_1338_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__4(void){
_start:
{
size_t v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; 
v___x_1339_ = ((size_t)5ULL);
v___x_1340_ = lean_unsigned_to_nat(0u);
v___x_1341_ = lean_unsigned_to_nat(32u);
v___x_1342_ = lean_mk_empty_array_with_capacity(v___x_1341_);
v___x_1343_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__3, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__3_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__3);
v___x_1344_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1344_, 0, v___x_1343_);
lean_ctor_set(v___x_1344_, 1, v___x_1342_);
lean_ctor_set(v___x_1344_, 2, v___x_1340_);
lean_ctor_set(v___x_1344_, 3, v___x_1340_);
lean_ctor_set_usize(v___x_1344_, 4, v___x_1339_);
return v___x_1344_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__5(void){
_start:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; 
v___x_1345_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__4, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__4_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__4);
v___x_1346_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__1);
v___x_1347_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1347_, 0, v___x_1346_);
lean_ctor_set(v___x_1347_, 1, v___x_1346_);
lean_ctor_set(v___x_1347_, 2, v___x_1346_);
lean_ctor_set(v___x_1347_, 3, v___x_1345_);
return v___x_1347_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__6(void){
_start:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1348_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__5, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__5_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__5);
v___x_1349_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__2, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__2_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__2);
v___x_1350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1349_);
lean_ctor_set(v___x_1350_, 1, v___x_1348_);
return v___x_1350_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8(void){
_start:
{
lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1352_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__7));
v___x_1353_ = l_Lean_stringToMessageData(v___x_1352_);
return v___x_1353_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__10(void){
_start:
{
lean_object* v___x_1355_; lean_object* v___x_1356_; 
v___x_1355_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__9));
v___x_1356_ = l_Lean_stringToMessageData(v___x_1355_);
return v___x_1356_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__12(void){
_start:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; 
v___x_1358_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__11));
v___x_1359_ = l_Lean_stringToMessageData(v___x_1358_);
return v___x_1359_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__14(void){
_start:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1361_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__13));
v___x_1362_ = l_Lean_stringToMessageData(v___x_1361_);
return v___x_1362_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__17(void){
_start:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; 
v___x_1366_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__16));
v___x_1367_ = l_Lean_stringToMessageData(v___x_1366_);
return v___x_1367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6(uint8_t v___x_1390_, lean_object* v___f_1391_, uint8_t v___x_1392_, lean_object* v_stx_1393_, lean_object* v___x_1394_, lean_object* v___x_1395_, lean_object* v___x_1396_, lean_object* v___x_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_){
_start:
{
lean_object* v___y_1408_; lean_object* v_subgoals_1409_; lean_object* v___y_1410_; lean_object* v___y_1411_; lean_object* v___y_1412_; lean_object* v___y_1413_; lean_object* v___y_1414_; lean_object* v___y_1415_; lean_object* v___y_1416_; lean_object* v___y_1417_; lean_object* v___y_1455_; lean_object* v___y_1456_; lean_object* v___y_1457_; lean_object* v___y_1458_; lean_object* v___y_1459_; lean_object* v___y_1460_; lean_object* v___y_1461_; lean_object* v___y_1462_; lean_object* v___y_1463_; lean_object* v___y_1464_; lean_object* v___y_1471_; lean_object* v___y_1472_; lean_object* v___y_1473_; lean_object* v___y_1474_; lean_object* v___y_1475_; lean_object* v___y_1476_; lean_object* v___y_1477_; lean_object* v___y_1478_; lean_object* v___y_1479_; lean_object* v___y_1480_; lean_object* v___y_1481_; lean_object* v___y_1482_; lean_object* v___y_1483_; lean_object* v___y_1486_; lean_object* v___y_1487_; lean_object* v___y_1488_; lean_object* v___y_1489_; lean_object* v___y_1490_; lean_object* v___y_1491_; lean_object* v___y_1492_; lean_object* v___y_1493_; lean_object* v___y_1494_; lean_object* v___y_1495_; lean_object* v___y_1496_; lean_object* v___y_1497_; lean_object* v___y_1498_; 
if (v___x_1390_ == 0)
{
lean_object* v___x_1500_; 
lean_dec_ref(v___x_1397_);
lean_dec_ref(v___x_1396_);
lean_dec_ref(v___x_1395_);
lean_dec_ref(v___x_1394_);
lean_dec_ref(v___f_1391_);
v___x_1500_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg();
return v___x_1500_;
}
else
{
lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___y_1504_; lean_object* v___y_1505_; lean_object* v___y_1506_; lean_object* v___y_1507_; lean_object* v___y_1508_; lean_object* v___y_1509_; lean_object* v___y_1510_; lean_object* v___y_1511_; lean_object* v___y_1512_; lean_object* v___y_1513_; lean_object* v___y_1519_; lean_object* v___y_1520_; lean_object* v___y_1521_; lean_object* v___y_1522_; lean_object* v___y_1523_; lean_object* v___y_1524_; lean_object* v___y_1525_; lean_object* v___y_1526_; lean_object* v___y_1527_; lean_object* v___y_1528_; lean_object* v___y_1529_; lean_object* v___y_1530_; lean_object* v___y_1531_; lean_object* v___y_1532_; lean_object* v___y_1533_; uint8_t v___y_1534_; lean_object* v___y_1627_; lean_object* v___y_1628_; lean_object* v___y_1629_; lean_object* v___y_1630_; lean_object* v___y_1631_; lean_object* v_occs_1632_; lean_object* v___y_1633_; lean_object* v___y_1634_; lean_object* v___y_1635_; lean_object* v___y_1636_; lean_object* v___y_1637_; lean_object* v___y_1638_; lean_object* v___y_1639_; lean_object* v___y_1640_; lean_object* v___y_1655_; lean_object* v___y_1656_; lean_object* v___y_1657_; lean_object* v___y_1658_; lean_object* v___y_1659_; lean_object* v___y_1660_; lean_object* v___y_1661_; lean_object* v___y_1662_; lean_object* v___y_1663_; lean_object* v___y_1664_; lean_object* v___y_1665_; lean_object* v___y_1666_; lean_object* v___y_1667_; lean_object* v___y_1668_; lean_object* v___y_1673_; lean_object* v___y_1674_; lean_object* v___y_1675_; lean_object* v___y_1676_; lean_object* v___y_1677_; lean_object* v___y_1678_; lean_object* v___y_1679_; lean_object* v___y_1680_; lean_object* v___y_1681_; lean_object* v___y_1682_; lean_object* v___y_1683_; lean_object* v___y_1684_; lean_object* v___y_1685_; lean_object* v___y_1686_; lean_object* v___y_1691_; lean_object* v___y_1692_; lean_object* v___y_1693_; lean_object* v___y_1694_; lean_object* v___y_1695_; lean_object* v___y_1696_; lean_object* v___y_1697_; lean_object* v___y_1698_; lean_object* v___y_1699_; lean_object* v___y_1700_; lean_object* v___y_1701_; lean_object* v___y_1702_; lean_object* v___y_1703_; lean_object* v___y_1704_; lean_object* v___y_1705_; lean_object* v___y_1706_; lean_object* v___y_1707_; lean_object* v___y_1710_; lean_object* v___y_1711_; lean_object* v___y_1712_; lean_object* v___y_1713_; lean_object* v___y_1714_; lean_object* v___y_1715_; lean_object* v___y_1716_; lean_object* v___y_1717_; lean_object* v___y_1718_; lean_object* v___y_1719_; lean_object* v___y_1720_; lean_object* v___y_1721_; lean_object* v___y_1722_; lean_object* v___y_1723_; lean_object* v___y_1724_; lean_object* v___y_1725_; lean_object* v___y_1726_; lean_object* v_occs_1729_; lean_object* v___y_1730_; lean_object* v___y_1731_; lean_object* v___y_1732_; lean_object* v___y_1733_; lean_object* v___y_1734_; lean_object* v___y_1735_; lean_object* v___y_1736_; lean_object* v___y_1737_; lean_object* v___x_1829_; uint8_t v___x_1830_; 
v___x_1501_ = lean_unsigned_to_nat(0u);
v___x_1502_ = lean_unsigned_to_nat(1u);
v___x_1829_ = l_Lean_Syntax_getArg(v_stx_1393_, v___x_1502_);
v___x_1830_ = l_Lean_Syntax_isNone(v___x_1829_);
if (v___x_1830_ == 0)
{
uint8_t v___x_1831_; 
lean_inc(v___x_1829_);
v___x_1831_ = l_Lean_Syntax_matchesNull(v___x_1829_, v___x_1502_);
if (v___x_1831_ == 0)
{
lean_object* v___x_1832_; 
lean_dec(v___x_1829_);
lean_dec_ref(v___x_1397_);
lean_dec_ref(v___x_1396_);
lean_dec_ref(v___x_1395_);
lean_dec_ref(v___x_1394_);
lean_dec_ref(v___f_1391_);
v___x_1832_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg();
return v___x_1832_;
}
else
{
lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; uint8_t v___x_1836_; 
v___x_1833_ = l_Lean_Syntax_getArg(v___x_1829_, v___x_1501_);
lean_dec(v___x_1829_);
v___x_1834_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__27));
lean_inc_ref(v___x_1397_);
lean_inc_ref(v___x_1396_);
lean_inc_ref(v___x_1395_);
lean_inc_ref(v___x_1394_);
v___x_1835_ = l_Lean_Name_mkStr5(v___x_1394_, v___x_1395_, v___x_1396_, v___x_1397_, v___x_1834_);
lean_inc(v___x_1833_);
v___x_1836_ = l_Lean_Syntax_isOfKind(v___x_1833_, v___x_1835_);
lean_dec(v___x_1835_);
if (v___x_1836_ == 0)
{
lean_object* v___x_1837_; 
lean_dec(v___x_1833_);
lean_dec_ref(v___x_1397_);
lean_dec_ref(v___x_1396_);
lean_dec_ref(v___x_1395_);
lean_dec_ref(v___x_1394_);
lean_dec_ref(v___f_1391_);
v___x_1837_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg();
return v___x_1837_;
}
else
{
lean_object* v___x_1838_; lean_object* v_occs_1839_; lean_object* v___x_1840_; 
v___x_1838_ = lean_unsigned_to_nat(3u);
v_occs_1839_ = l_Lean_Syntax_getArg(v___x_1833_, v___x_1838_);
lean_dec(v___x_1833_);
v___x_1840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1840_, 0, v_occs_1839_);
v_occs_1729_ = v___x_1840_;
v___y_1730_ = v___y_1398_;
v___y_1731_ = v___y_1399_;
v___y_1732_ = v___y_1400_;
v___y_1733_ = v___y_1401_;
v___y_1734_ = v___y_1402_;
v___y_1735_ = v___y_1403_;
v___y_1736_ = v___y_1404_;
v___y_1737_ = v___y_1405_;
goto v___jp_1728_;
}
}
}
else
{
lean_object* v___x_1841_; 
lean_dec(v___x_1829_);
v___x_1841_ = lean_box(0);
v_occs_1729_ = v___x_1841_;
v___y_1730_ = v___y_1398_;
v___y_1731_ = v___y_1399_;
v___y_1732_ = v___y_1400_;
v___y_1733_ = v___y_1401_;
v___y_1734_ = v___y_1402_;
v___y_1735_ = v___y_1403_;
v___y_1736_ = v___y_1404_;
v___y_1737_ = v___y_1405_;
goto v___jp_1728_;
}
v___jp_1503_:
{
lean_object* v___x_1514_; uint8_t v___x_1515_; 
v___x_1514_ = lean_array_get_size(v___y_1504_);
v___x_1515_ = lean_nat_dec_eq(v___x_1514_, v___x_1501_);
if (v___x_1515_ == 0)
{
lean_object* v___x_1516_; uint8_t v___x_1517_; 
v___x_1516_ = lean_nat_sub(v___x_1514_, v___x_1502_);
v___x_1517_ = lean_nat_dec_le(v___x_1501_, v___x_1516_);
if (v___x_1517_ == 0)
{
lean_inc(v___x_1516_);
v___y_1486_ = v___y_1506_;
v___y_1487_ = v___y_1512_;
v___y_1488_ = v___x_1514_;
v___y_1489_ = v___y_1513_;
v___y_1490_ = v___y_1504_;
v___y_1491_ = v___y_1505_;
v___y_1492_ = v___y_1511_;
v___y_1493_ = v___y_1510_;
v___y_1494_ = v___y_1507_;
v___y_1495_ = v___y_1509_;
v___y_1496_ = v___x_1516_;
v___y_1497_ = v___y_1508_;
v___y_1498_ = v___x_1516_;
goto v___jp_1485_;
}
else
{
v___y_1486_ = v___y_1506_;
v___y_1487_ = v___y_1512_;
v___y_1488_ = v___x_1514_;
v___y_1489_ = v___y_1513_;
v___y_1490_ = v___y_1504_;
v___y_1491_ = v___y_1505_;
v___y_1492_ = v___y_1511_;
v___y_1493_ = v___y_1510_;
v___y_1494_ = v___y_1507_;
v___y_1495_ = v___y_1509_;
v___y_1496_ = v___x_1516_;
v___y_1497_ = v___y_1508_;
v___y_1498_ = v___x_1501_;
goto v___jp_1485_;
}
}
else
{
v___y_1455_ = v___y_1506_;
v___y_1456_ = v___y_1512_;
v___y_1457_ = v___y_1507_;
v___y_1458_ = v___y_1513_;
v___y_1459_ = v___y_1505_;
v___y_1460_ = v___y_1511_;
v___y_1461_ = v___y_1509_;
v___y_1462_ = v___y_1508_;
v___y_1463_ = v___y_1510_;
v___y_1464_ = v___y_1504_;
goto v___jp_1454_;
}
}
v___jp_1518_:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1535_ = l_Lean_Meta_Simp_Context_setMemoize(v___y_1522_, v___y_1534_);
v___x_1536_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__6, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__6_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__6);
lean_inc(v___y_1531_);
lean_inc_ref(v___y_1523_);
v___x_1537_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_pre___boxed), 11, 2);
lean_closure_set(v___x_1537_, 0, v___y_1523_);
lean_closure_set(v___x_1537_, 1, v___y_1531_);
lean_inc_ref(v___y_1521_);
lean_inc_ref(v___y_1524_);
v___x_1538_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_1538_, 0, v___x_1537_);
lean_ctor_set(v___x_1538_, 1, v___y_1528_);
lean_ctor_set(v___x_1538_, 2, v___y_1524_);
lean_ctor_set(v___x_1538_, 3, v___f_1391_);
lean_ctor_set(v___x_1538_, 4, v___y_1521_);
lean_ctor_set_uint8(v___x_1538_, sizeof(void*)*5, v___x_1392_);
v___x_1539_ = l_Lean_Meta_Simp_main(v___y_1526_, v___x_1535_, v___x_1536_, v___x_1538_, v___y_1529_, v___y_1532_, v___y_1525_, v___y_1527_);
lean_dec_ref_known(v___x_1538_, 5);
if (lean_obj_tag(v___x_1539_) == 0)
{
lean_object* v_a_1540_; lean_object* v_fst_1541_; lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1616_; 
v_a_1540_ = lean_ctor_get(v___x_1539_, 0);
lean_inc(v_a_1540_);
lean_dec_ref_known(v___x_1539_, 1);
v_fst_1541_ = lean_ctor_get(v_a_1540_, 0);
v_isSharedCheck_1616_ = !lean_is_exclusive(v_a_1540_);
if (v_isSharedCheck_1616_ == 0)
{
lean_object* v_unused_1617_; 
v_unused_1617_ = lean_ctor_get(v_a_1540_, 1);
lean_dec(v_unused_1617_);
v___x_1543_ = v_a_1540_;
v_isShared_1544_ = v_isSharedCheck_1616_;
goto v_resetjp_1542_;
}
else
{
lean_inc(v_fst_1541_);
lean_dec(v_a_1540_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1616_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
lean_object* v___x_1545_; 
v___x_1545_ = lean_st_ref_get(v___y_1531_);
lean_dec(v___y_1531_);
if (lean_obj_tag(v___x_1545_) == 0)
{
lean_object* v_subgoals_1546_; lean_object* v___x_1547_; uint8_t v___x_1548_; 
v_subgoals_1546_ = lean_ctor_get(v___x_1545_, 0);
lean_inc_ref(v_subgoals_1546_);
lean_dec_ref_known(v___x_1545_, 1);
v___x_1547_ = lean_array_get_size(v_subgoals_1546_);
v___x_1548_ = lean_nat_dec_eq(v___x_1547_, v___x_1501_);
if (v___x_1548_ == 0)
{
lean_del_object(v___x_1543_);
lean_dec_ref(v___y_1523_);
v___y_1408_ = v_fst_1541_;
v_subgoals_1409_ = v_subgoals_1546_;
v___y_1410_ = v___y_1519_;
v___y_1411_ = v___y_1520_;
v___y_1412_ = v___y_1533_;
v___y_1413_ = v___y_1530_;
v___y_1414_ = v___y_1529_;
v___y_1415_ = v___y_1532_;
v___y_1416_ = v___y_1525_;
v___y_1417_ = v___y_1527_;
goto v___jp_1407_;
}
else
{
lean_object* v_expr_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1553_; 
lean_dec_ref(v_subgoals_1546_);
lean_dec(v_fst_1541_);
v_expr_1549_ = lean_ctor_get(v___y_1523_, 2);
lean_inc_ref(v_expr_1549_);
lean_dec_ref(v___y_1523_);
v___x_1550_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8);
v___x_1551_ = l_Lean_indentExpr(v_expr_1549_);
if (v_isShared_1544_ == 0)
{
lean_ctor_set_tag(v___x_1543_, 7);
lean_ctor_set(v___x_1543_, 1, v___x_1551_);
lean_ctor_set(v___x_1543_, 0, v___x_1550_);
v___x_1553_ = v___x_1543_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v___x_1550_);
lean_ctor_set(v_reuseFailAlloc_1563_, 1, v___x_1551_);
v___x_1553_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
lean_object* v___x_1554_; lean_object* v_a_1555_; lean_object* v___x_1557_; uint8_t v_isShared_1558_; uint8_t v_isSharedCheck_1562_; 
v___x_1554_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(v___x_1553_, v___y_1529_, v___y_1532_, v___y_1525_, v___y_1527_);
v_a_1555_ = lean_ctor_get(v___x_1554_, 0);
v_isSharedCheck_1562_ = !lean_is_exclusive(v___x_1554_);
if (v_isSharedCheck_1562_ == 0)
{
v___x_1557_ = v___x_1554_;
v_isShared_1558_ = v_isSharedCheck_1562_;
goto v_resetjp_1556_;
}
else
{
lean_inc(v_a_1555_);
lean_dec(v___x_1554_);
v___x_1557_ = lean_box(0);
v_isShared_1558_ = v_isSharedCheck_1562_;
goto v_resetjp_1556_;
}
v_resetjp_1556_:
{
lean_object* v___x_1560_; 
if (v_isShared_1558_ == 0)
{
v___x_1560_ = v___x_1557_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v_a_1555_);
v___x_1560_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
return v___x_1560_;
}
}
}
}
}
else
{
lean_object* v_subgoals_1564_; lean_object* v_idx_1565_; lean_object* v_remaining_1566_; uint8_t v___x_1567_; 
v_subgoals_1564_ = lean_ctor_get(v___x_1545_, 0);
lean_inc_ref(v_subgoals_1564_);
v_idx_1565_ = lean_ctor_get(v___x_1545_, 1);
lean_inc(v_idx_1565_);
v_remaining_1566_ = lean_ctor_get(v___x_1545_, 2);
lean_inc(v_remaining_1566_);
lean_dec_ref_known(v___x_1545_, 3);
v___x_1567_ = lean_nat_dec_eq(v_idx_1565_, v___x_1501_);
if (v___x_1567_ == 0)
{
lean_object* v___x_1568_; 
lean_dec_ref(v___y_1523_);
v___x_1568_ = l_List_getLast_x3f___redArg(v_remaining_1566_);
lean_dec(v_remaining_1566_);
if (lean_obj_tag(v___x_1568_) == 1)
{
lean_object* v_val_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1600_; 
lean_dec_ref(v_subgoals_1564_);
lean_dec(v_fst_1541_);
v_val_1569_ = lean_ctor_get(v___x_1568_, 0);
v_isSharedCheck_1600_ = !lean_is_exclusive(v___x_1568_);
if (v_isSharedCheck_1600_ == 0)
{
v___x_1571_ = v___x_1568_;
v_isShared_1572_ = v_isSharedCheck_1600_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_val_1569_);
lean_dec(v___x_1568_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1600_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v_fst_1573_; lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1598_; 
v_fst_1573_ = lean_ctor_get(v_val_1569_, 0);
v_isSharedCheck_1598_ = !lean_is_exclusive(v_val_1569_);
if (v_isSharedCheck_1598_ == 0)
{
lean_object* v_unused_1599_; 
v_unused_1599_ = lean_ctor_get(v_val_1569_, 1);
lean_dec(v_unused_1599_);
v___x_1575_ = v_val_1569_;
v_isShared_1576_ = v_isSharedCheck_1598_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_fst_1573_);
lean_dec(v_val_1569_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1598_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1580_; 
v___x_1577_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__10, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__10_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__10);
v___x_1578_ = l_Nat_reprFast(v_idx_1565_);
if (v_isShared_1572_ == 0)
{
lean_ctor_set_tag(v___x_1571_, 3);
lean_ctor_set(v___x_1571_, 0, v___x_1578_);
v___x_1580_ = v___x_1571_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v___x_1578_);
v___x_1580_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
lean_object* v___x_1581_; lean_object* v___x_1583_; 
v___x_1581_ = l_Lean_MessageData_ofFormat(v___x_1580_);
if (v_isShared_1576_ == 0)
{
lean_ctor_set_tag(v___x_1575_, 7);
lean_ctor_set(v___x_1575_, 1, v___x_1581_);
lean_ctor_set(v___x_1575_, 0, v___x_1577_);
v___x_1583_ = v___x_1575_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v___x_1577_);
lean_ctor_set(v_reuseFailAlloc_1596_, 1, v___x_1581_);
v___x_1583_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
lean_object* v___x_1584_; lean_object* v___x_1586_; 
v___x_1584_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__12, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__12_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__12);
if (v_isShared_1544_ == 0)
{
lean_ctor_set_tag(v___x_1543_, 7);
lean_ctor_set(v___x_1543_, 1, v___x_1584_);
lean_ctor_set(v___x_1543_, 0, v___x_1583_);
v___x_1586_ = v___x_1543_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v___x_1583_);
lean_ctor_set(v_reuseFailAlloc_1595_, 1, v___x_1584_);
v___x_1586_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; 
v___x_1587_ = lean_nat_add(v_fst_1573_, v___x_1502_);
lean_dec(v_fst_1573_);
v___x_1588_ = l_Nat_reprFast(v___x_1587_);
v___x_1589_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1588_);
v___x_1590_ = l_Lean_MessageData_ofFormat(v___x_1589_);
v___x_1591_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1586_);
lean_ctor_set(v___x_1591_, 1, v___x_1590_);
v___x_1592_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__14, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__14_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__14);
v___x_1593_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1591_);
lean_ctor_set(v___x_1593_, 1, v___x_1592_);
v___x_1594_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(v___x_1593_, v___y_1529_, v___y_1532_, v___y_1525_, v___y_1527_);
return v___x_1594_;
}
}
}
}
}
}
else
{
lean_dec(v___x_1568_);
lean_dec(v_idx_1565_);
lean_del_object(v___x_1543_);
v___y_1504_ = v_subgoals_1564_;
v___y_1505_ = v_fst_1541_;
v___y_1506_ = v___y_1519_;
v___y_1507_ = v___y_1520_;
v___y_1508_ = v___y_1533_;
v___y_1509_ = v___y_1530_;
v___y_1510_ = v___y_1529_;
v___y_1511_ = v___y_1532_;
v___y_1512_ = v___y_1525_;
v___y_1513_ = v___y_1527_;
goto v___jp_1503_;
}
}
else
{
lean_object* v_expr_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1605_; 
lean_dec(v_remaining_1566_);
lean_dec(v_idx_1565_);
lean_dec_ref(v_subgoals_1564_);
lean_dec(v_fst_1541_);
v_expr_1601_ = lean_ctor_get(v___y_1523_, 2);
lean_inc_ref(v_expr_1601_);
lean_dec_ref(v___y_1523_);
v___x_1602_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__8);
v___x_1603_ = l_Lean_indentExpr(v_expr_1601_);
if (v_isShared_1544_ == 0)
{
lean_ctor_set_tag(v___x_1543_, 7);
lean_ctor_set(v___x_1543_, 1, v___x_1603_);
lean_ctor_set(v___x_1543_, 0, v___x_1602_);
v___x_1605_ = v___x_1543_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v___x_1602_);
lean_ctor_set(v_reuseFailAlloc_1615_, 1, v___x_1603_);
v___x_1605_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
lean_object* v___x_1606_; lean_object* v_a_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1614_; 
v___x_1606_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(v___x_1605_, v___y_1529_, v___y_1532_, v___y_1525_, v___y_1527_);
v_a_1607_ = lean_ctor_get(v___x_1606_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1606_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1609_ = v___x_1606_;
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_a_1607_);
lean_dec(v___x_1606_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1612_; 
if (v_isShared_1610_ == 0)
{
v___x_1612_ = v___x_1609_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v_a_1607_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1625_; 
lean_dec(v___y_1531_);
lean_dec_ref(v___y_1523_);
v_a_1618_ = lean_ctor_get(v___x_1539_, 0);
v_isSharedCheck_1625_ = !lean_is_exclusive(v___x_1539_);
if (v_isSharedCheck_1625_ == 0)
{
v___x_1620_ = v___x_1539_;
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_a_1618_);
lean_dec(v___x_1539_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v___x_1623_; 
if (v_isShared_1621_ == 0)
{
v___x_1623_ = v___x_1620_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v_a_1618_);
v___x_1623_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
return v___x_1623_;
}
}
}
}
v___jp_1626_:
{
lean_object* v___x_1641_; lean_object* v___x_1642_; 
lean_inc_ref(v_occs_1632_);
v___x_1641_ = lean_st_mk_ref(v_occs_1632_);
v___x_1642_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_getContext___redArg(v___y_1637_, v___y_1639_, v___y_1640_);
if (lean_obj_tag(v___x_1642_) == 0)
{
if (lean_obj_tag(v_occs_1632_) == 0)
{
lean_object* v_a_1643_; 
lean_dec_ref_known(v_occs_1632_, 1);
v_a_1643_ = lean_ctor_get(v___x_1642_, 0);
lean_inc(v_a_1643_);
lean_dec_ref_known(v___x_1642_, 1);
v___y_1519_ = v___y_1633_;
v___y_1520_ = v___y_1634_;
v___y_1521_ = v___y_1628_;
v___y_1522_ = v_a_1643_;
v___y_1523_ = v___y_1629_;
v___y_1524_ = v___y_1630_;
v___y_1525_ = v___y_1639_;
v___y_1526_ = v___y_1631_;
v___y_1527_ = v___y_1640_;
v___y_1528_ = v___y_1627_;
v___y_1529_ = v___y_1637_;
v___y_1530_ = v___y_1636_;
v___y_1531_ = v___x_1641_;
v___y_1532_ = v___y_1638_;
v___y_1533_ = v___y_1635_;
v___y_1534_ = v___x_1392_;
goto v___jp_1518_;
}
else
{
lean_object* v_a_1644_; uint8_t v___x_1645_; 
lean_dec_ref(v_occs_1632_);
v_a_1644_ = lean_ctor_get(v___x_1642_, 0);
lean_inc(v_a_1644_);
lean_dec_ref_known(v___x_1642_, 1);
v___x_1645_ = 0;
v___y_1519_ = v___y_1633_;
v___y_1520_ = v___y_1634_;
v___y_1521_ = v___y_1628_;
v___y_1522_ = v_a_1644_;
v___y_1523_ = v___y_1629_;
v___y_1524_ = v___y_1630_;
v___y_1525_ = v___y_1639_;
v___y_1526_ = v___y_1631_;
v___y_1527_ = v___y_1640_;
v___y_1528_ = v___y_1627_;
v___y_1529_ = v___y_1637_;
v___y_1530_ = v___y_1636_;
v___y_1531_ = v___x_1641_;
v___y_1532_ = v___y_1638_;
v___y_1533_ = v___y_1635_;
v___y_1534_ = v___x_1645_;
goto v___jp_1518_;
}
}
else
{
lean_object* v_a_1646_; lean_object* v___x_1648_; uint8_t v_isShared_1649_; uint8_t v_isSharedCheck_1653_; 
lean_dec(v___x_1641_);
lean_dec_ref(v_occs_1632_);
lean_dec_ref(v___y_1631_);
lean_dec_ref(v___y_1629_);
lean_dec_ref(v___y_1627_);
lean_dec_ref(v___f_1391_);
v_a_1646_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1653_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1653_ == 0)
{
v___x_1648_ = v___x_1642_;
v_isShared_1649_ = v_isSharedCheck_1653_;
goto v_resetjp_1647_;
}
else
{
lean_inc(v_a_1646_);
lean_dec(v___x_1642_);
v___x_1648_ = lean_box(0);
v_isShared_1649_ = v_isSharedCheck_1653_;
goto v_resetjp_1647_;
}
v_resetjp_1647_:
{
lean_object* v___x_1651_; 
if (v_isShared_1649_ == 0)
{
v___x_1651_ = v___x_1648_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1652_; 
v_reuseFailAlloc_1652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1652_, 0, v_a_1646_);
v___x_1651_ = v_reuseFailAlloc_1652_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
return v___x_1651_;
}
}
}
}
v___jp_1654_:
{
lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; 
v___x_1669_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__15));
v___x_1670_ = lean_array_to_list(v___y_1658_);
v___x_1671_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1671_, 0, v___x_1669_);
lean_ctor_set(v___x_1671_, 1, v___x_1501_);
lean_ctor_set(v___x_1671_, 2, v___x_1670_);
v___y_1627_ = v___y_1655_;
v___y_1628_ = v___y_1656_;
v___y_1629_ = v___y_1657_;
v___y_1630_ = v___y_1659_;
v___y_1631_ = v___y_1660_;
v_occs_1632_ = v___x_1671_;
v___y_1633_ = v___y_1661_;
v___y_1634_ = v___y_1662_;
v___y_1635_ = v___y_1663_;
v___y_1636_ = v___y_1664_;
v___y_1637_ = v___y_1665_;
v___y_1638_ = v___y_1666_;
v___y_1639_ = v___y_1667_;
v___y_1640_ = v___y_1668_;
goto v___jp_1626_;
}
v___jp_1672_:
{
uint8_t v___x_1687_; 
v___x_1687_ = l_Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8(v___y_1686_);
if (v___x_1687_ == 0)
{
lean_object* v___x_1688_; lean_object* v___x_1689_; 
lean_dec_ref(v___y_1686_);
lean_dec_ref(v___y_1683_);
lean_dec_ref(v___y_1682_);
lean_dec_ref(v___y_1680_);
lean_dec_ref(v___f_1391_);
v___x_1688_ = lean_obj_once(&l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__17, &l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__17_once, _init_l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__17);
v___x_1689_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(v___x_1688_, v___y_1677_, v___y_1685_, v___y_1673_, v___y_1674_);
return v___x_1689_;
}
else
{
v___y_1655_ = v___y_1683_;
v___y_1656_ = v___y_1679_;
v___y_1657_ = v___y_1680_;
v___y_1658_ = v___y_1686_;
v___y_1659_ = v___y_1681_;
v___y_1660_ = v___y_1682_;
v___y_1661_ = v___y_1684_;
v___y_1662_ = v___y_1676_;
v___y_1663_ = v___y_1675_;
v___y_1664_ = v___y_1678_;
v___y_1665_ = v___y_1677_;
v___y_1666_ = v___y_1685_;
v___y_1667_ = v___y_1673_;
v___y_1668_ = v___y_1674_;
goto v___jp_1654_;
}
}
v___jp_1690_:
{
lean_object* v___x_1708_; 
v___x_1708_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg(v___y_1704_, v___y_1699_, v___y_1702_, v___y_1707_);
lean_dec(v___y_1707_);
lean_dec(v___y_1704_);
v___y_1673_ = v___y_1691_;
v___y_1674_ = v___y_1692_;
v___y_1675_ = v___y_1693_;
v___y_1676_ = v___y_1694_;
v___y_1677_ = v___y_1695_;
v___y_1678_ = v___y_1696_;
v___y_1679_ = v___y_1697_;
v___y_1680_ = v___y_1698_;
v___y_1681_ = v___y_1700_;
v___y_1682_ = v___y_1701_;
v___y_1683_ = v___y_1703_;
v___y_1684_ = v___y_1705_;
v___y_1685_ = v___y_1706_;
v___y_1686_ = v___x_1708_;
goto v___jp_1672_;
}
v___jp_1709_:
{
uint8_t v___x_1727_; 
v___x_1727_ = lean_nat_dec_le(v___y_1726_, v___y_1713_);
if (v___x_1727_ == 0)
{
lean_dec(v___y_1713_);
lean_inc(v___y_1726_);
v___y_1691_ = v___y_1710_;
v___y_1692_ = v___y_1711_;
v___y_1693_ = v___y_1712_;
v___y_1694_ = v___y_1714_;
v___y_1695_ = v___y_1715_;
v___y_1696_ = v___y_1716_;
v___y_1697_ = v___y_1717_;
v___y_1698_ = v___y_1718_;
v___y_1699_ = v___y_1719_;
v___y_1700_ = v___y_1720_;
v___y_1701_ = v___y_1721_;
v___y_1702_ = v___y_1726_;
v___y_1703_ = v___y_1723_;
v___y_1704_ = v___y_1722_;
v___y_1705_ = v___y_1724_;
v___y_1706_ = v___y_1725_;
v___y_1707_ = v___y_1726_;
goto v___jp_1690_;
}
else
{
v___y_1691_ = v___y_1710_;
v___y_1692_ = v___y_1711_;
v___y_1693_ = v___y_1712_;
v___y_1694_ = v___y_1714_;
v___y_1695_ = v___y_1715_;
v___y_1696_ = v___y_1716_;
v___y_1697_ = v___y_1717_;
v___y_1698_ = v___y_1718_;
v___y_1699_ = v___y_1719_;
v___y_1700_ = v___y_1720_;
v___y_1701_ = v___y_1721_;
v___y_1702_ = v___y_1726_;
v___y_1703_ = v___y_1723_;
v___y_1704_ = v___y_1722_;
v___y_1705_ = v___y_1724_;
v___y_1706_ = v___y_1725_;
v___y_1707_ = v___y_1713_;
goto v___jp_1690_;
}
}
v___jp_1728_:
{
lean_object* v_declName_x3f_1738_; lean_object* v_macroStack_1739_; uint8_t v_mayPostpone_1740_; uint8_t v_errToSorry_1741_; lean_object* v_autoBoundImplicitContext_1742_; lean_object* v_autoBoundImplicitForbidden_1743_; lean_object* v_sectionVars_1744_; lean_object* v_sectionFVars_1745_; uint8_t v_implicitLambda_1746_; uint8_t v_heedElabAsElim_1747_; uint8_t v_isNoncomputableSection_1748_; uint8_t v_isMetaSection_1749_; uint8_t v_inPattern_1750_; lean_object* v_tacSnap_x3f_1751_; uint8_t v_saveRecAppSyntax_1752_; uint8_t v_holesAsSyntheticOpaque_1753_; uint8_t v_checkDeprecated_1754_; lean_object* v_fixedTermElabs_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___f_1760_; lean_object* v___f_1761_; lean_object* v___f_1762_; lean_object* v___x_1763_; lean_object* v___f_1764_; lean_object* v___f_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; 
v_declName_x3f_1738_ = lean_ctor_get(v___y_1732_, 0);
v_macroStack_1739_ = lean_ctor_get(v___y_1732_, 1);
v_mayPostpone_1740_ = lean_ctor_get_uint8(v___y_1732_, sizeof(void*)*8);
v_errToSorry_1741_ = lean_ctor_get_uint8(v___y_1732_, sizeof(void*)*8 + 1);
v_autoBoundImplicitContext_1742_ = lean_ctor_get(v___y_1732_, 2);
v_autoBoundImplicitForbidden_1743_ = lean_ctor_get(v___y_1732_, 3);
v_sectionVars_1744_ = lean_ctor_get(v___y_1732_, 4);
v_sectionFVars_1745_ = lean_ctor_get(v___y_1732_, 5);
v_implicitLambda_1746_ = lean_ctor_get_uint8(v___y_1732_, sizeof(void*)*8 + 2);
v_heedElabAsElim_1747_ = lean_ctor_get_uint8(v___y_1732_, sizeof(void*)*8 + 3);
v_isNoncomputableSection_1748_ = lean_ctor_get_uint8(v___y_1732_, sizeof(void*)*8 + 4);
v_isMetaSection_1749_ = lean_ctor_get_uint8(v___y_1732_, sizeof(void*)*8 + 5);
v_inPattern_1750_ = lean_ctor_get_uint8(v___y_1732_, sizeof(void*)*8 + 7);
v_tacSnap_x3f_1751_ = lean_ctor_get(v___y_1732_, 6);
v_saveRecAppSyntax_1752_ = lean_ctor_get_uint8(v___y_1732_, sizeof(void*)*8 + 8);
v_holesAsSyntheticOpaque_1753_ = lean_ctor_get_uint8(v___y_1732_, sizeof(void*)*8 + 9);
v_checkDeprecated_1754_ = lean_ctor_get_uint8(v___y_1732_, sizeof(void*)*8 + 10);
v_fixedTermElabs_1755_ = lean_ctor_get(v___y_1732_, 7);
v___x_1756_ = lean_unsigned_to_nat(2u);
v___x_1757_ = l_Lean_Syntax_getArg(v_stx_1393_, v___x_1756_);
v___x_1758_ = lean_box(0);
v___x_1759_ = lean_box(v___x_1392_);
v___f_1760_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__1___boxed), 11, 2);
lean_closure_set(v___f_1760_, 0, v___x_1758_);
lean_closure_set(v___f_1760_, 1, v___x_1759_);
v___f_1761_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__18));
v___f_1762_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__19));
v___x_1763_ = lean_box(v___x_1392_);
lean_inc(v___x_1757_);
v___f_1764_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__4___boxed), 10, 3);
lean_closure_set(v___f_1764_, 0, v___x_1757_);
lean_closure_set(v___f_1764_, 1, v___x_1758_);
lean_closure_set(v___f_1764_, 2, v___x_1763_);
v___f_1765_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__5___boxed), 9, 2);
lean_closure_set(v___f_1765_, 0, v___x_1757_);
lean_closure_set(v___f_1765_, 1, v___f_1764_);
lean_inc_ref(v_fixedTermElabs_1755_);
lean_inc(v_tacSnap_x3f_1751_);
lean_inc(v_sectionFVars_1745_);
lean_inc(v_sectionVars_1744_);
lean_inc_ref(v_autoBoundImplicitForbidden_1743_);
lean_inc(v_autoBoundImplicitContext_1742_);
lean_inc(v_macroStack_1739_);
lean_inc(v_declName_x3f_1738_);
v___x_1766_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v___x_1766_, 0, v_declName_x3f_1738_);
lean_ctor_set(v___x_1766_, 1, v_macroStack_1739_);
lean_ctor_set(v___x_1766_, 2, v_autoBoundImplicitContext_1742_);
lean_ctor_set(v___x_1766_, 3, v_autoBoundImplicitForbidden_1743_);
lean_ctor_set(v___x_1766_, 4, v_sectionVars_1744_);
lean_ctor_set(v___x_1766_, 5, v_sectionFVars_1745_);
lean_ctor_set(v___x_1766_, 6, v_tacSnap_x3f_1751_);
lean_ctor_set(v___x_1766_, 7, v_fixedTermElabs_1755_);
lean_ctor_set_uint8(v___x_1766_, sizeof(void*)*8, v_mayPostpone_1740_);
lean_ctor_set_uint8(v___x_1766_, sizeof(void*)*8 + 1, v_errToSorry_1741_);
lean_ctor_set_uint8(v___x_1766_, sizeof(void*)*8 + 2, v_implicitLambda_1746_);
lean_ctor_set_uint8(v___x_1766_, sizeof(void*)*8 + 3, v_heedElabAsElim_1747_);
lean_ctor_set_uint8(v___x_1766_, sizeof(void*)*8 + 4, v_isNoncomputableSection_1748_);
lean_ctor_set_uint8(v___x_1766_, sizeof(void*)*8 + 5, v_isMetaSection_1749_);
lean_ctor_set_uint8(v___x_1766_, sizeof(void*)*8 + 6, v___x_1392_);
lean_ctor_set_uint8(v___x_1766_, sizeof(void*)*8 + 7, v_inPattern_1750_);
lean_ctor_set_uint8(v___x_1766_, sizeof(void*)*8 + 8, v_saveRecAppSyntax_1752_);
lean_ctor_set_uint8(v___x_1766_, sizeof(void*)*8 + 9, v_holesAsSyntheticOpaque_1753_);
lean_ctor_set_uint8(v___x_1766_, sizeof(void*)*8 + 10, v_checkDeprecated_1754_);
v___x_1767_ = l_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___redArg(v___f_1765_, v___x_1766_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_);
lean_dec_ref_known(v___x_1766_, 8);
if (lean_obj_tag(v___x_1767_) == 0)
{
lean_object* v_a_1768_; lean_object* v___x_1769_; 
v_a_1768_ = lean_ctor_get(v___x_1767_, 0);
lean_inc(v_a_1768_);
lean_dec_ref_known(v___x_1767_, 1);
v___x_1769_ = l_Lean_Elab_Tactic_Conv_getLhs___redArg(v___y_1731_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_);
if (lean_obj_tag(v___x_1769_) == 0)
{
if (lean_obj_tag(v_occs_1729_) == 0)
{
lean_object* v_a_1770_; lean_object* v___x_1771_; 
lean_dec_ref(v___x_1397_);
lean_dec_ref(v___x_1396_);
lean_dec_ref(v___x_1395_);
lean_dec_ref(v___x_1394_);
v_a_1770_ = lean_ctor_get(v___x_1769_, 0);
lean_inc(v_a_1770_);
lean_dec_ref_known(v___x_1769_, 1);
v___x_1771_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__22));
v___y_1627_ = v___f_1760_;
v___y_1628_ = v___f_1762_;
v___y_1629_ = v_a_1768_;
v___y_1630_ = v___f_1761_;
v___y_1631_ = v_a_1770_;
v_occs_1632_ = v___x_1771_;
v___y_1633_ = v___y_1730_;
v___y_1634_ = v___y_1731_;
v___y_1635_ = v___y_1732_;
v___y_1636_ = v___y_1733_;
v___y_1637_ = v___y_1734_;
v___y_1638_ = v___y_1735_;
v___y_1639_ = v___y_1736_;
v___y_1640_ = v___y_1737_;
goto v___jp_1626_;
}
else
{
lean_object* v_a_1772_; lean_object* v_val_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; uint8_t v___x_1776_; 
v_a_1772_ = lean_ctor_get(v___x_1769_, 0);
lean_inc(v_a_1772_);
lean_dec_ref_known(v___x_1769_, 1);
v_val_1773_ = lean_ctor_get(v_occs_1729_, 0);
lean_inc_n(v_val_1773_, 2);
lean_dec_ref_known(v_occs_1729_, 1);
v___x_1774_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__23));
lean_inc_ref(v___x_1397_);
lean_inc_ref(v___x_1396_);
lean_inc_ref(v___x_1395_);
lean_inc_ref(v___x_1394_);
v___x_1775_ = l_Lean_Name_mkStr5(v___x_1394_, v___x_1395_, v___x_1396_, v___x_1397_, v___x_1774_);
v___x_1776_ = l_Lean_Syntax_isOfKind(v_val_1773_, v___x_1775_);
lean_dec(v___x_1775_);
if (v___x_1776_ == 0)
{
lean_object* v___x_1777_; lean_object* v___x_1778_; uint8_t v___x_1779_; 
v___x_1777_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__24));
v___x_1778_ = l_Lean_Name_mkStr5(v___x_1394_, v___x_1395_, v___x_1396_, v___x_1397_, v___x_1777_);
lean_inc(v_val_1773_);
v___x_1779_ = l_Lean_Syntax_isOfKind(v_val_1773_, v___x_1778_);
lean_dec(v___x_1778_);
if (v___x_1779_ == 0)
{
lean_object* v___x_1780_; lean_object* v_a_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1788_; 
lean_dec(v_val_1773_);
lean_dec(v_a_1772_);
lean_dec(v_a_1768_);
lean_dec_ref(v___f_1760_);
lean_dec_ref(v___f_1391_);
v___x_1780_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__1___redArg();
v_a_1781_ = lean_ctor_get(v___x_1780_, 0);
v_isSharedCheck_1788_ = !lean_is_exclusive(v___x_1780_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1783_ = v___x_1780_;
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
else
{
lean_inc(v_a_1781_);
lean_dec(v___x_1780_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v___x_1786_; 
if (v_isShared_1784_ == 0)
{
v___x_1786_ = v___x_1783_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v_a_1781_);
v___x_1786_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
return v___x_1786_;
}
}
}
else
{
lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; size_t v_sz_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_15209__overap_1797_; lean_object* v___x_1798_; 
v___x_1789_ = l_Lean_Syntax_getArg(v_val_1773_, v___x_1501_);
lean_dec(v_val_1773_);
v___x_1790_ = l_Lean_Syntax_getArgs(v___x_1789_);
lean_dec(v___x_1789_);
v___x_1791_ = l_unsafeCast___redArg(v___x_1790_);
lean_dec_ref(v___x_1790_);
v_sz_1792_ = lean_array_size(v___x_1791_);
v___x_1793_ = l_unsafeCast___redArg(v___x_1791_);
v___x_1794_ = lean_box_usize(v_sz_1792_);
v___x_1795_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___boxed__const__1));
v___x_1796_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__7___boxed), 13, 4);
lean_closure_set(v___x_1796_, 0, v___x_1791_);
lean_closure_set(v___x_1796_, 1, v___x_1794_);
lean_closure_set(v___x_1796_, 2, v___x_1795_);
lean_closure_set(v___x_1796_, 3, v___x_1793_);
v___x_15209__overap_1797_ = l_unsafeCast___redArg(v___x_1796_);
lean_dec_ref(v___x_1796_);
lean_inc(v___y_1737_);
lean_inc_ref(v___y_1736_);
lean_inc(v___y_1735_);
lean_inc_ref(v___y_1734_);
lean_inc(v___y_1733_);
lean_inc_ref(v___y_1732_);
lean_inc(v___y_1731_);
lean_inc_ref(v___y_1730_);
v___x_1798_ = lean_apply_9(v___x_15209__overap_1797_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, lean_box(0));
if (lean_obj_tag(v___x_1798_) == 0)
{
lean_object* v_a_1799_; lean_object* v___x_1800_; uint8_t v___x_1801_; 
v_a_1799_ = lean_ctor_get(v___x_1798_, 0);
lean_inc(v_a_1799_);
lean_dec_ref_known(v___x_1798_, 1);
v___x_1800_ = lean_array_get_size(v_a_1799_);
v___x_1801_ = lean_nat_dec_eq(v___x_1800_, v___x_1501_);
if (v___x_1801_ == 0)
{
lean_object* v___x_1802_; uint8_t v___x_1803_; 
v___x_1802_ = lean_nat_sub(v___x_1800_, v___x_1502_);
v___x_1803_ = lean_nat_dec_le(v___x_1501_, v___x_1802_);
if (v___x_1803_ == 0)
{
lean_inc(v___x_1802_);
v___y_1710_ = v___y_1736_;
v___y_1711_ = v___y_1737_;
v___y_1712_ = v___y_1732_;
v___y_1713_ = v___x_1802_;
v___y_1714_ = v___y_1731_;
v___y_1715_ = v___y_1734_;
v___y_1716_ = v___y_1733_;
v___y_1717_ = v___f_1762_;
v___y_1718_ = v_a_1768_;
v___y_1719_ = v_a_1799_;
v___y_1720_ = v___f_1761_;
v___y_1721_ = v_a_1772_;
v___y_1722_ = v___x_1800_;
v___y_1723_ = v___f_1760_;
v___y_1724_ = v___y_1730_;
v___y_1725_ = v___y_1735_;
v___y_1726_ = v___x_1802_;
goto v___jp_1709_;
}
else
{
v___y_1710_ = v___y_1736_;
v___y_1711_ = v___y_1737_;
v___y_1712_ = v___y_1732_;
v___y_1713_ = v___x_1802_;
v___y_1714_ = v___y_1731_;
v___y_1715_ = v___y_1734_;
v___y_1716_ = v___y_1733_;
v___y_1717_ = v___f_1762_;
v___y_1718_ = v_a_1768_;
v___y_1719_ = v_a_1799_;
v___y_1720_ = v___f_1761_;
v___y_1721_ = v_a_1772_;
v___y_1722_ = v___x_1800_;
v___y_1723_ = v___f_1760_;
v___y_1724_ = v___y_1730_;
v___y_1725_ = v___y_1735_;
v___y_1726_ = v___x_1501_;
goto v___jp_1709_;
}
}
else
{
v___y_1673_ = v___y_1736_;
v___y_1674_ = v___y_1737_;
v___y_1675_ = v___y_1732_;
v___y_1676_ = v___y_1731_;
v___y_1677_ = v___y_1734_;
v___y_1678_ = v___y_1733_;
v___y_1679_ = v___f_1762_;
v___y_1680_ = v_a_1768_;
v___y_1681_ = v___f_1761_;
v___y_1682_ = v_a_1772_;
v___y_1683_ = v___f_1760_;
v___y_1684_ = v___y_1730_;
v___y_1685_ = v___y_1735_;
v___y_1686_ = v_a_1799_;
goto v___jp_1672_;
}
}
else
{
lean_object* v_a_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1811_; 
lean_dec(v_a_1772_);
lean_dec(v_a_1768_);
lean_dec_ref(v___f_1760_);
lean_dec_ref(v___f_1391_);
v_a_1804_ = lean_ctor_get(v___x_1798_, 0);
v_isSharedCheck_1811_ = !lean_is_exclusive(v___x_1798_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1806_ = v___x_1798_;
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_a_1804_);
lean_dec(v___x_1798_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
lean_object* v___x_1809_; 
if (v_isShared_1807_ == 0)
{
v___x_1809_ = v___x_1806_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v_a_1804_);
v___x_1809_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
return v___x_1809_;
}
}
}
}
}
else
{
lean_object* v___x_1812_; 
lean_dec(v_val_1773_);
lean_dec_ref(v___x_1397_);
lean_dec_ref(v___x_1396_);
lean_dec_ref(v___x_1395_);
lean_dec_ref(v___x_1394_);
v___x_1812_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___closed__26));
v___y_1627_ = v___f_1760_;
v___y_1628_ = v___f_1762_;
v___y_1629_ = v_a_1768_;
v___y_1630_ = v___f_1761_;
v___y_1631_ = v_a_1772_;
v_occs_1632_ = v___x_1812_;
v___y_1633_ = v___y_1730_;
v___y_1634_ = v___y_1731_;
v___y_1635_ = v___y_1732_;
v___y_1636_ = v___y_1733_;
v___y_1637_ = v___y_1734_;
v___y_1638_ = v___y_1735_;
v___y_1639_ = v___y_1736_;
v___y_1640_ = v___y_1737_;
goto v___jp_1626_;
}
}
}
else
{
lean_object* v_a_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1820_; 
lean_dec(v_a_1768_);
lean_dec_ref(v___f_1760_);
lean_dec(v_occs_1729_);
lean_dec_ref(v___x_1397_);
lean_dec_ref(v___x_1396_);
lean_dec_ref(v___x_1395_);
lean_dec_ref(v___x_1394_);
lean_dec_ref(v___f_1391_);
v_a_1813_ = lean_ctor_get(v___x_1769_, 0);
v_isSharedCheck_1820_ = !lean_is_exclusive(v___x_1769_);
if (v_isSharedCheck_1820_ == 0)
{
v___x_1815_ = v___x_1769_;
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_a_1813_);
lean_dec(v___x_1769_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1818_; 
if (v_isShared_1816_ == 0)
{
v___x_1818_ = v___x_1815_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v_a_1813_);
v___x_1818_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
return v___x_1818_;
}
}
}
}
else
{
lean_object* v_a_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1828_; 
lean_dec_ref(v___f_1760_);
lean_dec(v_occs_1729_);
lean_dec_ref(v___x_1397_);
lean_dec_ref(v___x_1396_);
lean_dec_ref(v___x_1395_);
lean_dec_ref(v___x_1394_);
lean_dec_ref(v___f_1391_);
v_a_1821_ = lean_ctor_get(v___x_1767_, 0);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___x_1767_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1823_ = v___x_1767_;
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_a_1821_);
lean_dec(v___x_1767_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1826_; 
if (v_isShared_1824_ == 0)
{
v___x_1826_ = v___x_1823_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(1, 1, 0);
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
}
}
v___jp_1407_:
{
lean_object* v___x_1418_; 
v___x_1418_ = l_Lean_Elab_Tactic_Conv_getRhs___redArg(v___y_1411_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_);
if (lean_obj_tag(v___x_1418_) == 0)
{
lean_object* v_a_1419_; lean_object* v_expr_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; 
v_a_1419_ = lean_ctor_get(v___x_1418_, 0);
lean_inc(v_a_1419_);
lean_dec_ref_known(v___x_1418_, 1);
v_expr_1420_ = lean_ctor_get(v___y_1408_, 0);
v___x_1421_ = l_Lean_Expr_mvarId_x21(v_a_1419_);
lean_dec(v_a_1419_);
lean_inc_ref(v_expr_1420_);
v___x_1422_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg(v___x_1421_, v_expr_1420_, v___y_1415_);
lean_dec_ref(v___x_1422_);
v___x_1423_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_1411_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_);
if (lean_obj_tag(v___x_1423_) == 0)
{
lean_object* v_a_1424_; lean_object* v___x_1425_; 
v_a_1424_ = lean_ctor_get(v___x_1423_, 0);
lean_inc(v_a_1424_);
lean_dec_ref_known(v___x_1423_, 1);
v___x_1425_ = l_Lean_Meta_Simp_Result_getProof(v___y_1408_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_);
if (lean_obj_tag(v___x_1425_) == 0)
{
lean_object* v_a_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; 
v_a_1426_ = lean_ctor_get(v___x_1425_, 0);
lean_inc(v_a_1426_);
lean_dec_ref_known(v___x_1425_, 1);
v___x_1427_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg(v_a_1424_, v_a_1426_, v___y_1415_);
lean_dec_ref(v___x_1427_);
v___x_1428_ = lean_array_to_list(v_subgoals_1409_);
v___x_1429_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_1428_, v___y_1411_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_);
return v___x_1429_;
}
else
{
lean_object* v_a_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1437_; 
lean_dec(v_a_1424_);
lean_dec_ref(v_subgoals_1409_);
v_a_1430_ = lean_ctor_get(v___x_1425_, 0);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1425_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1432_ = v___x_1425_;
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_a_1430_);
lean_dec(v___x_1425_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1435_; 
if (v_isShared_1433_ == 0)
{
v___x_1435_ = v___x_1432_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_a_1430_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
}
}
else
{
lean_object* v_a_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1445_; 
lean_dec_ref(v_subgoals_1409_);
lean_dec_ref(v___y_1408_);
v_a_1438_ = lean_ctor_get(v___x_1423_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1423_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1440_ = v___x_1423_;
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_a_1438_);
lean_dec(v___x_1423_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1445_;
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
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1438_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
}
else
{
lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1453_; 
lean_dec_ref(v_subgoals_1409_);
lean_dec_ref(v___y_1408_);
v_a_1446_ = lean_ctor_get(v___x_1418_, 0);
v_isSharedCheck_1453_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1448_ = v___x_1418_;
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v___x_1418_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1451_; 
if (v_isShared_1449_ == 0)
{
v___x_1451_ = v___x_1448_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v_a_1446_);
v___x_1451_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
return v___x_1451_;
}
}
}
}
v___jp_1454_:
{
size_t v_sz_1465_; size_t v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; 
v_sz_1465_ = lean_array_size(v___y_1464_);
v___x_1466_ = ((size_t)0ULL);
v___x_1467_ = l_unsafeCast___redArg(v___y_1464_);
lean_dec_ref(v___y_1464_);
v___x_1468_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__5(v_sz_1465_, v___x_1466_, v___x_1467_);
v___x_1469_ = l_unsafeCast___redArg(v___x_1468_);
lean_dec_ref(v___x_1468_);
v___y_1408_ = v___y_1459_;
v_subgoals_1409_ = v___x_1469_;
v___y_1410_ = v___y_1455_;
v___y_1411_ = v___y_1457_;
v___y_1412_ = v___y_1462_;
v___y_1413_ = v___y_1461_;
v___y_1414_ = v___y_1463_;
v___y_1415_ = v___y_1460_;
v___y_1416_ = v___y_1456_;
v___y_1417_ = v___y_1458_;
goto v___jp_1407_;
}
v___jp_1470_:
{
lean_object* v___x_1484_; 
v___x_1484_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg(v___y_1474_, v___y_1476_, v___y_1472_, v___y_1483_);
lean_dec(v___y_1483_);
lean_dec(v___y_1474_);
v___y_1455_ = v___y_1471_;
v___y_1456_ = v___y_1473_;
v___y_1457_ = v___y_1480_;
v___y_1458_ = v___y_1475_;
v___y_1459_ = v___y_1477_;
v___y_1460_ = v___y_1478_;
v___y_1461_ = v___y_1481_;
v___y_1462_ = v___y_1482_;
v___y_1463_ = v___y_1479_;
v___y_1464_ = v___x_1484_;
goto v___jp_1454_;
}
v___jp_1485_:
{
uint8_t v___x_1499_; 
v___x_1499_ = lean_nat_dec_le(v___y_1498_, v___y_1496_);
if (v___x_1499_ == 0)
{
lean_dec(v___y_1496_);
lean_inc(v___y_1498_);
v___y_1471_ = v___y_1486_;
v___y_1472_ = v___y_1498_;
v___y_1473_ = v___y_1487_;
v___y_1474_ = v___y_1488_;
v___y_1475_ = v___y_1489_;
v___y_1476_ = v___y_1490_;
v___y_1477_ = v___y_1491_;
v___y_1478_ = v___y_1492_;
v___y_1479_ = v___y_1493_;
v___y_1480_ = v___y_1494_;
v___y_1481_ = v___y_1495_;
v___y_1482_ = v___y_1497_;
v___y_1483_ = v___y_1498_;
goto v___jp_1470_;
}
else
{
v___y_1471_ = v___y_1486_;
v___y_1472_ = v___y_1498_;
v___y_1473_ = v___y_1487_;
v___y_1474_ = v___y_1488_;
v___y_1475_ = v___y_1489_;
v___y_1476_ = v___y_1490_;
v___y_1477_ = v___y_1491_;
v___y_1478_ = v___y_1492_;
v___y_1479_ = v___y_1493_;
v___y_1480_ = v___y_1494_;
v___y_1481_ = v___y_1495_;
v___y_1482_ = v___y_1497_;
v___y_1483_ = v___y_1496_;
goto v___jp_1470_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___boxed(lean_object** _args){
lean_object* v___x_1842_ = _args[0];
lean_object* v___f_1843_ = _args[1];
lean_object* v___x_1844_ = _args[2];
lean_object* v_stx_1845_ = _args[3];
lean_object* v___x_1846_ = _args[4];
lean_object* v___x_1847_ = _args[5];
lean_object* v___x_1848_ = _args[6];
lean_object* v___x_1849_ = _args[7];
lean_object* v___y_1850_ = _args[8];
lean_object* v___y_1851_ = _args[9];
lean_object* v___y_1852_ = _args[10];
lean_object* v___y_1853_ = _args[11];
lean_object* v___y_1854_ = _args[12];
lean_object* v___y_1855_ = _args[13];
lean_object* v___y_1856_ = _args[14];
lean_object* v___y_1857_ = _args[15];
lean_object* v___y_1858_ = _args[16];
_start:
{
uint8_t v___x_16432__boxed_1859_; uint8_t v___x_16434__boxed_1860_; lean_object* v_res_1861_; 
v___x_16432__boxed_1859_ = lean_unbox(v___x_1842_);
v___x_16434__boxed_1860_ = lean_unbox(v___x_1844_);
v_res_1861_ = l_Lean_Elab_Tactic_Conv_evalPattern___lam__6(v___x_16432__boxed_1859_, v___f_1843_, v___x_16434__boxed_1860_, v_stx_1845_, v___x_1846_, v___x_1847_, v___x_1848_, v___x_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_);
lean_dec(v___y_1857_);
lean_dec_ref(v___y_1856_);
lean_dec(v___y_1855_);
lean_dec_ref(v___y_1854_);
lean_dec(v___y_1853_);
lean_dec_ref(v___y_1852_);
lean_dec(v___y_1851_);
lean_dec_ref(v___y_1850_);
lean_dec(v_stx_1845_);
return v_res_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern(lean_object* v_stx_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_, lean_object* v_a_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_){
_start:
{
lean_object* v___f_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; uint8_t v___x_1890_; uint8_t v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___y_1894_; lean_object* v___x_1895_; 
v___f_1884_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___closed__0));
v___x_1885_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___closed__1));
v___x_1886_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___closed__2));
v___x_1887_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___closed__3));
v___x_1888_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___closed__4));
v___x_1889_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___closed__6));
lean_inc(v_stx_1874_);
v___x_1890_ = l_Lean_Syntax_isOfKind(v_stx_1874_, v___x_1889_);
v___x_1891_ = 1;
v___x_1892_ = lean_box(v___x_1890_);
v___x_1893_ = lean_box(v___x_1891_);
v___y_1894_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalPattern___lam__6___boxed), 17, 8);
lean_closure_set(v___y_1894_, 0, v___x_1892_);
lean_closure_set(v___y_1894_, 1, v___f_1884_);
lean_closure_set(v___y_1894_, 2, v___x_1893_);
lean_closure_set(v___y_1894_, 3, v_stx_1874_);
lean_closure_set(v___y_1894_, 4, v___x_1885_);
lean_closure_set(v___y_1894_, 5, v___x_1886_);
lean_closure_set(v___y_1894_, 6, v___x_1887_);
lean_closure_set(v___y_1894_, 7, v___x_1888_);
v___x_1895_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___y_1894_, v_a_1875_, v_a_1876_, v_a_1877_, v_a_1878_, v_a_1879_, v_a_1880_, v_a_1881_, v_a_1882_);
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Conv_evalPattern___boxed(lean_object* v_stx_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_){
_start:
{
lean_object* v_res_1906_; 
v_res_1906_ = l_Lean_Elab_Tactic_Conv_evalPattern(v_stx_1896_, v_a_1897_, v_a_1898_, v_a_1899_, v_a_1900_, v_a_1901_, v_a_1902_, v_a_1903_, v_a_1904_);
lean_dec(v_a_1904_);
lean_dec_ref(v_a_1903_);
lean_dec(v_a_1902_);
lean_dec_ref(v_a_1901_);
lean_dec(v_a_1900_);
lean_dec_ref(v_a_1899_);
lean_dec(v_a_1898_);
lean_dec_ref(v_a_1897_);
return v_res_1906_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0(lean_object* v_00_u03b1_1907_, lean_object* v_ref_1908_, lean_object* v_msg_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_){
_start:
{
lean_object* v___x_1919_; 
v___x_1919_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___redArg(v_ref_1908_, v_msg_1909_, v___y_1910_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_);
return v___x_1919_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0___boxed(lean_object* v_00_u03b1_1920_, lean_object* v_ref_1921_, lean_object* v_msg_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_){
_start:
{
lean_object* v_res_1932_; 
v_res_1932_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__0(v_00_u03b1_1920_, v_ref_1921_, v_msg_1922_, v___y_1923_, v___y_1924_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_);
lean_dec(v___y_1930_);
lean_dec_ref(v___y_1929_);
lean_dec(v___y_1928_);
lean_dec_ref(v___y_1927_);
lean_dec(v___y_1926_);
lean_dec_ref(v___y_1925_);
lean_dec(v___y_1924_);
lean_dec_ref(v___y_1923_);
lean_dec(v_ref_1921_);
return v_res_1932_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3(lean_object* v_mvarId_1933_, lean_object* v_val_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_){
_start:
{
lean_object* v___x_1944_; 
v___x_1944_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___redArg(v_mvarId_1933_, v_val_1934_, v___y_1940_);
return v___x_1944_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3___boxed(lean_object* v_mvarId_1945_, lean_object* v_val_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_){
_start:
{
lean_object* v_res_1956_; 
v_res_1956_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3(v_mvarId_1945_, v_val_1946_, v___y_1947_, v___y_1948_, v___y_1949_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_, v___y_1954_);
lean_dec(v___y_1954_);
lean_dec_ref(v___y_1953_);
lean_dec(v___y_1952_);
lean_dec_ref(v___y_1951_);
lean_dec(v___y_1950_);
lean_dec_ref(v___y_1949_);
lean_dec(v___y_1948_);
lean_dec_ref(v___y_1947_);
return v_res_1956_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4(lean_object* v_00_u03b1_1957_, lean_object* v_msg_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_){
_start:
{
lean_object* v___x_1968_; 
v___x_1968_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___redArg(v_msg_1958_, v___y_1963_, v___y_1964_, v___y_1965_, v___y_1966_);
return v___x_1968_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4___boxed(lean_object* v_00_u03b1_1969_, lean_object* v_msg_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_){
_start:
{
lean_object* v_res_1980_; 
v_res_1980_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__4(v_00_u03b1_1969_, v_msg_1970_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
lean_dec(v___y_1978_);
lean_dec_ref(v___y_1977_);
lean_dec(v___y_1976_);
lean_dec_ref(v___y_1975_);
lean_dec(v___y_1974_);
lean_dec_ref(v___y_1973_);
lean_dec(v___y_1972_);
lean_dec_ref(v___y_1971_);
return v_res_1980_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6(lean_object* v_n_1981_, lean_object* v_as_1982_, lean_object* v_lo_1983_, lean_object* v_hi_1984_, lean_object* v_w_1985_, lean_object* v_hlo_1986_, lean_object* v_hhi_1987_){
_start:
{
lean_object* v___x_1988_; 
v___x_1988_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___redArg(v_n_1981_, v_as_1982_, v_lo_1983_, v_hi_1984_);
return v___x_1988_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6___boxed(lean_object* v_n_1989_, lean_object* v_as_1990_, lean_object* v_lo_1991_, lean_object* v_hi_1992_, lean_object* v_w_1993_, lean_object* v_hlo_1994_, lean_object* v_hhi_1995_){
_start:
{
lean_object* v_res_1996_; 
v_res_1996_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6(v_n_1989_, v_as_1990_, v_lo_1991_, v_hi_1992_, v_w_1993_, v_hlo_1994_, v_hhi_1995_);
lean_dec(v_hi_1992_);
lean_dec(v_n_1989_);
return v_res_1996_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9(lean_object* v_n_1997_, lean_object* v_as_1998_, lean_object* v_lo_1999_, lean_object* v_hi_2000_, lean_object* v_w_2001_, lean_object* v_hlo_2002_, lean_object* v_hhi_2003_){
_start:
{
lean_object* v___x_2004_; 
v___x_2004_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___redArg(v_n_1997_, v_as_1998_, v_lo_1999_, v_hi_2000_);
return v___x_2004_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9___boxed(lean_object* v_n_2005_, lean_object* v_as_2006_, lean_object* v_lo_2007_, lean_object* v_hi_2008_, lean_object* v_w_2009_, lean_object* v_hlo_2010_, lean_object* v_hhi_2011_){
_start:
{
lean_object* v_res_2012_; 
v_res_2012_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9(v_n_2005_, v_as_2006_, v_lo_2007_, v_hi_2008_, v_w_2009_, v_hlo_2010_, v_hhi_2011_);
lean_dec(v_hi_2008_);
lean_dec(v_n_2005_);
return v_res_2012_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3(lean_object* v_00_u03b2_2013_, lean_object* v_x_2014_, lean_object* v_x_2015_, lean_object* v_x_2016_){
_start:
{
lean_object* v___x_2017_; 
v___x_2017_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3___redArg(v_x_2014_, v_x_2015_, v_x_2016_);
return v___x_2017_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8(lean_object* v_n_2018_, lean_object* v_lo_2019_, lean_object* v_hi_2020_, lean_object* v_hhi_2021_, lean_object* v_pivot_2022_, lean_object* v_as_2023_, lean_object* v_i_2024_, lean_object* v_k_2025_, lean_object* v_ilo_2026_, lean_object* v_ik_2027_, lean_object* v_w_2028_){
_start:
{
lean_object* v___x_2029_; 
v___x_2029_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___redArg(v_hi_2020_, v_pivot_2022_, v_as_2023_, v_i_2024_, v_k_2025_);
return v___x_2029_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8___boxed(lean_object* v_n_2030_, lean_object* v_lo_2031_, lean_object* v_hi_2032_, lean_object* v_hhi_2033_, lean_object* v_pivot_2034_, lean_object* v_as_2035_, lean_object* v_i_2036_, lean_object* v_k_2037_, lean_object* v_ilo_2038_, lean_object* v_ik_2039_, lean_object* v_w_2040_){
_start:
{
lean_object* v_res_2041_; 
v_res_2041_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__6_spec__8(v_n_2030_, v_lo_2031_, v_hi_2032_, v_hhi_2033_, v_pivot_2034_, v_as_2035_, v_i_2036_, v_k_2037_, v_ilo_2038_, v_ik_2039_, v_w_2040_);
lean_dec_ref(v_pivot_2034_);
lean_dec(v_hi_2032_);
lean_dec(v_lo_2031_);
lean_dec(v_n_2030_);
return v_res_2041_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13(lean_object* v_n_2042_, lean_object* v_lo_2043_, lean_object* v_hi_2044_, lean_object* v_hhi_2045_, lean_object* v_pivot_2046_, lean_object* v_as_2047_, lean_object* v_i_2048_, lean_object* v_k_2049_, lean_object* v_ilo_2050_, lean_object* v_ik_2051_, lean_object* v_w_2052_){
_start:
{
lean_object* v___x_2053_; 
v___x_2053_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___redArg(v_hi_2044_, v_pivot_2046_, v_as_2047_, v_i_2048_, v_k_2049_);
return v___x_2053_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13___boxed(lean_object* v_n_2054_, lean_object* v_lo_2055_, lean_object* v_hi_2056_, lean_object* v_hhi_2057_, lean_object* v_pivot_2058_, lean_object* v_as_2059_, lean_object* v_i_2060_, lean_object* v_k_2061_, lean_object* v_ilo_2062_, lean_object* v_ik_2063_, lean_object* v_w_2064_){
_start:
{
lean_object* v_res_2065_; 
v_res_2065_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__9_spec__13(v_n_2054_, v_lo_2055_, v_hi_2056_, v_hhi_2057_, v_pivot_2058_, v_as_2059_, v_i_2060_, v_k_2061_, v_ilo_2062_, v_ik_2063_, v_w_2064_);
lean_dec_ref(v_pivot_2058_);
lean_dec(v_hi_2056_);
lean_dec(v_lo_2055_);
lean_dec(v_n_2054_);
return v_res_2065_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4(lean_object* v_00_u03b2_2066_, lean_object* v_x_2067_, size_t v_x_2068_, size_t v_x_2069_, lean_object* v_x_2070_, lean_object* v_x_2071_){
_start:
{
lean_object* v___x_2072_; 
v___x_2072_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___redArg(v_x_2067_, v_x_2068_, v_x_2069_, v_x_2070_, v_x_2071_);
return v___x_2072_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4___boxed(lean_object* v_00_u03b2_2073_, lean_object* v_x_2074_, lean_object* v_x_2075_, lean_object* v_x_2076_, lean_object* v_x_2077_, lean_object* v_x_2078_){
_start:
{
size_t v_x_17538__boxed_2079_; size_t v_x_17539__boxed_2080_; lean_object* v_res_2081_; 
v_x_17538__boxed_2079_ = lean_unbox_usize(v_x_2075_);
lean_dec(v_x_2075_);
v_x_17539__boxed_2080_ = lean_unbox_usize(v_x_2076_);
lean_dec(v_x_2076_);
v_res_2081_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4(v_00_u03b2_2073_, v_x_2074_, v_x_17538__boxed_2079_, v_x_17539__boxed_2080_, v_x_2077_, v_x_2078_);
return v_res_2081_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13(lean_object* v_as_2082_, lean_object* v_a_2083_, lean_object* v_x_2084_, lean_object* v_x_2085_){
_start:
{
uint8_t v___x_2086_; 
v___x_2086_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___redArg(v_as_2082_, v_a_2083_, v_x_2084_);
return v___x_2086_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13___boxed(lean_object* v_as_2087_, lean_object* v_a_2088_, lean_object* v_x_2089_, lean_object* v_x_2090_){
_start:
{
uint8_t v_res_2091_; lean_object* v_r_2092_; 
v_res_2091_ = l___private_Init_Data_Array_Basic_0__Array_allDiffAuxAux___at___00__private_Init_Data_Array_Basic_0__Array_allDiffAux___at___00Array_allDiff___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__8_spec__11_spec__13(v_as_2087_, v_a_2088_, v_x_2089_, v_x_2090_);
lean_dec_ref(v_a_2088_);
lean_dec_ref(v_as_2087_);
v_r_2092_ = lean_box(v_res_2091_);
return v_r_2092_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12(lean_object* v_00_u03b2_2093_, lean_object* v_n_2094_, lean_object* v_k_2095_, lean_object* v_v_2096_){
_start:
{
lean_object* v___x_2097_; 
v___x_2097_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12___redArg(v_n_2094_, v_k_2095_, v_v_2096_);
return v___x_2097_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13(lean_object* v_00_u03b2_2098_, size_t v_depth_2099_, lean_object* v_keys_2100_, lean_object* v_vals_2101_, lean_object* v_heq_2102_, lean_object* v_i_2103_, lean_object* v_entries_2104_){
_start:
{
lean_object* v___x_2105_; 
v___x_2105_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___redArg(v_depth_2099_, v_keys_2100_, v_vals_2101_, v_i_2103_, v_entries_2104_);
return v___x_2105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13___boxed(lean_object* v_00_u03b2_2106_, lean_object* v_depth_2107_, lean_object* v_keys_2108_, lean_object* v_vals_2109_, lean_object* v_heq_2110_, lean_object* v_i_2111_, lean_object* v_entries_2112_){
_start:
{
size_t v_depth_boxed_2113_; lean_object* v_res_2114_; 
v_depth_boxed_2113_ = lean_unbox_usize(v_depth_2107_);
lean_dec(v_depth_2107_);
v_res_2114_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__13(v_00_u03b2_2106_, v_depth_boxed_2113_, v_keys_2108_, v_vals_2109_, v_heq_2110_, v_i_2111_, v_entries_2112_);
lean_dec_ref(v_vals_2109_);
lean_dec_ref(v_keys_2108_);
return v_res_2114_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12_spec__16(lean_object* v_00_u03b2_2115_, lean_object* v_x_2116_, lean_object* v_x_2117_, lean_object* v_x_2118_, lean_object* v_x_2119_){
_start:
{
lean_object* v___x_2120_; 
v___x_2120_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Conv_evalPattern_spec__3_spec__3_spec__4_spec__12_spec__16___redArg(v_x_2116_, v_x_2117_, v_x_2118_, v_x_2119_);
return v___x_2120_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1(){
_start:
{
lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; 
v___x_2130_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_2131_ = ((lean_object*)(l_Lean_Elab_Tactic_Conv_evalPattern___closed__6));
v___x_2132_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2));
v___x_2133_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Conv_evalPattern___boxed), 10, 0);
v___x_2134_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2130_, v___x_2131_, v___x_2132_, v___x_2133_);
return v___x_2134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___boxed(lean_object* v_a_2135_){
_start:
{
lean_object* v_res_2136_; 
v_res_2136_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1();
return v_res_2136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3(){
_start:
{
lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; 
v___x_2163_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1___closed__2));
v___x_2164_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___closed__6));
v___x_2165_ = l_Lean_addBuiltinDeclarationRanges(v___x_2163_, v___x_2164_);
return v___x_2165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3___boxed(lean_object* v_a_2166_){
_start:
{
lean_object* v_res_2167_; 
v_res_2167_ = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3();
return v_res_2167_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Conv_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Conv_Pattern(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Conv_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Conv_Pattern_0__Lean_Elab_Tactic_Conv_evalPattern___regBuiltin_Lean_Elab_Tactic_Conv_evalPattern_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Conv_Pattern(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Conv_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Conv_Pattern(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Conv_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Conv_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Conv_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Conv_Pattern(builtin);
}
#ifdef __cplusplus
}
#endif

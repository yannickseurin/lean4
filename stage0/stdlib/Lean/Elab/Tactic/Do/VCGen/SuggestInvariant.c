// Lean compiler output
// Module: Lean.Elab.Tactic.Do.VCGen.SuggestInvariant
// Imports: public import Lean.Elab.Tactic.Basic public import Lean.Meta.Tactic.Simp.Types import Lean.Meta.Tactic.Simp.Main import Lean.Elab.Tactic.Do.ProofMode.MGoal import Std.Tactic.Do import Init.Data.Array.Mem
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_getFVar_x21(lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* lean_expr_abstract_range(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil(lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* lean_expr_lower_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_String_instInhabitedSlice;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_string_is_valid_pos(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Meta_mkProjection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedLevel;
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_collectForwardDeps(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_collectFVars(lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_lastDecl(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_mkOr(lean_object*, lean_object*);
lean_object* l_Lean_mkAnd(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_delab(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_TSepArray_ofElems___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Meta_mkNone(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkSome(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSimpTheorems___redArg(lean_object*);
lean_object* l_Lean_Meta_getSimpCongrTheorems___redArg(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Meta_Simp_mkContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_Simp_SimprocsArray_add(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_saveState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_SavedState_restore___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTacticAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ULift"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "down"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__0_value),LEAN_SCALAR_PTR_LITERAL(14, 162, 24, 1, 186, 170, 9, 57)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__1_value),LEAN_SCALAR_PTR_LITERAL(8, 0, 133, 161, 22, 18, 91, 229)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_toAssertion(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "MGoalEntails"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(193, 32, 213, 253, 69, 208, 115, 14)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__6_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(203, 9, 83, 52, 40, 85, 31, 178)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "entails"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__9_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(86, 181, 97, 38, 147, 213, 38, 7)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_success_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_success_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_notAnInvariantUse_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_notAnInvariantUse_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_unknownInvariantUse_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_unknownInvariantUse_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Prod"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__0_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 119, 164, 206, 221, 118, 48, 212)}};
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__2_value_aux_0),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(117, 121, 37, 123, 104, 28, 189, 89)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg(lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "snd"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 119, 164, 206, 221, 118, 48, 212)}};
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(35, 40, 163, 84, 60, 49, 151, 224)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fst"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 119, 164, 206, 221, 118, 48, 212)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(170, 44, 236, 58, 247, 164, 254, 114)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Cursor"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__2_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__3_value),LEAN_SCALAR_PTR_LITERAL(171, 26, 51, 126, 183, 221, 138, 175)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__4_value_aux_1),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 108, 132, 55, 147, 41, 48, 106)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__4_value;
static const lean_array_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__2_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(90, 150, 134, 113, 145, 38, 173, 251)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__3_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__4_value),LEAN_SCALAR_PTR_LITERAL(149, 114, 34, 228, 75, 195, 143, 131)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__7_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 119, 164, 206, 221, 118, 48, 212)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__3_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__5_spec__9_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___closed__1;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___closed__2;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___boxed__const__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__5_spec__9_spec__11(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "forall"};
static const lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(118, 145, 1, 190, 19, 10, 144, 159)}};
static const lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "and"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 97, 27, 109, 96, 85, 230, 202)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "or"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(114, 97, 84, 180, 109, 220, 63, 60)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SuccessPoint_clause(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_punit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_punit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_false_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_false_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_true_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_true_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_other_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_other_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___lam__0(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PUnit"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unit"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(23, 153, 158, 141, 176, 162, 235, 153)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(146, 91, 82, 196, 249, 72, 203, 194)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ExceptConds"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(244, 224, 84, 66, 133, 22, 35, 247)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__6_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(72, 205, 41, 157, 129, 142, 231, 99)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(226, 139, 39, 26, 105, 135, 247, 193)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "prefix"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(230, 205, 224, 142, 140, 162, 83, 182)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__10_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__1_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_duplicateMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_duplicateMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__1(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__2_spec__2___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__2___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Array_map__unattach_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Array_map__unattach_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromTSyntax___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromTSyntax(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromTSyntax___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pure"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(83, 183, 133, 62, 214, 202, 136, 98)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 13, .m_data = "termPost⟨_,,⟩"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__1_value),LEAN_SCALAR_PTR_LITERAL(117, 45, 176, 130, 225, 239, 187, 245)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 5, .m_data = "post⟨"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__4_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__11_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "by"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__13 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__13_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__14_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__14_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__16 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__16_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__18 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__18_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__18_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "anonymousCtor"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__20 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__20_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__20_value),LEAN_SCALAR_PTR_LITERAL(56, 53, 154, 97, 179, 232, 94, 186)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__22 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__22_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "ExceptConds.false"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__23 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__23_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__24;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(139, 147, 12, 12, 50, 62, 178, 236)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__25_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(80, 174, 198, 53, 67, 44, 24, 11)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__25 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__25_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__26_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__26_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(244, 224, 84, 66, 133, 22, 35, 247)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__26_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(155, 33, 255, 249, 3, 79, 124, 43)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__26 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__26_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__26_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__27 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__27_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__27_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__28 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__28_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ExceptConds.true"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__29 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__29_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__30;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(139, 147, 12, 12, 50, 62, 178, 236)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__31_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(251, 220, 146, 174, 153, 82, 100, 162)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__31 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__31_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__32_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__32_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__32_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__32_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(244, 224, 84, 66, 133, 22, 35, 247)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__32_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(240, 66, 120, 132, 230, 141, 174, 69)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__32 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__32_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__32_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__33 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__33_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__33_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__34 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__34_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letMuts"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 50, 229, 239, 254, 134, 162, 48)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "reduceCtorEq"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(241, 230, 128, 19, 70, 224, 61, 3)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__3___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "r"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(201, 206, 29, 183, 206, 15, 98, 41)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 10, .m_data = "term_⇓_=>_"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__1_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⇓"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__5_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__6_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__7_value),LEAN_SCALAR_PTR_LITERAL(209, 134, 40, 160, 122, 195, 31, 223)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__8_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 11, .m_data = "term_⇓\?_=>_"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "⇓\?"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Invariant.withEarlyReturnNewDo"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "withEarlyReturnNewDo"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "namedArgument"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__5_value),LEAN_SCALAR_PTR_LITERAL(226, 89, 129, 113, 173, 121, 169, 188)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "onReturn"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__8_value),LEAN_SCALAR_PTR_LITERAL(141, 27, 190, 22, 214, 80, 62, 154)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__11_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__14_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "onContinue"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__15_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__15_value),LEAN_SCALAR_PTR_LITERAL(244, 55, 172, 124, 26, 216, 105, 59)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__17_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "onExcept"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__18_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__18_value),LEAN_SCALAR_PTR_LITERAL(203, 51, 246, 190, 226, 223, 149, 102)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__20_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__21_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__10_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__21_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__23 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__23_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mleave"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__8_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__9_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 47, 148, 137, 18, 118, 104, 201)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Expected invariant type, got "};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_suggestInvariant___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Invariant"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 189, 77, 192, 11, 129, 81, 25)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__3_value;
static const lean_array_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "xs"};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__5_value),LEAN_SCALAR_PTR_LITERAL(152, 88, 60, 86, 131, 35, 117, 108)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__2_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__3_value),LEAN_SCALAR_PTR_LITERAL(171, 26, 51, 126, 183, 221, 138, 175)}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__7_value;
static const lean_array_object l_Lean_Elab_Tactic_Do_suggestInvariant___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel(lean_object* v_expr_6_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; uint8_t v___x_9_; 
v___x_7_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__2));
v___x_8_ = lean_unsigned_to_nat(2u);
v___x_9_ = l_Lean_Expr_isAppOfArity(v_expr_6_, v___x_7_, v___x_8_);
if (v___x_9_ == 0)
{
lean_object* v___x_10_; 
v___x_10_ = lean_box(0);
return v___x_10_;
}
else
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_11_ = l_Lean_instInhabitedLevel;
v___x_12_ = l_Lean_Expr_getAppFn(v_expr_6_);
v___x_13_ = l_Lean_Expr_constLevels_x21(v___x_12_);
lean_dec_ref(v___x_12_);
v___x_14_ = lean_unsigned_to_nat(0u);
v___x_15_ = l_List_get_x21Internal___redArg(v___x_11_, v___x_13_, v___x_14_);
lean_dec(v___x_13_);
v___x_16_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
return v___x_16_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___boxed(lean_object* v_expr_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel(v_expr_17_);
lean_dec_ref(v_expr_17_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_toAssertion(lean_object* v_lvl_19_, lean_object* v_prop_20_){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; uint8_t v___x_23_; 
v___x_21_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel___closed__2));
v___x_22_ = lean_unsigned_to_nat(2u);
v___x_23_ = l_Lean_Expr_isAppOfArity(v_prop_20_, v___x_21_, v___x_22_);
if (v___x_23_ == 0)
{
lean_object* v___x_24_; lean_object* v___x_25_; 
lean_inc(v_lvl_19_);
v___x_24_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil(v_lvl_19_);
v___x_25_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(v_lvl_19_, v___x_24_, v_prop_20_);
return v___x_25_;
}
else
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
lean_dec(v_lvl_19_);
v___x_26_ = lean_unsigned_to_nat(1u);
v___x_27_ = l_Lean_Expr_getAppNumArgs(v_prop_20_);
v___x_28_ = lean_nat_sub(v___x_27_, v___x_26_);
lean_dec(v___x_27_);
v___x_29_ = lean_nat_sub(v___x_28_, v___x_26_);
lean_dec(v___x_28_);
v___x_30_ = l_Lean_Expr_getRevArg_x21(v_prop_20_, v___x_29_);
lean_dec_ref(v_prop_20_);
return v___x_30_;
}
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__0(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_31_ = lean_box(0);
v___x_32_ = l_unsafeCast___redArg(v___x_31_);
return v___x_32_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1(void){
_start:
{
lean_object* v___x_33_; lean_object* v_dummy_34_; 
v___x_33_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__0, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__0);
v_dummy_34_ = l_Lean_Expr_sort___override(v___x_33_);
return v_dummy_34_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg(lean_object* v_type_51_, lean_object* v_a_52_){
_start:
{
lean_object* v___y_55_; lean_object* v___y_56_; lean_object* v___y_64_; lean_object* v___y_65_; lean_object* v___x_78_; lean_object* v_dummy_79_; lean_object* v_nargs_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v_a_84_; uint8_t v___y_86_; lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_78_ = l_Lean_instInhabitedLevel;
v_dummy_79_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1);
v_nargs_80_ = l_Lean_Expr_getAppNumArgs(v_type_51_);
lean_inc(v_nargs_80_);
v___x_81_ = lean_mk_array(v_nargs_80_, v_dummy_79_);
v___x_82_ = lean_unsigned_to_nat(1u);
v___x_83_ = lean_nat_sub(v_nargs_80_, v___x_82_);
lean_inc(v___x_83_);
lean_inc_ref(v_type_51_);
v_a_84_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_type_51_, v___x_81_, v___x_83_);
v___x_108_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__6));
v___x_109_ = l_Lean_Expr_isAppOf(v_type_51_, v___x_108_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; uint8_t v___x_111_; 
v___x_110_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__9));
v___x_111_ = l_Lean_Expr_isAppOf(v_type_51_, v___x_110_);
v___y_86_ = v___x_111_;
goto v___jp_85_;
}
else
{
v___y_86_ = v___x_109_;
goto v___jp_85_;
}
v___jp_54_:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
lean_inc_n(v___y_56_, 2);
v___x_57_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_toAssertion(v___y_56_, v___y_55_);
v___x_58_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_toAssertion(v___y_56_, v_type_51_);
v___x_59_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_57_);
lean_ctor_set(v___x_59_, 1, v___x_58_);
v___x_60_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_60_, 0, v___y_56_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
v___x_61_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
v___x_62_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
return v___x_62_;
}
v___jp_63_:
{
if (lean_obj_tag(v___y_65_) == 0)
{
lean_object* v___x_66_; 
v___x_66_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__0, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__0);
v___y_55_ = v___y_64_;
v___y_56_ = v___x_66_;
goto v___jp_54_;
}
else
{
lean_object* v_val_67_; 
v_val_67_ = lean_ctor_get(v___y_65_, 0);
lean_inc(v_val_67_);
lean_dec_ref_known(v___y_65_, 1);
v___y_55_ = v___y_64_;
v___y_56_ = v_val_67_;
goto v___jp_54_;
}
}
v___jp_68_:
{
lean_object* v_lctx_69_; lean_object* v___x_70_; 
v_lctx_69_ = lean_ctor_get(v_a_52_, 2);
v___x_70_ = l_Lean_LocalContext_lastDecl(v_lctx_69_);
if (lean_obj_tag(v___x_70_) == 1)
{
lean_object* v_val_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v_val_71_ = lean_ctor_get(v___x_70_, 0);
lean_inc(v_val_71_);
lean_dec_ref_known(v___x_70_, 1);
v___x_72_ = l_Lean_LocalDecl_type(v_val_71_);
lean_dec(v_val_71_);
v___x_73_ = l_Lean_Expr_consumeMData(v___x_72_);
lean_dec_ref(v___x_72_);
v___x_74_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel(v_type_51_);
if (lean_obj_tag(v___x_74_) == 0)
{
lean_object* v___x_75_; 
v___x_75_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget_getULiftDownLevel(v___x_73_);
v___y_64_ = v___x_73_;
v___y_65_ = v___x_75_;
goto v___jp_63_;
}
else
{
v___y_64_ = v___x_73_;
v___y_65_ = v___x_74_;
goto v___jp_63_;
}
}
else
{
lean_object* v___x_76_; lean_object* v___x_77_; 
lean_dec(v___x_70_);
lean_dec_ref(v_type_51_);
v___x_76_ = lean_box(0);
v___x_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
return v___x_77_;
}
}
v___jp_85_:
{
if (v___y_86_ == 0)
{
lean_dec_ref(v_a_84_);
lean_dec(v___x_83_);
lean_dec(v_nargs_80_);
goto v___jp_68_;
}
else
{
lean_object* v___x_87_; lean_object* v___x_88_; uint8_t v___x_89_; 
v___x_87_ = lean_unsigned_to_nat(2u);
v___x_88_ = lean_array_get_size(v_a_84_);
v___x_89_ = lean_nat_dec_lt(v___x_87_, v___x_88_);
if (v___x_89_ == 0)
{
lean_dec_ref(v_a_84_);
lean_dec(v___x_83_);
lean_dec(v_nargs_80_);
goto v___jp_68_;
}
else
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_90_ = l_Lean_Expr_getAppFn(v_type_51_);
v___x_91_ = l_Lean_Expr_constLevels_x21(v___x_90_);
lean_dec_ref(v___x_90_);
v___x_92_ = lean_unsigned_to_nat(0u);
v___x_93_ = l_List_get_x21Internal___redArg(v___x_78_, v___x_91_, v___x_92_);
lean_dec(v___x_91_);
v___x_94_ = lean_nat_sub(v___x_83_, v___x_82_);
lean_dec(v___x_83_);
v___x_95_ = l_Lean_Expr_getRevArg_x21(v_type_51_, v___x_94_);
v___x_96_ = lean_unsigned_to_nat(3u);
v___x_97_ = l_Array_toSubarray___redArg(v_a_84_, v___x_96_, v___x_88_);
v___x_98_ = l_Subarray_copy___redArg(v___x_97_);
lean_inc_ref(v___x_98_);
v___x_99_ = l_Lean_Expr_beta(v___x_95_, v___x_98_);
v___x_100_ = lean_nat_sub(v_nargs_80_, v___x_87_);
lean_dec(v_nargs_80_);
v___x_101_ = lean_nat_sub(v___x_100_, v___x_82_);
lean_dec(v___x_100_);
v___x_102_ = l_Lean_Expr_getRevArg_x21(v_type_51_, v___x_101_);
lean_dec_ref(v_type_51_);
v___x_103_ = l_Lean_Expr_beta(v___x_102_, v___x_98_);
v___x_104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_104_, 0, v___x_99_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
v___x_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_93_);
lean_ctor_set(v___x_105_, 1, v___x_104_);
v___x_106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
v___x_107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
return v___x_107_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___boxed(lean_object* v_type_112_, lean_object* v_a_113_, lean_object* v_a_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg(v_type_112_, v_a_113_);
lean_dec_ref(v_a_113_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget(lean_object* v_type_116_, lean_object* v_a_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg(v_type_116_, v_a_117_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___boxed(lean_object* v_type_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget(v_type_123_, v_a_124_, v_a_125_, v_a_126_, v_a_127_);
lean_dec(v_a_127_);
lean_dec_ref(v_a_126_);
lean_dec(v_a_125_);
lean_dec_ref(v_a_124_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorIdx(lean_object* v_x_130_){
_start:
{
switch(lean_obj_tag(v_x_130_))
{
case 0:
{
lean_object* v___x_131_; 
v___x_131_ = lean_unsigned_to_nat(0u);
return v___x_131_;
}
case 1:
{
lean_object* v___x_132_; 
v___x_132_ = lean_unsigned_to_nat(1u);
return v___x_132_;
}
default: 
{
lean_object* v___x_133_; 
v___x_133_ = lean_unsigned_to_nat(2u);
return v___x_133_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorIdx___boxed(lean_object* v_x_134_){
_start:
{
lean_object* v_res_135_; 
v_res_135_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorIdx(v_x_134_);
lean_dec(v_x_134_);
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___redArg(lean_object* v_t_136_, lean_object* v_k_137_){
_start:
{
if (lean_obj_tag(v_t_136_) == 0)
{
lean_object* v_invariantUse_138_; lean_object* v___x_139_; 
v_invariantUse_138_ = lean_ctor_get(v_t_136_, 0);
lean_inc_ref(v_invariantUse_138_);
lean_dec_ref_known(v_t_136_, 1);
v___x_139_ = lean_apply_1(v_k_137_, v_invariantUse_138_);
return v___x_139_;
}
else
{
lean_dec(v_t_136_);
return v_k_137_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim(lean_object* v_motive_140_, lean_object* v_ctorIdx_141_, lean_object* v_t_142_, lean_object* v_h_143_, lean_object* v_k_144_){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___redArg(v_t_142_, v_k_144_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___boxed(lean_object* v_motive_146_, lean_object* v_ctorIdx_147_, lean_object* v_t_148_, lean_object* v_h_149_, lean_object* v_k_150_){
_start:
{
lean_object* v_res_151_; 
v_res_151_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim(v_motive_146_, v_ctorIdx_147_, v_t_148_, v_h_149_, v_k_150_);
lean_dec(v_ctorIdx_147_);
return v_res_151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_success_elim___redArg(lean_object* v_t_152_, lean_object* v_success_153_){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___redArg(v_t_152_, v_success_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_success_elim(lean_object* v_motive_155_, lean_object* v_t_156_, lean_object* v_h_157_, lean_object* v_success_158_){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___redArg(v_t_156_, v_success_158_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_notAnInvariantUse_elim___redArg(lean_object* v_t_160_, lean_object* v_notAnInvariantUse_161_){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___redArg(v_t_160_, v_notAnInvariantUse_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_notAnInvariantUse_elim(lean_object* v_motive_163_, lean_object* v_t_164_, lean_object* v_h_165_, lean_object* v_notAnInvariantUse_166_){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___redArg(v_t_164_, v_notAnInvariantUse_166_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_unknownInvariantUse_elim___redArg(lean_object* v_t_168_, lean_object* v_unknownInvariantUse_169_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___redArg(v_t_168_, v_unknownInvariantUse_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_unknownInvariantUse_elim(lean_object* v_motive_171_, lean_object* v_t_172_, lean_object* v_h_173_, lean_object* v_unknownInvariantUse_174_){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ClassifyInvariantUseResult_ctorElim___redArg(v_t_172_, v_unknownInvariantUse_174_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg(lean_object* v_a_181_){
_start:
{
lean_object* v_fst_182_; lean_object* v_snd_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_208_; 
v_fst_182_ = lean_ctor_get(v_a_181_, 0);
v_snd_183_ = lean_ctor_get(v_a_181_, 1);
v_isSharedCheck_208_ = !lean_is_exclusive(v_a_181_);
if (v_isSharedCheck_208_ == 0)
{
v___x_185_ = v_a_181_;
v_isShared_186_ = v_isSharedCheck_208_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_snd_183_);
lean_inc(v_fst_182_);
lean_dec(v_a_181_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_208_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_187_; lean_object* v___x_188_; uint8_t v___x_189_; 
v___x_187_ = lean_unsigned_to_nat(4u);
v___x_188_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__2));
v___x_189_ = l_Lean_Expr_isAppOfArity(v_fst_182_, v___x_188_, v___x_187_);
if (v___x_189_ == 0)
{
lean_object* v___x_191_; 
if (v_isShared_186_ == 0)
{
v___x_191_ = v___x_185_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v_fst_182_);
lean_ctor_set(v_reuseFailAlloc_192_, 1, v_snd_183_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
}
}
else
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_205_; 
v___x_193_ = lean_unsigned_to_nat(2u);
v___x_194_ = lean_unsigned_to_nat(3u);
v___x_195_ = l_Lean_Expr_getAppNumArgs(v_fst_182_);
v___x_196_ = lean_nat_sub(v___x_195_, v___x_193_);
v___x_197_ = lean_unsigned_to_nat(1u);
v___x_198_ = lean_nat_sub(v___x_196_, v___x_197_);
lean_dec(v___x_196_);
v___x_199_ = l_Lean_Expr_getRevArg_x21(v_fst_182_, v___x_198_);
v___x_200_ = lean_array_push(v_snd_183_, v___x_199_);
v___x_201_ = lean_nat_sub(v___x_195_, v___x_194_);
lean_dec(v___x_195_);
v___x_202_ = lean_nat_sub(v___x_201_, v___x_197_);
lean_dec(v___x_201_);
v___x_203_ = l_Lean_Expr_getRevArg_x21(v_fst_182_, v___x_202_);
lean_dec(v_fst_182_);
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 1, v___x_200_);
lean_ctor_set(v___x_185_, 0, v___x_203_);
v___x_205_ = v___x_185_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v___x_203_);
lean_ctor_set(v_reuseFailAlloc_207_, 1, v___x_200_);
v___x_205_ = v_reuseFailAlloc_207_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
v_a_181_ = v___x_205_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg(lean_object* v_inv_215_, lean_object* v_a_216_){
_start:
{
lean_object* v_snd_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_256_; 
v_snd_217_ = lean_ctor_get(v_a_216_, 1);
v_isSharedCheck_256_ = !lean_is_exclusive(v_a_216_);
if (v_isSharedCheck_256_ == 0)
{
lean_object* v_unused_257_; 
v_unused_257_ = lean_ctor_get(v_a_216_, 0);
lean_dec(v_unused_257_);
v___x_219_ = v_a_216_;
v_isShared_220_ = v_isSharedCheck_256_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_snd_217_);
lean_dec(v_a_216_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_256_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v_fst_221_; lean_object* v_snd_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_255_; 
v_fst_221_ = lean_ctor_get(v_snd_217_, 0);
v_snd_222_ = lean_ctor_get(v_snd_217_, 1);
v_isSharedCheck_255_ = !lean_is_exclusive(v_snd_217_);
if (v_isSharedCheck_255_ == 0)
{
v___x_224_ = v_snd_217_;
v_isShared_225_ = v_isSharedCheck_255_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_snd_222_);
lean_inc(v_fst_221_);
lean_dec(v_snd_217_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_255_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_226_; lean_object* v___x_227_; uint8_t v___x_228_; 
v___x_226_ = lean_box(0);
lean_inc(v_inv_215_);
v___x_227_ = l_Lean_mkMVar(v_inv_215_);
v___x_228_ = lean_expr_eqv(v_fst_221_, v___x_227_);
lean_dec_ref(v___x_227_);
if (v___x_228_ == 0)
{
lean_object* v___x_229_; lean_object* v___x_230_; uint8_t v___x_231_; 
v___x_229_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__1));
v___x_230_ = lean_unsigned_to_nat(4u);
v___x_231_ = l_Lean_Expr_isAppOfArity(v_fst_221_, v___x_229_, v___x_230_);
if (v___x_231_ == 0)
{
lean_object* v___x_232_; lean_object* v___x_234_; 
lean_dec(v_inv_215_);
v___x_232_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__2));
if (v_isShared_225_ == 0)
{
v___x_234_ = v___x_224_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v_fst_221_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v_snd_222_);
v___x_234_ = v_reuseFailAlloc_238_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
lean_object* v___x_236_; 
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 1, v___x_234_);
lean_ctor_set(v___x_219_, 0, v___x_232_);
v___x_236_ = v___x_219_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v___x_232_);
lean_ctor_set(v_reuseFailAlloc_237_, 1, v___x_234_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
return v___x_236_;
}
}
}
else
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_243_; 
v___x_239_ = lean_unsigned_to_nat(1u);
v___x_240_ = lean_nat_add(v_snd_222_, v___x_239_);
lean_dec(v_snd_222_);
v___x_241_ = l_Lean_Expr_getRevArg_x21(v_fst_221_, v___x_239_);
lean_dec(v_fst_221_);
if (v_isShared_225_ == 0)
{
lean_ctor_set(v___x_224_, 1, v___x_240_);
lean_ctor_set(v___x_224_, 0, v___x_241_);
v___x_243_ = v___x_224_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v___x_241_);
lean_ctor_set(v_reuseFailAlloc_248_, 1, v___x_240_);
v___x_243_ = v_reuseFailAlloc_248_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
lean_object* v___x_245_; 
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 1, v___x_243_);
lean_ctor_set(v___x_219_, 0, v___x_226_);
v___x_245_ = v___x_219_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v___x_226_);
lean_ctor_set(v_reuseFailAlloc_247_, 1, v___x_243_);
v___x_245_ = v_reuseFailAlloc_247_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
v_a_216_ = v___x_245_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_250_; 
lean_dec(v_inv_215_);
if (v_isShared_225_ == 0)
{
v___x_250_ = v___x_224_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_fst_221_);
lean_ctor_set(v_reuseFailAlloc_254_, 1, v_snd_222_);
v___x_250_ = v_reuseFailAlloc_254_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
lean_object* v___x_252_; 
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 1, v___x_250_);
lean_ctor_set(v___x_219_, 0, v___x_226_);
v___x_252_ = v___x_219_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v___x_226_);
lean_ctor_set(v_reuseFailAlloc_253_, 1, v___x_250_);
v___x_252_ = v_reuseFailAlloc_253_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
return v___x_252_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse(lean_object* v_assertion_270_, lean_object* v_inv_271_){
_start:
{
lean_object* v_assertion_272_; lean_object* v___x_273_; uint8_t v___x_274_; 
v_assertion_272_ = l_Lean_Expr_consumeMData(v_assertion_270_);
v___x_273_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__1));
v___x_274_ = l_Lean_Expr_isAppOf(v_assertion_272_, v___x_273_);
if (v___x_274_ == 0)
{
lean_object* v___x_275_; 
lean_dec_ref(v_assertion_272_);
lean_dec(v_inv_271_);
v___x_275_ = lean_box(1);
return v___x_275_;
}
else
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v_head_281_; lean_object* v_conditionIdx_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v_fst_287_; 
v___x_276_ = lean_unsigned_to_nat(2u);
v___x_277_ = l_Lean_Expr_getAppNumArgs(v_assertion_272_);
v___x_278_ = lean_nat_sub(v___x_277_, v___x_276_);
v___x_279_ = lean_unsigned_to_nat(1u);
v___x_280_ = lean_nat_sub(v___x_278_, v___x_279_);
lean_dec(v___x_278_);
v_head_281_ = l_Lean_Expr_getRevArg_x21(v_assertion_272_, v___x_280_);
v_conditionIdx_282_ = lean_unsigned_to_nat(0u);
v___x_283_ = lean_box(0);
v___x_284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_284_, 0, v_head_281_);
lean_ctor_set(v___x_284_, 1, v_conditionIdx_282_);
v___x_285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_283_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v___x_286_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg(v_inv_271_, v___x_285_);
v_fst_287_ = lean_ctor_get(v___x_286_, 0);
lean_inc(v_fst_287_);
if (lean_obj_tag(v_fst_287_) == 0)
{
lean_object* v_snd_288_; lean_object* v_dummy_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; uint8_t v___x_295_; 
v_snd_288_ = lean_ctor_get(v___x_286_, 1);
lean_inc(v_snd_288_);
lean_dec_ref(v___x_286_);
v_dummy_289_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__1);
lean_inc(v___x_277_);
v___x_290_ = lean_mk_array(v___x_277_, v_dummy_289_);
v___x_291_ = lean_nat_sub(v___x_277_, v___x_279_);
lean_dec(v___x_277_);
v___x_292_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_assertion_272_, v___x_290_, v___x_291_);
v___x_293_ = lean_array_get_size(v___x_292_);
v___x_294_ = lean_unsigned_to_nat(4u);
v___x_295_ = lean_nat_dec_lt(v___x_293_, v___x_294_);
if (v___x_295_ == 0)
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_296_ = l_Lean_instInhabitedExpr;
v___x_297_ = lean_unsigned_to_nat(3u);
v___x_298_ = lean_array_get(v___x_296_, v___x_292_, v___x_297_);
v___x_299_ = l_Lean_Expr_cleanupAnnotations(v___x_298_);
v___x_300_ = l_Lean_Expr_isApp(v___x_299_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; 
lean_dec_ref(v___x_299_);
lean_dec_ref(v___x_292_);
lean_dec(v_snd_288_);
v___x_301_ = lean_box(2);
return v___x_301_;
}
else
{
lean_object* v_arg_302_; lean_object* v___x_303_; uint8_t v___x_304_; 
v_arg_302_ = lean_ctor_get(v___x_299_, 1);
lean_inc_ref(v_arg_302_);
v___x_303_ = l_Lean_Expr_appFnCleanup___redArg(v___x_299_);
v___x_304_ = l_Lean_Expr_isApp(v___x_303_);
if (v___x_304_ == 0)
{
lean_object* v___x_305_; 
lean_dec_ref(v___x_303_);
lean_dec_ref(v_arg_302_);
lean_dec_ref(v___x_292_);
lean_dec(v_snd_288_);
v___x_305_ = lean_box(2);
return v___x_305_;
}
else
{
lean_object* v_arg_306_; lean_object* v___x_307_; uint8_t v___x_308_; 
v_arg_306_ = lean_ctor_get(v___x_303_, 1);
lean_inc_ref(v_arg_306_);
v___x_307_ = l_Lean_Expr_appFnCleanup___redArg(v___x_303_);
v___x_308_ = l_Lean_Expr_isApp(v___x_307_);
if (v___x_308_ == 0)
{
lean_object* v___x_309_; 
lean_dec_ref(v___x_307_);
lean_dec_ref(v_arg_306_);
lean_dec_ref(v_arg_302_);
lean_dec_ref(v___x_292_);
lean_dec(v_snd_288_);
v___x_309_ = lean_box(2);
return v___x_309_;
}
else
{
lean_object* v___x_310_; uint8_t v___x_311_; 
v___x_310_ = l_Lean_Expr_appFnCleanup___redArg(v___x_307_);
v___x_311_ = l_Lean_Expr_isApp(v___x_310_);
if (v___x_311_ == 0)
{
lean_object* v___x_312_; 
lean_dec_ref(v___x_310_);
lean_dec_ref(v_arg_306_);
lean_dec_ref(v_arg_302_);
lean_dec_ref(v___x_292_);
lean_dec(v_snd_288_);
v___x_312_ = lean_box(2);
return v___x_312_;
}
else
{
lean_object* v___x_313_; lean_object* v___x_314_; uint8_t v___x_315_; 
v___x_313_ = l_Lean_Expr_appFnCleanup___redArg(v___x_310_);
v___x_314_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__2));
v___x_315_ = l_Lean_Expr_isConstOf(v___x_313_, v___x_314_);
lean_dec_ref(v___x_313_);
if (v___x_315_ == 0)
{
lean_object* v___x_316_; 
lean_dec_ref(v_arg_306_);
lean_dec_ref(v_arg_302_);
lean_dec_ref(v___x_292_);
lean_dec(v_snd_288_);
v___x_316_ = lean_box(2);
return v___x_316_;
}
else
{
lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_317_ = l_Lean_Expr_cleanupAnnotations(v_arg_306_);
v___x_318_ = l_Lean_Expr_isApp(v___x_317_);
if (v___x_318_ == 0)
{
lean_object* v___x_319_; 
lean_dec_ref(v___x_317_);
lean_dec_ref(v_arg_302_);
lean_dec_ref(v___x_292_);
lean_dec(v_snd_288_);
v___x_319_ = lean_box(2);
return v___x_319_;
}
else
{
lean_object* v___x_320_; uint8_t v___x_321_; 
v___x_320_ = l_Lean_Expr_appFnCleanup___redArg(v___x_317_);
v___x_321_ = l_Lean_Expr_isApp(v___x_320_);
if (v___x_321_ == 0)
{
lean_object* v___x_322_; 
lean_dec_ref(v___x_320_);
lean_dec_ref(v_arg_302_);
lean_dec_ref(v___x_292_);
lean_dec(v_snd_288_);
v___x_322_ = lean_box(2);
return v___x_322_;
}
else
{
lean_object* v_arg_323_; lean_object* v___x_324_; uint8_t v___x_325_; 
v_arg_323_ = lean_ctor_get(v___x_320_, 1);
lean_inc_ref(v_arg_323_);
v___x_324_ = l_Lean_Expr_appFnCleanup___redArg(v___x_320_);
v___x_325_ = l_Lean_Expr_isApp(v___x_324_);
if (v___x_325_ == 0)
{
lean_object* v___x_326_; 
lean_dec_ref(v___x_324_);
lean_dec_ref(v_arg_323_);
lean_dec_ref(v_arg_302_);
lean_dec_ref(v___x_292_);
lean_dec(v_snd_288_);
v___x_326_ = lean_box(2);
return v___x_326_;
}
else
{
lean_object* v_arg_327_; lean_object* v___x_328_; uint8_t v___x_329_; 
v_arg_327_ = lean_ctor_get(v___x_324_, 1);
lean_inc_ref(v_arg_327_);
v___x_328_ = l_Lean_Expr_appFnCleanup___redArg(v___x_324_);
v___x_329_ = l_Lean_Expr_isApp(v___x_328_);
if (v___x_329_ == 0)
{
lean_object* v___x_330_; 
lean_dec_ref(v___x_328_);
lean_dec_ref(v_arg_327_);
lean_dec_ref(v_arg_323_);
lean_dec_ref(v_arg_302_);
lean_dec_ref(v___x_292_);
lean_dec(v_snd_288_);
v___x_330_ = lean_box(2);
return v___x_330_;
}
else
{
lean_object* v___x_331_; uint8_t v___x_332_; 
v___x_331_ = l_Lean_Expr_appFnCleanup___redArg(v___x_328_);
v___x_332_ = l_Lean_Expr_isApp(v___x_331_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; 
lean_dec_ref(v___x_331_);
lean_dec_ref(v_arg_327_);
lean_dec_ref(v_arg_323_);
lean_dec_ref(v_arg_302_);
lean_dec_ref(v___x_292_);
lean_dec(v_snd_288_);
v___x_333_ = lean_box(2);
return v___x_333_;
}
else
{
lean_object* v___x_334_; lean_object* v___x_335_; uint8_t v___x_336_; 
v___x_334_ = l_Lean_Expr_appFnCleanup___redArg(v___x_331_);
v___x_335_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__4));
v___x_336_ = l_Lean_Expr_isConstOf(v___x_334_, v___x_335_);
lean_dec_ref(v___x_334_);
if (v___x_336_ == 0)
{
lean_object* v___x_337_; 
lean_dec_ref(v_arg_327_);
lean_dec_ref(v_arg_323_);
lean_dec_ref(v_arg_302_);
lean_dec_ref(v___x_292_);
lean_dec(v_snd_288_);
v___x_337_ = lean_box(2);
return v___x_337_;
}
else
{
lean_object* v_snd_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_354_; 
v_snd_338_ = lean_ctor_get(v_snd_288_, 1);
v_isSharedCheck_354_ = !lean_is_exclusive(v_snd_288_);
if (v_isSharedCheck_354_ == 0)
{
lean_object* v_unused_355_; 
v_unused_355_ = lean_ctor_get(v_snd_288_, 0);
lean_dec(v_unused_355_);
v___x_340_ = v_snd_288_;
v_isShared_341_ = v_isSharedCheck_354_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_snd_338_);
lean_dec(v_snd_288_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_354_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_342_; lean_object* v___x_344_; 
v___x_342_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__5));
lean_inc_ref(v_arg_302_);
if (v_isShared_341_ == 0)
{
lean_ctor_set(v___x_340_, 1, v___x_342_);
lean_ctor_set(v___x_340_, 0, v_arg_302_);
v___x_344_ = v___x_340_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_arg_302_);
lean_ctor_set(v_reuseFailAlloc_353_, 1, v___x_342_);
v___x_344_ = v_reuseFailAlloc_353_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
lean_object* v___x_345_; lean_object* v_fst_346_; lean_object* v_snd_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_345_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg(v___x_344_);
v_fst_346_ = lean_ctor_get(v___x_345_, 0);
lean_inc(v_fst_346_);
v_snd_347_ = lean_ctor_get(v___x_345_, 1);
lean_inc(v_snd_347_);
lean_dec_ref(v___x_345_);
v___x_348_ = l_Array_toSubarray___redArg(v___x_292_, v___x_294_, v___x_293_);
v___x_349_ = lean_array_push(v_snd_347_, v_fst_346_);
v___x_350_ = l_Subarray_copy___redArg(v___x_348_);
v___x_351_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_351_, 0, v_snd_338_);
lean_ctor_set(v___x_351_, 1, v_arg_327_);
lean_ctor_set(v___x_351_, 2, v_arg_323_);
lean_ctor_set(v___x_351_, 3, v___x_349_);
lean_ctor_set(v___x_351_, 4, v_arg_302_);
lean_ctor_set(v___x_351_, 5, v___x_350_);
v___x_352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_352_, 0, v___x_351_);
return v___x_352_;
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
else
{
lean_object* v___x_356_; 
lean_dec_ref(v___x_292_);
lean_dec(v_snd_288_);
v___x_356_ = lean_box(1);
return v___x_356_;
}
}
else
{
lean_object* v_val_357_; 
lean_dec_ref(v___x_286_);
lean_dec(v___x_277_);
lean_dec_ref(v_assertion_272_);
v_val_357_ = lean_ctor_get(v_fst_287_, 0);
lean_inc(v_val_357_);
lean_dec_ref_known(v_fst_287_, 1);
return v_val_357_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___boxed(lean_object* v_assertion_358_, lean_object* v_inv_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse(v_assertion_358_, v_inv_359_);
lean_dec_ref(v_assertion_358_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0(lean_object* v_inv_361_, lean_object* v_inst_362_, lean_object* v_a_363_){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg(v_inv_361_, v_a_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1(lean_object* v_inst_365_, lean_object* v_a_366_){
_start:
{
lean_object* v___x_367_; 
v___x_367_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg(v_a_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0___redArg(lean_object* v_mvarId_368_, lean_object* v_x_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_368_, v_x_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_);
if (lean_obj_tag(v___x_375_) == 0)
{
lean_object* v_a_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_383_; 
v_a_376_ = lean_ctor_get(v___x_375_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_375_);
if (v_isSharedCheck_383_ == 0)
{
v___x_378_ = v___x_375_;
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_a_376_);
lean_dec(v___x_375_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_381_; 
if (v_isShared_379_ == 0)
{
v___x_381_ = v___x_378_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v_a_376_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
else
{
lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
v_a_384_ = lean_ctor_get(v___x_375_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_375_);
if (v_isSharedCheck_391_ == 0)
{
v___x_386_ = v___x_375_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_dec(v___x_375_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_a_384_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0___redArg___boxed(lean_object* v_mvarId_392_, lean_object* v_x_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0___redArg(v_mvarId_392_, v_x_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0(lean_object* v_00_u03b1_400_, lean_object* v_mvarId_401_, lean_object* v_x_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0___redArg(v_mvarId_401_, v_x_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0___boxed(lean_object* v_00_u03b1_409_, lean_object* v_mvarId_410_, lean_object* v_x_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0(v_00_u03b1_409_, v_mvarId_410_, v_x_411_, v___y_412_, v___y_413_, v___y_414_, v___y_415_);
lean_dec(v___y_415_);
lean_dec_ref(v___y_414_);
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1___redArg(lean_object* v_e_418_, lean_object* v___y_419_){
_start:
{
uint8_t v___x_421_; 
v___x_421_ = l_Lean_Expr_hasMVar(v_e_418_);
if (v___x_421_ == 0)
{
lean_object* v___x_422_; 
v___x_422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_422_, 0, v_e_418_);
return v___x_422_;
}
else
{
lean_object* v___x_423_; lean_object* v_mctx_424_; lean_object* v___x_425_; lean_object* v_fst_426_; lean_object* v_snd_427_; lean_object* v___x_428_; lean_object* v_cache_429_; lean_object* v_zetaDeltaFVarIds_430_; lean_object* v_postponed_431_; lean_object* v_diag_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_441_; 
v___x_423_ = lean_st_ref_get(v___y_419_);
v_mctx_424_ = lean_ctor_get(v___x_423_, 0);
lean_inc_ref(v_mctx_424_);
lean_dec(v___x_423_);
v___x_425_ = l_Lean_instantiateMVarsCore(v_mctx_424_, v_e_418_);
v_fst_426_ = lean_ctor_get(v___x_425_, 0);
lean_inc(v_fst_426_);
v_snd_427_ = lean_ctor_get(v___x_425_, 1);
lean_inc(v_snd_427_);
lean_dec_ref(v___x_425_);
v___x_428_ = lean_st_ref_take(v___y_419_);
v_cache_429_ = lean_ctor_get(v___x_428_, 1);
v_zetaDeltaFVarIds_430_ = lean_ctor_get(v___x_428_, 2);
v_postponed_431_ = lean_ctor_get(v___x_428_, 3);
v_diag_432_ = lean_ctor_get(v___x_428_, 4);
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_428_);
if (v_isSharedCheck_441_ == 0)
{
lean_object* v_unused_442_; 
v_unused_442_ = lean_ctor_get(v___x_428_, 0);
lean_dec(v_unused_442_);
v___x_434_ = v___x_428_;
v_isShared_435_ = v_isSharedCheck_441_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_diag_432_);
lean_inc(v_postponed_431_);
lean_inc(v_zetaDeltaFVarIds_430_);
lean_inc(v_cache_429_);
lean_dec(v___x_428_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_441_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 0, v_snd_427_);
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_snd_427_);
lean_ctor_set(v_reuseFailAlloc_440_, 1, v_cache_429_);
lean_ctor_set(v_reuseFailAlloc_440_, 2, v_zetaDeltaFVarIds_430_);
lean_ctor_set(v_reuseFailAlloc_440_, 3, v_postponed_431_);
lean_ctor_set(v_reuseFailAlloc_440_, 4, v_diag_432_);
v___x_437_ = v_reuseFailAlloc_440_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = lean_st_ref_put(v___y_419_, v___x_437_);
v___x_439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_439_, 0, v_fst_426_);
return v___x_439_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1___redArg___boxed(lean_object* v_e_443_, lean_object* v___y_444_, lean_object* v___y_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1___redArg(v_e_443_, v___y_444_);
lean_dec(v___y_444_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1(lean_object* v_e_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_){
_start:
{
lean_object* v___x_453_; 
v___x_453_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1___redArg(v_e_447_, v___y_449_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1___boxed(lean_object* v_e_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1(v_e_454_, v___y_455_, v___y_456_, v___y_457_, v___y_458_);
lean_dec(v___y_458_);
lean_dec_ref(v___y_457_);
lean_dec(v___y_456_);
lean_dec_ref(v___y_455_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2(lean_object* v_inv_478_, uint8_t v___x_479_, lean_object* v_as_480_, size_t v_sz_481_, size_t v_i_482_, lean_object* v_b_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_){
_start:
{
lean_object* v_a_490_; uint8_t v___x_494_; 
v___x_494_ = lean_usize_dec_lt(v_i_482_, v_sz_481_);
if (v___x_494_ == 0)
{
lean_object* v___x_495_; 
lean_dec(v_inv_478_);
v___x_495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_495_, 0, v_b_483_);
return v___x_495_;
}
else
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v_a_498_; lean_object* v_a_500_; lean_object* v___x_537_; 
lean_dec_ref(v_b_483_);
v___x_496_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__0));
v___x_497_ = l_Lean_instInhabitedExpr;
v_a_498_ = lean_array_uget_borrowed(v_as_480_, v_i_482_);
lean_inc(v_a_498_);
v___x_537_ = l_Lean_MVarId_getType(v_a_498_, v___y_484_, v___y_485_, v___y_486_, v___y_487_);
if (lean_obj_tag(v___x_537_) == 0)
{
lean_object* v_a_538_; lean_object* v___x_539_; 
v_a_538_ = lean_ctor_get(v___x_537_, 0);
lean_inc(v_a_538_);
lean_dec_ref_known(v___x_537_, 1);
v___x_539_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1___redArg(v_a_538_, v___y_485_);
if (lean_obj_tag(v___x_539_) == 0)
{
lean_object* v_a_540_; lean_object* v___x_541_; 
v_a_540_ = lean_ctor_get(v___x_539_, 0);
lean_inc(v_a_540_);
lean_dec_ref_known(v___x_539_, 1);
v___x_541_ = l_Lean_Expr_consumeMData(v_a_540_);
lean_dec(v_a_540_);
v_a_500_ = v___x_541_;
goto v___jp_499_;
}
else
{
if (lean_obj_tag(v___x_539_) == 0)
{
lean_object* v_a_542_; 
v_a_542_ = lean_ctor_get(v___x_539_, 0);
lean_inc(v_a_542_);
lean_dec_ref_known(v___x_539_, 1);
v_a_500_ = v_a_542_;
goto v___jp_499_;
}
else
{
lean_object* v_a_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_550_; 
lean_dec(v_inv_478_);
v_a_543_ = lean_ctor_get(v___x_539_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_550_ == 0)
{
v___x_545_ = v___x_539_;
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_a_543_);
lean_dec(v___x_539_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_548_; 
if (v_isShared_546_ == 0)
{
v___x_548_ = v___x_545_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_a_543_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
}
}
}
else
{
lean_object* v_a_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_558_; 
lean_dec(v_inv_478_);
v_a_551_ = lean_ctor_get(v___x_537_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_537_);
if (v_isSharedCheck_558_ == 0)
{
v___x_553_ = v___x_537_;
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_a_551_);
lean_dec(v___x_537_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_556_; 
if (v_isShared_554_ == 0)
{
v___x_556_ = v___x_553_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_a_551_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
v___jp_499_:
{
lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_501_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___boxed), 6, 1);
lean_closure_set(v___x_501_, 0, v_a_500_);
lean_inc(v_a_498_);
v___x_502_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0___redArg(v_a_498_, v___x_501_, v___y_484_, v___y_485_, v___y_486_, v___y_487_);
if (lean_obj_tag(v___x_502_) == 0)
{
lean_object* v_a_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_528_; 
v_a_503_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_528_ == 0)
{
v___x_505_ = v___x_502_;
v_isShared_506_ = v_isSharedCheck_528_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_a_503_);
lean_dec(v___x_502_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_528_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
if (lean_obj_tag(v_a_503_) == 1)
{
lean_object* v_val_507_; lean_object* v_snd_508_; lean_object* v_snd_509_; lean_object* v___x_510_; 
v_val_507_ = lean_ctor_get(v_a_503_, 0);
lean_inc(v_val_507_);
lean_dec_ref_known(v_a_503_, 1);
v_snd_508_ = lean_ctor_get(v_val_507_, 1);
lean_inc(v_snd_508_);
lean_dec(v_val_507_);
v_snd_509_ = lean_ctor_get(v_snd_508_, 1);
lean_inc(v_snd_509_);
lean_dec(v_snd_508_);
lean_inc(v_inv_478_);
v___x_510_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse(v_snd_509_, v_inv_478_);
lean_dec(v_snd_509_);
switch(lean_obj_tag(v___x_510_))
{
case 0:
{
lean_object* v_invariantUse_511_; lean_object* v_cursorSuffix_512_; lean_object* v_letMuts_513_; lean_object* v___x_514_; uint8_t v___x_515_; 
v_invariantUse_511_ = lean_ctor_get(v___x_510_, 0);
lean_inc_ref(v_invariantUse_511_);
lean_dec_ref_known(v___x_510_, 1);
v_cursorSuffix_512_ = lean_ctor_get(v_invariantUse_511_, 2);
lean_inc_ref(v_cursorSuffix_512_);
v_letMuts_513_ = lean_ctor_get(v_invariantUse_511_, 3);
lean_inc_ref(v_letMuts_513_);
lean_dec_ref(v_invariantUse_511_);
v___x_514_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__2));
v___x_515_ = l_Lean_Expr_isAppOf(v_cursorSuffix_512_, v___x_514_);
lean_dec_ref(v_cursorSuffix_512_);
if (v___x_515_ == 0)
{
if (v___x_479_ == 0)
{
lean_dec_ref(v_letMuts_513_);
lean_del_object(v___x_505_);
v_a_490_ = v___x_496_;
goto v___jp_489_;
}
else
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; uint8_t v___x_519_; 
v___x_516_ = lean_unsigned_to_nat(0u);
v___x_517_ = lean_array_get(v___x_497_, v_letMuts_513_, v___x_516_);
lean_dec_ref(v_letMuts_513_);
v___x_518_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__5));
v___x_519_ = l_Lean_Expr_isAppOf(v___x_517_, v___x_518_);
lean_dec(v___x_517_);
if (v___x_519_ == 0)
{
lean_object* v___x_520_; lean_object* v___x_522_; 
lean_dec(v_inv_478_);
v___x_520_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__7));
if (v_isShared_506_ == 0)
{
lean_ctor_set(v___x_505_, 0, v___x_520_);
v___x_522_ = v___x_505_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v___x_520_);
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
lean_del_object(v___x_505_);
v_a_490_ = v___x_496_;
goto v___jp_489_;
}
}
}
else
{
lean_dec_ref(v_letMuts_513_);
lean_del_object(v___x_505_);
v_a_490_ = v___x_496_;
goto v___jp_489_;
}
}
case 1:
{
lean_del_object(v___x_505_);
v_a_490_ = v___x_496_;
goto v___jp_489_;
}
default: 
{
lean_object* v___x_524_; lean_object* v___x_526_; 
lean_dec(v_inv_478_);
v___x_524_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__7));
if (v_isShared_506_ == 0)
{
lean_ctor_set(v___x_505_, 0, v___x_524_);
v___x_526_ = v___x_505_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v___x_524_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
}
}
}
}
else
{
lean_del_object(v___x_505_);
lean_dec(v_a_503_);
v_a_490_ = v___x_496_;
goto v___jp_489_;
}
}
}
else
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_536_; 
lean_dec(v_inv_478_);
v_a_529_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_536_ == 0)
{
v___x_531_ = v___x_502_;
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_502_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_534_; 
if (v_isShared_532_ == 0)
{
v___x_534_ = v___x_531_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_a_529_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
}
}
}
v___jp_489_:
{
size_t v___x_491_; size_t v___x_492_; 
v___x_491_ = ((size_t)1ULL);
v___x_492_ = lean_usize_add(v_i_482_, v___x_491_);
lean_inc_ref(v_a_490_);
v_i_482_ = v___x_492_;
v_b_483_ = v_a_490_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___boxed(lean_object* v_inv_559_, lean_object* v___x_560_, lean_object* v_as_561_, lean_object* v_sz_562_, lean_object* v_i_563_, lean_object* v_b_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_){
_start:
{
uint8_t v___x_4464__boxed_570_; size_t v_sz_boxed_571_; size_t v_i_boxed_572_; lean_object* v_res_573_; 
v___x_4464__boxed_570_ = lean_unbox(v___x_560_);
v_sz_boxed_571_ = lean_unbox_usize(v_sz_562_);
lean_dec(v_sz_562_);
v_i_boxed_572_ = lean_unbox_usize(v_i_563_);
lean_dec(v_i_563_);
v_res_573_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2(v_inv_559_, v___x_4464__boxed_570_, v_as_561_, v_sz_boxed_571_, v_i_boxed_572_, v_b_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_);
lean_dec(v___y_568_);
lean_dec_ref(v___y_567_);
lean_dec(v___y_566_);
lean_dec_ref(v___y_565_);
lean_dec_ref(v_as_561_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn(lean_object* v_vcs_578_, lean_object* v_inv_579_, lean_object* v_letMutsTy_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_){
_start:
{
lean_object* v___x_592_; uint8_t v___x_593_; 
v___x_592_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn___closed__0));
v___x_593_ = l_Lean_Expr_isAppOf(v_letMutsTy_580_, v___x_592_);
if (v___x_593_ == 0)
{
lean_dec(v_inv_579_);
goto v___jp_586_;
}
else
{
lean_object* v___x_594_; lean_object* v___x_595_; uint8_t v___x_596_; 
v___x_594_ = l_Lean_Expr_getAppNumArgs(v_letMutsTy_580_);
v___x_595_ = lean_unsigned_to_nat(2u);
v___x_596_ = lean_nat_dec_lt(v___x_594_, v___x_595_);
if (v___x_596_ == 0)
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; uint8_t v___x_601_; 
v___x_597_ = lean_unsigned_to_nat(1u);
v___x_598_ = lean_nat_sub(v___x_594_, v___x_597_);
lean_dec(v___x_594_);
lean_inc(v___x_598_);
v___x_599_ = l_Lean_Expr_getRevArg_x21(v_letMutsTy_580_, v___x_598_);
v___x_600_ = l_Lean_Expr_cleanupAnnotations(v___x_599_);
v___x_601_ = l_Lean_Expr_isApp(v___x_600_);
if (v___x_601_ == 0)
{
lean_dec_ref(v___x_600_);
lean_dec(v___x_598_);
lean_dec(v_inv_579_);
goto v___jp_589_;
}
else
{
lean_object* v_arg_602_; lean_object* v___x_603_; lean_object* v___x_604_; uint8_t v___x_605_; 
v_arg_602_ = lean_ctor_get(v___x_600_, 1);
lean_inc_ref(v_arg_602_);
v___x_603_ = l_Lean_Expr_appFnCleanup___redArg(v___x_600_);
v___x_604_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn___closed__1));
v___x_605_ = l_Lean_Expr_isConstOf(v___x_603_, v___x_604_);
lean_dec_ref(v___x_603_);
if (v___x_605_ == 0)
{
lean_dec_ref(v_arg_602_);
lean_dec(v___x_598_);
lean_dec(v_inv_579_);
goto v___jp_589_;
}
else
{
lean_object* v___x_606_; lean_object* v_00_u03c3_607_; lean_object* v___x_608_; size_t v_sz_609_; size_t v___x_610_; lean_object* v___x_611_; 
v___x_606_ = lean_nat_sub(v___x_598_, v___x_597_);
lean_dec(v___x_598_);
v_00_u03c3_607_ = l_Lean_Expr_getRevArg_x21(v_letMutsTy_580_, v___x_606_);
v___x_608_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__0));
v_sz_609_ = lean_array_size(v_vcs_578_);
v___x_610_ = ((size_t)0ULL);
v___x_611_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2(v_inv_579_, v___x_605_, v_vcs_578_, v_sz_609_, v___x_610_, v___x_608_, v_a_581_, v_a_582_, v_a_583_, v_a_584_);
if (lean_obj_tag(v___x_611_) == 0)
{
lean_object* v_a_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_633_; 
v_a_612_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_633_ == 0)
{
v___x_614_ = v___x_611_;
v_isShared_615_ = v_isSharedCheck_633_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_a_612_);
lean_dec(v___x_611_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_633_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v_fst_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_631_; 
v_fst_616_ = lean_ctor_get(v_a_612_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v_a_612_);
if (v_isSharedCheck_631_ == 0)
{
lean_object* v_unused_632_; 
v_unused_632_ = lean_ctor_get(v_a_612_, 1);
lean_dec(v_unused_632_);
v___x_618_ = v_a_612_;
v_isShared_619_ = v_isSharedCheck_631_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_fst_616_);
lean_dec(v_a_612_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_631_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
if (lean_obj_tag(v_fst_616_) == 0)
{
lean_object* v___x_621_; 
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 1, v_00_u03c3_607_);
lean_ctor_set(v___x_618_, 0, v_arg_602_);
v___x_621_ = v___x_618_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v_arg_602_);
lean_ctor_set(v_reuseFailAlloc_626_, 1, v_00_u03c3_607_);
v___x_621_ = v_reuseFailAlloc_626_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
lean_object* v___x_622_; lean_object* v___x_624_; 
v___x_622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_622_, 0, v___x_621_);
if (v_isShared_615_ == 0)
{
lean_ctor_set(v___x_614_, 0, v___x_622_);
v___x_624_ = v___x_614_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v___x_622_);
v___x_624_ = v_reuseFailAlloc_625_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
return v___x_624_;
}
}
}
else
{
lean_object* v_val_627_; lean_object* v___x_629_; 
lean_del_object(v___x_618_);
lean_dec_ref(v_00_u03c3_607_);
lean_dec_ref(v_arg_602_);
v_val_627_ = lean_ctor_get(v_fst_616_, 0);
lean_inc(v_val_627_);
lean_dec_ref_known(v_fst_616_, 1);
if (v_isShared_615_ == 0)
{
lean_ctor_set(v___x_614_, 0, v_val_627_);
v___x_629_ = v___x_614_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v_val_627_);
v___x_629_ = v_reuseFailAlloc_630_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
return v___x_629_;
}
}
}
}
}
else
{
lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_641_; 
lean_dec_ref(v_00_u03c3_607_);
lean_dec_ref(v_arg_602_);
v_a_634_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_641_ == 0)
{
v___x_636_ = v___x_611_;
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_611_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_641_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_639_; 
if (v_isShared_637_ == 0)
{
v___x_639_ = v___x_636_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_a_634_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
}
}
}
}
else
{
lean_dec(v___x_594_);
lean_dec(v_inv_579_);
goto v___jp_586_;
}
}
v___jp_586_:
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = lean_box(0);
v___x_588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_588_, 0, v___x_587_);
return v___x_588_;
}
v___jp_589_:
{
lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_590_ = lean_box(0);
v___x_591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_591_, 0, v___x_590_);
return v___x_591_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn___boxed(lean_object* v_vcs_642_, lean_object* v_inv_643_, lean_object* v_letMutsTy_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn(v_vcs_642_, v_inv_643_, v_letMutsTy_644_, v_a_645_, v_a_646_, v_a_647_, v_a_648_);
lean_dec(v_a_648_);
lean_dec_ref(v_a_647_);
lean_dec(v_a_646_);
lean_dec_ref(v_a_645_);
lean_dec_ref(v_letMutsTy_644_);
lean_dec_ref(v_vcs_642_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__2(lean_object* v_dontRevert_651_, lean_object* v_as_652_, size_t v_i_653_, size_t v_stop_654_, lean_object* v_b_655_){
_start:
{
lean_object* v___y_657_; uint8_t v___x_661_; 
v___x_661_ = lean_usize_dec_eq(v_i_653_, v_stop_654_);
if (v___x_661_ == 0)
{
lean_object* v___x_662_; lean_object* v___x_663_; uint8_t v___x_664_; 
v___x_662_ = lean_array_uget_borrowed(v_as_652_, v_i_653_);
lean_inc_ref(v_dontRevert_651_);
lean_inc(v___x_662_);
v___x_663_ = lean_apply_1(v_dontRevert_651_, v___x_662_);
v___x_664_ = lean_unbox(v___x_663_);
if (v___x_664_ == 0)
{
lean_object* v___x_665_; 
lean_inc(v___x_662_);
v___x_665_ = lean_array_push(v_b_655_, v___x_662_);
v___y_657_ = v___x_665_;
goto v___jp_656_;
}
else
{
v___y_657_ = v_b_655_;
goto v___jp_656_;
}
}
else
{
lean_dec_ref(v_dontRevert_651_);
return v_b_655_;
}
v___jp_656_:
{
size_t v___x_658_; size_t v___x_659_; 
v___x_658_ = ((size_t)1ULL);
v___x_659_ = lean_usize_add(v_i_653_, v___x_658_);
v_i_653_ = v___x_659_;
v_b_655_ = v___y_657_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__2___boxed(lean_object* v_dontRevert_666_, lean_object* v_as_667_, lean_object* v_i_668_, lean_object* v_stop_669_, lean_object* v_b_670_){
_start:
{
size_t v_i_boxed_671_; size_t v_stop_boxed_672_; lean_object* v_res_673_; 
v_i_boxed_671_ = lean_unbox_usize(v_i_668_);
lean_dec(v_i_668_);
v_stop_boxed_672_ = lean_unbox_usize(v_stop_669_);
lean_dec(v_stop_669_);
v_res_673_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__2(v_dontRevert_666_, v_as_667_, v_i_boxed_671_, v_stop_boxed_672_, v_b_670_);
lean_dec_ref(v_as_667_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__1(size_t v_sz_674_, size_t v_i_675_, lean_object* v_bs_676_){
_start:
{
uint8_t v___x_677_; 
v___x_677_ = lean_usize_dec_lt(v_i_675_, v_sz_674_);
if (v___x_677_ == 0)
{
lean_object* v___x_678_; 
v___x_678_ = l_unsafeCast___redArg(v_bs_676_);
lean_dec_ref(v_bs_676_);
return v___x_678_;
}
else
{
lean_object* v_v_679_; lean_object* v___x_680_; lean_object* v_bs_x27_681_; lean_object* v___x_682_; lean_object* v___x_683_; size_t v___x_684_; size_t v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v_v_679_ = lean_array_uget(v_bs_676_, v_i_675_);
v___x_680_ = lean_unsigned_to_nat(0u);
v_bs_x27_681_ = lean_array_uset(v_bs_676_, v_i_675_, v___x_680_);
v___x_682_ = l_unsafeCast___redArg(v_v_679_);
lean_dec(v_v_679_);
v___x_683_ = l_Lean_mkFVar(v___x_682_);
v___x_684_ = ((size_t)1ULL);
v___x_685_ = lean_usize_add(v_i_675_, v___x_684_);
v___x_686_ = l_unsafeCast___redArg(v___x_683_);
lean_dec_ref(v___x_683_);
v___x_687_ = lean_array_uset(v_bs_x27_681_, v_i_675_, v___x_686_);
v_i_675_ = v___x_685_;
v_bs_676_ = v___x_687_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__1___boxed(lean_object* v_sz_689_, lean_object* v_i_690_, lean_object* v_bs_691_){
_start:
{
size_t v_sz_boxed_692_; size_t v_i_boxed_693_; lean_object* v_res_694_; 
v_sz_boxed_692_ = lean_unbox_usize(v_sz_689_);
lean_dec(v_sz_689_);
v_i_boxed_693_ = lean_unbox_usize(v_i_690_);
lean_dec(v_i_690_);
v_res_694_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__1(v_sz_boxed_692_, v_i_boxed_693_, v_bs_691_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__0(size_t v_sz_695_, size_t v_i_696_, lean_object* v_bs_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_){
_start:
{
uint8_t v___x_703_; 
v___x_703_ = lean_usize_dec_lt(v_i_696_, v_sz_695_);
if (v___x_703_ == 0)
{
lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_704_ = l_unsafeCast___redArg(v_bs_697_);
lean_dec_ref(v_bs_697_);
v___x_705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_705_, 0, v___x_704_);
return v___x_705_;
}
else
{
lean_object* v_v_706_; lean_object* v___x_707_; lean_object* v_bs_x27_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
v_v_706_ = lean_array_uget(v_bs_697_, v_i_696_);
v___x_707_ = lean_unsigned_to_nat(0u);
v_bs_x27_708_ = lean_array_uset(v_bs_697_, v_i_696_, v___x_707_);
v___x_709_ = l_unsafeCast___redArg(v_v_706_);
lean_dec(v_v_706_);
lean_inc(v___y_701_);
lean_inc_ref(v___y_700_);
lean_inc(v___y_699_);
lean_inc_ref(v___y_698_);
v___x_710_ = lean_infer_type(v___x_709_, v___y_698_, v___y_699_, v___y_700_, v___y_701_);
if (lean_obj_tag(v___x_710_) == 0)
{
lean_object* v_a_711_; size_t v___x_712_; size_t v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
v_a_711_ = lean_ctor_get(v___x_710_, 0);
lean_inc(v_a_711_);
lean_dec_ref_known(v___x_710_, 1);
v___x_712_ = ((size_t)1ULL);
v___x_713_ = lean_usize_add(v_i_696_, v___x_712_);
v___x_714_ = l_unsafeCast___redArg(v_a_711_);
lean_dec(v_a_711_);
v___x_715_ = lean_array_uset(v_bs_x27_708_, v_i_696_, v___x_714_);
v_i_696_ = v___x_713_;
v_bs_697_ = v___x_715_;
goto _start;
}
else
{
lean_object* v_a_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_724_; 
lean_dec_ref(v_bs_x27_708_);
v_a_717_ = lean_ctor_get(v___x_710_, 0);
v_isSharedCheck_724_ = !lean_is_exclusive(v___x_710_);
if (v_isSharedCheck_724_ == 0)
{
v___x_719_ = v___x_710_;
v_isShared_720_ = v_isSharedCheck_724_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_a_717_);
lean_dec(v___x_710_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_724_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___x_722_; 
if (v_isShared_720_ == 0)
{
v___x_722_ = v___x_719_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v_a_717_);
v___x_722_ = v_reuseFailAlloc_723_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
return v___x_722_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__0___boxed(lean_object* v_sz_725_, lean_object* v_i_726_, lean_object* v_bs_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_){
_start:
{
size_t v_sz_boxed_733_; size_t v_i_boxed_734_; lean_object* v_res_735_; 
v_sz_boxed_733_ = lean_unbox_usize(v_sz_725_);
lean_dec(v_sz_725_);
v_i_boxed_734_ = lean_unbox_usize(v_i_726_);
lean_dec(v_i_726_);
v_res_735_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__0(v_sz_boxed_733_, v_i_boxed_734_, v_bs_727_, v___y_728_, v___y_729_, v___y_730_, v___y_731_);
lean_dec(v___y_731_);
lean_dec_ref(v___y_730_);
lean_dec(v___y_729_);
lean_dec_ref(v___y_728_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__5(lean_object* v_dontRevert_736_, lean_object* v_as_737_, size_t v_i_738_, size_t v_stop_739_, lean_object* v_b_740_){
_start:
{
lean_object* v___y_742_; uint8_t v___x_746_; 
v___x_746_ = lean_usize_dec_eq(v_i_738_, v_stop_739_);
if (v___x_746_ == 0)
{
lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; uint8_t v___x_750_; 
v___x_747_ = lean_array_uget_borrowed(v_as_737_, v_i_738_);
v___x_748_ = l_Lean_Expr_fvarId_x21(v___x_747_);
lean_inc_ref(v_dontRevert_736_);
v___x_749_ = lean_apply_1(v_dontRevert_736_, v___x_748_);
v___x_750_ = lean_unbox(v___x_749_);
if (v___x_750_ == 0)
{
lean_object* v___x_751_; 
lean_inc(v___x_747_);
v___x_751_ = lean_array_push(v_b_740_, v___x_747_);
v___y_742_ = v___x_751_;
goto v___jp_741_;
}
else
{
v___y_742_ = v_b_740_;
goto v___jp_741_;
}
}
else
{
lean_dec_ref(v_dontRevert_736_);
return v_b_740_;
}
v___jp_741_:
{
size_t v___x_743_; size_t v___x_744_; 
v___x_743_ = ((size_t)1ULL);
v___x_744_ = lean_usize_add(v_i_738_, v___x_743_);
v_i_738_ = v___x_744_;
v_b_740_ = v___y_742_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__5___boxed(lean_object* v_dontRevert_752_, lean_object* v_as_753_, lean_object* v_i_754_, lean_object* v_stop_755_, lean_object* v_b_756_){
_start:
{
size_t v_i_boxed_757_; size_t v_stop_boxed_758_; lean_object* v_res_759_; 
v_i_boxed_757_ = lean_unbox_usize(v_i_754_);
lean_dec(v_i_754_);
v_stop_boxed_758_ = lean_unbox_usize(v_stop_755_);
lean_dec(v_stop_755_);
v_res_759_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__5(v_dontRevert_752_, v_as_753_, v_i_boxed_757_, v_stop_boxed_758_, v_b_756_);
lean_dec_ref(v_as_753_);
return v_res_759_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__4___redArg(lean_object* v_a_760_, lean_object* v_x_761_){
_start:
{
if (lean_obj_tag(v_x_761_) == 0)
{
uint8_t v___x_762_; 
v___x_762_ = 0;
return v___x_762_;
}
else
{
lean_object* v_key_763_; lean_object* v_tail_764_; uint8_t v___x_765_; 
v_key_763_ = lean_ctor_get(v_x_761_, 0);
v_tail_764_ = lean_ctor_get(v_x_761_, 2);
v___x_765_ = lean_expr_eqv(v_key_763_, v_a_760_);
if (v___x_765_ == 0)
{
v_x_761_ = v_tail_764_;
goto _start;
}
else
{
return v___x_765_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__4___redArg___boxed(lean_object* v_a_767_, lean_object* v_x_768_){
_start:
{
uint8_t v_res_769_; lean_object* v_r_770_; 
v_res_769_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__4___redArg(v_a_767_, v_x_768_);
lean_dec(v_x_768_);
lean_dec_ref(v_a_767_);
v_r_770_ = lean_box(v_res_769_);
return v_r_770_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__5_spec__9_spec__11___redArg(lean_object* v_x_771_, lean_object* v_x_772_){
_start:
{
if (lean_obj_tag(v_x_772_) == 0)
{
return v_x_771_;
}
else
{
lean_object* v_key_773_; lean_object* v_value_774_; lean_object* v_tail_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_798_; 
v_key_773_ = lean_ctor_get(v_x_772_, 0);
v_value_774_ = lean_ctor_get(v_x_772_, 1);
v_tail_775_ = lean_ctor_get(v_x_772_, 2);
v_isSharedCheck_798_ = !lean_is_exclusive(v_x_772_);
if (v_isSharedCheck_798_ == 0)
{
v___x_777_ = v_x_772_;
v_isShared_778_ = v_isSharedCheck_798_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_tail_775_);
lean_inc(v_value_774_);
lean_inc(v_key_773_);
lean_dec(v_x_772_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_798_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_779_; uint64_t v___x_780_; uint64_t v___x_781_; uint64_t v___x_782_; uint64_t v_fold_783_; uint64_t v___x_784_; uint64_t v___x_785_; uint64_t v___x_786_; size_t v___x_787_; size_t v___x_788_; size_t v___x_789_; size_t v___x_790_; size_t v___x_791_; lean_object* v___x_792_; lean_object* v___x_794_; 
v___x_779_ = lean_array_get_size(v_x_771_);
v___x_780_ = l_Lean_Expr_hash(v_key_773_);
v___x_781_ = 32ULL;
v___x_782_ = lean_uint64_shift_right(v___x_780_, v___x_781_);
v_fold_783_ = lean_uint64_xor(v___x_780_, v___x_782_);
v___x_784_ = 16ULL;
v___x_785_ = lean_uint64_shift_right(v_fold_783_, v___x_784_);
v___x_786_ = lean_uint64_xor(v_fold_783_, v___x_785_);
v___x_787_ = lean_uint64_to_usize(v___x_786_);
v___x_788_ = lean_usize_of_nat(v___x_779_);
v___x_789_ = ((size_t)1ULL);
v___x_790_ = lean_usize_sub(v___x_788_, v___x_789_);
v___x_791_ = lean_usize_land(v___x_787_, v___x_790_);
v___x_792_ = lean_array_uget_borrowed(v_x_771_, v___x_791_);
lean_inc(v___x_792_);
if (v_isShared_778_ == 0)
{
lean_ctor_set(v___x_777_, 2, v___x_792_);
v___x_794_ = v___x_777_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_key_773_);
lean_ctor_set(v_reuseFailAlloc_797_, 1, v_value_774_);
lean_ctor_set(v_reuseFailAlloc_797_, 2, v___x_792_);
v___x_794_ = v_reuseFailAlloc_797_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
lean_object* v___x_795_; 
v___x_795_ = lean_array_uset(v_x_771_, v___x_791_, v___x_794_);
v_x_771_ = v___x_795_;
v_x_772_ = v_tail_775_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__5_spec__9___redArg(lean_object* v_i_799_, lean_object* v_source_800_, lean_object* v_target_801_){
_start:
{
lean_object* v___x_802_; uint8_t v___x_803_; 
v___x_802_ = lean_array_get_size(v_source_800_);
v___x_803_ = lean_nat_dec_lt(v_i_799_, v___x_802_);
if (v___x_803_ == 0)
{
lean_dec_ref(v_source_800_);
lean_dec(v_i_799_);
return v_target_801_;
}
else
{
lean_object* v_es_804_; lean_object* v___x_805_; lean_object* v_source_806_; lean_object* v_target_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v_es_804_ = lean_array_fget(v_source_800_, v_i_799_);
v___x_805_ = lean_box(0);
v_source_806_ = lean_array_fset(v_source_800_, v_i_799_, v___x_805_);
v_target_807_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__5_spec__9_spec__11___redArg(v_target_801_, v_es_804_);
v___x_808_ = lean_unsigned_to_nat(1u);
v___x_809_ = lean_nat_add(v_i_799_, v___x_808_);
lean_dec(v_i_799_);
v_i_799_ = v___x_809_;
v_source_800_ = v_source_806_;
v_target_801_ = v_target_807_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__5___redArg(lean_object* v_data_811_){
_start:
{
lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v_nbuckets_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_812_ = lean_array_get_size(v_data_811_);
v___x_813_ = lean_unsigned_to_nat(2u);
v_nbuckets_814_ = lean_nat_mul(v___x_812_, v___x_813_);
v___x_815_ = lean_unsigned_to_nat(0u);
v___x_816_ = lean_box(0);
v___x_817_ = lean_mk_array(v_nbuckets_814_, v___x_816_);
v___x_818_ = lean_array_propagate_mark(v_data_811_, v___x_817_);
v___x_819_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__5_spec__9___redArg(v___x_815_, v_data_811_, v___x_818_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3___redArg(lean_object* v_m_820_, lean_object* v_a_821_, lean_object* v_b_822_){
_start:
{
lean_object* v_size_823_; lean_object* v_buckets_824_; lean_object* v___x_825_; uint64_t v___x_826_; uint64_t v___x_827_; uint64_t v___x_828_; uint64_t v_fold_829_; uint64_t v___x_830_; uint64_t v___x_831_; uint64_t v___x_832_; size_t v___x_833_; size_t v___x_834_; size_t v___x_835_; size_t v___x_836_; size_t v___x_837_; lean_object* v_bkt_838_; uint8_t v___x_839_; 
v_size_823_ = lean_ctor_get(v_m_820_, 0);
v_buckets_824_ = lean_ctor_get(v_m_820_, 1);
v___x_825_ = lean_array_get_size(v_buckets_824_);
v___x_826_ = l_Lean_Expr_hash(v_a_821_);
v___x_827_ = 32ULL;
v___x_828_ = lean_uint64_shift_right(v___x_826_, v___x_827_);
v_fold_829_ = lean_uint64_xor(v___x_826_, v___x_828_);
v___x_830_ = 16ULL;
v___x_831_ = lean_uint64_shift_right(v_fold_829_, v___x_830_);
v___x_832_ = lean_uint64_xor(v_fold_829_, v___x_831_);
v___x_833_ = lean_uint64_to_usize(v___x_832_);
v___x_834_ = lean_usize_of_nat(v___x_825_);
v___x_835_ = ((size_t)1ULL);
v___x_836_ = lean_usize_sub(v___x_834_, v___x_835_);
v___x_837_ = lean_usize_land(v___x_833_, v___x_836_);
v_bkt_838_ = lean_array_uget_borrowed(v_buckets_824_, v___x_837_);
v___x_839_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__4___redArg(v_a_821_, v_bkt_838_);
if (v___x_839_ == 0)
{
lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_860_; 
lean_inc_ref(v_buckets_824_);
lean_inc(v_size_823_);
v_isSharedCheck_860_ = !lean_is_exclusive(v_m_820_);
if (v_isSharedCheck_860_ == 0)
{
lean_object* v_unused_861_; lean_object* v_unused_862_; 
v_unused_861_ = lean_ctor_get(v_m_820_, 1);
lean_dec(v_unused_861_);
v_unused_862_ = lean_ctor_get(v_m_820_, 0);
lean_dec(v_unused_862_);
v___x_841_ = v_m_820_;
v_isShared_842_ = v_isSharedCheck_860_;
goto v_resetjp_840_;
}
else
{
lean_dec(v_m_820_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_860_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_843_; lean_object* v_size_x27_844_; lean_object* v___x_845_; lean_object* v_buckets_x27_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; uint8_t v___x_852_; 
v___x_843_ = lean_unsigned_to_nat(1u);
v_size_x27_844_ = lean_nat_add(v_size_823_, v___x_843_);
lean_dec(v_size_823_);
lean_inc(v_bkt_838_);
v___x_845_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_845_, 0, v_a_821_);
lean_ctor_set(v___x_845_, 1, v_b_822_);
lean_ctor_set(v___x_845_, 2, v_bkt_838_);
v_buckets_x27_846_ = lean_array_uset(v_buckets_824_, v___x_837_, v___x_845_);
v___x_847_ = lean_unsigned_to_nat(4u);
v___x_848_ = lean_nat_mul(v_size_x27_844_, v___x_847_);
v___x_849_ = lean_unsigned_to_nat(3u);
v___x_850_ = lean_nat_div(v___x_848_, v___x_849_);
lean_dec(v___x_848_);
v___x_851_ = lean_array_get_size(v_buckets_x27_846_);
v___x_852_ = lean_nat_dec_le(v___x_850_, v___x_851_);
lean_dec(v___x_850_);
if (v___x_852_ == 0)
{
lean_object* v_val_853_; lean_object* v___x_855_; 
v_val_853_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__5___redArg(v_buckets_x27_846_);
if (v_isShared_842_ == 0)
{
lean_ctor_set(v___x_841_, 1, v_val_853_);
lean_ctor_set(v___x_841_, 0, v_size_x27_844_);
v___x_855_ = v___x_841_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_size_x27_844_);
lean_ctor_set(v_reuseFailAlloc_856_, 1, v_val_853_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
else
{
lean_object* v___x_858_; 
if (v_isShared_842_ == 0)
{
lean_ctor_set(v___x_841_, 1, v_buckets_x27_846_);
lean_ctor_set(v___x_841_, 0, v_size_x27_844_);
v___x_858_ = v___x_841_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v_size_x27_844_);
lean_ctor_set(v_reuseFailAlloc_859_, 1, v_buckets_x27_846_);
v___x_858_ = v_reuseFailAlloc_859_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
return v___x_858_;
}
}
}
}
else
{
lean_dec(v_b_822_);
lean_dec_ref(v_a_821_);
return v_m_820_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__4(lean_object* v_as_863_, size_t v_sz_864_, size_t v_i_865_, lean_object* v_b_866_){
_start:
{
uint8_t v___x_867_; 
v___x_867_ = lean_usize_dec_lt(v_i_865_, v_sz_864_);
if (v___x_867_ == 0)
{
return v_b_866_;
}
else
{
lean_object* v_a_868_; lean_object* v___x_869_; lean_object* v_r_870_; size_t v___x_871_; size_t v___x_872_; 
v_a_868_ = lean_array_uget_borrowed(v_as_863_, v_i_865_);
v___x_869_ = lean_box(0);
lean_inc(v_a_868_);
v_r_870_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3___redArg(v_b_866_, v_a_868_, v___x_869_);
v___x_871_ = ((size_t)1ULL);
v___x_872_ = lean_usize_add(v_i_865_, v___x_871_);
v_i_865_ = v___x_872_;
v_b_866_ = v_r_870_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__4___boxed(lean_object* v_as_874_, lean_object* v_sz_875_, lean_object* v_i_876_, lean_object* v_b_877_){
_start:
{
size_t v_sz_boxed_878_; size_t v_i_boxed_879_; lean_object* v_res_880_; 
v_sz_boxed_878_ = lean_unbox_usize(v_sz_875_);
lean_dec(v_sz_875_);
v_i_boxed_879_ = lean_unbox_usize(v_i_876_);
lean_dec(v_i_876_);
v_res_880_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__4(v_as_874_, v_sz_boxed_878_, v_i_boxed_879_, v_b_877_);
lean_dec_ref(v_as_874_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3(lean_object* v_m_881_, lean_object* v_l_882_){
_start:
{
size_t v_sz_883_; size_t v___x_884_; lean_object* v___x_885_; 
v_sz_883_ = lean_array_size(v_l_882_);
v___x_884_ = ((size_t)0ULL);
v___x_885_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__4(v_l_882_, v_sz_883_, v___x_884_, v_m_881_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3___boxed(lean_object* v_m_886_, lean_object* v_l_887_){
_start:
{
lean_object* v_res_888_; 
v_res_888_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3(v_m_886_, v_l_887_);
lean_dec_ref(v_l_887_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__4(lean_object* v_as_889_, size_t v_i_890_, size_t v_stop_891_, lean_object* v_b_892_){
_start:
{
uint8_t v___x_893_; 
v___x_893_ = lean_usize_dec_eq(v_i_890_, v_stop_891_);
if (v___x_893_ == 0)
{
lean_object* v___x_894_; lean_object* v___x_895_; size_t v___x_896_; size_t v___x_897_; 
v___x_894_ = lean_array_uget_borrowed(v_as_889_, v_i_890_);
lean_inc(v___x_894_);
v___x_895_ = l_Lean_collectFVars(v_b_892_, v___x_894_);
v___x_896_ = ((size_t)1ULL);
v___x_897_ = lean_usize_add(v_i_890_, v___x_896_);
v_i_890_ = v___x_897_;
v_b_892_ = v___x_895_;
goto _start;
}
else
{
return v_b_892_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__4___boxed(lean_object* v_as_899_, lean_object* v_i_900_, lean_object* v_stop_901_, lean_object* v_b_902_){
_start:
{
size_t v_i_boxed_903_; size_t v_stop_boxed_904_; lean_object* v_res_905_; 
v_i_boxed_903_ = lean_unbox_usize(v_i_900_);
lean_dec(v_i_900_);
v_stop_boxed_904_ = lean_unbox_usize(v_stop_901_);
lean_dec(v_stop_901_);
v_res_905_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__4(v_as_899_, v_i_boxed_903_, v_stop_boxed_904_, v_b_902_);
lean_dec_ref(v_as_899_);
return v_res_905_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_908_ = lean_box(0);
v___x_909_ = lean_unsigned_to_nat(16u);
v___x_910_ = lean_mk_array(v___x_909_, v___x_908_);
return v___x_910_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_911_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___closed__1, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___closed__1_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___closed__1);
v___x_912_ = lean_unsigned_to_nat(0u);
v___x_913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_913_, 0, v___x_912_);
lean_ctor_set(v___x_913_, 1, v___x_911_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg(lean_object* v_dontRevert_916_, lean_object* v_a_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_){
_start:
{
lean_object* v___x_923_; lean_object* v___y_925_; size_t v___y_926_; lean_object* v___y_927_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___y_940_; size_t v___y_941_; lean_object* v_fvarIds_942_; lean_object* v___y_951_; size_t v___y_952_; lean_object* v___y_953_; uint8_t v___x_955_; uint8_t v___x_956_; lean_object* v___x_957_; 
v___x_923_ = lean_unsigned_to_nat(0u);
v___x_937_ = lean_box(1);
v___x_938_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___closed__0));
v___x_955_ = 0;
v___x_956_ = 1;
lean_inc_ref(v_a_917_);
v___x_957_ = l_Lean_Meta_collectForwardDeps(v_a_917_, v___x_955_, v___x_956_, v___y_918_, v___y_919_, v___y_920_, v___y_921_);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v_a_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_998_; 
v_a_958_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_998_ == 0)
{
v___x_960_ = v___x_957_;
v_isShared_961_ = v_isSharedCheck_998_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_a_958_);
lean_dec(v___x_957_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_998_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___y_963_; lean_object* v___x_989_; uint8_t v___x_990_; 
v___x_989_ = lean_array_get_size(v_a_958_);
v___x_990_ = lean_nat_dec_lt(v___x_923_, v___x_989_);
if (v___x_990_ == 0)
{
lean_dec(v_a_958_);
v___y_963_ = v___x_938_;
goto v___jp_962_;
}
else
{
uint8_t v___x_991_; 
v___x_991_ = lean_nat_dec_le(v___x_989_, v___x_989_);
if (v___x_991_ == 0)
{
if (v___x_990_ == 0)
{
lean_dec(v_a_958_);
v___y_963_ = v___x_938_;
goto v___jp_962_;
}
else
{
size_t v___x_992_; size_t v___x_993_; lean_object* v___x_994_; 
v___x_992_ = ((size_t)0ULL);
v___x_993_ = lean_usize_of_nat(v___x_989_);
lean_inc_ref(v_dontRevert_916_);
v___x_994_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__5(v_dontRevert_916_, v_a_958_, v___x_992_, v___x_993_, v___x_938_);
lean_dec(v_a_958_);
v___y_963_ = v___x_994_;
goto v___jp_962_;
}
}
else
{
size_t v___x_995_; size_t v___x_996_; lean_object* v___x_997_; 
v___x_995_ = ((size_t)0ULL);
v___x_996_ = lean_usize_of_nat(v___x_989_);
lean_inc_ref(v_dontRevert_916_);
v___x_997_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__5(v_dontRevert_916_, v_a_958_, v___x_995_, v___x_996_, v___x_938_);
lean_dec(v_a_958_);
v___y_963_ = v___x_997_;
goto v___jp_962_;
}
}
v___jp_962_:
{
lean_object* v___x_964_; lean_object* v___x_965_; uint8_t v___x_966_; 
v___x_964_ = lean_array_get_size(v___y_963_);
v___x_965_ = lean_array_get_size(v_a_917_);
lean_dec_ref(v_a_917_);
v___x_966_ = lean_nat_dec_eq(v___x_964_, v___x_965_);
if (v___x_966_ == 0)
{
size_t v_sz_967_; size_t v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_3659__overap_973_; lean_object* v___x_974_; 
lean_del_object(v___x_960_);
v_sz_967_ = lean_array_size(v___y_963_);
v___x_968_ = ((size_t)0ULL);
v___x_969_ = l_unsafeCast___redArg(v___y_963_);
v___x_970_ = lean_box_usize(v_sz_967_);
v___x_971_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___boxed__const__1));
v___x_972_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__0___boxed), 8, 3);
lean_closure_set(v___x_972_, 0, v___x_970_);
lean_closure_set(v___x_972_, 1, v___x_971_);
lean_closure_set(v___x_972_, 2, v___x_969_);
v___x_3659__overap_973_ = l_unsafeCast___redArg(v___x_972_);
lean_dec_ref(v___x_972_);
lean_inc(v___y_921_);
lean_inc_ref(v___y_920_);
lean_inc(v___y_919_);
lean_inc_ref(v___y_918_);
v___x_974_ = lean_apply_5(v___x_3659__overap_973_, v___y_918_, v___y_919_, v___y_920_, v___y_921_, lean_box(0));
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; lean_object* v___x_976_; uint8_t v___x_977_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_a_975_);
lean_dec_ref_known(v___x_974_, 1);
v___x_976_ = lean_array_get_size(v_a_975_);
v___x_977_ = lean_nat_dec_lt(v___x_923_, v___x_976_);
if (v___x_977_ == 0)
{
lean_dec(v_a_975_);
v___y_940_ = v___y_963_;
v___y_941_ = v___x_968_;
v_fvarIds_942_ = v___x_938_;
goto v___jp_939_;
}
else
{
lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; uint8_t v___x_981_; 
v___x_978_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___closed__2);
v___x_979_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3(v___x_978_, v___y_963_);
v___x_980_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_980_, 0, v___x_979_);
lean_ctor_set(v___x_980_, 1, v___x_937_);
lean_ctor_set(v___x_980_, 2, v___x_938_);
v___x_981_ = lean_nat_dec_le(v___x_976_, v___x_976_);
if (v___x_981_ == 0)
{
if (v___x_977_ == 0)
{
lean_dec_ref_known(v___x_980_, 3);
lean_dec(v_a_975_);
v___y_940_ = v___y_963_;
v___y_941_ = v___x_968_;
v_fvarIds_942_ = v___x_938_;
goto v___jp_939_;
}
else
{
size_t v___x_982_; lean_object* v___x_983_; 
v___x_982_ = lean_usize_of_nat(v___x_976_);
v___x_983_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__4(v_a_975_, v___x_968_, v___x_982_, v___x_980_);
lean_dec(v_a_975_);
v___y_951_ = v___y_963_;
v___y_952_ = v___x_968_;
v___y_953_ = v___x_983_;
goto v___jp_950_;
}
}
else
{
size_t v___x_984_; lean_object* v___x_985_; 
v___x_984_ = lean_usize_of_nat(v___x_976_);
v___x_985_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__4(v_a_975_, v___x_968_, v___x_984_, v___x_980_);
lean_dec(v_a_975_);
v___y_951_ = v___y_963_;
v___y_952_ = v___x_968_;
v___y_953_ = v___x_985_;
goto v___jp_950_;
}
}
}
else
{
lean_dec_ref(v___y_963_);
lean_dec_ref(v_dontRevert_916_);
return v___x_974_;
}
}
else
{
lean_object* v___x_987_; 
lean_dec_ref(v_dontRevert_916_);
if (v_isShared_961_ == 0)
{
lean_ctor_set(v___x_960_, 0, v___y_963_);
v___x_987_ = v___x_960_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v___y_963_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
}
}
else
{
lean_dec_ref(v_a_917_);
lean_dec_ref(v_dontRevert_916_);
return v___x_957_;
}
v___jp_924_:
{
size_t v_sz_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; uint8_t v___x_934_; 
v_sz_928_ = lean_array_size(v___y_927_);
v___x_929_ = l_unsafeCast___redArg(v___y_927_);
v___x_930_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__1(v_sz_928_, v___y_926_, v___x_929_);
v___x_931_ = l_unsafeCast___redArg(v___x_930_);
lean_dec_ref(v___x_930_);
v___x_932_ = l_Array_append___redArg(v___y_925_, v___x_931_);
lean_dec(v___x_931_);
v___x_933_ = lean_array_get_size(v___y_927_);
lean_dec_ref(v___y_927_);
v___x_934_ = lean_nat_dec_eq(v___x_933_, v___x_923_);
if (v___x_934_ == 0)
{
v_a_917_ = v___x_932_;
goto _start;
}
else
{
lean_object* v___x_936_; 
lean_dec_ref(v_dontRevert_916_);
v___x_936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_936_, 0, v___x_932_);
return v___x_936_;
}
}
v___jp_939_:
{
lean_object* v___x_943_; uint8_t v___x_944_; 
v___x_943_ = lean_array_get_size(v_fvarIds_942_);
v___x_944_ = lean_nat_dec_lt(v___x_923_, v___x_943_);
if (v___x_944_ == 0)
{
lean_dec_ref(v_fvarIds_942_);
v___y_925_ = v___y_940_;
v___y_926_ = v___y_941_;
v___y_927_ = v___x_938_;
goto v___jp_924_;
}
else
{
uint8_t v___x_945_; 
v___x_945_ = lean_nat_dec_le(v___x_943_, v___x_943_);
if (v___x_945_ == 0)
{
if (v___x_944_ == 0)
{
lean_dec_ref(v_fvarIds_942_);
v___y_925_ = v___y_940_;
v___y_926_ = v___y_941_;
v___y_927_ = v___x_938_;
goto v___jp_924_;
}
else
{
size_t v___x_946_; lean_object* v___x_947_; 
v___x_946_ = lean_usize_of_nat(v___x_943_);
lean_inc_ref(v_dontRevert_916_);
v___x_947_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__2(v_dontRevert_916_, v_fvarIds_942_, v___y_941_, v___x_946_, v___x_938_);
lean_dec_ref(v_fvarIds_942_);
v___y_925_ = v___y_940_;
v___y_926_ = v___y_941_;
v___y_927_ = v___x_947_;
goto v___jp_924_;
}
}
else
{
size_t v___x_948_; lean_object* v___x_949_; 
v___x_948_ = lean_usize_of_nat(v___x_943_);
lean_inc_ref(v_dontRevert_916_);
v___x_949_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__2(v_dontRevert_916_, v_fvarIds_942_, v___y_941_, v___x_948_, v___x_938_);
lean_dec_ref(v_fvarIds_942_);
v___y_925_ = v___y_940_;
v___y_926_ = v___y_941_;
v___y_927_ = v___x_949_;
goto v___jp_924_;
}
}
}
v___jp_950_:
{
lean_object* v_fvarIds_954_; 
v_fvarIds_954_ = lean_ctor_get(v___y_953_, 2);
lean_inc_ref(v_fvarIds_954_);
lean_dec_ref(v___y_953_);
v___y_940_ = v___y_951_;
v___y_941_ = v___y_952_;
v_fvarIds_942_ = v_fvarIds_954_;
goto v___jp_939_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___boxed(lean_object* v_dontRevert_999_, lean_object* v_a_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_){
_start:
{
lean_object* v_res_1006_; 
v_res_1006_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg(v_dontRevert_999_, v_a_1000_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_);
lean_dec(v___y_1004_);
lean_dec_ref(v___y_1003_);
lean_dec(v___y_1002_);
lean_dec_ref(v___y_1001_);
return v_res_1006_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert___closed__0(void){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___x_1007_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___closed__0));
v___x_1008_ = lean_box(1);
v___x_1009_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___closed__2);
v___x_1010_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1010_, 0, v___x_1009_);
lean_ctor_set(v___x_1010_, 1, v___x_1008_);
lean_ctor_set(v___x_1010_, 2, v___x_1007_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert(lean_object* v_e_1011_, lean_object* v_dontRevert_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_){
_start:
{
lean_object* v___y_1019_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v_fvarIds_1030_; lean_object* v___x_1031_; uint8_t v___x_1032_; 
v___x_1026_ = lean_unsigned_to_nat(0u);
v___x_1027_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg___closed__0));
v___x_1028_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert___closed__0, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert___closed__0);
v___x_1029_ = l_Lean_collectFVars(v___x_1028_, v_e_1011_);
v_fvarIds_1030_ = lean_ctor_get(v___x_1029_, 2);
lean_inc_ref(v_fvarIds_1030_);
lean_dec_ref(v___x_1029_);
v___x_1031_ = lean_array_get_size(v_fvarIds_1030_);
v___x_1032_ = lean_nat_dec_lt(v___x_1026_, v___x_1031_);
if (v___x_1032_ == 0)
{
lean_dec_ref(v_fvarIds_1030_);
v___y_1019_ = v___x_1027_;
goto v___jp_1018_;
}
else
{
uint8_t v___x_1033_; 
v___x_1033_ = lean_nat_dec_le(v___x_1031_, v___x_1031_);
if (v___x_1033_ == 0)
{
if (v___x_1032_ == 0)
{
lean_dec_ref(v_fvarIds_1030_);
v___y_1019_ = v___x_1027_;
goto v___jp_1018_;
}
else
{
size_t v___x_1034_; size_t v___x_1035_; lean_object* v___x_1036_; 
v___x_1034_ = ((size_t)0ULL);
v___x_1035_ = lean_usize_of_nat(v___x_1031_);
lean_inc_ref(v_dontRevert_1012_);
v___x_1036_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__2(v_dontRevert_1012_, v_fvarIds_1030_, v___x_1034_, v___x_1035_, v___x_1027_);
lean_dec_ref(v_fvarIds_1030_);
v___y_1019_ = v___x_1036_;
goto v___jp_1018_;
}
}
else
{
size_t v___x_1037_; size_t v___x_1038_; lean_object* v___x_1039_; 
v___x_1037_ = ((size_t)0ULL);
v___x_1038_ = lean_usize_of_nat(v___x_1031_);
lean_inc_ref(v_dontRevert_1012_);
v___x_1039_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__2(v_dontRevert_1012_, v_fvarIds_1030_, v___x_1037_, v___x_1038_, v___x_1027_);
lean_dec_ref(v_fvarIds_1030_);
v___y_1019_ = v___x_1039_;
goto v___jp_1018_;
}
}
v___jp_1018_:
{
size_t v_sz_1020_; size_t v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v_xs_1024_; lean_object* v___x_1025_; 
v_sz_1020_ = lean_array_size(v___y_1019_);
v___x_1021_ = ((size_t)0ULL);
v___x_1022_ = l_unsafeCast___redArg(v___y_1019_);
lean_dec_ref(v___y_1019_);
v___x_1023_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__1(v_sz_1020_, v___x_1021_, v___x_1022_);
v_xs_1024_ = l_unsafeCast___redArg(v___x_1023_);
lean_dec_ref(v___x_1023_);
v___x_1025_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg(v_dontRevert_1012_, v_xs_1024_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_);
return v___x_1025_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert___boxed(lean_object* v_e_1040_, lean_object* v_dontRevert_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_){
_start:
{
lean_object* v_res_1047_; 
v_res_1047_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert(v_e_1040_, v_dontRevert_1041_, v_a_1042_, v_a_1043_, v_a_1044_, v_a_1045_);
lean_dec(v_a_1045_);
lean_dec_ref(v_a_1044_);
lean_dec(v_a_1043_);
lean_dec_ref(v_a_1042_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6(lean_object* v_dontRevert_1048_, lean_object* v_inst_1049_, lean_object* v_a_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_){
_start:
{
lean_object* v___x_1056_; 
v___x_1056_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___redArg(v_dontRevert_1048_, v_a_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_);
return v___x_1056_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6___boxed(lean_object* v_dontRevert_1057_, lean_object* v_inst_1058_, lean_object* v_a_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__6(v_dontRevert_1057_, v_inst_1058_, v_a_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_);
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
lean_dec(v___y_1061_);
lean_dec_ref(v___y_1060_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3(lean_object* v_00_u03b2_1066_, lean_object* v_m_1067_, lean_object* v_a_1068_, lean_object* v_b_1069_){
_start:
{
lean_object* v___x_1070_; 
v___x_1070_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3___redArg(v_m_1067_, v_a_1068_, v_b_1069_);
return v___x_1070_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__4(lean_object* v_00_u03b2_1071_, lean_object* v_a_1072_, lean_object* v_x_1073_){
_start:
{
uint8_t v___x_1074_; 
v___x_1074_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__4___redArg(v_a_1072_, v_x_1073_);
return v___x_1074_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__4___boxed(lean_object* v_00_u03b2_1075_, lean_object* v_a_1076_, lean_object* v_x_1077_){
_start:
{
uint8_t v_res_1078_; lean_object* v_r_1079_; 
v_res_1078_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__4(v_00_u03b2_1075_, v_a_1076_, v_x_1077_);
lean_dec(v_x_1077_);
lean_dec_ref(v_a_1076_);
v_r_1079_ = lean_box(v_res_1078_);
return v_r_1079_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__5(lean_object* v_00_u03b2_1080_, lean_object* v_data_1081_){
_start:
{
lean_object* v___x_1082_; 
v___x_1082_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__5___redArg(v_data_1081_);
return v___x_1082_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__5_spec__9(lean_object* v_00_u03b2_1083_, lean_object* v_i_1084_, lean_object* v_source_1085_, lean_object* v_target_1086_){
_start:
{
lean_object* v___x_1087_; 
v___x_1087_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__5_spec__9___redArg(v_i_1084_, v_source_1085_, v_target_1086_);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__5_spec__9_spec__11(lean_object* v_00_u03b2_1088_, lean_object* v_x_1089_, lean_object* v_x_1090_){
_start:
{
lean_object* v___x_1091_; 
v___x_1091_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert_spec__3_spec__3_spec__5_spec__9_spec__11___redArg(v_x_1089_, v_x_1090_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg(lean_object* v_a_1098_, lean_object* v___x_1099_, lean_object* v___x_1100_, lean_object* v_i_1101_, lean_object* v_a_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_){
_start:
{
lean_object* v_zero_1108_; uint8_t v_isZero_1109_; 
v_zero_1108_ = lean_unsigned_to_nat(0u);
v_isZero_1109_ = lean_nat_dec_eq(v_i_1101_, v_zero_1108_);
if (v_isZero_1109_ == 1)
{
lean_object* v___x_1110_; 
lean_dec(v_i_1101_);
lean_dec(v___x_1100_);
lean_dec_ref(v___x_1099_);
v___x_1110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1110_, 0, v_a_1102_);
return v___x_1110_;
}
else
{
lean_object* v_one_1111_; lean_object* v_n_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; 
v_one_1111_ = lean_unsigned_to_nat(1u);
v_n_1112_ = lean_nat_sub(v_i_1101_, v_one_1111_);
lean_dec(v_i_1101_);
v___x_1113_ = lean_array_fget_borrowed(v_a_1098_, v_n_1112_);
lean_inc_ref(v___x_1099_);
v___x_1114_ = l_Lean_LocalContext_getFVar_x21(v___x_1099_, v___x_1113_);
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v_userName_1115_; lean_object* v_type_1116_; uint8_t v_bi_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; 
v_userName_1115_ = lean_ctor_get(v___x_1114_, 2);
lean_inc(v_userName_1115_);
v_type_1116_ = lean_ctor_get(v___x_1114_, 3);
lean_inc_ref(v_type_1116_);
v_bi_1117_ = lean_ctor_get_uint8(v___x_1114_, sizeof(void*)*4);
lean_dec_ref_known(v___x_1114_, 4);
v___x_1118_ = l_Lean_Expr_headBeta(v_type_1116_);
v___x_1119_ = lean_expr_abstract_range(v___x_1118_, v_n_1112_, v_a_1098_);
lean_dec_ref(v___x_1118_);
lean_inc_ref(v___x_1119_);
v___x_1120_ = l_Lean_Meta_getLevel(v___x_1119_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_);
if (lean_obj_tag(v___x_1120_) == 0)
{
lean_object* v_a_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v_a_1121_ = lean_ctor_get(v___x_1120_, 0);
lean_inc(v_a_1121_);
lean_dec_ref_known(v___x_1120_, 1);
v___x_1122_ = ((lean_object*)(l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1));
v___x_1123_ = lean_box(0);
lean_inc_n(v___x_1100_, 2);
v___x_1124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1100_);
lean_ctor_set(v___x_1124_, 1, v___x_1123_);
v___x_1125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1125_, 0, v_a_1121_);
lean_ctor_set(v___x_1125_, 1, v___x_1124_);
v___x_1126_ = l_Lean_mkConst(v___x_1122_, v___x_1125_);
v___x_1127_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil(v___x_1100_);
lean_inc_ref(v___x_1119_);
v___x_1128_ = l_Lean_mkLambda(v_userName_1115_, v_bi_1117_, v___x_1119_, v_a_1102_);
v___x_1129_ = l_Lean_mkApp3(v___x_1126_, v___x_1119_, v___x_1127_, v___x_1128_);
v_i_1101_ = v_n_1112_;
v_a_1102_ = v___x_1129_;
goto _start;
}
else
{
lean_object* v_a_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1138_; 
lean_dec_ref(v___x_1119_);
lean_dec(v_userName_1115_);
lean_dec(v_n_1112_);
lean_dec_ref(v_a_1102_);
lean_dec(v___x_1100_);
lean_dec_ref(v___x_1099_);
v_a_1131_ = lean_ctor_get(v___x_1120_, 0);
v_isSharedCheck_1138_ = !lean_is_exclusive(v___x_1120_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1133_ = v___x_1120_;
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_a_1131_);
lean_dec(v___x_1120_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___x_1136_; 
if (v_isShared_1134_ == 0)
{
v___x_1136_ = v___x_1133_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v_a_1131_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
}
}
else
{
uint8_t v_nondep_1139_; 
v_nondep_1139_ = lean_ctor_get_uint8(v___x_1114_, sizeof(void*)*5);
if (v_nondep_1139_ == 0)
{
lean_object* v_userName_1140_; lean_object* v_type_1141_; lean_object* v_value_1142_; uint8_t v___x_1143_; 
v_userName_1140_ = lean_ctor_get(v___x_1114_, 2);
lean_inc(v_userName_1140_);
v_type_1141_ = lean_ctor_get(v___x_1114_, 3);
lean_inc_ref(v_type_1141_);
v_value_1142_ = lean_ctor_get(v___x_1114_, 4);
lean_inc_ref(v_value_1142_);
lean_dec_ref_known(v___x_1114_, 5);
v___x_1143_ = lean_expr_has_loose_bvar(v_a_1102_, v_zero_1108_);
if (v___x_1143_ == 0)
{
lean_object* v___x_1144_; 
lean_dec_ref(v_value_1142_);
lean_dec_ref(v_type_1141_);
lean_dec(v_userName_1140_);
v___x_1144_ = lean_expr_lower_loose_bvars(v_a_1102_, v_one_1111_, v_one_1111_);
lean_dec_ref(v_a_1102_);
v_i_1101_ = v_n_1112_;
v_a_1102_ = v___x_1144_;
goto _start;
}
else
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1146_ = l_Lean_Expr_headBeta(v_type_1141_);
v___x_1147_ = lean_expr_abstract_range(v___x_1146_, v_n_1112_, v_a_1098_);
lean_dec_ref(v___x_1146_);
v___x_1148_ = lean_expr_abstract_range(v_value_1142_, v_n_1112_, v_a_1098_);
lean_dec_ref(v_value_1142_);
v___x_1149_ = l_Lean_Expr_letE___override(v_userName_1140_, v___x_1147_, v___x_1148_, v_a_1102_, v_nondep_1139_);
v_i_1101_ = v_n_1112_;
v_a_1102_ = v___x_1149_;
goto _start;
}
}
else
{
lean_object* v_userName_1151_; lean_object* v_type_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; 
v_userName_1151_ = lean_ctor_get(v___x_1114_, 2);
lean_inc(v_userName_1151_);
v_type_1152_ = lean_ctor_get(v___x_1114_, 3);
lean_inc_ref(v_type_1152_);
lean_dec_ref_known(v___x_1114_, 5);
v___x_1153_ = l_Lean_Expr_headBeta(v_type_1152_);
v___x_1154_ = lean_expr_abstract_range(v___x_1153_, v_n_1112_, v_a_1098_);
lean_dec_ref(v___x_1153_);
lean_inc_ref(v___x_1154_);
v___x_1155_ = l_Lean_Meta_getLevel(v___x_1154_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_);
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_object* v_a_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; uint8_t v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; 
v_a_1156_ = lean_ctor_get(v___x_1155_, 0);
lean_inc(v_a_1156_);
lean_dec_ref_known(v___x_1155_, 1);
v___x_1157_ = ((lean_object*)(l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1));
v___x_1158_ = lean_box(0);
lean_inc_n(v___x_1100_, 2);
v___x_1159_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1100_);
lean_ctor_set(v___x_1159_, 1, v___x_1158_);
v___x_1160_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1160_, 0, v_a_1156_);
lean_ctor_set(v___x_1160_, 1, v___x_1159_);
v___x_1161_ = l_Lean_mkConst(v___x_1157_, v___x_1160_);
v___x_1162_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil(v___x_1100_);
v___x_1163_ = 0;
lean_inc_ref(v___x_1154_);
v___x_1164_ = l_Lean_mkLambda(v_userName_1151_, v___x_1163_, v___x_1154_, v_a_1102_);
v___x_1165_ = l_Lean_mkApp3(v___x_1161_, v___x_1154_, v___x_1162_, v___x_1164_);
v_i_1101_ = v_n_1112_;
v_a_1102_ = v___x_1165_;
goto _start;
}
else
{
lean_object* v_a_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1174_; 
lean_dec_ref(v___x_1154_);
lean_dec(v_userName_1151_);
lean_dec(v_n_1112_);
lean_dec_ref(v_a_1102_);
lean_dec(v___x_1100_);
lean_dec_ref(v___x_1099_);
v_a_1167_ = lean_ctor_get(v___x_1155_, 0);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1169_ = v___x_1155_;
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_a_1167_);
lean_dec(v___x_1155_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1174_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v___x_1172_; 
if (v_isShared_1170_ == 0)
{
v___x_1172_ = v___x_1169_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v_a_1167_);
v___x_1172_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
return v___x_1172_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___boxed(lean_object* v_a_1175_, lean_object* v___x_1176_, lean_object* v___x_1177_, lean_object* v_i_1178_, lean_object* v_a_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_){
_start:
{
lean_object* v_res_1185_; 
v_res_1185_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg(v_a_1175_, v___x_1176_, v___x_1177_, v_i_1178_, v_a_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_);
lean_dec(v___y_1183_);
lean_dec_ref(v___y_1182_);
lean_dec(v___y_1181_);
lean_dec_ref(v___y_1180_);
lean_dec_ref(v_a_1175_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept(lean_object* v_e_1190_, lean_object* v_dontRevert_1191_, lean_object* v_a_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_){
_start:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1197_ = l_Lean_instInhabitedLevel;
lean_inc_ref(v_e_1190_);
v___x_1198_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectFVarsToRevert(v_e_1190_, v_dontRevert_1191_, v_a_1192_, v_a_1193_, v_a_1194_, v_a_1195_);
if (lean_obj_tag(v___x_1198_) == 0)
{
lean_object* v_a_1199_; lean_object* v_lctx_1200_; lean_object* v___x_1201_; 
v_a_1199_ = lean_ctor_get(v___x_1198_, 0);
lean_inc(v_a_1199_);
lean_dec_ref_known(v___x_1198_, 1);
v_lctx_1200_ = lean_ctor_get(v_a_1192_, 2);
lean_inc(v_a_1195_);
lean_inc_ref(v_a_1194_);
lean_inc(v_a_1193_);
lean_inc_ref(v_a_1192_);
lean_inc_ref(v_e_1190_);
v___x_1201_ = lean_infer_type(v_e_1190_, v_a_1192_, v_a_1193_, v_a_1194_, v_a_1195_);
if (lean_obj_tag(v___x_1201_) == 0)
{
lean_object* v_a_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1223_; 
v_a_1202_ = lean_ctor_get(v___x_1201_, 0);
v_isSharedCheck_1223_ = !lean_is_exclusive(v___x_1201_);
if (v_isSharedCheck_1223_ == 0)
{
v___x_1204_ = v___x_1201_;
v_isShared_1205_ = v_isSharedCheck_1223_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_a_1202_);
lean_dec(v___x_1201_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1223_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v___x_1206_; uint8_t v___x_1207_; 
v___x_1206_ = l_Lean_Expr_cleanupAnnotations(v_a_1202_);
v___x_1207_ = l_Lean_Expr_isApp(v___x_1206_);
if (v___x_1207_ == 0)
{
lean_object* v___x_1209_; 
lean_dec_ref(v___x_1206_);
lean_dec(v_a_1199_);
if (v_isShared_1205_ == 0)
{
lean_ctor_set(v___x_1204_, 0, v_e_1190_);
v___x_1209_ = v___x_1204_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v_e_1190_);
v___x_1209_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
return v___x_1209_;
}
}
else
{
lean_object* v___x_1211_; lean_object* v___x_1212_; uint8_t v___x_1213_; 
v___x_1211_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1206_);
v___x_1212_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___closed__0));
v___x_1213_ = l_Lean_Expr_isConstOf(v___x_1211_, v___x_1212_);
if (v___x_1213_ == 0)
{
lean_object* v___x_1215_; 
lean_dec_ref(v___x_1211_);
lean_dec(v_a_1199_);
if (v_isShared_1205_ == 0)
{
lean_ctor_set(v___x_1204_, 0, v_e_1190_);
v___x_1215_ = v___x_1204_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v_e_1190_);
v___x_1215_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
return v___x_1215_;
}
}
else
{
lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
lean_del_object(v___x_1204_);
v___x_1217_ = l_Lean_Expr_constLevels_x21(v___x_1211_);
lean_dec_ref(v___x_1211_);
v___x_1218_ = lean_unsigned_to_nat(0u);
v___x_1219_ = l_List_get_x21Internal___redArg(v___x_1197_, v___x_1217_, v___x_1218_);
lean_dec(v___x_1217_);
v___x_1220_ = lean_array_get_size(v_a_1199_);
v___x_1221_ = lean_expr_abstract(v_e_1190_, v_a_1199_);
lean_dec_ref(v_e_1190_);
lean_inc_ref(v_lctx_1200_);
v___x_1222_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg(v_a_1199_, v_lctx_1200_, v___x_1219_, v___x_1220_, v___x_1221_, v_a_1192_, v_a_1193_, v_a_1194_, v_a_1195_);
lean_dec(v_a_1199_);
return v___x_1222_;
}
}
}
}
else
{
lean_dec(v_a_1199_);
lean_dec_ref(v_e_1190_);
return v___x_1201_;
}
}
else
{
lean_object* v_a_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1231_; 
lean_dec_ref(v_e_1190_);
v_a_1224_ = lean_ctor_get(v___x_1198_, 0);
v_isSharedCheck_1231_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1226_ = v___x_1198_;
v_isShared_1227_ = v_isSharedCheck_1231_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_a_1224_);
lean_dec(v___x_1198_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1231_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
lean_object* v___x_1229_; 
if (v_isShared_1227_ == 0)
{
v___x_1229_ = v___x_1226_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v_a_1224_);
v___x_1229_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
return v___x_1229_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___boxed(lean_object* v_e_1232_, lean_object* v_dontRevert_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_, lean_object* v_a_1237_, lean_object* v_a_1238_){
_start:
{
lean_object* v_res_1239_; 
v_res_1239_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept(v_e_1232_, v_dontRevert_1233_, v_a_1234_, v_a_1235_, v_a_1236_, v_a_1237_);
lean_dec(v_a_1237_);
lean_dec_ref(v_a_1236_);
lean_dec(v_a_1235_);
lean_dec_ref(v_a_1234_);
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0(lean_object* v_a_1240_, lean_object* v___x_1241_, lean_object* v___x_1242_, lean_object* v_n_1243_, lean_object* v_i_1244_, lean_object* v_a_1245_, lean_object* v_a_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_){
_start:
{
lean_object* v___x_1252_; 
v___x_1252_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg(v_a_1240_, v___x_1241_, v___x_1242_, v_i_1244_, v_a_1246_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_);
return v___x_1252_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___boxed(lean_object* v_a_1253_, lean_object* v___x_1254_, lean_object* v___x_1255_, lean_object* v_n_1256_, lean_object* v_i_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_){
_start:
{
lean_object* v_res_1265_; 
v_res_1265_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0(v_a_1253_, v___x_1254_, v___x_1255_, v_n_1256_, v_i_1257_, v_a_1258_, v_a_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_);
lean_dec(v___y_1263_);
lean_dec_ref(v___y_1262_);
lean_dec(v___y_1261_);
lean_dec_ref(v___y_1260_);
lean_dec(v_n_1256_);
lean_dec_ref(v_a_1253_);
return v_res_1265_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd(lean_object* v_lvl_1272_, lean_object* v_lhs_1273_, lean_object* v_rhs_1274_){
_start:
{
lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1275_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1));
v___x_1276_ = lean_box(0);
lean_inc(v_lvl_1272_);
v___x_1277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1277_, 0, v_lvl_1272_);
lean_ctor_set(v___x_1277_, 1, v___x_1276_);
v___x_1278_ = l_Lean_mkConst(v___x_1275_, v___x_1277_);
v___x_1279_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil(v_lvl_1272_);
v___x_1280_ = l_Lean_mkApp3(v___x_1278_, v___x_1279_, v_lhs_1273_, v_rhs_1274_);
return v___x_1280_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr(lean_object* v_lvl_1287_, lean_object* v_lhs_1288_, lean_object* v_rhs_1289_){
_start:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1290_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1));
v___x_1291_ = lean_box(0);
lean_inc(v_lvl_1287_);
v___x_1292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1292_, 0, v_lvl_1287_);
lean_ctor_set(v___x_1292_, 1, v___x_1291_);
v___x_1293_ = l_Lean_mkConst(v___x_1290_, v___x_1292_);
v___x_1294_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil(v_lvl_1287_);
v___x_1295_ = l_Lean_mkApp3(v___x_1293_, v___x_1294_, v_lhs_1288_, v_rhs_1289_);
return v___x_1295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SuccessPoint_clause(lean_object* v_p_1296_){
_start:
{
lean_object* v_lvl_1297_; lean_object* v_cursorPred_1298_; lean_object* v_letMutsPred_1299_; lean_object* v___x_1300_; 
v_lvl_1297_ = lean_ctor_get(v_p_1296_, 0);
lean_inc(v_lvl_1297_);
v_cursorPred_1298_ = lean_ctor_get(v_p_1296_, 1);
lean_inc_ref(v_cursorPred_1298_);
v_letMutsPred_1299_ = lean_ctor_get(v_p_1296_, 2);
lean_inc_ref(v_letMutsPred_1299_);
lean_dec_ref(v_p_1296_);
v___x_1300_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd(v_lvl_1297_, v_cursorPred_1298_, v_letMutsPred_1299_);
return v___x_1300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorIdx(lean_object* v_x_1301_){
_start:
{
switch(lean_obj_tag(v_x_1301_))
{
case 0:
{
lean_object* v___x_1302_; 
v___x_1302_ = lean_unsigned_to_nat(0u);
return v___x_1302_;
}
case 1:
{
lean_object* v___x_1303_; 
v___x_1303_ = lean_unsigned_to_nat(1u);
return v___x_1303_;
}
case 2:
{
lean_object* v___x_1304_; 
v___x_1304_ = lean_unsigned_to_nat(2u);
return v___x_1304_;
}
default: 
{
lean_object* v___x_1305_; 
v___x_1305_ = lean_unsigned_to_nat(3u);
return v___x_1305_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorIdx___boxed(lean_object* v_x_1306_){
_start:
{
lean_object* v_res_1307_; 
v_res_1307_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorIdx(v_x_1306_);
lean_dec(v_x_1306_);
return v_res_1307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(lean_object* v_t_1308_, lean_object* v_k_1309_){
_start:
{
if (lean_obj_tag(v_t_1308_) == 3)
{
lean_object* v_e_1310_; lean_object* v___x_1311_; 
v_e_1310_ = lean_ctor_get(v_t_1308_, 0);
lean_inc_ref(v_e_1310_);
lean_dec_ref_known(v_t_1308_, 1);
v___x_1311_ = lean_apply_1(v_k_1309_, v_e_1310_);
return v___x_1311_;
}
else
{
lean_dec(v_t_1308_);
return v_k_1309_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim(lean_object* v_motive_1312_, lean_object* v_ctorIdx_1313_, lean_object* v_t_1314_, lean_object* v_h_1315_, lean_object* v_k_1316_){
_start:
{
lean_object* v___x_1317_; 
v___x_1317_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(v_t_1314_, v_k_1316_);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___boxed(lean_object* v_motive_1318_, lean_object* v_ctorIdx_1319_, lean_object* v_t_1320_, lean_object* v_h_1321_, lean_object* v_k_1322_){
_start:
{
lean_object* v_res_1323_; 
v_res_1323_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim(v_motive_1318_, v_ctorIdx_1319_, v_t_1320_, v_h_1321_, v_k_1322_);
lean_dec(v_ctorIdx_1319_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_punit_elim___redArg(lean_object* v_t_1324_, lean_object* v_punit_1325_){
_start:
{
lean_object* v___x_1326_; 
v___x_1326_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(v_t_1324_, v_punit_1325_);
return v___x_1326_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_punit_elim(lean_object* v_motive_1327_, lean_object* v_t_1328_, lean_object* v_h_1329_, lean_object* v_punit_1330_){
_start:
{
lean_object* v___x_1331_; 
v___x_1331_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(v_t_1328_, v_punit_1330_);
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_false_elim___redArg(lean_object* v_t_1332_, lean_object* v_false_1333_){
_start:
{
lean_object* v___x_1334_; 
v___x_1334_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(v_t_1332_, v_false_1333_);
return v___x_1334_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_false_elim(lean_object* v_motive_1335_, lean_object* v_t_1336_, lean_object* v_h_1337_, lean_object* v_false_1338_){
_start:
{
lean_object* v___x_1339_; 
v___x_1339_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(v_t_1336_, v_false_1338_);
return v___x_1339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_true_elim___redArg(lean_object* v_t_1340_, lean_object* v_true_1341_){
_start:
{
lean_object* v___x_1342_; 
v___x_1342_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(v_t_1340_, v_true_1341_);
return v___x_1342_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_true_elim(lean_object* v_motive_1343_, lean_object* v_t_1344_, lean_object* v_h_1345_, lean_object* v_true_1346_){
_start:
{
lean_object* v___x_1347_; 
v___x_1347_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(v_t_1344_, v_true_1346_);
return v___x_1347_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_other_elim___redArg(lean_object* v_t_1348_, lean_object* v_other_1349_){
_start:
{
lean_object* v___x_1350_; 
v___x_1350_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(v_t_1348_, v_other_1349_);
return v___x_1350_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_other_elim(lean_object* v_motive_1351_, lean_object* v_t_1352_, lean_object* v_h_1353_, lean_object* v_other_1354_){
_start:
{
lean_object* v___x_1355_; 
v___x_1355_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_ExceptCondsDefault_ctorElim___redArg(v_t_1352_, v_other_1354_);
return v___x_1355_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0___redArg(lean_object* v_a_1356_){
_start:
{
lean_object* v_snd_1358_; lean_object* v_fst_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1398_; 
v_snd_1358_ = lean_ctor_get(v_a_1356_, 1);
v_fst_1359_ = lean_ctor_get(v_a_1356_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v_a_1356_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1361_ = v_a_1356_;
v_isShared_1362_ = v_isSharedCheck_1398_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_snd_1358_);
lean_inc(v_fst_1359_);
lean_dec(v_a_1356_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1398_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v_fst_1363_; lean_object* v_snd_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1397_; 
v_fst_1363_ = lean_ctor_get(v_snd_1358_, 0);
v_snd_1364_ = lean_ctor_get(v_snd_1358_, 1);
v_isSharedCheck_1397_ = !lean_is_exclusive(v_snd_1358_);
if (v_isSharedCheck_1397_ == 0)
{
v___x_1366_ = v_snd_1358_;
v_isShared_1367_ = v_isSharedCheck_1397_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_snd_1364_);
lean_inc(v_fst_1363_);
lean_dec(v_snd_1358_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1397_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v___x_1368_; lean_object* v___x_1369_; uint8_t v___x_1370_; 
v___x_1368_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__2));
v___x_1369_ = lean_unsigned_to_nat(4u);
v___x_1370_ = l_Lean_Expr_isAppOfArity(v_fst_1363_, v___x_1368_, v___x_1369_);
if (v___x_1370_ == 0)
{
lean_object* v___x_1372_; 
if (v_isShared_1367_ == 0)
{
v___x_1372_ = v___x_1366_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v_fst_1363_);
lean_ctor_set(v_reuseFailAlloc_1377_, 1, v_snd_1364_);
v___x_1372_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
lean_object* v___x_1374_; 
if (v_isShared_1362_ == 0)
{
lean_ctor_set(v___x_1361_, 1, v___x_1372_);
v___x_1374_ = v___x_1361_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v_fst_1359_);
lean_ctor_set(v_reuseFailAlloc_1376_, 1, v___x_1372_);
v___x_1374_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
lean_object* v___x_1375_; 
v___x_1375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1375_, 0, v___x_1374_);
return v___x_1375_;
}
}
}
else
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1391_; 
v___x_1378_ = lean_unsigned_to_nat(3u);
v___x_1379_ = lean_unsigned_to_nat(2u);
v___x_1380_ = l_Lean_Expr_getAppNumArgs(v_fst_1363_);
v___x_1381_ = lean_nat_sub(v___x_1380_, v___x_1379_);
v___x_1382_ = lean_unsigned_to_nat(1u);
v___x_1383_ = lean_nat_sub(v___x_1381_, v___x_1382_);
lean_dec(v___x_1381_);
v___x_1384_ = l_Lean_Expr_getRevArg_x21(v_fst_1363_, v___x_1383_);
v___x_1385_ = lean_array_push(v_snd_1364_, v___x_1384_);
v___x_1386_ = lean_nat_add(v_fst_1359_, v___x_1382_);
lean_dec(v_fst_1359_);
v___x_1387_ = lean_nat_sub(v___x_1380_, v___x_1378_);
lean_dec(v___x_1380_);
v___x_1388_ = lean_nat_sub(v___x_1387_, v___x_1382_);
lean_dec(v___x_1387_);
v___x_1389_ = l_Lean_Expr_getRevArg_x21(v_fst_1363_, v___x_1388_);
lean_dec(v_fst_1363_);
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 1, v___x_1385_);
lean_ctor_set(v___x_1366_, 0, v___x_1389_);
v___x_1391_ = v___x_1366_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v___x_1389_);
lean_ctor_set(v_reuseFailAlloc_1396_, 1, v___x_1385_);
v___x_1391_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
lean_object* v___x_1393_; 
if (v_isShared_1362_ == 0)
{
lean_ctor_set(v___x_1361_, 1, v___x_1391_);
lean_ctor_set(v___x_1361_, 0, v___x_1386_);
v___x_1393_ = v___x_1361_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v___x_1386_);
lean_ctor_set(v_reuseFailAlloc_1395_, 1, v___x_1391_);
v___x_1393_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
v_a_1356_ = v___x_1393_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0___redArg___boxed(lean_object* v_a_1399_, lean_object* v___y_1400_){
_start:
{
lean_object* v_res_1401_; 
v_res_1401_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0___redArg(v_a_1399_);
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___lam__1(lean_object* v_fst_1402_, lean_object* v_p_1403_){
_start:
{
lean_object* v___x_1404_; lean_object* v___x_1405_; 
lean_inc(v_fst_1402_);
v___x_1404_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil(v_fst_1402_);
v___x_1405_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(v_fst_1402_, v___x_1404_, v_p_1403_);
return v___x_1405_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___lam__0(lean_object* v_letMutsTuple_1406_, lean_object* v___x_1407_, uint8_t v___x_1408_, lean_object* v_fvarId_1409_){
_start:
{
lean_object* v___x_1410_; uint8_t v___x_1411_; 
v___x_1410_ = l_Lean_Expr_fvarId_x21(v_letMutsTuple_1406_);
v___x_1411_ = l_Lean_instBEqFVarId_beq(v_fvarId_1409_, v___x_1410_);
lean_dec(v___x_1410_);
if (v___x_1411_ == 0)
{
uint8_t v___x_1412_; 
v___x_1412_ = l_Lean_LocalContext_contains(v___x_1407_, v_fvarId_1409_);
return v___x_1412_;
}
else
{
return v___x_1408_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___lam__0___boxed(lean_object* v_letMutsTuple_1413_, lean_object* v___x_1414_, lean_object* v___x_1415_, lean_object* v_fvarId_1416_){
_start:
{
uint8_t v___x_9662__boxed_1417_; uint8_t v_res_1418_; lean_object* v_r_1419_; 
v___x_9662__boxed_1417_ = lean_unbox(v___x_1415_);
v_res_1418_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___lam__0(v_letMutsTuple_1413_, v___x_1414_, v___x_9662__boxed_1417_, v_fvarId_1416_);
lean_dec(v_fvarId_1416_);
lean_dec_ref(v___x_1414_);
lean_dec_ref(v_letMutsTuple_1413_);
v_r_1419_ = lean_box(v_res_1418_);
return v_r_1419_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1(lean_object* v_inv_1439_, lean_object* v___x_1440_, lean_object* v_xs_1441_, lean_object* v_letMuts_1442_, lean_object* v_as_1443_, size_t v_sz_1444_, size_t v_i_1445_, lean_object* v_b_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_){
_start:
{
lean_object* v_a_1453_; uint8_t v___x_1457_; 
v___x_1457_ = lean_usize_dec_lt(v_i_1445_, v_sz_1444_);
if (v___x_1457_ == 0)
{
lean_object* v___x_1458_; 
lean_dec_ref(v_letMuts_1442_);
lean_dec_ref(v_xs_1441_);
lean_dec_ref(v___x_1440_);
lean_dec(v_inv_1439_);
v___x_1458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1458_, 0, v_b_1446_);
return v___x_1458_;
}
else
{
lean_object* v_snd_1459_; lean_object* v_fst_1460_; lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1805_; 
v_snd_1459_ = lean_ctor_get(v_b_1446_, 1);
v_fst_1460_ = lean_ctor_get(v_b_1446_, 0);
v_isSharedCheck_1805_ = !lean_is_exclusive(v_b_1446_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1462_ = v_b_1446_;
v_isShared_1463_ = v_isSharedCheck_1805_;
goto v_resetjp_1461_;
}
else
{
lean_inc(v_snd_1459_);
lean_inc(v_fst_1460_);
lean_dec(v_b_1446_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1805_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
lean_object* v_fst_1464_; lean_object* v_snd_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1804_; 
v_fst_1464_ = lean_ctor_get(v_snd_1459_, 0);
v_snd_1465_ = lean_ctor_get(v_snd_1459_, 1);
v_isSharedCheck_1804_ = !lean_is_exclusive(v_snd_1459_);
if (v_isSharedCheck_1804_ == 0)
{
v___x_1467_ = v_snd_1459_;
v_isShared_1468_ = v_isSharedCheck_1804_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_snd_1465_);
lean_inc(v_fst_1464_);
lean_dec(v_snd_1459_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1804_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___y_1473_; lean_object* v___y_1474_; lean_object* v___y_1475_; lean_object* v___y_1476_; lean_object* v___y_1477_; lean_object* v___y_1478_; lean_object* v___y_1479_; lean_object* v___y_1480_; lean_object* v___y_1481_; lean_object* v___y_1482_; uint8_t v___y_1483_; lean_object* v___y_1583_; lean_object* v_prefixPoint_x3f_1584_; lean_object* v_suffixPoint_x3f_1585_; lean_object* v___y_1586_; lean_object* v___y_1587_; lean_object* v___y_1588_; lean_object* v___y_1589_; lean_object* v_a_1611_; lean_object* v___y_1613_; lean_object* v___y_1614_; lean_object* v___y_1615_; lean_object* v___y_1616_; lean_object* v___y_1617_; lean_object* v_prefixPoint_x3f_1618_; lean_object* v___y_1619_; lean_object* v___y_1620_; lean_object* v___y_1621_; lean_object* v___y_1622_; lean_object* v___y_1698_; lean_object* v___y_1699_; lean_object* v___y_1700_; lean_object* v___y_1701_; lean_object* v___y_1702_; lean_object* v___y_1703_; lean_object* v_a_1704_; lean_object* v_a_1709_; lean_object* v___x_1782_; 
v___x_1469_ = lean_unsigned_to_nat(0u);
v___x_1470_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse___closed__5));
v___x_1471_ = lean_box(0);
v_a_1611_ = lean_array_uget_borrowed(v_as_1443_, v_i_1445_);
lean_inc(v_a_1611_);
v___x_1782_ = l_Lean_MVarId_getType(v_a_1611_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
if (lean_obj_tag(v___x_1782_) == 0)
{
lean_object* v_a_1783_; lean_object* v___x_1784_; 
v_a_1783_ = lean_ctor_get(v___x_1782_, 0);
lean_inc(v_a_1783_);
lean_dec_ref_known(v___x_1782_, 1);
v___x_1784_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__1___redArg(v_a_1783_, v___y_1448_);
if (lean_obj_tag(v___x_1784_) == 0)
{
lean_object* v_a_1785_; lean_object* v___x_1786_; 
v_a_1785_ = lean_ctor_get(v___x_1784_, 0);
lean_inc(v_a_1785_);
lean_dec_ref_known(v___x_1784_, 1);
v___x_1786_ = l_Lean_Expr_consumeMData(v_a_1785_);
lean_dec(v_a_1785_);
v_a_1709_ = v___x_1786_;
goto v___jp_1708_;
}
else
{
if (lean_obj_tag(v___x_1784_) == 0)
{
lean_object* v_a_1787_; 
v_a_1787_ = lean_ctor_get(v___x_1784_, 0);
lean_inc(v_a_1787_);
lean_dec_ref_known(v___x_1784_, 1);
v_a_1709_ = v_a_1787_;
goto v___jp_1708_;
}
else
{
lean_object* v_a_1788_; lean_object* v___x_1790_; uint8_t v_isShared_1791_; uint8_t v_isSharedCheck_1795_; 
lean_del_object(v___x_1467_);
lean_dec(v_snd_1465_);
lean_dec(v_fst_1464_);
lean_del_object(v___x_1462_);
lean_dec(v_fst_1460_);
lean_dec_ref(v_letMuts_1442_);
lean_dec_ref(v_xs_1441_);
lean_dec_ref(v___x_1440_);
lean_dec(v_inv_1439_);
v_a_1788_ = lean_ctor_get(v___x_1784_, 0);
v_isSharedCheck_1795_ = !lean_is_exclusive(v___x_1784_);
if (v_isSharedCheck_1795_ == 0)
{
v___x_1790_ = v___x_1784_;
v_isShared_1791_ = v_isSharedCheck_1795_;
goto v_resetjp_1789_;
}
else
{
lean_inc(v_a_1788_);
lean_dec(v___x_1784_);
v___x_1790_ = lean_box(0);
v_isShared_1791_ = v_isSharedCheck_1795_;
goto v_resetjp_1789_;
}
v_resetjp_1789_:
{
lean_object* v___x_1793_; 
if (v_isShared_1791_ == 0)
{
v___x_1793_ = v___x_1790_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v_a_1788_);
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
else
{
lean_object* v_a_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1803_; 
lean_del_object(v___x_1467_);
lean_dec(v_snd_1465_);
lean_dec(v_fst_1464_);
lean_del_object(v___x_1462_);
lean_dec(v_fst_1460_);
lean_dec_ref(v_letMuts_1442_);
lean_dec_ref(v_xs_1441_);
lean_dec_ref(v___x_1440_);
lean_dec(v_inv_1439_);
v_a_1796_ = lean_ctor_get(v___x_1782_, 0);
v_isSharedCheck_1803_ = !lean_is_exclusive(v___x_1782_);
if (v_isSharedCheck_1803_ == 0)
{
v___x_1798_ = v___x_1782_;
v_isShared_1799_ = v_isSharedCheck_1803_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_a_1796_);
lean_dec(v___x_1782_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1803_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v___x_1801_; 
if (v_isShared_1799_ == 0)
{
v___x_1801_ = v___x_1798_;
goto v_reusejp_1800_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v_a_1796_);
v___x_1801_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1800_;
}
v_reusejp_1800_:
{
return v___x_1801_;
}
}
}
v___jp_1472_:
{
if (v___y_1483_ == 0)
{
lean_object* v___x_1485_; 
lean_dec_ref(v___y_1477_);
if (v_isShared_1468_ == 0)
{
lean_ctor_set(v___x_1467_, 0, v___y_1480_);
v___x_1485_ = v___x_1467_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v___y_1480_);
lean_ctor_set(v_reuseFailAlloc_1489_, 1, v_snd_1465_);
v___x_1485_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
lean_object* v___x_1487_; 
if (v_isShared_1463_ == 0)
{
lean_ctor_set(v___x_1462_, 1, v___x_1485_);
lean_ctor_set(v___x_1462_, 0, v___y_1476_);
v___x_1487_ = v___x_1462_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v___y_1476_);
lean_ctor_set(v_reuseFailAlloc_1488_, 1, v___x_1485_);
v___x_1487_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
v_a_1453_ = v___x_1487_;
goto v___jp_1452_;
}
}
}
else
{
lean_object* v___x_1491_; 
if (v_isShared_1468_ == 0)
{
lean_ctor_set(v___x_1467_, 1, v___x_1470_);
lean_ctor_set(v___x_1467_, 0, v___y_1477_);
v___x_1491_ = v___x_1467_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v___y_1477_);
lean_ctor_set(v_reuseFailAlloc_1581_, 1, v___x_1470_);
v___x_1491_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
lean_object* v___x_1493_; 
if (v_isShared_1463_ == 0)
{
lean_ctor_set(v___x_1462_, 1, v___x_1491_);
lean_ctor_set(v___x_1462_, 0, v___x_1469_);
v___x_1493_ = v___x_1462_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v___x_1469_);
lean_ctor_set(v_reuseFailAlloc_1580_, 1, v___x_1491_);
v___x_1493_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
lean_object* v___x_1494_; 
v___x_1494_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0___redArg(v___x_1493_);
if (lean_obj_tag(v___x_1494_) == 0)
{
lean_object* v_a_1495_; lean_object* v_snd_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1570_; 
v_a_1495_ = lean_ctor_get(v___x_1494_, 0);
lean_inc(v_a_1495_);
lean_dec_ref_known(v___x_1494_, 1);
v_snd_1496_ = lean_ctor_get(v_a_1495_, 1);
v_isSharedCheck_1570_ = !lean_is_exclusive(v_a_1495_);
if (v_isSharedCheck_1570_ == 0)
{
lean_object* v_unused_1571_; 
v_unused_1571_ = lean_ctor_get(v_a_1495_, 0);
lean_dec(v_unused_1571_);
v___x_1498_ = v_a_1495_;
v_isShared_1499_ = v_isSharedCheck_1570_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_snd_1496_);
lean_dec(v_a_1495_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1570_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v_fst_1500_; lean_object* v_snd_1501_; lean_object* v___x_1503_; uint8_t v_isShared_1504_; uint8_t v_isSharedCheck_1569_; 
v_fst_1500_ = lean_ctor_get(v_snd_1496_, 0);
v_snd_1501_ = lean_ctor_get(v_snd_1496_, 1);
v_isSharedCheck_1569_ = !lean_is_exclusive(v_snd_1496_);
if (v_isSharedCheck_1569_ == 0)
{
v___x_1503_ = v_snd_1496_;
v_isShared_1504_ = v_isSharedCheck_1569_;
goto v_resetjp_1502_;
}
else
{
lean_inc(v_snd_1501_);
lean_inc(v_fst_1500_);
lean_dec(v_snd_1496_);
v___x_1503_ = lean_box(0);
v_isShared_1504_ = v_isSharedCheck_1569_;
goto v_resetjp_1502_;
}
v_resetjp_1502_:
{
lean_object* v_points_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; uint8_t v___x_1508_; 
v_points_1505_ = lean_ctor_get(v_snd_1465_, 0);
v___x_1506_ = lean_array_get_size(v_points_1505_);
v___x_1507_ = lean_array_get_size(v_snd_1501_);
v___x_1508_ = lean_nat_dec_lt(v___x_1506_, v___x_1507_);
if (v___x_1508_ == 0)
{
lean_object* v___x_1510_; 
lean_dec(v_snd_1501_);
lean_dec(v_fst_1500_);
if (v_isShared_1504_ == 0)
{
lean_ctor_set(v___x_1503_, 1, v_snd_1465_);
lean_ctor_set(v___x_1503_, 0, v___y_1480_);
v___x_1510_ = v___x_1503_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v___y_1480_);
lean_ctor_set(v_reuseFailAlloc_1514_, 1, v_snd_1465_);
v___x_1510_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
lean_object* v___x_1512_; 
if (v_isShared_1499_ == 0)
{
lean_ctor_set(v___x_1498_, 1, v___x_1510_);
lean_ctor_set(v___x_1498_, 0, v___y_1476_);
v___x_1512_ = v___x_1498_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v___y_1476_);
lean_ctor_set(v_reuseFailAlloc_1513_, 1, v___x_1510_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
v_a_1453_ = v___x_1512_;
goto v___jp_1452_;
}
}
}
else
{
lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1566_; 
v_isSharedCheck_1566_ = !lean_is_exclusive(v_snd_1465_);
if (v_isSharedCheck_1566_ == 0)
{
lean_object* v_unused_1567_; lean_object* v_unused_1568_; 
v_unused_1567_ = lean_ctor_get(v_snd_1465_, 1);
lean_dec(v_unused_1567_);
v_unused_1568_ = lean_ctor_get(v_snd_1465_, 0);
lean_dec(v_unused_1568_);
v___x_1516_ = v_snd_1465_;
v_isShared_1517_ = v_isSharedCheck_1566_;
goto v_resetjp_1515_;
}
else
{
lean_dec(v_snd_1465_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1566_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
lean_object* v___x_1518_; uint8_t v___x_1519_; 
v___x_1518_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__2));
v___x_1519_ = l_Lean_Expr_isConstOf(v_fst_1500_, v___x_1518_);
if (v___x_1519_ == 0)
{
lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; uint8_t v___x_1523_; 
v___x_1520_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__3));
lean_inc_ref(v___y_1473_);
lean_inc_ref(v___y_1474_);
lean_inc_ref(v___y_1481_);
v___x_1521_ = l_Lean_Name_mkStr4(v___y_1481_, v___y_1474_, v___y_1473_, v___x_1520_);
v___x_1522_ = lean_unsigned_to_nat(1u);
v___x_1523_ = l_Lean_Expr_isAppOfArity(v_fst_1500_, v___x_1521_, v___x_1522_);
lean_dec(v___x_1521_);
if (v___x_1523_ == 0)
{
lean_object* v___x_1524_; lean_object* v___x_1525_; uint8_t v___x_1526_; 
v___x_1524_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__4));
lean_inc_ref(v___y_1473_);
lean_inc_ref(v___y_1474_);
lean_inc_ref(v___y_1481_);
v___x_1525_ = l_Lean_Name_mkStr4(v___y_1481_, v___y_1474_, v___y_1473_, v___x_1524_);
v___x_1526_ = l_Lean_Expr_isAppOfArity(v_fst_1500_, v___x_1525_, v___x_1522_);
lean_dec(v___x_1525_);
if (v___x_1526_ == 0)
{
lean_object* v___x_1527_; lean_object* v___x_1529_; 
v___x_1527_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1527_, 0, v_fst_1500_);
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 1, v___x_1527_);
lean_ctor_set(v___x_1516_, 0, v_snd_1501_);
v___x_1529_ = v___x_1516_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v_snd_1501_);
lean_ctor_set(v_reuseFailAlloc_1536_, 1, v___x_1527_);
v___x_1529_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
lean_object* v___x_1531_; 
if (v_isShared_1504_ == 0)
{
lean_ctor_set(v___x_1503_, 1, v___x_1529_);
lean_ctor_set(v___x_1503_, 0, v___y_1480_);
v___x_1531_ = v___x_1503_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v___y_1480_);
lean_ctor_set(v_reuseFailAlloc_1535_, 1, v___x_1529_);
v___x_1531_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
lean_object* v___x_1533_; 
if (v_isShared_1499_ == 0)
{
lean_ctor_set(v___x_1498_, 1, v___x_1531_);
lean_ctor_set(v___x_1498_, 0, v___y_1476_);
v___x_1533_ = v___x_1498_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v___y_1476_);
lean_ctor_set(v_reuseFailAlloc_1534_, 1, v___x_1531_);
v___x_1533_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
v_a_1453_ = v___x_1533_;
goto v___jp_1452_;
}
}
}
}
else
{
lean_object* v___x_1537_; lean_object* v___x_1539_; 
lean_dec(v_fst_1500_);
v___x_1537_ = lean_box(2);
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 1, v___x_1537_);
lean_ctor_set(v___x_1516_, 0, v_snd_1501_);
v___x_1539_ = v___x_1516_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v_snd_1501_);
lean_ctor_set(v_reuseFailAlloc_1546_, 1, v___x_1537_);
v___x_1539_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
lean_object* v___x_1541_; 
if (v_isShared_1504_ == 0)
{
lean_ctor_set(v___x_1503_, 1, v___x_1539_);
lean_ctor_set(v___x_1503_, 0, v___y_1480_);
v___x_1541_ = v___x_1503_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v___y_1480_);
lean_ctor_set(v_reuseFailAlloc_1545_, 1, v___x_1539_);
v___x_1541_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
lean_object* v___x_1543_; 
if (v_isShared_1499_ == 0)
{
lean_ctor_set(v___x_1498_, 1, v___x_1541_);
lean_ctor_set(v___x_1498_, 0, v___y_1476_);
v___x_1543_ = v___x_1498_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v___y_1476_);
lean_ctor_set(v_reuseFailAlloc_1544_, 1, v___x_1541_);
v___x_1543_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
v_a_1453_ = v___x_1543_;
goto v___jp_1452_;
}
}
}
}
}
else
{
lean_object* v___x_1547_; lean_object* v___x_1549_; 
lean_dec(v_fst_1500_);
v___x_1547_ = lean_box(1);
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 1, v___x_1547_);
lean_ctor_set(v___x_1516_, 0, v_snd_1501_);
v___x_1549_ = v___x_1516_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1556_; 
v_reuseFailAlloc_1556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1556_, 0, v_snd_1501_);
lean_ctor_set(v_reuseFailAlloc_1556_, 1, v___x_1547_);
v___x_1549_ = v_reuseFailAlloc_1556_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
lean_object* v___x_1551_; 
if (v_isShared_1504_ == 0)
{
lean_ctor_set(v___x_1503_, 1, v___x_1549_);
lean_ctor_set(v___x_1503_, 0, v___y_1480_);
v___x_1551_ = v___x_1503_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v___y_1480_);
lean_ctor_set(v_reuseFailAlloc_1555_, 1, v___x_1549_);
v___x_1551_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
lean_object* v___x_1553_; 
if (v_isShared_1499_ == 0)
{
lean_ctor_set(v___x_1498_, 1, v___x_1551_);
lean_ctor_set(v___x_1498_, 0, v___y_1476_);
v___x_1553_ = v___x_1498_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v___y_1476_);
lean_ctor_set(v_reuseFailAlloc_1554_, 1, v___x_1551_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
v_a_1453_ = v___x_1553_;
goto v___jp_1452_;
}
}
}
}
}
else
{
lean_object* v___x_1558_; 
lean_dec(v_fst_1500_);
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 1, v___x_1471_);
lean_ctor_set(v___x_1516_, 0, v_snd_1501_);
v___x_1558_ = v___x_1516_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1565_; 
v_reuseFailAlloc_1565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1565_, 0, v_snd_1501_);
lean_ctor_set(v_reuseFailAlloc_1565_, 1, v___x_1471_);
v___x_1558_ = v_reuseFailAlloc_1565_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
lean_object* v___x_1560_; 
if (v_isShared_1504_ == 0)
{
lean_ctor_set(v___x_1503_, 1, v___x_1558_);
lean_ctor_set(v___x_1503_, 0, v___y_1480_);
v___x_1560_ = v___x_1503_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v___y_1480_);
lean_ctor_set(v_reuseFailAlloc_1564_, 1, v___x_1558_);
v___x_1560_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
lean_object* v___x_1562_; 
if (v_isShared_1499_ == 0)
{
lean_ctor_set(v___x_1498_, 1, v___x_1560_);
lean_ctor_set(v___x_1498_, 0, v___y_1476_);
v___x_1562_ = v___x_1498_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v___y_1476_);
lean_ctor_set(v_reuseFailAlloc_1563_, 1, v___x_1560_);
v___x_1562_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
v_a_1453_ = v___x_1562_;
goto v___jp_1452_;
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
lean_object* v_a_1572_; lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1579_; 
lean_dec(v___y_1480_);
lean_dec(v___y_1476_);
lean_dec(v_snd_1465_);
lean_dec_ref(v_letMuts_1442_);
lean_dec_ref(v_xs_1441_);
lean_dec_ref(v___x_1440_);
lean_dec(v_inv_1439_);
v_a_1572_ = lean_ctor_get(v___x_1494_, 0);
v_isSharedCheck_1579_ = !lean_is_exclusive(v___x_1494_);
if (v_isSharedCheck_1579_ == 0)
{
v___x_1574_ = v___x_1494_;
v_isShared_1575_ = v_isSharedCheck_1579_;
goto v_resetjp_1573_;
}
else
{
lean_inc(v_a_1572_);
lean_dec(v___x_1494_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1579_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
lean_object* v___x_1577_; 
if (v_isShared_1575_ == 0)
{
v___x_1577_ = v___x_1574_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v_a_1572_);
v___x_1577_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
return v___x_1577_;
}
}
}
}
}
}
}
v___jp_1582_:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; uint8_t v___x_1595_; 
v___x_1590_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2));
v___x_1591_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__4));
v___x_1592_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__5));
v___x_1593_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__6));
v___x_1594_ = lean_unsigned_to_nat(3u);
v___x_1595_ = l_Lean_Expr_isAppOfArity(v___y_1583_, v___x_1593_, v___x_1594_);
if (v___x_1595_ == 0)
{
lean_object* v___x_1596_; lean_object* v___x_1597_; 
lean_dec_ref(v___y_1583_);
lean_del_object(v___x_1467_);
lean_del_object(v___x_1462_);
v___x_1596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1596_, 0, v_suffixPoint_x3f_1585_);
lean_ctor_set(v___x_1596_, 1, v_snd_1465_);
v___x_1597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1597_, 0, v_prefixPoint_x3f_1584_);
lean_ctor_set(v___x_1597_, 1, v___x_1596_);
v_a_1453_ = v___x_1597_;
goto v___jp_1452_;
}
else
{
lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; uint8_t v___x_1602_; 
v___x_1598_ = l_Lean_Expr_appFn_x21(v___y_1583_);
v___x_1599_ = l_Lean_Expr_appArg_x21(v___x_1598_);
lean_dec_ref(v___x_1598_);
v___x_1600_ = l_Lean_Expr_appArg_x21(v___y_1583_);
lean_dec_ref(v___y_1583_);
v___x_1601_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__0___redArg___closed__1));
v___x_1602_ = l_Lean_Expr_isAppOfArity(v___x_1599_, v___x_1601_, v___x_1594_);
if (v___x_1602_ == 0)
{
lean_dec_ref(v___x_1599_);
v___y_1473_ = v___x_1592_;
v___y_1474_ = v___x_1591_;
v___y_1475_ = v___y_1587_;
v___y_1476_ = v_prefixPoint_x3f_1584_;
v___y_1477_ = v___x_1600_;
v___y_1478_ = v___y_1588_;
v___y_1479_ = v___y_1589_;
v___y_1480_ = v_suffixPoint_x3f_1585_;
v___y_1481_ = v___x_1590_;
v___y_1482_ = v___y_1586_;
v___y_1483_ = v___x_1602_;
goto v___jp_1472_;
}
else
{
lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; uint8_t v___x_1610_; 
v___x_1603_ = lean_unsigned_to_nat(2u);
v___x_1604_ = l_Lean_Expr_getAppNumArgs(v___x_1599_);
v___x_1605_ = lean_nat_sub(v___x_1604_, v___x_1603_);
lean_dec(v___x_1604_);
v___x_1606_ = lean_unsigned_to_nat(1u);
v___x_1607_ = lean_nat_sub(v___x_1605_, v___x_1606_);
lean_dec(v___x_1605_);
v___x_1608_ = l_Lean_Expr_getRevArg_x21(v___x_1599_, v___x_1607_);
lean_dec_ref(v___x_1599_);
lean_inc(v_inv_1439_);
v___x_1609_ = l_Lean_mkMVar(v_inv_1439_);
v___x_1610_ = lean_expr_eqv(v___x_1608_, v___x_1609_);
lean_dec_ref(v___x_1609_);
lean_dec_ref(v___x_1608_);
v___y_1473_ = v___x_1592_;
v___y_1474_ = v___x_1591_;
v___y_1475_ = v___y_1587_;
v___y_1476_ = v_prefixPoint_x3f_1584_;
v___y_1477_ = v___x_1600_;
v___y_1478_ = v___y_1588_;
v___y_1479_ = v___y_1589_;
v___y_1480_ = v_suffixPoint_x3f_1585_;
v___y_1481_ = v___x_1590_;
v___y_1482_ = v___y_1586_;
v___y_1483_ = v___x_1610_;
goto v___jp_1472_;
}
}
}
v___jp_1612_:
{
lean_object* v___x_1623_; 
lean_inc(v_inv_1439_);
v___x_1623_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse(v___y_1613_, v_inv_1439_);
lean_dec_ref(v___y_1613_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_invariantUse_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1696_; 
v_invariantUse_1624_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1696_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1626_ = v___x_1623_;
v_isShared_1627_ = v_isSharedCheck_1696_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_invariantUse_1624_);
lean_dec(v___x_1623_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1696_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
lean_object* v_conditionIdx_1628_; lean_object* v_cursorSuffix_1629_; lean_object* v_letMutsTuple_1630_; uint8_t v___x_1631_; 
v_conditionIdx_1628_ = lean_ctor_get(v_invariantUse_1624_, 0);
lean_inc(v_conditionIdx_1628_);
v_cursorSuffix_1629_ = lean_ctor_get(v_invariantUse_1624_, 2);
lean_inc_ref(v_cursorSuffix_1629_);
v_letMutsTuple_1630_ = lean_ctor_get(v_invariantUse_1624_, 4);
lean_inc_ref(v_letMutsTuple_1630_);
lean_dec_ref(v_invariantUse_1624_);
v___x_1631_ = lean_nat_dec_eq(v_conditionIdx_1628_, v___x_1469_);
lean_dec(v_conditionIdx_1628_);
if (v___x_1631_ == 0)
{
lean_object* v___x_1632_; lean_object* v___x_1633_; 
lean_dec_ref(v_letMutsTuple_1630_);
lean_dec_ref(v_cursorSuffix_1629_);
lean_del_object(v___x_1626_);
lean_dec_ref(v___y_1617_);
lean_dec_ref(v___y_1616_);
lean_dec_ref(v___y_1615_);
lean_dec(v___y_1614_);
lean_del_object(v___x_1467_);
lean_del_object(v___x_1462_);
v___x_1632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1632_, 0, v_fst_1464_);
lean_ctor_set(v___x_1632_, 1, v_snd_1465_);
v___x_1633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1633_, 0, v_prefixPoint_x3f_1618_);
lean_ctor_set(v___x_1633_, 1, v___x_1632_);
v_a_1453_ = v___x_1633_;
goto v___jp_1452_;
}
else
{
lean_object* v___x_1634_; uint8_t v___x_1635_; 
v___x_1634_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__2));
v___x_1635_ = l_Lean_Expr_isAppOf(v_cursorSuffix_1629_, v___x_1634_);
if (v___x_1635_ == 0)
{
lean_dec_ref(v_letMutsTuple_1630_);
lean_dec_ref(v_cursorSuffix_1629_);
lean_del_object(v___x_1626_);
lean_dec_ref(v___y_1616_);
lean_dec_ref(v___y_1615_);
lean_dec(v___y_1614_);
v___y_1583_ = v___y_1617_;
v_prefixPoint_x3f_1584_ = v_prefixPoint_x3f_1618_;
v_suffixPoint_x3f_1585_ = v_fst_1464_;
v___y_1586_ = v___y_1619_;
v___y_1587_ = v___y_1620_;
v___y_1588_ = v___y_1621_;
v___y_1589_ = v___y_1622_;
goto v___jp_1582_;
}
else
{
uint8_t v___x_1636_; 
v___x_1636_ = l_Lean_Expr_isFVar(v_letMutsTuple_1630_);
if (v___x_1636_ == 0)
{
lean_dec_ref(v_letMutsTuple_1630_);
lean_dec_ref(v_cursorSuffix_1629_);
lean_del_object(v___x_1626_);
lean_dec_ref(v___y_1616_);
lean_dec_ref(v___y_1615_);
lean_dec(v___y_1614_);
v___y_1583_ = v___y_1617_;
v_prefixPoint_x3f_1584_ = v_prefixPoint_x3f_1618_;
v_suffixPoint_x3f_1585_ = v_fst_1464_;
v___y_1586_ = v___y_1619_;
v___y_1587_ = v___y_1620_;
v___y_1588_ = v___y_1621_;
v___y_1589_ = v___y_1622_;
goto v___jp_1582_;
}
else
{
lean_object* v___x_1637_; lean_object* v___f_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; 
v___x_1637_ = lean_box(v___x_1631_);
lean_inc_ref(v___x_1440_);
lean_inc_ref(v_letMutsTuple_1630_);
v___f_1638_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1638_, 0, v_letMutsTuple_1630_);
lean_closure_set(v___f_1638_, 1, v___x_1440_);
lean_closure_set(v___f_1638_, 2, v___x_1637_);
v___x_1639_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__8));
lean_inc_ref(v_xs_1441_);
v___x_1640_ = l_Lean_Meta_mkProjection(v_xs_1441_, v___x_1639_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_);
if (lean_obj_tag(v___x_1640_) == 0)
{
lean_object* v_a_1641_; lean_object* v___x_1642_; 
v_a_1641_ = lean_ctor_get(v___x_1640_, 0);
lean_inc(v_a_1641_);
lean_dec_ref_known(v___x_1640_, 1);
v___x_1642_ = l_Lean_Meta_mkEq(v_a_1641_, v_cursorSuffix_1629_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_);
if (lean_obj_tag(v___x_1642_) == 0)
{
lean_object* v_a_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; 
v_a_1643_ = lean_ctor_get(v___x_1642_, 0);
lean_inc(v_a_1643_);
lean_dec_ref_known(v___x_1642_, 1);
v___x_1644_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept___boxed), 7, 2);
lean_closure_set(v___x_1644_, 0, v___y_1615_);
lean_closure_set(v___x_1644_, 1, v___f_1638_);
lean_inc(v_a_1611_);
v___x_1645_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0___redArg(v_a_1611_, v___x_1644_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_);
if (lean_obj_tag(v___x_1645_) == 0)
{
lean_object* v_a_1646_; lean_object* v___x_1647_; 
v_a_1646_ = lean_ctor_get(v___x_1645_, 0);
lean_inc(v_a_1646_);
lean_dec_ref_known(v___x_1645_, 1);
v___x_1647_ = l_Lean_Expr_replaceFVar(v_a_1646_, v_letMutsTuple_1630_, v_letMuts_1442_);
lean_dec(v_a_1646_);
if (lean_obj_tag(v_fst_1464_) == 1)
{
lean_object* v_val_1648_; lean_object* v___x_1650_; uint8_t v_isShared_1651_; uint8_t v_isSharedCheck_1666_; 
lean_dec(v_a_1643_);
lean_del_object(v___x_1626_);
lean_dec_ref(v___y_1616_);
v_val_1648_ = lean_ctor_get(v_fst_1464_, 0);
v_isSharedCheck_1666_ = !lean_is_exclusive(v_fst_1464_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1650_ = v_fst_1464_;
v_isShared_1651_ = v_isSharedCheck_1666_;
goto v_resetjp_1649_;
}
else
{
lean_inc(v_val_1648_);
lean_dec(v_fst_1464_);
v___x_1650_ = lean_box(0);
v_isShared_1651_ = v_isSharedCheck_1666_;
goto v_resetjp_1649_;
}
v_resetjp_1649_:
{
lean_object* v_lvl_1652_; lean_object* v_cursorPred_1653_; lean_object* v_letMutsPred_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1665_; 
v_lvl_1652_ = lean_ctor_get(v_val_1648_, 0);
v_cursorPred_1653_ = lean_ctor_get(v_val_1648_, 1);
v_letMutsPred_1654_ = lean_ctor_get(v_val_1648_, 2);
v_isSharedCheck_1665_ = !lean_is_exclusive(v_val_1648_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1656_ = v_val_1648_;
v_isShared_1657_ = v_isSharedCheck_1665_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_letMutsPred_1654_);
lean_inc(v_cursorPred_1653_);
lean_inc(v_lvl_1652_);
lean_dec(v_val_1648_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1665_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1658_; lean_object* v___x_1660_; 
v___x_1658_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd(v___y_1614_, v_letMutsPred_1654_, v___x_1647_);
if (v_isShared_1657_ == 0)
{
lean_ctor_set(v___x_1656_, 2, v___x_1658_);
v___x_1660_ = v___x_1656_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v_lvl_1652_);
lean_ctor_set(v_reuseFailAlloc_1664_, 1, v_cursorPred_1653_);
lean_ctor_set(v_reuseFailAlloc_1664_, 2, v___x_1658_);
v___x_1660_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
lean_object* v___x_1662_; 
if (v_isShared_1651_ == 0)
{
lean_ctor_set(v___x_1650_, 0, v___x_1660_);
v___x_1662_ = v___x_1650_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v___x_1660_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
v___y_1583_ = v___y_1617_;
v_prefixPoint_x3f_1584_ = v_prefixPoint_x3f_1618_;
v_suffixPoint_x3f_1585_ = v___x_1662_;
v___y_1586_ = v___y_1619_;
v___y_1587_ = v___y_1620_;
v___y_1588_ = v___y_1621_;
v___y_1589_ = v___y_1622_;
goto v___jp_1582_;
}
}
}
}
}
else
{
lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1670_; 
lean_dec(v_fst_1464_);
v___x_1667_ = lean_apply_1(v___y_1616_, v_a_1643_);
v___x_1668_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1668_, 0, v___y_1614_);
lean_ctor_set(v___x_1668_, 1, v___x_1667_);
lean_ctor_set(v___x_1668_, 2, v___x_1647_);
if (v_isShared_1627_ == 0)
{
lean_ctor_set_tag(v___x_1626_, 1);
lean_ctor_set(v___x_1626_, 0, v___x_1668_);
v___x_1670_ = v___x_1626_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v___x_1668_);
v___x_1670_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
v___y_1583_ = v___y_1617_;
v_prefixPoint_x3f_1584_ = v_prefixPoint_x3f_1618_;
v_suffixPoint_x3f_1585_ = v___x_1670_;
v___y_1586_ = v___y_1619_;
v___y_1587_ = v___y_1620_;
v___y_1588_ = v___y_1621_;
v___y_1589_ = v___y_1622_;
goto v___jp_1582_;
}
}
}
else
{
lean_object* v_a_1672_; lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1679_; 
lean_dec(v_a_1643_);
lean_dec_ref(v_letMutsTuple_1630_);
lean_del_object(v___x_1626_);
lean_dec(v_prefixPoint_x3f_1618_);
lean_dec_ref(v___y_1617_);
lean_dec_ref(v___y_1616_);
lean_dec(v___y_1614_);
lean_del_object(v___x_1467_);
lean_dec(v_snd_1465_);
lean_dec(v_fst_1464_);
lean_del_object(v___x_1462_);
lean_dec_ref(v_letMuts_1442_);
lean_dec_ref(v_xs_1441_);
lean_dec_ref(v___x_1440_);
lean_dec(v_inv_1439_);
v_a_1672_ = lean_ctor_get(v___x_1645_, 0);
v_isSharedCheck_1679_ = !lean_is_exclusive(v___x_1645_);
if (v_isSharedCheck_1679_ == 0)
{
v___x_1674_ = v___x_1645_;
v_isShared_1675_ = v_isSharedCheck_1679_;
goto v_resetjp_1673_;
}
else
{
lean_inc(v_a_1672_);
lean_dec(v___x_1645_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1679_;
goto v_resetjp_1673_;
}
v_resetjp_1673_:
{
lean_object* v___x_1677_; 
if (v_isShared_1675_ == 0)
{
v___x_1677_ = v___x_1674_;
goto v_reusejp_1676_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v_a_1672_);
v___x_1677_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1676_;
}
v_reusejp_1676_:
{
return v___x_1677_;
}
}
}
}
else
{
lean_object* v_a_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1687_; 
lean_dec_ref(v___f_1638_);
lean_dec_ref(v_letMutsTuple_1630_);
lean_del_object(v___x_1626_);
lean_dec(v_prefixPoint_x3f_1618_);
lean_dec_ref(v___y_1617_);
lean_dec_ref(v___y_1616_);
lean_dec_ref(v___y_1615_);
lean_dec(v___y_1614_);
lean_del_object(v___x_1467_);
lean_dec(v_snd_1465_);
lean_dec(v_fst_1464_);
lean_del_object(v___x_1462_);
lean_dec_ref(v_letMuts_1442_);
lean_dec_ref(v_xs_1441_);
lean_dec_ref(v___x_1440_);
lean_dec(v_inv_1439_);
v_a_1680_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1687_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1687_ == 0)
{
v___x_1682_ = v___x_1642_;
v_isShared_1683_ = v_isSharedCheck_1687_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_a_1680_);
lean_dec(v___x_1642_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1687_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
lean_object* v___x_1685_; 
if (v_isShared_1683_ == 0)
{
v___x_1685_ = v___x_1682_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1686_; 
v_reuseFailAlloc_1686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1686_, 0, v_a_1680_);
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
else
{
lean_object* v_a_1688_; lean_object* v___x_1690_; uint8_t v_isShared_1691_; uint8_t v_isSharedCheck_1695_; 
lean_dec_ref(v___f_1638_);
lean_dec_ref(v_letMutsTuple_1630_);
lean_dec_ref(v_cursorSuffix_1629_);
lean_del_object(v___x_1626_);
lean_dec(v_prefixPoint_x3f_1618_);
lean_dec_ref(v___y_1617_);
lean_dec_ref(v___y_1616_);
lean_dec_ref(v___y_1615_);
lean_dec(v___y_1614_);
lean_del_object(v___x_1467_);
lean_dec(v_snd_1465_);
lean_dec(v_fst_1464_);
lean_del_object(v___x_1462_);
lean_dec_ref(v_letMuts_1442_);
lean_dec_ref(v_xs_1441_);
lean_dec_ref(v___x_1440_);
lean_dec(v_inv_1439_);
v_a_1688_ = lean_ctor_get(v___x_1640_, 0);
v_isSharedCheck_1695_ = !lean_is_exclusive(v___x_1640_);
if (v_isSharedCheck_1695_ == 0)
{
v___x_1690_ = v___x_1640_;
v_isShared_1691_ = v_isSharedCheck_1695_;
goto v_resetjp_1689_;
}
else
{
lean_inc(v_a_1688_);
lean_dec(v___x_1640_);
v___x_1690_ = lean_box(0);
v_isShared_1691_ = v_isSharedCheck_1695_;
goto v_resetjp_1689_;
}
v_resetjp_1689_:
{
lean_object* v___x_1693_; 
if (v_isShared_1691_ == 0)
{
v___x_1693_ = v___x_1690_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v_a_1688_);
v___x_1693_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
return v___x_1693_;
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
lean_dec(v___x_1623_);
lean_dec_ref(v___y_1616_);
lean_dec_ref(v___y_1615_);
lean_dec(v___y_1614_);
v___y_1583_ = v___y_1617_;
v_prefixPoint_x3f_1584_ = v_prefixPoint_x3f_1618_;
v_suffixPoint_x3f_1585_ = v_fst_1464_;
v___y_1586_ = v___y_1619_;
v___y_1587_ = v___y_1620_;
v___y_1588_ = v___y_1621_;
v___y_1589_ = v___y_1622_;
goto v___jp_1582_;
}
}
v___jp_1697_:
{
lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; 
lean_inc_ref(v___y_1703_);
v___x_1705_ = lean_apply_1(v___y_1703_, v___y_1698_);
lean_inc(v___y_1700_);
v___x_1706_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1706_, 0, v___y_1700_);
lean_ctor_set(v___x_1706_, 1, v___x_1705_);
lean_ctor_set(v___x_1706_, 2, v_a_1704_);
v___x_1707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1707_, 0, v___x_1706_);
v___y_1613_ = v___y_1699_;
v___y_1614_ = v___y_1700_;
v___y_1615_ = v___y_1701_;
v___y_1616_ = v___y_1703_;
v___y_1617_ = v___y_1702_;
v_prefixPoint_x3f_1618_ = v___x_1707_;
v___y_1619_ = v___y_1447_;
v___y_1620_ = v___y_1448_;
v___y_1621_ = v___y_1449_;
v___y_1622_ = v___y_1450_;
goto v___jp_1612_;
}
v___jp_1708_:
{
lean_object* v___x_1710_; lean_object* v___x_1711_; 
lean_inc_ref(v_a_1709_);
v___x_1710_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___boxed), 6, 1);
lean_closure_set(v___x_1710_, 0, v_a_1709_);
lean_inc(v_a_1611_);
v___x_1711_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__0___redArg(v_a_1611_, v___x_1710_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
if (lean_obj_tag(v___x_1711_) == 0)
{
lean_object* v_a_1712_; 
v_a_1712_ = lean_ctor_get(v___x_1711_, 0);
lean_inc(v_a_1712_);
lean_dec_ref_known(v___x_1711_, 1);
if (lean_obj_tag(v_a_1712_) == 1)
{
lean_object* v_val_1713_; lean_object* v_snd_1714_; lean_object* v_fst_1715_; lean_object* v___x_1717_; uint8_t v_isShared_1718_; uint8_t v_isSharedCheck_1773_; 
v_val_1713_ = lean_ctor_get(v_a_1712_, 0);
lean_inc(v_val_1713_);
lean_dec_ref_known(v_a_1712_, 1);
v_snd_1714_ = lean_ctor_get(v_val_1713_, 1);
v_fst_1715_ = lean_ctor_get(v_val_1713_, 0);
v_isSharedCheck_1773_ = !lean_is_exclusive(v_val_1713_);
if (v_isSharedCheck_1773_ == 0)
{
v___x_1717_ = v_val_1713_;
v_isShared_1718_ = v_isSharedCheck_1773_;
goto v_resetjp_1716_;
}
else
{
lean_inc(v_snd_1714_);
lean_inc(v_fst_1715_);
lean_dec(v_val_1713_);
v___x_1717_ = lean_box(0);
v_isShared_1718_ = v_isSharedCheck_1773_;
goto v_resetjp_1716_;
}
v_resetjp_1716_:
{
lean_object* v_fst_1719_; lean_object* v_snd_1720_; lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1772_; 
v_fst_1719_ = lean_ctor_get(v_snd_1714_, 0);
v_snd_1720_ = lean_ctor_get(v_snd_1714_, 1);
v_isSharedCheck_1772_ = !lean_is_exclusive(v_snd_1714_);
if (v_isSharedCheck_1772_ == 0)
{
v___x_1722_ = v_snd_1714_;
v_isShared_1723_ = v_isSharedCheck_1772_;
goto v_resetjp_1721_;
}
else
{
lean_inc(v_snd_1720_);
lean_inc(v_fst_1719_);
lean_dec(v_snd_1714_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1772_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
lean_object* v___f_1724_; lean_object* v___x_1725_; 
lean_inc(v_fst_1715_);
v___f_1724_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___lam__1), 2, 1);
lean_closure_set(v___f_1724_, 0, v_fst_1715_);
lean_inc(v_inv_1439_);
v___x_1725_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse(v_snd_1720_, v_inv_1439_);
if (lean_obj_tag(v___x_1725_) == 0)
{
lean_object* v_invariantUse_1726_; lean_object* v_conditionIdx_1727_; lean_object* v_cursorPrefix_1728_; lean_object* v_letMutsTuple_1729_; uint8_t v___x_1730_; 
v_invariantUse_1726_ = lean_ctor_get(v___x_1725_, 0);
lean_inc_ref(v_invariantUse_1726_);
lean_dec_ref_known(v___x_1725_, 1);
v_conditionIdx_1727_ = lean_ctor_get(v_invariantUse_1726_, 0);
lean_inc(v_conditionIdx_1727_);
v_cursorPrefix_1728_ = lean_ctor_get(v_invariantUse_1726_, 1);
lean_inc_ref(v_cursorPrefix_1728_);
v_letMutsTuple_1729_ = lean_ctor_get(v_invariantUse_1726_, 4);
lean_inc_ref(v_letMutsTuple_1729_);
lean_dec_ref(v_invariantUse_1726_);
v___x_1730_ = lean_nat_dec_eq(v_conditionIdx_1727_, v___x_1469_);
lean_dec(v_conditionIdx_1727_);
if (v___x_1730_ == 0)
{
lean_object* v___x_1732_; 
lean_dec_ref(v_letMutsTuple_1729_);
lean_dec_ref(v_cursorPrefix_1728_);
lean_dec_ref(v___f_1724_);
lean_dec(v_snd_1720_);
lean_dec(v_fst_1719_);
lean_dec(v_fst_1715_);
lean_dec_ref(v_a_1709_);
lean_del_object(v___x_1467_);
lean_del_object(v___x_1462_);
if (v_isShared_1723_ == 0)
{
lean_ctor_set(v___x_1722_, 1, v_snd_1465_);
lean_ctor_set(v___x_1722_, 0, v_fst_1464_);
v___x_1732_ = v___x_1722_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v_fst_1464_);
lean_ctor_set(v_reuseFailAlloc_1736_, 1, v_snd_1465_);
v___x_1732_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
lean_object* v___x_1734_; 
if (v_isShared_1718_ == 0)
{
lean_ctor_set(v___x_1717_, 1, v___x_1732_);
lean_ctor_set(v___x_1717_, 0, v_fst_1460_);
v___x_1734_ = v___x_1717_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_fst_1460_);
lean_ctor_set(v_reuseFailAlloc_1735_, 1, v___x_1732_);
v___x_1734_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
v_a_1453_ = v___x_1734_;
goto v___jp_1452_;
}
}
}
else
{
lean_object* v___x_1737_; uint8_t v___x_1738_; 
lean_del_object(v___x_1722_);
lean_del_object(v___x_1717_);
v___x_1737_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn_spec__2___closed__2));
v___x_1738_ = l_Lean_Expr_isAppOf(v_cursorPrefix_1728_, v___x_1737_);
if (v___x_1738_ == 0)
{
lean_dec_ref(v_letMutsTuple_1729_);
lean_dec_ref(v_cursorPrefix_1728_);
v___y_1613_ = v_fst_1719_;
v___y_1614_ = v_fst_1715_;
v___y_1615_ = v_snd_1720_;
v___y_1616_ = v___f_1724_;
v___y_1617_ = v_a_1709_;
v_prefixPoint_x3f_1618_ = v_fst_1460_;
v___y_1619_ = v___y_1447_;
v___y_1620_ = v___y_1448_;
v___y_1621_ = v___y_1449_;
v___y_1622_ = v___y_1450_;
goto v___jp_1612_;
}
else
{
lean_object* v___x_1739_; lean_object* v___x_1740_; 
lean_dec(v_fst_1460_);
v___x_1739_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__10));
lean_inc_ref(v_xs_1441_);
v___x_1740_ = l_Lean_Meta_mkProjection(v_xs_1441_, v___x_1739_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
if (lean_obj_tag(v___x_1740_) == 0)
{
lean_object* v_a_1741_; lean_object* v___x_1742_; 
v_a_1741_ = lean_ctor_get(v___x_1740_, 0);
lean_inc(v_a_1741_);
lean_dec_ref_known(v___x_1740_, 1);
v___x_1742_ = l_Lean_Meta_mkEq(v_a_1741_, v_cursorPrefix_1728_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
if (lean_obj_tag(v___x_1742_) == 0)
{
lean_object* v_a_1743_; lean_object* v___x_1744_; 
v_a_1743_ = lean_ctor_get(v___x_1742_, 0);
lean_inc(v_a_1743_);
lean_dec_ref_known(v___x_1742_, 1);
lean_inc_ref(v_letMuts_1442_);
v___x_1744_ = l_Lean_Meta_mkEq(v_letMuts_1442_, v_letMutsTuple_1729_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
if (lean_obj_tag(v___x_1744_) == 0)
{
lean_object* v_a_1745_; lean_object* v___x_1746_; 
v_a_1745_ = lean_ctor_get(v___x_1744_, 0);
lean_inc(v_a_1745_);
lean_dec_ref_known(v___x_1744_, 1);
lean_inc(v_fst_1715_);
v___x_1746_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___lam__1(v_fst_1715_, v_a_1745_);
v___y_1698_ = v_a_1743_;
v___y_1699_ = v_fst_1719_;
v___y_1700_ = v_fst_1715_;
v___y_1701_ = v_snd_1720_;
v___y_1702_ = v_a_1709_;
v___y_1703_ = v___f_1724_;
v_a_1704_ = v___x_1746_;
goto v___jp_1697_;
}
else
{
if (lean_obj_tag(v___x_1744_) == 0)
{
lean_object* v_a_1747_; 
v_a_1747_ = lean_ctor_get(v___x_1744_, 0);
lean_inc(v_a_1747_);
lean_dec_ref_known(v___x_1744_, 1);
v___y_1698_ = v_a_1743_;
v___y_1699_ = v_fst_1719_;
v___y_1700_ = v_fst_1715_;
v___y_1701_ = v_snd_1720_;
v___y_1702_ = v_a_1709_;
v___y_1703_ = v___f_1724_;
v_a_1704_ = v_a_1747_;
goto v___jp_1697_;
}
else
{
lean_object* v_a_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1755_; 
lean_dec(v_a_1743_);
lean_dec_ref(v___f_1724_);
lean_dec(v_snd_1720_);
lean_dec(v_fst_1719_);
lean_dec(v_fst_1715_);
lean_dec_ref(v_a_1709_);
lean_del_object(v___x_1467_);
lean_dec(v_snd_1465_);
lean_dec(v_fst_1464_);
lean_del_object(v___x_1462_);
lean_dec_ref(v_letMuts_1442_);
lean_dec_ref(v_xs_1441_);
lean_dec_ref(v___x_1440_);
lean_dec(v_inv_1439_);
v_a_1748_ = lean_ctor_get(v___x_1744_, 0);
v_isSharedCheck_1755_ = !lean_is_exclusive(v___x_1744_);
if (v_isSharedCheck_1755_ == 0)
{
v___x_1750_ = v___x_1744_;
v_isShared_1751_ = v_isSharedCheck_1755_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_a_1748_);
lean_dec(v___x_1744_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1755_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v___x_1753_; 
if (v_isShared_1751_ == 0)
{
v___x_1753_ = v___x_1750_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1754_; 
v_reuseFailAlloc_1754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1754_, 0, v_a_1748_);
v___x_1753_ = v_reuseFailAlloc_1754_;
goto v_reusejp_1752_;
}
v_reusejp_1752_:
{
return v___x_1753_;
}
}
}
}
}
else
{
lean_object* v_a_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1763_; 
lean_dec_ref(v_letMutsTuple_1729_);
lean_dec_ref(v___f_1724_);
lean_dec(v_snd_1720_);
lean_dec(v_fst_1719_);
lean_dec(v_fst_1715_);
lean_dec_ref(v_a_1709_);
lean_del_object(v___x_1467_);
lean_dec(v_snd_1465_);
lean_dec(v_fst_1464_);
lean_del_object(v___x_1462_);
lean_dec_ref(v_letMuts_1442_);
lean_dec_ref(v_xs_1441_);
lean_dec_ref(v___x_1440_);
lean_dec(v_inv_1439_);
v_a_1756_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1763_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1763_ == 0)
{
v___x_1758_ = v___x_1742_;
v_isShared_1759_ = v_isSharedCheck_1763_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_a_1756_);
lean_dec(v___x_1742_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1763_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
lean_object* v___x_1761_; 
if (v_isShared_1759_ == 0)
{
v___x_1761_ = v___x_1758_;
goto v_reusejp_1760_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v_a_1756_);
v___x_1761_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1760_;
}
v_reusejp_1760_:
{
return v___x_1761_;
}
}
}
}
else
{
lean_object* v_a_1764_; lean_object* v___x_1766_; uint8_t v_isShared_1767_; uint8_t v_isSharedCheck_1771_; 
lean_dec_ref(v_letMutsTuple_1729_);
lean_dec_ref(v_cursorPrefix_1728_);
lean_dec_ref(v___f_1724_);
lean_dec(v_snd_1720_);
lean_dec(v_fst_1719_);
lean_dec(v_fst_1715_);
lean_dec_ref(v_a_1709_);
lean_del_object(v___x_1467_);
lean_dec(v_snd_1465_);
lean_dec(v_fst_1464_);
lean_del_object(v___x_1462_);
lean_dec_ref(v_letMuts_1442_);
lean_dec_ref(v_xs_1441_);
lean_dec_ref(v___x_1440_);
lean_dec(v_inv_1439_);
v_a_1764_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1771_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1771_ == 0)
{
v___x_1766_ = v___x_1740_;
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
else
{
lean_inc(v_a_1764_);
lean_dec(v___x_1740_);
v___x_1766_ = lean_box(0);
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
v_resetjp_1765_:
{
lean_object* v___x_1769_; 
if (v_isShared_1767_ == 0)
{
v___x_1769_ = v___x_1766_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v_a_1764_);
v___x_1769_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
return v___x_1769_;
}
}
}
}
}
}
else
{
lean_dec(v___x_1725_);
lean_del_object(v___x_1722_);
lean_del_object(v___x_1717_);
v___y_1613_ = v_fst_1719_;
v___y_1614_ = v_fst_1715_;
v___y_1615_ = v_snd_1720_;
v___y_1616_ = v___f_1724_;
v___y_1617_ = v_a_1709_;
v_prefixPoint_x3f_1618_ = v_fst_1460_;
v___y_1619_ = v___y_1447_;
v___y_1620_ = v___y_1448_;
v___y_1621_ = v___y_1449_;
v___y_1622_ = v___y_1450_;
goto v___jp_1612_;
}
}
}
}
else
{
lean_dec(v_a_1712_);
v___y_1583_ = v_a_1709_;
v_prefixPoint_x3f_1584_ = v_fst_1460_;
v_suffixPoint_x3f_1585_ = v_fst_1464_;
v___y_1586_ = v___y_1447_;
v___y_1587_ = v___y_1448_;
v___y_1588_ = v___y_1449_;
v___y_1589_ = v___y_1450_;
goto v___jp_1582_;
}
}
else
{
lean_object* v_a_1774_; lean_object* v___x_1776_; uint8_t v_isShared_1777_; uint8_t v_isSharedCheck_1781_; 
lean_dec_ref(v_a_1709_);
lean_del_object(v___x_1467_);
lean_dec(v_snd_1465_);
lean_dec(v_fst_1464_);
lean_del_object(v___x_1462_);
lean_dec(v_fst_1460_);
lean_dec_ref(v_letMuts_1442_);
lean_dec_ref(v_xs_1441_);
lean_dec_ref(v___x_1440_);
lean_dec(v_inv_1439_);
v_a_1774_ = lean_ctor_get(v___x_1711_, 0);
v_isSharedCheck_1781_ = !lean_is_exclusive(v___x_1711_);
if (v_isSharedCheck_1781_ == 0)
{
v___x_1776_ = v___x_1711_;
v_isShared_1777_ = v_isSharedCheck_1781_;
goto v_resetjp_1775_;
}
else
{
lean_inc(v_a_1774_);
lean_dec(v___x_1711_);
v___x_1776_ = lean_box(0);
v_isShared_1777_ = v_isSharedCheck_1781_;
goto v_resetjp_1775_;
}
v_resetjp_1775_:
{
lean_object* v___x_1779_; 
if (v_isShared_1777_ == 0)
{
v___x_1779_ = v___x_1776_;
goto v_reusejp_1778_;
}
else
{
lean_object* v_reuseFailAlloc_1780_; 
v_reuseFailAlloc_1780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1780_, 0, v_a_1774_);
v___x_1779_ = v_reuseFailAlloc_1780_;
goto v_reusejp_1778_;
}
v_reusejp_1778_:
{
return v___x_1779_;
}
}
}
}
}
}
}
v___jp_1452_:
{
size_t v___x_1454_; size_t v___x_1455_; 
v___x_1454_ = ((size_t)1ULL);
v___x_1455_ = lean_usize_add(v_i_1445_, v___x_1454_);
v_i_1445_ = v___x_1455_;
v_b_1446_ = v_a_1453_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___boxed(lean_object* v_inv_1806_, lean_object* v___x_1807_, lean_object* v_xs_1808_, lean_object* v_letMuts_1809_, lean_object* v_as_1810_, lean_object* v_sz_1811_, lean_object* v_i_1812_, lean_object* v_b_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_){
_start:
{
size_t v_sz_boxed_1819_; size_t v_i_boxed_1820_; lean_object* v_res_1821_; 
v_sz_boxed_1819_ = lean_unbox_usize(v_sz_1811_);
lean_dec(v_sz_1811_);
v_i_boxed_1820_ = lean_unbox_usize(v_i_1812_);
lean_dec(v_i_1812_);
v_res_1821_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1(v_inv_1806_, v___x_1807_, v_xs_1808_, v_letMuts_1809_, v_as_1810_, v_sz_boxed_1819_, v_i_boxed_1820_, v_b_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
lean_dec(v___y_1817_);
lean_dec_ref(v___y_1816_);
lean_dec(v___y_1815_);
lean_dec_ref(v___y_1814_);
lean_dec_ref(v_as_1810_);
return v_res_1821_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints(lean_object* v_vcs_1831_, lean_object* v_inv_1832_, lean_object* v_xs_1833_, lean_object* v_letMuts_1834_, lean_object* v_a_1835_, lean_object* v_a_1836_, lean_object* v_a_1837_, lean_object* v_a_1838_){
_start:
{
lean_object* v_lctx_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; size_t v_sz_1843_; size_t v___x_1844_; lean_object* v___x_1845_; 
v_lctx_1840_ = lean_ctor_get(v_a_1835_, 2);
v___x_1841_ = lean_box(0);
v___x_1842_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___closed__2));
v_sz_1843_ = lean_array_size(v_vcs_1831_);
v___x_1844_ = ((size_t)0ULL);
lean_inc_ref(v_lctx_1840_);
v___x_1845_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1(v_inv_1832_, v_lctx_1840_, v_xs_1833_, v_letMuts_1834_, v_vcs_1831_, v_sz_1843_, v___x_1844_, v___x_1842_, v_a_1835_, v_a_1836_, v_a_1837_, v_a_1838_);
if (lean_obj_tag(v___x_1845_) == 0)
{
lean_object* v_a_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1889_; 
v_a_1846_ = lean_ctor_get(v___x_1845_, 0);
v_isSharedCheck_1889_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1889_ == 0)
{
v___x_1848_ = v___x_1845_;
v_isShared_1849_ = v_isSharedCheck_1889_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_a_1846_);
lean_dec(v___x_1845_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1889_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
lean_object* v_snd_1854_; lean_object* v_fst_1855_; lean_object* v___x_1857_; uint8_t v_isShared_1858_; uint8_t v_isSharedCheck_1888_; 
v_snd_1854_ = lean_ctor_get(v_a_1846_, 1);
v_fst_1855_ = lean_ctor_get(v_a_1846_, 0);
v_isSharedCheck_1888_ = !lean_is_exclusive(v_a_1846_);
if (v_isSharedCheck_1888_ == 0)
{
v___x_1857_ = v_a_1846_;
v_isShared_1858_ = v_isSharedCheck_1888_;
goto v_resetjp_1856_;
}
else
{
lean_inc(v_snd_1854_);
lean_inc(v_fst_1855_);
lean_dec(v_a_1846_);
v___x_1857_ = lean_box(0);
v_isShared_1858_ = v_isSharedCheck_1888_;
goto v_resetjp_1856_;
}
v___jp_1850_:
{
lean_object* v___x_1852_; 
if (v_isShared_1849_ == 0)
{
lean_ctor_set(v___x_1848_, 0, v___x_1841_);
v___x_1852_ = v___x_1848_;
goto v_reusejp_1851_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v___x_1841_);
v___x_1852_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1851_;
}
v_reusejp_1851_:
{
return v___x_1852_;
}
}
v_resetjp_1856_:
{
if (lean_obj_tag(v_fst_1855_) == 0)
{
lean_del_object(v___x_1857_);
lean_dec(v_snd_1854_);
goto v___jp_1850_;
}
else
{
lean_object* v_fst_1859_; 
v_fst_1859_ = lean_ctor_get(v_snd_1854_, 0);
lean_inc(v_fst_1859_);
if (lean_obj_tag(v_fst_1859_) == 0)
{
lean_dec_ref_known(v_fst_1855_, 1);
lean_del_object(v___x_1857_);
lean_dec(v_snd_1854_);
goto v___jp_1850_;
}
else
{
lean_object* v_snd_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1886_; 
lean_del_object(v___x_1848_);
v_snd_1860_ = lean_ctor_get(v_snd_1854_, 1);
v_isSharedCheck_1886_ = !lean_is_exclusive(v_snd_1854_);
if (v_isSharedCheck_1886_ == 0)
{
lean_object* v_unused_1887_; 
v_unused_1887_ = lean_ctor_get(v_snd_1854_, 0);
lean_dec(v_unused_1887_);
v___x_1862_ = v_snd_1854_;
v_isShared_1863_ = v_isSharedCheck_1886_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_snd_1860_);
lean_dec(v_snd_1854_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1886_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v_val_1864_; lean_object* v___x_1866_; uint8_t v_isShared_1867_; uint8_t v_isSharedCheck_1885_; 
v_val_1864_ = lean_ctor_get(v_fst_1855_, 0);
v_isSharedCheck_1885_ = !lean_is_exclusive(v_fst_1855_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1866_ = v_fst_1855_;
v_isShared_1867_ = v_isSharedCheck_1885_;
goto v_resetjp_1865_;
}
else
{
lean_inc(v_val_1864_);
lean_dec(v_fst_1855_);
v___x_1866_ = lean_box(0);
v_isShared_1867_ = v_isSharedCheck_1885_;
goto v_resetjp_1865_;
}
v_resetjp_1865_:
{
lean_object* v_val_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1884_; 
v_val_1868_ = lean_ctor_get(v_fst_1859_, 0);
v_isSharedCheck_1884_ = !lean_is_exclusive(v_fst_1859_);
if (v_isSharedCheck_1884_ == 0)
{
v___x_1870_ = v_fst_1859_;
v_isShared_1871_ = v_isSharedCheck_1884_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_val_1868_);
lean_dec(v_fst_1859_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1884_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1873_; 
if (v_isShared_1863_ == 0)
{
lean_ctor_set(v___x_1862_, 0, v_val_1868_);
v___x_1873_ = v___x_1862_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v_val_1868_);
lean_ctor_set(v_reuseFailAlloc_1883_, 1, v_snd_1860_);
v___x_1873_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
lean_object* v___x_1875_; 
if (v_isShared_1858_ == 0)
{
lean_ctor_set(v___x_1857_, 1, v___x_1873_);
lean_ctor_set(v___x_1857_, 0, v_val_1864_);
v___x_1875_ = v___x_1857_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v_val_1864_);
lean_ctor_set(v_reuseFailAlloc_1882_, 1, v___x_1873_);
v___x_1875_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
lean_object* v___x_1877_; 
if (v_isShared_1871_ == 0)
{
lean_ctor_set(v___x_1870_, 0, v___x_1875_);
v___x_1877_ = v___x_1870_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v___x_1875_);
v___x_1877_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
lean_object* v___x_1879_; 
if (v_isShared_1867_ == 0)
{
lean_ctor_set_tag(v___x_1866_, 0);
lean_ctor_set(v___x_1866_, 0, v___x_1877_);
v___x_1879_ = v___x_1866_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v___x_1877_);
v___x_1879_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
return v___x_1879_;
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
else
{
lean_object* v_a_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1897_; 
v_a_1890_ = lean_ctor_get(v___x_1845_, 0);
v_isSharedCheck_1897_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1897_ == 0)
{
v___x_1892_ = v___x_1845_;
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_a_1890_);
lean_dec(v___x_1845_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1895_; 
if (v_isShared_1893_ == 0)
{
v___x_1895_ = v___x_1892_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v_a_1890_);
v___x_1895_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
return v___x_1895_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints___boxed(lean_object* v_vcs_1898_, lean_object* v_inv_1899_, lean_object* v_xs_1900_, lean_object* v_letMuts_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_){
_start:
{
lean_object* v_res_1907_; 
v_res_1907_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints(v_vcs_1898_, v_inv_1899_, v_xs_1900_, v_letMuts_1901_, v_a_1902_, v_a_1903_, v_a_1904_, v_a_1905_);
lean_dec(v_a_1905_);
lean_dec_ref(v_a_1904_);
lean_dec(v_a_1903_);
lean_dec_ref(v_a_1902_);
lean_dec_ref(v_vcs_1898_);
return v_res_1907_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0(lean_object* v_inst_1908_, lean_object* v_a_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_){
_start:
{
lean_object* v___x_1915_; 
v___x_1915_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0___redArg(v_a_1909_);
return v___x_1915_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0___boxed(lean_object* v_inst_1916_, lean_object* v_a_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_){
_start:
{
lean_object* v_res_1923_; 
v_res_1923_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__0(v_inst_1916_, v_a_1917_, v___y_1918_, v___y_1919_, v___y_1920_, v___y_1921_);
lean_dec(v___y_1921_);
lean_dec_ref(v___y_1920_);
lean_dec(v___y_1919_);
lean_dec_ref(v___y_1918_);
return v_res_1923_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_duplicateMVar(lean_object* v_m_1924_, lean_object* v_a_1925_, lean_object* v_a_1926_, lean_object* v_a_1927_, lean_object* v_a_1928_){
_start:
{
lean_object* v___x_1930_; 
v___x_1930_ = l_Lean_MVarId_getDecl(v_m_1924_, v_a_1925_, v_a_1926_, v_a_1927_, v_a_1928_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1931_; lean_object* v_userName_1932_; lean_object* v_lctx_1933_; lean_object* v_type_1934_; lean_object* v_localInstances_1935_; uint8_t v_kind_1936_; lean_object* v_numScopeArgs_1937_; lean_object* v___x_1938_; 
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
lean_inc(v_a_1931_);
lean_dec_ref_known(v___x_1930_, 1);
v_userName_1932_ = lean_ctor_get(v_a_1931_, 0);
lean_inc(v_userName_1932_);
v_lctx_1933_ = lean_ctor_get(v_a_1931_, 1);
lean_inc_ref(v_lctx_1933_);
v_type_1934_ = lean_ctor_get(v_a_1931_, 2);
lean_inc_ref(v_type_1934_);
v_localInstances_1935_ = lean_ctor_get(v_a_1931_, 4);
lean_inc_ref(v_localInstances_1935_);
v_kind_1936_ = lean_ctor_get_uint8(v_a_1931_, sizeof(void*)*7);
v_numScopeArgs_1937_ = lean_ctor_get(v_a_1931_, 5);
lean_inc(v_numScopeArgs_1937_);
lean_dec(v_a_1931_);
v___x_1938_ = l_Lean_Meta_mkFreshExprMVarAt(v_lctx_1933_, v_localInstances_1935_, v_type_1934_, v_kind_1936_, v_userName_1932_, v_numScopeArgs_1937_, v_a_1925_, v_a_1926_, v_a_1927_, v_a_1928_);
if (lean_obj_tag(v___x_1938_) == 0)
{
lean_object* v_a_1939_; lean_object* v___x_1941_; uint8_t v_isShared_1942_; uint8_t v_isSharedCheck_1947_; 
v_a_1939_ = lean_ctor_get(v___x_1938_, 0);
v_isSharedCheck_1947_ = !lean_is_exclusive(v___x_1938_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1941_ = v___x_1938_;
v_isShared_1942_ = v_isSharedCheck_1947_;
goto v_resetjp_1940_;
}
else
{
lean_inc(v_a_1939_);
lean_dec(v___x_1938_);
v___x_1941_ = lean_box(0);
v_isShared_1942_ = v_isSharedCheck_1947_;
goto v_resetjp_1940_;
}
v_resetjp_1940_:
{
lean_object* v___x_1943_; lean_object* v___x_1945_; 
v___x_1943_ = l_Lean_Expr_mvarId_x21(v_a_1939_);
lean_dec(v_a_1939_);
if (v_isShared_1942_ == 0)
{
lean_ctor_set(v___x_1941_, 0, v___x_1943_);
v___x_1945_ = v___x_1941_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v___x_1943_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
else
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1955_; 
v_a_1948_ = lean_ctor_get(v___x_1938_, 0);
v_isSharedCheck_1955_ = !lean_is_exclusive(v___x_1938_);
if (v_isSharedCheck_1955_ == 0)
{
v___x_1950_ = v___x_1938_;
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v___x_1938_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1953_; 
if (v_isShared_1951_ == 0)
{
v___x_1953_ = v___x_1950_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v_a_1948_);
v___x_1953_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
return v___x_1953_;
}
}
}
}
else
{
lean_object* v_a_1956_; lean_object* v___x_1958_; uint8_t v_isShared_1959_; uint8_t v_isSharedCheck_1963_; 
v_a_1956_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1963_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1963_ == 0)
{
v___x_1958_ = v___x_1930_;
v_isShared_1959_ = v_isSharedCheck_1963_;
goto v_resetjp_1957_;
}
else
{
lean_inc(v_a_1956_);
lean_dec(v___x_1930_);
v___x_1958_ = lean_box(0);
v_isShared_1959_ = v_isSharedCheck_1963_;
goto v_resetjp_1957_;
}
v_resetjp_1957_:
{
lean_object* v___x_1961_; 
if (v_isShared_1959_ == 0)
{
v___x_1961_ = v___x_1958_;
goto v_reusejp_1960_;
}
else
{
lean_object* v_reuseFailAlloc_1962_; 
v_reuseFailAlloc_1962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1962_, 0, v_a_1956_);
v___x_1961_ = v_reuseFailAlloc_1962_;
goto v_reusejp_1960_;
}
v_reusejp_1960_:
{
return v___x_1961_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_duplicateMVar___boxed(lean_object* v_m_1964_, lean_object* v_a_1965_, lean_object* v_a_1966_, lean_object* v_a_1967_, lean_object* v_a_1968_, lean_object* v_a_1969_){
_start:
{
lean_object* v_res_1970_; 
v_res_1970_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_duplicateMVar(v_m_1964_, v_a_1965_, v_a_1966_, v_a_1967_, v_a_1968_);
lean_dec(v_a_1968_);
lean_dec_ref(v_a_1967_);
lean_dec(v_a_1966_);
lean_dec_ref(v_a_1965_);
return v_res_1970_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__1(lean_object* v_msg_1971_){
_start:
{
lean_object* v___x_1972_; lean_object* v___x_1973_; 
v___x_1972_ = l_String_instInhabitedSlice;
v___x_1973_ = lean_panic_fn_borrowed(v___x_1972_, v_msg_1971_);
return v___x_1973_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__2_spec__2___redArg(lean_object* v_s_1974_, lean_object* v_a_1975_, uint8_t v_b_1976_){
_start:
{
lean_object* v_str_1977_; lean_object* v_startInclusive_1978_; lean_object* v_endExclusive_1979_; lean_object* v___x_1980_; uint8_t v_decide_1981_; 
v_str_1977_ = lean_ctor_get(v_s_1974_, 0);
v_startInclusive_1978_ = lean_ctor_get(v_s_1974_, 1);
v_endExclusive_1979_ = lean_ctor_get(v_s_1974_, 2);
v___x_1980_ = lean_nat_sub(v_endExclusive_1979_, v_startInclusive_1978_);
v_decide_1981_ = lean_nat_dec_eq(v_a_1975_, v___x_1980_);
lean_dec(v___x_1980_);
if (v_decide_1981_ == 0)
{
uint32_t v___x_1982_; lean_object* v___x_1983_; uint32_t v___x_1984_; uint8_t v___x_1985_; 
v___x_1982_ = 64;
v___x_1983_ = lean_nat_add(v_startInclusive_1978_, v_a_1975_);
lean_dec(v_a_1975_);
v___x_1984_ = lean_string_utf8_get_fast(v_str_1977_, v___x_1983_);
v___x_1985_ = lean_uint32_dec_eq(v___x_1984_, v___x_1982_);
if (v___x_1985_ == 0)
{
lean_object* v___x_1986_; lean_object* v___x_1987_; 
v___x_1986_ = lean_string_utf8_next_fast(v_str_1977_, v___x_1983_);
lean_dec(v___x_1983_);
v___x_1987_ = lean_nat_sub(v___x_1986_, v_startInclusive_1978_);
v_a_1975_ = v___x_1987_;
v_b_1976_ = v___x_1985_;
goto _start;
}
else
{
lean_dec(v___x_1983_);
return v___x_1985_;
}
}
else
{
lean_dec(v_a_1975_);
return v_b_1976_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__2_spec__2___redArg___boxed(lean_object* v_s_1989_, lean_object* v_a_1990_, lean_object* v_b_1991_){
_start:
{
uint8_t v_b_boxed_1992_; uint8_t v_res_1993_; lean_object* v_r_1994_; 
v_b_boxed_1992_ = lean_unbox(v_b_1991_);
v_res_1993_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__2_spec__2___redArg(v_s_1989_, v_a_1990_, v_b_boxed_1992_);
lean_dec_ref(v_s_1989_);
v_r_1994_ = lean_box(v_res_1993_);
return v_r_1994_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__2(lean_object* v_s_1995_){
_start:
{
lean_object* v_searcher_1996_; uint8_t v___x_1997_; uint8_t v___x_1998_; 
v_searcher_1996_ = lean_unsigned_to_nat(0u);
v___x_1997_ = 0;
v___x_1998_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__2_spec__2___redArg(v_s_1995_, v_searcher_1996_, v___x_1997_);
return v___x_1998_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__2___boxed(lean_object* v_s_1999_){
_start:
{
uint8_t v_res_2000_; lean_object* v_r_2001_; 
v_res_2000_ = l_String_Slice_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__2(v_s_1999_);
lean_dec_ref(v_s_1999_);
v_r_2001_ = lean_box(v_res_2000_);
return v_r_2001_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax___closed__3(void){
_start:
{
lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; 
v___x_2005_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax___closed__2));
v___x_2006_ = lean_unsigned_to_nat(14u);
v___x_2007_ = lean_unsigned_to_nat(22u);
v___x_2008_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax___closed__1));
v___x_2009_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax___closed__0));
v___x_2010_ = l_mkPanicMessageWithDecl(v___x_2009_, v___x_2008_, v___x_2007_, v___x_2006_, v___x_2005_);
return v___x_2010_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax(lean_object* v_x_2011_){
_start:
{
switch(lean_obj_tag(v_x_2011_))
{
case 1:
{
lean_object* v_info_2012_; lean_object* v_kind_2013_; lean_object* v_args_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2026_; 
v_info_2012_ = lean_ctor_get(v_x_2011_, 0);
v_kind_2013_ = lean_ctor_get(v_x_2011_, 1);
v_args_2014_ = lean_ctor_get(v_x_2011_, 2);
v_isSharedCheck_2026_ = !lean_is_exclusive(v_x_2011_);
if (v_isSharedCheck_2026_ == 0)
{
v___x_2016_ = v_x_2011_;
v_isShared_2017_ = v_isSharedCheck_2026_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_args_2014_);
lean_inc(v_kind_2013_);
lean_inc(v_info_2012_);
lean_dec(v_x_2011_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2026_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
size_t v_sz_2018_; size_t v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2024_; 
v_sz_2018_ = lean_array_size(v_args_2014_);
v___x_2019_ = ((size_t)0ULL);
v___x_2020_ = l_unsafeCast___redArg(v_args_2014_);
lean_dec_ref(v_args_2014_);
v___x_2021_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__0(v_sz_2018_, v___x_2019_, v___x_2020_);
v___x_2022_ = l_unsafeCast___redArg(v___x_2021_);
lean_dec_ref(v___x_2021_);
if (v_isShared_2017_ == 0)
{
lean_ctor_set(v___x_2016_, 2, v___x_2022_);
v___x_2024_ = v___x_2016_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v_info_2012_);
lean_ctor_set(v_reuseFailAlloc_2025_, 1, v_kind_2013_);
lean_ctor_set(v_reuseFailAlloc_2025_, 2, v___x_2022_);
v___x_2024_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
return v___x_2024_;
}
}
}
case 3:
{
lean_object* v_info_2027_; lean_object* v_rawVal_2028_; lean_object* v_val_2029_; lean_object* v_preresolved_2030_; uint8_t v___y_2032_; lean_object* v_str_2045_; lean_object* v_startPos_2046_; lean_object* v_stopPos_2047_; uint8_t v___y_2049_; uint8_t v___x_2055_; uint8_t v___y_2057_; uint8_t v___x_2058_; 
v_info_2027_ = lean_ctor_get(v_x_2011_, 0);
v_rawVal_2028_ = lean_ctor_get(v_x_2011_, 1);
v_val_2029_ = lean_ctor_get(v_x_2011_, 2);
v_preresolved_2030_ = lean_ctor_get(v_x_2011_, 3);
v_str_2045_ = lean_ctor_get(v_rawVal_2028_, 0);
v_startPos_2046_ = lean_ctor_get(v_rawVal_2028_, 1);
v_stopPos_2047_ = lean_ctor_get(v_rawVal_2028_, 2);
v___x_2055_ = lean_string_is_valid_pos(v_str_2045_, v_startPos_2046_);
v___x_2058_ = lean_string_is_valid_pos(v_str_2045_, v_stopPos_2047_);
if (v___x_2058_ == 0)
{
v___y_2057_ = v___x_2058_;
goto v___jp_2056_;
}
else
{
uint8_t v___x_2059_; 
v___x_2059_ = lean_nat_dec_le(v_startPos_2046_, v_stopPos_2047_);
v___y_2057_ = v___x_2059_;
goto v___jp_2056_;
}
v___jp_2031_:
{
if (v___y_2032_ == 0)
{
lean_object* v___x_2034_; uint8_t v_isShared_2035_; uint8_t v_isSharedCheck_2040_; 
lean_inc(v_preresolved_2030_);
lean_inc(v_val_2029_);
lean_inc_ref(v_rawVal_2028_);
lean_inc(v_info_2027_);
v_isSharedCheck_2040_ = !lean_is_exclusive(v_x_2011_);
if (v_isSharedCheck_2040_ == 0)
{
lean_object* v_unused_2041_; lean_object* v_unused_2042_; lean_object* v_unused_2043_; lean_object* v_unused_2044_; 
v_unused_2041_ = lean_ctor_get(v_x_2011_, 3);
lean_dec(v_unused_2041_);
v_unused_2042_ = lean_ctor_get(v_x_2011_, 2);
lean_dec(v_unused_2042_);
v_unused_2043_ = lean_ctor_get(v_x_2011_, 1);
lean_dec(v_unused_2043_);
v_unused_2044_ = lean_ctor_get(v_x_2011_, 0);
lean_dec(v_unused_2044_);
v___x_2034_ = v_x_2011_;
v_isShared_2035_ = v_isSharedCheck_2040_;
goto v_resetjp_2033_;
}
else
{
lean_dec(v_x_2011_);
v___x_2034_ = lean_box(0);
v_isShared_2035_ = v_isSharedCheck_2040_;
goto v_resetjp_2033_;
}
v_resetjp_2033_:
{
lean_object* v___x_2036_; lean_object* v___x_2038_; 
v___x_2036_ = l_Lean_Name_eraseMacroScopes(v_val_2029_);
lean_dec(v_val_2029_);
if (v_isShared_2035_ == 0)
{
lean_ctor_set(v___x_2034_, 2, v___x_2036_);
v___x_2038_ = v___x_2034_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v_info_2027_);
lean_ctor_set(v_reuseFailAlloc_2039_, 1, v_rawVal_2028_);
lean_ctor_set(v_reuseFailAlloc_2039_, 2, v___x_2036_);
lean_ctor_set(v_reuseFailAlloc_2039_, 3, v_preresolved_2030_);
v___x_2038_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
return v___x_2038_;
}
}
}
else
{
return v_x_2011_;
}
}
v___jp_2048_:
{
if (v___y_2049_ == 0)
{
lean_object* v___x_2050_; lean_object* v___x_2051_; uint8_t v___x_2052_; 
v___x_2050_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax___closed__3, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax___closed__3);
v___x_2051_ = l_panic___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__1(v___x_2050_);
v___x_2052_ = l_String_Slice_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__2(v___x_2051_);
lean_dec_ref(v___x_2051_);
v___y_2032_ = v___x_2052_;
goto v___jp_2031_;
}
else
{
lean_object* v___x_2053_; uint8_t v___x_2054_; 
lean_inc(v_stopPos_2047_);
lean_inc(v_startPos_2046_);
lean_inc_ref(v_str_2045_);
v___x_2053_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2053_, 0, v_str_2045_);
lean_ctor_set(v___x_2053_, 1, v_startPos_2046_);
lean_ctor_set(v___x_2053_, 2, v_stopPos_2047_);
v___x_2054_ = l_String_Slice_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__2(v___x_2053_);
lean_dec_ref_known(v___x_2053_, 3);
v___y_2032_ = v___x_2054_;
goto v___jp_2031_;
}
}
v___jp_2056_:
{
if (v___x_2055_ == 0)
{
v___y_2049_ = v___x_2055_;
goto v___jp_2048_;
}
else
{
v___y_2049_ = v___y_2057_;
goto v___jp_2048_;
}
}
}
default: 
{
return v_x_2011_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__0(size_t v_sz_2060_, size_t v_i_2061_, lean_object* v_bs_2062_){
_start:
{
uint8_t v___x_2063_; 
v___x_2063_ = lean_usize_dec_lt(v_i_2061_, v_sz_2060_);
if (v___x_2063_ == 0)
{
lean_object* v___x_2064_; 
v___x_2064_ = l_unsafeCast___redArg(v_bs_2062_);
lean_dec_ref(v_bs_2062_);
return v___x_2064_;
}
else
{
lean_object* v_v_2065_; lean_object* v___x_2066_; lean_object* v_bs_x27_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; size_t v___x_2070_; size_t v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; 
v_v_2065_ = lean_array_uget(v_bs_2062_, v_i_2061_);
v___x_2066_ = lean_unsigned_to_nat(0u);
v_bs_x27_2067_ = lean_array_uset(v_bs_2062_, v_i_2061_, v___x_2066_);
v___x_2068_ = l_unsafeCast___redArg(v_v_2065_);
lean_dec(v_v_2065_);
v___x_2069_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax(v___x_2068_);
v___x_2070_ = ((size_t)1ULL);
v___x_2071_ = lean_usize_add(v_i_2061_, v___x_2070_);
v___x_2072_ = l_unsafeCast___redArg(v___x_2069_);
lean_dec(v___x_2069_);
v___x_2073_ = lean_array_uset(v_bs_x27_2067_, v_i_2061_, v___x_2072_);
v_i_2061_ = v___x_2071_;
v_bs_2062_ = v___x_2073_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__0___boxed(lean_object* v_sz_2075_, lean_object* v_i_2076_, lean_object* v_bs_2077_){
_start:
{
size_t v_sz_boxed_2078_; size_t v_i_boxed_2079_; lean_object* v_res_2080_; 
v_sz_boxed_2078_ = lean_unbox_usize(v_sz_2075_);
lean_dec(v_sz_2075_);
v_i_boxed_2079_ = lean_unbox_usize(v_i_2076_);
lean_dec(v_i_2076_);
v_res_2080_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__0(v_sz_boxed_2078_, v_i_boxed_2079_, v_bs_2077_);
return v_res_2080_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__2_spec__2(lean_object* v_s_2081_, lean_object* v_inst_2082_, lean_object* v_R_2083_, lean_object* v_a_2084_, uint8_t v_b_2085_, lean_object* v_c_2086_){
_start:
{
uint8_t v___x_2087_; 
v___x_2087_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__2_spec__2___redArg(v_s_2081_, v_a_2084_, v_b_2085_);
return v___x_2087_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__2_spec__2___boxed(lean_object* v_s_2088_, lean_object* v_inst_2089_, lean_object* v_R_2090_, lean_object* v_a_2091_, lean_object* v_b_2092_, lean_object* v_c_2093_){
_start:
{
uint8_t v_b_boxed_2094_; uint8_t v_res_2095_; lean_object* v_r_2096_; 
v_b_boxed_2094_ = lean_unbox(v_b_2092_);
v_res_2095_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_spec__2_spec__2(v_s_2088_, v_inst_2089_, v_R_2090_, v_a_2091_, v_b_boxed_2094_, v_c_2093_);
lean_dec_ref(v_s_2088_);
v_r_2096_ = lean_box(v_res_2095_);
return v_r_2096_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_match__1_splitter___redArg(lean_object* v_x_2097_, lean_object* v_h__1_2098_, lean_object* v_h__2_2099_, lean_object* v_h__3_2100_, lean_object* v_h__4_2101_){
_start:
{
switch(lean_obj_tag(v_x_2097_))
{
case 0:
{
lean_object* v___x_2102_; lean_object* v___x_2103_; 
lean_dec(v_h__3_2100_);
lean_dec(v_h__2_2099_);
lean_dec(v_h__1_2098_);
v___x_2102_ = lean_box(0);
v___x_2103_ = lean_apply_1(v_h__4_2101_, v___x_2102_);
return v___x_2103_;
}
case 1:
{
lean_object* v_info_2104_; lean_object* v_kind_2105_; lean_object* v_args_2106_; lean_object* v___x_2107_; 
lean_dec(v_h__4_2101_);
lean_dec(v_h__3_2100_);
lean_dec(v_h__1_2098_);
v_info_2104_ = lean_ctor_get(v_x_2097_, 0);
lean_inc(v_info_2104_);
v_kind_2105_ = lean_ctor_get(v_x_2097_, 1);
lean_inc(v_kind_2105_);
v_args_2106_ = lean_ctor_get(v_x_2097_, 2);
lean_inc_ref(v_args_2106_);
lean_dec_ref_known(v_x_2097_, 3);
v___x_2107_ = lean_apply_3(v_h__2_2099_, v_info_2104_, v_kind_2105_, v_args_2106_);
return v___x_2107_;
}
case 2:
{
lean_object* v_info_2108_; lean_object* v_val_2109_; lean_object* v___x_2110_; 
lean_dec(v_h__4_2101_);
lean_dec(v_h__2_2099_);
lean_dec(v_h__1_2098_);
v_info_2108_ = lean_ctor_get(v_x_2097_, 0);
lean_inc(v_info_2108_);
v_val_2109_ = lean_ctor_get(v_x_2097_, 1);
lean_inc_ref(v_val_2109_);
lean_dec_ref_known(v_x_2097_, 2);
v___x_2110_ = lean_apply_2(v_h__3_2100_, v_info_2108_, v_val_2109_);
return v___x_2110_;
}
default: 
{
lean_object* v_info_2111_; lean_object* v_rawVal_2112_; lean_object* v_val_2113_; lean_object* v_preresolved_2114_; lean_object* v___x_2115_; 
lean_dec(v_h__4_2101_);
lean_dec(v_h__3_2100_);
lean_dec(v_h__2_2099_);
v_info_2111_ = lean_ctor_get(v_x_2097_, 0);
lean_inc(v_info_2111_);
v_rawVal_2112_ = lean_ctor_get(v_x_2097_, 1);
lean_inc_ref(v_rawVal_2112_);
v_val_2113_ = lean_ctor_get(v_x_2097_, 2);
lean_inc(v_val_2113_);
v_preresolved_2114_ = lean_ctor_get(v_x_2097_, 3);
lean_inc(v_preresolved_2114_);
lean_dec_ref_known(v_x_2097_, 4);
v___x_2115_ = lean_apply_4(v_h__1_2098_, v_info_2111_, v_rawVal_2112_, v_val_2113_, v_preresolved_2114_);
return v___x_2115_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax_match__1_splitter(lean_object* v_motive_2116_, lean_object* v_x_2117_, lean_object* v_h__1_2118_, lean_object* v_h__2_2119_, lean_object* v_h__3_2120_, lean_object* v_h__4_2121_){
_start:
{
switch(lean_obj_tag(v_x_2117_))
{
case 0:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; 
lean_dec(v_h__3_2120_);
lean_dec(v_h__2_2119_);
lean_dec(v_h__1_2118_);
v___x_2122_ = lean_box(0);
v___x_2123_ = lean_apply_1(v_h__4_2121_, v___x_2122_);
return v___x_2123_;
}
case 1:
{
lean_object* v_info_2124_; lean_object* v_kind_2125_; lean_object* v_args_2126_; lean_object* v___x_2127_; 
lean_dec(v_h__4_2121_);
lean_dec(v_h__3_2120_);
lean_dec(v_h__1_2118_);
v_info_2124_ = lean_ctor_get(v_x_2117_, 0);
lean_inc(v_info_2124_);
v_kind_2125_ = lean_ctor_get(v_x_2117_, 1);
lean_inc(v_kind_2125_);
v_args_2126_ = lean_ctor_get(v_x_2117_, 2);
lean_inc_ref(v_args_2126_);
lean_dec_ref_known(v_x_2117_, 3);
v___x_2127_ = lean_apply_3(v_h__2_2119_, v_info_2124_, v_kind_2125_, v_args_2126_);
return v___x_2127_;
}
case 2:
{
lean_object* v_info_2128_; lean_object* v_val_2129_; lean_object* v___x_2130_; 
lean_dec(v_h__4_2121_);
lean_dec(v_h__2_2119_);
lean_dec(v_h__1_2118_);
v_info_2128_ = lean_ctor_get(v_x_2117_, 0);
lean_inc(v_info_2128_);
v_val_2129_ = lean_ctor_get(v_x_2117_, 1);
lean_inc_ref(v_val_2129_);
lean_dec_ref_known(v_x_2117_, 2);
v___x_2130_ = lean_apply_2(v_h__3_2120_, v_info_2128_, v_val_2129_);
return v___x_2130_;
}
default: 
{
lean_object* v_info_2131_; lean_object* v_rawVal_2132_; lean_object* v_val_2133_; lean_object* v_preresolved_2134_; lean_object* v___x_2135_; 
lean_dec(v_h__4_2121_);
lean_dec(v_h__3_2120_);
lean_dec(v_h__2_2119_);
v_info_2131_ = lean_ctor_get(v_x_2117_, 0);
lean_inc(v_info_2131_);
v_rawVal_2132_ = lean_ctor_get(v_x_2117_, 1);
lean_inc_ref(v_rawVal_2132_);
v_val_2133_ = lean_ctor_get(v_x_2117_, 2);
lean_inc(v_val_2133_);
v_preresolved_2134_ = lean_ctor_get(v_x_2117_, 3);
lean_inc(v_preresolved_2134_);
lean_dec_ref_known(v_x_2117_, 4);
v___x_2135_ = lean_apply_4(v_h__1_2118_, v_info_2131_, v_rawVal_2132_, v_val_2133_, v_preresolved_2134_);
return v___x_2135_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Array_map__unattach_match__1_splitter___redArg(lean_object* v_x_2136_, lean_object* v_h__1_2137_){
_start:
{
lean_object* v___x_2138_; 
v___x_2138_ = lean_apply_2(v_h__1_2137_, v_x_2136_, lean_box(0));
return v___x_2138_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Array_map__unattach_match__1_splitter(lean_object* v_00_u03b1_2139_, lean_object* v_P_2140_, lean_object* v_motive_2141_, lean_object* v_x_2142_, lean_object* v_h__1_2143_){
_start:
{
lean_object* v___x_2144_; 
v___x_2144_ = lean_apply_2(v_h__1_2143_, v_x_2142_, lean_box(0));
return v___x_2144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromTSyntax___redArg(lean_object* v_syn_2145_){
_start:
{
lean_object* v___x_2146_; 
v___x_2146_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax(v_syn_2145_);
return v___x_2146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromTSyntax(lean_object* v_name_2147_, lean_object* v_syn_2148_){
_start:
{
lean_object* v___x_2149_; 
v___x_2149_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax(v_syn_2148_);
return v___x_2149_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromTSyntax___boxed(lean_object* v_name_2150_, lean_object* v_syn_2151_){
_start:
{
lean_object* v_res_2152_; 
v_res_2152_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromTSyntax(v_name_2150_, v_syn_2151_);
lean_dec(v_name_2150_);
return v_res_2152_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go(lean_object* v_e_2159_){
_start:
{
lean_object* v___x_2186_; lean_object* v___x_2187_; uint8_t v___x_2188_; 
v___x_2186_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go___closed__1));
v___x_2187_ = lean_unsigned_to_nat(2u);
v___x_2188_ = l_Lean_Expr_isAppOfArity(v_e_2159_, v___x_2186_, v___x_2187_);
if (v___x_2188_ == 0)
{
lean_object* v___x_2189_; lean_object* v___x_2190_; uint8_t v___x_2191_; 
v___x_2189_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkAnd___closed__1));
v___x_2190_ = lean_unsigned_to_nat(3u);
v___x_2191_ = l_Lean_Expr_isAppOfArity(v_e_2159_, v___x_2189_, v___x_2190_);
if (v___x_2191_ == 0)
{
lean_object* v___x_2192_; uint8_t v___x_2193_; 
v___x_2192_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr___closed__1));
v___x_2193_ = l_Lean_Expr_isAppOfArity(v_e_2159_, v___x_2192_, v___x_2190_);
if (v___x_2193_ == 0)
{
lean_object* v___x_2194_; uint8_t v___x_2195_; 
v___x_2194_ = ((lean_object*)(l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_revertFVarsInTypeExcept_spec__0___redArg___closed__1));
v___x_2195_ = l_Lean_Expr_isAppOfArity(v_e_2159_, v___x_2194_, v___x_2190_);
if (v___x_2195_ == 0)
{
goto v___jp_2160_;
}
else
{
lean_object* v___x_2196_; 
v___x_2196_ = l_Lean_Expr_appArg_x21(v_e_2159_);
if (lean_obj_tag(v___x_2196_) == 6)
{
lean_object* v_binderName_2197_; lean_object* v_binderType_2198_; lean_object* v_body_2199_; uint8_t v_binderInfo_2200_; lean_object* v___x_2201_; 
lean_dec_ref(v_e_2159_);
v_binderName_2197_ = lean_ctor_get(v___x_2196_, 0);
lean_inc(v_binderName_2197_);
v_binderType_2198_ = lean_ctor_get(v___x_2196_, 1);
lean_inc_ref(v_binderType_2198_);
v_body_2199_ = lean_ctor_get(v___x_2196_, 2);
lean_inc_ref(v_body_2199_);
v_binderInfo_2200_ = lean_ctor_get_uint8(v___x_2196_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v___x_2196_, 3);
v___x_2201_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go(v_body_2199_);
if (lean_obj_tag(v___x_2201_) == 0)
{
lean_dec_ref(v_binderType_2198_);
lean_dec(v_binderName_2197_);
return v___x_2201_;
}
else
{
lean_object* v_val_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2219_; 
v_val_2202_ = lean_ctor_get(v___x_2201_, 0);
v_isSharedCheck_2219_ = !lean_is_exclusive(v___x_2201_);
if (v_isSharedCheck_2219_ == 0)
{
v___x_2204_ = v___x_2201_;
v_isShared_2205_ = v_isSharedCheck_2219_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_val_2202_);
lean_dec(v___x_2201_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2219_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
lean_object* v_fst_2206_; lean_object* v_snd_2207_; lean_object* v___x_2209_; uint8_t v_isShared_2210_; uint8_t v_isSharedCheck_2218_; 
v_fst_2206_ = lean_ctor_get(v_val_2202_, 0);
v_snd_2207_ = lean_ctor_get(v_val_2202_, 1);
v_isSharedCheck_2218_ = !lean_is_exclusive(v_val_2202_);
if (v_isSharedCheck_2218_ == 0)
{
v___x_2209_ = v_val_2202_;
v_isShared_2210_ = v_isSharedCheck_2218_;
goto v_resetjp_2208_;
}
else
{
lean_inc(v_snd_2207_);
lean_inc(v_fst_2206_);
lean_dec(v_val_2202_);
v___x_2209_ = lean_box(0);
v_isShared_2210_ = v_isSharedCheck_2218_;
goto v_resetjp_2208_;
}
v_resetjp_2208_:
{
lean_object* v___x_2211_; lean_object* v___x_2213_; 
v___x_2211_ = l_Lean_mkForall(v_binderName_2197_, v_binderInfo_2200_, v_binderType_2198_, v_snd_2207_);
if (v_isShared_2210_ == 0)
{
lean_ctor_set(v___x_2209_, 1, v___x_2211_);
v___x_2213_ = v___x_2209_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v_fst_2206_);
lean_ctor_set(v_reuseFailAlloc_2217_, 1, v___x_2211_);
v___x_2213_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
lean_object* v___x_2215_; 
if (v_isShared_2205_ == 0)
{
lean_ctor_set(v___x_2204_, 0, v___x_2213_);
v___x_2215_ = v___x_2204_;
goto v_reusejp_2214_;
}
else
{
lean_object* v_reuseFailAlloc_2216_; 
v_reuseFailAlloc_2216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2216_, 0, v___x_2213_);
v___x_2215_ = v_reuseFailAlloc_2216_;
goto v_reusejp_2214_;
}
v_reusejp_2214_:
{
return v___x_2215_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_2196_);
goto v___jp_2160_;
}
}
}
else
{
lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; 
v___x_2220_ = l_Lean_Expr_appFn_x21(v_e_2159_);
v___x_2221_ = l_Lean_Expr_appArg_x21(v___x_2220_);
lean_dec_ref(v___x_2220_);
v___x_2222_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go(v___x_2221_);
if (lean_obj_tag(v___x_2222_) == 0)
{
lean_dec_ref(v_e_2159_);
return v___x_2222_;
}
else
{
lean_object* v_val_2223_; lean_object* v_snd_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; 
v_val_2223_ = lean_ctor_get(v___x_2222_, 0);
lean_inc(v_val_2223_);
lean_dec_ref_known(v___x_2222_, 1);
v_snd_2224_ = lean_ctor_get(v_val_2223_, 1);
lean_inc(v_snd_2224_);
lean_dec(v_val_2223_);
v___x_2225_ = l_Lean_Expr_appArg_x21(v_e_2159_);
lean_dec_ref(v_e_2159_);
v___x_2226_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go(v___x_2225_);
if (lean_obj_tag(v___x_2226_) == 0)
{
lean_dec(v_snd_2224_);
return v___x_2226_;
}
else
{
lean_object* v_val_2227_; lean_object* v___x_2229_; uint8_t v_isShared_2230_; uint8_t v_isSharedCheck_2244_; 
v_val_2227_ = lean_ctor_get(v___x_2226_, 0);
v_isSharedCheck_2244_ = !lean_is_exclusive(v___x_2226_);
if (v_isSharedCheck_2244_ == 0)
{
v___x_2229_ = v___x_2226_;
v_isShared_2230_ = v_isSharedCheck_2244_;
goto v_resetjp_2228_;
}
else
{
lean_inc(v_val_2227_);
lean_dec(v___x_2226_);
v___x_2229_ = lean_box(0);
v_isShared_2230_ = v_isSharedCheck_2244_;
goto v_resetjp_2228_;
}
v_resetjp_2228_:
{
lean_object* v_fst_2231_; lean_object* v_snd_2232_; lean_object* v___x_2234_; uint8_t v_isShared_2235_; uint8_t v_isSharedCheck_2243_; 
v_fst_2231_ = lean_ctor_get(v_val_2227_, 0);
v_snd_2232_ = lean_ctor_get(v_val_2227_, 1);
v_isSharedCheck_2243_ = !lean_is_exclusive(v_val_2227_);
if (v_isSharedCheck_2243_ == 0)
{
v___x_2234_ = v_val_2227_;
v_isShared_2235_ = v_isSharedCheck_2243_;
goto v_resetjp_2233_;
}
else
{
lean_inc(v_snd_2232_);
lean_inc(v_fst_2231_);
lean_dec(v_val_2227_);
v___x_2234_ = lean_box(0);
v_isShared_2235_ = v_isSharedCheck_2243_;
goto v_resetjp_2233_;
}
v_resetjp_2233_:
{
lean_object* v___x_2236_; lean_object* v___x_2238_; 
v___x_2236_ = l_Lean_mkOr(v_snd_2224_, v_snd_2232_);
if (v_isShared_2235_ == 0)
{
lean_ctor_set(v___x_2234_, 1, v___x_2236_);
v___x_2238_ = v___x_2234_;
goto v_reusejp_2237_;
}
else
{
lean_object* v_reuseFailAlloc_2242_; 
v_reuseFailAlloc_2242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2242_, 0, v_fst_2231_);
lean_ctor_set(v_reuseFailAlloc_2242_, 1, v___x_2236_);
v___x_2238_ = v_reuseFailAlloc_2242_;
goto v_reusejp_2237_;
}
v_reusejp_2237_:
{
lean_object* v___x_2240_; 
if (v_isShared_2230_ == 0)
{
lean_ctor_set(v___x_2229_, 0, v___x_2238_);
v___x_2240_ = v___x_2229_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v___x_2238_);
v___x_2240_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
return v___x_2240_;
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
lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; 
v___x_2245_ = l_Lean_Expr_appFn_x21(v_e_2159_);
v___x_2246_ = l_Lean_Expr_appArg_x21(v___x_2245_);
lean_dec_ref(v___x_2245_);
v___x_2247_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go(v___x_2246_);
if (lean_obj_tag(v___x_2247_) == 0)
{
lean_dec_ref(v_e_2159_);
return v___x_2247_;
}
else
{
lean_object* v_val_2248_; lean_object* v_snd_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; 
v_val_2248_ = lean_ctor_get(v___x_2247_, 0);
lean_inc(v_val_2248_);
lean_dec_ref_known(v___x_2247_, 1);
v_snd_2249_ = lean_ctor_get(v_val_2248_, 1);
lean_inc(v_snd_2249_);
lean_dec(v_val_2248_);
v___x_2250_ = l_Lean_Expr_appArg_x21(v_e_2159_);
lean_dec_ref(v_e_2159_);
v___x_2251_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go(v___x_2250_);
if (lean_obj_tag(v___x_2251_) == 0)
{
lean_dec(v_snd_2249_);
return v___x_2251_;
}
else
{
lean_object* v_val_2252_; lean_object* v___x_2254_; uint8_t v_isShared_2255_; uint8_t v_isSharedCheck_2269_; 
v_val_2252_ = lean_ctor_get(v___x_2251_, 0);
v_isSharedCheck_2269_ = !lean_is_exclusive(v___x_2251_);
if (v_isSharedCheck_2269_ == 0)
{
v___x_2254_ = v___x_2251_;
v_isShared_2255_ = v_isSharedCheck_2269_;
goto v_resetjp_2253_;
}
else
{
lean_inc(v_val_2252_);
lean_dec(v___x_2251_);
v___x_2254_ = lean_box(0);
v_isShared_2255_ = v_isSharedCheck_2269_;
goto v_resetjp_2253_;
}
v_resetjp_2253_:
{
lean_object* v_fst_2256_; lean_object* v_snd_2257_; lean_object* v___x_2259_; uint8_t v_isShared_2260_; uint8_t v_isSharedCheck_2268_; 
v_fst_2256_ = lean_ctor_get(v_val_2252_, 0);
v_snd_2257_ = lean_ctor_get(v_val_2252_, 1);
v_isSharedCheck_2268_ = !lean_is_exclusive(v_val_2252_);
if (v_isSharedCheck_2268_ == 0)
{
v___x_2259_ = v_val_2252_;
v_isShared_2260_ = v_isSharedCheck_2268_;
goto v_resetjp_2258_;
}
else
{
lean_inc(v_snd_2257_);
lean_inc(v_fst_2256_);
lean_dec(v_val_2252_);
v___x_2259_ = lean_box(0);
v_isShared_2260_ = v_isSharedCheck_2268_;
goto v_resetjp_2258_;
}
v_resetjp_2258_:
{
lean_object* v___x_2261_; lean_object* v___x_2263_; 
v___x_2261_ = l_Lean_mkAnd(v_snd_2249_, v_snd_2257_);
if (v_isShared_2260_ == 0)
{
lean_ctor_set(v___x_2259_, 1, v___x_2261_);
v___x_2263_ = v___x_2259_;
goto v_reusejp_2262_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v_fst_2256_);
lean_ctor_set(v_reuseFailAlloc_2267_, 1, v___x_2261_);
v___x_2263_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2262_;
}
v_reusejp_2262_:
{
lean_object* v___x_2265_; 
if (v_isShared_2255_ == 0)
{
lean_ctor_set(v___x_2254_, 0, v___x_2263_);
v___x_2265_ = v___x_2254_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2266_; 
v_reuseFailAlloc_2266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2266_, 0, v___x_2263_);
v___x_2265_ = v_reuseFailAlloc_2266_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
return v___x_2265_;
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
lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; 
v___x_2270_ = l_Lean_instInhabitedLevel;
v___x_2271_ = l_Lean_Expr_getAppFn(v_e_2159_);
v___x_2272_ = l_Lean_Expr_constLevels_x21(v___x_2271_);
lean_dec_ref(v___x_2271_);
v___x_2273_ = lean_unsigned_to_nat(0u);
v___x_2274_ = l_List_get_x21Internal___redArg(v___x_2270_, v___x_2272_, v___x_2273_);
lean_dec(v___x_2272_);
v___x_2275_ = lean_unsigned_to_nat(1u);
v___x_2276_ = l_Lean_Expr_getAppNumArgs(v_e_2159_);
v___x_2277_ = lean_nat_sub(v___x_2276_, v___x_2275_);
lean_dec(v___x_2276_);
v___x_2278_ = lean_nat_sub(v___x_2277_, v___x_2275_);
lean_dec(v___x_2277_);
v___x_2279_ = l_Lean_Expr_getRevArg_x21(v_e_2159_, v___x_2278_);
lean_dec_ref(v_e_2159_);
v___x_2280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2280_, 0, v___x_2274_);
lean_ctor_set(v___x_2280_, 1, v___x_2279_);
v___x_2281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2281_, 0, v___x_2280_);
return v___x_2281_;
}
v___jp_2160_:
{
if (lean_obj_tag(v_e_2159_) == 8)
{
lean_object* v_declName_2161_; lean_object* v_type_2162_; lean_object* v_value_2163_; lean_object* v_body_2164_; uint8_t v_nondep_2165_; lean_object* v___x_2166_; 
v_declName_2161_ = lean_ctor_get(v_e_2159_, 0);
lean_inc(v_declName_2161_);
v_type_2162_ = lean_ctor_get(v_e_2159_, 1);
lean_inc_ref(v_type_2162_);
v_value_2163_ = lean_ctor_get(v_e_2159_, 2);
lean_inc_ref(v_value_2163_);
v_body_2164_ = lean_ctor_get(v_e_2159_, 3);
lean_inc_ref(v_body_2164_);
v_nondep_2165_ = lean_ctor_get_uint8(v_e_2159_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_2159_, 4);
v___x_2166_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go(v_body_2164_);
if (lean_obj_tag(v___x_2166_) == 0)
{
lean_dec_ref(v_value_2163_);
lean_dec_ref(v_type_2162_);
lean_dec(v_declName_2161_);
return v___x_2166_;
}
else
{
lean_object* v_val_2167_; lean_object* v___x_2169_; uint8_t v_isShared_2170_; uint8_t v_isSharedCheck_2184_; 
v_val_2167_ = lean_ctor_get(v___x_2166_, 0);
v_isSharedCheck_2184_ = !lean_is_exclusive(v___x_2166_);
if (v_isSharedCheck_2184_ == 0)
{
v___x_2169_ = v___x_2166_;
v_isShared_2170_ = v_isSharedCheck_2184_;
goto v_resetjp_2168_;
}
else
{
lean_inc(v_val_2167_);
lean_dec(v___x_2166_);
v___x_2169_ = lean_box(0);
v_isShared_2170_ = v_isSharedCheck_2184_;
goto v_resetjp_2168_;
}
v_resetjp_2168_:
{
lean_object* v_fst_2171_; lean_object* v_snd_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2183_; 
v_fst_2171_ = lean_ctor_get(v_val_2167_, 0);
v_snd_2172_ = lean_ctor_get(v_val_2167_, 1);
v_isSharedCheck_2183_ = !lean_is_exclusive(v_val_2167_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2174_ = v_val_2167_;
v_isShared_2175_ = v_isSharedCheck_2183_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_snd_2172_);
lean_inc(v_fst_2171_);
lean_dec(v_val_2167_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2183_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v___x_2176_; lean_object* v___x_2178_; 
v___x_2176_ = l_Lean_Expr_letE___override(v_declName_2161_, v_type_2162_, v_value_2163_, v_snd_2172_, v_nondep_2165_);
if (v_isShared_2175_ == 0)
{
lean_ctor_set(v___x_2174_, 1, v___x_2176_);
v___x_2178_ = v___x_2174_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v_fst_2171_);
lean_ctor_set(v_reuseFailAlloc_2182_, 1, v___x_2176_);
v___x_2178_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
lean_object* v___x_2180_; 
if (v_isShared_2170_ == 0)
{
lean_ctor_set(v___x_2169_, 0, v___x_2178_);
v___x_2180_ = v___x_2169_;
goto v_reusejp_2179_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v___x_2178_);
v___x_2180_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2179_;
}
v_reusejp_2179_:
{
return v___x_2180_;
}
}
}
}
}
}
else
{
lean_object* v___x_2185_; 
lean_dec_ref(v_e_2159_);
v___x_2185_ = lean_box(0);
return v___x_2185_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure(lean_object* v_e_2282_){
_start:
{
lean_object* v___x_2283_; 
lean_inc_ref(v_e_2282_);
v___x_2283_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure_go(v_e_2282_);
if (lean_obj_tag(v___x_2283_) == 0)
{
return v_e_2282_;
}
else
{
lean_object* v_val_2284_; lean_object* v_fst_2285_; lean_object* v_snd_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; 
lean_dec_ref(v_e_2282_);
v_val_2284_ = lean_ctor_get(v___x_2283_, 0);
lean_inc(v_val_2284_);
lean_dec_ref_known(v___x_2283_, 1);
v_fst_2285_ = lean_ctor_get(v_val_2284_, 0);
lean_inc_n(v_fst_2285_, 2);
v_snd_2286_ = lean_ctor_get(v_val_2284_, 1);
lean_inc(v_snd_2286_);
lean_dec(v_val_2284_);
v___x_2287_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkNil(v_fst_2285_);
v___x_2288_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(v_fst_2285_, v___x_2287_, v_snd_2286_);
return v___x_2288_;
}
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6(void){
_start:
{
lean_object* v___x_2299_; 
v___x_2299_ = l_Array_mkArray0___redArg();
return v___x_2299_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__24(void){
_start:
{
lean_object* v___x_2337_; lean_object* v___x_2338_; 
v___x_2337_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__23));
v___x_2338_ = l_String_toRawSubstring_x27(v___x_2337_);
return v___x_2338_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__30(void){
_start:
{
lean_object* v___x_2354_; lean_object* v___x_2355_; 
v___x_2354_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__29));
v___x_2355_ = l_String_toRawSubstring_x27(v___x_2354_);
return v___x_2355_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions(lean_object* v_handlers_2370_, lean_object* v_default_2371_, lean_object* v_a_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_, lean_object* v_a_2375_){
_start:
{
lean_object* v___x_2377_; lean_object* v_handlers_2378_; 
v___x_2377_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__0));
v_handlers_2378_ = l_Lean_Syntax_TSepArray_ofElems___redArg(v___x_2377_, v_handlers_2370_);
switch(lean_obj_tag(v_default_2371_))
{
case 0:
{
lean_object* v_ref_2379_; uint8_t v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; 
v_ref_2379_ = lean_ctor_get(v_a_2374_, 2);
v___x_2380_ = 0;
v___x_2381_ = l_Lean_SourceInfo_fromRef(v_ref_2379_, v___x_2380_);
v___x_2382_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__2));
v___x_2383_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__3));
lean_inc_n(v___x_2381_, 3);
v___x_2384_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2384_, 0, v___x_2381_);
lean_ctor_set(v___x_2384_, 1, v___x_2383_);
v___x_2385_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_2386_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
v___x_2387_ = l_Array_append___redArg(v___x_2386_, v_handlers_2378_);
lean_dec_ref(v_handlers_2378_);
v___x_2388_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2388_, 0, v___x_2381_);
lean_ctor_set(v___x_2388_, 1, v___x_2385_);
lean_ctor_set(v___x_2388_, 2, v___x_2387_);
v___x_2389_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7));
v___x_2390_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2390_, 0, v___x_2381_);
lean_ctor_set(v___x_2390_, 1, v___x_2389_);
v___x_2391_ = l_Lean_Syntax_node3(v___x_2381_, v___x_2382_, v___x_2384_, v___x_2388_, v___x_2390_);
v___x_2392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2392_, 0, v___x_2391_);
return v___x_2392_;
}
case 1:
{
lean_object* v_toCold_2393_; lean_object* v_ref_2394_; lean_object* v_quotContext_2395_; lean_object* v_currMacroScope_2396_; uint8_t v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; 
v_toCold_2393_ = lean_ctor_get(v_a_2374_, 0);
v_ref_2394_ = lean_ctor_get(v_a_2374_, 2);
v_quotContext_2395_ = lean_ctor_get(v_toCold_2393_, 8);
v_currMacroScope_2396_ = lean_ctor_get(v_toCold_2393_, 9);
v___x_2397_ = 0;
v___x_2398_ = l_Lean_SourceInfo_fromRef(v_ref_2394_, v___x_2397_);
v___x_2399_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12));
v___x_2400_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__13));
lean_inc_n(v___x_2398_, 12);
v___x_2401_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2401_, 0, v___x_2398_);
lean_ctor_set(v___x_2401_, 1, v___x_2400_);
v___x_2402_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15));
v___x_2403_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17));
v___x_2404_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_2405_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__18));
v___x_2406_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19));
v___x_2407_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2407_, 0, v___x_2398_);
lean_ctor_set(v___x_2407_, 1, v___x_2405_);
v___x_2408_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21));
v___x_2409_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__22));
v___x_2410_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2410_, 0, v___x_2398_);
lean_ctor_set(v___x_2410_, 1, v___x_2409_);
v___x_2411_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
v___x_2412_ = l_Array_append___redArg(v___x_2411_, v_handlers_2378_);
lean_dec_ref(v_handlers_2378_);
v___x_2413_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2413_, 0, v___x_2398_);
lean_ctor_set(v___x_2413_, 1, v___x_2377_);
v___x_2414_ = lean_array_push(v___x_2412_, v___x_2413_);
v___x_2415_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__24, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__24_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__24);
v___x_2416_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__25));
lean_inc(v_currMacroScope_2396_);
lean_inc(v_quotContext_2395_);
v___x_2417_ = l_Lean_addMacroScope(v_quotContext_2395_, v___x_2416_, v_currMacroScope_2396_);
v___x_2418_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__28));
v___x_2419_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2419_, 0, v___x_2398_);
lean_ctor_set(v___x_2419_, 1, v___x_2415_);
lean_ctor_set(v___x_2419_, 2, v___x_2417_);
lean_ctor_set(v___x_2419_, 3, v___x_2418_);
v___x_2420_ = lean_array_push(v___x_2414_, v___x_2419_);
v___x_2421_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2421_, 0, v___x_2398_);
lean_ctor_set(v___x_2421_, 1, v___x_2404_);
lean_ctor_set(v___x_2421_, 2, v___x_2420_);
v___x_2422_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7));
v___x_2423_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2423_, 0, v___x_2398_);
lean_ctor_set(v___x_2423_, 1, v___x_2422_);
v___x_2424_ = l_Lean_Syntax_node3(v___x_2398_, v___x_2408_, v___x_2410_, v___x_2421_, v___x_2423_);
v___x_2425_ = l_Lean_Syntax_node2(v___x_2398_, v___x_2406_, v___x_2407_, v___x_2424_);
v___x_2426_ = l_Lean_Syntax_node1(v___x_2398_, v___x_2404_, v___x_2425_);
v___x_2427_ = l_Lean_Syntax_node1(v___x_2398_, v___x_2403_, v___x_2426_);
v___x_2428_ = l_Lean_Syntax_node1(v___x_2398_, v___x_2402_, v___x_2427_);
v___x_2429_ = l_Lean_Syntax_node2(v___x_2398_, v___x_2399_, v___x_2401_, v___x_2428_);
v___x_2430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2430_, 0, v___x_2429_);
return v___x_2430_;
}
case 2:
{
lean_object* v_toCold_2431_; lean_object* v_ref_2432_; lean_object* v_quotContext_2433_; lean_object* v_currMacroScope_2434_; uint8_t v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; 
v_toCold_2431_ = lean_ctor_get(v_a_2374_, 0);
v_ref_2432_ = lean_ctor_get(v_a_2374_, 2);
v_quotContext_2433_ = lean_ctor_get(v_toCold_2431_, 8);
v_currMacroScope_2434_ = lean_ctor_get(v_toCold_2431_, 9);
v___x_2435_ = 0;
v___x_2436_ = l_Lean_SourceInfo_fromRef(v_ref_2432_, v___x_2435_);
v___x_2437_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12));
v___x_2438_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__13));
lean_inc_n(v___x_2436_, 12);
v___x_2439_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2439_, 0, v___x_2436_);
lean_ctor_set(v___x_2439_, 1, v___x_2438_);
v___x_2440_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15));
v___x_2441_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17));
v___x_2442_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_2443_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__18));
v___x_2444_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19));
v___x_2445_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2445_, 0, v___x_2436_);
lean_ctor_set(v___x_2445_, 1, v___x_2443_);
v___x_2446_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21));
v___x_2447_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__22));
v___x_2448_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2448_, 0, v___x_2436_);
lean_ctor_set(v___x_2448_, 1, v___x_2447_);
v___x_2449_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
v___x_2450_ = l_Array_append___redArg(v___x_2449_, v_handlers_2378_);
lean_dec_ref(v_handlers_2378_);
v___x_2451_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2451_, 0, v___x_2436_);
lean_ctor_set(v___x_2451_, 1, v___x_2377_);
v___x_2452_ = lean_array_push(v___x_2450_, v___x_2451_);
v___x_2453_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__30, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__30_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__30);
v___x_2454_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__31));
lean_inc(v_currMacroScope_2434_);
lean_inc(v_quotContext_2433_);
v___x_2455_ = l_Lean_addMacroScope(v_quotContext_2433_, v___x_2454_, v_currMacroScope_2434_);
v___x_2456_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__34));
v___x_2457_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2457_, 0, v___x_2436_);
lean_ctor_set(v___x_2457_, 1, v___x_2453_);
lean_ctor_set(v___x_2457_, 2, v___x_2455_);
lean_ctor_set(v___x_2457_, 3, v___x_2456_);
v___x_2458_ = lean_array_push(v___x_2452_, v___x_2457_);
v___x_2459_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2459_, 0, v___x_2436_);
lean_ctor_set(v___x_2459_, 1, v___x_2442_);
lean_ctor_set(v___x_2459_, 2, v___x_2458_);
v___x_2460_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7));
v___x_2461_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2461_, 0, v___x_2436_);
lean_ctor_set(v___x_2461_, 1, v___x_2460_);
v___x_2462_ = l_Lean_Syntax_node3(v___x_2436_, v___x_2446_, v___x_2448_, v___x_2459_, v___x_2461_);
v___x_2463_ = l_Lean_Syntax_node2(v___x_2436_, v___x_2444_, v___x_2445_, v___x_2462_);
v___x_2464_ = l_Lean_Syntax_node1(v___x_2436_, v___x_2442_, v___x_2463_);
v___x_2465_ = l_Lean_Syntax_node1(v___x_2436_, v___x_2441_, v___x_2464_);
v___x_2466_ = l_Lean_Syntax_node1(v___x_2436_, v___x_2440_, v___x_2465_);
v___x_2467_ = l_Lean_Syntax_node2(v___x_2436_, v___x_2437_, v___x_2439_, v___x_2466_);
v___x_2468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2468_, 0, v___x_2467_);
return v___x_2468_;
}
default: 
{
lean_object* v_e_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; 
v_e_2469_ = lean_ctor_get(v_default_2371_, 0);
lean_inc_ref(v_e_2469_);
lean_dec_ref_known(v_default_2371_, 1);
v___x_2470_ = lean_box(1);
v___x_2471_ = l_Lean_PrettyPrinter_delab(v_e_2469_, v___x_2470_, v_a_2372_, v_a_2373_, v_a_2374_, v_a_2375_);
if (lean_obj_tag(v___x_2471_) == 0)
{
lean_object* v_a_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2508_; 
v_a_2472_ = lean_ctor_get(v___x_2471_, 0);
v_isSharedCheck_2508_ = !lean_is_exclusive(v___x_2471_);
if (v_isSharedCheck_2508_ == 0)
{
v___x_2474_ = v___x_2471_;
v_isShared_2475_ = v_isSharedCheck_2508_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_a_2472_);
lean_dec(v___x_2471_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2508_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v_ref_2476_; uint8_t v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2506_; 
v_ref_2476_ = lean_ctor_get(v_a_2374_, 2);
v___x_2477_ = 0;
v___x_2478_ = l_Lean_SourceInfo_fromRef(v_ref_2476_, v___x_2477_);
v___x_2479_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__12));
v___x_2480_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__13));
lean_inc_n(v___x_2478_, 11);
v___x_2481_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2481_, 0, v___x_2478_);
lean_ctor_set(v___x_2481_, 1, v___x_2480_);
v___x_2482_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__15));
v___x_2483_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__17));
v___x_2484_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_2485_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__18));
v___x_2486_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__19));
v___x_2487_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2487_, 0, v___x_2478_);
lean_ctor_set(v___x_2487_, 1, v___x_2485_);
v___x_2488_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21));
v___x_2489_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__22));
v___x_2490_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2490_, 0, v___x_2478_);
lean_ctor_set(v___x_2490_, 1, v___x_2489_);
v___x_2491_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
v___x_2492_ = l_Array_append___redArg(v___x_2491_, v_handlers_2378_);
lean_dec_ref(v_handlers_2378_);
v___x_2493_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2493_, 0, v___x_2478_);
lean_ctor_set(v___x_2493_, 1, v___x_2377_);
v___x_2494_ = lean_array_push(v___x_2492_, v___x_2493_);
v___x_2495_ = lean_array_push(v___x_2494_, v_a_2472_);
v___x_2496_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2496_, 0, v___x_2478_);
lean_ctor_set(v___x_2496_, 1, v___x_2484_);
lean_ctor_set(v___x_2496_, 2, v___x_2495_);
v___x_2497_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7));
v___x_2498_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2498_, 0, v___x_2478_);
lean_ctor_set(v___x_2498_, 1, v___x_2497_);
v___x_2499_ = l_Lean_Syntax_node3(v___x_2478_, v___x_2488_, v___x_2490_, v___x_2496_, v___x_2498_);
v___x_2500_ = l_Lean_Syntax_node2(v___x_2478_, v___x_2486_, v___x_2487_, v___x_2499_);
v___x_2501_ = l_Lean_Syntax_node1(v___x_2478_, v___x_2484_, v___x_2500_);
v___x_2502_ = l_Lean_Syntax_node1(v___x_2478_, v___x_2483_, v___x_2501_);
v___x_2503_ = l_Lean_Syntax_node1(v___x_2478_, v___x_2482_, v___x_2502_);
v___x_2504_ = l_Lean_Syntax_node2(v___x_2478_, v___x_2479_, v___x_2481_, v___x_2503_);
if (v_isShared_2475_ == 0)
{
lean_ctor_set(v___x_2474_, 0, v___x_2504_);
v___x_2506_ = v___x_2474_;
goto v_reusejp_2505_;
}
else
{
lean_object* v_reuseFailAlloc_2507_; 
v_reuseFailAlloc_2507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2507_, 0, v___x_2504_);
v___x_2506_ = v_reuseFailAlloc_2507_;
goto v_reusejp_2505_;
}
v_reusejp_2505_:
{
return v___x_2506_;
}
}
}
else
{
lean_dec_ref(v_handlers_2378_);
return v___x_2471_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___boxed(lean_object* v_handlers_2509_, lean_object* v_default_2510_, lean_object* v_a_2511_, lean_object* v_a_2512_, lean_object* v_a_2513_, lean_object* v_a_2514_, lean_object* v_a_2515_){
_start:
{
lean_object* v_res_2516_; 
v_res_2516_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions(v_handlers_2509_, v_default_2510_, v_a_2511_, v_a_2512_, v_a_2513_, v_a_2514_);
lean_dec(v_a_2514_);
lean_dec_ref(v_a_2513_);
lean_dec(v_a_2512_);
lean_dec_ref(v_a_2511_);
lean_dec_ref(v_handlers_2509_);
return v_res_2516_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0___redArg(lean_object* v_e_2517_, lean_object* v___y_2518_){
_start:
{
uint8_t v___x_2520_; 
v___x_2520_ = l_Lean_Expr_hasMVar(v_e_2517_);
if (v___x_2520_ == 0)
{
lean_object* v___x_2521_; 
v___x_2521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2521_, 0, v_e_2517_);
return v___x_2521_;
}
else
{
lean_object* v___x_2522_; lean_object* v_mctx_2523_; lean_object* v___x_2524_; lean_object* v_fst_2525_; lean_object* v_snd_2526_; lean_object* v___x_2527_; lean_object* v_cache_2528_; lean_object* v_zetaDeltaFVarIds_2529_; lean_object* v_postponed_2530_; lean_object* v_diag_2531_; lean_object* v___x_2533_; uint8_t v_isShared_2534_; uint8_t v_isSharedCheck_2540_; 
v___x_2522_ = lean_st_ref_get(v___y_2518_);
v_mctx_2523_ = lean_ctor_get(v___x_2522_, 0);
lean_inc_ref(v_mctx_2523_);
lean_dec(v___x_2522_);
v___x_2524_ = l_Lean_instantiateMVarsCore(v_mctx_2523_, v_e_2517_);
v_fst_2525_ = lean_ctor_get(v___x_2524_, 0);
lean_inc(v_fst_2525_);
v_snd_2526_ = lean_ctor_get(v___x_2524_, 1);
lean_inc(v_snd_2526_);
lean_dec_ref(v___x_2524_);
v___x_2527_ = lean_st_ref_take(v___y_2518_);
v_cache_2528_ = lean_ctor_get(v___x_2527_, 1);
v_zetaDeltaFVarIds_2529_ = lean_ctor_get(v___x_2527_, 2);
v_postponed_2530_ = lean_ctor_get(v___x_2527_, 3);
v_diag_2531_ = lean_ctor_get(v___x_2527_, 4);
v_isSharedCheck_2540_ = !lean_is_exclusive(v___x_2527_);
if (v_isSharedCheck_2540_ == 0)
{
lean_object* v_unused_2541_; 
v_unused_2541_ = lean_ctor_get(v___x_2527_, 0);
lean_dec(v_unused_2541_);
v___x_2533_ = v___x_2527_;
v_isShared_2534_ = v_isSharedCheck_2540_;
goto v_resetjp_2532_;
}
else
{
lean_inc(v_diag_2531_);
lean_inc(v_postponed_2530_);
lean_inc(v_zetaDeltaFVarIds_2529_);
lean_inc(v_cache_2528_);
lean_dec(v___x_2527_);
v___x_2533_ = lean_box(0);
v_isShared_2534_ = v_isSharedCheck_2540_;
goto v_resetjp_2532_;
}
v_resetjp_2532_:
{
lean_object* v___x_2536_; 
if (v_isShared_2534_ == 0)
{
lean_ctor_set(v___x_2533_, 0, v_snd_2526_);
v___x_2536_ = v___x_2533_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v_snd_2526_);
lean_ctor_set(v_reuseFailAlloc_2539_, 1, v_cache_2528_);
lean_ctor_set(v_reuseFailAlloc_2539_, 2, v_zetaDeltaFVarIds_2529_);
lean_ctor_set(v_reuseFailAlloc_2539_, 3, v_postponed_2530_);
lean_ctor_set(v_reuseFailAlloc_2539_, 4, v_diag_2531_);
v___x_2536_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
lean_object* v___x_2537_; lean_object* v___x_2538_; 
v___x_2537_ = lean_st_ref_put(v___y_2518_, v___x_2536_);
v___x_2538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2538_, 0, v_fst_2525_);
return v___x_2538_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0___redArg___boxed(lean_object* v_e_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_){
_start:
{
lean_object* v_res_2545_; 
v_res_2545_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0___redArg(v_e_2542_, v___y_2543_);
lean_dec(v___y_2543_);
return v_res_2545_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0(lean_object* v_e_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_){
_start:
{
lean_object* v___x_2556_; 
v___x_2556_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0___redArg(v_e_2546_, v___y_2552_);
return v___x_2556_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0___boxed(lean_object* v_e_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_){
_start:
{
lean_object* v_res_2567_; 
v_res_2567_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0(v_e_2557_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_);
lean_dec(v___y_2565_);
lean_dec_ref(v___y_2564_);
lean_dec(v___y_2563_);
lean_dec_ref(v___y_2562_);
lean_dec(v___y_2561_);
lean_dec_ref(v___y_2560_);
lean_dec(v___y_2559_);
lean_dec_ref(v___y_2558_);
return v_res_2567_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg___lam__0(lean_object* v_x_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_){
_start:
{
lean_object* v___x_2578_; 
lean_inc(v___y_2572_);
lean_inc_ref(v___y_2571_);
lean_inc(v___y_2570_);
lean_inc_ref(v___y_2569_);
v___x_2578_ = lean_apply_9(v_x_2568_, v___y_2569_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_, v___y_2576_, lean_box(0));
return v___x_2578_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg___lam__0___boxed(lean_object* v_x_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_){
_start:
{
lean_object* v_res_2589_; 
v_res_2589_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg___lam__0(v_x_2579_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
lean_dec(v___y_2583_);
lean_dec_ref(v___y_2582_);
lean_dec(v___y_2581_);
lean_dec_ref(v___y_2580_);
return v_res_2589_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg(lean_object* v_mvarId_2590_, lean_object* v_x_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_){
_start:
{
lean_object* v___f_2601_; lean_object* v___x_2602_; 
lean_inc(v___y_2595_);
lean_inc_ref(v___y_2594_);
lean_inc(v___y_2593_);
lean_inc_ref(v___y_2592_);
v___f_2601_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_2601_, 0, v_x_2591_);
lean_closure_set(v___f_2601_, 1, v___y_2592_);
lean_closure_set(v___f_2601_, 2, v___y_2593_);
lean_closure_set(v___f_2601_, 3, v___y_2594_);
lean_closure_set(v___f_2601_, 4, v___y_2595_);
v___x_2602_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_2590_, v___f_2601_, v___y_2596_, v___y_2597_, v___y_2598_, v___y_2599_);
if (lean_obj_tag(v___x_2602_) == 0)
{
return v___x_2602_;
}
else
{
lean_object* v_a_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2610_; 
v_a_2603_ = lean_ctor_get(v___x_2602_, 0);
v_isSharedCheck_2610_ = !lean_is_exclusive(v___x_2602_);
if (v_isSharedCheck_2610_ == 0)
{
v___x_2605_ = v___x_2602_;
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_a_2603_);
lean_dec(v___x_2602_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
lean_object* v___x_2608_; 
if (v_isShared_2606_ == 0)
{
v___x_2608_ = v___x_2605_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2609_, 0, v_a_2603_);
v___x_2608_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
return v___x_2608_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg___boxed(lean_object* v_mvarId_2611_, lean_object* v_x_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_){
_start:
{
lean_object* v_res_2622_; 
v_res_2622_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg(v_mvarId_2611_, v_x_2612_, v___y_2613_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_, v___y_2620_);
lean_dec(v___y_2620_);
lean_dec_ref(v___y_2619_);
lean_dec(v___y_2618_);
lean_dec_ref(v___y_2617_);
lean_dec(v___y_2616_);
lean_dec_ref(v___y_2615_);
lean_dec(v___y_2614_);
lean_dec_ref(v___y_2613_);
return v_res_2622_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5(lean_object* v_00_u03b1_2623_, lean_object* v_mvarId_2624_, lean_object* v_x_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_){
_start:
{
lean_object* v___x_2635_; 
v___x_2635_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg(v_mvarId_2624_, v_x_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_);
return v___x_2635_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___boxed(lean_object* v_00_u03b1_2636_, lean_object* v_mvarId_2637_, lean_object* v_x_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_){
_start:
{
lean_object* v_res_2648_; 
v_res_2648_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5(v_00_u03b1_2636_, v_mvarId_2637_, v_x_2638_, v___y_2639_, v___y_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_);
lean_dec(v___y_2646_);
lean_dec_ref(v___y_2645_);
lean_dec(v___y_2644_);
lean_dec_ref(v___y_2643_);
lean_dec(v___y_2642_);
lean_dec_ref(v___y_2641_);
lean_dec(v___y_2640_);
lean_dec_ref(v___y_2639_);
return v_res_2648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__0(lean_object* v_a_2649_, lean_object* v_inv_2650_, lean_object* v_xs_2651_, uint8_t v___x_2652_, lean_object* v___x_2653_, lean_object* v_letMuts_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_){
_start:
{
lean_object* v___x_2664_; 
lean_inc_ref(v_letMuts_2654_);
lean_inc_ref(v_xs_2651_);
v___x_2664_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints(v_a_2649_, v_inv_2650_, v_xs_2651_, v_letMuts_2654_, v___y_2659_, v___y_2660_, v___y_2661_, v___y_2662_);
if (lean_obj_tag(v___x_2664_) == 0)
{
lean_object* v_a_2665_; lean_object* v___x_2667_; uint8_t v_isShared_2668_; uint8_t v_isSharedCheck_2741_; 
v_a_2665_ = lean_ctor_get(v___x_2664_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2664_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2667_ = v___x_2664_;
v_isShared_2668_ = v_isSharedCheck_2741_;
goto v_resetjp_2666_;
}
else
{
lean_inc(v_a_2665_);
lean_dec(v___x_2664_);
v___x_2667_ = lean_box(0);
v_isShared_2668_ = v_isSharedCheck_2741_;
goto v_resetjp_2666_;
}
v_resetjp_2666_:
{
if (lean_obj_tag(v_a_2665_) == 1)
{
lean_object* v_val_2669_; lean_object* v___x_2671_; uint8_t v_isShared_2672_; uint8_t v_isSharedCheck_2736_; 
lean_del_object(v___x_2667_);
v_val_2669_ = lean_ctor_get(v_a_2665_, 0);
v_isSharedCheck_2736_ = !lean_is_exclusive(v_a_2665_);
if (v_isSharedCheck_2736_ == 0)
{
v___x_2671_ = v_a_2665_;
v_isShared_2672_ = v_isSharedCheck_2736_;
goto v_resetjp_2670_;
}
else
{
lean_inc(v_val_2669_);
lean_dec(v_a_2665_);
v___x_2671_ = lean_box(0);
v_isShared_2672_ = v_isSharedCheck_2736_;
goto v_resetjp_2670_;
}
v_resetjp_2670_:
{
lean_object* v_snd_2673_; lean_object* v_fst_2674_; lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2735_; 
v_snd_2673_ = lean_ctor_get(v_val_2669_, 1);
v_fst_2674_ = lean_ctor_get(v_val_2669_, 0);
v_isSharedCheck_2735_ = !lean_is_exclusive(v_val_2669_);
if (v_isSharedCheck_2735_ == 0)
{
v___x_2676_ = v_val_2669_;
v_isShared_2677_ = v_isSharedCheck_2735_;
goto v_resetjp_2675_;
}
else
{
lean_inc(v_snd_2673_);
lean_inc(v_fst_2674_);
lean_dec(v_val_2669_);
v___x_2676_ = lean_box(0);
v_isShared_2677_ = v_isSharedCheck_2735_;
goto v_resetjp_2675_;
}
v_resetjp_2675_:
{
lean_object* v_fst_2678_; lean_object* v_snd_2679_; lean_object* v___x_2681_; uint8_t v_isShared_2682_; uint8_t v_isSharedCheck_2734_; 
v_fst_2678_ = lean_ctor_get(v_snd_2673_, 0);
v_snd_2679_ = lean_ctor_get(v_snd_2673_, 1);
v_isSharedCheck_2734_ = !lean_is_exclusive(v_snd_2673_);
if (v_isSharedCheck_2734_ == 0)
{
v___x_2681_ = v_snd_2673_;
v_isShared_2682_ = v_isSharedCheck_2734_;
goto v_resetjp_2680_;
}
else
{
lean_inc(v_snd_2679_);
lean_inc(v_fst_2678_);
lean_dec(v_snd_2673_);
v___x_2681_ = lean_box(0);
v_isShared_2682_ = v_isSharedCheck_2734_;
goto v_resetjp_2680_;
}
v_resetjp_2680_:
{
lean_object* v_lvl_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; uint8_t v___x_2692_; uint8_t v___x_2693_; lean_object* v___x_2694_; 
v_lvl_2683_ = lean_ctor_get(v_fst_2674_, 0);
lean_inc(v_lvl_2683_);
v___x_2684_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SuccessPoint_clause(v_fst_2674_);
lean_inc(v_fst_2678_);
v___x_2685_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SuccessPoint_clause(v_fst_2678_);
v___x_2686_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_SPredNil_mkOr(v_lvl_2683_, v___x_2684_, v___x_2685_);
v___x_2687_ = lean_unsigned_to_nat(2u);
v___x_2688_ = lean_mk_empty_array_with_capacity(v___x_2687_);
v___x_2689_ = lean_array_push(v___x_2688_, v_xs_2651_);
lean_inc_ref(v_letMuts_2654_);
v___x_2690_ = lean_array_push(v___x_2689_, v_letMuts_2654_);
v___x_2691_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure(v___x_2686_);
v___x_2692_ = 0;
v___x_2693_ = 1;
v___x_2694_ = l_Lean_Meta_mkLambdaFVars(v___x_2690_, v___x_2691_, v___x_2692_, v___x_2652_, v___x_2692_, v___x_2652_, v___x_2693_, v___y_2659_, v___y_2660_, v___y_2661_, v___y_2662_);
if (lean_obj_tag(v___x_2694_) == 0)
{
lean_object* v_a_2695_; lean_object* v_letMutsPred_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; 
v_a_2695_ = lean_ctor_get(v___x_2694_, 0);
lean_inc(v_a_2695_);
lean_dec_ref_known(v___x_2694_, 1);
v_letMutsPred_2696_ = lean_ctor_get(v_fst_2678_, 2);
lean_inc_ref(v_letMutsPred_2696_);
lean_dec(v_fst_2678_);
v___x_2697_ = lean_mk_empty_array_with_capacity(v___x_2653_);
v___x_2698_ = lean_array_push(v___x_2697_, v_letMuts_2654_);
v___x_2699_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_tryHoistPure(v_letMutsPred_2696_);
v___x_2700_ = l_Lean_Meta_mkLambdaFVars(v___x_2698_, v___x_2699_, v___x_2692_, v___x_2652_, v___x_2692_, v___x_2652_, v___x_2693_, v___y_2659_, v___y_2660_, v___y_2661_, v___y_2662_);
if (lean_obj_tag(v___x_2700_) == 0)
{
lean_object* v_a_2701_; lean_object* v___x_2703_; uint8_t v_isShared_2704_; uint8_t v_isSharedCheck_2717_; 
v_a_2701_ = lean_ctor_get(v___x_2700_, 0);
v_isSharedCheck_2717_ = !lean_is_exclusive(v___x_2700_);
if (v_isSharedCheck_2717_ == 0)
{
v___x_2703_ = v___x_2700_;
v_isShared_2704_ = v_isSharedCheck_2717_;
goto v_resetjp_2702_;
}
else
{
lean_inc(v_a_2701_);
lean_dec(v___x_2700_);
v___x_2703_ = lean_box(0);
v_isShared_2704_ = v_isSharedCheck_2717_;
goto v_resetjp_2702_;
}
v_resetjp_2702_:
{
lean_object* v___x_2706_; 
if (v_isShared_2682_ == 0)
{
lean_ctor_set(v___x_2681_, 0, v_a_2701_);
v___x_2706_ = v___x_2681_;
goto v_reusejp_2705_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v_a_2701_);
lean_ctor_set(v_reuseFailAlloc_2716_, 1, v_snd_2679_);
v___x_2706_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2705_;
}
v_reusejp_2705_:
{
lean_object* v___x_2708_; 
if (v_isShared_2677_ == 0)
{
lean_ctor_set(v___x_2676_, 1, v___x_2706_);
lean_ctor_set(v___x_2676_, 0, v_a_2695_);
v___x_2708_ = v___x_2676_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v_a_2695_);
lean_ctor_set(v_reuseFailAlloc_2715_, 1, v___x_2706_);
v___x_2708_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
lean_object* v___x_2710_; 
if (v_isShared_2672_ == 0)
{
lean_ctor_set(v___x_2671_, 0, v___x_2708_);
v___x_2710_ = v___x_2671_;
goto v_reusejp_2709_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v___x_2708_);
v___x_2710_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2709_;
}
v_reusejp_2709_:
{
lean_object* v___x_2712_; 
if (v_isShared_2704_ == 0)
{
lean_ctor_set(v___x_2703_, 0, v___x_2710_);
v___x_2712_ = v___x_2703_;
goto v_reusejp_2711_;
}
else
{
lean_object* v_reuseFailAlloc_2713_; 
v_reuseFailAlloc_2713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2713_, 0, v___x_2710_);
v___x_2712_ = v_reuseFailAlloc_2713_;
goto v_reusejp_2711_;
}
v_reusejp_2711_:
{
return v___x_2712_;
}
}
}
}
}
}
else
{
lean_object* v_a_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2725_; 
lean_dec(v_a_2695_);
lean_del_object(v___x_2681_);
lean_dec(v_snd_2679_);
lean_del_object(v___x_2676_);
lean_del_object(v___x_2671_);
v_a_2718_ = lean_ctor_get(v___x_2700_, 0);
v_isSharedCheck_2725_ = !lean_is_exclusive(v___x_2700_);
if (v_isSharedCheck_2725_ == 0)
{
v___x_2720_ = v___x_2700_;
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_a_2718_);
lean_dec(v___x_2700_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
lean_object* v___x_2723_; 
if (v_isShared_2721_ == 0)
{
v___x_2723_ = v___x_2720_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v_a_2718_);
v___x_2723_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
return v___x_2723_;
}
}
}
}
else
{
lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2733_; 
lean_del_object(v___x_2681_);
lean_dec(v_snd_2679_);
lean_dec(v_fst_2678_);
lean_del_object(v___x_2676_);
lean_del_object(v___x_2671_);
lean_dec_ref(v_letMuts_2654_);
v_a_2726_ = lean_ctor_get(v___x_2694_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2694_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2728_ = v___x_2694_;
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___x_2694_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2731_; 
if (v_isShared_2729_ == 0)
{
v___x_2731_ = v___x_2728_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_a_2726_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2737_; lean_object* v___x_2739_; 
lean_dec(v_a_2665_);
lean_dec_ref(v_letMuts_2654_);
lean_dec_ref(v_xs_2651_);
v___x_2737_ = lean_box(0);
if (v_isShared_2668_ == 0)
{
lean_ctor_set(v___x_2667_, 0, v___x_2737_);
v___x_2739_ = v___x_2667_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v___x_2737_);
v___x_2739_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
return v___x_2739_;
}
}
}
}
else
{
lean_object* v_a_2742_; lean_object* v___x_2744_; uint8_t v_isShared_2745_; uint8_t v_isSharedCheck_2749_; 
lean_dec_ref(v_letMuts_2654_);
lean_dec_ref(v_xs_2651_);
v_a_2742_ = lean_ctor_get(v___x_2664_, 0);
v_isSharedCheck_2749_ = !lean_is_exclusive(v___x_2664_);
if (v_isSharedCheck_2749_ == 0)
{
v___x_2744_ = v___x_2664_;
v_isShared_2745_ = v_isSharedCheck_2749_;
goto v_resetjp_2743_;
}
else
{
lean_inc(v_a_2742_);
lean_dec(v___x_2664_);
v___x_2744_ = lean_box(0);
v_isShared_2745_ = v_isSharedCheck_2749_;
goto v_resetjp_2743_;
}
v_resetjp_2743_:
{
lean_object* v___x_2747_; 
if (v_isShared_2745_ == 0)
{
v___x_2747_ = v___x_2744_;
goto v_reusejp_2746_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v_a_2742_);
v___x_2747_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2746_;
}
v_reusejp_2746_:
{
return v___x_2747_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__0___boxed(lean_object* v_a_2750_, lean_object* v_inv_2751_, lean_object* v_xs_2752_, lean_object* v___x_2753_, lean_object* v___x_2754_, lean_object* v_letMuts_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_){
_start:
{
uint8_t v___x_77146__boxed_2765_; lean_object* v_res_2766_; 
v___x_77146__boxed_2765_ = lean_unbox(v___x_2753_);
v_res_2766_ = l_Lean_Elab_Tactic_Do_suggestInvariant___lam__0(v_a_2750_, v_inv_2751_, v_xs_2752_, v___x_77146__boxed_2765_, v___x_2754_, v_letMuts_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_, v___y_2761_, v___y_2762_, v___y_2763_);
lean_dec(v___y_2763_);
lean_dec_ref(v___y_2762_);
lean_dec(v___y_2761_);
lean_dec_ref(v___y_2760_);
lean_dec(v___y_2759_);
lean_dec_ref(v___y_2758_);
lean_dec(v___y_2757_);
lean_dec_ref(v___y_2756_);
lean_dec(v___x_2754_);
lean_dec_ref(v_a_2750_);
return v_res_2766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg___lam__0(lean_object* v_k_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v_b_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_){
_start:
{
lean_object* v___x_2778_; 
lean_inc(v___y_2776_);
lean_inc_ref(v___y_2775_);
lean_inc(v___y_2774_);
lean_inc_ref(v___y_2773_);
lean_inc(v___y_2771_);
lean_inc_ref(v___y_2770_);
lean_inc(v___y_2769_);
lean_inc_ref(v___y_2768_);
v___x_2778_ = lean_apply_10(v_k_2767_, v_b_2772_, v___y_2768_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_, lean_box(0));
return v___x_2778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg___lam__0___boxed(lean_object* v_k_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v_b_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_){
_start:
{
lean_object* v_res_2790_; 
v_res_2790_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg___lam__0(v_k_2779_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_, v_b_2784_, v___y_2785_, v___y_2786_, v___y_2787_, v___y_2788_);
lean_dec(v___y_2788_);
lean_dec_ref(v___y_2787_);
lean_dec(v___y_2786_);
lean_dec_ref(v___y_2785_);
lean_dec(v___y_2783_);
lean_dec_ref(v___y_2782_);
lean_dec(v___y_2781_);
lean_dec_ref(v___y_2780_);
return v_res_2790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg(lean_object* v_name_2791_, uint8_t v_bi_2792_, lean_object* v_type_2793_, lean_object* v_k_2794_, uint8_t v_kind_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_){
_start:
{
lean_object* v___f_2805_; lean_object* v___x_2806_; 
lean_inc(v___y_2799_);
lean_inc_ref(v___y_2798_);
lean_inc(v___y_2797_);
lean_inc_ref(v___y_2796_);
v___f_2805_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_2805_, 0, v_k_2794_);
lean_closure_set(v___f_2805_, 1, v___y_2796_);
lean_closure_set(v___f_2805_, 2, v___y_2797_);
lean_closure_set(v___f_2805_, 3, v___y_2798_);
lean_closure_set(v___f_2805_, 4, v___y_2799_);
v___x_2806_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2791_, v_bi_2792_, v_type_2793_, v___f_2805_, v_kind_2795_, v___y_2800_, v___y_2801_, v___y_2802_, v___y_2803_);
if (lean_obj_tag(v___x_2806_) == 0)
{
return v___x_2806_;
}
else
{
lean_object* v_a_2807_; lean_object* v___x_2809_; uint8_t v_isShared_2810_; uint8_t v_isSharedCheck_2814_; 
v_a_2807_ = lean_ctor_get(v___x_2806_, 0);
v_isSharedCheck_2814_ = !lean_is_exclusive(v___x_2806_);
if (v_isSharedCheck_2814_ == 0)
{
v___x_2809_ = v___x_2806_;
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
else
{
lean_inc(v_a_2807_);
lean_dec(v___x_2806_);
v___x_2809_ = lean_box(0);
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
v_resetjp_2808_:
{
lean_object* v___x_2812_; 
if (v_isShared_2810_ == 0)
{
v___x_2812_ = v___x_2809_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v_a_2807_);
v___x_2812_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
return v___x_2812_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg___boxed(lean_object* v_name_2815_, lean_object* v_bi_2816_, lean_object* v_type_2817_, lean_object* v_k_2818_, lean_object* v_kind_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_){
_start:
{
uint8_t v_bi_boxed_2829_; uint8_t v_kind_boxed_2830_; lean_object* v_res_2831_; 
v_bi_boxed_2829_ = lean_unbox(v_bi_2816_);
v_kind_boxed_2830_ = lean_unbox(v_kind_2819_);
v_res_2831_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg(v_name_2815_, v_bi_boxed_2829_, v_type_2817_, v_k_2818_, v_kind_boxed_2830_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_, v___y_2825_, v___y_2826_, v___y_2827_);
lean_dec(v___y_2827_);
lean_dec_ref(v___y_2826_);
lean_dec(v___y_2825_);
lean_dec_ref(v___y_2824_);
lean_dec(v___y_2823_);
lean_dec_ref(v___y_2822_);
lean_dec(v___y_2821_);
lean_dec_ref(v___y_2820_);
return v_res_2831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(lean_object* v_name_2832_, lean_object* v_type_2833_, lean_object* v_k_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_){
_start:
{
uint8_t v___x_2844_; uint8_t v___x_2845_; lean_object* v___x_2846_; 
v___x_2844_ = 0;
v___x_2845_ = 0;
v___x_2846_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg(v_name_2832_, v___x_2844_, v_type_2833_, v_k_2834_, v___x_2845_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_, v___y_2840_, v___y_2841_, v___y_2842_);
return v___x_2846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg___boxed(lean_object* v_name_2847_, lean_object* v_type_2848_, lean_object* v_k_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_){
_start:
{
lean_object* v_res_2859_; 
v_res_2859_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(v_name_2847_, v_type_2848_, v_k_2849_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_, v___y_2857_);
lean_dec(v___y_2857_);
lean_dec_ref(v___y_2856_);
lean_dec(v___y_2855_);
lean_dec_ref(v___y_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
return v_res_2859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1(lean_object* v_a_2863_, lean_object* v_inv_2864_, uint8_t v___x_2865_, lean_object* v___x_2866_, lean_object* v_arg_2867_, lean_object* v_xs_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_){
_start:
{
lean_object* v___x_2878_; lean_object* v___f_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; 
v___x_2878_ = lean_box(v___x_2865_);
v___f_2879_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__0___boxed), 15, 5);
lean_closure_set(v___f_2879_, 0, v_a_2863_);
lean_closure_set(v___f_2879_, 1, v_inv_2864_);
lean_closure_set(v___f_2879_, 2, v_xs_2868_);
lean_closure_set(v___f_2879_, 3, v___x_2878_);
lean_closure_set(v___f_2879_, 4, v___x_2866_);
v___x_2880_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1));
v___x_2881_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(v___x_2880_, v_arg_2867_, v___f_2879_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_, v___y_2874_, v___y_2875_, v___y_2876_);
return v___x_2881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___boxed(lean_object* v_a_2882_, lean_object* v_inv_2883_, lean_object* v___x_2884_, lean_object* v___x_2885_, lean_object* v_arg_2886_, lean_object* v_xs_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_){
_start:
{
uint8_t v___x_77466__boxed_2897_; lean_object* v_res_2898_; 
v___x_77466__boxed_2897_ = lean_unbox(v___x_2884_);
v_res_2898_ = l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1(v_a_2882_, v_inv_2883_, v___x_77466__boxed_2897_, v___x_2885_, v_arg_2886_, v_xs_2887_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_);
lean_dec(v___y_2895_);
lean_dec_ref(v___y_2894_);
lean_dec(v___y_2893_);
lean_dec_ref(v___y_2892_);
lean_dec(v___y_2891_);
lean_dec_ref(v___y_2890_);
lean_dec(v___y_2889_);
lean_dec_ref(v___y_2888_);
return v_res_2898_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__2(void){
_start:
{
lean_object* v___x_2902_; 
v___x_2902_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2902_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__3(void){
_start:
{
lean_object* v___x_2903_; lean_object* v___x_2904_; 
v___x_2903_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__2, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__2_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__2);
v___x_2904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2904_, 0, v___x_2903_);
return v___x_2904_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__4(void){
_start:
{
lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; 
v___x_2905_ = lean_unsigned_to_nat(32u);
v___x_2906_ = lean_mk_empty_array_with_capacity(v___x_2905_);
v___x_2907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2907_, 0, v___x_2906_);
return v___x_2907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2(lean_object* v_fst_2908_, lean_object* v_xs_2909_, lean_object* v_fst_2910_, lean_object* v_r_2911_, lean_object* v___x_2912_, lean_object* v_fst_2913_, uint8_t v___x_2914_, lean_object* v___x_2915_, lean_object* v_letMuts_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_){
_start:
{
lean_object* v___x_2926_; 
lean_inc_ref(v_fst_2908_);
v___x_2926_ = l_Lean_Meta_mkNone(v_fst_2908_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_);
if (lean_obj_tag(v___x_2926_) == 0)
{
lean_object* v_a_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; 
v_a_2927_ = lean_ctor_get(v___x_2926_, 0);
lean_inc(v_a_2927_);
lean_dec_ref_known(v___x_2926_, 1);
v___x_2928_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_classifyInvariantUse_spec__1___redArg___closed__2));
v___x_2929_ = lean_unsigned_to_nat(2u);
v___x_2930_ = lean_mk_empty_array_with_capacity(v___x_2929_);
lean_inc_ref(v___x_2930_);
v___x_2931_ = lean_array_push(v___x_2930_, v_a_2927_);
lean_inc_ref(v_letMuts_2916_);
v___x_2932_ = lean_array_push(v___x_2931_, v_letMuts_2916_);
v___x_2933_ = l_Lean_Meta_mkAppM(v___x_2928_, v___x_2932_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_);
if (lean_obj_tag(v___x_2933_) == 0)
{
lean_object* v_a_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; 
v_a_2934_ = lean_ctor_get(v___x_2933_, 0);
lean_inc(v_a_2934_);
lean_dec_ref_known(v___x_2933_, 1);
lean_inc_ref(v___x_2930_);
v___x_2935_ = lean_array_push(v___x_2930_, v_xs_2909_);
v___x_2936_ = lean_array_push(v___x_2935_, v_a_2934_);
v___x_2937_ = l_Lean_Expr_beta(v_fst_2910_, v___x_2936_);
v___x_2938_ = l_Lean_Meta_mkSome(v_fst_2908_, v_r_2911_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_);
if (lean_obj_tag(v___x_2938_) == 0)
{
lean_object* v_a_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; 
v_a_2939_ = lean_ctor_get(v___x_2938_, 0);
lean_inc(v_a_2939_);
lean_dec_ref_known(v___x_2938_, 1);
v___x_2940_ = lean_array_push(v___x_2930_, v_a_2939_);
v___x_2941_ = lean_array_push(v___x_2940_, v_letMuts_2916_);
v___x_2942_ = l_Lean_Meta_mkAppM(v___x_2928_, v___x_2941_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_);
if (lean_obj_tag(v___x_2942_) == 0)
{
lean_object* v_a_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; 
v_a_2943_ = lean_ctor_get(v___x_2942_, 0);
lean_inc(v_a_2943_);
lean_dec_ref_known(v___x_2942_, 1);
v___x_2944_ = lean_mk_empty_array_with_capacity(v___x_2912_);
lean_inc_ref(v___x_2944_);
v___x_2945_ = lean_array_push(v___x_2944_, v_a_2943_);
v___x_2946_ = l_Lean_Expr_beta(v_fst_2913_, v___x_2945_);
v___x_2947_ = l_Lean_Meta_getSimpTheorems___redArg(v___y_2924_);
if (lean_obj_tag(v___x_2947_) == 0)
{
lean_object* v_a_2948_; lean_object* v___x_2949_; 
v_a_2948_ = lean_ctor_get(v___x_2947_, 0);
lean_inc(v_a_2948_);
lean_dec_ref_known(v___x_2947_, 1);
v___x_2949_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v___y_2924_);
if (lean_obj_tag(v___x_2949_) == 0)
{
lean_object* v_a_2950_; lean_object* v___x_2951_; uint8_t v___x_2952_; uint8_t v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; 
v_a_2950_ = lean_ctor_get(v___x_2949_, 0);
lean_inc(v_a_2950_);
lean_dec_ref_known(v___x_2949_, 1);
v___x_2951_ = lean_unsigned_to_nat(100000u);
v___x_2952_ = 0;
v___x_2953_ = 0;
v___x_2954_ = lean_box(0);
v___x_2955_ = lean_alloc_ctor(0, 3, 29);
lean_ctor_set(v___x_2955_, 0, v___x_2951_);
lean_ctor_set(v___x_2955_, 1, v___x_2929_);
lean_ctor_set(v___x_2955_, 2, v___x_2954_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3, v___x_2952_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 1, v___x_2914_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 2, v___x_2952_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 3, v___x_2914_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 4, v___x_2914_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 5, v___x_2914_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 6, v___x_2953_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 7, v___x_2914_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 8, v___x_2914_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 9, v___x_2952_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 10, v___x_2952_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 11, v___x_2952_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 12, v___x_2914_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 13, v___x_2914_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 14, v___x_2952_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 15, v___x_2952_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 16, v___x_2952_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 17, v___x_2914_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 18, v___x_2914_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 19, v___x_2914_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 20, v___x_2914_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 21, v___x_2914_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 22, v___x_2914_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 23, v___x_2914_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 24, v___x_2914_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 25, v___x_2914_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 26, v___x_2952_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 27, v___x_2952_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*3 + 28, v___x_2952_);
v___x_2956_ = lean_array_push(v___x_2944_, v_a_2948_);
v___x_2957_ = l_Lean_Options_empty;
v___x_2958_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_2955_, v___x_2956_, v_a_2950_, v___x_2957_, v___y_2921_, v___y_2923_, v___y_2924_);
if (lean_obj_tag(v___x_2958_) == 0)
{
lean_object* v_a_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; 
v_a_2959_ = lean_ctor_get(v___x_2958_, 0);
lean_inc(v_a_2959_);
lean_dec_ref_known(v___x_2958_, 1);
v___x_2960_ = lean_mk_empty_array_with_capacity(v___x_2915_);
v___x_2961_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__1));
v___x_2962_ = l_Lean_Meta_Simp_SimprocsArray_add(v___x_2960_, v___x_2961_, v___x_2952_, v___y_2923_, v___y_2924_);
if (lean_obj_tag(v___x_2962_) == 0)
{
lean_object* v_a_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; size_t v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; 
v_a_2963_ = lean_ctor_get(v___x_2962_, 0);
lean_inc_n(v_a_2963_, 2);
lean_dec_ref_known(v___x_2962_, 1);
v___x_2964_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__3, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__3_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__3);
lean_inc_n(v___x_2915_, 2);
v___x_2965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2964_);
lean_ctor_set(v___x_2965_, 1, v___x_2915_);
v___x_2966_ = lean_unsigned_to_nat(32u);
v___x_2967_ = lean_mk_empty_array_with_capacity(v___x_2966_);
v___x_2968_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__4, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__4_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___closed__4);
v___x_2969_ = ((size_t)5ULL);
v___x_2970_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2970_, 0, v___x_2968_);
lean_ctor_set(v___x_2970_, 1, v___x_2967_);
lean_ctor_set(v___x_2970_, 2, v___x_2915_);
lean_ctor_set(v___x_2970_, 3, v___x_2915_);
lean_ctor_set_usize(v___x_2970_, 4, v___x_2969_);
v___x_2971_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2971_, 0, v___x_2964_);
lean_ctor_set(v___x_2971_, 1, v___x_2964_);
lean_ctor_set(v___x_2971_, 2, v___x_2964_);
lean_ctor_set(v___x_2971_, 3, v___x_2970_);
v___x_2972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2972_, 0, v___x_2965_);
lean_ctor_set(v___x_2972_, 1, v___x_2971_);
lean_inc(v_a_2959_);
v___x_2973_ = l_Lean_Meta_simp(v___x_2937_, v_a_2959_, v_a_2963_, v___x_2954_, v___x_2972_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_);
if (lean_obj_tag(v___x_2973_) == 0)
{
lean_object* v_a_2974_; lean_object* v_fst_2975_; lean_object* v___x_2976_; 
v_a_2974_ = lean_ctor_get(v___x_2973_, 0);
lean_inc(v_a_2974_);
lean_dec_ref_known(v___x_2973_, 1);
v_fst_2975_ = lean_ctor_get(v_a_2974_, 0);
lean_inc(v_fst_2975_);
lean_dec(v_a_2974_);
v___x_2976_ = l_Lean_Meta_simp(v___x_2946_, v_a_2959_, v_a_2963_, v___x_2954_, v___x_2972_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_);
lean_dec_ref_known(v___x_2972_, 2);
if (lean_obj_tag(v___x_2976_) == 0)
{
lean_object* v_a_2977_; lean_object* v_fst_2978_; lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_3015_; 
v_a_2977_ = lean_ctor_get(v___x_2976_, 0);
lean_inc(v_a_2977_);
lean_dec_ref_known(v___x_2976_, 1);
v_fst_2978_ = lean_ctor_get(v_a_2977_, 0);
v_isSharedCheck_3015_ = !lean_is_exclusive(v_a_2977_);
if (v_isSharedCheck_3015_ == 0)
{
lean_object* v_unused_3016_; 
v_unused_3016_ = lean_ctor_get(v_a_2977_, 1);
lean_dec(v_unused_3016_);
v___x_2980_ = v_a_2977_;
v_isShared_2981_ = v_isSharedCheck_3015_;
goto v_resetjp_2979_;
}
else
{
lean_inc(v_fst_2978_);
lean_dec(v_a_2977_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_3015_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
lean_object* v_expr_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; 
v_expr_2982_ = lean_ctor_get(v_fst_2975_, 0);
lean_inc_ref(v_expr_2982_);
lean_dec(v_fst_2975_);
v___x_2983_ = lean_box(1);
v___x_2984_ = l_Lean_PrettyPrinter_delab(v_expr_2982_, v___x_2983_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_);
if (lean_obj_tag(v___x_2984_) == 0)
{
lean_object* v_a_2985_; lean_object* v_expr_2986_; lean_object* v___x_2987_; 
v_a_2985_ = lean_ctor_get(v___x_2984_, 0);
lean_inc(v_a_2985_);
lean_dec_ref_known(v___x_2984_, 1);
v_expr_2986_ = lean_ctor_get(v_fst_2978_, 0);
lean_inc_ref(v_expr_2986_);
lean_dec(v_fst_2978_);
v___x_2987_ = l_Lean_PrettyPrinter_delab(v_expr_2986_, v___x_2983_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_);
if (lean_obj_tag(v___x_2987_) == 0)
{
lean_object* v_a_2988_; lean_object* v___x_2990_; uint8_t v_isShared_2991_; uint8_t v_isSharedCheck_2998_; 
v_a_2988_ = lean_ctor_get(v___x_2987_, 0);
v_isSharedCheck_2998_ = !lean_is_exclusive(v___x_2987_);
if (v_isSharedCheck_2998_ == 0)
{
v___x_2990_ = v___x_2987_;
v_isShared_2991_ = v_isSharedCheck_2998_;
goto v_resetjp_2989_;
}
else
{
lean_inc(v_a_2988_);
lean_dec(v___x_2987_);
v___x_2990_ = lean_box(0);
v_isShared_2991_ = v_isSharedCheck_2998_;
goto v_resetjp_2989_;
}
v_resetjp_2989_:
{
lean_object* v___x_2993_; 
if (v_isShared_2981_ == 0)
{
lean_ctor_set(v___x_2980_, 1, v_a_2988_);
lean_ctor_set(v___x_2980_, 0, v_a_2985_);
v___x_2993_ = v___x_2980_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2997_; 
v_reuseFailAlloc_2997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2997_, 0, v_a_2985_);
lean_ctor_set(v_reuseFailAlloc_2997_, 1, v_a_2988_);
v___x_2993_ = v_reuseFailAlloc_2997_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
lean_object* v___x_2995_; 
if (v_isShared_2991_ == 0)
{
lean_ctor_set(v___x_2990_, 0, v___x_2993_);
v___x_2995_ = v___x_2990_;
goto v_reusejp_2994_;
}
else
{
lean_object* v_reuseFailAlloc_2996_; 
v_reuseFailAlloc_2996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2996_, 0, v___x_2993_);
v___x_2995_ = v_reuseFailAlloc_2996_;
goto v_reusejp_2994_;
}
v_reusejp_2994_:
{
return v___x_2995_;
}
}
}
}
else
{
lean_object* v_a_2999_; lean_object* v___x_3001_; uint8_t v_isShared_3002_; uint8_t v_isSharedCheck_3006_; 
lean_dec(v_a_2985_);
lean_del_object(v___x_2980_);
v_a_2999_ = lean_ctor_get(v___x_2987_, 0);
v_isSharedCheck_3006_ = !lean_is_exclusive(v___x_2987_);
if (v_isSharedCheck_3006_ == 0)
{
v___x_3001_ = v___x_2987_;
v_isShared_3002_ = v_isSharedCheck_3006_;
goto v_resetjp_3000_;
}
else
{
lean_inc(v_a_2999_);
lean_dec(v___x_2987_);
v___x_3001_ = lean_box(0);
v_isShared_3002_ = v_isSharedCheck_3006_;
goto v_resetjp_3000_;
}
v_resetjp_3000_:
{
lean_object* v___x_3004_; 
if (v_isShared_3002_ == 0)
{
v___x_3004_ = v___x_3001_;
goto v_reusejp_3003_;
}
else
{
lean_object* v_reuseFailAlloc_3005_; 
v_reuseFailAlloc_3005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3005_, 0, v_a_2999_);
v___x_3004_ = v_reuseFailAlloc_3005_;
goto v_reusejp_3003_;
}
v_reusejp_3003_:
{
return v___x_3004_;
}
}
}
}
else
{
lean_object* v_a_3007_; lean_object* v___x_3009_; uint8_t v_isShared_3010_; uint8_t v_isSharedCheck_3014_; 
lean_del_object(v___x_2980_);
lean_dec(v_fst_2978_);
v_a_3007_ = lean_ctor_get(v___x_2984_, 0);
v_isSharedCheck_3014_ = !lean_is_exclusive(v___x_2984_);
if (v_isSharedCheck_3014_ == 0)
{
v___x_3009_ = v___x_2984_;
v_isShared_3010_ = v_isSharedCheck_3014_;
goto v_resetjp_3008_;
}
else
{
lean_inc(v_a_3007_);
lean_dec(v___x_2984_);
v___x_3009_ = lean_box(0);
v_isShared_3010_ = v_isSharedCheck_3014_;
goto v_resetjp_3008_;
}
v_resetjp_3008_:
{
lean_object* v___x_3012_; 
if (v_isShared_3010_ == 0)
{
v___x_3012_ = v___x_3009_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v_a_3007_);
v___x_3012_ = v_reuseFailAlloc_3013_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
return v___x_3012_;
}
}
}
}
}
else
{
lean_object* v_a_3017_; lean_object* v___x_3019_; uint8_t v_isShared_3020_; uint8_t v_isSharedCheck_3024_; 
lean_dec(v_fst_2975_);
v_a_3017_ = lean_ctor_get(v___x_2976_, 0);
v_isSharedCheck_3024_ = !lean_is_exclusive(v___x_2976_);
if (v_isSharedCheck_3024_ == 0)
{
v___x_3019_ = v___x_2976_;
v_isShared_3020_ = v_isSharedCheck_3024_;
goto v_resetjp_3018_;
}
else
{
lean_inc(v_a_3017_);
lean_dec(v___x_2976_);
v___x_3019_ = lean_box(0);
v_isShared_3020_ = v_isSharedCheck_3024_;
goto v_resetjp_3018_;
}
v_resetjp_3018_:
{
lean_object* v___x_3022_; 
if (v_isShared_3020_ == 0)
{
v___x_3022_ = v___x_3019_;
goto v_reusejp_3021_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v_a_3017_);
v___x_3022_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3021_;
}
v_reusejp_3021_:
{
return v___x_3022_;
}
}
}
}
else
{
lean_object* v_a_3025_; lean_object* v___x_3027_; uint8_t v_isShared_3028_; uint8_t v_isSharedCheck_3032_; 
lean_dec_ref_known(v___x_2972_, 2);
lean_dec(v_a_2963_);
lean_dec(v_a_2959_);
lean_dec_ref(v___x_2946_);
v_a_3025_ = lean_ctor_get(v___x_2973_, 0);
v_isSharedCheck_3032_ = !lean_is_exclusive(v___x_2973_);
if (v_isSharedCheck_3032_ == 0)
{
v___x_3027_ = v___x_2973_;
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
else
{
lean_inc(v_a_3025_);
lean_dec(v___x_2973_);
v___x_3027_ = lean_box(0);
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
v_resetjp_3026_:
{
lean_object* v___x_3030_; 
if (v_isShared_3028_ == 0)
{
v___x_3030_ = v___x_3027_;
goto v_reusejp_3029_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v_a_3025_);
v___x_3030_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3029_;
}
v_reusejp_3029_:
{
return v___x_3030_;
}
}
}
}
else
{
lean_object* v_a_3033_; lean_object* v___x_3035_; uint8_t v_isShared_3036_; uint8_t v_isSharedCheck_3040_; 
lean_dec(v_a_2959_);
lean_dec_ref(v___x_2946_);
lean_dec_ref(v___x_2937_);
lean_dec(v___x_2915_);
v_a_3033_ = lean_ctor_get(v___x_2962_, 0);
v_isSharedCheck_3040_ = !lean_is_exclusive(v___x_2962_);
if (v_isSharedCheck_3040_ == 0)
{
v___x_3035_ = v___x_2962_;
v_isShared_3036_ = v_isSharedCheck_3040_;
goto v_resetjp_3034_;
}
else
{
lean_inc(v_a_3033_);
lean_dec(v___x_2962_);
v___x_3035_ = lean_box(0);
v_isShared_3036_ = v_isSharedCheck_3040_;
goto v_resetjp_3034_;
}
v_resetjp_3034_:
{
lean_object* v___x_3038_; 
if (v_isShared_3036_ == 0)
{
v___x_3038_ = v___x_3035_;
goto v_reusejp_3037_;
}
else
{
lean_object* v_reuseFailAlloc_3039_; 
v_reuseFailAlloc_3039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3039_, 0, v_a_3033_);
v___x_3038_ = v_reuseFailAlloc_3039_;
goto v_reusejp_3037_;
}
v_reusejp_3037_:
{
return v___x_3038_;
}
}
}
}
else
{
lean_object* v_a_3041_; lean_object* v___x_3043_; uint8_t v_isShared_3044_; uint8_t v_isSharedCheck_3048_; 
lean_dec_ref(v___x_2946_);
lean_dec_ref(v___x_2937_);
lean_dec(v___x_2915_);
v_a_3041_ = lean_ctor_get(v___x_2958_, 0);
v_isSharedCheck_3048_ = !lean_is_exclusive(v___x_2958_);
if (v_isSharedCheck_3048_ == 0)
{
v___x_3043_ = v___x_2958_;
v_isShared_3044_ = v_isSharedCheck_3048_;
goto v_resetjp_3042_;
}
else
{
lean_inc(v_a_3041_);
lean_dec(v___x_2958_);
v___x_3043_ = lean_box(0);
v_isShared_3044_ = v_isSharedCheck_3048_;
goto v_resetjp_3042_;
}
v_resetjp_3042_:
{
lean_object* v___x_3046_; 
if (v_isShared_3044_ == 0)
{
v___x_3046_ = v___x_3043_;
goto v_reusejp_3045_;
}
else
{
lean_object* v_reuseFailAlloc_3047_; 
v_reuseFailAlloc_3047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3047_, 0, v_a_3041_);
v___x_3046_ = v_reuseFailAlloc_3047_;
goto v_reusejp_3045_;
}
v_reusejp_3045_:
{
return v___x_3046_;
}
}
}
}
else
{
lean_object* v_a_3049_; lean_object* v___x_3051_; uint8_t v_isShared_3052_; uint8_t v_isSharedCheck_3056_; 
lean_dec(v_a_2948_);
lean_dec_ref(v___x_2946_);
lean_dec_ref(v___x_2944_);
lean_dec_ref(v___x_2937_);
lean_dec(v___x_2915_);
v_a_3049_ = lean_ctor_get(v___x_2949_, 0);
v_isSharedCheck_3056_ = !lean_is_exclusive(v___x_2949_);
if (v_isSharedCheck_3056_ == 0)
{
v___x_3051_ = v___x_2949_;
v_isShared_3052_ = v_isSharedCheck_3056_;
goto v_resetjp_3050_;
}
else
{
lean_inc(v_a_3049_);
lean_dec(v___x_2949_);
v___x_3051_ = lean_box(0);
v_isShared_3052_ = v_isSharedCheck_3056_;
goto v_resetjp_3050_;
}
v_resetjp_3050_:
{
lean_object* v___x_3054_; 
if (v_isShared_3052_ == 0)
{
v___x_3054_ = v___x_3051_;
goto v_reusejp_3053_;
}
else
{
lean_object* v_reuseFailAlloc_3055_; 
v_reuseFailAlloc_3055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3055_, 0, v_a_3049_);
v___x_3054_ = v_reuseFailAlloc_3055_;
goto v_reusejp_3053_;
}
v_reusejp_3053_:
{
return v___x_3054_;
}
}
}
}
else
{
lean_object* v_a_3057_; lean_object* v___x_3059_; uint8_t v_isShared_3060_; uint8_t v_isSharedCheck_3064_; 
lean_dec_ref(v___x_2946_);
lean_dec_ref(v___x_2944_);
lean_dec_ref(v___x_2937_);
lean_dec(v___x_2915_);
v_a_3057_ = lean_ctor_get(v___x_2947_, 0);
v_isSharedCheck_3064_ = !lean_is_exclusive(v___x_2947_);
if (v_isSharedCheck_3064_ == 0)
{
v___x_3059_ = v___x_2947_;
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
else
{
lean_inc(v_a_3057_);
lean_dec(v___x_2947_);
v___x_3059_ = lean_box(0);
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
v_resetjp_3058_:
{
lean_object* v___x_3062_; 
if (v_isShared_3060_ == 0)
{
v___x_3062_ = v___x_3059_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3063_; 
v_reuseFailAlloc_3063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3063_, 0, v_a_3057_);
v___x_3062_ = v_reuseFailAlloc_3063_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
return v___x_3062_;
}
}
}
}
else
{
lean_object* v_a_3065_; lean_object* v___x_3067_; uint8_t v_isShared_3068_; uint8_t v_isSharedCheck_3072_; 
lean_dec_ref(v___x_2937_);
lean_dec(v___x_2915_);
lean_dec_ref(v_fst_2913_);
v_a_3065_ = lean_ctor_get(v___x_2942_, 0);
v_isSharedCheck_3072_ = !lean_is_exclusive(v___x_2942_);
if (v_isSharedCheck_3072_ == 0)
{
v___x_3067_ = v___x_2942_;
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
else
{
lean_inc(v_a_3065_);
lean_dec(v___x_2942_);
v___x_3067_ = lean_box(0);
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
v_resetjp_3066_:
{
lean_object* v___x_3070_; 
if (v_isShared_3068_ == 0)
{
v___x_3070_ = v___x_3067_;
goto v_reusejp_3069_;
}
else
{
lean_object* v_reuseFailAlloc_3071_; 
v_reuseFailAlloc_3071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3071_, 0, v_a_3065_);
v___x_3070_ = v_reuseFailAlloc_3071_;
goto v_reusejp_3069_;
}
v_reusejp_3069_:
{
return v___x_3070_;
}
}
}
}
else
{
lean_object* v_a_3073_; lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3080_; 
lean_dec_ref(v___x_2937_);
lean_dec_ref(v___x_2930_);
lean_dec_ref(v_letMuts_2916_);
lean_dec(v___x_2915_);
lean_dec_ref(v_fst_2913_);
v_a_3073_ = lean_ctor_get(v___x_2938_, 0);
v_isSharedCheck_3080_ = !lean_is_exclusive(v___x_2938_);
if (v_isSharedCheck_3080_ == 0)
{
v___x_3075_ = v___x_2938_;
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
else
{
lean_inc(v_a_3073_);
lean_dec(v___x_2938_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v___x_3078_; 
if (v_isShared_3076_ == 0)
{
v___x_3078_ = v___x_3075_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v_a_3073_);
v___x_3078_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
return v___x_3078_;
}
}
}
}
else
{
lean_object* v_a_3081_; lean_object* v___x_3083_; uint8_t v_isShared_3084_; uint8_t v_isSharedCheck_3088_; 
lean_dec_ref(v___x_2930_);
lean_dec_ref(v_letMuts_2916_);
lean_dec(v___x_2915_);
lean_dec_ref(v_fst_2913_);
lean_dec_ref(v_r_2911_);
lean_dec_ref(v_fst_2910_);
lean_dec_ref(v_xs_2909_);
lean_dec_ref(v_fst_2908_);
v_a_3081_ = lean_ctor_get(v___x_2933_, 0);
v_isSharedCheck_3088_ = !lean_is_exclusive(v___x_2933_);
if (v_isSharedCheck_3088_ == 0)
{
v___x_3083_ = v___x_2933_;
v_isShared_3084_ = v_isSharedCheck_3088_;
goto v_resetjp_3082_;
}
else
{
lean_inc(v_a_3081_);
lean_dec(v___x_2933_);
v___x_3083_ = lean_box(0);
v_isShared_3084_ = v_isSharedCheck_3088_;
goto v_resetjp_3082_;
}
v_resetjp_3082_:
{
lean_object* v___x_3086_; 
if (v_isShared_3084_ == 0)
{
v___x_3086_ = v___x_3083_;
goto v_reusejp_3085_;
}
else
{
lean_object* v_reuseFailAlloc_3087_; 
v_reuseFailAlloc_3087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3087_, 0, v_a_3081_);
v___x_3086_ = v_reuseFailAlloc_3087_;
goto v_reusejp_3085_;
}
v_reusejp_3085_:
{
return v___x_3086_;
}
}
}
}
else
{
lean_object* v_a_3089_; lean_object* v___x_3091_; uint8_t v_isShared_3092_; uint8_t v_isSharedCheck_3096_; 
lean_dec_ref(v_letMuts_2916_);
lean_dec(v___x_2915_);
lean_dec_ref(v_fst_2913_);
lean_dec_ref(v_r_2911_);
lean_dec_ref(v_fst_2910_);
lean_dec_ref(v_xs_2909_);
lean_dec_ref(v_fst_2908_);
v_a_3089_ = lean_ctor_get(v___x_2926_, 0);
v_isSharedCheck_3096_ = !lean_is_exclusive(v___x_2926_);
if (v_isSharedCheck_3096_ == 0)
{
v___x_3091_ = v___x_2926_;
v_isShared_3092_ = v_isSharedCheck_3096_;
goto v_resetjp_3090_;
}
else
{
lean_inc(v_a_3089_);
lean_dec(v___x_2926_);
v___x_3091_ = lean_box(0);
v_isShared_3092_ = v_isSharedCheck_3096_;
goto v_resetjp_3090_;
}
v_resetjp_3090_:
{
lean_object* v___x_3094_; 
if (v_isShared_3092_ == 0)
{
v___x_3094_ = v___x_3091_;
goto v_reusejp_3093_;
}
else
{
lean_object* v_reuseFailAlloc_3095_; 
v_reuseFailAlloc_3095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3095_, 0, v_a_3089_);
v___x_3094_ = v_reuseFailAlloc_3095_;
goto v_reusejp_3093_;
}
v_reusejp_3093_:
{
return v___x_3094_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___boxed(lean_object** _args){
lean_object* v_fst_3097_ = _args[0];
lean_object* v_xs_3098_ = _args[1];
lean_object* v_fst_3099_ = _args[2];
lean_object* v_r_3100_ = _args[3];
lean_object* v___x_3101_ = _args[4];
lean_object* v_fst_3102_ = _args[5];
lean_object* v___x_3103_ = _args[6];
lean_object* v___x_3104_ = _args[7];
lean_object* v_letMuts_3105_ = _args[8];
lean_object* v___y_3106_ = _args[9];
lean_object* v___y_3107_ = _args[10];
lean_object* v___y_3108_ = _args[11];
lean_object* v___y_3109_ = _args[12];
lean_object* v___y_3110_ = _args[13];
lean_object* v___y_3111_ = _args[14];
lean_object* v___y_3112_ = _args[15];
lean_object* v___y_3113_ = _args[16];
lean_object* v___y_3114_ = _args[17];
_start:
{
uint8_t v___x_77542__boxed_3115_; lean_object* v_res_3116_; 
v___x_77542__boxed_3115_ = lean_unbox(v___x_3103_);
v_res_3116_ = l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2(v_fst_3097_, v_xs_3098_, v_fst_3099_, v_r_3100_, v___x_3101_, v_fst_3102_, v___x_77542__boxed_3115_, v___x_3104_, v_letMuts_3105_, v___y_3106_, v___y_3107_, v___y_3108_, v___y_3109_, v___y_3110_, v___y_3111_, v___y_3112_, v___y_3113_);
lean_dec(v___y_3113_);
lean_dec_ref(v___y_3112_);
lean_dec(v___y_3111_);
lean_dec_ref(v___y_3110_);
lean_dec(v___y_3109_);
lean_dec_ref(v___y_3108_);
lean_dec(v___y_3107_);
lean_dec_ref(v___y_3106_);
lean_dec(v___x_3101_);
return v_res_3116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__3(lean_object* v_fst_3117_, lean_object* v_xs_3118_, lean_object* v_fst_3119_, lean_object* v___x_3120_, lean_object* v_fst_3121_, uint8_t v___x_3122_, lean_object* v___x_3123_, lean_object* v_snd_3124_, lean_object* v_r_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_){
_start:
{
lean_object* v___x_3135_; lean_object* v___f_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; 
v___x_3135_ = lean_box(v___x_3122_);
v___f_3136_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__2___boxed), 18, 8);
lean_closure_set(v___f_3136_, 0, v_fst_3117_);
lean_closure_set(v___f_3136_, 1, v_xs_3118_);
lean_closure_set(v___f_3136_, 2, v_fst_3119_);
lean_closure_set(v___f_3136_, 3, v_r_3125_);
lean_closure_set(v___f_3136_, 4, v___x_3120_);
lean_closure_set(v___f_3136_, 5, v_fst_3121_);
lean_closure_set(v___f_3136_, 6, v___x_3135_);
lean_closure_set(v___f_3136_, 7, v___x_3123_);
v___x_3137_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1));
v___x_3138_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(v___x_3137_, v_snd_3124_, v___f_3136_, v___y_3126_, v___y_3127_, v___y_3128_, v___y_3129_, v___y_3130_, v___y_3131_, v___y_3132_, v___y_3133_);
return v___x_3138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__3___boxed(lean_object** _args){
lean_object* v_fst_3139_ = _args[0];
lean_object* v_xs_3140_ = _args[1];
lean_object* v_fst_3141_ = _args[2];
lean_object* v___x_3142_ = _args[3];
lean_object* v_fst_3143_ = _args[4];
lean_object* v___x_3144_ = _args[5];
lean_object* v___x_3145_ = _args[6];
lean_object* v_snd_3146_ = _args[7];
lean_object* v_r_3147_ = _args[8];
lean_object* v___y_3148_ = _args[9];
lean_object* v___y_3149_ = _args[10];
lean_object* v___y_3150_ = _args[11];
lean_object* v___y_3151_ = _args[12];
lean_object* v___y_3152_ = _args[13];
lean_object* v___y_3153_ = _args[14];
lean_object* v___y_3154_ = _args[15];
lean_object* v___y_3155_ = _args[16];
lean_object* v___y_3156_ = _args[17];
_start:
{
uint8_t v___x_77938__boxed_3157_; lean_object* v_res_3158_; 
v___x_77938__boxed_3157_ = lean_unbox(v___x_3144_);
v_res_3158_ = l_Lean_Elab_Tactic_Do_suggestInvariant___lam__3(v_fst_3139_, v_xs_3140_, v_fst_3141_, v___x_3142_, v_fst_3143_, v___x_77938__boxed_3157_, v___x_3145_, v_snd_3146_, v_r_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_, v___y_3155_);
lean_dec(v___y_3155_);
lean_dec_ref(v___y_3154_);
lean_dec(v___y_3153_);
lean_dec_ref(v___y_3152_);
lean_dec(v___y_3151_);
lean_dec_ref(v___y_3150_);
lean_dec(v___y_3149_);
lean_dec_ref(v___y_3148_);
return v_res_3158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4(lean_object* v_fst_3162_, lean_object* v_fst_3163_, lean_object* v___x_3164_, lean_object* v_fst_3165_, uint8_t v___x_3166_, lean_object* v___x_3167_, lean_object* v_snd_3168_, lean_object* v_xs_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_){
_start:
{
lean_object* v___x_3179_; lean_object* v___f_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; 
v___x_3179_ = lean_box(v___x_3166_);
lean_inc_ref(v_fst_3162_);
v___f_3180_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__3___boxed), 18, 8);
lean_closure_set(v___f_3180_, 0, v_fst_3162_);
lean_closure_set(v___f_3180_, 1, v_xs_3169_);
lean_closure_set(v___f_3180_, 2, v_fst_3163_);
lean_closure_set(v___f_3180_, 3, v___x_3164_);
lean_closure_set(v___f_3180_, 4, v_fst_3165_);
lean_closure_set(v___f_3180_, 5, v___x_3179_);
lean_closure_set(v___f_3180_, 6, v___x_3167_);
lean_closure_set(v___f_3180_, 7, v_snd_3168_);
v___x_3181_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__1));
v___x_3182_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(v___x_3181_, v_fst_3162_, v___f_3180_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_, v___y_3175_, v___y_3176_, v___y_3177_);
return v___x_3182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___boxed(lean_object** _args){
lean_object* v_fst_3183_ = _args[0];
lean_object* v_fst_3184_ = _args[1];
lean_object* v___x_3185_ = _args[2];
lean_object* v_fst_3186_ = _args[3];
lean_object* v___x_3187_ = _args[4];
lean_object* v___x_3188_ = _args[5];
lean_object* v_snd_3189_ = _args[6];
lean_object* v_xs_3190_ = _args[7];
lean_object* v___y_3191_ = _args[8];
lean_object* v___y_3192_ = _args[9];
lean_object* v___y_3193_ = _args[10];
lean_object* v___y_3194_ = _args[11];
lean_object* v___y_3195_ = _args[12];
lean_object* v___y_3196_ = _args[13];
lean_object* v___y_3197_ = _args[14];
lean_object* v___y_3198_ = _args[15];
lean_object* v___y_3199_ = _args[16];
_start:
{
uint8_t v___x_78001__boxed_3200_; lean_object* v_res_3201_; 
v___x_78001__boxed_3200_ = lean_unbox(v___x_3187_);
v_res_3201_ = l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4(v_fst_3183_, v_fst_3184_, v___x_3185_, v_fst_3186_, v___x_78001__boxed_3200_, v___x_3188_, v_snd_3189_, v_xs_3190_, v___y_3191_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_);
lean_dec(v___y_3198_);
lean_dec_ref(v___y_3197_);
lean_dec(v___y_3196_);
lean_dec_ref(v___y_3195_);
lean_dec(v___y_3194_);
lean_dec_ref(v___y_3193_);
lean_dec(v___y_3192_);
lean_dec_ref(v___y_3191_);
return v_res_3201_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4___redArg(lean_object* v_as_3202_, size_t v_sz_3203_, size_t v_i_3204_, lean_object* v_b_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_){
_start:
{
uint8_t v___x_3211_; 
v___x_3211_ = lean_usize_dec_lt(v_i_3204_, v_sz_3203_);
if (v___x_3211_ == 0)
{
lean_object* v___x_3212_; 
v___x_3212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3212_, 0, v_b_3205_);
return v___x_3212_;
}
else
{
lean_object* v___x_3213_; lean_object* v_a_3214_; lean_object* v___x_3215_; 
v___x_3213_ = lean_box(1);
v_a_3214_ = lean_array_uget_borrowed(v_as_3202_, v_i_3204_);
lean_inc(v_a_3214_);
v___x_3215_ = l_Lean_PrettyPrinter_delab(v_a_3214_, v___x_3213_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_);
if (lean_obj_tag(v___x_3215_) == 0)
{
lean_object* v_a_3216_; lean_object* v___x_3217_; size_t v___x_3218_; size_t v___x_3219_; 
v_a_3216_ = lean_ctor_get(v___x_3215_, 0);
lean_inc(v_a_3216_);
lean_dec_ref_known(v___x_3215_, 1);
v___x_3217_ = lean_array_push(v_b_3205_, v_a_3216_);
v___x_3218_ = ((size_t)1ULL);
v___x_3219_ = lean_usize_add(v_i_3204_, v___x_3218_);
v_i_3204_ = v___x_3219_;
v_b_3205_ = v___x_3217_;
goto _start;
}
else
{
lean_object* v_a_3221_; lean_object* v___x_3223_; uint8_t v_isShared_3224_; uint8_t v_isSharedCheck_3228_; 
lean_dec_ref(v_b_3205_);
v_a_3221_ = lean_ctor_get(v___x_3215_, 0);
v_isSharedCheck_3228_ = !lean_is_exclusive(v___x_3215_);
if (v_isSharedCheck_3228_ == 0)
{
v___x_3223_ = v___x_3215_;
v_isShared_3224_ = v_isSharedCheck_3228_;
goto v_resetjp_3222_;
}
else
{
lean_inc(v_a_3221_);
lean_dec(v___x_3215_);
v___x_3223_ = lean_box(0);
v_isShared_3224_ = v_isSharedCheck_3228_;
goto v_resetjp_3222_;
}
v_resetjp_3222_:
{
lean_object* v___x_3226_; 
if (v_isShared_3224_ == 0)
{
v___x_3226_ = v___x_3223_;
goto v_reusejp_3225_;
}
else
{
lean_object* v_reuseFailAlloc_3227_; 
v_reuseFailAlloc_3227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3227_, 0, v_a_3221_);
v___x_3226_ = v_reuseFailAlloc_3227_;
goto v_reusejp_3225_;
}
v_reusejp_3225_:
{
return v___x_3226_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4___redArg___boxed(lean_object* v_as_3229_, lean_object* v_sz_3230_, lean_object* v_i_3231_, lean_object* v_b_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_){
_start:
{
size_t v_sz_boxed_3238_; size_t v_i_boxed_3239_; lean_object* v_res_3240_; 
v_sz_boxed_3238_ = lean_unbox_usize(v_sz_3230_);
lean_dec(v_sz_3230_);
v_i_boxed_3239_ = lean_unbox_usize(v_i_3231_);
lean_dec(v_i_3231_);
v_res_3240_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4___redArg(v_as_3229_, v_sz_boxed_3238_, v_i_boxed_3239_, v_b_3232_, v___y_3233_, v___y_3234_, v___y_3235_, v___y_3236_);
lean_dec(v___y_3236_);
lean_dec_ref(v___y_3235_);
lean_dec(v___y_3234_);
lean_dec_ref(v___y_3233_);
lean_dec_ref(v_as_3229_);
return v_res_3240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5(lean_object* v_xs_3261_, lean_object* v_fst_3262_, lean_object* v_snd_3263_, lean_object* v___x_3264_, lean_object* v___x_3265_, lean_object* v___x_3266_, lean_object* v___x_3267_, lean_object* v___x_3268_, lean_object* v___x_3269_, lean_object* v___x_3270_, lean_object* v___x_3271_, uint8_t v___x_3272_, lean_object* v_letMuts_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_){
_start:
{
lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; 
v___x_3283_ = lean_unsigned_to_nat(2u);
v___x_3284_ = lean_mk_empty_array_with_capacity(v___x_3283_);
v___x_3285_ = lean_array_push(v___x_3284_, v_xs_3261_);
v___x_3286_ = lean_array_push(v___x_3285_, v_letMuts_3273_);
v___x_3287_ = l_Lean_Expr_beta(v_fst_3262_, v___x_3286_);
v___x_3288_ = lean_box(1);
v___x_3289_ = l_Lean_PrettyPrinter_delab(v___x_3287_, v___x_3288_, v___y_3278_, v___y_3279_, v___y_3280_, v___y_3281_);
if (lean_obj_tag(v___x_3289_) == 0)
{
lean_object* v_a_3290_; lean_object* v___x_3292_; uint8_t v_isShared_3293_; uint8_t v_isSharedCheck_3429_; 
v_a_3290_ = lean_ctor_get(v___x_3289_, 0);
v_isSharedCheck_3429_ = !lean_is_exclusive(v___x_3289_);
if (v_isSharedCheck_3429_ == 0)
{
v___x_3292_ = v___x_3289_;
v_isShared_3293_ = v_isSharedCheck_3429_;
goto v_resetjp_3291_;
}
else
{
lean_inc(v_a_3290_);
lean_dec(v___x_3289_);
v___x_3292_ = lean_box(0);
v_isShared_3293_ = v_isSharedCheck_3429_;
goto v_resetjp_3291_;
}
v_resetjp_3291_:
{
uint8_t v___y_3295_; lean_object* v_points_3332_; lean_object* v_default_3333_; lean_object* v___x_3335_; uint8_t v_isShared_3336_; uint8_t v_isSharedCheck_3428_; 
v_points_3332_ = lean_ctor_get(v_snd_3263_, 0);
v_default_3333_ = lean_ctor_get(v_snd_3263_, 1);
v_isSharedCheck_3428_ = !lean_is_exclusive(v_snd_3263_);
if (v_isSharedCheck_3428_ == 0)
{
v___x_3335_ = v_snd_3263_;
v_isShared_3336_ = v_isSharedCheck_3428_;
goto v_resetjp_3334_;
}
else
{
lean_inc(v_default_3333_);
lean_inc(v_points_3332_);
lean_dec(v_snd_3263_);
v___x_3335_ = lean_box(0);
v_isShared_3336_ = v_isSharedCheck_3428_;
goto v_resetjp_3334_;
}
v___jp_3294_:
{
lean_object* v_toCold_3296_; lean_object* v_ref_3297_; lean_object* v_quotContext_3298_; lean_object* v_currMacroScope_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3330_; 
v_toCold_3296_ = lean_ctor_get(v___y_3280_, 0);
v_ref_3297_ = lean_ctor_get(v___y_3280_, 2);
v_quotContext_3298_ = lean_ctor_get(v_toCold_3296_, 8);
v_currMacroScope_3299_ = lean_ctor_get(v_toCold_3296_, 9);
v___x_3300_ = l_Lean_SourceInfo_fromRef(v_ref_3297_, v___y_3295_);
v___x_3301_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__0));
v___x_3302_ = l_Lean_Name_mkStr3(v___x_3270_, v___x_3271_, v___x_3301_);
v___x_3303_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__2));
v___x_3304_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
lean_inc_n(v___x_3300_, 11);
v___x_3305_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3305_, 0, v___x_3300_);
lean_ctor_set(v___x_3305_, 1, v___x_3303_);
lean_ctor_set(v___x_3305_, 2, v___x_3304_);
v___x_3306_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__3));
v___x_3307_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3307_, 0, v___x_3300_);
lean_ctor_set(v___x_3307_, 1, v___x_3306_);
v___x_3308_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_3309_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21));
v___x_3310_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__22));
v___x_3311_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3311_, 0, v___x_3300_);
lean_ctor_set(v___x_3311_, 1, v___x_3310_);
v___x_3312_ = l_String_toRawSubstring_x27(v___x_3264_);
lean_inc_n(v_currMacroScope_3299_, 2);
lean_inc_n(v_quotContext_3298_, 2);
v___x_3313_ = l_Lean_addMacroScope(v_quotContext_3298_, v___x_3265_, v_currMacroScope_3299_);
v___x_3314_ = lean_box(0);
v___x_3315_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3315_, 0, v___x_3300_);
lean_ctor_set(v___x_3315_, 1, v___x_3312_);
lean_ctor_set(v___x_3315_, 2, v___x_3313_);
lean_ctor_set(v___x_3315_, 3, v___x_3314_);
v___x_3316_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__0));
v___x_3317_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3317_, 0, v___x_3300_);
lean_ctor_set(v___x_3317_, 1, v___x_3316_);
v___x_3318_ = l_String_toRawSubstring_x27(v___x_3266_);
v___x_3319_ = l_Lean_addMacroScope(v_quotContext_3298_, v___x_3267_, v_currMacroScope_3299_);
v___x_3320_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3320_, 0, v___x_3300_);
lean_ctor_set(v___x_3320_, 1, v___x_3318_);
lean_ctor_set(v___x_3320_, 2, v___x_3319_);
lean_ctor_set(v___x_3320_, 3, v___x_3314_);
v___x_3321_ = l_Lean_Syntax_node3(v___x_3300_, v___x_3308_, v___x_3315_, v___x_3317_, v___x_3320_);
v___x_3322_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7));
v___x_3323_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3323_, 0, v___x_3300_);
lean_ctor_set(v___x_3323_, 1, v___x_3322_);
v___x_3324_ = l_Lean_Syntax_node3(v___x_3300_, v___x_3309_, v___x_3311_, v___x_3321_, v___x_3323_);
v___x_3325_ = l_Lean_Syntax_node1(v___x_3300_, v___x_3308_, v___x_3324_);
v___x_3326_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4));
v___x_3327_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3327_, 0, v___x_3300_);
lean_ctor_set(v___x_3327_, 1, v___x_3326_);
v___x_3328_ = l_Lean_Syntax_node5(v___x_3300_, v___x_3302_, v___x_3305_, v___x_3307_, v___x_3325_, v___x_3327_, v_a_3290_);
if (v_isShared_3293_ == 0)
{
lean_ctor_set(v___x_3292_, 0, v___x_3328_);
v___x_3330_ = v___x_3292_;
goto v_reusejp_3329_;
}
else
{
lean_object* v_reuseFailAlloc_3331_; 
v_reuseFailAlloc_3331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3331_, 0, v___x_3328_);
v___x_3330_ = v_reuseFailAlloc_3331_;
goto v_reusejp_3329_;
}
v_reusejp_3329_:
{
return v___x_3330_;
}
}
v_resetjp_3334_:
{
uint8_t v___y_3338_; lean_object* v___x_3389_; uint8_t v___x_3390_; 
v___x_3389_ = lean_array_get_size(v_points_3332_);
v___x_3390_ = lean_nat_dec_eq(v___x_3389_, v___x_3269_);
if (v___x_3390_ == 0)
{
lean_del_object(v___x_3292_);
lean_dec_ref(v___x_3271_);
lean_dec_ref(v___x_3270_);
v___y_3338_ = v___x_3390_;
goto v___jp_3337_;
}
else
{
if (lean_obj_tag(v_default_3333_) == 3)
{
uint8_t v___x_3391_; 
lean_del_object(v___x_3292_);
lean_dec_ref(v___x_3271_);
lean_dec_ref(v___x_3270_);
v___x_3391_ = 0;
v___y_3338_ = v___x_3391_;
goto v___jp_3337_;
}
else
{
lean_del_object(v___x_3335_);
lean_dec_ref(v_points_3332_);
if (lean_obj_tag(v_default_3333_) == 2)
{
if (v___x_3272_ == 0)
{
v___y_3295_ = v___x_3272_;
goto v___jp_3294_;
}
else
{
lean_object* v_toCold_3392_; lean_object* v_ref_3393_; lean_object* v_quotContext_3394_; lean_object* v_currMacroScope_3395_; uint8_t v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; 
lean_del_object(v___x_3292_);
v_toCold_3392_ = lean_ctor_get(v___y_3280_, 0);
v_ref_3393_ = lean_ctor_get(v___y_3280_, 2);
v_quotContext_3394_ = lean_ctor_get(v_toCold_3392_, 8);
v_currMacroScope_3395_ = lean_ctor_get(v_toCold_3392_, 9);
v___x_3396_ = 0;
v___x_3397_ = l_Lean_SourceInfo_fromRef(v_ref_3393_, v___x_3396_);
v___x_3398_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__9));
v___x_3399_ = l_Lean_Name_mkStr3(v___x_3270_, v___x_3271_, v___x_3398_);
v___x_3400_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__2));
v___x_3401_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
lean_inc_n(v___x_3397_, 11);
v___x_3402_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3402_, 0, v___x_3397_);
lean_ctor_set(v___x_3402_, 1, v___x_3400_);
lean_ctor_set(v___x_3402_, 2, v___x_3401_);
v___x_3403_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__10));
v___x_3404_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3404_, 0, v___x_3397_);
lean_ctor_set(v___x_3404_, 1, v___x_3403_);
v___x_3405_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_3406_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21));
v___x_3407_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__22));
v___x_3408_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3408_, 0, v___x_3397_);
lean_ctor_set(v___x_3408_, 1, v___x_3407_);
v___x_3409_ = l_String_toRawSubstring_x27(v___x_3264_);
lean_inc_n(v_currMacroScope_3395_, 2);
lean_inc_n(v_quotContext_3394_, 2);
v___x_3410_ = l_Lean_addMacroScope(v_quotContext_3394_, v___x_3265_, v_currMacroScope_3395_);
v___x_3411_ = lean_box(0);
v___x_3412_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3412_, 0, v___x_3397_);
lean_ctor_set(v___x_3412_, 1, v___x_3409_);
lean_ctor_set(v___x_3412_, 2, v___x_3410_);
lean_ctor_set(v___x_3412_, 3, v___x_3411_);
v___x_3413_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__0));
v___x_3414_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3414_, 0, v___x_3397_);
lean_ctor_set(v___x_3414_, 1, v___x_3413_);
v___x_3415_ = l_String_toRawSubstring_x27(v___x_3266_);
v___x_3416_ = l_Lean_addMacroScope(v_quotContext_3394_, v___x_3267_, v_currMacroScope_3395_);
v___x_3417_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3417_, 0, v___x_3397_);
lean_ctor_set(v___x_3417_, 1, v___x_3415_);
lean_ctor_set(v___x_3417_, 2, v___x_3416_);
lean_ctor_set(v___x_3417_, 3, v___x_3411_);
v___x_3418_ = l_Lean_Syntax_node3(v___x_3397_, v___x_3405_, v___x_3412_, v___x_3414_, v___x_3417_);
v___x_3419_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7));
v___x_3420_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3420_, 0, v___x_3397_);
lean_ctor_set(v___x_3420_, 1, v___x_3419_);
v___x_3421_ = l_Lean_Syntax_node3(v___x_3397_, v___x_3406_, v___x_3408_, v___x_3418_, v___x_3420_);
v___x_3422_ = l_Lean_Syntax_node1(v___x_3397_, v___x_3405_, v___x_3421_);
v___x_3423_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4));
v___x_3424_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3424_, 0, v___x_3397_);
lean_ctor_set(v___x_3424_, 1, v___x_3423_);
v___x_3425_ = l_Lean_Syntax_node5(v___x_3397_, v___x_3399_, v___x_3402_, v___x_3404_, v___x_3422_, v___x_3424_, v_a_3290_);
v___x_3426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3426_, 0, v___x_3425_);
return v___x_3426_;
}
}
else
{
uint8_t v___x_3427_; 
lean_dec(v_default_3333_);
v___x_3427_ = 0;
v___y_3295_ = v___x_3427_;
goto v___jp_3294_;
}
}
}
v___jp_3337_:
{
lean_object* v_toCold_3339_; lean_object* v_ref_3340_; lean_object* v_quotContext_3341_; lean_object* v_currMacroScope_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3347_; 
v_toCold_3339_ = lean_ctor_get(v___y_3280_, 0);
v_ref_3340_ = lean_ctor_get(v___y_3280_, 2);
v_quotContext_3341_ = lean_ctor_get(v_toCold_3339_, 8);
v_currMacroScope_3342_ = lean_ctor_get(v_toCold_3339_, 9);
v___x_3343_ = l_Lean_SourceInfo_fromRef(v_ref_3340_, v___y_3338_);
v___x_3344_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__5));
v___x_3345_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__6));
lean_inc(v___x_3343_);
if (v_isShared_3336_ == 0)
{
lean_ctor_set_tag(v___x_3335_, 2);
lean_ctor_set(v___x_3335_, 1, v___x_3344_);
lean_ctor_set(v___x_3335_, 0, v___x_3343_);
v___x_3347_ = v___x_3335_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3388_; 
v_reuseFailAlloc_3388_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3388_, 0, v___x_3343_);
lean_ctor_set(v_reuseFailAlloc_3388_, 1, v___x_3344_);
v___x_3347_ = v_reuseFailAlloc_3388_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; size_t v_sz_3375_; size_t v___x_3376_; lean_object* v___x_3377_; 
v___x_3348_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__8));
v___x_3349_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_3350_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21));
v___x_3351_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__22));
lean_inc_n(v___x_3343_, 11);
v___x_3352_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3352_, 0, v___x_3343_);
lean_ctor_set(v___x_3352_, 1, v___x_3351_);
v___x_3353_ = l_String_toRawSubstring_x27(v___x_3264_);
lean_inc_n(v_currMacroScope_3342_, 2);
lean_inc_n(v_quotContext_3341_, 2);
v___x_3354_ = l_Lean_addMacroScope(v_quotContext_3341_, v___x_3265_, v_currMacroScope_3342_);
v___x_3355_ = lean_box(0);
v___x_3356_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3356_, 0, v___x_3343_);
lean_ctor_set(v___x_3356_, 1, v___x_3353_);
lean_ctor_set(v___x_3356_, 2, v___x_3354_);
lean_ctor_set(v___x_3356_, 3, v___x_3355_);
v___x_3357_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__0));
v___x_3358_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3358_, 0, v___x_3343_);
lean_ctor_set(v___x_3358_, 1, v___x_3357_);
v___x_3359_ = l_String_toRawSubstring_x27(v___x_3266_);
v___x_3360_ = l_Lean_addMacroScope(v_quotContext_3341_, v___x_3267_, v_currMacroScope_3342_);
v___x_3361_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3361_, 0, v___x_3343_);
lean_ctor_set(v___x_3361_, 1, v___x_3359_);
lean_ctor_set(v___x_3361_, 2, v___x_3360_);
lean_ctor_set(v___x_3361_, 3, v___x_3355_);
v___x_3362_ = l_Lean_Syntax_node3(v___x_3343_, v___x_3349_, v___x_3356_, v___x_3358_, v___x_3361_);
v___x_3363_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7));
v___x_3364_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3364_, 0, v___x_3343_);
lean_ctor_set(v___x_3364_, 1, v___x_3363_);
v___x_3365_ = l_Lean_Syntax_node3(v___x_3343_, v___x_3350_, v___x_3352_, v___x_3362_, v___x_3364_);
v___x_3366_ = l_Lean_Syntax_node1(v___x_3343_, v___x_3349_, v___x_3365_);
v___x_3367_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
v___x_3368_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3368_, 0, v___x_3343_);
lean_ctor_set(v___x_3368_, 1, v___x_3349_);
lean_ctor_set(v___x_3368_, 2, v___x_3367_);
v___x_3369_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4));
v___x_3370_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3370_, 0, v___x_3343_);
lean_ctor_set(v___x_3370_, 1, v___x_3369_);
v___x_3371_ = l_Lean_Syntax_node4(v___x_3343_, v___x_3348_, v___x_3366_, v___x_3368_, v___x_3370_, v_a_3290_);
v___x_3372_ = l_Lean_Syntax_node2(v___x_3343_, v___x_3345_, v___x_3347_, v___x_3371_);
v___x_3373_ = lean_mk_empty_array_with_capacity(v___x_3268_);
v___x_3374_ = lean_array_push(v___x_3373_, v___x_3372_);
v_sz_3375_ = lean_array_size(v_points_3332_);
v___x_3376_ = ((size_t)0ULL);
v___x_3377_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4___redArg(v_points_3332_, v_sz_3375_, v___x_3376_, v___x_3374_, v___y_3278_, v___y_3279_, v___y_3280_, v___y_3281_);
lean_dec_ref(v_points_3332_);
if (lean_obj_tag(v___x_3377_) == 0)
{
lean_object* v_a_3378_; lean_object* v___x_3379_; 
v_a_3378_ = lean_ctor_get(v___x_3377_, 0);
lean_inc(v_a_3378_);
lean_dec_ref_known(v___x_3377_, 1);
v___x_3379_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions(v_a_3378_, v_default_3333_, v___y_3278_, v___y_3279_, v___y_3280_, v___y_3281_);
lean_dec(v_a_3378_);
return v___x_3379_;
}
else
{
lean_object* v_a_3380_; lean_object* v___x_3382_; uint8_t v_isShared_3383_; uint8_t v_isSharedCheck_3387_; 
lean_dec(v_default_3333_);
v_a_3380_ = lean_ctor_get(v___x_3377_, 0);
v_isSharedCheck_3387_ = !lean_is_exclusive(v___x_3377_);
if (v_isSharedCheck_3387_ == 0)
{
v___x_3382_ = v___x_3377_;
v_isShared_3383_ = v_isSharedCheck_3387_;
goto v_resetjp_3381_;
}
else
{
lean_inc(v_a_3380_);
lean_dec(v___x_3377_);
v___x_3382_ = lean_box(0);
v_isShared_3383_ = v_isSharedCheck_3387_;
goto v_resetjp_3381_;
}
v_resetjp_3381_:
{
lean_object* v___x_3385_; 
if (v_isShared_3383_ == 0)
{
v___x_3385_ = v___x_3382_;
goto v_reusejp_3384_;
}
else
{
lean_object* v_reuseFailAlloc_3386_; 
v_reuseFailAlloc_3386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3386_, 0, v_a_3380_);
v___x_3385_ = v_reuseFailAlloc_3386_;
goto v_reusejp_3384_;
}
v_reusejp_3384_:
{
return v___x_3385_;
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
lean_dec_ref(v___x_3271_);
lean_dec_ref(v___x_3270_);
lean_dec(v___x_3267_);
lean_dec_ref(v___x_3266_);
lean_dec(v___x_3265_);
lean_dec_ref(v___x_3264_);
lean_dec_ref(v_snd_3263_);
return v___x_3289_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___boxed(lean_object** _args){
lean_object* v_xs_3430_ = _args[0];
lean_object* v_fst_3431_ = _args[1];
lean_object* v_snd_3432_ = _args[2];
lean_object* v___x_3433_ = _args[3];
lean_object* v___x_3434_ = _args[4];
lean_object* v___x_3435_ = _args[5];
lean_object* v___x_3436_ = _args[6];
lean_object* v___x_3437_ = _args[7];
lean_object* v___x_3438_ = _args[8];
lean_object* v___x_3439_ = _args[9];
lean_object* v___x_3440_ = _args[10];
lean_object* v___x_3441_ = _args[11];
lean_object* v_letMuts_3442_ = _args[12];
lean_object* v___y_3443_ = _args[13];
lean_object* v___y_3444_ = _args[14];
lean_object* v___y_3445_ = _args[15];
lean_object* v___y_3446_ = _args[16];
lean_object* v___y_3447_ = _args[17];
lean_object* v___y_3448_ = _args[18];
lean_object* v___y_3449_ = _args[19];
lean_object* v___y_3450_ = _args[20];
lean_object* v___y_3451_ = _args[21];
_start:
{
uint8_t v___x_78208__boxed_3452_; lean_object* v_res_3453_; 
v___x_78208__boxed_3452_ = lean_unbox(v___x_3441_);
v_res_3453_ = l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5(v_xs_3430_, v_fst_3431_, v_snd_3432_, v___x_3433_, v___x_3434_, v___x_3435_, v___x_3436_, v___x_3437_, v___x_3438_, v___x_3439_, v___x_3440_, v___x_78208__boxed_3452_, v_letMuts_3442_, v___y_3443_, v___y_3444_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_);
lean_dec(v___y_3450_);
lean_dec_ref(v___y_3449_);
lean_dec(v___y_3448_);
lean_dec_ref(v___y_3447_);
lean_dec(v___y_3446_);
lean_dec_ref(v___y_3445_);
lean_dec(v___y_3444_);
lean_dec_ref(v___y_3443_);
lean_dec(v___x_3438_);
lean_dec(v___x_3437_);
return v_res_3453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__6(lean_object* v_fst_3454_, lean_object* v_snd_3455_, lean_object* v___x_3456_, lean_object* v___x_3457_, lean_object* v___x_3458_, lean_object* v___x_3459_, lean_object* v___x_3460_, lean_object* v___x_3461_, uint8_t v___x_3462_, lean_object* v_arg_3463_, lean_object* v_xs_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_){
_start:
{
lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___f_3477_; lean_object* v___x_3478_; 
v___x_3474_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__0));
v___x_3475_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1));
v___x_3476_ = lean_box(v___x_3462_);
v___f_3477_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___boxed), 22, 12);
lean_closure_set(v___f_3477_, 0, v_xs_3464_);
lean_closure_set(v___f_3477_, 1, v_fst_3454_);
lean_closure_set(v___f_3477_, 2, v_snd_3455_);
lean_closure_set(v___f_3477_, 3, v___x_3456_);
lean_closure_set(v___f_3477_, 4, v___x_3457_);
lean_closure_set(v___f_3477_, 5, v___x_3474_);
lean_closure_set(v___f_3477_, 6, v___x_3475_);
lean_closure_set(v___f_3477_, 7, v___x_3458_);
lean_closure_set(v___f_3477_, 8, v___x_3459_);
lean_closure_set(v___f_3477_, 9, v___x_3460_);
lean_closure_set(v___f_3477_, 10, v___x_3461_);
lean_closure_set(v___f_3477_, 11, v___x_3476_);
v___x_3478_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(v___x_3475_, v_arg_3463_, v___f_3477_, v___y_3465_, v___y_3466_, v___y_3467_, v___y_3468_, v___y_3469_, v___y_3470_, v___y_3471_, v___y_3472_);
return v___x_3478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__6___boxed(lean_object** _args){
lean_object* v_fst_3479_ = _args[0];
lean_object* v_snd_3480_ = _args[1];
lean_object* v___x_3481_ = _args[2];
lean_object* v___x_3482_ = _args[3];
lean_object* v___x_3483_ = _args[4];
lean_object* v___x_3484_ = _args[5];
lean_object* v___x_3485_ = _args[6];
lean_object* v___x_3486_ = _args[7];
lean_object* v___x_3487_ = _args[8];
lean_object* v_arg_3488_ = _args[9];
lean_object* v_xs_3489_ = _args[10];
lean_object* v___y_3490_ = _args[11];
lean_object* v___y_3491_ = _args[12];
lean_object* v___y_3492_ = _args[13];
lean_object* v___y_3493_ = _args[14];
lean_object* v___y_3494_ = _args[15];
lean_object* v___y_3495_ = _args[16];
lean_object* v___y_3496_ = _args[17];
lean_object* v___y_3497_ = _args[18];
lean_object* v___y_3498_ = _args[19];
_start:
{
uint8_t v___x_78555__boxed_3499_; lean_object* v_res_3500_; 
v___x_78555__boxed_3499_ = lean_unbox(v___x_3487_);
v_res_3500_ = l_Lean_Elab_Tactic_Do_suggestInvariant___lam__6(v_fst_3479_, v_snd_3480_, v___x_3481_, v___x_3482_, v___x_3483_, v___x_3484_, v___x_3485_, v___x_3486_, v___x_78555__boxed_3499_, v_arg_3488_, v_xs_3489_, v___y_3490_, v___y_3491_, v___y_3492_, v___y_3493_, v___y_3494_, v___y_3495_, v___y_3496_, v___y_3497_);
lean_dec(v___y_3497_);
lean_dec_ref(v___y_3496_);
lean_dec(v___y_3495_);
lean_dec_ref(v___y_3494_);
lean_dec(v___y_3493_);
lean_dec_ref(v___y_3492_);
lean_dec(v___y_3491_);
lean_dec_ref(v___y_3490_);
return v_res_3500_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3___redArg(lean_object* v_as_3501_, size_t v_sz_3502_, size_t v_i_3503_, lean_object* v_b_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_){
_start:
{
uint8_t v___x_3510_; 
v___x_3510_ = lean_usize_dec_lt(v_i_3503_, v_sz_3502_);
if (v___x_3510_ == 0)
{
lean_object* v___x_3511_; 
v___x_3511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3511_, 0, v_b_3504_);
return v___x_3511_;
}
else
{
lean_object* v_a_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; 
v_a_3512_ = lean_array_uget_borrowed(v_as_3501_, v_i_3503_);
v___x_3513_ = lean_box(1);
lean_inc(v_a_3512_);
v___x_3514_ = l_Lean_PrettyPrinter_delab(v_a_3512_, v___x_3513_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_);
if (lean_obj_tag(v___x_3514_) == 0)
{
lean_object* v_a_3515_; lean_object* v___x_3516_; size_t v___x_3517_; size_t v___x_3518_; 
v_a_3515_ = lean_ctor_get(v___x_3514_, 0);
lean_inc(v_a_3515_);
lean_dec_ref_known(v___x_3514_, 1);
v___x_3516_ = lean_array_push(v_b_3504_, v_a_3515_);
v___x_3517_ = ((size_t)1ULL);
v___x_3518_ = lean_usize_add(v_i_3503_, v___x_3517_);
v_i_3503_ = v___x_3518_;
v_b_3504_ = v___x_3516_;
goto _start;
}
else
{
lean_object* v_a_3520_; lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3527_; 
lean_dec_ref(v_b_3504_);
v_a_3520_ = lean_ctor_get(v___x_3514_, 0);
v_isSharedCheck_3527_ = !lean_is_exclusive(v___x_3514_);
if (v_isSharedCheck_3527_ == 0)
{
v___x_3522_ = v___x_3514_;
v_isShared_3523_ = v_isSharedCheck_3527_;
goto v_resetjp_3521_;
}
else
{
lean_inc(v_a_3520_);
lean_dec(v___x_3514_);
v___x_3522_ = lean_box(0);
v_isShared_3523_ = v_isSharedCheck_3527_;
goto v_resetjp_3521_;
}
v_resetjp_3521_:
{
lean_object* v___x_3525_; 
if (v_isShared_3523_ == 0)
{
v___x_3525_ = v___x_3522_;
goto v_reusejp_3524_;
}
else
{
lean_object* v_reuseFailAlloc_3526_; 
v_reuseFailAlloc_3526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3526_, 0, v_a_3520_);
v___x_3525_ = v_reuseFailAlloc_3526_;
goto v_reusejp_3524_;
}
v_reusejp_3524_:
{
return v___x_3525_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3___redArg___boxed(lean_object* v_as_3528_, lean_object* v_sz_3529_, lean_object* v_i_3530_, lean_object* v_b_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_){
_start:
{
size_t v_sz_boxed_3537_; size_t v_i_boxed_3538_; lean_object* v_res_3539_; 
v_sz_boxed_3537_ = lean_unbox_usize(v_sz_3529_);
lean_dec(v_sz_3529_);
v_i_boxed_3538_ = lean_unbox_usize(v_i_3530_);
lean_dec(v_i_3530_);
v_res_3539_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3___redArg(v_as_3528_, v_sz_boxed_3537_, v_i_boxed_3538_, v_b_3531_, v___y_3532_, v___y_3533_, v___y_3534_, v___y_3535_);
lean_dec(v___y_3535_);
lean_dec_ref(v___y_3534_);
lean_dec(v___y_3533_);
lean_dec_ref(v___y_3532_);
lean_dec_ref(v_as_3528_);
return v_res_3539_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3(void){
_start:
{
lean_object* v___x_3547_; lean_object* v___x_3548_; 
v___x_3547_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__2));
v___x_3548_ = l_String_toRawSubstring_x27(v___x_3547_);
return v___x_3548_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9(void){
_start:
{
lean_object* v___x_3558_; lean_object* v___x_3559_; 
v___x_3558_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__8));
v___x_3559_ = l_String_toRawSubstring_x27(v___x_3558_);
return v___x_3559_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12(void){
_start:
{
lean_object* v___x_3563_; lean_object* v___x_3564_; 
v___x_3563_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__0));
v___x_3564_ = l_String_toRawSubstring_x27(v___x_3563_);
return v___x_3564_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13(void){
_start:
{
lean_object* v___x_3565_; lean_object* v___x_3566_; 
v___x_3565_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__0));
v___x_3566_ = l_String_toRawSubstring_x27(v___x_3565_);
return v___x_3566_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16(void){
_start:
{
lean_object* v___x_3569_; lean_object* v___x_3570_; 
v___x_3569_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__15));
v___x_3570_ = l_String_toRawSubstring_x27(v___x_3569_);
return v___x_3570_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19(void){
_start:
{
lean_object* v___x_3574_; lean_object* v___x_3575_; 
v___x_3574_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__18));
v___x_3575_ = l_String_toRawSubstring_x27(v___x_3574_);
return v___x_3575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7(lean_object* v___x_3585_, lean_object* v___x_3586_, lean_object* v___f_3587_, lean_object* v_a_3588_, lean_object* v_inv_3589_, lean_object* v_arg_3590_, lean_object* v___x_3591_, uint8_t v___x_3592_, lean_object* v___x_3593_, lean_object* v___x_3594_, lean_object* v___x_3595_, lean_object* v___x_3596_, lean_object* v___x_3597_, lean_object* v___y_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_){
_start:
{
lean_object* v_a_3608_; lean_object* v___y_3612_; lean_object* v___x_3614_; 
lean_inc_ref(v___x_3586_);
lean_inc(v___x_3585_);
v___x_3614_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(v___x_3585_, v___x_3586_, v___f_3587_, v___y_3598_, v___y_3599_, v___y_3600_, v___y_3601_, v___y_3602_, v___y_3603_, v___y_3604_, v___y_3605_);
if (lean_obj_tag(v___x_3614_) == 0)
{
lean_object* v_a_3615_; lean_object* v___x_3616_; 
v_a_3615_ = lean_ctor_get(v___x_3614_, 0);
lean_inc(v_a_3615_);
lean_dec_ref_known(v___x_3614_, 1);
v___x_3616_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_hasEarlyReturn(v_a_3588_, v_inv_3589_, v_arg_3590_, v___y_3602_, v___y_3603_, v___y_3604_, v___y_3605_);
if (lean_obj_tag(v___x_3616_) == 0)
{
lean_object* v_a_3617_; 
v_a_3617_ = lean_ctor_get(v___x_3616_, 0);
lean_inc(v_a_3617_);
lean_dec_ref_known(v___x_3616_, 1);
if (lean_obj_tag(v_a_3617_) == 1)
{
lean_object* v_val_3618_; lean_object* v___x_3620_; uint8_t v_isShared_3621_; uint8_t v_isSharedCheck_4103_; 
lean_dec_ref(v_arg_3590_);
v_val_3618_ = lean_ctor_get(v_a_3617_, 0);
v_isSharedCheck_4103_ = !lean_is_exclusive(v_a_3617_);
if (v_isSharedCheck_4103_ == 0)
{
v___x_3620_ = v_a_3617_;
v_isShared_3621_ = v_isSharedCheck_4103_;
goto v_resetjp_3619_;
}
else
{
lean_inc(v_val_3618_);
lean_dec(v_a_3617_);
v___x_3620_ = lean_box(0);
v_isShared_3621_ = v_isSharedCheck_4103_;
goto v_resetjp_3619_;
}
v_resetjp_3619_:
{
if (lean_obj_tag(v_a_3615_) == 1)
{
lean_object* v_val_3622_; lean_object* v___x_3624_; uint8_t v_isShared_3625_; uint8_t v_isSharedCheck_4025_; 
lean_del_object(v___x_3620_);
v_val_3622_ = lean_ctor_get(v_a_3615_, 0);
v_isSharedCheck_4025_ = !lean_is_exclusive(v_a_3615_);
if (v_isSharedCheck_4025_ == 0)
{
v___x_3624_ = v_a_3615_;
v_isShared_3625_ = v_isSharedCheck_4025_;
goto v_resetjp_3623_;
}
else
{
lean_inc(v_val_3622_);
lean_dec(v_a_3615_);
v___x_3624_ = lean_box(0);
v_isShared_3625_ = v_isSharedCheck_4025_;
goto v_resetjp_3623_;
}
v_resetjp_3623_:
{
lean_object* v_snd_3626_; lean_object* v_fst_3627_; lean_object* v_snd_3628_; lean_object* v___x_3630_; uint8_t v_isShared_3631_; uint8_t v_isSharedCheck_4024_; 
v_snd_3626_ = lean_ctor_get(v_val_3622_, 1);
lean_inc(v_snd_3626_);
v_fst_3627_ = lean_ctor_get(v_val_3618_, 0);
v_snd_3628_ = lean_ctor_get(v_val_3618_, 1);
v_isSharedCheck_4024_ = !lean_is_exclusive(v_val_3618_);
if (v_isSharedCheck_4024_ == 0)
{
v___x_3630_ = v_val_3618_;
v_isShared_3631_ = v_isSharedCheck_4024_;
goto v_resetjp_3629_;
}
else
{
lean_inc(v_snd_3628_);
lean_inc(v_fst_3627_);
lean_dec(v_val_3618_);
v___x_3630_ = lean_box(0);
v_isShared_3631_ = v_isSharedCheck_4024_;
goto v_resetjp_3629_;
}
v_resetjp_3629_:
{
lean_object* v_fst_3632_; lean_object* v___x_3634_; uint8_t v_isShared_3635_; uint8_t v_isSharedCheck_4022_; 
v_fst_3632_ = lean_ctor_get(v_val_3622_, 0);
v_isSharedCheck_4022_ = !lean_is_exclusive(v_val_3622_);
if (v_isSharedCheck_4022_ == 0)
{
lean_object* v_unused_4023_; 
v_unused_4023_ = lean_ctor_get(v_val_3622_, 1);
lean_dec(v_unused_4023_);
v___x_3634_ = v_val_3622_;
v_isShared_3635_ = v_isSharedCheck_4022_;
goto v_resetjp_3633_;
}
else
{
lean_inc(v_fst_3632_);
lean_dec(v_val_3622_);
v___x_3634_ = lean_box(0);
v_isShared_3635_ = v_isSharedCheck_4022_;
goto v_resetjp_3633_;
}
v_resetjp_3633_:
{
lean_object* v_fst_3636_; lean_object* v_snd_3637_; lean_object* v___x_3639_; uint8_t v_isShared_3640_; uint8_t v_isSharedCheck_4021_; 
v_fst_3636_ = lean_ctor_get(v_snd_3626_, 0);
v_snd_3637_ = lean_ctor_get(v_snd_3626_, 1);
v_isSharedCheck_4021_ = !lean_is_exclusive(v_snd_3626_);
if (v_isSharedCheck_4021_ == 0)
{
v___x_3639_ = v_snd_3626_;
v_isShared_3640_ = v_isSharedCheck_4021_;
goto v_resetjp_3638_;
}
else
{
lean_inc(v_snd_3637_);
lean_inc(v_fst_3636_);
lean_dec(v_snd_3626_);
v___x_3639_ = lean_box(0);
v_isShared_3640_ = v_isSharedCheck_4021_;
goto v_resetjp_3638_;
}
v_resetjp_3638_:
{
lean_object* v___x_3641_; lean_object* v___f_3642_; lean_object* v___x_3643_; 
v___x_3641_ = lean_box(v___x_3592_);
lean_inc(v___x_3593_);
v___f_3642_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___boxed), 17, 7);
lean_closure_set(v___f_3642_, 0, v_fst_3627_);
lean_closure_set(v___f_3642_, 1, v_fst_3632_);
lean_closure_set(v___f_3642_, 2, v___x_3591_);
lean_closure_set(v___f_3642_, 3, v_fst_3636_);
lean_closure_set(v___f_3642_, 4, v___x_3641_);
lean_closure_set(v___f_3642_, 5, v___x_3593_);
lean_closure_set(v___f_3642_, 6, v_snd_3628_);
lean_inc(v___x_3585_);
v___x_3643_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(v___x_3585_, v___x_3586_, v___f_3642_, v___y_3598_, v___y_3599_, v___y_3600_, v___y_3601_, v___y_3602_, v___y_3603_, v___y_3604_, v___y_3605_);
if (lean_obj_tag(v___x_3643_) == 0)
{
lean_object* v_a_3644_; lean_object* v_fst_3645_; lean_object* v_snd_3646_; lean_object* v___x_3648_; uint8_t v_isShared_3649_; uint8_t v_isSharedCheck_4012_; 
v_a_3644_ = lean_ctor_get(v___x_3643_, 0);
lean_inc(v_a_3644_);
lean_dec_ref_known(v___x_3643_, 1);
v_fst_3645_ = lean_ctor_get(v_a_3644_, 0);
v_snd_3646_ = lean_ctor_get(v_a_3644_, 1);
v_isSharedCheck_4012_ = !lean_is_exclusive(v_a_3644_);
if (v_isSharedCheck_4012_ == 0)
{
v___x_3648_ = v_a_3644_;
v_isShared_3649_ = v_isSharedCheck_4012_;
goto v_resetjp_3647_;
}
else
{
lean_inc(v_snd_3646_);
lean_inc(v_fst_3645_);
lean_dec(v_a_3644_);
v___x_3648_ = lean_box(0);
v_isShared_3649_ = v_isSharedCheck_4012_;
goto v_resetjp_3647_;
}
v_resetjp_3647_:
{
lean_object* v_points_3650_; lean_object* v_default_3651_; lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_4011_; 
v_points_3650_ = lean_ctor_get(v_snd_3637_, 0);
v_default_3651_ = lean_ctor_get(v_snd_3637_, 1);
v_isSharedCheck_4011_ = !lean_is_exclusive(v_snd_3637_);
if (v_isSharedCheck_4011_ == 0)
{
v___x_3653_ = v_snd_3637_;
v_isShared_3654_ = v_isSharedCheck_4011_;
goto v_resetjp_3652_;
}
else
{
lean_inc(v_default_3651_);
lean_inc(v_points_3650_);
lean_dec(v_snd_3637_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_4011_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v___x_3655_; uint8_t v___x_3656_; 
v___x_3655_ = lean_array_get_size(v_points_3650_);
v___x_3656_ = lean_nat_dec_eq(v___x_3655_, v___x_3593_);
if (v___x_3656_ == 0)
{
lean_object* v___x_3657_; size_t v_sz_3658_; size_t v___x_3659_; lean_object* v___x_3660_; 
lean_del_object(v___x_3624_);
v___x_3657_ = lean_mk_empty_array_with_capacity(v___x_3593_);
lean_dec(v___x_3593_);
v_sz_3658_ = lean_array_size(v_points_3650_);
v___x_3659_ = ((size_t)0ULL);
v___x_3660_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3___redArg(v_points_3650_, v_sz_3658_, v___x_3659_, v___x_3657_, v___y_3602_, v___y_3603_, v___y_3604_, v___y_3605_);
lean_dec_ref(v_points_3650_);
if (lean_obj_tag(v___x_3660_) == 0)
{
lean_object* v_a_3661_; lean_object* v___x_3662_; 
v_a_3661_ = lean_ctor_get(v___x_3660_, 0);
lean_inc(v_a_3661_);
lean_dec_ref_known(v___x_3660_, 1);
v___x_3662_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions(v_a_3661_, v_default_3651_, v___y_3602_, v___y_3603_, v___y_3604_, v___y_3605_);
lean_dec(v_a_3661_);
if (lean_obj_tag(v___x_3662_) == 0)
{
lean_object* v_toCold_3663_; lean_object* v_a_3664_; lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3746_; 
v_toCold_3663_ = lean_ctor_get(v___y_3604_, 0);
lean_inc_ref(v_toCold_3663_);
v_a_3664_ = lean_ctor_get(v___x_3662_, 0);
v_isSharedCheck_3746_ = !lean_is_exclusive(v___x_3662_);
if (v_isSharedCheck_3746_ == 0)
{
v___x_3666_ = v___x_3662_;
v_isShared_3667_ = v_isSharedCheck_3746_;
goto v_resetjp_3665_;
}
else
{
lean_inc(v_a_3664_);
lean_dec(v___x_3662_);
v___x_3666_ = lean_box(0);
v_isShared_3667_ = v_isSharedCheck_3746_;
goto v_resetjp_3665_;
}
v_resetjp_3665_:
{
lean_object* v_ref_3668_; lean_object* v_quotContext_3669_; lean_object* v_currMacroScope_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3680_; 
v_ref_3668_ = lean_ctor_get(v___y_3604_, 2);
lean_inc(v_ref_3668_);
lean_dec_ref(v___y_3604_);
v_quotContext_3669_ = lean_ctor_get(v_toCold_3663_, 8);
lean_inc_n(v_quotContext_3669_, 2);
v_currMacroScope_3670_ = lean_ctor_get(v_toCold_3663_, 9);
lean_inc_n(v_currMacroScope_3670_, 2);
lean_dec_ref(v_toCold_3663_);
v___x_3671_ = l_Lean_SourceInfo_fromRef(v_ref_3668_, v___x_3656_);
lean_dec(v_ref_3668_);
v___x_3672_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1));
v___x_3673_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3);
v___x_3674_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__4));
lean_inc_ref(v___x_3594_);
v___x_3675_ = l_Lean_Name_mkStr2(v___x_3594_, v___x_3674_);
v___x_3676_ = l_Lean_addMacroScope(v_quotContext_3669_, v___x_3675_, v_currMacroScope_3670_);
v___x_3677_ = l_Lean_Name_mkStr4(v___x_3595_, v___x_3596_, v___x_3594_, v___x_3674_);
v___x_3678_ = lean_box(0);
lean_inc(v___x_3677_);
if (v_isShared_3654_ == 0)
{
lean_ctor_set_tag(v___x_3653_, 1);
lean_ctor_set(v___x_3653_, 1, v___x_3678_);
lean_ctor_set(v___x_3653_, 0, v___x_3677_);
v___x_3680_ = v___x_3653_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3745_; 
v_reuseFailAlloc_3745_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3745_, 0, v___x_3677_);
lean_ctor_set(v_reuseFailAlloc_3745_, 1, v___x_3678_);
v___x_3680_ = v_reuseFailAlloc_3745_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
lean_object* v___x_3682_; 
if (v_isShared_3667_ == 0)
{
lean_ctor_set(v___x_3666_, 0, v___x_3677_);
v___x_3682_ = v___x_3666_;
goto v_reusejp_3681_;
}
else
{
lean_object* v_reuseFailAlloc_3744_; 
v_reuseFailAlloc_3744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3744_, 0, v___x_3677_);
v___x_3682_ = v_reuseFailAlloc_3744_;
goto v_reusejp_3681_;
}
v_reusejp_3681_:
{
lean_object* v___x_3684_; 
if (v_isShared_3649_ == 0)
{
lean_ctor_set_tag(v___x_3648_, 1);
lean_ctor_set(v___x_3648_, 1, v___x_3678_);
lean_ctor_set(v___x_3648_, 0, v___x_3682_);
v___x_3684_ = v___x_3648_;
goto v_reusejp_3683_;
}
else
{
lean_object* v_reuseFailAlloc_3743_; 
v_reuseFailAlloc_3743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3743_, 0, v___x_3682_);
lean_ctor_set(v_reuseFailAlloc_3743_, 1, v___x_3678_);
v___x_3684_ = v_reuseFailAlloc_3743_;
goto v_reusejp_3683_;
}
v_reusejp_3683_:
{
lean_object* v___x_3686_; 
if (v_isShared_3640_ == 0)
{
lean_ctor_set_tag(v___x_3639_, 1);
lean_ctor_set(v___x_3639_, 1, v___x_3684_);
lean_ctor_set(v___x_3639_, 0, v___x_3680_);
v___x_3686_ = v___x_3639_;
goto v_reusejp_3685_;
}
else
{
lean_object* v_reuseFailAlloc_3742_; 
v_reuseFailAlloc_3742_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3742_, 0, v___x_3680_);
lean_ctor_set(v_reuseFailAlloc_3742_, 1, v___x_3684_);
v___x_3686_ = v_reuseFailAlloc_3742_;
goto v_reusejp_3685_;
}
v_reusejp_3685_:
{
lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3692_; 
lean_inc_n(v___x_3671_, 2);
v___x_3687_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3687_, 0, v___x_3671_);
lean_ctor_set(v___x_3687_, 1, v___x_3673_);
lean_ctor_set(v___x_3687_, 2, v___x_3676_);
lean_ctor_set(v___x_3687_, 3, v___x_3686_);
v___x_3688_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_3689_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6));
v___x_3690_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__7));
if (v_isShared_3635_ == 0)
{
lean_ctor_set_tag(v___x_3634_, 2);
lean_ctor_set(v___x_3634_, 1, v___x_3690_);
lean_ctor_set(v___x_3634_, 0, v___x_3671_);
v___x_3692_ = v___x_3634_;
goto v_reusejp_3691_;
}
else
{
lean_object* v_reuseFailAlloc_3741_; 
v_reuseFailAlloc_3741_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3741_, 0, v___x_3671_);
lean_ctor_set(v_reuseFailAlloc_3741_, 1, v___x_3690_);
v___x_3692_ = v_reuseFailAlloc_3741_;
goto v_reusejp_3691_;
}
v_reusejp_3691_:
{
lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3699_; 
v___x_3693_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9);
v___x_3694_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__10));
lean_inc(v_currMacroScope_3670_);
lean_inc(v_quotContext_3669_);
v___x_3695_ = l_Lean_addMacroScope(v_quotContext_3669_, v___x_3694_, v_currMacroScope_3670_);
lean_inc_n(v___x_3671_, 2);
v___x_3696_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3696_, 0, v___x_3671_);
lean_ctor_set(v___x_3696_, 1, v___x_3693_);
lean_ctor_set(v___x_3696_, 2, v___x_3695_);
lean_ctor_set(v___x_3696_, 3, v___x_3678_);
v___x_3697_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__11));
if (v_isShared_3631_ == 0)
{
lean_ctor_set_tag(v___x_3630_, 2);
lean_ctor_set(v___x_3630_, 1, v___x_3697_);
lean_ctor_set(v___x_3630_, 0, v___x_3671_);
v___x_3699_ = v___x_3630_;
goto v_reusejp_3698_;
}
else
{
lean_object* v_reuseFailAlloc_3740_; 
v_reuseFailAlloc_3740_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3740_, 0, v___x_3671_);
lean_ctor_set(v_reuseFailAlloc_3740_, 1, v___x_3697_);
v___x_3699_ = v_reuseFailAlloc_3740_;
goto v_reusejp_3698_;
}
v_reusejp_3698_:
{
lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; 
v___x_3700_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__5));
v___x_3701_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__6));
lean_inc_n(v___x_3671_, 19);
v___x_3702_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3702_, 0, v___x_3671_);
lean_ctor_set(v___x_3702_, 1, v___x_3700_);
v___x_3703_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__8));
v___x_3704_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12);
v___x_3705_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__1));
lean_inc_n(v_currMacroScope_3670_, 4);
lean_inc_n(v_quotContext_3669_, 4);
v___x_3706_ = l_Lean_addMacroScope(v_quotContext_3669_, v___x_3705_, v_currMacroScope_3670_);
v___x_3707_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3707_, 0, v___x_3671_);
lean_ctor_set(v___x_3707_, 1, v___x_3704_);
lean_ctor_set(v___x_3707_, 2, v___x_3706_);
lean_ctor_set(v___x_3707_, 3, v___x_3678_);
v___x_3708_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13);
v___x_3709_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1));
v___x_3710_ = l_Lean_addMacroScope(v_quotContext_3669_, v___x_3709_, v_currMacroScope_3670_);
v___x_3711_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3711_, 0, v___x_3671_);
lean_ctor_set(v___x_3711_, 1, v___x_3708_);
lean_ctor_set(v___x_3711_, 2, v___x_3710_);
lean_ctor_set(v___x_3711_, 3, v___x_3678_);
lean_inc_ref(v___x_3711_);
v___x_3712_ = l_Lean_Syntax_node2(v___x_3671_, v___x_3688_, v___x_3707_, v___x_3711_);
v___x_3713_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
v___x_3714_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3714_, 0, v___x_3671_);
lean_ctor_set(v___x_3714_, 1, v___x_3688_);
lean_ctor_set(v___x_3714_, 2, v___x_3713_);
v___x_3715_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4));
v___x_3716_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3716_, 0, v___x_3671_);
lean_ctor_set(v___x_3716_, 1, v___x_3715_);
lean_inc_ref(v___x_3716_);
lean_inc_ref(v___x_3714_);
v___x_3717_ = l_Lean_Syntax_node4(v___x_3671_, v___x_3703_, v___x_3712_, v___x_3714_, v___x_3716_, v_snd_3646_);
lean_inc_ref(v___x_3702_);
v___x_3718_ = l_Lean_Syntax_node2(v___x_3671_, v___x_3701_, v___x_3702_, v___x_3717_);
v___x_3719_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__14));
v___x_3720_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3720_, 0, v___x_3671_);
lean_ctor_set(v___x_3720_, 1, v___x_3719_);
lean_inc_ref_n(v___x_3720_, 2);
lean_inc_ref_n(v___x_3699_, 2);
lean_inc_ref_n(v___x_3692_, 2);
v___x_3721_ = l_Lean_Syntax_node5(v___x_3671_, v___x_3689_, v___x_3692_, v___x_3696_, v___x_3699_, v___x_3718_, v___x_3720_);
v___x_3722_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16);
v___x_3723_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__17));
v___x_3724_ = l_Lean_addMacroScope(v_quotContext_3669_, v___x_3723_, v_currMacroScope_3670_);
v___x_3725_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3725_, 0, v___x_3671_);
lean_ctor_set(v___x_3725_, 1, v___x_3722_);
lean_ctor_set(v___x_3725_, 2, v___x_3724_);
lean_ctor_set(v___x_3725_, 3, v___x_3678_);
v___x_3726_ = l_String_toRawSubstring_x27(v___x_3597_);
v___x_3727_ = l_Lean_addMacroScope(v_quotContext_3669_, v___x_3585_, v_currMacroScope_3670_);
v___x_3728_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3728_, 0, v___x_3671_);
lean_ctor_set(v___x_3728_, 1, v___x_3726_);
lean_ctor_set(v___x_3728_, 2, v___x_3727_);
lean_ctor_set(v___x_3728_, 3, v___x_3678_);
v___x_3729_ = l_Lean_Syntax_node2(v___x_3671_, v___x_3688_, v___x_3728_, v___x_3711_);
v___x_3730_ = l_Lean_Syntax_node4(v___x_3671_, v___x_3703_, v___x_3729_, v___x_3714_, v___x_3716_, v_fst_3645_);
v___x_3731_ = l_Lean_Syntax_node2(v___x_3671_, v___x_3701_, v___x_3702_, v___x_3730_);
v___x_3732_ = l_Lean_Syntax_node5(v___x_3671_, v___x_3689_, v___x_3692_, v___x_3725_, v___x_3699_, v___x_3731_, v___x_3720_);
v___x_3733_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19);
v___x_3734_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__20));
v___x_3735_ = l_Lean_addMacroScope(v_quotContext_3669_, v___x_3734_, v_currMacroScope_3670_);
v___x_3736_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3736_, 0, v___x_3671_);
lean_ctor_set(v___x_3736_, 1, v___x_3733_);
lean_ctor_set(v___x_3736_, 2, v___x_3735_);
lean_ctor_set(v___x_3736_, 3, v___x_3678_);
v___x_3737_ = l_Lean_Syntax_node5(v___x_3671_, v___x_3689_, v___x_3692_, v___x_3736_, v___x_3699_, v_a_3664_, v___x_3720_);
v___x_3738_ = l_Lean_Syntax_node3(v___x_3671_, v___x_3688_, v___x_3721_, v___x_3732_, v___x_3737_);
v___x_3739_ = l_Lean_Syntax_node2(v___x_3671_, v___x_3672_, v___x_3687_, v___x_3738_);
v_a_3608_ = v___x_3739_;
goto v___jp_3607_;
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
lean_del_object(v___x_3653_);
lean_del_object(v___x_3648_);
lean_dec(v_snd_3646_);
lean_dec(v_fst_3645_);
lean_del_object(v___x_3639_);
lean_del_object(v___x_3634_);
lean_del_object(v___x_3630_);
lean_dec_ref(v___y_3604_);
lean_dec_ref(v___x_3597_);
lean_dec_ref(v___x_3596_);
lean_dec_ref(v___x_3595_);
lean_dec_ref(v___x_3594_);
lean_dec(v___x_3585_);
v___y_3612_ = v___x_3662_;
goto v___jp_3611_;
}
}
else
{
lean_object* v_a_3747_; lean_object* v___x_3749_; uint8_t v_isShared_3750_; uint8_t v_isSharedCheck_3754_; 
lean_del_object(v___x_3653_);
lean_dec(v_default_3651_);
lean_del_object(v___x_3648_);
lean_dec(v_snd_3646_);
lean_dec(v_fst_3645_);
lean_del_object(v___x_3639_);
lean_del_object(v___x_3634_);
lean_del_object(v___x_3630_);
lean_dec_ref(v___y_3604_);
lean_dec_ref(v___x_3597_);
lean_dec_ref(v___x_3596_);
lean_dec_ref(v___x_3595_);
lean_dec_ref(v___x_3594_);
lean_dec(v___x_3585_);
v_a_3747_ = lean_ctor_get(v___x_3660_, 0);
v_isSharedCheck_3754_ = !lean_is_exclusive(v___x_3660_);
if (v_isSharedCheck_3754_ == 0)
{
v___x_3749_ = v___x_3660_;
v_isShared_3750_ = v_isSharedCheck_3754_;
goto v_resetjp_3748_;
}
else
{
lean_inc(v_a_3747_);
lean_dec(v___x_3660_);
v___x_3749_ = lean_box(0);
v_isShared_3750_ = v_isSharedCheck_3754_;
goto v_resetjp_3748_;
}
v_resetjp_3748_:
{
lean_object* v___x_3752_; 
if (v_isShared_3750_ == 0)
{
v___x_3752_ = v___x_3749_;
goto v_reusejp_3751_;
}
else
{
lean_object* v_reuseFailAlloc_3753_; 
v_reuseFailAlloc_3753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3753_, 0, v_a_3747_);
v___x_3752_ = v_reuseFailAlloc_3753_;
goto v_reusejp_3751_;
}
v_reusejp_3751_:
{
return v___x_3752_;
}
}
}
}
else
{
lean_dec_ref(v_points_3650_);
lean_dec(v___x_3593_);
switch(lean_obj_tag(v_default_3651_))
{
case 2:
{
lean_object* v_toCold_3755_; lean_object* v_ref_3756_; lean_object* v_quotContext_3757_; lean_object* v_currMacroScope_3758_; uint8_t v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3769_; 
v_toCold_3755_ = lean_ctor_get(v___y_3604_, 0);
lean_inc_ref(v_toCold_3755_);
v_ref_3756_ = lean_ctor_get(v___y_3604_, 2);
lean_inc(v_ref_3756_);
lean_dec_ref(v___y_3604_);
v_quotContext_3757_ = lean_ctor_get(v_toCold_3755_, 8);
lean_inc_n(v_quotContext_3757_, 2);
v_currMacroScope_3758_ = lean_ctor_get(v_toCold_3755_, 9);
lean_inc_n(v_currMacroScope_3758_, 2);
lean_dec_ref(v_toCold_3755_);
v___x_3759_ = 0;
v___x_3760_ = l_Lean_SourceInfo_fromRef(v_ref_3756_, v___x_3759_);
lean_dec(v_ref_3756_);
v___x_3761_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1));
v___x_3762_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3);
v___x_3763_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__4));
lean_inc_ref(v___x_3594_);
v___x_3764_ = l_Lean_Name_mkStr2(v___x_3594_, v___x_3763_);
v___x_3765_ = l_Lean_addMacroScope(v_quotContext_3757_, v___x_3764_, v_currMacroScope_3758_);
lean_inc_ref(v___x_3596_);
lean_inc_ref(v___x_3595_);
v___x_3766_ = l_Lean_Name_mkStr4(v___x_3595_, v___x_3596_, v___x_3594_, v___x_3763_);
v___x_3767_ = lean_box(0);
lean_inc(v___x_3766_);
if (v_isShared_3654_ == 0)
{
lean_ctor_set_tag(v___x_3653_, 1);
lean_ctor_set(v___x_3653_, 1, v___x_3767_);
lean_ctor_set(v___x_3653_, 0, v___x_3766_);
v___x_3769_ = v___x_3653_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3845_; 
v_reuseFailAlloc_3845_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3845_, 0, v___x_3766_);
lean_ctor_set(v_reuseFailAlloc_3845_, 1, v___x_3767_);
v___x_3769_ = v_reuseFailAlloc_3845_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
lean_object* v___x_3771_; 
if (v_isShared_3625_ == 0)
{
lean_ctor_set_tag(v___x_3624_, 0);
lean_ctor_set(v___x_3624_, 0, v___x_3766_);
v___x_3771_ = v___x_3624_;
goto v_reusejp_3770_;
}
else
{
lean_object* v_reuseFailAlloc_3844_; 
v_reuseFailAlloc_3844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3844_, 0, v___x_3766_);
v___x_3771_ = v_reuseFailAlloc_3844_;
goto v_reusejp_3770_;
}
v_reusejp_3770_:
{
lean_object* v___x_3773_; 
if (v_isShared_3649_ == 0)
{
lean_ctor_set_tag(v___x_3648_, 1);
lean_ctor_set(v___x_3648_, 1, v___x_3767_);
lean_ctor_set(v___x_3648_, 0, v___x_3771_);
v___x_3773_ = v___x_3648_;
goto v_reusejp_3772_;
}
else
{
lean_object* v_reuseFailAlloc_3843_; 
v_reuseFailAlloc_3843_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3843_, 0, v___x_3771_);
lean_ctor_set(v_reuseFailAlloc_3843_, 1, v___x_3767_);
v___x_3773_ = v_reuseFailAlloc_3843_;
goto v_reusejp_3772_;
}
v_reusejp_3772_:
{
lean_object* v___x_3775_; 
if (v_isShared_3640_ == 0)
{
lean_ctor_set_tag(v___x_3639_, 1);
lean_ctor_set(v___x_3639_, 1, v___x_3773_);
lean_ctor_set(v___x_3639_, 0, v___x_3769_);
v___x_3775_ = v___x_3639_;
goto v_reusejp_3774_;
}
else
{
lean_object* v_reuseFailAlloc_3842_; 
v_reuseFailAlloc_3842_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3842_, 0, v___x_3769_);
lean_ctor_set(v_reuseFailAlloc_3842_, 1, v___x_3773_);
v___x_3775_ = v_reuseFailAlloc_3842_;
goto v_reusejp_3774_;
}
v_reusejp_3774_:
{
lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3781_; 
lean_inc_n(v___x_3760_, 2);
v___x_3776_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3776_, 0, v___x_3760_);
lean_ctor_set(v___x_3776_, 1, v___x_3762_);
lean_ctor_set(v___x_3776_, 2, v___x_3765_);
lean_ctor_set(v___x_3776_, 3, v___x_3775_);
v___x_3777_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_3778_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6));
v___x_3779_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__7));
if (v_isShared_3635_ == 0)
{
lean_ctor_set_tag(v___x_3634_, 2);
lean_ctor_set(v___x_3634_, 1, v___x_3779_);
lean_ctor_set(v___x_3634_, 0, v___x_3760_);
v___x_3781_ = v___x_3634_;
goto v_reusejp_3780_;
}
else
{
lean_object* v_reuseFailAlloc_3841_; 
v_reuseFailAlloc_3841_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3841_, 0, v___x_3760_);
lean_ctor_set(v_reuseFailAlloc_3841_, 1, v___x_3779_);
v___x_3781_ = v_reuseFailAlloc_3841_;
goto v_reusejp_3780_;
}
v_reusejp_3780_:
{
lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3788_; 
v___x_3782_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9);
v___x_3783_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__10));
lean_inc(v_currMacroScope_3758_);
lean_inc(v_quotContext_3757_);
v___x_3784_ = l_Lean_addMacroScope(v_quotContext_3757_, v___x_3783_, v_currMacroScope_3758_);
lean_inc_n(v___x_3760_, 2);
v___x_3785_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3785_, 0, v___x_3760_);
lean_ctor_set(v___x_3785_, 1, v___x_3782_);
lean_ctor_set(v___x_3785_, 2, v___x_3784_);
lean_ctor_set(v___x_3785_, 3, v___x_3767_);
v___x_3786_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__11));
if (v_isShared_3631_ == 0)
{
lean_ctor_set_tag(v___x_3630_, 2);
lean_ctor_set(v___x_3630_, 1, v___x_3786_);
lean_ctor_set(v___x_3630_, 0, v___x_3760_);
v___x_3788_ = v___x_3630_;
goto v_reusejp_3787_;
}
else
{
lean_object* v_reuseFailAlloc_3840_; 
v_reuseFailAlloc_3840_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3840_, 0, v___x_3760_);
lean_ctor_set(v_reuseFailAlloc_3840_, 1, v___x_3786_);
v___x_3788_ = v_reuseFailAlloc_3840_;
goto v_reusejp_3787_;
}
v_reusejp_3787_:
{
lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; 
v___x_3789_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__5));
v___x_3790_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__6));
lean_inc_n(v___x_3760_, 22);
v___x_3791_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3791_, 0, v___x_3760_);
lean_ctor_set(v___x_3791_, 1, v___x_3789_);
v___x_3792_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__8));
v___x_3793_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12);
v___x_3794_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__1));
lean_inc_n(v_currMacroScope_3758_, 5);
lean_inc_n(v_quotContext_3757_, 5);
v___x_3795_ = l_Lean_addMacroScope(v_quotContext_3757_, v___x_3794_, v_currMacroScope_3758_);
v___x_3796_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3796_, 0, v___x_3760_);
lean_ctor_set(v___x_3796_, 1, v___x_3793_);
lean_ctor_set(v___x_3796_, 2, v___x_3795_);
lean_ctor_set(v___x_3796_, 3, v___x_3767_);
v___x_3797_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13);
v___x_3798_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1));
v___x_3799_ = l_Lean_addMacroScope(v_quotContext_3757_, v___x_3798_, v_currMacroScope_3758_);
v___x_3800_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3800_, 0, v___x_3760_);
lean_ctor_set(v___x_3800_, 1, v___x_3797_);
lean_ctor_set(v___x_3800_, 2, v___x_3799_);
lean_ctor_set(v___x_3800_, 3, v___x_3767_);
lean_inc_ref(v___x_3800_);
v___x_3801_ = l_Lean_Syntax_node2(v___x_3760_, v___x_3777_, v___x_3796_, v___x_3800_);
v___x_3802_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
v___x_3803_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3803_, 0, v___x_3760_);
lean_ctor_set(v___x_3803_, 1, v___x_3777_);
lean_ctor_set(v___x_3803_, 2, v___x_3802_);
v___x_3804_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4));
v___x_3805_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3805_, 0, v___x_3760_);
lean_ctor_set(v___x_3805_, 1, v___x_3804_);
lean_inc_ref(v___x_3805_);
lean_inc_ref(v___x_3803_);
v___x_3806_ = l_Lean_Syntax_node4(v___x_3760_, v___x_3792_, v___x_3801_, v___x_3803_, v___x_3805_, v_snd_3646_);
lean_inc_ref(v___x_3791_);
v___x_3807_ = l_Lean_Syntax_node2(v___x_3760_, v___x_3790_, v___x_3791_, v___x_3806_);
v___x_3808_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__14));
v___x_3809_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3809_, 0, v___x_3760_);
lean_ctor_set(v___x_3809_, 1, v___x_3808_);
lean_inc_ref_n(v___x_3809_, 2);
lean_inc_ref_n(v___x_3788_, 2);
lean_inc_ref_n(v___x_3781_, 2);
v___x_3810_ = l_Lean_Syntax_node5(v___x_3760_, v___x_3778_, v___x_3781_, v___x_3785_, v___x_3788_, v___x_3807_, v___x_3809_);
v___x_3811_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16);
v___x_3812_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__17));
v___x_3813_ = l_Lean_addMacroScope(v_quotContext_3757_, v___x_3812_, v_currMacroScope_3758_);
v___x_3814_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3814_, 0, v___x_3760_);
lean_ctor_set(v___x_3814_, 1, v___x_3811_);
lean_ctor_set(v___x_3814_, 2, v___x_3813_);
lean_ctor_set(v___x_3814_, 3, v___x_3767_);
v___x_3815_ = l_String_toRawSubstring_x27(v___x_3597_);
v___x_3816_ = l_Lean_addMacroScope(v_quotContext_3757_, v___x_3585_, v_currMacroScope_3758_);
v___x_3817_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3817_, 0, v___x_3760_);
lean_ctor_set(v___x_3817_, 1, v___x_3815_);
lean_ctor_set(v___x_3817_, 2, v___x_3816_);
lean_ctor_set(v___x_3817_, 3, v___x_3767_);
v___x_3818_ = l_Lean_Syntax_node2(v___x_3760_, v___x_3777_, v___x_3817_, v___x_3800_);
v___x_3819_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19);
v___x_3820_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__20));
v___x_3821_ = l_Lean_addMacroScope(v_quotContext_3757_, v___x_3820_, v_currMacroScope_3758_);
v___x_3822_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3822_, 0, v___x_3760_);
lean_ctor_set(v___x_3822_, 1, v___x_3819_);
lean_ctor_set(v___x_3822_, 2, v___x_3821_);
lean_ctor_set(v___x_3822_, 3, v___x_3767_);
v___x_3823_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__30, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__30_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__30);
v___x_3824_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__5));
v___x_3825_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_collectInvariantHints_spec__1___closed__4));
v___x_3826_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__31));
v___x_3827_ = l_Lean_addMacroScope(v_quotContext_3757_, v___x_3826_, v_currMacroScope_3758_);
v___x_3828_ = l_Lean_Name_mkStr4(v___x_3595_, v___x_3596_, v___x_3824_, v___x_3825_);
v___x_3829_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3829_, 0, v___x_3828_);
lean_ctor_set(v___x_3829_, 1, v___x_3767_);
v___x_3830_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3830_, 0, v___x_3829_);
lean_ctor_set(v___x_3830_, 1, v___x_3767_);
v___x_3831_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3831_, 0, v___x_3760_);
lean_ctor_set(v___x_3831_, 1, v___x_3823_);
lean_ctor_set(v___x_3831_, 2, v___x_3827_);
lean_ctor_set(v___x_3831_, 3, v___x_3830_);
v___x_3832_ = l_Lean_Syntax_node5(v___x_3760_, v___x_3778_, v___x_3781_, v___x_3822_, v___x_3788_, v___x_3831_, v___x_3809_);
v___x_3833_ = l_Lean_Syntax_node1(v___x_3760_, v___x_3777_, v___x_3832_);
v___x_3834_ = l_Lean_Syntax_node2(v___x_3760_, v___x_3761_, v_fst_3645_, v___x_3833_);
v___x_3835_ = l_Lean_Syntax_node4(v___x_3760_, v___x_3792_, v___x_3818_, v___x_3803_, v___x_3805_, v___x_3834_);
v___x_3836_ = l_Lean_Syntax_node2(v___x_3760_, v___x_3790_, v___x_3791_, v___x_3835_);
v___x_3837_ = l_Lean_Syntax_node5(v___x_3760_, v___x_3778_, v___x_3781_, v___x_3814_, v___x_3788_, v___x_3836_, v___x_3809_);
v___x_3838_ = l_Lean_Syntax_node2(v___x_3760_, v___x_3777_, v___x_3810_, v___x_3837_);
v___x_3839_ = l_Lean_Syntax_node2(v___x_3760_, v___x_3761_, v___x_3776_, v___x_3838_);
v_a_3608_ = v___x_3839_;
goto v___jp_3607_;
}
}
}
}
}
}
}
case 3:
{
lean_object* v_e_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; 
lean_del_object(v___x_3624_);
v_e_3846_ = lean_ctor_get(v_default_3651_, 0);
lean_inc_ref(v_e_3846_);
lean_dec_ref_known(v_default_3651_, 1);
v___x_3847_ = lean_box(1);
v___x_3848_ = l_Lean_PrettyPrinter_delab(v_e_3846_, v___x_3847_, v___y_3602_, v___y_3603_, v___y_3604_, v___y_3605_);
if (lean_obj_tag(v___x_3848_) == 0)
{
lean_object* v_toCold_3849_; lean_object* v_a_3850_; lean_object* v___x_3852_; uint8_t v_isShared_3853_; uint8_t v_isSharedCheck_3935_; 
v_toCold_3849_ = lean_ctor_get(v___y_3604_, 0);
lean_inc_ref(v_toCold_3849_);
v_a_3850_ = lean_ctor_get(v___x_3848_, 0);
v_isSharedCheck_3935_ = !lean_is_exclusive(v___x_3848_);
if (v_isSharedCheck_3935_ == 0)
{
v___x_3852_ = v___x_3848_;
v_isShared_3853_ = v_isSharedCheck_3935_;
goto v_resetjp_3851_;
}
else
{
lean_inc(v_a_3850_);
lean_dec(v___x_3848_);
v___x_3852_ = lean_box(0);
v_isShared_3853_ = v_isSharedCheck_3935_;
goto v_resetjp_3851_;
}
v_resetjp_3851_:
{
lean_object* v_ref_3854_; lean_object* v_quotContext_3855_; lean_object* v_currMacroScope_3856_; uint8_t v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3867_; 
v_ref_3854_ = lean_ctor_get(v___y_3604_, 2);
lean_inc(v_ref_3854_);
lean_dec_ref(v___y_3604_);
v_quotContext_3855_ = lean_ctor_get(v_toCold_3849_, 8);
lean_inc_n(v_quotContext_3855_, 2);
v_currMacroScope_3856_ = lean_ctor_get(v_toCold_3849_, 9);
lean_inc_n(v_currMacroScope_3856_, 2);
lean_dec_ref(v_toCold_3849_);
v___x_3857_ = 0;
v___x_3858_ = l_Lean_SourceInfo_fromRef(v_ref_3854_, v___x_3857_);
lean_dec(v_ref_3854_);
v___x_3859_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1));
v___x_3860_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3);
v___x_3861_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__4));
lean_inc_ref(v___x_3594_);
v___x_3862_ = l_Lean_Name_mkStr2(v___x_3594_, v___x_3861_);
v___x_3863_ = l_Lean_addMacroScope(v_quotContext_3855_, v___x_3862_, v_currMacroScope_3856_);
v___x_3864_ = l_Lean_Name_mkStr4(v___x_3595_, v___x_3596_, v___x_3594_, v___x_3861_);
v___x_3865_ = lean_box(0);
lean_inc(v___x_3864_);
if (v_isShared_3654_ == 0)
{
lean_ctor_set_tag(v___x_3653_, 1);
lean_ctor_set(v___x_3653_, 1, v___x_3865_);
lean_ctor_set(v___x_3653_, 0, v___x_3864_);
v___x_3867_ = v___x_3653_;
goto v_reusejp_3866_;
}
else
{
lean_object* v_reuseFailAlloc_3934_; 
v_reuseFailAlloc_3934_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3934_, 0, v___x_3864_);
lean_ctor_set(v_reuseFailAlloc_3934_, 1, v___x_3865_);
v___x_3867_ = v_reuseFailAlloc_3934_;
goto v_reusejp_3866_;
}
v_reusejp_3866_:
{
lean_object* v___x_3869_; 
if (v_isShared_3853_ == 0)
{
lean_ctor_set(v___x_3852_, 0, v___x_3864_);
v___x_3869_ = v___x_3852_;
goto v_reusejp_3868_;
}
else
{
lean_object* v_reuseFailAlloc_3933_; 
v_reuseFailAlloc_3933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3933_, 0, v___x_3864_);
v___x_3869_ = v_reuseFailAlloc_3933_;
goto v_reusejp_3868_;
}
v_reusejp_3868_:
{
lean_object* v___x_3871_; 
if (v_isShared_3649_ == 0)
{
lean_ctor_set_tag(v___x_3648_, 1);
lean_ctor_set(v___x_3648_, 1, v___x_3865_);
lean_ctor_set(v___x_3648_, 0, v___x_3869_);
v___x_3871_ = v___x_3648_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3932_; 
v_reuseFailAlloc_3932_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3932_, 0, v___x_3869_);
lean_ctor_set(v_reuseFailAlloc_3932_, 1, v___x_3865_);
v___x_3871_ = v_reuseFailAlloc_3932_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
lean_object* v___x_3873_; 
if (v_isShared_3640_ == 0)
{
lean_ctor_set_tag(v___x_3639_, 1);
lean_ctor_set(v___x_3639_, 1, v___x_3871_);
lean_ctor_set(v___x_3639_, 0, v___x_3867_);
v___x_3873_ = v___x_3639_;
goto v_reusejp_3872_;
}
else
{
lean_object* v_reuseFailAlloc_3931_; 
v_reuseFailAlloc_3931_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3931_, 0, v___x_3867_);
lean_ctor_set(v_reuseFailAlloc_3931_, 1, v___x_3871_);
v___x_3873_ = v_reuseFailAlloc_3931_;
goto v_reusejp_3872_;
}
v_reusejp_3872_:
{
lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3879_; 
lean_inc_n(v___x_3858_, 2);
v___x_3874_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3874_, 0, v___x_3858_);
lean_ctor_set(v___x_3874_, 1, v___x_3860_);
lean_ctor_set(v___x_3874_, 2, v___x_3863_);
lean_ctor_set(v___x_3874_, 3, v___x_3873_);
v___x_3875_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_3876_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6));
v___x_3877_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__7));
if (v_isShared_3635_ == 0)
{
lean_ctor_set_tag(v___x_3634_, 2);
lean_ctor_set(v___x_3634_, 1, v___x_3877_);
lean_ctor_set(v___x_3634_, 0, v___x_3858_);
v___x_3879_ = v___x_3634_;
goto v_reusejp_3878_;
}
else
{
lean_object* v_reuseFailAlloc_3930_; 
v_reuseFailAlloc_3930_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3930_, 0, v___x_3858_);
lean_ctor_set(v_reuseFailAlloc_3930_, 1, v___x_3877_);
v___x_3879_ = v_reuseFailAlloc_3930_;
goto v_reusejp_3878_;
}
v_reusejp_3878_:
{
lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3886_; 
v___x_3880_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9);
v___x_3881_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__10));
lean_inc(v_currMacroScope_3856_);
lean_inc(v_quotContext_3855_);
v___x_3882_ = l_Lean_addMacroScope(v_quotContext_3855_, v___x_3881_, v_currMacroScope_3856_);
lean_inc_n(v___x_3858_, 2);
v___x_3883_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3883_, 0, v___x_3858_);
lean_ctor_set(v___x_3883_, 1, v___x_3880_);
lean_ctor_set(v___x_3883_, 2, v___x_3882_);
lean_ctor_set(v___x_3883_, 3, v___x_3865_);
v___x_3884_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__11));
if (v_isShared_3631_ == 0)
{
lean_ctor_set_tag(v___x_3630_, 2);
lean_ctor_set(v___x_3630_, 1, v___x_3884_);
lean_ctor_set(v___x_3630_, 0, v___x_3858_);
v___x_3886_ = v___x_3630_;
goto v_reusejp_3885_;
}
else
{
lean_object* v_reuseFailAlloc_3929_; 
v_reuseFailAlloc_3929_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3929_, 0, v___x_3858_);
lean_ctor_set(v_reuseFailAlloc_3929_, 1, v___x_3884_);
v___x_3886_ = v_reuseFailAlloc_3929_;
goto v_reusejp_3885_;
}
v_reusejp_3885_:
{
lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; 
v___x_3887_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__5));
v___x_3888_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__6));
lean_inc_n(v___x_3858_, 21);
v___x_3889_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3889_, 0, v___x_3858_);
lean_ctor_set(v___x_3889_, 1, v___x_3887_);
v___x_3890_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__8));
v___x_3891_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12);
v___x_3892_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__1));
lean_inc_n(v_currMacroScope_3856_, 4);
lean_inc_n(v_quotContext_3855_, 4);
v___x_3893_ = l_Lean_addMacroScope(v_quotContext_3855_, v___x_3892_, v_currMacroScope_3856_);
v___x_3894_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3894_, 0, v___x_3858_);
lean_ctor_set(v___x_3894_, 1, v___x_3891_);
lean_ctor_set(v___x_3894_, 2, v___x_3893_);
lean_ctor_set(v___x_3894_, 3, v___x_3865_);
v___x_3895_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13);
v___x_3896_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1));
v___x_3897_ = l_Lean_addMacroScope(v_quotContext_3855_, v___x_3896_, v_currMacroScope_3856_);
v___x_3898_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3898_, 0, v___x_3858_);
lean_ctor_set(v___x_3898_, 1, v___x_3895_);
lean_ctor_set(v___x_3898_, 2, v___x_3897_);
lean_ctor_set(v___x_3898_, 3, v___x_3865_);
lean_inc_ref(v___x_3898_);
v___x_3899_ = l_Lean_Syntax_node2(v___x_3858_, v___x_3875_, v___x_3894_, v___x_3898_);
v___x_3900_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
v___x_3901_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3901_, 0, v___x_3858_);
lean_ctor_set(v___x_3901_, 1, v___x_3875_);
lean_ctor_set(v___x_3901_, 2, v___x_3900_);
v___x_3902_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4));
v___x_3903_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3903_, 0, v___x_3858_);
lean_ctor_set(v___x_3903_, 1, v___x_3902_);
lean_inc_ref(v___x_3903_);
lean_inc_ref(v___x_3901_);
v___x_3904_ = l_Lean_Syntax_node4(v___x_3858_, v___x_3890_, v___x_3899_, v___x_3901_, v___x_3903_, v_snd_3646_);
lean_inc_ref(v___x_3889_);
v___x_3905_ = l_Lean_Syntax_node2(v___x_3858_, v___x_3888_, v___x_3889_, v___x_3904_);
v___x_3906_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__14));
v___x_3907_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3907_, 0, v___x_3858_);
lean_ctor_set(v___x_3907_, 1, v___x_3906_);
lean_inc_ref_n(v___x_3907_, 2);
lean_inc_ref_n(v___x_3886_, 2);
lean_inc_ref_n(v___x_3879_, 2);
v___x_3908_ = l_Lean_Syntax_node5(v___x_3858_, v___x_3876_, v___x_3879_, v___x_3883_, v___x_3886_, v___x_3905_, v___x_3907_);
v___x_3909_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16);
v___x_3910_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__17));
v___x_3911_ = l_Lean_addMacroScope(v_quotContext_3855_, v___x_3910_, v_currMacroScope_3856_);
v___x_3912_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3912_, 0, v___x_3858_);
lean_ctor_set(v___x_3912_, 1, v___x_3909_);
lean_ctor_set(v___x_3912_, 2, v___x_3911_);
lean_ctor_set(v___x_3912_, 3, v___x_3865_);
v___x_3913_ = l_String_toRawSubstring_x27(v___x_3597_);
v___x_3914_ = l_Lean_addMacroScope(v_quotContext_3855_, v___x_3585_, v_currMacroScope_3856_);
v___x_3915_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3915_, 0, v___x_3858_);
lean_ctor_set(v___x_3915_, 1, v___x_3913_);
lean_ctor_set(v___x_3915_, 2, v___x_3914_);
lean_ctor_set(v___x_3915_, 3, v___x_3865_);
v___x_3916_ = l_Lean_Syntax_node2(v___x_3858_, v___x_3875_, v___x_3915_, v___x_3898_);
v___x_3917_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__19);
v___x_3918_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__20));
v___x_3919_ = l_Lean_addMacroScope(v_quotContext_3855_, v___x_3918_, v_currMacroScope_3856_);
v___x_3920_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3920_, 0, v___x_3858_);
lean_ctor_set(v___x_3920_, 1, v___x_3917_);
lean_ctor_set(v___x_3920_, 2, v___x_3919_);
lean_ctor_set(v___x_3920_, 3, v___x_3865_);
v___x_3921_ = l_Lean_Syntax_node5(v___x_3858_, v___x_3876_, v___x_3879_, v___x_3920_, v___x_3886_, v_a_3850_, v___x_3907_);
v___x_3922_ = l_Lean_Syntax_node1(v___x_3858_, v___x_3875_, v___x_3921_);
v___x_3923_ = l_Lean_Syntax_node2(v___x_3858_, v___x_3859_, v_fst_3645_, v___x_3922_);
v___x_3924_ = l_Lean_Syntax_node4(v___x_3858_, v___x_3890_, v___x_3916_, v___x_3901_, v___x_3903_, v___x_3923_);
v___x_3925_ = l_Lean_Syntax_node2(v___x_3858_, v___x_3888_, v___x_3889_, v___x_3924_);
v___x_3926_ = l_Lean_Syntax_node5(v___x_3858_, v___x_3876_, v___x_3879_, v___x_3912_, v___x_3886_, v___x_3925_, v___x_3907_);
v___x_3927_ = l_Lean_Syntax_node2(v___x_3858_, v___x_3875_, v___x_3908_, v___x_3926_);
v___x_3928_ = l_Lean_Syntax_node2(v___x_3858_, v___x_3859_, v___x_3874_, v___x_3927_);
v_a_3608_ = v___x_3928_;
goto v___jp_3607_;
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
lean_del_object(v___x_3653_);
lean_del_object(v___x_3648_);
lean_dec(v_snd_3646_);
lean_dec(v_fst_3645_);
lean_del_object(v___x_3639_);
lean_del_object(v___x_3634_);
lean_del_object(v___x_3630_);
lean_dec_ref(v___y_3604_);
lean_dec_ref(v___x_3597_);
lean_dec_ref(v___x_3596_);
lean_dec_ref(v___x_3595_);
lean_dec_ref(v___x_3594_);
lean_dec(v___x_3585_);
v___y_3612_ = v___x_3848_;
goto v___jp_3611_;
}
}
default: 
{
lean_object* v_toCold_3936_; lean_object* v_ref_3937_; lean_object* v_quotContext_3938_; lean_object* v_currMacroScope_3939_; uint8_t v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3950_; 
lean_dec(v_default_3651_);
v_toCold_3936_ = lean_ctor_get(v___y_3604_, 0);
lean_inc_ref(v_toCold_3936_);
v_ref_3937_ = lean_ctor_get(v___y_3604_, 2);
lean_inc(v_ref_3937_);
lean_dec_ref(v___y_3604_);
v_quotContext_3938_ = lean_ctor_get(v_toCold_3936_, 8);
lean_inc_n(v_quotContext_3938_, 2);
v_currMacroScope_3939_ = lean_ctor_get(v_toCold_3936_, 9);
lean_inc_n(v_currMacroScope_3939_, 2);
lean_dec_ref(v_toCold_3936_);
v___x_3940_ = 0;
v___x_3941_ = l_Lean_SourceInfo_fromRef(v_ref_3937_, v___x_3940_);
lean_dec(v_ref_3937_);
v___x_3942_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1));
v___x_3943_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3);
v___x_3944_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__4));
lean_inc_ref(v___x_3594_);
v___x_3945_ = l_Lean_Name_mkStr2(v___x_3594_, v___x_3944_);
v___x_3946_ = l_Lean_addMacroScope(v_quotContext_3938_, v___x_3945_, v_currMacroScope_3939_);
v___x_3947_ = l_Lean_Name_mkStr4(v___x_3595_, v___x_3596_, v___x_3594_, v___x_3944_);
v___x_3948_ = lean_box(0);
lean_inc(v___x_3947_);
if (v_isShared_3654_ == 0)
{
lean_ctor_set_tag(v___x_3653_, 1);
lean_ctor_set(v___x_3653_, 1, v___x_3948_);
lean_ctor_set(v___x_3653_, 0, v___x_3947_);
v___x_3950_ = v___x_3653_;
goto v_reusejp_3949_;
}
else
{
lean_object* v_reuseFailAlloc_4010_; 
v_reuseFailAlloc_4010_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4010_, 0, v___x_3947_);
lean_ctor_set(v_reuseFailAlloc_4010_, 1, v___x_3948_);
v___x_3950_ = v_reuseFailAlloc_4010_;
goto v_reusejp_3949_;
}
v_reusejp_3949_:
{
lean_object* v___x_3952_; 
if (v_isShared_3625_ == 0)
{
lean_ctor_set_tag(v___x_3624_, 0);
lean_ctor_set(v___x_3624_, 0, v___x_3947_);
v___x_3952_ = v___x_3624_;
goto v_reusejp_3951_;
}
else
{
lean_object* v_reuseFailAlloc_4009_; 
v_reuseFailAlloc_4009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4009_, 0, v___x_3947_);
v___x_3952_ = v_reuseFailAlloc_4009_;
goto v_reusejp_3951_;
}
v_reusejp_3951_:
{
lean_object* v___x_3954_; 
if (v_isShared_3649_ == 0)
{
lean_ctor_set_tag(v___x_3648_, 1);
lean_ctor_set(v___x_3648_, 1, v___x_3948_);
lean_ctor_set(v___x_3648_, 0, v___x_3952_);
v___x_3954_ = v___x_3648_;
goto v_reusejp_3953_;
}
else
{
lean_object* v_reuseFailAlloc_4008_; 
v_reuseFailAlloc_4008_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4008_, 0, v___x_3952_);
lean_ctor_set(v_reuseFailAlloc_4008_, 1, v___x_3948_);
v___x_3954_ = v_reuseFailAlloc_4008_;
goto v_reusejp_3953_;
}
v_reusejp_3953_:
{
lean_object* v___x_3956_; 
if (v_isShared_3640_ == 0)
{
lean_ctor_set_tag(v___x_3639_, 1);
lean_ctor_set(v___x_3639_, 1, v___x_3954_);
lean_ctor_set(v___x_3639_, 0, v___x_3950_);
v___x_3956_ = v___x_3639_;
goto v_reusejp_3955_;
}
else
{
lean_object* v_reuseFailAlloc_4007_; 
v_reuseFailAlloc_4007_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4007_, 0, v___x_3950_);
lean_ctor_set(v_reuseFailAlloc_4007_, 1, v___x_3954_);
v___x_3956_ = v_reuseFailAlloc_4007_;
goto v_reusejp_3955_;
}
v_reusejp_3955_:
{
lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3962_; 
lean_inc_n(v___x_3941_, 2);
v___x_3957_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3957_, 0, v___x_3941_);
lean_ctor_set(v___x_3957_, 1, v___x_3943_);
lean_ctor_set(v___x_3957_, 2, v___x_3946_);
lean_ctor_set(v___x_3957_, 3, v___x_3956_);
v___x_3958_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_3959_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6));
v___x_3960_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__7));
if (v_isShared_3635_ == 0)
{
lean_ctor_set_tag(v___x_3634_, 2);
lean_ctor_set(v___x_3634_, 1, v___x_3960_);
lean_ctor_set(v___x_3634_, 0, v___x_3941_);
v___x_3962_ = v___x_3634_;
goto v_reusejp_3961_;
}
else
{
lean_object* v_reuseFailAlloc_4006_; 
v_reuseFailAlloc_4006_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4006_, 0, v___x_3941_);
lean_ctor_set(v_reuseFailAlloc_4006_, 1, v___x_3960_);
v___x_3962_ = v_reuseFailAlloc_4006_;
goto v_reusejp_3961_;
}
v_reusejp_3961_:
{
lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3969_; 
v___x_3963_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9);
v___x_3964_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__10));
lean_inc(v_currMacroScope_3939_);
lean_inc(v_quotContext_3938_);
v___x_3965_ = l_Lean_addMacroScope(v_quotContext_3938_, v___x_3964_, v_currMacroScope_3939_);
lean_inc_n(v___x_3941_, 2);
v___x_3966_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3941_);
lean_ctor_set(v___x_3966_, 1, v___x_3963_);
lean_ctor_set(v___x_3966_, 2, v___x_3965_);
lean_ctor_set(v___x_3966_, 3, v___x_3948_);
v___x_3967_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__11));
if (v_isShared_3631_ == 0)
{
lean_ctor_set_tag(v___x_3630_, 2);
lean_ctor_set(v___x_3630_, 1, v___x_3967_);
lean_ctor_set(v___x_3630_, 0, v___x_3941_);
v___x_3969_ = v___x_3630_;
goto v_reusejp_3968_;
}
else
{
lean_object* v_reuseFailAlloc_4005_; 
v_reuseFailAlloc_4005_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4005_, 0, v___x_3941_);
lean_ctor_set(v_reuseFailAlloc_4005_, 1, v___x_3967_);
v___x_3969_ = v_reuseFailAlloc_4005_;
goto v_reusejp_3968_;
}
v_reusejp_3968_:
{
lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; 
v___x_3970_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__5));
v___x_3971_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__6));
lean_inc_n(v___x_3941_, 17);
v___x_3972_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3972_, 0, v___x_3941_);
lean_ctor_set(v___x_3972_, 1, v___x_3970_);
v___x_3973_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__8));
v___x_3974_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12);
v___x_3975_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__1));
lean_inc_n(v_currMacroScope_3939_, 3);
lean_inc_n(v_quotContext_3938_, 3);
v___x_3976_ = l_Lean_addMacroScope(v_quotContext_3938_, v___x_3975_, v_currMacroScope_3939_);
v___x_3977_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3977_, 0, v___x_3941_);
lean_ctor_set(v___x_3977_, 1, v___x_3974_);
lean_ctor_set(v___x_3977_, 2, v___x_3976_);
lean_ctor_set(v___x_3977_, 3, v___x_3948_);
v___x_3978_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13);
v___x_3979_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1));
v___x_3980_ = l_Lean_addMacroScope(v_quotContext_3938_, v___x_3979_, v_currMacroScope_3939_);
v___x_3981_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3981_, 0, v___x_3941_);
lean_ctor_set(v___x_3981_, 1, v___x_3978_);
lean_ctor_set(v___x_3981_, 2, v___x_3980_);
lean_ctor_set(v___x_3981_, 3, v___x_3948_);
lean_inc_ref(v___x_3981_);
v___x_3982_ = l_Lean_Syntax_node2(v___x_3941_, v___x_3958_, v___x_3977_, v___x_3981_);
v___x_3983_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
v___x_3984_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3984_, 0, v___x_3941_);
lean_ctor_set(v___x_3984_, 1, v___x_3958_);
lean_ctor_set(v___x_3984_, 2, v___x_3983_);
v___x_3985_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4));
v___x_3986_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3986_, 0, v___x_3941_);
lean_ctor_set(v___x_3986_, 1, v___x_3985_);
lean_inc_ref(v___x_3986_);
lean_inc_ref(v___x_3984_);
v___x_3987_ = l_Lean_Syntax_node4(v___x_3941_, v___x_3973_, v___x_3982_, v___x_3984_, v___x_3986_, v_snd_3646_);
lean_inc_ref(v___x_3972_);
v___x_3988_ = l_Lean_Syntax_node2(v___x_3941_, v___x_3971_, v___x_3972_, v___x_3987_);
v___x_3989_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__14));
v___x_3990_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3990_, 0, v___x_3941_);
lean_ctor_set(v___x_3990_, 1, v___x_3989_);
lean_inc_ref(v___x_3990_);
lean_inc_ref(v___x_3969_);
lean_inc_ref(v___x_3962_);
v___x_3991_ = l_Lean_Syntax_node5(v___x_3941_, v___x_3959_, v___x_3962_, v___x_3966_, v___x_3969_, v___x_3988_, v___x_3990_);
v___x_3992_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16);
v___x_3993_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__17));
v___x_3994_ = l_Lean_addMacroScope(v_quotContext_3938_, v___x_3993_, v_currMacroScope_3939_);
v___x_3995_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3995_, 0, v___x_3941_);
lean_ctor_set(v___x_3995_, 1, v___x_3992_);
lean_ctor_set(v___x_3995_, 2, v___x_3994_);
lean_ctor_set(v___x_3995_, 3, v___x_3948_);
v___x_3996_ = l_String_toRawSubstring_x27(v___x_3597_);
v___x_3997_ = l_Lean_addMacroScope(v_quotContext_3938_, v___x_3585_, v_currMacroScope_3939_);
v___x_3998_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3998_, 0, v___x_3941_);
lean_ctor_set(v___x_3998_, 1, v___x_3996_);
lean_ctor_set(v___x_3998_, 2, v___x_3997_);
lean_ctor_set(v___x_3998_, 3, v___x_3948_);
v___x_3999_ = l_Lean_Syntax_node2(v___x_3941_, v___x_3958_, v___x_3998_, v___x_3981_);
v___x_4000_ = l_Lean_Syntax_node4(v___x_3941_, v___x_3973_, v___x_3999_, v___x_3984_, v___x_3986_, v_fst_3645_);
v___x_4001_ = l_Lean_Syntax_node2(v___x_3941_, v___x_3971_, v___x_3972_, v___x_4000_);
v___x_4002_ = l_Lean_Syntax_node5(v___x_3941_, v___x_3959_, v___x_3962_, v___x_3995_, v___x_3969_, v___x_4001_, v___x_3990_);
v___x_4003_ = l_Lean_Syntax_node2(v___x_3941_, v___x_3958_, v___x_3991_, v___x_4002_);
v___x_4004_ = l_Lean_Syntax_node2(v___x_3941_, v___x_3942_, v___x_3957_, v___x_4003_);
v_a_3608_ = v___x_4004_;
goto v___jp_3607_;
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
else
{
lean_object* v_a_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4020_; 
lean_del_object(v___x_3639_);
lean_dec(v_snd_3637_);
lean_del_object(v___x_3634_);
lean_del_object(v___x_3630_);
lean_del_object(v___x_3624_);
lean_dec_ref(v___y_3604_);
lean_dec_ref(v___x_3597_);
lean_dec_ref(v___x_3596_);
lean_dec_ref(v___x_3595_);
lean_dec_ref(v___x_3594_);
lean_dec(v___x_3593_);
lean_dec(v___x_3585_);
v_a_4013_ = lean_ctor_get(v___x_3643_, 0);
v_isSharedCheck_4020_ = !lean_is_exclusive(v___x_3643_);
if (v_isSharedCheck_4020_ == 0)
{
v___x_4015_ = v___x_3643_;
v_isShared_4016_ = v_isSharedCheck_4020_;
goto v_resetjp_4014_;
}
else
{
lean_inc(v_a_4013_);
lean_dec(v___x_3643_);
v___x_4015_ = lean_box(0);
v_isShared_4016_ = v_isSharedCheck_4020_;
goto v_resetjp_4014_;
}
v_resetjp_4014_:
{
lean_object* v___x_4018_; 
if (v_isShared_4016_ == 0)
{
v___x_4018_ = v___x_4015_;
goto v_reusejp_4017_;
}
else
{
lean_object* v_reuseFailAlloc_4019_; 
v_reuseFailAlloc_4019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4019_, 0, v_a_4013_);
v___x_4018_ = v_reuseFailAlloc_4019_;
goto v_reusejp_4017_;
}
v_reusejp_4017_:
{
return v___x_4018_;
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
lean_object* v___x_4027_; uint8_t v_isShared_4028_; uint8_t v_isSharedCheck_4100_; 
lean_dec(v_a_3615_);
lean_dec(v___x_3593_);
lean_dec(v___x_3591_);
lean_dec_ref(v___x_3586_);
v_isSharedCheck_4100_ = !lean_is_exclusive(v_val_3618_);
if (v_isSharedCheck_4100_ == 0)
{
lean_object* v_unused_4101_; lean_object* v_unused_4102_; 
v_unused_4101_ = lean_ctor_get(v_val_3618_, 1);
lean_dec(v_unused_4101_);
v_unused_4102_ = lean_ctor_get(v_val_3618_, 0);
lean_dec(v_unused_4102_);
v___x_4027_ = v_val_3618_;
v_isShared_4028_ = v_isSharedCheck_4100_;
goto v_resetjp_4026_;
}
else
{
lean_dec(v_val_3618_);
v___x_4027_ = lean_box(0);
v_isShared_4028_ = v_isSharedCheck_4100_;
goto v_resetjp_4026_;
}
v_resetjp_4026_:
{
lean_object* v_toCold_4029_; lean_object* v_ref_4030_; lean_object* v_quotContext_4031_; lean_object* v_currMacroScope_4032_; uint8_t v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4043_; 
v_toCold_4029_ = lean_ctor_get(v___y_3604_, 0);
lean_inc_ref(v_toCold_4029_);
v_ref_4030_ = lean_ctor_get(v___y_3604_, 2);
lean_inc(v_ref_4030_);
lean_dec_ref(v___y_3604_);
v_quotContext_4031_ = lean_ctor_get(v_toCold_4029_, 8);
lean_inc_n(v_quotContext_4031_, 2);
v_currMacroScope_4032_ = lean_ctor_get(v_toCold_4029_, 9);
lean_inc_n(v_currMacroScope_4032_, 2);
lean_dec_ref(v_toCold_4029_);
v___x_4033_ = 0;
v___x_4034_ = l_Lean_SourceInfo_fromRef(v_ref_4030_, v___x_4033_);
lean_dec(v_ref_4030_);
v___x_4035_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__1));
v___x_4036_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__3);
v___x_4037_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__4));
lean_inc_ref(v___x_3594_);
v___x_4038_ = l_Lean_Name_mkStr2(v___x_3594_, v___x_4037_);
v___x_4039_ = l_Lean_addMacroScope(v_quotContext_4031_, v___x_4038_, v_currMacroScope_4032_);
v___x_4040_ = l_Lean_Name_mkStr4(v___x_3595_, v___x_3596_, v___x_3594_, v___x_4037_);
v___x_4041_ = lean_box(0);
lean_inc(v___x_4040_);
if (v_isShared_4028_ == 0)
{
lean_ctor_set_tag(v___x_4027_, 1);
lean_ctor_set(v___x_4027_, 1, v___x_4041_);
lean_ctor_set(v___x_4027_, 0, v___x_4040_);
v___x_4043_ = v___x_4027_;
goto v_reusejp_4042_;
}
else
{
lean_object* v_reuseFailAlloc_4099_; 
v_reuseFailAlloc_4099_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4099_, 0, v___x_4040_);
lean_ctor_set(v_reuseFailAlloc_4099_, 1, v___x_4041_);
v___x_4043_ = v_reuseFailAlloc_4099_;
goto v_reusejp_4042_;
}
v_reusejp_4042_:
{
lean_object* v___x_4045_; 
if (v_isShared_3621_ == 0)
{
lean_ctor_set_tag(v___x_3620_, 0);
lean_ctor_set(v___x_3620_, 0, v___x_4040_);
v___x_4045_ = v___x_3620_;
goto v_reusejp_4044_;
}
else
{
lean_object* v_reuseFailAlloc_4098_; 
v_reuseFailAlloc_4098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4098_, 0, v___x_4040_);
v___x_4045_ = v_reuseFailAlloc_4098_;
goto v_reusejp_4044_;
}
v_reusejp_4044_:
{
lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; 
v___x_4046_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4046_, 0, v___x_4045_);
lean_ctor_set(v___x_4046_, 1, v___x_4041_);
v___x_4047_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4047_, 0, v___x_4043_);
lean_ctor_set(v___x_4047_, 1, v___x_4046_);
lean_inc_n(v___x_4034_, 23);
v___x_4048_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4048_, 0, v___x_4034_);
lean_ctor_set(v___x_4048_, 1, v___x_4036_);
lean_ctor_set(v___x_4048_, 2, v___x_4039_);
lean_ctor_set(v___x_4048_, 3, v___x_4047_);
v___x_4049_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_4050_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__6));
v___x_4051_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__7));
v___x_4052_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4052_, 0, v___x_4034_);
lean_ctor_set(v___x_4052_, 1, v___x_4051_);
v___x_4053_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__9);
v___x_4054_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__10));
lean_inc_n(v_currMacroScope_4032_, 4);
lean_inc_n(v_quotContext_4031_, 4);
v___x_4055_ = l_Lean_addMacroScope(v_quotContext_4031_, v___x_4054_, v_currMacroScope_4032_);
v___x_4056_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4056_, 0, v___x_4034_);
lean_ctor_set(v___x_4056_, 1, v___x_4053_);
lean_ctor_set(v___x_4056_, 2, v___x_4055_);
lean_ctor_set(v___x_4056_, 3, v___x_4041_);
v___x_4057_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__11));
v___x_4058_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4058_, 0, v___x_4034_);
lean_ctor_set(v___x_4058_, 1, v___x_4057_);
v___x_4059_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__5));
v___x_4060_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__6));
v___x_4061_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4061_, 0, v___x_4034_);
lean_ctor_set(v___x_4061_, 1, v___x_4059_);
v___x_4062_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__8));
v___x_4063_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__12);
v___x_4064_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__4___closed__1));
v___x_4065_ = l_Lean_addMacroScope(v_quotContext_4031_, v___x_4064_, v_currMacroScope_4032_);
v___x_4066_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4066_, 0, v___x_4034_);
lean_ctor_set(v___x_4066_, 1, v___x_4063_);
lean_ctor_set(v___x_4066_, 2, v___x_4065_);
lean_ctor_set(v___x_4066_, 3, v___x_4041_);
v___x_4067_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13);
v___x_4068_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1));
v___x_4069_ = l_Lean_addMacroScope(v_quotContext_4031_, v___x_4068_, v_currMacroScope_4032_);
v___x_4070_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4070_, 0, v___x_4034_);
lean_ctor_set(v___x_4070_, 1, v___x_4067_);
lean_ctor_set(v___x_4070_, 2, v___x_4069_);
lean_ctor_set(v___x_4070_, 3, v___x_4041_);
lean_inc_ref(v___x_4070_);
v___x_4071_ = l_Lean_Syntax_node2(v___x_4034_, v___x_4049_, v___x_4066_, v___x_4070_);
v___x_4072_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
v___x_4073_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4073_, 0, v___x_4034_);
lean_ctor_set(v___x_4073_, 1, v___x_4049_);
lean_ctor_set(v___x_4073_, 2, v___x_4072_);
v___x_4074_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4));
v___x_4075_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4075_, 0, v___x_4034_);
lean_ctor_set(v___x_4075_, 1, v___x_4074_);
v___x_4076_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22));
v___x_4077_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__23));
v___x_4078_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4078_, 0, v___x_4034_);
lean_ctor_set(v___x_4078_, 1, v___x_4077_);
v___x_4079_ = l_Lean_Syntax_node1(v___x_4034_, v___x_4076_, v___x_4078_);
lean_inc(v___x_4079_);
lean_inc_ref(v___x_4075_);
lean_inc_ref(v___x_4073_);
v___x_4080_ = l_Lean_Syntax_node4(v___x_4034_, v___x_4062_, v___x_4071_, v___x_4073_, v___x_4075_, v___x_4079_);
lean_inc_ref(v___x_4061_);
v___x_4081_ = l_Lean_Syntax_node2(v___x_4034_, v___x_4060_, v___x_4061_, v___x_4080_);
v___x_4082_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__14));
v___x_4083_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4083_, 0, v___x_4034_);
lean_ctor_set(v___x_4083_, 1, v___x_4082_);
lean_inc_ref(v___x_4083_);
lean_inc_ref(v___x_4058_);
lean_inc_ref(v___x_4052_);
v___x_4084_ = l_Lean_Syntax_node5(v___x_4034_, v___x_4050_, v___x_4052_, v___x_4056_, v___x_4058_, v___x_4081_, v___x_4083_);
v___x_4085_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__16);
v___x_4086_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__17));
v___x_4087_ = l_Lean_addMacroScope(v_quotContext_4031_, v___x_4086_, v_currMacroScope_4032_);
v___x_4088_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4088_, 0, v___x_4034_);
lean_ctor_set(v___x_4088_, 1, v___x_4085_);
lean_ctor_set(v___x_4088_, 2, v___x_4087_);
lean_ctor_set(v___x_4088_, 3, v___x_4041_);
v___x_4089_ = l_String_toRawSubstring_x27(v___x_3597_);
v___x_4090_ = l_Lean_addMacroScope(v_quotContext_4031_, v___x_3585_, v_currMacroScope_4032_);
v___x_4091_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4091_, 0, v___x_4034_);
lean_ctor_set(v___x_4091_, 1, v___x_4089_);
lean_ctor_set(v___x_4091_, 2, v___x_4090_);
lean_ctor_set(v___x_4091_, 3, v___x_4041_);
v___x_4092_ = l_Lean_Syntax_node2(v___x_4034_, v___x_4049_, v___x_4091_, v___x_4070_);
v___x_4093_ = l_Lean_Syntax_node4(v___x_4034_, v___x_4062_, v___x_4092_, v___x_4073_, v___x_4075_, v___x_4079_);
v___x_4094_ = l_Lean_Syntax_node2(v___x_4034_, v___x_4060_, v___x_4061_, v___x_4093_);
v___x_4095_ = l_Lean_Syntax_node5(v___x_4034_, v___x_4050_, v___x_4052_, v___x_4088_, v___x_4058_, v___x_4094_, v___x_4083_);
v___x_4096_ = l_Lean_Syntax_node2(v___x_4034_, v___x_4049_, v___x_4084_, v___x_4095_);
v___x_4097_ = l_Lean_Syntax_node2(v___x_4034_, v___x_4035_, v___x_4048_, v___x_4096_);
v_a_3608_ = v___x_4097_;
goto v___jp_3607_;
}
}
}
}
}
}
else
{
lean_dec(v_a_3617_);
lean_dec_ref(v___x_3594_);
if (lean_obj_tag(v_a_3615_) == 1)
{
lean_object* v_val_4104_; lean_object* v_snd_4105_; lean_object* v_fst_4106_; lean_object* v_snd_4107_; lean_object* v___x_4108_; lean_object* v___f_4109_; lean_object* v___x_4110_; 
v_val_4104_ = lean_ctor_get(v_a_3615_, 0);
lean_inc(v_val_4104_);
lean_dec_ref_known(v_a_3615_, 1);
v_snd_4105_ = lean_ctor_get(v_val_4104_, 1);
lean_inc(v_snd_4105_);
v_fst_4106_ = lean_ctor_get(v_val_4104_, 0);
lean_inc(v_fst_4106_);
lean_dec(v_val_4104_);
v_snd_4107_ = lean_ctor_get(v_snd_4105_, 1);
lean_inc(v_snd_4107_);
lean_dec(v_snd_4105_);
v___x_4108_ = lean_box(v___x_3592_);
lean_inc(v___x_3585_);
v___f_4109_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__6___boxed), 20, 10);
lean_closure_set(v___f_4109_, 0, v_fst_4106_);
lean_closure_set(v___f_4109_, 1, v_snd_4107_);
lean_closure_set(v___f_4109_, 2, v___x_3597_);
lean_closure_set(v___f_4109_, 3, v___x_3585_);
lean_closure_set(v___f_4109_, 4, v___x_3591_);
lean_closure_set(v___f_4109_, 5, v___x_3593_);
lean_closure_set(v___f_4109_, 6, v___x_3595_);
lean_closure_set(v___f_4109_, 7, v___x_3596_);
lean_closure_set(v___f_4109_, 8, v___x_4108_);
lean_closure_set(v___f_4109_, 9, v_arg_3590_);
v___x_4110_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(v___x_3585_, v___x_3586_, v___f_4109_, v___y_3598_, v___y_3599_, v___y_3600_, v___y_3601_, v___y_3602_, v___y_3603_, v___y_3604_, v___y_3605_);
lean_dec_ref(v___y_3604_);
v___y_3612_ = v___x_4110_;
goto v___jp_3611_;
}
else
{
lean_object* v_toCold_4111_; lean_object* v_ref_4112_; lean_object* v_quotContext_4113_; lean_object* v_currMacroScope_4114_; uint8_t v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; 
lean_dec(v_a_3615_);
lean_dec(v___x_3593_);
lean_dec(v___x_3591_);
lean_dec_ref(v_arg_3590_);
lean_dec_ref(v___x_3586_);
v_toCold_4111_ = lean_ctor_get(v___y_3604_, 0);
lean_inc_ref(v_toCold_4111_);
v_ref_4112_ = lean_ctor_get(v___y_3604_, 2);
lean_inc(v_ref_4112_);
lean_dec_ref(v___y_3604_);
v_quotContext_4113_ = lean_ctor_get(v_toCold_4111_, 8);
lean_inc_n(v_quotContext_4113_, 2);
v_currMacroScope_4114_ = lean_ctor_get(v_toCold_4111_, 9);
lean_inc_n(v_currMacroScope_4114_, 2);
lean_dec_ref(v_toCold_4111_);
v___x_4115_ = 0;
v___x_4116_ = l_Lean_SourceInfo_fromRef(v_ref_4112_, v___x_4115_);
lean_dec(v_ref_4112_);
v___x_4117_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__0));
v___x_4118_ = l_Lean_Name_mkStr3(v___x_3595_, v___x_3596_, v___x_4117_);
v___x_4119_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__2));
v___x_4120_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6, &l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__6);
lean_inc_n(v___x_4116_, 13);
v___x_4121_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4121_, 0, v___x_4116_);
lean_ctor_set(v___x_4121_, 1, v___x_4119_);
lean_ctor_set(v___x_4121_, 2, v___x_4120_);
v___x_4122_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__3));
v___x_4123_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4123_, 0, v___x_4116_);
lean_ctor_set(v___x_4123_, 1, v___x_4122_);
v___x_4124_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__5));
v___x_4125_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__21));
v___x_4126_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__22));
v___x_4127_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4127_, 0, v___x_4116_);
lean_ctor_set(v___x_4127_, 1, v___x_4126_);
v___x_4128_ = l_String_toRawSubstring_x27(v___x_3597_);
v___x_4129_ = l_Lean_addMacroScope(v_quotContext_4113_, v___x_3585_, v_currMacroScope_4114_);
v___x_4130_ = lean_box(0);
v___x_4131_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4131_, 0, v___x_4116_);
lean_ctor_set(v___x_4131_, 1, v___x_4128_);
lean_ctor_set(v___x_4131_, 2, v___x_4129_);
lean_ctor_set(v___x_4131_, 3, v___x_4130_);
v___x_4132_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__0));
v___x_4133_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4133_, 0, v___x_4116_);
lean_ctor_set(v___x_4133_, 1, v___x_4132_);
v___x_4134_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13, &l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__13);
v___x_4135_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___closed__1));
v___x_4136_ = l_Lean_addMacroScope(v_quotContext_4113_, v___x_4135_, v_currMacroScope_4114_);
v___x_4137_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4137_, 0, v___x_4116_);
lean_ctor_set(v___x_4137_, 1, v___x_4134_);
lean_ctor_set(v___x_4137_, 2, v___x_4136_);
lean_ctor_set(v___x_4137_, 3, v___x_4130_);
v___x_4138_ = l_Lean_Syntax_node3(v___x_4116_, v___x_4124_, v___x_4131_, v___x_4133_, v___x_4137_);
v___x_4139_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_suggestInvariant_postCondWithMultipleConditions___closed__7));
v___x_4140_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4140_, 0, v___x_4116_);
lean_ctor_set(v___x_4140_, 1, v___x_4139_);
v___x_4141_ = l_Lean_Syntax_node3(v___x_4116_, v___x_4125_, v___x_4127_, v___x_4138_, v___x_4140_);
v___x_4142_ = l_Lean_Syntax_node1(v___x_4116_, v___x_4124_, v___x_4141_);
v___x_4143_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__5___closed__4));
v___x_4144_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4144_, 0, v___x_4116_);
lean_ctor_set(v___x_4144_, 1, v___x_4143_);
v___x_4145_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__22));
v___x_4146_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___closed__23));
v___x_4147_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4147_, 0, v___x_4116_);
lean_ctor_set(v___x_4147_, 1, v___x_4146_);
v___x_4148_ = l_Lean_Syntax_node1(v___x_4116_, v___x_4145_, v___x_4147_);
v___x_4149_ = l_Lean_Syntax_node5(v___x_4116_, v___x_4118_, v___x_4121_, v___x_4123_, v___x_4142_, v___x_4144_, v___x_4148_);
v_a_3608_ = v___x_4149_;
goto v___jp_3607_;
}
}
}
else
{
lean_object* v_a_4150_; lean_object* v___x_4152_; uint8_t v_isShared_4153_; uint8_t v_isSharedCheck_4157_; 
lean_dec(v_a_3615_);
lean_dec_ref(v___y_3604_);
lean_dec_ref(v___x_3597_);
lean_dec_ref(v___x_3596_);
lean_dec_ref(v___x_3595_);
lean_dec_ref(v___x_3594_);
lean_dec(v___x_3593_);
lean_dec(v___x_3591_);
lean_dec_ref(v_arg_3590_);
lean_dec_ref(v___x_3586_);
lean_dec(v___x_3585_);
v_a_4150_ = lean_ctor_get(v___x_3616_, 0);
v_isSharedCheck_4157_ = !lean_is_exclusive(v___x_3616_);
if (v_isSharedCheck_4157_ == 0)
{
v___x_4152_ = v___x_3616_;
v_isShared_4153_ = v_isSharedCheck_4157_;
goto v_resetjp_4151_;
}
else
{
lean_inc(v_a_4150_);
lean_dec(v___x_3616_);
v___x_4152_ = lean_box(0);
v_isShared_4153_ = v_isSharedCheck_4157_;
goto v_resetjp_4151_;
}
v_resetjp_4151_:
{
lean_object* v___x_4155_; 
if (v_isShared_4153_ == 0)
{
v___x_4155_ = v___x_4152_;
goto v_reusejp_4154_;
}
else
{
lean_object* v_reuseFailAlloc_4156_; 
v_reuseFailAlloc_4156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4156_, 0, v_a_4150_);
v___x_4155_ = v_reuseFailAlloc_4156_;
goto v_reusejp_4154_;
}
v_reusejp_4154_:
{
return v___x_4155_;
}
}
}
}
else
{
lean_object* v_a_4158_; lean_object* v___x_4160_; uint8_t v_isShared_4161_; uint8_t v_isSharedCheck_4165_; 
lean_dec_ref(v___y_3604_);
lean_dec_ref(v___x_3597_);
lean_dec_ref(v___x_3596_);
lean_dec_ref(v___x_3595_);
lean_dec_ref(v___x_3594_);
lean_dec(v___x_3593_);
lean_dec(v___x_3591_);
lean_dec_ref(v_arg_3590_);
lean_dec(v_inv_3589_);
lean_dec_ref(v___x_3586_);
lean_dec(v___x_3585_);
v_a_4158_ = lean_ctor_get(v___x_3614_, 0);
v_isSharedCheck_4165_ = !lean_is_exclusive(v___x_3614_);
if (v_isSharedCheck_4165_ == 0)
{
v___x_4160_ = v___x_3614_;
v_isShared_4161_ = v_isSharedCheck_4165_;
goto v_resetjp_4159_;
}
else
{
lean_inc(v_a_4158_);
lean_dec(v___x_3614_);
v___x_4160_ = lean_box(0);
v_isShared_4161_ = v_isSharedCheck_4165_;
goto v_resetjp_4159_;
}
v_resetjp_4159_:
{
lean_object* v___x_4163_; 
if (v_isShared_4161_ == 0)
{
v___x_4163_ = v___x_4160_;
goto v_reusejp_4162_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v_a_4158_);
v___x_4163_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4162_;
}
v_reusejp_4162_:
{
return v___x_4163_;
}
}
}
v___jp_3607_:
{
lean_object* v___x_3609_; lean_object* v___x_3610_; 
v___x_3609_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_eraseQuoteMacroScopesFromSyntax(v_a_3608_);
v___x_3610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3610_, 0, v___x_3609_);
return v___x_3610_;
}
v___jp_3611_:
{
if (lean_obj_tag(v___y_3612_) == 0)
{
lean_object* v_a_3613_; 
v_a_3613_ = lean_ctor_get(v___y_3612_, 0);
lean_inc(v_a_3613_);
lean_dec_ref_known(v___y_3612_, 1);
v_a_3608_ = v_a_3613_;
goto v___jp_3607_;
}
else
{
return v___y_3612_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___boxed(lean_object** _args){
lean_object* v___x_4166_ = _args[0];
lean_object* v___x_4167_ = _args[1];
lean_object* v___f_4168_ = _args[2];
lean_object* v_a_4169_ = _args[3];
lean_object* v_inv_4170_ = _args[4];
lean_object* v_arg_4171_ = _args[5];
lean_object* v___x_4172_ = _args[6];
lean_object* v___x_4173_ = _args[7];
lean_object* v___x_4174_ = _args[8];
lean_object* v___x_4175_ = _args[9];
lean_object* v___x_4176_ = _args[10];
lean_object* v___x_4177_ = _args[11];
lean_object* v___x_4178_ = _args[12];
lean_object* v___y_4179_ = _args[13];
lean_object* v___y_4180_ = _args[14];
lean_object* v___y_4181_ = _args[15];
lean_object* v___y_4182_ = _args[16];
lean_object* v___y_4183_ = _args[17];
lean_object* v___y_4184_ = _args[18];
lean_object* v___y_4185_ = _args[19];
lean_object* v___y_4186_ = _args[20];
lean_object* v___y_4187_ = _args[21];
_start:
{
uint8_t v___x_79073__boxed_4188_; lean_object* v_res_4189_; 
v___x_79073__boxed_4188_ = lean_unbox(v___x_4173_);
v_res_4189_ = l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7(v___x_4166_, v___x_4167_, v___f_4168_, v_a_4169_, v_inv_4170_, v_arg_4171_, v___x_4172_, v___x_79073__boxed_4188_, v___x_4174_, v___x_4175_, v___x_4176_, v___x_4177_, v___x_4178_, v___y_4179_, v___y_4180_, v___y_4181_, v___y_4182_, v___y_4183_, v___y_4184_, v___y_4185_, v___y_4186_);
lean_dec(v___y_4186_);
lean_dec(v___y_4184_);
lean_dec_ref(v___y_4183_);
lean_dec(v___y_4182_);
lean_dec_ref(v___y_4181_);
lean_dec(v___y_4180_);
lean_dec_ref(v___y_4179_);
lean_dec_ref(v_a_4169_);
return v_res_4189_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1_spec__1(lean_object* v_msgData_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_){
_start:
{
lean_object* v___x_4196_; lean_object* v_env_4197_; lean_object* v___x_4198_; lean_object* v_toCold_4199_; lean_object* v_mctx_4200_; lean_object* v_lctx_4201_; lean_object* v_options_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; 
v___x_4196_ = lean_st_ref_get(v___y_4194_);
v_env_4197_ = lean_ctor_get(v___x_4196_, 0);
lean_inc_ref(v_env_4197_);
lean_dec(v___x_4196_);
v___x_4198_ = lean_st_ref_get(v___y_4192_);
v_toCold_4199_ = lean_ctor_get(v___y_4193_, 0);
v_mctx_4200_ = lean_ctor_get(v___x_4198_, 0);
lean_inc_ref(v_mctx_4200_);
lean_dec(v___x_4198_);
v_lctx_4201_ = lean_ctor_get(v___y_4191_, 2);
v_options_4202_ = lean_ctor_get(v_toCold_4199_, 2);
lean_inc_ref(v_options_4202_);
lean_inc_ref(v_lctx_4201_);
v___x_4203_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4203_, 0, v_env_4197_);
lean_ctor_set(v___x_4203_, 1, v_mctx_4200_);
lean_ctor_set(v___x_4203_, 2, v_lctx_4201_);
lean_ctor_set(v___x_4203_, 3, v_options_4202_);
v___x_4204_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4204_, 0, v___x_4203_);
lean_ctor_set(v___x_4204_, 1, v_msgData_4190_);
v___x_4205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4205_, 0, v___x_4204_);
return v___x_4205_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1_spec__1___boxed(lean_object* v_msgData_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_){
_start:
{
lean_object* v_res_4212_; 
v_res_4212_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1_spec__1(v_msgData_4206_, v___y_4207_, v___y_4208_, v___y_4209_, v___y_4210_);
lean_dec(v___y_4210_);
lean_dec_ref(v___y_4209_);
lean_dec(v___y_4208_);
lean_dec_ref(v___y_4207_);
return v_res_4212_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1___redArg(lean_object* v_msg_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_, lean_object* v___y_4216_, lean_object* v___y_4217_){
_start:
{
lean_object* v_ref_4219_; lean_object* v___x_4220_; lean_object* v_a_4221_; lean_object* v___x_4223_; uint8_t v_isShared_4224_; uint8_t v_isSharedCheck_4229_; 
v_ref_4219_ = lean_ctor_get(v___y_4216_, 2);
v___x_4220_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1_spec__1(v_msg_4213_, v___y_4214_, v___y_4215_, v___y_4216_, v___y_4217_);
v_a_4221_ = lean_ctor_get(v___x_4220_, 0);
v_isSharedCheck_4229_ = !lean_is_exclusive(v___x_4220_);
if (v_isSharedCheck_4229_ == 0)
{
v___x_4223_ = v___x_4220_;
v_isShared_4224_ = v_isSharedCheck_4229_;
goto v_resetjp_4222_;
}
else
{
lean_inc(v_a_4221_);
lean_dec(v___x_4220_);
v___x_4223_ = lean_box(0);
v_isShared_4224_ = v_isSharedCheck_4229_;
goto v_resetjp_4222_;
}
v_resetjp_4222_:
{
lean_object* v___x_4225_; lean_object* v___x_4227_; 
lean_inc(v_ref_4219_);
v___x_4225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4225_, 0, v_ref_4219_);
lean_ctor_set(v___x_4225_, 1, v_a_4221_);
if (v_isShared_4224_ == 0)
{
lean_ctor_set_tag(v___x_4223_, 1);
lean_ctor_set(v___x_4223_, 0, v___x_4225_);
v___x_4227_ = v___x_4223_;
goto v_reusejp_4226_;
}
else
{
lean_object* v_reuseFailAlloc_4228_; 
v_reuseFailAlloc_4228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4228_, 0, v___x_4225_);
v___x_4227_ = v_reuseFailAlloc_4228_;
goto v_reusejp_4226_;
}
v_reusejp_4226_:
{
return v___x_4227_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1___redArg___boxed(lean_object* v_msg_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_, lean_object* v___y_4235_){
_start:
{
lean_object* v_res_4236_; 
v_res_4236_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1___redArg(v_msg_4230_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
lean_dec(v___y_4234_);
lean_dec_ref(v___y_4233_);
lean_dec(v___y_4232_);
lean_dec_ref(v___y_4231_);
return v_res_4236_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6(lean_object* v_as_4243_, size_t v_i_4244_, size_t v_stop_4245_, lean_object* v_b_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_, lean_object* v___y_4251_, lean_object* v___y_4252_, lean_object* v___y_4253_, lean_object* v___y_4254_){
_start:
{
lean_object* v_a_4257_; lean_object* v_a_4262_; uint8_t v___x_4264_; 
v___x_4264_ = lean_usize_dec_eq(v_i_4244_, v_stop_4245_);
if (v___x_4264_ == 0)
{
lean_object* v___x_4265_; lean_object* v___x_4266_; 
v___x_4265_ = lean_array_uget_borrowed(v_as_4243_, v_i_4244_);
v___x_4266_ = l_Lean_Elab_Tactic_saveState___redArg(v___y_4248_, v___y_4250_, v___y_4252_, v___y_4254_);
if (lean_obj_tag(v___x_4266_) == 0)
{
lean_object* v_a_4267_; lean_object* v___y_4269_; uint8_t v___y_4270_; lean_object* v___y_4285_; lean_object* v_a_4286_; lean_object* v_ref_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; 
v_a_4267_ = lean_ctor_get(v___x_4266_, 0);
lean_inc(v_a_4267_);
lean_dec_ref_known(v___x_4266_, 1);
v_ref_4289_ = lean_ctor_get(v___y_4253_, 2);
v___x_4290_ = l_Lean_SourceInfo_fromRef(v_ref_4289_, v___x_4264_);
v___x_4291_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__0));
v___x_4292_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___closed__1));
lean_inc(v___x_4290_);
v___x_4293_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4293_, 0, v___x_4290_);
lean_ctor_set(v___x_4293_, 1, v___x_4291_);
v___x_4294_ = l_Lean_Syntax_node1(v___x_4290_, v___x_4292_, v___x_4293_);
lean_inc(v___x_4265_);
v___x_4295_ = l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_duplicateMVar(v___x_4265_, v___y_4251_, v___y_4252_, v___y_4253_, v___y_4254_);
if (lean_obj_tag(v___x_4295_) == 0)
{
lean_object* v_a_4296_; lean_object* v___x_4297_; 
v_a_4296_ = lean_ctor_get(v___x_4295_, 0);
lean_inc(v_a_4296_);
lean_dec_ref_known(v___x_4295_, 1);
v___x_4297_ = l_Lean_Elab_Tactic_evalTacticAt(v___x_4294_, v_a_4296_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_, v___y_4253_, v___y_4254_);
if (lean_obj_tag(v___x_4297_) == 0)
{
lean_object* v_a_4298_; lean_object* v___x_4299_; 
lean_dec(v_a_4267_);
v_a_4298_ = lean_ctor_get(v___x_4297_, 0);
lean_inc(v_a_4298_);
lean_dec_ref_known(v___x_4297_, 1);
v___x_4299_ = lean_array_mk(v_a_4298_);
v_a_4262_ = v___x_4299_;
goto v___jp_4261_;
}
else
{
lean_object* v_a_4300_; lean_object* v___x_4302_; uint8_t v_isShared_4303_; uint8_t v_isSharedCheck_4307_; 
v_a_4300_ = lean_ctor_get(v___x_4297_, 0);
v_isSharedCheck_4307_ = !lean_is_exclusive(v___x_4297_);
if (v_isSharedCheck_4307_ == 0)
{
v___x_4302_ = v___x_4297_;
v_isShared_4303_ = v_isSharedCheck_4307_;
goto v_resetjp_4301_;
}
else
{
lean_inc(v_a_4300_);
lean_dec(v___x_4297_);
v___x_4302_ = lean_box(0);
v_isShared_4303_ = v_isSharedCheck_4307_;
goto v_resetjp_4301_;
}
v_resetjp_4301_:
{
lean_object* v___x_4305_; 
lean_inc(v_a_4300_);
if (v_isShared_4303_ == 0)
{
v___x_4305_ = v___x_4302_;
goto v_reusejp_4304_;
}
else
{
lean_object* v_reuseFailAlloc_4306_; 
v_reuseFailAlloc_4306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4306_, 0, v_a_4300_);
v___x_4305_ = v_reuseFailAlloc_4306_;
goto v_reusejp_4304_;
}
v_reusejp_4304_:
{
v___y_4285_ = v___x_4305_;
v_a_4286_ = v_a_4300_;
goto v___jp_4284_;
}
}
}
}
else
{
lean_object* v_a_4308_; lean_object* v___x_4310_; uint8_t v_isShared_4311_; uint8_t v_isSharedCheck_4315_; 
lean_dec(v___x_4294_);
v_a_4308_ = lean_ctor_get(v___x_4295_, 0);
v_isSharedCheck_4315_ = !lean_is_exclusive(v___x_4295_);
if (v_isSharedCheck_4315_ == 0)
{
v___x_4310_ = v___x_4295_;
v_isShared_4311_ = v_isSharedCheck_4315_;
goto v_resetjp_4309_;
}
else
{
lean_inc(v_a_4308_);
lean_dec(v___x_4295_);
v___x_4310_ = lean_box(0);
v_isShared_4311_ = v_isSharedCheck_4315_;
goto v_resetjp_4309_;
}
v_resetjp_4309_:
{
lean_object* v___x_4313_; 
lean_inc(v_a_4308_);
if (v_isShared_4311_ == 0)
{
v___x_4313_ = v___x_4310_;
goto v_reusejp_4312_;
}
else
{
lean_object* v_reuseFailAlloc_4314_; 
v_reuseFailAlloc_4314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4314_, 0, v_a_4308_);
v___x_4313_ = v_reuseFailAlloc_4314_;
goto v_reusejp_4312_;
}
v_reusejp_4312_:
{
v___y_4285_ = v___x_4313_;
v_a_4286_ = v_a_4308_;
goto v___jp_4284_;
}
}
}
v___jp_4268_:
{
if (v___y_4270_ == 0)
{
lean_object* v___x_4271_; 
lean_dec_ref(v___y_4269_);
v___x_4271_ = l_Lean_Elab_Tactic_SavedState_restore___redArg(v_a_4267_, v___y_4270_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_, v___y_4253_, v___y_4254_);
if (lean_obj_tag(v___x_4271_) == 0)
{
lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; 
lean_dec_ref_known(v___x_4271_, 1);
v___x_4272_ = lean_unsigned_to_nat(1u);
v___x_4273_ = lean_mk_empty_array_with_capacity(v___x_4272_);
lean_inc(v___x_4265_);
v___x_4274_ = lean_array_push(v___x_4273_, v___x_4265_);
v_a_4262_ = v___x_4274_;
goto v___jp_4261_;
}
else
{
lean_object* v_a_4275_; lean_object* v___x_4277_; uint8_t v_isShared_4278_; uint8_t v_isSharedCheck_4282_; 
lean_dec_ref(v_b_4246_);
v_a_4275_ = lean_ctor_get(v___x_4271_, 0);
v_isSharedCheck_4282_ = !lean_is_exclusive(v___x_4271_);
if (v_isSharedCheck_4282_ == 0)
{
v___x_4277_ = v___x_4271_;
v_isShared_4278_ = v_isSharedCheck_4282_;
goto v_resetjp_4276_;
}
else
{
lean_inc(v_a_4275_);
lean_dec(v___x_4271_);
v___x_4277_ = lean_box(0);
v_isShared_4278_ = v_isSharedCheck_4282_;
goto v_resetjp_4276_;
}
v_resetjp_4276_:
{
lean_object* v___x_4280_; 
if (v_isShared_4278_ == 0)
{
v___x_4280_ = v___x_4277_;
goto v_reusejp_4279_;
}
else
{
lean_object* v_reuseFailAlloc_4281_; 
v_reuseFailAlloc_4281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4281_, 0, v_a_4275_);
v___x_4280_ = v_reuseFailAlloc_4281_;
goto v_reusejp_4279_;
}
v_reusejp_4279_:
{
return v___x_4280_;
}
}
}
}
else
{
lean_dec(v_a_4267_);
lean_dec_ref(v_b_4246_);
if (lean_obj_tag(v___y_4269_) == 0)
{
lean_object* v_a_4283_; 
v_a_4283_ = lean_ctor_get(v___y_4269_, 0);
lean_inc(v_a_4283_);
lean_dec_ref_known(v___y_4269_, 1);
v_a_4257_ = v_a_4283_;
goto v___jp_4256_;
}
else
{
return v___y_4269_;
}
}
}
v___jp_4284_:
{
uint8_t v___x_4287_; 
v___x_4287_ = l_Lean_Exception_isInterrupt(v_a_4286_);
if (v___x_4287_ == 0)
{
uint8_t v___x_4288_; 
v___x_4288_ = l_Lean_Exception_isRuntime(v_a_4286_);
v___y_4269_ = v___y_4285_;
v___y_4270_ = v___x_4288_;
goto v___jp_4268_;
}
else
{
lean_dec_ref(v_a_4286_);
v___y_4269_ = v___y_4285_;
v___y_4270_ = v___x_4287_;
goto v___jp_4268_;
}
}
}
else
{
lean_object* v_a_4316_; lean_object* v___x_4318_; uint8_t v_isShared_4319_; uint8_t v_isSharedCheck_4323_; 
lean_dec_ref(v_b_4246_);
v_a_4316_ = lean_ctor_get(v___x_4266_, 0);
v_isSharedCheck_4323_ = !lean_is_exclusive(v___x_4266_);
if (v_isSharedCheck_4323_ == 0)
{
v___x_4318_ = v___x_4266_;
v_isShared_4319_ = v_isSharedCheck_4323_;
goto v_resetjp_4317_;
}
else
{
lean_inc(v_a_4316_);
lean_dec(v___x_4266_);
v___x_4318_ = lean_box(0);
v_isShared_4319_ = v_isSharedCheck_4323_;
goto v_resetjp_4317_;
}
v_resetjp_4317_:
{
lean_object* v___x_4321_; 
if (v_isShared_4319_ == 0)
{
v___x_4321_ = v___x_4318_;
goto v_reusejp_4320_;
}
else
{
lean_object* v_reuseFailAlloc_4322_; 
v_reuseFailAlloc_4322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4322_, 0, v_a_4316_);
v___x_4321_ = v_reuseFailAlloc_4322_;
goto v_reusejp_4320_;
}
v_reusejp_4320_:
{
return v___x_4321_;
}
}
}
}
else
{
lean_object* v___x_4324_; 
v___x_4324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4324_, 0, v_b_4246_);
return v___x_4324_;
}
v___jp_4256_:
{
size_t v___x_4258_; size_t v___x_4259_; 
v___x_4258_ = ((size_t)1ULL);
v___x_4259_ = lean_usize_add(v_i_4244_, v___x_4258_);
v_i_4244_ = v___x_4259_;
v_b_4246_ = v_a_4257_;
goto _start;
}
v___jp_4261_:
{
lean_object* v___x_4263_; 
v___x_4263_ = l_Array_append___redArg(v_b_4246_, v_a_4262_);
lean_dec_ref(v_a_4262_);
v_a_4257_ = v___x_4263_;
goto v___jp_4256_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6___boxed(lean_object* v_as_4325_, lean_object* v_i_4326_, lean_object* v_stop_4327_, lean_object* v_b_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_, lean_object* v___y_4333_, lean_object* v___y_4334_, lean_object* v___y_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_){
_start:
{
size_t v_i_boxed_4338_; size_t v_stop_boxed_4339_; lean_object* v_res_4340_; 
v_i_boxed_4338_ = lean_unbox_usize(v_i_4326_);
lean_dec(v_i_4326_);
v_stop_boxed_4339_ = lean_unbox_usize(v_stop_4327_);
lean_dec(v_stop_4327_);
v_res_4340_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6(v_as_4325_, v_i_boxed_4338_, v_stop_boxed_4339_, v_b_4328_, v___y_4329_, v___y_4330_, v___y_4331_, v___y_4332_, v___y_4333_, v___y_4334_, v___y_4335_, v___y_4336_);
lean_dec(v___y_4336_);
lean_dec_ref(v___y_4335_);
lean_dec(v___y_4334_);
lean_dec_ref(v___y_4333_);
lean_dec(v___y_4332_);
lean_dec_ref(v___y_4331_);
lean_dec(v___y_4330_);
lean_dec_ref(v___y_4329_);
lean_dec_ref(v_as_4325_);
return v_res_4340_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_suggestInvariant___closed__1(void){
_start:
{
lean_object* v___x_4342_; lean_object* v___x_4343_; 
v___x_4342_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___closed__0));
v___x_4343_ = l_Lean_stringToMessageData(v___x_4342_);
return v___x_4343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant(lean_object* v_vcs_4359_, lean_object* v_inv_4360_, lean_object* v_a_4361_, lean_object* v_a_4362_, lean_object* v_a_4363_, lean_object* v_a_4364_, lean_object* v_a_4365_, lean_object* v_a_4366_, lean_object* v_a_4367_, lean_object* v_a_4368_){
_start:
{
lean_object* v___x_4370_; 
lean_inc(v_inv_4360_);
v___x_4370_ = l_Lean_MVarId_getType(v_inv_4360_, v_a_4365_, v_a_4366_, v_a_4367_, v_a_4368_);
if (lean_obj_tag(v___x_4370_) == 0)
{
lean_object* v_a_4371_; lean_object* v___x_4372_; lean_object* v_a_4373_; lean_object* v___y_4375_; lean_object* v___y_4376_; lean_object* v___y_4377_; lean_object* v___y_4378_; lean_object* v___y_4379_; lean_object* v___y_4380_; lean_object* v___y_4381_; lean_object* v___y_4382_; lean_object* v___x_4387_; uint8_t v___x_4388_; 
v_a_4371_ = lean_ctor_get(v___x_4370_, 0);
lean_inc(v_a_4371_);
lean_dec_ref_known(v___x_4370_, 1);
v___x_4372_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__0___redArg(v_a_4371_, v_a_4366_);
v_a_4373_ = lean_ctor_get(v___x_4372_, 0);
lean_inc_n(v_a_4373_, 2);
lean_dec_ref(v___x_4372_);
v___x_4387_ = l_Lean_Expr_cleanupAnnotations(v_a_4373_);
v___x_4388_ = l_Lean_Expr_isApp(v___x_4387_);
if (v___x_4388_ == 0)
{
lean_dec_ref(v___x_4387_);
lean_dec(v_inv_4360_);
v___y_4375_ = v_a_4361_;
v___y_4376_ = v_a_4362_;
v___y_4377_ = v_a_4363_;
v___y_4378_ = v_a_4364_;
v___y_4379_ = v_a_4365_;
v___y_4380_ = v_a_4366_;
v___y_4381_ = v_a_4367_;
v___y_4382_ = v_a_4368_;
goto v___jp_4374_;
}
else
{
lean_object* v___x_4389_; uint8_t v___x_4390_; 
v___x_4389_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4387_);
v___x_4390_ = l_Lean_Expr_isApp(v___x_4389_);
if (v___x_4390_ == 0)
{
lean_dec_ref(v___x_4389_);
lean_dec(v_inv_4360_);
v___y_4375_ = v_a_4361_;
v___y_4376_ = v_a_4362_;
v___y_4377_ = v_a_4363_;
v___y_4378_ = v_a_4364_;
v___y_4379_ = v_a_4365_;
v___y_4380_ = v_a_4366_;
v___y_4381_ = v_a_4367_;
v___y_4382_ = v_a_4368_;
goto v___jp_4374_;
}
else
{
lean_object* v_arg_4391_; lean_object* v___x_4392_; uint8_t v___x_4393_; 
v_arg_4391_ = lean_ctor_get(v___x_4389_, 1);
lean_inc_ref(v_arg_4391_);
v___x_4392_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4389_);
v___x_4393_ = l_Lean_Expr_isApp(v___x_4392_);
if (v___x_4393_ == 0)
{
lean_dec_ref(v___x_4392_);
lean_dec_ref(v_arg_4391_);
lean_dec(v_inv_4360_);
v___y_4375_ = v_a_4361_;
v___y_4376_ = v_a_4362_;
v___y_4377_ = v_a_4363_;
v___y_4378_ = v_a_4364_;
v___y_4379_ = v_a_4365_;
v___y_4380_ = v_a_4366_;
v___y_4381_ = v_a_4367_;
v___y_4382_ = v_a_4368_;
goto v___jp_4374_;
}
else
{
lean_object* v_arg_4394_; lean_object* v___x_4395_; uint8_t v___x_4396_; 
v_arg_4394_ = lean_ctor_get(v___x_4392_, 1);
lean_inc_ref(v_arg_4394_);
v___x_4395_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4392_);
v___x_4396_ = l_Lean_Expr_isApp(v___x_4395_);
if (v___x_4396_ == 0)
{
lean_dec_ref(v___x_4395_);
lean_dec_ref(v_arg_4394_);
lean_dec_ref(v_arg_4391_);
lean_dec(v_inv_4360_);
v___y_4375_ = v_a_4361_;
v___y_4376_ = v_a_4362_;
v___y_4377_ = v_a_4363_;
v___y_4378_ = v_a_4364_;
v___y_4379_ = v_a_4365_;
v___y_4380_ = v_a_4366_;
v___y_4381_ = v_a_4367_;
v___y_4382_ = v_a_4368_;
goto v___jp_4374_;
}
else
{
lean_object* v_arg_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; uint8_t v___x_4403_; 
v_arg_4397_ = lean_ctor_get(v___x_4395_, 1);
lean_inc_ref(v_arg_4397_);
v___x_4398_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4395_);
v___x_4399_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__2));
v___x_4400_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant_0__Lean_Elab_Tactic_Do_getSPredGoalHypsAndTarget___redArg___closed__4));
v___x_4401_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___closed__2));
v___x_4402_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___closed__3));
v___x_4403_ = l_Lean_Expr_isConstOf(v___x_4398_, v___x_4402_);
if (v___x_4403_ == 0)
{
lean_dec_ref(v___x_4398_);
lean_dec_ref(v_arg_4397_);
lean_dec_ref(v_arg_4394_);
lean_dec_ref(v_arg_4391_);
lean_dec(v_inv_4360_);
v___y_4375_ = v_a_4361_;
v___y_4376_ = v_a_4362_;
v___y_4377_ = v_a_4363_;
v___y_4378_ = v_a_4364_;
v___y_4379_ = v_a_4365_;
v___y_4380_ = v_a_4366_;
v___y_4381_ = v_a_4367_;
v___y_4382_ = v_a_4368_;
goto v___jp_4374_;
}
else
{
lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; lean_object* v___x_4408_; lean_object* v_a_4410_; lean_object* v___x_4421_; lean_object* v___x_4422_; uint8_t v___x_4423_; 
lean_dec(v_a_4373_);
v___x_4404_ = lean_unsigned_to_nat(1u);
v___x_4405_ = l_Lean_Expr_constLevels_x21(v___x_4398_);
lean_dec_ref(v___x_4398_);
v___x_4406_ = lean_unsigned_to_nat(0u);
v___x_4407_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___closed__4));
lean_inc(v___x_4405_);
v___x_4408_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v___x_4405_, v___x_4405_, v___x_4404_, v___x_4407_);
lean_dec(v___x_4405_);
v___x_4421_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___closed__8));
v___x_4422_ = lean_array_get_size(v_vcs_4359_);
v___x_4423_ = lean_nat_dec_lt(v___x_4406_, v___x_4422_);
if (v___x_4423_ == 0)
{
v_a_4410_ = v___x_4421_;
goto v___jp_4409_;
}
else
{
size_t v___x_4424_; size_t v___x_4425_; lean_object* v___x_4426_; 
v___x_4424_ = ((size_t)0ULL);
v___x_4425_ = lean_usize_of_nat(v___x_4422_);
v___x_4426_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__6(v_vcs_4359_, v___x_4424_, v___x_4425_, v___x_4421_, v_a_4361_, v_a_4362_, v_a_4363_, v_a_4364_, v_a_4365_, v_a_4366_, v_a_4367_, v_a_4368_);
if (lean_obj_tag(v___x_4426_) == 0)
{
lean_object* v_a_4427_; 
v_a_4427_ = lean_ctor_get(v___x_4426_, 0);
lean_inc(v_a_4427_);
lean_dec_ref_known(v___x_4426_, 1);
v_a_4410_ = v_a_4427_;
goto v___jp_4409_;
}
else
{
lean_object* v_a_4428_; lean_object* v___x_4430_; uint8_t v_isShared_4431_; uint8_t v_isSharedCheck_4435_; 
lean_dec(v___x_4408_);
lean_dec_ref(v_arg_4397_);
lean_dec_ref(v_arg_4394_);
lean_dec_ref(v_arg_4391_);
lean_dec(v_inv_4360_);
v_a_4428_ = lean_ctor_get(v___x_4426_, 0);
v_isSharedCheck_4435_ = !lean_is_exclusive(v___x_4426_);
if (v_isSharedCheck_4435_ == 0)
{
v___x_4430_ = v___x_4426_;
v_isShared_4431_ = v_isSharedCheck_4435_;
goto v_resetjp_4429_;
}
else
{
lean_inc(v_a_4428_);
lean_dec(v___x_4426_);
v___x_4430_ = lean_box(0);
v_isShared_4431_ = v_isSharedCheck_4435_;
goto v_resetjp_4429_;
}
v_resetjp_4429_:
{
lean_object* v___x_4433_; 
if (v_isShared_4431_ == 0)
{
v___x_4433_ = v___x_4430_;
goto v_reusejp_4432_;
}
else
{
lean_object* v_reuseFailAlloc_4434_; 
v_reuseFailAlloc_4434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4434_, 0, v_a_4428_);
v___x_4433_ = v_reuseFailAlloc_4434_;
goto v_reusejp_4432_;
}
v_reusejp_4432_:
{
return v___x_4433_;
}
}
}
}
v___jp_4409_:
{
lean_object* v___x_4411_; lean_object* v___f_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___f_4419_; lean_object* v___x_4420_; 
v___x_4411_ = lean_box(v___x_4403_);
lean_inc_ref(v_arg_4391_);
lean_inc_n(v_inv_4360_, 2);
lean_inc_ref(v_a_4410_);
v___f_4412_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__1___boxed), 15, 5);
lean_closure_set(v___f_4412_, 0, v_a_4410_);
lean_closure_set(v___f_4412_, 1, v_inv_4360_);
lean_closure_set(v___f_4412_, 2, v___x_4411_);
lean_closure_set(v___f_4412_, 3, v___x_4404_);
lean_closure_set(v___f_4412_, 4, v_arg_4391_);
v___x_4413_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___closed__5));
v___x_4414_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___closed__6));
v___x_4415_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_suggestInvariant___closed__7));
v___x_4416_ = l_Lean_mkConst(v___x_4415_, v___x_4408_);
v___x_4417_ = l_Lean_mkAppB(v___x_4416_, v_arg_4397_, v_arg_4394_);
v___x_4418_ = lean_box(v___x_4403_);
v___f_4419_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_suggestInvariant___lam__7___boxed), 22, 13);
lean_closure_set(v___f_4419_, 0, v___x_4414_);
lean_closure_set(v___f_4419_, 1, v___x_4417_);
lean_closure_set(v___f_4419_, 2, v___f_4412_);
lean_closure_set(v___f_4419_, 3, v_a_4410_);
lean_closure_set(v___f_4419_, 4, v_inv_4360_);
lean_closure_set(v___f_4419_, 5, v_arg_4391_);
lean_closure_set(v___f_4419_, 6, v___x_4404_);
lean_closure_set(v___f_4419_, 7, v___x_4418_);
lean_closure_set(v___f_4419_, 8, v___x_4406_);
lean_closure_set(v___f_4419_, 9, v___x_4401_);
lean_closure_set(v___f_4419_, 10, v___x_4399_);
lean_closure_set(v___f_4419_, 11, v___x_4400_);
lean_closure_set(v___f_4419_, 12, v___x_4413_);
v___x_4420_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__5___redArg(v_inv_4360_, v___f_4419_, v_a_4361_, v_a_4362_, v_a_4363_, v_a_4364_, v_a_4365_, v_a_4366_, v_a_4367_, v_a_4368_);
return v___x_4420_;
}
}
}
}
}
}
v___jp_4374_:
{
lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; 
v___x_4383_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_suggestInvariant___closed__1, &l_Lean_Elab_Tactic_Do_suggestInvariant___closed__1_once, _init_l_Lean_Elab_Tactic_Do_suggestInvariant___closed__1);
v___x_4384_ = l_Lean_MessageData_ofExpr(v_a_4373_);
v___x_4385_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4385_, 0, v___x_4383_);
lean_ctor_set(v___x_4385_, 1, v___x_4384_);
v___x_4386_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1___redArg(v___x_4385_, v___y_4379_, v___y_4380_, v___y_4381_, v___y_4382_);
return v___x_4386_;
}
}
else
{
lean_object* v_a_4436_; lean_object* v___x_4438_; uint8_t v_isShared_4439_; uint8_t v_isSharedCheck_4443_; 
lean_dec(v_inv_4360_);
v_a_4436_ = lean_ctor_get(v___x_4370_, 0);
v_isSharedCheck_4443_ = !lean_is_exclusive(v___x_4370_);
if (v_isSharedCheck_4443_ == 0)
{
v___x_4438_ = v___x_4370_;
v_isShared_4439_ = v_isSharedCheck_4443_;
goto v_resetjp_4437_;
}
else
{
lean_inc(v_a_4436_);
lean_dec(v___x_4370_);
v___x_4438_ = lean_box(0);
v_isShared_4439_ = v_isSharedCheck_4443_;
goto v_resetjp_4437_;
}
v_resetjp_4437_:
{
lean_object* v___x_4441_; 
if (v_isShared_4439_ == 0)
{
v___x_4441_ = v___x_4438_;
goto v_reusejp_4440_;
}
else
{
lean_object* v_reuseFailAlloc_4442_; 
v_reuseFailAlloc_4442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4442_, 0, v_a_4436_);
v___x_4441_ = v_reuseFailAlloc_4442_;
goto v_reusejp_4440_;
}
v_reusejp_4440_:
{
return v___x_4441_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___boxed(lean_object* v_vcs_4444_, lean_object* v_inv_4445_, lean_object* v_a_4446_, lean_object* v_a_4447_, lean_object* v_a_4448_, lean_object* v_a_4449_, lean_object* v_a_4450_, lean_object* v_a_4451_, lean_object* v_a_4452_, lean_object* v_a_4453_, lean_object* v_a_4454_){
_start:
{
lean_object* v_res_4455_; 
v_res_4455_ = l_Lean_Elab_Tactic_Do_suggestInvariant(v_vcs_4444_, v_inv_4445_, v_a_4446_, v_a_4447_, v_a_4448_, v_a_4449_, v_a_4450_, v_a_4451_, v_a_4452_, v_a_4453_);
lean_dec(v_a_4453_);
lean_dec_ref(v_a_4452_);
lean_dec(v_a_4451_);
lean_dec_ref(v_a_4450_);
lean_dec(v_a_4449_);
lean_dec_ref(v_a_4448_);
lean_dec(v_a_4447_);
lean_dec_ref(v_a_4446_);
lean_dec_ref(v_vcs_4444_);
return v_res_4455_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1(lean_object* v_00_u03b1_4456_, lean_object* v_msg_4457_, lean_object* v___y_4458_, lean_object* v___y_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_){
_start:
{
lean_object* v___x_4467_; 
v___x_4467_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1___redArg(v_msg_4457_, v___y_4462_, v___y_4463_, v___y_4464_, v___y_4465_);
return v___x_4467_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1___boxed(lean_object* v_00_u03b1_4468_, lean_object* v_msg_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_, lean_object* v___y_4475_, lean_object* v___y_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_){
_start:
{
lean_object* v_res_4479_; 
v_res_4479_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__1(v_00_u03b1_4468_, v_msg_4469_, v___y_4470_, v___y_4471_, v___y_4472_, v___y_4473_, v___y_4474_, v___y_4475_, v___y_4476_, v___y_4477_);
lean_dec(v___y_4477_);
lean_dec_ref(v___y_4476_);
lean_dec(v___y_4475_);
lean_dec_ref(v___y_4474_);
lean_dec(v___y_4473_);
lean_dec_ref(v___y_4472_);
lean_dec(v___y_4471_);
lean_dec_ref(v___y_4470_);
return v_res_4479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3(lean_object* v_00_u03b1_4480_, lean_object* v_name_4481_, uint8_t v_bi_4482_, lean_object* v_type_4483_, lean_object* v_k_4484_, uint8_t v_kind_4485_, lean_object* v___y_4486_, lean_object* v___y_4487_, lean_object* v___y_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_){
_start:
{
lean_object* v___x_4495_; 
v___x_4495_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___redArg(v_name_4481_, v_bi_4482_, v_type_4483_, v_k_4484_, v_kind_4485_, v___y_4486_, v___y_4487_, v___y_4488_, v___y_4489_, v___y_4490_, v___y_4491_, v___y_4492_, v___y_4493_);
return v___x_4495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3___boxed(lean_object* v_00_u03b1_4496_, lean_object* v_name_4497_, lean_object* v_bi_4498_, lean_object* v_type_4499_, lean_object* v_k_4500_, lean_object* v_kind_4501_, lean_object* v___y_4502_, lean_object* v___y_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_, lean_object* v___y_4510_){
_start:
{
uint8_t v_bi_boxed_4511_; uint8_t v_kind_boxed_4512_; lean_object* v_res_4513_; 
v_bi_boxed_4511_ = lean_unbox(v_bi_4498_);
v_kind_boxed_4512_ = lean_unbox(v_kind_4501_);
v_res_4513_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2_spec__3(v_00_u03b1_4496_, v_name_4497_, v_bi_boxed_4511_, v_type_4499_, v_k_4500_, v_kind_boxed_4512_, v___y_4502_, v___y_4503_, v___y_4504_, v___y_4505_, v___y_4506_, v___y_4507_, v___y_4508_, v___y_4509_);
lean_dec(v___y_4509_);
lean_dec_ref(v___y_4508_);
lean_dec(v___y_4507_);
lean_dec_ref(v___y_4506_);
lean_dec(v___y_4505_);
lean_dec_ref(v___y_4504_);
lean_dec(v___y_4503_);
lean_dec_ref(v___y_4502_);
return v_res_4513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2(lean_object* v_00_u03b1_4514_, lean_object* v_name_4515_, lean_object* v_type_4516_, lean_object* v_k_4517_, lean_object* v___y_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_, lean_object* v___y_4522_, lean_object* v___y_4523_, lean_object* v___y_4524_, lean_object* v___y_4525_){
_start:
{
lean_object* v___x_4527_; 
v___x_4527_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___redArg(v_name_4515_, v_type_4516_, v_k_4517_, v___y_4518_, v___y_4519_, v___y_4520_, v___y_4521_, v___y_4522_, v___y_4523_, v___y_4524_, v___y_4525_);
return v___x_4527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2___boxed(lean_object* v_00_u03b1_4528_, lean_object* v_name_4529_, lean_object* v_type_4530_, lean_object* v_k_4531_, lean_object* v___y_4532_, lean_object* v___y_4533_, lean_object* v___y_4534_, lean_object* v___y_4535_, lean_object* v___y_4536_, lean_object* v___y_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_){
_start:
{
lean_object* v_res_4541_; 
v_res_4541_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__2(v_00_u03b1_4528_, v_name_4529_, v_type_4530_, v_k_4531_, v___y_4532_, v___y_4533_, v___y_4534_, v___y_4535_, v___y_4536_, v___y_4537_, v___y_4538_, v___y_4539_);
lean_dec(v___y_4539_);
lean_dec_ref(v___y_4538_);
lean_dec(v___y_4537_);
lean_dec_ref(v___y_4536_);
lean_dec(v___y_4535_);
lean_dec_ref(v___y_4534_);
lean_dec(v___y_4533_);
lean_dec_ref(v___y_4532_);
return v_res_4541_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3(lean_object* v_as_4542_, size_t v_sz_4543_, size_t v_i_4544_, lean_object* v_b_4545_, lean_object* v___y_4546_, lean_object* v___y_4547_, lean_object* v___y_4548_, lean_object* v___y_4549_, lean_object* v___y_4550_, lean_object* v___y_4551_, lean_object* v___y_4552_, lean_object* v___y_4553_){
_start:
{
lean_object* v___x_4555_; 
v___x_4555_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3___redArg(v_as_4542_, v_sz_4543_, v_i_4544_, v_b_4545_, v___y_4550_, v___y_4551_, v___y_4552_, v___y_4553_);
return v___x_4555_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3___boxed(lean_object* v_as_4556_, lean_object* v_sz_4557_, lean_object* v_i_4558_, lean_object* v_b_4559_, lean_object* v___y_4560_, lean_object* v___y_4561_, lean_object* v___y_4562_, lean_object* v___y_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_, lean_object* v___y_4566_, lean_object* v___y_4567_, lean_object* v___y_4568_){
_start:
{
size_t v_sz_boxed_4569_; size_t v_i_boxed_4570_; lean_object* v_res_4571_; 
v_sz_boxed_4569_ = lean_unbox_usize(v_sz_4557_);
lean_dec(v_sz_4557_);
v_i_boxed_4570_ = lean_unbox_usize(v_i_4558_);
lean_dec(v_i_4558_);
v_res_4571_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__3(v_as_4556_, v_sz_boxed_4569_, v_i_boxed_4570_, v_b_4559_, v___y_4560_, v___y_4561_, v___y_4562_, v___y_4563_, v___y_4564_, v___y_4565_, v___y_4566_, v___y_4567_);
lean_dec(v___y_4567_);
lean_dec_ref(v___y_4566_);
lean_dec(v___y_4565_);
lean_dec_ref(v___y_4564_);
lean_dec(v___y_4563_);
lean_dec_ref(v___y_4562_);
lean_dec(v___y_4561_);
lean_dec_ref(v___y_4560_);
lean_dec_ref(v_as_4556_);
return v_res_4571_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4(lean_object* v_as_4572_, size_t v_sz_4573_, size_t v_i_4574_, lean_object* v_b_4575_, lean_object* v___y_4576_, lean_object* v___y_4577_, lean_object* v___y_4578_, lean_object* v___y_4579_, lean_object* v___y_4580_, lean_object* v___y_4581_, lean_object* v___y_4582_, lean_object* v___y_4583_){
_start:
{
lean_object* v___x_4585_; 
v___x_4585_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4___redArg(v_as_4572_, v_sz_4573_, v_i_4574_, v_b_4575_, v___y_4580_, v___y_4581_, v___y_4582_, v___y_4583_);
return v___x_4585_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4___boxed(lean_object* v_as_4586_, lean_object* v_sz_4587_, lean_object* v_i_4588_, lean_object* v_b_4589_, lean_object* v___y_4590_, lean_object* v___y_4591_, lean_object* v___y_4592_, lean_object* v___y_4593_, lean_object* v___y_4594_, lean_object* v___y_4595_, lean_object* v___y_4596_, lean_object* v___y_4597_, lean_object* v___y_4598_){
_start:
{
size_t v_sz_boxed_4599_; size_t v_i_boxed_4600_; lean_object* v_res_4601_; 
v_sz_boxed_4599_ = lean_unbox_usize(v_sz_4587_);
lean_dec(v_sz_4587_);
v_i_boxed_4600_ = lean_unbox_usize(v_i_4588_);
lean_dec(v_i_4588_);
v_res_4601_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_suggestInvariant_spec__4(v_as_4586_, v_sz_boxed_4599_, v_i_boxed_4600_, v_b_4589_, v___y_4590_, v___y_4591_, v___y_4592_, v___y_4593_, v___y_4594_, v___y_4595_, v___y_4596_, v___y_4597_);
lean_dec(v___y_4597_);
lean_dec_ref(v___y_4596_);
lean_dec(v___y_4595_);
lean_dec_ref(v___y_4594_);
lean_dec(v___y_4593_);
lean_dec_ref(v___y_4592_);
lean_dec(v___y_4591_);
lean_dec_ref(v___y_4590_);
lean_dec_ref(v_as_4586_);
return v_res_4601_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
lean_object* runtime_initialize_Std_Tactic_Do(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Mem(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Tactic_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Mem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
lean_object* initialize_Std_Tactic_Do(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Mem(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Tactic_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Mem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ProofMode.Pure
// Imports: public import Lean.Elab.Tactic.Do.ProofMode.MGoal import Lean.Elab.Tactic.Meta import Lean.Elab.Tactic.Do.ProofMode.Basic import Lean.Elab.Tactic.Do.ProofMode.Focus import Lean.Meta.Tactic.Rfl
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
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
lean_object* l_Lean_Meta_mkFreshLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_setType___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_applyRfl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_length(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_FocusResult_restGoal(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_FocusResult_rewriteHyps(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_runTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Pure"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "thm"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__8___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "IsPure"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value),LEAN_SCALAR_PTR_LITERAL(167, 48, 44, 122, 88, 53, 63, 251)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__4_value),LEAN_SCALAR_PTR_LITERAL(237, 27, 197, 114, 200, 2, 153, 253)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_mkFreshLevelMVar___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mpure"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__2_value),LEAN_SCALAR_PTR_LITERAL(99, 40, 78, 170, 57, 132, 109, 163)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ProofMode"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "elabMPure"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__3_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(255, 74, 68, 148, 0, 14, 81, 75)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__3_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(49, 32, 90, 224, 99, 186, 132, 74)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value),LEAN_SCALAR_PTR_LITERAL(167, 48, 44, 122, 88, 53, 63, 251)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(125, 186, 166, 18, 114, 151, 126, 123)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(246, 69, 55, 193, 136, 208, 207, 117)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "mpureIntro"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(100, 145, 131, 67, 32, 11, 101, 202)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "elabMPureIntro"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__1_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(255, 74, 68, 148, 0, 14, 81, 75)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__1_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(20, 186, 47, 90, 191, 89, 235, 189)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ULift"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "down"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(14, 162, 24, 1, 186, 170, 9, 57)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(8, 0, 133, 161, 22, 18, 91, 229)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pure"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(83, 183, 133, 62, 214, 202, 136, 98)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_applyRflAndAndIntro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__0 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__1 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__1_value;
static const lean_string_object l_Lean_MVarId_applyRflAndAndIntro___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__2 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__2_value;
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__3 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__3_value;
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(58, 46, 244, 208, 18, 71, 77, 162)}};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__4 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__4_value;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__5;
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(177, 152, 123, 219, 220, 182, 189, 250)}};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__6 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__6_value;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__7;
static const lean_string_object l_Lean_MVarId_applyRflAndAndIntro___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "spec"};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__8 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__8_value;
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value),LEAN_SCALAR_PTR_LITERAL(180, 190, 140, 210, 253, 78, 130, 238)}};
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 104, 229, 54, 179, 197, 12, 87)}};
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__9_value_aux_2),((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__8_value),LEAN_SCALAR_PTR_LITERAL(155, 14, 123, 28, 194, 252, 167, 244)}};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__9 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__9_value;
static const lean_string_object l_Lean_MVarId_applyRflAndAndIntro___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__10 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__10_value;
static const lean_ctor_object l_Lean_MVarId_applyRflAndAndIntro___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__10_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__11 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__11_value;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__12;
static const lean_string_object l_Lean_MVarId_applyRflAndAndIntro___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "pure Prop: "};
static const lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__13 = (const lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__13_value;
static lean_once_cell_t l_Lean_MVarId_applyRflAndAndIntro___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyRflAndAndIntro___closed__14;
LEAN_EXPORT lean_object* l_Lean_MVarId_applyRflAndAndIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyRflAndAndIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___closed__0 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "discharged: "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "discharge\? "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__9_value)} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___boxed, .m_arity = 8, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_MVarId_applyRflAndAndIntro___closed__9_value),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__0_value)} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "pureRflAndAndIntro: "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "tacticTrivial"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 113, 211, 1, 53, 106, 100, 38)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "trivial"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__2_value;
static const lean_array_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__0(lean_object* v___y_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_){
_start:
{
lean_object* v_lctx_6_; lean_object* v___x_7_; 
v_lctx_6_ = lean_ctor_get(v___y_1_, 2);
lean_inc_ref(v_lctx_6_);
v___x_7_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7_, 0, v_lctx_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__0___boxed(lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__0(v___y_8_, v___y_9_, v___y_10_, v___y_11_);
lean_dec(v___y_11_);
lean_dec_ref(v___y_10_);
lean_dec(v___y_9_);
lean_dec_ref(v___y_8_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__1(lean_object* v_name_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName(v_name_14_, v___y_17_, v___y_18_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__1___boxed(lean_object* v_name_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__1(v_name_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_);
lean_dec(v___y_25_);
lean_dec_ref(v___y_24_);
lean_dec(v___y_23_);
lean_dec_ref(v___y_22_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2(lean_object* v_fst_30_, lean_object* v___x_31_, lean_object* v___x_32_, lean_object* v___x_33_, lean_object* v___x_34_, lean_object* v___x_35_, lean_object* v_00_u03c3s_36_, lean_object* v_hyp_37_, lean_object* v_00_u03c6_38_, lean_object* v_inst_39_, lean_object* v_u_40_, lean_object* v_fst_41_, lean_object* v_toPure_42_, lean_object* v_prf_43_){
_start:
{
lean_object* v_u_44_; lean_object* v_00_u03c3s_45_; lean_object* v_hyps_46_; lean_object* v_target_47_; lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_63_; 
v_u_44_ = lean_ctor_get(v_fst_30_, 0);
v_00_u03c3s_45_ = lean_ctor_get(v_fst_30_, 1);
v_hyps_46_ = lean_ctor_get(v_fst_30_, 2);
v_target_47_ = lean_ctor_get(v_fst_30_, 3);
v_isSharedCheck_63_ = !lean_is_exclusive(v_fst_30_);
if (v_isSharedCheck_63_ == 0)
{
v___x_49_ = v_fst_30_;
v_isShared_50_ = v_isSharedCheck_63_;
goto v_resetjp_48_;
}
else
{
lean_inc(v_target_47_);
lean_inc(v_hyps_46_);
lean_inc(v_00_u03c3s_45_);
lean_inc(v_u_44_);
lean_dec(v_fst_30_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_63_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v_prf_55_; lean_object* v___x_56_; lean_object* v_goal_58_; 
v___x_51_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0));
v___x_52_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__1));
v___x_53_ = l_Lean_Name_mkStr6(v___x_31_, v___x_32_, v___x_33_, v___x_34_, v___x_51_, v___x_52_);
v___x_54_ = l_Lean_mkConst(v___x_53_, v___x_35_);
lean_inc_ref(v_target_47_);
lean_inc_ref(v_hyp_37_);
lean_inc_ref(v_hyps_46_);
lean_inc_ref(v_00_u03c3s_36_);
v_prf_55_ = l_Lean_mkApp7(v___x_54_, v_00_u03c3s_36_, v_hyps_46_, v_hyp_37_, v_target_47_, v_00_u03c6_38_, v_inst_39_, v_prf_43_);
v___x_56_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_u_40_, v_00_u03c3s_36_, v_hyps_46_, v_hyp_37_);
if (v_isShared_50_ == 0)
{
lean_ctor_set(v___x_49_, 2, v___x_56_);
v_goal_58_ = v___x_49_;
goto v_reusejp_57_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v_u_44_);
lean_ctor_set(v_reuseFailAlloc_62_, 1, v_00_u03c3s_45_);
lean_ctor_set(v_reuseFailAlloc_62_, 2, v___x_56_);
lean_ctor_set(v_reuseFailAlloc_62_, 3, v_target_47_);
v_goal_58_ = v_reuseFailAlloc_62_;
goto v_reusejp_57_;
}
v_reusejp_57_:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_59_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_59_, 0, v_goal_58_);
lean_ctor_set(v___x_59_, 1, v_prf_55_);
v___x_60_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_60_, 0, v_fst_41_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
v___x_61_ = lean_apply_2(v_toPure_42_, lean_box(0), v___x_60_);
return v___x_61_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__3(lean_object* v___x_64_, lean_object* v___x_65_, lean_object* v___x_66_, lean_object* v___x_67_, lean_object* v___x_68_, lean_object* v_00_u03c3s_69_, lean_object* v_hyp_70_, lean_object* v_00_u03c6_71_, lean_object* v_inst_72_, lean_object* v_u_73_, lean_object* v_toPure_74_, lean_object* v_h_75_, uint8_t v___x_76_, lean_object* v_inst_77_, lean_object* v_toBind_78_, lean_object* v_____x_79_){
_start:
{
lean_object* v_snd_80_; lean_object* v_fst_81_; lean_object* v_fst_82_; lean_object* v_snd_83_; lean_object* v___f_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; uint8_t v___x_88_; uint8_t v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v_snd_80_ = lean_ctor_get(v_____x_79_, 1);
lean_inc(v_snd_80_);
v_fst_81_ = lean_ctor_get(v_____x_79_, 0);
lean_inc(v_fst_81_);
lean_dec_ref(v_____x_79_);
v_fst_82_ = lean_ctor_get(v_snd_80_, 0);
lean_inc(v_fst_82_);
v_snd_83_ = lean_ctor_get(v_snd_80_, 1);
lean_inc(v_snd_83_);
lean_dec(v_snd_80_);
v___f_84_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2), 14, 13);
lean_closure_set(v___f_84_, 0, v_fst_82_);
lean_closure_set(v___f_84_, 1, v___x_64_);
lean_closure_set(v___f_84_, 2, v___x_65_);
lean_closure_set(v___f_84_, 3, v___x_66_);
lean_closure_set(v___f_84_, 4, v___x_67_);
lean_closure_set(v___f_84_, 5, v___x_68_);
lean_closure_set(v___f_84_, 6, v_00_u03c3s_69_);
lean_closure_set(v___f_84_, 7, v_hyp_70_);
lean_closure_set(v___f_84_, 8, v_00_u03c6_71_);
lean_closure_set(v___f_84_, 9, v_inst_72_);
lean_closure_set(v___f_84_, 10, v_u_73_);
lean_closure_set(v___f_84_, 11, v_fst_81_);
lean_closure_set(v___f_84_, 12, v_toPure_74_);
v___x_85_ = lean_unsigned_to_nat(1u);
v___x_86_ = lean_mk_empty_array_with_capacity(v___x_85_);
v___x_87_ = lean_array_push(v___x_86_, v_h_75_);
v___x_88_ = 1;
v___x_89_ = 1;
v___x_90_ = lean_box(v___x_76_);
v___x_91_ = lean_box(v___x_88_);
v___x_92_ = lean_box(v___x_76_);
v___x_93_ = lean_box(v___x_88_);
v___x_94_ = lean_box(v___x_89_);
v___x_95_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_95_, 0, v___x_87_);
lean_closure_set(v___x_95_, 1, v_snd_83_);
lean_closure_set(v___x_95_, 2, v___x_90_);
lean_closure_set(v___x_95_, 3, v___x_91_);
lean_closure_set(v___x_95_, 4, v___x_92_);
lean_closure_set(v___x_95_, 5, v___x_93_);
lean_closure_set(v___x_95_, 6, v___x_94_);
v___x_96_ = lean_apply_2(v_inst_77_, lean_box(0), v___x_95_);
v___x_97_ = lean_apply_4(v_toBind_78_, lean_box(0), lean_box(0), v___x_96_, v___f_84_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__3___boxed(lean_object* v___x_98_, lean_object* v___x_99_, lean_object* v___x_100_, lean_object* v___x_101_, lean_object* v___x_102_, lean_object* v_00_u03c3s_103_, lean_object* v_hyp_104_, lean_object* v_00_u03c6_105_, lean_object* v_inst_106_, lean_object* v_u_107_, lean_object* v_toPure_108_, lean_object* v_h_109_, lean_object* v___x_110_, lean_object* v_inst_111_, lean_object* v_toBind_112_, lean_object* v_____x_113_){
_start:
{
uint8_t v___x_491__boxed_114_; lean_object* v_res_115_; 
v___x_491__boxed_114_ = lean_unbox(v___x_110_);
v_res_115_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__3(v___x_98_, v___x_99_, v___x_100_, v___x_101_, v___x_102_, v_00_u03c3s_103_, v_hyp_104_, v_00_u03c6_105_, v_inst_106_, v_u_107_, v_toPure_108_, v_h_109_, v___x_491__boxed_114_, v_inst_111_, v_toBind_112_, v_____x_113_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__4(lean_object* v_k_116_, lean_object* v_00_u03c6_117_, lean_object* v_h_118_, lean_object* v_toBind_119_, lean_object* v___f_120_, lean_object* v_____r_121_){
_start:
{
lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_122_ = lean_apply_2(v_k_116_, v_00_u03c6_117_, v_h_118_);
v___x_123_ = lean_apply_4(v_toBind_119_, lean_box(0), lean_box(0), v___x_122_, v___f_120_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__5(lean_object* v_00_u03c6_124_, lean_object* v___x_125_, lean_object* v___x_126_, lean_object* v___x_127_, lean_object* v___x_128_, lean_object* v___x_129_, lean_object* v_00_u03c3s_130_, lean_object* v_hyp_131_, lean_object* v_inst_132_, lean_object* v_u_133_, lean_object* v_toPure_134_, lean_object* v_h_135_, lean_object* v_inst_136_, lean_object* v_toBind_137_, lean_object* v_k_138_, lean_object* v_snd_139_, lean_object* v_____do__lift_140_){
_start:
{
lean_object* v___x_141_; uint8_t v___x_142_; lean_object* v___x_143_; lean_object* v___f_144_; lean_object* v___f_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
lean_inc_ref_n(v_00_u03c6_124_, 2);
v___x_141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_141_, 0, v_00_u03c6_124_);
v___x_142_ = 0;
v___x_143_ = lean_box(v___x_142_);
lean_inc_n(v_toBind_137_, 2);
lean_inc(v_inst_136_);
lean_inc_ref_n(v_h_135_, 2);
v___f_144_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__3___boxed), 16, 15);
lean_closure_set(v___f_144_, 0, v___x_125_);
lean_closure_set(v___f_144_, 1, v___x_126_);
lean_closure_set(v___f_144_, 2, v___x_127_);
lean_closure_set(v___f_144_, 3, v___x_128_);
lean_closure_set(v___f_144_, 4, v___x_129_);
lean_closure_set(v___f_144_, 5, v_00_u03c3s_130_);
lean_closure_set(v___f_144_, 6, v_hyp_131_);
lean_closure_set(v___f_144_, 7, v_00_u03c6_124_);
lean_closure_set(v___f_144_, 8, v_inst_132_);
lean_closure_set(v___f_144_, 9, v_u_133_);
lean_closure_set(v___f_144_, 10, v_toPure_134_);
lean_closure_set(v___f_144_, 11, v_h_135_);
lean_closure_set(v___f_144_, 12, v___x_143_);
lean_closure_set(v___f_144_, 13, v_inst_136_);
lean_closure_set(v___f_144_, 14, v_toBind_137_);
v___f_145_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__4), 6, 5);
lean_closure_set(v___f_145_, 0, v_k_138_);
lean_closure_set(v___f_145_, 1, v_00_u03c6_124_);
lean_closure_set(v___f_145_, 2, v_h_135_);
lean_closure_set(v___f_145_, 3, v_toBind_137_);
lean_closure_set(v___f_145_, 4, v___f_144_);
v___x_146_ = lean_box(v___x_142_);
v___x_147_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo___boxed), 10, 5);
lean_closure_set(v___x_147_, 0, v_snd_139_);
lean_closure_set(v___x_147_, 1, v_____do__lift_140_);
lean_closure_set(v___x_147_, 2, v_h_135_);
lean_closure_set(v___x_147_, 3, v___x_141_);
lean_closure_set(v___x_147_, 4, v___x_146_);
v___x_148_ = lean_apply_2(v_inst_136_, lean_box(0), v___x_147_);
v___x_149_ = lean_apply_4(v_toBind_137_, lean_box(0), lean_box(0), v___x_148_, v___f_145_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__5___boxed(lean_object** _args){
lean_object* v_00_u03c6_150_ = _args[0];
lean_object* v___x_151_ = _args[1];
lean_object* v___x_152_ = _args[2];
lean_object* v___x_153_ = _args[3];
lean_object* v___x_154_ = _args[4];
lean_object* v___x_155_ = _args[5];
lean_object* v_00_u03c3s_156_ = _args[6];
lean_object* v_hyp_157_ = _args[7];
lean_object* v_inst_158_ = _args[8];
lean_object* v_u_159_ = _args[9];
lean_object* v_toPure_160_ = _args[10];
lean_object* v_h_161_ = _args[11];
lean_object* v_inst_162_ = _args[12];
lean_object* v_toBind_163_ = _args[13];
lean_object* v_k_164_ = _args[14];
lean_object* v_snd_165_ = _args[15];
lean_object* v_____do__lift_166_ = _args[16];
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__5(v_00_u03c6_150_, v___x_151_, v___x_152_, v___x_153_, v___x_154_, v___x_155_, v_00_u03c3s_156_, v_hyp_157_, v_inst_158_, v_u_159_, v_toPure_160_, v_h_161_, v_inst_162_, v_toBind_163_, v_k_164_, v_snd_165_, v_____do__lift_166_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__6(lean_object* v_00_u03c6_168_, lean_object* v___x_169_, lean_object* v___x_170_, lean_object* v___x_171_, lean_object* v___x_172_, lean_object* v___x_173_, lean_object* v_00_u03c3s_174_, lean_object* v_hyp_175_, lean_object* v_inst_176_, lean_object* v_u_177_, lean_object* v_toPure_178_, lean_object* v_inst_179_, lean_object* v_toBind_180_, lean_object* v_k_181_, lean_object* v_snd_182_, lean_object* v___f_183_, lean_object* v_h_184_){
_start:
{
lean_object* v___f_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
lean_inc(v_toBind_180_);
lean_inc(v_inst_179_);
v___f_185_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__5___boxed), 17, 16);
lean_closure_set(v___f_185_, 0, v_00_u03c6_168_);
lean_closure_set(v___f_185_, 1, v___x_169_);
lean_closure_set(v___f_185_, 2, v___x_170_);
lean_closure_set(v___f_185_, 3, v___x_171_);
lean_closure_set(v___f_185_, 4, v___x_172_);
lean_closure_set(v___f_185_, 5, v___x_173_);
lean_closure_set(v___f_185_, 6, v_00_u03c3s_174_);
lean_closure_set(v___f_185_, 7, v_hyp_175_);
lean_closure_set(v___f_185_, 8, v_inst_176_);
lean_closure_set(v___f_185_, 9, v_u_177_);
lean_closure_set(v___f_185_, 10, v_toPure_178_);
lean_closure_set(v___f_185_, 11, v_h_184_);
lean_closure_set(v___f_185_, 12, v_inst_179_);
lean_closure_set(v___f_185_, 13, v_toBind_180_);
lean_closure_set(v___f_185_, 14, v_k_181_);
lean_closure_set(v___f_185_, 15, v_snd_182_);
v___x_186_ = lean_apply_2(v_inst_179_, lean_box(0), v___f_183_);
v___x_187_ = lean_apply_4(v_toBind_180_, lean_box(0), lean_box(0), v___x_186_, v___f_185_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_00_u03c6_188_ = _args[0];
lean_object* v___x_189_ = _args[1];
lean_object* v___x_190_ = _args[2];
lean_object* v___x_191_ = _args[3];
lean_object* v___x_192_ = _args[4];
lean_object* v___x_193_ = _args[5];
lean_object* v_00_u03c3s_194_ = _args[6];
lean_object* v_hyp_195_ = _args[7];
lean_object* v_inst_196_ = _args[8];
lean_object* v_u_197_ = _args[9];
lean_object* v_toPure_198_ = _args[10];
lean_object* v_inst_199_ = _args[11];
lean_object* v_toBind_200_ = _args[12];
lean_object* v_k_201_ = _args[13];
lean_object* v_snd_202_ = _args[14];
lean_object* v___f_203_ = _args[15];
lean_object* v_h_204_ = _args[16];
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__6(v_00_u03c6_188_, v___x_189_, v___x_190_, v___x_191_, v___x_192_, v___x_193_, v_00_u03c3s_194_, v_hyp_195_, v_inst_196_, v_u_197_, v_toPure_198_, v_inst_199_, v_toBind_200_, v_k_201_, v_snd_202_, v___f_203_, v_h_204_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__7(lean_object* v_00_u03c6_206_, lean_object* v___x_207_, lean_object* v___x_208_, lean_object* v___x_209_, lean_object* v___x_210_, lean_object* v___x_211_, lean_object* v_00_u03c3s_212_, lean_object* v_hyp_213_, lean_object* v_inst_214_, lean_object* v_u_215_, lean_object* v_toPure_216_, lean_object* v_inst_217_, lean_object* v_toBind_218_, lean_object* v_k_219_, lean_object* v___f_220_, lean_object* v_inst_221_, lean_object* v_inst_222_, lean_object* v_____x_223_){
_start:
{
lean_object* v_fst_224_; lean_object* v_snd_225_; lean_object* v___f_226_; lean_object* v___x_227_; 
v_fst_224_ = lean_ctor_get(v_____x_223_, 0);
lean_inc(v_fst_224_);
v_snd_225_ = lean_ctor_get(v_____x_223_, 1);
lean_inc(v_snd_225_);
lean_dec_ref(v_____x_223_);
lean_inc_ref(v_00_u03c6_206_);
v___f_226_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__6___boxed), 17, 16);
lean_closure_set(v___f_226_, 0, v_00_u03c6_206_);
lean_closure_set(v___f_226_, 1, v___x_207_);
lean_closure_set(v___f_226_, 2, v___x_208_);
lean_closure_set(v___f_226_, 3, v___x_209_);
lean_closure_set(v___f_226_, 4, v___x_210_);
lean_closure_set(v___f_226_, 5, v___x_211_);
lean_closure_set(v___f_226_, 6, v_00_u03c3s_212_);
lean_closure_set(v___f_226_, 7, v_hyp_213_);
lean_closure_set(v___f_226_, 8, v_inst_214_);
lean_closure_set(v___f_226_, 9, v_u_215_);
lean_closure_set(v___f_226_, 10, v_toPure_216_);
lean_closure_set(v___f_226_, 11, v_inst_217_);
lean_closure_set(v___f_226_, 12, v_toBind_218_);
lean_closure_set(v___f_226_, 13, v_k_219_);
lean_closure_set(v___f_226_, 14, v_snd_225_);
lean_closure_set(v___f_226_, 15, v___f_220_);
v___x_227_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_221_, v_inst_222_, v_fst_224_, v_00_u03c6_206_, v___f_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__7___boxed(lean_object** _args){
lean_object* v_00_u03c6_228_ = _args[0];
lean_object* v___x_229_ = _args[1];
lean_object* v___x_230_ = _args[2];
lean_object* v___x_231_ = _args[3];
lean_object* v___x_232_ = _args[4];
lean_object* v___x_233_ = _args[5];
lean_object* v_00_u03c3s_234_ = _args[6];
lean_object* v_hyp_235_ = _args[7];
lean_object* v_inst_236_ = _args[8];
lean_object* v_u_237_ = _args[9];
lean_object* v_toPure_238_ = _args[10];
lean_object* v_inst_239_ = _args[11];
lean_object* v_toBind_240_ = _args[12];
lean_object* v_k_241_ = _args[13];
lean_object* v___f_242_ = _args[14];
lean_object* v_inst_243_ = _args[15];
lean_object* v_inst_244_ = _args[16];
lean_object* v_____x_245_ = _args[17];
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__7(v_00_u03c6_228_, v___x_229_, v___x_230_, v___x_231_, v___x_232_, v___x_233_, v_00_u03c3s_234_, v_hyp_235_, v_inst_236_, v_u_237_, v_toPure_238_, v_inst_239_, v_toBind_240_, v_k_241_, v___f_242_, v_inst_243_, v_inst_244_, v_____x_245_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__8(lean_object* v_00_u03c6_247_, lean_object* v___x_248_, lean_object* v___x_249_, lean_object* v___x_250_, lean_object* v___x_251_, lean_object* v___x_252_, lean_object* v_00_u03c3s_253_, lean_object* v_hyp_254_, lean_object* v_u_255_, lean_object* v_toPure_256_, lean_object* v_inst_257_, lean_object* v_toBind_258_, lean_object* v_k_259_, lean_object* v___f_260_, lean_object* v_inst_261_, lean_object* v_inst_262_, lean_object* v___f_263_, lean_object* v_inst_264_){
_start:
{
lean_object* v___f_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
lean_inc(v_toBind_258_);
lean_inc(v_inst_257_);
v___f_265_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__7___boxed), 18, 17);
lean_closure_set(v___f_265_, 0, v_00_u03c6_247_);
lean_closure_set(v___f_265_, 1, v___x_248_);
lean_closure_set(v___f_265_, 2, v___x_249_);
lean_closure_set(v___f_265_, 3, v___x_250_);
lean_closure_set(v___f_265_, 4, v___x_251_);
lean_closure_set(v___f_265_, 5, v___x_252_);
lean_closure_set(v___f_265_, 6, v_00_u03c3s_253_);
lean_closure_set(v___f_265_, 7, v_hyp_254_);
lean_closure_set(v___f_265_, 8, v_inst_264_);
lean_closure_set(v___f_265_, 9, v_u_255_);
lean_closure_set(v___f_265_, 10, v_toPure_256_);
lean_closure_set(v___f_265_, 11, v_inst_257_);
lean_closure_set(v___f_265_, 12, v_toBind_258_);
lean_closure_set(v___f_265_, 13, v_k_259_);
lean_closure_set(v___f_265_, 14, v___f_260_);
lean_closure_set(v___f_265_, 15, v_inst_261_);
lean_closure_set(v___f_265_, 16, v_inst_262_);
v___x_266_ = lean_apply_2(v_inst_257_, lean_box(0), v___f_263_);
v___x_267_ = lean_apply_4(v_toBind_258_, lean_box(0), lean_box(0), v___x_266_, v___f_265_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__8___boxed(lean_object** _args){
lean_object* v_00_u03c6_268_ = _args[0];
lean_object* v___x_269_ = _args[1];
lean_object* v___x_270_ = _args[2];
lean_object* v___x_271_ = _args[3];
lean_object* v___x_272_ = _args[4];
lean_object* v___x_273_ = _args[5];
lean_object* v_00_u03c3s_274_ = _args[6];
lean_object* v_hyp_275_ = _args[7];
lean_object* v_u_276_ = _args[8];
lean_object* v_toPure_277_ = _args[9];
lean_object* v_inst_278_ = _args[10];
lean_object* v_toBind_279_ = _args[11];
lean_object* v_k_280_ = _args[12];
lean_object* v___f_281_ = _args[13];
lean_object* v_inst_282_ = _args[14];
lean_object* v_inst_283_ = _args[15];
lean_object* v___f_284_ = _args[16];
lean_object* v_inst_285_ = _args[17];
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__8(v_00_u03c6_268_, v___x_269_, v___x_270_, v___x_271_, v___x_272_, v___x_273_, v_00_u03c3s_274_, v_hyp_275_, v_u_276_, v_toPure_277_, v_inst_278_, v_toBind_279_, v_k_280_, v___f_281_, v_inst_282_, v_inst_283_, v___f_284_, v_inst_285_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9(lean_object* v_u_298_, lean_object* v_00_u03c3s_299_, lean_object* v_hyp_300_, lean_object* v_toPure_301_, lean_object* v_inst_302_, lean_object* v_toBind_303_, lean_object* v_k_304_, lean_object* v___f_305_, lean_object* v_inst_306_, lean_object* v_inst_307_, lean_object* v___f_308_, lean_object* v_00_u03c6_309_){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___f_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_310_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0));
v___x_311_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1));
v___x_312_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2));
v___x_313_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3));
v___x_314_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5));
v___x_315_ = lean_box(0);
lean_inc(v_u_298_);
v___x_316_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_316_, 0, v_u_298_);
lean_ctor_set(v___x_316_, 1, v___x_315_);
lean_inc(v_toBind_303_);
lean_inc(v_inst_302_);
lean_inc_ref(v_hyp_300_);
lean_inc_ref(v_00_u03c3s_299_);
lean_inc_ref(v___x_316_);
lean_inc_ref(v_00_u03c6_309_);
v___f_317_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__8___boxed), 18, 17);
lean_closure_set(v___f_317_, 0, v_00_u03c6_309_);
lean_closure_set(v___f_317_, 1, v___x_310_);
lean_closure_set(v___f_317_, 2, v___x_311_);
lean_closure_set(v___f_317_, 3, v___x_312_);
lean_closure_set(v___f_317_, 4, v___x_313_);
lean_closure_set(v___f_317_, 5, v___x_316_);
lean_closure_set(v___f_317_, 6, v_00_u03c3s_299_);
lean_closure_set(v___f_317_, 7, v_hyp_300_);
lean_closure_set(v___f_317_, 8, v_u_298_);
lean_closure_set(v___f_317_, 9, v_toPure_301_);
lean_closure_set(v___f_317_, 10, v_inst_302_);
lean_closure_set(v___f_317_, 11, v_toBind_303_);
lean_closure_set(v___f_317_, 12, v_k_304_);
lean_closure_set(v___f_317_, 13, v___f_305_);
lean_closure_set(v___f_317_, 14, v_inst_306_);
lean_closure_set(v___f_317_, 15, v_inst_307_);
lean_closure_set(v___f_317_, 16, v___f_308_);
v___x_318_ = l_Lean_mkConst(v___x_314_, v___x_316_);
v___x_319_ = l_Lean_mkApp3(v___x_318_, v_00_u03c3s_299_, v_hyp_300_, v_00_u03c6_309_);
v___x_320_ = lean_box(0);
v___x_321_ = lean_alloc_closure((void*)(l_Lean_Meta_synthInstance___boxed), 7, 2);
lean_closure_set(v___x_321_, 0, v___x_319_);
lean_closure_set(v___x_321_, 1, v___x_320_);
v___x_322_ = lean_apply_2(v_inst_302_, lean_box(0), v___x_321_);
v___x_323_ = lean_apply_4(v_toBind_303_, lean_box(0), lean_box(0), v___x_322_, v___f_317_);
return v___x_323_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__0(void){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_324_ = lean_box(0);
v___x_325_ = l_unsafeCast___redArg(v___x_324_);
return v___x_325_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1(void){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_326_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__0);
v___x_327_ = l_Lean_mkSort(v___x_326_);
return v___x_327_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2(void){
_start:
{
lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_328_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__1);
v___x_329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_329_, 0, v___x_328_);
return v___x_329_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = lean_box(0);
v___x_331_ = l_unsafeCast___redArg(v___x_330_);
return v___x_331_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__4(void){
_start:
{
lean_object* v___x_332_; uint8_t v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_332_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3);
v___x_333_ = 0;
v___x_334_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2);
v___x_335_ = lean_box(v___x_333_);
v___x_336_ = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshExprMVar___boxed), 8, 3);
lean_closure_set(v___x_336_, 0, v___x_334_);
lean_closure_set(v___x_336_, 1, v___x_335_);
lean_closure_set(v___x_336_, 2, v___x_332_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10(lean_object* v_00_u03c3s_337_, lean_object* v_hyp_338_, lean_object* v_toPure_339_, lean_object* v_inst_340_, lean_object* v_toBind_341_, lean_object* v_k_342_, lean_object* v___f_343_, lean_object* v_inst_344_, lean_object* v_inst_345_, lean_object* v___f_346_, lean_object* v_u_347_){
_start:
{
lean_object* v___f_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
lean_inc(v_toBind_341_);
lean_inc(v_inst_340_);
v___f_348_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9), 12, 11);
lean_closure_set(v___f_348_, 0, v_u_347_);
lean_closure_set(v___f_348_, 1, v_00_u03c3s_337_);
lean_closure_set(v___f_348_, 2, v_hyp_338_);
lean_closure_set(v___f_348_, 3, v_toPure_339_);
lean_closure_set(v___f_348_, 4, v_inst_340_);
lean_closure_set(v___f_348_, 5, v_toBind_341_);
lean_closure_set(v___f_348_, 6, v_k_342_);
lean_closure_set(v___f_348_, 7, v___f_343_);
lean_closure_set(v___f_348_, 8, v_inst_344_);
lean_closure_set(v___f_348_, 9, v_inst_345_);
lean_closure_set(v___f_348_, 10, v___f_346_);
v___x_349_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__4);
v___x_350_ = lean_apply_2(v_inst_340_, lean_box(0), v___x_349_);
v___x_351_ = lean_apply_4(v_toBind_341_, lean_box(0), lean_box(0), v___x_350_, v___f_348_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg(lean_object* v_inst_354_, lean_object* v_inst_355_, lean_object* v_inst_356_, lean_object* v_00_u03c3s_357_, lean_object* v_hyp_358_, lean_object* v_name_359_, lean_object* v_k_360_){
_start:
{
lean_object* v_toApplicative_361_; lean_object* v_toBind_362_; lean_object* v_toPure_363_; lean_object* v___f_364_; lean_object* v___f_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___f_368_; lean_object* v___x_369_; 
v_toApplicative_361_ = lean_ctor_get(v_inst_354_, 0);
v_toBind_362_ = lean_ctor_get(v_inst_354_, 1);
lean_inc_n(v_toBind_362_, 2);
v_toPure_363_ = lean_ctor_get(v_toApplicative_361_, 1);
lean_inc(v_toPure_363_);
v___f_364_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__0));
v___f_365_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_365_, 0, v_name_359_);
v___x_366_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___closed__1));
lean_inc(v_inst_356_);
v___x_367_ = lean_apply_2(v_inst_356_, lean_box(0), v___x_366_);
v___f_368_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10), 11, 10);
lean_closure_set(v___f_368_, 0, v_00_u03c3s_357_);
lean_closure_set(v___f_368_, 1, v_hyp_358_);
lean_closure_set(v___f_368_, 2, v_toPure_363_);
lean_closure_set(v___f_368_, 3, v_inst_356_);
lean_closure_set(v___f_368_, 4, v_toBind_362_);
lean_closure_set(v___f_368_, 5, v_k_360_);
lean_closure_set(v___f_368_, 6, v___f_364_);
lean_closure_set(v___f_368_, 7, v_inst_355_);
lean_closure_set(v___f_368_, 8, v_inst_354_);
lean_closure_set(v___f_368_, 9, v___f_365_);
v___x_369_ = lean_apply_4(v_toBind_362_, lean_box(0), lean_box(0), v___x_367_, v___f_368_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore(lean_object* v_m_370_, lean_object* v_00_u03b1_371_, lean_object* v_inst_372_, lean_object* v_inst_373_, lean_object* v_inst_374_, lean_object* v_00_u03c3s_375_, lean_object* v_hyp_376_, lean_object* v_name_377_, lean_object* v_k_378_){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg(v_inst_372_, v_inst_373_, v_inst_374_, v_00_u03c3s_375_, v_hyp_376_, v_name_377_, v_k_378_);
return v___x_379_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_380_ = lean_box(0);
v___x_381_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_382_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
lean_ctor_set(v___x_382_, 1, v___x_380_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg(){
_start:
{
lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_384_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___closed__0);
v___x_385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
return v___x_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg___boxed(lean_object* v___y_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg();
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0(lean_object* v_00_u03b1_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
lean_object* v___x_398_; 
v___x_398_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg();
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___boxed(lean_object* v_00_u03b1_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0(v_00_u03b1_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_, v___y_407_);
lean_dec(v___y_407_);
lean_dec_ref(v___y_406_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
lean_dec(v___y_403_);
lean_dec_ref(v___y_402_);
lean_dec(v___y_401_);
lean_dec_ref(v___y_400_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___lam__0(lean_object* v_x_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_){
_start:
{
lean_object* v___x_420_; 
lean_inc(v___y_414_);
lean_inc_ref(v___y_413_);
lean_inc(v___y_412_);
lean_inc_ref(v___y_411_);
v___x_420_ = lean_apply_9(v_x_410_, v___y_411_, v___y_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_, lean_box(0));
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___lam__0___boxed(lean_object* v_x_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___lam__0(v_x_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_);
lean_dec(v___y_425_);
lean_dec_ref(v___y_424_);
lean_dec(v___y_423_);
lean_dec_ref(v___y_422_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg(lean_object* v_mvarId_432_, lean_object* v_x_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
lean_object* v___f_443_; lean_object* v___x_444_; 
lean_inc(v___y_437_);
lean_inc_ref(v___y_436_);
lean_inc(v___y_435_);
lean_inc_ref(v___y_434_);
v___f_443_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_443_, 0, v_x_433_);
lean_closure_set(v___f_443_, 1, v___y_434_);
lean_closure_set(v___f_443_, 2, v___y_435_);
lean_closure_set(v___f_443_, 3, v___y_436_);
lean_closure_set(v___f_443_, 4, v___y_437_);
v___x_444_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_432_, v___f_443_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
if (lean_obj_tag(v___x_444_) == 0)
{
return v___x_444_;
}
else
{
lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_452_; 
v_a_445_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_452_ == 0)
{
v___x_447_ = v___x_444_;
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_444_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_450_; 
if (v_isShared_448_ == 0)
{
v___x_450_ = v___x_447_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_a_445_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg___boxed(lean_object* v_mvarId_453_, lean_object* v_x_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg(v_mvarId_453_, v_x_454_, v___y_455_, v___y_456_, v___y_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_, v___y_462_);
lean_dec(v___y_462_);
lean_dec_ref(v___y_461_);
lean_dec(v___y_460_);
lean_dec_ref(v___y_459_);
lean_dec(v___y_458_);
lean_dec_ref(v___y_457_);
lean_dec(v___y_456_);
lean_dec_ref(v___y_455_);
return v_res_464_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3(lean_object* v_00_u03b1_465_, lean_object* v_mvarId_466_, lean_object* v_x_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_){
_start:
{
lean_object* v___x_477_; 
v___x_477_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg(v_mvarId_466_, v_x_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___boxed(lean_object* v_00_u03b1_478_, lean_object* v_mvarId_479_, lean_object* v_x_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3(v_00_u03b1_478_, v_mvarId_479_, v_x_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_);
lean_dec(v___y_488_);
lean_dec_ref(v___y_487_);
lean_dec(v___y_486_);
lean_dec_ref(v___y_485_);
lean_dec(v___y_484_);
lean_dec_ref(v___y_483_);
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__0(lean_object* v_a_491_, lean_object* v_snd_492_, lean_object* v_x_493_, lean_object* v_x_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_504_ = l_Lean_Elab_Tactic_Do_ProofMode_FocusResult_restGoal(v_a_491_, v_snd_492_);
lean_inc_ref(v___x_504_);
v___x_505_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v___x_504_);
v___x_506_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3);
v___x_507_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_505_, v___x_506_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
if (lean_obj_tag(v___x_507_) == 0)
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_517_; 
v_a_508_ = lean_ctor_get(v___x_507_, 0);
v_isSharedCheck_517_ = !lean_is_exclusive(v___x_507_);
if (v_isSharedCheck_517_ == 0)
{
v___x_510_ = v___x_507_;
v_isShared_511_ = v_isSharedCheck_517_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v___x_507_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_517_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_515_; 
lean_inc(v_a_508_);
v___x_512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_512_, 0, v___x_504_);
lean_ctor_set(v___x_512_, 1, v_a_508_);
v___x_513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_513_, 0, v_a_508_);
lean_ctor_set(v___x_513_, 1, v___x_512_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 0, v___x_513_);
v___x_515_ = v___x_510_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v___x_513_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
}
else
{
lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_525_; 
lean_dec_ref(v___x_504_);
v_a_518_ = lean_ctor_get(v___x_507_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_507_);
if (v_isSharedCheck_525_ == 0)
{
v___x_520_ = v___x_507_;
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_507_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_523_; 
if (v_isShared_521_ == 0)
{
v___x_523_ = v___x_520_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_a_518_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__0___boxed(lean_object* v_a_526_, lean_object* v_snd_527_, lean_object* v_x_528_, lean_object* v_x_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__0(v_a_526_, v_snd_527_, v_x_528_, v_x_529_, v___y_530_, v___y_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_, v___y_536_, v___y_537_);
lean_dec(v___y_537_);
lean_dec_ref(v___y_536_);
lean_dec(v___y_535_);
lean_dec_ref(v___y_534_);
lean_dec(v___y_533_);
lean_dec_ref(v___y_532_);
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
lean_dec_ref(v_x_529_);
lean_dec_ref(v_x_528_);
lean_dec_ref(v_a_526_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___lam__0(lean_object* v_k_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v_b_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_){
_start:
{
lean_object* v___x_551_; 
lean_inc(v___y_549_);
lean_inc_ref(v___y_548_);
lean_inc(v___y_547_);
lean_inc_ref(v___y_546_);
lean_inc(v___y_544_);
lean_inc_ref(v___y_543_);
lean_inc(v___y_542_);
lean_inc_ref(v___y_541_);
v___x_551_ = lean_apply_10(v_k_540_, v_b_545_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_546_, v___y_547_, v___y_548_, v___y_549_, lean_box(0));
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___lam__0___boxed(lean_object* v_k_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v_b_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_){
_start:
{
lean_object* v_res_563_; 
v_res_563_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___lam__0(v_k_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_, v_b_557_, v___y_558_, v___y_559_, v___y_560_, v___y_561_);
lean_dec(v___y_561_);
lean_dec_ref(v___y_560_);
lean_dec(v___y_559_);
lean_dec_ref(v___y_558_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg(lean_object* v_name_564_, uint8_t v_bi_565_, lean_object* v_type_566_, lean_object* v_k_567_, uint8_t v_kind_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_){
_start:
{
lean_object* v___f_578_; lean_object* v___x_579_; 
lean_inc(v___y_572_);
lean_inc_ref(v___y_571_);
lean_inc(v___y_570_);
lean_inc_ref(v___y_569_);
v___f_578_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_578_, 0, v_k_567_);
lean_closure_set(v___f_578_, 1, v___y_569_);
lean_closure_set(v___f_578_, 2, v___y_570_);
lean_closure_set(v___f_578_, 3, v___y_571_);
lean_closure_set(v___f_578_, 4, v___y_572_);
v___x_579_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_564_, v_bi_565_, v_type_566_, v___f_578_, v_kind_568_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
if (lean_obj_tag(v___x_579_) == 0)
{
return v___x_579_;
}
else
{
lean_object* v_a_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_587_; 
v_a_580_ = lean_ctor_get(v___x_579_, 0);
v_isSharedCheck_587_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_587_ == 0)
{
v___x_582_ = v___x_579_;
v_isShared_583_ = v_isSharedCheck_587_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_a_580_);
lean_dec(v___x_579_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_587_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_585_; 
if (v_isShared_583_ == 0)
{
v___x_585_ = v___x_582_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v_a_580_);
v___x_585_ = v_reuseFailAlloc_586_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
return v___x_585_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_name_588_, lean_object* v_bi_589_, lean_object* v_type_590_, lean_object* v_k_591_, lean_object* v_kind_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_){
_start:
{
uint8_t v_bi_boxed_602_; uint8_t v_kind_boxed_603_; lean_object* v_res_604_; 
v_bi_boxed_602_ = lean_unbox(v_bi_589_);
v_kind_boxed_603_ = lean_unbox(v_kind_592_);
v_res_604_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg(v_name_588_, v_bi_boxed_602_, v_type_590_, v_k_591_, v_kind_boxed_603_, v___y_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_);
lean_dec(v___y_600_);
lean_dec_ref(v___y_599_);
lean_dec(v___y_598_);
lean_dec_ref(v___y_597_);
lean_dec(v___y_596_);
lean_dec_ref(v___y_595_);
lean_dec(v___y_594_);
lean_dec_ref(v___y_593_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg(lean_object* v_name_605_, lean_object* v_type_606_, lean_object* v_k_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_){
_start:
{
uint8_t v___x_617_; uint8_t v___x_618_; lean_object* v___x_619_; 
v___x_617_ = 0;
v___x_618_ = 0;
v___x_619_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg(v_name_605_, v___x_617_, v_type_606_, v_k_607_, v___x_618_, v___y_608_, v___y_609_, v___y_610_, v___y_611_, v___y_612_, v___y_613_, v___y_614_, v___y_615_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg___boxed(lean_object* v_name_620_, lean_object* v_type_621_, lean_object* v_k_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg(v_name_620_, v_type_621_, v_k_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_);
lean_dec(v___y_630_);
lean_dec_ref(v___y_629_);
lean_dec(v___y_628_);
lean_dec_ref(v___y_627_);
lean_dec(v___y_626_);
lean_dec_ref(v___y_625_);
lean_dec(v___y_624_);
lean_dec_ref(v___y_623_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___lam__0(lean_object* v_a_633_, lean_object* v_snd_634_, lean_object* v_k_635_, lean_object* v___x_636_, lean_object* v___x_637_, lean_object* v___x_638_, lean_object* v___x_639_, lean_object* v___x_640_, lean_object* v_00_u03c3s_641_, lean_object* v_hyp_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_h_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_){
_start:
{
lean_object* v_lctx_655_; lean_object* v___x_656_; uint8_t v___x_657_; lean_object* v___x_658_; 
v_lctx_655_ = lean_ctor_get(v___y_650_, 2);
lean_inc_ref(v_a_633_);
v___x_656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_656_, 0, v_a_633_);
v___x_657_ = 0;
lean_inc_ref(v_h_645_);
lean_inc_ref(v_lctx_655_);
v___x_658_ = l_Lean_Elab_Tactic_Do_ProofMode_addLocalVarInfo(v_snd_634_, v_lctx_655_, v_h_645_, v___x_656_, v___x_657_, v___y_650_, v___y_651_, v___y_652_, v___y_653_);
if (lean_obj_tag(v___x_658_) == 0)
{
lean_object* v___x_659_; 
lean_dec_ref_known(v___x_658_, 1);
lean_inc(v___y_653_);
lean_inc_ref(v___y_652_);
lean_inc(v___y_651_);
lean_inc_ref(v___y_650_);
lean_inc(v___y_649_);
lean_inc_ref(v___y_648_);
lean_inc(v___y_647_);
lean_inc_ref(v___y_646_);
lean_inc_ref(v_h_645_);
lean_inc_ref(v_a_633_);
v___x_659_ = lean_apply_11(v_k_635_, v_a_633_, v_h_645_, v___y_646_, v___y_647_, v___y_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, lean_box(0));
if (lean_obj_tag(v___x_659_) == 0)
{
lean_object* v_a_660_; lean_object* v_snd_661_; lean_object* v_fst_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_717_; 
v_a_660_ = lean_ctor_get(v___x_659_, 0);
lean_inc(v_a_660_);
lean_dec_ref_known(v___x_659_, 1);
v_snd_661_ = lean_ctor_get(v_a_660_, 1);
v_fst_662_ = lean_ctor_get(v_a_660_, 0);
v_isSharedCheck_717_ = !lean_is_exclusive(v_a_660_);
if (v_isSharedCheck_717_ == 0)
{
v___x_664_ = v_a_660_;
v_isShared_665_ = v_isSharedCheck_717_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_snd_661_);
lean_inc(v_fst_662_);
lean_dec(v_a_660_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_717_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v_fst_666_; lean_object* v_snd_667_; lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_716_; 
v_fst_666_ = lean_ctor_get(v_snd_661_, 0);
v_snd_667_ = lean_ctor_get(v_snd_661_, 1);
v_isSharedCheck_716_ = !lean_is_exclusive(v_snd_661_);
if (v_isSharedCheck_716_ == 0)
{
v___x_669_ = v_snd_661_;
v_isShared_670_ = v_isSharedCheck_716_;
goto v_resetjp_668_;
}
else
{
lean_inc(v_snd_667_);
lean_inc(v_fst_666_);
lean_dec(v_snd_661_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_716_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; uint8_t v___x_674_; uint8_t v___x_675_; lean_object* v___x_676_; 
v___x_671_ = lean_unsigned_to_nat(1u);
v___x_672_ = lean_mk_empty_array_with_capacity(v___x_671_);
v___x_673_ = lean_array_push(v___x_672_, v_h_645_);
v___x_674_ = 1;
v___x_675_ = 1;
v___x_676_ = l_Lean_Meta_mkLambdaFVars(v___x_673_, v_snd_667_, v___x_657_, v___x_674_, v___x_657_, v___x_674_, v___x_675_, v___y_650_, v___y_651_, v___y_652_, v___y_653_);
if (lean_obj_tag(v___x_676_) == 0)
{
lean_object* v_a_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_707_; 
v_a_677_ = lean_ctor_get(v___x_676_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_707_ == 0)
{
v___x_679_ = v___x_676_;
v_isShared_680_ = v_isSharedCheck_707_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_a_677_);
lean_dec(v___x_676_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_707_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v_u_681_; lean_object* v_00_u03c3s_682_; lean_object* v_hyps_683_; lean_object* v_target_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_706_; 
v_u_681_ = lean_ctor_get(v_fst_666_, 0);
v_00_u03c3s_682_ = lean_ctor_get(v_fst_666_, 1);
v_hyps_683_ = lean_ctor_get(v_fst_666_, 2);
v_target_684_ = lean_ctor_get(v_fst_666_, 3);
v_isSharedCheck_706_ = !lean_is_exclusive(v_fst_666_);
if (v_isSharedCheck_706_ == 0)
{
v___x_686_ = v_fst_666_;
v_isShared_687_ = v_isSharedCheck_706_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_target_684_);
lean_inc(v_hyps_683_);
lean_inc(v_00_u03c3s_682_);
lean_inc(v_u_681_);
lean_dec(v_fst_666_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_706_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v_prf_692_; lean_object* v___x_693_; lean_object* v_goal_695_; 
v___x_688_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0));
v___x_689_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__1));
v___x_690_ = l_Lean_Name_mkStr6(v___x_636_, v___x_637_, v___x_638_, v___x_639_, v___x_688_, v___x_689_);
v___x_691_ = l_Lean_mkConst(v___x_690_, v___x_640_);
lean_inc_ref(v_target_684_);
lean_inc_ref(v_hyp_642_);
lean_inc_ref(v_hyps_683_);
lean_inc_ref(v_00_u03c3s_641_);
v_prf_692_ = l_Lean_mkApp7(v___x_691_, v_00_u03c3s_641_, v_hyps_683_, v_hyp_642_, v_target_684_, v_a_633_, v_a_643_, v_a_677_);
v___x_693_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_a_644_, v_00_u03c3s_641_, v_hyps_683_, v_hyp_642_);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 2, v___x_693_);
v_goal_695_ = v___x_686_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_u_681_);
lean_ctor_set(v_reuseFailAlloc_705_, 1, v_00_u03c3s_682_);
lean_ctor_set(v_reuseFailAlloc_705_, 2, v___x_693_);
lean_ctor_set(v_reuseFailAlloc_705_, 3, v_target_684_);
v_goal_695_ = v_reuseFailAlloc_705_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
lean_object* v___x_697_; 
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 1, v_prf_692_);
lean_ctor_set(v___x_669_, 0, v_goal_695_);
v___x_697_ = v___x_669_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_goal_695_);
lean_ctor_set(v_reuseFailAlloc_704_, 1, v_prf_692_);
v___x_697_ = v_reuseFailAlloc_704_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
lean_object* v___x_699_; 
if (v_isShared_665_ == 0)
{
lean_ctor_set(v___x_664_, 1, v___x_697_);
v___x_699_ = v___x_664_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v_fst_662_);
lean_ctor_set(v_reuseFailAlloc_703_, 1, v___x_697_);
v___x_699_ = v_reuseFailAlloc_703_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
lean_object* v___x_701_; 
if (v_isShared_680_ == 0)
{
lean_ctor_set(v___x_679_, 0, v___x_699_);
v___x_701_ = v___x_679_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v___x_699_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_715_; 
lean_del_object(v___x_669_);
lean_dec(v_fst_666_);
lean_del_object(v___x_664_);
lean_dec(v_fst_662_);
lean_dec(v_a_644_);
lean_dec_ref(v_a_643_);
lean_dec_ref(v_hyp_642_);
lean_dec_ref(v_00_u03c3s_641_);
lean_dec(v___x_640_);
lean_dec_ref(v___x_639_);
lean_dec_ref(v___x_638_);
lean_dec_ref(v___x_637_);
lean_dec_ref(v___x_636_);
lean_dec_ref(v_a_633_);
v_a_708_ = lean_ctor_get(v___x_676_, 0);
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_715_ == 0)
{
v___x_710_ = v___x_676_;
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_a_708_);
lean_dec(v___x_676_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_713_; 
if (v_isShared_711_ == 0)
{
v___x_713_ = v___x_710_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_a_708_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_h_645_);
lean_dec(v_a_644_);
lean_dec_ref(v_a_643_);
lean_dec_ref(v_hyp_642_);
lean_dec_ref(v_00_u03c3s_641_);
lean_dec(v___x_640_);
lean_dec_ref(v___x_639_);
lean_dec_ref(v___x_638_);
lean_dec_ref(v___x_637_);
lean_dec_ref(v___x_636_);
lean_dec_ref(v_a_633_);
return v___x_659_;
}
}
else
{
lean_object* v_a_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_725_; 
lean_dec_ref(v_h_645_);
lean_dec(v_a_644_);
lean_dec_ref(v_a_643_);
lean_dec_ref(v_hyp_642_);
lean_dec_ref(v_00_u03c3s_641_);
lean_dec(v___x_640_);
lean_dec_ref(v___x_639_);
lean_dec_ref(v___x_638_);
lean_dec_ref(v___x_637_);
lean_dec_ref(v___x_636_);
lean_dec_ref(v_k_635_);
lean_dec_ref(v_a_633_);
v_a_718_ = lean_ctor_get(v___x_658_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_725_ == 0)
{
v___x_720_ = v___x_658_;
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_a_718_);
lean_dec(v___x_658_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_723_; 
if (v_isShared_721_ == 0)
{
v___x_723_ = v___x_720_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_a_718_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
return v___x_723_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_a_726_ = _args[0];
lean_object* v_snd_727_ = _args[1];
lean_object* v_k_728_ = _args[2];
lean_object* v___x_729_ = _args[3];
lean_object* v___x_730_ = _args[4];
lean_object* v___x_731_ = _args[5];
lean_object* v___x_732_ = _args[6];
lean_object* v___x_733_ = _args[7];
lean_object* v_00_u03c3s_734_ = _args[8];
lean_object* v_hyp_735_ = _args[9];
lean_object* v_a_736_ = _args[10];
lean_object* v_a_737_ = _args[11];
lean_object* v_h_738_ = _args[12];
lean_object* v___y_739_ = _args[13];
lean_object* v___y_740_ = _args[14];
lean_object* v___y_741_ = _args[15];
lean_object* v___y_742_ = _args[16];
lean_object* v___y_743_ = _args[17];
lean_object* v___y_744_ = _args[18];
lean_object* v___y_745_ = _args[19];
lean_object* v___y_746_ = _args[20];
lean_object* v___y_747_ = _args[21];
_start:
{
lean_object* v_res_748_; 
v_res_748_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___lam__0(v_a_726_, v_snd_727_, v_k_728_, v___x_729_, v___x_730_, v___x_731_, v___x_732_, v___x_733_, v_00_u03c3s_734_, v_hyp_735_, v_a_736_, v_a_737_, v_h_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_);
lean_dec(v___y_746_);
lean_dec_ref(v___y_745_);
lean_dec(v___y_744_);
lean_dec_ref(v___y_743_);
lean_dec(v___y_742_);
lean_dec_ref(v___y_741_);
lean_dec(v___y_740_);
lean_dec_ref(v___y_739_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg(lean_object* v_00_u03c3s_749_, lean_object* v_hyp_750_, lean_object* v_name_751_, lean_object* v_k_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v___x_762_; 
v___x_762_ = l_Lean_Meta_mkFreshLevelMVar(v___y_757_, v___y_758_, v___y_759_, v___y_760_);
if (lean_obj_tag(v___x_762_) == 0)
{
lean_object* v_a_763_; lean_object* v___x_764_; uint8_t v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v_a_763_ = lean_ctor_get(v___x_762_, 0);
lean_inc(v_a_763_);
lean_dec_ref_known(v___x_762_, 1);
v___x_764_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2);
v___x_765_ = 0;
v___x_766_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3);
v___x_767_ = l_Lean_Meta_mkFreshExprMVar(v___x_764_, v___x_765_, v___x_766_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
if (lean_obj_tag(v___x_767_) == 0)
{
lean_object* v_a_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v_a_768_ = lean_ctor_get(v___x_767_, 0);
lean_inc_n(v_a_768_, 2);
lean_dec_ref_known(v___x_767_, 1);
v___x_769_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0));
v___x_770_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1));
v___x_771_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2));
v___x_772_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3));
v___x_773_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5));
v___x_774_ = lean_box(0);
lean_inc(v_a_763_);
v___x_775_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_775_, 0, v_a_763_);
lean_ctor_set(v___x_775_, 1, v___x_774_);
lean_inc_ref(v___x_775_);
v___x_776_ = l_Lean_mkConst(v___x_773_, v___x_775_);
lean_inc_ref(v_hyp_750_);
lean_inc_ref(v_00_u03c3s_749_);
v___x_777_ = l_Lean_mkApp3(v___x_776_, v_00_u03c3s_749_, v_hyp_750_, v_a_768_);
v___x_778_ = lean_box(0);
v___x_779_ = l_Lean_Meta_synthInstance(v___x_777_, v___x_778_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
if (lean_obj_tag(v___x_779_) == 0)
{
lean_object* v_a_780_; lean_object* v___x_781_; 
v_a_780_ = lean_ctor_get(v___x_779_, 0);
lean_inc(v_a_780_);
lean_dec_ref_known(v___x_779_, 1);
v___x_781_ = l_Lean_Elab_Tactic_Do_ProofMode_getFreshHypName(v_name_751_, v___y_759_, v___y_760_);
if (lean_obj_tag(v___x_781_) == 0)
{
lean_object* v_a_782_; lean_object* v_fst_783_; lean_object* v_snd_784_; lean_object* v___f_785_; lean_object* v___x_786_; 
v_a_782_ = lean_ctor_get(v___x_781_, 0);
lean_inc(v_a_782_);
lean_dec_ref_known(v___x_781_, 1);
v_fst_783_ = lean_ctor_get(v_a_782_, 0);
lean_inc(v_fst_783_);
v_snd_784_ = lean_ctor_get(v_a_782_, 1);
lean_inc(v_snd_784_);
lean_dec(v_a_782_);
lean_inc(v_a_768_);
v___f_785_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___lam__0___boxed), 22, 12);
lean_closure_set(v___f_785_, 0, v_a_768_);
lean_closure_set(v___f_785_, 1, v_snd_784_);
lean_closure_set(v___f_785_, 2, v_k_752_);
lean_closure_set(v___f_785_, 3, v___x_769_);
lean_closure_set(v___f_785_, 4, v___x_770_);
lean_closure_set(v___f_785_, 5, v___x_771_);
lean_closure_set(v___f_785_, 6, v___x_772_);
lean_closure_set(v___f_785_, 7, v___x_775_);
lean_closure_set(v___f_785_, 8, v_00_u03c3s_749_);
lean_closure_set(v___f_785_, 9, v_hyp_750_);
lean_closure_set(v___f_785_, 10, v_a_780_);
lean_closure_set(v___f_785_, 11, v_a_763_);
v___x_786_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg(v_fst_783_, v_a_768_, v___f_785_, v___y_753_, v___y_754_, v___y_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
return v___x_786_;
}
else
{
lean_object* v_a_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_794_; 
lean_dec(v_a_780_);
lean_dec_ref_known(v___x_775_, 2);
lean_dec(v_a_768_);
lean_dec(v_a_763_);
lean_dec_ref(v_k_752_);
lean_dec_ref(v_hyp_750_);
lean_dec_ref(v_00_u03c3s_749_);
v_a_787_ = lean_ctor_get(v___x_781_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_794_ == 0)
{
v___x_789_ = v___x_781_;
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_a_787_);
lean_dec(v___x_781_);
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
lean_object* v_a_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_802_; 
lean_dec_ref_known(v___x_775_, 2);
lean_dec(v_a_768_);
lean_dec(v_a_763_);
lean_dec_ref(v_k_752_);
lean_dec(v_name_751_);
lean_dec_ref(v_hyp_750_);
lean_dec_ref(v_00_u03c3s_749_);
v_a_795_ = lean_ctor_get(v___x_779_, 0);
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_779_);
if (v_isSharedCheck_802_ == 0)
{
v___x_797_ = v___x_779_;
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_a_795_);
lean_dec(v___x_779_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_800_; 
if (v_isShared_798_ == 0)
{
v___x_800_ = v___x_797_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_a_795_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
}
}
else
{
lean_object* v_a_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_810_; 
lean_dec(v_a_763_);
lean_dec_ref(v_k_752_);
lean_dec(v_name_751_);
lean_dec_ref(v_hyp_750_);
lean_dec_ref(v_00_u03c3s_749_);
v_a_803_ = lean_ctor_get(v___x_767_, 0);
v_isSharedCheck_810_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_810_ == 0)
{
v___x_805_ = v___x_767_;
v_isShared_806_ = v_isSharedCheck_810_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_a_803_);
lean_dec(v___x_767_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_810_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
lean_object* v___x_808_; 
if (v_isShared_806_ == 0)
{
v___x_808_ = v___x_805_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v_a_803_);
v___x_808_ = v_reuseFailAlloc_809_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
return v___x_808_;
}
}
}
}
else
{
lean_object* v_a_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_818_; 
lean_dec_ref(v_k_752_);
lean_dec(v_name_751_);
lean_dec_ref(v_hyp_750_);
lean_dec_ref(v_00_u03c3s_749_);
v_a_811_ = lean_ctor_get(v___x_762_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v___x_762_);
if (v_isSharedCheck_818_ == 0)
{
v___x_813_ = v___x_762_;
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_a_811_);
lean_dec(v___x_762_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_816_; 
if (v_isShared_814_ == 0)
{
v___x_816_ = v___x_813_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_a_811_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg___boxed(lean_object* v_00_u03c3s_819_, lean_object* v_hyp_820_, lean_object* v_name_821_, lean_object* v_k_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_){
_start:
{
lean_object* v_res_832_; 
v_res_832_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg(v_00_u03c3s_819_, v_hyp_820_, v_name_821_, v_k_822_, v___y_823_, v___y_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_, v___y_829_, v___y_830_);
lean_dec(v___y_830_);
lean_dec_ref(v___y_829_);
lean_dec(v___y_828_);
lean_dec_ref(v___y_827_);
lean_dec(v___y_826_);
lean_dec_ref(v___y_825_);
lean_dec(v___y_824_);
lean_dec_ref(v___y_823_);
return v_res_832_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7_spec__8___redArg(lean_object* v_x_833_, lean_object* v_x_834_, lean_object* v_x_835_, lean_object* v_x_836_){
_start:
{
lean_object* v_ks_837_; lean_object* v_vs_838_; lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_862_; 
v_ks_837_ = lean_ctor_get(v_x_833_, 0);
v_vs_838_ = lean_ctor_get(v_x_833_, 1);
v_isSharedCheck_862_ = !lean_is_exclusive(v_x_833_);
if (v_isSharedCheck_862_ == 0)
{
v___x_840_ = v_x_833_;
v_isShared_841_ = v_isSharedCheck_862_;
goto v_resetjp_839_;
}
else
{
lean_inc(v_vs_838_);
lean_inc(v_ks_837_);
lean_dec(v_x_833_);
v___x_840_ = lean_box(0);
v_isShared_841_ = v_isSharedCheck_862_;
goto v_resetjp_839_;
}
v_resetjp_839_:
{
lean_object* v___x_842_; uint8_t v___x_843_; 
v___x_842_ = lean_array_get_size(v_ks_837_);
v___x_843_ = lean_nat_dec_lt(v_x_834_, v___x_842_);
if (v___x_843_ == 0)
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_847_; 
lean_dec(v_x_834_);
v___x_844_ = lean_array_push(v_ks_837_, v_x_835_);
v___x_845_ = lean_array_push(v_vs_838_, v_x_836_);
if (v_isShared_841_ == 0)
{
lean_ctor_set(v___x_840_, 1, v___x_845_);
lean_ctor_set(v___x_840_, 0, v___x_844_);
v___x_847_ = v___x_840_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v___x_844_);
lean_ctor_set(v_reuseFailAlloc_848_, 1, v___x_845_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
else
{
lean_object* v_k_x27_849_; uint8_t v___x_850_; 
v_k_x27_849_ = lean_array_fget_borrowed(v_ks_837_, v_x_834_);
v___x_850_ = l_Lean_instBEqMVarId_beq(v_x_835_, v_k_x27_849_);
if (v___x_850_ == 0)
{
lean_object* v___x_852_; 
if (v_isShared_841_ == 0)
{
v___x_852_ = v___x_840_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_ks_837_);
lean_ctor_set(v_reuseFailAlloc_856_, 1, v_vs_838_);
v___x_852_ = v_reuseFailAlloc_856_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_853_ = lean_unsigned_to_nat(1u);
v___x_854_ = lean_nat_add(v_x_834_, v___x_853_);
lean_dec(v_x_834_);
v_x_833_ = v___x_852_;
v_x_834_ = v___x_854_;
goto _start;
}
}
else
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_860_; 
v___x_857_ = lean_array_fset(v_ks_837_, v_x_834_, v_x_835_);
v___x_858_ = lean_array_fset(v_vs_838_, v_x_834_, v_x_836_);
lean_dec(v_x_834_);
if (v_isShared_841_ == 0)
{
lean_ctor_set(v___x_840_, 1, v___x_858_);
lean_ctor_set(v___x_840_, 0, v___x_857_);
v___x_860_ = v___x_840_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v___x_857_);
lean_ctor_set(v_reuseFailAlloc_861_, 1, v___x_858_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7___redArg(lean_object* v_n_863_, lean_object* v_k_864_, lean_object* v_v_865_){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_866_ = lean_unsigned_to_nat(0u);
v___x_867_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7_spec__8___redArg(v_n_863_, v___x_866_, v_k_864_, v_v_865_);
return v___x_867_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_868_ = lean_box(0);
v___x_869_ = l_unsafeCast___redArg(v___x_868_);
return v___x_869_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_870_; 
v___x_870_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg(lean_object* v_x_871_, size_t v_x_872_, size_t v_x_873_, lean_object* v_x_874_, lean_object* v_x_875_){
_start:
{
if (lean_obj_tag(v_x_871_) == 0)
{
lean_object* v_es_876_; size_t v___x_877_; size_t v___x_878_; lean_object* v_j_879_; lean_object* v___x_880_; uint8_t v___x_881_; 
v_es_876_ = lean_ctor_get(v_x_871_, 0);
v___x_877_ = ((size_t)31ULL);
v___x_878_ = lean_usize_land(v_x_872_, v___x_877_);
v_j_879_ = lean_usize_to_nat(v___x_878_);
v___x_880_ = lean_array_get_size(v_es_876_);
v___x_881_ = lean_nat_dec_lt(v_j_879_, v___x_880_);
if (v___x_881_ == 0)
{
lean_dec(v_j_879_);
lean_dec(v_x_875_);
lean_dec(v_x_874_);
return v_x_871_;
}
else
{
lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_920_; 
lean_inc_ref(v_es_876_);
v_isSharedCheck_920_ = !lean_is_exclusive(v_x_871_);
if (v_isSharedCheck_920_ == 0)
{
lean_object* v_unused_921_; 
v_unused_921_ = lean_ctor_get(v_x_871_, 0);
lean_dec(v_unused_921_);
v___x_883_ = v_x_871_;
v_isShared_884_ = v_isSharedCheck_920_;
goto v_resetjp_882_;
}
else
{
lean_dec(v_x_871_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_920_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v_v_885_; lean_object* v___x_886_; lean_object* v_xs_x27_887_; lean_object* v___y_889_; 
v_v_885_ = lean_array_fget(v_es_876_, v_j_879_);
v___x_886_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__0);
v_xs_x27_887_ = lean_array_fset(v_es_876_, v_j_879_, v___x_886_);
switch(lean_obj_tag(v_v_885_))
{
case 0:
{
lean_object* v_key_894_; lean_object* v_val_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_905_; 
v_key_894_ = lean_ctor_get(v_v_885_, 0);
v_val_895_ = lean_ctor_get(v_v_885_, 1);
v_isSharedCheck_905_ = !lean_is_exclusive(v_v_885_);
if (v_isSharedCheck_905_ == 0)
{
v___x_897_ = v_v_885_;
v_isShared_898_ = v_isSharedCheck_905_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_val_895_);
lean_inc(v_key_894_);
lean_dec(v_v_885_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_905_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
uint8_t v___x_899_; 
v___x_899_ = l_Lean_instBEqMVarId_beq(v_x_874_, v_key_894_);
if (v___x_899_ == 0)
{
lean_object* v___x_900_; lean_object* v___x_901_; 
lean_del_object(v___x_897_);
v___x_900_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_894_, v_val_895_, v_x_874_, v_x_875_);
v___x_901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_901_, 0, v___x_900_);
v___y_889_ = v___x_901_;
goto v___jp_888_;
}
else
{
lean_object* v___x_903_; 
lean_dec(v_val_895_);
lean_dec(v_key_894_);
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 1, v_x_875_);
lean_ctor_set(v___x_897_, 0, v_x_874_);
v___x_903_ = v___x_897_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_x_874_);
lean_ctor_set(v_reuseFailAlloc_904_, 1, v_x_875_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
v___y_889_ = v___x_903_;
goto v___jp_888_;
}
}
}
}
case 1:
{
lean_object* v_node_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_918_; 
v_node_906_ = lean_ctor_get(v_v_885_, 0);
v_isSharedCheck_918_ = !lean_is_exclusive(v_v_885_);
if (v_isSharedCheck_918_ == 0)
{
v___x_908_ = v_v_885_;
v_isShared_909_ = v_isSharedCheck_918_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_node_906_);
lean_dec(v_v_885_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_918_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
size_t v___x_910_; size_t v___x_911_; size_t v___x_912_; size_t v___x_913_; lean_object* v___x_914_; lean_object* v___x_916_; 
v___x_910_ = ((size_t)5ULL);
v___x_911_ = lean_usize_shift_right(v_x_872_, v___x_910_);
v___x_912_ = ((size_t)1ULL);
v___x_913_ = lean_usize_add(v_x_873_, v___x_912_);
v___x_914_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg(v_node_906_, v___x_911_, v___x_913_, v_x_874_, v_x_875_);
if (v_isShared_909_ == 0)
{
lean_ctor_set(v___x_908_, 0, v___x_914_);
v___x_916_ = v___x_908_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v___x_914_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
v___y_889_ = v___x_916_;
goto v___jp_888_;
}
}
}
default: 
{
lean_object* v___x_919_; 
v___x_919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_919_, 0, v_x_874_);
lean_ctor_set(v___x_919_, 1, v_x_875_);
v___y_889_ = v___x_919_;
goto v___jp_888_;
}
}
v___jp_888_:
{
lean_object* v___x_890_; lean_object* v___x_892_; 
v___x_890_ = lean_array_fset(v_xs_x27_887_, v_j_879_, v___y_889_);
lean_dec(v_j_879_);
if (v_isShared_884_ == 0)
{
lean_ctor_set(v___x_883_, 0, v___x_890_);
v___x_892_ = v___x_883_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v___x_890_);
v___x_892_ = v_reuseFailAlloc_893_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
return v___x_892_;
}
}
}
}
}
else
{
lean_object* v_ks_922_; lean_object* v_vs_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_941_; 
v_ks_922_ = lean_ctor_get(v_x_871_, 0);
v_vs_923_ = lean_ctor_get(v_x_871_, 1);
v_isSharedCheck_941_ = !lean_is_exclusive(v_x_871_);
if (v_isSharedCheck_941_ == 0)
{
v___x_925_ = v_x_871_;
v_isShared_926_ = v_isSharedCheck_941_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_vs_923_);
lean_inc(v_ks_922_);
lean_dec(v_x_871_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_941_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_928_; 
if (v_isShared_926_ == 0)
{
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_ks_922_);
lean_ctor_set(v_reuseFailAlloc_940_, 1, v_vs_923_);
v___x_928_ = v_reuseFailAlloc_940_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
lean_object* v_newNode_929_; size_t v___x_930_; uint8_t v___x_931_; 
v_newNode_929_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7___redArg(v___x_928_, v_x_874_, v_x_875_);
v___x_930_ = ((size_t)7ULL);
v___x_931_ = lean_usize_dec_le(v___x_930_, v_x_873_);
if (v___x_931_ == 0)
{
lean_object* v___x_932_; lean_object* v___x_933_; uint8_t v___x_934_; 
v___x_932_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_929_);
v___x_933_ = lean_unsigned_to_nat(4u);
v___x_934_ = lean_nat_dec_lt(v___x_932_, v___x_933_);
lean_dec(v___x_932_);
if (v___x_934_ == 0)
{
lean_object* v_ks_935_; lean_object* v_vs_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; 
v_ks_935_ = lean_ctor_get(v_newNode_929_, 0);
lean_inc_ref(v_ks_935_);
v_vs_936_ = lean_ctor_get(v_newNode_929_, 1);
lean_inc_ref(v_vs_936_);
lean_dec_ref(v_newNode_929_);
v___x_937_ = lean_unsigned_to_nat(0u);
v___x_938_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___closed__1);
v___x_939_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___redArg(v_x_873_, v_ks_935_, v_vs_936_, v___x_937_, v___x_938_);
lean_dec_ref(v_vs_936_);
lean_dec_ref(v_ks_935_);
return v___x_939_;
}
else
{
return v_newNode_929_;
}
}
else
{
return v_newNode_929_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___redArg(size_t v_depth_942_, lean_object* v_keys_943_, lean_object* v_vals_944_, lean_object* v_i_945_, lean_object* v_entries_946_){
_start:
{
lean_object* v___x_947_; uint8_t v___x_948_; 
v___x_947_ = lean_array_get_size(v_keys_943_);
v___x_948_ = lean_nat_dec_lt(v_i_945_, v___x_947_);
if (v___x_948_ == 0)
{
lean_dec(v_i_945_);
return v_entries_946_;
}
else
{
lean_object* v_k_949_; lean_object* v_v_950_; uint64_t v___x_951_; size_t v_h_952_; size_t v___x_953_; lean_object* v___x_954_; size_t v___x_955_; size_t v___x_956_; size_t v___x_957_; size_t v_h_958_; lean_object* v___x_959_; lean_object* v___x_960_; 
v_k_949_ = lean_array_fget_borrowed(v_keys_943_, v_i_945_);
v_v_950_ = lean_array_fget_borrowed(v_vals_944_, v_i_945_);
v___x_951_ = l_Lean_instHashableMVarId_hash(v_k_949_);
v_h_952_ = lean_uint64_to_usize(v___x_951_);
v___x_953_ = ((size_t)5ULL);
v___x_954_ = lean_unsigned_to_nat(1u);
v___x_955_ = ((size_t)1ULL);
v___x_956_ = lean_usize_sub(v_depth_942_, v___x_955_);
v___x_957_ = lean_usize_mul(v___x_953_, v___x_956_);
v_h_958_ = lean_usize_shift_right(v_h_952_, v___x_957_);
v___x_959_ = lean_nat_add(v_i_945_, v___x_954_);
lean_dec(v_i_945_);
lean_inc(v_v_950_);
lean_inc(v_k_949_);
v___x_960_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg(v_entries_946_, v_h_958_, v_depth_942_, v_k_949_, v_v_950_);
v_i_945_ = v___x_959_;
v_entries_946_ = v___x_960_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___redArg___boxed(lean_object* v_depth_962_, lean_object* v_keys_963_, lean_object* v_vals_964_, lean_object* v_i_965_, lean_object* v_entries_966_){
_start:
{
size_t v_depth_boxed_967_; lean_object* v_res_968_; 
v_depth_boxed_967_ = lean_unbox_usize(v_depth_962_);
lean_dec(v_depth_962_);
v_res_968_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___redArg(v_depth_boxed_967_, v_keys_963_, v_vals_964_, v_i_965_, v_entries_966_);
lean_dec_ref(v_vals_964_);
lean_dec_ref(v_keys_963_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_x_969_, lean_object* v_x_970_, lean_object* v_x_971_, lean_object* v_x_972_, lean_object* v_x_973_){
_start:
{
size_t v_x_9850__boxed_974_; size_t v_x_9851__boxed_975_; lean_object* v_res_976_; 
v_x_9850__boxed_974_ = lean_unbox_usize(v_x_970_);
lean_dec(v_x_970_);
v_x_9851__boxed_975_ = lean_unbox_usize(v_x_971_);
lean_dec(v_x_971_);
v_res_976_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg(v_x_969_, v_x_9850__boxed_974_, v_x_9851__boxed_975_, v_x_972_, v_x_973_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3___redArg(lean_object* v_x_977_, lean_object* v_x_978_, lean_object* v_x_979_){
_start:
{
uint64_t v___x_980_; size_t v___x_981_; size_t v___x_982_; lean_object* v___x_983_; 
v___x_980_ = l_Lean_instHashableMVarId_hash(v_x_978_);
v___x_981_ = lean_uint64_to_usize(v___x_980_);
v___x_982_ = ((size_t)1ULL);
v___x_983_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg(v_x_977_, v___x_981_, v___x_982_, v_x_978_, v_x_979_);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg(lean_object* v_mvarId_984_, lean_object* v_val_985_, lean_object* v___y_986_){
_start:
{
lean_object* v___x_988_; lean_object* v_mctx_989_; lean_object* v_cache_990_; lean_object* v_zetaDeltaFVarIds_991_; lean_object* v_postponed_992_; lean_object* v_diag_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1022_; 
v___x_988_ = lean_st_ref_take(v___y_986_);
v_mctx_989_ = lean_ctor_get(v___x_988_, 0);
v_cache_990_ = lean_ctor_get(v___x_988_, 1);
v_zetaDeltaFVarIds_991_ = lean_ctor_get(v___x_988_, 2);
v_postponed_992_ = lean_ctor_get(v___x_988_, 3);
v_diag_993_ = lean_ctor_get(v___x_988_, 4);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_988_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_995_ = v___x_988_;
v_isShared_996_ = v_isSharedCheck_1022_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_diag_993_);
lean_inc(v_postponed_992_);
lean_inc(v_zetaDeltaFVarIds_991_);
lean_inc(v_cache_990_);
lean_inc(v_mctx_989_);
lean_dec(v___x_988_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1022_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v_depth_997_; lean_object* v_levelAssignDepth_998_; lean_object* v_lmvarCounter_999_; lean_object* v_mvarCounter_1000_; lean_object* v_lDecls_1001_; lean_object* v_decls_1002_; lean_object* v_userNames_1003_; lean_object* v_lAssignment_1004_; lean_object* v_eAssignment_1005_; lean_object* v_dAssignment_1006_; lean_object* v_instanceTypedMVars_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1021_; 
v_depth_997_ = lean_ctor_get(v_mctx_989_, 0);
v_levelAssignDepth_998_ = lean_ctor_get(v_mctx_989_, 1);
v_lmvarCounter_999_ = lean_ctor_get(v_mctx_989_, 2);
v_mvarCounter_1000_ = lean_ctor_get(v_mctx_989_, 3);
v_lDecls_1001_ = lean_ctor_get(v_mctx_989_, 4);
v_decls_1002_ = lean_ctor_get(v_mctx_989_, 5);
v_userNames_1003_ = lean_ctor_get(v_mctx_989_, 6);
v_lAssignment_1004_ = lean_ctor_get(v_mctx_989_, 7);
v_eAssignment_1005_ = lean_ctor_get(v_mctx_989_, 8);
v_dAssignment_1006_ = lean_ctor_get(v_mctx_989_, 9);
v_instanceTypedMVars_1007_ = lean_ctor_get(v_mctx_989_, 10);
v_isSharedCheck_1021_ = !lean_is_exclusive(v_mctx_989_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_1009_ = v_mctx_989_;
v_isShared_1010_ = v_isSharedCheck_1021_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_instanceTypedMVars_1007_);
lean_inc(v_dAssignment_1006_);
lean_inc(v_eAssignment_1005_);
lean_inc(v_lAssignment_1004_);
lean_inc(v_userNames_1003_);
lean_inc(v_decls_1002_);
lean_inc(v_lDecls_1001_);
lean_inc(v_mvarCounter_1000_);
lean_inc(v_lmvarCounter_999_);
lean_inc(v_levelAssignDepth_998_);
lean_inc(v_depth_997_);
lean_dec(v_mctx_989_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1021_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1014_; 
v___x_1011_ = lean_box(0);
v___x_1012_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3___redArg(v_eAssignment_1005_, v_mvarId_984_, v_val_985_);
if (v_isShared_1010_ == 0)
{
lean_ctor_set(v___x_1009_, 8, v___x_1012_);
v___x_1014_ = v___x_1009_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v_depth_997_);
lean_ctor_set(v_reuseFailAlloc_1020_, 1, v_levelAssignDepth_998_);
lean_ctor_set(v_reuseFailAlloc_1020_, 2, v_lmvarCounter_999_);
lean_ctor_set(v_reuseFailAlloc_1020_, 3, v_mvarCounter_1000_);
lean_ctor_set(v_reuseFailAlloc_1020_, 4, v_lDecls_1001_);
lean_ctor_set(v_reuseFailAlloc_1020_, 5, v_decls_1002_);
lean_ctor_set(v_reuseFailAlloc_1020_, 6, v_userNames_1003_);
lean_ctor_set(v_reuseFailAlloc_1020_, 7, v_lAssignment_1004_);
lean_ctor_set(v_reuseFailAlloc_1020_, 8, v___x_1012_);
lean_ctor_set(v_reuseFailAlloc_1020_, 9, v_dAssignment_1006_);
lean_ctor_set(v_reuseFailAlloc_1020_, 10, v_instanceTypedMVars_1007_);
v___x_1014_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
lean_object* v___x_1016_; 
if (v_isShared_996_ == 0)
{
lean_ctor_set(v___x_995_, 0, v___x_1014_);
v___x_1016_ = v___x_995_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v___x_1014_);
lean_ctor_set(v_reuseFailAlloc_1019_, 1, v_cache_990_);
lean_ctor_set(v_reuseFailAlloc_1019_, 2, v_zetaDeltaFVarIds_991_);
lean_ctor_set(v_reuseFailAlloc_1019_, 3, v_postponed_992_);
lean_ctor_set(v_reuseFailAlloc_1019_, 4, v_diag_993_);
v___x_1016_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1017_ = lean_st_ref_put(v___y_986_, v___x_1016_);
v___x_1018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1011_);
return v___x_1018_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg___boxed(lean_object* v_mvarId_1023_, lean_object* v_val_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_){
_start:
{
lean_object* v_res_1027_; 
v_res_1027_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg(v_mvarId_1023_, v_val_1024_, v___y_1025_);
lean_dec(v___y_1025_);
return v_res_1027_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1(lean_object* v_snd_1029_, lean_object* v_hyp_1030_, lean_object* v___x_1031_, lean_object* v_fst_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v___x_1042_; 
lean_inc(v_hyp_1030_);
lean_inc_ref(v_snd_1029_);
v___x_1042_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo(v_snd_1029_, v_hyp_1030_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_);
if (lean_obj_tag(v___x_1042_) == 0)
{
lean_object* v_a_1043_; lean_object* v_ref_1044_; lean_object* v_00_u03c3s_1045_; lean_object* v_focusHyp_1046_; lean_object* v___f_1047_; uint8_t v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
v_a_1043_ = lean_ctor_get(v___x_1042_, 0);
lean_inc_n(v_a_1043_, 2);
lean_dec_ref_known(v___x_1042_, 1);
v_ref_1044_ = lean_ctor_get(v___y_1039_, 2);
v_00_u03c3s_1045_ = lean_ctor_get(v_snd_1029_, 1);
v_focusHyp_1046_ = lean_ctor_get(v_a_1043_, 0);
lean_inc_ref(v_snd_1029_);
v___f_1047_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__0___boxed), 13, 2);
lean_closure_set(v___f_1047_, 0, v_a_1043_);
lean_closure_set(v___f_1047_, 1, v_snd_1029_);
v___x_1048_ = 0;
v___x_1049_ = l_Lean_SourceInfo_fromRef(v_ref_1044_, v___x_1048_);
v___x_1050_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___closed__0));
v___x_1051_ = l_Lean_Name_mkStr2(v___x_1031_, v___x_1050_);
v___x_1052_ = l_Lean_Syntax_node1(v___x_1049_, v___x_1051_, v_hyp_1030_);
lean_inc_ref(v_focusHyp_1046_);
lean_inc_ref(v_00_u03c3s_1045_);
v___x_1053_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg(v_00_u03c3s_1045_, v_focusHyp_1046_, v___x_1052_, v___f_1047_, v___y_1033_, v___y_1034_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_);
if (lean_obj_tag(v___x_1053_) == 0)
{
lean_object* v_a_1054_; lean_object* v_snd_1055_; lean_object* v_fst_1056_; lean_object* v_snd_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1069_; 
v_a_1054_ = lean_ctor_get(v___x_1053_, 0);
lean_inc(v_a_1054_);
lean_dec_ref_known(v___x_1053_, 1);
v_snd_1055_ = lean_ctor_get(v_a_1054_, 1);
lean_inc(v_snd_1055_);
v_fst_1056_ = lean_ctor_get(v_a_1054_, 0);
lean_inc(v_fst_1056_);
lean_dec(v_a_1054_);
v_snd_1057_ = lean_ctor_get(v_snd_1055_, 1);
v_isSharedCheck_1069_ = !lean_is_exclusive(v_snd_1055_);
if (v_isSharedCheck_1069_ == 0)
{
lean_object* v_unused_1070_; 
v_unused_1070_ = lean_ctor_get(v_snd_1055_, 0);
lean_dec(v_unused_1070_);
v___x_1059_ = v_snd_1055_;
v_isShared_1060_ = v_isSharedCheck_1069_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_snd_1057_);
lean_dec(v_snd_1055_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1069_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1066_; 
v___x_1061_ = l_Lean_Elab_Tactic_Do_ProofMode_FocusResult_rewriteHyps(v_a_1043_, v_snd_1029_, v_snd_1057_);
v___x_1062_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg(v_fst_1032_, v___x_1061_, v___y_1038_);
lean_dec_ref(v___x_1062_);
v___x_1063_ = l_Lean_Expr_mvarId_x21(v_fst_1056_);
lean_dec(v_fst_1056_);
v___x_1064_ = lean_box(0);
if (v_isShared_1060_ == 0)
{
lean_ctor_set_tag(v___x_1059_, 1);
lean_ctor_set(v___x_1059_, 1, v___x_1064_);
lean_ctor_set(v___x_1059_, 0, v___x_1063_);
v___x_1066_ = v___x_1059_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v___x_1063_);
lean_ctor_set(v_reuseFailAlloc_1068_, 1, v___x_1064_);
v___x_1066_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
lean_object* v___x_1067_; 
v___x_1067_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_1066_, v___y_1034_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_);
return v___x_1067_;
}
}
}
else
{
lean_object* v_a_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1078_; 
lean_dec(v_a_1043_);
lean_dec(v_fst_1032_);
lean_dec_ref(v_snd_1029_);
v_a_1071_ = lean_ctor_get(v___x_1053_, 0);
v_isSharedCheck_1078_ = !lean_is_exclusive(v___x_1053_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1073_ = v___x_1053_;
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_a_1071_);
lean_dec(v___x_1053_);
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
else
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1086_; 
lean_dec(v_fst_1032_);
lean_dec_ref(v___x_1031_);
lean_dec(v_hyp_1030_);
lean_dec_ref(v_snd_1029_);
v_a_1079_ = lean_ctor_get(v___x_1042_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1081_ = v___x_1042_;
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___x_1042_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___boxed(lean_object* v_snd_1087_, lean_object* v_hyp_1088_, lean_object* v___x_1089_, lean_object* v_fst_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_){
_start:
{
lean_object* v_res_1100_; 
v_res_1100_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1(v_snd_1087_, v_hyp_1088_, v___x_1089_, v_fst_1090_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
lean_dec(v___y_1094_);
lean_dec_ref(v___y_1093_);
lean_dec(v___y_1092_);
lean_dec_ref(v___y_1091_);
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure(lean_object* v_x_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_){
_start:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; uint8_t v___x_1121_; 
v___x_1119_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__0));
v___x_1120_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3));
lean_inc(v_x_1109_);
v___x_1121_ = l_Lean_Syntax_isOfKind(v_x_1109_, v___x_1120_);
if (v___x_1121_ == 0)
{
lean_object* v___x_1122_; 
lean_dec(v_x_1109_);
v___x_1122_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg();
return v___x_1122_;
}
else
{
lean_object* v___x_1123_; lean_object* v_hyp_1124_; lean_object* v___x_1125_; 
v___x_1123_ = lean_unsigned_to_nat(1u);
v_hyp_1124_ = l_Lean_Syntax_getArg(v_x_1109_, v___x_1123_);
lean_dec(v_x_1109_);
v___x_1125_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(v_a_1111_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_);
if (lean_obj_tag(v___x_1125_) == 0)
{
lean_object* v_a_1126_; lean_object* v_fst_1127_; lean_object* v_snd_1128_; lean_object* v___f_1129_; lean_object* v___x_1130_; 
v_a_1126_ = lean_ctor_get(v___x_1125_, 0);
lean_inc(v_a_1126_);
lean_dec_ref_known(v___x_1125_, 1);
v_fst_1127_ = lean_ctor_get(v_a_1126_, 0);
lean_inc_n(v_fst_1127_, 2);
v_snd_1128_ = lean_ctor_get(v_a_1126_, 1);
lean_inc(v_snd_1128_);
lean_dec(v_a_1126_);
v___f_1129_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___lam__1___boxed), 13, 4);
lean_closure_set(v___f_1129_, 0, v_snd_1128_);
lean_closure_set(v___f_1129_, 1, v_hyp_1124_);
lean_closure_set(v___f_1129_, 2, v___x_1119_);
lean_closure_set(v___f_1129_, 3, v_fst_1127_);
v___x_1130_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg(v_fst_1127_, v___f_1129_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_);
return v___x_1130_;
}
else
{
lean_object* v_a_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1138_; 
lean_dec(v_hyp_1124_);
v_a_1131_ = lean_ctor_get(v___x_1125_, 0);
v_isSharedCheck_1138_ = !lean_is_exclusive(v___x_1125_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1133_ = v___x_1125_;
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_a_1131_);
lean_dec(v___x_1125_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___boxed(lean_object* v_x_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPure(v_x_1139_, v_a_1140_, v_a_1141_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_);
lean_dec(v_a_1147_);
lean_dec_ref(v_a_1146_);
lean_dec(v_a_1145_);
lean_dec_ref(v_a_1144_);
lean_dec(v_a_1143_);
lean_dec_ref(v_a_1142_);
lean_dec(v_a_1141_);
lean_dec_ref(v_a_1140_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1(lean_object* v_00_u03b1_1150_, lean_object* v_00_u03c3s_1151_, lean_object* v_hyp_1152_, lean_object* v_name_1153_, lean_object* v_k_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_){
_start:
{
lean_object* v___x_1164_; 
v___x_1164_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___redArg(v_00_u03c3s_1151_, v_hyp_1152_, v_name_1153_, v_k_1154_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1___boxed(lean_object* v_00_u03b1_1165_, lean_object* v_00_u03c3s_1166_, lean_object* v_hyp_1167_, lean_object* v_name_1168_, lean_object* v_k_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_){
_start:
{
lean_object* v_res_1179_; 
v_res_1179_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1(v_00_u03b1_1165_, v_00_u03c3s_1166_, v_hyp_1167_, v_name_1168_, v_k_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_);
lean_dec(v___y_1177_);
lean_dec_ref(v___y_1176_);
lean_dec(v___y_1175_);
lean_dec_ref(v___y_1174_);
lean_dec(v___y_1173_);
lean_dec_ref(v___y_1172_);
lean_dec(v___y_1171_);
lean_dec_ref(v___y_1170_);
return v_res_1179_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2(lean_object* v_mvarId_1180_, lean_object* v_val_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_){
_start:
{
lean_object* v___x_1191_; 
v___x_1191_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg(v_mvarId_1180_, v_val_1181_, v___y_1187_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___boxed(lean_object* v_mvarId_1192_, lean_object* v_val_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_){
_start:
{
lean_object* v_res_1203_; 
v_res_1203_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2(v_mvarId_1192_, v_val_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_);
lean_dec(v___y_1201_);
lean_dec_ref(v___y_1200_);
lean_dec(v___y_1199_);
lean_dec_ref(v___y_1198_);
lean_dec(v___y_1197_);
lean_dec_ref(v___y_1196_);
lean_dec(v___y_1195_);
lean_dec_ref(v___y_1194_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3(lean_object* v_00_u03b1_1204_, lean_object* v_name_1205_, uint8_t v_bi_1206_, lean_object* v_type_1207_, lean_object* v_k_1208_, uint8_t v_kind_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_){
_start:
{
lean_object* v___x_1219_; 
v___x_1219_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___redArg(v_name_1205_, v_bi_1206_, v_type_1207_, v_k_1208_, v_kind_1209_, v___y_1210_, v___y_1211_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_);
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b1_1220_, lean_object* v_name_1221_, lean_object* v_bi_1222_, lean_object* v_type_1223_, lean_object* v_k_1224_, lean_object* v_kind_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_){
_start:
{
uint8_t v_bi_boxed_1235_; uint8_t v_kind_boxed_1236_; lean_object* v_res_1237_; 
v_bi_boxed_1235_ = lean_unbox(v_bi_1222_);
v_kind_boxed_1236_ = lean_unbox(v_kind_1225_);
v_res_1237_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1_spec__3(v_00_u03b1_1220_, v_name_1221_, v_bi_boxed_1235_, v_type_1223_, v_k_1224_, v_kind_boxed_1236_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
lean_dec(v___y_1233_);
lean_dec_ref(v___y_1232_);
lean_dec(v___y_1231_);
lean_dec_ref(v___y_1230_);
lean_dec(v___y_1229_);
lean_dec_ref(v___y_1228_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
return v_res_1237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1(lean_object* v_00_u03b1_1238_, lean_object* v_name_1239_, lean_object* v_type_1240_, lean_object* v_k_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_){
_start:
{
lean_object* v___x_1251_; 
v___x_1251_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___redArg(v_name_1239_, v_type_1240_, v_k_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_);
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1___boxed(lean_object* v_00_u03b1_1252_, lean_object* v_name_1253_, lean_object* v_type_1254_, lean_object* v_k_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_){
_start:
{
lean_object* v_res_1265_; 
v_res_1265_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mPureCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__1_spec__1(v_00_u03b1_1252_, v_name_1253_, v_type_1254_, v_k_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_);
lean_dec(v___y_1263_);
lean_dec_ref(v___y_1262_);
lean_dec(v___y_1261_);
lean_dec_ref(v___y_1260_);
lean_dec(v___y_1259_);
lean_dec_ref(v___y_1258_);
lean_dec(v___y_1257_);
lean_dec_ref(v___y_1256_);
return v_res_1265_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3(lean_object* v_00_u03b2_1266_, lean_object* v_x_1267_, lean_object* v_x_1268_, lean_object* v_x_1269_){
_start:
{
lean_object* v___x_1270_; 
v___x_1270_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3___redArg(v_x_1267_, v_x_1268_, v_x_1269_);
return v___x_1270_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6(lean_object* v_00_u03b2_1271_, lean_object* v_x_1272_, size_t v_x_1273_, size_t v_x_1274_, lean_object* v_x_1275_, lean_object* v_x_1276_){
_start:
{
lean_object* v___x_1277_; 
v___x_1277_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___redArg(v_x_1272_, v_x_1273_, v_x_1274_, v_x_1275_, v_x_1276_);
return v___x_1277_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6___boxed(lean_object* v_00_u03b2_1278_, lean_object* v_x_1279_, lean_object* v_x_1280_, lean_object* v_x_1281_, lean_object* v_x_1282_, lean_object* v_x_1283_){
_start:
{
size_t v_x_10381__boxed_1284_; size_t v_x_10382__boxed_1285_; lean_object* v_res_1286_; 
v_x_10381__boxed_1284_ = lean_unbox_usize(v_x_1280_);
lean_dec(v_x_1280_);
v_x_10382__boxed_1285_ = lean_unbox_usize(v_x_1281_);
lean_dec(v_x_1281_);
v_res_1286_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6(v_00_u03b2_1278_, v_x_1279_, v_x_10381__boxed_1284_, v_x_10382__boxed_1285_, v_x_1282_, v_x_1283_);
return v_res_1286_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7(lean_object* v_00_u03b2_1287_, lean_object* v_n_1288_, lean_object* v_k_1289_, lean_object* v_v_1290_){
_start:
{
lean_object* v___x_1291_; 
v___x_1291_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7___redArg(v_n_1288_, v_k_1289_, v_v_1290_);
return v___x_1291_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8(lean_object* v_00_u03b2_1292_, size_t v_depth_1293_, lean_object* v_keys_1294_, lean_object* v_vals_1295_, lean_object* v_heq_1296_, lean_object* v_i_1297_, lean_object* v_entries_1298_){
_start:
{
lean_object* v___x_1299_; 
v___x_1299_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___redArg(v_depth_1293_, v_keys_1294_, v_vals_1295_, v_i_1297_, v_entries_1298_);
return v___x_1299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8___boxed(lean_object* v_00_u03b2_1300_, lean_object* v_depth_1301_, lean_object* v_keys_1302_, lean_object* v_vals_1303_, lean_object* v_heq_1304_, lean_object* v_i_1305_, lean_object* v_entries_1306_){
_start:
{
size_t v_depth_boxed_1307_; lean_object* v_res_1308_; 
v_depth_boxed_1307_ = lean_unbox_usize(v_depth_1301_);
lean_dec(v_depth_1301_);
v_res_1308_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__8(v_00_u03b2_1300_, v_depth_boxed_1307_, v_keys_1302_, v_vals_1303_, v_heq_1304_, v_i_1305_, v_entries_1306_);
lean_dec_ref(v_vals_1303_);
lean_dec_ref(v_keys_1302_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7_spec__8(lean_object* v_00_u03b2_1309_, lean_object* v_x_1310_, lean_object* v_x_1311_, lean_object* v_x_1312_, lean_object* v_x_1313_){
_start:
{
lean_object* v___x_1314_; 
v___x_1314_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3_spec__6_spec__7_spec__8___redArg(v_x_1310_, v_x_1311_, v_x_1312_, v_x_1313_);
return v___x_1314_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1(){
_start:
{
lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; 
v___x_1326_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1327_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___closed__3));
v___x_1328_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___closed__3));
v___x_1329_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPure___boxed), 10, 0);
v___x_1330_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1326_, v___x_1327_, v___x_1328_, v___x_1329_);
return v___x_1330_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1___boxed(lean_object* v_a_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1();
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0(lean_object* v___x_1334_, lean_object* v___x_1335_, lean_object* v___x_1336_, lean_object* v___x_1337_, lean_object* v___x_1338_, lean_object* v_00_u03c3s_1339_, lean_object* v_hyps_1340_, lean_object* v_target_1341_, lean_object* v_00_u03c6_1342_, lean_object* v_inst_1343_, lean_object* v_toPure_1344_, lean_object* v_____x_1345_){
_start:
{
lean_object* v_fst_1346_; lean_object* v_snd_1347_; lean_object* v___x_1349_; uint8_t v_isShared_1350_; uint8_t v_isSharedCheck_1360_; 
v_fst_1346_ = lean_ctor_get(v_____x_1345_, 0);
v_snd_1347_ = lean_ctor_get(v_____x_1345_, 1);
v_isSharedCheck_1360_ = !lean_is_exclusive(v_____x_1345_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1349_ = v_____x_1345_;
v_isShared_1350_ = v_isSharedCheck_1360_;
goto v_resetjp_1348_;
}
else
{
lean_inc(v_snd_1347_);
lean_inc(v_fst_1346_);
lean_dec(v_____x_1345_);
v___x_1349_ = lean_box(0);
v_isShared_1350_ = v_isSharedCheck_1360_;
goto v_resetjp_1348_;
}
v_resetjp_1348_:
{
lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v_prf_1355_; lean_object* v___x_1357_; 
v___x_1351_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__2___closed__0));
v___x_1352_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0___closed__0));
v___x_1353_ = l_Lean_Name_mkStr6(v___x_1334_, v___x_1335_, v___x_1336_, v___x_1337_, v___x_1351_, v___x_1352_);
v___x_1354_ = l_Lean_mkConst(v___x_1353_, v___x_1338_);
v_prf_1355_ = l_Lean_mkApp6(v___x_1354_, v_00_u03c3s_1339_, v_hyps_1340_, v_target_1341_, v_00_u03c6_1342_, v_inst_1343_, v_snd_1347_);
if (v_isShared_1350_ == 0)
{
lean_ctor_set(v___x_1349_, 1, v_prf_1355_);
v___x_1357_ = v___x_1349_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v_fst_1346_);
lean_ctor_set(v_reuseFailAlloc_1359_, 1, v_prf_1355_);
v___x_1357_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
lean_object* v___x_1358_; 
v___x_1358_ = lean_apply_2(v_toPure_1344_, lean_box(0), v___x_1357_);
return v___x_1358_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__1(lean_object* v___x_1361_, lean_object* v___x_1362_, lean_object* v___x_1363_, lean_object* v___x_1364_, lean_object* v___x_1365_, lean_object* v_00_u03c3s_1366_, lean_object* v_hyps_1367_, lean_object* v_target_1368_, lean_object* v_00_u03c6_1369_, lean_object* v_toPure_1370_, lean_object* v_k_1371_, lean_object* v_toBind_1372_, lean_object* v_inst_1373_){
_start:
{
lean_object* v___f_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; 
lean_inc_ref(v_00_u03c6_1369_);
v___f_1374_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__0), 12, 11);
lean_closure_set(v___f_1374_, 0, v___x_1361_);
lean_closure_set(v___f_1374_, 1, v___x_1362_);
lean_closure_set(v___f_1374_, 2, v___x_1363_);
lean_closure_set(v___f_1374_, 3, v___x_1364_);
lean_closure_set(v___f_1374_, 4, v___x_1365_);
lean_closure_set(v___f_1374_, 5, v_00_u03c3s_1366_);
lean_closure_set(v___f_1374_, 6, v_hyps_1367_);
lean_closure_set(v___f_1374_, 7, v_target_1368_);
lean_closure_set(v___f_1374_, 8, v_00_u03c6_1369_);
lean_closure_set(v___f_1374_, 9, v_inst_1373_);
lean_closure_set(v___f_1374_, 10, v_toPure_1370_);
v___x_1375_ = lean_apply_1(v_k_1371_, v_00_u03c6_1369_);
v___x_1376_ = lean_apply_4(v_toBind_1372_, lean_box(0), lean_box(0), v___x_1375_, v___f_1374_);
return v___x_1376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__2(lean_object* v_goal_1377_, lean_object* v_toPure_1378_, lean_object* v_k_1379_, lean_object* v_toBind_1380_, lean_object* v_inst_1381_, lean_object* v_00_u03c6_1382_){
_start:
{
lean_object* v_u_1383_; lean_object* v_00_u03c3s_1384_; lean_object* v_hyps_1385_; lean_object* v_target_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___f_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
v_u_1383_ = lean_ctor_get(v_goal_1377_, 0);
lean_inc(v_u_1383_);
v_00_u03c3s_1384_ = lean_ctor_get(v_goal_1377_, 1);
lean_inc_ref_n(v_00_u03c3s_1384_, 2);
v_hyps_1385_ = lean_ctor_get(v_goal_1377_, 2);
lean_inc_ref(v_hyps_1385_);
v_target_1386_ = lean_ctor_get(v_goal_1377_, 3);
lean_inc_ref_n(v_target_1386_, 2);
lean_dec_ref(v_goal_1377_);
v___x_1387_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__0));
v___x_1388_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__1));
v___x_1389_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__2));
v___x_1390_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__3));
v___x_1391_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5));
v___x_1392_ = lean_box(0);
v___x_1393_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1393_, 0, v_u_1383_);
lean_ctor_set(v___x_1393_, 1, v___x_1392_);
lean_inc(v_toBind_1380_);
lean_inc_ref(v_00_u03c6_1382_);
lean_inc_ref(v___x_1393_);
v___f_1394_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__1), 13, 12);
lean_closure_set(v___f_1394_, 0, v___x_1387_);
lean_closure_set(v___f_1394_, 1, v___x_1388_);
lean_closure_set(v___f_1394_, 2, v___x_1389_);
lean_closure_set(v___f_1394_, 3, v___x_1390_);
lean_closure_set(v___f_1394_, 4, v___x_1393_);
lean_closure_set(v___f_1394_, 5, v_00_u03c3s_1384_);
lean_closure_set(v___f_1394_, 6, v_hyps_1385_);
lean_closure_set(v___f_1394_, 7, v_target_1386_);
lean_closure_set(v___f_1394_, 8, v_00_u03c6_1382_);
lean_closure_set(v___f_1394_, 9, v_toPure_1378_);
lean_closure_set(v___f_1394_, 10, v_k_1379_);
lean_closure_set(v___f_1394_, 11, v_toBind_1380_);
v___x_1395_ = l_Lean_mkConst(v___x_1391_, v___x_1393_);
v___x_1396_ = l_Lean_mkApp3(v___x_1395_, v_00_u03c3s_1384_, v_target_1386_, v_00_u03c6_1382_);
v___x_1397_ = lean_box(0);
v___x_1398_ = lean_alloc_closure((void*)(l_Lean_Meta_synthInstance___boxed), 7, 2);
lean_closure_set(v___x_1398_, 0, v___x_1396_);
lean_closure_set(v___x_1398_, 1, v___x_1397_);
v___x_1399_ = lean_apply_2(v_inst_1381_, lean_box(0), v___x_1398_);
v___x_1400_ = lean_apply_4(v_toBind_1380_, lean_box(0), lean_box(0), v___x_1399_, v___f_1394_);
return v___x_1400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg(lean_object* v_inst_1401_, lean_object* v_inst_1402_, lean_object* v_goal_1403_, lean_object* v_k_1404_){
_start:
{
lean_object* v_toApplicative_1405_; lean_object* v_toBind_1406_; lean_object* v_toPure_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___f_1410_; lean_object* v___x_1411_; 
v_toApplicative_1405_ = lean_ctor_get(v_inst_1401_, 0);
lean_inc_ref(v_toApplicative_1405_);
v_toBind_1406_ = lean_ctor_get(v_inst_1401_, 1);
lean_inc_n(v_toBind_1406_, 2);
lean_dec_ref(v_inst_1401_);
v_toPure_1407_ = lean_ctor_get(v_toApplicative_1405_, 1);
lean_inc(v_toPure_1407_);
lean_dec_ref(v_toApplicative_1405_);
v___x_1408_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__4);
lean_inc(v_inst_1402_);
v___x_1409_ = lean_apply_2(v_inst_1402_, lean_box(0), v___x_1408_);
v___f_1410_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg___lam__2), 6, 5);
lean_closure_set(v___f_1410_, 0, v_goal_1403_);
lean_closure_set(v___f_1410_, 1, v_toPure_1407_);
lean_closure_set(v___f_1410_, 2, v_k_1404_);
lean_closure_set(v___f_1410_, 3, v_toBind_1406_);
lean_closure_set(v___f_1410_, 4, v_inst_1402_);
v___x_1411_ = lean_apply_4(v_toBind_1406_, lean_box(0), lean_box(0), v___x_1409_, v___f_1410_);
return v___x_1411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore(lean_object* v_m_1412_, lean_object* v_00_u03b1_1413_, lean_object* v_inst_1414_, lean_object* v_inst_1415_, lean_object* v_goal_1416_, lean_object* v_k_1417_){
_start:
{
lean_object* v___x_1418_; 
v___x_1418_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___redArg(v_inst_1414_, v_inst_1415_, v_goal_1416_, v_k_1417_);
return v___x_1418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg(lean_object* v_goal_1426_, lean_object* v_k_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_){
_start:
{
lean_object* v___x_1437_; uint8_t v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; 
v___x_1437_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2);
v___x_1438_ = 0;
v___x_1439_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3);
v___x_1440_ = l_Lean_Meta_mkFreshExprMVar(v___x_1437_, v___x_1438_, v___x_1439_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v_a_1441_; lean_object* v_u_1442_; lean_object* v_00_u03c3s_1443_; lean_object* v_hyps_1444_; lean_object* v_target_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
lean_inc_n(v_a_1441_, 2);
lean_dec_ref_known(v___x_1440_, 1);
v_u_1442_ = lean_ctor_get(v_goal_1426_, 0);
lean_inc(v_u_1442_);
v_00_u03c3s_1443_ = lean_ctor_get(v_goal_1426_, 1);
lean_inc_ref_n(v_00_u03c3s_1443_, 2);
v_hyps_1444_ = lean_ctor_get(v_goal_1426_, 2);
lean_inc_ref(v_hyps_1444_);
v_target_1445_ = lean_ctor_get(v_goal_1426_, 3);
lean_inc_ref_n(v_target_1445_, 2);
lean_dec_ref(v_goal_1426_);
v___x_1446_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5));
v___x_1447_ = lean_box(0);
v___x_1448_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1448_, 0, v_u_1442_);
lean_ctor_set(v___x_1448_, 1, v___x_1447_);
lean_inc_ref(v___x_1448_);
v___x_1449_ = l_Lean_mkConst(v___x_1446_, v___x_1448_);
v___x_1450_ = l_Lean_mkApp3(v___x_1449_, v_00_u03c3s_1443_, v_target_1445_, v_a_1441_);
v___x_1451_ = lean_box(0);
v___x_1452_ = l_Lean_Meta_synthInstance(v___x_1450_, v___x_1451_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_);
if (lean_obj_tag(v___x_1452_) == 0)
{
lean_object* v_a_1453_; lean_object* v___x_1454_; 
v_a_1453_ = lean_ctor_get(v___x_1452_, 0);
lean_inc(v_a_1453_);
lean_dec_ref_known(v___x_1452_, 1);
lean_inc(v___y_1435_);
lean_inc_ref(v___y_1434_);
lean_inc(v___y_1433_);
lean_inc_ref(v___y_1432_);
lean_inc(v___y_1431_);
lean_inc_ref(v___y_1430_);
lean_inc(v___y_1429_);
lean_inc_ref(v___y_1428_);
lean_inc(v_a_1441_);
v___x_1454_ = lean_apply_10(v_k_1427_, v_a_1441_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_, lean_box(0));
if (lean_obj_tag(v___x_1454_) == 0)
{
lean_object* v_a_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1474_; 
v_a_1455_ = lean_ctor_get(v___x_1454_, 0);
v_isSharedCheck_1474_ = !lean_is_exclusive(v___x_1454_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1457_ = v___x_1454_;
v_isShared_1458_ = v_isSharedCheck_1474_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_a_1455_);
lean_dec(v___x_1454_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1474_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v_fst_1459_; lean_object* v_snd_1460_; lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1473_; 
v_fst_1459_ = lean_ctor_get(v_a_1455_, 0);
v_snd_1460_ = lean_ctor_get(v_a_1455_, 1);
v_isSharedCheck_1473_ = !lean_is_exclusive(v_a_1455_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1462_ = v_a_1455_;
v_isShared_1463_ = v_isSharedCheck_1473_;
goto v_resetjp_1461_;
}
else
{
lean_inc(v_snd_1460_);
lean_inc(v_fst_1459_);
lean_dec(v_a_1455_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1473_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v_prf_1466_; lean_object* v___x_1468_; 
v___x_1464_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0));
v___x_1465_ = l_Lean_mkConst(v___x_1464_, v___x_1448_);
v_prf_1466_ = l_Lean_mkApp6(v___x_1465_, v_00_u03c3s_1443_, v_hyps_1444_, v_target_1445_, v_a_1441_, v_a_1453_, v_snd_1460_);
if (v_isShared_1463_ == 0)
{
lean_ctor_set(v___x_1462_, 1, v_prf_1466_);
v___x_1468_ = v___x_1462_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v_fst_1459_);
lean_ctor_set(v_reuseFailAlloc_1472_, 1, v_prf_1466_);
v___x_1468_ = v_reuseFailAlloc_1472_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
lean_object* v___x_1470_; 
if (v_isShared_1458_ == 0)
{
lean_ctor_set(v___x_1457_, 0, v___x_1468_);
v___x_1470_ = v___x_1457_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v___x_1468_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
}
}
}
else
{
lean_dec(v_a_1453_);
lean_dec_ref_known(v___x_1448_, 2);
lean_dec_ref(v_target_1445_);
lean_dec_ref(v_hyps_1444_);
lean_dec_ref(v_00_u03c3s_1443_);
lean_dec(v_a_1441_);
return v___x_1454_;
}
}
else
{
lean_object* v_a_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1482_; 
lean_dec_ref_known(v___x_1448_, 2);
lean_dec_ref(v_target_1445_);
lean_dec_ref(v_hyps_1444_);
lean_dec_ref(v_00_u03c3s_1443_);
lean_dec(v_a_1441_);
lean_dec_ref(v_k_1427_);
v_a_1475_ = lean_ctor_get(v___x_1452_, 0);
v_isSharedCheck_1482_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1482_ == 0)
{
v___x_1477_ = v___x_1452_;
v_isShared_1478_ = v_isSharedCheck_1482_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_a_1475_);
lean_dec(v___x_1452_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1482_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v___x_1480_; 
if (v_isShared_1478_ == 0)
{
v___x_1480_ = v___x_1477_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1481_; 
v_reuseFailAlloc_1481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1481_, 0, v_a_1475_);
v___x_1480_ = v_reuseFailAlloc_1481_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
return v___x_1480_;
}
}
}
}
else
{
lean_object* v_a_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1490_; 
lean_dec_ref(v_k_1427_);
lean_dec_ref(v_goal_1426_);
v_a_1483_ = lean_ctor_get(v___x_1440_, 0);
v_isSharedCheck_1490_ = !lean_is_exclusive(v___x_1440_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1485_ = v___x_1440_;
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_a_1483_);
lean_dec(v___x_1440_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___x_1488_; 
if (v_isShared_1486_ == 0)
{
v___x_1488_ = v___x_1485_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v_a_1483_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___boxed(lean_object* v_goal_1491_, lean_object* v_k_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_){
_start:
{
lean_object* v_res_1502_; 
v_res_1502_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg(v_goal_1491_, v_k_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_);
lean_dec(v___y_1500_);
lean_dec_ref(v___y_1499_);
lean_dec(v___y_1498_);
lean_dec_ref(v___y_1497_);
lean_dec(v___y_1496_);
lean_dec_ref(v___y_1495_);
lean_dec(v___y_1494_);
lean_dec_ref(v___y_1493_);
return v_res_1502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0(lean_object* v_00_u03b1_1503_, lean_object* v_goal_1504_, lean_object* v_k_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_){
_start:
{
lean_object* v___x_1515_; 
v___x_1515_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg(v_goal_1504_, v_k_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_, v___y_1513_);
return v___x_1515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___boxed(lean_object* v_00_u03b1_1516_, lean_object* v_goal_1517_, lean_object* v_k_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_){
_start:
{
lean_object* v_res_1528_; 
v_res_1528_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0(v_00_u03b1_1516_, v_goal_1517_, v_k_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_);
lean_dec(v___y_1526_);
lean_dec_ref(v___y_1525_);
lean_dec(v___y_1524_);
lean_dec_ref(v___y_1523_);
lean_dec(v___y_1522_);
lean_dec_ref(v___y_1521_);
lean_dec(v___y_1520_);
lean_dec_ref(v___y_1519_);
return v_res_1528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__0(lean_object* v_fst_1529_, lean_object* v_00_u03c6_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_){
_start:
{
lean_object* v___x_1540_; 
v___x_1540_ = l_Lean_MVarId_getTag(v_fst_1529_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_);
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v_a_1541_; lean_object* v___x_1542_; 
v_a_1541_ = lean_ctor_get(v___x_1540_, 0);
lean_inc(v_a_1541_);
lean_dec_ref_known(v___x_1540_, 1);
v___x_1542_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_00_u03c6_1530_, v_a_1541_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_);
if (lean_obj_tag(v___x_1542_) == 0)
{
lean_object* v_a_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1552_; 
v_a_1543_ = lean_ctor_get(v___x_1542_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v___x_1542_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1545_ = v___x_1542_;
v_isShared_1546_ = v_isSharedCheck_1552_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_a_1543_);
lean_dec(v___x_1542_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1552_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1550_; 
v___x_1547_ = l_Lean_Expr_mvarId_x21(v_a_1543_);
v___x_1548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1548_, 0, v___x_1547_);
lean_ctor_set(v___x_1548_, 1, v_a_1543_);
if (v_isShared_1546_ == 0)
{
lean_ctor_set(v___x_1545_, 0, v___x_1548_);
v___x_1550_ = v___x_1545_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v___x_1548_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
return v___x_1550_;
}
}
}
else
{
lean_object* v_a_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1560_; 
v_a_1553_ = lean_ctor_get(v___x_1542_, 0);
v_isSharedCheck_1560_ = !lean_is_exclusive(v___x_1542_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1555_ = v___x_1542_;
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_a_1553_);
lean_dec(v___x_1542_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1558_; 
if (v_isShared_1556_ == 0)
{
v___x_1558_ = v___x_1555_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v_a_1553_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
return v___x_1558_;
}
}
}
}
else
{
lean_object* v_a_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1568_; 
lean_dec_ref(v_00_u03c6_1530_);
v_a_1561_ = lean_ctor_get(v___x_1540_, 0);
v_isSharedCheck_1568_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1563_ = v___x_1540_;
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_a_1561_);
lean_dec(v___x_1540_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
lean_object* v___x_1566_; 
if (v_isShared_1564_ == 0)
{
v___x_1566_ = v___x_1563_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v_a_1561_);
v___x_1566_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
return v___x_1566_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__0___boxed(lean_object* v_fst_1569_, lean_object* v_00_u03c6_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_){
_start:
{
lean_object* v_res_1580_; 
v_res_1580_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__0(v_fst_1569_, v_00_u03c6_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_, v___y_1578_);
lean_dec(v___y_1578_);
lean_dec_ref(v___y_1577_);
lean_dec(v___y_1576_);
lean_dec_ref(v___y_1575_);
lean_dec(v___y_1574_);
lean_dec_ref(v___y_1573_);
lean_dec(v___y_1572_);
lean_dec_ref(v___y_1571_);
return v_res_1580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__1(lean_object* v_snd_1581_, lean_object* v___f_1582_, lean_object* v_fst_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_){
_start:
{
lean_object* v___x_1593_; 
v___x_1593_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg(v_snd_1581_, v___f_1582_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_);
if (lean_obj_tag(v___x_1593_) == 0)
{
lean_object* v_a_1594_; lean_object* v_fst_1595_; lean_object* v_snd_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1606_; 
v_a_1594_ = lean_ctor_get(v___x_1593_, 0);
lean_inc(v_a_1594_);
lean_dec_ref_known(v___x_1593_, 1);
v_fst_1595_ = lean_ctor_get(v_a_1594_, 0);
v_snd_1596_ = lean_ctor_get(v_a_1594_, 1);
v_isSharedCheck_1606_ = !lean_is_exclusive(v_a_1594_);
if (v_isSharedCheck_1606_ == 0)
{
v___x_1598_ = v_a_1594_;
v_isShared_1599_ = v_isSharedCheck_1606_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_snd_1596_);
lean_inc(v_fst_1595_);
lean_dec(v_a_1594_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1606_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1603_; 
v___x_1600_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2___redArg(v_fst_1583_, v_snd_1596_, v___y_1589_);
lean_dec_ref(v___x_1600_);
v___x_1601_ = lean_box(0);
if (v_isShared_1599_ == 0)
{
lean_ctor_set_tag(v___x_1598_, 1);
lean_ctor_set(v___x_1598_, 1, v___x_1601_);
v___x_1603_ = v___x_1598_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1605_; 
v_reuseFailAlloc_1605_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1605_, 0, v_fst_1595_);
lean_ctor_set(v_reuseFailAlloc_1605_, 1, v___x_1601_);
v___x_1603_ = v_reuseFailAlloc_1605_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
lean_object* v___x_1604_; 
v___x_1604_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_1603_, v___y_1585_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_);
return v___x_1604_;
}
}
}
else
{
lean_object* v_a_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1614_; 
lean_dec(v_fst_1583_);
v_a_1607_ = lean_ctor_get(v___x_1593_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1593_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1609_ = v___x_1593_;
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_a_1607_);
lean_dec(v___x_1593_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__1___boxed(lean_object* v_snd_1615_, lean_object* v___f_1616_, lean_object* v_fst_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__1(v_snd_1615_, v___f_1616_, v_fst_1617_, v___y_1618_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_);
lean_dec(v___y_1625_);
lean_dec_ref(v___y_1624_);
lean_dec(v___y_1623_);
lean_dec_ref(v___y_1622_);
lean_dec(v___y_1621_);
lean_dec_ref(v___y_1620_);
lean_dec(v___y_1619_);
lean_dec_ref(v___y_1618_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro(lean_object* v_x_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_, lean_object* v_a_1637_, lean_object* v_a_1638_, lean_object* v_a_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_, lean_object* v_a_1642_){
_start:
{
lean_object* v___x_1644_; uint8_t v___x_1645_; 
v___x_1644_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1));
v___x_1645_ = l_Lean_Syntax_isOfKind(v_x_1634_, v___x_1644_);
if (v___x_1645_ == 0)
{
lean_object* v___x_1646_; 
v___x_1646_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__0___redArg();
return v___x_1646_;
}
else
{
lean_object* v___x_1647_; 
v___x_1647_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(v_a_1636_, v_a_1639_, v_a_1640_, v_a_1641_, v_a_1642_);
if (lean_obj_tag(v___x_1647_) == 0)
{
lean_object* v_a_1648_; lean_object* v_fst_1649_; lean_object* v_snd_1650_; lean_object* v___f_1651_; lean_object* v___f_1652_; lean_object* v___x_1653_; 
v_a_1648_ = lean_ctor_get(v___x_1647_, 0);
lean_inc(v_a_1648_);
lean_dec_ref_known(v___x_1647_, 1);
v_fst_1649_ = lean_ctor_get(v_a_1648_, 0);
lean_inc_n(v_fst_1649_, 3);
v_snd_1650_ = lean_ctor_get(v_a_1648_, 1);
lean_inc(v_snd_1650_);
lean_dec(v_a_1648_);
v___f_1651_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__0___boxed), 11, 1);
lean_closure_set(v___f_1651_, 0, v_fst_1649_);
v___f_1652_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___lam__1___boxed), 12, 3);
lean_closure_set(v___f_1652_, 0, v_snd_1650_);
lean_closure_set(v___f_1652_, 1, v___f_1651_);
lean_closure_set(v___f_1652_, 2, v_fst_1649_);
v___x_1653_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__3___redArg(v_fst_1649_, v___f_1652_, v_a_1635_, v_a_1636_, v_a_1637_, v_a_1638_, v_a_1639_, v_a_1640_, v_a_1641_, v_a_1642_);
return v___x_1653_;
}
else
{
lean_object* v_a_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1661_; 
v_a_1654_ = lean_ctor_get(v___x_1647_, 0);
v_isSharedCheck_1661_ = !lean_is_exclusive(v___x_1647_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1656_ = v___x_1647_;
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_a_1654_);
lean_dec(v___x_1647_);
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
v_reuseFailAlloc_1660_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___boxed(lean_object* v_x_1662_, lean_object* v_a_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_){
_start:
{
lean_object* v_res_1672_; 
v_res_1672_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro(v_x_1662_, v_a_1663_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_, v_a_1668_, v_a_1669_, v_a_1670_);
lean_dec(v_a_1670_);
lean_dec_ref(v_a_1669_);
lean_dec(v_a_1668_);
lean_dec_ref(v_a_1667_);
lean_dec(v_a_1666_);
lean_dec_ref(v_a_1665_);
lean_dec(v_a_1664_);
lean_dec_ref(v_a_1663_);
return v_res_1672_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1(){
_start:
{
lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; 
v___x_1682_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1683_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___closed__1));
v___x_1684_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___closed__1));
v___x_1685_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___boxed), 10, 0);
v___x_1686_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1682_, v___x_1683_, v___x_1684_, v___x_1685_);
return v___x_1686_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1___boxed(lean_object* v_a_1687_){
_start:
{
lean_object* v_res_1688_; 
v_res_1688_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1();
return v_res_1688_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__5(void){
_start:
{
lean_object* v___x_1700_; lean_object* v_dummy_1701_; 
v___x_1700_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__0);
v_dummy_1701_ = l_Lean_Expr_sort___override(v___x_1700_);
return v_dummy_1701_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp(lean_object* v_e_1702_, lean_object* v_a_1703_, lean_object* v_a_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_){
_start:
{
lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1708_ = l_Lean_instInhabitedExpr;
v___x_1709_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_1702_, v_a_1704_);
if (lean_obj_tag(v___x_1709_) == 0)
{
lean_object* v_a_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1768_; 
v_a_1710_ = lean_ctor_get(v___x_1709_, 0);
v_isSharedCheck_1768_ = !lean_is_exclusive(v___x_1709_);
if (v_isSharedCheck_1768_ == 0)
{
v___x_1712_ = v___x_1709_;
v_isShared_1713_ = v_isSharedCheck_1768_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_a_1710_);
lean_dec(v___x_1709_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1768_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1714_; lean_object* v___x_1715_; uint8_t v___x_1716_; 
v___x_1714_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__2));
v___x_1715_ = lean_unsigned_to_nat(2u);
v___x_1716_ = l_Lean_Expr_isAppOfArity(v_a_1710_, v___x_1714_, v___x_1715_);
if (v___x_1716_ == 0)
{
lean_object* v___x_1717_; lean_object* v___x_1719_; 
lean_dec(v_a_1710_);
v___x_1717_ = lean_box(0);
if (v_isShared_1713_ == 0)
{
lean_ctor_set(v___x_1712_, 0, v___x_1717_);
v___x_1719_ = v___x_1712_;
goto v_reusejp_1718_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v___x_1717_);
v___x_1719_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1718_;
}
v_reusejp_1718_:
{
return v___x_1719_;
}
}
else
{
lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; uint8_t v___x_1724_; 
v___x_1721_ = l_Lean_Expr_appArg_x21(v_a_1710_);
lean_dec(v_a_1710_);
v___x_1722_ = l_Lean_Expr_getAppFn(v___x_1721_);
v___x_1723_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__4));
v___x_1724_ = l_Lean_Expr_isConstOf(v___x_1722_, v___x_1723_);
lean_dec_ref(v___x_1722_);
if (v___x_1724_ == 0)
{
lean_object* v___x_1725_; lean_object* v___x_1727_; 
lean_dec_ref(v___x_1721_);
v___x_1725_ = lean_box(0);
if (v_isShared_1713_ == 0)
{
lean_ctor_set(v___x_1712_, 0, v___x_1725_);
v___x_1727_ = v___x_1712_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v___x_1725_);
v___x_1727_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
return v___x_1727_;
}
}
else
{
lean_object* v_dummy_1729_; lean_object* v_nargs_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; uint8_t v___x_1736_; 
v_dummy_1729_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__5, &l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__5_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___closed__5);
v_nargs_1730_ = l_Lean_Expr_getAppNumArgs(v___x_1721_);
lean_inc(v_nargs_1730_);
v___x_1731_ = lean_mk_array(v_nargs_1730_, v_dummy_1729_);
v___x_1732_ = lean_unsigned_to_nat(1u);
v___x_1733_ = lean_nat_sub(v_nargs_1730_, v___x_1732_);
lean_dec(v_nargs_1730_);
v___x_1734_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_1721_, v___x_1731_, v___x_1733_);
v___x_1735_ = lean_array_get_size(v___x_1734_);
v___x_1736_ = lean_nat_dec_lt(v___x_1735_, v___x_1715_);
if (v___x_1736_ == 0)
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; 
lean_del_object(v___x_1712_);
v___x_1737_ = lean_unsigned_to_nat(0u);
v___x_1738_ = lean_array_get(v___x_1708_, v___x_1734_, v___x_1737_);
v___x_1739_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_length(v___x_1738_, v_a_1703_, v_a_1704_, v_a_1705_, v_a_1706_);
if (lean_obj_tag(v___x_1739_) == 0)
{
lean_object* v_a_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1755_; 
v_a_1740_ = lean_ctor_get(v___x_1739_, 0);
v_isSharedCheck_1755_ = !lean_is_exclusive(v___x_1739_);
if (v_isSharedCheck_1755_ == 0)
{
v___x_1742_ = v___x_1739_;
v_isShared_1743_ = v_isSharedCheck_1755_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_a_1740_);
lean_dec(v___x_1739_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1755_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1744_; uint8_t v___x_1745_; 
v___x_1744_ = lean_nat_sub(v___x_1735_, v___x_1715_);
v___x_1745_ = lean_nat_dec_eq(v_a_1740_, v___x_1744_);
lean_dec(v___x_1744_);
lean_dec(v_a_1740_);
if (v___x_1745_ == 0)
{
lean_object* v___x_1746_; lean_object* v___x_1748_; 
lean_dec_ref(v___x_1734_);
v___x_1746_ = lean_box(0);
if (v_isShared_1743_ == 0)
{
lean_ctor_set(v___x_1742_, 0, v___x_1746_);
v___x_1748_ = v___x_1742_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v___x_1746_);
v___x_1748_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
return v___x_1748_;
}
}
else
{
lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1753_; 
v___x_1750_ = lean_array_get(v___x_1708_, v___x_1734_, v___x_1732_);
lean_dec_ref(v___x_1734_);
v___x_1751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1751_, 0, v___x_1750_);
if (v_isShared_1743_ == 0)
{
lean_ctor_set(v___x_1742_, 0, v___x_1751_);
v___x_1753_ = v___x_1742_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1754_; 
v_reuseFailAlloc_1754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1754_, 0, v___x_1751_);
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
else
{
lean_object* v_a_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1763_; 
lean_dec_ref(v___x_1734_);
v_a_1756_ = lean_ctor_get(v___x_1739_, 0);
v_isSharedCheck_1763_ = !lean_is_exclusive(v___x_1739_);
if (v_isSharedCheck_1763_ == 0)
{
v___x_1758_ = v___x_1739_;
v_isShared_1759_ = v_isSharedCheck_1763_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_a_1756_);
lean_dec(v___x_1739_);
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
lean_object* v___x_1764_; lean_object* v___x_1766_; 
lean_dec_ref(v___x_1734_);
v___x_1764_ = lean_box(0);
if (v_isShared_1713_ == 0)
{
lean_ctor_set(v___x_1712_, 0, v___x_1764_);
v___x_1766_ = v___x_1712_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v___x_1764_);
v___x_1766_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
return v___x_1766_;
}
}
}
}
}
}
else
{
lean_object* v_a_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1776_; 
v_a_1769_ = lean_ctor_get(v___x_1709_, 0);
v_isSharedCheck_1776_ = !lean_is_exclusive(v___x_1709_);
if (v_isSharedCheck_1776_ == 0)
{
v___x_1771_ = v___x_1709_;
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_a_1769_);
lean_dec(v___x_1709_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1774_; 
if (v_isShared_1772_ == 0)
{
v___x_1774_ = v___x_1771_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v_a_1769_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp___boxed(lean_object* v_e_1777_, lean_object* v_a_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_){
_start:
{
lean_object* v_res_1783_; 
v_res_1783_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp(v_e_1777_, v_a_1778_, v_a_1779_, v_a_1780_, v_a_1781_);
lean_dec(v_a_1781_);
lean_dec_ref(v_a_1780_);
lean_dec(v_a_1779_);
lean_dec_ref(v_a_1778_);
return v_res_1783_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1_spec__1(lean_object* v_msgData_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_){
_start:
{
lean_object* v___x_1790_; lean_object* v_env_1791_; lean_object* v___x_1792_; lean_object* v_toCold_1793_; lean_object* v_mctx_1794_; lean_object* v_lctx_1795_; lean_object* v_options_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; 
v___x_1790_ = lean_st_ref_get(v___y_1788_);
v_env_1791_ = lean_ctor_get(v___x_1790_, 0);
lean_inc_ref(v_env_1791_);
lean_dec(v___x_1790_);
v___x_1792_ = lean_st_ref_get(v___y_1786_);
v_toCold_1793_ = lean_ctor_get(v___y_1787_, 0);
v_mctx_1794_ = lean_ctor_get(v___x_1792_, 0);
lean_inc_ref(v_mctx_1794_);
lean_dec(v___x_1792_);
v_lctx_1795_ = lean_ctor_get(v___y_1785_, 2);
v_options_1796_ = lean_ctor_get(v_toCold_1793_, 2);
lean_inc_ref(v_options_1796_);
lean_inc_ref(v_lctx_1795_);
v___x_1797_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1797_, 0, v_env_1791_);
lean_ctor_set(v___x_1797_, 1, v_mctx_1794_);
lean_ctor_set(v___x_1797_, 2, v_lctx_1795_);
lean_ctor_set(v___x_1797_, 3, v_options_1796_);
v___x_1798_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1798_, 0, v___x_1797_);
lean_ctor_set(v___x_1798_, 1, v_msgData_1784_);
v___x_1799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1798_);
return v___x_1799_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1_spec__1___boxed(lean_object* v_msgData_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_){
_start:
{
lean_object* v_res_1806_; 
v_res_1806_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1_spec__1(v_msgData_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_);
lean_dec(v___y_1804_);
lean_dec_ref(v___y_1803_);
lean_dec(v___y_1802_);
lean_dec_ref(v___y_1801_);
return v_res_1806_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1807_; double v___x_1808_; 
v___x_1807_ = lean_unsigned_to_nat(0u);
v___x_1808_ = lean_float_of_nat(v___x_1807_);
return v___x_1808_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1(lean_object* v_cls_1812_, lean_object* v_msg_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_){
_start:
{
lean_object* v_ref_1819_; lean_object* v___x_1820_; lean_object* v_a_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1865_; 
v_ref_1819_ = lean_ctor_get(v___y_1816_, 2);
v___x_1820_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1_spec__1(v_msg_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
v_a_1821_ = lean_ctor_get(v___x_1820_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v___x_1820_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1823_ = v___x_1820_;
v_isShared_1824_ = v_isSharedCheck_1865_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_a_1821_);
lean_dec(v___x_1820_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1865_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1825_; lean_object* v_traceState_1826_; lean_object* v_env_1827_; lean_object* v_nextMacroScope_1828_; lean_object* v_ngen_1829_; lean_object* v_auxDeclNGen_1830_; lean_object* v_cache_1831_; lean_object* v_messages_1832_; lean_object* v_infoState_1833_; lean_object* v_snapshotTasks_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1864_; 
v___x_1825_ = lean_st_ref_take(v___y_1817_);
v_traceState_1826_ = lean_ctor_get(v___x_1825_, 4);
v_env_1827_ = lean_ctor_get(v___x_1825_, 0);
v_nextMacroScope_1828_ = lean_ctor_get(v___x_1825_, 1);
v_ngen_1829_ = lean_ctor_get(v___x_1825_, 2);
v_auxDeclNGen_1830_ = lean_ctor_get(v___x_1825_, 3);
v_cache_1831_ = lean_ctor_get(v___x_1825_, 5);
v_messages_1832_ = lean_ctor_get(v___x_1825_, 6);
v_infoState_1833_ = lean_ctor_get(v___x_1825_, 7);
v_snapshotTasks_1834_ = lean_ctor_get(v___x_1825_, 8);
v_isSharedCheck_1864_ = !lean_is_exclusive(v___x_1825_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1836_ = v___x_1825_;
v_isShared_1837_ = v_isSharedCheck_1864_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_snapshotTasks_1834_);
lean_inc(v_infoState_1833_);
lean_inc(v_messages_1832_);
lean_inc(v_cache_1831_);
lean_inc(v_traceState_1826_);
lean_inc(v_auxDeclNGen_1830_);
lean_inc(v_ngen_1829_);
lean_inc(v_nextMacroScope_1828_);
lean_inc(v_env_1827_);
lean_dec(v___x_1825_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1864_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
uint64_t v_tid_1838_; lean_object* v_traces_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_1863_; 
v_tid_1838_ = lean_ctor_get_uint64(v_traceState_1826_, sizeof(void*)*1);
v_traces_1839_ = lean_ctor_get(v_traceState_1826_, 0);
v_isSharedCheck_1863_ = !lean_is_exclusive(v_traceState_1826_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1841_ = v_traceState_1826_;
v_isShared_1842_ = v_isSharedCheck_1863_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_traces_1839_);
lean_dec(v_traceState_1826_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_1863_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
lean_object* v___x_1843_; lean_object* v___x_1844_; double v___x_1845_; uint8_t v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1854_; 
v___x_1843_ = lean_box(0);
v___x_1844_ = lean_box(0);
v___x_1845_ = lean_float_once(&l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0, &l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0);
v___x_1846_ = 0;
v___x_1847_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__1));
v___x_1848_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1848_, 0, v_cls_1812_);
lean_ctor_set(v___x_1848_, 1, v___x_1844_);
lean_ctor_set(v___x_1848_, 2, v___x_1847_);
lean_ctor_set_float(v___x_1848_, sizeof(void*)*3, v___x_1845_);
lean_ctor_set_float(v___x_1848_, sizeof(void*)*3 + 8, v___x_1845_);
lean_ctor_set_uint8(v___x_1848_, sizeof(void*)*3 + 16, v___x_1846_);
v___x_1849_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__2));
v___x_1850_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1848_);
lean_ctor_set(v___x_1850_, 1, v_a_1821_);
lean_ctor_set(v___x_1850_, 2, v___x_1849_);
lean_inc(v_ref_1819_);
v___x_1851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1851_, 0, v_ref_1819_);
lean_ctor_set(v___x_1851_, 1, v___x_1850_);
v___x_1852_ = l_Lean_PersistentArray_push___redArg(v_traces_1839_, v___x_1851_);
if (v_isShared_1842_ == 0)
{
lean_ctor_set(v___x_1841_, 0, v___x_1852_);
v___x_1854_ = v___x_1841_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v___x_1852_);
lean_ctor_set_uint64(v_reuseFailAlloc_1862_, sizeof(void*)*1, v_tid_1838_);
v___x_1854_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
lean_object* v___x_1856_; 
if (v_isShared_1837_ == 0)
{
lean_ctor_set(v___x_1836_, 4, v___x_1854_);
v___x_1856_ = v___x_1836_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v_env_1827_);
lean_ctor_set(v_reuseFailAlloc_1861_, 1, v_nextMacroScope_1828_);
lean_ctor_set(v_reuseFailAlloc_1861_, 2, v_ngen_1829_);
lean_ctor_set(v_reuseFailAlloc_1861_, 3, v_auxDeclNGen_1830_);
lean_ctor_set(v_reuseFailAlloc_1861_, 4, v___x_1854_);
lean_ctor_set(v_reuseFailAlloc_1861_, 5, v_cache_1831_);
lean_ctor_set(v_reuseFailAlloc_1861_, 6, v_messages_1832_);
lean_ctor_set(v_reuseFailAlloc_1861_, 7, v_infoState_1833_);
lean_ctor_set(v_reuseFailAlloc_1861_, 8, v_snapshotTasks_1834_);
v___x_1856_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
lean_object* v___x_1857_; lean_object* v___x_1859_; 
v___x_1857_ = lean_st_ref_put(v___y_1817_, v___x_1856_);
if (v_isShared_1824_ == 0)
{
lean_ctor_set(v___x_1823_, 0, v___x_1843_);
v___x_1859_ = v___x_1823_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v___x_1843_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
return v___x_1859_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___boxed(lean_object* v_cls_1866_, lean_object* v_msg_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_){
_start:
{
lean_object* v_res_1873_; 
v_res_1873_ = l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1(v_cls_1866_, v_msg_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_);
lean_dec(v___y_1871_);
lean_dec_ref(v___y_1870_);
lean_dec(v___y_1869_);
lean_dec_ref(v___y_1868_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg(lean_object* v_mvarId_1874_, lean_object* v_val_1875_, lean_object* v___y_1876_){
_start:
{
lean_object* v___x_1878_; lean_object* v_mctx_1879_; lean_object* v_cache_1880_; lean_object* v_zetaDeltaFVarIds_1881_; lean_object* v_postponed_1882_; lean_object* v_diag_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1912_; 
v___x_1878_ = lean_st_ref_take(v___y_1876_);
v_mctx_1879_ = lean_ctor_get(v___x_1878_, 0);
v_cache_1880_ = lean_ctor_get(v___x_1878_, 1);
v_zetaDeltaFVarIds_1881_ = lean_ctor_get(v___x_1878_, 2);
v_postponed_1882_ = lean_ctor_get(v___x_1878_, 3);
v_diag_1883_ = lean_ctor_get(v___x_1878_, 4);
v_isSharedCheck_1912_ = !lean_is_exclusive(v___x_1878_);
if (v_isSharedCheck_1912_ == 0)
{
v___x_1885_ = v___x_1878_;
v_isShared_1886_ = v_isSharedCheck_1912_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_diag_1883_);
lean_inc(v_postponed_1882_);
lean_inc(v_zetaDeltaFVarIds_1881_);
lean_inc(v_cache_1880_);
lean_inc(v_mctx_1879_);
lean_dec(v___x_1878_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1912_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
lean_object* v_depth_1887_; lean_object* v_levelAssignDepth_1888_; lean_object* v_lmvarCounter_1889_; lean_object* v_mvarCounter_1890_; lean_object* v_lDecls_1891_; lean_object* v_decls_1892_; lean_object* v_userNames_1893_; lean_object* v_lAssignment_1894_; lean_object* v_eAssignment_1895_; lean_object* v_dAssignment_1896_; lean_object* v_instanceTypedMVars_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1911_; 
v_depth_1887_ = lean_ctor_get(v_mctx_1879_, 0);
v_levelAssignDepth_1888_ = lean_ctor_get(v_mctx_1879_, 1);
v_lmvarCounter_1889_ = lean_ctor_get(v_mctx_1879_, 2);
v_mvarCounter_1890_ = lean_ctor_get(v_mctx_1879_, 3);
v_lDecls_1891_ = lean_ctor_get(v_mctx_1879_, 4);
v_decls_1892_ = lean_ctor_get(v_mctx_1879_, 5);
v_userNames_1893_ = lean_ctor_get(v_mctx_1879_, 6);
v_lAssignment_1894_ = lean_ctor_get(v_mctx_1879_, 7);
v_eAssignment_1895_ = lean_ctor_get(v_mctx_1879_, 8);
v_dAssignment_1896_ = lean_ctor_get(v_mctx_1879_, 9);
v_instanceTypedMVars_1897_ = lean_ctor_get(v_mctx_1879_, 10);
v_isSharedCheck_1911_ = !lean_is_exclusive(v_mctx_1879_);
if (v_isSharedCheck_1911_ == 0)
{
v___x_1899_ = v_mctx_1879_;
v_isShared_1900_ = v_isSharedCheck_1911_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_instanceTypedMVars_1897_);
lean_inc(v_dAssignment_1896_);
lean_inc(v_eAssignment_1895_);
lean_inc(v_lAssignment_1894_);
lean_inc(v_userNames_1893_);
lean_inc(v_decls_1892_);
lean_inc(v_lDecls_1891_);
lean_inc(v_mvarCounter_1890_);
lean_inc(v_lmvarCounter_1889_);
lean_inc(v_levelAssignDepth_1888_);
lean_inc(v_depth_1887_);
lean_dec(v_mctx_1879_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1911_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1904_; 
v___x_1901_ = lean_box(0);
v___x_1902_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPure_spec__2_spec__3___redArg(v_eAssignment_1895_, v_mvarId_1874_, v_val_1875_);
if (v_isShared_1900_ == 0)
{
lean_ctor_set(v___x_1899_, 8, v___x_1902_);
v___x_1904_ = v___x_1899_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v_depth_1887_);
lean_ctor_set(v_reuseFailAlloc_1910_, 1, v_levelAssignDepth_1888_);
lean_ctor_set(v_reuseFailAlloc_1910_, 2, v_lmvarCounter_1889_);
lean_ctor_set(v_reuseFailAlloc_1910_, 3, v_mvarCounter_1890_);
lean_ctor_set(v_reuseFailAlloc_1910_, 4, v_lDecls_1891_);
lean_ctor_set(v_reuseFailAlloc_1910_, 5, v_decls_1892_);
lean_ctor_set(v_reuseFailAlloc_1910_, 6, v_userNames_1893_);
lean_ctor_set(v_reuseFailAlloc_1910_, 7, v_lAssignment_1894_);
lean_ctor_set(v_reuseFailAlloc_1910_, 8, v___x_1902_);
lean_ctor_set(v_reuseFailAlloc_1910_, 9, v_dAssignment_1896_);
lean_ctor_set(v_reuseFailAlloc_1910_, 10, v_instanceTypedMVars_1897_);
v___x_1904_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
lean_object* v___x_1906_; 
if (v_isShared_1886_ == 0)
{
lean_ctor_set(v___x_1885_, 0, v___x_1904_);
v___x_1906_ = v___x_1885_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v___x_1904_);
lean_ctor_set(v_reuseFailAlloc_1909_, 1, v_cache_1880_);
lean_ctor_set(v_reuseFailAlloc_1909_, 2, v_zetaDeltaFVarIds_1881_);
lean_ctor_set(v_reuseFailAlloc_1909_, 3, v_postponed_1882_);
lean_ctor_set(v_reuseFailAlloc_1909_, 4, v_diag_1883_);
v___x_1906_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1907_ = lean_st_ref_put(v___y_1876_, v___x_1906_);
v___x_1908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1908_, 0, v___x_1901_);
return v___x_1908_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg___boxed(lean_object* v_mvarId_1913_, lean_object* v_val_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_){
_start:
{
lean_object* v_res_1917_; 
v_res_1917_ = l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg(v_mvarId_1913_, v_val_1914_, v___y_1915_);
lean_dec(v___y_1915_);
return v_res_1917_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__5(void){
_start:
{
lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1927_ = lean_box(0);
v___x_1928_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__4));
v___x_1929_ = l_Lean_mkConst(v___x_1928_, v___x_1927_);
return v___x_1929_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__7(void){
_start:
{
lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
v___x_1933_ = lean_box(0);
v___x_1934_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__6));
v___x_1935_ = l_Lean_mkConst(v___x_1934_, v___x_1933_);
return v___x_1935_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__12(void){
_start:
{
lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; 
v___x_1945_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__9));
v___x_1946_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__11));
v___x_1947_ = l_Lean_Name_append(v___x_1946_, v___x_1945_);
return v___x_1947_;
}
}
static lean_object* _init_l_Lean_MVarId_applyRflAndAndIntro___closed__14(void){
_start:
{
lean_object* v___x_1949_; lean_object* v___x_1950_; 
v___x_1949_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__13));
v___x_1950_ = l_Lean_stringToMessageData(v___x_1949_);
return v___x_1950_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyRflAndAndIntro(lean_object* v_mvar_1951_, lean_object* v_a_1952_, lean_object* v_a_1953_, lean_object* v_a_1954_, lean_object* v_a_1955_){
_start:
{
lean_object* v___y_1958_; lean_object* v___y_1959_; lean_object* v___y_1960_; lean_object* v___y_1961_; lean_object* v___y_1962_; lean_object* v_a_2007_; lean_object* v___y_2020_; lean_object* v___x_2041_; 
lean_inc(v_mvar_1951_);
v___x_2041_ = l_Lean_MVarId_getType(v_mvar_1951_, v_a_1952_, v_a_1953_, v_a_1954_, v_a_1955_);
if (lean_obj_tag(v___x_2041_) == 0)
{
lean_object* v_a_2042_; lean_object* v___x_2043_; 
v_a_2042_ = lean_ctor_get(v___x_2041_, 0);
lean_inc(v_a_2042_);
lean_dec_ref_known(v___x_2041_, 1);
v___x_2043_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_2042_, v_a_1953_);
v___y_2020_ = v___x_2043_;
goto v___jp_2019_;
}
else
{
v___y_2020_ = v___x_2041_;
goto v___jp_2019_;
}
v___jp_1957_:
{
lean_object* v___x_1963_; uint8_t v___x_1964_; 
v___x_1963_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__1));
v___x_1964_ = l_Lean_Expr_isAppOf(v___y_1958_, v___x_1963_);
if (v___x_1964_ == 0)
{
lean_object* v___x_1965_; lean_object* v___x_1966_; uint8_t v___x_1967_; 
v___x_1965_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__3));
v___x_1966_ = lean_unsigned_to_nat(2u);
v___x_1967_ = l_Lean_Expr_isAppOfArity(v___y_1958_, v___x_1965_, v___x_1966_);
if (v___x_1967_ == 0)
{
lean_object* v___x_1968_; 
lean_inc(v_mvar_1951_);
v___x_1968_ = l_Lean_MVarId_setType___redArg(v_mvar_1951_, v___y_1958_, v___y_1960_);
if (lean_obj_tag(v___x_1968_) == 0)
{
lean_object* v___x_1969_; 
lean_dec_ref_known(v___x_1968_, 1);
v___x_1969_ = l_Lean_MVarId_applyRfl(v_mvar_1951_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_);
return v___x_1969_;
}
else
{
lean_dec(v_mvar_1951_);
return v___x_1968_;
}
}
else
{
lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; uint8_t v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; 
v___x_1970_ = l_Lean_Expr_appFn_x21(v___y_1958_);
v___x_1971_ = l_Lean_Expr_appArg_x21(v___x_1970_);
lean_dec_ref(v___x_1970_);
v___x_1972_ = l_Lean_Expr_appArg_x21(v___y_1958_);
lean_dec_ref(v___y_1958_);
lean_inc_ref(v___x_1971_);
v___x_1973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1973_, 0, v___x_1971_);
v___x_1974_ = 0;
v___x_1975_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3);
v___x_1976_ = l_Lean_Meta_mkFreshExprMVar(v___x_1973_, v___x_1974_, v___x_1975_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_);
if (lean_obj_tag(v___x_1976_) == 0)
{
lean_object* v_a_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; 
v_a_1977_ = lean_ctor_get(v___x_1976_, 0);
lean_inc(v_a_1977_);
lean_dec_ref_known(v___x_1976_, 1);
lean_inc_ref(v___x_1972_);
v___x_1978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1978_, 0, v___x_1972_);
v___x_1979_ = l_Lean_Meta_mkFreshExprMVar(v___x_1978_, v___x_1974_, v___x_1975_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_);
if (lean_obj_tag(v___x_1979_) == 0)
{
lean_object* v_a_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; 
v_a_1980_ = lean_ctor_get(v___x_1979_, 0);
lean_inc(v_a_1980_);
lean_dec_ref_known(v___x_1979_, 1);
v___x_1981_ = l_Lean_Expr_mvarId_x21(v_a_1977_);
v___x_1982_ = l_Lean_MVarId_applyRflAndAndIntro(v___x_1981_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_);
if (lean_obj_tag(v___x_1982_) == 0)
{
lean_object* v___x_1983_; lean_object* v___x_1984_; 
lean_dec_ref_known(v___x_1982_, 1);
v___x_1983_ = l_Lean_Expr_mvarId_x21(v_a_1980_);
v___x_1984_ = l_Lean_MVarId_applyRflAndAndIntro(v___x_1983_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_);
if (lean_obj_tag(v___x_1984_) == 0)
{
lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; 
lean_dec_ref_known(v___x_1984_, 1);
v___x_1985_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__5, &l_Lean_MVarId_applyRflAndAndIntro___closed__5_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__5);
v___x_1986_ = l_Lean_mkApp4(v___x_1985_, v___x_1971_, v___x_1972_, v_a_1977_, v_a_1980_);
v___x_1987_ = l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg(v_mvar_1951_, v___x_1986_, v___y_1960_);
return v___x_1987_;
}
else
{
lean_dec(v_a_1980_);
lean_dec(v_a_1977_);
lean_dec_ref(v___x_1972_);
lean_dec_ref(v___x_1971_);
lean_dec(v_mvar_1951_);
return v___x_1984_;
}
}
else
{
lean_dec(v_a_1980_);
lean_dec(v_a_1977_);
lean_dec_ref(v___x_1972_);
lean_dec_ref(v___x_1971_);
lean_dec(v_mvar_1951_);
return v___x_1982_;
}
}
else
{
lean_object* v_a_1988_; lean_object* v___x_1990_; uint8_t v_isShared_1991_; uint8_t v_isSharedCheck_1995_; 
lean_dec(v_a_1977_);
lean_dec_ref(v___x_1972_);
lean_dec_ref(v___x_1971_);
lean_dec(v_mvar_1951_);
v_a_1988_ = lean_ctor_get(v___x_1979_, 0);
v_isSharedCheck_1995_ = !lean_is_exclusive(v___x_1979_);
if (v_isSharedCheck_1995_ == 0)
{
v___x_1990_ = v___x_1979_;
v_isShared_1991_ = v_isSharedCheck_1995_;
goto v_resetjp_1989_;
}
else
{
lean_inc(v_a_1988_);
lean_dec(v___x_1979_);
v___x_1990_ = lean_box(0);
v_isShared_1991_ = v_isSharedCheck_1995_;
goto v_resetjp_1989_;
}
v_resetjp_1989_:
{
lean_object* v___x_1993_; 
if (v_isShared_1991_ == 0)
{
v___x_1993_ = v___x_1990_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v_a_1988_);
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
else
{
lean_object* v_a_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2003_; 
lean_dec_ref(v___x_1972_);
lean_dec_ref(v___x_1971_);
lean_dec(v_mvar_1951_);
v_a_1996_ = lean_ctor_get(v___x_1976_, 0);
v_isSharedCheck_2003_ = !lean_is_exclusive(v___x_1976_);
if (v_isSharedCheck_2003_ == 0)
{
v___x_1998_ = v___x_1976_;
v_isShared_1999_ = v_isSharedCheck_2003_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_a_1996_);
lean_dec(v___x_1976_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2003_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v___x_2001_; 
if (v_isShared_1999_ == 0)
{
v___x_2001_ = v___x_1998_;
goto v_reusejp_2000_;
}
else
{
lean_object* v_reuseFailAlloc_2002_; 
v_reuseFailAlloc_2002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2002_, 0, v_a_1996_);
v___x_2001_ = v_reuseFailAlloc_2002_;
goto v_reusejp_2000_;
}
v_reusejp_2000_:
{
return v___x_2001_;
}
}
}
}
}
else
{
lean_object* v___x_2004_; lean_object* v___x_2005_; 
lean_dec_ref(v___y_1958_);
v___x_2004_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__7, &l_Lean_MVarId_applyRflAndAndIntro___closed__7_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__7);
v___x_2005_ = l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg(v_mvar_1951_, v___x_2004_, v___y_1960_);
return v___x_2005_;
}
}
v___jp_2006_:
{
lean_object* v_toCold_2008_; lean_object* v_options_2009_; uint8_t v_hasTrace_2010_; 
v_toCold_2008_ = lean_ctor_get(v_a_1954_, 0);
v_options_2009_ = lean_ctor_get(v_toCold_2008_, 2);
v_hasTrace_2010_ = lean_ctor_get_uint8(v_options_2009_, sizeof(void*)*1);
if (v_hasTrace_2010_ == 0)
{
v___y_1958_ = v_a_2007_;
v___y_1959_ = v_a_1952_;
v___y_1960_ = v_a_1953_;
v___y_1961_ = v_a_1954_;
v___y_1962_ = v_a_1955_;
goto v___jp_1957_;
}
else
{
lean_object* v_inheritedTraceOptions_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; uint8_t v___x_2014_; 
v_inheritedTraceOptions_2011_ = lean_ctor_get(v_toCold_2008_, 11);
v___x_2012_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__9));
v___x_2013_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__12, &l_Lean_MVarId_applyRflAndAndIntro___closed__12_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__12);
v___x_2014_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2011_, v_options_2009_, v___x_2013_);
if (v___x_2014_ == 0)
{
v___y_1958_ = v_a_2007_;
v___y_1959_ = v_a_1952_;
v___y_1960_ = v_a_1953_;
v___y_1961_ = v_a_1954_;
v___y_1962_ = v_a_1955_;
goto v___jp_1957_;
}
else
{
lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; 
v___x_2015_ = lean_obj_once(&l_Lean_MVarId_applyRflAndAndIntro___closed__14, &l_Lean_MVarId_applyRflAndAndIntro___closed__14_once, _init_l_Lean_MVarId_applyRflAndAndIntro___closed__14);
lean_inc_ref(v_a_2007_);
v___x_2016_ = l_Lean_MessageData_ofExpr(v_a_2007_);
v___x_2017_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2017_, 0, v___x_2015_);
lean_ctor_set(v___x_2017_, 1, v___x_2016_);
v___x_2018_ = l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1(v___x_2012_, v___x_2017_, v_a_1952_, v_a_1953_, v_a_1954_, v_a_1955_);
if (lean_obj_tag(v___x_2018_) == 0)
{
lean_dec_ref_known(v___x_2018_, 1);
v___y_1958_ = v_a_2007_;
v___y_1959_ = v_a_1952_;
v___y_1960_ = v_a_1953_;
v___y_1961_ = v_a_1954_;
v___y_1962_ = v_a_1955_;
goto v___jp_1957_;
}
else
{
lean_dec_ref(v_a_2007_);
lean_dec(v_mvar_1951_);
return v___x_2018_;
}
}
}
}
v___jp_2019_:
{
if (lean_obj_tag(v___y_2020_) == 0)
{
lean_object* v_a_2021_; lean_object* v___x_2022_; 
v_a_2021_ = lean_ctor_get(v___y_2020_, 0);
lean_inc_n(v_a_2021_, 2);
lean_dec_ref_known(v___y_2020_, 1);
v___x_2022_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_extractPureProp(v_a_2021_, v_a_1952_, v_a_1953_, v_a_1954_, v_a_1955_);
if (lean_obj_tag(v___x_2022_) == 0)
{
lean_object* v_a_2023_; 
v_a_2023_ = lean_ctor_get(v___x_2022_, 0);
lean_inc(v_a_2023_);
lean_dec_ref_known(v___x_2022_, 1);
if (lean_obj_tag(v_a_2023_) == 0)
{
v_a_2007_ = v_a_2021_;
goto v___jp_2006_;
}
else
{
lean_object* v_val_2024_; 
lean_dec(v_a_2021_);
v_val_2024_ = lean_ctor_get(v_a_2023_, 0);
lean_inc(v_val_2024_);
lean_dec_ref_known(v_a_2023_, 1);
v_a_2007_ = v_val_2024_;
goto v___jp_2006_;
}
}
else
{
lean_object* v_a_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2032_; 
lean_dec(v_a_2021_);
lean_dec(v_mvar_1951_);
v_a_2025_ = lean_ctor_get(v___x_2022_, 0);
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_2022_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2027_ = v___x_2022_;
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_a_2025_);
lean_dec(v___x_2022_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___x_2030_; 
if (v_isShared_2028_ == 0)
{
v___x_2030_ = v___x_2027_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v_a_2025_);
v___x_2030_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
return v___x_2030_;
}
}
}
}
else
{
lean_object* v_a_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2040_; 
lean_dec(v_mvar_1951_);
v_a_2033_ = lean_ctor_get(v___y_2020_, 0);
v_isSharedCheck_2040_ = !lean_is_exclusive(v___y_2020_);
if (v_isSharedCheck_2040_ == 0)
{
v___x_2035_ = v___y_2020_;
v_isShared_2036_ = v_isSharedCheck_2040_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_a_2033_);
lean_dec(v___y_2020_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2040_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v___x_2038_; 
if (v_isShared_2036_ == 0)
{
v___x_2038_ = v___x_2035_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v_a_2033_);
v___x_2038_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
return v___x_2038_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyRflAndAndIntro___boxed(lean_object* v_mvar_2044_, lean_object* v_a_2045_, lean_object* v_a_2046_, lean_object* v_a_2047_, lean_object* v_a_2048_, lean_object* v_a_2049_){
_start:
{
lean_object* v_res_2050_; 
v_res_2050_ = l_Lean_MVarId_applyRflAndAndIntro(v_mvar_2044_, v_a_2045_, v_a_2046_, v_a_2047_, v_a_2048_);
lean_dec(v_a_2048_);
lean_dec_ref(v_a_2047_);
lean_dec(v_a_2046_);
lean_dec_ref(v_a_2045_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0(lean_object* v_mvarId_2051_, lean_object* v_val_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_){
_start:
{
lean_object* v___x_2058_; 
v___x_2058_ = l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___redArg(v_mvarId_2051_, v_val_2052_, v___y_2054_);
return v___x_2058_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0___boxed(lean_object* v_mvarId_2059_, lean_object* v_val_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_){
_start:
{
lean_object* v_res_2066_; 
v_res_2066_ = l_Lean_MVarId_assign___at___00Lean_MVarId_applyRflAndAndIntro_spec__0(v_mvarId_2059_, v_val_2060_, v___y_2061_, v___y_2062_, v___y_2063_, v___y_2064_);
lean_dec(v___y_2064_);
lean_dec_ref(v___y_2063_);
lean_dec(v___y_2062_);
lean_dec_ref(v___y_2061_);
return v_res_2066_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg(lean_object* v_goal_2067_, lean_object* v_k_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_){
_start:
{
lean_object* v___x_2074_; uint8_t v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
v___x_2074_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__2);
v___x_2075_ = 0;
v___x_2076_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3);
v___x_2077_ = l_Lean_Meta_mkFreshExprMVar(v___x_2074_, v___x_2075_, v___x_2076_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_);
if (lean_obj_tag(v___x_2077_) == 0)
{
lean_object* v_a_2078_; lean_object* v_u_2079_; lean_object* v_00_u03c3s_2080_; lean_object* v_hyps_2081_; lean_object* v_target_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; 
v_a_2078_ = lean_ctor_get(v___x_2077_, 0);
lean_inc_n(v_a_2078_, 2);
lean_dec_ref_known(v___x_2077_, 1);
v_u_2079_ = lean_ctor_get(v_goal_2067_, 0);
lean_inc(v_u_2079_);
v_00_u03c3s_2080_ = lean_ctor_get(v_goal_2067_, 1);
lean_inc_ref_n(v_00_u03c3s_2080_, 2);
v_hyps_2081_ = lean_ctor_get(v_goal_2067_, 2);
lean_inc_ref(v_hyps_2081_);
v_target_2082_ = lean_ctor_get(v_goal_2067_, 3);
lean_inc_ref_n(v_target_2082_, 2);
lean_dec_ref(v_goal_2067_);
v___x_2083_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__9___closed__5));
v___x_2084_ = lean_box(0);
v___x_2085_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2085_, 0, v_u_2079_);
lean_ctor_set(v___x_2085_, 1, v___x_2084_);
lean_inc_ref(v___x_2085_);
v___x_2086_ = l_Lean_mkConst(v___x_2083_, v___x_2085_);
v___x_2087_ = l_Lean_mkApp3(v___x_2086_, v_00_u03c3s_2080_, v_target_2082_, v_a_2078_);
v___x_2088_ = lean_box(0);
v___x_2089_ = l_Lean_Meta_synthInstance(v___x_2087_, v___x_2088_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_);
if (lean_obj_tag(v___x_2089_) == 0)
{
lean_object* v_a_2090_; lean_object* v___x_2091_; 
v_a_2090_ = lean_ctor_get(v___x_2089_, 0);
lean_inc(v_a_2090_);
lean_dec_ref_known(v___x_2089_, 1);
lean_inc(v___y_2072_);
lean_inc_ref(v___y_2071_);
lean_inc(v___y_2070_);
lean_inc_ref(v___y_2069_);
lean_inc(v_a_2078_);
v___x_2091_ = lean_apply_6(v_k_2068_, v_a_2078_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_, lean_box(0));
if (lean_obj_tag(v___x_2091_) == 0)
{
lean_object* v_a_2092_; 
v_a_2092_ = lean_ctor_get(v___x_2091_, 0);
lean_inc(v_a_2092_);
if (lean_obj_tag(v_a_2092_) == 0)
{
lean_dec(v_a_2090_);
lean_dec_ref_known(v___x_2085_, 2);
lean_dec_ref(v_target_2082_);
lean_dec_ref(v_hyps_2081_);
lean_dec_ref(v_00_u03c3s_2080_);
lean_dec(v_a_2078_);
return v___x_2091_;
}
else
{
lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2119_; 
v_isSharedCheck_2119_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2119_ == 0)
{
lean_object* v_unused_2120_; 
v_unused_2120_ = lean_ctor_get(v___x_2091_, 0);
lean_dec(v_unused_2120_);
v___x_2094_ = v___x_2091_;
v_isShared_2095_ = v_isSharedCheck_2119_;
goto v_resetjp_2093_;
}
else
{
lean_dec(v___x_2091_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2119_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
lean_object* v_val_2096_; lean_object* v___x_2098_; uint8_t v_isShared_2099_; uint8_t v_isSharedCheck_2118_; 
v_val_2096_ = lean_ctor_get(v_a_2092_, 0);
v_isSharedCheck_2118_ = !lean_is_exclusive(v_a_2092_);
if (v_isSharedCheck_2118_ == 0)
{
v___x_2098_ = v_a_2092_;
v_isShared_2099_ = v_isSharedCheck_2118_;
goto v_resetjp_2097_;
}
else
{
lean_inc(v_val_2096_);
lean_dec(v_a_2092_);
v___x_2098_ = lean_box(0);
v_isShared_2099_ = v_isSharedCheck_2118_;
goto v_resetjp_2097_;
}
v_resetjp_2097_:
{
lean_object* v_fst_2100_; lean_object* v_snd_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2117_; 
v_fst_2100_ = lean_ctor_get(v_val_2096_, 0);
v_snd_2101_ = lean_ctor_get(v_val_2096_, 1);
v_isSharedCheck_2117_ = !lean_is_exclusive(v_val_2096_);
if (v_isSharedCheck_2117_ == 0)
{
v___x_2103_ = v_val_2096_;
v_isShared_2104_ = v_isSharedCheck_2117_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_snd_2101_);
lean_inc(v_fst_2100_);
lean_dec(v_val_2096_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2117_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v_prf_2107_; lean_object* v___x_2109_; 
v___x_2105_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro_spec__0___redArg___closed__0));
v___x_2106_ = l_Lean_mkConst(v___x_2105_, v___x_2085_);
v_prf_2107_ = l_Lean_mkApp6(v___x_2106_, v_00_u03c3s_2080_, v_hyps_2081_, v_target_2082_, v_a_2078_, v_a_2090_, v_snd_2101_);
if (v_isShared_2104_ == 0)
{
lean_ctor_set(v___x_2103_, 1, v_prf_2107_);
v___x_2109_ = v___x_2103_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v_fst_2100_);
lean_ctor_set(v_reuseFailAlloc_2116_, 1, v_prf_2107_);
v___x_2109_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
lean_object* v___x_2111_; 
if (v_isShared_2099_ == 0)
{
lean_ctor_set(v___x_2098_, 0, v___x_2109_);
v___x_2111_ = v___x_2098_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v___x_2109_);
v___x_2111_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
lean_object* v___x_2113_; 
if (v_isShared_2095_ == 0)
{
lean_ctor_set(v___x_2094_, 0, v___x_2111_);
v___x_2113_ = v___x_2094_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v___x_2111_);
v___x_2113_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
return v___x_2113_;
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
lean_dec(v_a_2090_);
lean_dec_ref_known(v___x_2085_, 2);
lean_dec_ref(v_target_2082_);
lean_dec_ref(v_hyps_2081_);
lean_dec_ref(v_00_u03c3s_2080_);
lean_dec(v_a_2078_);
return v___x_2091_;
}
}
else
{
lean_object* v_a_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2128_; 
lean_dec_ref_known(v___x_2085_, 2);
lean_dec_ref(v_target_2082_);
lean_dec_ref(v_hyps_2081_);
lean_dec_ref(v_00_u03c3s_2080_);
lean_dec(v_a_2078_);
lean_dec_ref(v_k_2068_);
v_a_2121_ = lean_ctor_get(v___x_2089_, 0);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2089_);
if (v_isSharedCheck_2128_ == 0)
{
v___x_2123_ = v___x_2089_;
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_a_2121_);
lean_dec(v___x_2089_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2126_; 
if (v_isShared_2124_ == 0)
{
v___x_2126_ = v___x_2123_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v_a_2121_);
v___x_2126_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
return v___x_2126_;
}
}
}
}
else
{
lean_object* v_a_2129_; lean_object* v___x_2131_; uint8_t v_isShared_2132_; uint8_t v_isSharedCheck_2136_; 
lean_dec_ref(v_k_2068_);
lean_dec_ref(v_goal_2067_);
v_a_2129_ = lean_ctor_get(v___x_2077_, 0);
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2077_);
if (v_isSharedCheck_2136_ == 0)
{
v___x_2131_ = v___x_2077_;
v_isShared_2132_ = v_isSharedCheck_2136_;
goto v_resetjp_2130_;
}
else
{
lean_inc(v_a_2129_);
lean_dec(v___x_2077_);
v___x_2131_ = lean_box(0);
v_isShared_2132_ = v_isSharedCheck_2136_;
goto v_resetjp_2130_;
}
v_resetjp_2130_:
{
lean_object* v___x_2134_; 
if (v_isShared_2132_ == 0)
{
v___x_2134_ = v___x_2131_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v_a_2129_);
v___x_2134_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
return v___x_2134_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg___boxed(lean_object* v_goal_2137_, lean_object* v_k_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_){
_start:
{
lean_object* v_res_2144_; 
v_res_2144_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg(v_goal_2137_, v_k_2138_, v___y_2139_, v___y_2140_, v___y_2141_, v___y_2142_);
lean_dec(v___y_2142_);
lean_dec_ref(v___y_2141_);
lean_dec(v___y_2140_);
lean_dec_ref(v___y_2139_);
return v_res_2144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1(lean_object* v_00_u03b1_2145_, lean_object* v_goal_2146_, lean_object* v_k_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_){
_start:
{
lean_object* v___x_2153_; 
v___x_2153_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg(v_goal_2146_, v_k_2147_, v___y_2148_, v___y_2149_, v___y_2150_, v___y_2151_);
return v___x_2153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___boxed(lean_object* v_00_u03b1_2154_, lean_object* v_goal_2155_, lean_object* v_k_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_){
_start:
{
lean_object* v_res_2162_; 
v_res_2162_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1(v_00_u03b1_2154_, v_goal_2155_, v_k_2156_, v___y_2157_, v___y_2158_, v___y_2159_, v___y_2160_);
lean_dec(v___y_2160_);
lean_dec_ref(v___y_2159_);
lean_dec(v___y_2158_);
lean_dec_ref(v___y_2157_);
return v_res_2162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0(lean_object* v_cls_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_){
_start:
{
lean_object* v_toCold_2169_; lean_object* v_options_2170_; uint8_t v_hasTrace_2171_; 
v_toCold_2169_ = lean_ctor_get(v___y_2166_, 0);
v_options_2170_ = lean_ctor_get(v_toCold_2169_, 2);
v_hasTrace_2171_ = lean_ctor_get_uint8(v_options_2170_, sizeof(void*)*1);
if (v_hasTrace_2171_ == 0)
{
lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
lean_dec(v_cls_2163_);
v___x_2172_ = lean_box(v_hasTrace_2171_);
v___x_2173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2173_, 0, v___x_2172_);
v___x_2174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2174_, 0, v___x_2173_);
return v___x_2174_;
}
else
{
lean_object* v_inheritedTraceOptions_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; uint8_t v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; 
v_inheritedTraceOptions_2175_ = lean_ctor_get(v_toCold_2169_, 11);
v___x_2176_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__11));
v___x_2177_ = l_Lean_Name_append(v___x_2176_, v_cls_2163_);
v___x_2178_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2175_, v_options_2170_, v___x_2177_);
lean_dec(v___x_2177_);
v___x_2179_ = lean_box(v___x_2178_);
v___x_2180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2180_, 0, v___x_2179_);
v___x_2181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2181_, 0, v___x_2180_);
return v___x_2181_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0___boxed(lean_object* v_cls_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_){
_start:
{
lean_object* v_res_2188_; 
v_res_2188_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0(v_cls_2182_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_);
lean_dec(v___y_2186_);
lean_dec_ref(v___y_2185_);
lean_dec(v___y_2184_);
lean_dec_ref(v___y_2183_);
return v_res_2188_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(lean_object* v_cls_2191_, lean_object* v_msg_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_){
_start:
{
lean_object* v_ref_2198_; lean_object* v___x_2199_; lean_object* v_a_2200_; lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2244_; 
v_ref_2198_ = lean_ctor_get(v___y_2195_, 2);
v___x_2199_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1_spec__1(v_msg_2192_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_);
v_a_2200_ = lean_ctor_get(v___x_2199_, 0);
v_isSharedCheck_2244_ = !lean_is_exclusive(v___x_2199_);
if (v_isSharedCheck_2244_ == 0)
{
v___x_2202_ = v___x_2199_;
v_isShared_2203_ = v_isSharedCheck_2244_;
goto v_resetjp_2201_;
}
else
{
lean_inc(v_a_2200_);
lean_dec(v___x_2199_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2244_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
lean_object* v___x_2204_; lean_object* v_traceState_2205_; lean_object* v_env_2206_; lean_object* v_nextMacroScope_2207_; lean_object* v_ngen_2208_; lean_object* v_auxDeclNGen_2209_; lean_object* v_cache_2210_; lean_object* v_messages_2211_; lean_object* v_infoState_2212_; lean_object* v_snapshotTasks_2213_; lean_object* v___x_2215_; uint8_t v_isShared_2216_; uint8_t v_isSharedCheck_2243_; 
v___x_2204_ = lean_st_ref_take(v___y_2196_);
v_traceState_2205_ = lean_ctor_get(v___x_2204_, 4);
v_env_2206_ = lean_ctor_get(v___x_2204_, 0);
v_nextMacroScope_2207_ = lean_ctor_get(v___x_2204_, 1);
v_ngen_2208_ = lean_ctor_get(v___x_2204_, 2);
v_auxDeclNGen_2209_ = lean_ctor_get(v___x_2204_, 3);
v_cache_2210_ = lean_ctor_get(v___x_2204_, 5);
v_messages_2211_ = lean_ctor_get(v___x_2204_, 6);
v_infoState_2212_ = lean_ctor_get(v___x_2204_, 7);
v_snapshotTasks_2213_ = lean_ctor_get(v___x_2204_, 8);
v_isSharedCheck_2243_ = !lean_is_exclusive(v___x_2204_);
if (v_isSharedCheck_2243_ == 0)
{
v___x_2215_ = v___x_2204_;
v_isShared_2216_ = v_isSharedCheck_2243_;
goto v_resetjp_2214_;
}
else
{
lean_inc(v_snapshotTasks_2213_);
lean_inc(v_infoState_2212_);
lean_inc(v_messages_2211_);
lean_inc(v_cache_2210_);
lean_inc(v_traceState_2205_);
lean_inc(v_auxDeclNGen_2209_);
lean_inc(v_ngen_2208_);
lean_inc(v_nextMacroScope_2207_);
lean_inc(v_env_2206_);
lean_dec(v___x_2204_);
v___x_2215_ = lean_box(0);
v_isShared_2216_ = v_isSharedCheck_2243_;
goto v_resetjp_2214_;
}
v_resetjp_2214_:
{
uint64_t v_tid_2217_; lean_object* v_traces_2218_; lean_object* v___x_2220_; uint8_t v_isShared_2221_; uint8_t v_isSharedCheck_2242_; 
v_tid_2217_ = lean_ctor_get_uint64(v_traceState_2205_, sizeof(void*)*1);
v_traces_2218_ = lean_ctor_get(v_traceState_2205_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v_traceState_2205_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2220_ = v_traceState_2205_;
v_isShared_2221_ = v_isSharedCheck_2242_;
goto v_resetjp_2219_;
}
else
{
lean_inc(v_traces_2218_);
lean_dec(v_traceState_2205_);
v___x_2220_ = lean_box(0);
v_isShared_2221_ = v_isSharedCheck_2242_;
goto v_resetjp_2219_;
}
v_resetjp_2219_:
{
lean_object* v___x_2222_; double v___x_2223_; uint8_t v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2232_; 
v___x_2222_ = lean_box(0);
v___x_2223_ = lean_float_once(&l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0, &l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__0);
v___x_2224_ = 0;
v___x_2225_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__1));
v___x_2226_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2226_, 0, v_cls_2191_);
lean_ctor_set(v___x_2226_, 1, v___x_2222_);
lean_ctor_set(v___x_2226_, 2, v___x_2225_);
lean_ctor_set_float(v___x_2226_, sizeof(void*)*3, v___x_2223_);
lean_ctor_set_float(v___x_2226_, sizeof(void*)*3 + 8, v___x_2223_);
lean_ctor_set_uint8(v___x_2226_, sizeof(void*)*3 + 16, v___x_2224_);
v___x_2227_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_MVarId_applyRflAndAndIntro_spec__1___closed__2));
v___x_2228_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2228_, 0, v___x_2226_);
lean_ctor_set(v___x_2228_, 1, v_a_2200_);
lean_ctor_set(v___x_2228_, 2, v___x_2227_);
lean_inc(v_ref_2198_);
v___x_2229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2229_, 0, v_ref_2198_);
lean_ctor_set(v___x_2229_, 1, v___x_2228_);
v___x_2230_ = l_Lean_PersistentArray_push___redArg(v_traces_2218_, v___x_2229_);
if (v_isShared_2221_ == 0)
{
lean_ctor_set(v___x_2220_, 0, v___x_2230_);
v___x_2232_ = v___x_2220_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v___x_2230_);
lean_ctor_set_uint64(v_reuseFailAlloc_2241_, sizeof(void*)*1, v_tid_2217_);
v___x_2232_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
lean_object* v___x_2234_; 
if (v_isShared_2216_ == 0)
{
lean_ctor_set(v___x_2215_, 4, v___x_2232_);
v___x_2234_ = v___x_2215_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v_env_2206_);
lean_ctor_set(v_reuseFailAlloc_2240_, 1, v_nextMacroScope_2207_);
lean_ctor_set(v_reuseFailAlloc_2240_, 2, v_ngen_2208_);
lean_ctor_set(v_reuseFailAlloc_2240_, 3, v_auxDeclNGen_2209_);
lean_ctor_set(v_reuseFailAlloc_2240_, 4, v___x_2232_);
lean_ctor_set(v_reuseFailAlloc_2240_, 5, v_cache_2210_);
lean_ctor_set(v_reuseFailAlloc_2240_, 6, v_messages_2211_);
lean_ctor_set(v_reuseFailAlloc_2240_, 7, v_infoState_2212_);
lean_ctor_set(v_reuseFailAlloc_2240_, 8, v_snapshotTasks_2213_);
v___x_2234_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2238_; 
v___x_2235_ = lean_st_ref_put(v___y_2196_, v___x_2234_);
v___x_2236_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___closed__0));
if (v_isShared_2203_ == 0)
{
lean_ctor_set(v___x_2202_, 0, v___x_2236_);
v___x_2238_ = v___x_2202_;
goto v_reusejp_2237_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2239_, 0, v___x_2236_);
v___x_2238_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2237_;
}
v_reusejp_2237_:
{
return v___x_2238_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0___boxed(lean_object* v_cls_2245_, lean_object* v_msg_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_){
_start:
{
lean_object* v_res_2252_; 
v_res_2252_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(v_cls_2245_, v_msg_2246_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_);
lean_dec(v___y_2250_);
lean_dec_ref(v___y_2249_);
lean_dec(v___y_2248_);
lean_dec_ref(v___y_2247_);
return v_res_2252_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2254_; lean_object* v___x_2255_; 
v___x_2254_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__0));
v___x_2255_ = l_Lean_stringToMessageData(v___x_2254_);
return v___x_2255_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2257_; lean_object* v___x_2258_; 
v___x_2257_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__2));
v___x_2258_ = l_Lean_stringToMessageData(v___x_2257_);
return v___x_2258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1(lean_object* v_cls_2259_, lean_object* v___f_2260_, lean_object* v_00_u03c6_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_){
_start:
{
lean_object* v___y_2268_; lean_object* v___x_2316_; 
lean_inc(v___y_2265_);
lean_inc_ref(v___y_2264_);
lean_inc(v___y_2263_);
lean_inc_ref(v___y_2262_);
v___x_2316_ = lean_apply_5(v___f_2260_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_, lean_box(0));
if (lean_obj_tag(v___x_2316_) == 0)
{
lean_object* v_a_2317_; lean_object* v___x_2319_; uint8_t v_isShared_2320_; uint8_t v_isSharedCheck_2339_; 
v_a_2317_ = lean_ctor_get(v___x_2316_, 0);
v_isSharedCheck_2339_ = !lean_is_exclusive(v___x_2316_);
if (v_isSharedCheck_2339_ == 0)
{
v___x_2319_ = v___x_2316_;
v_isShared_2320_ = v_isSharedCheck_2339_;
goto v_resetjp_2318_;
}
else
{
lean_inc(v_a_2317_);
lean_dec(v___x_2316_);
v___x_2319_ = lean_box(0);
v_isShared_2320_ = v_isSharedCheck_2339_;
goto v_resetjp_2318_;
}
v_resetjp_2318_:
{
if (lean_obj_tag(v_a_2317_) == 0)
{
lean_object* v___x_2321_; lean_object* v___x_2323_; 
lean_dec_ref(v_00_u03c6_2261_);
lean_dec(v_cls_2259_);
v___x_2321_ = lean_box(0);
if (v_isShared_2320_ == 0)
{
lean_ctor_set(v___x_2319_, 0, v___x_2321_);
v___x_2323_ = v___x_2319_;
goto v_reusejp_2322_;
}
else
{
lean_object* v_reuseFailAlloc_2324_; 
v_reuseFailAlloc_2324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2324_, 0, v___x_2321_);
v___x_2323_ = v_reuseFailAlloc_2324_;
goto v_reusejp_2322_;
}
v_reusejp_2322_:
{
return v___x_2323_;
}
}
else
{
lean_object* v_val_2325_; uint8_t v___x_2326_; 
lean_del_object(v___x_2319_);
v_val_2325_ = lean_ctor_get(v_a_2317_, 0);
lean_inc(v_val_2325_);
lean_dec_ref_known(v_a_2317_, 1);
v___x_2326_ = lean_unbox(v_val_2325_);
lean_dec(v_val_2325_);
if (v___x_2326_ == 0)
{
goto v___jp_2273_;
}
else
{
lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; 
v___x_2327_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__3);
lean_inc_ref(v_00_u03c6_2261_);
v___x_2328_ = l_Lean_MessageData_ofExpr(v_00_u03c6_2261_);
v___x_2329_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2329_, 0, v___x_2327_);
lean_ctor_set(v___x_2329_, 1, v___x_2328_);
lean_inc(v_cls_2259_);
v___x_2330_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(v_cls_2259_, v___x_2329_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_);
if (lean_obj_tag(v___x_2330_) == 0)
{
lean_dec_ref_known(v___x_2330_, 1);
goto v___jp_2273_;
}
else
{
lean_object* v_a_2331_; lean_object* v___x_2333_; uint8_t v_isShared_2334_; uint8_t v_isSharedCheck_2338_; 
lean_dec_ref(v_00_u03c6_2261_);
lean_dec(v_cls_2259_);
v_a_2331_ = lean_ctor_get(v___x_2330_, 0);
v_isSharedCheck_2338_ = !lean_is_exclusive(v___x_2330_);
if (v_isSharedCheck_2338_ == 0)
{
v___x_2333_ = v___x_2330_;
v_isShared_2334_ = v_isSharedCheck_2338_;
goto v_resetjp_2332_;
}
else
{
lean_inc(v_a_2331_);
lean_dec(v___x_2330_);
v___x_2333_ = lean_box(0);
v_isShared_2334_ = v_isSharedCheck_2338_;
goto v_resetjp_2332_;
}
v_resetjp_2332_:
{
lean_object* v___x_2336_; 
if (v_isShared_2334_ == 0)
{
v___x_2336_ = v___x_2333_;
goto v_reusejp_2335_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v_a_2331_);
v___x_2336_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2335_;
}
v_reusejp_2335_:
{
return v___x_2336_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2340_; lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2347_; 
lean_dec_ref(v_00_u03c6_2261_);
lean_dec(v_cls_2259_);
v_a_2340_ = lean_ctor_get(v___x_2316_, 0);
v_isSharedCheck_2347_ = !lean_is_exclusive(v___x_2316_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2342_ = v___x_2316_;
v_isShared_2343_ = v_isSharedCheck_2347_;
goto v_resetjp_2341_;
}
else
{
lean_inc(v_a_2340_);
lean_dec(v___x_2316_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2347_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
lean_object* v___x_2345_; 
if (v_isShared_2343_ == 0)
{
v___x_2345_ = v___x_2342_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v_a_2340_);
v___x_2345_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2344_;
}
v_reusejp_2344_:
{
return v___x_2345_;
}
}
}
v___jp_2267_:
{
lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; 
v___x_2269_ = lean_box(0);
v___x_2270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2270_, 0, v___x_2269_);
lean_ctor_set(v___x_2270_, 1, v___y_2268_);
v___x_2271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2271_, 0, v___x_2270_);
v___x_2272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2272_, 0, v___x_2271_);
return v___x_2272_;
}
v___jp_2273_:
{
lean_object* v___x_2274_; uint8_t v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; 
lean_inc_ref(v_00_u03c6_2261_);
v___x_2274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2274_, 0, v_00_u03c6_2261_);
v___x_2275_ = 0;
v___x_2276_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3);
v___x_2277_ = l_Lean_Meta_mkFreshExprMVar(v___x_2274_, v___x_2275_, v___x_2276_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_);
if (lean_obj_tag(v___x_2277_) == 0)
{
lean_object* v_a_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; 
v_a_2278_ = lean_ctor_get(v___x_2277_, 0);
lean_inc(v_a_2278_);
lean_dec_ref_known(v___x_2277_, 1);
v___x_2279_ = l_Lean_Expr_mvarId_x21(v_a_2278_);
v___x_2280_ = l_Lean_MVarId_applyRflAndAndIntro(v___x_2279_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_);
if (lean_obj_tag(v___x_2280_) == 0)
{
lean_object* v_toCold_2281_; lean_object* v_options_2282_; uint8_t v_hasTrace_2283_; 
lean_dec_ref_known(v___x_2280_, 1);
v_toCold_2281_ = lean_ctor_get(v___y_2264_, 0);
v_options_2282_ = lean_ctor_get(v_toCold_2281_, 2);
v_hasTrace_2283_ = lean_ctor_get_uint8(v_options_2282_, sizeof(void*)*1);
if (v_hasTrace_2283_ == 0)
{
lean_dec_ref(v_00_u03c6_2261_);
lean_dec(v_cls_2259_);
v___y_2268_ = v_a_2278_;
goto v___jp_2267_;
}
else
{
lean_object* v_inheritedTraceOptions_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; uint8_t v___x_2287_; 
v_inheritedTraceOptions_2284_ = lean_ctor_get(v_toCold_2281_, 11);
v___x_2285_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__11));
lean_inc(v_cls_2259_);
v___x_2286_ = l_Lean_Name_append(v___x_2285_, v_cls_2259_);
v___x_2287_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2284_, v_options_2282_, v___x_2286_);
lean_dec(v___x_2286_);
if (v___x_2287_ == 0)
{
lean_dec_ref(v_00_u03c6_2261_);
lean_dec(v_cls_2259_);
v___y_2268_ = v_a_2278_;
goto v___jp_2267_;
}
else
{
lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; 
v___x_2288_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___closed__1);
v___x_2289_ = l_Lean_MessageData_ofExpr(v_00_u03c6_2261_);
v___x_2290_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2290_, 0, v___x_2288_);
lean_ctor_set(v___x_2290_, 1, v___x_2289_);
v___x_2291_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(v_cls_2259_, v___x_2290_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_);
if (lean_obj_tag(v___x_2291_) == 0)
{
lean_dec_ref_known(v___x_2291_, 1);
v___y_2268_ = v_a_2278_;
goto v___jp_2267_;
}
else
{
lean_object* v_a_2292_; lean_object* v___x_2294_; uint8_t v_isShared_2295_; uint8_t v_isSharedCheck_2299_; 
lean_dec(v_a_2278_);
v_a_2292_ = lean_ctor_get(v___x_2291_, 0);
v_isSharedCheck_2299_ = !lean_is_exclusive(v___x_2291_);
if (v_isSharedCheck_2299_ == 0)
{
v___x_2294_ = v___x_2291_;
v_isShared_2295_ = v_isSharedCheck_2299_;
goto v_resetjp_2293_;
}
else
{
lean_inc(v_a_2292_);
lean_dec(v___x_2291_);
v___x_2294_ = lean_box(0);
v_isShared_2295_ = v_isSharedCheck_2299_;
goto v_resetjp_2293_;
}
v_resetjp_2293_:
{
lean_object* v___x_2297_; 
if (v_isShared_2295_ == 0)
{
v___x_2297_ = v___x_2294_;
goto v_reusejp_2296_;
}
else
{
lean_object* v_reuseFailAlloc_2298_; 
v_reuseFailAlloc_2298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2298_, 0, v_a_2292_);
v___x_2297_ = v_reuseFailAlloc_2298_;
goto v_reusejp_2296_;
}
v_reusejp_2296_:
{
return v___x_2297_;
}
}
}
}
}
}
else
{
lean_object* v_a_2300_; lean_object* v___x_2302_; uint8_t v_isShared_2303_; uint8_t v_isSharedCheck_2307_; 
lean_dec(v_a_2278_);
lean_dec_ref(v_00_u03c6_2261_);
lean_dec(v_cls_2259_);
v_a_2300_ = lean_ctor_get(v___x_2280_, 0);
v_isSharedCheck_2307_ = !lean_is_exclusive(v___x_2280_);
if (v_isSharedCheck_2307_ == 0)
{
v___x_2302_ = v___x_2280_;
v_isShared_2303_ = v_isSharedCheck_2307_;
goto v_resetjp_2301_;
}
else
{
lean_inc(v_a_2300_);
lean_dec(v___x_2280_);
v___x_2302_ = lean_box(0);
v_isShared_2303_ = v_isSharedCheck_2307_;
goto v_resetjp_2301_;
}
v_resetjp_2301_:
{
lean_object* v___x_2305_; 
if (v_isShared_2303_ == 0)
{
v___x_2305_ = v___x_2302_;
goto v_reusejp_2304_;
}
else
{
lean_object* v_reuseFailAlloc_2306_; 
v_reuseFailAlloc_2306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2306_, 0, v_a_2300_);
v___x_2305_ = v_reuseFailAlloc_2306_;
goto v_reusejp_2304_;
}
v_reusejp_2304_:
{
return v___x_2305_;
}
}
}
}
else
{
lean_object* v_a_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2315_; 
lean_dec_ref(v_00_u03c6_2261_);
lean_dec(v_cls_2259_);
v_a_2308_ = lean_ctor_get(v___x_2277_, 0);
v_isSharedCheck_2315_ = !lean_is_exclusive(v___x_2277_);
if (v_isSharedCheck_2315_ == 0)
{
v___x_2310_ = v___x_2277_;
v_isShared_2311_ = v_isSharedCheck_2315_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_a_2308_);
lean_dec(v___x_2277_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2315_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
lean_object* v___x_2313_; 
if (v_isShared_2311_ == 0)
{
v___x_2313_ = v___x_2310_;
goto v_reusejp_2312_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v_a_2308_);
v___x_2313_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2312_;
}
v_reusejp_2312_:
{
return v___x_2313_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1___boxed(lean_object* v_cls_2348_, lean_object* v___f_2349_, lean_object* v_00_u03c6_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_){
_start:
{
lean_object* v_res_2356_; 
v_res_2356_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__1(v_cls_2348_, v___f_2349_, v_00_u03c6_2350_, v___y_2351_, v___y_2352_, v___y_2353_, v___y_2354_);
lean_dec(v___y_2354_);
lean_dec_ref(v___y_2353_);
lean_dec(v___y_2352_);
lean_dec_ref(v___y_2351_);
return v_res_2356_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__3(void){
_start:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; 
v___x_2363_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__2));
v___x_2364_ = l_Lean_stringToMessageData(v___x_2363_);
return v___x_2364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro(lean_object* v_goal_2365_, lean_object* v_a_2366_, lean_object* v_a_2367_, lean_object* v_a_2368_, lean_object* v_a_2369_){
_start:
{
lean_object* v___y_2375_; uint8_t v___y_2376_; lean_object* v_cls_2378_; lean_object* v___f_2379_; lean_object* v___y_2381_; lean_object* v___y_2382_; lean_object* v___y_2383_; lean_object* v___y_2384_; lean_object* v___x_2406_; lean_object* v_a_2407_; lean_object* v_val_2408_; uint8_t v___x_2409_; 
v_cls_2378_ = ((lean_object*)(l_Lean_MVarId_applyRflAndAndIntro___closed__9));
v___f_2379_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__1));
v___x_2406_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___lam__0(v_cls_2378_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_);
v_a_2407_ = lean_ctor_get(v___x_2406_, 0);
lean_inc(v_a_2407_);
lean_dec_ref(v___x_2406_);
v_val_2408_ = lean_ctor_get(v_a_2407_, 0);
lean_inc(v_val_2408_);
lean_dec(v_a_2407_);
v___x_2409_ = lean_unbox(v_val_2408_);
lean_dec(v_val_2408_);
if (v___x_2409_ == 0)
{
v___y_2381_ = v_a_2366_;
v___y_2382_ = v_a_2367_;
v___y_2383_ = v_a_2368_;
v___y_2384_ = v_a_2369_;
goto v___jp_2380_;
}
else
{
lean_object* v_target_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; 
v_target_2410_ = lean_ctor_get(v_goal_2365_, 3);
v___x_2411_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___closed__3);
lean_inc_ref(v_target_2410_);
v___x_2412_ = l_Lean_MessageData_ofExpr(v_target_2410_);
v___x_2413_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2413_, 0, v___x_2411_);
lean_ctor_set(v___x_2413_, 1, v___x_2412_);
v___x_2414_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__0(v_cls_2378_, v___x_2413_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_);
if (lean_obj_tag(v___x_2414_) == 0)
{
lean_dec_ref_known(v___x_2414_, 1);
v___y_2381_ = v_a_2366_;
v___y_2382_ = v_a_2367_;
v___y_2383_ = v_a_2368_;
v___y_2384_ = v_a_2369_;
goto v___jp_2380_;
}
else
{
lean_object* v_a_2415_; lean_object* v___x_2417_; uint8_t v_isShared_2418_; uint8_t v_isSharedCheck_2422_; 
lean_dec_ref(v_goal_2365_);
v_a_2415_ = lean_ctor_get(v___x_2414_, 0);
v_isSharedCheck_2422_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2417_ = v___x_2414_;
v_isShared_2418_ = v_isSharedCheck_2422_;
goto v_resetjp_2416_;
}
else
{
lean_inc(v_a_2415_);
lean_dec(v___x_2414_);
v___x_2417_ = lean_box(0);
v_isShared_2418_ = v_isSharedCheck_2422_;
goto v_resetjp_2416_;
}
v_resetjp_2416_:
{
lean_object* v___x_2420_; 
if (v_isShared_2418_ == 0)
{
v___x_2420_ = v___x_2417_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v_a_2415_);
v___x_2420_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
return v___x_2420_;
}
}
}
}
v___jp_2371_:
{
lean_object* v___x_2372_; lean_object* v___x_2373_; 
v___x_2372_ = lean_box(0);
v___x_2373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2373_, 0, v___x_2372_);
return v___x_2373_;
}
v___jp_2374_:
{
if (v___y_2376_ == 0)
{
lean_dec_ref(v___y_2375_);
goto v___jp_2371_;
}
else
{
lean_object* v___x_2377_; 
v___x_2377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2377_, 0, v___y_2375_);
return v___x_2377_;
}
}
v___jp_2380_:
{
lean_object* v___x_2385_; 
v___x_2385_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg(v_goal_2365_, v___f_2379_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_);
if (lean_obj_tag(v___x_2385_) == 0)
{
lean_object* v_a_2386_; lean_object* v___x_2388_; uint8_t v_isShared_2389_; uint8_t v_isSharedCheck_2402_; 
v_a_2386_ = lean_ctor_get(v___x_2385_, 0);
v_isSharedCheck_2402_ = !lean_is_exclusive(v___x_2385_);
if (v_isSharedCheck_2402_ == 0)
{
v___x_2388_ = v___x_2385_;
v_isShared_2389_ = v_isSharedCheck_2402_;
goto v_resetjp_2387_;
}
else
{
lean_inc(v_a_2386_);
lean_dec(v___x_2385_);
v___x_2388_ = lean_box(0);
v_isShared_2389_ = v_isSharedCheck_2402_;
goto v_resetjp_2387_;
}
v_resetjp_2387_:
{
if (lean_obj_tag(v_a_2386_) == 0)
{
lean_del_object(v___x_2388_);
goto v___jp_2371_;
}
else
{
lean_object* v_val_2390_; lean_object* v___x_2392_; uint8_t v_isShared_2393_; uint8_t v_isSharedCheck_2401_; 
v_val_2390_ = lean_ctor_get(v_a_2386_, 0);
v_isSharedCheck_2401_ = !lean_is_exclusive(v_a_2386_);
if (v_isSharedCheck_2401_ == 0)
{
v___x_2392_ = v_a_2386_;
v_isShared_2393_ = v_isSharedCheck_2401_;
goto v_resetjp_2391_;
}
else
{
lean_inc(v_val_2390_);
lean_dec(v_a_2386_);
v___x_2392_ = lean_box(0);
v_isShared_2393_ = v_isSharedCheck_2401_;
goto v_resetjp_2391_;
}
v_resetjp_2391_:
{
lean_object* v_snd_2394_; lean_object* v___x_2396_; 
v_snd_2394_ = lean_ctor_get(v_val_2390_, 1);
lean_inc(v_snd_2394_);
lean_dec(v_val_2390_);
if (v_isShared_2393_ == 0)
{
lean_ctor_set(v___x_2392_, 0, v_snd_2394_);
v___x_2396_ = v___x_2392_;
goto v_reusejp_2395_;
}
else
{
lean_object* v_reuseFailAlloc_2400_; 
v_reuseFailAlloc_2400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2400_, 0, v_snd_2394_);
v___x_2396_ = v_reuseFailAlloc_2400_;
goto v_reusejp_2395_;
}
v_reusejp_2395_:
{
lean_object* v___x_2398_; 
if (v_isShared_2389_ == 0)
{
lean_ctor_set(v___x_2388_, 0, v___x_2396_);
v___x_2398_ = v___x_2388_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v___x_2396_);
v___x_2398_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
return v___x_2398_;
}
}
}
}
}
}
else
{
lean_object* v_a_2403_; uint8_t v___x_2404_; 
v_a_2403_ = lean_ctor_get(v___x_2385_, 0);
lean_inc(v_a_2403_);
lean_dec_ref_known(v___x_2385_, 1);
v___x_2404_ = l_Lean_Exception_isInterrupt(v_a_2403_);
if (v___x_2404_ == 0)
{
uint8_t v___x_2405_; 
lean_inc(v_a_2403_);
v___x_2405_ = l_Lean_Exception_isRuntime(v_a_2403_);
v___y_2375_ = v_a_2403_;
v___y_2376_ = v___x_2405_;
goto v___jp_2374_;
}
else
{
v___y_2375_ = v_a_2403_;
v___y_2376_ = v___x_2404_;
goto v___jp_2374_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro___boxed(lean_object* v_goal_2423_, lean_object* v_a_2424_, lean_object* v_a_2425_, lean_object* v_a_2426_, lean_object* v_a_2427_, lean_object* v_a_2428_){
_start:
{
lean_object* v_res_2429_; 
v_res_2429_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro(v_goal_2423_, v_a_2424_, v_a_2425_, v_a_2426_, v_a_2427_);
lean_dec(v_a_2427_);
lean_dec_ref(v_a_2426_);
lean_dec(v_a_2425_);
lean_dec_ref(v_a_2424_);
return v_res_2429_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__0(uint8_t v___y_2430_, lean_object* v_x_2431_){
_start:
{
return v___y_2430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__0___boxed(lean_object* v___y_2432_, lean_object* v_x_2433_){
_start:
{
uint8_t v___y_9297__boxed_2434_; uint8_t v_res_2435_; lean_object* v_r_2436_; 
v___y_9297__boxed_2434_ = lean_unbox(v___y_2432_);
v_res_2435_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__0(v___y_9297__boxed_2434_, v_x_2433_);
lean_dec(v_x_2433_);
v_r_2436_ = lean_box(v_res_2435_);
return v_r_2436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1(lean_object* v_00_u03c6_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_){
_start:
{
lean_object* v___x_2455_; uint8_t v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; 
v___x_2455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2455_, 0, v_00_u03c6_2449_);
v___x_2456_ = 0;
v___x_2457_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mPureCore___redArg___lam__10___closed__3);
v___x_2458_ = l_Lean_Meta_mkFreshExprMVar(v___x_2455_, v___x_2456_, v___x_2457_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_);
if (lean_obj_tag(v___x_2458_) == 0)
{
lean_object* v_a_2459_; lean_object* v___x_2461_; uint8_t v_isShared_2462_; uint8_t v_isSharedCheck_2517_; 
v_a_2459_ = lean_ctor_get(v___x_2458_, 0);
v_isSharedCheck_2517_ = !lean_is_exclusive(v___x_2458_);
if (v_isSharedCheck_2517_ == 0)
{
v___x_2461_ = v___x_2458_;
v_isShared_2462_ = v_isSharedCheck_2517_;
goto v_resetjp_2460_;
}
else
{
lean_inc(v_a_2459_);
lean_dec(v___x_2458_);
v___x_2461_ = lean_box(0);
v_isShared_2462_ = v_isSharedCheck_2517_;
goto v_resetjp_2460_;
}
v_resetjp_2460_:
{
lean_object* v___x_2470_; lean_object* v___x_2471_; 
v___x_2470_ = l_Lean_Expr_mvarId_x21(v_a_2459_);
lean_inc(v___x_2470_);
v___x_2471_ = l_Lean_MVarId_applyRflAndAndIntro(v___x_2470_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_);
if (lean_obj_tag(v___x_2471_) == 0)
{
lean_dec_ref_known(v___x_2471_, 1);
lean_dec(v___x_2470_);
goto v___jp_2463_;
}
else
{
lean_object* v_a_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2516_; 
v_a_2472_ = lean_ctor_get(v___x_2471_, 0);
v_isSharedCheck_2516_ = !lean_is_exclusive(v___x_2471_);
if (v_isSharedCheck_2516_ == 0)
{
v___x_2474_ = v___x_2471_;
v_isShared_2475_ = v_isSharedCheck_2516_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_a_2472_);
lean_dec(v___x_2471_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2516_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
uint8_t v___y_2477_; uint8_t v___x_2514_; 
v___x_2514_ = l_Lean_Exception_isInterrupt(v_a_2472_);
if (v___x_2514_ == 0)
{
uint8_t v___x_2515_; 
lean_inc(v_a_2472_);
v___x_2515_ = l_Lean_Exception_isRuntime(v_a_2472_);
v___y_2477_ = v___x_2515_;
goto v___jp_2476_;
}
else
{
v___y_2477_ = v___x_2514_;
goto v___jp_2476_;
}
v___jp_2476_:
{
if (v___y_2477_ == 0)
{
lean_object* v_ref_2478_; lean_object* v___x_2479_; lean_object* v___f_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; uint8_t v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; 
lean_del_object(v___x_2474_);
lean_dec(v_a_2472_);
v_ref_2478_ = lean_ctor_get(v___y_2452_, 2);
v___x_2479_ = lean_box(v___y_2477_);
v___f_2480_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2480_, 0, v___x_2479_);
v___x_2481_ = l_Lean_SourceInfo_fromRef(v_ref_2478_, v___y_2477_);
v___x_2482_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__1));
v___x_2483_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__2));
lean_inc(v___x_2481_);
v___x_2484_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2484_, 0, v___x_2481_);
lean_ctor_set(v___x_2484_, 1, v___x_2483_);
v___x_2485_ = l_Lean_Syntax_node1(v___x_2481_, v___x_2482_, v___x_2484_);
v___x_2486_ = lean_box(0);
v___x_2487_ = lean_box(0);
v___x_2488_ = 1;
v___x_2489_ = lean_box(1);
v___x_2490_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__3));
v___x_2491_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v___x_2491_, 0, v___x_2486_);
lean_ctor_set(v___x_2491_, 1, v___x_2487_);
lean_ctor_set(v___x_2491_, 2, v___x_2486_);
lean_ctor_set(v___x_2491_, 3, v___f_2480_);
lean_ctor_set(v___x_2491_, 4, v___x_2489_);
lean_ctor_set(v___x_2491_, 5, v___x_2489_);
lean_ctor_set(v___x_2491_, 6, v___x_2486_);
lean_ctor_set(v___x_2491_, 7, v___x_2490_);
lean_ctor_set_uint8(v___x_2491_, sizeof(void*)*8, v___x_2488_);
lean_ctor_set_uint8(v___x_2491_, sizeof(void*)*8 + 1, v___x_2488_);
lean_ctor_set_uint8(v___x_2491_, sizeof(void*)*8 + 2, v___x_2488_);
lean_ctor_set_uint8(v___x_2491_, sizeof(void*)*8 + 3, v___x_2488_);
lean_ctor_set_uint8(v___x_2491_, sizeof(void*)*8 + 4, v___y_2477_);
lean_ctor_set_uint8(v___x_2491_, sizeof(void*)*8 + 5, v___y_2477_);
lean_ctor_set_uint8(v___x_2491_, sizeof(void*)*8 + 6, v___y_2477_);
lean_ctor_set_uint8(v___x_2491_, sizeof(void*)*8 + 7, v___y_2477_);
lean_ctor_set_uint8(v___x_2491_, sizeof(void*)*8 + 8, v___x_2488_);
lean_ctor_set_uint8(v___x_2491_, sizeof(void*)*8 + 9, v___y_2477_);
lean_ctor_set_uint8(v___x_2491_, sizeof(void*)*8 + 10, v___x_2488_);
v___x_2492_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___closed__4));
v___x_2493_ = l_Lean_Elab_runTactic(v___x_2470_, v___x_2485_, v___x_2491_, v___x_2492_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_);
if (lean_obj_tag(v___x_2493_) == 0)
{
lean_object* v_a_2494_; lean_object* v___x_2496_; uint8_t v_isShared_2497_; uint8_t v_isSharedCheck_2502_; 
v_a_2494_ = lean_ctor_get(v___x_2493_, 0);
v_isSharedCheck_2502_ = !lean_is_exclusive(v___x_2493_);
if (v_isSharedCheck_2502_ == 0)
{
v___x_2496_ = v___x_2493_;
v_isShared_2497_ = v_isSharedCheck_2502_;
goto v_resetjp_2495_;
}
else
{
lean_inc(v_a_2494_);
lean_dec(v___x_2493_);
v___x_2496_ = lean_box(0);
v_isShared_2497_ = v_isSharedCheck_2502_;
goto v_resetjp_2495_;
}
v_resetjp_2495_:
{
lean_object* v_fst_2498_; 
v_fst_2498_ = lean_ctor_get(v_a_2494_, 0);
lean_inc(v_fst_2498_);
lean_dec(v_a_2494_);
if (lean_obj_tag(v_fst_2498_) == 0)
{
lean_del_object(v___x_2496_);
goto v___jp_2463_;
}
else
{
lean_object* v___x_2500_; 
lean_dec(v_fst_2498_);
lean_del_object(v___x_2461_);
lean_dec(v_a_2459_);
if (v_isShared_2497_ == 0)
{
lean_ctor_set(v___x_2496_, 0, v___x_2486_);
v___x_2500_ = v___x_2496_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v___x_2486_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
return v___x_2500_;
}
}
}
}
else
{
lean_object* v_a_2503_; lean_object* v___x_2505_; uint8_t v_isShared_2506_; uint8_t v_isSharedCheck_2510_; 
lean_del_object(v___x_2461_);
lean_dec(v_a_2459_);
v_a_2503_ = lean_ctor_get(v___x_2493_, 0);
v_isSharedCheck_2510_ = !lean_is_exclusive(v___x_2493_);
if (v_isSharedCheck_2510_ == 0)
{
v___x_2505_ = v___x_2493_;
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
else
{
lean_inc(v_a_2503_);
lean_dec(v___x_2493_);
v___x_2505_ = lean_box(0);
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
v_resetjp_2504_:
{
lean_object* v___x_2508_; 
if (v_isShared_2506_ == 0)
{
v___x_2508_ = v___x_2505_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2509_; 
v_reuseFailAlloc_2509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2509_, 0, v_a_2503_);
v___x_2508_ = v_reuseFailAlloc_2509_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
return v___x_2508_;
}
}
}
}
else
{
lean_object* v___x_2512_; 
lean_dec(v___x_2470_);
lean_del_object(v___x_2461_);
lean_dec(v_a_2459_);
if (v_isShared_2475_ == 0)
{
v___x_2512_ = v___x_2474_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v_a_2472_);
v___x_2512_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
return v___x_2512_;
}
}
}
}
}
v___jp_2463_:
{
lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2468_; 
v___x_2464_ = lean_box(0);
v___x_2465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2465_, 0, v___x_2464_);
lean_ctor_set(v___x_2465_, 1, v_a_2459_);
v___x_2466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2466_, 0, v___x_2465_);
if (v_isShared_2462_ == 0)
{
lean_ctor_set(v___x_2461_, 0, v___x_2466_);
v___x_2468_ = v___x_2461_;
goto v_reusejp_2467_;
}
else
{
lean_object* v_reuseFailAlloc_2469_; 
v_reuseFailAlloc_2469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2469_, 0, v___x_2466_);
v___x_2468_ = v_reuseFailAlloc_2469_;
goto v_reusejp_2467_;
}
v_reusejp_2467_:
{
return v___x_2468_;
}
}
}
}
else
{
lean_object* v_a_2518_; lean_object* v___x_2520_; uint8_t v_isShared_2521_; uint8_t v_isSharedCheck_2525_; 
v_a_2518_ = lean_ctor_get(v___x_2458_, 0);
v_isSharedCheck_2525_ = !lean_is_exclusive(v___x_2458_);
if (v_isSharedCheck_2525_ == 0)
{
v___x_2520_ = v___x_2458_;
v_isShared_2521_ = v_isSharedCheck_2525_;
goto v_resetjp_2519_;
}
else
{
lean_inc(v_a_2518_);
lean_dec(v___x_2458_);
v___x_2520_ = lean_box(0);
v_isShared_2521_ = v_isSharedCheck_2525_;
goto v_resetjp_2519_;
}
v_resetjp_2519_:
{
lean_object* v___x_2523_; 
if (v_isShared_2521_ == 0)
{
v___x_2523_ = v___x_2520_;
goto v_reusejp_2522_;
}
else
{
lean_object* v_reuseFailAlloc_2524_; 
v_reuseFailAlloc_2524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2524_, 0, v_a_2518_);
v___x_2523_ = v_reuseFailAlloc_2524_;
goto v_reusejp_2522_;
}
v_reusejp_2522_:
{
return v___x_2523_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1___boxed(lean_object* v_00_u03c6_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_){
_start:
{
lean_object* v_res_2532_; 
v_res_2532_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___lam__1(v_00_u03c6_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_);
lean_dec(v___y_2530_);
lean_dec_ref(v___y_2529_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
return v_res_2532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial(lean_object* v_goal_2534_, lean_object* v_a_2535_, lean_object* v_a_2536_, lean_object* v_a_2537_, lean_object* v_a_2538_){
_start:
{
lean_object* v___f_2543_; lean_object* v___x_2544_; 
v___f_2543_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___closed__0));
v___x_2544_ = l_Lean_Elab_Tactic_Do_ProofMode_mPureIntroCore___at___00Lean_Elab_Tactic_Do_ProofMode_MGoal_pureRflAndAndIntro_spec__1___redArg(v_goal_2534_, v___f_2543_, v_a_2535_, v_a_2536_, v_a_2537_, v_a_2538_);
if (lean_obj_tag(v___x_2544_) == 0)
{
lean_object* v_a_2545_; lean_object* v___x_2547_; uint8_t v_isShared_2548_; uint8_t v_isSharedCheck_2561_; 
v_a_2545_ = lean_ctor_get(v___x_2544_, 0);
v_isSharedCheck_2561_ = !lean_is_exclusive(v___x_2544_);
if (v_isSharedCheck_2561_ == 0)
{
v___x_2547_ = v___x_2544_;
v_isShared_2548_ = v_isSharedCheck_2561_;
goto v_resetjp_2546_;
}
else
{
lean_inc(v_a_2545_);
lean_dec(v___x_2544_);
v___x_2547_ = lean_box(0);
v_isShared_2548_ = v_isSharedCheck_2561_;
goto v_resetjp_2546_;
}
v_resetjp_2546_:
{
if (lean_obj_tag(v_a_2545_) == 0)
{
lean_del_object(v___x_2547_);
goto v___jp_2540_;
}
else
{
lean_object* v_val_2549_; lean_object* v___x_2551_; uint8_t v_isShared_2552_; uint8_t v_isSharedCheck_2560_; 
v_val_2549_ = lean_ctor_get(v_a_2545_, 0);
v_isSharedCheck_2560_ = !lean_is_exclusive(v_a_2545_);
if (v_isSharedCheck_2560_ == 0)
{
v___x_2551_ = v_a_2545_;
v_isShared_2552_ = v_isSharedCheck_2560_;
goto v_resetjp_2550_;
}
else
{
lean_inc(v_val_2549_);
lean_dec(v_a_2545_);
v___x_2551_ = lean_box(0);
v_isShared_2552_ = v_isSharedCheck_2560_;
goto v_resetjp_2550_;
}
v_resetjp_2550_:
{
lean_object* v_snd_2553_; lean_object* v___x_2555_; 
v_snd_2553_ = lean_ctor_get(v_val_2549_, 1);
lean_inc(v_snd_2553_);
lean_dec(v_val_2549_);
if (v_isShared_2552_ == 0)
{
lean_ctor_set(v___x_2551_, 0, v_snd_2553_);
v___x_2555_ = v___x_2551_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2559_; 
v_reuseFailAlloc_2559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2559_, 0, v_snd_2553_);
v___x_2555_ = v_reuseFailAlloc_2559_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
lean_object* v___x_2557_; 
if (v_isShared_2548_ == 0)
{
lean_ctor_set(v___x_2547_, 0, v___x_2555_);
v___x_2557_ = v___x_2547_;
goto v_reusejp_2556_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v___x_2555_);
v___x_2557_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2556_;
}
v_reusejp_2556_:
{
return v___x_2557_;
}
}
}
}
}
}
else
{
lean_object* v_a_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2573_; 
v_a_2562_ = lean_ctor_get(v___x_2544_, 0);
v_isSharedCheck_2573_ = !lean_is_exclusive(v___x_2544_);
if (v_isSharedCheck_2573_ == 0)
{
v___x_2564_ = v___x_2544_;
v_isShared_2565_ = v_isSharedCheck_2573_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_a_2562_);
lean_dec(v___x_2544_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2573_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
uint8_t v___y_2567_; uint8_t v___x_2571_; 
v___x_2571_ = l_Lean_Exception_isInterrupt(v_a_2562_);
if (v___x_2571_ == 0)
{
uint8_t v___x_2572_; 
lean_inc(v_a_2562_);
v___x_2572_ = l_Lean_Exception_isRuntime(v_a_2562_);
v___y_2567_ = v___x_2572_;
goto v___jp_2566_;
}
else
{
v___y_2567_ = v___x_2571_;
goto v___jp_2566_;
}
v___jp_2566_:
{
if (v___y_2567_ == 0)
{
lean_del_object(v___x_2564_);
lean_dec(v_a_2562_);
goto v___jp_2540_;
}
else
{
lean_object* v___x_2569_; 
if (v_isShared_2565_ == 0)
{
v___x_2569_ = v___x_2564_;
goto v_reusejp_2568_;
}
else
{
lean_object* v_reuseFailAlloc_2570_; 
v_reuseFailAlloc_2570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2570_, 0, v_a_2562_);
v___x_2569_ = v_reuseFailAlloc_2570_;
goto v_reusejp_2568_;
}
v_reusejp_2568_:
{
return v___x_2569_;
}
}
}
}
}
v___jp_2540_:
{
lean_object* v___x_2541_; lean_object* v___x_2542_; 
v___x_2541_ = lean_box(0);
v___x_2542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2542_, 0, v___x_2541_);
return v___x_2542_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial___boxed(lean_object* v_goal_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_, lean_object* v_a_2577_, lean_object* v_a_2578_, lean_object* v_a_2579_){
_start:
{
lean_object* v_res_2580_; 
v_res_2580_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_pureTrivial(v_goal_2574_, v_a_2575_, v_a_2576_, v_a_2577_, v_a_2578_);
lean_dec(v_a_2578_);
lean_dec_ref(v_a_2577_);
lean_dec(v_a_2576_);
lean_dec_ref(v_a_2575_);
return v_res_2580_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Rfl(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Pure(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Rfl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPure___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPure__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Pure_0__Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMPureIntro__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Pure(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Rfl(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Pure(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Do_ProofMode_MGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Rfl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Pure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Pure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ProofMode_Pure(builtin);
}
#ifdef __cplusplus
}
#endif

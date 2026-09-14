// Lean compiler output
// Module: Lean.Meta.Tactic.Cases
// Imports: public import Lean.Meta.Tactic.Induction public import Lean.Meta.Tactic.Acyclic public import Lean.Meta.Tactic.UnifyEq import Lean.Meta.Constructions.SparseCasesOn import Lean.Meta.Constructions.CtorIdx import Init.Omega
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
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_MVarId_induction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_erase(lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_insert(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCasesOnName(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkSparseCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCtorIdxName(lean_object*);
lean_object* l_Lean_Meta_FVarSubst_get(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_acyclic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unifyEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Meta_FVarSubst_apply(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwNestedTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_saturate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_exactlyOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
uint8_t l_Lean_Expr_isEq(lean_object*);
uint8_t l_Lean_Expr_isHEq(lean_object*);
lean_object* l_Lean_Meta_ensureAtMostOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "Failed to compile pattern matching: Expected an inductive type, but found"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_getInductiveUniverseAndParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getInductiveUniverseAndParams___closed__0;
static lean_once_cell_t l_Lean_Meta_getInductiveUniverseAndParams___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getInductiveUniverseAndParams___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_getInductiveUniverseAndParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInductiveUniverseAndParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__2_value),LEAN_SCALAR_PTR_LITERAL(180, 202, 227, 45, 204, 223, 127, 41)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__4_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__4_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__2_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_withNewEqs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_withNewEqs___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_withNewEqs___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_generalizeTargetsEq___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Invalid number of targets: "};
static const lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_generalizeTargetsEq___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_generalizeTargetsEq___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1___closed__1;
static const lean_string_object l_Lean_Meta_generalizeTargetsEq___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = " targets provided, but motive only takes "};
static const lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_generalizeTargetsEq___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_generalizeTargetsEq___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_generalizeTargetsEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "generalizeTargets"};
static const lean_object* l_Lean_Meta_generalizeTargetsEq___closed__0 = (const lean_object*)&l_Lean_Meta_generalizeTargetsEq___closed__0_value;
static const lean_ctor_object l_Lean_Meta_generalizeTargetsEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_generalizeTargetsEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 33, 44, 197, 230, 161, 237, 93)}};
static const lean_object* l_Lean_Meta_generalizeTargetsEq___closed__1 = (const lean_object*)&l_Lean_Meta_generalizeTargetsEq___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "generalizeIndices"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(254, 199, 71, 14, 111, 8, 96, 84)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__1_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "inductive type expected"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__2_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__2_value)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__3 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__3_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__4;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__5;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "ill-formed inductive datatype"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__6 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__6_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__6_value)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__7 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__7_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__8;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__9;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "indexed inductive type expected"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__10 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__10_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__10_value)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__11 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__11_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__12;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__13;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "casesOn"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__5(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__2(lean_object*, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__3(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4_spec__5(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices___boxed__const__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Cases_unifyEqs_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MVarId_acyclic___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Cases_unifyEqs_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_Cases_unifyEqs_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_unifyEqs_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_unifyEqs_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "casesAuxOn"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(33, 160, 116, 144, 209, 153, 27, 121)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "hasNotBit"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(117, 117, 142, 139, 222, 16, 37, 88)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Cases_cases___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "not applicable to the given hypothesis"};
static const lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Cases_cases___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Cases_cases___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__2;
static lean_once_cell_t l_Lean_Meta_Cases_cases___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_Cases_cases___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__4_value;
static const lean_string_object l_Lean_Meta_Cases_cases___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__5 = (const lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__5_value;
static const lean_string_object l_Lean_Meta_Cases_cases___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Cases_cases___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__7 = (const lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__7_value;
static const lean_string_object l_Lean_Meta_Cases_cases___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "after generalizeIndices\n"};
static const lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__8 = (const lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Cases_cases___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Cases_cases___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "cases"};
static const lean_object* l_Lean_Meta_Cases_cases___closed__0 = (const lean_object*)&l_Lean_Meta_Cases_cases___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Cases_cases___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Cases_cases___closed__0_value),LEAN_SCALAR_PTR_LITERAL(220, 93, 203, 178, 149, 199, 118, 190)}};
static const lean_object* l_Lean_Meta_Cases_cases___closed__1 = (const lean_object*)&l_Lean_Meta_Cases_cases___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_cases(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_cases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_MVarId_casesRec_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__0_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_MVarId_casesRec___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_MVarId_casesRec___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_casesRec___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_casesAnd___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l_Lean_MVarId_casesAnd___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_casesAnd___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_casesAnd___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_casesAnd___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l_Lean_MVarId_casesAnd___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_casesAnd___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_MVarId_casesAnd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MVarId_casesAnd___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MVarId_casesAnd___closed__0 = (const lean_object*)&l_Lean_MVarId_casesAnd___closed__0_value;
static const lean_string_object l_Lean_MVarId_casesAnd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "unexpected number of goals"};
static const lean_object* l_Lean_MVarId_casesAnd___closed__1 = (const lean_object*)&l_Lean_MVarId_casesAnd___closed__1_value;
static const lean_ctor_object l_Lean_MVarId_casesAnd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MVarId_casesAnd___closed__1_value)}};
static const lean_object* l_Lean_MVarId_casesAnd___closed__2 = (const lean_object*)&l_Lean_MVarId_casesAnd___closed__2_value;
static lean_once_cell_t l_Lean_MVarId_casesAnd___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_casesAnd___closed__3;
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_MVarId_substEqs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MVarId_substEqs___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MVarId_substEqs___closed__0 = (const lean_object*)&l_Lean_MVarId_substEqs___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_byCases___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "isTrue"};
static const lean_object* l_Lean_MVarId_byCases___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_byCases___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(125, 82, 240, 34, 69, 121, 64, 234)}};
static const lean_object* l_Lean_MVarId_byCases___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__1_value;
static const lean_string_object l_Lean_MVarId_byCases___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "isFalse"};
static const lean_object* l_Lean_MVarId_byCases___lam__0___closed__2 = (const lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_MVarId_byCases___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(113, 70, 3, 12, 31, 103, 230, 247)}};
static const lean_object* l_Lean_MVarId_byCases___lam__0___closed__3 = (const lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__3_value;
static const lean_string_object l_Lean_MVarId_byCases___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Classical"};
static const lean_object* l_Lean_MVarId_byCases___lam__0___closed__4 = (const lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__4_value;
static const lean_string_object l_Lean_MVarId_byCases___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "byCases"};
static const lean_object* l_Lean_MVarId_byCases___lam__0___closed__5 = (const lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__5_value;
static const lean_ctor_object l_Lean_MVarId_byCases___lam__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object l_Lean_MVarId_byCases___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__6_value_aux_0),((lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(240, 75, 32, 165, 126, 243, 120, 233)}};
static const lean_object* l_Lean_MVarId_byCases___lam__0___closed__6 = (const lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_MVarId_byCases___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byCases___lam__0___closed__7;
static const lean_ctor_object l_Lean_MVarId_byCases___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(223, 107, 197, 37, 106, 239, 120, 82)}};
static const lean_object* l_Lean_MVarId_byCases___lam__0___closed__8 = (const lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__8_value;
static const lean_string_object l_Lean_MVarId_byCases___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Goal is not a proposition"};
static const lean_object* l_Lean_MVarId_byCases___lam__0___closed__9 = (const lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__9_value;
static lean_once_cell_t l_Lean_MVarId_byCases___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byCases___lam__0___closed__10;
static lean_once_cell_t l_Lean_MVarId_byCases___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byCases___lam__0___closed__11;
LEAN_EXPORT lean_object* l_Lean_MVarId_byCases___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byCases___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byCases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byCases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_byCasesDec___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_Lean_MVarId_byCasesDec___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_byCasesDec___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_byCasesDec___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_byCasesDec___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l_Lean_MVarId_byCasesDec___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_byCasesDec___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesDec___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesDec___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesDec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesDec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Meta_Cases_cases___closed__0_value),LEAN_SCALAR_PTR_LITERAL(57, 31, 136, 203, 40, 113, 66, 100)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Cases"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0_spec__0(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v_env_8_; lean_object* v___x_9_; lean_object* v_toCold_10_; lean_object* v_mctx_11_; lean_object* v_lctx_12_; lean_object* v_options_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_7_ = lean_st_ref_get(v___y_5_);
v_env_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc_ref(v_env_8_);
lean_dec(v___x_7_);
v___x_9_ = lean_st_ref_get(v___y_3_);
v_toCold_10_ = lean_ctor_get(v___y_4_, 0);
v_mctx_11_ = lean_ctor_get(v___x_9_, 0);
lean_inc_ref(v_mctx_11_);
lean_dec(v___x_9_);
v_lctx_12_ = lean_ctor_get(v___y_2_, 2);
v_options_13_ = lean_ctor_get(v_toCold_10_, 2);
lean_inc_ref(v_options_13_);
lean_inc_ref(v_lctx_12_);
v___x_14_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_14_, 0, v_env_8_);
lean_ctor_set(v___x_14_, 1, v_mctx_11_);
lean_ctor_set(v___x_14_, 2, v_lctx_12_);
lean_ctor_set(v___x_14_, 3, v_options_13_);
v___x_15_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
lean_ctor_set(v___x_15_, 1, v_msgData_1_);
v___x_16_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0_spec__0___boxed(lean_object* v_msgData_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0_spec__0(v_msgData_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
lean_dec(v___y_19_);
lean_dec_ref(v___y_18_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg(lean_object* v_msg_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_ref_30_; lean_object* v___x_31_; lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_40_; 
v_ref_30_ = lean_ctor_get(v___y_27_, 2);
v___x_31_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0_spec__0(v_msg_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
v_a_32_ = lean_ctor_get(v___x_31_, 0);
v_isSharedCheck_40_ = !lean_is_exclusive(v___x_31_);
if (v_isSharedCheck_40_ == 0)
{
v___x_34_ = v___x_31_;
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_a_32_);
lean_dec(v___x_31_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_36_; lean_object* v___x_38_; 
lean_inc(v_ref_30_);
v___x_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_36_, 0, v_ref_30_);
lean_ctor_set(v___x_36_, 1, v_a_32_);
if (v_isShared_35_ == 0)
{
lean_ctor_set_tag(v___x_34_, 1);
lean_ctor_set(v___x_34_, 0, v___x_36_);
v___x_38_ = v___x_34_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v___x_36_);
v___x_38_ = v_reuseFailAlloc_39_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
return v___x_38_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg___boxed(lean_object* v_msg_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg(v_msg_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_47_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__1(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__0));
v___x_50_ = l_Lean_stringToMessageData(v___x_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg(lean_object* v_type_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_57_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__1, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__1);
v___x_58_ = l_Lean_indentExpr(v_type_51_);
v___x_59_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_57_);
lean_ctor_set(v___x_59_, 1, v___x_58_);
v___x_60_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg(v___x_59_, v_a_52_, v_a_53_, v_a_54_, v_a_55_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___boxed(lean_object* v_type_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg(v_type_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_);
lean_dec(v_a_65_);
lean_dec_ref(v_a_64_);
lean_dec(v_a_63_);
lean_dec_ref(v_a_62_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected(lean_object* v_00_u03b1_68_, lean_object* v_type_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg(v_type_69_, v_a_70_, v_a_71_, v_a_72_, v_a_73_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___boxed(lean_object* v_00_u03b1_76_, lean_object* v_type_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected(v_00_u03b1_76_, v_type_77_, v_a_78_, v_a_79_, v_a_80_, v_a_81_);
lean_dec(v_a_81_);
lean_dec_ref(v_a_80_);
lean_dec(v_a_79_);
lean_dec_ref(v_a_78_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0(lean_object* v_00_u03b1_84_, lean_object* v_msg_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg(v_msg_85_, v___y_86_, v___y_87_, v___y_88_, v___y_89_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___boxed(lean_object* v_00_u03b1_92_, lean_object* v_msg_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0(v_00_u03b1_92_, v_msg_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
return v_res_99_;
}
}
static lean_object* _init_l_Lean_Meta_getInductiveUniverseAndParams___closed__0(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = lean_box(0);
v___x_101_ = l_unsafeCast___redArg(v___x_100_);
return v___x_101_;
}
}
static lean_object* _init_l_Lean_Meta_getInductiveUniverseAndParams___closed__1(void){
_start:
{
lean_object* v___x_102_; lean_object* v_dummy_103_; 
v___x_102_ = lean_obj_once(&l_Lean_Meta_getInductiveUniverseAndParams___closed__0, &l_Lean_Meta_getInductiveUniverseAndParams___closed__0_once, _init_l_Lean_Meta_getInductiveUniverseAndParams___closed__0);
v_dummy_103_ = l_Lean_Expr_sort___override(v___x_102_);
return v_dummy_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInductiveUniverseAndParams(lean_object* v_type_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lean_Meta_whnfD(v_type_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_);
if (lean_obj_tag(v___x_110_) == 0)
{
lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_140_; 
v_a_111_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_140_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_140_ == 0)
{
v___x_113_ = v___x_110_;
v_isShared_114_ = v_isSharedCheck_140_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v___x_110_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_140_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_115_; 
v___x_115_ = l_Lean_Expr_getAppFn(v_a_111_);
if (lean_obj_tag(v___x_115_) == 4)
{
lean_object* v_declName_116_; lean_object* v_us_117_; lean_object* v___x_118_; lean_object* v_env_119_; uint8_t v___x_120_; lean_object* v___x_121_; 
v_declName_116_ = lean_ctor_get(v___x_115_, 0);
lean_inc(v_declName_116_);
v_us_117_ = lean_ctor_get(v___x_115_, 1);
lean_inc(v_us_117_);
lean_dec_ref_known(v___x_115_, 2);
v___x_118_ = lean_st_ref_get(v_a_108_);
v_env_119_ = lean_ctor_get(v___x_118_, 0);
lean_inc_ref(v_env_119_);
lean_dec(v___x_118_);
v___x_120_ = 0;
v___x_121_ = l_Lean_Environment_find_x3f(v_env_119_, v_declName_116_, v___x_120_);
if (lean_obj_tag(v___x_121_) == 0)
{
lean_object* v___x_122_; 
lean_dec(v_us_117_);
lean_del_object(v___x_113_);
v___x_122_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg(v_a_111_, v_a_105_, v_a_106_, v_a_107_, v_a_108_);
return v___x_122_;
}
else
{
lean_object* v_val_123_; 
v_val_123_ = lean_ctor_get(v___x_121_, 0);
lean_inc(v_val_123_);
lean_dec_ref_known(v___x_121_, 1);
if (lean_obj_tag(v_val_123_) == 5)
{
lean_object* v_val_124_; lean_object* v_numParams_125_; lean_object* v_nargs_126_; lean_object* v_dummy_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_136_; 
v_val_124_ = lean_ctor_get(v_val_123_, 0);
lean_inc_ref(v_val_124_);
lean_dec_ref_known(v_val_123_, 1);
v_numParams_125_ = lean_ctor_get(v_val_124_, 1);
lean_inc(v_numParams_125_);
lean_dec_ref(v_val_124_);
v_nargs_126_ = l_Lean_Expr_getAppNumArgs(v_a_111_);
v_dummy_127_ = lean_obj_once(&l_Lean_Meta_getInductiveUniverseAndParams___closed__1, &l_Lean_Meta_getInductiveUniverseAndParams___closed__1_once, _init_l_Lean_Meta_getInductiveUniverseAndParams___closed__1);
lean_inc(v_nargs_126_);
v___x_128_ = lean_mk_array(v_nargs_126_, v_dummy_127_);
v___x_129_ = lean_unsigned_to_nat(1u);
v___x_130_ = lean_nat_sub(v_nargs_126_, v___x_129_);
lean_dec(v_nargs_126_);
v___x_131_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_111_, v___x_128_, v___x_130_);
v___x_132_ = lean_unsigned_to_nat(0u);
v___x_133_ = l_Array_extract___redArg(v___x_131_, v___x_132_, v_numParams_125_);
lean_dec_ref(v___x_131_);
v___x_134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_134_, 0, v_us_117_);
lean_ctor_set(v___x_134_, 1, v___x_133_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 0, v___x_134_);
v___x_136_ = v___x_113_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v___x_134_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
else
{
lean_object* v___x_138_; 
lean_dec(v_val_123_);
lean_dec(v_us_117_);
lean_del_object(v___x_113_);
v___x_138_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg(v_a_111_, v_a_105_, v_a_106_, v_a_107_, v_a_108_);
return v___x_138_;
}
}
}
else
{
lean_object* v___x_139_; 
lean_dec_ref(v___x_115_);
lean_del_object(v___x_113_);
v___x_139_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg(v_a_111_, v_a_105_, v_a_106_, v_a_107_, v_a_108_);
return v___x_139_;
}
}
}
else
{
lean_object* v_a_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_148_; 
v_a_141_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_148_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_148_ == 0)
{
v___x_143_ = v___x_110_;
v_isShared_144_ = v_isSharedCheck_148_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_a_141_);
lean_dec(v___x_110_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_148_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
lean_object* v___x_146_; 
if (v_isShared_144_ == 0)
{
v___x_146_ = v___x_143_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v_a_141_);
v___x_146_ = v_reuseFailAlloc_147_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
return v___x_146_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInductiveUniverseAndParams___boxed(lean_object* v_type_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_Lean_Meta_getInductiveUniverseAndParams(v_type_149_, v_a_150_, v_a_151_, v_a_152_, v_a_153_);
lean_dec(v_a_153_);
lean_dec_ref(v_a_152_);
lean_dec(v_a_151_);
lean_dec_ref(v_a_150_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof(lean_object* v_lhs_169_, lean_object* v_rhs_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_){
_start:
{
lean_object* v___x_176_; 
lean_inc(v_a_174_);
lean_inc_ref(v_a_173_);
lean_inc(v_a_172_);
lean_inc_ref(v_a_171_);
lean_inc_ref(v_lhs_169_);
v___x_176_ = lean_infer_type(v_lhs_169_, v_a_171_, v_a_172_, v_a_173_, v_a_174_);
if (lean_obj_tag(v___x_176_) == 0)
{
lean_object* v_a_177_; lean_object* v___x_178_; 
v_a_177_ = lean_ctor_get(v___x_176_, 0);
lean_inc(v_a_177_);
lean_dec_ref_known(v___x_176_, 1);
lean_inc(v_a_174_);
lean_inc_ref(v_a_173_);
lean_inc(v_a_172_);
lean_inc_ref(v_a_171_);
lean_inc_ref(v_rhs_170_);
v___x_178_ = lean_infer_type(v_rhs_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_);
if (lean_obj_tag(v___x_178_) == 0)
{
lean_object* v_a_179_; lean_object* v___x_180_; 
v_a_179_ = lean_ctor_get(v___x_178_, 0);
lean_inc(v_a_179_);
lean_dec_ref_known(v___x_178_, 1);
lean_inc(v_a_177_);
v___x_180_ = l_Lean_Meta_getLevel(v_a_177_, v_a_171_, v_a_172_, v_a_173_, v_a_174_);
if (lean_obj_tag(v___x_180_) == 0)
{
lean_object* v_a_181_; lean_object* v___x_182_; 
v_a_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc(v_a_181_);
lean_dec_ref_known(v___x_180_, 1);
lean_inc(v_a_179_);
lean_inc(v_a_177_);
v___x_182_ = l_Lean_Meta_isExprDefEq(v_a_177_, v_a_179_, v_a_171_, v_a_172_, v_a_173_, v_a_174_);
if (lean_obj_tag(v___x_182_) == 0)
{
lean_object* v_a_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_212_; 
v_a_183_ = lean_ctor_get(v___x_182_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_182_);
if (v_isSharedCheck_212_ == 0)
{
v___x_185_ = v___x_182_;
v_isShared_186_ = v_isSharedCheck_212_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_a_183_);
lean_dec(v___x_182_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_212_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
uint8_t v___x_187_; 
v___x_187_ = lean_unbox(v_a_183_);
lean_dec(v_a_183_);
if (v___x_187_ == 0)
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_198_; 
v___x_188_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__1));
v___x_189_ = lean_box(0);
v___x_190_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_190_, 0, v_a_181_);
lean_ctor_set(v___x_190_, 1, v___x_189_);
lean_inc_ref(v___x_190_);
v___x_191_ = l_Lean_mkConst(v___x_188_, v___x_190_);
lean_inc_ref(v_lhs_169_);
lean_inc(v_a_177_);
v___x_192_ = l_Lean_mkApp4(v___x_191_, v_a_177_, v_lhs_169_, v_a_179_, v_rhs_170_);
v___x_193_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__3));
v___x_194_ = l_Lean_mkConst(v___x_193_, v___x_190_);
v___x_195_ = l_Lean_mkAppB(v___x_194_, v_a_177_, v_lhs_169_);
v___x_196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_192_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 0, v___x_196_);
v___x_198_ = v___x_185_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v___x_196_);
v___x_198_ = v_reuseFailAlloc_199_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
return v___x_198_;
}
}
else
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_210_; 
lean_dec(v_a_179_);
v___x_200_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__5));
v___x_201_ = lean_box(0);
v___x_202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_202_, 0, v_a_181_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
lean_inc_ref(v___x_202_);
v___x_203_ = l_Lean_mkConst(v___x_200_, v___x_202_);
lean_inc_ref(v_lhs_169_);
lean_inc(v_a_177_);
v___x_204_ = l_Lean_mkApp3(v___x_203_, v_a_177_, v_lhs_169_, v_rhs_170_);
v___x_205_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__6));
v___x_206_ = l_Lean_mkConst(v___x_205_, v___x_202_);
v___x_207_ = l_Lean_mkAppB(v___x_206_, v_a_177_, v_lhs_169_);
v___x_208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_208_, 0, v___x_204_);
lean_ctor_set(v___x_208_, 1, v___x_207_);
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 0, v___x_208_);
v___x_210_ = v___x_185_;
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
else
{
lean_object* v_a_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_220_; 
lean_dec(v_a_181_);
lean_dec(v_a_179_);
lean_dec(v_a_177_);
lean_dec_ref(v_rhs_170_);
lean_dec_ref(v_lhs_169_);
v_a_213_ = lean_ctor_get(v___x_182_, 0);
v_isSharedCheck_220_ = !lean_is_exclusive(v___x_182_);
if (v_isSharedCheck_220_ == 0)
{
v___x_215_ = v___x_182_;
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_a_213_);
lean_dec(v___x_182_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_218_; 
if (v_isShared_216_ == 0)
{
v___x_218_ = v___x_215_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_a_213_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
}
}
else
{
lean_object* v_a_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_228_; 
lean_dec(v_a_179_);
lean_dec(v_a_177_);
lean_dec_ref(v_rhs_170_);
lean_dec_ref(v_lhs_169_);
v_a_221_ = lean_ctor_get(v___x_180_, 0);
v_isSharedCheck_228_ = !lean_is_exclusive(v___x_180_);
if (v_isSharedCheck_228_ == 0)
{
v___x_223_ = v___x_180_;
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_a_221_);
lean_dec(v___x_180_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_226_; 
if (v_isShared_224_ == 0)
{
v___x_226_ = v___x_223_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v_a_221_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
return v___x_226_;
}
}
}
}
else
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_236_; 
lean_dec(v_a_177_);
lean_dec_ref(v_rhs_170_);
lean_dec_ref(v_lhs_169_);
v_a_229_ = lean_ctor_get(v___x_178_, 0);
v_isSharedCheck_236_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_236_ == 0)
{
v___x_231_ = v___x_178_;
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_178_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_234_; 
if (v_isShared_232_ == 0)
{
v___x_234_ = v___x_231_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v_a_229_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
}
else
{
lean_object* v_a_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_244_; 
lean_dec_ref(v_rhs_170_);
lean_dec_ref(v_lhs_169_);
v_a_237_ = lean_ctor_get(v___x_176_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_176_);
if (v_isSharedCheck_244_ == 0)
{
v___x_239_ = v___x_176_;
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_a_237_);
lean_dec(v___x_176_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_242_; 
if (v_isShared_240_ == 0)
{
v___x_242_ = v___x_239_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_a_237_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___boxed(lean_object* v_lhs_245_, lean_object* v_rhs_246_, lean_object* v_a_247_, lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof(v_lhs_245_, v_rhs_246_, v_a_247_, v_a_248_, v_a_249_, v_a_250_);
lean_dec(v_a_250_);
lean_dec_ref(v_a_249_);
lean_dec(v_a_248_);
lean_dec_ref(v_a_247_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___lam__0(lean_object* v_k_253_, lean_object* v_b_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_){
_start:
{
lean_object* v___x_260_; 
lean_inc(v___y_258_);
lean_inc_ref(v___y_257_);
lean_inc(v___y_256_);
lean_inc_ref(v___y_255_);
v___x_260_ = lean_apply_6(v_k_253_, v_b_254_, v___y_255_, v___y_256_, v___y_257_, v___y_258_, lean_box(0));
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_261_, lean_object* v_b_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___lam__0(v_k_261_, v_b_262_, v___y_263_, v___y_264_, v___y_265_, v___y_266_);
lean_dec(v___y_266_);
lean_dec_ref(v___y_265_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg(lean_object* v_name_269_, uint8_t v_bi_270_, lean_object* v_type_271_, lean_object* v_k_272_, uint8_t v_kind_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_){
_start:
{
lean_object* v___f_279_; lean_object* v___x_280_; 
v___f_279_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_279_, 0, v_k_272_);
v___x_280_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_269_, v_bi_270_, v_type_271_, v___f_279_, v_kind_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_288_; 
v_a_281_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_288_ == 0)
{
v___x_283_ = v___x_280_;
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_280_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_284_ == 0)
{
v___x_286_ = v___x_283_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_a_281_);
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
lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_296_; 
v_a_289_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_296_ == 0)
{
v___x_291_ = v___x_280_;
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v___x_280_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_294_; 
if (v_isShared_292_ == 0)
{
v___x_294_ = v___x_291_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_a_289_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___boxed(lean_object* v_name_297_, lean_object* v_bi_298_, lean_object* v_type_299_, lean_object* v_k_300_, lean_object* v_kind_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
uint8_t v_bi_boxed_307_; uint8_t v_kind_boxed_308_; lean_object* v_res_309_; 
v_bi_boxed_307_ = lean_unbox(v_bi_298_);
v_kind_boxed_308_ = lean_unbox(v_kind_301_);
v_res_309_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg(v_name_297_, v_bi_boxed_307_, v_type_299_, v_k_300_, v_kind_boxed_308_, v___y_302_, v___y_303_, v___y_304_, v___y_305_);
lean_dec(v___y_305_);
lean_dec_ref(v___y_304_);
lean_dec(v___y_303_);
lean_dec_ref(v___y_302_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(lean_object* v_name_310_, lean_object* v_type_311_, lean_object* v_k_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_){
_start:
{
uint8_t v___x_318_; uint8_t v___x_319_; lean_object* v___x_320_; 
v___x_318_ = 0;
v___x_319_ = 0;
v___x_320_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg(v_name_310_, v___x_318_, v_type_311_, v_k_312_, v___x_319_, v___y_313_, v___y_314_, v___y_315_, v___y_316_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg___boxed(lean_object* v_name_321_, lean_object* v_type_322_, lean_object* v_k_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_){
_start:
{
lean_object* v_res_329_; 
v_res_329_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(v_name_321_, v_type_322_, v_k_323_, v___y_324_, v___y_325_, v___y_326_, v___y_327_);
lean_dec(v___y_327_);
lean_dec_ref(v___y_326_);
lean_dec(v___y_325_);
lean_dec_ref(v___y_324_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___lam__0___boxed(lean_object* v_i_330_, lean_object* v_newEqs_331_, lean_object* v_newRefls_332_, lean_object* v_snd_333_, lean_object* v_targets_334_, lean_object* v_targetsNew_335_, lean_object* v_k_336_, lean_object* v_newEq_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___lam__0(v_i_330_, v_newEqs_331_, v_newRefls_332_, v_snd_333_, v_targets_334_, v_targetsNew_335_, v_k_336_, v_newEq_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_);
lean_dec(v___y_341_);
lean_dec_ref(v___y_340_);
lean_dec(v___y_339_);
lean_dec_ref(v___y_338_);
lean_dec(v_i_330_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg(lean_object* v_targets_347_, lean_object* v_targetsNew_348_, lean_object* v_k_349_, lean_object* v_i_350_, lean_object* v_newEqs_351_, lean_object* v_newRefls_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_){
_start:
{
lean_object* v___x_358_; uint8_t v___x_359_; 
v___x_358_ = lean_array_get_size(v_targets_347_);
v___x_359_ = lean_nat_dec_lt(v_i_350_, v___x_358_);
if (v___x_359_ == 0)
{
lean_object* v___x_360_; 
lean_dec(v_i_350_);
lean_dec_ref(v_targetsNew_348_);
lean_dec_ref(v_targets_347_);
lean_inc(v_a_356_);
lean_inc_ref(v_a_355_);
lean_inc(v_a_354_);
lean_inc_ref(v_a_353_);
v___x_360_ = lean_apply_7(v_k_349_, v_newEqs_351_, v_newRefls_352_, v_a_353_, v_a_354_, v_a_355_, v_a_356_, lean_box(0));
return v___x_360_;
}
else
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_361_ = l_Lean_instInhabitedExpr;
v___x_362_ = lean_array_get_borrowed(v___x_361_, v_targets_347_, v_i_350_);
v___x_363_ = lean_array_get_borrowed(v___x_361_, v_targetsNew_348_, v_i_350_);
lean_inc(v___x_363_);
lean_inc(v___x_362_);
v___x_364_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof(v___x_362_, v___x_363_, v_a_353_, v_a_354_, v_a_355_, v_a_356_);
if (lean_obj_tag(v___x_364_) == 0)
{
lean_object* v_a_365_; lean_object* v_fst_366_; lean_object* v_snd_367_; lean_object* v___f_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v_a_365_ = lean_ctor_get(v___x_364_, 0);
lean_inc(v_a_365_);
lean_dec_ref_known(v___x_364_, 1);
v_fst_366_ = lean_ctor_get(v_a_365_, 0);
lean_inc(v_fst_366_);
v_snd_367_ = lean_ctor_get(v_a_365_, 1);
lean_inc(v_snd_367_);
lean_dec(v_a_365_);
v___f_368_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___lam__0___boxed), 13, 7);
lean_closure_set(v___f_368_, 0, v_i_350_);
lean_closure_set(v___f_368_, 1, v_newEqs_351_);
lean_closure_set(v___f_368_, 2, v_newRefls_352_);
lean_closure_set(v___f_368_, 3, v_snd_367_);
lean_closure_set(v___f_368_, 4, v_targets_347_);
lean_closure_set(v___f_368_, 5, v_targetsNew_348_);
lean_closure_set(v___f_368_, 6, v_k_349_);
v___x_369_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__1));
v___x_370_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(v___x_369_, v_fst_366_, v___f_368_, v_a_353_, v_a_354_, v_a_355_, v_a_356_);
return v___x_370_;
}
else
{
lean_object* v_a_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_378_; 
lean_dec_ref(v_newRefls_352_);
lean_dec_ref(v_newEqs_351_);
lean_dec(v_i_350_);
lean_dec_ref(v_k_349_);
lean_dec_ref(v_targetsNew_348_);
lean_dec_ref(v_targets_347_);
v_a_371_ = lean_ctor_get(v___x_364_, 0);
v_isSharedCheck_378_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_378_ == 0)
{
v___x_373_ = v___x_364_;
v_isShared_374_ = v_isSharedCheck_378_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_a_371_);
lean_dec(v___x_364_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_378_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_376_; 
if (v_isShared_374_ == 0)
{
v___x_376_ = v___x_373_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v_a_371_);
v___x_376_ = v_reuseFailAlloc_377_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
return v___x_376_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___lam__0(lean_object* v_i_379_, lean_object* v_newEqs_380_, lean_object* v_newRefls_381_, lean_object* v_snd_382_, lean_object* v_targets_383_, lean_object* v_targetsNew_384_, lean_object* v_k_385_, lean_object* v_newEq_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_392_ = lean_unsigned_to_nat(1u);
v___x_393_ = lean_nat_add(v_i_379_, v___x_392_);
v___x_394_ = lean_array_push(v_newEqs_380_, v_newEq_386_);
v___x_395_ = lean_array_push(v_newRefls_381_, v_snd_382_);
v___x_396_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg(v_targets_383_, v_targetsNew_384_, v_k_385_, v___x_393_, v___x_394_, v___x_395_, v___y_387_, v___y_388_, v___y_389_, v___y_390_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___boxed(lean_object* v_targets_397_, lean_object* v_targetsNew_398_, lean_object* v_k_399_, lean_object* v_i_400_, lean_object* v_newEqs_401_, lean_object* v_newRefls_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg(v_targets_397_, v_targetsNew_398_, v_k_399_, v_i_400_, v_newEqs_401_, v_newRefls_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_);
lean_dec(v_a_406_);
lean_dec_ref(v_a_405_);
lean_dec(v_a_404_);
lean_dec_ref(v_a_403_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop(lean_object* v_00_u03b1_409_, lean_object* v_targets_410_, lean_object* v_targetsNew_411_, lean_object* v_k_412_, lean_object* v_i_413_, lean_object* v_newEqs_414_, lean_object* v_newRefls_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg(v_targets_410_, v_targetsNew_411_, v_k_412_, v_i_413_, v_newEqs_414_, v_newRefls_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___boxed(lean_object* v_00_u03b1_422_, lean_object* v_targets_423_, lean_object* v_targetsNew_424_, lean_object* v_k_425_, lean_object* v_i_426_, lean_object* v_newEqs_427_, lean_object* v_newRefls_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop(v_00_u03b1_422_, v_targets_423_, v_targetsNew_424_, v_k_425_, v_i_426_, v_newEqs_427_, v_newRefls_428_, v_a_429_, v_a_430_, v_a_431_, v_a_432_);
lean_dec(v_a_432_);
lean_dec_ref(v_a_431_);
lean_dec(v_a_430_);
lean_dec_ref(v_a_429_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0(lean_object* v_00_u03b1_435_, lean_object* v_name_436_, uint8_t v_bi_437_, lean_object* v_type_438_, lean_object* v_k_439_, uint8_t v_kind_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg(v_name_436_, v_bi_437_, v_type_438_, v_k_439_, v_kind_440_, v___y_441_, v___y_442_, v___y_443_, v___y_444_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___boxed(lean_object* v_00_u03b1_447_, lean_object* v_name_448_, lean_object* v_bi_449_, lean_object* v_type_450_, lean_object* v_k_451_, lean_object* v_kind_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_){
_start:
{
uint8_t v_bi_boxed_458_; uint8_t v_kind_boxed_459_; lean_object* v_res_460_; 
v_bi_boxed_458_ = lean_unbox(v_bi_449_);
v_kind_boxed_459_ = lean_unbox(v_kind_452_);
v_res_460_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0(v_00_u03b1_447_, v_name_448_, v_bi_boxed_458_, v_type_450_, v_k_451_, v_kind_boxed_459_, v___y_453_, v___y_454_, v___y_455_, v___y_456_);
lean_dec(v___y_456_);
lean_dec_ref(v___y_455_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0(lean_object* v_00_u03b1_461_, lean_object* v_name_462_, lean_object* v_type_463_, lean_object* v_k_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_){
_start:
{
lean_object* v___x_470_; 
v___x_470_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(v_name_462_, v_type_463_, v_k_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___boxed(lean_object* v_00_u03b1_471_, lean_object* v_name_472_, lean_object* v_type_473_, lean_object* v_k_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0(v_00_u03b1_471_, v_name_472_, v_type_473_, v_k_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_);
lean_dec(v___y_478_);
lean_dec_ref(v___y_477_);
lean_dec(v___y_476_);
lean_dec_ref(v___y_475_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs___redArg(lean_object* v_targets_483_, lean_object* v_targetsNew_484_, lean_object* v_k_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_){
_start:
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_491_ = lean_unsigned_to_nat(0u);
v___x_492_ = ((lean_object*)(l_Lean_Meta_withNewEqs___redArg___closed__0));
v___x_493_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg(v_targets_483_, v_targetsNew_484_, v_k_485_, v___x_491_, v___x_492_, v___x_492_, v_a_486_, v_a_487_, v_a_488_, v_a_489_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs___redArg___boxed(lean_object* v_targets_494_, lean_object* v_targetsNew_495_, lean_object* v_k_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l_Lean_Meta_withNewEqs___redArg(v_targets_494_, v_targetsNew_495_, v_k_496_, v_a_497_, v_a_498_, v_a_499_, v_a_500_);
lean_dec(v_a_500_);
lean_dec_ref(v_a_499_);
lean_dec(v_a_498_);
lean_dec_ref(v_a_497_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs(lean_object* v_00_u03b1_503_, lean_object* v_targets_504_, lean_object* v_targetsNew_505_, lean_object* v_k_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_){
_start:
{
lean_object* v___x_512_; 
v___x_512_ = l_Lean_Meta_withNewEqs___redArg(v_targets_504_, v_targetsNew_505_, v_k_506_, v_a_507_, v_a_508_, v_a_509_, v_a_510_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs___boxed(lean_object* v_00_u03b1_513_, lean_object* v_targets_514_, lean_object* v_targetsNew_515_, lean_object* v_k_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Lean_Meta_withNewEqs(v_00_u03b1_513_, v_targets_514_, v_targetsNew_515_, v_k_516_, v_a_517_, v_a_518_, v_a_519_, v_a_520_);
lean_dec(v_a_520_);
lean_dec_ref(v_a_519_);
lean_dec(v_a_518_);
lean_dec_ref(v_a_517_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___lam__0(lean_object* v_k_523_, lean_object* v_b_524_, lean_object* v_c_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_){
_start:
{
lean_object* v___x_531_; 
lean_inc(v___y_529_);
lean_inc_ref(v___y_528_);
lean_inc(v___y_527_);
lean_inc_ref(v___y_526_);
v___x_531_ = lean_apply_7(v_k_523_, v_b_524_, v_c_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_, lean_box(0));
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___lam__0___boxed(lean_object* v_k_532_, lean_object* v_b_533_, lean_object* v_c_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___lam__0(v_k_532_, v_b_533_, v_c_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_);
lean_dec(v___y_538_);
lean_dec_ref(v___y_537_);
lean_dec(v___y_536_);
lean_dec_ref(v___y_535_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg(lean_object* v_type_541_, lean_object* v_k_542_, uint8_t v_cleanupAnnotations_543_, uint8_t v_whnfType_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_){
_start:
{
lean_object* v___f_550_; lean_object* v___x_551_; 
v___f_550_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_550_, 0, v_k_542_);
v___x_551_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_541_, v___f_550_, v_cleanupAnnotations_543_, v_whnfType_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_);
if (lean_obj_tag(v___x_551_) == 0)
{
lean_object* v_a_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_559_; 
v_a_552_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_559_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_559_ == 0)
{
v___x_554_ = v___x_551_;
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_a_552_);
lean_dec(v___x_551_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_557_; 
if (v_isShared_555_ == 0)
{
v___x_557_ = v___x_554_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_a_552_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
}
else
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_567_; 
v_a_560_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_567_ == 0)
{
v___x_562_ = v___x_551_;
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_551_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_565_; 
if (v_isShared_563_ == 0)
{
v___x_565_ = v___x_562_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v_a_560_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___boxed(lean_object* v_type_568_, lean_object* v_k_569_, lean_object* v_cleanupAnnotations_570_, lean_object* v_whnfType_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_577_; uint8_t v_whnfType_boxed_578_; lean_object* v_res_579_; 
v_cleanupAnnotations_boxed_577_ = lean_unbox(v_cleanupAnnotations_570_);
v_whnfType_boxed_578_ = lean_unbox(v_whnfType_571_);
v_res_579_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg(v_type_568_, v_k_569_, v_cleanupAnnotations_boxed_577_, v_whnfType_boxed_578_, v___y_572_, v___y_573_, v___y_574_, v___y_575_);
lean_dec(v___y_575_);
lean_dec_ref(v___y_574_);
lean_dec(v___y_573_);
lean_dec_ref(v___y_572_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0(lean_object* v_00_u03b1_580_, lean_object* v_type_581_, lean_object* v_k_582_, uint8_t v_cleanupAnnotations_583_, uint8_t v_whnfType_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg(v_type_581_, v_k_582_, v_cleanupAnnotations_583_, v_whnfType_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___boxed(lean_object* v_00_u03b1_591_, lean_object* v_type_592_, lean_object* v_k_593_, lean_object* v_cleanupAnnotations_594_, lean_object* v_whnfType_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_601_; uint8_t v_whnfType_boxed_602_; lean_object* v_res_603_; 
v_cleanupAnnotations_boxed_601_ = lean_unbox(v_cleanupAnnotations_594_);
v_whnfType_boxed_602_ = lean_unbox(v_whnfType_595_);
v_res_603_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0(v_00_u03b1_591_, v_type_592_, v_k_593_, v_cleanupAnnotations_boxed_601_, v_whnfType_boxed_602_, v___y_596_, v___y_597_, v___y_598_, v___y_599_);
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
lean_dec(v___y_597_);
lean_dec_ref(v___y_596_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(lean_object* v_mvarId_604_, lean_object* v_x_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_){
_start:
{
lean_object* v___x_611_; 
v___x_611_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_604_, v_x_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_);
if (lean_obj_tag(v___x_611_) == 0)
{
lean_object* v_a_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_619_; 
v_a_612_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_619_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_619_ == 0)
{
v___x_614_ = v___x_611_;
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_a_612_);
lean_dec(v___x_611_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___x_617_; 
if (v_isShared_615_ == 0)
{
v___x_617_ = v___x_614_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_a_612_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
return v___x_617_;
}
}
}
else
{
lean_object* v_a_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_627_; 
v_a_620_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_627_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_627_ == 0)
{
v___x_622_ = v___x_611_;
v_isShared_623_ = v_isSharedCheck_627_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_a_620_);
lean_dec(v___x_611_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_627_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v___x_625_; 
if (v_isShared_623_ == 0)
{
v___x_625_ = v___x_622_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v_a_620_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg___boxed(lean_object* v_mvarId_628_, lean_object* v_x_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_){
_start:
{
lean_object* v_res_635_; 
v_res_635_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_628_, v_x_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_);
lean_dec(v___y_633_);
lean_dec_ref(v___y_632_);
lean_dec(v___y_631_);
lean_dec_ref(v___y_630_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2(lean_object* v_00_u03b1_636_, lean_object* v_mvarId_637_, lean_object* v_x_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_){
_start:
{
lean_object* v___x_644_; 
v___x_644_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_637_, v_x_638_, v___y_639_, v___y_640_, v___y_641_, v___y_642_);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___boxed(lean_object* v_00_u03b1_645_, lean_object* v_mvarId_646_, lean_object* v_x_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2(v_00_u03b1_645_, v_mvarId_646_, v_x_647_, v___y_648_, v___y_649_, v___y_650_, v___y_651_);
lean_dec(v___y_651_);
lean_dec_ref(v___y_650_);
lean_dec(v___y_649_);
lean_dec_ref(v___y_648_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__0(lean_object* v_mvarId_654_, lean_object* v___x_655_, lean_object* v_eqs_656_, lean_object* v_eqRefls_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_){
_start:
{
lean_object* v___x_663_; 
v___x_663_ = l_Lean_MVarId_getType(v_mvarId_654_, v___y_658_, v___y_659_, v___y_660_, v___y_661_);
if (lean_obj_tag(v___x_663_) == 0)
{
lean_object* v_a_664_; uint8_t v___x_665_; uint8_t v___x_666_; uint8_t v___x_667_; lean_object* v___x_668_; 
v_a_664_ = lean_ctor_get(v___x_663_, 0);
lean_inc(v_a_664_);
lean_dec_ref_known(v___x_663_, 1);
v___x_665_ = 0;
v___x_666_ = 1;
v___x_667_ = 1;
v___x_668_ = l_Lean_Meta_mkForallFVars(v_eqs_656_, v_a_664_, v___x_665_, v___x_666_, v___x_666_, v___x_667_, v___y_658_, v___y_659_, v___y_660_, v___y_661_);
if (lean_obj_tag(v___x_668_) == 0)
{
lean_object* v_a_669_; lean_object* v___x_670_; 
v_a_669_ = lean_ctor_get(v___x_668_, 0);
lean_inc(v_a_669_);
lean_dec_ref_known(v___x_668_, 1);
v___x_670_ = l_Lean_Meta_mkForallFVars(v___x_655_, v_a_669_, v___x_665_, v___x_666_, v___x_666_, v___x_667_, v___y_658_, v___y_659_, v___y_660_, v___y_661_);
if (lean_obj_tag(v___x_670_) == 0)
{
lean_object* v_a_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_679_; 
v_a_671_ = lean_ctor_get(v___x_670_, 0);
v_isSharedCheck_679_ = !lean_is_exclusive(v___x_670_);
if (v_isSharedCheck_679_ == 0)
{
v___x_673_ = v___x_670_;
v_isShared_674_ = v_isSharedCheck_679_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_a_671_);
lean_dec(v___x_670_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_679_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_675_; lean_object* v___x_677_; 
v___x_675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_675_, 0, v_a_671_);
lean_ctor_set(v___x_675_, 1, v_eqRefls_657_);
if (v_isShared_674_ == 0)
{
lean_ctor_set(v___x_673_, 0, v___x_675_);
v___x_677_ = v___x_673_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v___x_675_);
v___x_677_ = v_reuseFailAlloc_678_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
return v___x_677_;
}
}
}
else
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_687_; 
lean_dec_ref(v_eqRefls_657_);
v_a_680_ = lean_ctor_get(v___x_670_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_670_);
if (v_isSharedCheck_687_ == 0)
{
v___x_682_ = v___x_670_;
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v___x_670_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_685_; 
if (v_isShared_683_ == 0)
{
v___x_685_ = v___x_682_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_a_680_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
}
else
{
lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_695_; 
lean_dec_ref(v_eqRefls_657_);
lean_dec_ref(v___x_655_);
v_a_688_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_695_ == 0)
{
v___x_690_ = v___x_668_;
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_dec(v___x_668_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_693_; 
if (v_isShared_691_ == 0)
{
v___x_693_ = v___x_690_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_a_688_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
return v___x_693_;
}
}
}
}
else
{
lean_object* v_a_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_703_; 
lean_dec_ref(v_eqRefls_657_);
lean_dec_ref(v_eqs_656_);
lean_dec_ref(v___x_655_);
v_a_696_ = lean_ctor_get(v___x_663_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_703_ == 0)
{
v___x_698_ = v___x_663_;
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_a_696_);
lean_dec(v___x_663_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_701_; 
if (v_isShared_699_ == 0)
{
v___x_701_ = v___x_698_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_a_696_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__0___boxed(lean_object* v_mvarId_704_, lean_object* v___x_705_, lean_object* v_eqs_706_, lean_object* v_eqRefls_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l_Lean_Meta_generalizeTargetsEq___lam__0(v_mvarId_704_, v___x_705_, v_eqs_706_, v_eqRefls_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
lean_dec(v___y_709_);
lean_dec_ref(v___y_708_);
return v_res_713_;
}
}
static lean_object* _init_l_Lean_Meta_generalizeTargetsEq___lam__1___closed__1(void){
_start:
{
lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_715_ = ((lean_object*)(l_Lean_Meta_generalizeTargetsEq___lam__1___closed__0));
v___x_716_ = l_Lean_stringToMessageData(v___x_715_);
return v___x_716_;
}
}
static lean_object* _init_l_Lean_Meta_generalizeTargetsEq___lam__1___closed__3(void){
_start:
{
lean_object* v___x_718_; lean_object* v___x_719_; 
v___x_718_ = ((lean_object*)(l_Lean_Meta_generalizeTargetsEq___lam__1___closed__2));
v___x_719_ = l_Lean_stringToMessageData(v___x_718_);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1(lean_object* v_targets_720_, lean_object* v_mvarId_721_, lean_object* v_targetsNew_722_, lean_object* v_x_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_){
_start:
{
lean_object* v___x_736_; lean_object* v___x_737_; uint8_t v___x_738_; 
v___x_736_ = lean_array_get_size(v_targets_720_);
v___x_737_ = lean_array_get_size(v_targetsNew_722_);
v___x_738_ = lean_nat_dec_le(v___x_736_, v___x_737_);
if (v___x_738_ == 0)
{
lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
lean_dec_ref(v_targetsNew_722_);
lean_dec(v_mvarId_721_);
lean_dec_ref(v_targets_720_);
v___x_739_ = lean_obj_once(&l_Lean_Meta_generalizeTargetsEq___lam__1___closed__1, &l_Lean_Meta_generalizeTargetsEq___lam__1___closed__1_once, _init_l_Lean_Meta_generalizeTargetsEq___lam__1___closed__1);
v___x_740_ = l_Nat_reprFast(v___x_736_);
v___x_741_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_741_, 0, v___x_740_);
v___x_742_ = l_Lean_MessageData_ofFormat(v___x_741_);
v___x_743_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_743_, 0, v___x_739_);
lean_ctor_set(v___x_743_, 1, v___x_742_);
v___x_744_ = lean_obj_once(&l_Lean_Meta_generalizeTargetsEq___lam__1___closed__3, &l_Lean_Meta_generalizeTargetsEq___lam__1___closed__3_once, _init_l_Lean_Meta_generalizeTargetsEq___lam__1___closed__3);
v___x_745_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_745_, 0, v___x_743_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
v___x_746_ = l_Nat_reprFast(v___x_737_);
v___x_747_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_747_, 0, v___x_746_);
v___x_748_ = l_Lean_MessageData_ofFormat(v___x_747_);
v___x_749_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_749_, 0, v___x_745_);
lean_ctor_set(v___x_749_, 1, v___x_748_);
v___x_750_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg(v___x_749_, v___y_724_, v___y_725_, v___y_726_, v___y_727_);
v_a_751_ = lean_ctor_get(v___x_750_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v___x_750_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v___x_750_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_756_; 
if (v_isShared_754_ == 0)
{
v___x_756_ = v___x_753_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_a_751_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
}
else
{
goto v___jp_729_;
}
v___jp_729_:
{
lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___f_734_; lean_object* v___x_735_; 
v___x_730_ = lean_array_get_size(v_targets_720_);
v___x_731_ = lean_unsigned_to_nat(0u);
v___x_732_ = l_Array_toSubarray___redArg(v_targetsNew_722_, v___x_731_, v___x_730_);
v___x_733_ = l_Subarray_copy___redArg(v___x_732_);
lean_inc_ref(v___x_733_);
v___f_734_ = lean_alloc_closure((void*)(l_Lean_Meta_generalizeTargetsEq___lam__0___boxed), 9, 2);
lean_closure_set(v___f_734_, 0, v_mvarId_721_);
lean_closure_set(v___f_734_, 1, v___x_733_);
v___x_735_ = l_Lean_Meta_withNewEqs___redArg(v_targets_720_, v___x_733_, v___f_734_, v___y_724_, v___y_725_, v___y_726_, v___y_727_);
return v___x_735_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1___boxed(lean_object* v_targets_759_, lean_object* v_mvarId_760_, lean_object* v_targetsNew_761_, lean_object* v_x_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = l_Lean_Meta_generalizeTargetsEq___lam__1(v_targets_759_, v_mvarId_760_, v_targetsNew_761_, v_x_762_, v___y_763_, v___y_764_, v___y_765_, v___y_766_);
lean_dec(v___y_766_);
lean_dec_ref(v___y_765_);
lean_dec(v___y_764_);
lean_dec_ref(v___y_763_);
lean_dec_ref(v_x_762_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_769_, lean_object* v_x_770_, lean_object* v_x_771_, lean_object* v_x_772_){
_start:
{
lean_object* v_ks_773_; lean_object* v_vs_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_798_; 
v_ks_773_ = lean_ctor_get(v_x_769_, 0);
v_vs_774_ = lean_ctor_get(v_x_769_, 1);
v_isSharedCheck_798_ = !lean_is_exclusive(v_x_769_);
if (v_isSharedCheck_798_ == 0)
{
v___x_776_ = v_x_769_;
v_isShared_777_ = v_isSharedCheck_798_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_vs_774_);
lean_inc(v_ks_773_);
lean_dec(v_x_769_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_798_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_778_; uint8_t v___x_779_; 
v___x_778_ = lean_array_get_size(v_ks_773_);
v___x_779_ = lean_nat_dec_lt(v_x_770_, v___x_778_);
if (v___x_779_ == 0)
{
lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_783_; 
lean_dec(v_x_770_);
v___x_780_ = lean_array_push(v_ks_773_, v_x_771_);
v___x_781_ = lean_array_push(v_vs_774_, v_x_772_);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 1, v___x_781_);
lean_ctor_set(v___x_776_, 0, v___x_780_);
v___x_783_ = v___x_776_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v___x_780_);
lean_ctor_set(v_reuseFailAlloc_784_, 1, v___x_781_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
else
{
lean_object* v_k_x27_785_; uint8_t v___x_786_; 
v_k_x27_785_ = lean_array_fget_borrowed(v_ks_773_, v_x_770_);
v___x_786_ = l_Lean_instBEqMVarId_beq(v_x_771_, v_k_x27_785_);
if (v___x_786_ == 0)
{
lean_object* v___x_788_; 
if (v_isShared_777_ == 0)
{
v___x_788_ = v___x_776_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_ks_773_);
lean_ctor_set(v_reuseFailAlloc_792_, 1, v_vs_774_);
v___x_788_ = v_reuseFailAlloc_792_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_789_ = lean_unsigned_to_nat(1u);
v___x_790_ = lean_nat_add(v_x_770_, v___x_789_);
lean_dec(v_x_770_);
v_x_769_ = v___x_788_;
v_x_770_ = v___x_790_;
goto _start;
}
}
else
{
lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_796_; 
v___x_793_ = lean_array_fset(v_ks_773_, v_x_770_, v_x_771_);
v___x_794_ = lean_array_fset(v_vs_774_, v_x_770_, v_x_772_);
lean_dec(v_x_770_);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 1, v___x_794_);
lean_ctor_set(v___x_776_, 0, v___x_793_);
v___x_796_ = v___x_776_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v___x_793_);
lean_ctor_set(v_reuseFailAlloc_797_, 1, v___x_794_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4___redArg(lean_object* v_n_799_, lean_object* v_k_800_, lean_object* v_v_801_){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_802_ = lean_unsigned_to_nat(0u);
v___x_803_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(v_n_799_, v___x_802_, v_k_800_, v_v_801_);
return v___x_803_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_804_ = lean_box(0);
v___x_805_ = l_unsafeCast___redArg(v___x_804_);
return v___x_805_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_806_; 
v___x_806_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg(lean_object* v_x_807_, size_t v_x_808_, size_t v_x_809_, lean_object* v_x_810_, lean_object* v_x_811_){
_start:
{
if (lean_obj_tag(v_x_807_) == 0)
{
lean_object* v_es_812_; size_t v___x_813_; size_t v___x_814_; lean_object* v_j_815_; lean_object* v___x_816_; uint8_t v___x_817_; 
v_es_812_ = lean_ctor_get(v_x_807_, 0);
v___x_813_ = ((size_t)31ULL);
v___x_814_ = lean_usize_land(v_x_808_, v___x_813_);
v_j_815_ = lean_usize_to_nat(v___x_814_);
v___x_816_ = lean_array_get_size(v_es_812_);
v___x_817_ = lean_nat_dec_lt(v_j_815_, v___x_816_);
if (v___x_817_ == 0)
{
lean_dec(v_j_815_);
lean_dec(v_x_811_);
lean_dec(v_x_810_);
return v_x_807_;
}
else
{
lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_856_; 
lean_inc_ref(v_es_812_);
v_isSharedCheck_856_ = !lean_is_exclusive(v_x_807_);
if (v_isSharedCheck_856_ == 0)
{
lean_object* v_unused_857_; 
v_unused_857_ = lean_ctor_get(v_x_807_, 0);
lean_dec(v_unused_857_);
v___x_819_ = v_x_807_;
v_isShared_820_ = v_isSharedCheck_856_;
goto v_resetjp_818_;
}
else
{
lean_dec(v_x_807_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_856_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
lean_object* v_v_821_; lean_object* v___x_822_; lean_object* v_xs_x27_823_; lean_object* v___y_825_; 
v_v_821_ = lean_array_fget(v_es_812_, v_j_815_);
v___x_822_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__0);
v_xs_x27_823_ = lean_array_fset(v_es_812_, v_j_815_, v___x_822_);
switch(lean_obj_tag(v_v_821_))
{
case 0:
{
lean_object* v_key_830_; lean_object* v_val_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_841_; 
v_key_830_ = lean_ctor_get(v_v_821_, 0);
v_val_831_ = lean_ctor_get(v_v_821_, 1);
v_isSharedCheck_841_ = !lean_is_exclusive(v_v_821_);
if (v_isSharedCheck_841_ == 0)
{
v___x_833_ = v_v_821_;
v_isShared_834_ = v_isSharedCheck_841_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_val_831_);
lean_inc(v_key_830_);
lean_dec(v_v_821_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_841_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
uint8_t v___x_835_; 
v___x_835_ = l_Lean_instBEqMVarId_beq(v_x_810_, v_key_830_);
if (v___x_835_ == 0)
{
lean_object* v___x_836_; lean_object* v___x_837_; 
lean_del_object(v___x_833_);
v___x_836_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_830_, v_val_831_, v_x_810_, v_x_811_);
v___x_837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
v___y_825_ = v___x_837_;
goto v___jp_824_;
}
else
{
lean_object* v___x_839_; 
lean_dec(v_val_831_);
lean_dec(v_key_830_);
if (v_isShared_834_ == 0)
{
lean_ctor_set(v___x_833_, 1, v_x_811_);
lean_ctor_set(v___x_833_, 0, v_x_810_);
v___x_839_ = v___x_833_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_x_810_);
lean_ctor_set(v_reuseFailAlloc_840_, 1, v_x_811_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
v___y_825_ = v___x_839_;
goto v___jp_824_;
}
}
}
}
case 1:
{
lean_object* v_node_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_854_; 
v_node_842_ = lean_ctor_get(v_v_821_, 0);
v_isSharedCheck_854_ = !lean_is_exclusive(v_v_821_);
if (v_isSharedCheck_854_ == 0)
{
v___x_844_ = v_v_821_;
v_isShared_845_ = v_isSharedCheck_854_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_node_842_);
lean_dec(v_v_821_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_854_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
size_t v___x_846_; size_t v___x_847_; size_t v___x_848_; size_t v___x_849_; lean_object* v___x_850_; lean_object* v___x_852_; 
v___x_846_ = ((size_t)5ULL);
v___x_847_ = lean_usize_shift_right(v_x_808_, v___x_846_);
v___x_848_ = ((size_t)1ULL);
v___x_849_ = lean_usize_add(v_x_809_, v___x_848_);
v___x_850_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg(v_node_842_, v___x_847_, v___x_849_, v_x_810_, v_x_811_);
if (v_isShared_845_ == 0)
{
lean_ctor_set(v___x_844_, 0, v___x_850_);
v___x_852_ = v___x_844_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v___x_850_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
v___y_825_ = v___x_852_;
goto v___jp_824_;
}
}
}
default: 
{
lean_object* v___x_855_; 
v___x_855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_855_, 0, v_x_810_);
lean_ctor_set(v___x_855_, 1, v_x_811_);
v___y_825_ = v___x_855_;
goto v___jp_824_;
}
}
v___jp_824_:
{
lean_object* v___x_826_; lean_object* v___x_828_; 
v___x_826_ = lean_array_fset(v_xs_x27_823_, v_j_815_, v___y_825_);
lean_dec(v_j_815_);
if (v_isShared_820_ == 0)
{
lean_ctor_set(v___x_819_, 0, v___x_826_);
v___x_828_ = v___x_819_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v___x_826_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
}
}
else
{
lean_object* v_ks_858_; lean_object* v_vs_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_877_; 
v_ks_858_ = lean_ctor_get(v_x_807_, 0);
v_vs_859_ = lean_ctor_get(v_x_807_, 1);
v_isSharedCheck_877_ = !lean_is_exclusive(v_x_807_);
if (v_isSharedCheck_877_ == 0)
{
v___x_861_ = v_x_807_;
v_isShared_862_ = v_isSharedCheck_877_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_vs_859_);
lean_inc(v_ks_858_);
lean_dec(v_x_807_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_877_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v___x_864_; 
if (v_isShared_862_ == 0)
{
v___x_864_ = v___x_861_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_ks_858_);
lean_ctor_set(v_reuseFailAlloc_876_, 1, v_vs_859_);
v___x_864_ = v_reuseFailAlloc_876_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
lean_object* v_newNode_865_; size_t v___x_866_; uint8_t v___x_867_; 
v_newNode_865_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4___redArg(v___x_864_, v_x_810_, v_x_811_);
v___x_866_ = ((size_t)7ULL);
v___x_867_ = lean_usize_dec_le(v___x_866_, v_x_809_);
if (v___x_867_ == 0)
{
lean_object* v___x_868_; lean_object* v___x_869_; uint8_t v___x_870_; 
v___x_868_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_865_);
v___x_869_ = lean_unsigned_to_nat(4u);
v___x_870_ = lean_nat_dec_lt(v___x_868_, v___x_869_);
lean_dec(v___x_868_);
if (v___x_870_ == 0)
{
lean_object* v_ks_871_; lean_object* v_vs_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v_ks_871_ = lean_ctor_get(v_newNode_865_, 0);
lean_inc_ref(v_ks_871_);
v_vs_872_ = lean_ctor_get(v_newNode_865_, 1);
lean_inc_ref(v_vs_872_);
lean_dec_ref(v_newNode_865_);
v___x_873_ = lean_unsigned_to_nat(0u);
v___x_874_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__1);
v___x_875_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___redArg(v_x_809_, v_ks_871_, v_vs_872_, v___x_873_, v___x_874_);
lean_dec_ref(v_vs_872_);
lean_dec_ref(v_ks_871_);
return v___x_875_;
}
else
{
return v_newNode_865_;
}
}
else
{
return v_newNode_865_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___redArg(size_t v_depth_878_, lean_object* v_keys_879_, lean_object* v_vals_880_, lean_object* v_i_881_, lean_object* v_entries_882_){
_start:
{
lean_object* v___x_883_; uint8_t v___x_884_; 
v___x_883_ = lean_array_get_size(v_keys_879_);
v___x_884_ = lean_nat_dec_lt(v_i_881_, v___x_883_);
if (v___x_884_ == 0)
{
lean_dec(v_i_881_);
return v_entries_882_;
}
else
{
lean_object* v_k_885_; lean_object* v_v_886_; uint64_t v___x_887_; size_t v_h_888_; size_t v___x_889_; lean_object* v___x_890_; size_t v___x_891_; size_t v___x_892_; size_t v___x_893_; size_t v_h_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v_k_885_ = lean_array_fget_borrowed(v_keys_879_, v_i_881_);
v_v_886_ = lean_array_fget_borrowed(v_vals_880_, v_i_881_);
v___x_887_ = l_Lean_instHashableMVarId_hash(v_k_885_);
v_h_888_ = lean_uint64_to_usize(v___x_887_);
v___x_889_ = ((size_t)5ULL);
v___x_890_ = lean_unsigned_to_nat(1u);
v___x_891_ = ((size_t)1ULL);
v___x_892_ = lean_usize_sub(v_depth_878_, v___x_891_);
v___x_893_ = lean_usize_mul(v___x_889_, v___x_892_);
v_h_894_ = lean_usize_shift_right(v_h_888_, v___x_893_);
v___x_895_ = lean_nat_add(v_i_881_, v___x_890_);
lean_dec(v_i_881_);
lean_inc(v_v_886_);
lean_inc(v_k_885_);
v___x_896_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg(v_entries_882_, v_h_894_, v_depth_878_, v_k_885_, v_v_886_);
v_i_881_ = v___x_895_;
v_entries_882_ = v___x_896_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_depth_898_, lean_object* v_keys_899_, lean_object* v_vals_900_, lean_object* v_i_901_, lean_object* v_entries_902_){
_start:
{
size_t v_depth_boxed_903_; lean_object* v_res_904_; 
v_depth_boxed_903_ = lean_unbox_usize(v_depth_898_);
lean_dec(v_depth_898_);
v_res_904_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___redArg(v_depth_boxed_903_, v_keys_899_, v_vals_900_, v_i_901_, v_entries_902_);
lean_dec_ref(v_vals_900_);
lean_dec_ref(v_keys_899_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_x_905_, lean_object* v_x_906_, lean_object* v_x_907_, lean_object* v_x_908_, lean_object* v_x_909_){
_start:
{
size_t v_x_2561__boxed_910_; size_t v_x_2562__boxed_911_; lean_object* v_res_912_; 
v_x_2561__boxed_910_ = lean_unbox_usize(v_x_906_);
lean_dec(v_x_906_);
v_x_2562__boxed_911_ = lean_unbox_usize(v_x_907_);
lean_dec(v_x_907_);
v_res_912_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg(v_x_905_, v_x_2561__boxed_910_, v_x_2562__boxed_911_, v_x_908_, v_x_909_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1___redArg(lean_object* v_x_913_, lean_object* v_x_914_, lean_object* v_x_915_){
_start:
{
uint64_t v___x_916_; size_t v___x_917_; size_t v___x_918_; lean_object* v___x_919_; 
v___x_916_ = l_Lean_instHashableMVarId_hash(v_x_914_);
v___x_917_ = lean_uint64_to_usize(v___x_916_);
v___x_918_ = ((size_t)1ULL);
v___x_919_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg(v_x_913_, v___x_917_, v___x_918_, v_x_914_, v_x_915_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(lean_object* v_mvarId_920_, lean_object* v_val_921_, lean_object* v___y_922_){
_start:
{
lean_object* v___x_924_; lean_object* v_mctx_925_; lean_object* v_cache_926_; lean_object* v_zetaDeltaFVarIds_927_; lean_object* v_postponed_928_; lean_object* v_diag_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_958_; 
v___x_924_ = lean_st_ref_take(v___y_922_);
v_mctx_925_ = lean_ctor_get(v___x_924_, 0);
v_cache_926_ = lean_ctor_get(v___x_924_, 1);
v_zetaDeltaFVarIds_927_ = lean_ctor_get(v___x_924_, 2);
v_postponed_928_ = lean_ctor_get(v___x_924_, 3);
v_diag_929_ = lean_ctor_get(v___x_924_, 4);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_924_);
if (v_isSharedCheck_958_ == 0)
{
v___x_931_ = v___x_924_;
v_isShared_932_ = v_isSharedCheck_958_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_diag_929_);
lean_inc(v_postponed_928_);
lean_inc(v_zetaDeltaFVarIds_927_);
lean_inc(v_cache_926_);
lean_inc(v_mctx_925_);
lean_dec(v___x_924_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_958_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
lean_object* v_depth_933_; lean_object* v_levelAssignDepth_934_; lean_object* v_lmvarCounter_935_; lean_object* v_mvarCounter_936_; lean_object* v_lDecls_937_; lean_object* v_decls_938_; lean_object* v_userNames_939_; lean_object* v_lAssignment_940_; lean_object* v_eAssignment_941_; lean_object* v_dAssignment_942_; lean_object* v_instanceTypedMVars_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_957_; 
v_depth_933_ = lean_ctor_get(v_mctx_925_, 0);
v_levelAssignDepth_934_ = lean_ctor_get(v_mctx_925_, 1);
v_lmvarCounter_935_ = lean_ctor_get(v_mctx_925_, 2);
v_mvarCounter_936_ = lean_ctor_get(v_mctx_925_, 3);
v_lDecls_937_ = lean_ctor_get(v_mctx_925_, 4);
v_decls_938_ = lean_ctor_get(v_mctx_925_, 5);
v_userNames_939_ = lean_ctor_get(v_mctx_925_, 6);
v_lAssignment_940_ = lean_ctor_get(v_mctx_925_, 7);
v_eAssignment_941_ = lean_ctor_get(v_mctx_925_, 8);
v_dAssignment_942_ = lean_ctor_get(v_mctx_925_, 9);
v_instanceTypedMVars_943_ = lean_ctor_get(v_mctx_925_, 10);
v_isSharedCheck_957_ = !lean_is_exclusive(v_mctx_925_);
if (v_isSharedCheck_957_ == 0)
{
v___x_945_ = v_mctx_925_;
v_isShared_946_ = v_isSharedCheck_957_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_instanceTypedMVars_943_);
lean_inc(v_dAssignment_942_);
lean_inc(v_eAssignment_941_);
lean_inc(v_lAssignment_940_);
lean_inc(v_userNames_939_);
lean_inc(v_decls_938_);
lean_inc(v_lDecls_937_);
lean_inc(v_mvarCounter_936_);
lean_inc(v_lmvarCounter_935_);
lean_inc(v_levelAssignDepth_934_);
lean_inc(v_depth_933_);
lean_dec(v_mctx_925_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_957_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_950_; 
v___x_947_ = lean_box(0);
v___x_948_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1___redArg(v_eAssignment_941_, v_mvarId_920_, v_val_921_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 8, v___x_948_);
v___x_950_ = v___x_945_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_depth_933_);
lean_ctor_set(v_reuseFailAlloc_956_, 1, v_levelAssignDepth_934_);
lean_ctor_set(v_reuseFailAlloc_956_, 2, v_lmvarCounter_935_);
lean_ctor_set(v_reuseFailAlloc_956_, 3, v_mvarCounter_936_);
lean_ctor_set(v_reuseFailAlloc_956_, 4, v_lDecls_937_);
lean_ctor_set(v_reuseFailAlloc_956_, 5, v_decls_938_);
lean_ctor_set(v_reuseFailAlloc_956_, 6, v_userNames_939_);
lean_ctor_set(v_reuseFailAlloc_956_, 7, v_lAssignment_940_);
lean_ctor_set(v_reuseFailAlloc_956_, 8, v___x_948_);
lean_ctor_set(v_reuseFailAlloc_956_, 9, v_dAssignment_942_);
lean_ctor_set(v_reuseFailAlloc_956_, 10, v_instanceTypedMVars_943_);
v___x_950_ = v_reuseFailAlloc_956_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
lean_object* v___x_952_; 
if (v_isShared_932_ == 0)
{
lean_ctor_set(v___x_931_, 0, v___x_950_);
v___x_952_ = v___x_931_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v___x_950_);
lean_ctor_set(v_reuseFailAlloc_955_, 1, v_cache_926_);
lean_ctor_set(v_reuseFailAlloc_955_, 2, v_zetaDeltaFVarIds_927_);
lean_ctor_set(v_reuseFailAlloc_955_, 3, v_postponed_928_);
lean_ctor_set(v_reuseFailAlloc_955_, 4, v_diag_929_);
v___x_952_ = v_reuseFailAlloc_955_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_953_ = lean_st_ref_put(v___y_922_, v___x_952_);
v___x_954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_954_, 0, v___x_947_);
return v___x_954_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg___boxed(lean_object* v_mvarId_959_, lean_object* v_val_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
lean_object* v_res_963_; 
v_res_963_ = l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(v_mvarId_959_, v_val_960_, v___y_961_);
lean_dec(v___y_961_);
return v_res_963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__2(lean_object* v_mvarId_964_, lean_object* v___x_965_, lean_object* v_motiveType_966_, lean_object* v___f_967_, lean_object* v_targets_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_){
_start:
{
lean_object* v___x_974_; 
lean_inc(v_mvarId_964_);
v___x_974_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_964_, v___x_965_, v___y_969_, v___y_970_, v___y_971_, v___y_972_);
if (lean_obj_tag(v___x_974_) == 0)
{
uint8_t v___x_975_; lean_object* v___x_976_; 
lean_dec_ref_known(v___x_974_, 1);
v___x_975_ = 0;
v___x_976_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg(v_motiveType_966_, v___f_967_, v___x_975_, v___x_975_, v___y_969_, v___y_970_, v___y_971_, v___y_972_);
if (lean_obj_tag(v___x_976_) == 0)
{
lean_object* v_a_977_; lean_object* v_fst_978_; lean_object* v_snd_979_; lean_object* v___x_980_; 
v_a_977_ = lean_ctor_get(v___x_976_, 0);
lean_inc(v_a_977_);
lean_dec_ref_known(v___x_976_, 1);
v_fst_978_ = lean_ctor_get(v_a_977_, 0);
lean_inc(v_fst_978_);
v_snd_979_ = lean_ctor_get(v_a_977_, 1);
lean_inc(v_snd_979_);
lean_dec(v_a_977_);
lean_inc(v_mvarId_964_);
v___x_980_ = l_Lean_MVarId_getTag(v_mvarId_964_, v___y_969_, v___y_970_, v___y_971_, v___y_972_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v_a_981_; lean_object* v___x_982_; 
v_a_981_ = lean_ctor_get(v___x_980_, 0);
lean_inc(v_a_981_);
lean_dec_ref_known(v___x_980_, 1);
v___x_982_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_fst_978_, v_a_981_, v___y_969_, v___y_970_, v___y_971_, v___y_972_);
if (lean_obj_tag(v___x_982_) == 0)
{
lean_object* v_a_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_994_; 
v_a_983_ = lean_ctor_get(v___x_982_, 0);
lean_inc_n(v_a_983_, 2);
lean_dec_ref_known(v___x_982_, 1);
v___x_984_ = l_Lean_mkAppN(v_a_983_, v_targets_968_);
v___x_985_ = l_Lean_mkAppN(v___x_984_, v_snd_979_);
lean_dec(v_snd_979_);
v___x_986_ = l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(v_mvarId_964_, v___x_985_, v___y_970_);
v_isSharedCheck_994_ = !lean_is_exclusive(v___x_986_);
if (v_isSharedCheck_994_ == 0)
{
lean_object* v_unused_995_; 
v_unused_995_ = lean_ctor_get(v___x_986_, 0);
lean_dec(v_unused_995_);
v___x_988_ = v___x_986_;
v_isShared_989_ = v_isSharedCheck_994_;
goto v_resetjp_987_;
}
else
{
lean_dec(v___x_986_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_994_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_990_; lean_object* v___x_992_; 
v___x_990_ = l_Lean_Expr_mvarId_x21(v_a_983_);
lean_dec(v_a_983_);
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 0, v___x_990_);
v___x_992_ = v___x_988_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v___x_990_);
v___x_992_ = v_reuseFailAlloc_993_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
return v___x_992_;
}
}
}
else
{
lean_object* v_a_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1003_; 
lean_dec(v_snd_979_);
lean_dec(v_mvarId_964_);
v_a_996_ = lean_ctor_get(v___x_982_, 0);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_998_ = v___x_982_;
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_a_996_);
lean_dec(v___x_982_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___x_1001_; 
if (v_isShared_999_ == 0)
{
v___x_1001_ = v___x_998_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_a_996_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
return v___x_1001_;
}
}
}
}
else
{
lean_object* v_a_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1011_; 
lean_dec(v_snd_979_);
lean_dec(v_fst_978_);
lean_dec(v_mvarId_964_);
v_a_1004_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1006_ = v___x_980_;
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_a_1004_);
lean_dec(v___x_980_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1009_; 
if (v_isShared_1007_ == 0)
{
v___x_1009_ = v___x_1006_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_a_1004_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
}
else
{
lean_object* v_a_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1019_; 
lean_dec(v_mvarId_964_);
v_a_1012_ = lean_ctor_get(v___x_976_, 0);
v_isSharedCheck_1019_ = !lean_is_exclusive(v___x_976_);
if (v_isSharedCheck_1019_ == 0)
{
v___x_1014_ = v___x_976_;
v_isShared_1015_ = v_isSharedCheck_1019_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_a_1012_);
lean_dec(v___x_976_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1019_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v___x_1017_; 
if (v_isShared_1015_ == 0)
{
v___x_1017_ = v___x_1014_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v_a_1012_);
v___x_1017_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
return v___x_1017_;
}
}
}
}
else
{
lean_object* v_a_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1027_; 
lean_dec_ref(v___f_967_);
lean_dec_ref(v_motiveType_966_);
lean_dec(v_mvarId_964_);
v_a_1020_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_1027_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_1022_ = v___x_974_;
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_a_1020_);
lean_dec(v___x_974_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1025_; 
if (v_isShared_1023_ == 0)
{
v___x_1025_ = v___x_1022_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v_a_1020_);
v___x_1025_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
return v___x_1025_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__2___boxed(lean_object* v_mvarId_1028_, lean_object* v___x_1029_, lean_object* v_motiveType_1030_, lean_object* v___f_1031_, lean_object* v_targets_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_){
_start:
{
lean_object* v_res_1038_; 
v_res_1038_ = l_Lean_Meta_generalizeTargetsEq___lam__2(v_mvarId_1028_, v___x_1029_, v_motiveType_1030_, v___f_1031_, v_targets_1032_, v___y_1033_, v___y_1034_, v___y_1035_, v___y_1036_);
lean_dec(v___y_1036_);
lean_dec_ref(v___y_1035_);
lean_dec(v___y_1034_);
lean_dec_ref(v___y_1033_);
lean_dec_ref(v_targets_1032_);
return v_res_1038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq(lean_object* v_mvarId_1042_, lean_object* v_motiveType_1043_, lean_object* v_targets_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_){
_start:
{
lean_object* v___f_1050_; lean_object* v___x_1051_; lean_object* v___f_1052_; lean_object* v___x_1053_; 
lean_inc_n(v_mvarId_1042_, 2);
lean_inc_ref(v_targets_1044_);
v___f_1050_ = lean_alloc_closure((void*)(l_Lean_Meta_generalizeTargetsEq___lam__1___boxed), 9, 2);
lean_closure_set(v___f_1050_, 0, v_targets_1044_);
lean_closure_set(v___f_1050_, 1, v_mvarId_1042_);
v___x_1051_ = ((lean_object*)(l_Lean_Meta_generalizeTargetsEq___closed__1));
v___f_1052_ = lean_alloc_closure((void*)(l_Lean_Meta_generalizeTargetsEq___lam__2___boxed), 10, 5);
lean_closure_set(v___f_1052_, 0, v_mvarId_1042_);
lean_closure_set(v___f_1052_, 1, v___x_1051_);
lean_closure_set(v___f_1052_, 2, v_motiveType_1043_);
lean_closure_set(v___f_1052_, 3, v___f_1050_);
lean_closure_set(v___f_1052_, 4, v_targets_1044_);
v___x_1053_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_1042_, v___f_1052_, v_a_1045_, v_a_1046_, v_a_1047_, v_a_1048_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___boxed(lean_object* v_mvarId_1054_, lean_object* v_motiveType_1055_, lean_object* v_targets_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l_Lean_Meta_generalizeTargetsEq(v_mvarId_1054_, v_motiveType_1055_, v_targets_1056_, v_a_1057_, v_a_1058_, v_a_1059_, v_a_1060_);
lean_dec(v_a_1060_);
lean_dec_ref(v_a_1059_);
lean_dec(v_a_1058_);
lean_dec_ref(v_a_1057_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1(lean_object* v_mvarId_1063_, lean_object* v_val_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
lean_object* v___x_1070_; 
v___x_1070_ = l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(v_mvarId_1063_, v_val_1064_, v___y_1066_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___boxed(lean_object* v_mvarId_1071_, lean_object* v_val_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1(v_mvarId_1071_, v_val_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1(lean_object* v_00_u03b2_1079_, lean_object* v_x_1080_, lean_object* v_x_1081_, lean_object* v_x_1082_){
_start:
{
lean_object* v___x_1083_; 
v___x_1083_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1___redArg(v_x_1080_, v_x_1081_, v_x_1082_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_1084_, lean_object* v_x_1085_, size_t v_x_1086_, size_t v_x_1087_, lean_object* v_x_1088_, lean_object* v_x_1089_){
_start:
{
lean_object* v___x_1090_; 
v___x_1090_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg(v_x_1085_, v_x_1086_, v_x_1087_, v_x_1088_, v_x_1089_);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1091_, lean_object* v_x_1092_, lean_object* v_x_1093_, lean_object* v_x_1094_, lean_object* v_x_1095_, lean_object* v_x_1096_){
_start:
{
size_t v_x_2950__boxed_1097_; size_t v_x_2951__boxed_1098_; lean_object* v_res_1099_; 
v_x_2950__boxed_1097_ = lean_unbox_usize(v_x_1093_);
lean_dec(v_x_1093_);
v_x_2951__boxed_1098_ = lean_unbox_usize(v_x_1094_);
lean_dec(v_x_1094_);
v_res_1099_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3(v_00_u03b2_1091_, v_x_1092_, v_x_2950__boxed_1097_, v_x_2951__boxed_1098_, v_x_1095_, v_x_1096_);
return v_res_1099_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_1100_, lean_object* v_n_1101_, lean_object* v_k_1102_, lean_object* v_v_1103_){
_start:
{
lean_object* v___x_1104_; 
v___x_1104_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4___redArg(v_n_1101_, v_k_1102_, v_v_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_1105_, size_t v_depth_1106_, lean_object* v_keys_1107_, lean_object* v_vals_1108_, lean_object* v_heq_1109_, lean_object* v_i_1110_, lean_object* v_entries_1111_){
_start:
{
lean_object* v___x_1112_; 
v___x_1112_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___redArg(v_depth_1106_, v_keys_1107_, v_vals_1108_, v_i_1110_, v_entries_1111_);
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___boxed(lean_object* v_00_u03b2_1113_, lean_object* v_depth_1114_, lean_object* v_keys_1115_, lean_object* v_vals_1116_, lean_object* v_heq_1117_, lean_object* v_i_1118_, lean_object* v_entries_1119_){
_start:
{
size_t v_depth_boxed_1120_; lean_object* v_res_1121_; 
v_depth_boxed_1120_ = lean_unbox_usize(v_depth_1114_);
lean_dec(v_depth_1114_);
v_res_1121_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5(v_00_u03b2_1113_, v_depth_boxed_1120_, v_keys_1115_, v_vals_1116_, v_heq_1117_, v_i_1118_, v_entries_1119_);
lean_dec_ref(v_vals_1116_);
lean_dec_ref(v_keys_1115_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_1122_, lean_object* v_x_1123_, lean_object* v_x_1124_, lean_object* v_x_1125_, lean_object* v_x_1126_){
_start:
{
lean_object* v___x_1127_; 
v___x_1127_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(v_x_1123_, v_x_1124_, v_x_1125_, v_x_1126_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__0(lean_object* v_newEqs_1128_, lean_object* v_mvarId_1129_, uint8_t v___x_1130_, lean_object* v_h_x27_1131_, lean_object* v_newIndices_1132_, lean_object* v___x_1133_, lean_object* v___x_1134_, lean_object* v___x_1135_, lean_object* v___x_1136_, lean_object* v_e_1137_, lean_object* v___x_1138_, lean_object* v_newEq_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_){
_start:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1145_ = lean_array_push(v_newEqs_1128_, v_newEq_1139_);
lean_inc(v_mvarId_1129_);
v___x_1146_ = l_Lean_MVarId_getType(v_mvarId_1129_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_);
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v_a_1147_; lean_object* v___x_1148_; 
v_a_1147_ = lean_ctor_get(v___x_1146_, 0);
lean_inc(v_a_1147_);
lean_dec_ref_known(v___x_1146_, 1);
lean_inc(v_mvarId_1129_);
v___x_1148_ = l_Lean_MVarId_getTag(v_mvarId_1129_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_);
if (lean_obj_tag(v___x_1148_) == 0)
{
lean_object* v_a_1149_; uint8_t v___x_1150_; uint8_t v___x_1151_; lean_object* v___x_1152_; 
v_a_1149_ = lean_ctor_get(v___x_1148_, 0);
lean_inc(v_a_1149_);
lean_dec_ref_known(v___x_1148_, 1);
v___x_1150_ = 1;
v___x_1151_ = 1;
lean_inc_ref(v___x_1145_);
v___x_1152_ = l_Lean_Meta_mkForallFVars(v___x_1145_, v_a_1147_, v___x_1130_, v___x_1150_, v___x_1150_, v___x_1151_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_);
if (lean_obj_tag(v___x_1152_) == 0)
{
lean_object* v_a_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
v_a_1153_ = lean_ctor_get(v___x_1152_, 0);
lean_inc(v_a_1153_);
lean_dec_ref_known(v___x_1152_, 1);
v___x_1154_ = lean_unsigned_to_nat(1u);
v___x_1155_ = lean_mk_empty_array_with_capacity(v___x_1154_);
v___x_1156_ = lean_array_push(v___x_1155_, v_h_x27_1131_);
v___x_1157_ = l_Lean_Meta_mkForallFVars(v___x_1156_, v_a_1153_, v___x_1130_, v___x_1150_, v___x_1150_, v___x_1151_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_object* v_a_1158_; lean_object* v___x_1159_; 
v_a_1158_ = lean_ctor_get(v___x_1157_, 0);
lean_inc(v_a_1158_);
lean_dec_ref_known(v___x_1157_, 1);
lean_inc_ref(v_newIndices_1132_);
v___x_1159_ = l_Lean_Meta_mkForallFVars(v_newIndices_1132_, v_a_1158_, v___x_1130_, v___x_1150_, v___x_1150_, v___x_1151_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_);
if (lean_obj_tag(v___x_1159_) == 0)
{
lean_object* v_a_1160_; uint8_t v___x_1161_; lean_object* v___x_1162_; 
v_a_1160_ = lean_ctor_get(v___x_1159_, 0);
lean_inc(v_a_1160_);
lean_dec_ref_known(v___x_1159_, 1);
v___x_1161_ = 2;
v___x_1162_ = l_Lean_Meta_mkFreshExprMVarAt(v___x_1133_, v___x_1134_, v_a_1160_, v___x_1161_, v_a_1149_, v___x_1135_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_);
if (lean_obj_tag(v___x_1162_) == 0)
{
lean_object* v_a_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; 
v_a_1163_ = lean_ctor_get(v___x_1162_, 0);
lean_inc_n(v_a_1163_, 2);
lean_dec_ref_known(v___x_1162_, 1);
v___x_1164_ = l_Lean_mkAppN(v_a_1163_, v___x_1136_);
v___x_1165_ = l_Lean_Expr_app___override(v___x_1164_, v_e_1137_);
v___x_1166_ = l_Lean_mkAppN(v___x_1165_, v___x_1138_);
v___x_1167_ = l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(v_mvarId_1129_, v___x_1166_, v___y_1141_);
lean_dec_ref(v___x_1167_);
v___x_1168_ = l_Lean_Expr_mvarId_x21(v_a_1163_);
lean_dec(v_a_1163_);
v___x_1169_ = lean_array_get_size(v_newIndices_1132_);
lean_dec_ref(v_newIndices_1132_);
v___x_1170_ = lean_box(0);
v___x_1171_ = l_Lean_Meta_introNCore(v___x_1168_, v___x_1169_, v___x_1170_, v___x_1130_, v___x_1150_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_);
if (lean_obj_tag(v___x_1171_) == 0)
{
lean_object* v_a_1172_; lean_object* v_fst_1173_; lean_object* v_snd_1174_; lean_object* v___x_1175_; 
v_a_1172_ = lean_ctor_get(v___x_1171_, 0);
lean_inc(v_a_1172_);
lean_dec_ref_known(v___x_1171_, 1);
v_fst_1173_ = lean_ctor_get(v_a_1172_, 0);
lean_inc(v_fst_1173_);
v_snd_1174_ = lean_ctor_get(v_a_1172_, 1);
lean_inc(v_snd_1174_);
lean_dec(v_a_1172_);
v___x_1175_ = l_Lean_Meta_intro1Core(v_snd_1174_, v___x_1150_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_);
if (lean_obj_tag(v___x_1175_) == 0)
{
lean_object* v_a_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1187_; 
v_a_1176_ = lean_ctor_get(v___x_1175_, 0);
v_isSharedCheck_1187_ = !lean_is_exclusive(v___x_1175_);
if (v_isSharedCheck_1187_ == 0)
{
v___x_1178_ = v___x_1175_;
v_isShared_1179_ = v_isSharedCheck_1187_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_a_1176_);
lean_dec(v___x_1175_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1187_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v_fst_1180_; lean_object* v_snd_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1185_; 
v_fst_1180_ = lean_ctor_get(v_a_1176_, 0);
lean_inc(v_fst_1180_);
v_snd_1181_ = lean_ctor_get(v_a_1176_, 1);
lean_inc(v_snd_1181_);
lean_dec(v_a_1176_);
v___x_1182_ = lean_array_get_size(v___x_1145_);
lean_dec_ref(v___x_1145_);
v___x_1183_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1183_, 0, v_snd_1181_);
lean_ctor_set(v___x_1183_, 1, v_fst_1173_);
lean_ctor_set(v___x_1183_, 2, v_fst_1180_);
lean_ctor_set(v___x_1183_, 3, v___x_1182_);
if (v_isShared_1179_ == 0)
{
lean_ctor_set(v___x_1178_, 0, v___x_1183_);
v___x_1185_ = v___x_1178_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v___x_1183_);
v___x_1185_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
return v___x_1185_;
}
}
}
else
{
lean_object* v_a_1188_; lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1195_; 
lean_dec(v_fst_1173_);
lean_dec_ref(v___x_1145_);
v_a_1188_ = lean_ctor_get(v___x_1175_, 0);
v_isSharedCheck_1195_ = !lean_is_exclusive(v___x_1175_);
if (v_isSharedCheck_1195_ == 0)
{
v___x_1190_ = v___x_1175_;
v_isShared_1191_ = v_isSharedCheck_1195_;
goto v_resetjp_1189_;
}
else
{
lean_inc(v_a_1188_);
lean_dec(v___x_1175_);
v___x_1190_ = lean_box(0);
v_isShared_1191_ = v_isSharedCheck_1195_;
goto v_resetjp_1189_;
}
v_resetjp_1189_:
{
lean_object* v___x_1193_; 
if (v_isShared_1191_ == 0)
{
v___x_1193_ = v___x_1190_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v_a_1188_);
v___x_1193_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
return v___x_1193_;
}
}
}
}
else
{
lean_object* v_a_1196_; lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1203_; 
lean_dec_ref(v___x_1145_);
v_a_1196_ = lean_ctor_get(v___x_1171_, 0);
v_isSharedCheck_1203_ = !lean_is_exclusive(v___x_1171_);
if (v_isSharedCheck_1203_ == 0)
{
v___x_1198_ = v___x_1171_;
v_isShared_1199_ = v_isSharedCheck_1203_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_a_1196_);
lean_dec(v___x_1171_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1203_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
lean_object* v___x_1201_; 
if (v_isShared_1199_ == 0)
{
v___x_1201_ = v___x_1198_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v_a_1196_);
v___x_1201_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1200_;
}
v_reusejp_1200_:
{
return v___x_1201_;
}
}
}
}
else
{
lean_object* v_a_1204_; lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1211_; 
lean_dec_ref(v___x_1145_);
lean_dec_ref(v_e_1137_);
lean_dec_ref(v_newIndices_1132_);
lean_dec(v_mvarId_1129_);
v_a_1204_ = lean_ctor_get(v___x_1162_, 0);
v_isSharedCheck_1211_ = !lean_is_exclusive(v___x_1162_);
if (v_isSharedCheck_1211_ == 0)
{
v___x_1206_ = v___x_1162_;
v_isShared_1207_ = v_isSharedCheck_1211_;
goto v_resetjp_1205_;
}
else
{
lean_inc(v_a_1204_);
lean_dec(v___x_1162_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1211_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
lean_object* v___x_1209_; 
if (v_isShared_1207_ == 0)
{
v___x_1209_ = v___x_1206_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v_a_1204_);
v___x_1209_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
return v___x_1209_;
}
}
}
}
else
{
lean_object* v_a_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1219_; 
lean_dec(v_a_1149_);
lean_dec_ref(v___x_1145_);
lean_dec_ref(v_e_1137_);
lean_dec(v___x_1135_);
lean_dec_ref(v___x_1134_);
lean_dec_ref(v___x_1133_);
lean_dec_ref(v_newIndices_1132_);
lean_dec(v_mvarId_1129_);
v_a_1212_ = lean_ctor_get(v___x_1159_, 0);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1159_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1214_ = v___x_1159_;
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_a_1212_);
lean_dec(v___x_1159_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v___x_1217_; 
if (v_isShared_1215_ == 0)
{
v___x_1217_ = v___x_1214_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_a_1212_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
}
else
{
lean_object* v_a_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1227_; 
lean_dec(v_a_1149_);
lean_dec_ref(v___x_1145_);
lean_dec_ref(v_e_1137_);
lean_dec(v___x_1135_);
lean_dec_ref(v___x_1134_);
lean_dec_ref(v___x_1133_);
lean_dec_ref(v_newIndices_1132_);
lean_dec(v_mvarId_1129_);
v_a_1220_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1227_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1227_ == 0)
{
v___x_1222_ = v___x_1157_;
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_a_1220_);
lean_dec(v___x_1157_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1225_; 
if (v_isShared_1223_ == 0)
{
v___x_1225_ = v___x_1222_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v_a_1220_);
v___x_1225_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
return v___x_1225_;
}
}
}
}
else
{
lean_object* v_a_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1235_; 
lean_dec(v_a_1149_);
lean_dec_ref(v___x_1145_);
lean_dec_ref(v_e_1137_);
lean_dec(v___x_1135_);
lean_dec_ref(v___x_1134_);
lean_dec_ref(v___x_1133_);
lean_dec_ref(v_newIndices_1132_);
lean_dec_ref(v_h_x27_1131_);
lean_dec(v_mvarId_1129_);
v_a_1228_ = lean_ctor_get(v___x_1152_, 0);
v_isSharedCheck_1235_ = !lean_is_exclusive(v___x_1152_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1230_ = v___x_1152_;
v_isShared_1231_ = v_isSharedCheck_1235_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_a_1228_);
lean_dec(v___x_1152_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1235_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1233_; 
if (v_isShared_1231_ == 0)
{
v___x_1233_ = v___x_1230_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v_a_1228_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
return v___x_1233_;
}
}
}
}
else
{
lean_object* v_a_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1243_; 
lean_dec(v_a_1147_);
lean_dec_ref(v___x_1145_);
lean_dec_ref(v_e_1137_);
lean_dec(v___x_1135_);
lean_dec_ref(v___x_1134_);
lean_dec_ref(v___x_1133_);
lean_dec_ref(v_newIndices_1132_);
lean_dec_ref(v_h_x27_1131_);
lean_dec(v_mvarId_1129_);
v_a_1236_ = lean_ctor_get(v___x_1148_, 0);
v_isSharedCheck_1243_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1243_ == 0)
{
v___x_1238_ = v___x_1148_;
v_isShared_1239_ = v_isSharedCheck_1243_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_a_1236_);
lean_dec(v___x_1148_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1243_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v___x_1241_; 
if (v_isShared_1239_ == 0)
{
v___x_1241_ = v___x_1238_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1242_; 
v_reuseFailAlloc_1242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1242_, 0, v_a_1236_);
v___x_1241_ = v_reuseFailAlloc_1242_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
return v___x_1241_;
}
}
}
}
else
{
lean_object* v_a_1244_; lean_object* v___x_1246_; uint8_t v_isShared_1247_; uint8_t v_isSharedCheck_1251_; 
lean_dec_ref(v___x_1145_);
lean_dec_ref(v_e_1137_);
lean_dec(v___x_1135_);
lean_dec_ref(v___x_1134_);
lean_dec_ref(v___x_1133_);
lean_dec_ref(v_newIndices_1132_);
lean_dec_ref(v_h_x27_1131_);
lean_dec(v_mvarId_1129_);
v_a_1244_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1251_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1251_ == 0)
{
v___x_1246_ = v___x_1146_;
v_isShared_1247_ = v_isSharedCheck_1251_;
goto v_resetjp_1245_;
}
else
{
lean_inc(v_a_1244_);
lean_dec(v___x_1146_);
v___x_1246_ = lean_box(0);
v_isShared_1247_ = v_isSharedCheck_1251_;
goto v_resetjp_1245_;
}
v_resetjp_1245_:
{
lean_object* v___x_1249_; 
if (v_isShared_1247_ == 0)
{
v___x_1249_ = v___x_1246_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v_a_1244_);
v___x_1249_ = v_reuseFailAlloc_1250_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
return v___x_1249_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__0___boxed(lean_object** _args){
lean_object* v_newEqs_1252_ = _args[0];
lean_object* v_mvarId_1253_ = _args[1];
lean_object* v___x_1254_ = _args[2];
lean_object* v_h_x27_1255_ = _args[3];
lean_object* v_newIndices_1256_ = _args[4];
lean_object* v___x_1257_ = _args[5];
lean_object* v___x_1258_ = _args[6];
lean_object* v___x_1259_ = _args[7];
lean_object* v___x_1260_ = _args[8];
lean_object* v_e_1261_ = _args[9];
lean_object* v___x_1262_ = _args[10];
lean_object* v_newEq_1263_ = _args[11];
lean_object* v___y_1264_ = _args[12];
lean_object* v___y_1265_ = _args[13];
lean_object* v___y_1266_ = _args[14];
lean_object* v___y_1267_ = _args[15];
lean_object* v___y_1268_ = _args[16];
_start:
{
uint8_t v___x_6159__boxed_1269_; lean_object* v_res_1270_; 
v___x_6159__boxed_1269_ = lean_unbox(v___x_1254_);
v_res_1270_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__0(v_newEqs_1252_, v_mvarId_1253_, v___x_6159__boxed_1269_, v_h_x27_1255_, v_newIndices_1256_, v___x_1257_, v___x_1258_, v___x_1259_, v___x_1260_, v_e_1261_, v___x_1262_, v_newEq_1263_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_);
lean_dec(v___y_1267_);
lean_dec_ref(v___y_1266_);
lean_dec(v___y_1265_);
lean_dec_ref(v___y_1264_);
lean_dec_ref(v___x_1262_);
lean_dec_ref(v___x_1260_);
return v_res_1270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__1(lean_object* v_e_1271_, lean_object* v_h_x27_1272_, lean_object* v_mvarId_1273_, uint8_t v___x_1274_, lean_object* v_newIndices_1275_, lean_object* v___x_1276_, lean_object* v___x_1277_, lean_object* v___x_1278_, lean_object* v___x_1279_, lean_object* v_newEqs_1280_, lean_object* v_newRefls_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_){
_start:
{
lean_object* v___x_1287_; 
lean_inc_ref(v_h_x27_1272_);
lean_inc_ref(v_e_1271_);
v___x_1287_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof(v_e_1271_, v_h_x27_1272_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1287_) == 0)
{
lean_object* v_a_1288_; lean_object* v_fst_1289_; lean_object* v_snd_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___f_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
v_a_1288_ = lean_ctor_get(v___x_1287_, 0);
lean_inc(v_a_1288_);
lean_dec_ref_known(v___x_1287_, 1);
v_fst_1289_ = lean_ctor_get(v_a_1288_, 0);
lean_inc(v_fst_1289_);
v_snd_1290_ = lean_ctor_get(v_a_1288_, 1);
lean_inc(v_snd_1290_);
lean_dec(v_a_1288_);
v___x_1291_ = lean_array_push(v_newRefls_1281_, v_snd_1290_);
v___x_1292_ = lean_box(v___x_1274_);
v___f_1293_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__0___boxed), 17, 11);
lean_closure_set(v___f_1293_, 0, v_newEqs_1280_);
lean_closure_set(v___f_1293_, 1, v_mvarId_1273_);
lean_closure_set(v___f_1293_, 2, v___x_1292_);
lean_closure_set(v___f_1293_, 3, v_h_x27_1272_);
lean_closure_set(v___f_1293_, 4, v_newIndices_1275_);
lean_closure_set(v___f_1293_, 5, v___x_1276_);
lean_closure_set(v___f_1293_, 6, v___x_1277_);
lean_closure_set(v___f_1293_, 7, v___x_1278_);
lean_closure_set(v___f_1293_, 8, v___x_1279_);
lean_closure_set(v___f_1293_, 9, v_e_1271_);
lean_closure_set(v___f_1293_, 10, v___x_1291_);
v___x_1294_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__1));
v___x_1295_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(v___x_1294_, v_fst_1289_, v___f_1293_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
return v___x_1295_;
}
else
{
lean_object* v_a_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1303_; 
lean_dec_ref(v_newRefls_1281_);
lean_dec_ref(v_newEqs_1280_);
lean_dec_ref(v___x_1279_);
lean_dec(v___x_1278_);
lean_dec_ref(v___x_1277_);
lean_dec_ref(v___x_1276_);
lean_dec_ref(v_newIndices_1275_);
lean_dec(v_mvarId_1273_);
lean_dec_ref(v_h_x27_1272_);
lean_dec_ref(v_e_1271_);
v_a_1296_ = lean_ctor_get(v___x_1287_, 0);
v_isSharedCheck_1303_ = !lean_is_exclusive(v___x_1287_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1298_ = v___x_1287_;
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_a_1296_);
lean_dec(v___x_1287_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1303_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1301_; 
if (v_isShared_1299_ == 0)
{
v___x_1301_ = v___x_1298_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v_a_1296_);
v___x_1301_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
return v___x_1301_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__1___boxed(lean_object* v_e_1304_, lean_object* v_h_x27_1305_, lean_object* v_mvarId_1306_, lean_object* v___x_1307_, lean_object* v_newIndices_1308_, lean_object* v___x_1309_, lean_object* v___x_1310_, lean_object* v___x_1311_, lean_object* v___x_1312_, lean_object* v_newEqs_1313_, lean_object* v_newRefls_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_){
_start:
{
uint8_t v___x_6411__boxed_1320_; lean_object* v_res_1321_; 
v___x_6411__boxed_1320_ = lean_unbox(v___x_1307_);
v_res_1321_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__1(v_e_1304_, v_h_x27_1305_, v_mvarId_1306_, v___x_6411__boxed_1320_, v_newIndices_1308_, v___x_1309_, v___x_1310_, v___x_1311_, v___x_1312_, v_newEqs_1313_, v_newRefls_1314_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_);
lean_dec(v___y_1318_);
lean_dec_ref(v___y_1317_);
lean_dec(v___y_1316_);
lean_dec_ref(v___y_1315_);
return v_res_1321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__2(lean_object* v_e_1322_, lean_object* v_mvarId_1323_, uint8_t v___x_1324_, lean_object* v_newIndices_1325_, lean_object* v___x_1326_, lean_object* v___x_1327_, lean_object* v___x_1328_, lean_object* v___x_1329_, lean_object* v_h_x27_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_){
_start:
{
lean_object* v___x_1336_; lean_object* v___f_1337_; lean_object* v___x_1338_; 
v___x_1336_ = lean_box(v___x_1324_);
lean_inc_ref(v___x_1329_);
lean_inc_ref(v_newIndices_1325_);
v___f_1337_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__1___boxed), 16, 9);
lean_closure_set(v___f_1337_, 0, v_e_1322_);
lean_closure_set(v___f_1337_, 1, v_h_x27_1330_);
lean_closure_set(v___f_1337_, 2, v_mvarId_1323_);
lean_closure_set(v___f_1337_, 3, v___x_1336_);
lean_closure_set(v___f_1337_, 4, v_newIndices_1325_);
lean_closure_set(v___f_1337_, 5, v___x_1326_);
lean_closure_set(v___f_1337_, 6, v___x_1327_);
lean_closure_set(v___f_1337_, 7, v___x_1328_);
lean_closure_set(v___f_1337_, 8, v___x_1329_);
v___x_1338_ = l_Lean_Meta_withNewEqs___redArg(v___x_1329_, v_newIndices_1325_, v___f_1337_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_);
return v___x_1338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__2___boxed(lean_object* v_e_1339_, lean_object* v_mvarId_1340_, lean_object* v___x_1341_, lean_object* v_newIndices_1342_, lean_object* v___x_1343_, lean_object* v___x_1344_, lean_object* v___x_1345_, lean_object* v___x_1346_, lean_object* v_h_x27_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_){
_start:
{
uint8_t v___x_6476__boxed_1353_; lean_object* v_res_1354_; 
v___x_6476__boxed_1353_ = lean_unbox(v___x_1341_);
v_res_1354_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__2(v_e_1339_, v_mvarId_1340_, v___x_6476__boxed_1353_, v_newIndices_1342_, v___x_1343_, v___x_1344_, v___x_1345_, v___x_1346_, v_h_x27_1347_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_);
lean_dec(v___y_1351_);
lean_dec_ref(v___y_1350_);
lean_dec(v___y_1349_);
lean_dec_ref(v___y_1348_);
return v_res_1354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3(lean_object* v_e_1358_, lean_object* v_mvarId_1359_, uint8_t v___x_1360_, lean_object* v___x_1361_, lean_object* v___x_1362_, lean_object* v___x_1363_, lean_object* v___x_1364_, lean_object* v___x_1365_, lean_object* v_varName_x3f_1366_, lean_object* v_newIndices_1367_, lean_object* v_x_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_){
_start:
{
lean_object* v___x_1374_; lean_object* v___f_1375_; lean_object* v___x_1376_; 
v___x_1374_ = lean_box(v___x_1360_);
lean_inc_ref(v_newIndices_1367_);
v___f_1375_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__2___boxed), 14, 8);
lean_closure_set(v___f_1375_, 0, v_e_1358_);
lean_closure_set(v___f_1375_, 1, v_mvarId_1359_);
lean_closure_set(v___f_1375_, 2, v___x_1374_);
lean_closure_set(v___f_1375_, 3, v_newIndices_1367_);
lean_closure_set(v___f_1375_, 4, v___x_1361_);
lean_closure_set(v___f_1375_, 5, v___x_1362_);
lean_closure_set(v___f_1375_, 6, v___x_1363_);
lean_closure_set(v___f_1375_, 7, v___x_1364_);
v___x_1376_ = l_Lean_mkAppN(v___x_1365_, v_newIndices_1367_);
lean_dec_ref(v_newIndices_1367_);
if (lean_obj_tag(v_varName_x3f_1366_) == 1)
{
lean_object* v_val_1377_; lean_object* v___x_1378_; 
v_val_1377_ = lean_ctor_get(v_varName_x3f_1366_, 0);
lean_inc(v_val_1377_);
lean_dec_ref_known(v_varName_x3f_1366_, 1);
v___x_1378_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(v_val_1377_, v___x_1376_, v___f_1375_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_);
return v___x_1378_;
}
else
{
lean_object* v___x_1379_; lean_object* v___x_1380_; 
lean_dec(v_varName_x3f_1366_);
v___x_1379_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__1));
v___x_1380_ = l_Lean_Core_mkFreshUserName(v___x_1379_, v___y_1371_, v___y_1372_);
if (lean_obj_tag(v___x_1380_) == 0)
{
lean_object* v_a_1381_; lean_object* v___x_1382_; 
v_a_1381_ = lean_ctor_get(v___x_1380_, 0);
lean_inc(v_a_1381_);
lean_dec_ref_known(v___x_1380_, 1);
v___x_1382_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(v_a_1381_, v___x_1376_, v___f_1375_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_);
return v___x_1382_;
}
else
{
lean_object* v_a_1383_; lean_object* v___x_1385_; uint8_t v_isShared_1386_; uint8_t v_isSharedCheck_1390_; 
lean_dec_ref(v___x_1376_);
lean_dec_ref(v___f_1375_);
v_a_1383_ = lean_ctor_get(v___x_1380_, 0);
v_isSharedCheck_1390_ = !lean_is_exclusive(v___x_1380_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1385_ = v___x_1380_;
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
else
{
lean_inc(v_a_1383_);
lean_dec(v___x_1380_);
v___x_1385_ = lean_box(0);
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
v_resetjp_1384_:
{
lean_object* v___x_1388_; 
if (v_isShared_1386_ == 0)
{
v___x_1388_ = v___x_1385_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v_a_1383_);
v___x_1388_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
return v___x_1388_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___boxed(lean_object* v_e_1391_, lean_object* v_mvarId_1392_, lean_object* v___x_1393_, lean_object* v___x_1394_, lean_object* v___x_1395_, lean_object* v___x_1396_, lean_object* v___x_1397_, lean_object* v___x_1398_, lean_object* v_varName_x3f_1399_, lean_object* v_newIndices_1400_, lean_object* v_x_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_){
_start:
{
uint8_t v___x_6518__boxed_1407_; lean_object* v_res_1408_; 
v___x_6518__boxed_1407_ = lean_unbox(v___x_1393_);
v_res_1408_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3(v_e_1391_, v_mvarId_1392_, v___x_6518__boxed_1407_, v___x_1394_, v___x_1395_, v___x_1396_, v___x_1397_, v___x_1398_, v_varName_x3f_1399_, v_newIndices_1400_, v_x_1401_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_);
lean_dec(v___y_1405_);
lean_dec_ref(v___y_1404_);
lean_dec(v___y_1403_);
lean_dec_ref(v___y_1402_);
lean_dec_ref(v_x_1401_);
return v_res_1408_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__4(void){
_start:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; 
v___x_1415_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__3));
v___x_1416_ = l_Lean_MessageData_ofFormat(v___x_1415_);
return v___x_1416_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__5(void){
_start:
{
lean_object* v___x_1417_; lean_object* v___x_1418_; 
v___x_1417_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__4, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__4_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__4);
v___x_1418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1418_, 0, v___x_1417_);
return v___x_1418_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__8(void){
_start:
{
lean_object* v___x_1422_; lean_object* v___x_1423_; 
v___x_1422_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__7));
v___x_1423_ = l_Lean_MessageData_ofFormat(v___x_1422_);
return v___x_1423_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__9(void){
_start:
{
lean_object* v___x_1424_; lean_object* v___x_1425_; 
v___x_1424_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__8, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__8_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__8);
v___x_1425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1424_);
return v___x_1425_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__12(void){
_start:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; 
v___x_1429_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__11));
v___x_1430_ = l_Lean_MessageData_ofFormat(v___x_1429_);
return v___x_1430_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__13(void){
_start:
{
lean_object* v___x_1431_; lean_object* v___x_1432_; 
v___x_1431_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__12, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__12_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__12);
v___x_1432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1432_, 0, v___x_1431_);
return v___x_1432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0(lean_object* v_mvarId_1433_, lean_object* v_e_1434_, lean_object* v___x_1435_, lean_object* v___x_1436_, lean_object* v_varName_x3f_1437_, lean_object* v_x_1438_, lean_object* v_x_1439_, lean_object* v_x_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_){
_start:
{
if (lean_obj_tag(v_x_1438_) == 5)
{
lean_object* v_fn_1446_; lean_object* v_arg_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; 
v_fn_1446_ = lean_ctor_get(v_x_1438_, 0);
lean_inc_ref(v_fn_1446_);
v_arg_1447_ = lean_ctor_get(v_x_1438_, 1);
lean_inc_ref(v_arg_1447_);
lean_dec_ref_known(v_x_1438_, 2);
v___x_1448_ = lean_array_set(v_x_1439_, v_x_1440_, v_arg_1447_);
v___x_1449_ = lean_unsigned_to_nat(1u);
v___x_1450_ = lean_nat_sub(v_x_1440_, v___x_1449_);
lean_dec(v_x_1440_);
v_x_1438_ = v_fn_1446_;
v_x_1439_ = v___x_1448_;
v_x_1440_ = v___x_1450_;
goto _start;
}
else
{
lean_object* v___x_1452_; lean_object* v___y_1454_; lean_object* v___y_1455_; lean_object* v___y_1456_; lean_object* v___y_1457_; 
lean_dec(v_x_1440_);
v___x_1452_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__1));
if (lean_obj_tag(v_x_1438_) == 4)
{
lean_object* v_declName_1460_; lean_object* v___x_1461_; lean_object* v_env_1462_; uint8_t v___x_1463_; lean_object* v___x_1464_; 
v_declName_1460_ = lean_ctor_get(v_x_1438_, 0);
v___x_1461_ = lean_st_ref_get(v___y_1444_);
v_env_1462_ = lean_ctor_get(v___x_1461_, 0);
lean_inc_ref(v_env_1462_);
lean_dec(v___x_1461_);
v___x_1463_ = 0;
lean_inc(v_declName_1460_);
v___x_1464_ = l_Lean_Environment_find_x3f(v_env_1462_, v_declName_1460_, v___x_1463_);
if (lean_obj_tag(v___x_1464_) == 0)
{
lean_dec_ref_known(v_x_1438_, 2);
lean_dec_ref(v_x_1439_);
lean_dec(v_varName_x3f_1437_);
lean_dec_ref(v___x_1436_);
lean_dec_ref(v___x_1435_);
lean_dec_ref(v_e_1434_);
v___y_1454_ = v___y_1441_;
v___y_1455_ = v___y_1442_;
v___y_1456_ = v___y_1443_;
v___y_1457_ = v___y_1444_;
goto v___jp_1453_;
}
else
{
lean_object* v_val_1465_; 
v_val_1465_ = lean_ctor_get(v___x_1464_, 0);
lean_inc(v_val_1465_);
lean_dec_ref_known(v___x_1464_, 1);
if (lean_obj_tag(v_val_1465_) == 5)
{
lean_object* v_val_1466_; lean_object* v_numParams_1467_; lean_object* v_numIndices_1468_; lean_object* v___y_1470_; lean_object* v___y_1471_; lean_object* v___y_1472_; lean_object* v___y_1473_; lean_object* v___y_1494_; lean_object* v___y_1495_; lean_object* v___y_1496_; lean_object* v___y_1497_; lean_object* v___x_1511_; uint8_t v___x_1512_; 
v_val_1466_ = lean_ctor_get(v_val_1465_, 0);
lean_inc_ref(v_val_1466_);
lean_dec_ref_known(v_val_1465_, 1);
v_numParams_1467_ = lean_ctor_get(v_val_1466_, 1);
lean_inc(v_numParams_1467_);
v_numIndices_1468_ = lean_ctor_get(v_val_1466_, 2);
lean_inc(v_numIndices_1468_);
lean_dec_ref(v_val_1466_);
v___x_1511_ = lean_unsigned_to_nat(0u);
v___x_1512_ = lean_nat_dec_lt(v___x_1511_, v_numIndices_1468_);
if (v___x_1512_ == 0)
{
lean_object* v___x_1513_; lean_object* v___x_1514_; 
v___x_1513_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__13, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__13_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__13);
lean_inc(v_mvarId_1433_);
v___x_1514_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1452_, v_mvarId_1433_, v___x_1513_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_);
if (lean_obj_tag(v___x_1514_) == 0)
{
lean_dec_ref_known(v___x_1514_, 1);
v___y_1494_ = v___y_1441_;
v___y_1495_ = v___y_1442_;
v___y_1496_ = v___y_1443_;
v___y_1497_ = v___y_1444_;
goto v___jp_1493_;
}
else
{
lean_object* v_a_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1522_; 
lean_dec(v_numIndices_1468_);
lean_dec(v_numParams_1467_);
lean_dec_ref_known(v_x_1438_, 2);
lean_dec_ref(v_x_1439_);
lean_dec(v_varName_x3f_1437_);
lean_dec_ref(v___x_1436_);
lean_dec_ref(v___x_1435_);
lean_dec_ref(v_e_1434_);
lean_dec(v_mvarId_1433_);
v_a_1515_ = lean_ctor_get(v___x_1514_, 0);
v_isSharedCheck_1522_ = !lean_is_exclusive(v___x_1514_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1517_ = v___x_1514_;
v_isShared_1518_ = v_isSharedCheck_1522_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_a_1515_);
lean_dec(v___x_1514_);
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
else
{
v___y_1494_ = v___y_1441_;
v___y_1495_ = v___y_1442_;
v___y_1496_ = v___y_1443_;
v___y_1497_ = v___y_1444_;
goto v___jp_1493_;
}
v___jp_1469_:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___f_1481_; lean_object* v___x_1482_; 
v___x_1474_ = lean_array_get_size(v_x_1439_);
v___x_1475_ = lean_nat_sub(v___x_1474_, v_numIndices_1468_);
lean_dec(v_numIndices_1468_);
v___x_1476_ = l_Array_extract___redArg(v_x_1439_, v___x_1475_, v___x_1474_);
v___x_1477_ = lean_unsigned_to_nat(0u);
v___x_1478_ = l_Array_extract___redArg(v_x_1439_, v___x_1477_, v_numParams_1467_);
lean_dec_ref(v_x_1439_);
v___x_1479_ = l_Lean_mkAppN(v_x_1438_, v___x_1478_);
lean_dec_ref(v___x_1478_);
v___x_1480_ = lean_box(v___x_1463_);
lean_inc_ref(v___x_1479_);
v___f_1481_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___boxed), 16, 9);
lean_closure_set(v___f_1481_, 0, v_e_1434_);
lean_closure_set(v___f_1481_, 1, v_mvarId_1433_);
lean_closure_set(v___f_1481_, 2, v___x_1480_);
lean_closure_set(v___f_1481_, 3, v___x_1435_);
lean_closure_set(v___f_1481_, 4, v___x_1436_);
lean_closure_set(v___f_1481_, 5, v___x_1477_);
lean_closure_set(v___f_1481_, 6, v___x_1476_);
lean_closure_set(v___f_1481_, 7, v___x_1479_);
lean_closure_set(v___f_1481_, 8, v_varName_x3f_1437_);
lean_inc(v___y_1473_);
lean_inc_ref(v___y_1472_);
lean_inc(v___y_1471_);
lean_inc_ref(v___y_1470_);
v___x_1482_ = lean_infer_type(v___x_1479_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_);
if (lean_obj_tag(v___x_1482_) == 0)
{
lean_object* v_a_1483_; lean_object* v___x_1484_; 
v_a_1483_ = lean_ctor_get(v___x_1482_, 0);
lean_inc(v_a_1483_);
lean_dec_ref_known(v___x_1482_, 1);
v___x_1484_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg(v_a_1483_, v___f_1481_, v___x_1463_, v___x_1463_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_);
return v___x_1484_;
}
else
{
lean_object* v_a_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1492_; 
lean_dec_ref(v___f_1481_);
v_a_1485_ = lean_ctor_get(v___x_1482_, 0);
v_isSharedCheck_1492_ = !lean_is_exclusive(v___x_1482_);
if (v_isSharedCheck_1492_ == 0)
{
v___x_1487_ = v___x_1482_;
v_isShared_1488_ = v_isSharedCheck_1492_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_a_1485_);
lean_dec(v___x_1482_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1492_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
lean_object* v___x_1490_; 
if (v_isShared_1488_ == 0)
{
v___x_1490_ = v___x_1487_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v_a_1485_);
v___x_1490_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
return v___x_1490_;
}
}
}
}
v___jp_1493_:
{
lean_object* v___x_1498_; lean_object* v___x_1499_; uint8_t v___x_1500_; 
v___x_1498_ = lean_array_get_size(v_x_1439_);
v___x_1499_ = lean_nat_add(v_numIndices_1468_, v_numParams_1467_);
v___x_1500_ = lean_nat_dec_eq(v___x_1498_, v___x_1499_);
lean_dec(v___x_1499_);
if (v___x_1500_ == 0)
{
lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1501_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__9, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__9_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__9);
lean_inc(v_mvarId_1433_);
v___x_1502_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1452_, v_mvarId_1433_, v___x_1501_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_);
if (lean_obj_tag(v___x_1502_) == 0)
{
lean_dec_ref_known(v___x_1502_, 1);
v___y_1470_ = v___y_1494_;
v___y_1471_ = v___y_1495_;
v___y_1472_ = v___y_1496_;
v___y_1473_ = v___y_1497_;
goto v___jp_1469_;
}
else
{
lean_object* v_a_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1510_; 
lean_dec(v_numIndices_1468_);
lean_dec(v_numParams_1467_);
lean_dec_ref_known(v_x_1438_, 2);
lean_dec_ref(v_x_1439_);
lean_dec(v_varName_x3f_1437_);
lean_dec_ref(v___x_1436_);
lean_dec_ref(v___x_1435_);
lean_dec_ref(v_e_1434_);
lean_dec(v_mvarId_1433_);
v_a_1503_ = lean_ctor_get(v___x_1502_, 0);
v_isSharedCheck_1510_ = !lean_is_exclusive(v___x_1502_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1505_ = v___x_1502_;
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_a_1503_);
lean_dec(v___x_1502_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v___x_1508_; 
if (v_isShared_1506_ == 0)
{
v___x_1508_ = v___x_1505_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_a_1503_);
v___x_1508_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
return v___x_1508_;
}
}
}
}
else
{
v___y_1470_ = v___y_1494_;
v___y_1471_ = v___y_1495_;
v___y_1472_ = v___y_1496_;
v___y_1473_ = v___y_1497_;
goto v___jp_1469_;
}
}
}
else
{
lean_dec(v_val_1465_);
lean_dec_ref_known(v_x_1438_, 2);
lean_dec_ref(v_x_1439_);
lean_dec(v_varName_x3f_1437_);
lean_dec_ref(v___x_1436_);
lean_dec_ref(v___x_1435_);
lean_dec_ref(v_e_1434_);
v___y_1454_ = v___y_1441_;
v___y_1455_ = v___y_1442_;
v___y_1456_ = v___y_1443_;
v___y_1457_ = v___y_1444_;
goto v___jp_1453_;
}
}
}
else
{
lean_dec_ref(v_x_1439_);
lean_dec_ref(v_x_1438_);
lean_dec(v_varName_x3f_1437_);
lean_dec_ref(v___x_1436_);
lean_dec_ref(v___x_1435_);
lean_dec_ref(v_e_1434_);
v___y_1454_ = v___y_1441_;
v___y_1455_ = v___y_1442_;
v___y_1456_ = v___y_1443_;
v___y_1457_ = v___y_1444_;
goto v___jp_1453_;
}
v___jp_1453_:
{
lean_object* v___x_1458_; lean_object* v___x_1459_; 
v___x_1458_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__5, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__5_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__5);
v___x_1459_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1452_, v_mvarId_1433_, v___x_1458_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_);
return v___x_1459_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___boxed(lean_object* v_mvarId_1523_, lean_object* v_e_1524_, lean_object* v___x_1525_, lean_object* v___x_1526_, lean_object* v_varName_x3f_1527_, lean_object* v_x_1528_, lean_object* v_x_1529_, lean_object* v_x_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_){
_start:
{
lean_object* v_res_1536_; 
v_res_1536_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0(v_mvarId_1523_, v_e_1524_, v___x_1525_, v___x_1526_, v_varName_x3f_1527_, v_x_1528_, v_x_1529_, v_x_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_);
lean_dec(v___y_1534_);
lean_dec_ref(v___y_1533_);
lean_dec(v___y_1532_);
lean_dec_ref(v___y_1531_);
return v_res_1536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27___lam__0(lean_object* v_mvarId_1537_, lean_object* v_e_1538_, lean_object* v_varName_x3f_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_){
_start:
{
lean_object* v_lctx_1545_; lean_object* v_localInstances_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; 
v_lctx_1545_ = lean_ctor_get(v___y_1540_, 2);
lean_inc_ref(v_lctx_1545_);
v_localInstances_1546_ = lean_ctor_get(v___y_1540_, 3);
lean_inc_ref(v_localInstances_1546_);
v___x_1547_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__1));
lean_inc(v_mvarId_1537_);
v___x_1548_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_1537_, v___x_1547_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_);
if (lean_obj_tag(v___x_1548_) == 0)
{
lean_object* v___x_1549_; 
lean_dec_ref_known(v___x_1548_, 1);
lean_inc(v___y_1543_);
lean_inc_ref(v___y_1542_);
lean_inc(v___y_1541_);
lean_inc_ref(v___y_1540_);
lean_inc_ref(v_e_1538_);
v___x_1549_ = lean_infer_type(v_e_1538_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_);
if (lean_obj_tag(v___x_1549_) == 0)
{
lean_object* v_a_1550_; lean_object* v___x_1551_; 
v_a_1550_ = lean_ctor_get(v___x_1549_, 0);
lean_inc(v_a_1550_);
lean_dec_ref_known(v___x_1549_, 1);
v___x_1551_ = l_Lean_Meta_whnfD(v_a_1550_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_);
if (lean_obj_tag(v___x_1551_) == 0)
{
lean_object* v_a_1552_; lean_object* v_dummy_1553_; lean_object* v_nargs_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
v_a_1552_ = lean_ctor_get(v___x_1551_, 0);
lean_inc(v_a_1552_);
lean_dec_ref_known(v___x_1551_, 1);
v_dummy_1553_ = lean_obj_once(&l_Lean_Meta_getInductiveUniverseAndParams___closed__1, &l_Lean_Meta_getInductiveUniverseAndParams___closed__1_once, _init_l_Lean_Meta_getInductiveUniverseAndParams___closed__1);
v_nargs_1554_ = l_Lean_Expr_getAppNumArgs(v_a_1552_);
lean_inc(v_nargs_1554_);
v___x_1555_ = lean_mk_array(v_nargs_1554_, v_dummy_1553_);
v___x_1556_ = lean_unsigned_to_nat(1u);
v___x_1557_ = lean_nat_sub(v_nargs_1554_, v___x_1556_);
lean_dec(v_nargs_1554_);
v___x_1558_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0(v_mvarId_1537_, v_e_1538_, v_lctx_1545_, v_localInstances_1546_, v_varName_x3f_1539_, v_a_1552_, v___x_1555_, v___x_1557_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_);
lean_dec(v___y_1543_);
lean_dec_ref(v___y_1542_);
lean_dec(v___y_1541_);
lean_dec_ref(v___y_1540_);
return v___x_1558_;
}
else
{
lean_object* v_a_1559_; lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1566_; 
lean_dec_ref(v_localInstances_1546_);
lean_dec_ref(v_lctx_1545_);
lean_dec(v___y_1543_);
lean_dec_ref(v___y_1542_);
lean_dec(v___y_1541_);
lean_dec_ref(v___y_1540_);
lean_dec(v_varName_x3f_1539_);
lean_dec_ref(v_e_1538_);
lean_dec(v_mvarId_1537_);
v_a_1559_ = lean_ctor_get(v___x_1551_, 0);
v_isSharedCheck_1566_ = !lean_is_exclusive(v___x_1551_);
if (v_isSharedCheck_1566_ == 0)
{
v___x_1561_ = v___x_1551_;
v_isShared_1562_ = v_isSharedCheck_1566_;
goto v_resetjp_1560_;
}
else
{
lean_inc(v_a_1559_);
lean_dec(v___x_1551_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1566_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v___x_1564_; 
if (v_isShared_1562_ == 0)
{
v___x_1564_ = v___x_1561_;
goto v_reusejp_1563_;
}
else
{
lean_object* v_reuseFailAlloc_1565_; 
v_reuseFailAlloc_1565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1565_, 0, v_a_1559_);
v___x_1564_ = v_reuseFailAlloc_1565_;
goto v_reusejp_1563_;
}
v_reusejp_1563_:
{
return v___x_1564_;
}
}
}
}
else
{
lean_object* v_a_1567_; lean_object* v___x_1569_; uint8_t v_isShared_1570_; uint8_t v_isSharedCheck_1574_; 
lean_dec_ref(v_localInstances_1546_);
lean_dec_ref(v_lctx_1545_);
lean_dec(v___y_1543_);
lean_dec_ref(v___y_1542_);
lean_dec(v___y_1541_);
lean_dec_ref(v___y_1540_);
lean_dec(v_varName_x3f_1539_);
lean_dec_ref(v_e_1538_);
lean_dec(v_mvarId_1537_);
v_a_1567_ = lean_ctor_get(v___x_1549_, 0);
v_isSharedCheck_1574_ = !lean_is_exclusive(v___x_1549_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1569_ = v___x_1549_;
v_isShared_1570_ = v_isSharedCheck_1574_;
goto v_resetjp_1568_;
}
else
{
lean_inc(v_a_1567_);
lean_dec(v___x_1549_);
v___x_1569_ = lean_box(0);
v_isShared_1570_ = v_isSharedCheck_1574_;
goto v_resetjp_1568_;
}
v_resetjp_1568_:
{
lean_object* v___x_1572_; 
if (v_isShared_1570_ == 0)
{
v___x_1572_ = v___x_1569_;
goto v_reusejp_1571_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v_a_1567_);
v___x_1572_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1571_;
}
v_reusejp_1571_:
{
return v___x_1572_;
}
}
}
}
else
{
lean_object* v_a_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1582_; 
lean_dec_ref(v_localInstances_1546_);
lean_dec_ref(v_lctx_1545_);
lean_dec(v___y_1543_);
lean_dec_ref(v___y_1542_);
lean_dec(v___y_1541_);
lean_dec_ref(v___y_1540_);
lean_dec(v_varName_x3f_1539_);
lean_dec_ref(v_e_1538_);
lean_dec(v_mvarId_1537_);
v_a_1575_ = lean_ctor_get(v___x_1548_, 0);
v_isSharedCheck_1582_ = !lean_is_exclusive(v___x_1548_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1577_ = v___x_1548_;
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_a_1575_);
lean_dec(v___x_1548_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1580_; 
if (v_isShared_1578_ == 0)
{
v___x_1580_ = v___x_1577_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v_a_1575_);
v___x_1580_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
return v___x_1580_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27___lam__0___boxed(lean_object* v_mvarId_1583_, lean_object* v_e_1584_, lean_object* v_varName_x3f_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l_Lean_Meta_generalizeIndices_x27___lam__0(v_mvarId_1583_, v_e_1584_, v_varName_x3f_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27(lean_object* v_mvarId_1592_, lean_object* v_e_1593_, lean_object* v_varName_x3f_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_, lean_object* v_a_1597_, lean_object* v_a_1598_){
_start:
{
lean_object* v___f_1600_; lean_object* v___x_1601_; 
lean_inc(v_mvarId_1592_);
v___f_1600_ = lean_alloc_closure((void*)(l_Lean_Meta_generalizeIndices_x27___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1600_, 0, v_mvarId_1592_);
lean_closure_set(v___f_1600_, 1, v_e_1593_);
lean_closure_set(v___f_1600_, 2, v_varName_x3f_1594_);
v___x_1601_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_1592_, v___f_1600_, v_a_1595_, v_a_1596_, v_a_1597_, v_a_1598_);
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27___boxed(lean_object* v_mvarId_1602_, lean_object* v_e_1603_, lean_object* v_varName_x3f_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_, lean_object* v_a_1607_, lean_object* v_a_1608_, lean_object* v_a_1609_){
_start:
{
lean_object* v_res_1610_; 
v_res_1610_ = l_Lean_Meta_generalizeIndices_x27(v_mvarId_1602_, v_e_1603_, v_varName_x3f_1604_, v_a_1605_, v_a_1606_, v_a_1607_, v_a_1608_);
lean_dec(v_a_1608_);
lean_dec_ref(v_a_1607_);
lean_dec(v_a_1606_);
lean_dec_ref(v_a_1605_);
return v_res_1610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices___lam__0(lean_object* v_fvarId_1611_, lean_object* v_mvarId_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_){
_start:
{
lean_object* v___x_1618_; 
v___x_1618_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_1611_, v___y_1613_, v___y_1615_, v___y_1616_);
if (lean_obj_tag(v___x_1618_) == 0)
{
lean_object* v_a_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
v_a_1619_ = lean_ctor_get(v___x_1618_, 0);
lean_inc_n(v_a_1619_, 2);
lean_dec_ref_known(v___x_1618_, 1);
v___x_1620_ = l_Lean_LocalDecl_toExpr(v_a_1619_);
v___x_1621_ = l_Lean_LocalDecl_userName(v_a_1619_);
lean_dec(v_a_1619_);
v___x_1622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1622_, 0, v___x_1621_);
v___x_1623_ = l_Lean_Meta_generalizeIndices_x27(v_mvarId_1612_, v___x_1620_, v___x_1622_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_);
return v___x_1623_;
}
else
{
lean_object* v_a_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1631_; 
lean_dec(v_mvarId_1612_);
v_a_1624_ = lean_ctor_get(v___x_1618_, 0);
v_isSharedCheck_1631_ = !lean_is_exclusive(v___x_1618_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1626_ = v___x_1618_;
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_a_1624_);
lean_dec(v___x_1618_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
lean_object* v___x_1629_; 
if (v_isShared_1627_ == 0)
{
v___x_1629_ = v___x_1626_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v_a_1624_);
v___x_1629_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
return v___x_1629_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices___lam__0___boxed(lean_object* v_fvarId_1632_, lean_object* v_mvarId_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_){
_start:
{
lean_object* v_res_1639_; 
v_res_1639_ = l_Lean_Meta_generalizeIndices___lam__0(v_fvarId_1632_, v_mvarId_1633_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_);
lean_dec(v___y_1637_);
lean_dec_ref(v___y_1636_);
lean_dec(v___y_1635_);
lean_dec_ref(v___y_1634_);
return v_res_1639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices(lean_object* v_mvarId_1640_, lean_object* v_fvarId_1641_, lean_object* v_a_1642_, lean_object* v_a_1643_, lean_object* v_a_1644_, lean_object* v_a_1645_){
_start:
{
lean_object* v___f_1647_; lean_object* v___x_1648_; 
lean_inc(v_mvarId_1640_);
v___f_1647_ = lean_alloc_closure((void*)(l_Lean_Meta_generalizeIndices___lam__0___boxed), 7, 2);
lean_closure_set(v___f_1647_, 0, v_fvarId_1641_);
lean_closure_set(v___f_1647_, 1, v_mvarId_1640_);
v___x_1648_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_1640_, v___f_1647_, v_a_1642_, v_a_1643_, v_a_1644_, v_a_1645_);
return v___x_1648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices___boxed(lean_object* v_mvarId_1649_, lean_object* v_fvarId_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_, lean_object* v_a_1654_, lean_object* v_a_1655_){
_start:
{
lean_object* v_res_1656_; 
v_res_1656_ = l_Lean_Meta_generalizeIndices(v_mvarId_1649_, v_fvarId_1650_, v_a_1651_, v_a_1652_, v_a_1653_, v_a_1654_);
lean_dec(v_a_1654_);
lean_dec_ref(v_a_1653_);
lean_dec(v_a_1652_);
lean_dec_ref(v_a_1651_);
return v_res_1656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg(lean_object* v___x_1658_, lean_object* v_a_1659_, lean_object* v_x_1660_, lean_object* v_x_1661_, lean_object* v_x_1662_, lean_object* v___y_1663_){
_start:
{
if (lean_obj_tag(v_x_1660_) == 5)
{
lean_object* v_fn_1668_; lean_object* v_arg_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; 
v_fn_1668_ = lean_ctor_get(v_x_1660_, 0);
lean_inc_ref(v_fn_1668_);
v_arg_1669_ = lean_ctor_get(v_x_1660_, 1);
lean_inc_ref(v_arg_1669_);
lean_dec_ref_known(v_x_1660_, 2);
v___x_1670_ = lean_array_set(v_x_1661_, v_x_1662_, v_arg_1669_);
v___x_1671_ = lean_unsigned_to_nat(1u);
v___x_1672_ = lean_nat_sub(v_x_1662_, v___x_1671_);
lean_dec(v_x_1662_);
v_x_1660_ = v_fn_1668_;
v_x_1661_ = v___x_1670_;
v_x_1662_ = v___x_1672_;
goto _start;
}
else
{
lean_dec(v_x_1662_);
if (lean_obj_tag(v_x_1660_) == 4)
{
lean_object* v_declName_1674_; uint8_t v___x_1675_; uint8_t v___x_1676_; lean_object* v___x_1677_; lean_object* v_env_1678_; lean_object* v___x_1679_; 
v_declName_1674_ = lean_ctor_get(v_x_1660_, 0);
v___x_1675_ = 0;
v___x_1676_ = 1;
v___x_1677_ = lean_st_ref_get(v___y_1663_);
v_env_1678_ = lean_ctor_get(v___x_1677_, 0);
lean_inc_ref(v_env_1678_);
lean_dec(v___x_1677_);
lean_inc(v_declName_1674_);
v___x_1679_ = l_Lean_Environment_find_x3f(v_env_1678_, v_declName_1674_, v___x_1675_);
if (lean_obj_tag(v___x_1679_) == 0)
{
lean_dec_ref_known(v_x_1660_, 2);
lean_dec_ref(v_x_1661_);
lean_dec_ref(v_a_1659_);
lean_dec_ref(v___x_1658_);
goto v___jp_1665_;
}
else
{
lean_object* v_val_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1718_; 
v_val_1680_ = lean_ctor_get(v___x_1679_, 0);
v_isSharedCheck_1718_ = !lean_is_exclusive(v___x_1679_);
if (v_isSharedCheck_1718_ == 0)
{
v___x_1682_ = v___x_1679_;
v_isShared_1683_ = v_isSharedCheck_1718_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_val_1680_);
lean_dec(v___x_1679_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1718_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
if (lean_obj_tag(v_val_1680_) == 5)
{
lean_object* v_val_1684_; lean_object* v___x_1686_; uint8_t v_isShared_1687_; uint8_t v_isSharedCheck_1717_; 
v_val_1684_ = lean_ctor_get(v_val_1680_, 0);
v_isSharedCheck_1717_ = !lean_is_exclusive(v_val_1680_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1686_ = v_val_1680_;
v_isShared_1687_ = v_isSharedCheck_1717_;
goto v_resetjp_1685_;
}
else
{
lean_inc(v_val_1684_);
lean_dec(v_val_1680_);
v___x_1686_ = lean_box(0);
v_isShared_1687_ = v_isSharedCheck_1717_;
goto v_resetjp_1685_;
}
v_resetjp_1685_:
{
lean_object* v_toConstantVal_1688_; lean_object* v_numParams_1689_; lean_object* v_numIndices_1690_; lean_object* v_ctors_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; uint8_t v___x_1694_; 
v_toConstantVal_1688_ = lean_ctor_get(v_val_1684_, 0);
v_numParams_1689_ = lean_ctor_get(v_val_1684_, 1);
v_numIndices_1690_ = lean_ctor_get(v_val_1684_, 2);
v_ctors_1691_ = lean_ctor_get(v_val_1684_, 4);
v___x_1692_ = lean_array_get_size(v_x_1661_);
v___x_1693_ = lean_nat_add(v_numIndices_1690_, v_numParams_1689_);
v___x_1694_ = lean_nat_dec_eq(v___x_1692_, v___x_1693_);
lean_dec(v___x_1693_);
if (v___x_1694_ == 0)
{
lean_object* v___x_1695_; lean_object* v___x_1697_; 
lean_dec_ref(v_val_1684_);
lean_del_object(v___x_1682_);
lean_dec_ref_known(v_x_1660_, 2);
lean_dec_ref(v_x_1661_);
lean_dec_ref(v_a_1659_);
lean_dec_ref(v___x_1658_);
v___x_1695_ = lean_box(0);
if (v_isShared_1687_ == 0)
{
lean_ctor_set_tag(v___x_1686_, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1695_);
v___x_1697_ = v___x_1686_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v___x_1695_);
v___x_1697_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
return v___x_1697_;
}
}
else
{
lean_object* v_name_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; uint8_t v___x_1702_; 
v_name_1699_ = lean_ctor_get(v_toConstantVal_1688_, 0);
v___x_1700_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg___closed__0));
lean_inc(v_name_1699_);
v___x_1701_ = l_Lean_Name_str___override(v_name_1699_, v___x_1700_);
v___x_1702_ = l_Lean_Environment_contains(v___x_1658_, v___x_1701_, v___x_1676_);
if (v___x_1702_ == 0)
{
lean_object* v___x_1703_; lean_object* v___x_1705_; 
lean_dec_ref(v_val_1684_);
lean_del_object(v___x_1682_);
lean_dec_ref_known(v_x_1660_, 2);
lean_dec_ref(v_x_1661_);
lean_dec_ref(v_a_1659_);
v___x_1703_ = lean_box(0);
if (v_isShared_1687_ == 0)
{
lean_ctor_set_tag(v___x_1686_, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1703_);
v___x_1705_ = v___x_1686_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v___x_1703_);
v___x_1705_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
return v___x_1705_;
}
}
else
{
lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1712_; 
v___x_1707_ = l_List_lengthTR___redArg(v_ctors_1691_);
v___x_1708_ = lean_nat_sub(v___x_1692_, v_numIndices_1690_);
v___x_1709_ = l_Array_extract___redArg(v_x_1661_, v___x_1708_, v___x_1692_);
v___x_1710_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1710_, 0, v_val_1684_);
lean_ctor_set(v___x_1710_, 1, v___x_1707_);
lean_ctor_set(v___x_1710_, 2, v_a_1659_);
lean_ctor_set(v___x_1710_, 3, v_x_1660_);
lean_ctor_set(v___x_1710_, 4, v_x_1661_);
lean_ctor_set(v___x_1710_, 5, v___x_1709_);
if (v_isShared_1683_ == 0)
{
lean_ctor_set(v___x_1682_, 0, v___x_1710_);
v___x_1712_ = v___x_1682_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v___x_1710_);
v___x_1712_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
lean_object* v___x_1714_; 
if (v_isShared_1687_ == 0)
{
lean_ctor_set_tag(v___x_1686_, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1712_);
v___x_1714_ = v___x_1686_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v___x_1712_);
v___x_1714_ = v_reuseFailAlloc_1715_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
return v___x_1714_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1682_);
lean_dec(v_val_1680_);
lean_dec_ref_known(v_x_1660_, 2);
lean_dec_ref(v_x_1661_);
lean_dec_ref(v_a_1659_);
lean_dec_ref(v___x_1658_);
goto v___jp_1665_;
}
}
}
}
else
{
lean_dec_ref(v_x_1661_);
lean_dec_ref(v_x_1660_);
lean_dec_ref(v_a_1659_);
lean_dec_ref(v___x_1658_);
goto v___jp_1665_;
}
}
v___jp_1665_:
{
lean_object* v___x_1666_; lean_object* v___x_1667_; 
v___x_1666_ = lean_box(0);
v___x_1667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1667_, 0, v___x_1666_);
return v___x_1667_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg___boxed(lean_object* v___x_1719_, lean_object* v_a_1720_, lean_object* v_x_1721_, lean_object* v_x_1722_, lean_object* v_x_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_){
_start:
{
lean_object* v_res_1726_; 
v_res_1726_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg(v___x_1719_, v_a_1720_, v_x_1721_, v_x_1722_, v_x_1723_, v___y_1724_);
lean_dec(v___y_1724_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f(lean_object* v_majorFVarId_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_){
_start:
{
lean_object* v___x_1733_; lean_object* v_env_1737_; lean_object* v___x_1738_; uint8_t v___x_1739_; uint8_t v___x_1740_; 
v___x_1733_ = lean_st_ref_get(v_a_1731_);
v_env_1737_ = lean_ctor_get(v___x_1733_, 0);
lean_inc_ref_n(v_env_1737_, 2);
lean_dec(v___x_1733_);
v___x_1738_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__5));
v___x_1739_ = 1;
v___x_1740_ = l_Lean_Environment_contains(v_env_1737_, v___x_1738_, v___x_1739_);
if (v___x_1740_ == 0)
{
lean_dec_ref(v_env_1737_);
lean_dec(v_majorFVarId_1727_);
goto v___jp_1734_;
}
else
{
lean_object* v___x_1741_; uint8_t v___x_1742_; 
v___x_1741_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__1));
lean_inc_ref(v_env_1737_);
v___x_1742_ = l_Lean_Environment_contains(v_env_1737_, v___x_1741_, v___x_1740_);
if (v___x_1742_ == 0)
{
lean_dec_ref(v_env_1737_);
lean_dec(v_majorFVarId_1727_);
goto v___jp_1734_;
}
else
{
lean_object* v___x_1743_; 
v___x_1743_ = l_Lean_FVarId_getDecl___redArg(v_majorFVarId_1727_, v_a_1728_, v_a_1730_, v_a_1731_);
if (lean_obj_tag(v___x_1743_) == 0)
{
lean_object* v_a_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; 
v_a_1744_ = lean_ctor_get(v___x_1743_, 0);
lean_inc(v_a_1744_);
lean_dec_ref_known(v___x_1743_, 1);
v___x_1745_ = l_Lean_LocalDecl_type(v_a_1744_);
lean_inc(v_a_1731_);
lean_inc_ref(v_a_1730_);
lean_inc(v_a_1729_);
lean_inc_ref(v_a_1728_);
v___x_1746_ = lean_whnf(v___x_1745_, v_a_1728_, v_a_1729_, v_a_1730_, v_a_1731_);
if (lean_obj_tag(v___x_1746_) == 0)
{
lean_object* v_a_1747_; lean_object* v_dummy_1748_; lean_object* v_nargs_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; 
v_a_1747_ = lean_ctor_get(v___x_1746_, 0);
lean_inc(v_a_1747_);
lean_dec_ref_known(v___x_1746_, 1);
v_dummy_1748_ = lean_obj_once(&l_Lean_Meta_getInductiveUniverseAndParams___closed__1, &l_Lean_Meta_getInductiveUniverseAndParams___closed__1_once, _init_l_Lean_Meta_getInductiveUniverseAndParams___closed__1);
v_nargs_1749_ = l_Lean_Expr_getAppNumArgs(v_a_1747_);
lean_inc(v_nargs_1749_);
v___x_1750_ = lean_mk_array(v_nargs_1749_, v_dummy_1748_);
v___x_1751_ = lean_unsigned_to_nat(1u);
v___x_1752_ = lean_nat_sub(v_nargs_1749_, v___x_1751_);
lean_dec(v_nargs_1749_);
v___x_1753_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg(v_env_1737_, v_a_1744_, v_a_1747_, v___x_1750_, v___x_1752_, v_a_1731_);
return v___x_1753_;
}
else
{
lean_object* v_a_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1761_; 
lean_dec(v_a_1744_);
lean_dec_ref(v_env_1737_);
v_a_1754_ = lean_ctor_get(v___x_1746_, 0);
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1746_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1756_ = v___x_1746_;
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_a_1754_);
lean_dec(v___x_1746_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v___x_1759_; 
if (v_isShared_1757_ == 0)
{
v___x_1759_ = v___x_1756_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v_a_1754_);
v___x_1759_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
return v___x_1759_;
}
}
}
}
else
{
lean_object* v_a_1762_; lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1769_; 
lean_dec_ref(v_env_1737_);
v_a_1762_ = lean_ctor_get(v___x_1743_, 0);
v_isSharedCheck_1769_ = !lean_is_exclusive(v___x_1743_);
if (v_isSharedCheck_1769_ == 0)
{
v___x_1764_ = v___x_1743_;
v_isShared_1765_ = v_isSharedCheck_1769_;
goto v_resetjp_1763_;
}
else
{
lean_inc(v_a_1762_);
lean_dec(v___x_1743_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1769_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
lean_object* v___x_1767_; 
if (v_isShared_1765_ == 0)
{
v___x_1767_ = v___x_1764_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_a_1762_);
v___x_1767_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
return v___x_1767_;
}
}
}
}
}
v___jp_1734_:
{
lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1735_ = lean_box(0);
v___x_1736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1735_);
return v___x_1736_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f___boxed(lean_object* v_majorFVarId_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_, lean_object* v_a_1774_, lean_object* v_a_1775_){
_start:
{
lean_object* v_res_1776_; 
v_res_1776_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f(v_majorFVarId_1770_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_);
lean_dec(v_a_1774_);
lean_dec_ref(v_a_1773_);
lean_dec(v_a_1772_);
lean_dec_ref(v_a_1771_);
return v_res_1776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0(lean_object* v___x_1777_, lean_object* v_a_1778_, lean_object* v_x_1779_, lean_object* v_x_1780_, lean_object* v_x_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_){
_start:
{
lean_object* v___x_1787_; 
v___x_1787_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg(v___x_1777_, v_a_1778_, v_x_1779_, v_x_1780_, v_x_1781_, v___y_1785_);
return v___x_1787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___boxed(lean_object* v___x_1788_, lean_object* v_a_1789_, lean_object* v_x_1790_, lean_object* v_x_1791_, lean_object* v_x_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_){
_start:
{
lean_object* v_res_1798_; 
v_res_1798_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0(v___x_1788_, v_a_1789_, v_x_1790_, v_x_1791_, v_x_1792_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_);
lean_dec(v___y_1796_);
lean_dec_ref(v___y_1795_);
lean_dec(v___y_1794_);
lean_dec_ref(v___y_1793_);
return v_res_1798_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___redArg(lean_object* v___x_1799_, lean_object* v_i_1800_, lean_object* v_n_1801_, lean_object* v_i_1802_){
_start:
{
lean_object* v_zero_1803_; uint8_t v_isZero_1804_; 
v_zero_1803_ = lean_unsigned_to_nat(0u);
v_isZero_1804_ = lean_nat_dec_eq(v_i_1802_, v_zero_1803_);
if (v_isZero_1804_ == 1)
{
uint8_t v___x_1805_; 
lean_dec(v_i_1802_);
v___x_1805_ = 0;
return v___x_1805_;
}
else
{
lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; uint8_t v___x_1809_; 
v___x_1806_ = lean_nat_sub(v_n_1801_, v_i_1802_);
v___x_1807_ = lean_array_fget_borrowed(v___x_1799_, v_i_1800_);
v___x_1808_ = lean_array_fget_borrowed(v___x_1799_, v___x_1806_);
lean_dec(v___x_1806_);
v___x_1809_ = lean_expr_eqv(v___x_1807_, v___x_1808_);
if (v___x_1809_ == 0)
{
lean_object* v_one_1810_; lean_object* v_n_1811_; 
v_one_1810_ = lean_unsigned_to_nat(1u);
v_n_1811_ = lean_nat_sub(v_i_1802_, v_one_1810_);
lean_dec(v_i_1802_);
v_i_1802_ = v_n_1811_;
goto _start;
}
else
{
lean_dec(v_i_1802_);
return v___x_1809_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___redArg___boxed(lean_object* v___x_1813_, lean_object* v_i_1814_, lean_object* v_n_1815_, lean_object* v_i_1816_){
_start:
{
uint8_t v_res_1817_; lean_object* v_r_1818_; 
v_res_1817_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___redArg(v___x_1813_, v_i_1814_, v_n_1815_, v_i_1816_);
lean_dec(v_n_1815_);
lean_dec(v_i_1814_);
lean_dec_ref(v___x_1813_);
v_r_1818_ = lean_box(v_res_1817_);
return v_r_1818_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___redArg(lean_object* v___x_1819_, lean_object* v_n_1820_, lean_object* v_i_1821_){
_start:
{
lean_object* v_zero_1822_; uint8_t v_isZero_1823_; 
v_zero_1822_ = lean_unsigned_to_nat(0u);
v_isZero_1823_ = lean_nat_dec_eq(v_i_1821_, v_zero_1822_);
if (v_isZero_1823_ == 1)
{
uint8_t v___x_1824_; 
lean_dec(v_i_1821_);
v___x_1824_ = 0;
return v___x_1824_;
}
else
{
lean_object* v___x_1825_; uint8_t v___x_1826_; 
v___x_1825_ = lean_nat_sub(v_n_1820_, v_i_1821_);
lean_inc(v___x_1825_);
v___x_1826_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___redArg(v___x_1819_, v___x_1825_, v___x_1825_, v___x_1825_);
lean_dec(v___x_1825_);
if (v___x_1826_ == 0)
{
lean_object* v_one_1827_; lean_object* v_n_1828_; 
v_one_1827_ = lean_unsigned_to_nat(1u);
v_n_1828_ = lean_nat_sub(v_i_1821_, v_one_1827_);
lean_dec(v_i_1821_);
v_i_1821_ = v_n_1828_;
goto _start;
}
else
{
lean_dec(v_i_1821_);
return v___x_1826_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___redArg___boxed(lean_object* v___x_1830_, lean_object* v_n_1831_, lean_object* v_i_1832_){
_start:
{
uint8_t v_res_1833_; lean_object* v_r_1834_; 
v_res_1833_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___redArg(v___x_1830_, v_n_1831_, v_i_1832_);
lean_dec(v_n_1831_);
lean_dec_ref(v___x_1830_);
v_r_1834_ = lean_box(v_res_1833_);
return v_r_1834_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__5(lean_object* v___x_1835_, lean_object* v_as_1836_, size_t v_i_1837_, size_t v_stop_1838_){
_start:
{
uint8_t v___x_1839_; 
v___x_1839_ = lean_usize_dec_eq(v_i_1837_, v_stop_1838_);
if (v___x_1839_ == 0)
{
uint8_t v___x_1840_; lean_object* v___x_1841_; uint8_t v___x_1842_; 
v___x_1840_ = 1;
v___x_1841_ = lean_array_uget_borrowed(v_as_1836_, v_i_1837_);
v___x_1842_ = l_Lean_Expr_isFVar(v___x_1841_);
if (v___x_1842_ == 0)
{
return v___x_1840_;
}
else
{
lean_object* v___x_1843_; uint8_t v___x_1844_; 
v___x_1843_ = lean_unsigned_to_nat(0u);
v___x_1844_ = lean_nat_dec_eq(v___x_1835_, v___x_1843_);
if (v___x_1844_ == 0)
{
size_t v___x_1845_; size_t v___x_1846_; 
v___x_1845_ = ((size_t)1ULL);
v___x_1846_ = lean_usize_add(v_i_1837_, v___x_1845_);
v_i_1837_ = v___x_1846_;
goto _start;
}
else
{
return v___x_1840_;
}
}
}
else
{
uint8_t v___x_1848_; 
v___x_1848_ = 0;
return v___x_1848_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__5___boxed(lean_object* v___x_1849_, lean_object* v_as_1850_, lean_object* v_i_1851_, lean_object* v_stop_1852_){
_start:
{
size_t v_i_boxed_1853_; size_t v_stop_boxed_1854_; uint8_t v_res_1855_; lean_object* v_r_1856_; 
v_i_boxed_1853_ = lean_unbox_usize(v_i_1851_);
lean_dec(v_i_1851_);
v_stop_boxed_1854_ = lean_unbox_usize(v_stop_1852_);
lean_dec(v_stop_1852_);
v_res_1855_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__5(v___x_1849_, v_as_1850_, v_i_boxed_1853_, v_stop_boxed_1854_);
lean_dec_ref(v_as_1850_);
lean_dec(v___x_1849_);
v_r_1856_ = lean_box(v_res_1855_);
return v_r_1856_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__2(lean_object* v_fvarId_1857_, uint8_t v___x_1858_, lean_object* v_as_1859_, size_t v_i_1860_, size_t v_stop_1861_){
_start:
{
uint8_t v___x_1862_; 
v___x_1862_ = lean_usize_dec_eq(v_i_1860_, v_stop_1861_);
if (v___x_1862_ == 0)
{
uint8_t v___x_1863_; uint8_t v___y_1865_; lean_object* v___x_1869_; lean_object* v___x_1870_; uint8_t v___x_1871_; 
v___x_1863_ = 1;
v___x_1869_ = lean_array_uget_borrowed(v_as_1859_, v_i_1860_);
v___x_1870_ = l_Lean_Expr_fvarId_x21(v___x_1869_);
v___x_1871_ = l_Lean_instBEqFVarId_beq(v___x_1870_, v_fvarId_1857_);
lean_dec(v___x_1870_);
if (v___x_1871_ == 0)
{
v___y_1865_ = v___x_1858_;
goto v___jp_1864_;
}
else
{
if (v___x_1858_ == 0)
{
v___y_1865_ = v___x_1871_;
goto v___jp_1864_;
}
else
{
return v___x_1863_;
}
}
v___jp_1864_:
{
if (v___y_1865_ == 0)
{
size_t v___x_1866_; size_t v___x_1867_; 
v___x_1866_ = ((size_t)1ULL);
v___x_1867_ = lean_usize_add(v_i_1860_, v___x_1866_);
v_i_1860_ = v___x_1867_;
goto _start;
}
else
{
return v___x_1863_;
}
}
}
else
{
uint8_t v___x_1872_; 
v___x_1872_ = 0;
return v___x_1872_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__2___boxed(lean_object* v_fvarId_1873_, lean_object* v___x_1874_, lean_object* v_as_1875_, lean_object* v_i_1876_, lean_object* v_stop_1877_){
_start:
{
uint8_t v___x_7575__boxed_1878_; size_t v_i_boxed_1879_; size_t v_stop_boxed_1880_; uint8_t v_res_1881_; lean_object* v_r_1882_; 
v___x_7575__boxed_1878_ = lean_unbox(v___x_1874_);
v_i_boxed_1879_ = lean_unbox_usize(v_i_1876_);
lean_dec(v_i_1876_);
v_stop_boxed_1880_ = lean_unbox_usize(v_stop_1877_);
lean_dec(v_stop_1877_);
v_res_1881_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__2(v_fvarId_1873_, v___x_7575__boxed_1878_, v_as_1875_, v_i_boxed_1879_, v_stop_boxed_1880_);
lean_dec_ref(v_as_1875_);
lean_dec(v_fvarId_1873_);
v_r_1882_ = lean_box(v_res_1881_);
return v_r_1882_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__1(lean_object* v___x_1883_, lean_object* v___x_1884_, uint8_t v___x_1885_, lean_object* v___x_1886_, lean_object* v_fvarId_1887_){
_start:
{
uint8_t v___x_1888_; lean_object* v___y_1890_; 
v___x_1888_ = lean_nat_dec_lt(v___x_1883_, v___x_1884_);
if (v___x_1888_ == 0)
{
uint8_t v___x_1895_; 
lean_dec(v___x_1884_);
v___x_1895_ = 1;
return v___x_1895_;
}
else
{
lean_object* v___x_1896_; uint8_t v___x_1897_; 
v___x_1896_ = lean_array_get_size(v___x_1886_);
v___x_1897_ = lean_nat_dec_le(v___x_1884_, v___x_1896_);
if (v___x_1897_ == 0)
{
lean_dec(v___x_1884_);
v___y_1890_ = v___x_1896_;
goto v___jp_1889_;
}
else
{
v___y_1890_ = v___x_1884_;
goto v___jp_1889_;
}
}
v___jp_1889_:
{
uint8_t v___x_1891_; 
v___x_1891_ = lean_nat_dec_lt(v___x_1883_, v___y_1890_);
if (v___x_1891_ == 0)
{
lean_dec(v___y_1890_);
return v___x_1888_;
}
else
{
size_t v___x_1892_; size_t v___x_1893_; uint8_t v___x_1894_; 
v___x_1892_ = ((size_t)0ULL);
v___x_1893_ = lean_usize_of_nat(v___y_1890_);
lean_dec(v___y_1890_);
v___x_1894_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__2(v_fvarId_1887_, v___x_1885_, v___x_1886_, v___x_1892_, v___x_1893_);
if (v___x_1894_ == 0)
{
return v___x_1891_;
}
else
{
return v___x_1885_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__1___boxed(lean_object* v___x_1898_, lean_object* v___x_1899_, lean_object* v___x_1900_, lean_object* v___x_1901_, lean_object* v_fvarId_1902_){
_start:
{
uint8_t v___x_7602__boxed_1903_; uint8_t v_res_1904_; lean_object* v_r_1905_; 
v___x_7602__boxed_1903_ = lean_unbox(v___x_1900_);
v_res_1904_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__1(v___x_1898_, v___x_1899_, v___x_7602__boxed_1903_, v___x_1901_, v_fvarId_1902_);
lean_dec(v_fvarId_1902_);
lean_dec_ref(v___x_1901_);
lean_dec(v___x_1898_);
v_r_1905_ = lean_box(v_res_1904_);
return v_r_1905_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__3(lean_object* v___x_1906_, lean_object* v_as_1907_, size_t v_i_1908_, size_t v_stop_1909_){
_start:
{
uint8_t v___x_1910_; 
v___x_1910_ = lean_usize_dec_eq(v_i_1908_, v_stop_1909_);
if (v___x_1910_ == 0)
{
lean_object* v___x_1911_; lean_object* v___x_1912_; uint8_t v___x_1913_; 
v___x_1911_ = lean_array_uget_borrowed(v_as_1907_, v_i_1908_);
v___x_1912_ = l_Lean_Expr_fvarId_x21(v___x_1911_);
v___x_1913_ = l_Lean_instBEqFVarId_beq(v___x_1906_, v___x_1912_);
lean_dec(v___x_1912_);
if (v___x_1913_ == 0)
{
size_t v___x_1914_; size_t v___x_1915_; 
v___x_1914_ = ((size_t)1ULL);
v___x_1915_ = lean_usize_add(v_i_1908_, v___x_1914_);
v_i_1908_ = v___x_1915_;
goto _start;
}
else
{
return v___x_1913_;
}
}
else
{
uint8_t v___x_1917_; 
v___x_1917_ = 0;
return v___x_1917_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__3___boxed(lean_object* v___x_1918_, lean_object* v_as_1919_, lean_object* v_i_1920_, lean_object* v_stop_1921_){
_start:
{
size_t v_i_boxed_1922_; size_t v_stop_boxed_1923_; uint8_t v_res_1924_; lean_object* v_r_1925_; 
v_i_boxed_1922_ = lean_unbox_usize(v_i_1920_);
lean_dec(v_i_1920_);
v_stop_boxed_1923_ = lean_unbox_usize(v_stop_1921_);
lean_dec(v_stop_1921_);
v_res_1924_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__3(v___x_1918_, v_as_1919_, v_i_boxed_1922_, v_stop_boxed_1923_);
lean_dec_ref(v_as_1919_);
lean_dec(v___x_1918_);
v_r_1925_ = lean_box(v_res_1924_);
return v_r_1925_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__0(uint8_t v___x_1926_, lean_object* v_x_1927_){
_start:
{
return v___x_1926_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__0___boxed(lean_object* v___x_1928_, lean_object* v_x_1929_){
_start:
{
uint8_t v___x_7651__boxed_1930_; uint8_t v_res_1931_; lean_object* v_r_1932_; 
v___x_7651__boxed_1930_ = lean_unbox(v___x_1928_);
v_res_1931_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__0(v___x_7651__boxed_1930_, v_x_1929_);
lean_dec(v_x_1929_);
v_r_1932_ = lean_box(v_res_1931_);
return v_r_1932_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
v___x_1933_ = lean_box(0);
v___x_1934_ = lean_unsigned_to_nat(16u);
v___x_1935_ = lean_mk_array(v___x_1934_, v___x_1933_);
return v___x_1935_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; 
v___x_1936_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__0);
v___x_1937_ = lean_unsigned_to_nat(0u);
v___x_1938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1938_, 0, v___x_1937_);
lean_ctor_set(v___x_1938_, 1, v___x_1936_);
return v___x_1938_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg(uint8_t v___x_1939_, lean_object* v___x_1940_, lean_object* v___x_1941_, lean_object* v_ctx_1942_, lean_object* v_as_1943_, size_t v_i_1944_, size_t v_stop_1945_, lean_object* v___y_1946_){
_start:
{
uint8_t v___x_1948_; 
v___x_1948_ = lean_usize_dec_eq(v_i_1944_, v_stop_1945_);
if (v___x_1948_ == 0)
{
uint8_t v___x_1949_; uint8_t v_a_1951_; uint8_t v_a_1958_; uint8_t v_fst_1962_; lean_object* v_mctx_1963_; lean_object* v___y_1979_; uint8_t v_fst_1985_; lean_object* v_snd_1986_; lean_object* v___y_2003_; uint8_t v_fst_2008_; lean_object* v_mctx_2009_; lean_object* v___y_2025_; lean_object* v___x_2030_; 
v___x_1949_ = 1;
v___x_2030_ = lean_array_uget_borrowed(v_as_1943_, v_i_1944_);
if (lean_obj_tag(v___x_2030_) == 0)
{
v_a_1951_ = v___x_1939_;
goto v___jp_1950_;
}
else
{
lean_object* v_val_2031_; lean_object* v_majorDecl_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; uint8_t v___x_2035_; 
v_val_2031_ = lean_ctor_get(v___x_2030_, 0);
v_majorDecl_2032_ = lean_ctor_get(v_ctx_1942_, 2);
v___x_2033_ = l_Lean_LocalDecl_fvarId(v_val_2031_);
v___x_2034_ = l_Lean_LocalDecl_fvarId(v_majorDecl_2032_);
v___x_2035_ = l_Lean_instBEqFVarId_beq(v___x_2033_, v___x_2034_);
lean_dec(v___x_2034_);
if (v___x_2035_ == 0)
{
lean_object* v___x_2036_; lean_object* v___f_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___f_2040_; lean_object* v___y_2042_; uint8_t v_fst_2043_; lean_object* v_snd_2044_; lean_object* v___y_2050_; lean_object* v___y_2051_; lean_object* v___y_2086_; uint8_t v___x_2091_; 
v___x_2036_ = lean_box(v___x_1939_);
v___f_2037_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2037_, 0, v___x_2036_);
v___x_2038_ = lean_unsigned_to_nat(0u);
v___x_2039_ = lean_box(v___x_1939_);
lean_inc_ref(v___x_1940_);
lean_inc(v___x_1941_);
v___f_2040_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_2040_, 0, v___x_2038_);
lean_closure_set(v___f_2040_, 1, v___x_1941_);
lean_closure_set(v___f_2040_, 2, v___x_2039_);
lean_closure_set(v___f_2040_, 3, v___x_1940_);
v___x_2091_ = lean_nat_dec_lt(v___x_2038_, v___x_1941_);
if (v___x_2091_ == 0)
{
lean_dec(v___x_2033_);
goto v___jp_2055_;
}
else
{
lean_object* v___x_2092_; uint8_t v___x_2093_; 
v___x_2092_ = lean_array_get_size(v___x_1940_);
v___x_2093_ = lean_nat_dec_le(v___x_1941_, v___x_2092_);
if (v___x_2093_ == 0)
{
v___y_2086_ = v___x_2092_;
goto v___jp_2085_;
}
else
{
lean_inc(v___x_1941_);
v___y_2086_ = v___x_1941_;
goto v___jp_2085_;
}
}
v___jp_2041_:
{
if (v_fst_2043_ == 0)
{
uint8_t v___x_2045_; 
v___x_2045_ = l_Lean_Expr_hasFVar(v___y_2042_);
if (v___x_2045_ == 0)
{
uint8_t v___x_2046_; 
v___x_2046_ = l_Lean_Expr_hasMVar(v___y_2042_);
if (v___x_2046_ == 0)
{
lean_dec_ref(v___y_2042_);
lean_dec_ref(v___f_2040_);
lean_dec_ref(v___f_2037_);
v_fst_1985_ = v___x_2046_;
v_snd_1986_ = v_snd_2044_;
goto v___jp_1984_;
}
else
{
lean_object* v___x_2047_; 
v___x_2047_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2040_, v___f_2037_, v___y_2042_, v_snd_2044_);
v___y_2003_ = v___x_2047_;
goto v___jp_2002_;
}
}
else
{
lean_object* v___x_2048_; 
v___x_2048_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2040_, v___f_2037_, v___y_2042_, v_snd_2044_);
v___y_2003_ = v___x_2048_;
goto v___jp_2002_;
}
}
else
{
lean_dec_ref(v___y_2042_);
lean_dec_ref(v___f_2040_);
lean_dec_ref(v___f_2037_);
v_fst_1985_ = v_fst_2043_;
v_snd_1986_ = v_snd_2044_;
goto v___jp_1984_;
}
}
v___jp_2049_:
{
lean_object* v_fst_2052_; lean_object* v_snd_2053_; uint8_t v___x_2054_; 
v_fst_2052_ = lean_ctor_get(v___y_2051_, 0);
lean_inc(v_fst_2052_);
v_snd_2053_ = lean_ctor_get(v___y_2051_, 1);
lean_inc(v_snd_2053_);
lean_dec_ref(v___y_2051_);
v___x_2054_ = lean_unbox(v_fst_2052_);
lean_dec(v_fst_2052_);
v___y_2042_ = v___y_2050_;
v_fst_2043_ = v___x_2054_;
v_snd_2044_ = v_snd_2053_;
goto v___jp_2041_;
}
v___jp_2055_:
{
if (lean_obj_tag(v_val_2031_) == 0)
{
lean_object* v_type_2056_; lean_object* v___x_2057_; lean_object* v_mctx_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; uint8_t v___x_2061_; 
v_type_2056_ = lean_ctor_get(v_val_2031_, 3);
v___x_2057_ = lean_st_ref_get(v___y_1946_);
v_mctx_2058_ = lean_ctor_get(v___x_2057_, 0);
lean_inc_ref_n(v_mctx_2058_, 2);
lean_dec(v___x_2057_);
v___x_2059_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1);
v___x_2060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2060_, 0, v___x_2059_);
lean_ctor_set(v___x_2060_, 1, v_mctx_2058_);
v___x_2061_ = l_Lean_Expr_hasFVar(v_type_2056_);
if (v___x_2061_ == 0)
{
uint8_t v___x_2062_; 
v___x_2062_ = l_Lean_Expr_hasMVar(v_type_2056_);
if (v___x_2062_ == 0)
{
lean_dec_ref_known(v___x_2060_, 2);
lean_dec_ref(v___f_2040_);
lean_dec_ref(v___f_2037_);
v_fst_2008_ = v___x_2062_;
v_mctx_2009_ = v_mctx_2058_;
goto v___jp_2007_;
}
else
{
lean_object* v___x_2063_; 
lean_dec_ref(v_mctx_2058_);
lean_inc_ref(v_type_2056_);
v___x_2063_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2040_, v___f_2037_, v_type_2056_, v___x_2060_);
v___y_2025_ = v___x_2063_;
goto v___jp_2024_;
}
}
else
{
lean_object* v___x_2064_; 
lean_dec_ref(v_mctx_2058_);
lean_inc_ref(v_type_2056_);
v___x_2064_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2040_, v___f_2037_, v_type_2056_, v___x_2060_);
v___y_2025_ = v___x_2064_;
goto v___jp_2024_;
}
}
else
{
uint8_t v_nondep_2065_; 
v_nondep_2065_ = lean_ctor_get_uint8(v_val_2031_, sizeof(void*)*5);
if (v_nondep_2065_ == 0)
{
lean_object* v_type_2066_; lean_object* v_value_2067_; lean_object* v___x_2068_; lean_object* v_mctx_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; uint8_t v___x_2072_; 
v_type_2066_ = lean_ctor_get(v_val_2031_, 3);
v_value_2067_ = lean_ctor_get(v_val_2031_, 4);
v___x_2068_ = lean_st_ref_get(v___y_1946_);
v_mctx_2069_ = lean_ctor_get(v___x_2068_, 0);
lean_inc_ref(v_mctx_2069_);
lean_dec(v___x_2068_);
v___x_2070_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1);
v___x_2071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2071_, 0, v___x_2070_);
lean_ctor_set(v___x_2071_, 1, v_mctx_2069_);
v___x_2072_ = l_Lean_Expr_hasFVar(v_type_2066_);
if (v___x_2072_ == 0)
{
uint8_t v___x_2073_; 
v___x_2073_ = l_Lean_Expr_hasMVar(v_type_2066_);
if (v___x_2073_ == 0)
{
lean_inc_ref(v_value_2067_);
v___y_2042_ = v_value_2067_;
v_fst_2043_ = v___x_2073_;
v_snd_2044_ = v___x_2071_;
goto v___jp_2041_;
}
else
{
lean_object* v___x_2074_; 
lean_inc_ref(v_type_2066_);
lean_inc_ref(v___f_2037_);
lean_inc_ref(v___f_2040_);
v___x_2074_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2040_, v___f_2037_, v_type_2066_, v___x_2071_);
lean_inc_ref(v_value_2067_);
v___y_2050_ = v_value_2067_;
v___y_2051_ = v___x_2074_;
goto v___jp_2049_;
}
}
else
{
lean_object* v___x_2075_; 
lean_inc_ref(v_type_2066_);
lean_inc_ref(v___f_2037_);
lean_inc_ref(v___f_2040_);
v___x_2075_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2040_, v___f_2037_, v_type_2066_, v___x_2071_);
lean_inc_ref(v_value_2067_);
v___y_2050_ = v_value_2067_;
v___y_2051_ = v___x_2075_;
goto v___jp_2049_;
}
}
else
{
lean_object* v_type_2076_; lean_object* v___x_2077_; lean_object* v_mctx_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; uint8_t v___x_2081_; 
v_type_2076_ = lean_ctor_get(v_val_2031_, 3);
v___x_2077_ = lean_st_ref_get(v___y_1946_);
v_mctx_2078_ = lean_ctor_get(v___x_2077_, 0);
lean_inc_ref_n(v_mctx_2078_, 2);
lean_dec(v___x_2077_);
v___x_2079_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1);
v___x_2080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2080_, 0, v___x_2079_);
lean_ctor_set(v___x_2080_, 1, v_mctx_2078_);
v___x_2081_ = l_Lean_Expr_hasFVar(v_type_2076_);
if (v___x_2081_ == 0)
{
uint8_t v___x_2082_; 
v___x_2082_ = l_Lean_Expr_hasMVar(v_type_2076_);
if (v___x_2082_ == 0)
{
lean_dec_ref_known(v___x_2080_, 2);
lean_dec_ref(v___f_2040_);
lean_dec_ref(v___f_2037_);
v_fst_1962_ = v___x_2082_;
v_mctx_1963_ = v_mctx_2078_;
goto v___jp_1961_;
}
else
{
lean_object* v___x_2083_; 
lean_dec_ref(v_mctx_2078_);
lean_inc_ref(v_type_2076_);
v___x_2083_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2040_, v___f_2037_, v_type_2076_, v___x_2080_);
v___y_1979_ = v___x_2083_;
goto v___jp_1978_;
}
}
else
{
lean_object* v___x_2084_; 
lean_dec_ref(v_mctx_2078_);
lean_inc_ref(v_type_2076_);
v___x_2084_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2040_, v___f_2037_, v_type_2076_, v___x_2080_);
v___y_1979_ = v___x_2084_;
goto v___jp_1978_;
}
}
}
}
v___jp_2085_:
{
uint8_t v___x_2087_; 
v___x_2087_ = lean_nat_dec_lt(v___x_2038_, v___y_2086_);
if (v___x_2087_ == 0)
{
lean_dec(v___y_2086_);
lean_dec(v___x_2033_);
goto v___jp_2055_;
}
else
{
size_t v___x_2088_; size_t v___x_2089_; uint8_t v___x_2090_; 
v___x_2088_ = ((size_t)0ULL);
v___x_2089_ = lean_usize_of_nat(v___y_2086_);
lean_dec(v___y_2086_);
v___x_2090_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__3(v___x_2033_, v___x_1940_, v___x_2088_, v___x_2089_);
lean_dec(v___x_2033_);
if (v___x_2090_ == 0)
{
goto v___jp_2055_;
}
else
{
lean_dec_ref(v___f_2040_);
lean_dec_ref(v___f_2037_);
v_a_1958_ = v___x_2090_;
goto v___jp_1957_;
}
}
}
}
else
{
lean_dec(v___x_2033_);
v_a_1958_ = v___x_2035_;
goto v___jp_1957_;
}
}
v___jp_1950_:
{
if (v_a_1951_ == 0)
{
size_t v___x_1952_; size_t v___x_1953_; 
v___x_1952_ = ((size_t)1ULL);
v___x_1953_ = lean_usize_add(v_i_1944_, v___x_1952_);
v_i_1944_ = v___x_1953_;
goto _start;
}
else
{
lean_object* v___x_1955_; lean_object* v___x_1956_; 
lean_dec(v___x_1941_);
lean_dec_ref(v___x_1940_);
v___x_1955_ = lean_box(v___x_1949_);
v___x_1956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1956_, 0, v___x_1955_);
return v___x_1956_;
}
}
v___jp_1957_:
{
if (v_a_1958_ == 0)
{
lean_object* v___x_1959_; lean_object* v___x_1960_; 
lean_dec(v___x_1941_);
lean_dec_ref(v___x_1940_);
v___x_1959_ = lean_box(v___x_1949_);
v___x_1960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1960_, 0, v___x_1959_);
return v___x_1960_;
}
else
{
v_a_1951_ = v___x_1939_;
goto v___jp_1950_;
}
}
v___jp_1961_:
{
lean_object* v___x_1964_; lean_object* v_cache_1965_; lean_object* v_zetaDeltaFVarIds_1966_; lean_object* v_postponed_1967_; lean_object* v_diag_1968_; lean_object* v___x_1970_; uint8_t v_isShared_1971_; uint8_t v_isSharedCheck_1976_; 
v___x_1964_ = lean_st_ref_take(v___y_1946_);
v_cache_1965_ = lean_ctor_get(v___x_1964_, 1);
v_zetaDeltaFVarIds_1966_ = lean_ctor_get(v___x_1964_, 2);
v_postponed_1967_ = lean_ctor_get(v___x_1964_, 3);
v_diag_1968_ = lean_ctor_get(v___x_1964_, 4);
v_isSharedCheck_1976_ = !lean_is_exclusive(v___x_1964_);
if (v_isSharedCheck_1976_ == 0)
{
lean_object* v_unused_1977_; 
v_unused_1977_ = lean_ctor_get(v___x_1964_, 0);
lean_dec(v_unused_1977_);
v___x_1970_ = v___x_1964_;
v_isShared_1971_ = v_isSharedCheck_1976_;
goto v_resetjp_1969_;
}
else
{
lean_inc(v_diag_1968_);
lean_inc(v_postponed_1967_);
lean_inc(v_zetaDeltaFVarIds_1966_);
lean_inc(v_cache_1965_);
lean_dec(v___x_1964_);
v___x_1970_ = lean_box(0);
v_isShared_1971_ = v_isSharedCheck_1976_;
goto v_resetjp_1969_;
}
v_resetjp_1969_:
{
lean_object* v___x_1973_; 
if (v_isShared_1971_ == 0)
{
lean_ctor_set(v___x_1970_, 0, v_mctx_1963_);
v___x_1973_ = v___x_1970_;
goto v_reusejp_1972_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v_mctx_1963_);
lean_ctor_set(v_reuseFailAlloc_1975_, 1, v_cache_1965_);
lean_ctor_set(v_reuseFailAlloc_1975_, 2, v_zetaDeltaFVarIds_1966_);
lean_ctor_set(v_reuseFailAlloc_1975_, 3, v_postponed_1967_);
lean_ctor_set(v_reuseFailAlloc_1975_, 4, v_diag_1968_);
v___x_1973_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1972_;
}
v_reusejp_1972_:
{
lean_object* v___x_1974_; 
v___x_1974_ = lean_st_ref_put(v___y_1946_, v___x_1973_);
v_a_1958_ = v_fst_1962_;
goto v___jp_1957_;
}
}
}
v___jp_1978_:
{
lean_object* v_snd_1980_; lean_object* v_fst_1981_; lean_object* v_mctx_1982_; uint8_t v___x_1983_; 
v_snd_1980_ = lean_ctor_get(v___y_1979_, 1);
lean_inc(v_snd_1980_);
v_fst_1981_ = lean_ctor_get(v___y_1979_, 0);
lean_inc(v_fst_1981_);
lean_dec_ref(v___y_1979_);
v_mctx_1982_ = lean_ctor_get(v_snd_1980_, 1);
lean_inc_ref(v_mctx_1982_);
lean_dec(v_snd_1980_);
v___x_1983_ = lean_unbox(v_fst_1981_);
lean_dec(v_fst_1981_);
v_fst_1962_ = v___x_1983_;
v_mctx_1963_ = v_mctx_1982_;
goto v___jp_1961_;
}
v___jp_1984_:
{
lean_object* v_mctx_1987_; lean_object* v___x_1988_; lean_object* v_cache_1989_; lean_object* v_zetaDeltaFVarIds_1990_; lean_object* v_postponed_1991_; lean_object* v_diag_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_2000_; 
v_mctx_1987_ = lean_ctor_get(v_snd_1986_, 1);
lean_inc_ref(v_mctx_1987_);
lean_dec_ref(v_snd_1986_);
v___x_1988_ = lean_st_ref_take(v___y_1946_);
v_cache_1989_ = lean_ctor_get(v___x_1988_, 1);
v_zetaDeltaFVarIds_1990_ = lean_ctor_get(v___x_1988_, 2);
v_postponed_1991_ = lean_ctor_get(v___x_1988_, 3);
v_diag_1992_ = lean_ctor_get(v___x_1988_, 4);
v_isSharedCheck_2000_ = !lean_is_exclusive(v___x_1988_);
if (v_isSharedCheck_2000_ == 0)
{
lean_object* v_unused_2001_; 
v_unused_2001_ = lean_ctor_get(v___x_1988_, 0);
lean_dec(v_unused_2001_);
v___x_1994_ = v___x_1988_;
v_isShared_1995_ = v_isSharedCheck_2000_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_diag_1992_);
lean_inc(v_postponed_1991_);
lean_inc(v_zetaDeltaFVarIds_1990_);
lean_inc(v_cache_1989_);
lean_dec(v___x_1988_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_2000_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v___x_1997_; 
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 0, v_mctx_1987_);
v___x_1997_ = v___x_1994_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v_mctx_1987_);
lean_ctor_set(v_reuseFailAlloc_1999_, 1, v_cache_1989_);
lean_ctor_set(v_reuseFailAlloc_1999_, 2, v_zetaDeltaFVarIds_1990_);
lean_ctor_set(v_reuseFailAlloc_1999_, 3, v_postponed_1991_);
lean_ctor_set(v_reuseFailAlloc_1999_, 4, v_diag_1992_);
v___x_1997_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
lean_object* v___x_1998_; 
v___x_1998_ = lean_st_ref_put(v___y_1946_, v___x_1997_);
v_a_1958_ = v_fst_1985_;
goto v___jp_1957_;
}
}
}
v___jp_2002_:
{
lean_object* v_fst_2004_; lean_object* v_snd_2005_; uint8_t v___x_2006_; 
v_fst_2004_ = lean_ctor_get(v___y_2003_, 0);
lean_inc(v_fst_2004_);
v_snd_2005_ = lean_ctor_get(v___y_2003_, 1);
lean_inc(v_snd_2005_);
lean_dec_ref(v___y_2003_);
v___x_2006_ = lean_unbox(v_fst_2004_);
lean_dec(v_fst_2004_);
v_fst_1985_ = v___x_2006_;
v_snd_1986_ = v_snd_2005_;
goto v___jp_1984_;
}
v___jp_2007_:
{
lean_object* v___x_2010_; lean_object* v_cache_2011_; lean_object* v_zetaDeltaFVarIds_2012_; lean_object* v_postponed_2013_; lean_object* v_diag_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2022_; 
v___x_2010_ = lean_st_ref_take(v___y_1946_);
v_cache_2011_ = lean_ctor_get(v___x_2010_, 1);
v_zetaDeltaFVarIds_2012_ = lean_ctor_get(v___x_2010_, 2);
v_postponed_2013_ = lean_ctor_get(v___x_2010_, 3);
v_diag_2014_ = lean_ctor_get(v___x_2010_, 4);
v_isSharedCheck_2022_ = !lean_is_exclusive(v___x_2010_);
if (v_isSharedCheck_2022_ == 0)
{
lean_object* v_unused_2023_; 
v_unused_2023_ = lean_ctor_get(v___x_2010_, 0);
lean_dec(v_unused_2023_);
v___x_2016_ = v___x_2010_;
v_isShared_2017_ = v_isSharedCheck_2022_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_diag_2014_);
lean_inc(v_postponed_2013_);
lean_inc(v_zetaDeltaFVarIds_2012_);
lean_inc(v_cache_2011_);
lean_dec(v___x_2010_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2022_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v___x_2019_; 
if (v_isShared_2017_ == 0)
{
lean_ctor_set(v___x_2016_, 0, v_mctx_2009_);
v___x_2019_ = v___x_2016_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v_mctx_2009_);
lean_ctor_set(v_reuseFailAlloc_2021_, 1, v_cache_2011_);
lean_ctor_set(v_reuseFailAlloc_2021_, 2, v_zetaDeltaFVarIds_2012_);
lean_ctor_set(v_reuseFailAlloc_2021_, 3, v_postponed_2013_);
lean_ctor_set(v_reuseFailAlloc_2021_, 4, v_diag_2014_);
v___x_2019_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
lean_object* v___x_2020_; 
v___x_2020_ = lean_st_ref_put(v___y_1946_, v___x_2019_);
v_a_1958_ = v_fst_2008_;
goto v___jp_1957_;
}
}
}
v___jp_2024_:
{
lean_object* v_snd_2026_; lean_object* v_fst_2027_; lean_object* v_mctx_2028_; uint8_t v___x_2029_; 
v_snd_2026_ = lean_ctor_get(v___y_2025_, 1);
lean_inc(v_snd_2026_);
v_fst_2027_ = lean_ctor_get(v___y_2025_, 0);
lean_inc(v_fst_2027_);
lean_dec_ref(v___y_2025_);
v_mctx_2028_ = lean_ctor_get(v_snd_2026_, 1);
lean_inc_ref(v_mctx_2028_);
lean_dec(v_snd_2026_);
v___x_2029_ = lean_unbox(v_fst_2027_);
lean_dec(v_fst_2027_);
v_fst_2008_ = v___x_2029_;
v_mctx_2009_ = v_mctx_2028_;
goto v___jp_2007_;
}
}
else
{
uint8_t v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; 
lean_dec(v___x_1941_);
lean_dec_ref(v___x_1940_);
v___x_2094_ = 0;
v___x_2095_ = lean_box(v___x_2094_);
v___x_2096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2095_);
return v___x_2096_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___boxed(lean_object* v___x_2097_, lean_object* v___x_2098_, lean_object* v___x_2099_, lean_object* v_ctx_2100_, lean_object* v_as_2101_, lean_object* v_i_2102_, lean_object* v_stop_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_){
_start:
{
uint8_t v___x_7681__boxed_2106_; size_t v_i_boxed_2107_; size_t v_stop_boxed_2108_; lean_object* v_res_2109_; 
v___x_7681__boxed_2106_ = lean_unbox(v___x_2097_);
v_i_boxed_2107_ = lean_unbox_usize(v_i_2102_);
lean_dec(v_i_2102_);
v_stop_boxed_2108_ = lean_unbox_usize(v_stop_2103_);
lean_dec(v_stop_2103_);
v_res_2109_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg(v___x_7681__boxed_2106_, v___x_2098_, v___x_2099_, v_ctx_2100_, v_as_2101_, v_i_boxed_2107_, v_stop_boxed_2108_, v___y_2104_);
lean_dec(v___y_2104_);
lean_dec_ref(v_as_2101_);
lean_dec_ref(v_ctx_2100_);
return v_res_2109_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4(uint8_t v___x_2110_, lean_object* v___x_2111_, lean_object* v___x_2112_, lean_object* v_ctx_2113_, lean_object* v_x_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_){
_start:
{
if (lean_obj_tag(v_x_2114_) == 0)
{
lean_object* v_cs_2120_; lean_object* v___x_2122_; uint8_t v_isShared_2123_; uint8_t v_isSharedCheck_2138_; 
v_cs_2120_ = lean_ctor_get(v_x_2114_, 0);
v_isSharedCheck_2138_ = !lean_is_exclusive(v_x_2114_);
if (v_isSharedCheck_2138_ == 0)
{
v___x_2122_ = v_x_2114_;
v_isShared_2123_ = v_isSharedCheck_2138_;
goto v_resetjp_2121_;
}
else
{
lean_inc(v_cs_2120_);
lean_dec(v_x_2114_);
v___x_2122_ = lean_box(0);
v_isShared_2123_ = v_isSharedCheck_2138_;
goto v_resetjp_2121_;
}
v_resetjp_2121_:
{
lean_object* v___x_2124_; lean_object* v___x_2125_; uint8_t v___x_2126_; 
v___x_2124_ = lean_unsigned_to_nat(0u);
v___x_2125_ = lean_array_get_size(v_cs_2120_);
v___x_2126_ = lean_nat_dec_lt(v___x_2124_, v___x_2125_);
if (v___x_2126_ == 0)
{
lean_object* v___x_2127_; lean_object* v___x_2129_; 
lean_dec_ref(v_cs_2120_);
lean_dec(v___x_2112_);
lean_dec_ref(v___x_2111_);
v___x_2127_ = lean_box(v___x_2126_);
if (v_isShared_2123_ == 0)
{
lean_ctor_set(v___x_2122_, 0, v___x_2127_);
v___x_2129_ = v___x_2122_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v___x_2127_);
v___x_2129_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
return v___x_2129_;
}
}
else
{
if (v___x_2126_ == 0)
{
lean_object* v___x_2131_; lean_object* v___x_2133_; 
lean_dec_ref(v_cs_2120_);
lean_dec(v___x_2112_);
lean_dec_ref(v___x_2111_);
v___x_2131_ = lean_box(v___x_2126_);
if (v_isShared_2123_ == 0)
{
lean_ctor_set(v___x_2122_, 0, v___x_2131_);
v___x_2133_ = v___x_2122_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v___x_2131_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
return v___x_2133_;
}
}
else
{
size_t v___x_2135_; size_t v___x_2136_; lean_object* v___x_2137_; 
lean_del_object(v___x_2122_);
v___x_2135_ = ((size_t)0ULL);
v___x_2136_ = lean_usize_of_nat(v___x_2125_);
v___x_2137_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4_spec__5(v___x_2110_, v___x_2111_, v___x_2112_, v_ctx_2113_, v_cs_2120_, v___x_2135_, v___x_2136_, v___y_2115_, v___y_2116_, v___y_2117_, v___y_2118_);
lean_dec_ref(v_cs_2120_);
return v___x_2137_;
}
}
}
}
else
{
lean_object* v_vs_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2157_; 
v_vs_2139_ = lean_ctor_get(v_x_2114_, 0);
v_isSharedCheck_2157_ = !lean_is_exclusive(v_x_2114_);
if (v_isSharedCheck_2157_ == 0)
{
v___x_2141_ = v_x_2114_;
v_isShared_2142_ = v_isSharedCheck_2157_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_vs_2139_);
lean_dec(v_x_2114_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2157_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2143_; lean_object* v___x_2144_; uint8_t v___x_2145_; 
v___x_2143_ = lean_unsigned_to_nat(0u);
v___x_2144_ = lean_array_get_size(v_vs_2139_);
v___x_2145_ = lean_nat_dec_lt(v___x_2143_, v___x_2144_);
if (v___x_2145_ == 0)
{
lean_object* v___x_2146_; lean_object* v___x_2148_; 
lean_dec_ref(v_vs_2139_);
lean_dec(v___x_2112_);
lean_dec_ref(v___x_2111_);
v___x_2146_ = lean_box(v___x_2145_);
if (v_isShared_2142_ == 0)
{
lean_ctor_set_tag(v___x_2141_, 0);
lean_ctor_set(v___x_2141_, 0, v___x_2146_);
v___x_2148_ = v___x_2141_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v___x_2146_);
v___x_2148_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
return v___x_2148_;
}
}
else
{
if (v___x_2145_ == 0)
{
lean_object* v___x_2150_; lean_object* v___x_2152_; 
lean_dec_ref(v_vs_2139_);
lean_dec(v___x_2112_);
lean_dec_ref(v___x_2111_);
v___x_2150_ = lean_box(v___x_2145_);
if (v_isShared_2142_ == 0)
{
lean_ctor_set_tag(v___x_2141_, 0);
lean_ctor_set(v___x_2141_, 0, v___x_2150_);
v___x_2152_ = v___x_2141_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v___x_2150_);
v___x_2152_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
return v___x_2152_;
}
}
else
{
size_t v___x_2154_; size_t v___x_2155_; lean_object* v___x_2156_; 
lean_del_object(v___x_2141_);
v___x_2154_ = ((size_t)0ULL);
v___x_2155_ = lean_usize_of_nat(v___x_2144_);
v___x_2156_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg(v___x_2110_, v___x_2111_, v___x_2112_, v_ctx_2113_, v_vs_2139_, v___x_2154_, v___x_2155_, v___y_2116_);
lean_dec_ref(v_vs_2139_);
return v___x_2156_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4_spec__5(uint8_t v___x_2158_, lean_object* v___x_2159_, lean_object* v___x_2160_, lean_object* v_ctx_2161_, lean_object* v_as_2162_, size_t v_i_2163_, size_t v_stop_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_){
_start:
{
uint8_t v___x_2170_; 
v___x_2170_ = lean_usize_dec_eq(v_i_2163_, v_stop_2164_);
if (v___x_2170_ == 0)
{
uint8_t v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; 
v___x_2171_ = 1;
v___x_2172_ = lean_array_uget_borrowed(v_as_2162_, v_i_2163_);
lean_inc(v___x_2172_);
lean_inc(v___x_2160_);
lean_inc_ref(v___x_2159_);
v___x_2173_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4(v___x_2158_, v___x_2159_, v___x_2160_, v_ctx_2161_, v___x_2172_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_);
if (lean_obj_tag(v___x_2173_) == 0)
{
lean_object* v_a_2174_; lean_object* v___x_2176_; uint8_t v_isShared_2177_; uint8_t v_isSharedCheck_2186_; 
v_a_2174_ = lean_ctor_get(v___x_2173_, 0);
v_isSharedCheck_2186_ = !lean_is_exclusive(v___x_2173_);
if (v_isSharedCheck_2186_ == 0)
{
v___x_2176_ = v___x_2173_;
v_isShared_2177_ = v_isSharedCheck_2186_;
goto v_resetjp_2175_;
}
else
{
lean_inc(v_a_2174_);
lean_dec(v___x_2173_);
v___x_2176_ = lean_box(0);
v_isShared_2177_ = v_isSharedCheck_2186_;
goto v_resetjp_2175_;
}
v_resetjp_2175_:
{
uint8_t v___x_2178_; 
v___x_2178_ = lean_unbox(v_a_2174_);
lean_dec(v_a_2174_);
if (v___x_2178_ == 0)
{
size_t v___x_2179_; size_t v___x_2180_; 
lean_del_object(v___x_2176_);
v___x_2179_ = ((size_t)1ULL);
v___x_2180_ = lean_usize_add(v_i_2163_, v___x_2179_);
v_i_2163_ = v___x_2180_;
goto _start;
}
else
{
lean_object* v___x_2182_; lean_object* v___x_2184_; 
lean_dec(v___x_2160_);
lean_dec_ref(v___x_2159_);
v___x_2182_ = lean_box(v___x_2171_);
if (v_isShared_2177_ == 0)
{
lean_ctor_set(v___x_2176_, 0, v___x_2182_);
v___x_2184_ = v___x_2176_;
goto v_reusejp_2183_;
}
else
{
lean_object* v_reuseFailAlloc_2185_; 
v_reuseFailAlloc_2185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2185_, 0, v___x_2182_);
v___x_2184_ = v_reuseFailAlloc_2185_;
goto v_reusejp_2183_;
}
v_reusejp_2183_:
{
return v___x_2184_;
}
}
}
}
else
{
lean_dec(v___x_2160_);
lean_dec_ref(v___x_2159_);
return v___x_2173_;
}
}
else
{
uint8_t v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; 
lean_dec(v___x_2160_);
lean_dec_ref(v___x_2159_);
v___x_2187_ = 0;
v___x_2188_ = lean_box(v___x_2187_);
v___x_2189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2189_, 0, v___x_2188_);
return v___x_2189_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4_spec__5___boxed(lean_object* v___x_2190_, lean_object* v___x_2191_, lean_object* v___x_2192_, lean_object* v_ctx_2193_, lean_object* v_as_2194_, lean_object* v_i_2195_, lean_object* v_stop_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_){
_start:
{
uint8_t v___x_7976__boxed_2202_; size_t v_i_boxed_2203_; size_t v_stop_boxed_2204_; lean_object* v_res_2205_; 
v___x_7976__boxed_2202_ = lean_unbox(v___x_2190_);
v_i_boxed_2203_ = lean_unbox_usize(v_i_2195_);
lean_dec(v_i_2195_);
v_stop_boxed_2204_ = lean_unbox_usize(v_stop_2196_);
lean_dec(v_stop_2196_);
v_res_2205_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4_spec__5(v___x_7976__boxed_2202_, v___x_2191_, v___x_2192_, v_ctx_2193_, v_as_2194_, v_i_boxed_2203_, v_stop_boxed_2204_, v___y_2197_, v___y_2198_, v___y_2199_, v___y_2200_);
lean_dec(v___y_2200_);
lean_dec_ref(v___y_2199_);
lean_dec(v___y_2198_);
lean_dec_ref(v___y_2197_);
lean_dec_ref(v_as_2194_);
lean_dec_ref(v_ctx_2193_);
return v_res_2205_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4___boxed(lean_object* v___x_2206_, lean_object* v___x_2207_, lean_object* v___x_2208_, lean_object* v_ctx_2209_, lean_object* v_x_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_){
_start:
{
uint8_t v___x_7996__boxed_2216_; lean_object* v_res_2217_; 
v___x_7996__boxed_2216_ = lean_unbox(v___x_2206_);
v_res_2217_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4(v___x_7996__boxed_2216_, v___x_2207_, v___x_2208_, v_ctx_2209_, v_x_2210_, v___y_2211_, v___y_2212_, v___y_2213_, v___y_2214_);
lean_dec(v___y_2214_);
lean_dec_ref(v___y_2213_);
lean_dec(v___y_2212_);
lean_dec_ref(v___y_2211_);
lean_dec_ref(v_ctx_2209_);
return v_res_2217_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4(uint8_t v___x_2218_, lean_object* v___x_2219_, lean_object* v___x_2220_, lean_object* v_ctx_2221_, lean_object* v_t_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_){
_start:
{
lean_object* v_root_2228_; lean_object* v_tail_2229_; lean_object* v___x_2230_; 
v_root_2228_ = lean_ctor_get(v_t_2222_, 0);
lean_inc_ref(v_root_2228_);
v_tail_2229_ = lean_ctor_get(v_t_2222_, 1);
lean_inc_ref(v_tail_2229_);
lean_dec_ref(v_t_2222_);
lean_inc(v___x_2220_);
lean_inc_ref(v___x_2219_);
v___x_2230_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4(v___x_2218_, v___x_2219_, v___x_2220_, v_ctx_2221_, v_root_2228_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_);
if (lean_obj_tag(v___x_2230_) == 0)
{
lean_object* v_a_2231_; uint8_t v___x_2232_; 
v_a_2231_ = lean_ctor_get(v___x_2230_, 0);
lean_inc(v_a_2231_);
v___x_2232_ = lean_unbox(v_a_2231_);
lean_dec(v_a_2231_);
if (v___x_2232_ == 0)
{
lean_object* v___x_2234_; uint8_t v_isShared_2235_; uint8_t v_isSharedCheck_2250_; 
v_isSharedCheck_2250_ = !lean_is_exclusive(v___x_2230_);
if (v_isSharedCheck_2250_ == 0)
{
lean_object* v_unused_2251_; 
v_unused_2251_ = lean_ctor_get(v___x_2230_, 0);
lean_dec(v_unused_2251_);
v___x_2234_ = v___x_2230_;
v_isShared_2235_ = v_isSharedCheck_2250_;
goto v_resetjp_2233_;
}
else
{
lean_dec(v___x_2230_);
v___x_2234_ = lean_box(0);
v_isShared_2235_ = v_isSharedCheck_2250_;
goto v_resetjp_2233_;
}
v_resetjp_2233_:
{
lean_object* v___x_2236_; lean_object* v___x_2237_; uint8_t v___x_2238_; 
v___x_2236_ = lean_unsigned_to_nat(0u);
v___x_2237_ = lean_array_get_size(v_tail_2229_);
v___x_2238_ = lean_nat_dec_lt(v___x_2236_, v___x_2237_);
if (v___x_2238_ == 0)
{
lean_object* v___x_2239_; lean_object* v___x_2241_; 
lean_dec_ref(v_tail_2229_);
lean_dec(v___x_2220_);
lean_dec_ref(v___x_2219_);
v___x_2239_ = lean_box(v___x_2238_);
if (v_isShared_2235_ == 0)
{
lean_ctor_set(v___x_2234_, 0, v___x_2239_);
v___x_2241_ = v___x_2234_;
goto v_reusejp_2240_;
}
else
{
lean_object* v_reuseFailAlloc_2242_; 
v_reuseFailAlloc_2242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2242_, 0, v___x_2239_);
v___x_2241_ = v_reuseFailAlloc_2242_;
goto v_reusejp_2240_;
}
v_reusejp_2240_:
{
return v___x_2241_;
}
}
else
{
if (v___x_2238_ == 0)
{
lean_object* v___x_2243_; lean_object* v___x_2245_; 
lean_dec_ref(v_tail_2229_);
lean_dec(v___x_2220_);
lean_dec_ref(v___x_2219_);
v___x_2243_ = lean_box(v___x_2238_);
if (v_isShared_2235_ == 0)
{
lean_ctor_set(v___x_2234_, 0, v___x_2243_);
v___x_2245_ = v___x_2234_;
goto v_reusejp_2244_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v___x_2243_);
v___x_2245_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2244_;
}
v_reusejp_2244_:
{
return v___x_2245_;
}
}
else
{
size_t v___x_2247_; size_t v___x_2248_; lean_object* v___x_2249_; 
lean_del_object(v___x_2234_);
v___x_2247_ = ((size_t)0ULL);
v___x_2248_ = lean_usize_of_nat(v___x_2237_);
v___x_2249_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg(v___x_2218_, v___x_2219_, v___x_2220_, v_ctx_2221_, v_tail_2229_, v___x_2247_, v___x_2248_, v___y_2224_);
lean_dec_ref(v_tail_2229_);
return v___x_2249_;
}
}
}
}
else
{
lean_dec_ref(v_tail_2229_);
lean_dec(v___x_2220_);
lean_dec_ref(v___x_2219_);
return v___x_2230_;
}
}
else
{
lean_dec_ref(v_tail_2229_);
lean_dec(v___x_2220_);
lean_dec_ref(v___x_2219_);
return v___x_2230_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4___boxed(lean_object* v___x_2252_, lean_object* v___x_2253_, lean_object* v___x_2254_, lean_object* v_ctx_2255_, lean_object* v_t_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_){
_start:
{
uint8_t v___x_8144__boxed_2262_; lean_object* v_res_2263_; 
v___x_8144__boxed_2262_ = lean_unbox(v___x_2252_);
v_res_2263_ = l_Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4(v___x_8144__boxed_2262_, v___x_2253_, v___x_2254_, v_ctx_2255_, v_t_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
lean_dec(v___y_2260_);
lean_dec_ref(v___y_2259_);
lean_dec(v___y_2258_);
lean_dec_ref(v___y_2257_);
lean_dec_ref(v_ctx_2255_);
return v_res_2263_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices(lean_object* v_ctx_2264_, lean_object* v_a_2265_, lean_object* v_a_2266_, lean_object* v_a_2267_, lean_object* v_a_2268_){
_start:
{
lean_object* v_majorTypeIndices_2270_; lean_object* v___x_2271_; uint8_t v___y_2273_; lean_object* v___x_2295_; uint8_t v___x_2296_; 
v_majorTypeIndices_2270_ = lean_ctor_get(v_ctx_2264_, 5);
lean_inc_ref(v_majorTypeIndices_2270_);
v___x_2271_ = lean_array_get_size(v_majorTypeIndices_2270_);
v___x_2295_ = lean_unsigned_to_nat(0u);
v___x_2296_ = lean_nat_dec_eq(v___x_2271_, v___x_2295_);
if (v___x_2296_ == 0)
{
uint8_t v___x_2297_; 
v___x_2297_ = lean_nat_dec_lt(v___x_2295_, v___x_2271_);
if (v___x_2297_ == 0)
{
v___y_2273_ = v___x_2297_;
goto v___jp_2272_;
}
else
{
if (v___x_2297_ == 0)
{
v___y_2273_ = v___x_2297_;
goto v___jp_2272_;
}
else
{
size_t v___x_2298_; size_t v___x_2299_; uint8_t v___x_2300_; 
v___x_2298_ = ((size_t)0ULL);
v___x_2299_ = lean_usize_of_nat(v___x_2271_);
v___x_2300_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__5(v___x_2271_, v_majorTypeIndices_2270_, v___x_2298_, v___x_2299_);
if (v___x_2300_ == 0)
{
v___y_2273_ = v___x_2300_;
goto v___jp_2272_;
}
else
{
lean_object* v___x_2301_; lean_object* v___x_2302_; 
lean_dec_ref(v_majorTypeIndices_2270_);
lean_dec_ref(v_ctx_2264_);
v___x_2301_ = lean_box(v___x_2296_);
v___x_2302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2302_, 0, v___x_2301_);
return v___x_2302_;
}
}
}
}
else
{
lean_object* v___x_2303_; lean_object* v___x_2304_; 
lean_dec_ref(v_majorTypeIndices_2270_);
lean_dec_ref(v_ctx_2264_);
v___x_2303_ = lean_box(v___x_2296_);
v___x_2304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2304_, 0, v___x_2303_);
return v___x_2304_;
}
v___jp_2272_:
{
uint8_t v___x_2274_; 
v___x_2274_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___redArg(v_majorTypeIndices_2270_, v___x_2271_, v___x_2271_);
if (v___x_2274_ == 0)
{
lean_object* v_lctx_2275_; lean_object* v_decls_2276_; lean_object* v___x_2277_; 
v_lctx_2275_ = lean_ctor_get(v_a_2265_, 2);
v_decls_2276_ = lean_ctor_get(v_lctx_2275_, 1);
lean_inc_ref(v_decls_2276_);
v___x_2277_ = l_Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4(v___x_2274_, v_majorTypeIndices_2270_, v___x_2271_, v_ctx_2264_, v_decls_2276_, v_a_2265_, v_a_2266_, v_a_2267_, v_a_2268_);
lean_dec_ref(v_ctx_2264_);
if (lean_obj_tag(v___x_2277_) == 0)
{
lean_object* v_a_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2292_; 
v_a_2278_ = lean_ctor_get(v___x_2277_, 0);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___x_2277_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2280_ = v___x_2277_;
v_isShared_2281_ = v_isSharedCheck_2292_;
goto v_resetjp_2279_;
}
else
{
lean_inc(v_a_2278_);
lean_dec(v___x_2277_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2292_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
uint8_t v___x_2282_; 
v___x_2282_ = lean_unbox(v_a_2278_);
lean_dec(v_a_2278_);
if (v___x_2282_ == 0)
{
uint8_t v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2286_; 
v___x_2283_ = 1;
v___x_2284_ = lean_box(v___x_2283_);
if (v_isShared_2281_ == 0)
{
lean_ctor_set(v___x_2280_, 0, v___x_2284_);
v___x_2286_ = v___x_2280_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v___x_2284_);
v___x_2286_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
return v___x_2286_;
}
}
else
{
lean_object* v___x_2288_; lean_object* v___x_2290_; 
v___x_2288_ = lean_box(v___x_2274_);
if (v_isShared_2281_ == 0)
{
lean_ctor_set(v___x_2280_, 0, v___x_2288_);
v___x_2290_ = v___x_2280_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v___x_2288_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
return v___x_2290_;
}
}
}
}
else
{
return v___x_2277_;
}
}
else
{
lean_object* v___x_2293_; lean_object* v___x_2294_; 
lean_dec_ref(v_majorTypeIndices_2270_);
lean_dec_ref(v_ctx_2264_);
v___x_2293_ = lean_box(v___y_2273_);
v___x_2294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2294_, 0, v___x_2293_);
return v___x_2294_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices___boxed(lean_object* v_ctx_2305_, lean_object* v_a_2306_, lean_object* v_a_2307_, lean_object* v_a_2308_, lean_object* v_a_2309_, lean_object* v_a_2310_){
_start:
{
lean_object* v_res_2311_; 
v_res_2311_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices(v_ctx_2305_, v_a_2306_, v_a_2307_, v_a_2308_, v_a_2309_);
lean_dec(v_a_2309_);
lean_dec_ref(v_a_2308_);
lean_dec(v_a_2307_);
lean_dec_ref(v_a_2306_);
return v_res_2311_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0(lean_object* v___x_2312_, lean_object* v_i_2313_, lean_object* v_n_2314_, lean_object* v_i_2315_, lean_object* v_a_2316_){
_start:
{
uint8_t v___x_2317_; 
v___x_2317_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___redArg(v___x_2312_, v_i_2313_, v_n_2314_, v_i_2315_);
return v___x_2317_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___boxed(lean_object* v___x_2318_, lean_object* v_i_2319_, lean_object* v_n_2320_, lean_object* v_i_2321_, lean_object* v_a_2322_){
_start:
{
uint8_t v_res_2323_; lean_object* v_r_2324_; 
v_res_2323_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0(v___x_2318_, v_i_2319_, v_n_2320_, v_i_2321_, v_a_2322_);
lean_dec(v_n_2320_);
lean_dec(v_i_2319_);
lean_dec_ref(v___x_2318_);
v_r_2324_ = lean_box(v_res_2323_);
return v_r_2324_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1(lean_object* v___x_2325_, lean_object* v_n_2326_, lean_object* v_i_2327_, lean_object* v_a_2328_){
_start:
{
uint8_t v___x_2329_; 
v___x_2329_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___redArg(v___x_2325_, v_n_2326_, v_i_2327_);
return v___x_2329_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___boxed(lean_object* v___x_2330_, lean_object* v_n_2331_, lean_object* v_i_2332_, lean_object* v_a_2333_){
_start:
{
uint8_t v_res_2334_; lean_object* v_r_2335_; 
v_res_2334_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1(v___x_2330_, v_n_2331_, v_i_2332_, v_a_2333_);
lean_dec(v_n_2331_);
lean_dec_ref(v___x_2330_);
v_r_2335_ = lean_box(v_res_2334_);
return v_r_2335_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5(uint8_t v___x_2336_, lean_object* v___x_2337_, lean_object* v___x_2338_, lean_object* v_ctx_2339_, lean_object* v_as_2340_, size_t v_i_2341_, size_t v_stop_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_){
_start:
{
lean_object* v___x_2348_; 
v___x_2348_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg(v___x_2336_, v___x_2337_, v___x_2338_, v_ctx_2339_, v_as_2340_, v_i_2341_, v_stop_2342_, v___y_2344_);
return v___x_2348_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___boxed(lean_object* v___x_2349_, lean_object* v___x_2350_, lean_object* v___x_2351_, lean_object* v_ctx_2352_, lean_object* v_as_2353_, lean_object* v_i_2354_, lean_object* v_stop_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_){
_start:
{
uint8_t v___x_8297__boxed_2361_; size_t v_i_boxed_2362_; size_t v_stop_boxed_2363_; lean_object* v_res_2364_; 
v___x_8297__boxed_2361_ = lean_unbox(v___x_2349_);
v_i_boxed_2362_ = lean_unbox_usize(v_i_2354_);
lean_dec(v_i_2354_);
v_stop_boxed_2363_ = lean_unbox_usize(v_stop_2355_);
lean_dec(v_stop_2355_);
v_res_2364_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5(v___x_8297__boxed_2361_, v___x_2350_, v___x_2351_, v_ctx_2352_, v_as_2353_, v_i_boxed_2362_, v_stop_boxed_2363_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_);
lean_dec(v___y_2359_);
lean_dec_ref(v___y_2358_);
lean_dec(v___y_2357_);
lean_dec_ref(v___y_2356_);
lean_dec_ref(v_as_2353_);
lean_dec_ref(v_ctx_2352_);
return v_res_2364_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__0(lean_object* v_as_2365_, size_t v_i_2366_, size_t v_stop_2367_, lean_object* v_b_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_){
_start:
{
lean_object* v_a_2375_; uint8_t v___x_2379_; 
v___x_2379_ = lean_usize_dec_eq(v_i_2366_, v_stop_2367_);
if (v___x_2379_ == 0)
{
lean_object* v_toInductionSubgoal_2380_; lean_object* v_ctorName_2381_; lean_object* v_mvarId_2382_; lean_object* v_fields_2383_; lean_object* v_subst_2384_; lean_object* v___x_2386_; uint8_t v_isShared_2387_; uint8_t v_isSharedCheck_2437_; 
v_toInductionSubgoal_2380_ = lean_ctor_get(v_b_2368_, 0);
lean_inc_ref(v_toInductionSubgoal_2380_);
v_ctorName_2381_ = lean_ctor_get(v_b_2368_, 1);
v_mvarId_2382_ = lean_ctor_get(v_toInductionSubgoal_2380_, 0);
v_fields_2383_ = lean_ctor_get(v_toInductionSubgoal_2380_, 1);
v_subst_2384_ = lean_ctor_get(v_toInductionSubgoal_2380_, 2);
v_isSharedCheck_2437_ = !lean_is_exclusive(v_toInductionSubgoal_2380_);
if (v_isSharedCheck_2437_ == 0)
{
v___x_2386_ = v_toInductionSubgoal_2380_;
v_isShared_2387_ = v_isSharedCheck_2437_;
goto v_resetjp_2385_;
}
else
{
lean_inc(v_subst_2384_);
lean_inc(v_fields_2383_);
lean_inc(v_mvarId_2382_);
lean_dec(v_toInductionSubgoal_2380_);
v___x_2386_ = lean_box(0);
v_isShared_2387_ = v_isSharedCheck_2437_;
goto v_resetjp_2385_;
}
v_resetjp_2385_:
{
lean_object* v___x_2388_; lean_object* v___x_2389_; 
v___x_2388_ = lean_array_uget_borrowed(v_as_2365_, v_i_2366_);
lean_inc(v___x_2388_);
v___x_2389_ = l_Lean_Meta_FVarSubst_get(v_subst_2384_, v___x_2388_);
if (lean_obj_tag(v___x_2389_) == 1)
{
lean_object* v_fvarId_2390_; lean_object* v___x_2391_; 
v_fvarId_2390_ = lean_ctor_get(v___x_2389_, 0);
lean_inc(v_fvarId_2390_);
lean_dec_ref_known(v___x_2389_, 1);
v___x_2391_ = l_Lean_Meta_saveState___redArg(v___y_2370_, v___y_2372_);
if (lean_obj_tag(v___x_2391_) == 0)
{
lean_object* v_a_2392_; lean_object* v___x_2393_; 
v_a_2392_ = lean_ctor_get(v___x_2391_, 0);
lean_inc(v_a_2392_);
lean_dec_ref_known(v___x_2391_, 1);
v___x_2393_ = l_Lean_MVarId_clear(v_mvarId_2382_, v_fvarId_2390_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_);
if (lean_obj_tag(v___x_2393_) == 0)
{
lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2405_; 
lean_inc(v_ctorName_2381_);
lean_dec(v_a_2392_);
v_isSharedCheck_2405_ = !lean_is_exclusive(v_b_2368_);
if (v_isSharedCheck_2405_ == 0)
{
lean_object* v_unused_2406_; lean_object* v_unused_2407_; 
v_unused_2406_ = lean_ctor_get(v_b_2368_, 1);
lean_dec(v_unused_2406_);
v_unused_2407_ = lean_ctor_get(v_b_2368_, 0);
lean_dec(v_unused_2407_);
v___x_2395_ = v_b_2368_;
v_isShared_2396_ = v_isSharedCheck_2405_;
goto v_resetjp_2394_;
}
else
{
lean_dec(v_b_2368_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2405_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v_a_2397_; lean_object* v___x_2398_; lean_object* v___x_2400_; 
v_a_2397_ = lean_ctor_get(v___x_2393_, 0);
lean_inc(v_a_2397_);
lean_dec_ref_known(v___x_2393_, 1);
v___x_2398_ = l_Lean_Meta_FVarSubst_erase(v_subst_2384_, v___x_2388_);
if (v_isShared_2387_ == 0)
{
lean_ctor_set(v___x_2386_, 2, v___x_2398_);
lean_ctor_set(v___x_2386_, 0, v_a_2397_);
v___x_2400_ = v___x_2386_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v_a_2397_);
lean_ctor_set(v_reuseFailAlloc_2404_, 1, v_fields_2383_);
lean_ctor_set(v_reuseFailAlloc_2404_, 2, v___x_2398_);
v___x_2400_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
lean_object* v___x_2402_; 
if (v_isShared_2396_ == 0)
{
lean_ctor_set(v___x_2395_, 0, v___x_2400_);
v___x_2402_ = v___x_2395_;
goto v_reusejp_2401_;
}
else
{
lean_object* v_reuseFailAlloc_2403_; 
v_reuseFailAlloc_2403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2403_, 0, v___x_2400_);
lean_ctor_set(v_reuseFailAlloc_2403_, 1, v_ctorName_2381_);
v___x_2402_ = v_reuseFailAlloc_2403_;
goto v_reusejp_2401_;
}
v_reusejp_2401_:
{
v_a_2375_ = v___x_2402_;
goto v___jp_2374_;
}
}
}
}
else
{
lean_object* v_a_2408_; lean_object* v___x_2410_; uint8_t v_isShared_2411_; uint8_t v_isSharedCheck_2428_; 
lean_del_object(v___x_2386_);
lean_dec(v_subst_2384_);
lean_dec_ref(v_fields_2383_);
v_a_2408_ = lean_ctor_get(v___x_2393_, 0);
v_isSharedCheck_2428_ = !lean_is_exclusive(v___x_2393_);
if (v_isSharedCheck_2428_ == 0)
{
v___x_2410_ = v___x_2393_;
v_isShared_2411_ = v_isSharedCheck_2428_;
goto v_resetjp_2409_;
}
else
{
lean_inc(v_a_2408_);
lean_dec(v___x_2393_);
v___x_2410_ = lean_box(0);
v_isShared_2411_ = v_isSharedCheck_2428_;
goto v_resetjp_2409_;
}
v_resetjp_2409_:
{
lean_object* v___x_2413_; 
lean_inc(v_a_2408_);
if (v_isShared_2411_ == 0)
{
v___x_2413_ = v___x_2410_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2427_; 
v_reuseFailAlloc_2427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2427_, 0, v_a_2408_);
v___x_2413_ = v_reuseFailAlloc_2427_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
uint8_t v___y_2415_; uint8_t v___x_2425_; 
v___x_2425_ = l_Lean_Exception_isInterrupt(v_a_2408_);
if (v___x_2425_ == 0)
{
uint8_t v___x_2426_; 
v___x_2426_ = l_Lean_Exception_isRuntime(v_a_2408_);
v___y_2415_ = v___x_2426_;
goto v___jp_2414_;
}
else
{
lean_dec(v_a_2408_);
v___y_2415_ = v___x_2425_;
goto v___jp_2414_;
}
v___jp_2414_:
{
if (v___y_2415_ == 0)
{
lean_object* v___x_2416_; 
lean_dec_ref(v___x_2413_);
v___x_2416_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2392_, v___y_2370_, v___y_2372_);
lean_dec(v_a_2392_);
if (lean_obj_tag(v___x_2416_) == 0)
{
lean_dec_ref_known(v___x_2416_, 1);
v_a_2375_ = v_b_2368_;
goto v___jp_2374_;
}
else
{
lean_object* v_a_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2424_; 
lean_dec_ref(v_b_2368_);
v_a_2417_ = lean_ctor_get(v___x_2416_, 0);
v_isSharedCheck_2424_ = !lean_is_exclusive(v___x_2416_);
if (v_isSharedCheck_2424_ == 0)
{
v___x_2419_ = v___x_2416_;
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_a_2417_);
lean_dec(v___x_2416_);
v___x_2419_ = lean_box(0);
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
v_resetjp_2418_:
{
lean_object* v___x_2422_; 
if (v_isShared_2420_ == 0)
{
v___x_2422_ = v___x_2419_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2423_; 
v_reuseFailAlloc_2423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2423_, 0, v_a_2417_);
v___x_2422_ = v_reuseFailAlloc_2423_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
return v___x_2422_;
}
}
}
}
else
{
lean_dec(v_a_2392_);
lean_dec_ref(v_b_2368_);
return v___x_2413_;
}
}
}
}
}
}
else
{
lean_object* v_a_2429_; lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2436_; 
lean_dec(v_fvarId_2390_);
lean_del_object(v___x_2386_);
lean_dec(v_subst_2384_);
lean_dec_ref(v_fields_2383_);
lean_dec(v_mvarId_2382_);
lean_dec_ref(v_b_2368_);
v_a_2429_ = lean_ctor_get(v___x_2391_, 0);
v_isSharedCheck_2436_ = !lean_is_exclusive(v___x_2391_);
if (v_isSharedCheck_2436_ == 0)
{
v___x_2431_ = v___x_2391_;
v_isShared_2432_ = v_isSharedCheck_2436_;
goto v_resetjp_2430_;
}
else
{
lean_inc(v_a_2429_);
lean_dec(v___x_2391_);
v___x_2431_ = lean_box(0);
v_isShared_2432_ = v_isSharedCheck_2436_;
goto v_resetjp_2430_;
}
v_resetjp_2430_:
{
lean_object* v___x_2434_; 
if (v_isShared_2432_ == 0)
{
v___x_2434_ = v___x_2431_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2435_; 
v_reuseFailAlloc_2435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2435_, 0, v_a_2429_);
v___x_2434_ = v_reuseFailAlloc_2435_;
goto v_reusejp_2433_;
}
v_reusejp_2433_:
{
return v___x_2434_;
}
}
}
}
else
{
lean_dec_ref(v___x_2389_);
lean_del_object(v___x_2386_);
lean_dec(v_subst_2384_);
lean_dec_ref(v_fields_2383_);
lean_dec(v_mvarId_2382_);
v_a_2375_ = v_b_2368_;
goto v___jp_2374_;
}
}
}
else
{
lean_object* v___x_2438_; 
v___x_2438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2438_, 0, v_b_2368_);
return v___x_2438_;
}
v___jp_2374_:
{
size_t v___x_2376_; size_t v___x_2377_; 
v___x_2376_ = ((size_t)1ULL);
v___x_2377_ = lean_usize_add(v_i_2366_, v___x_2376_);
v_i_2366_ = v___x_2377_;
v_b_2368_ = v_a_2375_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__0___boxed(lean_object* v_as_2439_, lean_object* v_i_2440_, lean_object* v_stop_2441_, lean_object* v_b_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_){
_start:
{
size_t v_i_boxed_2448_; size_t v_stop_boxed_2449_; lean_object* v_res_2450_; 
v_i_boxed_2448_ = lean_unbox_usize(v_i_2440_);
lean_dec(v_i_2440_);
v_stop_boxed_2449_ = lean_unbox_usize(v_stop_2441_);
lean_dec(v_stop_2441_);
v_res_2450_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__0(v_as_2439_, v_i_boxed_2448_, v_stop_boxed_2449_, v_b_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_);
lean_dec(v___y_2446_);
lean_dec_ref(v___y_2445_);
lean_dec(v___y_2444_);
lean_dec_ref(v___y_2443_);
lean_dec_ref(v_as_2439_);
return v_res_2450_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__1(lean_object* v_indicesFVarIds_2451_, size_t v_sz_2452_, size_t v_i_2453_, lean_object* v_bs_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_){
_start:
{
uint8_t v___x_2460_; 
v___x_2460_ = lean_usize_dec_lt(v_i_2453_, v_sz_2452_);
if (v___x_2460_ == 0)
{
lean_object* v___x_2461_; lean_object* v___x_2462_; 
v___x_2461_ = l_unsafeCast___redArg(v_bs_2454_);
lean_dec_ref(v_bs_2454_);
v___x_2462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2462_, 0, v___x_2461_);
return v___x_2462_;
}
else
{
lean_object* v_v_2463_; lean_object* v___x_2464_; lean_object* v_bs_x27_2465_; lean_object* v_a_2467_; lean_object* v___y_2474_; lean_object* v___x_2484_; lean_object* v___x_2485_; uint8_t v___x_2486_; 
v_v_2463_ = lean_array_uget(v_bs_2454_, v_i_2453_);
v___x_2464_ = lean_unsigned_to_nat(0u);
v_bs_x27_2465_ = lean_array_uset(v_bs_2454_, v_i_2453_, v___x_2464_);
v___x_2484_ = l_unsafeCast___redArg(v_v_2463_);
lean_dec(v_v_2463_);
v___x_2485_ = lean_array_get_size(v_indicesFVarIds_2451_);
v___x_2486_ = lean_nat_dec_lt(v___x_2464_, v___x_2485_);
if (v___x_2486_ == 0)
{
v_a_2467_ = v___x_2484_;
goto v___jp_2466_;
}
else
{
uint8_t v___x_2487_; 
v___x_2487_ = lean_nat_dec_le(v___x_2485_, v___x_2485_);
if (v___x_2487_ == 0)
{
if (v___x_2486_ == 0)
{
v_a_2467_ = v___x_2484_;
goto v___jp_2466_;
}
else
{
size_t v___x_2488_; size_t v___x_2489_; lean_object* v___x_2490_; 
v___x_2488_ = ((size_t)0ULL);
v___x_2489_ = lean_usize_of_nat(v___x_2485_);
v___x_2490_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__0(v_indicesFVarIds_2451_, v___x_2488_, v___x_2489_, v___x_2484_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_);
v___y_2474_ = v___x_2490_;
goto v___jp_2473_;
}
}
else
{
size_t v___x_2491_; size_t v___x_2492_; lean_object* v___x_2493_; 
v___x_2491_ = ((size_t)0ULL);
v___x_2492_ = lean_usize_of_nat(v___x_2485_);
v___x_2493_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__0(v_indicesFVarIds_2451_, v___x_2491_, v___x_2492_, v___x_2484_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_);
v___y_2474_ = v___x_2493_;
goto v___jp_2473_;
}
}
v___jp_2466_:
{
size_t v___x_2468_; size_t v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; 
v___x_2468_ = ((size_t)1ULL);
v___x_2469_ = lean_usize_add(v_i_2453_, v___x_2468_);
v___x_2470_ = l_unsafeCast___redArg(v_a_2467_);
lean_dec_ref(v_a_2467_);
v___x_2471_ = lean_array_uset(v_bs_x27_2465_, v_i_2453_, v___x_2470_);
v_i_2453_ = v___x_2469_;
v_bs_2454_ = v___x_2471_;
goto _start;
}
v___jp_2473_:
{
if (lean_obj_tag(v___y_2474_) == 0)
{
lean_object* v_a_2475_; 
v_a_2475_ = lean_ctor_get(v___y_2474_, 0);
lean_inc(v_a_2475_);
lean_dec_ref_known(v___y_2474_, 1);
v_a_2467_ = v_a_2475_;
goto v___jp_2466_;
}
else
{
lean_object* v_a_2476_; lean_object* v___x_2478_; uint8_t v_isShared_2479_; uint8_t v_isSharedCheck_2483_; 
lean_dec_ref(v_bs_x27_2465_);
v_a_2476_ = lean_ctor_get(v___y_2474_, 0);
v_isSharedCheck_2483_ = !lean_is_exclusive(v___y_2474_);
if (v_isSharedCheck_2483_ == 0)
{
v___x_2478_ = v___y_2474_;
v_isShared_2479_ = v_isSharedCheck_2483_;
goto v_resetjp_2477_;
}
else
{
lean_inc(v_a_2476_);
lean_dec(v___y_2474_);
v___x_2478_ = lean_box(0);
v_isShared_2479_ = v_isSharedCheck_2483_;
goto v_resetjp_2477_;
}
v_resetjp_2477_:
{
lean_object* v___x_2481_; 
if (v_isShared_2479_ == 0)
{
v___x_2481_ = v___x_2478_;
goto v_reusejp_2480_;
}
else
{
lean_object* v_reuseFailAlloc_2482_; 
v_reuseFailAlloc_2482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2482_, 0, v_a_2476_);
v___x_2481_ = v_reuseFailAlloc_2482_;
goto v_reusejp_2480_;
}
v_reusejp_2480_:
{
return v___x_2481_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__1___boxed(lean_object* v_indicesFVarIds_2494_, lean_object* v_sz_2495_, lean_object* v_i_2496_, lean_object* v_bs_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_){
_start:
{
size_t v_sz_boxed_2503_; size_t v_i_boxed_2504_; lean_object* v_res_2505_; 
v_sz_boxed_2503_ = lean_unbox_usize(v_sz_2495_);
lean_dec(v_sz_2495_);
v_i_boxed_2504_ = lean_unbox_usize(v_i_2496_);
lean_dec(v_i_2496_);
v_res_2505_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__1(v_indicesFVarIds_2494_, v_sz_boxed_2503_, v_i_boxed_2504_, v_bs_2497_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_);
lean_dec(v___y_2501_);
lean_dec_ref(v___y_2500_);
lean_dec(v___y_2499_);
lean_dec_ref(v___y_2498_);
lean_dec_ref(v_indicesFVarIds_2494_);
return v_res_2505_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices(lean_object* v_s_u2081_2508_, lean_object* v_s_u2082_2509_, lean_object* v_a_2510_, lean_object* v_a_2511_, lean_object* v_a_2512_, lean_object* v_a_2513_){
_start:
{
lean_object* v_indicesFVarIds_2515_; size_t v_sz_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_1272__overap_2521_; lean_object* v___x_2522_; 
v_indicesFVarIds_2515_ = lean_ctor_get(v_s_u2081_2508_, 1);
lean_inc_ref(v_indicesFVarIds_2515_);
lean_dec_ref(v_s_u2081_2508_);
v_sz_2516_ = lean_array_size(v_s_u2082_2509_);
v___x_2517_ = l_unsafeCast___redArg(v_s_u2082_2509_);
v___x_2518_ = lean_box_usize(v_sz_2516_);
v___x_2519_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices___boxed__const__1));
v___x_2520_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__1___boxed), 9, 4);
lean_closure_set(v___x_2520_, 0, v_indicesFVarIds_2515_);
lean_closure_set(v___x_2520_, 1, v___x_2518_);
lean_closure_set(v___x_2520_, 2, v___x_2519_);
lean_closure_set(v___x_2520_, 3, v___x_2517_);
v___x_1272__overap_2521_ = l_unsafeCast___redArg(v___x_2520_);
lean_dec_ref(v___x_2520_);
lean_inc(v_a_2513_);
lean_inc_ref(v_a_2512_);
lean_inc(v_a_2511_);
lean_inc_ref(v_a_2510_);
v___x_2522_ = lean_apply_5(v___x_1272__overap_2521_, v_a_2510_, v_a_2511_, v_a_2512_, v_a_2513_, lean_box(0));
return v___x_2522_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices___boxed(lean_object* v_s_u2081_2523_, lean_object* v_s_u2082_2524_, lean_object* v_a_2525_, lean_object* v_a_2526_, lean_object* v_a_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_){
_start:
{
lean_object* v_res_2530_; 
v_res_2530_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices(v_s_u2081_2523_, v_s_u2082_2524_, v_a_2525_, v_a_2526_, v_a_2527_, v_a_2528_);
lean_dec(v_a_2528_);
lean_dec_ref(v_a_2527_);
lean_dec(v_a_2526_);
lean_dec_ref(v_a_2525_);
lean_dec_ref(v_s_u2082_2524_);
return v_res_2530_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___redArg(lean_object* v_ctorNames_2531_, lean_object* v_us_2532_, lean_object* v_params_2533_, lean_object* v_majorFVarId_2534_, size_t v_sz_2535_, size_t v_i_2536_, lean_object* v_bs_2537_){
_start:
{
uint8_t v___x_2538_; 
v___x_2538_ = lean_usize_dec_lt(v_i_2536_, v_sz_2535_);
if (v___x_2538_ == 0)
{
lean_object* v___x_2539_; 
lean_dec(v_majorFVarId_2534_);
lean_dec(v_us_2532_);
v___x_2539_ = l_unsafeCast___redArg(v_bs_2537_);
lean_dec_ref(v_bs_2537_);
return v___x_2539_;
}
else
{
lean_object* v_v_2540_; lean_object* v___x_2541_; lean_object* v_bs_x27_2542_; lean_object* v___y_2544_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; uint8_t v___x_2553_; 
v_v_2540_ = lean_array_uget(v_bs_2537_, v_i_2536_);
v___x_2541_ = lean_unsigned_to_nat(0u);
v_bs_x27_2542_ = lean_array_uset(v_bs_2537_, v_i_2536_, v___x_2541_);
v___x_2550_ = lean_usize_to_nat(v_i_2536_);
v___x_2551_ = l_unsafeCast___redArg(v_v_2540_);
lean_dec(v_v_2540_);
v___x_2552_ = lean_array_get_size(v_ctorNames_2531_);
v___x_2553_ = lean_nat_dec_lt(v___x_2550_, v___x_2552_);
if (v___x_2553_ == 0)
{
lean_object* v___x_2554_; lean_object* v___x_2555_; 
lean_dec(v___x_2550_);
v___x_2554_ = lean_box(0);
v___x_2555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2555_, 0, v___x_2551_);
lean_ctor_set(v___x_2555_, 1, v___x_2554_);
v___y_2544_ = v___x_2555_;
goto v___jp_2543_;
}
else
{
lean_object* v_mvarId_2556_; lean_object* v_fields_2557_; lean_object* v_subst_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2573_; 
v_mvarId_2556_ = lean_ctor_get(v___x_2551_, 0);
v_fields_2557_ = lean_ctor_get(v___x_2551_, 1);
v_subst_2558_ = lean_ctor_get(v___x_2551_, 2);
v_isSharedCheck_2573_ = !lean_is_exclusive(v___x_2551_);
if (v_isSharedCheck_2573_ == 0)
{
v___x_2560_ = v___x_2551_;
v_isShared_2561_ = v_isSharedCheck_2573_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_subst_2558_);
lean_inc(v_fields_2557_);
lean_inc(v_mvarId_2556_);
lean_dec(v___x_2551_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2573_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v_ctorName_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v_ctorApp_2565_; lean_object* v___x_2566_; lean_object* v_subst_2567_; lean_object* v___x_2569_; 
v_ctorName_2562_ = lean_array_fget_borrowed(v_ctorNames_2531_, v___x_2550_);
lean_dec(v___x_2550_);
lean_inc(v_us_2532_);
lean_inc(v_ctorName_2562_);
v___x_2563_ = l_Lean_mkConst(v_ctorName_2562_, v_us_2532_);
v___x_2564_ = l_Lean_mkAppN(v___x_2563_, v_params_2533_);
v_ctorApp_2565_ = l_Lean_mkAppN(v___x_2564_, v_fields_2557_);
v___x_2566_ = l_Lean_Meta_FVarSubst_erase(v_subst_2558_, v_majorFVarId_2534_);
lean_inc(v_majorFVarId_2534_);
v_subst_2567_ = l_Lean_Meta_FVarSubst_insert(v___x_2566_, v_majorFVarId_2534_, v_ctorApp_2565_);
if (v_isShared_2561_ == 0)
{
lean_ctor_set(v___x_2560_, 2, v_subst_2567_);
v___x_2569_ = v___x_2560_;
goto v_reusejp_2568_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v_mvarId_2556_);
lean_ctor_set(v_reuseFailAlloc_2572_, 1, v_fields_2557_);
lean_ctor_set(v_reuseFailAlloc_2572_, 2, v_subst_2567_);
v___x_2569_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2568_;
}
v_reusejp_2568_:
{
lean_object* v___x_2570_; lean_object* v___x_2571_; 
lean_inc(v_ctorName_2562_);
v___x_2570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2570_, 0, v_ctorName_2562_);
v___x_2571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2571_, 0, v___x_2569_);
lean_ctor_set(v___x_2571_, 1, v___x_2570_);
v___y_2544_ = v___x_2571_;
goto v___jp_2543_;
}
}
}
v___jp_2543_:
{
size_t v___x_2545_; size_t v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; 
v___x_2545_ = ((size_t)1ULL);
v___x_2546_ = lean_usize_add(v_i_2536_, v___x_2545_);
v___x_2547_ = l_unsafeCast___redArg(v___y_2544_);
lean_dec_ref(v___y_2544_);
v___x_2548_ = lean_array_uset(v_bs_x27_2542_, v_i_2536_, v___x_2547_);
v_i_2536_ = v___x_2546_;
v_bs_2537_ = v___x_2548_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___redArg___boxed(lean_object* v_ctorNames_2574_, lean_object* v_us_2575_, lean_object* v_params_2576_, lean_object* v_majorFVarId_2577_, lean_object* v_sz_2578_, lean_object* v_i_2579_, lean_object* v_bs_2580_){
_start:
{
size_t v_sz_boxed_2581_; size_t v_i_boxed_2582_; lean_object* v_res_2583_; 
v_sz_boxed_2581_ = lean_unbox_usize(v_sz_2578_);
lean_dec(v_sz_2578_);
v_i_boxed_2582_ = lean_unbox_usize(v_i_2579_);
lean_dec(v_i_2579_);
v_res_2583_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___redArg(v_ctorNames_2574_, v_us_2575_, v_params_2576_, v_majorFVarId_2577_, v_sz_boxed_2581_, v_i_boxed_2582_, v_bs_2580_);
lean_dec_ref(v_params_2576_);
lean_dec_ref(v_ctorNames_2574_);
return v_res_2583_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals(lean_object* v_s_2584_, lean_object* v_ctorNames_2585_, lean_object* v_majorFVarId_2586_, lean_object* v_us_2587_, lean_object* v_params_2588_){
_start:
{
size_t v_sz_2589_; size_t v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; 
v_sz_2589_ = lean_array_size(v_s_2584_);
v___x_2590_ = ((size_t)0ULL);
v___x_2591_ = l_unsafeCast___redArg(v_s_2584_);
v___x_2592_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___redArg(v_ctorNames_2585_, v_us_2587_, v_params_2588_, v_majorFVarId_2586_, v_sz_2589_, v___x_2590_, v___x_2591_);
v___x_2593_ = l_unsafeCast___redArg(v___x_2592_);
lean_dec_ref(v___x_2592_);
return v___x_2593_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals___boxed(lean_object* v_s_2594_, lean_object* v_ctorNames_2595_, lean_object* v_majorFVarId_2596_, lean_object* v_us_2597_, lean_object* v_params_2598_){
_start:
{
lean_object* v_res_2599_; 
v_res_2599_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals(v_s_2594_, v_ctorNames_2595_, v_majorFVarId_2596_, v_us_2597_, v_params_2598_);
lean_dec_ref(v_params_2598_);
lean_dec_ref(v_ctorNames_2595_);
lean_dec_ref(v_s_2594_);
return v_res_2599_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0(lean_object* v_ctorNames_2600_, lean_object* v_us_2601_, lean_object* v_params_2602_, lean_object* v_majorFVarId_2603_, lean_object* v_as_2604_, size_t v_sz_2605_, size_t v_i_2606_, lean_object* v_bs_2607_){
_start:
{
lean_object* v___x_2608_; 
v___x_2608_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___redArg(v_ctorNames_2600_, v_us_2601_, v_params_2602_, v_majorFVarId_2603_, v_sz_2605_, v_i_2606_, v_bs_2607_);
return v___x_2608_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___boxed(lean_object* v_ctorNames_2609_, lean_object* v_us_2610_, lean_object* v_params_2611_, lean_object* v_majorFVarId_2612_, lean_object* v_as_2613_, lean_object* v_sz_2614_, lean_object* v_i_2615_, lean_object* v_bs_2616_){
_start:
{
size_t v_sz_boxed_2617_; size_t v_i_boxed_2618_; lean_object* v_res_2619_; 
v_sz_boxed_2617_ = lean_unbox_usize(v_sz_2614_);
lean_dec(v_sz_2614_);
v_i_boxed_2618_ = lean_unbox_usize(v_i_2615_);
lean_dec(v_i_2615_);
v_res_2619_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0(v_ctorNames_2609_, v_us_2610_, v_params_2611_, v_majorFVarId_2612_, v_as_2613_, v_sz_boxed_2617_, v_i_boxed_2618_, v_bs_2616_);
lean_dec_ref(v_as_2613_);
lean_dec_ref(v_params_2611_);
lean_dec_ref(v_ctorNames_2609_);
return v_res_2619_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_2625_; lean_object* v___x_2626_; 
v___x_2625_ = l_Lean_maxRecDepthErrorMessage;
v___x_2626_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2626_, 0, v___x_2625_);
return v___x_2626_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_2627_; lean_object* v___x_2628_; 
v___x_2627_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__3);
v___x_2628_ = l_Lean_MessageData_ofFormat(v___x_2627_);
return v___x_2628_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; 
v___x_2629_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__4);
v___x_2630_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__2));
v___x_2631_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2631_, 0, v___x_2630_);
lean_ctor_set(v___x_2631_, 1, v___x_2629_);
return v___x_2631_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg(lean_object* v_ref_2632_){
_start:
{
lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; 
v___x_2634_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__5);
v___x_2635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2635_, 0, v_ref_2632_);
lean_ctor_set(v___x_2635_, 1, v___x_2634_);
v___x_2636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2636_, 0, v___x_2635_);
return v___x_2636_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___boxed(lean_object* v_ref_2637_, lean_object* v___y_2638_){
_start:
{
lean_object* v_res_2639_; 
v_res_2639_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg(v_ref_2637_);
return v_res_2639_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0(lean_object* v_00_u03b1_2640_, lean_object* v_ref_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_){
_start:
{
lean_object* v___x_2647_; 
v___x_2647_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg(v_ref_2641_);
return v___x_2647_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___boxed(lean_object* v_00_u03b1_2648_, lean_object* v_ref_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_){
_start:
{
lean_object* v_res_2655_; 
v_res_2655_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0(v_00_u03b1_2648_, v_ref_2649_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_);
lean_dec(v___y_2653_);
lean_dec_ref(v___y_2652_);
lean_dec(v___y_2651_);
lean_dec_ref(v___y_2650_);
return v_res_2655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_unifyEqs_x3f(lean_object* v_numEqs_2657_, lean_object* v_mvarId_2658_, lean_object* v_subst_2659_, lean_object* v_caseName_x3f_2660_, lean_object* v_a_2661_, lean_object* v_a_2662_, lean_object* v_a_2663_, lean_object* v_a_2664_){
_start:
{
lean_object* v_toCold_2666_; lean_object* v_currRecDepth_2667_; lean_object* v_ref_2668_; uint8_t v_diag_2669_; uint8_t v_suppressElabErrors_2670_; lean_object* v_maxRecDepth_2671_; lean_object* v___x_2672_; uint8_t v___x_2673_; uint8_t v___x_2719_; 
v_toCold_2666_ = lean_ctor_get(v_a_2663_, 0);
lean_inc_ref(v_toCold_2666_);
v_currRecDepth_2667_ = lean_ctor_get(v_a_2663_, 1);
lean_inc(v_currRecDepth_2667_);
v_ref_2668_ = lean_ctor_get(v_a_2663_, 2);
lean_inc(v_ref_2668_);
v_diag_2669_ = lean_ctor_get_uint8(v_a_2663_, sizeof(void*)*3);
v_suppressElabErrors_2670_ = lean_ctor_get_uint8(v_a_2663_, sizeof(void*)*3 + 1);
lean_dec_ref(v_a_2663_);
v_maxRecDepth_2671_ = lean_ctor_get(v_toCold_2666_, 3);
v___x_2672_ = lean_unsigned_to_nat(0u);
v___x_2673_ = lean_nat_dec_eq(v_numEqs_2657_, v___x_2672_);
v___x_2719_ = lean_nat_dec_eq(v_maxRecDepth_2671_, v___x_2672_);
if (v___x_2719_ == 0)
{
uint8_t v___x_2720_; 
v___x_2720_ = lean_nat_dec_eq(v_currRecDepth_2667_, v_maxRecDepth_2671_);
if (v___x_2720_ == 0)
{
goto v___jp_2674_;
}
else
{
lean_object* v___x_2721_; 
lean_dec(v_currRecDepth_2667_);
lean_dec_ref(v_toCold_2666_);
lean_dec(v_caseName_x3f_2660_);
lean_dec(v_subst_2659_);
lean_dec(v_mvarId_2658_);
lean_dec(v_numEqs_2657_);
v___x_2721_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg(v_ref_2668_);
return v___x_2721_;
}
}
else
{
goto v___jp_2674_;
}
v___jp_2674_:
{
if (v___x_2673_ == 0)
{
lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; 
v___x_2675_ = lean_unsigned_to_nat(1u);
v___x_2676_ = lean_nat_add(v_currRecDepth_2667_, v___x_2675_);
lean_dec(v_currRecDepth_2667_);
v___x_2677_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2677_, 0, v_toCold_2666_);
lean_ctor_set(v___x_2677_, 1, v___x_2676_);
lean_ctor_set(v___x_2677_, 2, v_ref_2668_);
lean_ctor_set_uint8(v___x_2677_, sizeof(void*)*3, v_diag_2669_);
lean_ctor_set_uint8(v___x_2677_, sizeof(void*)*3 + 1, v_suppressElabErrors_2670_);
v___x_2678_ = l_Lean_Meta_intro1Core(v_mvarId_2658_, v___x_2673_, v_a_2661_, v_a_2662_, v___x_2677_, v_a_2664_);
if (lean_obj_tag(v___x_2678_) == 0)
{
lean_object* v_a_2679_; lean_object* v_fst_2680_; lean_object* v_snd_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; 
v_a_2679_ = lean_ctor_get(v___x_2678_, 0);
lean_inc(v_a_2679_);
lean_dec_ref_known(v___x_2678_, 1);
v_fst_2680_ = lean_ctor_get(v_a_2679_, 0);
lean_inc(v_fst_2680_);
v_snd_2681_ = lean_ctor_get(v_a_2679_, 1);
lean_inc(v_snd_2681_);
lean_dec(v_a_2679_);
v___x_2682_ = ((lean_object*)(l_Lean_Meta_Cases_unifyEqs_x3f___closed__0));
lean_inc(v_caseName_x3f_2660_);
v___x_2683_ = l_Lean_Meta_unifyEq_x3f(v_snd_2681_, v_fst_2680_, v_subst_2659_, v___x_2682_, v_caseName_x3f_2660_, v_a_2661_, v_a_2662_, v___x_2677_, v_a_2664_);
if (lean_obj_tag(v___x_2683_) == 0)
{
lean_object* v_a_2684_; lean_object* v___x_2686_; uint8_t v_isShared_2687_; uint8_t v_isSharedCheck_2699_; 
v_a_2684_ = lean_ctor_get(v___x_2683_, 0);
v_isSharedCheck_2699_ = !lean_is_exclusive(v___x_2683_);
if (v_isSharedCheck_2699_ == 0)
{
v___x_2686_ = v___x_2683_;
v_isShared_2687_ = v_isSharedCheck_2699_;
goto v_resetjp_2685_;
}
else
{
lean_inc(v_a_2684_);
lean_dec(v___x_2683_);
v___x_2686_ = lean_box(0);
v_isShared_2687_ = v_isSharedCheck_2699_;
goto v_resetjp_2685_;
}
v_resetjp_2685_:
{
if (lean_obj_tag(v_a_2684_) == 1)
{
lean_object* v_val_2688_; lean_object* v_mvarId_2689_; lean_object* v_subst_2690_; lean_object* v_numNewEqs_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; 
lean_del_object(v___x_2686_);
v_val_2688_ = lean_ctor_get(v_a_2684_, 0);
lean_inc(v_val_2688_);
lean_dec_ref_known(v_a_2684_, 1);
v_mvarId_2689_ = lean_ctor_get(v_val_2688_, 0);
lean_inc(v_mvarId_2689_);
v_subst_2690_ = lean_ctor_get(v_val_2688_, 1);
lean_inc(v_subst_2690_);
v_numNewEqs_2691_ = lean_ctor_get(v_val_2688_, 2);
lean_inc(v_numNewEqs_2691_);
lean_dec(v_val_2688_);
v___x_2692_ = lean_nat_sub(v_numEqs_2657_, v___x_2675_);
lean_dec(v_numEqs_2657_);
v___x_2693_ = lean_nat_add(v___x_2692_, v_numNewEqs_2691_);
lean_dec(v_numNewEqs_2691_);
lean_dec(v___x_2692_);
v_numEqs_2657_ = v___x_2693_;
v_mvarId_2658_ = v_mvarId_2689_;
v_subst_2659_ = v_subst_2690_;
v_a_2663_ = v___x_2677_;
goto _start;
}
else
{
lean_object* v___x_2695_; lean_object* v___x_2697_; 
lean_dec(v_a_2684_);
lean_dec_ref_known(v___x_2677_, 3);
lean_dec(v_caseName_x3f_2660_);
lean_dec(v_numEqs_2657_);
v___x_2695_ = lean_box(0);
if (v_isShared_2687_ == 0)
{
lean_ctor_set(v___x_2686_, 0, v___x_2695_);
v___x_2697_ = v___x_2686_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v___x_2695_);
v___x_2697_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
return v___x_2697_;
}
}
}
}
else
{
lean_object* v_a_2700_; lean_object* v___x_2702_; uint8_t v_isShared_2703_; uint8_t v_isSharedCheck_2707_; 
lean_dec_ref_known(v___x_2677_, 3);
lean_dec(v_caseName_x3f_2660_);
lean_dec(v_numEqs_2657_);
v_a_2700_ = lean_ctor_get(v___x_2683_, 0);
v_isSharedCheck_2707_ = !lean_is_exclusive(v___x_2683_);
if (v_isSharedCheck_2707_ == 0)
{
v___x_2702_ = v___x_2683_;
v_isShared_2703_ = v_isSharedCheck_2707_;
goto v_resetjp_2701_;
}
else
{
lean_inc(v_a_2700_);
lean_dec(v___x_2683_);
v___x_2702_ = lean_box(0);
v_isShared_2703_ = v_isSharedCheck_2707_;
goto v_resetjp_2701_;
}
v_resetjp_2701_:
{
lean_object* v___x_2705_; 
if (v_isShared_2703_ == 0)
{
v___x_2705_ = v___x_2702_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2706_; 
v_reuseFailAlloc_2706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2706_, 0, v_a_2700_);
v___x_2705_ = v_reuseFailAlloc_2706_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
return v___x_2705_;
}
}
}
}
else
{
lean_object* v_a_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2715_; 
lean_dec_ref_known(v___x_2677_, 3);
lean_dec(v_caseName_x3f_2660_);
lean_dec(v_subst_2659_);
lean_dec(v_numEqs_2657_);
v_a_2708_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2715_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2715_ == 0)
{
v___x_2710_ = v___x_2678_;
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_a_2708_);
lean_dec(v___x_2678_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v___x_2713_; 
if (v_isShared_2711_ == 0)
{
v___x_2713_ = v___x_2710_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v_a_2708_);
v___x_2713_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
return v___x_2713_;
}
}
}
}
else
{
lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; 
lean_dec(v_ref_2668_);
lean_dec(v_currRecDepth_2667_);
lean_dec_ref(v_toCold_2666_);
lean_dec(v_caseName_x3f_2660_);
lean_dec(v_numEqs_2657_);
v___x_2716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2716_, 0, v_mvarId_2658_);
lean_ctor_set(v___x_2716_, 1, v_subst_2659_);
v___x_2717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2717_, 0, v___x_2716_);
v___x_2718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2718_, 0, v___x_2717_);
return v___x_2718_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_unifyEqs_x3f___boxed(lean_object* v_numEqs_2722_, lean_object* v_mvarId_2723_, lean_object* v_subst_2724_, lean_object* v_caseName_x3f_2725_, lean_object* v_a_2726_, lean_object* v_a_2727_, lean_object* v_a_2728_, lean_object* v_a_2729_, lean_object* v_a_2730_){
_start:
{
lean_object* v_res_2731_; 
v_res_2731_ = l_Lean_Meta_Cases_unifyEqs_x3f(v_numEqs_2722_, v_mvarId_2723_, v_subst_2724_, v_caseName_x3f_2725_, v_a_2726_, v_a_2727_, v_a_2728_, v_a_2729_);
lean_dec(v_a_2729_);
lean_dec(v_a_2727_);
lean_dec_ref(v_a_2726_);
return v_res_2731_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__0(lean_object* v_snd_2732_, size_t v_sz_2733_, size_t v_i_2734_, lean_object* v_bs_2735_){
_start:
{
uint8_t v___x_2736_; 
v___x_2736_ = lean_usize_dec_lt(v_i_2734_, v_sz_2733_);
if (v___x_2736_ == 0)
{
lean_object* v___x_2737_; 
lean_dec(v_snd_2732_);
v___x_2737_ = l_unsafeCast___redArg(v_bs_2735_);
lean_dec_ref(v_bs_2735_);
return v___x_2737_;
}
else
{
lean_object* v_v_2738_; lean_object* v___x_2739_; lean_object* v_bs_x27_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; size_t v___x_2743_; size_t v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; 
v_v_2738_ = lean_array_uget(v_bs_2735_, v_i_2734_);
v___x_2739_ = lean_unsigned_to_nat(0u);
v_bs_x27_2740_ = lean_array_uset(v_bs_2735_, v_i_2734_, v___x_2739_);
v___x_2741_ = l_unsafeCast___redArg(v_v_2738_);
lean_dec(v_v_2738_);
lean_inc(v_snd_2732_);
v___x_2742_ = l_Lean_Meta_FVarSubst_apply(v_snd_2732_, v___x_2741_);
lean_dec(v___x_2741_);
v___x_2743_ = ((size_t)1ULL);
v___x_2744_ = lean_usize_add(v_i_2734_, v___x_2743_);
v___x_2745_ = l_unsafeCast___redArg(v___x_2742_);
lean_dec_ref(v___x_2742_);
v___x_2746_ = lean_array_uset(v_bs_x27_2740_, v_i_2734_, v___x_2745_);
v_i_2734_ = v___x_2744_;
v_bs_2735_ = v___x_2746_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__0___boxed(lean_object* v_snd_2748_, lean_object* v_sz_2749_, lean_object* v_i_2750_, lean_object* v_bs_2751_){
_start:
{
size_t v_sz_boxed_2752_; size_t v_i_boxed_2753_; lean_object* v_res_2754_; 
v_sz_boxed_2752_ = lean_unbox_usize(v_sz_2749_);
lean_dec(v_sz_2749_);
v_i_boxed_2753_ = lean_unbox_usize(v_i_2750_);
lean_dec(v_i_2750_);
v_res_2754_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__0(v_snd_2748_, v_sz_boxed_2752_, v_i_boxed_2753_, v_bs_2751_);
return v_res_2754_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1_spec__1(lean_object* v_numEqs_2755_, lean_object* v_as_2756_, size_t v_i_2757_, size_t v_stop_2758_, lean_object* v_b_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_){
_start:
{
lean_object* v_a_2766_; uint8_t v___x_2770_; 
v___x_2770_ = lean_usize_dec_eq(v_i_2757_, v_stop_2758_);
if (v___x_2770_ == 0)
{
lean_object* v___x_2771_; lean_object* v_toInductionSubgoal_2772_; lean_object* v_ctorName_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2809_; 
v___x_2771_ = lean_array_uget(v_as_2756_, v_i_2757_);
v_toInductionSubgoal_2772_ = lean_ctor_get(v___x_2771_, 0);
v_ctorName_2773_ = lean_ctor_get(v___x_2771_, 1);
v_isSharedCheck_2809_ = !lean_is_exclusive(v___x_2771_);
if (v_isSharedCheck_2809_ == 0)
{
v___x_2775_ = v___x_2771_;
v_isShared_2776_ = v_isSharedCheck_2809_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_ctorName_2773_);
lean_inc(v_toInductionSubgoal_2772_);
lean_dec(v___x_2771_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2809_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v_mvarId_2777_; lean_object* v_fields_2778_; lean_object* v_subst_2779_; lean_object* v___x_2781_; uint8_t v_isShared_2782_; uint8_t v_isSharedCheck_2808_; 
v_mvarId_2777_ = lean_ctor_get(v_toInductionSubgoal_2772_, 0);
v_fields_2778_ = lean_ctor_get(v_toInductionSubgoal_2772_, 1);
v_subst_2779_ = lean_ctor_get(v_toInductionSubgoal_2772_, 2);
v_isSharedCheck_2808_ = !lean_is_exclusive(v_toInductionSubgoal_2772_);
if (v_isSharedCheck_2808_ == 0)
{
v___x_2781_ = v_toInductionSubgoal_2772_;
v_isShared_2782_ = v_isSharedCheck_2808_;
goto v_resetjp_2780_;
}
else
{
lean_inc(v_subst_2779_);
lean_inc(v_fields_2778_);
lean_inc(v_mvarId_2777_);
lean_dec(v_toInductionSubgoal_2772_);
v___x_2781_ = lean_box(0);
v_isShared_2782_ = v_isSharedCheck_2808_;
goto v_resetjp_2780_;
}
v_resetjp_2780_:
{
lean_object* v___x_2783_; 
lean_inc_ref(v___y_2762_);
lean_inc(v_ctorName_2773_);
lean_inc(v_numEqs_2755_);
v___x_2783_ = l_Lean_Meta_Cases_unifyEqs_x3f(v_numEqs_2755_, v_mvarId_2777_, v_subst_2779_, v_ctorName_2773_, v___y_2760_, v___y_2761_, v___y_2762_, v___y_2763_);
if (lean_obj_tag(v___x_2783_) == 0)
{
lean_object* v_a_2784_; 
v_a_2784_ = lean_ctor_get(v___x_2783_, 0);
lean_inc(v_a_2784_);
lean_dec_ref_known(v___x_2783_, 1);
if (lean_obj_tag(v_a_2784_) == 0)
{
lean_del_object(v___x_2781_);
lean_dec_ref(v_fields_2778_);
lean_del_object(v___x_2775_);
lean_dec(v_ctorName_2773_);
v_a_2766_ = v_b_2759_;
goto v___jp_2765_;
}
else
{
lean_object* v_val_2785_; lean_object* v_fst_2786_; lean_object* v_snd_2787_; size_t v_sz_2788_; size_t v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2794_; 
v_val_2785_ = lean_ctor_get(v_a_2784_, 0);
lean_inc(v_val_2785_);
lean_dec_ref_known(v_a_2784_, 1);
v_fst_2786_ = lean_ctor_get(v_val_2785_, 0);
lean_inc(v_fst_2786_);
v_snd_2787_ = lean_ctor_get(v_val_2785_, 1);
lean_inc_n(v_snd_2787_, 2);
lean_dec(v_val_2785_);
v_sz_2788_ = lean_array_size(v_fields_2778_);
v___x_2789_ = ((size_t)0ULL);
v___x_2790_ = l_unsafeCast___redArg(v_fields_2778_);
lean_dec_ref(v_fields_2778_);
v___x_2791_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__0(v_snd_2787_, v_sz_2788_, v___x_2789_, v___x_2790_);
v___x_2792_ = l_unsafeCast___redArg(v___x_2791_);
lean_dec_ref(v___x_2791_);
if (v_isShared_2782_ == 0)
{
lean_ctor_set(v___x_2781_, 2, v_snd_2787_);
lean_ctor_set(v___x_2781_, 1, v___x_2792_);
lean_ctor_set(v___x_2781_, 0, v_fst_2786_);
v___x_2794_ = v___x_2781_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v_fst_2786_);
lean_ctor_set(v_reuseFailAlloc_2799_, 1, v___x_2792_);
lean_ctor_set(v_reuseFailAlloc_2799_, 2, v_snd_2787_);
v___x_2794_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
lean_object* v___x_2796_; 
if (v_isShared_2776_ == 0)
{
lean_ctor_set(v___x_2775_, 0, v___x_2794_);
v___x_2796_ = v___x_2775_;
goto v_reusejp_2795_;
}
else
{
lean_object* v_reuseFailAlloc_2798_; 
v_reuseFailAlloc_2798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2798_, 0, v___x_2794_);
lean_ctor_set(v_reuseFailAlloc_2798_, 1, v_ctorName_2773_);
v___x_2796_ = v_reuseFailAlloc_2798_;
goto v_reusejp_2795_;
}
v_reusejp_2795_:
{
lean_object* v___x_2797_; 
v___x_2797_ = lean_array_push(v_b_2759_, v___x_2796_);
v_a_2766_ = v___x_2797_;
goto v___jp_2765_;
}
}
}
}
else
{
lean_object* v_a_2800_; lean_object* v___x_2802_; uint8_t v_isShared_2803_; uint8_t v_isSharedCheck_2807_; 
lean_del_object(v___x_2781_);
lean_dec_ref(v_fields_2778_);
lean_del_object(v___x_2775_);
lean_dec(v_ctorName_2773_);
lean_dec_ref(v_b_2759_);
lean_dec(v_numEqs_2755_);
v_a_2800_ = lean_ctor_get(v___x_2783_, 0);
v_isSharedCheck_2807_ = !lean_is_exclusive(v___x_2783_);
if (v_isSharedCheck_2807_ == 0)
{
v___x_2802_ = v___x_2783_;
v_isShared_2803_ = v_isSharedCheck_2807_;
goto v_resetjp_2801_;
}
else
{
lean_inc(v_a_2800_);
lean_dec(v___x_2783_);
v___x_2802_ = lean_box(0);
v_isShared_2803_ = v_isSharedCheck_2807_;
goto v_resetjp_2801_;
}
v_resetjp_2801_:
{
lean_object* v___x_2805_; 
if (v_isShared_2803_ == 0)
{
v___x_2805_ = v___x_2802_;
goto v_reusejp_2804_;
}
else
{
lean_object* v_reuseFailAlloc_2806_; 
v_reuseFailAlloc_2806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2806_, 0, v_a_2800_);
v___x_2805_ = v_reuseFailAlloc_2806_;
goto v_reusejp_2804_;
}
v_reusejp_2804_:
{
return v___x_2805_;
}
}
}
}
}
}
else
{
lean_object* v___x_2810_; 
lean_dec(v_numEqs_2755_);
v___x_2810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2810_, 0, v_b_2759_);
return v___x_2810_;
}
v___jp_2765_:
{
size_t v___x_2767_; size_t v___x_2768_; 
v___x_2767_ = ((size_t)1ULL);
v___x_2768_ = lean_usize_add(v_i_2757_, v___x_2767_);
v_i_2757_ = v___x_2768_;
v_b_2759_ = v_a_2766_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1_spec__1___boxed(lean_object* v_numEqs_2811_, lean_object* v_as_2812_, lean_object* v_i_2813_, lean_object* v_stop_2814_, lean_object* v_b_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_){
_start:
{
size_t v_i_boxed_2821_; size_t v_stop_boxed_2822_; lean_object* v_res_2823_; 
v_i_boxed_2821_ = lean_unbox_usize(v_i_2813_);
lean_dec(v_i_2813_);
v_stop_boxed_2822_ = lean_unbox_usize(v_stop_2814_);
lean_dec(v_stop_2814_);
v_res_2823_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1_spec__1(v_numEqs_2811_, v_as_2812_, v_i_boxed_2821_, v_stop_boxed_2822_, v_b_2815_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_);
lean_dec(v___y_2819_);
lean_dec_ref(v___y_2818_);
lean_dec(v___y_2817_);
lean_dec_ref(v___y_2816_);
lean_dec_ref(v_as_2812_);
return v_res_2823_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1(lean_object* v_numEqs_2826_, lean_object* v_as_2827_, lean_object* v_start_2828_, lean_object* v_stop_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_){
_start:
{
lean_object* v___x_2835_; uint8_t v___x_2836_; 
v___x_2835_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1___closed__0));
v___x_2836_ = lean_nat_dec_lt(v_start_2828_, v_stop_2829_);
if (v___x_2836_ == 0)
{
lean_object* v___x_2837_; 
lean_dec(v_numEqs_2826_);
v___x_2837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2837_, 0, v___x_2835_);
return v___x_2837_;
}
else
{
lean_object* v___x_2838_; uint8_t v___x_2839_; 
v___x_2838_ = lean_array_get_size(v_as_2827_);
v___x_2839_ = lean_nat_dec_le(v_stop_2829_, v___x_2838_);
if (v___x_2839_ == 0)
{
uint8_t v___x_2840_; 
v___x_2840_ = lean_nat_dec_lt(v_start_2828_, v___x_2838_);
if (v___x_2840_ == 0)
{
lean_object* v___x_2841_; 
lean_dec(v_numEqs_2826_);
v___x_2841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2841_, 0, v___x_2835_);
return v___x_2841_;
}
else
{
size_t v___x_2842_; size_t v___x_2843_; lean_object* v___x_2844_; 
v___x_2842_ = lean_usize_of_nat(v_start_2828_);
v___x_2843_ = lean_usize_of_nat(v___x_2838_);
v___x_2844_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1_spec__1(v_numEqs_2826_, v_as_2827_, v___x_2842_, v___x_2843_, v___x_2835_, v___y_2830_, v___y_2831_, v___y_2832_, v___y_2833_);
return v___x_2844_;
}
}
else
{
size_t v___x_2845_; size_t v___x_2846_; lean_object* v___x_2847_; 
v___x_2845_ = lean_usize_of_nat(v_start_2828_);
v___x_2846_ = lean_usize_of_nat(v_stop_2829_);
v___x_2847_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1_spec__1(v_numEqs_2826_, v_as_2827_, v___x_2845_, v___x_2846_, v___x_2835_, v___y_2830_, v___y_2831_, v___y_2832_, v___y_2833_);
return v___x_2847_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1___boxed(lean_object* v_numEqs_2848_, lean_object* v_as_2849_, lean_object* v_start_2850_, lean_object* v_stop_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_){
_start:
{
lean_object* v_res_2857_; 
v_res_2857_ = l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1(v_numEqs_2848_, v_as_2849_, v_start_2850_, v_stop_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
lean_dec(v___y_2855_);
lean_dec_ref(v___y_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v_stop_2851_);
lean_dec(v_start_2850_);
lean_dec_ref(v_as_2849_);
return v_res_2857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs(lean_object* v_numEqs_2858_, lean_object* v_subgoals_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_, lean_object* v_a_2862_, lean_object* v_a_2863_){
_start:
{
lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; 
v___x_2865_ = lean_unsigned_to_nat(0u);
v___x_2866_ = lean_array_get_size(v_subgoals_2859_);
v___x_2867_ = l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1(v_numEqs_2858_, v_subgoals_2859_, v___x_2865_, v___x_2866_, v_a_2860_, v_a_2861_, v_a_2862_, v_a_2863_);
return v___x_2867_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs___boxed(lean_object* v_numEqs_2868_, lean_object* v_subgoals_2869_, lean_object* v_a_2870_, lean_object* v_a_2871_, lean_object* v_a_2872_, lean_object* v_a_2873_, lean_object* v_a_2874_){
_start:
{
lean_object* v_res_2875_; 
v_res_2875_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs(v_numEqs_2868_, v_subgoals_2869_, v_a_2870_, v_a_2871_, v_a_2872_, v_a_2873_);
lean_dec(v_a_2873_);
lean_dec_ref(v_a_2872_);
lean_dec(v_a_2871_);
lean_dec_ref(v_a_2870_);
lean_dec_ref(v_subgoals_2869_);
return v_res_2875_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0(lean_object* v___x_2887_, lean_object* v_ctx_2888_, lean_object* v_mvarId_2889_, lean_object* v_majorFVarId_2890_, lean_object* v_givenNames_2891_, uint8_t v_useNatCasesAuxOn_2892_, lean_object* v_interestingCtors_x3f_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_){
_start:
{
lean_object* v___x_2899_; 
lean_inc(v___y_2897_);
lean_inc_ref(v___y_2896_);
lean_inc(v___y_2895_);
lean_inc_ref(v___y_2894_);
v___x_2899_ = lean_infer_type(v___x_2887_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_);
if (lean_obj_tag(v___x_2899_) == 0)
{
lean_object* v_a_2900_; lean_object* v___x_2901_; 
v_a_2900_ = lean_ctor_get(v___x_2899_, 0);
lean_inc(v_a_2900_);
lean_dec_ref_known(v___x_2899_, 1);
v___x_2901_ = l_Lean_Meta_getInductiveUniverseAndParams(v_a_2900_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_);
if (lean_obj_tag(v___x_2901_) == 0)
{
lean_object* v_a_2902_; lean_object* v_fst_2903_; lean_object* v_snd_2904_; lean_object* v___y_2906_; lean_object* v___y_2907_; lean_object* v___y_2908_; lean_object* v___y_2909_; lean_object* v___y_2910_; lean_object* v___y_2933_; lean_object* v___y_2934_; lean_object* v___y_2935_; lean_object* v___y_2936_; lean_object* v___y_2942_; lean_object* v___y_2943_; lean_object* v___y_2944_; lean_object* v___y_2945_; 
v_a_2902_ = lean_ctor_get(v___x_2901_, 0);
lean_inc(v_a_2902_);
lean_dec_ref_known(v___x_2901_, 1);
v_fst_2903_ = lean_ctor_get(v_a_2902_, 0);
lean_inc(v_fst_2903_);
v_snd_2904_ = lean_ctor_get(v_a_2902_, 1);
lean_inc(v_snd_2904_);
lean_dec(v_a_2902_);
if (lean_obj_tag(v_interestingCtors_x3f_2893_) == 1)
{
lean_object* v_val_2955_; lean_object* v___x_2956_; lean_object* v_env_2957_; lean_object* v___x_2958_; uint8_t v___x_2959_; uint8_t v___x_2960_; lean_object* v___x_2961_; lean_object* v_inductiveVal_2962_; lean_object* v_toConstantVal_2963_; lean_object* v_ctors_2964_; lean_object* v_name_2965_; uint8_t v___y_2967_; 
v_val_2955_ = lean_ctor_get(v_interestingCtors_x3f_2893_, 0);
lean_inc(v_val_2955_);
lean_dec_ref_known(v_interestingCtors_x3f_2893_, 1);
v___x_2956_ = lean_st_ref_get(v___y_2897_);
v_env_2957_ = lean_ctor_get(v___x_2956_, 0);
lean_inc_ref(v_env_2957_);
lean_dec(v___x_2956_);
v___x_2958_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__5));
v___x_2959_ = 1;
v___x_2960_ = l_Lean_Environment_contains(v_env_2957_, v___x_2958_, v___x_2959_);
v___x_2961_ = lean_st_ref_get(v___y_2897_);
v_inductiveVal_2962_ = lean_ctor_get(v_ctx_2888_, 0);
v_toConstantVal_2963_ = lean_ctor_get(v_inductiveVal_2962_, 0);
v_ctors_2964_ = lean_ctor_get(v_inductiveVal_2962_, 4);
v_name_2965_ = lean_ctor_get(v_toConstantVal_2963_, 0);
if (v___x_2960_ == 0)
{
lean_dec(v___x_2961_);
v___y_2967_ = v___x_2960_;
goto v___jp_2966_;
}
else
{
lean_object* v_env_3001_; lean_object* v___x_3002_; uint8_t v___x_3003_; 
v_env_3001_ = lean_ctor_get(v___x_2961_, 0);
lean_inc_ref(v_env_3001_);
lean_dec(v___x_2961_);
lean_inc(v_name_2965_);
v___x_3002_ = l_Lean_mkCtorIdxName(v_name_2965_);
v___x_3003_ = l_Lean_Environment_contains(v_env_3001_, v___x_3002_, v___x_2959_);
v___y_2967_ = v___x_3003_;
goto v___jp_2966_;
}
v___jp_2966_:
{
if (v___y_2967_ == 0)
{
lean_dec(v_val_2955_);
v___y_2942_ = v___y_2894_;
v___y_2943_ = v___y_2895_;
v___y_2944_ = v___y_2896_;
v___y_2945_ = v___y_2897_;
goto v___jp_2941_;
}
else
{
lean_object* v___x_2968_; lean_object* v___x_2969_; uint8_t v___x_2970_; 
v___x_2968_ = lean_array_get_size(v_val_2955_);
v___x_2969_ = lean_unsigned_to_nat(0u);
v___x_2970_ = lean_nat_dec_eq(v___x_2968_, v___x_2969_);
if (v___x_2970_ == 0)
{
lean_object* v___x_2971_; uint8_t v___x_2972_; 
v___x_2971_ = l_List_lengthTR___redArg(v_ctors_2964_);
v___x_2972_ = lean_nat_dec_lt(v___x_2968_, v___x_2971_);
lean_dec(v___x_2971_);
if (v___x_2972_ == 0)
{
lean_dec(v_val_2955_);
v___y_2942_ = v___y_2894_;
v___y_2943_ = v___y_2895_;
v___y_2944_ = v___y_2896_;
v___y_2945_ = v___y_2897_;
goto v___jp_2941_;
}
else
{
lean_object* v___x_2973_; 
lean_inc(v_name_2965_);
lean_dec_ref(v_ctx_2888_);
lean_inc(v_val_2955_);
v___x_2973_ = l_Lean_Meta_mkSparseCasesOn(v_name_2965_, v_val_2955_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_);
if (lean_obj_tag(v___x_2973_) == 0)
{
lean_object* v_a_2974_; lean_object* v___x_2975_; 
v_a_2974_ = lean_ctor_get(v___x_2973_, 0);
lean_inc(v_a_2974_);
lean_dec_ref_known(v___x_2973_, 1);
lean_inc(v_majorFVarId_2890_);
v___x_2975_ = l_Lean_MVarId_induction(v_mvarId_2889_, v_majorFVarId_2890_, v_a_2974_, v_givenNames_2891_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_);
lean_dec(v___y_2897_);
lean_dec_ref(v___y_2896_);
lean_dec(v___y_2895_);
lean_dec_ref(v___y_2894_);
if (lean_obj_tag(v___x_2975_) == 0)
{
lean_object* v_a_2976_; lean_object* v___x_2978_; uint8_t v_isShared_2979_; uint8_t v_isSharedCheck_2984_; 
v_a_2976_ = lean_ctor_get(v___x_2975_, 0);
v_isSharedCheck_2984_ = !lean_is_exclusive(v___x_2975_);
if (v_isSharedCheck_2984_ == 0)
{
v___x_2978_ = v___x_2975_;
v_isShared_2979_ = v_isSharedCheck_2984_;
goto v_resetjp_2977_;
}
else
{
lean_inc(v_a_2976_);
lean_dec(v___x_2975_);
v___x_2978_ = lean_box(0);
v_isShared_2979_ = v_isSharedCheck_2984_;
goto v_resetjp_2977_;
}
v_resetjp_2977_:
{
lean_object* v___x_2980_; lean_object* v___x_2982_; 
v___x_2980_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals(v_a_2976_, v_val_2955_, v_majorFVarId_2890_, v_fst_2903_, v_snd_2904_);
lean_dec(v_snd_2904_);
lean_dec(v_val_2955_);
lean_dec(v_a_2976_);
if (v_isShared_2979_ == 0)
{
lean_ctor_set(v___x_2978_, 0, v___x_2980_);
v___x_2982_ = v___x_2978_;
goto v_reusejp_2981_;
}
else
{
lean_object* v_reuseFailAlloc_2983_; 
v_reuseFailAlloc_2983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2983_, 0, v___x_2980_);
v___x_2982_ = v_reuseFailAlloc_2983_;
goto v_reusejp_2981_;
}
v_reusejp_2981_:
{
return v___x_2982_;
}
}
}
else
{
lean_object* v_a_2985_; lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_2992_; 
lean_dec(v_val_2955_);
lean_dec(v_snd_2904_);
lean_dec(v_fst_2903_);
lean_dec(v_majorFVarId_2890_);
v_a_2985_ = lean_ctor_get(v___x_2975_, 0);
v_isSharedCheck_2992_ = !lean_is_exclusive(v___x_2975_);
if (v_isSharedCheck_2992_ == 0)
{
v___x_2987_ = v___x_2975_;
v_isShared_2988_ = v_isSharedCheck_2992_;
goto v_resetjp_2986_;
}
else
{
lean_inc(v_a_2985_);
lean_dec(v___x_2975_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_2992_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
lean_object* v___x_2990_; 
if (v_isShared_2988_ == 0)
{
v___x_2990_ = v___x_2987_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v_a_2985_);
v___x_2990_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
return v___x_2990_;
}
}
}
}
else
{
lean_object* v_a_2993_; lean_object* v___x_2995_; uint8_t v_isShared_2996_; uint8_t v_isSharedCheck_3000_; 
lean_dec(v_val_2955_);
lean_dec(v_snd_2904_);
lean_dec(v_fst_2903_);
lean_dec(v___y_2897_);
lean_dec_ref(v___y_2896_);
lean_dec(v___y_2895_);
lean_dec_ref(v___y_2894_);
lean_dec_ref(v_givenNames_2891_);
lean_dec(v_majorFVarId_2890_);
lean_dec(v_mvarId_2889_);
v_a_2993_ = lean_ctor_get(v___x_2973_, 0);
v_isSharedCheck_3000_ = !lean_is_exclusive(v___x_2973_);
if (v_isSharedCheck_3000_ == 0)
{
v___x_2995_ = v___x_2973_;
v_isShared_2996_ = v_isSharedCheck_3000_;
goto v_resetjp_2994_;
}
else
{
lean_inc(v_a_2993_);
lean_dec(v___x_2973_);
v___x_2995_ = lean_box(0);
v_isShared_2996_ = v_isSharedCheck_3000_;
goto v_resetjp_2994_;
}
v_resetjp_2994_:
{
lean_object* v___x_2998_; 
if (v_isShared_2996_ == 0)
{
v___x_2998_ = v___x_2995_;
goto v_reusejp_2997_;
}
else
{
lean_object* v_reuseFailAlloc_2999_; 
v_reuseFailAlloc_2999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2999_, 0, v_a_2993_);
v___x_2998_ = v_reuseFailAlloc_2999_;
goto v_reusejp_2997_;
}
v_reusejp_2997_:
{
return v___x_2998_;
}
}
}
}
}
else
{
lean_dec(v_val_2955_);
v___y_2942_ = v___y_2894_;
v___y_2943_ = v___y_2895_;
v___y_2944_ = v___y_2896_;
v___y_2945_ = v___y_2897_;
goto v___jp_2941_;
}
}
}
}
else
{
lean_dec(v_interestingCtors_x3f_2893_);
v___y_2942_ = v___y_2894_;
v___y_2943_ = v___y_2895_;
v___y_2944_ = v___y_2896_;
v___y_2945_ = v___y_2897_;
goto v___jp_2941_;
}
v___jp_2905_:
{
lean_object* v_inductiveVal_2911_; lean_object* v_ctors_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; 
v_inductiveVal_2911_ = lean_ctor_get(v_ctx_2888_, 0);
lean_inc_ref(v_inductiveVal_2911_);
lean_dec_ref(v_ctx_2888_);
v_ctors_2912_ = lean_ctor_get(v_inductiveVal_2911_, 4);
lean_inc(v_ctors_2912_);
lean_dec_ref(v_inductiveVal_2911_);
v___x_2913_ = lean_array_mk(v_ctors_2912_);
lean_inc(v_majorFVarId_2890_);
v___x_2914_ = l_Lean_MVarId_induction(v_mvarId_2889_, v_majorFVarId_2890_, v___y_2910_, v_givenNames_2891_, v___y_2909_, v___y_2908_, v___y_2907_, v___y_2906_);
lean_dec(v___y_2906_);
lean_dec_ref(v___y_2907_);
lean_dec(v___y_2908_);
lean_dec_ref(v___y_2909_);
if (lean_obj_tag(v___x_2914_) == 0)
{
lean_object* v_a_2915_; lean_object* v___x_2917_; uint8_t v_isShared_2918_; uint8_t v_isSharedCheck_2923_; 
v_a_2915_ = lean_ctor_get(v___x_2914_, 0);
v_isSharedCheck_2923_ = !lean_is_exclusive(v___x_2914_);
if (v_isSharedCheck_2923_ == 0)
{
v___x_2917_ = v___x_2914_;
v_isShared_2918_ = v_isSharedCheck_2923_;
goto v_resetjp_2916_;
}
else
{
lean_inc(v_a_2915_);
lean_dec(v___x_2914_);
v___x_2917_ = lean_box(0);
v_isShared_2918_ = v_isSharedCheck_2923_;
goto v_resetjp_2916_;
}
v_resetjp_2916_:
{
lean_object* v___x_2919_; lean_object* v___x_2921_; 
v___x_2919_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals(v_a_2915_, v___x_2913_, v_majorFVarId_2890_, v_fst_2903_, v_snd_2904_);
lean_dec(v_snd_2904_);
lean_dec_ref(v___x_2913_);
lean_dec(v_a_2915_);
if (v_isShared_2918_ == 0)
{
lean_ctor_set(v___x_2917_, 0, v___x_2919_);
v___x_2921_ = v___x_2917_;
goto v_reusejp_2920_;
}
else
{
lean_object* v_reuseFailAlloc_2922_; 
v_reuseFailAlloc_2922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2922_, 0, v___x_2919_);
v___x_2921_ = v_reuseFailAlloc_2922_;
goto v_reusejp_2920_;
}
v_reusejp_2920_:
{
return v___x_2921_;
}
}
}
else
{
lean_object* v_a_2924_; lean_object* v___x_2926_; uint8_t v_isShared_2927_; uint8_t v_isSharedCheck_2931_; 
lean_dec_ref(v___x_2913_);
lean_dec(v_snd_2904_);
lean_dec(v_fst_2903_);
lean_dec(v_majorFVarId_2890_);
v_a_2924_ = lean_ctor_get(v___x_2914_, 0);
v_isSharedCheck_2931_ = !lean_is_exclusive(v___x_2914_);
if (v_isSharedCheck_2931_ == 0)
{
v___x_2926_ = v___x_2914_;
v_isShared_2927_ = v_isSharedCheck_2931_;
goto v_resetjp_2925_;
}
else
{
lean_inc(v_a_2924_);
lean_dec(v___x_2914_);
v___x_2926_ = lean_box(0);
v_isShared_2927_ = v_isSharedCheck_2931_;
goto v_resetjp_2925_;
}
v_resetjp_2925_:
{
lean_object* v___x_2929_; 
if (v_isShared_2927_ == 0)
{
v___x_2929_ = v___x_2926_;
goto v_reusejp_2928_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v_a_2924_);
v___x_2929_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2928_;
}
v_reusejp_2928_:
{
return v___x_2929_;
}
}
}
}
v___jp_2932_:
{
lean_object* v_inductiveVal_2937_; lean_object* v_toConstantVal_2938_; lean_object* v_name_2939_; lean_object* v___x_2940_; 
v_inductiveVal_2937_ = lean_ctor_get(v_ctx_2888_, 0);
v_toConstantVal_2938_ = lean_ctor_get(v_inductiveVal_2937_, 0);
v_name_2939_ = lean_ctor_get(v_toConstantVal_2938_, 0);
lean_inc(v_name_2939_);
v___x_2940_ = l_Lean_mkCasesOnName(v_name_2939_);
v___y_2906_ = v___y_2933_;
v___y_2907_ = v___y_2934_;
v___y_2908_ = v___y_2935_;
v___y_2909_ = v___y_2936_;
v___y_2910_ = v___x_2940_;
goto v___jp_2905_;
}
v___jp_2941_:
{
lean_object* v___x_2946_; 
v___x_2946_ = lean_st_ref_get(v___y_2945_);
if (v_useNatCasesAuxOn_2892_ == 0)
{
lean_dec(v___x_2946_);
v___y_2933_ = v___y_2945_;
v___y_2934_ = v___y_2944_;
v___y_2935_ = v___y_2943_;
v___y_2936_ = v___y_2942_;
goto v___jp_2932_;
}
else
{
lean_object* v_inductiveVal_2947_; lean_object* v_toConstantVal_2948_; lean_object* v_env_2949_; lean_object* v_name_2950_; lean_object* v___x_2951_; uint8_t v___x_2952_; 
v_inductiveVal_2947_ = lean_ctor_get(v_ctx_2888_, 0);
v_toConstantVal_2948_ = lean_ctor_get(v_inductiveVal_2947_, 0);
v_env_2949_ = lean_ctor_get(v___x_2946_, 0);
lean_inc_ref(v_env_2949_);
lean_dec(v___x_2946_);
v_name_2950_ = lean_ctor_get(v_toConstantVal_2948_, 0);
v___x_2951_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__1));
v___x_2952_ = lean_name_eq(v_name_2950_, v___x_2951_);
if (v___x_2952_ == 0)
{
lean_dec_ref(v_env_2949_);
v___y_2933_ = v___y_2945_;
v___y_2934_ = v___y_2944_;
v___y_2935_ = v___y_2943_;
v___y_2936_ = v___y_2942_;
goto v___jp_2932_;
}
else
{
lean_object* v___x_2953_; uint8_t v___x_2954_; 
v___x_2953_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__3));
v___x_2954_ = l_Lean_Environment_contains(v_env_2949_, v___x_2953_, v___x_2952_);
if (v___x_2954_ == 0)
{
v___y_2933_ = v___y_2945_;
v___y_2934_ = v___y_2944_;
v___y_2935_ = v___y_2943_;
v___y_2936_ = v___y_2942_;
goto v___jp_2932_;
}
else
{
v___y_2906_ = v___y_2945_;
v___y_2907_ = v___y_2944_;
v___y_2908_ = v___y_2943_;
v___y_2909_ = v___y_2942_;
v___y_2910_ = v___x_2953_;
goto v___jp_2905_;
}
}
}
}
}
else
{
lean_object* v_a_3004_; lean_object* v___x_3006_; uint8_t v_isShared_3007_; uint8_t v_isSharedCheck_3011_; 
lean_dec(v___y_2897_);
lean_dec_ref(v___y_2896_);
lean_dec(v___y_2895_);
lean_dec_ref(v___y_2894_);
lean_dec(v_interestingCtors_x3f_2893_);
lean_dec_ref(v_givenNames_2891_);
lean_dec(v_majorFVarId_2890_);
lean_dec(v_mvarId_2889_);
lean_dec_ref(v_ctx_2888_);
v_a_3004_ = lean_ctor_get(v___x_2901_, 0);
v_isSharedCheck_3011_ = !lean_is_exclusive(v___x_2901_);
if (v_isSharedCheck_3011_ == 0)
{
v___x_3006_ = v___x_2901_;
v_isShared_3007_ = v_isSharedCheck_3011_;
goto v_resetjp_3005_;
}
else
{
lean_inc(v_a_3004_);
lean_dec(v___x_2901_);
v___x_3006_ = lean_box(0);
v_isShared_3007_ = v_isSharedCheck_3011_;
goto v_resetjp_3005_;
}
v_resetjp_3005_:
{
lean_object* v___x_3009_; 
if (v_isShared_3007_ == 0)
{
v___x_3009_ = v___x_3006_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3010_; 
v_reuseFailAlloc_3010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3010_, 0, v_a_3004_);
v___x_3009_ = v_reuseFailAlloc_3010_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
return v___x_3009_;
}
}
}
}
else
{
lean_object* v_a_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3019_; 
lean_dec(v___y_2897_);
lean_dec_ref(v___y_2896_);
lean_dec(v___y_2895_);
lean_dec_ref(v___y_2894_);
lean_dec(v_interestingCtors_x3f_2893_);
lean_dec_ref(v_givenNames_2891_);
lean_dec(v_majorFVarId_2890_);
lean_dec(v_mvarId_2889_);
lean_dec_ref(v_ctx_2888_);
v_a_3012_ = lean_ctor_get(v___x_2899_, 0);
v_isSharedCheck_3019_ = !lean_is_exclusive(v___x_2899_);
if (v_isSharedCheck_3019_ == 0)
{
v___x_3014_ = v___x_2899_;
v_isShared_3015_ = v_isSharedCheck_3019_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_a_3012_);
lean_dec(v___x_2899_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3019_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v___x_3017_; 
if (v_isShared_3015_ == 0)
{
v___x_3017_ = v___x_3014_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3018_; 
v_reuseFailAlloc_3018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3018_, 0, v_a_3012_);
v___x_3017_ = v_reuseFailAlloc_3018_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
return v___x_3017_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___boxed(lean_object* v___x_3020_, lean_object* v_ctx_3021_, lean_object* v_mvarId_3022_, lean_object* v_majorFVarId_3023_, lean_object* v_givenNames_3024_, lean_object* v_useNatCasesAuxOn_3025_, lean_object* v_interestingCtors_x3f_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_){
_start:
{
uint8_t v_useNatCasesAuxOn_boxed_3032_; lean_object* v_res_3033_; 
v_useNatCasesAuxOn_boxed_3032_ = lean_unbox(v_useNatCasesAuxOn_3025_);
v_res_3033_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0(v___x_3020_, v_ctx_3021_, v_mvarId_3022_, v_majorFVarId_3023_, v_givenNames_3024_, v_useNatCasesAuxOn_boxed_3032_, v_interestingCtors_x3f_3026_, v___y_3027_, v___y_3028_, v___y_3029_, v___y_3030_);
return v_res_3033_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn(lean_object* v_mvarId_3034_, lean_object* v_majorFVarId_3035_, lean_object* v_givenNames_3036_, lean_object* v_ctx_3037_, uint8_t v_useNatCasesAuxOn_3038_, lean_object* v_interestingCtors_x3f_3039_, lean_object* v_a_3040_, lean_object* v_a_3041_, lean_object* v_a_3042_, lean_object* v_a_3043_){
_start:
{
lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___f_3047_; lean_object* v___x_3048_; 
lean_inc(v_majorFVarId_3035_);
v___x_3045_ = l_Lean_mkFVar(v_majorFVarId_3035_);
v___x_3046_ = lean_box(v_useNatCasesAuxOn_3038_);
lean_inc(v_mvarId_3034_);
v___f_3047_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___boxed), 12, 7);
lean_closure_set(v___f_3047_, 0, v___x_3045_);
lean_closure_set(v___f_3047_, 1, v_ctx_3037_);
lean_closure_set(v___f_3047_, 2, v_mvarId_3034_);
lean_closure_set(v___f_3047_, 3, v_majorFVarId_3035_);
lean_closure_set(v___f_3047_, 4, v_givenNames_3036_);
lean_closure_set(v___f_3047_, 5, v___x_3046_);
lean_closure_set(v___f_3047_, 6, v_interestingCtors_x3f_3039_);
v___x_3048_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_3034_, v___f_3047_, v_a_3040_, v_a_3041_, v_a_3042_, v_a_3043_);
return v___x_3048_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___boxed(lean_object* v_mvarId_3049_, lean_object* v_majorFVarId_3050_, lean_object* v_givenNames_3051_, lean_object* v_ctx_3052_, lean_object* v_useNatCasesAuxOn_3053_, lean_object* v_interestingCtors_x3f_3054_, lean_object* v_a_3055_, lean_object* v_a_3056_, lean_object* v_a_3057_, lean_object* v_a_3058_, lean_object* v_a_3059_){
_start:
{
uint8_t v_useNatCasesAuxOn_boxed_3060_; lean_object* v_res_3061_; 
v_useNatCasesAuxOn_boxed_3060_ = lean_unbox(v_useNatCasesAuxOn_3053_);
v_res_3061_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn(v_mvarId_3049_, v_majorFVarId_3050_, v_givenNames_3051_, v_ctx_3052_, v_useNatCasesAuxOn_boxed_3060_, v_interestingCtors_x3f_3054_, v_a_3055_, v_a_3056_, v_a_3057_, v_a_3058_);
lean_dec(v_a_3058_);
lean_dec_ref(v_a_3057_);
lean_dec(v_a_3056_);
lean_dec_ref(v_a_3055_);
return v_res_3061_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3062_; double v___x_3063_; 
v___x_3062_ = lean_unsigned_to_nat(0u);
v___x_3063_ = lean_float_of_nat(v___x_3062_);
return v___x_3063_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0(lean_object* v_cls_3067_, lean_object* v_msg_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_){
_start:
{
lean_object* v_ref_3074_; lean_object* v___x_3075_; lean_object* v_a_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3120_; 
v_ref_3074_ = lean_ctor_get(v___y_3071_, 2);
v___x_3075_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0_spec__0(v_msg_3068_, v___y_3069_, v___y_3070_, v___y_3071_, v___y_3072_);
v_a_3076_ = lean_ctor_get(v___x_3075_, 0);
v_isSharedCheck_3120_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3120_ == 0)
{
v___x_3078_ = v___x_3075_;
v_isShared_3079_ = v_isSharedCheck_3120_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_a_3076_);
lean_dec(v___x_3075_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3120_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
lean_object* v___x_3080_; lean_object* v_traceState_3081_; lean_object* v_env_3082_; lean_object* v_nextMacroScope_3083_; lean_object* v_ngen_3084_; lean_object* v_auxDeclNGen_3085_; lean_object* v_cache_3086_; lean_object* v_messages_3087_; lean_object* v_infoState_3088_; lean_object* v_snapshotTasks_3089_; lean_object* v___x_3091_; uint8_t v_isShared_3092_; uint8_t v_isSharedCheck_3119_; 
v___x_3080_ = lean_st_ref_take(v___y_3072_);
v_traceState_3081_ = lean_ctor_get(v___x_3080_, 4);
v_env_3082_ = lean_ctor_get(v___x_3080_, 0);
v_nextMacroScope_3083_ = lean_ctor_get(v___x_3080_, 1);
v_ngen_3084_ = lean_ctor_get(v___x_3080_, 2);
v_auxDeclNGen_3085_ = lean_ctor_get(v___x_3080_, 3);
v_cache_3086_ = lean_ctor_get(v___x_3080_, 5);
v_messages_3087_ = lean_ctor_get(v___x_3080_, 6);
v_infoState_3088_ = lean_ctor_get(v___x_3080_, 7);
v_snapshotTasks_3089_ = lean_ctor_get(v___x_3080_, 8);
v_isSharedCheck_3119_ = !lean_is_exclusive(v___x_3080_);
if (v_isSharedCheck_3119_ == 0)
{
v___x_3091_ = v___x_3080_;
v_isShared_3092_ = v_isSharedCheck_3119_;
goto v_resetjp_3090_;
}
else
{
lean_inc(v_snapshotTasks_3089_);
lean_inc(v_infoState_3088_);
lean_inc(v_messages_3087_);
lean_inc(v_cache_3086_);
lean_inc(v_traceState_3081_);
lean_inc(v_auxDeclNGen_3085_);
lean_inc(v_ngen_3084_);
lean_inc(v_nextMacroScope_3083_);
lean_inc(v_env_3082_);
lean_dec(v___x_3080_);
v___x_3091_ = lean_box(0);
v_isShared_3092_ = v_isSharedCheck_3119_;
goto v_resetjp_3090_;
}
v_resetjp_3090_:
{
uint64_t v_tid_3093_; lean_object* v_traces_3094_; lean_object* v___x_3096_; uint8_t v_isShared_3097_; uint8_t v_isSharedCheck_3118_; 
v_tid_3093_ = lean_ctor_get_uint64(v_traceState_3081_, sizeof(void*)*1);
v_traces_3094_ = lean_ctor_get(v_traceState_3081_, 0);
v_isSharedCheck_3118_ = !lean_is_exclusive(v_traceState_3081_);
if (v_isSharedCheck_3118_ == 0)
{
v___x_3096_ = v_traceState_3081_;
v_isShared_3097_ = v_isSharedCheck_3118_;
goto v_resetjp_3095_;
}
else
{
lean_inc(v_traces_3094_);
lean_dec(v_traceState_3081_);
v___x_3096_ = lean_box(0);
v_isShared_3097_ = v_isSharedCheck_3118_;
goto v_resetjp_3095_;
}
v_resetjp_3095_:
{
lean_object* v___x_3098_; lean_object* v___x_3099_; double v___x_3100_; uint8_t v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3109_; 
v___x_3098_ = lean_box(0);
v___x_3099_ = lean_box(0);
v___x_3100_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__0);
v___x_3101_ = 0;
v___x_3102_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__1));
v___x_3103_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3103_, 0, v_cls_3067_);
lean_ctor_set(v___x_3103_, 1, v___x_3099_);
lean_ctor_set(v___x_3103_, 2, v___x_3102_);
lean_ctor_set_float(v___x_3103_, sizeof(void*)*3, v___x_3100_);
lean_ctor_set_float(v___x_3103_, sizeof(void*)*3 + 8, v___x_3100_);
lean_ctor_set_uint8(v___x_3103_, sizeof(void*)*3 + 16, v___x_3101_);
v___x_3104_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__2));
v___x_3105_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3105_, 0, v___x_3103_);
lean_ctor_set(v___x_3105_, 1, v_a_3076_);
lean_ctor_set(v___x_3105_, 2, v___x_3104_);
lean_inc(v_ref_3074_);
v___x_3106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3106_, 0, v_ref_3074_);
lean_ctor_set(v___x_3106_, 1, v___x_3105_);
v___x_3107_ = l_Lean_PersistentArray_push___redArg(v_traces_3094_, v___x_3106_);
if (v_isShared_3097_ == 0)
{
lean_ctor_set(v___x_3096_, 0, v___x_3107_);
v___x_3109_ = v___x_3096_;
goto v_reusejp_3108_;
}
else
{
lean_object* v_reuseFailAlloc_3117_; 
v_reuseFailAlloc_3117_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3117_, 0, v___x_3107_);
lean_ctor_set_uint64(v_reuseFailAlloc_3117_, sizeof(void*)*1, v_tid_3093_);
v___x_3109_ = v_reuseFailAlloc_3117_;
goto v_reusejp_3108_;
}
v_reusejp_3108_:
{
lean_object* v___x_3111_; 
if (v_isShared_3092_ == 0)
{
lean_ctor_set(v___x_3091_, 4, v___x_3109_);
v___x_3111_ = v___x_3091_;
goto v_reusejp_3110_;
}
else
{
lean_object* v_reuseFailAlloc_3116_; 
v_reuseFailAlloc_3116_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3116_, 0, v_env_3082_);
lean_ctor_set(v_reuseFailAlloc_3116_, 1, v_nextMacroScope_3083_);
lean_ctor_set(v_reuseFailAlloc_3116_, 2, v_ngen_3084_);
lean_ctor_set(v_reuseFailAlloc_3116_, 3, v_auxDeclNGen_3085_);
lean_ctor_set(v_reuseFailAlloc_3116_, 4, v___x_3109_);
lean_ctor_set(v_reuseFailAlloc_3116_, 5, v_cache_3086_);
lean_ctor_set(v_reuseFailAlloc_3116_, 6, v_messages_3087_);
lean_ctor_set(v_reuseFailAlloc_3116_, 7, v_infoState_3088_);
lean_ctor_set(v_reuseFailAlloc_3116_, 8, v_snapshotTasks_3089_);
v___x_3111_ = v_reuseFailAlloc_3116_;
goto v_reusejp_3110_;
}
v_reusejp_3110_:
{
lean_object* v___x_3112_; lean_object* v___x_3114_; 
v___x_3112_ = lean_st_ref_put(v___y_3072_, v___x_3111_);
if (v_isShared_3079_ == 0)
{
lean_ctor_set(v___x_3078_, 0, v___x_3098_);
v___x_3114_ = v___x_3078_;
goto v_reusejp_3113_;
}
else
{
lean_object* v_reuseFailAlloc_3115_; 
v_reuseFailAlloc_3115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3115_, 0, v___x_3098_);
v___x_3114_ = v_reuseFailAlloc_3115_;
goto v_reusejp_3113_;
}
v_reusejp_3113_:
{
return v___x_3114_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___boxed(lean_object* v_cls_3121_, lean_object* v_msg_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_){
_start:
{
lean_object* v_res_3128_; 
v_res_3128_ = l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0(v_cls_3121_, v_msg_3122_, v___y_3123_, v___y_3124_, v___y_3125_, v___y_3126_);
lean_dec(v___y_3126_);
lean_dec_ref(v___y_3125_);
lean_dec(v___y_3124_);
lean_dec_ref(v___y_3123_);
return v_res_3128_;
}
}
static lean_object* _init_l_Lean_Meta_Cases_cases___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3132_; lean_object* v___x_3133_; 
v___x_3132_ = ((lean_object*)(l_Lean_Meta_Cases_cases___lam__0___closed__1));
v___x_3133_ = l_Lean_MessageData_ofFormat(v___x_3132_);
return v___x_3133_;
}
}
static lean_object* _init_l_Lean_Meta_Cases_cases___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3134_; lean_object* v___x_3135_; 
v___x_3134_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__2, &l_Lean_Meta_Cases_cases___lam__0___closed__2_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__2);
v___x_3135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3135_, 0, v___x_3134_);
return v___x_3135_;
}
}
static lean_object* _init_l_Lean_Meta_Cases_cases___lam__0___closed__9(void){
_start:
{
lean_object* v___x_3142_; lean_object* v___x_3143_; 
v___x_3142_ = ((lean_object*)(l_Lean_Meta_Cases_cases___lam__0___closed__8));
v___x_3143_ = l_Lean_stringToMessageData(v___x_3142_);
return v___x_3143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases___lam__0(lean_object* v_mvarId_3144_, lean_object* v___x_3145_, lean_object* v_majorFVarId_3146_, lean_object* v_givenNames_3147_, lean_object* v_interestingCtors_x3f_3148_, lean_object* v___x_3149_, uint8_t v_useNatCasesAuxOn_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_){
_start:
{
lean_object* v___x_3156_; 
lean_inc(v___x_3145_);
lean_inc(v_mvarId_3144_);
v___x_3156_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_3144_, v___x_3145_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_);
if (lean_obj_tag(v___x_3156_) == 0)
{
lean_object* v___x_3157_; 
lean_dec_ref_known(v___x_3156_, 1);
lean_inc(v_majorFVarId_3146_);
v___x_3157_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f(v_majorFVarId_3146_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_);
if (lean_obj_tag(v___x_3157_) == 0)
{
lean_object* v_a_3158_; 
v_a_3158_ = lean_ctor_get(v___x_3157_, 0);
lean_inc(v_a_3158_);
lean_dec_ref_known(v___x_3157_, 1);
if (lean_obj_tag(v_a_3158_) == 0)
{
lean_object* v___x_3159_; lean_object* v___x_3160_; 
lean_dec_ref(v___x_3149_);
lean_dec(v_interestingCtors_x3f_3148_);
lean_dec_ref(v_givenNames_3147_);
lean_dec(v_majorFVarId_3146_);
v___x_3159_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__3, &l_Lean_Meta_Cases_cases___lam__0___closed__3_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__3);
v___x_3160_ = l_Lean_Meta_throwTacticEx___redArg(v___x_3145_, v_mvarId_3144_, v___x_3159_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_);
return v___x_3160_;
}
else
{
lean_object* v_val_3161_; lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3226_; 
lean_dec(v___x_3145_);
v_val_3161_ = lean_ctor_get(v_a_3158_, 0);
v_isSharedCheck_3226_ = !lean_is_exclusive(v_a_3158_);
if (v_isSharedCheck_3226_ == 0)
{
v___x_3163_ = v_a_3158_;
v_isShared_3164_ = v_isSharedCheck_3226_;
goto v_resetjp_3162_;
}
else
{
lean_inc(v_val_3161_);
lean_dec(v_a_3158_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3226_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
lean_object* v___x_3165_; 
lean_inc(v_val_3161_);
v___x_3165_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices(v_val_3161_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_);
if (lean_obj_tag(v___x_3165_) == 0)
{
lean_object* v_a_3166_; uint8_t v___x_3167_; 
v_a_3166_ = lean_ctor_get(v___x_3165_, 0);
lean_inc(v_a_3166_);
lean_dec_ref_known(v___x_3165_, 1);
v___x_3167_ = lean_unbox(v_a_3166_);
if (v___x_3167_ == 0)
{
lean_object* v___x_3168_; 
v___x_3168_ = l_Lean_Meta_generalizeIndices(v_mvarId_3144_, v_majorFVarId_3146_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_);
if (lean_obj_tag(v___x_3168_) == 0)
{
lean_object* v_a_3169_; lean_object* v___y_3171_; lean_object* v___y_3172_; lean_object* v___y_3173_; lean_object* v___y_3174_; lean_object* v_toCold_3184_; lean_object* v_options_3185_; uint8_t v_hasTrace_3186_; 
v_a_3169_ = lean_ctor_get(v___x_3168_, 0);
lean_inc(v_a_3169_);
lean_dec_ref_known(v___x_3168_, 1);
v_toCold_3184_ = lean_ctor_get(v___y_3153_, 0);
v_options_3185_ = lean_ctor_get(v_toCold_3184_, 2);
v_hasTrace_3186_ = lean_ctor_get_uint8(v_options_3185_, sizeof(void*)*1);
if (v_hasTrace_3186_ == 0)
{
lean_del_object(v___x_3163_);
lean_dec_ref(v___x_3149_);
v___y_3171_ = v___y_3151_;
v___y_3172_ = v___y_3152_;
v___y_3173_ = v___y_3153_;
v___y_3174_ = v___y_3154_;
goto v___jp_3170_;
}
else
{
lean_object* v_inheritedTraceOptions_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; uint8_t v___x_3193_; 
v_inheritedTraceOptions_3187_ = lean_ctor_get(v_toCold_3184_, 11);
v___x_3188_ = ((lean_object*)(l_Lean_Meta_Cases_cases___lam__0___closed__4));
v___x_3189_ = ((lean_object*)(l_Lean_Meta_Cases_cases___lam__0___closed__5));
v___x_3190_ = l_Lean_Name_mkStr3(v___x_3188_, v___x_3189_, v___x_3149_);
v___x_3191_ = ((lean_object*)(l_Lean_Meta_Cases_cases___lam__0___closed__7));
lean_inc(v___x_3190_);
v___x_3192_ = l_Lean_Name_append(v___x_3191_, v___x_3190_);
v___x_3193_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3187_, v_options_3185_, v___x_3192_);
lean_dec(v___x_3192_);
if (v___x_3193_ == 0)
{
lean_dec(v___x_3190_);
lean_del_object(v___x_3163_);
v___y_3171_ = v___y_3151_;
v___y_3172_ = v___y_3152_;
v___y_3173_ = v___y_3153_;
v___y_3174_ = v___y_3154_;
goto v___jp_3170_;
}
else
{
lean_object* v_mvarId_3194_; lean_object* v___x_3195_; lean_object* v___x_3197_; 
v_mvarId_3194_ = lean_ctor_get(v_a_3169_, 0);
v___x_3195_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__9, &l_Lean_Meta_Cases_cases___lam__0___closed__9_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__9);
lean_inc(v_mvarId_3194_);
if (v_isShared_3164_ == 0)
{
lean_ctor_set(v___x_3163_, 0, v_mvarId_3194_);
v___x_3197_ = v___x_3163_;
goto v_reusejp_3196_;
}
else
{
lean_object* v_reuseFailAlloc_3208_; 
v_reuseFailAlloc_3208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3208_, 0, v_mvarId_3194_);
v___x_3197_ = v_reuseFailAlloc_3208_;
goto v_reusejp_3196_;
}
v_reusejp_3196_:
{
lean_object* v___x_3198_; lean_object* v___x_3199_; 
v___x_3198_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3198_, 0, v___x_3195_);
lean_ctor_set(v___x_3198_, 1, v___x_3197_);
v___x_3199_ = l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0(v___x_3190_, v___x_3198_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_);
if (lean_obj_tag(v___x_3199_) == 0)
{
lean_dec_ref_known(v___x_3199_, 1);
v___y_3171_ = v___y_3151_;
v___y_3172_ = v___y_3152_;
v___y_3173_ = v___y_3153_;
v___y_3174_ = v___y_3154_;
goto v___jp_3170_;
}
else
{
lean_object* v_a_3200_; lean_object* v___x_3202_; uint8_t v_isShared_3203_; uint8_t v_isSharedCheck_3207_; 
lean_dec(v_a_3169_);
lean_dec(v_a_3166_);
lean_dec(v_val_3161_);
lean_dec(v_interestingCtors_x3f_3148_);
lean_dec_ref(v_givenNames_3147_);
v_a_3200_ = lean_ctor_get(v___x_3199_, 0);
v_isSharedCheck_3207_ = !lean_is_exclusive(v___x_3199_);
if (v_isSharedCheck_3207_ == 0)
{
v___x_3202_ = v___x_3199_;
v_isShared_3203_ = v_isSharedCheck_3207_;
goto v_resetjp_3201_;
}
else
{
lean_inc(v_a_3200_);
lean_dec(v___x_3199_);
v___x_3202_ = lean_box(0);
v_isShared_3203_ = v_isSharedCheck_3207_;
goto v_resetjp_3201_;
}
v_resetjp_3201_:
{
lean_object* v___x_3205_; 
if (v_isShared_3203_ == 0)
{
v___x_3205_ = v___x_3202_;
goto v_reusejp_3204_;
}
else
{
lean_object* v_reuseFailAlloc_3206_; 
v_reuseFailAlloc_3206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3206_, 0, v_a_3200_);
v___x_3205_ = v_reuseFailAlloc_3206_;
goto v_reusejp_3204_;
}
v_reusejp_3204_:
{
return v___x_3205_;
}
}
}
}
}
}
v___jp_3170_:
{
lean_object* v_mvarId_3175_; lean_object* v_fvarId_3176_; lean_object* v_numEqs_3177_; uint8_t v___x_3178_; lean_object* v___x_3179_; 
v_mvarId_3175_ = lean_ctor_get(v_a_3169_, 0);
v_fvarId_3176_ = lean_ctor_get(v_a_3169_, 2);
v_numEqs_3177_ = lean_ctor_get(v_a_3169_, 3);
lean_inc(v_numEqs_3177_);
v___x_3178_ = lean_unbox(v_a_3166_);
lean_dec(v_a_3166_);
lean_inc(v_fvarId_3176_);
lean_inc(v_mvarId_3175_);
v___x_3179_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn(v_mvarId_3175_, v_fvarId_3176_, v_givenNames_3147_, v_val_3161_, v___x_3178_, v_interestingCtors_x3f_3148_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_);
if (lean_obj_tag(v___x_3179_) == 0)
{
lean_object* v_a_3180_; lean_object* v___x_3181_; 
v_a_3180_ = lean_ctor_get(v___x_3179_, 0);
lean_inc(v_a_3180_);
lean_dec_ref_known(v___x_3179_, 1);
v___x_3181_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices(v_a_3169_, v_a_3180_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_);
lean_dec(v_a_3180_);
if (lean_obj_tag(v___x_3181_) == 0)
{
lean_object* v_a_3182_; lean_object* v___x_3183_; 
v_a_3182_ = lean_ctor_get(v___x_3181_, 0);
lean_inc(v_a_3182_);
lean_dec_ref_known(v___x_3181_, 1);
v___x_3183_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs(v_numEqs_3177_, v_a_3182_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_);
lean_dec(v_a_3182_);
return v___x_3183_;
}
else
{
lean_dec(v_numEqs_3177_);
return v___x_3181_;
}
}
else
{
lean_dec(v_numEqs_3177_);
lean_dec(v_a_3169_);
return v___x_3179_;
}
}
}
else
{
lean_object* v_a_3209_; lean_object* v___x_3211_; uint8_t v_isShared_3212_; uint8_t v_isSharedCheck_3216_; 
lean_dec(v_a_3166_);
lean_del_object(v___x_3163_);
lean_dec(v_val_3161_);
lean_dec_ref(v___x_3149_);
lean_dec(v_interestingCtors_x3f_3148_);
lean_dec_ref(v_givenNames_3147_);
v_a_3209_ = lean_ctor_get(v___x_3168_, 0);
v_isSharedCheck_3216_ = !lean_is_exclusive(v___x_3168_);
if (v_isSharedCheck_3216_ == 0)
{
v___x_3211_ = v___x_3168_;
v_isShared_3212_ = v_isSharedCheck_3216_;
goto v_resetjp_3210_;
}
else
{
lean_inc(v_a_3209_);
lean_dec(v___x_3168_);
v___x_3211_ = lean_box(0);
v_isShared_3212_ = v_isSharedCheck_3216_;
goto v_resetjp_3210_;
}
v_resetjp_3210_:
{
lean_object* v___x_3214_; 
if (v_isShared_3212_ == 0)
{
v___x_3214_ = v___x_3211_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v_a_3209_);
v___x_3214_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
return v___x_3214_;
}
}
}
}
else
{
lean_object* v___x_3217_; 
lean_dec(v_a_3166_);
lean_del_object(v___x_3163_);
lean_dec_ref(v___x_3149_);
v___x_3217_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn(v_mvarId_3144_, v_majorFVarId_3146_, v_givenNames_3147_, v_val_3161_, v_useNatCasesAuxOn_3150_, v_interestingCtors_x3f_3148_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_);
return v___x_3217_;
}
}
else
{
lean_object* v_a_3218_; lean_object* v___x_3220_; uint8_t v_isShared_3221_; uint8_t v_isSharedCheck_3225_; 
lean_del_object(v___x_3163_);
lean_dec(v_val_3161_);
lean_dec_ref(v___x_3149_);
lean_dec(v_interestingCtors_x3f_3148_);
lean_dec_ref(v_givenNames_3147_);
lean_dec(v_majorFVarId_3146_);
lean_dec(v_mvarId_3144_);
v_a_3218_ = lean_ctor_get(v___x_3165_, 0);
v_isSharedCheck_3225_ = !lean_is_exclusive(v___x_3165_);
if (v_isSharedCheck_3225_ == 0)
{
v___x_3220_ = v___x_3165_;
v_isShared_3221_ = v_isSharedCheck_3225_;
goto v_resetjp_3219_;
}
else
{
lean_inc(v_a_3218_);
lean_dec(v___x_3165_);
v___x_3220_ = lean_box(0);
v_isShared_3221_ = v_isSharedCheck_3225_;
goto v_resetjp_3219_;
}
v_resetjp_3219_:
{
lean_object* v___x_3223_; 
if (v_isShared_3221_ == 0)
{
v___x_3223_ = v___x_3220_;
goto v_reusejp_3222_;
}
else
{
lean_object* v_reuseFailAlloc_3224_; 
v_reuseFailAlloc_3224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3224_, 0, v_a_3218_);
v___x_3223_ = v_reuseFailAlloc_3224_;
goto v_reusejp_3222_;
}
v_reusejp_3222_:
{
return v___x_3223_;
}
}
}
}
}
}
else
{
lean_object* v_a_3227_; lean_object* v___x_3229_; uint8_t v_isShared_3230_; uint8_t v_isSharedCheck_3234_; 
lean_dec_ref(v___x_3149_);
lean_dec(v_interestingCtors_x3f_3148_);
lean_dec_ref(v_givenNames_3147_);
lean_dec(v_majorFVarId_3146_);
lean_dec(v___x_3145_);
lean_dec(v_mvarId_3144_);
v_a_3227_ = lean_ctor_get(v___x_3157_, 0);
v_isSharedCheck_3234_ = !lean_is_exclusive(v___x_3157_);
if (v_isSharedCheck_3234_ == 0)
{
v___x_3229_ = v___x_3157_;
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
else
{
lean_inc(v_a_3227_);
lean_dec(v___x_3157_);
v___x_3229_ = lean_box(0);
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
v_resetjp_3228_:
{
lean_object* v___x_3232_; 
if (v_isShared_3230_ == 0)
{
v___x_3232_ = v___x_3229_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v_a_3227_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
return v___x_3232_;
}
}
}
}
else
{
lean_object* v_a_3235_; lean_object* v___x_3237_; uint8_t v_isShared_3238_; uint8_t v_isSharedCheck_3242_; 
lean_dec_ref(v___x_3149_);
lean_dec(v_interestingCtors_x3f_3148_);
lean_dec_ref(v_givenNames_3147_);
lean_dec(v_majorFVarId_3146_);
lean_dec(v___x_3145_);
lean_dec(v_mvarId_3144_);
v_a_3235_ = lean_ctor_get(v___x_3156_, 0);
v_isSharedCheck_3242_ = !lean_is_exclusive(v___x_3156_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3237_ = v___x_3156_;
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
else
{
lean_inc(v_a_3235_);
lean_dec(v___x_3156_);
v___x_3237_ = lean_box(0);
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
v_resetjp_3236_:
{
lean_object* v___x_3240_; 
if (v_isShared_3238_ == 0)
{
v___x_3240_ = v___x_3237_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v_a_3235_);
v___x_3240_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
return v___x_3240_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases___lam__0___boxed(lean_object* v_mvarId_3243_, lean_object* v___x_3244_, lean_object* v_majorFVarId_3245_, lean_object* v_givenNames_3246_, lean_object* v_interestingCtors_x3f_3247_, lean_object* v___x_3248_, lean_object* v_useNatCasesAuxOn_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_){
_start:
{
uint8_t v_useNatCasesAuxOn_boxed_3255_; lean_object* v_res_3256_; 
v_useNatCasesAuxOn_boxed_3255_ = lean_unbox(v_useNatCasesAuxOn_3249_);
v_res_3256_ = l_Lean_Meta_Cases_cases___lam__0(v_mvarId_3243_, v___x_3244_, v_majorFVarId_3245_, v_givenNames_3246_, v_interestingCtors_x3f_3247_, v___x_3248_, v_useNatCasesAuxOn_boxed_3255_, v___y_3250_, v___y_3251_, v___y_3252_, v___y_3253_);
lean_dec(v___y_3253_);
lean_dec_ref(v___y_3252_);
lean_dec(v___y_3251_);
lean_dec_ref(v___y_3250_);
return v_res_3256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases(lean_object* v_mvarId_3260_, lean_object* v_majorFVarId_3261_, lean_object* v_givenNames_3262_, uint8_t v_useNatCasesAuxOn_3263_, lean_object* v_interestingCtors_x3f_3264_, lean_object* v_a_3265_, lean_object* v_a_3266_, lean_object* v_a_3267_, lean_object* v_a_3268_){
_start:
{
lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___f_3273_; lean_object* v___x_3274_; 
v___x_3270_ = ((lean_object*)(l_Lean_Meta_Cases_cases___closed__0));
v___x_3271_ = ((lean_object*)(l_Lean_Meta_Cases_cases___closed__1));
v___x_3272_ = lean_box(v_useNatCasesAuxOn_3263_);
lean_inc(v_mvarId_3260_);
v___f_3273_ = lean_alloc_closure((void*)(l_Lean_Meta_Cases_cases___lam__0___boxed), 12, 7);
lean_closure_set(v___f_3273_, 0, v_mvarId_3260_);
lean_closure_set(v___f_3273_, 1, v___x_3271_);
lean_closure_set(v___f_3273_, 2, v_majorFVarId_3261_);
lean_closure_set(v___f_3273_, 3, v_givenNames_3262_);
lean_closure_set(v___f_3273_, 4, v_interestingCtors_x3f_3264_);
lean_closure_set(v___f_3273_, 5, v___x_3270_);
lean_closure_set(v___f_3273_, 6, v___x_3272_);
v___x_3274_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_3260_, v___f_3273_, v_a_3265_, v_a_3266_, v_a_3267_, v_a_3268_);
if (lean_obj_tag(v___x_3274_) == 0)
{
return v___x_3274_;
}
else
{
lean_object* v_a_3275_; uint8_t v___y_3277_; uint8_t v___x_3279_; 
v_a_3275_ = lean_ctor_get(v___x_3274_, 0);
lean_inc(v_a_3275_);
v___x_3279_ = l_Lean_Exception_isInterrupt(v_a_3275_);
if (v___x_3279_ == 0)
{
uint8_t v___x_3280_; 
lean_inc(v_a_3275_);
v___x_3280_ = l_Lean_Exception_isRuntime(v_a_3275_);
v___y_3277_ = v___x_3280_;
goto v___jp_3276_;
}
else
{
v___y_3277_ = v___x_3279_;
goto v___jp_3276_;
}
v___jp_3276_:
{
if (v___y_3277_ == 0)
{
lean_object* v___x_3278_; 
lean_dec_ref_known(v___x_3274_, 1);
v___x_3278_ = l_Lean_Meta_throwNestedTacticEx___redArg(v___x_3271_, v_a_3275_, v_a_3265_, v_a_3266_, v_a_3267_, v_a_3268_);
return v___x_3278_;
}
else
{
lean_dec(v_a_3275_);
return v___x_3274_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases___boxed(lean_object* v_mvarId_3281_, lean_object* v_majorFVarId_3282_, lean_object* v_givenNames_3283_, lean_object* v_useNatCasesAuxOn_3284_, lean_object* v_interestingCtors_x3f_3285_, lean_object* v_a_3286_, lean_object* v_a_3287_, lean_object* v_a_3288_, lean_object* v_a_3289_, lean_object* v_a_3290_){
_start:
{
uint8_t v_useNatCasesAuxOn_boxed_3291_; lean_object* v_res_3292_; 
v_useNatCasesAuxOn_boxed_3291_ = lean_unbox(v_useNatCasesAuxOn_3284_);
v_res_3292_ = l_Lean_Meta_Cases_cases(v_mvarId_3281_, v_majorFVarId_3282_, v_givenNames_3283_, v_useNatCasesAuxOn_boxed_3291_, v_interestingCtors_x3f_3285_, v_a_3286_, v_a_3287_, v_a_3288_, v_a_3289_);
lean_dec(v_a_3289_);
lean_dec_ref(v_a_3288_);
lean_dec(v_a_3287_);
lean_dec_ref(v_a_3286_);
return v_res_3292_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_cases(lean_object* v_mvarId_3293_, lean_object* v_majorFVarId_3294_, lean_object* v_givenNames_3295_, uint8_t v_useNatCasesAuxOn_3296_, lean_object* v_interestingCtors_x3f_3297_, lean_object* v_a_3298_, lean_object* v_a_3299_, lean_object* v_a_3300_, lean_object* v_a_3301_){
_start:
{
lean_object* v___x_3303_; 
v___x_3303_ = l_Lean_Meta_Cases_cases(v_mvarId_3293_, v_majorFVarId_3294_, v_givenNames_3295_, v_useNatCasesAuxOn_3296_, v_interestingCtors_x3f_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_);
return v___x_3303_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_cases___boxed(lean_object* v_mvarId_3304_, lean_object* v_majorFVarId_3305_, lean_object* v_givenNames_3306_, lean_object* v_useNatCasesAuxOn_3307_, lean_object* v_interestingCtors_x3f_3308_, lean_object* v_a_3309_, lean_object* v_a_3310_, lean_object* v_a_3311_, lean_object* v_a_3312_, lean_object* v_a_3313_){
_start:
{
uint8_t v_useNatCasesAuxOn_boxed_3314_; lean_object* v_res_3315_; 
v_useNatCasesAuxOn_boxed_3314_ = lean_unbox(v_useNatCasesAuxOn_3307_);
v_res_3315_ = l_Lean_MVarId_cases(v_mvarId_3304_, v_majorFVarId_3305_, v_givenNames_3306_, v_useNatCasesAuxOn_boxed_3314_, v_interestingCtors_x3f_3308_, v_a_3309_, v_a_3310_, v_a_3311_, v_a_3312_);
lean_dec(v_a_3312_);
lean_dec_ref(v_a_3311_);
lean_dec(v_a_3310_);
lean_dec_ref(v_a_3309_);
return v_res_3315_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(lean_object* v_x_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_, lean_object* v___y_3320_){
_start:
{
lean_object* v___x_3322_; 
v___x_3322_ = l_Lean_Meta_saveState___redArg(v___y_3318_, v___y_3320_);
if (lean_obj_tag(v___x_3322_) == 0)
{
lean_object* v_a_3323_; lean_object* v___x_3324_; 
v_a_3323_ = lean_ctor_get(v___x_3322_, 0);
lean_inc(v_a_3323_);
lean_dec_ref_known(v___x_3322_, 1);
lean_inc(v___y_3320_);
lean_inc_ref(v___y_3319_);
lean_inc(v___y_3318_);
lean_inc_ref(v___y_3317_);
v___x_3324_ = lean_apply_5(v_x_3316_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_, lean_box(0));
if (lean_obj_tag(v___x_3324_) == 0)
{
lean_object* v_a_3325_; lean_object* v___x_3327_; uint8_t v_isShared_3328_; uint8_t v_isSharedCheck_3333_; 
lean_dec(v_a_3323_);
v_a_3325_ = lean_ctor_get(v___x_3324_, 0);
v_isSharedCheck_3333_ = !lean_is_exclusive(v___x_3324_);
if (v_isSharedCheck_3333_ == 0)
{
v___x_3327_ = v___x_3324_;
v_isShared_3328_ = v_isSharedCheck_3333_;
goto v_resetjp_3326_;
}
else
{
lean_inc(v_a_3325_);
lean_dec(v___x_3324_);
v___x_3327_ = lean_box(0);
v_isShared_3328_ = v_isSharedCheck_3333_;
goto v_resetjp_3326_;
}
v_resetjp_3326_:
{
lean_object* v___x_3329_; lean_object* v___x_3331_; 
v___x_3329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3329_, 0, v_a_3325_);
if (v_isShared_3328_ == 0)
{
lean_ctor_set(v___x_3327_, 0, v___x_3329_);
v___x_3331_ = v___x_3327_;
goto v_reusejp_3330_;
}
else
{
lean_object* v_reuseFailAlloc_3332_; 
v_reuseFailAlloc_3332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3332_, 0, v___x_3329_);
v___x_3331_ = v_reuseFailAlloc_3332_;
goto v_reusejp_3330_;
}
v_reusejp_3330_:
{
return v___x_3331_;
}
}
}
else
{
lean_object* v_a_3334_; lean_object* v___x_3336_; uint8_t v_isShared_3337_; uint8_t v_isSharedCheck_3363_; 
v_a_3334_ = lean_ctor_get(v___x_3324_, 0);
v_isSharedCheck_3363_ = !lean_is_exclusive(v___x_3324_);
if (v_isSharedCheck_3363_ == 0)
{
v___x_3336_ = v___x_3324_;
v_isShared_3337_ = v_isSharedCheck_3363_;
goto v_resetjp_3335_;
}
else
{
lean_inc(v_a_3334_);
lean_dec(v___x_3324_);
v___x_3336_ = lean_box(0);
v_isShared_3337_ = v_isSharedCheck_3363_;
goto v_resetjp_3335_;
}
v_resetjp_3335_:
{
uint8_t v___y_3339_; uint8_t v___x_3361_; 
v___x_3361_ = l_Lean_Exception_isInterrupt(v_a_3334_);
if (v___x_3361_ == 0)
{
uint8_t v___x_3362_; 
lean_inc(v_a_3334_);
v___x_3362_ = l_Lean_Exception_isRuntime(v_a_3334_);
v___y_3339_ = v___x_3362_;
goto v___jp_3338_;
}
else
{
v___y_3339_ = v___x_3361_;
goto v___jp_3338_;
}
v___jp_3338_:
{
if (v___y_3339_ == 0)
{
lean_object* v___x_3340_; 
lean_del_object(v___x_3336_);
lean_dec(v_a_3334_);
v___x_3340_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3323_, v___y_3318_, v___y_3320_);
lean_dec(v_a_3323_);
if (lean_obj_tag(v___x_3340_) == 0)
{
lean_object* v___x_3342_; uint8_t v_isShared_3343_; uint8_t v_isSharedCheck_3348_; 
v_isSharedCheck_3348_ = !lean_is_exclusive(v___x_3340_);
if (v_isSharedCheck_3348_ == 0)
{
lean_object* v_unused_3349_; 
v_unused_3349_ = lean_ctor_get(v___x_3340_, 0);
lean_dec(v_unused_3349_);
v___x_3342_ = v___x_3340_;
v_isShared_3343_ = v_isSharedCheck_3348_;
goto v_resetjp_3341_;
}
else
{
lean_dec(v___x_3340_);
v___x_3342_ = lean_box(0);
v_isShared_3343_ = v_isSharedCheck_3348_;
goto v_resetjp_3341_;
}
v_resetjp_3341_:
{
lean_object* v___x_3344_; lean_object* v___x_3346_; 
v___x_3344_ = lean_box(0);
if (v_isShared_3343_ == 0)
{
lean_ctor_set(v___x_3342_, 0, v___x_3344_);
v___x_3346_ = v___x_3342_;
goto v_reusejp_3345_;
}
else
{
lean_object* v_reuseFailAlloc_3347_; 
v_reuseFailAlloc_3347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3347_, 0, v___x_3344_);
v___x_3346_ = v_reuseFailAlloc_3347_;
goto v_reusejp_3345_;
}
v_reusejp_3345_:
{
return v___x_3346_;
}
}
}
else
{
lean_object* v_a_3350_; lean_object* v___x_3352_; uint8_t v_isShared_3353_; uint8_t v_isSharedCheck_3357_; 
v_a_3350_ = lean_ctor_get(v___x_3340_, 0);
v_isSharedCheck_3357_ = !lean_is_exclusive(v___x_3340_);
if (v_isSharedCheck_3357_ == 0)
{
v___x_3352_ = v___x_3340_;
v_isShared_3353_ = v_isSharedCheck_3357_;
goto v_resetjp_3351_;
}
else
{
lean_inc(v_a_3350_);
lean_dec(v___x_3340_);
v___x_3352_ = lean_box(0);
v_isShared_3353_ = v_isSharedCheck_3357_;
goto v_resetjp_3351_;
}
v_resetjp_3351_:
{
lean_object* v___x_3355_; 
if (v_isShared_3353_ == 0)
{
v___x_3355_ = v___x_3352_;
goto v_reusejp_3354_;
}
else
{
lean_object* v_reuseFailAlloc_3356_; 
v_reuseFailAlloc_3356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3356_, 0, v_a_3350_);
v___x_3355_ = v_reuseFailAlloc_3356_;
goto v_reusejp_3354_;
}
v_reusejp_3354_:
{
return v___x_3355_;
}
}
}
}
else
{
lean_object* v___x_3359_; 
lean_dec(v_a_3323_);
if (v_isShared_3337_ == 0)
{
v___x_3359_ = v___x_3336_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v_a_3334_);
v___x_3359_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
return v___x_3359_;
}
}
}
}
}
}
else
{
lean_object* v_a_3364_; lean_object* v___x_3366_; uint8_t v_isShared_3367_; uint8_t v_isSharedCheck_3371_; 
lean_dec_ref(v_x_3316_);
v_a_3364_ = lean_ctor_get(v___x_3322_, 0);
v_isSharedCheck_3371_ = !lean_is_exclusive(v___x_3322_);
if (v_isSharedCheck_3371_ == 0)
{
v___x_3366_ = v___x_3322_;
v_isShared_3367_ = v_isSharedCheck_3371_;
goto v_resetjp_3365_;
}
else
{
lean_inc(v_a_3364_);
lean_dec(v___x_3322_);
v___x_3366_ = lean_box(0);
v_isShared_3367_ = v_isSharedCheck_3371_;
goto v_resetjp_3365_;
}
v_resetjp_3365_:
{
lean_object* v___x_3369_; 
if (v_isShared_3367_ == 0)
{
v___x_3369_ = v___x_3366_;
goto v_reusejp_3368_;
}
else
{
lean_object* v_reuseFailAlloc_3370_; 
v_reuseFailAlloc_3370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3370_, 0, v_a_3364_);
v___x_3369_ = v_reuseFailAlloc_3370_;
goto v_reusejp_3368_;
}
v_reusejp_3368_:
{
return v___x_3369_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg___boxed(lean_object* v_x_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_){
_start:
{
lean_object* v_res_3378_; 
v_res_3378_ = l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(v_x_3372_, v___y_3373_, v___y_3374_, v___y_3375_, v___y_3376_);
lean_dec(v___y_3376_);
lean_dec_ref(v___y_3375_);
lean_dec(v___y_3374_);
lean_dec_ref(v___y_3373_);
return v_res_3378_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1(lean_object* v_00_u03b1_3379_, lean_object* v_x_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_){
_start:
{
lean_object* v___x_3386_; 
v___x_3386_ = l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(v_x_3380_, v___y_3381_, v___y_3382_, v___y_3383_, v___y_3384_);
return v___x_3386_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___boxed(lean_object* v_00_u03b1_3387_, lean_object* v_x_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_){
_start:
{
lean_object* v_res_3394_; 
v_res_3394_ = l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1(v_00_u03b1_3387_, v_x_3388_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_);
lean_dec(v___y_3392_);
lean_dec_ref(v___y_3391_);
lean_dec(v___y_3390_);
lean_dec_ref(v___y_3389_);
return v_res_3394_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_MVarId_casesRec_spec__0(lean_object* v_a_3395_, lean_object* v_a_3396_){
_start:
{
if (lean_obj_tag(v_a_3395_) == 0)
{
lean_object* v___x_3397_; 
v___x_3397_ = l_List_reverse___redArg(v_a_3396_);
return v___x_3397_;
}
else
{
lean_object* v_head_3398_; lean_object* v_toInductionSubgoal_3399_; lean_object* v_tail_3400_; lean_object* v___x_3402_; uint8_t v_isShared_3403_; uint8_t v_isSharedCheck_3409_; 
v_head_3398_ = lean_ctor_get(v_a_3395_, 0);
v_toInductionSubgoal_3399_ = lean_ctor_get(v_head_3398_, 0);
lean_inc_ref(v_toInductionSubgoal_3399_);
v_tail_3400_ = lean_ctor_get(v_a_3395_, 1);
v_isSharedCheck_3409_ = !lean_is_exclusive(v_a_3395_);
if (v_isSharedCheck_3409_ == 0)
{
lean_object* v_unused_3410_; 
v_unused_3410_ = lean_ctor_get(v_a_3395_, 0);
lean_dec(v_unused_3410_);
v___x_3402_ = v_a_3395_;
v_isShared_3403_ = v_isSharedCheck_3409_;
goto v_resetjp_3401_;
}
else
{
lean_inc(v_tail_3400_);
lean_dec(v_a_3395_);
v___x_3402_ = lean_box(0);
v_isShared_3403_ = v_isSharedCheck_3409_;
goto v_resetjp_3401_;
}
v_resetjp_3401_:
{
lean_object* v_mvarId_3404_; lean_object* v___x_3406_; 
v_mvarId_3404_ = lean_ctor_get(v_toInductionSubgoal_3399_, 0);
lean_inc(v_mvarId_3404_);
lean_dec_ref(v_toInductionSubgoal_3399_);
if (v_isShared_3403_ == 0)
{
lean_ctor_set(v___x_3402_, 1, v_a_3396_);
lean_ctor_set(v___x_3402_, 0, v_mvarId_3404_);
v___x_3406_ = v___x_3402_;
goto v_reusejp_3405_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v_mvarId_3404_);
lean_ctor_set(v_reuseFailAlloc_3408_, 1, v_a_3396_);
v___x_3406_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3405_;
}
v_reusejp_3405_:
{
v_a_3395_ = v_tail_3400_;
v_a_3396_ = v___x_3406_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0(lean_object* v_mvarId_3411_, lean_object* v___x_3412_, lean_object* v___x_3413_, uint8_t v___x_3414_, lean_object* v___x_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_){
_start:
{
lean_object* v___x_3421_; 
v___x_3421_ = l_Lean_Meta_Cases_cases(v_mvarId_3411_, v___x_3412_, v___x_3413_, v___x_3414_, v___x_3415_, v___y_3416_, v___y_3417_, v___y_3418_, v___y_3419_);
if (lean_obj_tag(v___x_3421_) == 0)
{
lean_object* v_a_3422_; lean_object* v___x_3424_; uint8_t v_isShared_3425_; uint8_t v_isSharedCheck_3432_; 
v_a_3422_ = lean_ctor_get(v___x_3421_, 0);
v_isSharedCheck_3432_ = !lean_is_exclusive(v___x_3421_);
if (v_isSharedCheck_3432_ == 0)
{
v___x_3424_ = v___x_3421_;
v_isShared_3425_ = v_isSharedCheck_3432_;
goto v_resetjp_3423_;
}
else
{
lean_inc(v_a_3422_);
lean_dec(v___x_3421_);
v___x_3424_ = lean_box(0);
v_isShared_3425_ = v_isSharedCheck_3432_;
goto v_resetjp_3423_;
}
v_resetjp_3423_:
{
lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3430_; 
v___x_3426_ = lean_array_to_list(v_a_3422_);
v___x_3427_ = lean_box(0);
v___x_3428_ = l_List_mapTR_loop___at___00Lean_MVarId_casesRec_spec__0(v___x_3426_, v___x_3427_);
if (v_isShared_3425_ == 0)
{
lean_ctor_set(v___x_3424_, 0, v___x_3428_);
v___x_3430_ = v___x_3424_;
goto v_reusejp_3429_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v___x_3428_);
v___x_3430_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3429_;
}
v_reusejp_3429_:
{
return v___x_3430_;
}
}
}
else
{
lean_object* v_a_3433_; lean_object* v___x_3435_; uint8_t v_isShared_3436_; uint8_t v_isSharedCheck_3440_; 
v_a_3433_ = lean_ctor_get(v___x_3421_, 0);
v_isSharedCheck_3440_ = !lean_is_exclusive(v___x_3421_);
if (v_isSharedCheck_3440_ == 0)
{
v___x_3435_ = v___x_3421_;
v_isShared_3436_ = v_isSharedCheck_3440_;
goto v_resetjp_3434_;
}
else
{
lean_inc(v_a_3433_);
lean_dec(v___x_3421_);
v___x_3435_ = lean_box(0);
v_isShared_3436_ = v_isSharedCheck_3440_;
goto v_resetjp_3434_;
}
v_resetjp_3434_:
{
lean_object* v___x_3438_; 
if (v_isShared_3436_ == 0)
{
v___x_3438_ = v___x_3435_;
goto v_reusejp_3437_;
}
else
{
lean_object* v_reuseFailAlloc_3439_; 
v_reuseFailAlloc_3439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3439_, 0, v_a_3433_);
v___x_3438_ = v_reuseFailAlloc_3439_;
goto v_reusejp_3437_;
}
v_reusejp_3437_:
{
return v___x_3438_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0___boxed(lean_object* v_mvarId_3441_, lean_object* v___x_3442_, lean_object* v___x_3443_, lean_object* v___x_3444_, lean_object* v___x_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_){
_start:
{
uint8_t v___x_6247__boxed_3451_; lean_object* v_res_3452_; 
v___x_6247__boxed_3451_ = lean_unbox(v___x_3444_);
v_res_3452_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0(v_mvarId_3441_, v___x_3442_, v___x_3443_, v___x_6247__boxed_3451_, v___x_3445_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_);
lean_dec(v___y_3449_);
lean_dec_ref(v___y_3448_);
lean_dec(v___y_3447_);
lean_dec_ref(v___y_3446_);
return v_res_3452_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5(lean_object* v_p_3458_, lean_object* v_mvarId_3459_, lean_object* v_as_3460_, size_t v_sz_3461_, size_t v_i_3462_, lean_object* v_b_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_){
_start:
{
uint8_t v___x_3469_; 
v___x_3469_ = lean_usize_dec_lt(v_i_3462_, v_sz_3461_);
if (v___x_3469_ == 0)
{
lean_object* v___x_3470_; 
lean_dec(v_mvarId_3459_);
lean_dec_ref(v_p_3458_);
v___x_3470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3470_, 0, v_b_3463_);
return v___x_3470_;
}
else
{
lean_object* v_snd_3471_; lean_object* v___x_3473_; uint8_t v_isShared_3474_; uint8_t v_isSharedCheck_3539_; 
v_snd_3471_ = lean_ctor_get(v_b_3463_, 1);
v_isSharedCheck_3539_ = !lean_is_exclusive(v_b_3463_);
if (v_isSharedCheck_3539_ == 0)
{
lean_object* v_unused_3540_; 
v_unused_3540_ = lean_ctor_get(v_b_3463_, 0);
lean_dec(v_unused_3540_);
v___x_3473_ = v_b_3463_;
v_isShared_3474_ = v_isSharedCheck_3539_;
goto v_resetjp_3472_;
}
else
{
lean_inc(v_snd_3471_);
lean_dec(v_b_3463_);
v___x_3473_ = lean_box(0);
v_isShared_3474_ = v_isSharedCheck_3539_;
goto v_resetjp_3472_;
}
v_resetjp_3472_:
{
lean_object* v___x_3475_; lean_object* v_a_3477_; lean_object* v_a_3484_; 
v___x_3475_ = lean_box(0);
v_a_3484_ = lean_array_uget(v_as_3460_, v_i_3462_);
if (lean_obj_tag(v_a_3484_) == 0)
{
v_a_3477_ = v_snd_3471_;
goto v___jp_3476_;
}
else
{
lean_object* v_val_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3538_; 
v_val_3485_ = lean_ctor_get(v_a_3484_, 0);
v_isSharedCheck_3538_ = !lean_is_exclusive(v_a_3484_);
if (v_isSharedCheck_3538_ == 0)
{
v___x_3487_ = v_a_3484_;
v_isShared_3488_ = v_isSharedCheck_3538_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_val_3485_);
lean_dec(v_a_3484_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3538_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; 
v___x_3489_ = lean_box(0);
v___x_3490_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__0));
lean_inc_ref(v_p_3458_);
lean_inc(v___y_3467_);
lean_inc_ref(v___y_3466_);
lean_inc(v___y_3465_);
lean_inc_ref(v___y_3464_);
lean_inc(v_val_3485_);
v___x_3491_ = lean_apply_6(v_p_3458_, v_val_3485_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_, lean_box(0));
if (lean_obj_tag(v___x_3491_) == 0)
{
lean_object* v_a_3492_; uint8_t v___x_3493_; 
v_a_3492_ = lean_ctor_get(v___x_3491_, 0);
lean_inc(v_a_3492_);
lean_dec_ref_known(v___x_3491_, 1);
v___x_3493_ = lean_unbox(v_a_3492_);
lean_dec(v_a_3492_);
if (v___x_3493_ == 0)
{
lean_del_object(v___x_3487_);
lean_dec(v_val_3485_);
lean_dec(v_snd_3471_);
v_a_3477_ = v___x_3490_;
goto v___jp_3476_;
}
else
{
lean_object* v___x_3494_; lean_object* v___x_3495_; uint8_t v___x_3496_; lean_object* v___x_3497_; lean_object* v___f_3498_; lean_object* v___x_3499_; 
v___x_3494_ = l_Lean_LocalDecl_fvarId(v_val_3485_);
lean_dec(v_val_3485_);
v___x_3495_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__1));
v___x_3496_ = 0;
v___x_3497_ = lean_box(v___x_3496_);
lean_inc(v_mvarId_3459_);
v___f_3498_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0___boxed), 10, 5);
lean_closure_set(v___f_3498_, 0, v_mvarId_3459_);
lean_closure_set(v___f_3498_, 1, v___x_3494_);
lean_closure_set(v___f_3498_, 2, v___x_3495_);
lean_closure_set(v___f_3498_, 3, v___x_3497_);
lean_closure_set(v___f_3498_, 4, v___x_3475_);
v___x_3499_ = l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(v___f_3498_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_);
if (lean_obj_tag(v___x_3499_) == 0)
{
lean_object* v_a_3500_; lean_object* v___x_3502_; uint8_t v_isShared_3503_; uint8_t v_isSharedCheck_3521_; 
v_a_3500_ = lean_ctor_get(v___x_3499_, 0);
v_isSharedCheck_3521_ = !lean_is_exclusive(v___x_3499_);
if (v_isSharedCheck_3521_ == 0)
{
v___x_3502_ = v___x_3499_;
v_isShared_3503_ = v_isSharedCheck_3521_;
goto v_resetjp_3501_;
}
else
{
lean_inc(v_a_3500_);
lean_dec(v___x_3499_);
v___x_3502_ = lean_box(0);
v_isShared_3503_ = v_isSharedCheck_3521_;
goto v_resetjp_3501_;
}
v_resetjp_3501_:
{
if (lean_obj_tag(v_a_3500_) == 0)
{
lean_del_object(v___x_3502_);
lean_del_object(v___x_3487_);
lean_dec(v_snd_3471_);
v_a_3477_ = v___x_3490_;
goto v___jp_3476_;
}
else
{
lean_object* v___x_3505_; 
lean_del_object(v___x_3473_);
lean_dec(v_mvarId_3459_);
lean_dec_ref(v_p_3458_);
lean_inc_ref(v_a_3500_);
if (v_isShared_3488_ == 0)
{
lean_ctor_set(v___x_3487_, 0, v_a_3500_);
v___x_3505_ = v___x_3487_;
goto v_reusejp_3504_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v_a_3500_);
v___x_3505_ = v_reuseFailAlloc_3520_;
goto v_reusejp_3504_;
}
v_reusejp_3504_:
{
lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3518_; 
v_isSharedCheck_3518_ = !lean_is_exclusive(v_a_3500_);
if (v_isSharedCheck_3518_ == 0)
{
lean_object* v_unused_3519_; 
v_unused_3519_ = lean_ctor_get(v_a_3500_, 0);
lean_dec(v_unused_3519_);
v___x_3507_ = v_a_3500_;
v_isShared_3508_ = v_isSharedCheck_3518_;
goto v_resetjp_3506_;
}
else
{
lean_dec(v_a_3500_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3518_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
lean_object* v___x_3509_; lean_object* v___x_3511_; 
v___x_3509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3509_, 0, v___x_3505_);
lean_ctor_set(v___x_3509_, 1, v___x_3489_);
if (v_isShared_3508_ == 0)
{
lean_ctor_set_tag(v___x_3507_, 0);
lean_ctor_set(v___x_3507_, 0, v___x_3509_);
v___x_3511_ = v___x_3507_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3517_; 
v_reuseFailAlloc_3517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3517_, 0, v___x_3509_);
v___x_3511_ = v_reuseFailAlloc_3517_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3515_; 
v___x_3512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3512_, 0, v___x_3511_);
v___x_3513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3513_, 0, v___x_3512_);
lean_ctor_set(v___x_3513_, 1, v_snd_3471_);
if (v_isShared_3503_ == 0)
{
lean_ctor_set(v___x_3502_, 0, v___x_3513_);
v___x_3515_ = v___x_3502_;
goto v_reusejp_3514_;
}
else
{
lean_object* v_reuseFailAlloc_3516_; 
v_reuseFailAlloc_3516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3516_, 0, v___x_3513_);
v___x_3515_ = v_reuseFailAlloc_3516_;
goto v_reusejp_3514_;
}
v_reusejp_3514_:
{
return v___x_3515_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3522_; lean_object* v___x_3524_; uint8_t v_isShared_3525_; uint8_t v_isSharedCheck_3529_; 
lean_del_object(v___x_3487_);
lean_del_object(v___x_3473_);
lean_dec(v_snd_3471_);
lean_dec(v_mvarId_3459_);
lean_dec_ref(v_p_3458_);
v_a_3522_ = lean_ctor_get(v___x_3499_, 0);
v_isSharedCheck_3529_ = !lean_is_exclusive(v___x_3499_);
if (v_isSharedCheck_3529_ == 0)
{
v___x_3524_ = v___x_3499_;
v_isShared_3525_ = v_isSharedCheck_3529_;
goto v_resetjp_3523_;
}
else
{
lean_inc(v_a_3522_);
lean_dec(v___x_3499_);
v___x_3524_ = lean_box(0);
v_isShared_3525_ = v_isSharedCheck_3529_;
goto v_resetjp_3523_;
}
v_resetjp_3523_:
{
lean_object* v___x_3527_; 
if (v_isShared_3525_ == 0)
{
v___x_3527_ = v___x_3524_;
goto v_reusejp_3526_;
}
else
{
lean_object* v_reuseFailAlloc_3528_; 
v_reuseFailAlloc_3528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3528_, 0, v_a_3522_);
v___x_3527_ = v_reuseFailAlloc_3528_;
goto v_reusejp_3526_;
}
v_reusejp_3526_:
{
return v___x_3527_;
}
}
}
}
}
else
{
lean_object* v_a_3530_; lean_object* v___x_3532_; uint8_t v_isShared_3533_; uint8_t v_isSharedCheck_3537_; 
lean_del_object(v___x_3487_);
lean_dec(v_val_3485_);
lean_del_object(v___x_3473_);
lean_dec(v_snd_3471_);
lean_dec(v_mvarId_3459_);
lean_dec_ref(v_p_3458_);
v_a_3530_ = lean_ctor_get(v___x_3491_, 0);
v_isSharedCheck_3537_ = !lean_is_exclusive(v___x_3491_);
if (v_isSharedCheck_3537_ == 0)
{
v___x_3532_ = v___x_3491_;
v_isShared_3533_ = v_isSharedCheck_3537_;
goto v_resetjp_3531_;
}
else
{
lean_inc(v_a_3530_);
lean_dec(v___x_3491_);
v___x_3532_ = lean_box(0);
v_isShared_3533_ = v_isSharedCheck_3537_;
goto v_resetjp_3531_;
}
v_resetjp_3531_:
{
lean_object* v___x_3535_; 
if (v_isShared_3533_ == 0)
{
v___x_3535_ = v___x_3532_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v_a_3530_);
v___x_3535_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
return v___x_3535_;
}
}
}
}
}
v___jp_3476_:
{
lean_object* v___x_3479_; 
if (v_isShared_3474_ == 0)
{
lean_ctor_set(v___x_3473_, 1, v_a_3477_);
lean_ctor_set(v___x_3473_, 0, v___x_3475_);
v___x_3479_ = v___x_3473_;
goto v_reusejp_3478_;
}
else
{
lean_object* v_reuseFailAlloc_3483_; 
v_reuseFailAlloc_3483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3483_, 0, v___x_3475_);
lean_ctor_set(v_reuseFailAlloc_3483_, 1, v_a_3477_);
v___x_3479_ = v_reuseFailAlloc_3483_;
goto v_reusejp_3478_;
}
v_reusejp_3478_:
{
size_t v___x_3480_; size_t v___x_3481_; 
v___x_3480_ = ((size_t)1ULL);
v___x_3481_ = lean_usize_add(v_i_3462_, v___x_3480_);
v_i_3462_ = v___x_3481_;
v_b_3463_ = v___x_3479_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___boxed(lean_object* v_p_3541_, lean_object* v_mvarId_3542_, lean_object* v_as_3543_, lean_object* v_sz_3544_, lean_object* v_i_3545_, lean_object* v_b_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_){
_start:
{
size_t v_sz_boxed_3552_; size_t v_i_boxed_3553_; lean_object* v_res_3554_; 
v_sz_boxed_3552_ = lean_unbox_usize(v_sz_3544_);
lean_dec(v_sz_3544_);
v_i_boxed_3553_ = lean_unbox_usize(v_i_3545_);
lean_dec(v_i_3545_);
v_res_3554_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5(v_p_3541_, v_mvarId_3542_, v_as_3543_, v_sz_boxed_3552_, v_i_boxed_3553_, v_b_3546_, v___y_3547_, v___y_3548_, v___y_3549_, v___y_3550_);
lean_dec(v___y_3550_);
lean_dec_ref(v___y_3549_);
lean_dec(v___y_3548_);
lean_dec_ref(v___y_3547_);
lean_dec_ref(v_as_3543_);
return v_res_3554_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4(lean_object* v_p_3555_, lean_object* v_mvarId_3556_, lean_object* v_as_3557_, size_t v_sz_3558_, size_t v_i_3559_, lean_object* v_b_3560_, lean_object* v___y_3561_, lean_object* v___y_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_){
_start:
{
uint8_t v___x_3566_; 
v___x_3566_ = lean_usize_dec_lt(v_i_3559_, v_sz_3558_);
if (v___x_3566_ == 0)
{
lean_object* v___x_3567_; 
lean_dec(v_mvarId_3556_);
lean_dec_ref(v_p_3555_);
v___x_3567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3567_, 0, v_b_3560_);
return v___x_3567_;
}
else
{
lean_object* v_snd_3568_; lean_object* v___x_3570_; uint8_t v_isShared_3571_; uint8_t v_isSharedCheck_3636_; 
v_snd_3568_ = lean_ctor_get(v_b_3560_, 1);
v_isSharedCheck_3636_ = !lean_is_exclusive(v_b_3560_);
if (v_isSharedCheck_3636_ == 0)
{
lean_object* v_unused_3637_; 
v_unused_3637_ = lean_ctor_get(v_b_3560_, 0);
lean_dec(v_unused_3637_);
v___x_3570_ = v_b_3560_;
v_isShared_3571_ = v_isSharedCheck_3636_;
goto v_resetjp_3569_;
}
else
{
lean_inc(v_snd_3568_);
lean_dec(v_b_3560_);
v___x_3570_ = lean_box(0);
v_isShared_3571_ = v_isSharedCheck_3636_;
goto v_resetjp_3569_;
}
v_resetjp_3569_:
{
lean_object* v___x_3572_; lean_object* v_a_3574_; lean_object* v_a_3581_; 
v___x_3572_ = lean_box(0);
v_a_3581_ = lean_array_uget(v_as_3557_, v_i_3559_);
if (lean_obj_tag(v_a_3581_) == 0)
{
v_a_3574_ = v_snd_3568_;
goto v___jp_3573_;
}
else
{
lean_object* v_val_3582_; lean_object* v___x_3584_; uint8_t v_isShared_3585_; uint8_t v_isSharedCheck_3635_; 
v_val_3582_ = lean_ctor_get(v_a_3581_, 0);
v_isSharedCheck_3635_ = !lean_is_exclusive(v_a_3581_);
if (v_isSharedCheck_3635_ == 0)
{
v___x_3584_ = v_a_3581_;
v_isShared_3585_ = v_isSharedCheck_3635_;
goto v_resetjp_3583_;
}
else
{
lean_inc(v_val_3582_);
lean_dec(v_a_3581_);
v___x_3584_ = lean_box(0);
v_isShared_3585_ = v_isSharedCheck_3635_;
goto v_resetjp_3583_;
}
v_resetjp_3583_:
{
lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; 
v___x_3586_ = lean_box(0);
v___x_3587_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__0));
lean_inc_ref(v_p_3555_);
lean_inc(v___y_3564_);
lean_inc_ref(v___y_3563_);
lean_inc(v___y_3562_);
lean_inc_ref(v___y_3561_);
lean_inc(v_val_3582_);
v___x_3588_ = lean_apply_6(v_p_3555_, v_val_3582_, v___y_3561_, v___y_3562_, v___y_3563_, v___y_3564_, lean_box(0));
if (lean_obj_tag(v___x_3588_) == 0)
{
lean_object* v_a_3589_; uint8_t v___x_3590_; 
v_a_3589_ = lean_ctor_get(v___x_3588_, 0);
lean_inc(v_a_3589_);
lean_dec_ref_known(v___x_3588_, 1);
v___x_3590_ = lean_unbox(v_a_3589_);
lean_dec(v_a_3589_);
if (v___x_3590_ == 0)
{
lean_del_object(v___x_3584_);
lean_dec(v_val_3582_);
lean_dec(v_snd_3568_);
v_a_3574_ = v___x_3587_;
goto v___jp_3573_;
}
else
{
lean_object* v___x_3591_; lean_object* v___x_3592_; uint8_t v___x_3593_; lean_object* v___x_3594_; lean_object* v___f_3595_; lean_object* v___x_3596_; 
v___x_3591_ = l_Lean_LocalDecl_fvarId(v_val_3582_);
lean_dec(v_val_3582_);
v___x_3592_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__1));
v___x_3593_ = 0;
v___x_3594_ = lean_box(v___x_3593_);
lean_inc(v_mvarId_3556_);
v___f_3595_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0___boxed), 10, 5);
lean_closure_set(v___f_3595_, 0, v_mvarId_3556_);
lean_closure_set(v___f_3595_, 1, v___x_3591_);
lean_closure_set(v___f_3595_, 2, v___x_3592_);
lean_closure_set(v___f_3595_, 3, v___x_3594_);
lean_closure_set(v___f_3595_, 4, v___x_3572_);
v___x_3596_ = l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(v___f_3595_, v___y_3561_, v___y_3562_, v___y_3563_, v___y_3564_);
if (lean_obj_tag(v___x_3596_) == 0)
{
lean_object* v_a_3597_; lean_object* v___x_3599_; uint8_t v_isShared_3600_; uint8_t v_isSharedCheck_3618_; 
v_a_3597_ = lean_ctor_get(v___x_3596_, 0);
v_isSharedCheck_3618_ = !lean_is_exclusive(v___x_3596_);
if (v_isSharedCheck_3618_ == 0)
{
v___x_3599_ = v___x_3596_;
v_isShared_3600_ = v_isSharedCheck_3618_;
goto v_resetjp_3598_;
}
else
{
lean_inc(v_a_3597_);
lean_dec(v___x_3596_);
v___x_3599_ = lean_box(0);
v_isShared_3600_ = v_isSharedCheck_3618_;
goto v_resetjp_3598_;
}
v_resetjp_3598_:
{
if (lean_obj_tag(v_a_3597_) == 0)
{
lean_del_object(v___x_3599_);
lean_del_object(v___x_3584_);
lean_dec(v_snd_3568_);
v_a_3574_ = v___x_3587_;
goto v___jp_3573_;
}
else
{
lean_object* v___x_3602_; 
lean_del_object(v___x_3570_);
lean_dec(v_mvarId_3556_);
lean_dec_ref(v_p_3555_);
lean_inc_ref(v_a_3597_);
if (v_isShared_3585_ == 0)
{
lean_ctor_set(v___x_3584_, 0, v_a_3597_);
v___x_3602_ = v___x_3584_;
goto v_reusejp_3601_;
}
else
{
lean_object* v_reuseFailAlloc_3617_; 
v_reuseFailAlloc_3617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3617_, 0, v_a_3597_);
v___x_3602_ = v_reuseFailAlloc_3617_;
goto v_reusejp_3601_;
}
v_reusejp_3601_:
{
lean_object* v___x_3604_; uint8_t v_isShared_3605_; uint8_t v_isSharedCheck_3615_; 
v_isSharedCheck_3615_ = !lean_is_exclusive(v_a_3597_);
if (v_isSharedCheck_3615_ == 0)
{
lean_object* v_unused_3616_; 
v_unused_3616_ = lean_ctor_get(v_a_3597_, 0);
lean_dec(v_unused_3616_);
v___x_3604_ = v_a_3597_;
v_isShared_3605_ = v_isSharedCheck_3615_;
goto v_resetjp_3603_;
}
else
{
lean_dec(v_a_3597_);
v___x_3604_ = lean_box(0);
v_isShared_3605_ = v_isSharedCheck_3615_;
goto v_resetjp_3603_;
}
v_resetjp_3603_:
{
lean_object* v___x_3606_; lean_object* v___x_3608_; 
v___x_3606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3606_, 0, v___x_3602_);
lean_ctor_set(v___x_3606_, 1, v___x_3586_);
if (v_isShared_3605_ == 0)
{
lean_ctor_set_tag(v___x_3604_, 0);
lean_ctor_set(v___x_3604_, 0, v___x_3606_);
v___x_3608_ = v___x_3604_;
goto v_reusejp_3607_;
}
else
{
lean_object* v_reuseFailAlloc_3614_; 
v_reuseFailAlloc_3614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3614_, 0, v___x_3606_);
v___x_3608_ = v_reuseFailAlloc_3614_;
goto v_reusejp_3607_;
}
v_reusejp_3607_:
{
lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3612_; 
v___x_3609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3609_, 0, v___x_3608_);
v___x_3610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3610_, 0, v___x_3609_);
lean_ctor_set(v___x_3610_, 1, v_snd_3568_);
if (v_isShared_3600_ == 0)
{
lean_ctor_set(v___x_3599_, 0, v___x_3610_);
v___x_3612_ = v___x_3599_;
goto v_reusejp_3611_;
}
else
{
lean_object* v_reuseFailAlloc_3613_; 
v_reuseFailAlloc_3613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3613_, 0, v___x_3610_);
v___x_3612_ = v_reuseFailAlloc_3613_;
goto v_reusejp_3611_;
}
v_reusejp_3611_:
{
return v___x_3612_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3619_; lean_object* v___x_3621_; uint8_t v_isShared_3622_; uint8_t v_isSharedCheck_3626_; 
lean_del_object(v___x_3584_);
lean_del_object(v___x_3570_);
lean_dec(v_snd_3568_);
lean_dec(v_mvarId_3556_);
lean_dec_ref(v_p_3555_);
v_a_3619_ = lean_ctor_get(v___x_3596_, 0);
v_isSharedCheck_3626_ = !lean_is_exclusive(v___x_3596_);
if (v_isSharedCheck_3626_ == 0)
{
v___x_3621_ = v___x_3596_;
v_isShared_3622_ = v_isSharedCheck_3626_;
goto v_resetjp_3620_;
}
else
{
lean_inc(v_a_3619_);
lean_dec(v___x_3596_);
v___x_3621_ = lean_box(0);
v_isShared_3622_ = v_isSharedCheck_3626_;
goto v_resetjp_3620_;
}
v_resetjp_3620_:
{
lean_object* v___x_3624_; 
if (v_isShared_3622_ == 0)
{
v___x_3624_ = v___x_3621_;
goto v_reusejp_3623_;
}
else
{
lean_object* v_reuseFailAlloc_3625_; 
v_reuseFailAlloc_3625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3625_, 0, v_a_3619_);
v___x_3624_ = v_reuseFailAlloc_3625_;
goto v_reusejp_3623_;
}
v_reusejp_3623_:
{
return v___x_3624_;
}
}
}
}
}
else
{
lean_object* v_a_3627_; lean_object* v___x_3629_; uint8_t v_isShared_3630_; uint8_t v_isSharedCheck_3634_; 
lean_del_object(v___x_3584_);
lean_dec(v_val_3582_);
lean_del_object(v___x_3570_);
lean_dec(v_snd_3568_);
lean_dec(v_mvarId_3556_);
lean_dec_ref(v_p_3555_);
v_a_3627_ = lean_ctor_get(v___x_3588_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v___x_3588_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3629_ = v___x_3588_;
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
else
{
lean_inc(v_a_3627_);
lean_dec(v___x_3588_);
v___x_3629_ = lean_box(0);
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
v_resetjp_3628_:
{
lean_object* v___x_3632_; 
if (v_isShared_3630_ == 0)
{
v___x_3632_ = v___x_3629_;
goto v_reusejp_3631_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v_a_3627_);
v___x_3632_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3631_;
}
v_reusejp_3631_:
{
return v___x_3632_;
}
}
}
}
}
v___jp_3573_:
{
lean_object* v___x_3576_; 
if (v_isShared_3571_ == 0)
{
lean_ctor_set(v___x_3570_, 1, v_a_3574_);
lean_ctor_set(v___x_3570_, 0, v___x_3572_);
v___x_3576_ = v___x_3570_;
goto v_reusejp_3575_;
}
else
{
lean_object* v_reuseFailAlloc_3580_; 
v_reuseFailAlloc_3580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3580_, 0, v___x_3572_);
lean_ctor_set(v_reuseFailAlloc_3580_, 1, v_a_3574_);
v___x_3576_ = v_reuseFailAlloc_3580_;
goto v_reusejp_3575_;
}
v_reusejp_3575_:
{
size_t v___x_3577_; size_t v___x_3578_; lean_object* v___x_3579_; 
v___x_3577_ = ((size_t)1ULL);
v___x_3578_ = lean_usize_add(v_i_3559_, v___x_3577_);
v___x_3579_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5(v_p_3555_, v_mvarId_3556_, v_as_3557_, v_sz_3558_, v___x_3578_, v___x_3576_, v___y_3561_, v___y_3562_, v___y_3563_, v___y_3564_);
return v___x_3579_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4___boxed(lean_object* v_p_3638_, lean_object* v_mvarId_3639_, lean_object* v_as_3640_, lean_object* v_sz_3641_, lean_object* v_i_3642_, lean_object* v_b_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_){
_start:
{
size_t v_sz_boxed_3649_; size_t v_i_boxed_3650_; lean_object* v_res_3651_; 
v_sz_boxed_3649_ = lean_unbox_usize(v_sz_3641_);
lean_dec(v_sz_3641_);
v_i_boxed_3650_ = lean_unbox_usize(v_i_3642_);
lean_dec(v_i_3642_);
v_res_3651_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4(v_p_3638_, v_mvarId_3639_, v_as_3640_, v_sz_boxed_3649_, v_i_boxed_3650_, v_b_3643_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_);
lean_dec(v___y_3647_);
lean_dec_ref(v___y_3646_);
lean_dec(v___y_3645_);
lean_dec_ref(v___y_3644_);
lean_dec_ref(v_as_3640_);
return v_res_3651_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2(lean_object* v_init_3652_, lean_object* v_p_3653_, lean_object* v_mvarId_3654_, lean_object* v_n_3655_, lean_object* v_b_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_, lean_object* v___y_3660_){
_start:
{
if (lean_obj_tag(v_n_3655_) == 0)
{
lean_object* v_cs_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; size_t v_sz_3665_; size_t v___x_3666_; lean_object* v___x_3667_; 
v_cs_3662_ = lean_ctor_get(v_n_3655_, 0);
v___x_3663_ = lean_box(0);
v___x_3664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3664_, 0, v___x_3663_);
lean_ctor_set(v___x_3664_, 1, v_b_3656_);
v_sz_3665_ = lean_array_size(v_cs_3662_);
v___x_3666_ = ((size_t)0ULL);
v___x_3667_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__3(v_init_3652_, v_p_3653_, v_mvarId_3654_, v_cs_3662_, v_sz_3665_, v___x_3666_, v___x_3664_, v___y_3657_, v___y_3658_, v___y_3659_, v___y_3660_);
if (lean_obj_tag(v___x_3667_) == 0)
{
lean_object* v_a_3668_; lean_object* v___x_3670_; uint8_t v_isShared_3671_; uint8_t v_isSharedCheck_3682_; 
v_a_3668_ = lean_ctor_get(v___x_3667_, 0);
v_isSharedCheck_3682_ = !lean_is_exclusive(v___x_3667_);
if (v_isSharedCheck_3682_ == 0)
{
v___x_3670_ = v___x_3667_;
v_isShared_3671_ = v_isSharedCheck_3682_;
goto v_resetjp_3669_;
}
else
{
lean_inc(v_a_3668_);
lean_dec(v___x_3667_);
v___x_3670_ = lean_box(0);
v_isShared_3671_ = v_isSharedCheck_3682_;
goto v_resetjp_3669_;
}
v_resetjp_3669_:
{
lean_object* v_fst_3672_; 
v_fst_3672_ = lean_ctor_get(v_a_3668_, 0);
if (lean_obj_tag(v_fst_3672_) == 0)
{
lean_object* v_snd_3673_; lean_object* v___x_3674_; lean_object* v___x_3676_; 
v_snd_3673_ = lean_ctor_get(v_a_3668_, 1);
lean_inc(v_snd_3673_);
lean_dec(v_a_3668_);
v___x_3674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3674_, 0, v_snd_3673_);
if (v_isShared_3671_ == 0)
{
lean_ctor_set(v___x_3670_, 0, v___x_3674_);
v___x_3676_ = v___x_3670_;
goto v_reusejp_3675_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v___x_3674_);
v___x_3676_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3675_;
}
v_reusejp_3675_:
{
return v___x_3676_;
}
}
else
{
lean_object* v_val_3678_; lean_object* v___x_3680_; 
lean_inc_ref(v_fst_3672_);
lean_dec(v_a_3668_);
v_val_3678_ = lean_ctor_get(v_fst_3672_, 0);
lean_inc(v_val_3678_);
lean_dec_ref_known(v_fst_3672_, 1);
if (v_isShared_3671_ == 0)
{
lean_ctor_set(v___x_3670_, 0, v_val_3678_);
v___x_3680_ = v___x_3670_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3681_; 
v_reuseFailAlloc_3681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3681_, 0, v_val_3678_);
v___x_3680_ = v_reuseFailAlloc_3681_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
return v___x_3680_;
}
}
}
}
else
{
lean_object* v_a_3683_; lean_object* v___x_3685_; uint8_t v_isShared_3686_; uint8_t v_isSharedCheck_3690_; 
v_a_3683_ = lean_ctor_get(v___x_3667_, 0);
v_isSharedCheck_3690_ = !lean_is_exclusive(v___x_3667_);
if (v_isSharedCheck_3690_ == 0)
{
v___x_3685_ = v___x_3667_;
v_isShared_3686_ = v_isSharedCheck_3690_;
goto v_resetjp_3684_;
}
else
{
lean_inc(v_a_3683_);
lean_dec(v___x_3667_);
v___x_3685_ = lean_box(0);
v_isShared_3686_ = v_isSharedCheck_3690_;
goto v_resetjp_3684_;
}
v_resetjp_3684_:
{
lean_object* v___x_3688_; 
if (v_isShared_3686_ == 0)
{
v___x_3688_ = v___x_3685_;
goto v_reusejp_3687_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v_a_3683_);
v___x_3688_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3687_;
}
v_reusejp_3687_:
{
return v___x_3688_;
}
}
}
}
else
{
lean_object* v_vs_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; size_t v_sz_3694_; size_t v___x_3695_; lean_object* v___x_3696_; 
v_vs_3691_ = lean_ctor_get(v_n_3655_, 0);
v___x_3692_ = lean_box(0);
v___x_3693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3693_, 0, v___x_3692_);
lean_ctor_set(v___x_3693_, 1, v_b_3656_);
v_sz_3694_ = lean_array_size(v_vs_3691_);
v___x_3695_ = ((size_t)0ULL);
v___x_3696_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4(v_p_3653_, v_mvarId_3654_, v_vs_3691_, v_sz_3694_, v___x_3695_, v___x_3693_, v___y_3657_, v___y_3658_, v___y_3659_, v___y_3660_);
if (lean_obj_tag(v___x_3696_) == 0)
{
lean_object* v_a_3697_; lean_object* v___x_3699_; uint8_t v_isShared_3700_; uint8_t v_isSharedCheck_3711_; 
v_a_3697_ = lean_ctor_get(v___x_3696_, 0);
v_isSharedCheck_3711_ = !lean_is_exclusive(v___x_3696_);
if (v_isSharedCheck_3711_ == 0)
{
v___x_3699_ = v___x_3696_;
v_isShared_3700_ = v_isSharedCheck_3711_;
goto v_resetjp_3698_;
}
else
{
lean_inc(v_a_3697_);
lean_dec(v___x_3696_);
v___x_3699_ = lean_box(0);
v_isShared_3700_ = v_isSharedCheck_3711_;
goto v_resetjp_3698_;
}
v_resetjp_3698_:
{
lean_object* v_fst_3701_; 
v_fst_3701_ = lean_ctor_get(v_a_3697_, 0);
if (lean_obj_tag(v_fst_3701_) == 0)
{
lean_object* v_snd_3702_; lean_object* v___x_3703_; lean_object* v___x_3705_; 
v_snd_3702_ = lean_ctor_get(v_a_3697_, 1);
lean_inc(v_snd_3702_);
lean_dec(v_a_3697_);
v___x_3703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3703_, 0, v_snd_3702_);
if (v_isShared_3700_ == 0)
{
lean_ctor_set(v___x_3699_, 0, v___x_3703_);
v___x_3705_ = v___x_3699_;
goto v_reusejp_3704_;
}
else
{
lean_object* v_reuseFailAlloc_3706_; 
v_reuseFailAlloc_3706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3706_, 0, v___x_3703_);
v___x_3705_ = v_reuseFailAlloc_3706_;
goto v_reusejp_3704_;
}
v_reusejp_3704_:
{
return v___x_3705_;
}
}
else
{
lean_object* v_val_3707_; lean_object* v___x_3709_; 
lean_inc_ref(v_fst_3701_);
lean_dec(v_a_3697_);
v_val_3707_ = lean_ctor_get(v_fst_3701_, 0);
lean_inc(v_val_3707_);
lean_dec_ref_known(v_fst_3701_, 1);
if (v_isShared_3700_ == 0)
{
lean_ctor_set(v___x_3699_, 0, v_val_3707_);
v___x_3709_ = v___x_3699_;
goto v_reusejp_3708_;
}
else
{
lean_object* v_reuseFailAlloc_3710_; 
v_reuseFailAlloc_3710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3710_, 0, v_val_3707_);
v___x_3709_ = v_reuseFailAlloc_3710_;
goto v_reusejp_3708_;
}
v_reusejp_3708_:
{
return v___x_3709_;
}
}
}
}
else
{
lean_object* v_a_3712_; lean_object* v___x_3714_; uint8_t v_isShared_3715_; uint8_t v_isSharedCheck_3719_; 
v_a_3712_ = lean_ctor_get(v___x_3696_, 0);
v_isSharedCheck_3719_ = !lean_is_exclusive(v___x_3696_);
if (v_isSharedCheck_3719_ == 0)
{
v___x_3714_ = v___x_3696_;
v_isShared_3715_ = v_isSharedCheck_3719_;
goto v_resetjp_3713_;
}
else
{
lean_inc(v_a_3712_);
lean_dec(v___x_3696_);
v___x_3714_ = lean_box(0);
v_isShared_3715_ = v_isSharedCheck_3719_;
goto v_resetjp_3713_;
}
v_resetjp_3713_:
{
lean_object* v___x_3717_; 
if (v_isShared_3715_ == 0)
{
v___x_3717_ = v___x_3714_;
goto v_reusejp_3716_;
}
else
{
lean_object* v_reuseFailAlloc_3718_; 
v_reuseFailAlloc_3718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3718_, 0, v_a_3712_);
v___x_3717_ = v_reuseFailAlloc_3718_;
goto v_reusejp_3716_;
}
v_reusejp_3716_:
{
return v___x_3717_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__3(lean_object* v_init_3720_, lean_object* v_p_3721_, lean_object* v_mvarId_3722_, lean_object* v_as_3723_, size_t v_sz_3724_, size_t v_i_3725_, lean_object* v_b_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_){
_start:
{
uint8_t v___x_3732_; 
v___x_3732_ = lean_usize_dec_lt(v_i_3725_, v_sz_3724_);
if (v___x_3732_ == 0)
{
lean_object* v___x_3733_; 
lean_dec(v_mvarId_3722_);
lean_dec_ref(v_p_3721_);
v___x_3733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3733_, 0, v_b_3726_);
return v___x_3733_;
}
else
{
lean_object* v_snd_3734_; lean_object* v___x_3736_; uint8_t v_isShared_3737_; uint8_t v_isSharedCheck_3768_; 
v_snd_3734_ = lean_ctor_get(v_b_3726_, 1);
v_isSharedCheck_3768_ = !lean_is_exclusive(v_b_3726_);
if (v_isSharedCheck_3768_ == 0)
{
lean_object* v_unused_3769_; 
v_unused_3769_ = lean_ctor_get(v_b_3726_, 0);
lean_dec(v_unused_3769_);
v___x_3736_ = v_b_3726_;
v_isShared_3737_ = v_isSharedCheck_3768_;
goto v_resetjp_3735_;
}
else
{
lean_inc(v_snd_3734_);
lean_dec(v_b_3726_);
v___x_3736_ = lean_box(0);
v_isShared_3737_ = v_isSharedCheck_3768_;
goto v_resetjp_3735_;
}
v_resetjp_3735_:
{
lean_object* v___x_3738_; lean_object* v_a_3739_; lean_object* v___x_3740_; 
v___x_3738_ = lean_box(0);
v_a_3739_ = lean_array_uget_borrowed(v_as_3723_, v_i_3725_);
lean_inc(v_snd_3734_);
lean_inc(v_mvarId_3722_);
lean_inc_ref(v_p_3721_);
v___x_3740_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2(v_init_3720_, v_p_3721_, v_mvarId_3722_, v_a_3739_, v_snd_3734_, v___y_3727_, v___y_3728_, v___y_3729_, v___y_3730_);
if (lean_obj_tag(v___x_3740_) == 0)
{
lean_object* v_a_3741_; lean_object* v___x_3743_; uint8_t v_isShared_3744_; uint8_t v_isSharedCheck_3759_; 
v_a_3741_ = lean_ctor_get(v___x_3740_, 0);
v_isSharedCheck_3759_ = !lean_is_exclusive(v___x_3740_);
if (v_isSharedCheck_3759_ == 0)
{
v___x_3743_ = v___x_3740_;
v_isShared_3744_ = v_isSharedCheck_3759_;
goto v_resetjp_3742_;
}
else
{
lean_inc(v_a_3741_);
lean_dec(v___x_3740_);
v___x_3743_ = lean_box(0);
v_isShared_3744_ = v_isSharedCheck_3759_;
goto v_resetjp_3742_;
}
v_resetjp_3742_:
{
if (lean_obj_tag(v_a_3741_) == 0)
{
lean_object* v___x_3745_; lean_object* v___x_3747_; 
lean_dec(v_mvarId_3722_);
lean_dec_ref(v_p_3721_);
v___x_3745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3745_, 0, v_a_3741_);
if (v_isShared_3737_ == 0)
{
lean_ctor_set(v___x_3736_, 0, v___x_3745_);
v___x_3747_ = v___x_3736_;
goto v_reusejp_3746_;
}
else
{
lean_object* v_reuseFailAlloc_3751_; 
v_reuseFailAlloc_3751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3751_, 0, v___x_3745_);
lean_ctor_set(v_reuseFailAlloc_3751_, 1, v_snd_3734_);
v___x_3747_ = v_reuseFailAlloc_3751_;
goto v_reusejp_3746_;
}
v_reusejp_3746_:
{
lean_object* v___x_3749_; 
if (v_isShared_3744_ == 0)
{
lean_ctor_set(v___x_3743_, 0, v___x_3747_);
v___x_3749_ = v___x_3743_;
goto v_reusejp_3748_;
}
else
{
lean_object* v_reuseFailAlloc_3750_; 
v_reuseFailAlloc_3750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3750_, 0, v___x_3747_);
v___x_3749_ = v_reuseFailAlloc_3750_;
goto v_reusejp_3748_;
}
v_reusejp_3748_:
{
return v___x_3749_;
}
}
}
else
{
lean_object* v_a_3752_; lean_object* v___x_3754_; 
lean_del_object(v___x_3743_);
lean_dec(v_snd_3734_);
v_a_3752_ = lean_ctor_get(v_a_3741_, 0);
lean_inc(v_a_3752_);
lean_dec_ref_known(v_a_3741_, 1);
if (v_isShared_3737_ == 0)
{
lean_ctor_set(v___x_3736_, 1, v_a_3752_);
lean_ctor_set(v___x_3736_, 0, v___x_3738_);
v___x_3754_ = v___x_3736_;
goto v_reusejp_3753_;
}
else
{
lean_object* v_reuseFailAlloc_3758_; 
v_reuseFailAlloc_3758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3758_, 0, v___x_3738_);
lean_ctor_set(v_reuseFailAlloc_3758_, 1, v_a_3752_);
v___x_3754_ = v_reuseFailAlloc_3758_;
goto v_reusejp_3753_;
}
v_reusejp_3753_:
{
size_t v___x_3755_; size_t v___x_3756_; 
v___x_3755_ = ((size_t)1ULL);
v___x_3756_ = lean_usize_add(v_i_3725_, v___x_3755_);
v_i_3725_ = v___x_3756_;
v_b_3726_ = v___x_3754_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3760_; lean_object* v___x_3762_; uint8_t v_isShared_3763_; uint8_t v_isSharedCheck_3767_; 
lean_del_object(v___x_3736_);
lean_dec(v_snd_3734_);
lean_dec(v_mvarId_3722_);
lean_dec_ref(v_p_3721_);
v_a_3760_ = lean_ctor_get(v___x_3740_, 0);
v_isSharedCheck_3767_ = !lean_is_exclusive(v___x_3740_);
if (v_isSharedCheck_3767_ == 0)
{
v___x_3762_ = v___x_3740_;
v_isShared_3763_ = v_isSharedCheck_3767_;
goto v_resetjp_3761_;
}
else
{
lean_inc(v_a_3760_);
lean_dec(v___x_3740_);
v___x_3762_ = lean_box(0);
v_isShared_3763_ = v_isSharedCheck_3767_;
goto v_resetjp_3761_;
}
v_resetjp_3761_:
{
lean_object* v___x_3765_; 
if (v_isShared_3763_ == 0)
{
v___x_3765_ = v___x_3762_;
goto v_reusejp_3764_;
}
else
{
lean_object* v_reuseFailAlloc_3766_; 
v_reuseFailAlloc_3766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3766_, 0, v_a_3760_);
v___x_3765_ = v_reuseFailAlloc_3766_;
goto v_reusejp_3764_;
}
v_reusejp_3764_:
{
return v___x_3765_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__3___boxed(lean_object* v_init_3770_, lean_object* v_p_3771_, lean_object* v_mvarId_3772_, lean_object* v_as_3773_, lean_object* v_sz_3774_, lean_object* v_i_3775_, lean_object* v_b_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_){
_start:
{
size_t v_sz_boxed_3782_; size_t v_i_boxed_3783_; lean_object* v_res_3784_; 
v_sz_boxed_3782_ = lean_unbox_usize(v_sz_3774_);
lean_dec(v_sz_3774_);
v_i_boxed_3783_ = lean_unbox_usize(v_i_3775_);
lean_dec(v_i_3775_);
v_res_3784_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__3(v_init_3770_, v_p_3771_, v_mvarId_3772_, v_as_3773_, v_sz_boxed_3782_, v_i_boxed_3783_, v_b_3776_, v___y_3777_, v___y_3778_, v___y_3779_, v___y_3780_);
lean_dec(v___y_3780_);
lean_dec_ref(v___y_3779_);
lean_dec(v___y_3778_);
lean_dec_ref(v___y_3777_);
lean_dec_ref(v_as_3773_);
lean_dec_ref(v_init_3770_);
return v_res_3784_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2___boxed(lean_object* v_init_3785_, lean_object* v_p_3786_, lean_object* v_mvarId_3787_, lean_object* v_n_3788_, lean_object* v_b_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_){
_start:
{
lean_object* v_res_3795_; 
v_res_3795_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2(v_init_3785_, v_p_3786_, v_mvarId_3787_, v_n_3788_, v_b_3789_, v___y_3790_, v___y_3791_, v___y_3792_, v___y_3793_);
lean_dec(v___y_3793_);
lean_dec_ref(v___y_3792_);
lean_dec(v___y_3791_);
lean_dec_ref(v___y_3790_);
lean_dec_ref(v_n_3788_);
lean_dec_ref(v_init_3785_);
return v_res_3795_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6(lean_object* v_p_3799_, lean_object* v_mvarId_3800_, lean_object* v_as_3801_, size_t v_sz_3802_, size_t v_i_3803_, lean_object* v_b_3804_, lean_object* v___y_3805_, lean_object* v___y_3806_, lean_object* v___y_3807_, lean_object* v___y_3808_){
_start:
{
uint8_t v___x_3810_; 
v___x_3810_ = lean_usize_dec_lt(v_i_3803_, v_sz_3802_);
if (v___x_3810_ == 0)
{
lean_object* v___x_3811_; 
lean_dec(v_mvarId_3800_);
lean_dec_ref(v_p_3799_);
v___x_3811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3811_, 0, v_b_3804_);
return v___x_3811_;
}
else
{
lean_object* v_snd_3812_; lean_object* v___x_3814_; uint8_t v_isShared_3815_; uint8_t v_isSharedCheck_3879_; 
v_snd_3812_ = lean_ctor_get(v_b_3804_, 1);
v_isSharedCheck_3879_ = !lean_is_exclusive(v_b_3804_);
if (v_isSharedCheck_3879_ == 0)
{
lean_object* v_unused_3880_; 
v_unused_3880_ = lean_ctor_get(v_b_3804_, 0);
lean_dec(v_unused_3880_);
v___x_3814_ = v_b_3804_;
v_isShared_3815_ = v_isSharedCheck_3879_;
goto v_resetjp_3813_;
}
else
{
lean_inc(v_snd_3812_);
lean_dec(v_b_3804_);
v___x_3814_ = lean_box(0);
v_isShared_3815_ = v_isSharedCheck_3879_;
goto v_resetjp_3813_;
}
v_resetjp_3813_:
{
lean_object* v___x_3816_; lean_object* v_a_3818_; lean_object* v_a_3825_; 
v___x_3816_ = lean_box(0);
v_a_3825_ = lean_array_uget(v_as_3801_, v_i_3803_);
if (lean_obj_tag(v_a_3825_) == 0)
{
v_a_3818_ = v_snd_3812_;
goto v___jp_3817_;
}
else
{
lean_object* v_val_3826_; lean_object* v___x_3828_; uint8_t v_isShared_3829_; uint8_t v_isSharedCheck_3878_; 
v_val_3826_ = lean_ctor_get(v_a_3825_, 0);
v_isSharedCheck_3878_ = !lean_is_exclusive(v_a_3825_);
if (v_isSharedCheck_3878_ == 0)
{
v___x_3828_ = v_a_3825_;
v_isShared_3829_ = v_isSharedCheck_3878_;
goto v_resetjp_3827_;
}
else
{
lean_inc(v_val_3826_);
lean_dec(v_a_3825_);
v___x_3828_ = lean_box(0);
v_isShared_3829_ = v_isSharedCheck_3878_;
goto v_resetjp_3827_;
}
v_resetjp_3827_:
{
lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; 
v___x_3830_ = lean_box(0);
v___x_3831_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__0));
lean_inc_ref(v_p_3799_);
lean_inc(v___y_3808_);
lean_inc_ref(v___y_3807_);
lean_inc(v___y_3806_);
lean_inc_ref(v___y_3805_);
lean_inc(v_val_3826_);
v___x_3832_ = lean_apply_6(v_p_3799_, v_val_3826_, v___y_3805_, v___y_3806_, v___y_3807_, v___y_3808_, lean_box(0));
if (lean_obj_tag(v___x_3832_) == 0)
{
lean_object* v_a_3833_; uint8_t v___x_3834_; 
v_a_3833_ = lean_ctor_get(v___x_3832_, 0);
lean_inc(v_a_3833_);
lean_dec_ref_known(v___x_3832_, 1);
v___x_3834_ = lean_unbox(v_a_3833_);
lean_dec(v_a_3833_);
if (v___x_3834_ == 0)
{
lean_del_object(v___x_3828_);
lean_dec(v_val_3826_);
lean_dec(v_snd_3812_);
v_a_3818_ = v___x_3831_;
goto v___jp_3817_;
}
else
{
lean_object* v___x_3835_; lean_object* v___x_3836_; uint8_t v___x_3837_; lean_object* v___x_3838_; lean_object* v___f_3839_; lean_object* v___x_3840_; 
v___x_3835_ = l_Lean_LocalDecl_fvarId(v_val_3826_);
lean_dec(v_val_3826_);
v___x_3836_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__1));
v___x_3837_ = 0;
v___x_3838_ = lean_box(v___x_3837_);
lean_inc(v_mvarId_3800_);
v___f_3839_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0___boxed), 10, 5);
lean_closure_set(v___f_3839_, 0, v_mvarId_3800_);
lean_closure_set(v___f_3839_, 1, v___x_3835_);
lean_closure_set(v___f_3839_, 2, v___x_3836_);
lean_closure_set(v___f_3839_, 3, v___x_3838_);
lean_closure_set(v___f_3839_, 4, v___x_3816_);
v___x_3840_ = l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(v___f_3839_, v___y_3805_, v___y_3806_, v___y_3807_, v___y_3808_);
if (lean_obj_tag(v___x_3840_) == 0)
{
lean_object* v_a_3841_; lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3861_; 
v_a_3841_ = lean_ctor_get(v___x_3840_, 0);
v_isSharedCheck_3861_ = !lean_is_exclusive(v___x_3840_);
if (v_isSharedCheck_3861_ == 0)
{
v___x_3843_ = v___x_3840_;
v_isShared_3844_ = v_isSharedCheck_3861_;
goto v_resetjp_3842_;
}
else
{
lean_inc(v_a_3841_);
lean_dec(v___x_3840_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3861_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
if (lean_obj_tag(v_a_3841_) == 0)
{
lean_del_object(v___x_3843_);
lean_del_object(v___x_3828_);
lean_dec(v_snd_3812_);
v_a_3818_ = v___x_3831_;
goto v___jp_3817_;
}
else
{
lean_object* v___x_3846_; 
lean_del_object(v___x_3814_);
lean_dec(v_mvarId_3800_);
lean_dec_ref(v_p_3799_);
lean_inc_ref(v_a_3841_);
if (v_isShared_3829_ == 0)
{
lean_ctor_set(v___x_3828_, 0, v_a_3841_);
v___x_3846_ = v___x_3828_;
goto v_reusejp_3845_;
}
else
{
lean_object* v_reuseFailAlloc_3860_; 
v_reuseFailAlloc_3860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3860_, 0, v_a_3841_);
v___x_3846_ = v_reuseFailAlloc_3860_;
goto v_reusejp_3845_;
}
v_reusejp_3845_:
{
lean_object* v___x_3848_; uint8_t v_isShared_3849_; uint8_t v_isSharedCheck_3858_; 
v_isSharedCheck_3858_ = !lean_is_exclusive(v_a_3841_);
if (v_isSharedCheck_3858_ == 0)
{
lean_object* v_unused_3859_; 
v_unused_3859_ = lean_ctor_get(v_a_3841_, 0);
lean_dec(v_unused_3859_);
v___x_3848_ = v_a_3841_;
v_isShared_3849_ = v_isSharedCheck_3858_;
goto v_resetjp_3847_;
}
else
{
lean_dec(v_a_3841_);
v___x_3848_ = lean_box(0);
v_isShared_3849_ = v_isSharedCheck_3858_;
goto v_resetjp_3847_;
}
v_resetjp_3847_:
{
lean_object* v___x_3850_; lean_object* v___x_3852_; 
v___x_3850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3850_, 0, v___x_3846_);
lean_ctor_set(v___x_3850_, 1, v___x_3830_);
if (v_isShared_3849_ == 0)
{
lean_ctor_set(v___x_3848_, 0, v___x_3850_);
v___x_3852_ = v___x_3848_;
goto v_reusejp_3851_;
}
else
{
lean_object* v_reuseFailAlloc_3857_; 
v_reuseFailAlloc_3857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3857_, 0, v___x_3850_);
v___x_3852_ = v_reuseFailAlloc_3857_;
goto v_reusejp_3851_;
}
v_reusejp_3851_:
{
lean_object* v___x_3853_; lean_object* v___x_3855_; 
v___x_3853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3853_, 0, v___x_3852_);
lean_ctor_set(v___x_3853_, 1, v_snd_3812_);
if (v_isShared_3844_ == 0)
{
lean_ctor_set(v___x_3843_, 0, v___x_3853_);
v___x_3855_ = v___x_3843_;
goto v_reusejp_3854_;
}
else
{
lean_object* v_reuseFailAlloc_3856_; 
v_reuseFailAlloc_3856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3856_, 0, v___x_3853_);
v___x_3855_ = v_reuseFailAlloc_3856_;
goto v_reusejp_3854_;
}
v_reusejp_3854_:
{
return v___x_3855_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3862_; lean_object* v___x_3864_; uint8_t v_isShared_3865_; uint8_t v_isSharedCheck_3869_; 
lean_del_object(v___x_3828_);
lean_del_object(v___x_3814_);
lean_dec(v_snd_3812_);
lean_dec(v_mvarId_3800_);
lean_dec_ref(v_p_3799_);
v_a_3862_ = lean_ctor_get(v___x_3840_, 0);
v_isSharedCheck_3869_ = !lean_is_exclusive(v___x_3840_);
if (v_isSharedCheck_3869_ == 0)
{
v___x_3864_ = v___x_3840_;
v_isShared_3865_ = v_isSharedCheck_3869_;
goto v_resetjp_3863_;
}
else
{
lean_inc(v_a_3862_);
lean_dec(v___x_3840_);
v___x_3864_ = lean_box(0);
v_isShared_3865_ = v_isSharedCheck_3869_;
goto v_resetjp_3863_;
}
v_resetjp_3863_:
{
lean_object* v___x_3867_; 
if (v_isShared_3865_ == 0)
{
v___x_3867_ = v___x_3864_;
goto v_reusejp_3866_;
}
else
{
lean_object* v_reuseFailAlloc_3868_; 
v_reuseFailAlloc_3868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3868_, 0, v_a_3862_);
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
else
{
lean_object* v_a_3870_; lean_object* v___x_3872_; uint8_t v_isShared_3873_; uint8_t v_isSharedCheck_3877_; 
lean_del_object(v___x_3828_);
lean_dec(v_val_3826_);
lean_del_object(v___x_3814_);
lean_dec(v_snd_3812_);
lean_dec(v_mvarId_3800_);
lean_dec_ref(v_p_3799_);
v_a_3870_ = lean_ctor_get(v___x_3832_, 0);
v_isSharedCheck_3877_ = !lean_is_exclusive(v___x_3832_);
if (v_isSharedCheck_3877_ == 0)
{
v___x_3872_ = v___x_3832_;
v_isShared_3873_ = v_isSharedCheck_3877_;
goto v_resetjp_3871_;
}
else
{
lean_inc(v_a_3870_);
lean_dec(v___x_3832_);
v___x_3872_ = lean_box(0);
v_isShared_3873_ = v_isSharedCheck_3877_;
goto v_resetjp_3871_;
}
v_resetjp_3871_:
{
lean_object* v___x_3875_; 
if (v_isShared_3873_ == 0)
{
v___x_3875_ = v___x_3872_;
goto v_reusejp_3874_;
}
else
{
lean_object* v_reuseFailAlloc_3876_; 
v_reuseFailAlloc_3876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3876_, 0, v_a_3870_);
v___x_3875_ = v_reuseFailAlloc_3876_;
goto v_reusejp_3874_;
}
v_reusejp_3874_:
{
return v___x_3875_;
}
}
}
}
}
v___jp_3817_:
{
lean_object* v___x_3820_; 
if (v_isShared_3815_ == 0)
{
lean_ctor_set(v___x_3814_, 1, v_a_3818_);
lean_ctor_set(v___x_3814_, 0, v___x_3816_);
v___x_3820_ = v___x_3814_;
goto v_reusejp_3819_;
}
else
{
lean_object* v_reuseFailAlloc_3824_; 
v_reuseFailAlloc_3824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3824_, 0, v___x_3816_);
lean_ctor_set(v_reuseFailAlloc_3824_, 1, v_a_3818_);
v___x_3820_ = v_reuseFailAlloc_3824_;
goto v_reusejp_3819_;
}
v_reusejp_3819_:
{
size_t v___x_3821_; size_t v___x_3822_; 
v___x_3821_ = ((size_t)1ULL);
v___x_3822_ = lean_usize_add(v_i_3803_, v___x_3821_);
v_i_3803_ = v___x_3822_;
v_b_3804_ = v___x_3820_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___boxed(lean_object* v_p_3881_, lean_object* v_mvarId_3882_, lean_object* v_as_3883_, lean_object* v_sz_3884_, lean_object* v_i_3885_, lean_object* v_b_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_){
_start:
{
size_t v_sz_boxed_3892_; size_t v_i_boxed_3893_; lean_object* v_res_3894_; 
v_sz_boxed_3892_ = lean_unbox_usize(v_sz_3884_);
lean_dec(v_sz_3884_);
v_i_boxed_3893_ = lean_unbox_usize(v_i_3885_);
lean_dec(v_i_3885_);
v_res_3894_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6(v_p_3881_, v_mvarId_3882_, v_as_3883_, v_sz_boxed_3892_, v_i_boxed_3893_, v_b_3886_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_);
lean_dec(v___y_3890_);
lean_dec_ref(v___y_3889_);
lean_dec(v___y_3888_);
lean_dec_ref(v___y_3887_);
lean_dec_ref(v_as_3883_);
return v_res_3894_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3(lean_object* v_p_3895_, lean_object* v_mvarId_3896_, lean_object* v_as_3897_, size_t v_sz_3898_, size_t v_i_3899_, lean_object* v_b_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_){
_start:
{
uint8_t v___x_3906_; 
v___x_3906_ = lean_usize_dec_lt(v_i_3899_, v_sz_3898_);
if (v___x_3906_ == 0)
{
lean_object* v___x_3907_; 
lean_dec(v_mvarId_3896_);
lean_dec_ref(v_p_3895_);
v___x_3907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3907_, 0, v_b_3900_);
return v___x_3907_;
}
else
{
lean_object* v_snd_3908_; lean_object* v___x_3910_; uint8_t v_isShared_3911_; uint8_t v_isSharedCheck_3975_; 
v_snd_3908_ = lean_ctor_get(v_b_3900_, 1);
v_isSharedCheck_3975_ = !lean_is_exclusive(v_b_3900_);
if (v_isSharedCheck_3975_ == 0)
{
lean_object* v_unused_3976_; 
v_unused_3976_ = lean_ctor_get(v_b_3900_, 0);
lean_dec(v_unused_3976_);
v___x_3910_ = v_b_3900_;
v_isShared_3911_ = v_isSharedCheck_3975_;
goto v_resetjp_3909_;
}
else
{
lean_inc(v_snd_3908_);
lean_dec(v_b_3900_);
v___x_3910_ = lean_box(0);
v_isShared_3911_ = v_isSharedCheck_3975_;
goto v_resetjp_3909_;
}
v_resetjp_3909_:
{
lean_object* v___x_3912_; lean_object* v_a_3914_; lean_object* v_a_3921_; 
v___x_3912_ = lean_box(0);
v_a_3921_ = lean_array_uget(v_as_3897_, v_i_3899_);
if (lean_obj_tag(v_a_3921_) == 0)
{
v_a_3914_ = v_snd_3908_;
goto v___jp_3913_;
}
else
{
lean_object* v_val_3922_; lean_object* v___x_3924_; uint8_t v_isShared_3925_; uint8_t v_isSharedCheck_3974_; 
v_val_3922_ = lean_ctor_get(v_a_3921_, 0);
v_isSharedCheck_3974_ = !lean_is_exclusive(v_a_3921_);
if (v_isSharedCheck_3974_ == 0)
{
v___x_3924_ = v_a_3921_;
v_isShared_3925_ = v_isSharedCheck_3974_;
goto v_resetjp_3923_;
}
else
{
lean_inc(v_val_3922_);
lean_dec(v_a_3921_);
v___x_3924_ = lean_box(0);
v_isShared_3925_ = v_isSharedCheck_3974_;
goto v_resetjp_3923_;
}
v_resetjp_3923_:
{
lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; 
v___x_3926_ = lean_box(0);
v___x_3927_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__0));
lean_inc_ref(v_p_3895_);
lean_inc(v___y_3904_);
lean_inc_ref(v___y_3903_);
lean_inc(v___y_3902_);
lean_inc_ref(v___y_3901_);
lean_inc(v_val_3922_);
v___x_3928_ = lean_apply_6(v_p_3895_, v_val_3922_, v___y_3901_, v___y_3902_, v___y_3903_, v___y_3904_, lean_box(0));
if (lean_obj_tag(v___x_3928_) == 0)
{
lean_object* v_a_3929_; uint8_t v___x_3930_; 
v_a_3929_ = lean_ctor_get(v___x_3928_, 0);
lean_inc(v_a_3929_);
lean_dec_ref_known(v___x_3928_, 1);
v___x_3930_ = lean_unbox(v_a_3929_);
lean_dec(v_a_3929_);
if (v___x_3930_ == 0)
{
lean_del_object(v___x_3924_);
lean_dec(v_val_3922_);
lean_dec(v_snd_3908_);
v_a_3914_ = v___x_3927_;
goto v___jp_3913_;
}
else
{
lean_object* v___x_3931_; lean_object* v___x_3932_; uint8_t v___x_3933_; lean_object* v___x_3934_; lean_object* v___f_3935_; lean_object* v___x_3936_; 
v___x_3931_ = l_Lean_LocalDecl_fvarId(v_val_3922_);
lean_dec(v_val_3922_);
v___x_3932_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__1));
v___x_3933_ = 0;
v___x_3934_ = lean_box(v___x_3933_);
lean_inc(v_mvarId_3896_);
v___f_3935_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0___boxed), 10, 5);
lean_closure_set(v___f_3935_, 0, v_mvarId_3896_);
lean_closure_set(v___f_3935_, 1, v___x_3931_);
lean_closure_set(v___f_3935_, 2, v___x_3932_);
lean_closure_set(v___f_3935_, 3, v___x_3934_);
lean_closure_set(v___f_3935_, 4, v___x_3912_);
v___x_3936_ = l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(v___f_3935_, v___y_3901_, v___y_3902_, v___y_3903_, v___y_3904_);
if (lean_obj_tag(v___x_3936_) == 0)
{
lean_object* v_a_3937_; lean_object* v___x_3939_; uint8_t v_isShared_3940_; uint8_t v_isSharedCheck_3957_; 
v_a_3937_ = lean_ctor_get(v___x_3936_, 0);
v_isSharedCheck_3957_ = !lean_is_exclusive(v___x_3936_);
if (v_isSharedCheck_3957_ == 0)
{
v___x_3939_ = v___x_3936_;
v_isShared_3940_ = v_isSharedCheck_3957_;
goto v_resetjp_3938_;
}
else
{
lean_inc(v_a_3937_);
lean_dec(v___x_3936_);
v___x_3939_ = lean_box(0);
v_isShared_3940_ = v_isSharedCheck_3957_;
goto v_resetjp_3938_;
}
v_resetjp_3938_:
{
if (lean_obj_tag(v_a_3937_) == 0)
{
lean_del_object(v___x_3939_);
lean_del_object(v___x_3924_);
lean_dec(v_snd_3908_);
v_a_3914_ = v___x_3927_;
goto v___jp_3913_;
}
else
{
lean_object* v___x_3942_; 
lean_del_object(v___x_3910_);
lean_dec(v_mvarId_3896_);
lean_dec_ref(v_p_3895_);
lean_inc_ref(v_a_3937_);
if (v_isShared_3925_ == 0)
{
lean_ctor_set(v___x_3924_, 0, v_a_3937_);
v___x_3942_ = v___x_3924_;
goto v_reusejp_3941_;
}
else
{
lean_object* v_reuseFailAlloc_3956_; 
v_reuseFailAlloc_3956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3956_, 0, v_a_3937_);
v___x_3942_ = v_reuseFailAlloc_3956_;
goto v_reusejp_3941_;
}
v_reusejp_3941_:
{
lean_object* v___x_3944_; uint8_t v_isShared_3945_; uint8_t v_isSharedCheck_3954_; 
v_isSharedCheck_3954_ = !lean_is_exclusive(v_a_3937_);
if (v_isSharedCheck_3954_ == 0)
{
lean_object* v_unused_3955_; 
v_unused_3955_ = lean_ctor_get(v_a_3937_, 0);
lean_dec(v_unused_3955_);
v___x_3944_ = v_a_3937_;
v_isShared_3945_ = v_isSharedCheck_3954_;
goto v_resetjp_3943_;
}
else
{
lean_dec(v_a_3937_);
v___x_3944_ = lean_box(0);
v_isShared_3945_ = v_isSharedCheck_3954_;
goto v_resetjp_3943_;
}
v_resetjp_3943_:
{
lean_object* v___x_3946_; lean_object* v___x_3948_; 
v___x_3946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3946_, 0, v___x_3942_);
lean_ctor_set(v___x_3946_, 1, v___x_3926_);
if (v_isShared_3945_ == 0)
{
lean_ctor_set(v___x_3944_, 0, v___x_3946_);
v___x_3948_ = v___x_3944_;
goto v_reusejp_3947_;
}
else
{
lean_object* v_reuseFailAlloc_3953_; 
v_reuseFailAlloc_3953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3953_, 0, v___x_3946_);
v___x_3948_ = v_reuseFailAlloc_3953_;
goto v_reusejp_3947_;
}
v_reusejp_3947_:
{
lean_object* v___x_3949_; lean_object* v___x_3951_; 
v___x_3949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3949_, 0, v___x_3948_);
lean_ctor_set(v___x_3949_, 1, v_snd_3908_);
if (v_isShared_3940_ == 0)
{
lean_ctor_set(v___x_3939_, 0, v___x_3949_);
v___x_3951_ = v___x_3939_;
goto v_reusejp_3950_;
}
else
{
lean_object* v_reuseFailAlloc_3952_; 
v_reuseFailAlloc_3952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3952_, 0, v___x_3949_);
v___x_3951_ = v_reuseFailAlloc_3952_;
goto v_reusejp_3950_;
}
v_reusejp_3950_:
{
return v___x_3951_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3958_; lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_3965_; 
lean_del_object(v___x_3924_);
lean_del_object(v___x_3910_);
lean_dec(v_snd_3908_);
lean_dec(v_mvarId_3896_);
lean_dec_ref(v_p_3895_);
v_a_3958_ = lean_ctor_get(v___x_3936_, 0);
v_isSharedCheck_3965_ = !lean_is_exclusive(v___x_3936_);
if (v_isSharedCheck_3965_ == 0)
{
v___x_3960_ = v___x_3936_;
v_isShared_3961_ = v_isSharedCheck_3965_;
goto v_resetjp_3959_;
}
else
{
lean_inc(v_a_3958_);
lean_dec(v___x_3936_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_3965_;
goto v_resetjp_3959_;
}
v_resetjp_3959_:
{
lean_object* v___x_3963_; 
if (v_isShared_3961_ == 0)
{
v___x_3963_ = v___x_3960_;
goto v_reusejp_3962_;
}
else
{
lean_object* v_reuseFailAlloc_3964_; 
v_reuseFailAlloc_3964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3964_, 0, v_a_3958_);
v___x_3963_ = v_reuseFailAlloc_3964_;
goto v_reusejp_3962_;
}
v_reusejp_3962_:
{
return v___x_3963_;
}
}
}
}
}
else
{
lean_object* v_a_3966_; lean_object* v___x_3968_; uint8_t v_isShared_3969_; uint8_t v_isSharedCheck_3973_; 
lean_del_object(v___x_3924_);
lean_dec(v_val_3922_);
lean_del_object(v___x_3910_);
lean_dec(v_snd_3908_);
lean_dec(v_mvarId_3896_);
lean_dec_ref(v_p_3895_);
v_a_3966_ = lean_ctor_get(v___x_3928_, 0);
v_isSharedCheck_3973_ = !lean_is_exclusive(v___x_3928_);
if (v_isSharedCheck_3973_ == 0)
{
v___x_3968_ = v___x_3928_;
v_isShared_3969_ = v_isSharedCheck_3973_;
goto v_resetjp_3967_;
}
else
{
lean_inc(v_a_3966_);
lean_dec(v___x_3928_);
v___x_3968_ = lean_box(0);
v_isShared_3969_ = v_isSharedCheck_3973_;
goto v_resetjp_3967_;
}
v_resetjp_3967_:
{
lean_object* v___x_3971_; 
if (v_isShared_3969_ == 0)
{
v___x_3971_ = v___x_3968_;
goto v_reusejp_3970_;
}
else
{
lean_object* v_reuseFailAlloc_3972_; 
v_reuseFailAlloc_3972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3972_, 0, v_a_3966_);
v___x_3971_ = v_reuseFailAlloc_3972_;
goto v_reusejp_3970_;
}
v_reusejp_3970_:
{
return v___x_3971_;
}
}
}
}
}
v___jp_3913_:
{
lean_object* v___x_3916_; 
if (v_isShared_3911_ == 0)
{
lean_ctor_set(v___x_3910_, 1, v_a_3914_);
lean_ctor_set(v___x_3910_, 0, v___x_3912_);
v___x_3916_ = v___x_3910_;
goto v_reusejp_3915_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v___x_3912_);
lean_ctor_set(v_reuseFailAlloc_3920_, 1, v_a_3914_);
v___x_3916_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3915_;
}
v_reusejp_3915_:
{
size_t v___x_3917_; size_t v___x_3918_; lean_object* v___x_3919_; 
v___x_3917_ = ((size_t)1ULL);
v___x_3918_ = lean_usize_add(v_i_3899_, v___x_3917_);
v___x_3919_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6(v_p_3895_, v_mvarId_3896_, v_as_3897_, v_sz_3898_, v___x_3918_, v___x_3916_, v___y_3901_, v___y_3902_, v___y_3903_, v___y_3904_);
return v___x_3919_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___boxed(lean_object* v_p_3977_, lean_object* v_mvarId_3978_, lean_object* v_as_3979_, lean_object* v_sz_3980_, lean_object* v_i_3981_, lean_object* v_b_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_){
_start:
{
size_t v_sz_boxed_3988_; size_t v_i_boxed_3989_; lean_object* v_res_3990_; 
v_sz_boxed_3988_ = lean_unbox_usize(v_sz_3980_);
lean_dec(v_sz_3980_);
v_i_boxed_3989_ = lean_unbox_usize(v_i_3981_);
lean_dec(v_i_3981_);
v_res_3990_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3(v_p_3977_, v_mvarId_3978_, v_as_3979_, v_sz_boxed_3988_, v_i_boxed_3989_, v_b_3982_, v___y_3983_, v___y_3984_, v___y_3985_, v___y_3986_);
lean_dec(v___y_3986_);
lean_dec_ref(v___y_3985_);
lean_dec(v___y_3984_);
lean_dec_ref(v___y_3983_);
lean_dec_ref(v_as_3979_);
return v_res_3990_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2(lean_object* v_p_3991_, lean_object* v_mvarId_3992_, lean_object* v_t_3993_, lean_object* v_init_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_){
_start:
{
lean_object* v_root_4000_; lean_object* v_tail_4001_; lean_object* v___x_4002_; 
v_root_4000_ = lean_ctor_get(v_t_3993_, 0);
v_tail_4001_ = lean_ctor_get(v_t_3993_, 1);
lean_inc(v_mvarId_3992_);
lean_inc_ref(v_p_3991_);
lean_inc_ref(v_init_3994_);
v___x_4002_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2(v_init_3994_, v_p_3991_, v_mvarId_3992_, v_root_4000_, v_init_3994_, v___y_3995_, v___y_3996_, v___y_3997_, v___y_3998_);
lean_dec_ref(v_init_3994_);
if (lean_obj_tag(v___x_4002_) == 0)
{
lean_object* v_a_4003_; lean_object* v___x_4005_; uint8_t v_isShared_4006_; uint8_t v_isSharedCheck_4039_; 
v_a_4003_ = lean_ctor_get(v___x_4002_, 0);
v_isSharedCheck_4039_ = !lean_is_exclusive(v___x_4002_);
if (v_isSharedCheck_4039_ == 0)
{
v___x_4005_ = v___x_4002_;
v_isShared_4006_ = v_isSharedCheck_4039_;
goto v_resetjp_4004_;
}
else
{
lean_inc(v_a_4003_);
lean_dec(v___x_4002_);
v___x_4005_ = lean_box(0);
v_isShared_4006_ = v_isSharedCheck_4039_;
goto v_resetjp_4004_;
}
v_resetjp_4004_:
{
if (lean_obj_tag(v_a_4003_) == 0)
{
lean_object* v_a_4007_; lean_object* v___x_4009_; 
lean_dec(v_mvarId_3992_);
lean_dec_ref(v_p_3991_);
v_a_4007_ = lean_ctor_get(v_a_4003_, 0);
lean_inc(v_a_4007_);
lean_dec_ref_known(v_a_4003_, 1);
if (v_isShared_4006_ == 0)
{
lean_ctor_set(v___x_4005_, 0, v_a_4007_);
v___x_4009_ = v___x_4005_;
goto v_reusejp_4008_;
}
else
{
lean_object* v_reuseFailAlloc_4010_; 
v_reuseFailAlloc_4010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4010_, 0, v_a_4007_);
v___x_4009_ = v_reuseFailAlloc_4010_;
goto v_reusejp_4008_;
}
v_reusejp_4008_:
{
return v___x_4009_;
}
}
else
{
lean_object* v_a_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; size_t v_sz_4014_; size_t v___x_4015_; lean_object* v___x_4016_; 
lean_del_object(v___x_4005_);
v_a_4011_ = lean_ctor_get(v_a_4003_, 0);
lean_inc(v_a_4011_);
lean_dec_ref_known(v_a_4003_, 1);
v___x_4012_ = lean_box(0);
v___x_4013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4013_, 0, v___x_4012_);
lean_ctor_set(v___x_4013_, 1, v_a_4011_);
v_sz_4014_ = lean_array_size(v_tail_4001_);
v___x_4015_ = ((size_t)0ULL);
v___x_4016_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3(v_p_3991_, v_mvarId_3992_, v_tail_4001_, v_sz_4014_, v___x_4015_, v___x_4013_, v___y_3995_, v___y_3996_, v___y_3997_, v___y_3998_);
if (lean_obj_tag(v___x_4016_) == 0)
{
lean_object* v_a_4017_; lean_object* v___x_4019_; uint8_t v_isShared_4020_; uint8_t v_isSharedCheck_4030_; 
v_a_4017_ = lean_ctor_get(v___x_4016_, 0);
v_isSharedCheck_4030_ = !lean_is_exclusive(v___x_4016_);
if (v_isSharedCheck_4030_ == 0)
{
v___x_4019_ = v___x_4016_;
v_isShared_4020_ = v_isSharedCheck_4030_;
goto v_resetjp_4018_;
}
else
{
lean_inc(v_a_4017_);
lean_dec(v___x_4016_);
v___x_4019_ = lean_box(0);
v_isShared_4020_ = v_isSharedCheck_4030_;
goto v_resetjp_4018_;
}
v_resetjp_4018_:
{
lean_object* v_fst_4021_; 
v_fst_4021_ = lean_ctor_get(v_a_4017_, 0);
if (lean_obj_tag(v_fst_4021_) == 0)
{
lean_object* v_snd_4022_; lean_object* v___x_4024_; 
v_snd_4022_ = lean_ctor_get(v_a_4017_, 1);
lean_inc(v_snd_4022_);
lean_dec(v_a_4017_);
if (v_isShared_4020_ == 0)
{
lean_ctor_set(v___x_4019_, 0, v_snd_4022_);
v___x_4024_ = v___x_4019_;
goto v_reusejp_4023_;
}
else
{
lean_object* v_reuseFailAlloc_4025_; 
v_reuseFailAlloc_4025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4025_, 0, v_snd_4022_);
v___x_4024_ = v_reuseFailAlloc_4025_;
goto v_reusejp_4023_;
}
v_reusejp_4023_:
{
return v___x_4024_;
}
}
else
{
lean_object* v_val_4026_; lean_object* v___x_4028_; 
lean_inc_ref(v_fst_4021_);
lean_dec(v_a_4017_);
v_val_4026_ = lean_ctor_get(v_fst_4021_, 0);
lean_inc(v_val_4026_);
lean_dec_ref_known(v_fst_4021_, 1);
if (v_isShared_4020_ == 0)
{
lean_ctor_set(v___x_4019_, 0, v_val_4026_);
v___x_4028_ = v___x_4019_;
goto v_reusejp_4027_;
}
else
{
lean_object* v_reuseFailAlloc_4029_; 
v_reuseFailAlloc_4029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4029_, 0, v_val_4026_);
v___x_4028_ = v_reuseFailAlloc_4029_;
goto v_reusejp_4027_;
}
v_reusejp_4027_:
{
return v___x_4028_;
}
}
}
}
else
{
lean_object* v_a_4031_; lean_object* v___x_4033_; uint8_t v_isShared_4034_; uint8_t v_isSharedCheck_4038_; 
v_a_4031_ = lean_ctor_get(v___x_4016_, 0);
v_isSharedCheck_4038_ = !lean_is_exclusive(v___x_4016_);
if (v_isSharedCheck_4038_ == 0)
{
v___x_4033_ = v___x_4016_;
v_isShared_4034_ = v_isSharedCheck_4038_;
goto v_resetjp_4032_;
}
else
{
lean_inc(v_a_4031_);
lean_dec(v___x_4016_);
v___x_4033_ = lean_box(0);
v_isShared_4034_ = v_isSharedCheck_4038_;
goto v_resetjp_4032_;
}
v_resetjp_4032_:
{
lean_object* v___x_4036_; 
if (v_isShared_4034_ == 0)
{
v___x_4036_ = v___x_4033_;
goto v_reusejp_4035_;
}
else
{
lean_object* v_reuseFailAlloc_4037_; 
v_reuseFailAlloc_4037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4037_, 0, v_a_4031_);
v___x_4036_ = v_reuseFailAlloc_4037_;
goto v_reusejp_4035_;
}
v_reusejp_4035_:
{
return v___x_4036_;
}
}
}
}
}
}
else
{
lean_object* v_a_4040_; lean_object* v___x_4042_; uint8_t v_isShared_4043_; uint8_t v_isSharedCheck_4047_; 
lean_dec(v_mvarId_3992_);
lean_dec_ref(v_p_3991_);
v_a_4040_ = lean_ctor_get(v___x_4002_, 0);
v_isSharedCheck_4047_ = !lean_is_exclusive(v___x_4002_);
if (v_isSharedCheck_4047_ == 0)
{
v___x_4042_ = v___x_4002_;
v_isShared_4043_ = v_isSharedCheck_4047_;
goto v_resetjp_4041_;
}
else
{
lean_inc(v_a_4040_);
lean_dec(v___x_4002_);
v___x_4042_ = lean_box(0);
v_isShared_4043_ = v_isSharedCheck_4047_;
goto v_resetjp_4041_;
}
v_resetjp_4041_:
{
lean_object* v___x_4045_; 
if (v_isShared_4043_ == 0)
{
v___x_4045_ = v___x_4042_;
goto v_reusejp_4044_;
}
else
{
lean_object* v_reuseFailAlloc_4046_; 
v_reuseFailAlloc_4046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4046_, 0, v_a_4040_);
v___x_4045_ = v_reuseFailAlloc_4046_;
goto v_reusejp_4044_;
}
v_reusejp_4044_:
{
return v___x_4045_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2___boxed(lean_object* v_p_4048_, lean_object* v_mvarId_4049_, lean_object* v_t_4050_, lean_object* v_init_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_, lean_object* v___y_4056_){
_start:
{
lean_object* v_res_4057_; 
v_res_4057_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2(v_p_4048_, v_mvarId_4049_, v_t_4050_, v_init_4051_, v___y_4052_, v___y_4053_, v___y_4054_, v___y_4055_);
lean_dec(v___y_4055_);
lean_dec_ref(v___y_4054_);
lean_dec(v___y_4053_);
lean_dec_ref(v___y_4052_);
lean_dec_ref(v_t_4050_);
return v_res_4057_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__0(lean_object* v_p_4061_, lean_object* v_mvarId_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_, lean_object* v___y_4066_){
_start:
{
lean_object* v_lctx_4068_; lean_object* v_decls_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; 
v_lctx_4068_ = lean_ctor_get(v___y_4063_, 2);
v_decls_4069_ = lean_ctor_get(v_lctx_4068_, 1);
v___x_4070_ = lean_box(0);
v___x_4071_ = ((lean_object*)(l_Lean_MVarId_casesRec___lam__0___closed__0));
v___x_4072_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2(v_p_4061_, v_mvarId_4062_, v_decls_4069_, v___x_4071_, v___y_4063_, v___y_4064_, v___y_4065_, v___y_4066_);
if (lean_obj_tag(v___x_4072_) == 0)
{
lean_object* v_a_4073_; lean_object* v___x_4075_; uint8_t v_isShared_4076_; uint8_t v_isSharedCheck_4085_; 
v_a_4073_ = lean_ctor_get(v___x_4072_, 0);
v_isSharedCheck_4085_ = !lean_is_exclusive(v___x_4072_);
if (v_isSharedCheck_4085_ == 0)
{
v___x_4075_ = v___x_4072_;
v_isShared_4076_ = v_isSharedCheck_4085_;
goto v_resetjp_4074_;
}
else
{
lean_inc(v_a_4073_);
lean_dec(v___x_4072_);
v___x_4075_ = lean_box(0);
v_isShared_4076_ = v_isSharedCheck_4085_;
goto v_resetjp_4074_;
}
v_resetjp_4074_:
{
lean_object* v_fst_4077_; 
v_fst_4077_ = lean_ctor_get(v_a_4073_, 0);
lean_inc(v_fst_4077_);
lean_dec(v_a_4073_);
if (lean_obj_tag(v_fst_4077_) == 0)
{
lean_object* v___x_4079_; 
if (v_isShared_4076_ == 0)
{
lean_ctor_set(v___x_4075_, 0, v___x_4070_);
v___x_4079_ = v___x_4075_;
goto v_reusejp_4078_;
}
else
{
lean_object* v_reuseFailAlloc_4080_; 
v_reuseFailAlloc_4080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4080_, 0, v___x_4070_);
v___x_4079_ = v_reuseFailAlloc_4080_;
goto v_reusejp_4078_;
}
v_reusejp_4078_:
{
return v___x_4079_;
}
}
else
{
lean_object* v_val_4081_; lean_object* v___x_4083_; 
v_val_4081_ = lean_ctor_get(v_fst_4077_, 0);
lean_inc(v_val_4081_);
lean_dec_ref_known(v_fst_4077_, 1);
if (v_isShared_4076_ == 0)
{
lean_ctor_set(v___x_4075_, 0, v_val_4081_);
v___x_4083_ = v___x_4075_;
goto v_reusejp_4082_;
}
else
{
lean_object* v_reuseFailAlloc_4084_; 
v_reuseFailAlloc_4084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4084_, 0, v_val_4081_);
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
v_a_4086_ = lean_ctor_get(v___x_4072_, 0);
v_isSharedCheck_4093_ = !lean_is_exclusive(v___x_4072_);
if (v_isSharedCheck_4093_ == 0)
{
v___x_4088_ = v___x_4072_;
v_isShared_4089_ = v_isSharedCheck_4093_;
goto v_resetjp_4087_;
}
else
{
lean_inc(v_a_4086_);
lean_dec(v___x_4072_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__0___boxed(lean_object* v_p_4094_, lean_object* v_mvarId_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_){
_start:
{
lean_object* v_res_4101_; 
v_res_4101_ = l_Lean_MVarId_casesRec___lam__0(v_p_4094_, v_mvarId_4095_, v___y_4096_, v___y_4097_, v___y_4098_, v___y_4099_);
lean_dec(v___y_4099_);
lean_dec_ref(v___y_4098_);
lean_dec(v___y_4097_);
lean_dec_ref(v___y_4096_);
return v_res_4101_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__1(lean_object* v_p_4102_, lean_object* v_mvarId_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_){
_start:
{
lean_object* v___f_4109_; lean_object* v___x_4110_; 
lean_inc(v_mvarId_4103_);
v___f_4109_ = lean_alloc_closure((void*)(l_Lean_MVarId_casesRec___lam__0___boxed), 7, 2);
lean_closure_set(v___f_4109_, 0, v_p_4102_);
lean_closure_set(v___f_4109_, 1, v_mvarId_4103_);
v___x_4110_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_4103_, v___f_4109_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_);
return v___x_4110_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__1___boxed(lean_object* v_p_4111_, lean_object* v_mvarId_4112_, lean_object* v___y_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_){
_start:
{
lean_object* v_res_4118_; 
v_res_4118_ = l_Lean_MVarId_casesRec___lam__1(v_p_4111_, v_mvarId_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_);
lean_dec(v___y_4116_);
lean_dec_ref(v___y_4115_);
lean_dec(v___y_4114_);
lean_dec_ref(v___y_4113_);
return v_res_4118_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec(lean_object* v_mvarId_4119_, lean_object* v_p_4120_, lean_object* v_a_4121_, lean_object* v_a_4122_, lean_object* v_a_4123_, lean_object* v_a_4124_){
_start:
{
lean_object* v___f_4126_; lean_object* v___x_4127_; 
v___f_4126_ = lean_alloc_closure((void*)(l_Lean_MVarId_casesRec___lam__1___boxed), 7, 1);
lean_closure_set(v___f_4126_, 0, v_p_4120_);
v___x_4127_ = l_Lean_Meta_saturate(v_mvarId_4119_, v___f_4126_, v_a_4121_, v_a_4122_, v_a_4123_, v_a_4124_);
return v___x_4127_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___boxed(lean_object* v_mvarId_4128_, lean_object* v_p_4129_, lean_object* v_a_4130_, lean_object* v_a_4131_, lean_object* v_a_4132_, lean_object* v_a_4133_, lean_object* v_a_4134_){
_start:
{
lean_object* v_res_4135_; 
v_res_4135_ = l_Lean_MVarId_casesRec(v_mvarId_4128_, v_p_4129_, v_a_4130_, v_a_4131_, v_a_4132_, v_a_4133_);
lean_dec(v_a_4133_);
lean_dec_ref(v_a_4132_);
lean_dec(v_a_4131_);
lean_dec_ref(v_a_4130_);
return v_res_4135_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg(lean_object* v_e_4136_, lean_object* v___y_4137_){
_start:
{
uint8_t v___x_4139_; 
v___x_4139_ = l_Lean_Expr_hasMVar(v_e_4136_);
if (v___x_4139_ == 0)
{
lean_object* v___x_4140_; 
v___x_4140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4140_, 0, v_e_4136_);
return v___x_4140_;
}
else
{
lean_object* v___x_4141_; lean_object* v_mctx_4142_; lean_object* v___x_4143_; lean_object* v_fst_4144_; lean_object* v_snd_4145_; lean_object* v___x_4146_; lean_object* v_cache_4147_; lean_object* v_zetaDeltaFVarIds_4148_; lean_object* v_postponed_4149_; lean_object* v_diag_4150_; lean_object* v___x_4152_; uint8_t v_isShared_4153_; uint8_t v_isSharedCheck_4159_; 
v___x_4141_ = lean_st_ref_get(v___y_4137_);
v_mctx_4142_ = lean_ctor_get(v___x_4141_, 0);
lean_inc_ref(v_mctx_4142_);
lean_dec(v___x_4141_);
v___x_4143_ = l_Lean_instantiateMVarsCore(v_mctx_4142_, v_e_4136_);
v_fst_4144_ = lean_ctor_get(v___x_4143_, 0);
lean_inc(v_fst_4144_);
v_snd_4145_ = lean_ctor_get(v___x_4143_, 1);
lean_inc(v_snd_4145_);
lean_dec_ref(v___x_4143_);
v___x_4146_ = lean_st_ref_take(v___y_4137_);
v_cache_4147_ = lean_ctor_get(v___x_4146_, 1);
v_zetaDeltaFVarIds_4148_ = lean_ctor_get(v___x_4146_, 2);
v_postponed_4149_ = lean_ctor_get(v___x_4146_, 3);
v_diag_4150_ = lean_ctor_get(v___x_4146_, 4);
v_isSharedCheck_4159_ = !lean_is_exclusive(v___x_4146_);
if (v_isSharedCheck_4159_ == 0)
{
lean_object* v_unused_4160_; 
v_unused_4160_ = lean_ctor_get(v___x_4146_, 0);
lean_dec(v_unused_4160_);
v___x_4152_ = v___x_4146_;
v_isShared_4153_ = v_isSharedCheck_4159_;
goto v_resetjp_4151_;
}
else
{
lean_inc(v_diag_4150_);
lean_inc(v_postponed_4149_);
lean_inc(v_zetaDeltaFVarIds_4148_);
lean_inc(v_cache_4147_);
lean_dec(v___x_4146_);
v___x_4152_ = lean_box(0);
v_isShared_4153_ = v_isSharedCheck_4159_;
goto v_resetjp_4151_;
}
v_resetjp_4151_:
{
lean_object* v___x_4155_; 
if (v_isShared_4153_ == 0)
{
lean_ctor_set(v___x_4152_, 0, v_snd_4145_);
v___x_4155_ = v___x_4152_;
goto v_reusejp_4154_;
}
else
{
lean_object* v_reuseFailAlloc_4158_; 
v_reuseFailAlloc_4158_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4158_, 0, v_snd_4145_);
lean_ctor_set(v_reuseFailAlloc_4158_, 1, v_cache_4147_);
lean_ctor_set(v_reuseFailAlloc_4158_, 2, v_zetaDeltaFVarIds_4148_);
lean_ctor_set(v_reuseFailAlloc_4158_, 3, v_postponed_4149_);
lean_ctor_set(v_reuseFailAlloc_4158_, 4, v_diag_4150_);
v___x_4155_ = v_reuseFailAlloc_4158_;
goto v_reusejp_4154_;
}
v_reusejp_4154_:
{
lean_object* v___x_4156_; lean_object* v___x_4157_; 
v___x_4156_ = lean_st_ref_put(v___y_4137_, v___x_4155_);
v___x_4157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4157_, 0, v_fst_4144_);
return v___x_4157_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg___boxed(lean_object* v_e_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_){
_start:
{
lean_object* v_res_4164_; 
v_res_4164_ = l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg(v_e_4161_, v___y_4162_);
lean_dec(v___y_4162_);
return v_res_4164_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0(lean_object* v_e_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_, lean_object* v___y_4168_, lean_object* v___y_4169_){
_start:
{
lean_object* v___x_4171_; 
v___x_4171_ = l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg(v_e_4165_, v___y_4167_);
return v___x_4171_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___boxed(lean_object* v_e_4172_, lean_object* v___y_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_){
_start:
{
lean_object* v_res_4178_; 
v_res_4178_ = l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0(v_e_4172_, v___y_4173_, v___y_4174_, v___y_4175_, v___y_4176_);
lean_dec(v___y_4176_);
lean_dec_ref(v___y_4175_);
lean_dec(v___y_4174_);
lean_dec_ref(v___y_4173_);
return v_res_4178_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd___lam__0(lean_object* v_localDecl_4182_, lean_object* v___y_4183_, lean_object* v___y_4184_, lean_object* v___y_4185_, lean_object* v___y_4186_){
_start:
{
lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v_a_4190_; lean_object* v___x_4192_; uint8_t v_isShared_4193_; uint8_t v_isSharedCheck_4201_; 
v___x_4188_ = l_Lean_LocalDecl_type(v_localDecl_4182_);
v___x_4189_ = l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg(v___x_4188_, v___y_4184_);
v_a_4190_ = lean_ctor_get(v___x_4189_, 0);
v_isSharedCheck_4201_ = !lean_is_exclusive(v___x_4189_);
if (v_isSharedCheck_4201_ == 0)
{
v___x_4192_ = v___x_4189_;
v_isShared_4193_ = v_isSharedCheck_4201_;
goto v_resetjp_4191_;
}
else
{
lean_inc(v_a_4190_);
lean_dec(v___x_4189_);
v___x_4192_ = lean_box(0);
v_isShared_4193_ = v_isSharedCheck_4201_;
goto v_resetjp_4191_;
}
v_resetjp_4191_:
{
lean_object* v___x_4194_; lean_object* v___x_4195_; uint8_t v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4199_; 
v___x_4194_ = ((lean_object*)(l_Lean_MVarId_casesAnd___lam__0___closed__1));
v___x_4195_ = lean_unsigned_to_nat(2u);
v___x_4196_ = l_Lean_Expr_isAppOfArity(v_a_4190_, v___x_4194_, v___x_4195_);
lean_dec(v_a_4190_);
v___x_4197_ = lean_box(v___x_4196_);
if (v_isShared_4193_ == 0)
{
lean_ctor_set(v___x_4192_, 0, v___x_4197_);
v___x_4199_ = v___x_4192_;
goto v_reusejp_4198_;
}
else
{
lean_object* v_reuseFailAlloc_4200_; 
v_reuseFailAlloc_4200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4200_, 0, v___x_4197_);
v___x_4199_ = v_reuseFailAlloc_4200_;
goto v_reusejp_4198_;
}
v_reusejp_4198_:
{
return v___x_4199_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd___lam__0___boxed(lean_object* v_localDecl_4202_, lean_object* v___y_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_){
_start:
{
lean_object* v_res_4208_; 
v_res_4208_ = l_Lean_MVarId_casesAnd___lam__0(v_localDecl_4202_, v___y_4203_, v___y_4204_, v___y_4205_, v___y_4206_);
lean_dec(v___y_4206_);
lean_dec_ref(v___y_4205_);
lean_dec(v___y_4204_);
lean_dec_ref(v___y_4203_);
lean_dec_ref(v_localDecl_4202_);
return v_res_4208_;
}
}
static lean_object* _init_l_Lean_MVarId_casesAnd___closed__3(void){
_start:
{
lean_object* v___x_4213_; lean_object* v___x_4214_; 
v___x_4213_ = ((lean_object*)(l_Lean_MVarId_casesAnd___closed__2));
v___x_4214_ = l_Lean_MessageData_ofFormat(v___x_4213_);
return v___x_4214_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd(lean_object* v_mvarId_4215_, lean_object* v_a_4216_, lean_object* v_a_4217_, lean_object* v_a_4218_, lean_object* v_a_4219_){
_start:
{
lean_object* v___f_4221_; lean_object* v___x_4222_; 
v___f_4221_ = ((lean_object*)(l_Lean_MVarId_casesAnd___closed__0));
v___x_4222_ = l_Lean_MVarId_casesRec(v_mvarId_4215_, v___f_4221_, v_a_4216_, v_a_4217_, v_a_4218_, v_a_4219_);
if (lean_obj_tag(v___x_4222_) == 0)
{
lean_object* v_a_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; 
v_a_4223_ = lean_ctor_get(v___x_4222_, 0);
lean_inc(v_a_4223_);
lean_dec_ref_known(v___x_4222_, 1);
v___x_4224_ = lean_obj_once(&l_Lean_MVarId_casesAnd___closed__3, &l_Lean_MVarId_casesAnd___closed__3_once, _init_l_Lean_MVarId_casesAnd___closed__3);
v___x_4225_ = l_Lean_Meta_exactlyOne(v_a_4223_, v___x_4224_, v_a_4216_, v_a_4217_, v_a_4218_, v_a_4219_);
lean_dec(v_a_4223_);
return v___x_4225_;
}
else
{
lean_object* v_a_4226_; lean_object* v___x_4228_; uint8_t v_isShared_4229_; uint8_t v_isSharedCheck_4233_; 
v_a_4226_ = lean_ctor_get(v___x_4222_, 0);
v_isSharedCheck_4233_ = !lean_is_exclusive(v___x_4222_);
if (v_isSharedCheck_4233_ == 0)
{
v___x_4228_ = v___x_4222_;
v_isShared_4229_ = v_isSharedCheck_4233_;
goto v_resetjp_4227_;
}
else
{
lean_inc(v_a_4226_);
lean_dec(v___x_4222_);
v___x_4228_ = lean_box(0);
v_isShared_4229_ = v_isSharedCheck_4233_;
goto v_resetjp_4227_;
}
v_resetjp_4227_:
{
lean_object* v___x_4231_; 
if (v_isShared_4229_ == 0)
{
v___x_4231_ = v___x_4228_;
goto v_reusejp_4230_;
}
else
{
lean_object* v_reuseFailAlloc_4232_; 
v_reuseFailAlloc_4232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4232_, 0, v_a_4226_);
v___x_4231_ = v_reuseFailAlloc_4232_;
goto v_reusejp_4230_;
}
v_reusejp_4230_:
{
return v___x_4231_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd___boxed(lean_object* v_mvarId_4234_, lean_object* v_a_4235_, lean_object* v_a_4236_, lean_object* v_a_4237_, lean_object* v_a_4238_, lean_object* v_a_4239_){
_start:
{
lean_object* v_res_4240_; 
v_res_4240_ = l_Lean_MVarId_casesAnd(v_mvarId_4234_, v_a_4235_, v_a_4236_, v_a_4237_, v_a_4238_);
lean_dec(v_a_4238_);
lean_dec_ref(v_a_4237_);
lean_dec(v_a_4236_);
lean_dec_ref(v_a_4235_);
return v_res_4240_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs___lam__0(lean_object* v_localDecl_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_){
_start:
{
lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v_a_4249_; lean_object* v___x_4251_; uint8_t v_isShared_4252_; uint8_t v_isSharedCheck_4263_; 
v___x_4247_ = l_Lean_LocalDecl_type(v_localDecl_4241_);
v___x_4248_ = l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg(v___x_4247_, v___y_4243_);
v_a_4249_ = lean_ctor_get(v___x_4248_, 0);
v_isSharedCheck_4263_ = !lean_is_exclusive(v___x_4248_);
if (v_isSharedCheck_4263_ == 0)
{
v___x_4251_ = v___x_4248_;
v_isShared_4252_ = v_isSharedCheck_4263_;
goto v_resetjp_4250_;
}
else
{
lean_inc(v_a_4249_);
lean_dec(v___x_4248_);
v___x_4251_ = lean_box(0);
v_isShared_4252_ = v_isSharedCheck_4263_;
goto v_resetjp_4250_;
}
v_resetjp_4250_:
{
uint8_t v___x_4253_; 
v___x_4253_ = l_Lean_Expr_isEq(v_a_4249_);
if (v___x_4253_ == 0)
{
uint8_t v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4257_; 
v___x_4254_ = l_Lean_Expr_isHEq(v_a_4249_);
lean_dec(v_a_4249_);
v___x_4255_ = lean_box(v___x_4254_);
if (v_isShared_4252_ == 0)
{
lean_ctor_set(v___x_4251_, 0, v___x_4255_);
v___x_4257_ = v___x_4251_;
goto v_reusejp_4256_;
}
else
{
lean_object* v_reuseFailAlloc_4258_; 
v_reuseFailAlloc_4258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4258_, 0, v___x_4255_);
v___x_4257_ = v_reuseFailAlloc_4258_;
goto v_reusejp_4256_;
}
v_reusejp_4256_:
{
return v___x_4257_;
}
}
else
{
lean_object* v___x_4259_; lean_object* v___x_4261_; 
lean_dec(v_a_4249_);
v___x_4259_ = lean_box(v___x_4253_);
if (v_isShared_4252_ == 0)
{
lean_ctor_set(v___x_4251_, 0, v___x_4259_);
v___x_4261_ = v___x_4251_;
goto v_reusejp_4260_;
}
else
{
lean_object* v_reuseFailAlloc_4262_; 
v_reuseFailAlloc_4262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4262_, 0, v___x_4259_);
v___x_4261_ = v_reuseFailAlloc_4262_;
goto v_reusejp_4260_;
}
v_reusejp_4260_:
{
return v___x_4261_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs___lam__0___boxed(lean_object* v_localDecl_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_){
_start:
{
lean_object* v_res_4270_; 
v_res_4270_ = l_Lean_MVarId_substEqs___lam__0(v_localDecl_4264_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_);
lean_dec(v___y_4268_);
lean_dec_ref(v___y_4267_);
lean_dec(v___y_4266_);
lean_dec_ref(v___y_4265_);
lean_dec_ref(v_localDecl_4264_);
return v_res_4270_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs(lean_object* v_mvarId_4272_, lean_object* v_a_4273_, lean_object* v_a_4274_, lean_object* v_a_4275_, lean_object* v_a_4276_){
_start:
{
lean_object* v___f_4278_; lean_object* v___x_4279_; 
v___f_4278_ = ((lean_object*)(l_Lean_MVarId_substEqs___closed__0));
v___x_4279_ = l_Lean_MVarId_casesRec(v_mvarId_4272_, v___f_4278_, v_a_4273_, v_a_4274_, v_a_4275_, v_a_4276_);
if (lean_obj_tag(v___x_4279_) == 0)
{
lean_object* v_a_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; 
v_a_4280_ = lean_ctor_get(v___x_4279_, 0);
lean_inc(v_a_4280_);
lean_dec_ref_known(v___x_4279_, 1);
v___x_4281_ = lean_obj_once(&l_Lean_MVarId_casesAnd___closed__3, &l_Lean_MVarId_casesAnd___closed__3_once, _init_l_Lean_MVarId_casesAnd___closed__3);
v___x_4282_ = l_Lean_Meta_ensureAtMostOne(v_a_4280_, v___x_4281_, v_a_4273_, v_a_4274_, v_a_4275_, v_a_4276_);
lean_dec(v_a_4280_);
return v___x_4282_;
}
else
{
lean_object* v_a_4283_; lean_object* v___x_4285_; uint8_t v_isShared_4286_; uint8_t v_isSharedCheck_4290_; 
v_a_4283_ = lean_ctor_get(v___x_4279_, 0);
v_isSharedCheck_4290_ = !lean_is_exclusive(v___x_4279_);
if (v_isSharedCheck_4290_ == 0)
{
v___x_4285_ = v___x_4279_;
v_isShared_4286_ = v_isSharedCheck_4290_;
goto v_resetjp_4284_;
}
else
{
lean_inc(v_a_4283_);
lean_dec(v___x_4279_);
v___x_4285_ = lean_box(0);
v_isShared_4286_ = v_isSharedCheck_4290_;
goto v_resetjp_4284_;
}
v_resetjp_4284_:
{
lean_object* v___x_4288_; 
if (v_isShared_4286_ == 0)
{
v___x_4288_ = v___x_4285_;
goto v_reusejp_4287_;
}
else
{
lean_object* v_reuseFailAlloc_4289_; 
v_reuseFailAlloc_4289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4289_, 0, v_a_4283_);
v___x_4288_ = v_reuseFailAlloc_4289_;
goto v_reusejp_4287_;
}
v_reusejp_4287_:
{
return v___x_4288_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs___boxed(lean_object* v_mvarId_4291_, lean_object* v_a_4292_, lean_object* v_a_4293_, lean_object* v_a_4294_, lean_object* v_a_4295_, lean_object* v_a_4296_){
_start:
{
lean_object* v_res_4297_; 
v_res_4297_ = l_Lean_MVarId_substEqs(v_mvarId_4291_, v_a_4292_, v_a_4293_, v_a_4294_, v_a_4295_);
lean_dec(v_a_4295_);
lean_dec_ref(v_a_4294_);
lean_dec(v_a_4293_);
lean_dec_ref(v_a_4292_);
return v_res_4297_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal___lam__0(lean_object* v_goalType_4298_, lean_object* v_tag_4299_, lean_object* v_hyp_4300_, lean_object* v___y_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_){
_start:
{
lean_object* v___x_4306_; 
v___x_4306_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_goalType_4298_, v_tag_4299_, v___y_4301_, v___y_4302_, v___y_4303_, v___y_4304_);
if (lean_obj_tag(v___x_4306_) == 0)
{
lean_object* v_a_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; uint8_t v___x_4311_; uint8_t v___x_4312_; uint8_t v___x_4313_; lean_object* v___x_4314_; 
v_a_4307_ = lean_ctor_get(v___x_4306_, 0);
lean_inc_n(v_a_4307_, 2);
lean_dec_ref_known(v___x_4306_, 1);
v___x_4308_ = lean_unsigned_to_nat(1u);
v___x_4309_ = lean_mk_empty_array_with_capacity(v___x_4308_);
lean_inc_ref(v_hyp_4300_);
v___x_4310_ = lean_array_push(v___x_4309_, v_hyp_4300_);
v___x_4311_ = 0;
v___x_4312_ = 1;
v___x_4313_ = 1;
v___x_4314_ = l_Lean_Meta_mkLambdaFVars(v___x_4310_, v_a_4307_, v___x_4311_, v___x_4312_, v___x_4311_, v___x_4312_, v___x_4313_, v___y_4301_, v___y_4302_, v___y_4303_, v___y_4304_);
if (lean_obj_tag(v___x_4314_) == 0)
{
lean_object* v_a_4315_; lean_object* v___x_4317_; uint8_t v_isShared_4318_; uint8_t v_isSharedCheck_4326_; 
v_a_4315_ = lean_ctor_get(v___x_4314_, 0);
v_isSharedCheck_4326_ = !lean_is_exclusive(v___x_4314_);
if (v_isSharedCheck_4326_ == 0)
{
v___x_4317_ = v___x_4314_;
v_isShared_4318_ = v_isSharedCheck_4326_;
goto v_resetjp_4316_;
}
else
{
lean_inc(v_a_4315_);
lean_dec(v___x_4314_);
v___x_4317_ = lean_box(0);
v_isShared_4318_ = v_isSharedCheck_4326_;
goto v_resetjp_4316_;
}
v_resetjp_4316_:
{
lean_object* v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; lean_object* v___x_4322_; lean_object* v___x_4324_; 
v___x_4319_ = l_Lean_Expr_mvarId_x21(v_a_4307_);
lean_dec(v_a_4307_);
v___x_4320_ = l_Lean_Expr_fvarId_x21(v_hyp_4300_);
lean_dec_ref(v_hyp_4300_);
v___x_4321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4321_, 0, v___x_4319_);
lean_ctor_set(v___x_4321_, 1, v___x_4320_);
v___x_4322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4322_, 0, v_a_4315_);
lean_ctor_set(v___x_4322_, 1, v___x_4321_);
if (v_isShared_4318_ == 0)
{
lean_ctor_set(v___x_4317_, 0, v___x_4322_);
v___x_4324_ = v___x_4317_;
goto v_reusejp_4323_;
}
else
{
lean_object* v_reuseFailAlloc_4325_; 
v_reuseFailAlloc_4325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4325_, 0, v___x_4322_);
v___x_4324_ = v_reuseFailAlloc_4325_;
goto v_reusejp_4323_;
}
v_reusejp_4323_:
{
return v___x_4324_;
}
}
}
else
{
lean_object* v_a_4327_; lean_object* v___x_4329_; uint8_t v_isShared_4330_; uint8_t v_isSharedCheck_4334_; 
lean_dec(v_a_4307_);
lean_dec_ref(v_hyp_4300_);
v_a_4327_ = lean_ctor_get(v___x_4314_, 0);
v_isSharedCheck_4334_ = !lean_is_exclusive(v___x_4314_);
if (v_isSharedCheck_4334_ == 0)
{
v___x_4329_ = v___x_4314_;
v_isShared_4330_ = v_isSharedCheck_4334_;
goto v_resetjp_4328_;
}
else
{
lean_inc(v_a_4327_);
lean_dec(v___x_4314_);
v___x_4329_ = lean_box(0);
v_isShared_4330_ = v_isSharedCheck_4334_;
goto v_resetjp_4328_;
}
v_resetjp_4328_:
{
lean_object* v___x_4332_; 
if (v_isShared_4330_ == 0)
{
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
return v___x_4332_;
}
}
}
}
else
{
lean_object* v_a_4335_; lean_object* v___x_4337_; uint8_t v_isShared_4338_; uint8_t v_isSharedCheck_4342_; 
lean_dec_ref(v_hyp_4300_);
v_a_4335_ = lean_ctor_get(v___x_4306_, 0);
v_isSharedCheck_4342_ = !lean_is_exclusive(v___x_4306_);
if (v_isSharedCheck_4342_ == 0)
{
v___x_4337_ = v___x_4306_;
v_isShared_4338_ = v_isSharedCheck_4342_;
goto v_resetjp_4336_;
}
else
{
lean_inc(v_a_4335_);
lean_dec(v___x_4306_);
v___x_4337_ = lean_box(0);
v_isShared_4338_ = v_isSharedCheck_4342_;
goto v_resetjp_4336_;
}
v_resetjp_4336_:
{
lean_object* v___x_4340_; 
if (v_isShared_4338_ == 0)
{
v___x_4340_ = v___x_4337_;
goto v_reusejp_4339_;
}
else
{
lean_object* v_reuseFailAlloc_4341_; 
v_reuseFailAlloc_4341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4341_, 0, v_a_4335_);
v___x_4340_ = v_reuseFailAlloc_4341_;
goto v_reusejp_4339_;
}
v_reusejp_4339_:
{
return v___x_4340_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal___lam__0___boxed(lean_object* v_goalType_4343_, lean_object* v_tag_4344_, lean_object* v_hyp_4345_, lean_object* v___y_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_){
_start:
{
lean_object* v_res_4351_; 
v_res_4351_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal___lam__0(v_goalType_4343_, v_tag_4344_, v_hyp_4345_, v___y_4346_, v___y_4347_, v___y_4348_, v___y_4349_);
lean_dec(v___y_4349_);
lean_dec_ref(v___y_4348_);
lean_dec(v___y_4347_);
lean_dec_ref(v___y_4346_);
return v_res_4351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal(lean_object* v_p_4352_, lean_object* v_hName_4353_, lean_object* v_goalType_4354_, lean_object* v_tag_4355_, lean_object* v_a_4356_, lean_object* v_a_4357_, lean_object* v_a_4358_, lean_object* v_a_4359_){
_start:
{
lean_object* v___f_4361_; lean_object* v___x_4362_; 
v___f_4361_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4361_, 0, v_goalType_4354_);
lean_closure_set(v___f_4361_, 1, v_tag_4355_);
v___x_4362_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(v_hName_4353_, v_p_4352_, v___f_4361_, v_a_4356_, v_a_4357_, v_a_4358_, v_a_4359_);
return v___x_4362_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal___boxed(lean_object* v_p_4363_, lean_object* v_hName_4364_, lean_object* v_goalType_4365_, lean_object* v_tag_4366_, lean_object* v_a_4367_, lean_object* v_a_4368_, lean_object* v_a_4369_, lean_object* v_a_4370_, lean_object* v_a_4371_){
_start:
{
lean_object* v_res_4372_; 
v_res_4372_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal(v_p_4363_, v_hName_4364_, v_goalType_4365_, v_tag_4366_, v_a_4367_, v_a_4368_, v_a_4369_, v_a_4370_);
lean_dec(v_a_4370_);
lean_dec_ref(v_a_4369_);
lean_dec(v_a_4368_);
lean_dec_ref(v_a_4367_);
return v_res_4372_;
}
}
static lean_object* _init_l_Lean_MVarId_byCases___lam__0___closed__7(void){
_start:
{
lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; 
v___x_4384_ = lean_box(0);
v___x_4385_ = ((lean_object*)(l_Lean_MVarId_byCases___lam__0___closed__6));
v___x_4386_ = l_Lean_Expr_const___override(v___x_4385_, v___x_4384_);
return v___x_4386_;
}
}
static lean_object* _init_l_Lean_MVarId_byCases___lam__0___closed__10(void){
_start:
{
lean_object* v___x_4390_; lean_object* v___x_4391_; 
v___x_4390_ = ((lean_object*)(l_Lean_MVarId_byCases___lam__0___closed__9));
v___x_4391_ = l_Lean_stringToMessageData(v___x_4390_);
return v___x_4391_;
}
}
static lean_object* _init_l_Lean_MVarId_byCases___lam__0___closed__11(void){
_start:
{
lean_object* v___x_4392_; lean_object* v___x_4393_; 
v___x_4392_ = lean_obj_once(&l_Lean_MVarId_byCases___lam__0___closed__10, &l_Lean_MVarId_byCases___lam__0___closed__10_once, _init_l_Lean_MVarId_byCases___lam__0___closed__10);
v___x_4393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4393_, 0, v___x_4392_);
return v___x_4393_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCases___lam__0(lean_object* v_mvarId_4394_, lean_object* v_p_4395_, lean_object* v_hName_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_, lean_object* v___y_4399_, lean_object* v___y_4400_){
_start:
{
lean_object* v___x_4402_; 
lean_inc(v_mvarId_4394_);
v___x_4402_ = l_Lean_MVarId_getType(v_mvarId_4394_, v___y_4397_, v___y_4398_, v___y_4399_, v___y_4400_);
if (lean_obj_tag(v___x_4402_) == 0)
{
lean_object* v_a_4403_; lean_object* v___x_4404_; 
v_a_4403_ = lean_ctor_get(v___x_4402_, 0);
lean_inc(v_a_4403_);
lean_dec_ref_known(v___x_4402_, 1);
lean_inc(v_mvarId_4394_);
v___x_4404_ = l_Lean_MVarId_getTag(v_mvarId_4394_, v___y_4397_, v___y_4398_, v___y_4399_, v___y_4400_);
if (lean_obj_tag(v___x_4404_) == 0)
{
lean_object* v_a_4405_; lean_object* v___y_4407_; lean_object* v___y_4408_; lean_object* v___y_4409_; lean_object* v___y_4410_; lean_object* v___x_4458_; 
v_a_4405_ = lean_ctor_get(v___x_4404_, 0);
lean_inc(v_a_4405_);
lean_dec_ref_known(v___x_4404_, 1);
lean_inc(v_a_4403_);
v___x_4458_ = l_Lean_Meta_isProp(v_a_4403_, v___y_4397_, v___y_4398_, v___y_4399_, v___y_4400_);
if (lean_obj_tag(v___x_4458_) == 0)
{
lean_object* v_a_4459_; uint8_t v___x_4460_; 
v_a_4459_ = lean_ctor_get(v___x_4458_, 0);
lean_inc(v_a_4459_);
lean_dec_ref_known(v___x_4458_, 1);
v___x_4460_ = lean_unbox(v_a_4459_);
lean_dec(v_a_4459_);
if (v___x_4460_ == 0)
{
lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; 
v___x_4461_ = ((lean_object*)(l_Lean_MVarId_byCases___lam__0___closed__8));
v___x_4462_ = lean_obj_once(&l_Lean_MVarId_byCases___lam__0___closed__11, &l_Lean_MVarId_byCases___lam__0___closed__11_once, _init_l_Lean_MVarId_byCases___lam__0___closed__11);
lean_inc(v_mvarId_4394_);
v___x_4463_ = l_Lean_Meta_throwTacticEx___redArg(v___x_4461_, v_mvarId_4394_, v___x_4462_, v___y_4397_, v___y_4398_, v___y_4399_, v___y_4400_);
if (lean_obj_tag(v___x_4463_) == 0)
{
lean_dec_ref_known(v___x_4463_, 1);
v___y_4407_ = v___y_4397_;
v___y_4408_ = v___y_4398_;
v___y_4409_ = v___y_4399_;
v___y_4410_ = v___y_4400_;
goto v___jp_4406_;
}
else
{
lean_object* v_a_4464_; lean_object* v___x_4466_; uint8_t v_isShared_4467_; uint8_t v_isSharedCheck_4471_; 
lean_dec(v_a_4405_);
lean_dec(v_a_4403_);
lean_dec(v_hName_4396_);
lean_dec_ref(v_p_4395_);
lean_dec(v_mvarId_4394_);
v_a_4464_ = lean_ctor_get(v___x_4463_, 0);
v_isSharedCheck_4471_ = !lean_is_exclusive(v___x_4463_);
if (v_isSharedCheck_4471_ == 0)
{
v___x_4466_ = v___x_4463_;
v_isShared_4467_ = v_isSharedCheck_4471_;
goto v_resetjp_4465_;
}
else
{
lean_inc(v_a_4464_);
lean_dec(v___x_4463_);
v___x_4466_ = lean_box(0);
v_isShared_4467_ = v_isSharedCheck_4471_;
goto v_resetjp_4465_;
}
v_resetjp_4465_:
{
lean_object* v___x_4469_; 
if (v_isShared_4467_ == 0)
{
v___x_4469_ = v___x_4466_;
goto v_reusejp_4468_;
}
else
{
lean_object* v_reuseFailAlloc_4470_; 
v_reuseFailAlloc_4470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4470_, 0, v_a_4464_);
v___x_4469_ = v_reuseFailAlloc_4470_;
goto v_reusejp_4468_;
}
v_reusejp_4468_:
{
return v___x_4469_;
}
}
}
}
else
{
v___y_4407_ = v___y_4397_;
v___y_4408_ = v___y_4398_;
v___y_4409_ = v___y_4399_;
v___y_4410_ = v___y_4400_;
goto v___jp_4406_;
}
}
else
{
lean_object* v_a_4472_; lean_object* v___x_4474_; uint8_t v_isShared_4475_; uint8_t v_isSharedCheck_4479_; 
lean_dec(v_a_4405_);
lean_dec(v_a_4403_);
lean_dec(v_hName_4396_);
lean_dec_ref(v_p_4395_);
lean_dec(v_mvarId_4394_);
v_a_4472_ = lean_ctor_get(v___x_4458_, 0);
v_isSharedCheck_4479_ = !lean_is_exclusive(v___x_4458_);
if (v_isSharedCheck_4479_ == 0)
{
v___x_4474_ = v___x_4458_;
v_isShared_4475_ = v_isSharedCheck_4479_;
goto v_resetjp_4473_;
}
else
{
lean_inc(v_a_4472_);
lean_dec(v___x_4458_);
v___x_4474_ = lean_box(0);
v_isShared_4475_ = v_isSharedCheck_4479_;
goto v_resetjp_4473_;
}
v_resetjp_4473_:
{
lean_object* v___x_4477_; 
if (v_isShared_4475_ == 0)
{
v___x_4477_ = v___x_4474_;
goto v_reusejp_4476_;
}
else
{
lean_object* v_reuseFailAlloc_4478_; 
v_reuseFailAlloc_4478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4478_, 0, v_a_4472_);
v___x_4477_ = v_reuseFailAlloc_4478_;
goto v_reusejp_4476_;
}
v_reusejp_4476_:
{
return v___x_4477_;
}
}
}
v___jp_4406_:
{
lean_object* v___x_4411_; lean_object* v___x_4412_; lean_object* v___x_4413_; 
v___x_4411_ = ((lean_object*)(l_Lean_MVarId_byCases___lam__0___closed__1));
lean_inc(v_a_4405_);
v___x_4412_ = l_Lean_Name_append(v_a_4405_, v___x_4411_);
lean_inc(v_a_4403_);
lean_inc(v_hName_4396_);
lean_inc_ref(v_p_4395_);
v___x_4413_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal(v_p_4395_, v_hName_4396_, v_a_4403_, v___x_4412_, v___y_4407_, v___y_4408_, v___y_4409_, v___y_4410_);
if (lean_obj_tag(v___x_4413_) == 0)
{
lean_object* v_a_4414_; lean_object* v_fst_4415_; lean_object* v_snd_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; lean_object* v___x_4420_; 
v_a_4414_ = lean_ctor_get(v___x_4413_, 0);
lean_inc(v_a_4414_);
lean_dec_ref_known(v___x_4413_, 1);
v_fst_4415_ = lean_ctor_get(v_a_4414_, 0);
lean_inc(v_fst_4415_);
v_snd_4416_ = lean_ctor_get(v_a_4414_, 1);
lean_inc(v_snd_4416_);
lean_dec(v_a_4414_);
lean_inc_ref(v_p_4395_);
v___x_4417_ = l_Lean_mkNot(v_p_4395_);
v___x_4418_ = ((lean_object*)(l_Lean_MVarId_byCases___lam__0___closed__3));
v___x_4419_ = l_Lean_Name_append(v_a_4405_, v___x_4418_);
lean_inc(v_a_4403_);
v___x_4420_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal(v___x_4417_, v_hName_4396_, v_a_4403_, v___x_4419_, v___y_4407_, v___y_4408_, v___y_4409_, v___y_4410_);
if (lean_obj_tag(v___x_4420_) == 0)
{
lean_object* v_a_4421_; lean_object* v_fst_4422_; lean_object* v_snd_4423_; lean_object* v___x_4425_; uint8_t v_isShared_4426_; uint8_t v_isSharedCheck_4441_; 
v_a_4421_ = lean_ctor_get(v___x_4420_, 0);
lean_inc(v_a_4421_);
lean_dec_ref_known(v___x_4420_, 1);
v_fst_4422_ = lean_ctor_get(v_a_4421_, 0);
v_snd_4423_ = lean_ctor_get(v_a_4421_, 1);
v_isSharedCheck_4441_ = !lean_is_exclusive(v_a_4421_);
if (v_isSharedCheck_4441_ == 0)
{
v___x_4425_ = v_a_4421_;
v_isShared_4426_ = v_isSharedCheck_4441_;
goto v_resetjp_4424_;
}
else
{
lean_inc(v_snd_4423_);
lean_inc(v_fst_4422_);
lean_dec(v_a_4421_);
v___x_4425_ = lean_box(0);
v_isShared_4426_ = v_isSharedCheck_4441_;
goto v_resetjp_4424_;
}
v_resetjp_4424_:
{
lean_object* v___x_4427_; lean_object* v___x_4428_; lean_object* v___x_4429_; lean_object* v___x_4431_; uint8_t v_isShared_4432_; uint8_t v_isSharedCheck_4439_; 
v___x_4427_ = lean_obj_once(&l_Lean_MVarId_byCases___lam__0___closed__7, &l_Lean_MVarId_byCases___lam__0___closed__7_once, _init_l_Lean_MVarId_byCases___lam__0___closed__7);
v___x_4428_ = l_Lean_mkApp4(v___x_4427_, v_p_4395_, v_a_4403_, v_fst_4415_, v_fst_4422_);
v___x_4429_ = l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(v_mvarId_4394_, v___x_4428_, v___y_4408_);
v_isSharedCheck_4439_ = !lean_is_exclusive(v___x_4429_);
if (v_isSharedCheck_4439_ == 0)
{
lean_object* v_unused_4440_; 
v_unused_4440_ = lean_ctor_get(v___x_4429_, 0);
lean_dec(v_unused_4440_);
v___x_4431_ = v___x_4429_;
v_isShared_4432_ = v_isSharedCheck_4439_;
goto v_resetjp_4430_;
}
else
{
lean_dec(v___x_4429_);
v___x_4431_ = lean_box(0);
v_isShared_4432_ = v_isSharedCheck_4439_;
goto v_resetjp_4430_;
}
v_resetjp_4430_:
{
lean_object* v___x_4434_; 
if (v_isShared_4426_ == 0)
{
lean_ctor_set(v___x_4425_, 0, v_snd_4416_);
v___x_4434_ = v___x_4425_;
goto v_reusejp_4433_;
}
else
{
lean_object* v_reuseFailAlloc_4438_; 
v_reuseFailAlloc_4438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4438_, 0, v_snd_4416_);
lean_ctor_set(v_reuseFailAlloc_4438_, 1, v_snd_4423_);
v___x_4434_ = v_reuseFailAlloc_4438_;
goto v_reusejp_4433_;
}
v_reusejp_4433_:
{
lean_object* v___x_4436_; 
if (v_isShared_4432_ == 0)
{
lean_ctor_set(v___x_4431_, 0, v___x_4434_);
v___x_4436_ = v___x_4431_;
goto v_reusejp_4435_;
}
else
{
lean_object* v_reuseFailAlloc_4437_; 
v_reuseFailAlloc_4437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4437_, 0, v___x_4434_);
v___x_4436_ = v_reuseFailAlloc_4437_;
goto v_reusejp_4435_;
}
v_reusejp_4435_:
{
return v___x_4436_;
}
}
}
}
}
else
{
lean_object* v_a_4442_; lean_object* v___x_4444_; uint8_t v_isShared_4445_; uint8_t v_isSharedCheck_4449_; 
lean_dec(v_snd_4416_);
lean_dec(v_fst_4415_);
lean_dec(v_a_4403_);
lean_dec_ref(v_p_4395_);
lean_dec(v_mvarId_4394_);
v_a_4442_ = lean_ctor_get(v___x_4420_, 0);
v_isSharedCheck_4449_ = !lean_is_exclusive(v___x_4420_);
if (v_isSharedCheck_4449_ == 0)
{
v___x_4444_ = v___x_4420_;
v_isShared_4445_ = v_isSharedCheck_4449_;
goto v_resetjp_4443_;
}
else
{
lean_inc(v_a_4442_);
lean_dec(v___x_4420_);
v___x_4444_ = lean_box(0);
v_isShared_4445_ = v_isSharedCheck_4449_;
goto v_resetjp_4443_;
}
v_resetjp_4443_:
{
lean_object* v___x_4447_; 
if (v_isShared_4445_ == 0)
{
v___x_4447_ = v___x_4444_;
goto v_reusejp_4446_;
}
else
{
lean_object* v_reuseFailAlloc_4448_; 
v_reuseFailAlloc_4448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4448_, 0, v_a_4442_);
v___x_4447_ = v_reuseFailAlloc_4448_;
goto v_reusejp_4446_;
}
v_reusejp_4446_:
{
return v___x_4447_;
}
}
}
}
else
{
lean_object* v_a_4450_; lean_object* v___x_4452_; uint8_t v_isShared_4453_; uint8_t v_isSharedCheck_4457_; 
lean_dec(v_a_4405_);
lean_dec(v_a_4403_);
lean_dec(v_hName_4396_);
lean_dec_ref(v_p_4395_);
lean_dec(v_mvarId_4394_);
v_a_4450_ = lean_ctor_get(v___x_4413_, 0);
v_isSharedCheck_4457_ = !lean_is_exclusive(v___x_4413_);
if (v_isSharedCheck_4457_ == 0)
{
v___x_4452_ = v___x_4413_;
v_isShared_4453_ = v_isSharedCheck_4457_;
goto v_resetjp_4451_;
}
else
{
lean_inc(v_a_4450_);
lean_dec(v___x_4413_);
v___x_4452_ = lean_box(0);
v_isShared_4453_ = v_isSharedCheck_4457_;
goto v_resetjp_4451_;
}
v_resetjp_4451_:
{
lean_object* v___x_4455_; 
if (v_isShared_4453_ == 0)
{
v___x_4455_ = v___x_4452_;
goto v_reusejp_4454_;
}
else
{
lean_object* v_reuseFailAlloc_4456_; 
v_reuseFailAlloc_4456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4456_, 0, v_a_4450_);
v___x_4455_ = v_reuseFailAlloc_4456_;
goto v_reusejp_4454_;
}
v_reusejp_4454_:
{
return v___x_4455_;
}
}
}
}
}
else
{
lean_object* v_a_4480_; lean_object* v___x_4482_; uint8_t v_isShared_4483_; uint8_t v_isSharedCheck_4487_; 
lean_dec(v_a_4403_);
lean_dec(v_hName_4396_);
lean_dec_ref(v_p_4395_);
lean_dec(v_mvarId_4394_);
v_a_4480_ = lean_ctor_get(v___x_4404_, 0);
v_isSharedCheck_4487_ = !lean_is_exclusive(v___x_4404_);
if (v_isSharedCheck_4487_ == 0)
{
v___x_4482_ = v___x_4404_;
v_isShared_4483_ = v_isSharedCheck_4487_;
goto v_resetjp_4481_;
}
else
{
lean_inc(v_a_4480_);
lean_dec(v___x_4404_);
v___x_4482_ = lean_box(0);
v_isShared_4483_ = v_isSharedCheck_4487_;
goto v_resetjp_4481_;
}
v_resetjp_4481_:
{
lean_object* v___x_4485_; 
if (v_isShared_4483_ == 0)
{
v___x_4485_ = v___x_4482_;
goto v_reusejp_4484_;
}
else
{
lean_object* v_reuseFailAlloc_4486_; 
v_reuseFailAlloc_4486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4486_, 0, v_a_4480_);
v___x_4485_ = v_reuseFailAlloc_4486_;
goto v_reusejp_4484_;
}
v_reusejp_4484_:
{
return v___x_4485_;
}
}
}
}
else
{
lean_object* v_a_4488_; lean_object* v___x_4490_; uint8_t v_isShared_4491_; uint8_t v_isSharedCheck_4495_; 
lean_dec(v_hName_4396_);
lean_dec_ref(v_p_4395_);
lean_dec(v_mvarId_4394_);
v_a_4488_ = lean_ctor_get(v___x_4402_, 0);
v_isSharedCheck_4495_ = !lean_is_exclusive(v___x_4402_);
if (v_isSharedCheck_4495_ == 0)
{
v___x_4490_ = v___x_4402_;
v_isShared_4491_ = v_isSharedCheck_4495_;
goto v_resetjp_4489_;
}
else
{
lean_inc(v_a_4488_);
lean_dec(v___x_4402_);
v___x_4490_ = lean_box(0);
v_isShared_4491_ = v_isSharedCheck_4495_;
goto v_resetjp_4489_;
}
v_resetjp_4489_:
{
lean_object* v___x_4493_; 
if (v_isShared_4491_ == 0)
{
v___x_4493_ = v___x_4490_;
goto v_reusejp_4492_;
}
else
{
lean_object* v_reuseFailAlloc_4494_; 
v_reuseFailAlloc_4494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4494_, 0, v_a_4488_);
v___x_4493_ = v_reuseFailAlloc_4494_;
goto v_reusejp_4492_;
}
v_reusejp_4492_:
{
return v___x_4493_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCases___lam__0___boxed(lean_object* v_mvarId_4496_, lean_object* v_p_4497_, lean_object* v_hName_4498_, lean_object* v___y_4499_, lean_object* v___y_4500_, lean_object* v___y_4501_, lean_object* v___y_4502_, lean_object* v___y_4503_){
_start:
{
lean_object* v_res_4504_; 
v_res_4504_ = l_Lean_MVarId_byCases___lam__0(v_mvarId_4496_, v_p_4497_, v_hName_4498_, v___y_4499_, v___y_4500_, v___y_4501_, v___y_4502_);
lean_dec(v___y_4502_);
lean_dec_ref(v___y_4501_);
lean_dec(v___y_4500_);
lean_dec_ref(v___y_4499_);
return v_res_4504_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCases(lean_object* v_mvarId_4505_, lean_object* v_p_4506_, lean_object* v_hName_4507_, lean_object* v_a_4508_, lean_object* v_a_4509_, lean_object* v_a_4510_, lean_object* v_a_4511_){
_start:
{
lean_object* v___f_4513_; lean_object* v___x_4514_; 
lean_inc(v_mvarId_4505_);
v___f_4513_ = lean_alloc_closure((void*)(l_Lean_MVarId_byCases___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4513_, 0, v_mvarId_4505_);
lean_closure_set(v___f_4513_, 1, v_p_4506_);
lean_closure_set(v___f_4513_, 2, v_hName_4507_);
v___x_4514_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_4505_, v___f_4513_, v_a_4508_, v_a_4509_, v_a_4510_, v_a_4511_);
return v___x_4514_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCases___boxed(lean_object* v_mvarId_4515_, lean_object* v_p_4516_, lean_object* v_hName_4517_, lean_object* v_a_4518_, lean_object* v_a_4519_, lean_object* v_a_4520_, lean_object* v_a_4521_, lean_object* v_a_4522_){
_start:
{
lean_object* v_res_4523_; 
v_res_4523_ = l_Lean_MVarId_byCases(v_mvarId_4515_, v_p_4516_, v_hName_4517_, v_a_4518_, v_a_4519_, v_a_4520_, v_a_4521_);
lean_dec(v_a_4521_);
lean_dec_ref(v_a_4520_);
lean_dec(v_a_4519_);
lean_dec_ref(v_a_4518_);
return v_res_4523_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesDec___lam__0(lean_object* v_mvarId_4527_, lean_object* v_p_4528_, lean_object* v_hName_4529_, lean_object* v_dec_4530_, lean_object* v___y_4531_, lean_object* v___y_4532_, lean_object* v___y_4533_, lean_object* v___y_4534_){
_start:
{
lean_object* v___x_4536_; 
lean_inc(v_mvarId_4527_);
v___x_4536_ = l_Lean_MVarId_getType(v_mvarId_4527_, v___y_4531_, v___y_4532_, v___y_4533_, v___y_4534_);
if (lean_obj_tag(v___x_4536_) == 0)
{
lean_object* v_a_4537_; lean_object* v___x_4538_; 
v_a_4537_ = lean_ctor_get(v___x_4536_, 0);
lean_inc(v_a_4537_);
lean_dec_ref_known(v___x_4536_, 1);
lean_inc(v_mvarId_4527_);
v___x_4538_ = l_Lean_MVarId_getTag(v_mvarId_4527_, v___y_4531_, v___y_4532_, v___y_4533_, v___y_4534_);
if (lean_obj_tag(v___x_4538_) == 0)
{
lean_object* v_a_4539_; lean_object* v___x_4540_; 
v_a_4539_ = lean_ctor_get(v___x_4538_, 0);
lean_inc(v_a_4539_);
lean_dec_ref_known(v___x_4538_, 1);
lean_inc(v_a_4537_);
v___x_4540_ = l_Lean_Meta_getLevel(v_a_4537_, v___y_4531_, v___y_4532_, v___y_4533_, v___y_4534_);
if (lean_obj_tag(v___x_4540_) == 0)
{
lean_object* v_a_4541_; lean_object* v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; 
v_a_4541_ = lean_ctor_get(v___x_4540_, 0);
lean_inc(v_a_4541_);
lean_dec_ref_known(v___x_4540_, 1);
v___x_4542_ = ((lean_object*)(l_Lean_MVarId_byCases___lam__0___closed__1));
lean_inc(v_a_4539_);
v___x_4543_ = l_Lean_Name_append(v_a_4539_, v___x_4542_);
lean_inc(v_a_4537_);
lean_inc(v_hName_4529_);
lean_inc_ref(v_p_4528_);
v___x_4544_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal(v_p_4528_, v_hName_4529_, v_a_4537_, v___x_4543_, v___y_4531_, v___y_4532_, v___y_4533_, v___y_4534_);
if (lean_obj_tag(v___x_4544_) == 0)
{
lean_object* v_a_4545_; lean_object* v_fst_4546_; lean_object* v_snd_4547_; lean_object* v___x_4549_; uint8_t v_isShared_4550_; uint8_t v_isSharedCheck_4589_; 
v_a_4545_ = lean_ctor_get(v___x_4544_, 0);
lean_inc(v_a_4545_);
lean_dec_ref_known(v___x_4544_, 1);
v_fst_4546_ = lean_ctor_get(v_a_4545_, 0);
v_snd_4547_ = lean_ctor_get(v_a_4545_, 1);
v_isSharedCheck_4589_ = !lean_is_exclusive(v_a_4545_);
if (v_isSharedCheck_4589_ == 0)
{
v___x_4549_ = v_a_4545_;
v_isShared_4550_ = v_isSharedCheck_4589_;
goto v_resetjp_4548_;
}
else
{
lean_inc(v_snd_4547_);
lean_inc(v_fst_4546_);
lean_dec(v_a_4545_);
v___x_4549_ = lean_box(0);
v_isShared_4550_ = v_isSharedCheck_4589_;
goto v_resetjp_4548_;
}
v_resetjp_4548_:
{
lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; 
lean_inc_ref(v_p_4528_);
v___x_4551_ = l_Lean_mkNot(v_p_4528_);
v___x_4552_ = ((lean_object*)(l_Lean_MVarId_byCases___lam__0___closed__3));
v___x_4553_ = l_Lean_Name_append(v_a_4539_, v___x_4552_);
lean_inc(v_a_4537_);
v___x_4554_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal(v___x_4551_, v_hName_4529_, v_a_4537_, v___x_4553_, v___y_4531_, v___y_4532_, v___y_4533_, v___y_4534_);
if (lean_obj_tag(v___x_4554_) == 0)
{
lean_object* v_a_4555_; lean_object* v_fst_4556_; lean_object* v_snd_4557_; lean_object* v___x_4559_; uint8_t v_isShared_4560_; uint8_t v_isSharedCheck_4580_; 
v_a_4555_ = lean_ctor_get(v___x_4554_, 0);
lean_inc(v_a_4555_);
lean_dec_ref_known(v___x_4554_, 1);
v_fst_4556_ = lean_ctor_get(v_a_4555_, 0);
v_snd_4557_ = lean_ctor_get(v_a_4555_, 1);
v_isSharedCheck_4580_ = !lean_is_exclusive(v_a_4555_);
if (v_isSharedCheck_4580_ == 0)
{
v___x_4559_ = v_a_4555_;
v_isShared_4560_ = v_isSharedCheck_4580_;
goto v_resetjp_4558_;
}
else
{
lean_inc(v_snd_4557_);
lean_inc(v_fst_4556_);
lean_dec(v_a_4555_);
v___x_4559_ = lean_box(0);
v_isShared_4560_ = v_isSharedCheck_4580_;
goto v_resetjp_4558_;
}
v_resetjp_4558_:
{
lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4564_; 
v___x_4561_ = ((lean_object*)(l_Lean_MVarId_byCasesDec___lam__0___closed__1));
v___x_4562_ = lean_box(0);
if (v_isShared_4550_ == 0)
{
lean_ctor_set_tag(v___x_4549_, 1);
lean_ctor_set(v___x_4549_, 1, v___x_4562_);
lean_ctor_set(v___x_4549_, 0, v_a_4541_);
v___x_4564_ = v___x_4549_;
goto v_reusejp_4563_;
}
else
{
lean_object* v_reuseFailAlloc_4579_; 
v_reuseFailAlloc_4579_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4579_, 0, v_a_4541_);
lean_ctor_set(v_reuseFailAlloc_4579_, 1, v___x_4562_);
v___x_4564_ = v_reuseFailAlloc_4579_;
goto v_reusejp_4563_;
}
v_reusejp_4563_:
{
lean_object* v___x_4565_; lean_object* v___x_4566_; lean_object* v___x_4567_; lean_object* v___x_4569_; uint8_t v_isShared_4570_; uint8_t v_isSharedCheck_4577_; 
v___x_4565_ = l_Lean_Expr_const___override(v___x_4561_, v___x_4564_);
v___x_4566_ = l_Lean_mkApp5(v___x_4565_, v_a_4537_, v_p_4528_, v_dec_4530_, v_fst_4546_, v_fst_4556_);
v___x_4567_ = l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(v_mvarId_4527_, v___x_4566_, v___y_4532_);
v_isSharedCheck_4577_ = !lean_is_exclusive(v___x_4567_);
if (v_isSharedCheck_4577_ == 0)
{
lean_object* v_unused_4578_; 
v_unused_4578_ = lean_ctor_get(v___x_4567_, 0);
lean_dec(v_unused_4578_);
v___x_4569_ = v___x_4567_;
v_isShared_4570_ = v_isSharedCheck_4577_;
goto v_resetjp_4568_;
}
else
{
lean_dec(v___x_4567_);
v___x_4569_ = lean_box(0);
v_isShared_4570_ = v_isSharedCheck_4577_;
goto v_resetjp_4568_;
}
v_resetjp_4568_:
{
lean_object* v___x_4572_; 
if (v_isShared_4560_ == 0)
{
lean_ctor_set(v___x_4559_, 0, v_snd_4547_);
v___x_4572_ = v___x_4559_;
goto v_reusejp_4571_;
}
else
{
lean_object* v_reuseFailAlloc_4576_; 
v_reuseFailAlloc_4576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4576_, 0, v_snd_4547_);
lean_ctor_set(v_reuseFailAlloc_4576_, 1, v_snd_4557_);
v___x_4572_ = v_reuseFailAlloc_4576_;
goto v_reusejp_4571_;
}
v_reusejp_4571_:
{
lean_object* v___x_4574_; 
if (v_isShared_4570_ == 0)
{
lean_ctor_set(v___x_4569_, 0, v___x_4572_);
v___x_4574_ = v___x_4569_;
goto v_reusejp_4573_;
}
else
{
lean_object* v_reuseFailAlloc_4575_; 
v_reuseFailAlloc_4575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4575_, 0, v___x_4572_);
v___x_4574_ = v_reuseFailAlloc_4575_;
goto v_reusejp_4573_;
}
v_reusejp_4573_:
{
return v___x_4574_;
}
}
}
}
}
}
else
{
lean_object* v_a_4581_; lean_object* v___x_4583_; uint8_t v_isShared_4584_; uint8_t v_isSharedCheck_4588_; 
lean_del_object(v___x_4549_);
lean_dec(v_snd_4547_);
lean_dec(v_fst_4546_);
lean_dec(v_a_4541_);
lean_dec(v_a_4537_);
lean_dec_ref(v_dec_4530_);
lean_dec_ref(v_p_4528_);
lean_dec(v_mvarId_4527_);
v_a_4581_ = lean_ctor_get(v___x_4554_, 0);
v_isSharedCheck_4588_ = !lean_is_exclusive(v___x_4554_);
if (v_isSharedCheck_4588_ == 0)
{
v___x_4583_ = v___x_4554_;
v_isShared_4584_ = v_isSharedCheck_4588_;
goto v_resetjp_4582_;
}
else
{
lean_inc(v_a_4581_);
lean_dec(v___x_4554_);
v___x_4583_ = lean_box(0);
v_isShared_4584_ = v_isSharedCheck_4588_;
goto v_resetjp_4582_;
}
v_resetjp_4582_:
{
lean_object* v___x_4586_; 
if (v_isShared_4584_ == 0)
{
v___x_4586_ = v___x_4583_;
goto v_reusejp_4585_;
}
else
{
lean_object* v_reuseFailAlloc_4587_; 
v_reuseFailAlloc_4587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4587_, 0, v_a_4581_);
v___x_4586_ = v_reuseFailAlloc_4587_;
goto v_reusejp_4585_;
}
v_reusejp_4585_:
{
return v___x_4586_;
}
}
}
}
}
else
{
lean_object* v_a_4590_; lean_object* v___x_4592_; uint8_t v_isShared_4593_; uint8_t v_isSharedCheck_4597_; 
lean_dec(v_a_4541_);
lean_dec(v_a_4539_);
lean_dec(v_a_4537_);
lean_dec_ref(v_dec_4530_);
lean_dec(v_hName_4529_);
lean_dec_ref(v_p_4528_);
lean_dec(v_mvarId_4527_);
v_a_4590_ = lean_ctor_get(v___x_4544_, 0);
v_isSharedCheck_4597_ = !lean_is_exclusive(v___x_4544_);
if (v_isSharedCheck_4597_ == 0)
{
v___x_4592_ = v___x_4544_;
v_isShared_4593_ = v_isSharedCheck_4597_;
goto v_resetjp_4591_;
}
else
{
lean_inc(v_a_4590_);
lean_dec(v___x_4544_);
v___x_4592_ = lean_box(0);
v_isShared_4593_ = v_isSharedCheck_4597_;
goto v_resetjp_4591_;
}
v_resetjp_4591_:
{
lean_object* v___x_4595_; 
if (v_isShared_4593_ == 0)
{
v___x_4595_ = v___x_4592_;
goto v_reusejp_4594_;
}
else
{
lean_object* v_reuseFailAlloc_4596_; 
v_reuseFailAlloc_4596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4596_, 0, v_a_4590_);
v___x_4595_ = v_reuseFailAlloc_4596_;
goto v_reusejp_4594_;
}
v_reusejp_4594_:
{
return v___x_4595_;
}
}
}
}
else
{
lean_object* v_a_4598_; lean_object* v___x_4600_; uint8_t v_isShared_4601_; uint8_t v_isSharedCheck_4605_; 
lean_dec(v_a_4539_);
lean_dec(v_a_4537_);
lean_dec_ref(v_dec_4530_);
lean_dec(v_hName_4529_);
lean_dec_ref(v_p_4528_);
lean_dec(v_mvarId_4527_);
v_a_4598_ = lean_ctor_get(v___x_4540_, 0);
v_isSharedCheck_4605_ = !lean_is_exclusive(v___x_4540_);
if (v_isSharedCheck_4605_ == 0)
{
v___x_4600_ = v___x_4540_;
v_isShared_4601_ = v_isSharedCheck_4605_;
goto v_resetjp_4599_;
}
else
{
lean_inc(v_a_4598_);
lean_dec(v___x_4540_);
v___x_4600_ = lean_box(0);
v_isShared_4601_ = v_isSharedCheck_4605_;
goto v_resetjp_4599_;
}
v_resetjp_4599_:
{
lean_object* v___x_4603_; 
if (v_isShared_4601_ == 0)
{
v___x_4603_ = v___x_4600_;
goto v_reusejp_4602_;
}
else
{
lean_object* v_reuseFailAlloc_4604_; 
v_reuseFailAlloc_4604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4604_, 0, v_a_4598_);
v___x_4603_ = v_reuseFailAlloc_4604_;
goto v_reusejp_4602_;
}
v_reusejp_4602_:
{
return v___x_4603_;
}
}
}
}
else
{
lean_object* v_a_4606_; lean_object* v___x_4608_; uint8_t v_isShared_4609_; uint8_t v_isSharedCheck_4613_; 
lean_dec(v_a_4537_);
lean_dec_ref(v_dec_4530_);
lean_dec(v_hName_4529_);
lean_dec_ref(v_p_4528_);
lean_dec(v_mvarId_4527_);
v_a_4606_ = lean_ctor_get(v___x_4538_, 0);
v_isSharedCheck_4613_ = !lean_is_exclusive(v___x_4538_);
if (v_isSharedCheck_4613_ == 0)
{
v___x_4608_ = v___x_4538_;
v_isShared_4609_ = v_isSharedCheck_4613_;
goto v_resetjp_4607_;
}
else
{
lean_inc(v_a_4606_);
lean_dec(v___x_4538_);
v___x_4608_ = lean_box(0);
v_isShared_4609_ = v_isSharedCheck_4613_;
goto v_resetjp_4607_;
}
v_resetjp_4607_:
{
lean_object* v___x_4611_; 
if (v_isShared_4609_ == 0)
{
v___x_4611_ = v___x_4608_;
goto v_reusejp_4610_;
}
else
{
lean_object* v_reuseFailAlloc_4612_; 
v_reuseFailAlloc_4612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4612_, 0, v_a_4606_);
v___x_4611_ = v_reuseFailAlloc_4612_;
goto v_reusejp_4610_;
}
v_reusejp_4610_:
{
return v___x_4611_;
}
}
}
}
else
{
lean_object* v_a_4614_; lean_object* v___x_4616_; uint8_t v_isShared_4617_; uint8_t v_isSharedCheck_4621_; 
lean_dec_ref(v_dec_4530_);
lean_dec(v_hName_4529_);
lean_dec_ref(v_p_4528_);
lean_dec(v_mvarId_4527_);
v_a_4614_ = lean_ctor_get(v___x_4536_, 0);
v_isSharedCheck_4621_ = !lean_is_exclusive(v___x_4536_);
if (v_isSharedCheck_4621_ == 0)
{
v___x_4616_ = v___x_4536_;
v_isShared_4617_ = v_isSharedCheck_4621_;
goto v_resetjp_4615_;
}
else
{
lean_inc(v_a_4614_);
lean_dec(v___x_4536_);
v___x_4616_ = lean_box(0);
v_isShared_4617_ = v_isSharedCheck_4621_;
goto v_resetjp_4615_;
}
v_resetjp_4615_:
{
lean_object* v___x_4619_; 
if (v_isShared_4617_ == 0)
{
v___x_4619_ = v___x_4616_;
goto v_reusejp_4618_;
}
else
{
lean_object* v_reuseFailAlloc_4620_; 
v_reuseFailAlloc_4620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4620_, 0, v_a_4614_);
v___x_4619_ = v_reuseFailAlloc_4620_;
goto v_reusejp_4618_;
}
v_reusejp_4618_:
{
return v___x_4619_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesDec___lam__0___boxed(lean_object* v_mvarId_4622_, lean_object* v_p_4623_, lean_object* v_hName_4624_, lean_object* v_dec_4625_, lean_object* v___y_4626_, lean_object* v___y_4627_, lean_object* v___y_4628_, lean_object* v___y_4629_, lean_object* v___y_4630_){
_start:
{
lean_object* v_res_4631_; 
v_res_4631_ = l_Lean_MVarId_byCasesDec___lam__0(v_mvarId_4622_, v_p_4623_, v_hName_4624_, v_dec_4625_, v___y_4626_, v___y_4627_, v___y_4628_, v___y_4629_);
lean_dec(v___y_4629_);
lean_dec_ref(v___y_4628_);
lean_dec(v___y_4627_);
lean_dec_ref(v___y_4626_);
return v_res_4631_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesDec(lean_object* v_mvarId_4632_, lean_object* v_p_4633_, lean_object* v_dec_4634_, lean_object* v_hName_4635_, lean_object* v_a_4636_, lean_object* v_a_4637_, lean_object* v_a_4638_, lean_object* v_a_4639_){
_start:
{
lean_object* v___f_4641_; lean_object* v___x_4642_; 
lean_inc(v_mvarId_4632_);
v___f_4641_ = lean_alloc_closure((void*)(l_Lean_MVarId_byCasesDec___lam__0___boxed), 9, 4);
lean_closure_set(v___f_4641_, 0, v_mvarId_4632_);
lean_closure_set(v___f_4641_, 1, v_p_4633_);
lean_closure_set(v___f_4641_, 2, v_hName_4635_);
lean_closure_set(v___f_4641_, 3, v_dec_4634_);
v___x_4642_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_4632_, v___f_4641_, v_a_4636_, v_a_4637_, v_a_4638_, v_a_4639_);
return v___x_4642_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesDec___boxed(lean_object* v_mvarId_4643_, lean_object* v_p_4644_, lean_object* v_dec_4645_, lean_object* v_hName_4646_, lean_object* v_a_4647_, lean_object* v_a_4648_, lean_object* v_a_4649_, lean_object* v_a_4650_, lean_object* v_a_4651_){
_start:
{
lean_object* v_res_4652_; 
v_res_4652_ = l_Lean_MVarId_byCasesDec(v_mvarId_4643_, v_p_4644_, v_dec_4645_, v_hName_4646_, v_a_4647_, v_a_4648_, v_a_4649_, v_a_4650_);
lean_dec(v_a_4650_);
lean_dec_ref(v_a_4649_);
lean_dec(v_a_4648_);
lean_dec_ref(v_a_4647_);
return v_res_4652_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4657_; lean_object* v___x_4658_; 
v___x_4657_ = lean_box(0);
v___x_4658_ = l_unsafeCast___redArg(v___x_4657_);
return v___x_4658_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; 
v___x_4660_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_));
v___x_4661_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4662_ = l_Lean_Name_str___override(v___x_4661_, v___x_4660_);
return v___x_4662_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; 
v___x_4664_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_));
v___x_4665_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4666_ = l_Lean_Name_str___override(v___x_4665_, v___x_4664_);
return v___x_4666_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; 
v___x_4667_ = ((lean_object*)(l_Lean_Meta_Cases_cases___lam__0___closed__4));
v___x_4668_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4669_ = l_Lean_Name_str___override(v___x_4668_, v___x_4667_);
return v___x_4669_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; 
v___x_4670_ = ((lean_object*)(l_Lean_Meta_Cases_cases___lam__0___closed__5));
v___x_4671_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4672_ = l_Lean_Name_str___override(v___x_4671_, v___x_4670_);
return v___x_4672_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4674_; lean_object* v___x_4675_; lean_object* v___x_4676_; 
v___x_4674_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_));
v___x_4675_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4676_ = l_Lean_Name_str___override(v___x_4675_, v___x_4674_);
return v___x_4676_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4677_; lean_object* v___x_4678_; lean_object* v___x_4679_; 
v___x_4677_ = lean_unsigned_to_nat(0u);
v___x_4678_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4679_ = l_Lean_Name_num___override(v___x_4678_, v___x_4677_);
return v___x_4679_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4680_; lean_object* v___x_4681_; lean_object* v___x_4682_; 
v___x_4680_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_));
v___x_4681_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4682_ = l_Lean_Name_str___override(v___x_4681_, v___x_4680_);
return v___x_4682_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; 
v___x_4683_ = ((lean_object*)(l_Lean_Meta_Cases_cases___lam__0___closed__4));
v___x_4684_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4685_ = l_Lean_Name_str___override(v___x_4684_, v___x_4683_);
return v___x_4685_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4687_; lean_object* v___x_4688_; lean_object* v___x_4689_; 
v___x_4687_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_));
v___x_4688_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4689_ = l_Lean_Name_str___override(v___x_4688_, v___x_4687_);
return v___x_4689_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; 
v___x_4691_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_));
v___x_4692_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4693_ = l_Lean_Name_str___override(v___x_4692_, v___x_4691_);
return v___x_4693_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; 
v___x_4694_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_));
v___x_4695_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4696_ = l_Lean_Name_str___override(v___x_4695_, v___x_4694_);
return v___x_4696_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; 
v___x_4697_ = ((lean_object*)(l_Lean_Meta_Cases_cases___lam__0___closed__4));
v___x_4698_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4699_ = l_Lean_Name_str___override(v___x_4698_, v___x_4697_);
return v___x_4699_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; 
v___x_4700_ = ((lean_object*)(l_Lean_Meta_Cases_cases___lam__0___closed__5));
v___x_4701_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4702_ = l_Lean_Name_str___override(v___x_4701_, v___x_4700_);
return v___x_4702_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; 
v___x_4703_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_));
v___x_4704_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4705_ = l_Lean_Name_str___override(v___x_4704_, v___x_4703_);
return v___x_4705_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4706_; lean_object* v___x_4707_; lean_object* v___x_4708_; 
v___x_4706_ = lean_unsigned_to_nat(4241171151u);
v___x_4707_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4708_ = l_Lean_Name_num___override(v___x_4707_, v___x_4706_);
return v___x_4708_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4710_; lean_object* v___x_4711_; lean_object* v___x_4712_; 
v___x_4710_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_));
v___x_4711_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4712_ = l_Lean_Name_str___override(v___x_4711_, v___x_4710_);
return v___x_4712_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; 
v___x_4714_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_));
v___x_4715_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4716_ = l_Lean_Name_str___override(v___x_4715_, v___x_4714_);
return v___x_4716_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; 
v___x_4717_ = lean_unsigned_to_nat(2u);
v___x_4718_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4719_ = l_Lean_Name_num___override(v___x_4718_, v___x_4717_);
return v___x_4719_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4721_; uint8_t v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; 
v___x_4721_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_));
v___x_4722_ = 0;
v___x_4723_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__26_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4724_ = l_Lean_registerTraceClass(v___x_4721_, v___x_4722_, v___x_4723_);
return v___x_4724_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2____boxed(lean_object* v_a_4725_){
_start:
{
lean_object* v_res_4726_; 
v_res_4726_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_();
return v_res_4726_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Induction(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Acyclic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_UnifyEq(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_SparseCasesOn(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Cases(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Induction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Acyclic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_UnifyEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_SparseCasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Cases(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Induction(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Acyclic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_UnifyEq(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_SparseCasesOn(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Cases(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Induction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Acyclic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_UnifyEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_SparseCasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Cases(builtin);
}
#ifdef __cplusplus
}
#endif

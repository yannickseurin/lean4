// Lean compiler output
// Module: Lean.Meta.Sym.Apply
// Imports: public import Lean.Meta.Sym.Pattern import Lean.Util.CollectFVars import Init.Data.Range.Polymorphic.Iterators
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
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Pattern_unify_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_instantiateLevelParams(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
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
lean_object* l_List_reverse___redArg(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_Expr_containsFVar(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_mkPatternFromExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_collectFVars(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_mkPatternFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_sym_pre"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(219, 124, 57, 118, 127, 154, 73, 9)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__1;
static const lean_array_object l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__3;
static const lean_ctor_object l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__2_value),((lean_object*)&l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__2_value)}};
static const lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Sym_mkBackwardRuleFromExpr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkValue(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_failed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_failed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_goals_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_goals_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Sym_BackwardRule_apply_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Sym_BackwardRule_apply_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "rule is not applicable to goal"};
static const lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__1;
static const lean_string_object l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "rule:"};
static const lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__5(size_t v_sz_1_, size_t v_i_2_, lean_object* v_bs_3_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = lean_usize_dec_lt(v_i_2_, v_sz_1_);
if (v___x_4_ == 0)
{
lean_object* v___x_5_; 
v___x_5_ = l_unsafeCast___redArg(v_bs_3_);
lean_dec_ref(v_bs_3_);
return v___x_5_;
}
else
{
lean_object* v_v_6_; lean_object* v___x_7_; uint8_t v_isInstance_8_; lean_object* v___x_9_; lean_object* v_bs_x27_10_; size_t v___x_11_; size_t v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v_v_6_ = lean_array_uget_borrowed(v_bs_3_, v_i_2_);
v___x_7_ = l_unsafeCast___redArg(v_v_6_);
v_isInstance_8_ = lean_ctor_get_uint8(v___x_7_, 1);
lean_dec(v___x_7_);
v___x_9_ = lean_unsigned_to_nat(0u);
v_bs_x27_10_ = lean_array_uset(v_bs_3_, v_i_2_, v___x_9_);
v___x_11_ = ((size_t)1ULL);
v___x_12_ = lean_usize_add(v_i_2_, v___x_11_);
v___x_13_ = lean_box(v_isInstance_8_);
v___x_14_ = l_unsafeCast___redArg(v___x_13_);
lean_dec(v___x_13_);
v___x_15_ = lean_array_uset(v_bs_x27_10_, v_i_2_, v___x_14_);
v_i_2_ = v___x_12_;
v_bs_3_ = v___x_15_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__5___boxed(lean_object* v_sz_17_, lean_object* v_i_18_, lean_object* v_bs_19_){
_start:
{
size_t v_sz_boxed_20_; size_t v_i_boxed_21_; lean_object* v_res_22_; 
v_sz_boxed_20_ = lean_unbox_usize(v_sz_17_);
lean_dec(v_sz_17_);
v_i_boxed_21_ = lean_unbox_usize(v_i_18_);
lean_dec(v_i_18_);
v_res_22_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__5(v_sz_boxed_20_, v_i_boxed_21_, v_bs_19_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1(lean_object* v_as_26_, size_t v_sz_27_, size_t v_i_28_, lean_object* v_b_29_){
_start:
{
lean_object* v_a_31_; uint8_t v___x_35_; 
v___x_35_ = lean_usize_dec_lt(v_i_28_, v_sz_27_);
if (v___x_35_ == 0)
{
return v_b_29_;
}
else
{
lean_object* v_a_36_; 
v_a_36_ = lean_array_uget_borrowed(v_as_26_, v_i_28_);
if (lean_obj_tag(v_a_36_) == 2)
{
lean_object* v_pre_37_; lean_object* v_i_38_; lean_object* v_auxPrefix_39_; uint8_t v___x_40_; 
v_pre_37_ = lean_ctor_get(v_a_36_, 0);
v_i_38_ = lean_ctor_get(v_a_36_, 1);
v_auxPrefix_39_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___closed__1));
v___x_40_ = lean_name_eq(v_pre_37_, v_auxPrefix_39_);
if (v___x_40_ == 0)
{
v_a_31_ = v_b_29_;
goto v___jp_30_;
}
else
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_box(v___x_40_);
v___x_42_ = lean_array_set(v_b_29_, v_i_38_, v___x_41_);
v_a_31_ = v___x_42_;
goto v___jp_30_;
}
}
else
{
v_a_31_ = v_b_29_;
goto v___jp_30_;
}
}
v___jp_30_:
{
size_t v___x_32_; size_t v___x_33_; 
v___x_32_ = ((size_t)1ULL);
v___x_33_ = lean_usize_add(v_i_28_, v___x_32_);
v_i_28_ = v___x_33_;
v_b_29_ = v_a_31_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___boxed(lean_object* v_as_43_, lean_object* v_sz_44_, lean_object* v_i_45_, lean_object* v_b_46_){
_start:
{
size_t v_sz_boxed_47_; size_t v_i_boxed_48_; lean_object* v_res_49_; 
v_sz_boxed_47_ = lean_unbox_usize(v_sz_44_);
lean_dec(v_sz_44_);
v_i_boxed_48_ = lean_unbox_usize(v_i_45_);
lean_dec(v_i_45_);
v_res_49_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1(v_as_43_, v_sz_boxed_47_, v_i_boxed_48_, v_b_46_);
lean_dec_ref(v_as_43_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___redArg(lean_object* v_auxVars_50_, size_t v_sz_51_, size_t v_i_52_, lean_object* v_bs_53_){
_start:
{
uint8_t v___x_54_; 
v___x_54_ = lean_usize_dec_lt(v_i_52_, v_sz_51_);
if (v___x_54_ == 0)
{
lean_object* v___x_55_; 
v___x_55_ = l_unsafeCast___redArg(v_bs_53_);
lean_dec_ref(v_bs_53_);
return v___x_55_;
}
else
{
lean_object* v_v_56_; lean_object* v___x_57_; lean_object* v_bs_x27_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; size_t v___x_62_; size_t v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v_v_56_ = lean_array_uget(v_bs_53_, v_i_52_);
v___x_57_ = lean_unsigned_to_nat(0u);
v_bs_x27_58_ = lean_array_uset(v_bs_53_, v_i_52_, v___x_57_);
v___x_59_ = lean_usize_to_nat(v_i_52_);
v___x_60_ = l_unsafeCast___redArg(v_v_56_);
lean_dec(v_v_56_);
v___x_61_ = lean_expr_instantiate_rev_range(v___x_60_, v___x_57_, v___x_59_, v_auxVars_50_);
lean_dec(v___x_59_);
lean_dec(v___x_60_);
v___x_62_ = ((size_t)1ULL);
v___x_63_ = lean_usize_add(v_i_52_, v___x_62_);
v___x_64_ = l_unsafeCast___redArg(v___x_61_);
lean_dec_ref(v___x_61_);
v___x_65_ = lean_array_uset(v_bs_x27_58_, v_i_52_, v___x_64_);
v_i_52_ = v___x_63_;
v_bs_53_ = v___x_65_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___redArg___boxed(lean_object* v_auxVars_67_, lean_object* v_sz_68_, lean_object* v_i_69_, lean_object* v_bs_70_){
_start:
{
size_t v_sz_boxed_71_; size_t v_i_boxed_72_; lean_object* v_res_73_; 
v_sz_boxed_71_ = lean_unbox_usize(v_sz_68_);
lean_dec(v_sz_68_);
v_i_boxed_72_ = lean_unbox_usize(v_i_69_);
lean_dec(v_i_69_);
v_res_73_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___redArg(v_auxVars_67_, v_sz_boxed_71_, v_i_boxed_72_, v_bs_70_);
lean_dec_ref(v_auxVars_67_);
return v_res_73_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___redArg(lean_object* v_upperBound_74_, lean_object* v___x_75_, lean_object* v___x_76_, lean_object* v___x_77_, lean_object* v_next_78_, lean_object* v_upperBound_79_, lean_object* v_a_80_, uint8_t v_b_81_){
_start:
{
uint8_t v_a_83_; uint8_t v___x_87_; 
v___x_87_ = lean_nat_dec_lt(v_a_80_, v_upperBound_74_);
if (v___x_87_ == 0)
{
lean_dec(v_a_80_);
return v_b_81_;
}
else
{
uint8_t v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; uint8_t v___x_91_; 
v___x_88_ = 0;
v___x_89_ = lean_box(v___x_88_);
v___x_90_ = lean_array_get(v___x_89_, v___x_75_, v_a_80_);
lean_dec(v___x_89_);
v___x_91_ = lean_unbox(v___x_90_);
lean_dec(v___x_90_);
if (v___x_91_ == 0)
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; uint8_t v___x_95_; 
v___x_92_ = l_Lean_instInhabitedExpr;
v___x_93_ = lean_array_get_borrowed(v___x_92_, v___x_76_, v_a_80_);
v___x_94_ = l_Lean_Expr_fvarId_x21(v___x_77_);
v___x_95_ = l_Lean_Expr_containsFVar(v___x_93_, v___x_94_);
lean_dec(v___x_94_);
if (v___x_95_ == 0)
{
v_a_83_ = v_b_81_;
goto v___jp_82_;
}
else
{
uint8_t v___x_96_; 
lean_dec(v_a_80_);
v___x_96_ = lean_nat_dec_lt(v_next_78_, v_upperBound_79_);
return v___x_96_;
}
}
else
{
v_a_83_ = v_b_81_;
goto v___jp_82_;
}
}
v___jp_82_:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = lean_unsigned_to_nat(1u);
v___x_85_ = lean_nat_add(v_a_80_, v___x_84_);
lean_dec(v_a_80_);
v_a_80_ = v___x_85_;
v_b_81_ = v_a_83_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___redArg___boxed(lean_object* v_upperBound_97_, lean_object* v___x_98_, lean_object* v___x_99_, lean_object* v___x_100_, lean_object* v_next_101_, lean_object* v_upperBound_102_, lean_object* v_a_103_, lean_object* v_b_104_){
_start:
{
uint8_t v_b_boxed_105_; uint8_t v_res_106_; lean_object* v_r_107_; 
v_b_boxed_105_ = lean_unbox(v_b_104_);
v_res_106_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___redArg(v_upperBound_97_, v___x_98_, v___x_99_, v___x_100_, v_next_101_, v_upperBound_102_, v_a_103_, v_b_boxed_105_);
lean_dec(v_upperBound_102_);
lean_dec(v_next_101_);
lean_dec_ref(v___x_100_);
lean_dec_ref(v___x_99_);
lean_dec_ref(v___x_98_);
lean_dec(v_upperBound_97_);
v_r_107_ = lean_box(v_res_106_);
return v_r_107_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___redArg(lean_object* v_upperBound_108_, lean_object* v___x_109_, lean_object* v_numArgs_110_, lean_object* v_auxVars_111_, lean_object* v___x_112_, lean_object* v_a_113_, lean_object* v_b_114_){
_start:
{
lean_object* v_a_116_; uint8_t v___x_120_; 
v___x_120_ = lean_nat_dec_lt(v_a_113_, v_upperBound_108_);
if (v___x_120_ == 0)
{
lean_dec(v_a_113_);
return v_b_114_;
}
else
{
lean_object* v_fst_121_; lean_object* v_snd_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_147_; 
v_fst_121_ = lean_ctor_get(v_b_114_, 0);
v_snd_122_ = lean_ctor_get(v_b_114_, 1);
v_isSharedCheck_147_ = !lean_is_exclusive(v_b_114_);
if (v_isSharedCheck_147_ == 0)
{
v___x_124_ = v_b_114_;
v_isShared_125_ = v_isSharedCheck_147_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_snd_122_);
lean_inc(v_fst_121_);
lean_dec(v_b_114_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_147_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
uint8_t v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_126_ = 0;
v___x_127_ = lean_box(v___x_126_);
v___x_128_ = lean_array_get(v___x_127_, v___x_109_, v_a_113_);
lean_dec(v___x_127_);
v___x_129_ = lean_unbox(v___x_128_);
if (v___x_129_ == 0)
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; uint8_t v___x_135_; 
v___x_130_ = l_Lean_instInhabitedExpr;
v___x_131_ = lean_unsigned_to_nat(1u);
v___x_132_ = lean_nat_add(v_a_113_, v___x_131_);
v___x_133_ = lean_array_get_borrowed(v___x_130_, v_auxVars_111_, v_a_113_);
v___x_134_ = lean_unbox(v___x_128_);
lean_dec(v___x_128_);
v___x_135_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___redArg(v_numArgs_110_, v___x_109_, v___x_112_, v___x_133_, v_a_113_, v_upperBound_108_, v___x_132_, v___x_134_);
if (v___x_135_ == 0)
{
lean_object* v___x_136_; lean_object* v___x_138_; 
lean_inc(v_a_113_);
v___x_136_ = lean_array_push(v_snd_122_, v_a_113_);
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 1, v___x_136_);
v___x_138_ = v___x_124_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v_fst_121_);
lean_ctor_set(v_reuseFailAlloc_139_, 1, v___x_136_);
v___x_138_ = v_reuseFailAlloc_139_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
v_a_116_ = v___x_138_;
goto v___jp_115_;
}
}
else
{
lean_object* v___x_140_; lean_object* v___x_142_; 
lean_inc(v_a_113_);
v___x_140_ = lean_array_push(v_fst_121_, v_a_113_);
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 0, v___x_140_);
v___x_142_ = v___x_124_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v___x_140_);
lean_ctor_set(v_reuseFailAlloc_143_, 1, v_snd_122_);
v___x_142_ = v_reuseFailAlloc_143_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
v_a_116_ = v___x_142_;
goto v___jp_115_;
}
}
}
else
{
lean_object* v___x_145_; 
lean_dec(v___x_128_);
if (v_isShared_125_ == 0)
{
v___x_145_ = v___x_124_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_fst_121_);
lean_ctor_set(v_reuseFailAlloc_146_, 1, v_snd_122_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
v_a_116_ = v___x_145_;
goto v___jp_115_;
}
}
}
}
v___jp_115_:
{
lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_117_ = lean_unsigned_to_nat(1u);
v___x_118_ = lean_nat_add(v_a_113_, v___x_117_);
lean_dec(v_a_113_);
v_a_113_ = v___x_118_;
v_b_114_ = v_a_116_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___redArg___boxed(lean_object* v_upperBound_148_, lean_object* v___x_149_, lean_object* v_numArgs_150_, lean_object* v_auxVars_151_, lean_object* v___x_152_, lean_object* v_a_153_, lean_object* v_b_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___redArg(v_upperBound_148_, v___x_149_, v_numArgs_150_, v_auxVars_151_, v___x_152_, v_a_153_, v_b_154_);
lean_dec_ref(v___x_152_);
lean_dec_ref(v_auxVars_151_);
lean_dec(v_numArgs_150_);
lean_dec_ref(v___x_149_);
lean_dec(v_upperBound_148_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg(size_t v_sz_156_, size_t v_i_157_, lean_object* v_bs_158_){
_start:
{
uint8_t v___x_159_; 
v___x_159_ = lean_usize_dec_lt(v_i_157_, v_sz_156_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; 
v___x_160_ = l_unsafeCast___redArg(v_bs_158_);
lean_dec_ref(v_bs_158_);
return v___x_160_;
}
else
{
lean_object* v_auxPrefix_161_; lean_object* v___x_162_; lean_object* v_bs_x27_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; size_t v___x_167_; size_t v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v_auxPrefix_161_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___closed__1));
v___x_162_ = lean_unsigned_to_nat(0u);
v_bs_x27_163_ = lean_array_uset(v_bs_158_, v_i_157_, v___x_162_);
v___x_164_ = lean_usize_to_nat(v_i_157_);
v___x_165_ = l_Lean_Name_num___override(v_auxPrefix_161_, v___x_164_);
v___x_166_ = l_Lean_mkFVar(v___x_165_);
v___x_167_ = ((size_t)1ULL);
v___x_168_ = lean_usize_add(v_i_157_, v___x_167_);
v___x_169_ = l_unsafeCast___redArg(v___x_166_);
lean_dec_ref(v___x_166_);
v___x_170_ = lean_array_uset(v_bs_x27_163_, v_i_157_, v___x_169_);
v_i_157_ = v___x_168_;
v_bs_158_ = v___x_170_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg___boxed(lean_object* v_sz_172_, lean_object* v_i_173_, lean_object* v_bs_174_){
_start:
{
size_t v_sz_boxed_175_; size_t v_i_boxed_176_; lean_object* v_res_177_; 
v_sz_boxed_175_ = lean_unbox_usize(v_sz_172_);
lean_dec(v_sz_172_);
v_i_boxed_176_ = lean_unbox_usize(v_i_173_);
lean_dec(v_i_173_);
v_res_177_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg(v_sz_boxed_175_, v_i_boxed_176_, v_bs_174_);
return v_res_177_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__0(void){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_178_ = lean_box(0);
v___x_179_ = lean_unsigned_to_nat(16u);
v___x_180_ = lean_mk_array(v___x_179_, v___x_178_);
return v___x_180_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__1(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_181_ = lean_obj_once(&l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__0, &l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__0_once, _init_l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__0);
v___x_182_ = lean_unsigned_to_nat(0u);
v___x_183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_183_, 0, v___x_182_);
lean_ctor_set(v___x_183_, 1, v___x_181_);
return v___x_183_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__3(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_186_ = ((lean_object*)(l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__2));
v___x_187_ = lean_box(1);
v___x_188_ = lean_obj_once(&l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__1, &l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__1_once, _init_l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__1);
v___x_189_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_189_, 0, v___x_188_);
lean_ctor_set(v___x_189_, 1, v___x_187_);
lean_ctor_set(v___x_189_, 2, v___x_186_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos(lean_object* v_pattern_192_){
_start:
{
lean_object* v_varTypes_193_; lean_object* v_varInfos_x3f_194_; lean_object* v_pattern_195_; lean_object* v_numArgs_196_; lean_object* v___y_198_; 
v_varTypes_193_ = lean_ctor_get(v_pattern_192_, 1);
v_varInfos_x3f_194_ = lean_ctor_get(v_pattern_192_, 2);
v_pattern_195_ = lean_ctor_get(v_pattern_192_, 3);
v_numArgs_196_ = lean_array_get_size(v_varTypes_193_);
if (lean_obj_tag(v_varInfos_x3f_194_) == 1)
{
lean_object* v_val_219_; size_t v_sz_220_; size_t v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v_val_219_ = lean_ctor_get(v_varInfos_x3f_194_, 0);
v_sz_220_ = lean_array_size(v_val_219_);
v___x_221_ = ((size_t)0ULL);
v___x_222_ = l_unsafeCast___redArg(v_val_219_);
v___x_223_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__5(v_sz_220_, v___x_221_, v___x_222_);
v___x_224_ = l_unsafeCast___redArg(v___x_223_);
lean_dec_ref(v___x_223_);
v___y_198_ = v___x_224_;
goto v___jp_197_;
}
else
{
uint8_t v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_225_ = 0;
v___x_226_ = lean_box(v___x_225_);
v___x_227_ = lean_mk_array(v_numArgs_196_, v___x_226_);
v___y_198_ = v___x_227_;
goto v___jp_197_;
}
v___jp_197_:
{
size_t v_sz_199_; size_t v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v_auxVars_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v_fvarIds_208_; size_t v_sz_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v_fst_215_; lean_object* v_snd_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
v_sz_199_ = lean_array_size(v_varTypes_193_);
v___x_200_ = ((size_t)0ULL);
v___x_201_ = l_unsafeCast___redArg(v_varTypes_193_);
lean_inc(v___x_201_);
v___x_202_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg(v_sz_199_, v___x_200_, v___x_201_);
v_auxVars_203_ = l_unsafeCast___redArg(v___x_202_);
lean_dec_ref(v___x_202_);
v___x_204_ = lean_unsigned_to_nat(0u);
v___x_205_ = lean_obj_once(&l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__3, &l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__3_once, _init_l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__3);
v___x_206_ = lean_expr_instantiate_rev(v_pattern_195_, v_auxVars_203_);
v___x_207_ = l_Lean_collectFVars(v___x_205_, v___x_206_);
v_fvarIds_208_ = lean_ctor_get(v___x_207_, 2);
lean_inc_ref(v_fvarIds_208_);
lean_dec_ref(v___x_207_);
v_sz_209_ = lean_array_size(v_fvarIds_208_);
v___x_210_ = ((lean_object*)(l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__4));
v___x_211_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1(v_fvarIds_208_, v_sz_209_, v___x_200_, v___y_198_);
lean_dec_ref(v_fvarIds_208_);
v___x_212_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___redArg(v_auxVars_203_, v_sz_199_, v___x_200_, v___x_201_);
v___x_213_ = l_unsafeCast___redArg(v___x_212_);
lean_dec_ref(v___x_212_);
v___x_214_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___redArg(v_numArgs_196_, v___x_211_, v_numArgs_196_, v_auxVars_203_, v___x_213_, v___x_204_, v___x_210_);
lean_dec(v___x_213_);
lean_dec(v_auxVars_203_);
lean_dec_ref(v___x_211_);
v_fst_215_ = lean_ctor_get(v___x_214_, 0);
lean_inc(v_fst_215_);
v_snd_216_ = lean_ctor_get(v___x_214_, 1);
lean_inc(v_snd_216_);
lean_dec_ref(v___x_214_);
v___x_217_ = l_Array_append___redArg(v_snd_216_, v_fst_215_);
lean_dec(v_fst_215_);
v___x_218_ = lean_array_to_list(v___x_217_);
return v___x_218_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___boxed(lean_object* v_pattern_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos(v_pattern_228_);
lean_dec_ref(v_pattern_228_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0(lean_object* v_as_230_, size_t v_sz_231_, size_t v_i_232_, lean_object* v_bs_233_){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg(v_sz_231_, v_i_232_, v_bs_233_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___boxed(lean_object* v_as_235_, lean_object* v_sz_236_, lean_object* v_i_237_, lean_object* v_bs_238_){
_start:
{
size_t v_sz_boxed_239_; size_t v_i_boxed_240_; lean_object* v_res_241_; 
v_sz_boxed_239_ = lean_unbox_usize(v_sz_236_);
lean_dec(v_sz_236_);
v_i_boxed_240_ = lean_unbox_usize(v_i_237_);
lean_dec(v_i_237_);
v_res_241_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0(v_as_235_, v_sz_boxed_239_, v_i_boxed_240_, v_bs_238_);
lean_dec_ref(v_as_235_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2(lean_object* v_auxVars_242_, lean_object* v_as_243_, size_t v_sz_244_, size_t v_i_245_, lean_object* v_bs_246_){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___redArg(v_auxVars_242_, v_sz_244_, v_i_245_, v_bs_246_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___boxed(lean_object* v_auxVars_248_, lean_object* v_as_249_, lean_object* v_sz_250_, lean_object* v_i_251_, lean_object* v_bs_252_){
_start:
{
size_t v_sz_boxed_253_; size_t v_i_boxed_254_; lean_object* v_res_255_; 
v_sz_boxed_253_ = lean_unbox_usize(v_sz_250_);
lean_dec(v_sz_250_);
v_i_boxed_254_ = lean_unbox_usize(v_i_251_);
lean_dec(v_i_251_);
v_res_255_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2(v_auxVars_248_, v_as_249_, v_sz_boxed_253_, v_i_boxed_254_, v_bs_252_);
lean_dec_ref(v_as_249_);
lean_dec_ref(v_auxVars_248_);
return v_res_255_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3(lean_object* v_upperBound_256_, lean_object* v___x_257_, lean_object* v___x_258_, lean_object* v___x_259_, lean_object* v_next_260_, lean_object* v_upperBound_261_, lean_object* v_inst_262_, lean_object* v_R_263_, lean_object* v_a_264_, uint8_t v_b_265_, lean_object* v_c_266_){
_start:
{
uint8_t v___x_267_; 
v___x_267_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___redArg(v_upperBound_256_, v___x_257_, v___x_258_, v___x_259_, v_next_260_, v_upperBound_261_, v_a_264_, v_b_265_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___boxed(lean_object* v_upperBound_268_, lean_object* v___x_269_, lean_object* v___x_270_, lean_object* v___x_271_, lean_object* v_next_272_, lean_object* v_upperBound_273_, lean_object* v_inst_274_, lean_object* v_R_275_, lean_object* v_a_276_, lean_object* v_b_277_, lean_object* v_c_278_){
_start:
{
uint8_t v_b_boxed_279_; uint8_t v_res_280_; lean_object* v_r_281_; 
v_b_boxed_279_ = lean_unbox(v_b_277_);
v_res_280_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3(v_upperBound_268_, v___x_269_, v___x_270_, v___x_271_, v_next_272_, v_upperBound_273_, v_inst_274_, v_R_275_, v_a_276_, v_b_boxed_279_, v_c_278_);
lean_dec(v_upperBound_273_);
lean_dec(v_next_272_);
lean_dec_ref(v___x_271_);
lean_dec_ref(v___x_270_);
lean_dec_ref(v___x_269_);
lean_dec(v_upperBound_268_);
v_r_281_ = lean_box(v_res_280_);
return v_r_281_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4(lean_object* v_upperBound_282_, lean_object* v___x_283_, lean_object* v_numArgs_284_, lean_object* v_auxVars_285_, lean_object* v___x_286_, lean_object* v_inst_287_, lean_object* v_R_288_, lean_object* v_a_289_, lean_object* v_b_290_, lean_object* v_c_291_){
_start:
{
lean_object* v___x_292_; 
v___x_292_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___redArg(v_upperBound_282_, v___x_283_, v_numArgs_284_, v_auxVars_285_, v___x_286_, v_a_289_, v_b_290_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___boxed(lean_object* v_upperBound_293_, lean_object* v___x_294_, lean_object* v_numArgs_295_, lean_object* v_auxVars_296_, lean_object* v___x_297_, lean_object* v_inst_298_, lean_object* v_R_299_, lean_object* v_a_300_, lean_object* v_b_301_, lean_object* v_c_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4(v_upperBound_293_, v___x_294_, v_numArgs_295_, v_auxVars_296_, v___x_297_, v_inst_298_, v_R_299_, v_a_300_, v_b_301_, v_c_302_);
lean_dec_ref(v___x_297_);
lean_dec_ref(v_auxVars_296_);
lean_dec(v_numArgs_295_);
lean_dec_ref(v___x_294_);
lean_dec(v_upperBound_293_);
return v_res_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromDecl(lean_object* v_declName_304_, lean_object* v_num_x3f_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_){
_start:
{
lean_object* v___x_311_; 
lean_inc(v_declName_304_);
v___x_311_ = l_Lean_Meta_Sym_mkPatternFromDecl(v_declName_304_, v_num_x3f_305_, v_a_306_, v_a_307_, v_a_308_, v_a_309_);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v_a_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_323_; 
v_a_312_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_323_ == 0)
{
v___x_314_ = v___x_311_;
v_isShared_315_ = v_isSharedCheck_323_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_a_312_);
lean_dec(v___x_311_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_323_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_321_; 
v___x_316_ = l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos(v_a_312_);
v___x_317_ = lean_box(0);
v___x_318_ = l_Lean_mkConst(v_declName_304_, v___x_317_);
v___x_319_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
lean_ctor_set(v___x_319_, 1, v_a_312_);
lean_ctor_set(v___x_319_, 2, v___x_316_);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 0, v___x_319_);
v___x_321_ = v___x_314_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v___x_319_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
return v___x_321_;
}
}
}
else
{
lean_object* v_a_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_331_; 
lean_dec(v_declName_304_);
v_a_324_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_331_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_331_ == 0)
{
v___x_326_ = v___x_311_;
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_a_324_);
lean_dec(v___x_311_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_329_; 
if (v_isShared_327_ == 0)
{
v___x_329_ = v___x_326_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_a_324_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromDecl___boxed(lean_object* v_declName_332_, lean_object* v_num_x3f_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v_declName_332_, v_num_x3f_333_, v_a_334_, v_a_335_, v_a_336_, v_a_337_);
lean_dec(v_a_337_);
lean_dec_ref(v_a_336_);
lean_dec(v_a_335_);
lean_dec_ref(v_a_334_);
lean_dec(v_num_x3f_333_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Sym_mkBackwardRuleFromExpr_spec__0(lean_object* v_a_340_, lean_object* v_a_341_){
_start:
{
if (lean_obj_tag(v_a_340_) == 0)
{
lean_object* v___x_342_; 
v___x_342_ = l_List_reverse___redArg(v_a_341_);
return v___x_342_;
}
else
{
lean_object* v_head_343_; lean_object* v_tail_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_353_; 
v_head_343_ = lean_ctor_get(v_a_340_, 0);
v_tail_344_ = lean_ctor_get(v_a_340_, 1);
v_isSharedCheck_353_ = !lean_is_exclusive(v_a_340_);
if (v_isSharedCheck_353_ == 0)
{
v___x_346_ = v_a_340_;
v_isShared_347_ = v_isSharedCheck_353_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_tail_344_);
lean_inc(v_head_343_);
lean_dec(v_a_340_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_353_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_348_; lean_object* v___x_350_; 
v___x_348_ = l_Lean_mkLevelParam(v_head_343_);
if (v_isShared_347_ == 0)
{
lean_ctor_set(v___x_346_, 1, v_a_341_);
lean_ctor_set(v___x_346_, 0, v___x_348_);
v___x_350_ = v___x_346_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v___x_348_);
lean_ctor_set(v_reuseFailAlloc_352_, 1, v_a_341_);
v___x_350_ = v_reuseFailAlloc_352_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
v_a_340_ = v_tail_344_;
v_a_341_ = v___x_350_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromExpr(lean_object* v_e_354_, lean_object* v_levelParams_355_, lean_object* v_num_x3f_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_){
_start:
{
lean_object* v___x_362_; 
lean_inc(v_levelParams_355_);
lean_inc_ref(v_e_354_);
v___x_362_ = l_Lean_Meta_Sym_mkPatternFromExpr(v_e_354_, v_levelParams_355_, v_num_x3f_356_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
if (lean_obj_tag(v___x_362_) == 0)
{
lean_object* v_a_363_; lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_376_; 
v_a_363_ = lean_ctor_get(v___x_362_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_376_ == 0)
{
v___x_365_ = v___x_362_;
v_isShared_366_ = v_isSharedCheck_376_;
goto v_resetjp_364_;
}
else
{
lean_inc(v_a_363_);
lean_dec(v___x_362_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_376_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v_levelParams_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_374_; 
v_levelParams_367_ = lean_ctor_get(v_a_363_, 0);
v___x_368_ = l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos(v_a_363_);
v___x_369_ = lean_box(0);
lean_inc(v_levelParams_367_);
v___x_370_ = l_List_mapTR_loop___at___00Lean_Meta_Sym_mkBackwardRuleFromExpr_spec__0(v_levelParams_367_, v___x_369_);
v___x_371_ = l_Lean_Expr_instantiateLevelParams(v_e_354_, v_levelParams_355_, v___x_370_);
lean_dec_ref(v_e_354_);
v___x_372_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
lean_ctor_set(v___x_372_, 1, v_a_363_);
lean_ctor_set(v___x_372_, 2, v___x_368_);
if (v_isShared_366_ == 0)
{
lean_ctor_set(v___x_365_, 0, v___x_372_);
v___x_374_ = v___x_365_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v___x_372_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
else
{
lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_384_; 
lean_dec(v_levelParams_355_);
lean_dec_ref(v_e_354_);
v_a_377_ = lean_ctor_get(v___x_362_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_384_ == 0)
{
v___x_379_ = v___x_362_;
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_dec(v___x_362_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_382_; 
if (v_isShared_380_ == 0)
{
v___x_382_ = v___x_379_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_a_377_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromExpr___boxed(lean_object* v_e_385_, lean_object* v_levelParams_386_, lean_object* v_num_x3f_387_, lean_object* v_a_388_, lean_object* v_a_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lean_Meta_Sym_mkBackwardRuleFromExpr(v_e_385_, v_levelParams_386_, v_num_x3f_387_, v_a_388_, v_a_389_, v_a_390_, v_a_391_);
lean_dec(v_a_391_);
lean_dec_ref(v_a_390_);
lean_dec(v_a_389_);
lean_dec_ref(v_a_388_);
lean_dec(v_num_x3f_387_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkValue(lean_object* v_expr_394_, lean_object* v_pattern_395_, lean_object* v_result_396_){
_start:
{
if (lean_obj_tag(v_expr_394_) == 4)
{
lean_object* v_us_403_; 
v_us_403_ = lean_ctor_get(v_expr_394_, 1);
if (lean_obj_tag(v_us_403_) == 0)
{
lean_object* v_declName_404_; lean_object* v_us_405_; lean_object* v_args_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
lean_dec_ref(v_pattern_395_);
v_declName_404_ = lean_ctor_get(v_expr_394_, 0);
lean_inc(v_declName_404_);
lean_dec_ref_known(v_expr_394_, 2);
v_us_405_ = lean_ctor_get(v_result_396_, 0);
lean_inc(v_us_405_);
v_args_406_ = lean_ctor_get(v_result_396_, 1);
lean_inc_ref(v_args_406_);
lean_dec_ref(v_result_396_);
v___x_407_ = l_Lean_mkConst(v_declName_404_, v_us_405_);
v___x_408_ = l_Lean_mkAppN(v___x_407_, v_args_406_);
lean_dec_ref(v_args_406_);
return v___x_408_;
}
else
{
goto v___jp_397_;
}
}
else
{
goto v___jp_397_;
}
v___jp_397_:
{
lean_object* v_levelParams_398_; lean_object* v_us_399_; lean_object* v_args_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v_levelParams_398_ = lean_ctor_get(v_pattern_395_, 0);
lean_inc(v_levelParams_398_);
lean_dec_ref(v_pattern_395_);
v_us_399_ = lean_ctor_get(v_result_396_, 0);
lean_inc(v_us_399_);
v_args_400_ = lean_ctor_get(v_result_396_, 1);
lean_inc_ref(v_args_400_);
lean_dec_ref(v_result_396_);
v___x_401_ = l_Lean_Expr_instantiateLevelParams(v_expr_394_, v_levelParams_398_, v_us_399_);
lean_dec_ref(v_expr_394_);
v___x_402_ = l_Lean_mkAppN(v___x_401_, v_args_400_);
lean_dec_ref(v_args_400_);
return v___x_402_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorIdx(lean_object* v_x_409_){
_start:
{
if (lean_obj_tag(v_x_409_) == 0)
{
lean_object* v___x_410_; 
v___x_410_ = lean_unsigned_to_nat(0u);
return v___x_410_;
}
else
{
lean_object* v___x_411_; 
v___x_411_ = lean_unsigned_to_nat(1u);
return v___x_411_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorIdx___boxed(lean_object* v_x_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l_Lean_Meta_Sym_ApplyResult_ctorIdx(v_x_412_);
lean_dec(v_x_412_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorElim___redArg(lean_object* v_t_414_, lean_object* v_k_415_){
_start:
{
if (lean_obj_tag(v_t_414_) == 0)
{
return v_k_415_;
}
else
{
lean_object* v_mvarIds_416_; lean_object* v___x_417_; 
v_mvarIds_416_ = lean_ctor_get(v_t_414_, 0);
lean_inc(v_mvarIds_416_);
lean_dec_ref_known(v_t_414_, 1);
v___x_417_ = lean_apply_1(v_k_415_, v_mvarIds_416_);
return v___x_417_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorElim(lean_object* v_motive_418_, lean_object* v_ctorIdx_419_, lean_object* v_t_420_, lean_object* v_h_421_, lean_object* v_k_422_){
_start:
{
lean_object* v___x_423_; 
v___x_423_ = l_Lean_Meta_Sym_ApplyResult_ctorElim___redArg(v_t_420_, v_k_422_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorElim___boxed(lean_object* v_motive_424_, lean_object* v_ctorIdx_425_, lean_object* v_t_426_, lean_object* v_h_427_, lean_object* v_k_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_Lean_Meta_Sym_ApplyResult_ctorElim(v_motive_424_, v_ctorIdx_425_, v_t_426_, v_h_427_, v_k_428_);
lean_dec(v_ctorIdx_425_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_failed_elim___redArg(lean_object* v_t_430_, lean_object* v_failed_431_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l_Lean_Meta_Sym_ApplyResult_ctorElim___redArg(v_t_430_, v_failed_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_failed_elim(lean_object* v_motive_433_, lean_object* v_t_434_, lean_object* v_h_435_, lean_object* v_failed_436_){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = l_Lean_Meta_Sym_ApplyResult_ctorElim___redArg(v_t_434_, v_failed_436_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_goals_elim___redArg(lean_object* v_t_438_, lean_object* v_goals_439_){
_start:
{
lean_object* v___x_440_; 
v___x_440_ = l_Lean_Meta_Sym_ApplyResult_ctorElim___redArg(v_t_438_, v_goals_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_goals_elim(lean_object* v_motive_441_, lean_object* v_t_442_, lean_object* v_h_443_, lean_object* v_goals_444_){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = l_Lean_Meta_Sym_ApplyResult_ctorElim___redArg(v_t_442_, v_goals_444_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___lam__0(lean_object* v_x_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_){
_start:
{
lean_object* v___x_454_; 
lean_inc(v___y_448_);
lean_inc_ref(v___y_447_);
v___x_454_ = lean_apply_7(v_x_446_, v___y_447_, v___y_448_, v___y_449_, v___y_450_, v___y_451_, v___y_452_, lean_box(0));
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___lam__0___boxed(lean_object* v_x_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___lam__0(v_x_455_, v___y_456_, v___y_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_);
lean_dec(v___y_457_);
lean_dec_ref(v___y_456_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg(lean_object* v_mvarId_464_, lean_object* v_x_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_){
_start:
{
lean_object* v___f_473_; lean_object* v___x_474_; 
lean_inc(v___y_467_);
lean_inc_ref(v___y_466_);
v___f_473_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_473_, 0, v_x_465_);
lean_closure_set(v___f_473_, 1, v___y_466_);
lean_closure_set(v___f_473_, 2, v___y_467_);
v___x_474_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_464_, v___f_473_, v___y_468_, v___y_469_, v___y_470_, v___y_471_);
if (lean_obj_tag(v___x_474_) == 0)
{
return v___x_474_;
}
else
{
lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_482_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_482_ == 0)
{
v___x_477_ = v___x_474_;
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v___x_474_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_480_; 
if (v_isShared_478_ == 0)
{
v___x_480_ = v___x_477_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_a_475_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___boxed(lean_object* v_mvarId_483_, lean_object* v_x_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg(v_mvarId_483_, v_x_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_);
lean_dec(v___y_490_);
lean_dec_ref(v___y_489_);
lean_dec(v___y_488_);
lean_dec_ref(v___y_487_);
lean_dec(v___y_486_);
lean_dec_ref(v___y_485_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2(lean_object* v_00_u03b1_493_, lean_object* v_mvarId_494_, lean_object* v_x_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg(v_mvarId_494_, v_x_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___boxed(lean_object* v_00_u03b1_504_, lean_object* v_mvarId_505_, lean_object* v_x_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2(v_00_u03b1_504_, v_mvarId_505_, v_x_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_);
lean_dec(v___y_512_);
lean_dec_ref(v___y_511_);
lean_dec(v___y_510_);
lean_dec_ref(v___y_509_);
lean_dec(v___y_508_);
lean_dec_ref(v___y_507_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Sym_BackwardRule_apply_spec__1(lean_object* v_val_515_, lean_object* v_a_516_, lean_object* v_a_517_){
_start:
{
if (lean_obj_tag(v_a_516_) == 0)
{
lean_object* v___x_518_; 
v___x_518_ = l_List_reverse___redArg(v_a_517_);
return v___x_518_;
}
else
{
lean_object* v_head_519_; lean_object* v_tail_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_532_; 
v_head_519_ = lean_ctor_get(v_a_516_, 0);
v_tail_520_ = lean_ctor_get(v_a_516_, 1);
v_isSharedCheck_532_ = !lean_is_exclusive(v_a_516_);
if (v_isSharedCheck_532_ == 0)
{
v___x_522_ = v_a_516_;
v_isShared_523_ = v_isSharedCheck_532_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_tail_520_);
lean_inc(v_head_519_);
lean_dec(v_a_516_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_532_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
lean_object* v_args_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_529_; 
v_args_524_ = lean_ctor_get(v_val_515_, 1);
v___x_525_ = l_Lean_instInhabitedExpr;
v___x_526_ = lean_array_get_borrowed(v___x_525_, v_args_524_, v_head_519_);
lean_dec(v_head_519_);
v___x_527_ = l_Lean_Expr_mvarId_x21(v___x_526_);
if (v_isShared_523_ == 0)
{
lean_ctor_set(v___x_522_, 1, v_a_517_);
lean_ctor_set(v___x_522_, 0, v___x_527_);
v___x_529_ = v___x_522_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v___x_527_);
lean_ctor_set(v_reuseFailAlloc_531_, 1, v_a_517_);
v___x_529_ = v_reuseFailAlloc_531_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
v_a_516_ = v_tail_520_;
v_a_517_ = v___x_529_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Sym_BackwardRule_apply_spec__1___boxed(lean_object* v_val_533_, lean_object* v_a_534_, lean_object* v_a_535_){
_start:
{
lean_object* v_res_536_; 
v_res_536_ = l_List_mapTR_loop___at___00Lean_Meta_Sym_BackwardRule_apply_spec__1(v_val_533_, v_a_534_, v_a_535_);
lean_dec_ref(v_val_533_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(lean_object* v_x_537_, lean_object* v_x_538_, lean_object* v_x_539_, lean_object* v_x_540_){
_start:
{
lean_object* v_ks_541_; lean_object* v_vs_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_566_; 
v_ks_541_ = lean_ctor_get(v_x_537_, 0);
v_vs_542_ = lean_ctor_get(v_x_537_, 1);
v_isSharedCheck_566_ = !lean_is_exclusive(v_x_537_);
if (v_isSharedCheck_566_ == 0)
{
v___x_544_ = v_x_537_;
v_isShared_545_ = v_isSharedCheck_566_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_vs_542_);
lean_inc(v_ks_541_);
lean_dec(v_x_537_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_566_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_546_; uint8_t v___x_547_; 
v___x_546_ = lean_array_get_size(v_ks_541_);
v___x_547_ = lean_nat_dec_lt(v_x_538_, v___x_546_);
if (v___x_547_ == 0)
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_551_; 
lean_dec(v_x_538_);
v___x_548_ = lean_array_push(v_ks_541_, v_x_539_);
v___x_549_ = lean_array_push(v_vs_542_, v_x_540_);
if (v_isShared_545_ == 0)
{
lean_ctor_set(v___x_544_, 1, v___x_549_);
lean_ctor_set(v___x_544_, 0, v___x_548_);
v___x_551_ = v___x_544_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v___x_548_);
lean_ctor_set(v_reuseFailAlloc_552_, 1, v___x_549_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
return v___x_551_;
}
}
else
{
lean_object* v_k_x27_553_; uint8_t v___x_554_; 
v_k_x27_553_ = lean_array_fget_borrowed(v_ks_541_, v_x_538_);
v___x_554_ = l_Lean_instBEqMVarId_beq(v_x_539_, v_k_x27_553_);
if (v___x_554_ == 0)
{
lean_object* v___x_556_; 
if (v_isShared_545_ == 0)
{
v___x_556_ = v___x_544_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_ks_541_);
lean_ctor_set(v_reuseFailAlloc_560_, 1, v_vs_542_);
v___x_556_ = v_reuseFailAlloc_560_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_557_ = lean_unsigned_to_nat(1u);
v___x_558_ = lean_nat_add(v_x_538_, v___x_557_);
lean_dec(v_x_538_);
v_x_537_ = v___x_556_;
v_x_538_ = v___x_558_;
goto _start;
}
}
else
{
lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_564_; 
v___x_561_ = lean_array_fset(v_ks_541_, v_x_538_, v_x_539_);
v___x_562_ = lean_array_fset(v_vs_542_, v_x_538_, v_x_540_);
lean_dec(v_x_538_);
if (v_isShared_545_ == 0)
{
lean_ctor_set(v___x_544_, 1, v___x_562_);
lean_ctor_set(v___x_544_, 0, v___x_561_);
v___x_564_ = v___x_544_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_561_);
lean_ctor_set(v_reuseFailAlloc_565_, 1, v___x_562_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_n_567_, lean_object* v_k_568_, lean_object* v_v_569_){
_start:
{
lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_570_ = lean_unsigned_to_nat(0u);
v___x_571_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(v_n_567_, v___x_570_, v_k_568_, v_v_569_);
return v___x_571_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_572_ = lean_box(0);
v___x_573_ = l_unsafeCast___redArg(v___x_572_);
return v___x_573_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg(lean_object* v_x_575_, size_t v_x_576_, size_t v_x_577_, lean_object* v_x_578_, lean_object* v_x_579_){
_start:
{
if (lean_obj_tag(v_x_575_) == 0)
{
lean_object* v_es_580_; size_t v___x_581_; size_t v___x_582_; lean_object* v_j_583_; lean_object* v___x_584_; uint8_t v___x_585_; 
v_es_580_ = lean_ctor_get(v_x_575_, 0);
v___x_581_ = ((size_t)31ULL);
v___x_582_ = lean_usize_land(v_x_576_, v___x_581_);
v_j_583_ = lean_usize_to_nat(v___x_582_);
v___x_584_ = lean_array_get_size(v_es_580_);
v___x_585_ = lean_nat_dec_lt(v_j_583_, v___x_584_);
if (v___x_585_ == 0)
{
lean_dec(v_j_583_);
lean_dec(v_x_579_);
lean_dec(v_x_578_);
return v_x_575_;
}
else
{
lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_624_; 
lean_inc_ref(v_es_580_);
v_isSharedCheck_624_ = !lean_is_exclusive(v_x_575_);
if (v_isSharedCheck_624_ == 0)
{
lean_object* v_unused_625_; 
v_unused_625_ = lean_ctor_get(v_x_575_, 0);
lean_dec(v_unused_625_);
v___x_587_ = v_x_575_;
v_isShared_588_ = v_isSharedCheck_624_;
goto v_resetjp_586_;
}
else
{
lean_dec(v_x_575_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_624_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v_v_589_; lean_object* v___x_590_; lean_object* v_xs_x27_591_; lean_object* v___y_593_; 
v_v_589_ = lean_array_fget(v_es_580_, v_j_583_);
v___x_590_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__0);
v_xs_x27_591_ = lean_array_fset(v_es_580_, v_j_583_, v___x_590_);
switch(lean_obj_tag(v_v_589_))
{
case 0:
{
lean_object* v_key_598_; lean_object* v_val_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_609_; 
v_key_598_ = lean_ctor_get(v_v_589_, 0);
v_val_599_ = lean_ctor_get(v_v_589_, 1);
v_isSharedCheck_609_ = !lean_is_exclusive(v_v_589_);
if (v_isSharedCheck_609_ == 0)
{
v___x_601_ = v_v_589_;
v_isShared_602_ = v_isSharedCheck_609_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_val_599_);
lean_inc(v_key_598_);
lean_dec(v_v_589_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_609_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
uint8_t v___x_603_; 
v___x_603_ = l_Lean_instBEqMVarId_beq(v_x_578_, v_key_598_);
if (v___x_603_ == 0)
{
lean_object* v___x_604_; lean_object* v___x_605_; 
lean_del_object(v___x_601_);
v___x_604_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_598_, v_val_599_, v_x_578_, v_x_579_);
v___x_605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_605_, 0, v___x_604_);
v___y_593_ = v___x_605_;
goto v___jp_592_;
}
else
{
lean_object* v___x_607_; 
lean_dec(v_val_599_);
lean_dec(v_key_598_);
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 1, v_x_579_);
lean_ctor_set(v___x_601_, 0, v_x_578_);
v___x_607_ = v___x_601_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v_x_578_);
lean_ctor_set(v_reuseFailAlloc_608_, 1, v_x_579_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
v___y_593_ = v___x_607_;
goto v___jp_592_;
}
}
}
}
case 1:
{
lean_object* v_node_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_622_; 
v_node_610_ = lean_ctor_get(v_v_589_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v_v_589_);
if (v_isSharedCheck_622_ == 0)
{
v___x_612_ = v_v_589_;
v_isShared_613_ = v_isSharedCheck_622_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_node_610_);
lean_dec(v_v_589_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_622_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
size_t v___x_614_; size_t v___x_615_; size_t v___x_616_; size_t v___x_617_; lean_object* v___x_618_; lean_object* v___x_620_; 
v___x_614_ = ((size_t)5ULL);
v___x_615_ = lean_usize_shift_right(v_x_576_, v___x_614_);
v___x_616_ = ((size_t)1ULL);
v___x_617_ = lean_usize_add(v_x_577_, v___x_616_);
v___x_618_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg(v_node_610_, v___x_615_, v___x_617_, v_x_578_, v_x_579_);
if (v_isShared_613_ == 0)
{
lean_ctor_set(v___x_612_, 0, v___x_618_);
v___x_620_ = v___x_612_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v___x_618_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
v___y_593_ = v___x_620_;
goto v___jp_592_;
}
}
}
default: 
{
lean_object* v___x_623_; 
v___x_623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_623_, 0, v_x_578_);
lean_ctor_set(v___x_623_, 1, v_x_579_);
v___y_593_ = v___x_623_;
goto v___jp_592_;
}
}
v___jp_592_:
{
lean_object* v___x_594_; lean_object* v___x_596_; 
v___x_594_ = lean_array_fset(v_xs_x27_591_, v_j_583_, v___y_593_);
lean_dec(v_j_583_);
if (v_isShared_588_ == 0)
{
lean_ctor_set(v___x_587_, 0, v___x_594_);
v___x_596_ = v___x_587_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v___x_594_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
}
}
}
else
{
lean_object* v_ks_626_; lean_object* v_vs_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_645_; 
v_ks_626_ = lean_ctor_get(v_x_575_, 0);
v_vs_627_ = lean_ctor_get(v_x_575_, 1);
v_isSharedCheck_645_ = !lean_is_exclusive(v_x_575_);
if (v_isSharedCheck_645_ == 0)
{
v___x_629_ = v_x_575_;
v_isShared_630_ = v_isSharedCheck_645_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_vs_627_);
lean_inc(v_ks_626_);
lean_dec(v_x_575_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_645_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_632_; 
if (v_isShared_630_ == 0)
{
v___x_632_ = v___x_629_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v_ks_626_);
lean_ctor_set(v_reuseFailAlloc_644_, 1, v_vs_627_);
v___x_632_ = v_reuseFailAlloc_644_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
lean_object* v_newNode_633_; size_t v___x_634_; uint8_t v___x_635_; 
v_newNode_633_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4___redArg(v___x_632_, v_x_578_, v_x_579_);
v___x_634_ = ((size_t)7ULL);
v___x_635_ = lean_usize_dec_le(v___x_634_, v_x_577_);
if (v___x_635_ == 0)
{
lean_object* v___x_636_; lean_object* v___x_637_; uint8_t v___x_638_; 
v___x_636_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_633_);
v___x_637_ = lean_unsigned_to_nat(4u);
v___x_638_ = lean_nat_dec_lt(v___x_636_, v___x_637_);
lean_dec(v___x_636_);
if (v___x_638_ == 0)
{
lean_object* v_ks_639_; lean_object* v_vs_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v_ks_639_ = lean_ctor_get(v_newNode_633_, 0);
lean_inc_ref(v_ks_639_);
v_vs_640_ = lean_ctor_get(v_newNode_633_, 1);
lean_inc_ref(v_vs_640_);
lean_dec_ref(v_newNode_633_);
v___x_641_ = lean_unsigned_to_nat(0u);
v___x_642_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__1);
v___x_643_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___redArg(v_x_577_, v_ks_639_, v_vs_640_, v___x_641_, v___x_642_);
lean_dec_ref(v_vs_640_);
lean_dec_ref(v_ks_639_);
return v___x_643_;
}
else
{
return v_newNode_633_;
}
}
else
{
return v_newNode_633_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___redArg(size_t v_depth_646_, lean_object* v_keys_647_, lean_object* v_vals_648_, lean_object* v_i_649_, lean_object* v_entries_650_){
_start:
{
lean_object* v___x_651_; uint8_t v___x_652_; 
v___x_651_ = lean_array_get_size(v_keys_647_);
v___x_652_ = lean_nat_dec_lt(v_i_649_, v___x_651_);
if (v___x_652_ == 0)
{
lean_dec(v_i_649_);
return v_entries_650_;
}
else
{
lean_object* v_k_653_; lean_object* v_v_654_; uint64_t v___x_655_; size_t v_h_656_; size_t v___x_657_; lean_object* v___x_658_; size_t v___x_659_; size_t v___x_660_; size_t v___x_661_; size_t v_h_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
v_k_653_ = lean_array_fget_borrowed(v_keys_647_, v_i_649_);
v_v_654_ = lean_array_fget_borrowed(v_vals_648_, v_i_649_);
v___x_655_ = l_Lean_instHashableMVarId_hash(v_k_653_);
v_h_656_ = lean_uint64_to_usize(v___x_655_);
v___x_657_ = ((size_t)5ULL);
v___x_658_ = lean_unsigned_to_nat(1u);
v___x_659_ = ((size_t)1ULL);
v___x_660_ = lean_usize_sub(v_depth_646_, v___x_659_);
v___x_661_ = lean_usize_mul(v___x_657_, v___x_660_);
v_h_662_ = lean_usize_shift_right(v_h_656_, v___x_661_);
v___x_663_ = lean_nat_add(v_i_649_, v___x_658_);
lean_dec(v_i_649_);
lean_inc(v_v_654_);
lean_inc(v_k_653_);
v___x_664_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg(v_entries_650_, v_h_662_, v_depth_646_, v_k_653_, v_v_654_);
v_i_649_ = v___x_663_;
v_entries_650_ = v___x_664_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_depth_666_, lean_object* v_keys_667_, lean_object* v_vals_668_, lean_object* v_i_669_, lean_object* v_entries_670_){
_start:
{
size_t v_depth_boxed_671_; lean_object* v_res_672_; 
v_depth_boxed_671_ = lean_unbox_usize(v_depth_666_);
lean_dec(v_depth_666_);
v_res_672_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___redArg(v_depth_boxed_671_, v_keys_667_, v_vals_668_, v_i_669_, v_entries_670_);
lean_dec_ref(v_vals_668_);
lean_dec_ref(v_keys_667_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_x_673_, lean_object* v_x_674_, lean_object* v_x_675_, lean_object* v_x_676_, lean_object* v_x_677_){
_start:
{
size_t v_x_3033__boxed_678_; size_t v_x_3034__boxed_679_; lean_object* v_res_680_; 
v_x_3033__boxed_678_ = lean_unbox_usize(v_x_674_);
lean_dec(v_x_674_);
v_x_3034__boxed_679_ = lean_unbox_usize(v_x_675_);
lean_dec(v_x_675_);
v_res_680_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg(v_x_673_, v_x_3033__boxed_678_, v_x_3034__boxed_679_, v_x_676_, v_x_677_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0___redArg(lean_object* v_x_681_, lean_object* v_x_682_, lean_object* v_x_683_){
_start:
{
uint64_t v___x_684_; size_t v___x_685_; size_t v___x_686_; lean_object* v___x_687_; 
v___x_684_ = l_Lean_instHashableMVarId_hash(v_x_682_);
v___x_685_ = lean_uint64_to_usize(v___x_684_);
v___x_686_ = ((size_t)1ULL);
v___x_687_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg(v_x_681_, v___x_685_, v___x_686_, v_x_682_, v_x_683_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___redArg(lean_object* v_mvarId_688_, lean_object* v_val_689_, lean_object* v___y_690_){
_start:
{
lean_object* v___x_692_; lean_object* v_mctx_693_; lean_object* v_cache_694_; lean_object* v_zetaDeltaFVarIds_695_; lean_object* v_postponed_696_; lean_object* v_diag_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_726_; 
v___x_692_ = lean_st_ref_take(v___y_690_);
v_mctx_693_ = lean_ctor_get(v___x_692_, 0);
v_cache_694_ = lean_ctor_get(v___x_692_, 1);
v_zetaDeltaFVarIds_695_ = lean_ctor_get(v___x_692_, 2);
v_postponed_696_ = lean_ctor_get(v___x_692_, 3);
v_diag_697_ = lean_ctor_get(v___x_692_, 4);
v_isSharedCheck_726_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_726_ == 0)
{
v___x_699_ = v___x_692_;
v_isShared_700_ = v_isSharedCheck_726_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_diag_697_);
lean_inc(v_postponed_696_);
lean_inc(v_zetaDeltaFVarIds_695_);
lean_inc(v_cache_694_);
lean_inc(v_mctx_693_);
lean_dec(v___x_692_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_726_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v_depth_701_; lean_object* v_levelAssignDepth_702_; lean_object* v_lmvarCounter_703_; lean_object* v_mvarCounter_704_; lean_object* v_lDecls_705_; lean_object* v_decls_706_; lean_object* v_userNames_707_; lean_object* v_lAssignment_708_; lean_object* v_eAssignment_709_; lean_object* v_dAssignment_710_; lean_object* v_instanceTypedMVars_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_725_; 
v_depth_701_ = lean_ctor_get(v_mctx_693_, 0);
v_levelAssignDepth_702_ = lean_ctor_get(v_mctx_693_, 1);
v_lmvarCounter_703_ = lean_ctor_get(v_mctx_693_, 2);
v_mvarCounter_704_ = lean_ctor_get(v_mctx_693_, 3);
v_lDecls_705_ = lean_ctor_get(v_mctx_693_, 4);
v_decls_706_ = lean_ctor_get(v_mctx_693_, 5);
v_userNames_707_ = lean_ctor_get(v_mctx_693_, 6);
v_lAssignment_708_ = lean_ctor_get(v_mctx_693_, 7);
v_eAssignment_709_ = lean_ctor_get(v_mctx_693_, 8);
v_dAssignment_710_ = lean_ctor_get(v_mctx_693_, 9);
v_instanceTypedMVars_711_ = lean_ctor_get(v_mctx_693_, 10);
v_isSharedCheck_725_ = !lean_is_exclusive(v_mctx_693_);
if (v_isSharedCheck_725_ == 0)
{
v___x_713_ = v_mctx_693_;
v_isShared_714_ = v_isSharedCheck_725_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_instanceTypedMVars_711_);
lean_inc(v_dAssignment_710_);
lean_inc(v_eAssignment_709_);
lean_inc(v_lAssignment_708_);
lean_inc(v_userNames_707_);
lean_inc(v_decls_706_);
lean_inc(v_lDecls_705_);
lean_inc(v_mvarCounter_704_);
lean_inc(v_lmvarCounter_703_);
lean_inc(v_levelAssignDepth_702_);
lean_inc(v_depth_701_);
lean_dec(v_mctx_693_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_725_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_718_; 
v___x_715_ = lean_box(0);
v___x_716_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0___redArg(v_eAssignment_709_, v_mvarId_688_, v_val_689_);
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 8, v___x_716_);
v___x_718_ = v___x_713_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_depth_701_);
lean_ctor_set(v_reuseFailAlloc_724_, 1, v_levelAssignDepth_702_);
lean_ctor_set(v_reuseFailAlloc_724_, 2, v_lmvarCounter_703_);
lean_ctor_set(v_reuseFailAlloc_724_, 3, v_mvarCounter_704_);
lean_ctor_set(v_reuseFailAlloc_724_, 4, v_lDecls_705_);
lean_ctor_set(v_reuseFailAlloc_724_, 5, v_decls_706_);
lean_ctor_set(v_reuseFailAlloc_724_, 6, v_userNames_707_);
lean_ctor_set(v_reuseFailAlloc_724_, 7, v_lAssignment_708_);
lean_ctor_set(v_reuseFailAlloc_724_, 8, v___x_716_);
lean_ctor_set(v_reuseFailAlloc_724_, 9, v_dAssignment_710_);
lean_ctor_set(v_reuseFailAlloc_724_, 10, v_instanceTypedMVars_711_);
v___x_718_ = v_reuseFailAlloc_724_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
lean_object* v___x_720_; 
if (v_isShared_700_ == 0)
{
lean_ctor_set(v___x_699_, 0, v___x_718_);
v___x_720_ = v___x_699_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v___x_718_);
lean_ctor_set(v_reuseFailAlloc_723_, 1, v_cache_694_);
lean_ctor_set(v_reuseFailAlloc_723_, 2, v_zetaDeltaFVarIds_695_);
lean_ctor_set(v_reuseFailAlloc_723_, 3, v_postponed_696_);
lean_ctor_set(v_reuseFailAlloc_723_, 4, v_diag_697_);
v___x_720_ = v_reuseFailAlloc_723_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
lean_object* v___x_721_; lean_object* v___x_722_; 
v___x_721_ = lean_st_ref_put(v___y_690_, v___x_720_);
v___x_722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_722_, 0, v___x_715_);
return v___x_722_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___redArg___boxed(lean_object* v_mvarId_727_, lean_object* v_val_728_, lean_object* v___y_729_, lean_object* v___y_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___redArg(v_mvarId_727_, v_val_728_, v___y_729_);
lean_dec(v___y_729_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply___lam__0(lean_object* v_mvarId_732_, lean_object* v_rule_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_){
_start:
{
lean_object* v___x_741_; 
lean_inc(v_mvarId_732_);
v___x_741_ = l_Lean_MVarId_getDecl(v_mvarId_732_, v___y_736_, v___y_737_, v___y_738_, v___y_739_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v_a_742_; lean_object* v_expr_743_; lean_object* v_pattern_744_; lean_object* v_resultPos_745_; lean_object* v_type_746_; uint8_t v___x_747_; lean_object* v___x_748_; 
v_a_742_ = lean_ctor_get(v___x_741_, 0);
lean_inc(v_a_742_);
lean_dec_ref_known(v___x_741_, 1);
v_expr_743_ = lean_ctor_get(v_rule_733_, 0);
lean_inc_ref(v_expr_743_);
v_pattern_744_ = lean_ctor_get(v_rule_733_, 1);
lean_inc_ref_n(v_pattern_744_, 2);
v_resultPos_745_ = lean_ctor_get(v_rule_733_, 2);
lean_inc(v_resultPos_745_);
lean_dec_ref(v_rule_733_);
v_type_746_ = lean_ctor_get(v_a_742_, 2);
lean_inc_ref(v_type_746_);
lean_dec(v_a_742_);
v___x_747_ = 1;
v___x_748_ = l_Lean_Meta_Sym_Pattern_unify_x3f(v_pattern_744_, v_type_746_, v___x_747_, v___y_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_785_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_785_ == 0)
{
v___x_751_ = v___x_748_;
v_isShared_752_ = v_isSharedCheck_785_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_a_749_);
lean_dec(v___x_748_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_785_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
if (lean_obj_tag(v_a_749_) == 1)
{
lean_object* v_val_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_780_; 
v_val_753_ = lean_ctor_get(v_a_749_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v_a_749_);
if (v_isSharedCheck_780_ == 0)
{
v___x_755_ = v_a_749_;
v_isShared_756_ = v_isSharedCheck_780_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_val_753_);
lean_dec(v_a_749_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_780_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v_unresolvedInsts_757_; lean_object* v___x_758_; lean_object* v___x_759_; uint8_t v___x_760_; 
v_unresolvedInsts_757_ = lean_ctor_get(v_val_753_, 2);
v___x_758_ = lean_array_get_size(v_unresolvedInsts_757_);
v___x_759_ = lean_unsigned_to_nat(0u);
v___x_760_ = lean_nat_dec_eq(v___x_758_, v___x_759_);
if (v___x_760_ == 0)
{
lean_object* v___x_761_; lean_object* v___x_763_; 
lean_del_object(v___x_755_);
lean_dec(v_val_753_);
lean_dec(v_resultPos_745_);
lean_dec_ref(v_pattern_744_);
lean_dec_ref(v_expr_743_);
lean_dec(v_mvarId_732_);
v___x_761_ = lean_box(0);
if (v_isShared_752_ == 0)
{
lean_ctor_set(v___x_751_, 0, v___x_761_);
v___x_763_ = v___x_751_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v___x_761_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
else
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_778_; 
lean_del_object(v___x_751_);
lean_inc(v_val_753_);
v___x_765_ = l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkValue(v_expr_743_, v_pattern_744_, v_val_753_);
v___x_766_ = l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___redArg(v_mvarId_732_, v___x_765_, v___y_737_);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_778_ == 0)
{
lean_object* v_unused_779_; 
v_unused_779_ = lean_ctor_get(v___x_766_, 0);
lean_dec(v_unused_779_);
v___x_768_ = v___x_766_;
v_isShared_769_ = v_isSharedCheck_778_;
goto v_resetjp_767_;
}
else
{
lean_dec(v___x_766_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_778_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_773_; 
v___x_770_ = lean_box(0);
v___x_771_ = l_List_mapTR_loop___at___00Lean_Meta_Sym_BackwardRule_apply_spec__1(v_val_753_, v_resultPos_745_, v___x_770_);
lean_dec(v_val_753_);
if (v_isShared_756_ == 0)
{
lean_ctor_set(v___x_755_, 0, v___x_771_);
v___x_773_ = v___x_755_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v___x_771_);
v___x_773_ = v_reuseFailAlloc_777_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
lean_object* v___x_775_; 
if (v_isShared_769_ == 0)
{
lean_ctor_set(v___x_768_, 0, v___x_773_);
v___x_775_ = v___x_768_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v___x_773_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
}
}
}
}
}
}
else
{
lean_object* v___x_781_; lean_object* v___x_783_; 
lean_dec(v_a_749_);
lean_dec(v_resultPos_745_);
lean_dec_ref(v_pattern_744_);
lean_dec_ref(v_expr_743_);
lean_dec(v_mvarId_732_);
v___x_781_ = lean_box(0);
if (v_isShared_752_ == 0)
{
lean_ctor_set(v___x_751_, 0, v___x_781_);
v___x_783_ = v___x_751_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v___x_781_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
}
}
else
{
lean_object* v_a_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_793_; 
lean_dec(v_resultPos_745_);
lean_dec_ref(v_pattern_744_);
lean_dec_ref(v_expr_743_);
lean_dec(v_mvarId_732_);
v_a_786_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_793_ == 0)
{
v___x_788_ = v___x_748_;
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_a_786_);
lean_dec(v___x_748_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_791_; 
if (v_isShared_789_ == 0)
{
v___x_791_ = v___x_788_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_a_786_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
}
else
{
lean_object* v_a_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_801_; 
lean_dec_ref(v_rule_733_);
lean_dec(v_mvarId_732_);
v_a_794_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_801_ == 0)
{
v___x_796_ = v___x_741_;
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_a_794_);
lean_dec(v___x_741_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply___lam__0___boxed(lean_object* v_mvarId_802_, lean_object* v_rule_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_){
_start:
{
lean_object* v_res_811_; 
v_res_811_ = l_Lean_Meta_Sym_BackwardRule_apply___lam__0(v_mvarId_802_, v_rule_803_, v___y_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_);
lean_dec(v___y_809_);
lean_dec_ref(v___y_808_);
lean_dec(v___y_807_);
lean_dec_ref(v___y_806_);
lean_dec(v___y_805_);
lean_dec_ref(v___y_804_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply(lean_object* v_mvarId_812_, lean_object* v_rule_813_, lean_object* v_a_814_, lean_object* v_a_815_, lean_object* v_a_816_, lean_object* v_a_817_, lean_object* v_a_818_, lean_object* v_a_819_){
_start:
{
lean_object* v___f_821_; lean_object* v___x_822_; 
lean_inc(v_mvarId_812_);
v___f_821_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_BackwardRule_apply___lam__0___boxed), 9, 2);
lean_closure_set(v___f_821_, 0, v_mvarId_812_);
lean_closure_set(v___f_821_, 1, v_rule_813_);
v___x_822_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg(v_mvarId_812_, v___f_821_, v_a_814_, v_a_815_, v_a_816_, v_a_817_, v_a_818_, v_a_819_);
return v___x_822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply___boxed(lean_object* v_mvarId_823_, lean_object* v_rule_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_, lean_object* v_a_830_, lean_object* v_a_831_){
_start:
{
lean_object* v_res_832_; 
v_res_832_ = l_Lean_Meta_Sym_BackwardRule_apply(v_mvarId_823_, v_rule_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_, v_a_830_);
lean_dec(v_a_830_);
lean_dec_ref(v_a_829_);
lean_dec(v_a_828_);
lean_dec_ref(v_a_827_);
lean_dec(v_a_826_);
lean_dec_ref(v_a_825_);
return v_res_832_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0(lean_object* v_mvarId_833_, lean_object* v_val_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_){
_start:
{
lean_object* v___x_842_; 
v___x_842_ = l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___redArg(v_mvarId_833_, v_val_834_, v___y_838_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___boxed(lean_object* v_mvarId_843_, lean_object* v_val_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0(v_mvarId_843_, v_val_844_, v___y_845_, v___y_846_, v___y_847_, v___y_848_, v___y_849_, v___y_850_);
lean_dec(v___y_850_);
lean_dec_ref(v___y_849_);
lean_dec(v___y_848_);
lean_dec_ref(v___y_847_);
lean_dec(v___y_846_);
lean_dec_ref(v___y_845_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0(lean_object* v_00_u03b2_853_, lean_object* v_x_854_, lean_object* v_x_855_, lean_object* v_x_856_){
_start:
{
lean_object* v___x_857_; 
v___x_857_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0___redArg(v_x_854_, v_x_855_, v_x_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_858_, lean_object* v_x_859_, size_t v_x_860_, size_t v_x_861_, lean_object* v_x_862_, lean_object* v_x_863_){
_start:
{
lean_object* v___x_864_; 
v___x_864_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg(v_x_859_, v_x_860_, v_x_861_, v_x_862_, v_x_863_);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_865_, lean_object* v_x_866_, lean_object* v_x_867_, lean_object* v_x_868_, lean_object* v_x_869_, lean_object* v_x_870_){
_start:
{
size_t v_x_3418__boxed_871_; size_t v_x_3419__boxed_872_; lean_object* v_res_873_; 
v_x_3418__boxed_871_ = lean_unbox_usize(v_x_867_);
lean_dec(v_x_867_);
v_x_3419__boxed_872_ = lean_unbox_usize(v_x_868_);
lean_dec(v_x_868_);
v_res_873_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2(v_00_u03b2_865_, v_x_866_, v_x_3418__boxed_871_, v_x_3419__boxed_872_, v_x_869_, v_x_870_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b2_874_, lean_object* v_n_875_, lean_object* v_k_876_, lean_object* v_v_877_){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4___redArg(v_n_875_, v_k_876_, v_v_877_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_879_, size_t v_depth_880_, lean_object* v_keys_881_, lean_object* v_vals_882_, lean_object* v_heq_883_, lean_object* v_i_884_, lean_object* v_entries_885_){
_start:
{
lean_object* v___x_886_; 
v___x_886_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___redArg(v_depth_880_, v_keys_881_, v_vals_882_, v_i_884_, v_entries_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_887_, lean_object* v_depth_888_, lean_object* v_keys_889_, lean_object* v_vals_890_, lean_object* v_heq_891_, lean_object* v_i_892_, lean_object* v_entries_893_){
_start:
{
size_t v_depth_boxed_894_; lean_object* v_res_895_; 
v_depth_boxed_894_ = lean_unbox_usize(v_depth_888_);
lean_dec(v_depth_888_);
v_res_895_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5(v_00_u03b2_887_, v_depth_boxed_894_, v_keys_889_, v_vals_890_, v_heq_891_, v_i_892_, v_entries_893_);
lean_dec_ref(v_vals_890_);
lean_dec_ref(v_keys_889_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_896_, lean_object* v_x_897_, lean_object* v_x_898_, lean_object* v_x_899_, lean_object* v_x_900_){
_start:
{
lean_object* v___x_901_; 
v___x_901_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(v_x_897_, v_x_898_, v_x_899_, v_x_900_);
return v___x_901_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0_spec__0(lean_object* v_msgData_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_){
_start:
{
lean_object* v___x_908_; lean_object* v_env_909_; lean_object* v___x_910_; lean_object* v_toCold_911_; lean_object* v_mctx_912_; lean_object* v_lctx_913_; lean_object* v_options_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_908_ = lean_st_ref_get(v___y_906_);
v_env_909_ = lean_ctor_get(v___x_908_, 0);
lean_inc_ref(v_env_909_);
lean_dec(v___x_908_);
v___x_910_ = lean_st_ref_get(v___y_904_);
v_toCold_911_ = lean_ctor_get(v___y_905_, 0);
v_mctx_912_ = lean_ctor_get(v___x_910_, 0);
lean_inc_ref(v_mctx_912_);
lean_dec(v___x_910_);
v_lctx_913_ = lean_ctor_get(v___y_903_, 2);
v_options_914_ = lean_ctor_get(v_toCold_911_, 2);
lean_inc_ref(v_options_914_);
lean_inc_ref(v_lctx_913_);
v___x_915_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_915_, 0, v_env_909_);
lean_ctor_set(v___x_915_, 1, v_mctx_912_);
lean_ctor_set(v___x_915_, 2, v_lctx_913_);
lean_ctor_set(v___x_915_, 3, v_options_914_);
v___x_916_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_915_);
lean_ctor_set(v___x_916_, 1, v_msgData_902_);
v___x_917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_917_, 0, v___x_916_);
return v___x_917_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0_spec__0___boxed(lean_object* v_msgData_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_){
_start:
{
lean_object* v_res_924_; 
v_res_924_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0_spec__0(v_msgData_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_);
lean_dec(v___y_922_);
lean_dec_ref(v___y_921_);
lean_dec(v___y_920_);
lean_dec_ref(v___y_919_);
return v_res_924_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___redArg(lean_object* v_msg_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_){
_start:
{
lean_object* v_ref_931_; lean_object* v___x_932_; lean_object* v_a_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_941_; 
v_ref_931_ = lean_ctor_get(v___y_928_, 2);
v___x_932_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0_spec__0(v_msg_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_);
v_a_933_ = lean_ctor_get(v___x_932_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_932_);
if (v_isSharedCheck_941_ == 0)
{
v___x_935_ = v___x_932_;
v_isShared_936_ = v_isSharedCheck_941_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_a_933_);
lean_dec(v___x_932_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_941_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___x_937_; lean_object* v___x_939_; 
lean_inc(v_ref_931_);
v___x_937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_937_, 0, v_ref_931_);
lean_ctor_set(v___x_937_, 1, v_a_933_);
if (v_isShared_936_ == 0)
{
lean_ctor_set_tag(v___x_935_, 1);
lean_ctor_set(v___x_935_, 0, v___x_937_);
v___x_939_ = v___x_935_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v___x_937_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___redArg___boxed(lean_object* v_msg_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_){
_start:
{
lean_object* v_res_948_; 
v_res_948_ = l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___redArg(v_msg_942_, v___y_943_, v___y_944_, v___y_945_, v___y_946_);
lean_dec(v___y_946_);
lean_dec_ref(v___y_945_);
lean_dec(v___y_944_);
lean_dec_ref(v___y_943_);
return v_res_948_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__1(void){
_start:
{
lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_950_ = ((lean_object*)(l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__0));
v___x_951_ = l_Lean_stringToMessageData(v___x_950_);
return v___x_951_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__3(void){
_start:
{
lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_953_ = ((lean_object*)(l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__2));
v___x_954_ = l_Lean_stringToMessageData(v___x_953_);
return v___x_954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27(lean_object* v_mvarId_955_, lean_object* v_rule_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_){
_start:
{
lean_object* v___x_964_; 
lean_inc_ref(v_rule_956_);
lean_inc(v_mvarId_955_);
v___x_964_ = l_Lean_Meta_Sym_BackwardRule_apply(v_mvarId_955_, v_rule_956_, v_a_957_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_);
if (lean_obj_tag(v___x_964_) == 0)
{
lean_object* v_a_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_982_; 
v_a_965_ = lean_ctor_get(v___x_964_, 0);
v_isSharedCheck_982_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_982_ == 0)
{
v___x_967_ = v___x_964_;
v_isShared_968_ = v_isSharedCheck_982_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_a_965_);
lean_dec(v___x_964_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_982_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
if (lean_obj_tag(v_a_965_) == 1)
{
lean_object* v_mvarIds_969_; lean_object* v___x_971_; 
lean_dec_ref(v_rule_956_);
lean_dec(v_mvarId_955_);
v_mvarIds_969_ = lean_ctor_get(v_a_965_, 0);
lean_inc(v_mvarIds_969_);
lean_dec_ref_known(v_a_965_, 1);
if (v_isShared_968_ == 0)
{
lean_ctor_set(v___x_967_, 0, v_mvarIds_969_);
v___x_971_ = v___x_967_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v_mvarIds_969_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
else
{
lean_object* v_expr_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
lean_del_object(v___x_967_);
lean_dec(v_a_965_);
v_expr_973_ = lean_ctor_get(v_rule_956_, 0);
lean_inc_ref(v_expr_973_);
lean_dec_ref(v_rule_956_);
v___x_974_ = lean_obj_once(&l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__1, &l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__1_once, _init_l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__1);
v___x_975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_975_, 0, v_mvarId_955_);
v___x_976_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_976_, 0, v___x_974_);
lean_ctor_set(v___x_976_, 1, v___x_975_);
v___x_977_ = lean_obj_once(&l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__3, &l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__3_once, _init_l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__3);
v___x_978_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_976_);
lean_ctor_set(v___x_978_, 1, v___x_977_);
v___x_979_ = l_Lean_indentExpr(v_expr_973_);
v___x_980_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_978_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
v___x_981_ = l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___redArg(v___x_980_, v_a_959_, v_a_960_, v_a_961_, v_a_962_);
return v___x_981_;
}
}
}
else
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
lean_dec_ref(v_rule_956_);
lean_dec(v_mvarId_955_);
v_a_983_ = lean_ctor_get(v___x_964_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_990_ == 0)
{
v___x_985_ = v___x_964_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_964_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_983_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27___boxed(lean_object* v_mvarId_991_, lean_object* v_rule_992_, lean_object* v_a_993_, lean_object* v_a_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l_Lean_Meta_Sym_BackwardRule_apply_x27(v_mvarId_991_, v_rule_992_, v_a_993_, v_a_994_, v_a_995_, v_a_996_, v_a_997_, v_a_998_);
lean_dec(v_a_998_);
lean_dec_ref(v_a_997_);
lean_dec(v_a_996_);
lean_dec_ref(v_a_995_);
lean_dec(v_a_994_);
lean_dec_ref(v_a_993_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0(lean_object* v_00_u03b1_1001_, lean_object* v_msg_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_){
_start:
{
lean_object* v___x_1010_; 
v___x_1010_ = l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___redArg(v_msg_1002_, v___y_1005_, v___y_1006_, v___y_1007_, v___y_1008_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___boxed(lean_object* v_00_u03b1_1011_, lean_object* v_msg_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_){
_start:
{
lean_object* v_res_1020_; 
v_res_1020_ = l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0(v_00_u03b1_1011_, v_msg_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_);
lean_dec(v___y_1018_);
lean_dec_ref(v___y_1017_);
lean_dec(v___y_1016_);
lean_dec_ref(v___y_1015_);
lean_dec(v___y_1014_);
lean_dec_ref(v___y_1013_);
return v_res_1020_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Apply(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Apply(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Apply(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Apply(builtin);
}
#ifdef __cplusplus
}
#endif

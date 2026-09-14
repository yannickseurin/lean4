// Lean compiler output
// Module: Lean.Meta.Match.CaseArraySizes
// Imports: public import Lean.Meta.Basic public import Lean.Meta.Tactic.FVarSubst import Lean.Meta.Match.CaseValues import Lean.Meta.Tactic.Subst
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
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_Meta_mkLt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecideProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Meta_mkArrayLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_substCore(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Meta_FVarSubst_get(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assertExt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_caseValues(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedMVarId_default;
static const lean_array_object l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__0 = (const lean_object*)&l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__0_value;
static lean_once_cell_t l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default;
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedCaseArraySizesSubgoal;
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_getArrayArgType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l_Lean_Meta_getArrayArgType___closed__0 = (const lean_object*)&l_Lean_Meta_getArrayArgType___closed__0_value;
static const lean_ctor_object l_Lean_Meta_getArrayArgType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_getArrayArgType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_object* l_Lean_Meta_getArrayArgType___closed__1 = (const lean_object*)&l_Lean_Meta_getArrayArgType___closed__1_value;
static const lean_string_object l_Lean_Meta_getArrayArgType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "array expected"};
static const lean_object* l_Lean_Meta_getArrayArgType___closed__2 = (const lean_object*)&l_Lean_Meta_getArrayArgType___closed__2_value;
static lean_once_cell_t l_Lean_Meta_getArrayArgType___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getArrayArgType___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_getArrayArgType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getArrayArgType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "getLit"};
static const lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_getArrayArgType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(203, 31, 150, 206, 23, 239, 28, 61)}};
static const lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__1 = (const lean_object*)&l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "toArrayLit_eq"};
static const lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_getArrayArgType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__0_value),LEAN_SCALAR_PTR_LITERAL(59, 54, 254, 215, 42, 180, 33, 232)}};
static const lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__1 = (const lean_object*)&l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "hEqALit"};
static const lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__2 = (const lean_object*)&l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__2_value),LEAN_SCALAR_PTR_LITERAL(144, 218, 54, 212, 216, 192, 54, 198)}};
static const lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__3 = (const lean_object*)&l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit___closed__0 = (const lean_object*)&l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_caseArraySizes___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "aSize"};
static const lean_object* l_Lean_Meta_caseArraySizes___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_caseArraySizes___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_caseArraySizes___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_caseArraySizes___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(177, 102, 98, 152, 210, 104, 173, 219)}};
static const lean_object* l_Lean_Meta_caseArraySizes___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_caseArraySizes___lam__0___closed__1_value;
static const lean_string_object l_Lean_Meta_caseArraySizes___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Meta_caseArraySizes___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_caseArraySizes___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Meta_caseArraySizes___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_caseArraySizes___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Meta_caseArraySizes___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_caseArraySizes___lam__0___closed__3_value;
static lean_once_cell_t l_Lean_Meta_caseArraySizes___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_caseArraySizes___lam__0___closed__4;
static const lean_string_object l_Lean_Meta_caseArraySizes___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_Lean_Meta_caseArraySizes___lam__0___closed__5 = (const lean_object*)&l_Lean_Meta_caseArraySizes___lam__0___closed__5_value;
static const lean_ctor_object l_Lean_Meta_caseArraySizes___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_caseArraySizes___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_Lean_Meta_caseArraySizes___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_caseArraySizes___lam__0___closed__6_value;
static const lean_ctor_object l_Lean_Meta_caseArraySizes___lam__0___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Meta_caseArraySizes___lam__0___boxed__const__1 = (const lean_object*)&l_Lean_Meta_caseArraySizes___lam__0___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_caseArraySizes___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_caseArraySizes___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_caseArraySizes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "size"};
static const lean_object* l_Lean_Meta_caseArraySizes___closed__0 = (const lean_object*)&l_Lean_Meta_caseArraySizes___closed__0_value;
static const lean_ctor_object l_Lean_Meta_caseArraySizes___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_getArrayArgType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Meta_caseArraySizes___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_caseArraySizes___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_caseArraySizes___closed__0_value),LEAN_SCALAR_PTR_LITERAL(44, 164, 37, 176, 250, 127, 194, 229)}};
static const lean_object* l_Lean_Meta_caseArraySizes___closed__1 = (const lean_object*)&l_Lean_Meta_caseArraySizes___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_caseArraySizes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_caseArraySizes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__1(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_3_ = lean_box(0);
v___x_4_ = ((lean_object*)(l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__0));
v___x_5_ = l_Lean_instInhabitedMVarId_default;
v___x_6_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_4_);
lean_ctor_set(v___x_6_, 2, v___x_4_);
lean_ctor_set(v___x_6_, 3, v___x_3_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_once(&l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__1, &l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__1_once, _init_l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__1);
return v___x_7_;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedCaseArraySizesSubgoal(void){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default;
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0_spec__0(lean_object* v_msgData_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_){
_start:
{
lean_object* v___x_15_; lean_object* v_env_16_; lean_object* v___x_17_; lean_object* v_toCold_18_; lean_object* v_mctx_19_; lean_object* v_lctx_20_; lean_object* v_options_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_15_ = lean_st_ref_get(v___y_13_);
v_env_16_ = lean_ctor_get(v___x_15_, 0);
lean_inc_ref(v_env_16_);
lean_dec(v___x_15_);
v___x_17_ = lean_st_ref_get(v___y_11_);
v_toCold_18_ = lean_ctor_get(v___y_12_, 0);
v_mctx_19_ = lean_ctor_get(v___x_17_, 0);
lean_inc_ref(v_mctx_19_);
lean_dec(v___x_17_);
v_lctx_20_ = lean_ctor_get(v___y_10_, 2);
v_options_21_ = lean_ctor_get(v_toCold_18_, 2);
lean_inc_ref(v_options_21_);
lean_inc_ref(v_lctx_20_);
v___x_22_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_22_, 0, v_env_16_);
lean_ctor_set(v___x_22_, 1, v_mctx_19_);
lean_ctor_set(v___x_22_, 2, v_lctx_20_);
lean_ctor_set(v___x_22_, 3, v_options_21_);
v___x_23_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
lean_ctor_set(v___x_23_, 1, v_msgData_9_);
v___x_24_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_24_, 0, v___x_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0_spec__0___boxed(lean_object* v_msgData_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0_spec__0(v_msgData_25_, v___y_26_, v___y_27_, v___y_28_, v___y_29_);
lean_dec(v___y_29_);
lean_dec_ref(v___y_28_);
lean_dec(v___y_27_);
lean_dec_ref(v___y_26_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0___redArg(lean_object* v_msg_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
lean_object* v_ref_38_; lean_object* v___x_39_; lean_object* v_a_40_; lean_object* v___x_42_; uint8_t v_isShared_43_; uint8_t v_isSharedCheck_48_; 
v_ref_38_ = lean_ctor_get(v___y_35_, 2);
v___x_39_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0_spec__0(v_msg_32_, v___y_33_, v___y_34_, v___y_35_, v___y_36_);
v_a_40_ = lean_ctor_get(v___x_39_, 0);
v_isSharedCheck_48_ = !lean_is_exclusive(v___x_39_);
if (v_isSharedCheck_48_ == 0)
{
v___x_42_ = v___x_39_;
v_isShared_43_ = v_isSharedCheck_48_;
goto v_resetjp_41_;
}
else
{
lean_inc(v_a_40_);
lean_dec(v___x_39_);
v___x_42_ = lean_box(0);
v_isShared_43_ = v_isSharedCheck_48_;
goto v_resetjp_41_;
}
v_resetjp_41_:
{
lean_object* v___x_44_; lean_object* v___x_46_; 
lean_inc(v_ref_38_);
v___x_44_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_44_, 0, v_ref_38_);
lean_ctor_set(v___x_44_, 1, v_a_40_);
if (v_isShared_43_ == 0)
{
lean_ctor_set_tag(v___x_42_, 1);
lean_ctor_set(v___x_42_, 0, v___x_44_);
v___x_46_ = v___x_42_;
goto v_reusejp_45_;
}
else
{
lean_object* v_reuseFailAlloc_47_; 
v_reuseFailAlloc_47_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_47_, 0, v___x_44_);
v___x_46_ = v_reuseFailAlloc_47_;
goto v_reusejp_45_;
}
v_reusejp_45_:
{
return v___x_46_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0___redArg___boxed(lean_object* v_msg_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0___redArg(v_msg_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
return v_res_55_;
}
}
static lean_object* _init_l_Lean_Meta_getArrayArgType___closed__3(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = ((lean_object*)(l_Lean_Meta_getArrayArgType___closed__2));
v___x_61_ = l_Lean_stringToMessageData(v___x_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getArrayArgType(lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_){
_start:
{
lean_object* v___x_68_; 
lean_inc(v_a_66_);
lean_inc_ref(v_a_65_);
lean_inc(v_a_64_);
lean_inc_ref(v_a_63_);
lean_inc_ref(v_a_62_);
v___x_68_ = lean_infer_type(v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_);
if (lean_obj_tag(v___x_68_) == 0)
{
lean_object* v_a_69_; lean_object* v___x_70_; 
v_a_69_ = lean_ctor_get(v___x_68_, 0);
lean_inc(v_a_69_);
lean_dec_ref_known(v___x_68_, 1);
v___x_70_ = l_Lean_Meta_whnfD(v_a_69_, v_a_63_, v_a_64_, v_a_65_, v_a_66_);
if (lean_obj_tag(v___x_70_) == 0)
{
lean_object* v_a_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_95_; 
v_a_71_ = lean_ctor_get(v___x_70_, 0);
v_isSharedCheck_95_ = !lean_is_exclusive(v___x_70_);
if (v_isSharedCheck_95_ == 0)
{
v___x_73_ = v___x_70_;
v_isShared_74_ = v_isSharedCheck_95_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_a_71_);
lean_dec(v___x_70_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_95_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; 
v___x_80_ = ((lean_object*)(l_Lean_Meta_getArrayArgType___closed__1));
v___x_81_ = lean_unsigned_to_nat(1u);
v___x_82_ = l_Lean_Expr_isAppOfArity(v_a_71_, v___x_80_, v___x_81_);
if (v___x_82_ == 0)
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v_a_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_94_; 
lean_del_object(v___x_73_);
lean_dec(v_a_71_);
v___x_83_ = lean_obj_once(&l_Lean_Meta_getArrayArgType___closed__3, &l_Lean_Meta_getArrayArgType___closed__3_once, _init_l_Lean_Meta_getArrayArgType___closed__3);
v___x_84_ = l_Lean_indentExpr(v_a_62_);
v___x_85_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_83_);
lean_ctor_set(v___x_85_, 1, v___x_84_);
v___x_86_ = l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0___redArg(v___x_85_, v_a_63_, v_a_64_, v_a_65_, v_a_66_);
v_a_87_ = lean_ctor_get(v___x_86_, 0);
v_isSharedCheck_94_ = !lean_is_exclusive(v___x_86_);
if (v_isSharedCheck_94_ == 0)
{
v___x_89_ = v___x_86_;
v_isShared_90_ = v_isSharedCheck_94_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_a_87_);
lean_dec(v___x_86_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_94_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
lean_object* v___x_92_; 
if (v_isShared_90_ == 0)
{
v___x_92_ = v___x_89_;
goto v_reusejp_91_;
}
else
{
lean_object* v_reuseFailAlloc_93_; 
v_reuseFailAlloc_93_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_93_, 0, v_a_87_);
v___x_92_ = v_reuseFailAlloc_93_;
goto v_reusejp_91_;
}
v_reusejp_91_:
{
return v___x_92_;
}
}
}
else
{
lean_dec_ref(v_a_62_);
goto v___jp_75_;
}
v___jp_75_:
{
lean_object* v___x_76_; lean_object* v___x_78_; 
v___x_76_ = l_Lean_Expr_appArg_x21(v_a_71_);
lean_dec(v_a_71_);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 0, v___x_76_);
v___x_78_ = v___x_73_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v___x_76_);
v___x_78_ = v_reuseFailAlloc_79_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
return v___x_78_;
}
}
}
}
else
{
lean_dec_ref(v_a_62_);
return v___x_70_;
}
}
else
{
lean_dec_ref(v_a_62_);
return v___x_68_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getArrayArgType___boxed(lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lean_Meta_getArrayArgType(v_a_96_, v_a_97_, v_a_98_, v_a_99_, v_a_100_);
lean_dec(v_a_100_);
lean_dec_ref(v_a_99_);
lean_dec(v_a_98_);
lean_dec_ref(v_a_97_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0(lean_object* v_00_u03b1_103_, lean_object* v_msg_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0___redArg(v_msg_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0___boxed(lean_object* v_00_u03b1_111_, lean_object* v_msg_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Lean_throwError___at___00Lean_Meta_getArrayArgType_spec__0(v_00_u03b1_111_, v_msg_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_);
lean_dec(v___y_116_);
lean_dec_ref(v___y_115_);
lean_dec(v___y_114_);
lean_dec_ref(v___y_113_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit(lean_object* v_a_123_, lean_object* v_i_124_, lean_object* v_n_125_, lean_object* v_h_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_132_ = l_Lean_mkRawNatLit(v_i_124_);
v___x_133_ = l_Lean_mkRawNatLit(v_n_125_);
lean_inc_ref(v___x_132_);
v___x_134_ = l_Lean_Meta_mkLt(v___x_132_, v___x_133_, v_a_127_, v_a_128_, v_a_129_, v_a_130_);
if (lean_obj_tag(v___x_134_) == 0)
{
lean_object* v_a_135_; lean_object* v___x_136_; 
v_a_135_ = lean_ctor_get(v___x_134_, 0);
lean_inc(v_a_135_);
lean_dec_ref_known(v___x_134_, 1);
v___x_136_ = l_Lean_Meta_mkDecideProof(v_a_135_, v_a_127_, v_a_128_, v_a_129_, v_a_130_);
if (lean_obj_tag(v___x_136_) == 0)
{
lean_object* v_a_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v_a_137_ = lean_ctor_get(v___x_136_, 0);
lean_inc(v_a_137_);
lean_dec_ref_known(v___x_136_, 1);
v___x_138_ = ((lean_object*)(l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___closed__1));
v___x_139_ = lean_unsigned_to_nat(4u);
v___x_140_ = lean_mk_empty_array_with_capacity(v___x_139_);
v___x_141_ = lean_array_push(v___x_140_, v_a_123_);
v___x_142_ = lean_array_push(v___x_141_, v___x_132_);
v___x_143_ = lean_array_push(v___x_142_, v_h_126_);
v___x_144_ = lean_array_push(v___x_143_, v_a_137_);
v___x_145_ = l_Lean_Meta_mkAppM(v___x_138_, v___x_144_, v_a_127_, v_a_128_, v_a_129_, v_a_130_);
return v___x_145_;
}
else
{
lean_dec_ref(v___x_132_);
lean_dec_ref(v_h_126_);
lean_dec_ref(v_a_123_);
return v___x_136_;
}
}
else
{
lean_dec_ref(v___x_132_);
lean_dec_ref(v_h_126_);
lean_dec_ref(v_a_123_);
return v___x_134_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit___boxed(lean_object* v_a_146_, lean_object* v_i_147_, lean_object* v_n_148_, lean_object* v_h_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit(v_a_146_, v_i_147_, v_n_148_, v_h_149_, v_a_150_, v_a_151_, v_a_152_, v_a_153_);
lean_dec(v_a_153_);
lean_dec_ref(v_a_152_);
lean_dec(v_a_151_);
lean_dec_ref(v_a_150_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__0(lean_object* v_mvarId_156_, lean_object* v_xs_157_, uint8_t v___x_158_, lean_object* v_args_159_, lean_object* v_a_160_, lean_object* v_heq_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = l_Lean_MVarId_getType(v_mvarId_156_, v___y_162_, v___y_163_, v___y_164_, v___y_165_);
if (lean_obj_tag(v___x_167_) == 0)
{
lean_object* v_a_168_; lean_object* v___x_169_; uint8_t v___x_170_; uint8_t v___x_171_; lean_object* v___x_172_; 
v_a_168_ = lean_ctor_get(v___x_167_, 0);
lean_inc(v_a_168_);
lean_dec_ref_known(v___x_167_, 1);
v___x_169_ = lean_array_push(v_xs_157_, v_heq_161_);
v___x_170_ = 1;
v___x_171_ = 1;
v___x_172_ = l_Lean_Meta_mkForallFVars(v___x_169_, v_a_168_, v___x_158_, v___x_170_, v___x_170_, v___x_171_, v___y_162_, v___y_163_, v___y_164_, v___y_165_);
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v_a_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_182_; 
v_a_173_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_182_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_182_ == 0)
{
v___x_175_ = v___x_172_;
v_isShared_176_ = v_isSharedCheck_182_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_a_173_);
lean_dec(v___x_172_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_182_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_180_; 
v___x_177_ = lean_array_push(v_args_159_, v_a_160_);
v___x_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_178_, 0, v_a_173_);
lean_ctor_set(v___x_178_, 1, v___x_177_);
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 0, v___x_178_);
v___x_180_ = v___x_175_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v___x_178_);
v___x_180_ = v_reuseFailAlloc_181_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
return v___x_180_;
}
}
}
else
{
lean_object* v_a_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_190_; 
lean_dec_ref(v_a_160_);
lean_dec_ref(v_args_159_);
v_a_183_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_190_ == 0)
{
v___x_185_ = v___x_172_;
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_a_183_);
lean_dec(v___x_172_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_188_; 
if (v_isShared_186_ == 0)
{
v___x_188_ = v___x_185_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v_a_183_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
}
else
{
lean_object* v_a_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_198_; 
lean_dec_ref(v_heq_161_);
lean_dec_ref(v_a_160_);
lean_dec_ref(v_args_159_);
lean_dec_ref(v_xs_157_);
v_a_191_ = lean_ctor_get(v___x_167_, 0);
v_isSharedCheck_198_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_198_ == 0)
{
v___x_193_ = v___x_167_;
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_a_191_);
lean_dec(v___x_167_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___x_196_; 
if (v_isShared_194_ == 0)
{
v___x_196_ = v___x_193_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_a_191_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__0___boxed(lean_object* v_mvarId_199_, lean_object* v_xs_200_, lean_object* v___x_201_, lean_object* v_args_202_, lean_object* v_a_203_, lean_object* v_heq_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_){
_start:
{
uint8_t v___x_1166__boxed_210_; lean_object* v_res_211_; 
v___x_1166__boxed_210_ = lean_unbox(v___x_201_);
v_res_211_ = l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__0(v_mvarId_199_, v_xs_200_, v___x_1166__boxed_210_, v_args_202_, v_a_203_, v_heq_204_, v___y_205_, v___y_206_, v___y_207_, v___y_208_);
lean_dec(v___y_208_);
lean_dec_ref(v___y_207_);
lean_dec(v___y_206_);
lean_dec_ref(v___y_205_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg___lam__0(lean_object* v_k_212_, lean_object* v_b_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_){
_start:
{
lean_object* v___x_219_; 
lean_inc(v___y_217_);
lean_inc_ref(v___y_216_);
lean_inc(v___y_215_);
lean_inc_ref(v___y_214_);
v___x_219_ = lean_apply_6(v_k_212_, v_b_213_, v___y_214_, v___y_215_, v___y_216_, v___y_217_, lean_box(0));
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_220_, lean_object* v_b_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg___lam__0(v_k_220_, v_b_221_, v___y_222_, v___y_223_, v___y_224_, v___y_225_);
lean_dec(v___y_225_);
lean_dec_ref(v___y_224_);
lean_dec(v___y_223_);
lean_dec_ref(v___y_222_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg(lean_object* v_name_228_, uint8_t v_bi_229_, lean_object* v_type_230_, lean_object* v_k_231_, uint8_t v_kind_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_){
_start:
{
lean_object* v___f_238_; lean_object* v___x_239_; 
v___f_238_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_238_, 0, v_k_231_);
v___x_239_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_228_, v_bi_229_, v_type_230_, v___f_238_, v_kind_232_, v___y_233_, v___y_234_, v___y_235_, v___y_236_);
if (lean_obj_tag(v___x_239_) == 0)
{
lean_object* v_a_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_247_; 
v_a_240_ = lean_ctor_get(v___x_239_, 0);
v_isSharedCheck_247_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_247_ == 0)
{
v___x_242_ = v___x_239_;
v_isShared_243_ = v_isSharedCheck_247_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_a_240_);
lean_dec(v___x_239_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_247_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
lean_object* v___x_245_; 
if (v_isShared_243_ == 0)
{
v___x_245_ = v___x_242_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v_a_240_);
v___x_245_ = v_reuseFailAlloc_246_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
return v___x_245_;
}
}
}
else
{
lean_object* v_a_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_255_; 
v_a_248_ = lean_ctor_get(v___x_239_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_255_ == 0)
{
v___x_250_ = v___x_239_;
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_a_248_);
lean_dec(v___x_239_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_255_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_253_; 
if (v_isShared_251_ == 0)
{
v___x_253_ = v___x_250_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_a_248_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg___boxed(lean_object* v_name_256_, lean_object* v_bi_257_, lean_object* v_type_258_, lean_object* v_k_259_, lean_object* v_kind_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
uint8_t v_bi_boxed_266_; uint8_t v_kind_boxed_267_; lean_object* v_res_268_; 
v_bi_boxed_266_ = lean_unbox(v_bi_257_);
v_kind_boxed_267_ = lean_unbox(v_kind_260_);
v_res_268_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg(v_name_256_, v_bi_boxed_266_, v_type_258_, v_k_259_, v_kind_boxed_267_, v___y_261_, v___y_262_, v___y_263_, v___y_264_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0___redArg(lean_object* v_name_269_, lean_object* v_type_270_, lean_object* v_k_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_){
_start:
{
uint8_t v___x_277_; uint8_t v___x_278_; lean_object* v___x_279_; 
v___x_277_ = 0;
v___x_278_ = 0;
v___x_279_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg(v_name_269_, v___x_277_, v_type_270_, v_k_271_, v___x_278_, v___y_272_, v___y_273_, v___y_274_, v___y_275_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0___redArg___boxed(lean_object* v_name_280_, lean_object* v_type_281_, lean_object* v_k_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0___redArg(v_name_280_, v_type_281_, v_k_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_);
lean_dec(v___y_286_);
lean_dec_ref(v___y_285_);
lean_dec(v___y_284_);
lean_dec_ref(v___y_283_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__1___boxed(lean_object* v_xs_296_, lean_object* v_a_297_, lean_object* v_i_298_, lean_object* v_n_299_, lean_object* v_aSizeEqN_300_, lean_object* v_args_301_, lean_object* v_mvarId_302_, lean_object* v_xNamePrefix_303_, lean_object* v_00_u03b1_304_, lean_object* v___x_305_, lean_object* v_xi_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_){
_start:
{
lean_object* v_res_312_; 
v_res_312_ = l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__1(v_xs_296_, v_a_297_, v_i_298_, v_n_299_, v_aSizeEqN_300_, v_args_301_, v_mvarId_302_, v_xNamePrefix_303_, v_00_u03b1_304_, v___x_305_, v_xi_306_, v___y_307_, v___y_308_, v___y_309_, v___y_310_);
lean_dec(v___y_310_);
lean_dec_ref(v___y_309_);
lean_dec(v___y_308_);
lean_dec_ref(v___y_307_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop(lean_object* v_mvarId_313_, lean_object* v_a_314_, lean_object* v_n_315_, lean_object* v_xNamePrefix_316_, lean_object* v_aSizeEqN_317_, lean_object* v_00_u03b1_318_, lean_object* v_i_319_, lean_object* v_xs_320_, lean_object* v_args_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_){
_start:
{
uint8_t v___x_327_; 
v___x_327_ = lean_nat_dec_lt(v_i_319_, v_n_315_);
if (v___x_327_ == 0)
{
lean_object* v___x_328_; lean_object* v___x_329_; 
lean_dec(v_i_319_);
lean_dec(v_xNamePrefix_316_);
lean_inc_ref(v_xs_320_);
v___x_328_ = lean_array_to_list(v_xs_320_);
v___x_329_ = l_Lean_Meta_mkArrayLit(v_00_u03b1_318_, v___x_328_, v_a_322_, v_a_323_, v_a_324_, v_a_325_);
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v_a_330_; lean_object* v___x_331_; 
v_a_330_ = lean_ctor_get(v___x_329_, 0);
lean_inc(v_a_330_);
lean_dec_ref_known(v___x_329_, 1);
lean_inc_ref(v_a_314_);
v___x_331_ = l_Lean_Meta_mkEq(v_a_314_, v_a_330_, v_a_322_, v_a_323_, v_a_324_, v_a_325_);
if (lean_obj_tag(v___x_331_) == 0)
{
lean_object* v_a_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v_a_332_ = lean_ctor_get(v___x_331_, 0);
lean_inc(v_a_332_);
lean_dec_ref_known(v___x_331_, 1);
v___x_333_ = ((lean_object*)(l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__1));
v___x_334_ = l_Lean_mkRawNatLit(v_n_315_);
v___x_335_ = lean_unsigned_to_nat(3u);
v___x_336_ = lean_mk_empty_array_with_capacity(v___x_335_);
v___x_337_ = lean_array_push(v___x_336_, v_a_314_);
v___x_338_ = lean_array_push(v___x_337_, v___x_334_);
v___x_339_ = lean_array_push(v___x_338_, v_aSizeEqN_317_);
v___x_340_ = l_Lean_Meta_mkAppM(v___x_333_, v___x_339_, v_a_322_, v_a_323_, v_a_324_, v_a_325_);
if (lean_obj_tag(v___x_340_) == 0)
{
lean_object* v_a_341_; lean_object* v___x_342_; lean_object* v___f_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v_a_341_ = lean_ctor_get(v___x_340_, 0);
lean_inc(v_a_341_);
lean_dec_ref_known(v___x_340_, 1);
v___x_342_ = lean_box(v___x_327_);
v___f_343_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__0___boxed), 11, 5);
lean_closure_set(v___f_343_, 0, v_mvarId_313_);
lean_closure_set(v___f_343_, 1, v_xs_320_);
lean_closure_set(v___f_343_, 2, v___x_342_);
lean_closure_set(v___f_343_, 3, v_args_321_);
lean_closure_set(v___f_343_, 4, v_a_341_);
v___x_344_ = ((lean_object*)(l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___closed__3));
v___x_345_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0___redArg(v___x_344_, v_a_332_, v___f_343_, v_a_322_, v_a_323_, v_a_324_, v_a_325_);
return v___x_345_;
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
lean_dec(v_a_332_);
lean_dec_ref(v_args_321_);
lean_dec_ref(v_xs_320_);
lean_dec(v_mvarId_313_);
v_a_346_ = lean_ctor_get(v___x_340_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_340_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_340_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
lean_dec_ref(v_args_321_);
lean_dec_ref(v_xs_320_);
lean_dec_ref(v_aSizeEqN_317_);
lean_dec(v_n_315_);
lean_dec_ref(v_a_314_);
lean_dec(v_mvarId_313_);
v_a_354_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_361_ == 0)
{
v___x_356_ = v___x_331_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_331_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_a_354_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
else
{
lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_369_; 
lean_dec_ref(v_args_321_);
lean_dec_ref(v_xs_320_);
lean_dec_ref(v_aSizeEqN_317_);
lean_dec(v_n_315_);
lean_dec_ref(v_a_314_);
lean_dec(v_mvarId_313_);
v_a_362_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_369_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_369_ == 0)
{
v___x_364_ = v___x_329_;
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_329_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_367_; 
if (v_isShared_365_ == 0)
{
v___x_367_ = v___x_364_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_a_362_);
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
else
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___f_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_370_ = lean_unsigned_to_nat(1u);
v___x_371_ = lean_nat_add(v_i_319_, v___x_370_);
lean_inc(v___x_371_);
lean_inc_ref(v_00_u03b1_318_);
lean_inc(v_xNamePrefix_316_);
v___f_372_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__1___boxed), 16, 10);
lean_closure_set(v___f_372_, 0, v_xs_320_);
lean_closure_set(v___f_372_, 1, v_a_314_);
lean_closure_set(v___f_372_, 2, v_i_319_);
lean_closure_set(v___f_372_, 3, v_n_315_);
lean_closure_set(v___f_372_, 4, v_aSizeEqN_317_);
lean_closure_set(v___f_372_, 5, v_args_321_);
lean_closure_set(v___f_372_, 6, v_mvarId_313_);
lean_closure_set(v___f_372_, 7, v_xNamePrefix_316_);
lean_closure_set(v___f_372_, 8, v_00_u03b1_318_);
lean_closure_set(v___f_372_, 9, v___x_371_);
v___x_373_ = lean_name_append_index_after(v_xNamePrefix_316_, v___x_371_);
v___x_374_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0___redArg(v___x_373_, v_00_u03b1_318_, v___f_372_, v_a_322_, v_a_323_, v_a_324_, v_a_325_);
return v___x_374_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___lam__1(lean_object* v_xs_375_, lean_object* v_a_376_, lean_object* v_i_377_, lean_object* v_n_378_, lean_object* v_aSizeEqN_379_, lean_object* v_args_380_, lean_object* v_mvarId_381_, lean_object* v_xNamePrefix_382_, lean_object* v_00_u03b1_383_, lean_object* v___x_384_, lean_object* v_xi_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_){
_start:
{
lean_object* v_xs_391_; lean_object* v___x_392_; 
v_xs_391_ = lean_array_push(v_xs_375_, v_xi_385_);
lean_inc_ref(v_aSizeEqN_379_);
lean_inc(v_n_378_);
lean_inc_ref(v_a_376_);
v___x_392_ = l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_mkArrayGetLit(v_a_376_, v_i_377_, v_n_378_, v_aSizeEqN_379_, v___y_386_, v___y_387_, v___y_388_, v___y_389_);
if (lean_obj_tag(v___x_392_) == 0)
{
lean_object* v_a_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v_a_393_ = lean_ctor_get(v___x_392_, 0);
lean_inc(v_a_393_);
lean_dec_ref_known(v___x_392_, 1);
v___x_394_ = lean_array_push(v_args_380_, v_a_393_);
v___x_395_ = l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop(v_mvarId_381_, v_a_376_, v_n_378_, v_xNamePrefix_382_, v_aSizeEqN_379_, v_00_u03b1_383_, v___x_384_, v_xs_391_, v___x_394_, v___y_386_, v___y_387_, v___y_388_, v___y_389_);
return v___x_395_;
}
else
{
lean_object* v_a_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_403_; 
lean_dec_ref(v_xs_391_);
lean_dec(v___x_384_);
lean_dec_ref(v_00_u03b1_383_);
lean_dec(v_xNamePrefix_382_);
lean_dec(v_mvarId_381_);
lean_dec_ref(v_args_380_);
lean_dec_ref(v_aSizeEqN_379_);
lean_dec(v_n_378_);
lean_dec_ref(v_a_376_);
v_a_396_ = lean_ctor_get(v___x_392_, 0);
v_isSharedCheck_403_ = !lean_is_exclusive(v___x_392_);
if (v_isSharedCheck_403_ == 0)
{
v___x_398_ = v___x_392_;
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_a_396_);
lean_dec(v___x_392_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_401_; 
if (v_isShared_399_ == 0)
{
v___x_401_ = v___x_398_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v_a_396_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop___boxed(lean_object* v_mvarId_404_, lean_object* v_a_405_, lean_object* v_n_406_, lean_object* v_xNamePrefix_407_, lean_object* v_aSizeEqN_408_, lean_object* v_00_u03b1_409_, lean_object* v_i_410_, lean_object* v_xs_411_, lean_object* v_args_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop(v_mvarId_404_, v_a_405_, v_n_406_, v_xNamePrefix_407_, v_aSizeEqN_408_, v_00_u03b1_409_, v_i_410_, v_xs_411_, v_args_412_, v_a_413_, v_a_414_, v_a_415_, v_a_416_);
lean_dec(v_a_416_);
lean_dec_ref(v_a_415_);
lean_dec(v_a_414_);
lean_dec_ref(v_a_413_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0(lean_object* v_00_u03b1_419_, lean_object* v_name_420_, uint8_t v_bi_421_, lean_object* v_type_422_, lean_object* v_k_423_, uint8_t v_kind_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_){
_start:
{
lean_object* v___x_430_; 
v___x_430_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___redArg(v_name_420_, v_bi_421_, v_type_422_, v_k_423_, v_kind_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0___boxed(lean_object* v_00_u03b1_431_, lean_object* v_name_432_, lean_object* v_bi_433_, lean_object* v_type_434_, lean_object* v_k_435_, lean_object* v_kind_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
uint8_t v_bi_boxed_442_; uint8_t v_kind_boxed_443_; lean_object* v_res_444_; 
v_bi_boxed_442_ = lean_unbox(v_bi_433_);
v_kind_boxed_443_ = lean_unbox(v_kind_436_);
v_res_444_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0_spec__0(v_00_u03b1_431_, v_name_432_, v_bi_boxed_442_, v_type_434_, v_k_435_, v_kind_boxed_443_, v___y_437_, v___y_438_, v___y_439_, v___y_440_);
lean_dec(v___y_440_);
lean_dec_ref(v___y_439_);
lean_dec(v___y_438_);
lean_dec_ref(v___y_437_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0(lean_object* v_00_u03b1_445_, lean_object* v_name_446_, lean_object* v_type_447_, lean_object* v_k_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0___redArg(v_name_446_, v_type_447_, v_k_448_, v___y_449_, v___y_450_, v___y_451_, v___y_452_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0___boxed(lean_object* v_00_u03b1_455_, lean_object* v_name_456_, lean_object* v_type_457_, lean_object* v_k_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop_spec__0(v_00_u03b1_455_, v_name_456_, v_type_457_, v_k_458_, v___y_459_, v___y_460_, v___y_461_, v___y_462_);
lean_dec(v___y_462_);
lean_dec_ref(v___y_461_);
lean_dec(v___y_460_);
lean_dec_ref(v___y_459_);
return v_res_464_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_465_, lean_object* v_x_466_, lean_object* v_x_467_, lean_object* v_x_468_){
_start:
{
lean_object* v_ks_469_; lean_object* v_vs_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_494_; 
v_ks_469_ = lean_ctor_get(v_x_465_, 0);
v_vs_470_ = lean_ctor_get(v_x_465_, 1);
v_isSharedCheck_494_ = !lean_is_exclusive(v_x_465_);
if (v_isSharedCheck_494_ == 0)
{
v___x_472_ = v_x_465_;
v_isShared_473_ = v_isSharedCheck_494_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_vs_470_);
lean_inc(v_ks_469_);
lean_dec(v_x_465_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_494_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_474_; uint8_t v___x_475_; 
v___x_474_ = lean_array_get_size(v_ks_469_);
v___x_475_ = lean_nat_dec_lt(v_x_466_, v___x_474_);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_479_; 
lean_dec(v_x_466_);
v___x_476_ = lean_array_push(v_ks_469_, v_x_467_);
v___x_477_ = lean_array_push(v_vs_470_, v_x_468_);
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 1, v___x_477_);
lean_ctor_set(v___x_472_, 0, v___x_476_);
v___x_479_ = v___x_472_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v___x_476_);
lean_ctor_set(v_reuseFailAlloc_480_, 1, v___x_477_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
else
{
lean_object* v_k_x27_481_; uint8_t v___x_482_; 
v_k_x27_481_ = lean_array_fget_borrowed(v_ks_469_, v_x_466_);
v___x_482_ = l_Lean_instBEqMVarId_beq(v_x_467_, v_k_x27_481_);
if (v___x_482_ == 0)
{
lean_object* v___x_484_; 
if (v_isShared_473_ == 0)
{
v___x_484_ = v___x_472_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_ks_469_);
lean_ctor_set(v_reuseFailAlloc_488_, 1, v_vs_470_);
v___x_484_ = v_reuseFailAlloc_488_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = lean_unsigned_to_nat(1u);
v___x_486_ = lean_nat_add(v_x_466_, v___x_485_);
lean_dec(v_x_466_);
v_x_465_ = v___x_484_;
v_x_466_ = v___x_486_;
goto _start;
}
}
else
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_492_; 
v___x_489_ = lean_array_fset(v_ks_469_, v_x_466_, v_x_467_);
v___x_490_ = lean_array_fset(v_vs_470_, v_x_466_, v_x_468_);
lean_dec(v_x_466_);
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 1, v___x_490_);
lean_ctor_set(v___x_472_, 0, v___x_489_);
v___x_492_ = v___x_472_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v___x_489_);
lean_ctor_set(v_reuseFailAlloc_493_, 1, v___x_490_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_n_495_, lean_object* v_k_496_, lean_object* v_v_497_){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_498_ = lean_unsigned_to_nat(0u);
v___x_499_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_n_495_, v___x_498_, v_k_496_, v_v_497_);
return v___x_499_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_500_ = lean_box(0);
v___x_501_ = l_unsafeCast___redArg(v___x_500_);
return v___x_501_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_502_; 
v___x_502_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg(lean_object* v_x_503_, size_t v_x_504_, size_t v_x_505_, lean_object* v_x_506_, lean_object* v_x_507_){
_start:
{
if (lean_obj_tag(v_x_503_) == 0)
{
lean_object* v_es_508_; size_t v___x_509_; size_t v___x_510_; lean_object* v_j_511_; lean_object* v___x_512_; uint8_t v___x_513_; 
v_es_508_ = lean_ctor_get(v_x_503_, 0);
v___x_509_ = ((size_t)31ULL);
v___x_510_ = lean_usize_land(v_x_504_, v___x_509_);
v_j_511_ = lean_usize_to_nat(v___x_510_);
v___x_512_ = lean_array_get_size(v_es_508_);
v___x_513_ = lean_nat_dec_lt(v_j_511_, v___x_512_);
if (v___x_513_ == 0)
{
lean_dec(v_j_511_);
lean_dec(v_x_507_);
lean_dec(v_x_506_);
return v_x_503_;
}
else
{
lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_552_; 
lean_inc_ref(v_es_508_);
v_isSharedCheck_552_ = !lean_is_exclusive(v_x_503_);
if (v_isSharedCheck_552_ == 0)
{
lean_object* v_unused_553_; 
v_unused_553_ = lean_ctor_get(v_x_503_, 0);
lean_dec(v_unused_553_);
v___x_515_ = v_x_503_;
v_isShared_516_ = v_isSharedCheck_552_;
goto v_resetjp_514_;
}
else
{
lean_dec(v_x_503_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_552_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v_v_517_; lean_object* v___x_518_; lean_object* v_xs_x27_519_; lean_object* v___y_521_; 
v_v_517_ = lean_array_fget(v_es_508_, v_j_511_);
v___x_518_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__0);
v_xs_x27_519_ = lean_array_fset(v_es_508_, v_j_511_, v___x_518_);
switch(lean_obj_tag(v_v_517_))
{
case 0:
{
lean_object* v_key_526_; lean_object* v_val_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_537_; 
v_key_526_ = lean_ctor_get(v_v_517_, 0);
v_val_527_ = lean_ctor_get(v_v_517_, 1);
v_isSharedCheck_537_ = !lean_is_exclusive(v_v_517_);
if (v_isSharedCheck_537_ == 0)
{
v___x_529_ = v_v_517_;
v_isShared_530_ = v_isSharedCheck_537_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_val_527_);
lean_inc(v_key_526_);
lean_dec(v_v_517_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_537_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
uint8_t v___x_531_; 
v___x_531_ = l_Lean_instBEqMVarId_beq(v_x_506_, v_key_526_);
if (v___x_531_ == 0)
{
lean_object* v___x_532_; lean_object* v___x_533_; 
lean_del_object(v___x_529_);
v___x_532_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_526_, v_val_527_, v_x_506_, v_x_507_);
v___x_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_533_, 0, v___x_532_);
v___y_521_ = v___x_533_;
goto v___jp_520_;
}
else
{
lean_object* v___x_535_; 
lean_dec(v_val_527_);
lean_dec(v_key_526_);
if (v_isShared_530_ == 0)
{
lean_ctor_set(v___x_529_, 1, v_x_507_);
lean_ctor_set(v___x_529_, 0, v_x_506_);
v___x_535_ = v___x_529_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v_x_506_);
lean_ctor_set(v_reuseFailAlloc_536_, 1, v_x_507_);
v___x_535_ = v_reuseFailAlloc_536_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
v___y_521_ = v___x_535_;
goto v___jp_520_;
}
}
}
}
case 1:
{
lean_object* v_node_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_550_; 
v_node_538_ = lean_ctor_get(v_v_517_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v_v_517_);
if (v_isSharedCheck_550_ == 0)
{
v___x_540_ = v_v_517_;
v_isShared_541_ = v_isSharedCheck_550_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_node_538_);
lean_dec(v_v_517_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_550_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
size_t v___x_542_; size_t v___x_543_; size_t v___x_544_; size_t v___x_545_; lean_object* v___x_546_; lean_object* v___x_548_; 
v___x_542_ = ((size_t)5ULL);
v___x_543_ = lean_usize_shift_right(v_x_504_, v___x_542_);
v___x_544_ = ((size_t)1ULL);
v___x_545_ = lean_usize_add(v_x_505_, v___x_544_);
v___x_546_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg(v_node_538_, v___x_543_, v___x_545_, v_x_506_, v_x_507_);
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 0, v___x_546_);
v___x_548_ = v___x_540_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v___x_546_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
v___y_521_ = v___x_548_;
goto v___jp_520_;
}
}
}
default: 
{
lean_object* v___x_551_; 
v___x_551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_551_, 0, v_x_506_);
lean_ctor_set(v___x_551_, 1, v_x_507_);
v___y_521_ = v___x_551_;
goto v___jp_520_;
}
}
v___jp_520_:
{
lean_object* v___x_522_; lean_object* v___x_524_; 
v___x_522_ = lean_array_fset(v_xs_x27_519_, v_j_511_, v___y_521_);
lean_dec(v_j_511_);
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 0, v___x_522_);
v___x_524_ = v___x_515_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v___x_522_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
return v___x_524_;
}
}
}
}
}
else
{
lean_object* v_ks_554_; lean_object* v_vs_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_573_; 
v_ks_554_ = lean_ctor_get(v_x_503_, 0);
v_vs_555_ = lean_ctor_get(v_x_503_, 1);
v_isSharedCheck_573_ = !lean_is_exclusive(v_x_503_);
if (v_isSharedCheck_573_ == 0)
{
v___x_557_ = v_x_503_;
v_isShared_558_ = v_isSharedCheck_573_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_vs_555_);
lean_inc(v_ks_554_);
lean_dec(v_x_503_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_573_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___x_560_; 
if (v_isShared_558_ == 0)
{
v___x_560_ = v___x_557_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_ks_554_);
lean_ctor_set(v_reuseFailAlloc_572_, 1, v_vs_555_);
v___x_560_ = v_reuseFailAlloc_572_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
lean_object* v_newNode_561_; size_t v___x_562_; uint8_t v___x_563_; 
v_newNode_561_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2___redArg(v___x_560_, v_x_506_, v_x_507_);
v___x_562_ = ((size_t)7ULL);
v___x_563_ = lean_usize_dec_le(v___x_562_, v_x_505_);
if (v___x_563_ == 0)
{
lean_object* v___x_564_; lean_object* v___x_565_; uint8_t v___x_566_; 
v___x_564_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_561_);
v___x_565_ = lean_unsigned_to_nat(4u);
v___x_566_ = lean_nat_dec_lt(v___x_564_, v___x_565_);
lean_dec(v___x_564_);
if (v___x_566_ == 0)
{
lean_object* v_ks_567_; lean_object* v_vs_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v_ks_567_ = lean_ctor_get(v_newNode_561_, 0);
lean_inc_ref(v_ks_567_);
v_vs_568_ = lean_ctor_get(v_newNode_561_, 1);
lean_inc_ref(v_vs_568_);
lean_dec_ref(v_newNode_561_);
v___x_569_ = lean_unsigned_to_nat(0u);
v___x_570_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_571_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3___redArg(v_x_505_, v_ks_567_, v_vs_568_, v___x_569_, v___x_570_);
lean_dec_ref(v_vs_568_);
lean_dec_ref(v_ks_567_);
return v___x_571_;
}
else
{
return v_newNode_561_;
}
}
else
{
return v_newNode_561_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3___redArg(size_t v_depth_574_, lean_object* v_keys_575_, lean_object* v_vals_576_, lean_object* v_i_577_, lean_object* v_entries_578_){
_start:
{
lean_object* v___x_579_; uint8_t v___x_580_; 
v___x_579_ = lean_array_get_size(v_keys_575_);
v___x_580_ = lean_nat_dec_lt(v_i_577_, v___x_579_);
if (v___x_580_ == 0)
{
lean_dec(v_i_577_);
return v_entries_578_;
}
else
{
lean_object* v_k_581_; lean_object* v_v_582_; uint64_t v___x_583_; size_t v_h_584_; size_t v___x_585_; lean_object* v___x_586_; size_t v___x_587_; size_t v___x_588_; size_t v___x_589_; size_t v_h_590_; lean_object* v___x_591_; lean_object* v___x_592_; 
v_k_581_ = lean_array_fget_borrowed(v_keys_575_, v_i_577_);
v_v_582_ = lean_array_fget_borrowed(v_vals_576_, v_i_577_);
v___x_583_ = l_Lean_instHashableMVarId_hash(v_k_581_);
v_h_584_ = lean_uint64_to_usize(v___x_583_);
v___x_585_ = ((size_t)5ULL);
v___x_586_ = lean_unsigned_to_nat(1u);
v___x_587_ = ((size_t)1ULL);
v___x_588_ = lean_usize_sub(v_depth_574_, v___x_587_);
v___x_589_ = lean_usize_mul(v___x_585_, v___x_588_);
v_h_590_ = lean_usize_shift_right(v_h_584_, v___x_589_);
v___x_591_ = lean_nat_add(v_i_577_, v___x_586_);
lean_dec(v_i_577_);
lean_inc(v_v_582_);
lean_inc(v_k_581_);
v___x_592_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg(v_entries_578_, v_h_590_, v_depth_574_, v_k_581_, v_v_582_);
v_i_577_ = v___x_591_;
v_entries_578_ = v___x_592_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_depth_594_, lean_object* v_keys_595_, lean_object* v_vals_596_, lean_object* v_i_597_, lean_object* v_entries_598_){
_start:
{
size_t v_depth_boxed_599_; lean_object* v_res_600_; 
v_depth_boxed_599_ = lean_unbox_usize(v_depth_594_);
lean_dec(v_depth_594_);
v_res_600_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_boxed_599_, v_keys_595_, v_vals_596_, v_i_597_, v_entries_598_);
lean_dec_ref(v_vals_596_);
lean_dec_ref(v_keys_595_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_601_, lean_object* v_x_602_, lean_object* v_x_603_, lean_object* v_x_604_, lean_object* v_x_605_){
_start:
{
size_t v_x_1002__boxed_606_; size_t v_x_1003__boxed_607_; lean_object* v_res_608_; 
v_x_1002__boxed_606_ = lean_unbox_usize(v_x_602_);
lean_dec(v_x_602_);
v_x_1003__boxed_607_ = lean_unbox_usize(v_x_603_);
lean_dec(v_x_603_);
v_res_608_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg(v_x_601_, v_x_1002__boxed_606_, v_x_1003__boxed_607_, v_x_604_, v_x_605_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0___redArg(lean_object* v_x_609_, lean_object* v_x_610_, lean_object* v_x_611_){
_start:
{
uint64_t v___x_612_; size_t v___x_613_; size_t v___x_614_; lean_object* v___x_615_; 
v___x_612_ = l_Lean_instHashableMVarId_hash(v_x_610_);
v___x_613_ = lean_uint64_to_usize(v___x_612_);
v___x_614_ = ((size_t)1ULL);
v___x_615_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg(v_x_609_, v___x_613_, v___x_614_, v_x_610_, v_x_611_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0___redArg(lean_object* v_mvarId_616_, lean_object* v_val_617_, lean_object* v___y_618_){
_start:
{
lean_object* v___x_620_; lean_object* v_mctx_621_; lean_object* v_cache_622_; lean_object* v_zetaDeltaFVarIds_623_; lean_object* v_postponed_624_; lean_object* v_diag_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_654_; 
v___x_620_ = lean_st_ref_take(v___y_618_);
v_mctx_621_ = lean_ctor_get(v___x_620_, 0);
v_cache_622_ = lean_ctor_get(v___x_620_, 1);
v_zetaDeltaFVarIds_623_ = lean_ctor_get(v___x_620_, 2);
v_postponed_624_ = lean_ctor_get(v___x_620_, 3);
v_diag_625_ = lean_ctor_get(v___x_620_, 4);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_654_ == 0)
{
v___x_627_ = v___x_620_;
v_isShared_628_ = v_isSharedCheck_654_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_diag_625_);
lean_inc(v_postponed_624_);
lean_inc(v_zetaDeltaFVarIds_623_);
lean_inc(v_cache_622_);
lean_inc(v_mctx_621_);
lean_dec(v___x_620_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_654_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v_depth_629_; lean_object* v_levelAssignDepth_630_; lean_object* v_lmvarCounter_631_; lean_object* v_mvarCounter_632_; lean_object* v_lDecls_633_; lean_object* v_decls_634_; lean_object* v_userNames_635_; lean_object* v_lAssignment_636_; lean_object* v_eAssignment_637_; lean_object* v_dAssignment_638_; lean_object* v_instanceTypedMVars_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_653_; 
v_depth_629_ = lean_ctor_get(v_mctx_621_, 0);
v_levelAssignDepth_630_ = lean_ctor_get(v_mctx_621_, 1);
v_lmvarCounter_631_ = lean_ctor_get(v_mctx_621_, 2);
v_mvarCounter_632_ = lean_ctor_get(v_mctx_621_, 3);
v_lDecls_633_ = lean_ctor_get(v_mctx_621_, 4);
v_decls_634_ = lean_ctor_get(v_mctx_621_, 5);
v_userNames_635_ = lean_ctor_get(v_mctx_621_, 6);
v_lAssignment_636_ = lean_ctor_get(v_mctx_621_, 7);
v_eAssignment_637_ = lean_ctor_get(v_mctx_621_, 8);
v_dAssignment_638_ = lean_ctor_get(v_mctx_621_, 9);
v_instanceTypedMVars_639_ = lean_ctor_get(v_mctx_621_, 10);
v_isSharedCheck_653_ = !lean_is_exclusive(v_mctx_621_);
if (v_isSharedCheck_653_ == 0)
{
v___x_641_ = v_mctx_621_;
v_isShared_642_ = v_isSharedCheck_653_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_instanceTypedMVars_639_);
lean_inc(v_dAssignment_638_);
lean_inc(v_eAssignment_637_);
lean_inc(v_lAssignment_636_);
lean_inc(v_userNames_635_);
lean_inc(v_decls_634_);
lean_inc(v_lDecls_633_);
lean_inc(v_mvarCounter_632_);
lean_inc(v_lmvarCounter_631_);
lean_inc(v_levelAssignDepth_630_);
lean_inc(v_depth_629_);
lean_dec(v_mctx_621_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_653_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_646_; 
v___x_643_ = lean_box(0);
v___x_644_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0___redArg(v_eAssignment_637_, v_mvarId_616_, v_val_617_);
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 8, v___x_644_);
v___x_646_ = v___x_641_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_depth_629_);
lean_ctor_set(v_reuseFailAlloc_652_, 1, v_levelAssignDepth_630_);
lean_ctor_set(v_reuseFailAlloc_652_, 2, v_lmvarCounter_631_);
lean_ctor_set(v_reuseFailAlloc_652_, 3, v_mvarCounter_632_);
lean_ctor_set(v_reuseFailAlloc_652_, 4, v_lDecls_633_);
lean_ctor_set(v_reuseFailAlloc_652_, 5, v_decls_634_);
lean_ctor_set(v_reuseFailAlloc_652_, 6, v_userNames_635_);
lean_ctor_set(v_reuseFailAlloc_652_, 7, v_lAssignment_636_);
lean_ctor_set(v_reuseFailAlloc_652_, 8, v___x_644_);
lean_ctor_set(v_reuseFailAlloc_652_, 9, v_dAssignment_638_);
lean_ctor_set(v_reuseFailAlloc_652_, 10, v_instanceTypedMVars_639_);
v___x_646_ = v_reuseFailAlloc_652_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
lean_object* v___x_648_; 
if (v_isShared_628_ == 0)
{
lean_ctor_set(v___x_627_, 0, v___x_646_);
v___x_648_ = v___x_627_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v___x_646_);
lean_ctor_set(v_reuseFailAlloc_651_, 1, v_cache_622_);
lean_ctor_set(v_reuseFailAlloc_651_, 2, v_zetaDeltaFVarIds_623_);
lean_ctor_set(v_reuseFailAlloc_651_, 3, v_postponed_624_);
lean_ctor_set(v_reuseFailAlloc_651_, 4, v_diag_625_);
v___x_648_ = v_reuseFailAlloc_651_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_649_ = lean_st_ref_put(v___y_618_, v___x_648_);
v___x_650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_650_, 0, v___x_643_);
return v___x_650_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0___redArg___boxed(lean_object* v_mvarId_655_, lean_object* v_val_656_, lean_object* v___y_657_, lean_object* v___y_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0___redArg(v_mvarId_655_, v_val_656_, v___y_657_);
lean_dec(v___y_657_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit(lean_object* v_mvarId_662_, lean_object* v_a_663_, lean_object* v_n_664_, lean_object* v_xNamePrefix_665_, lean_object* v_aSizeEqN_666_, lean_object* v_a_667_, lean_object* v_a_668_, lean_object* v_a_669_, lean_object* v_a_670_){
_start:
{
lean_object* v___x_672_; 
lean_inc_ref(v_a_663_);
v___x_672_ = l_Lean_Meta_getArrayArgType(v_a_663_, v_a_667_, v_a_668_, v_a_669_, v_a_670_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; 
v_a_673_ = lean_ctor_get(v___x_672_, 0);
lean_inc(v_a_673_);
lean_dec_ref_known(v___x_672_, 1);
v___x_674_ = lean_unsigned_to_nat(0u);
v___x_675_ = ((lean_object*)(l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit___closed__0));
lean_inc(v_mvarId_662_);
v___x_676_ = l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_loop(v_mvarId_662_, v_a_663_, v_n_664_, v_xNamePrefix_665_, v_aSizeEqN_666_, v_a_673_, v___x_674_, v___x_675_, v___x_675_, v_a_667_, v_a_668_, v_a_669_, v_a_670_);
if (lean_obj_tag(v___x_676_) == 0)
{
lean_object* v_a_677_; lean_object* v_fst_678_; lean_object* v_snd_679_; lean_object* v___x_680_; 
v_a_677_ = lean_ctor_get(v___x_676_, 0);
lean_inc(v_a_677_);
lean_dec_ref_known(v___x_676_, 1);
v_fst_678_ = lean_ctor_get(v_a_677_, 0);
lean_inc(v_fst_678_);
v_snd_679_ = lean_ctor_get(v_a_677_, 1);
lean_inc(v_snd_679_);
lean_dec(v_a_677_);
lean_inc(v_mvarId_662_);
v___x_680_ = l_Lean_MVarId_getTag(v_mvarId_662_, v_a_667_, v_a_668_, v_a_669_, v_a_670_);
if (lean_obj_tag(v___x_680_) == 0)
{
lean_object* v_a_681_; lean_object* v___x_682_; 
v_a_681_ = lean_ctor_get(v___x_680_, 0);
lean_inc(v_a_681_);
lean_dec_ref_known(v___x_680_, 1);
v___x_682_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_fst_678_, v_a_681_, v_a_667_, v_a_668_, v_a_669_, v_a_670_);
if (lean_obj_tag(v___x_682_) == 0)
{
lean_object* v_a_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_693_; 
v_a_683_ = lean_ctor_get(v___x_682_, 0);
lean_inc_n(v_a_683_, 2);
lean_dec_ref_known(v___x_682_, 1);
v___x_684_ = l_Lean_mkAppN(v_a_683_, v_snd_679_);
lean_dec(v_snd_679_);
v___x_685_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0___redArg(v_mvarId_662_, v___x_684_, v_a_668_);
v_isSharedCheck_693_ = !lean_is_exclusive(v___x_685_);
if (v_isSharedCheck_693_ == 0)
{
lean_object* v_unused_694_; 
v_unused_694_ = lean_ctor_get(v___x_685_, 0);
lean_dec(v_unused_694_);
v___x_687_ = v___x_685_;
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
else
{
lean_dec(v___x_685_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_689_; lean_object* v___x_691_; 
v___x_689_ = l_Lean_Expr_mvarId_x21(v_a_683_);
lean_dec(v_a_683_);
if (v_isShared_688_ == 0)
{
lean_ctor_set(v___x_687_, 0, v___x_689_);
v___x_691_ = v___x_687_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v___x_689_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
else
{
lean_object* v_a_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_702_; 
lean_dec(v_snd_679_);
lean_dec(v_mvarId_662_);
v_a_695_ = lean_ctor_get(v___x_682_, 0);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_682_);
if (v_isSharedCheck_702_ == 0)
{
v___x_697_ = v___x_682_;
v_isShared_698_ = v_isSharedCheck_702_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_a_695_);
lean_dec(v___x_682_);
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
lean_dec(v_snd_679_);
lean_dec(v_fst_678_);
lean_dec(v_mvarId_662_);
v_a_703_ = lean_ctor_get(v___x_680_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_710_ == 0)
{
v___x_705_ = v___x_680_;
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_a_703_);
lean_dec(v___x_680_);
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
else
{
lean_object* v_a_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_718_; 
lean_dec(v_mvarId_662_);
v_a_711_ = lean_ctor_get(v___x_676_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_718_ == 0)
{
v___x_713_ = v___x_676_;
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_a_711_);
lean_dec(v___x_676_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_716_; 
if (v_isShared_714_ == 0)
{
v___x_716_ = v___x_713_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_a_711_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
}
else
{
lean_object* v_a_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_726_; 
lean_dec_ref(v_aSizeEqN_666_);
lean_dec(v_xNamePrefix_665_);
lean_dec(v_n_664_);
lean_dec_ref(v_a_663_);
lean_dec(v_mvarId_662_);
v_a_719_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_726_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_726_ == 0)
{
v___x_721_ = v___x_672_;
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_a_719_);
lean_dec(v___x_672_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v___x_724_; 
if (v_isShared_722_ == 0)
{
v___x_724_ = v___x_721_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v_a_719_);
v___x_724_ = v_reuseFailAlloc_725_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
return v___x_724_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit___boxed(lean_object* v_mvarId_727_, lean_object* v_a_728_, lean_object* v_n_729_, lean_object* v_xNamePrefix_730_, lean_object* v_aSizeEqN_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_, lean_object* v_a_736_){
_start:
{
lean_object* v_res_737_; 
v_res_737_ = l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit(v_mvarId_727_, v_a_728_, v_n_729_, v_xNamePrefix_730_, v_aSizeEqN_731_, v_a_732_, v_a_733_, v_a_734_, v_a_735_);
lean_dec(v_a_735_);
lean_dec_ref(v_a_734_);
lean_dec(v_a_733_);
lean_dec_ref(v_a_732_);
return v_res_737_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0(lean_object* v_mvarId_738_, lean_object* v_val_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_){
_start:
{
lean_object* v___x_745_; 
v___x_745_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0___redArg(v_mvarId_738_, v_val_739_, v___y_741_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0___boxed(lean_object* v_mvarId_746_, lean_object* v_val_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0(v_mvarId_746_, v_val_747_, v___y_748_, v___y_749_, v___y_750_, v___y_751_);
lean_dec(v___y_751_);
lean_dec_ref(v___y_750_);
lean_dec(v___y_749_);
lean_dec_ref(v___y_748_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0(lean_object* v_00_u03b2_754_, lean_object* v_x_755_, lean_object* v_x_756_, lean_object* v_x_757_){
_start:
{
lean_object* v___x_758_; 
v___x_758_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0___redArg(v_x_755_, v_x_756_, v_x_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_759_, lean_object* v_x_760_, size_t v_x_761_, size_t v_x_762_, lean_object* v_x_763_, lean_object* v_x_764_){
_start:
{
lean_object* v___x_765_; 
v___x_765_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___redArg(v_x_760_, v_x_761_, v_x_762_, v_x_763_, v_x_764_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_766_, lean_object* v_x_767_, lean_object* v_x_768_, lean_object* v_x_769_, lean_object* v_x_770_, lean_object* v_x_771_){
_start:
{
size_t v_x_1360__boxed_772_; size_t v_x_1361__boxed_773_; lean_object* v_res_774_; 
v_x_1360__boxed_772_ = lean_unbox_usize(v_x_768_);
lean_dec(v_x_768_);
v_x_1361__boxed_773_ = lean_unbox_usize(v_x_769_);
lean_dec(v_x_769_);
v_res_774_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1(v_00_u03b2_766_, v_x_767_, v_x_1360__boxed_772_, v_x_1361__boxed_773_, v_x_770_, v_x_771_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_775_, lean_object* v_n_776_, lean_object* v_k_777_, lean_object* v_v_778_){
_start:
{
lean_object* v___x_779_; 
v___x_779_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2___redArg(v_n_776_, v_k_777_, v_v_778_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_780_, size_t v_depth_781_, lean_object* v_keys_782_, lean_object* v_vals_783_, lean_object* v_heq_784_, lean_object* v_i_785_, lean_object* v_entries_786_){
_start:
{
lean_object* v___x_787_; 
v___x_787_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_781_, v_keys_782_, v_vals_783_, v_i_785_, v_entries_786_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_788_, lean_object* v_depth_789_, lean_object* v_keys_790_, lean_object* v_vals_791_, lean_object* v_heq_792_, lean_object* v_i_793_, lean_object* v_entries_794_){
_start:
{
size_t v_depth_boxed_795_; lean_object* v_res_796_; 
v_depth_boxed_795_ = lean_unbox_usize(v_depth_789_);
lean_dec(v_depth_789_);
v_res_796_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_788_, v_depth_boxed_795_, v_keys_790_, v_vals_791_, v_heq_792_, v_i_793_, v_entries_794_);
lean_dec_ref(v_vals_791_);
lean_dec_ref(v_keys_790_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_797_, lean_object* v_x_798_, lean_object* v_x_799_, lean_object* v_x_800_, lean_object* v_x_801_){
_start:
{
lean_object* v___x_802_; 
v___x_802_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_x_798_, v_x_799_, v_x_800_, v_x_801_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2___redArg(lean_object* v_mvarId_803_, lean_object* v_x_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_){
_start:
{
lean_object* v___x_810_; 
v___x_810_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_803_, v_x_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_object* v_a_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_818_; 
v_a_811_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_818_ == 0)
{
v___x_813_ = v___x_810_;
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_a_811_);
lean_dec(v___x_810_);
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
v_reuseFailAlloc_817_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_826_; 
v_a_819_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_826_ == 0)
{
v___x_821_ = v___x_810_;
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_a_819_);
lean_dec(v___x_810_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v___x_824_; 
if (v_isShared_822_ == 0)
{
v___x_824_ = v___x_821_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v_a_819_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2___redArg___boxed(lean_object* v_mvarId_827_, lean_object* v_x_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2___redArg(v_mvarId_827_, v_x_828_, v___y_829_, v___y_830_, v___y_831_, v___y_832_);
lean_dec(v___y_832_);
lean_dec_ref(v___y_831_);
lean_dec(v___y_830_);
lean_dec_ref(v___y_829_);
return v_res_834_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2(lean_object* v_00_u03b1_835_, lean_object* v_mvarId_836_, lean_object* v_x_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_){
_start:
{
lean_object* v___x_843_; 
v___x_843_ = l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2___redArg(v_mvarId_836_, v_x_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2___boxed(lean_object* v_00_u03b1_844_, lean_object* v_mvarId_845_, lean_object* v_x_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2(v_00_u03b1_844_, v_mvarId_845_, v_x_846_, v___y_847_, v___y_848_, v___y_849_, v___y_850_);
lean_dec(v___y_850_);
lean_dec_ref(v___y_849_);
lean_dec(v___y_848_);
lean_dec_ref(v___y_847_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__0(size_t v_sz_853_, size_t v_i_854_, lean_object* v_bs_855_){
_start:
{
uint8_t v___x_856_; 
v___x_856_ = lean_usize_dec_lt(v_i_854_, v_sz_853_);
if (v___x_856_ == 0)
{
lean_object* v___x_857_; 
v___x_857_ = l_unsafeCast___redArg(v_bs_855_);
lean_dec_ref(v_bs_855_);
return v___x_857_;
}
else
{
lean_object* v_v_858_; lean_object* v___x_859_; lean_object* v_bs_x27_860_; lean_object* v___x_861_; lean_object* v___x_862_; size_t v___x_863_; size_t v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v_v_858_ = lean_array_uget(v_bs_855_, v_i_854_);
v___x_859_ = lean_unsigned_to_nat(0u);
v_bs_x27_860_ = lean_array_uset(v_bs_855_, v_i_854_, v___x_859_);
v___x_861_ = l_unsafeCast___redArg(v_v_858_);
lean_dec(v_v_858_);
v___x_862_ = l_Lean_mkRawNatLit(v___x_861_);
v___x_863_ = ((size_t)1ULL);
v___x_864_ = lean_usize_add(v_i_854_, v___x_863_);
v___x_865_ = l_unsafeCast___redArg(v___x_862_);
lean_dec_ref(v___x_862_);
v___x_866_ = lean_array_uset(v_bs_x27_860_, v_i_854_, v___x_865_);
v_i_854_ = v___x_864_;
v_bs_855_ = v___x_866_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__0___boxed(lean_object* v_sz_868_, lean_object* v_i_869_, lean_object* v_bs_870_){
_start:
{
size_t v_sz_boxed_871_; size_t v_i_boxed_872_; lean_object* v_res_873_; 
v_sz_boxed_871_ = lean_unbox_usize(v_sz_868_);
lean_dec(v_sz_868_);
v_i_boxed_872_ = lean_unbox_usize(v_i_869_);
lean_dec(v_i_869_);
v_res_873_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__0(v_sz_boxed_871_, v_i_boxed_872_, v_bs_870_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg___lam__0(lean_object* v___x_874_, lean_object* v_mvarId_875_, lean_object* v_a_876_, lean_object* v___x_877_, lean_object* v_xNamePrefix_878_, lean_object* v___x_879_, lean_object* v_subst_880_, uint8_t v___x_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_){
_start:
{
lean_object* v___x_887_; 
v___x_887_ = l_Lean_Meta_mkEqSymm(v___x_874_, v___y_882_, v___y_883_, v___y_884_, v___y_885_);
if (lean_obj_tag(v___x_887_) == 0)
{
lean_object* v_a_888_; lean_object* v___x_889_; 
v_a_888_ = lean_ctor_get(v___x_887_, 0);
lean_inc(v_a_888_);
lean_dec_ref_known(v___x_887_, 1);
lean_inc(v___x_877_);
v___x_889_ = l___private_Lean_Meta_Match_CaseArraySizes_0__Lean_Meta_introArrayLit(v_mvarId_875_, v_a_876_, v___x_877_, v_xNamePrefix_878_, v_a_888_, v___y_882_, v___y_883_, v___y_884_, v___y_885_);
if (lean_obj_tag(v___x_889_) == 0)
{
lean_object* v_a_890_; lean_object* v___x_891_; uint8_t v___x_892_; lean_object* v___x_893_; 
v_a_890_ = lean_ctor_get(v___x_889_, 0);
lean_inc(v_a_890_);
lean_dec_ref_known(v___x_889_, 1);
v___x_891_ = lean_box(0);
v___x_892_ = 0;
v___x_893_ = l_Lean_Meta_introNCore(v_a_890_, v___x_877_, v___x_891_, v___x_892_, v___x_892_, v___y_882_, v___y_883_, v___y_884_, v___y_885_);
if (lean_obj_tag(v___x_893_) == 0)
{
lean_object* v_a_894_; lean_object* v_fst_895_; lean_object* v_snd_896_; lean_object* v___x_897_; 
v_a_894_ = lean_ctor_get(v___x_893_, 0);
lean_inc(v_a_894_);
lean_dec_ref_known(v___x_893_, 1);
v_fst_895_ = lean_ctor_get(v_a_894_, 0);
lean_inc(v_fst_895_);
v_snd_896_ = lean_ctor_get(v_a_894_, 1);
lean_inc(v_snd_896_);
lean_dec(v_a_894_);
v___x_897_ = l_Lean_Meta_intro1Core(v_snd_896_, v___x_892_, v___y_882_, v___y_883_, v___y_884_, v___y_885_);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v_a_898_; lean_object* v_fst_899_; lean_object* v_snd_900_; lean_object* v___x_901_; 
v_a_898_ = lean_ctor_get(v___x_897_, 0);
lean_inc(v_a_898_);
lean_dec_ref_known(v___x_897_, 1);
v_fst_899_ = lean_ctor_get(v_a_898_, 0);
lean_inc(v_fst_899_);
v_snd_900_ = lean_ctor_get(v_a_898_, 1);
lean_inc(v_snd_900_);
lean_dec(v_a_898_);
v___x_901_ = l_Lean_MVarId_clear(v_snd_900_, v___x_879_, v___y_882_, v___y_883_, v___y_884_, v___y_885_);
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v_a_902_; lean_object* v___x_903_; 
v_a_902_ = lean_ctor_get(v___x_901_, 0);
lean_inc(v_a_902_);
lean_dec_ref_known(v___x_901_, 1);
v___x_903_ = l_Lean_Meta_substCore(v_a_902_, v_fst_899_, v___x_892_, v_subst_880_, v___x_881_, v___x_892_, v___y_882_, v___y_883_, v___y_884_, v___y_885_);
if (lean_obj_tag(v___x_903_) == 0)
{
lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_915_; 
v_a_904_ = lean_ctor_get(v___x_903_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_903_);
if (v_isSharedCheck_915_ == 0)
{
v___x_906_ = v___x_903_;
v_isShared_907_ = v_isSharedCheck_915_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_903_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_915_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v_fst_908_; lean_object* v_snd_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_913_; 
v_fst_908_ = lean_ctor_get(v_a_904_, 0);
lean_inc(v_fst_908_);
v_snd_909_ = lean_ctor_get(v_a_904_, 1);
lean_inc(v_snd_909_);
lean_dec(v_a_904_);
v___x_910_ = ((lean_object*)(l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__0));
v___x_911_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_911_, 0, v_snd_909_);
lean_ctor_set(v___x_911_, 1, v_fst_895_);
lean_ctor_set(v___x_911_, 2, v___x_910_);
lean_ctor_set(v___x_911_, 3, v_fst_908_);
if (v_isShared_907_ == 0)
{
lean_ctor_set(v___x_906_, 0, v___x_911_);
v___x_913_ = v___x_906_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v___x_911_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
else
{
lean_object* v_a_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_923_; 
lean_dec(v_fst_895_);
v_a_916_ = lean_ctor_get(v___x_903_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_903_);
if (v_isSharedCheck_923_ == 0)
{
v___x_918_ = v___x_903_;
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_a_916_);
lean_dec(v___x_903_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_921_; 
if (v_isShared_919_ == 0)
{
v___x_921_ = v___x_918_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_a_916_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
else
{
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_931_; 
lean_dec(v_fst_899_);
lean_dec(v_fst_895_);
lean_dec(v_subst_880_);
v_a_924_ = lean_ctor_get(v___x_901_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_931_ == 0)
{
v___x_926_ = v___x_901_;
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_901_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_929_; 
if (v_isShared_927_ == 0)
{
v___x_929_ = v___x_926_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_a_924_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
}
else
{
lean_object* v_a_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_939_; 
lean_dec(v_fst_895_);
lean_dec(v_subst_880_);
lean_dec(v___x_879_);
v_a_932_ = lean_ctor_get(v___x_897_, 0);
v_isSharedCheck_939_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_939_ == 0)
{
v___x_934_ = v___x_897_;
v_isShared_935_ = v_isSharedCheck_939_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_a_932_);
lean_dec(v___x_897_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_939_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v___x_937_; 
if (v_isShared_935_ == 0)
{
v___x_937_ = v___x_934_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v_a_932_);
v___x_937_ = v_reuseFailAlloc_938_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
return v___x_937_;
}
}
}
}
else
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_947_; 
lean_dec(v_subst_880_);
lean_dec(v___x_879_);
v_a_940_ = lean_ctor_get(v___x_893_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_893_);
if (v_isSharedCheck_947_ == 0)
{
v___x_942_ = v___x_893_;
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v___x_893_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_a_940_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
}
}
}
}
else
{
lean_object* v_a_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_955_; 
lean_dec(v_subst_880_);
lean_dec(v___x_879_);
lean_dec(v___x_877_);
v_a_948_ = lean_ctor_get(v___x_889_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_955_ == 0)
{
v___x_950_ = v___x_889_;
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_a_948_);
lean_dec(v___x_889_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_953_; 
if (v_isShared_951_ == 0)
{
v___x_953_ = v___x_950_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_a_948_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
}
}
}
}
else
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_963_; 
lean_dec(v_subst_880_);
lean_dec(v___x_879_);
lean_dec(v_xNamePrefix_878_);
lean_dec(v___x_877_);
lean_dec_ref(v_a_876_);
lean_dec(v_mvarId_875_);
v_a_956_ = lean_ctor_get(v___x_887_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_963_ == 0)
{
v___x_958_ = v___x_887_;
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_887_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_961_; 
if (v_isShared_959_ == 0)
{
v___x_961_ = v___x_958_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_a_956_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg___lam__0___boxed(lean_object* v___x_964_, lean_object* v_mvarId_965_, lean_object* v_a_966_, lean_object* v___x_967_, lean_object* v_xNamePrefix_968_, lean_object* v___x_969_, lean_object* v_subst_970_, lean_object* v___x_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
uint8_t v___x_3834__boxed_977_; lean_object* v_res_978_; 
v___x_3834__boxed_977_ = lean_unbox(v___x_971_);
v_res_978_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg___lam__0(v___x_964_, v_mvarId_965_, v_a_966_, v___x_967_, v_xNamePrefix_968_, v___x_969_, v_subst_970_, v___x_3834__boxed_977_, v___y_972_, v___y_973_, v___y_974_, v___y_975_);
lean_dec(v___y_975_);
lean_dec_ref(v___y_974_);
lean_dec(v___y_973_);
lean_dec_ref(v___y_972_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__1(lean_object* v_fst_979_, size_t v_sz_980_, size_t v_i_981_, lean_object* v_bs_982_){
_start:
{
uint8_t v___x_983_; 
v___x_983_ = lean_usize_dec_lt(v_i_981_, v_sz_980_);
if (v___x_983_ == 0)
{
lean_object* v___x_984_; 
v___x_984_ = l_unsafeCast___redArg(v_bs_982_);
lean_dec_ref(v_bs_982_);
return v___x_984_;
}
else
{
lean_object* v_v_985_; lean_object* v___x_986_; lean_object* v_bs_x27_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; size_t v___x_991_; size_t v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v_v_985_ = lean_array_uget(v_bs_982_, v_i_981_);
v___x_986_ = lean_unsigned_to_nat(0u);
v_bs_x27_987_ = lean_array_uset(v_bs_982_, v_i_981_, v___x_986_);
v___x_988_ = l_unsafeCast___redArg(v_v_985_);
lean_dec(v_v_985_);
v___x_989_ = l_Lean_Meta_FVarSubst_get(v_fst_979_, v___x_988_);
v___x_990_ = l_Lean_Expr_fvarId_x21(v___x_989_);
lean_dec_ref(v___x_989_);
v___x_991_ = ((size_t)1ULL);
v___x_992_ = lean_usize_add(v_i_981_, v___x_991_);
v___x_993_ = l_unsafeCast___redArg(v___x_990_);
lean_dec(v___x_990_);
v___x_994_ = lean_array_uset(v_bs_x27_987_, v_i_981_, v___x_993_);
v_i_981_ = v___x_992_;
v_bs_982_ = v___x_994_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__1___boxed(lean_object* v_fst_996_, lean_object* v_sz_997_, lean_object* v_i_998_, lean_object* v_bs_999_){
_start:
{
size_t v_sz_boxed_1000_; size_t v_i_boxed_1001_; lean_object* v_res_1002_; 
v_sz_boxed_1000_ = lean_unbox_usize(v_sz_997_);
lean_dec(v_sz_997_);
v_i_boxed_1001_ = lean_unbox_usize(v_i_998_);
lean_dec(v_i_998_);
v_res_1002_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__1(v_fst_996_, v_sz_boxed_1000_, v_i_boxed_1001_, v_bs_999_);
lean_dec(v_fst_996_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg(lean_object* v_sizes_1003_, lean_object* v_fst_1004_, lean_object* v_a_1005_, lean_object* v_xNamePrefix_1006_, size_t v_sz_1007_, size_t v_i_1008_, lean_object* v_bs_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_){
_start:
{
uint8_t v___x_1015_; 
v___x_1015_ = lean_usize_dec_lt(v_i_1008_, v_sz_1007_);
if (v___x_1015_ == 0)
{
lean_object* v___x_1016_; lean_object* v___x_1017_; 
lean_dec(v_xNamePrefix_1006_);
lean_dec_ref(v_a_1005_);
lean_dec(v_fst_1004_);
v___x_1016_ = l_unsafeCast___redArg(v_bs_1009_);
lean_dec_ref(v_bs_1009_);
v___x_1017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1016_);
return v___x_1017_;
}
else
{
lean_object* v_v_1018_; lean_object* v___x_1019_; lean_object* v_mvarId_1020_; lean_object* v_newHs_1021_; lean_object* v_subst_1022_; lean_object* v___x_1023_; lean_object* v_bs_x27_1024_; lean_object* v_a_1026_; lean_object* v___x_1032_; lean_object* v___x_1033_; uint8_t v___x_1034_; 
v_v_1018_ = lean_array_uget_borrowed(v_bs_1009_, v_i_1008_);
v___x_1019_ = l_unsafeCast___redArg(v_v_1018_);
v_mvarId_1020_ = lean_ctor_get(v___x_1019_, 0);
lean_inc(v_mvarId_1020_);
v_newHs_1021_ = lean_ctor_get(v___x_1019_, 1);
lean_inc_ref(v_newHs_1021_);
v_subst_1022_ = lean_ctor_get(v___x_1019_, 2);
lean_inc(v_subst_1022_);
lean_dec(v___x_1019_);
v___x_1023_ = lean_unsigned_to_nat(0u);
v_bs_x27_1024_ = lean_array_uset(v_bs_1009_, v_i_1008_, v___x_1023_);
v___x_1032_ = lean_usize_to_nat(v_i_1008_);
v___x_1033_ = lean_array_get_size(v_sizes_1003_);
v___x_1034_ = lean_nat_dec_lt(v___x_1032_, v___x_1033_);
if (v___x_1034_ == 0)
{
lean_object* v___x_1035_; 
lean_dec(v___x_1032_);
lean_inc(v_fst_1004_);
v___x_1035_ = l_Lean_Meta_substCore(v_mvarId_1020_, v_fst_1004_, v___x_1034_, v_subst_1022_, v___x_1015_, v___x_1034_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_);
if (lean_obj_tag(v___x_1035_) == 0)
{
lean_object* v_a_1036_; lean_object* v_fst_1037_; lean_object* v_snd_1038_; size_t v_sz_1039_; size_t v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
v_a_1036_ = lean_ctor_get(v___x_1035_, 0);
lean_inc(v_a_1036_);
lean_dec_ref_known(v___x_1035_, 1);
v_fst_1037_ = lean_ctor_get(v_a_1036_, 0);
lean_inc(v_fst_1037_);
v_snd_1038_ = lean_ctor_get(v_a_1036_, 1);
lean_inc(v_snd_1038_);
lean_dec(v_a_1036_);
v_sz_1039_ = lean_array_size(v_newHs_1021_);
v___x_1040_ = ((size_t)0ULL);
v___x_1041_ = l_unsafeCast___redArg(v_newHs_1021_);
lean_dec_ref(v_newHs_1021_);
v___x_1042_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__1(v_fst_1037_, v_sz_1039_, v___x_1040_, v___x_1041_);
v___x_1043_ = l_unsafeCast___redArg(v___x_1042_);
lean_dec_ref(v___x_1042_);
v___x_1044_ = ((lean_object*)(l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default___closed__0));
v___x_1045_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1045_, 0, v_snd_1038_);
lean_ctor_set(v___x_1045_, 1, v___x_1044_);
lean_ctor_set(v___x_1045_, 2, v___x_1043_);
lean_ctor_set(v___x_1045_, 3, v_fst_1037_);
v_a_1026_ = v___x_1045_;
goto v___jp_1025_;
}
else
{
lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1053_; 
lean_dec_ref(v_bs_x27_1024_);
lean_dec_ref(v_newHs_1021_);
lean_dec(v_xNamePrefix_1006_);
lean_dec_ref(v_a_1005_);
lean_dec(v_fst_1004_);
v_a_1046_ = lean_ctor_get(v___x_1035_, 0);
v_isSharedCheck_1053_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1048_ = v___x_1035_;
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_dec(v___x_1035_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1051_; 
if (v_isShared_1049_ == 0)
{
v___x_1051_ = v___x_1048_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_a_1046_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
}
}
else
{
lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___f_1059_; lean_object* v___x_1060_; 
lean_dec_ref(v_newHs_1021_);
lean_inc(v_fst_1004_);
v___x_1054_ = l_Lean_Meta_FVarSubst_get(v_subst_1022_, v_fst_1004_);
v___x_1055_ = l_Lean_Expr_fvarId_x21(v___x_1054_);
lean_dec_ref(v___x_1054_);
v___x_1056_ = lean_array_fget_borrowed(v_sizes_1003_, v___x_1032_);
lean_dec(v___x_1032_);
lean_inc(v___x_1055_);
v___x_1057_ = l_Lean_mkFVar(v___x_1055_);
v___x_1058_ = lean_box(v___x_1015_);
lean_inc(v_xNamePrefix_1006_);
lean_inc(v___x_1056_);
lean_inc_ref(v_a_1005_);
lean_inc(v_mvarId_1020_);
v___f_1059_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg___lam__0___boxed), 13, 8);
lean_closure_set(v___f_1059_, 0, v___x_1057_);
lean_closure_set(v___f_1059_, 1, v_mvarId_1020_);
lean_closure_set(v___f_1059_, 2, v_a_1005_);
lean_closure_set(v___f_1059_, 3, v___x_1056_);
lean_closure_set(v___f_1059_, 4, v_xNamePrefix_1006_);
lean_closure_set(v___f_1059_, 5, v___x_1055_);
lean_closure_set(v___f_1059_, 6, v_subst_1022_);
lean_closure_set(v___f_1059_, 7, v___x_1058_);
v___x_1060_ = l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2___redArg(v_mvarId_1020_, v___f_1059_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_);
if (lean_obj_tag(v___x_1060_) == 0)
{
lean_object* v_a_1061_; 
v_a_1061_ = lean_ctor_get(v___x_1060_, 0);
lean_inc(v_a_1061_);
lean_dec_ref_known(v___x_1060_, 1);
v_a_1026_ = v_a_1061_;
goto v___jp_1025_;
}
else
{
lean_object* v_a_1062_; lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1069_; 
lean_dec_ref(v_bs_x27_1024_);
lean_dec(v_xNamePrefix_1006_);
lean_dec_ref(v_a_1005_);
lean_dec(v_fst_1004_);
v_a_1062_ = lean_ctor_get(v___x_1060_, 0);
v_isSharedCheck_1069_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1069_ == 0)
{
v___x_1064_ = v___x_1060_;
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
else
{
lean_inc(v_a_1062_);
lean_dec(v___x_1060_);
v___x_1064_ = lean_box(0);
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
v_resetjp_1063_:
{
lean_object* v___x_1067_; 
if (v_isShared_1065_ == 0)
{
v___x_1067_ = v___x_1064_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v_a_1062_);
v___x_1067_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
return v___x_1067_;
}
}
}
}
v___jp_1025_:
{
size_t v___x_1027_; size_t v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1027_ = ((size_t)1ULL);
v___x_1028_ = lean_usize_add(v_i_1008_, v___x_1027_);
v___x_1029_ = l_unsafeCast___redArg(v_a_1026_);
lean_dec_ref(v_a_1026_);
v___x_1030_ = lean_array_uset(v_bs_x27_1024_, v_i_1008_, v___x_1029_);
v_i_1008_ = v___x_1028_;
v_bs_1009_ = v___x_1030_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg___boxed(lean_object* v_sizes_1070_, lean_object* v_fst_1071_, lean_object* v_a_1072_, lean_object* v_xNamePrefix_1073_, lean_object* v_sz_1074_, lean_object* v_i_1075_, lean_object* v_bs_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_){
_start:
{
size_t v_sz_boxed_1082_; size_t v_i_boxed_1083_; lean_object* v_res_1084_; 
v_sz_boxed_1082_ = lean_unbox_usize(v_sz_1074_);
lean_dec(v_sz_1074_);
v_i_boxed_1083_ = lean_unbox_usize(v_i_1075_);
lean_dec(v_i_1075_);
v_res_1084_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg(v_sizes_1070_, v_fst_1071_, v_a_1072_, v_xNamePrefix_1073_, v_sz_boxed_1082_, v_i_boxed_1083_, v_bs_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_);
lean_dec(v___y_1080_);
lean_dec_ref(v___y_1079_);
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
lean_dec_ref(v_sizes_1070_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__3(lean_object* v_sizes_1085_, lean_object* v_fst_1086_, lean_object* v_a_1087_, lean_object* v_xNamePrefix_1088_, lean_object* v_as_1089_, size_t v_sz_1090_, size_t v_i_1091_, lean_object* v_bs_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_){
_start:
{
lean_object* v___x_1098_; 
v___x_1098_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__3___redArg(v_sizes_1085_, v_fst_1086_, v_a_1087_, v_xNamePrefix_1088_, v_sz_1090_, v_i_1091_, v_bs_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_);
return v___x_1098_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__3___boxed(lean_object* v_sizes_1099_, lean_object* v_fst_1100_, lean_object* v_a_1101_, lean_object* v_xNamePrefix_1102_, lean_object* v_as_1103_, lean_object* v_sz_1104_, lean_object* v_i_1105_, lean_object* v_bs_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
size_t v_sz_boxed_1112_; size_t v_i_boxed_1113_; lean_object* v_res_1114_; 
v_sz_boxed_1112_ = lean_unbox_usize(v_sz_1104_);
lean_dec(v_sz_1104_);
v_i_boxed_1113_ = lean_unbox_usize(v_i_1105_);
lean_dec(v_i_1105_);
v_res_1114_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__3(v_sizes_1099_, v_fst_1100_, v_a_1101_, v_xNamePrefix_1102_, v_as_1103_, v_sz_boxed_1112_, v_i_boxed_1113_, v_bs_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_);
lean_dec(v___y_1110_);
lean_dec_ref(v___y_1109_);
lean_dec(v___y_1108_);
lean_dec_ref(v___y_1107_);
lean_dec_ref(v_as_1103_);
lean_dec_ref(v_sizes_1099_);
return v_res_1114_;
}
}
static lean_object* _init_l_Lean_Meta_caseArraySizes___lam__0___closed__4(void){
_start:
{
lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; 
v___x_1121_ = lean_box(0);
v___x_1122_ = ((lean_object*)(l_Lean_Meta_caseArraySizes___lam__0___closed__3));
v___x_1123_ = l_Lean_mkConst(v___x_1122_, v___x_1121_);
return v___x_1123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_caseArraySizes___lam__0(lean_object* v___x_1129_, lean_object* v___x_1130_, lean_object* v_mvarId_1131_, lean_object* v_sizes_1132_, lean_object* v_hNamePrefix_1133_, lean_object* v_a_1134_, lean_object* v_xNamePrefix_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_){
_start:
{
lean_object* v___x_1141_; 
v___x_1141_ = l_Lean_Meta_mkAppM(v___x_1129_, v___x_1130_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_);
if (lean_obj_tag(v___x_1141_) == 0)
{
lean_object* v_a_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
v_a_1142_ = lean_ctor_get(v___x_1141_, 0);
lean_inc(v_a_1142_);
lean_dec_ref_known(v___x_1141_, 1);
v___x_1143_ = ((lean_object*)(l_Lean_Meta_caseArraySizes___lam__0___closed__1));
v___x_1144_ = lean_obj_once(&l_Lean_Meta_caseArraySizes___lam__0___closed__4, &l_Lean_Meta_caseArraySizes___lam__0___closed__4_once, _init_l_Lean_Meta_caseArraySizes___lam__0___closed__4);
v___x_1145_ = ((lean_object*)(l_Lean_Meta_caseArraySizes___lam__0___closed__6));
v___x_1146_ = l_Lean_MVarId_assertExt(v_mvarId_1131_, v___x_1143_, v___x_1144_, v_a_1142_, v___x_1145_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_);
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v_a_1147_; uint8_t v___x_1148_; lean_object* v___x_1149_; 
v_a_1147_ = lean_ctor_get(v___x_1146_, 0);
lean_inc(v_a_1147_);
lean_dec_ref_known(v___x_1146_, 1);
v___x_1148_ = 0;
v___x_1149_ = l_Lean_Meta_intro1Core(v_a_1147_, v___x_1148_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_);
if (lean_obj_tag(v___x_1149_) == 0)
{
lean_object* v_a_1150_; lean_object* v_fst_1151_; lean_object* v_snd_1152_; lean_object* v___x_1153_; 
v_a_1150_ = lean_ctor_get(v___x_1149_, 0);
lean_inc(v_a_1150_);
lean_dec_ref_known(v___x_1149_, 1);
v_fst_1151_ = lean_ctor_get(v_a_1150_, 0);
lean_inc(v_fst_1151_);
v_snd_1152_ = lean_ctor_get(v_a_1150_, 1);
lean_inc(v_snd_1152_);
lean_dec(v_a_1150_);
v___x_1153_ = l_Lean_Meta_intro1Core(v_snd_1152_, v___x_1148_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_);
if (lean_obj_tag(v___x_1153_) == 0)
{
lean_object* v_a_1154_; lean_object* v_fst_1155_; lean_object* v_snd_1156_; size_t v_sz_1157_; size_t v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; uint8_t v___x_1162_; lean_object* v___x_1163_; 
v_a_1154_ = lean_ctor_get(v___x_1153_, 0);
lean_inc(v_a_1154_);
lean_dec_ref_known(v___x_1153_, 1);
v_fst_1155_ = lean_ctor_get(v_a_1154_, 0);
lean_inc(v_fst_1155_);
v_snd_1156_ = lean_ctor_get(v_a_1154_, 1);
lean_inc(v_snd_1156_);
lean_dec(v_a_1154_);
v_sz_1157_ = lean_array_size(v_sizes_1132_);
v___x_1158_ = ((size_t)0ULL);
v___x_1159_ = l_unsafeCast___redArg(v_sizes_1132_);
v___x_1160_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__0(v_sz_1157_, v___x_1158_, v___x_1159_);
v___x_1161_ = l_unsafeCast___redArg(v___x_1160_);
lean_dec_ref(v___x_1160_);
v___x_1162_ = 1;
v___x_1163_ = l_Lean_Meta_caseValues(v_snd_1156_, v_fst_1151_, v___x_1161_, v_hNamePrefix_1133_, v___x_1162_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_);
if (lean_obj_tag(v___x_1163_) == 0)
{
lean_object* v_a_1164_; size_t v_sz_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_3670__overap_1170_; lean_object* v___x_1171_; 
v_a_1164_ = lean_ctor_get(v___x_1163_, 0);
lean_inc(v_a_1164_);
lean_dec_ref_known(v___x_1163_, 1);
v_sz_1165_ = lean_array_size(v_a_1164_);
v___x_1166_ = l_unsafeCast___redArg(v_a_1164_);
v___x_1167_ = lean_box_usize(v_sz_1165_);
v___x_1168_ = ((lean_object*)(l_Lean_Meta_caseArraySizes___lam__0___boxed__const__1));
v___x_1169_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_caseArraySizes_spec__3___boxed), 13, 8);
lean_closure_set(v___x_1169_, 0, v_sizes_1132_);
lean_closure_set(v___x_1169_, 1, v_fst_1155_);
lean_closure_set(v___x_1169_, 2, v_a_1134_);
lean_closure_set(v___x_1169_, 3, v_xNamePrefix_1135_);
lean_closure_set(v___x_1169_, 4, v_a_1164_);
lean_closure_set(v___x_1169_, 5, v___x_1167_);
lean_closure_set(v___x_1169_, 6, v___x_1168_);
lean_closure_set(v___x_1169_, 7, v___x_1166_);
v___x_3670__overap_1170_ = l_unsafeCast___redArg(v___x_1169_);
lean_dec_ref(v___x_1169_);
v___x_1171_ = lean_apply_5(v___x_3670__overap_1170_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_, lean_box(0));
return v___x_1171_;
}
else
{
lean_object* v_a_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1179_; 
lean_dec(v_fst_1155_);
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
lean_dec(v___y_1137_);
lean_dec_ref(v___y_1136_);
lean_dec(v_xNamePrefix_1135_);
lean_dec_ref(v_a_1134_);
lean_dec_ref(v_sizes_1132_);
v_a_1172_ = lean_ctor_get(v___x_1163_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v___x_1163_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1174_ = v___x_1163_;
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_a_1172_);
lean_dec(v___x_1163_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1177_; 
if (v_isShared_1175_ == 0)
{
v___x_1177_ = v___x_1174_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_a_1172_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
}
else
{
lean_object* v_a_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1187_; 
lean_dec(v_fst_1151_);
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
lean_dec(v___y_1137_);
lean_dec_ref(v___y_1136_);
lean_dec(v_xNamePrefix_1135_);
lean_dec_ref(v_a_1134_);
lean_dec(v_hNamePrefix_1133_);
lean_dec_ref(v_sizes_1132_);
v_a_1180_ = lean_ctor_get(v___x_1153_, 0);
v_isSharedCheck_1187_ = !lean_is_exclusive(v___x_1153_);
if (v_isSharedCheck_1187_ == 0)
{
v___x_1182_ = v___x_1153_;
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_a_1180_);
lean_dec(v___x_1153_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1185_; 
if (v_isShared_1183_ == 0)
{
v___x_1185_ = v___x_1182_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v_a_1180_);
v___x_1185_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
return v___x_1185_;
}
}
}
}
else
{
lean_object* v_a_1188_; lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1195_; 
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
lean_dec(v___y_1137_);
lean_dec_ref(v___y_1136_);
lean_dec(v_xNamePrefix_1135_);
lean_dec_ref(v_a_1134_);
lean_dec(v_hNamePrefix_1133_);
lean_dec_ref(v_sizes_1132_);
v_a_1188_ = lean_ctor_get(v___x_1149_, 0);
v_isSharedCheck_1195_ = !lean_is_exclusive(v___x_1149_);
if (v_isSharedCheck_1195_ == 0)
{
v___x_1190_ = v___x_1149_;
v_isShared_1191_ = v_isSharedCheck_1195_;
goto v_resetjp_1189_;
}
else
{
lean_inc(v_a_1188_);
lean_dec(v___x_1149_);
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
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
lean_dec(v___y_1137_);
lean_dec_ref(v___y_1136_);
lean_dec(v_xNamePrefix_1135_);
lean_dec_ref(v_a_1134_);
lean_dec(v_hNamePrefix_1133_);
lean_dec_ref(v_sizes_1132_);
v_a_1196_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1203_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1203_ == 0)
{
v___x_1198_ = v___x_1146_;
v_isShared_1199_ = v_isSharedCheck_1203_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_a_1196_);
lean_dec(v___x_1146_);
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
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
lean_dec(v___y_1137_);
lean_dec_ref(v___y_1136_);
lean_dec(v_xNamePrefix_1135_);
lean_dec_ref(v_a_1134_);
lean_dec(v_hNamePrefix_1133_);
lean_dec_ref(v_sizes_1132_);
lean_dec(v_mvarId_1131_);
v_a_1204_ = lean_ctor_get(v___x_1141_, 0);
v_isSharedCheck_1211_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1211_ == 0)
{
v___x_1206_ = v___x_1141_;
v_isShared_1207_ = v_isSharedCheck_1211_;
goto v_resetjp_1205_;
}
else
{
lean_inc(v_a_1204_);
lean_dec(v___x_1141_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_caseArraySizes___lam__0___boxed(lean_object* v___x_1212_, lean_object* v___x_1213_, lean_object* v_mvarId_1214_, lean_object* v_sizes_1215_, lean_object* v_hNamePrefix_1216_, lean_object* v_a_1217_, lean_object* v_xNamePrefix_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_Lean_Meta_caseArraySizes___lam__0(v___x_1212_, v___x_1213_, v_mvarId_1214_, v_sizes_1215_, v_hNamePrefix_1216_, v_a_1217_, v_xNamePrefix_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_caseArraySizes(lean_object* v_mvarId_1229_, lean_object* v_fvarId_1230_, lean_object* v_sizes_1231_, lean_object* v_xNamePrefix_1232_, lean_object* v_hNamePrefix_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_, lean_object* v_a_1237_){
_start:
{
lean_object* v_a_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___f_1244_; lean_object* v___x_1245_; 
v_a_1239_ = l_Lean_mkFVar(v_fvarId_1230_);
v___x_1240_ = ((lean_object*)(l_Lean_Meta_caseArraySizes___closed__1));
v___x_1241_ = lean_unsigned_to_nat(1u);
v___x_1242_ = lean_mk_empty_array_with_capacity(v___x_1241_);
lean_inc_ref(v_a_1239_);
v___x_1243_ = lean_array_push(v___x_1242_, v_a_1239_);
lean_inc(v_mvarId_1229_);
v___f_1244_ = lean_alloc_closure((void*)(l_Lean_Meta_caseArraySizes___lam__0___boxed), 12, 7);
lean_closure_set(v___f_1244_, 0, v___x_1240_);
lean_closure_set(v___f_1244_, 1, v___x_1243_);
lean_closure_set(v___f_1244_, 2, v_mvarId_1229_);
lean_closure_set(v___f_1244_, 3, v_sizes_1231_);
lean_closure_set(v___f_1244_, 4, v_hNamePrefix_1233_);
lean_closure_set(v___f_1244_, 5, v_a_1239_);
lean_closure_set(v___f_1244_, 6, v_xNamePrefix_1232_);
v___x_1245_ = l_Lean_MVarId_withContext___at___00Lean_Meta_caseArraySizes_spec__2___redArg(v_mvarId_1229_, v___f_1244_, v_a_1234_, v_a_1235_, v_a_1236_, v_a_1237_);
return v___x_1245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_caseArraySizes___boxed(lean_object* v_mvarId_1246_, lean_object* v_fvarId_1247_, lean_object* v_sizes_1248_, lean_object* v_xNamePrefix_1249_, lean_object* v_hNamePrefix_1250_, lean_object* v_a_1251_, lean_object* v_a_1252_, lean_object* v_a_1253_, lean_object* v_a_1254_, lean_object* v_a_1255_){
_start:
{
lean_object* v_res_1256_; 
v_res_1256_ = l_Lean_Meta_caseArraySizes(v_mvarId_1246_, v_fvarId_1247_, v_sizes_1248_, v_xNamePrefix_1249_, v_hNamePrefix_1250_, v_a_1251_, v_a_1252_, v_a_1253_, v_a_1254_);
lean_dec(v_a_1254_);
lean_dec_ref(v_a_1253_);
lean_dec(v_a_1252_);
lean_dec_ref(v_a_1251_);
return v_res_1256_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_FVarSubst(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_CaseValues(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Subst(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Match_CaseArraySizes(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_FVarSubst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_CaseValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Subst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default = _init_l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default();
lean_mark_persistent(l_Lean_Meta_instInhabitedCaseArraySizesSubgoal_default);
l_Lean_Meta_instInhabitedCaseArraySizesSubgoal = _init_l_Lean_Meta_instInhabitedCaseArraySizesSubgoal();
lean_mark_persistent(l_Lean_Meta_instInhabitedCaseArraySizesSubgoal);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Match_CaseArraySizes(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_FVarSubst(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_CaseValues(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Subst(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Match_CaseArraySizes(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_FVarSubst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_CaseValues(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Subst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_CaseArraySizes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Match_CaseArraySizes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Match_CaseArraySizes(builtin);
}
#ifdef __cplusplus
}
#endif

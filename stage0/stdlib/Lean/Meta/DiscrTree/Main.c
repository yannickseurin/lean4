// Lean compiler output
// Module: Lean.Meta.DiscrTree.Main
// Imports: public import Lean.Meta.Basic public import Lean.Meta.DiscrTree.Basic import Lean.Meta.WHNF
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
lean_object* l_Lean_Meta_whnfCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_etaExpandedStrict_x3f(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_getReducibilityStatusCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isMatcherAppCore_x3f(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getFirstDiscrPos(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwIsDefEqStuck___redArg();
uint8_t l_Lean_isRecCore(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isRawNatLit(lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instInhabitedTrie___redArg();
uint64_t l_Lean_Meta_DiscrTree_Key_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_instBEqKey_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_Key_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Meta_DiscrTree_hasNoindexAnnotation(lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isImplicit(lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isStrictImplicit(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t l_Lean_isClass(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_mkNoindexAnnotation(lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instBEqKey_beq___boxed(lean_object*, lean_object*);
uint8_t l_Array_isEqvAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Key_arity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Key_arity___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "_discr_tree_tmp"};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 72, 223, 190, 190, 84, 146, 120)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId___closed__1 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId___closed__1_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar;
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_ignoreArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_ignoreArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__0_value;
static const lean_string_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__1 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__1_value),LEAN_SCALAR_PTR_LITERAL(51, 81, 163, 94, 71, 156, 90, 186)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__2 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__2_value;
static const lean_string_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__3 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__3_value;
static const lean_string_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__4 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__3_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__4_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__5 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__5_value;
static const lean_string_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__6 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__6_value),LEAN_SCALAR_PTR_LITERAL(93, 165, 73, 246, 125, 40, 156, 223)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__7 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__7_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f_loop___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f_loop___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f_loop(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f(lean_object*);
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__0_value;
static const lean_string_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__1 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__1_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__2 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__2_value;
static const lean_string_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "add"};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__3 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__3_value;
static const lean_string_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Add"};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__4 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__4_value),LEAN_SCALAR_PTR_LITERAL(123, 91, 0, 102, 155, 93, 69, 240)}};
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__3_value),LEAN_SCALAR_PTR_LITERAL(50, 34, 112, 179, 66, 45, 192, 92)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__5 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__3_value),LEAN_SCALAR_PTR_LITERAL(210, 189, 86, 121, 130, 22, 242, 236)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__6 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_shouldAddAsStar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_shouldAddAsStar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_reduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_reduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isBadKey(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isBadKey___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey_step(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey_step___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_reduceDT(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_reduceDT___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushWildcards(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgs(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_mkPathAux(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_mkPathAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_initCapacity;
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_mkPath(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_mkPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insert___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__2_value;
static const lean_array_object l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__4;
static const lean_closure_object l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_DiscrTree_instBEqKey_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__5_value;
static const lean_array_object l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__1;
static lean_once_cell_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__2;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__3 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__4 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchKeyArgs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchKeyArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnifyKeyArgs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnifyKeyArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__0_value;
static const lean_array_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__1_value),((lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__1_value)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchWithExtra___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchWithExtra___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchWithExtra(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchWithExtra___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchKeyRootFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchKeyRootFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_DiscrTree_getUnify___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_DiscrTree_getUnify___redArg___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_DiscrTree_getUnify___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Key_arity(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 4:
{
lean_object* v_a_2_; 
v_a_2_ = lean_ctor_get(v_x_1_, 1);
lean_inc(v_a_2_);
return v_a_2_;
}
case 3:
{
lean_object* v_a_3_; 
v_a_3_ = lean_ctor_get(v_x_1_, 1);
lean_inc(v_a_3_);
return v_a_3_;
}
case 5:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(1u);
return v___x_4_;
}
case 6:
{
lean_object* v_a_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v_a_5_ = lean_ctor_get(v_x_1_, 2);
v___x_6_ = lean_unsigned_to_nat(1u);
v___x_7_ = lean_nat_add(v___x_6_, v_a_5_);
return v___x_7_;
}
default: 
{
lean_object* v___x_8_; 
v___x_8_ = lean_unsigned_to_nat(0u);
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Key_arity___boxed(lean_object* v_x_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_Meta_DiscrTree_Key_arity(v_x_9_);
lean_dec(v_x_9_);
return v_res_10_;
}
}
static lean_object* _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar___closed__0(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId));
v___x_16_ = l_Lean_mkMVar(v___x_15_);
return v___x_16_;
}
}
static lean_object* _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lean_obj_once(&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar___closed__0, &l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar___closed__0_once, _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar___closed__0);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_ignoreArg(lean_object* v_a_18_, lean_object* v_i_19_, lean_object* v_infos_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_, lean_object* v_a_24_){
_start:
{
lean_object* v___x_26_; uint8_t v___x_27_; 
v___x_26_ = lean_array_get_size(v_infos_20_);
v___x_27_ = lean_nat_dec_lt(v_i_19_, v___x_26_);
if (v___x_27_ == 0)
{
lean_object* v___x_28_; 
v___x_28_ = l_Lean_Meta_isProof(v_a_18_, v_a_21_, v_a_22_, v_a_23_, v_a_24_);
return v___x_28_;
}
else
{
lean_object* v_info_29_; uint8_t v_isInstance_30_; uint8_t v___y_32_; 
v_info_29_ = lean_array_fget_borrowed(v_infos_20_, v_i_19_);
v_isInstance_30_ = lean_ctor_get_uint8(v_info_29_, sizeof(void*)*1 + 4);
if (v_isInstance_30_ == 0)
{
uint8_t v___x_48_; 
v___x_48_ = l_Lean_Meta_ParamInfo_isImplicit(v_info_29_);
if (v___x_48_ == 0)
{
uint8_t v___x_49_; 
v___x_49_ = l_Lean_Meta_ParamInfo_isStrictImplicit(v_info_29_);
if (v___x_49_ == 0)
{
lean_object* v___x_50_; 
v___x_50_ = l_Lean_Meta_isProof(v_a_18_, v_a_21_, v_a_22_, v_a_23_, v_a_24_);
return v___x_50_;
}
else
{
v___y_32_ = v___x_49_;
goto v___jp_31_;
}
}
else
{
v___y_32_ = v___x_27_;
goto v___jp_31_;
}
}
else
{
lean_object* v___x_51_; lean_object* v___x_52_; 
lean_dec_ref(v_a_18_);
v___x_51_ = lean_box(v___x_27_);
v___x_52_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_52_, 0, v___x_51_);
return v___x_52_;
}
v___jp_31_:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lean_Meta_isType(v_a_18_, v_a_21_, v_a_22_, v_a_23_, v_a_24_);
if (lean_obj_tag(v___x_33_) == 0)
{
lean_object* v_a_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_47_; 
v_a_34_ = lean_ctor_get(v___x_33_, 0);
v_isSharedCheck_47_ = !lean_is_exclusive(v___x_33_);
if (v_isSharedCheck_47_ == 0)
{
v___x_36_ = v___x_33_;
v_isShared_37_ = v_isSharedCheck_47_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_a_34_);
lean_dec(v___x_33_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_47_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
uint8_t v___x_38_; 
v___x_38_ = lean_unbox(v_a_34_);
lean_dec(v_a_34_);
if (v___x_38_ == 0)
{
lean_object* v___x_39_; lean_object* v___x_41_; 
v___x_39_ = lean_box(v___y_32_);
if (v_isShared_37_ == 0)
{
lean_ctor_set(v___x_36_, 0, v___x_39_);
v___x_41_ = v___x_36_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_42_; 
v_reuseFailAlloc_42_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_42_, 0, v___x_39_);
v___x_41_ = v_reuseFailAlloc_42_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
return v___x_41_;
}
}
else
{
lean_object* v___x_43_; lean_object* v___x_45_; 
v___x_43_ = lean_box(v_isInstance_30_);
if (v_isShared_37_ == 0)
{
lean_ctor_set(v___x_36_, 0, v___x_43_);
v___x_45_ = v___x_36_;
goto v_reusejp_44_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v___x_43_);
v___x_45_ = v_reuseFailAlloc_46_;
goto v_reusejp_44_;
}
v_reusejp_44_:
{
return v___x_45_;
}
}
}
}
else
{
return v___x_33_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_ignoreArg___boxed(lean_object* v_a_53_, lean_object* v_i_54_, lean_object* v_infos_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_ignoreArg(v_a_53_, v_i_54_, v_infos_55_, v_a_56_, v_a_57_, v_a_58_, v_a_59_);
lean_dec(v_a_59_);
lean_dec_ref(v_a_58_);
lean_dec(v_a_57_);
lean_dec_ref(v_a_56_);
lean_dec_ref(v_infos_55_);
lean_dec(v_i_54_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgsAux(lean_object* v_infos_62_, lean_object* v_x_63_, lean_object* v_x_64_, lean_object* v_x_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_){
_start:
{
if (lean_obj_tag(v_x_64_) == 5)
{
lean_object* v_fn_71_; lean_object* v_arg_72_; lean_object* v___x_73_; 
v_fn_71_ = lean_ctor_get(v_x_64_, 0);
lean_inc_ref(v_fn_71_);
v_arg_72_ = lean_ctor_get(v_x_64_, 1);
lean_inc_ref_n(v_arg_72_, 2);
lean_dec_ref_known(v_x_64_, 2);
v___x_73_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_ignoreArg(v_arg_72_, v_x_63_, v_infos_62_, v_a_66_, v_a_67_, v_a_68_, v_a_69_);
if (lean_obj_tag(v___x_73_) == 0)
{
lean_object* v_a_74_; uint8_t v___x_75_; 
v_a_74_ = lean_ctor_get(v___x_73_, 0);
lean_inc(v_a_74_);
lean_dec_ref_known(v___x_73_, 1);
v___x_75_ = lean_unbox(v_a_74_);
lean_dec(v_a_74_);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_76_ = lean_unsigned_to_nat(1u);
v___x_77_ = lean_nat_sub(v_x_63_, v___x_76_);
lean_dec(v_x_63_);
v___x_78_ = lean_array_push(v_x_65_, v_arg_72_);
v_x_63_ = v___x_77_;
v_x_64_ = v_fn_71_;
v_x_65_ = v___x_78_;
goto _start;
}
else
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
lean_dec_ref(v_arg_72_);
v___x_80_ = lean_unsigned_to_nat(1u);
v___x_81_ = lean_nat_sub(v_x_63_, v___x_80_);
lean_dec(v_x_63_);
v___x_82_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar;
v___x_83_ = lean_array_push(v_x_65_, v___x_82_);
v_x_63_ = v___x_81_;
v_x_64_ = v_fn_71_;
v_x_65_ = v___x_83_;
goto _start;
}
}
else
{
lean_object* v_a_85_; lean_object* v___x_87_; uint8_t v_isShared_88_; uint8_t v_isSharedCheck_92_; 
lean_dec_ref(v_arg_72_);
lean_dec_ref(v_fn_71_);
lean_dec_ref(v_x_65_);
lean_dec(v_x_63_);
v_a_85_ = lean_ctor_get(v___x_73_, 0);
v_isSharedCheck_92_ = !lean_is_exclusive(v___x_73_);
if (v_isSharedCheck_92_ == 0)
{
v___x_87_ = v___x_73_;
v_isShared_88_ = v_isSharedCheck_92_;
goto v_resetjp_86_;
}
else
{
lean_inc(v_a_85_);
lean_dec(v___x_73_);
v___x_87_ = lean_box(0);
v_isShared_88_ = v_isSharedCheck_92_;
goto v_resetjp_86_;
}
v_resetjp_86_:
{
lean_object* v___x_90_; 
if (v_isShared_88_ == 0)
{
v___x_90_ = v___x_87_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v_a_85_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
}
}
else
{
lean_object* v___x_93_; 
lean_dec_ref(v_x_64_);
lean_dec(v_x_63_);
v___x_93_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_93_, 0, v_x_65_);
return v___x_93_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgsAux___boxed(lean_object* v_infos_94_, lean_object* v_x_95_, lean_object* v_x_96_, lean_object* v_x_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_, lean_object* v_a_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgsAux(v_infos_94_, v_x_95_, v_x_96_, v_x_97_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
lean_dec(v_a_101_);
lean_dec_ref(v_a_100_);
lean_dec(v_a_99_);
lean_dec_ref(v_a_98_);
lean_dec_ref(v_infos_94_);
return v_res_103_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral(lean_object* v_e_118_){
_start:
{
uint8_t v___x_119_; uint8_t v___x_120_; 
v___x_119_ = l_Lean_Expr_isRawNatLit(v_e_118_);
v___x_120_ = 1;
if (v___x_119_ == 0)
{
lean_object* v_f_121_; uint8_t v___x_122_; 
v_f_121_ = l_Lean_Expr_getAppFn(v_e_118_);
v___x_122_ = l_Lean_Expr_isConst(v_f_121_);
if (v___x_122_ == 0)
{
lean_dec_ref(v_f_121_);
lean_dec_ref(v_e_118_);
return v___x_119_;
}
else
{
if (v___x_119_ == 0)
{
lean_object* v_fName_123_; lean_object* v___x_141_; uint8_t v___x_142_; 
v_fName_123_ = l_Lean_Expr_constName_x21(v_f_121_);
lean_dec_ref(v_f_121_);
v___x_141_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__7));
v___x_142_ = lean_name_eq(v_fName_123_, v___x_141_);
if (v___x_142_ == 0)
{
goto v___jp_130_;
}
else
{
lean_object* v___x_143_; lean_object* v___x_144_; uint8_t v___x_145_; 
v___x_143_ = l_Lean_Expr_getAppNumArgs(v_e_118_);
v___x_144_ = lean_unsigned_to_nat(1u);
v___x_145_ = lean_nat_dec_eq(v___x_143_, v___x_144_);
lean_dec(v___x_143_);
if (v___x_145_ == 0)
{
goto v___jp_130_;
}
else
{
lean_object* v___x_146_; 
lean_dec(v_fName_123_);
v___x_146_ = l_Lean_Expr_appArg_x21(v_e_118_);
lean_dec_ref(v_e_118_);
v_e_118_ = v___x_146_;
goto _start;
}
}
v___jp_124_:
{
lean_object* v___x_125_; uint8_t v___x_126_; 
v___x_125_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__2));
v___x_126_ = lean_name_eq(v_fName_123_, v___x_125_);
lean_dec(v_fName_123_);
if (v___x_126_ == 0)
{
lean_dec_ref(v_e_118_);
return v___x_119_;
}
else
{
lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_127_ = l_Lean_Expr_getAppNumArgs(v_e_118_);
lean_dec_ref(v_e_118_);
v___x_128_ = lean_unsigned_to_nat(0u);
v___x_129_ = lean_nat_dec_eq(v___x_127_, v___x_128_);
lean_dec(v___x_127_);
if (v___x_129_ == 0)
{
return v___x_129_;
}
else
{
return v___x_120_;
}
}
}
v___jp_130_:
{
lean_object* v___x_131_; uint8_t v___x_132_; 
v___x_131_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__5));
v___x_132_ = lean_name_eq(v_fName_123_, v___x_131_);
if (v___x_132_ == 0)
{
goto v___jp_124_;
}
else
{
lean_object* v___x_133_; lean_object* v___x_134_; uint8_t v___x_135_; 
v___x_133_ = l_Lean_Expr_getAppNumArgs(v_e_118_);
v___x_134_ = lean_unsigned_to_nat(3u);
v___x_135_ = lean_nat_dec_eq(v___x_133_, v___x_134_);
if (v___x_135_ == 0)
{
lean_dec(v___x_133_);
goto v___jp_124_;
}
else
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
lean_dec(v_fName_123_);
v___x_136_ = lean_unsigned_to_nat(1u);
v___x_137_ = lean_nat_sub(v___x_133_, v___x_136_);
lean_dec(v___x_133_);
v___x_138_ = lean_nat_sub(v___x_137_, v___x_136_);
lean_dec(v___x_137_);
v___x_139_ = l_Lean_Expr_getRevArg_x21(v_e_118_, v___x_138_);
lean_dec_ref(v_e_118_);
v_e_118_ = v___x_139_;
goto _start;
}
}
}
}
else
{
lean_dec_ref(v_f_121_);
lean_dec_ref(v_e_118_);
return v___x_119_;
}
}
}
else
{
lean_dec_ref(v_e_118_);
return v___x_120_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___boxed(lean_object* v_e_148_){
_start:
{
uint8_t v_res_149_; lean_object* v_r_150_; 
v_res_149_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral(v_e_148_);
v_r_150_ = lean_box(v_res_149_);
return v_r_150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f_loop(lean_object* v_e_153_){
_start:
{
uint8_t v___y_155_; lean_object* v_f_158_; 
v_f_158_ = l_Lean_Expr_getAppFn(v_e_153_);
switch(lean_obj_tag(v_f_158_))
{
case 9:
{
lean_object* v_a_159_; 
lean_dec_ref(v_e_153_);
v_a_159_ = lean_ctor_get(v_f_158_, 0);
lean_inc_ref(v_a_159_);
lean_dec_ref_known(v_f_158_, 1);
if (lean_obj_tag(v_a_159_) == 0)
{
lean_object* v_val_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_167_; 
v_val_160_ = lean_ctor_get(v_a_159_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v_a_159_);
if (v_isSharedCheck_167_ == 0)
{
v___x_162_ = v_a_159_;
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_val_160_);
lean_dec(v_a_159_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_165_; 
if (v_isShared_163_ == 0)
{
lean_ctor_set_tag(v___x_162_, 1);
v___x_165_ = v___x_162_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_val_160_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
else
{
lean_object* v___x_168_; 
lean_dec_ref(v_a_159_);
v___x_168_ = lean_box(0);
return v___x_168_;
}
}
case 4:
{
lean_object* v_declName_169_; uint8_t v___y_171_; uint8_t v___y_184_; lean_object* v___x_202_; uint8_t v___x_203_; 
v_declName_169_ = lean_ctor_get(v_f_158_, 0);
lean_inc(v_declName_169_);
lean_dec_ref_known(v_f_158_, 2);
v___x_202_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__7));
v___x_203_ = lean_name_eq(v_declName_169_, v___x_202_);
if (v___x_203_ == 0)
{
v___y_184_ = v___x_203_;
goto v___jp_183_;
}
else
{
lean_object* v___x_204_; lean_object* v___x_205_; uint8_t v___x_206_; 
v___x_204_ = l_Lean_Expr_getAppNumArgs(v_e_153_);
v___x_205_ = lean_unsigned_to_nat(1u);
v___x_206_ = lean_nat_dec_eq(v___x_204_, v___x_205_);
lean_dec(v___x_204_);
v___y_184_ = v___x_206_;
goto v___jp_183_;
}
v___jp_170_:
{
if (v___y_171_ == 0)
{
lean_object* v___x_172_; uint8_t v___x_173_; 
v___x_172_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__2));
v___x_173_ = lean_name_eq(v_declName_169_, v___x_172_);
lean_dec(v_declName_169_);
if (v___x_173_ == 0)
{
lean_dec_ref(v_e_153_);
v___y_155_ = v___x_173_;
goto v___jp_154_;
}
else
{
lean_object* v___x_174_; lean_object* v___x_175_; uint8_t v___x_176_; 
v___x_174_ = l_Lean_Expr_getAppNumArgs(v_e_153_);
lean_dec_ref(v_e_153_);
v___x_175_ = lean_unsigned_to_nat(0u);
v___x_176_ = lean_nat_dec_eq(v___x_174_, v___x_175_);
lean_dec(v___x_174_);
v___y_155_ = v___x_176_;
goto v___jp_154_;
}
}
else
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
lean_dec(v_declName_169_);
v___x_177_ = lean_unsigned_to_nat(1u);
v___x_178_ = l_Lean_Expr_getAppNumArgs(v_e_153_);
v___x_179_ = lean_nat_sub(v___x_178_, v___x_177_);
lean_dec(v___x_178_);
v___x_180_ = lean_nat_sub(v___x_179_, v___x_177_);
lean_dec(v___x_179_);
v___x_181_ = l_Lean_Expr_getRevArg_x21(v_e_153_, v___x_180_);
lean_dec_ref(v_e_153_);
v_e_153_ = v___x_181_;
goto _start;
}
}
v___jp_183_:
{
if (v___y_184_ == 0)
{
lean_object* v___x_185_; uint8_t v___x_186_; 
v___x_185_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__5));
v___x_186_ = lean_name_eq(v_declName_169_, v___x_185_);
if (v___x_186_ == 0)
{
v___y_171_ = v___x_186_;
goto v___jp_170_;
}
else
{
lean_object* v___x_187_; lean_object* v___x_188_; uint8_t v___x_189_; 
v___x_187_ = l_Lean_Expr_getAppNumArgs(v_e_153_);
v___x_188_ = lean_unsigned_to_nat(3u);
v___x_189_ = lean_nat_dec_eq(v___x_187_, v___x_188_);
lean_dec(v___x_187_);
v___y_171_ = v___x_189_;
goto v___jp_170_;
}
}
else
{
lean_object* v___x_190_; lean_object* v___x_191_; 
lean_dec(v_declName_169_);
v___x_190_ = l_Lean_Expr_appArg_x21(v_e_153_);
lean_dec_ref(v_e_153_);
v___x_191_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f_loop(v___x_190_);
if (lean_obj_tag(v___x_191_) == 0)
{
return v___x_191_;
}
else
{
lean_object* v_val_192_; lean_object* v___x_194_; uint8_t v_isShared_195_; uint8_t v_isSharedCheck_201_; 
v_val_192_ = lean_ctor_get(v___x_191_, 0);
v_isSharedCheck_201_ = !lean_is_exclusive(v___x_191_);
if (v_isSharedCheck_201_ == 0)
{
v___x_194_ = v___x_191_;
v_isShared_195_ = v_isSharedCheck_201_;
goto v_resetjp_193_;
}
else
{
lean_inc(v_val_192_);
lean_dec(v___x_191_);
v___x_194_ = lean_box(0);
v_isShared_195_ = v_isSharedCheck_201_;
goto v_resetjp_193_;
}
v_resetjp_193_:
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_199_; 
v___x_196_ = lean_unsigned_to_nat(1u);
v___x_197_ = lean_nat_add(v_val_192_, v___x_196_);
lean_dec(v_val_192_);
if (v_isShared_195_ == 0)
{
lean_ctor_set(v___x_194_, 0, v___x_197_);
v___x_199_ = v___x_194_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v___x_197_);
v___x_199_ = v_reuseFailAlloc_200_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
return v___x_199_;
}
}
}
}
}
}
default: 
{
lean_object* v___x_207_; 
lean_dec_ref(v_f_158_);
lean_dec_ref(v_e_153_);
v___x_207_ = lean_box(0);
return v___x_207_;
}
}
v___jp_154_:
{
if (v___y_155_ == 0)
{
lean_object* v___x_156_; 
v___x_156_ = lean_box(0);
return v___x_156_;
}
else
{
lean_object* v___x_157_; 
v___x_157_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f_loop___closed__0));
return v___x_157_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f(lean_object* v_e_208_){
_start:
{
uint8_t v___x_209_; 
lean_inc_ref(v_e_208_);
v___x_209_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral(v_e_208_);
if (v___x_209_ == 0)
{
lean_object* v___x_210_; 
lean_dec_ref(v_e_208_);
v___x_210_ = lean_box(0);
return v___x_210_;
}
else
{
lean_object* v___x_211_; 
v___x_211_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f_loop(v_e_208_);
if (lean_obj_tag(v___x_211_) == 1)
{
lean_object* v_val_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_220_; 
v_val_212_ = lean_ctor_get(v___x_211_, 0);
v_isSharedCheck_220_ = !lean_is_exclusive(v___x_211_);
if (v_isSharedCheck_220_ == 0)
{
v___x_214_ = v___x_211_;
v_isShared_215_ = v_isSharedCheck_220_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_val_212_);
lean_dec(v___x_211_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_220_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v___x_216_; lean_object* v___x_218_; 
v___x_216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_216_, 0, v_val_212_);
if (v_isShared_215_ == 0)
{
lean_ctor_set(v___x_214_, 0, v___x_216_);
v___x_218_ = v___x_214_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v___x_216_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
}
else
{
lean_object* v___x_221_; 
lean_dec(v___x_211_);
v___x_221_ = lean_box(0);
return v___x_221_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType(lean_object* v_e_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_, lean_object* v_a_228_){
_start:
{
lean_object* v___x_230_; 
lean_inc(v_a_228_);
lean_inc_ref(v_a_227_);
lean_inc(v_a_226_);
lean_inc_ref(v_a_225_);
v___x_230_ = lean_whnf(v_e_224_, v_a_225_, v_a_226_, v_a_227_, v_a_228_);
if (lean_obj_tag(v___x_230_) == 0)
{
lean_object* v_a_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_241_; 
v_a_231_ = lean_ctor_get(v___x_230_, 0);
v_isSharedCheck_241_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_241_ == 0)
{
v___x_233_ = v___x_230_;
v_isShared_234_ = v_isSharedCheck_241_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_a_231_);
lean_dec(v___x_230_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_241_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_235_; uint8_t v___x_236_; lean_object* v___x_237_; lean_object* v___x_239_; 
v___x_235_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType___closed__0));
v___x_236_ = l_Lean_Expr_isConstOf(v_a_231_, v___x_235_);
lean_dec(v_a_231_);
v___x_237_ = lean_box(v___x_236_);
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 0, v___x_237_);
v___x_239_ = v___x_233_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v___x_237_);
v___x_239_ = v_reuseFailAlloc_240_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
return v___x_239_;
}
}
}
else
{
lean_object* v_a_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_249_; 
v_a_242_ = lean_ctor_get(v___x_230_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_249_ == 0)
{
v___x_244_ = v___x_230_;
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_a_242_);
lean_dec(v___x_230_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v___x_247_; 
if (v_isShared_245_ == 0)
{
v___x_247_ = v___x_244_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v_a_242_);
v___x_247_ = v_reuseFailAlloc_248_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
return v___x_247_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType___boxed(lean_object* v_e_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_, lean_object* v_a_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType(v_e_250_, v_a_251_, v_a_252_, v_a_253_, v_a_254_);
lean_dec(v_a_254_);
lean_dec_ref(v_a_253_);
lean_dec(v_a_252_);
lean_dec_ref(v_a_251_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset(lean_object* v_fName_270_, lean_object* v_e_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_){
_start:
{
uint8_t v___y_278_; uint8_t v___y_308_; uint8_t v___y_333_; lean_object* v___x_343_; uint8_t v___x_344_; 
v___x_343_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__6));
v___x_344_ = lean_name_eq(v_fName_270_, v___x_343_);
if (v___x_344_ == 0)
{
v___y_333_ = v___x_344_;
goto v___jp_332_;
}
else
{
lean_object* v___x_345_; lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_345_ = l_Lean_Expr_getAppNumArgs(v_e_271_);
v___x_346_ = lean_unsigned_to_nat(2u);
v___x_347_ = lean_nat_dec_eq(v___x_345_, v___x_346_);
lean_dec(v___x_345_);
v___y_333_ = v___x_347_;
goto v___jp_332_;
}
v___jp_277_:
{
if (v___y_278_ == 0)
{
lean_object* v___x_279_; uint8_t v___x_280_; 
v___x_279_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral___closed__7));
v___x_280_ = lean_name_eq(v_fName_270_, v___x_279_);
if (v___x_280_ == 0)
{
lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_281_ = lean_box(v___x_280_);
v___x_282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
return v___x_282_;
}
else
{
lean_object* v___x_283_; lean_object* v___x_284_; uint8_t v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_283_ = l_Lean_Expr_getAppNumArgs(v_e_271_);
v___x_284_ = lean_unsigned_to_nat(1u);
v___x_285_ = lean_nat_dec_eq(v___x_283_, v___x_284_);
lean_dec(v___x_283_);
v___x_286_ = lean_box(v___x_285_);
v___x_287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
return v___x_287_;
}
}
else
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_288_ = lean_unsigned_to_nat(1u);
v___x_289_ = l_Lean_Expr_getAppNumArgs(v_e_271_);
v___x_290_ = lean_nat_sub(v___x_289_, v___x_288_);
lean_dec(v___x_289_);
v___x_291_ = lean_nat_sub(v___x_290_, v___x_288_);
lean_dec(v___x_290_);
v___x_292_ = l_Lean_Expr_getRevArg_x21(v_e_271_, v___x_291_);
v___x_293_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType(v___x_292_, v_a_272_, v_a_273_, v_a_274_, v_a_275_);
if (lean_obj_tag(v___x_293_) == 0)
{
lean_object* v_a_294_; uint8_t v___x_295_; 
v_a_294_ = lean_ctor_get(v___x_293_, 0);
lean_inc(v_a_294_);
v___x_295_ = lean_unbox(v_a_294_);
lean_dec(v_a_294_);
if (v___x_295_ == 0)
{
return v___x_293_;
}
else
{
lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_305_; 
v_isSharedCheck_305_ = !lean_is_exclusive(v___x_293_);
if (v_isSharedCheck_305_ == 0)
{
lean_object* v_unused_306_; 
v_unused_306_ = lean_ctor_get(v___x_293_, 0);
lean_dec(v_unused_306_);
v___x_297_ = v___x_293_;
v_isShared_298_ = v_isSharedCheck_305_;
goto v_resetjp_296_;
}
else
{
lean_dec(v___x_293_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_305_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_299_; uint8_t v___x_300_; lean_object* v___x_301_; lean_object* v___x_303_; 
v___x_299_ = l_Lean_Expr_appArg_x21(v_e_271_);
v___x_300_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral(v___x_299_);
v___x_301_ = lean_box(v___x_300_);
if (v_isShared_298_ == 0)
{
lean_ctor_set(v___x_297_, 0, v___x_301_);
v___x_303_ = v___x_297_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v___x_301_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
}
else
{
return v___x_293_;
}
}
}
v___jp_307_:
{
if (v___y_308_ == 0)
{
lean_object* v___x_309_; uint8_t v___x_310_; 
v___x_309_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__2));
v___x_310_ = lean_name_eq(v_fName_270_, v___x_309_);
if (v___x_310_ == 0)
{
v___y_278_ = v___x_310_;
goto v___jp_277_;
}
else
{
lean_object* v___x_311_; lean_object* v___x_312_; uint8_t v___x_313_; 
v___x_311_ = l_Lean_Expr_getAppNumArgs(v_e_271_);
v___x_312_ = lean_unsigned_to_nat(6u);
v___x_313_ = lean_nat_dec_eq(v___x_311_, v___x_312_);
lean_dec(v___x_311_);
v___y_278_ = v___x_313_;
goto v___jp_277_;
}
}
else
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_314_ = l_Lean_Expr_getAppNumArgs(v_e_271_);
v___x_315_ = lean_unsigned_to_nat(1u);
v___x_316_ = lean_nat_sub(v___x_314_, v___x_315_);
lean_dec(v___x_314_);
v___x_317_ = l_Lean_Expr_getRevArg_x21(v_e_271_, v___x_316_);
v___x_318_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNatType(v___x_317_, v_a_272_, v_a_273_, v_a_274_, v_a_275_);
if (lean_obj_tag(v___x_318_) == 0)
{
lean_object* v_a_319_; uint8_t v___x_320_; 
v_a_319_ = lean_ctor_get(v___x_318_, 0);
lean_inc(v_a_319_);
v___x_320_ = lean_unbox(v_a_319_);
lean_dec(v_a_319_);
if (v___x_320_ == 0)
{
return v___x_318_;
}
else
{
lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_330_; 
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_318_);
if (v_isSharedCheck_330_ == 0)
{
lean_object* v_unused_331_; 
v_unused_331_ = lean_ctor_get(v___x_318_, 0);
lean_dec(v_unused_331_);
v___x_322_ = v___x_318_;
v_isShared_323_ = v_isSharedCheck_330_;
goto v_resetjp_321_;
}
else
{
lean_dec(v___x_318_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_330_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_324_; uint8_t v___x_325_; lean_object* v___x_326_; lean_object* v___x_328_; 
v___x_324_ = l_Lean_Expr_appArg_x21(v_e_271_);
v___x_325_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral(v___x_324_);
v___x_326_ = lean_box(v___x_325_);
if (v_isShared_323_ == 0)
{
lean_ctor_set(v___x_322_, 0, v___x_326_);
v___x_328_ = v___x_322_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v___x_326_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
return v___x_328_;
}
}
}
}
else
{
return v___x_318_;
}
}
}
v___jp_332_:
{
if (v___y_333_ == 0)
{
lean_object* v___x_334_; uint8_t v___x_335_; 
v___x_334_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___closed__5));
v___x_335_ = lean_name_eq(v_fName_270_, v___x_334_);
if (v___x_335_ == 0)
{
v___y_308_ = v___x_335_;
goto v___jp_307_;
}
else
{
lean_object* v___x_336_; lean_object* v___x_337_; uint8_t v___x_338_; 
v___x_336_ = l_Lean_Expr_getAppNumArgs(v_e_271_);
v___x_337_ = lean_unsigned_to_nat(4u);
v___x_338_ = lean_nat_dec_eq(v___x_336_, v___x_337_);
lean_dec(v___x_336_);
v___y_308_ = v___x_338_;
goto v___jp_307_;
}
}
else
{
lean_object* v___x_339_; uint8_t v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_339_ = l_Lean_Expr_appArg_x21(v_e_271_);
v___x_340_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isNumeral(v___x_339_);
v___x_341_ = lean_box(v___x_340_);
v___x_342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
return v___x_342_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset___boxed(lean_object* v_fName_348_, lean_object* v_e_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset(v_fName_348_, v_e_349_, v_a_350_, v_a_351_, v_a_352_, v_a_353_);
lean_dec(v_a_353_);
lean_dec_ref(v_a_352_);
lean_dec(v_a_351_);
lean_dec_ref(v_a_350_);
lean_dec_ref(v_e_349_);
lean_dec(v_fName_348_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_shouldAddAsStar(lean_object* v_fName_356_, lean_object* v_e_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset(v_fName_356_, v_e_357_, v_a_358_, v_a_359_, v_a_360_, v_a_361_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_shouldAddAsStar___boxed(lean_object* v_fName_364_, lean_object* v_e_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_shouldAddAsStar(v_fName_364_, v_e_365_, v_a_366_, v_a_367_, v_a_368_, v_a_369_);
lean_dec(v_a_369_);
lean_dec_ref(v_a_368_);
lean_dec(v_a_367_);
lean_dec_ref(v_a_366_);
lean_dec_ref(v_e_365_);
lean_dec(v_fName_364_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_reduce(lean_object* v_e_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = l_Lean_Meta_whnfCore(v_e_372_, v_a_373_, v_a_374_, v_a_375_, v_a_376_);
if (lean_obj_tag(v___x_378_) == 0)
{
lean_object* v_a_379_; uint8_t v___x_380_; lean_object* v___x_381_; 
v_a_379_ = lean_ctor_get(v___x_378_, 0);
lean_inc_n(v_a_379_, 2);
lean_dec_ref_known(v___x_378_, 1);
v___x_380_ = 0;
v___x_381_ = l_Lean_Meta_unfoldDefinition_x3f(v_a_379_, v___x_380_, v_a_373_, v_a_374_, v_a_375_, v_a_376_);
if (lean_obj_tag(v___x_381_) == 0)
{
lean_object* v_a_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_394_; 
v_a_382_ = lean_ctor_get(v___x_381_, 0);
v_isSharedCheck_394_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_394_ == 0)
{
v___x_384_ = v___x_381_;
v_isShared_385_ = v_isSharedCheck_394_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_a_382_);
lean_dec(v___x_381_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_394_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
if (lean_obj_tag(v_a_382_) == 0)
{
lean_object* v___x_386_; 
lean_inc(v_a_379_);
v___x_386_ = l_Lean_Expr_etaExpandedStrict_x3f(v_a_379_);
if (lean_obj_tag(v___x_386_) == 0)
{
lean_object* v___x_388_; 
if (v_isShared_385_ == 0)
{
lean_ctor_set(v___x_384_, 0, v_a_379_);
v___x_388_ = v___x_384_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v_a_379_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
else
{
lean_object* v_val_390_; 
lean_del_object(v___x_384_);
lean_dec(v_a_379_);
v_val_390_ = lean_ctor_get(v___x_386_, 0);
lean_inc(v_val_390_);
lean_dec_ref_known(v___x_386_, 1);
v_e_372_ = v_val_390_;
goto _start;
}
}
else
{
lean_object* v_val_392_; 
lean_del_object(v___x_384_);
lean_dec(v_a_379_);
v_val_392_ = lean_ctor_get(v_a_382_, 0);
lean_inc(v_val_392_);
lean_dec_ref_known(v_a_382_, 1);
v_e_372_ = v_val_392_;
goto _start;
}
}
}
else
{
lean_object* v_a_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_402_; 
lean_dec(v_a_379_);
v_a_395_ = lean_ctor_get(v___x_381_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_402_ == 0)
{
v___x_397_ = v___x_381_;
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_a_395_);
lean_dec(v___x_381_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_400_; 
if (v_isShared_398_ == 0)
{
v___x_400_ = v___x_397_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_a_395_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
else
{
return v___x_378_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_reduce___boxed(lean_object* v_e_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Lean_Meta_DiscrTree_reduce(v_e_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_);
lean_dec(v_a_407_);
lean_dec_ref(v_a_406_);
lean_dec(v_a_405_);
lean_dec_ref(v_a_404_);
return v_res_409_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isBadKey(lean_object* v_fn_410_){
_start:
{
switch(lean_obj_tag(v_fn_410_))
{
case 9:
{
uint8_t v___x_411_; 
v___x_411_ = 0;
return v___x_411_;
}
case 4:
{
uint8_t v___x_412_; 
v___x_412_ = 0;
return v___x_412_;
}
case 1:
{
uint8_t v___x_413_; 
v___x_413_ = 0;
return v___x_413_;
}
case 11:
{
uint8_t v___x_414_; 
v___x_414_ = 0;
return v___x_414_;
}
case 7:
{
uint8_t v___x_415_; 
v___x_415_ = 0;
return v___x_415_;
}
default: 
{
uint8_t v___x_416_; 
v___x_416_ = 1;
return v___x_416_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isBadKey___boxed(lean_object* v_fn_417_){
_start:
{
uint8_t v_res_418_; lean_object* v_r_419_; 
v_res_418_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isBadKey(v_fn_417_);
lean_dec_ref(v_fn_417_);
v_r_419_ = lean_box(v_res_418_);
return v_r_419_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey_step(lean_object* v_e_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_){
_start:
{
lean_object* v___x_426_; 
v___x_426_ = l_Lean_Meta_whnfCore(v_e_420_, v_a_421_, v_a_422_, v_a_423_, v_a_424_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v_a_427_; uint8_t v___x_428_; lean_object* v___x_429_; 
v_a_427_ = lean_ctor_get(v___x_426_, 0);
lean_inc_n(v_a_427_, 2);
lean_dec_ref_known(v___x_426_, 1);
v___x_428_ = 0;
v___x_429_ = l_Lean_Meta_unfoldDefinition_x3f(v_a_427_, v___x_428_, v_a_421_, v_a_422_, v_a_423_, v_a_424_);
if (lean_obj_tag(v___x_429_) == 0)
{
lean_object* v_a_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_444_; 
v_a_430_ = lean_ctor_get(v___x_429_, 0);
v_isSharedCheck_444_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_444_ == 0)
{
v___x_432_ = v___x_429_;
v_isShared_433_ = v_isSharedCheck_444_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_a_430_);
lean_dec(v___x_429_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_444_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
if (lean_obj_tag(v_a_430_) == 0)
{
lean_object* v___x_435_; 
if (v_isShared_433_ == 0)
{
lean_ctor_set(v___x_432_, 0, v_a_427_);
v___x_435_ = v___x_432_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_a_427_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
else
{
lean_object* v_val_437_; lean_object* v___x_438_; uint8_t v___x_439_; 
v_val_437_ = lean_ctor_get(v_a_430_, 0);
lean_inc(v_val_437_);
lean_dec_ref_known(v_a_430_, 1);
v___x_438_ = l_Lean_Expr_getAppFn(v_val_437_);
v___x_439_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isBadKey(v___x_438_);
lean_dec_ref(v___x_438_);
if (v___x_439_ == 0)
{
lean_del_object(v___x_432_);
lean_dec(v_a_427_);
v_e_420_ = v_val_437_;
goto _start;
}
else
{
lean_object* v___x_442_; 
lean_dec(v_val_437_);
if (v_isShared_433_ == 0)
{
lean_ctor_set(v___x_432_, 0, v_a_427_);
v___x_442_ = v___x_432_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v_a_427_);
v___x_442_ = v_reuseFailAlloc_443_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
return v___x_442_;
}
}
}
}
}
else
{
lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_452_; 
lean_dec(v_a_427_);
v_a_445_ = lean_ctor_get(v___x_429_, 0);
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_452_ == 0)
{
v___x_447_ = v___x_429_;
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_429_);
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
else
{
return v___x_426_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey_step___boxed(lean_object* v_e_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_, lean_object* v_a_458_){
_start:
{
lean_object* v_res_459_; 
v_res_459_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey_step(v_e_453_, v_a_454_, v_a_455_, v_a_456_, v_a_457_);
lean_dec(v_a_457_);
lean_dec_ref(v_a_456_);
lean_dec(v_a_455_);
lean_dec_ref(v_a_454_);
return v_res_459_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey(lean_object* v_e_460_, lean_object* v_a_461_, lean_object* v_a_462_, lean_object* v_a_463_, lean_object* v_a_464_){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey_step(v_e_460_, v_a_461_, v_a_462_, v_a_463_, v_a_464_);
if (lean_obj_tag(v___x_466_) == 0)
{
lean_object* v_a_467_; lean_object* v___x_468_; 
v_a_467_ = lean_ctor_get(v___x_466_, 0);
lean_inc(v_a_467_);
v___x_468_ = l_Lean_Expr_etaExpandedStrict_x3f(v_a_467_);
if (lean_obj_tag(v___x_468_) == 0)
{
return v___x_466_;
}
else
{
lean_object* v_val_469_; 
lean_dec_ref_known(v___x_466_, 1);
v_val_469_ = lean_ctor_get(v___x_468_, 0);
lean_inc(v_val_469_);
lean_dec_ref_known(v___x_468_, 1);
v_e_460_ = v_val_469_;
goto _start;
}
}
else
{
return v___x_466_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey___boxed(lean_object* v_e_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey(v_e_471_, v_a_472_, v_a_473_, v_a_474_, v_a_475_);
lean_dec(v_a_475_);
lean_dec_ref(v_a_474_);
lean_dec(v_a_473_);
lean_dec_ref(v_a_472_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_reduceDT(lean_object* v_e_478_, uint8_t v_root_479_, lean_object* v_a_480_, lean_object* v_a_481_, lean_object* v_a_482_, lean_object* v_a_483_){
_start:
{
if (v_root_479_ == 0)
{
lean_object* v___x_485_; 
v___x_485_ = l_Lean_Meta_DiscrTree_reduce(v_e_478_, v_a_480_, v_a_481_, v_a_482_, v_a_483_);
return v___x_485_;
}
else
{
lean_object* v___x_486_; 
v___x_486_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_reduceUntilBadKey(v_e_478_, v_a_480_, v_a_481_, v_a_482_, v_a_483_);
return v___x_486_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_reduceDT___boxed(lean_object* v_e_487_, lean_object* v_root_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_){
_start:
{
uint8_t v_root_boxed_494_; lean_object* v_res_495_; 
v_root_boxed_494_ = lean_unbox(v_root_488_);
v_res_495_ = l_Lean_Meta_DiscrTree_reduceDT(v_e_487_, v_root_boxed_494_, v_a_489_, v_a_490_, v_a_491_, v_a_492_);
lean_dec(v_a_492_);
lean_dec_ref(v_a_491_);
lean_dec(v_a_490_);
lean_dec_ref(v_a_489_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushWildcards(lean_object* v_n_496_, lean_object* v_todo_497_){
_start:
{
lean_object* v_zero_498_; uint8_t v_isZero_499_; 
v_zero_498_ = lean_unsigned_to_nat(0u);
v_isZero_499_ = lean_nat_dec_eq(v_n_496_, v_zero_498_);
if (v_isZero_499_ == 1)
{
lean_dec(v_n_496_);
return v_todo_497_;
}
else
{
lean_object* v_one_500_; lean_object* v_n_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v_one_500_ = lean_unsigned_to_nat(1u);
v_n_501_ = lean_nat_sub(v_n_496_, v_one_500_);
lean_dec(v_n_496_);
v___x_502_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar;
v___x_503_ = lean_array_push(v_todo_497_, v___x_502_);
v_n_496_ = v_n_501_;
v_todo_497_ = v___x_503_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgs(uint8_t v_root_505_, lean_object* v_todo_506_, lean_object* v_e_507_, uint8_t v_noIndexAtArgs_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_){
_start:
{
lean_object* v_v_515_; lean_object* v___y_520_; lean_object* v_todo_521_; uint8_t v___x_524_; 
v___x_524_ = l_Lean_Meta_DiscrTree_hasNoindexAnnotation(v_e_507_);
if (v___x_524_ == 0)
{
lean_object* v___x_525_; 
v___x_525_ = l_Lean_Meta_DiscrTree_reduceDT(v_e_507_, v_root_505_, v_a_509_, v_a_510_, v_a_511_, v_a_512_);
if (lean_obj_tag(v___x_525_) == 0)
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_654_; 
v_a_526_ = lean_ctor_get(v___x_525_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_654_ == 0)
{
v___x_528_ = v___x_525_;
v_isShared_529_ = v_isSharedCheck_654_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_525_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_654_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_530_; lean_object* v_k_532_; lean_object* v_nargs_533_; lean_object* v_todo_534_; lean_object* v___y_535_; lean_object* v___y_536_; lean_object* v___y_537_; lean_object* v___y_538_; 
v___x_530_ = l_Lean_Expr_getAppFn(v_a_526_);
switch(lean_obj_tag(v___x_530_))
{
case 9:
{
lean_object* v_a_563_; 
lean_del_object(v___x_528_);
lean_dec(v_a_526_);
v_a_563_ = lean_ctor_get(v___x_530_, 0);
lean_inc_ref(v_a_563_);
lean_dec_ref_known(v___x_530_, 1);
v_v_515_ = v_a_563_;
goto v___jp_514_;
}
case 4:
{
lean_object* v_declName_564_; lean_object* v___y_566_; lean_object* v___y_567_; lean_object* v___y_568_; lean_object* v___y_569_; 
lean_del_object(v___x_528_);
v_declName_564_ = lean_ctor_get(v___x_530_, 0);
lean_inc(v_declName_564_);
if (v_root_505_ == 0)
{
lean_object* v___x_572_; 
lean_inc(v_a_526_);
v___x_572_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f(v_a_526_);
if (lean_obj_tag(v___x_572_) == 1)
{
lean_object* v_val_573_; 
lean_dec(v_declName_564_);
lean_dec_ref_known(v___x_530_, 2);
lean_dec(v_a_526_);
v_val_573_ = lean_ctor_get(v___x_572_, 0);
lean_inc(v_val_573_);
lean_dec_ref_known(v___x_572_, 1);
v_v_515_ = v_val_573_;
goto v___jp_514_;
}
else
{
lean_object* v___x_574_; 
lean_dec(v___x_572_);
v___x_574_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_isOffset(v_declName_564_, v_a_526_, v_a_509_, v_a_510_, v_a_511_, v_a_512_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_a_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_585_; 
v_a_575_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_585_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_585_ == 0)
{
v___x_577_ = v___x_574_;
v_isShared_578_ = v_isSharedCheck_585_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_a_575_);
lean_dec(v___x_574_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_585_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
uint8_t v___x_579_; 
v___x_579_ = lean_unbox(v_a_575_);
lean_dec(v_a_575_);
if (v___x_579_ == 0)
{
lean_del_object(v___x_577_);
v___y_566_ = v_a_509_;
v___y_567_ = v_a_510_;
v___y_568_ = v_a_511_;
v___y_569_ = v_a_512_;
goto v___jp_565_;
}
else
{
lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_583_; 
lean_dec(v_declName_564_);
lean_dec_ref_known(v___x_530_, 2);
lean_dec(v_a_526_);
v___x_580_ = lean_box(0);
v___x_581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
lean_ctor_set(v___x_581_, 1, v_todo_506_);
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 0, v___x_581_);
v___x_583_ = v___x_577_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v___x_581_);
v___x_583_ = v_reuseFailAlloc_584_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
return v___x_583_;
}
}
}
}
else
{
lean_object* v_a_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_593_; 
lean_dec(v_declName_564_);
lean_dec_ref_known(v___x_530_, 2);
lean_dec(v_a_526_);
lean_dec_ref(v_todo_506_);
v_a_586_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_593_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_593_ == 0)
{
v___x_588_ = v___x_574_;
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_a_586_);
lean_dec(v___x_574_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_591_; 
if (v_isShared_589_ == 0)
{
v___x_591_ = v___x_588_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_a_586_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
}
}
}
else
{
v___y_566_ = v_a_509_;
v___y_567_ = v_a_510_;
v___y_568_ = v_a_511_;
v___y_569_ = v_a_512_;
goto v___jp_565_;
}
v___jp_565_:
{
lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_570_ = l_Lean_Expr_getAppNumArgs(v_a_526_);
lean_inc(v___x_570_);
v___x_571_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_571_, 0, v_declName_564_);
lean_ctor_set(v___x_571_, 1, v___x_570_);
v_k_532_ = v___x_571_;
v_nargs_533_ = v___x_570_;
v_todo_534_ = v_todo_506_;
v___y_535_ = v___y_566_;
v___y_536_ = v___y_567_;
v___y_537_ = v___y_568_;
v___y_538_ = v___y_569_;
goto v___jp_531_;
}
}
case 11:
{
lean_object* v_typeName_594_; lean_object* v_idx_595_; lean_object* v_struct_596_; lean_object* v___x_597_; lean_object* v___y_599_; lean_object* v_env_603_; uint8_t v___x_604_; 
lean_del_object(v___x_528_);
v_typeName_594_ = lean_ctor_get(v___x_530_, 0);
lean_inc(v_typeName_594_);
v_idx_595_ = lean_ctor_get(v___x_530_, 1);
lean_inc(v_idx_595_);
v_struct_596_ = lean_ctor_get(v___x_530_, 2);
lean_inc_ref(v_struct_596_);
v___x_597_ = lean_st_ref_get(v_a_512_);
v_env_603_ = lean_ctor_get(v___x_597_, 0);
lean_inc_ref(v_env_603_);
lean_dec(v___x_597_);
v___x_604_ = l_Lean_isClass(v_env_603_, v_typeName_594_);
if (v___x_604_ == 0)
{
v___y_599_ = v_struct_596_;
goto v___jp_598_;
}
else
{
lean_object* v___x_605_; 
v___x_605_ = l_Lean_Meta_DiscrTree_mkNoindexAnnotation(v_struct_596_);
v___y_599_ = v___x_605_;
goto v___jp_598_;
}
v___jp_598_:
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_600_ = l_Lean_Expr_getAppNumArgs(v_a_526_);
lean_inc(v___x_600_);
v___x_601_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v___x_601_, 0, v_typeName_594_);
lean_ctor_set(v___x_601_, 1, v_idx_595_);
lean_ctor_set(v___x_601_, 2, v___x_600_);
v___x_602_ = lean_array_push(v_todo_506_, v___y_599_);
v_k_532_ = v___x_601_;
v_nargs_533_ = v___x_600_;
v_todo_534_ = v___x_602_;
v___y_535_ = v_a_509_;
v___y_536_ = v_a_510_;
v___y_537_ = v_a_511_;
v___y_538_ = v_a_512_;
goto v___jp_531_;
}
}
case 1:
{
lean_object* v_fvarId_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
lean_del_object(v___x_528_);
v_fvarId_606_ = lean_ctor_get(v___x_530_, 0);
lean_inc(v_fvarId_606_);
v___x_607_ = l_Lean_Expr_getAppNumArgs(v_a_526_);
lean_inc(v___x_607_);
v___x_608_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_608_, 0, v_fvarId_606_);
lean_ctor_set(v___x_608_, 1, v___x_607_);
v_k_532_ = v___x_608_;
v_nargs_533_ = v___x_607_;
v_todo_534_ = v_todo_506_;
v___y_535_ = v_a_509_;
v___y_536_ = v_a_510_;
v___y_537_ = v_a_511_;
v___y_538_ = v_a_512_;
goto v___jp_531_;
}
case 2:
{
lean_object* v_mvarId_609_; lean_object* v___x_610_; uint8_t v___x_611_; 
lean_dec(v_a_526_);
v_mvarId_609_ = lean_ctor_get(v___x_530_, 0);
lean_inc(v_mvarId_609_);
lean_dec_ref_known(v___x_530_, 1);
v___x_610_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpMVarId));
v___x_611_ = l_Lean_instBEqMVarId_beq(v_mvarId_609_, v___x_610_);
if (v___x_611_ == 0)
{
lean_object* v___x_612_; 
lean_del_object(v___x_528_);
v___x_612_ = l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(v_mvarId_609_, v_a_509_, v_a_510_, v_a_511_, v_a_512_);
if (lean_obj_tag(v___x_612_) == 0)
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_628_; 
v_a_613_ = lean_ctor_get(v___x_612_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_612_);
if (v_isSharedCheck_628_ == 0)
{
v___x_615_ = v___x_612_;
v_isShared_616_ = v_isSharedCheck_628_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_612_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_628_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
uint8_t v___x_617_; 
v___x_617_ = lean_unbox(v_a_613_);
lean_dec(v_a_613_);
if (v___x_617_ == 0)
{
lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_621_; 
v___x_618_ = lean_box(0);
v___x_619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
lean_ctor_set(v___x_619_, 1, v_todo_506_);
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 0, v___x_619_);
v___x_621_ = v___x_615_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v___x_619_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
else
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_626_; 
v___x_623_ = lean_box(1);
v___x_624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_624_, 0, v___x_623_);
lean_ctor_set(v___x_624_, 1, v_todo_506_);
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 0, v___x_624_);
v___x_626_ = v___x_615_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v___x_624_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
}
else
{
lean_object* v_a_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_636_; 
lean_dec_ref(v_todo_506_);
v_a_629_ = lean_ctor_get(v___x_612_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_612_);
if (v_isSharedCheck_636_ == 0)
{
v___x_631_ = v___x_612_;
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_a_629_);
lean_dec(v___x_612_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___x_634_; 
if (v_isShared_632_ == 0)
{
v___x_634_ = v___x_631_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v_a_629_);
v___x_634_ = v_reuseFailAlloc_635_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
return v___x_634_;
}
}
}
}
else
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_640_; 
lean_dec(v_mvarId_609_);
v___x_637_ = lean_box(0);
v___x_638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_637_);
lean_ctor_set(v___x_638_, 1, v_todo_506_);
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 0, v___x_638_);
v___x_640_ = v___x_528_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v___x_638_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
case 7:
{
lean_object* v_binderType_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_647_; 
lean_dec(v_a_526_);
v_binderType_642_ = lean_ctor_get(v___x_530_, 1);
lean_inc_ref(v_binderType_642_);
lean_dec_ref_known(v___x_530_, 3);
v___x_643_ = lean_box(5);
v___x_644_ = lean_array_push(v_todo_506_, v_binderType_642_);
v___x_645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_645_, 0, v___x_643_);
lean_ctor_set(v___x_645_, 1, v___x_644_);
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 0, v___x_645_);
v___x_647_ = v___x_528_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v___x_645_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
default: 
{
lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_652_; 
lean_dec_ref(v___x_530_);
lean_dec(v_a_526_);
v___x_649_ = lean_box(1);
v___x_650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_650_, 0, v___x_649_);
lean_ctor_set(v___x_650_, 1, v_todo_506_);
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 0, v___x_650_);
v___x_652_ = v___x_528_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v___x_650_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
v___jp_531_:
{
lean_object* v___x_539_; 
lean_inc(v_nargs_533_);
v___x_539_ = l_Lean_Meta_getFunInfoNArgs(v___x_530_, v_nargs_533_, v___y_535_, v___y_536_, v___y_537_, v___y_538_);
if (lean_obj_tag(v___x_539_) == 0)
{
if (v_noIndexAtArgs_508_ == 0)
{
lean_object* v_a_540_; lean_object* v_paramInfo_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v_a_540_ = lean_ctor_get(v___x_539_, 0);
lean_inc(v_a_540_);
lean_dec_ref_known(v___x_539_, 1);
v_paramInfo_541_ = lean_ctor_get(v_a_540_, 0);
lean_inc_ref(v_paramInfo_541_);
lean_dec(v_a_540_);
v___x_542_ = lean_unsigned_to_nat(1u);
v___x_543_ = lean_nat_sub(v_nargs_533_, v___x_542_);
lean_dec(v_nargs_533_);
v___x_544_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgsAux(v_paramInfo_541_, v___x_543_, v_a_526_, v_todo_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_);
lean_dec_ref(v_paramInfo_541_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v_a_545_; 
v_a_545_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_a_545_);
lean_dec_ref_known(v___x_544_, 1);
v___y_520_ = v_k_532_;
v_todo_521_ = v_a_545_;
goto v___jp_519_;
}
else
{
lean_object* v_a_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_553_; 
lean_dec(v_k_532_);
v_a_546_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_553_ == 0)
{
v___x_548_ = v___x_544_;
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_a_546_);
lean_dec(v___x_544_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v___x_551_; 
if (v_isShared_549_ == 0)
{
v___x_551_ = v___x_548_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v_a_546_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
return v___x_551_;
}
}
}
}
else
{
lean_object* v___x_554_; 
lean_dec_ref_known(v___x_539_, 1);
lean_dec(v_a_526_);
v___x_554_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushWildcards(v_nargs_533_, v_todo_534_);
v___y_520_ = v_k_532_;
v_todo_521_ = v___x_554_;
goto v___jp_519_;
}
}
else
{
lean_object* v_a_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_562_; 
lean_dec_ref(v_todo_534_);
lean_dec(v_nargs_533_);
lean_dec(v_k_532_);
lean_dec(v_a_526_);
v_a_555_ = lean_ctor_get(v___x_539_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_562_ == 0)
{
v___x_557_ = v___x_539_;
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_a_555_);
lean_dec(v___x_539_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_562_;
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
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v_a_555_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
}
}
}
}
else
{
lean_object* v_a_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_662_; 
lean_dec_ref(v_todo_506_);
v_a_655_ = lean_ctor_get(v___x_525_, 0);
v_isSharedCheck_662_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_662_ == 0)
{
v___x_657_ = v___x_525_;
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_a_655_);
lean_dec(v___x_525_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_660_; 
if (v_isShared_658_ == 0)
{
v___x_660_ = v___x_657_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_a_655_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
}
else
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
lean_dec_ref(v_e_507_);
v___x_663_ = lean_box(0);
v___x_664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_664_, 0, v___x_663_);
lean_ctor_set(v___x_664_, 1, v_todo_506_);
v___x_665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_665_, 0, v___x_664_);
return v___x_665_;
}
v___jp_514_:
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_516_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_516_, 0, v_v_515_);
v___x_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_516_);
lean_ctor_set(v___x_517_, 1, v_todo_506_);
v___x_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_518_, 0, v___x_517_);
return v___x_518_;
}
v___jp_519_:
{
lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_522_, 0, v___y_520_);
lean_ctor_set(v___x_522_, 1, v_todo_521_);
v___x_523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_523_, 0, v___x_522_);
return v___x_523_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgs___boxed(lean_object* v_root_666_, lean_object* v_todo_667_, lean_object* v_e_668_, lean_object* v_noIndexAtArgs_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_){
_start:
{
uint8_t v_root_boxed_675_; uint8_t v_noIndexAtArgs_boxed_676_; lean_object* v_res_677_; 
v_root_boxed_675_ = lean_unbox(v_root_666_);
v_noIndexAtArgs_boxed_676_ = lean_unbox(v_noIndexAtArgs_669_);
v_res_677_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgs(v_root_boxed_675_, v_todo_667_, v_e_668_, v_noIndexAtArgs_boxed_676_, v_a_670_, v_a_671_, v_a_672_, v_a_673_);
lean_dec(v_a_673_);
lean_dec_ref(v_a_672_);
lean_dec(v_a_671_);
lean_dec_ref(v_a_670_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_mkPathAux(uint8_t v_root_678_, lean_object* v_todo_679_, lean_object* v_keys_680_, uint8_t v_noIndexAtArgs_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_){
_start:
{
lean_object* v___x_687_; lean_object* v___x_688_; uint8_t v___x_689_; 
v___x_687_ = lean_array_get_size(v_todo_679_);
v___x_688_ = lean_unsigned_to_nat(0u);
v___x_689_ = lean_nat_dec_eq(v___x_687_, v___x_688_);
if (v___x_689_ == 0)
{
lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v_e_693_; lean_object* v_todo_694_; lean_object* v___x_695_; 
v___x_690_ = l_Lean_instInhabitedExpr;
v___x_691_ = lean_unsigned_to_nat(1u);
v___x_692_ = lean_nat_sub(v___x_687_, v___x_691_);
v_e_693_ = lean_array_get(v___x_690_, v_todo_679_, v___x_692_);
lean_dec(v___x_692_);
v_todo_694_ = lean_array_pop(v_todo_679_);
v___x_695_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_pushArgs(v_root_678_, v_todo_694_, v_e_693_, v_noIndexAtArgs_681_, v_a_682_, v_a_683_, v_a_684_, v_a_685_);
if (lean_obj_tag(v___x_695_) == 0)
{
lean_object* v_a_696_; lean_object* v_fst_697_; lean_object* v_snd_698_; lean_object* v___x_699_; 
v_a_696_ = lean_ctor_get(v___x_695_, 0);
lean_inc(v_a_696_);
lean_dec_ref_known(v___x_695_, 1);
v_fst_697_ = lean_ctor_get(v_a_696_, 0);
lean_inc(v_fst_697_);
v_snd_698_ = lean_ctor_get(v_a_696_, 1);
lean_inc(v_snd_698_);
lean_dec(v_a_696_);
v___x_699_ = lean_array_push(v_keys_680_, v_fst_697_);
v_root_678_ = v___x_689_;
v_todo_679_ = v_snd_698_;
v_keys_680_ = v___x_699_;
goto _start;
}
else
{
lean_object* v_a_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_708_; 
lean_dec_ref(v_keys_680_);
v_a_701_ = lean_ctor_get(v___x_695_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_695_);
if (v_isSharedCheck_708_ == 0)
{
v___x_703_ = v___x_695_;
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_a_701_);
lean_dec(v___x_695_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_706_; 
if (v_isShared_704_ == 0)
{
v___x_706_ = v___x_703_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v_a_701_);
v___x_706_ = v_reuseFailAlloc_707_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
return v___x_706_;
}
}
}
}
else
{
lean_object* v___x_709_; 
lean_dec_ref(v_todo_679_);
v___x_709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_709_, 0, v_keys_680_);
return v___x_709_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_mkPathAux___boxed(lean_object* v_root_710_, lean_object* v_todo_711_, lean_object* v_keys_712_, lean_object* v_noIndexAtArgs_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_){
_start:
{
uint8_t v_root_boxed_719_; uint8_t v_noIndexAtArgs_boxed_720_; lean_object* v_res_721_; 
v_root_boxed_719_ = lean_unbox(v_root_710_);
v_noIndexAtArgs_boxed_720_ = lean_unbox(v_noIndexAtArgs_713_);
v_res_721_ = l_Lean_Meta_DiscrTree_mkPathAux(v_root_boxed_719_, v_todo_711_, v_keys_712_, v_noIndexAtArgs_boxed_720_, v_a_714_, v_a_715_, v_a_716_, v_a_717_);
lean_dec(v_a_717_);
lean_dec_ref(v_a_716_);
lean_dec(v_a_715_);
lean_dec_ref(v_a_714_);
return v_res_721_;
}
}
static lean_object* _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_initCapacity(void){
_start:
{
lean_object* v___x_722_; 
v___x_722_ = lean_unsigned_to_nat(8u);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_mkPath(lean_object* v_e_723_, uint8_t v_noIndexAtArgs_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_){
_start:
{
lean_object* v___y_731_; lean_object* v___x_748_; uint8_t v_transparency_749_; lean_object* v___x_750_; lean_object* v_todo_751_; uint8_t v___x_752_; lean_object* v___x_753_; uint8_t v___x_754_; uint8_t v___x_755_; 
v___x_748_ = l_Lean_Meta_Context_config(v_a_725_);
v_transparency_749_ = lean_ctor_get_uint8(v___x_748_, 9);
lean_dec_ref(v___x_748_);
v___x_750_ = lean_unsigned_to_nat(8u);
v_todo_751_ = lean_mk_empty_array_with_capacity(v___x_750_);
v___x_752_ = 1;
lean_inc_ref(v_todo_751_);
v___x_753_ = lean_array_push(v_todo_751_, v_e_723_);
v___x_754_ = 2;
v___x_755_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_749_, v___x_754_);
if (v___x_755_ == 0)
{
lean_object* v_keyedConfig_756_; uint8_t v_trackZetaDelta_757_; lean_object* v_zetaDeltaSet_758_; lean_object* v_lctx_759_; lean_object* v_localInstances_760_; lean_object* v_defEqCtx_x3f_761_; lean_object* v_synthPendingDepth_762_; lean_object* v_customCanUnfoldPredicate_x3f_763_; uint8_t v_univApprox_764_; uint8_t v_inTypeClassResolution_765_; uint8_t v_cacheInferType_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v_keyedConfig_756_ = lean_ctor_get(v_a_725_, 0);
v_trackZetaDelta_757_ = lean_ctor_get_uint8(v_a_725_, sizeof(void*)*7);
v_zetaDeltaSet_758_ = lean_ctor_get(v_a_725_, 1);
v_lctx_759_ = lean_ctor_get(v_a_725_, 2);
v_localInstances_760_ = lean_ctor_get(v_a_725_, 3);
v_defEqCtx_x3f_761_ = lean_ctor_get(v_a_725_, 4);
v_synthPendingDepth_762_ = lean_ctor_get(v_a_725_, 5);
v_customCanUnfoldPredicate_x3f_763_ = lean_ctor_get(v_a_725_, 6);
v_univApprox_764_ = lean_ctor_get_uint8(v_a_725_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_765_ = lean_ctor_get_uint8(v_a_725_, sizeof(void*)*7 + 2);
v_cacheInferType_766_ = lean_ctor_get_uint8(v_a_725_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_756_);
v___x_767_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_754_, v_keyedConfig_756_);
lean_inc(v_customCanUnfoldPredicate_x3f_763_);
lean_inc(v_synthPendingDepth_762_);
lean_inc(v_defEqCtx_x3f_761_);
lean_inc_ref(v_localInstances_760_);
lean_inc_ref(v_lctx_759_);
lean_inc(v_zetaDeltaSet_758_);
v___x_768_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_768_, 0, v___x_767_);
lean_ctor_set(v___x_768_, 1, v_zetaDeltaSet_758_);
lean_ctor_set(v___x_768_, 2, v_lctx_759_);
lean_ctor_set(v___x_768_, 3, v_localInstances_760_);
lean_ctor_set(v___x_768_, 4, v_defEqCtx_x3f_761_);
lean_ctor_set(v___x_768_, 5, v_synthPendingDepth_762_);
lean_ctor_set(v___x_768_, 6, v_customCanUnfoldPredicate_x3f_763_);
lean_ctor_set_uint8(v___x_768_, sizeof(void*)*7, v_trackZetaDelta_757_);
lean_ctor_set_uint8(v___x_768_, sizeof(void*)*7 + 1, v_univApprox_764_);
lean_ctor_set_uint8(v___x_768_, sizeof(void*)*7 + 2, v_inTypeClassResolution_765_);
lean_ctor_set_uint8(v___x_768_, sizeof(void*)*7 + 3, v_cacheInferType_766_);
v___x_769_ = l_Lean_Meta_DiscrTree_mkPathAux(v___x_752_, v___x_753_, v_todo_751_, v_noIndexAtArgs_724_, v___x_768_, v_a_726_, v_a_727_, v_a_728_);
lean_dec_ref_known(v___x_768_, 7);
v___y_731_ = v___x_769_;
goto v___jp_730_;
}
else
{
lean_object* v___x_770_; 
v___x_770_ = l_Lean_Meta_DiscrTree_mkPathAux(v___x_752_, v___x_753_, v_todo_751_, v_noIndexAtArgs_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_);
v___y_731_ = v___x_770_;
goto v___jp_730_;
}
v___jp_730_:
{
if (lean_obj_tag(v___y_731_) == 0)
{
lean_object* v_a_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_739_; 
v_a_732_ = lean_ctor_get(v___y_731_, 0);
v_isSharedCheck_739_ = !lean_is_exclusive(v___y_731_);
if (v_isSharedCheck_739_ == 0)
{
v___x_734_ = v___y_731_;
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_a_732_);
lean_dec(v___y_731_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_737_; 
if (v_isShared_735_ == 0)
{
v___x_737_ = v___x_734_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_a_732_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
return v___x_737_;
}
}
}
else
{
lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_747_; 
v_a_740_ = lean_ctor_get(v___y_731_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v___y_731_);
if (v_isSharedCheck_747_ == 0)
{
v___x_742_ = v___y_731_;
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_dec(v___y_731_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_743_ == 0)
{
v___x_745_ = v___x_742_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_a_740_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_mkPath___boxed(lean_object* v_e_771_, lean_object* v_noIndexAtArgs_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_, lean_object* v_a_777_){
_start:
{
uint8_t v_noIndexAtArgs_boxed_778_; lean_object* v_res_779_; 
v_noIndexAtArgs_boxed_778_ = lean_unbox(v_noIndexAtArgs_772_);
v_res_779_ = l_Lean_Meta_DiscrTree_mkPath(v_e_771_, v_noIndexAtArgs_boxed_778_, v_a_773_, v_a_774_, v_a_775_, v_a_776_);
lean_dec(v_a_776_);
lean_dec_ref(v_a_775_);
lean_dec(v_a_774_);
lean_dec_ref(v_a_773_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insert___redArg(lean_object* v_inst_780_, lean_object* v_d_781_, lean_object* v_e_782_, lean_object* v_v_783_, uint8_t v_noIndexAtArgs_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_){
_start:
{
lean_object* v___x_790_; 
v___x_790_ = l_Lean_Meta_DiscrTree_mkPath(v_e_782_, v_noIndexAtArgs_784_, v_a_785_, v_a_786_, v_a_787_, v_a_788_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_799_; 
v_a_791_ = lean_ctor_get(v___x_790_, 0);
v_isSharedCheck_799_ = !lean_is_exclusive(v___x_790_);
if (v_isSharedCheck_799_ == 0)
{
v___x_793_ = v___x_790_;
v_isShared_794_ = v_isSharedCheck_799_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_790_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_799_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_795_; lean_object* v___x_797_; 
v___x_795_ = l_Lean_Meta_DiscrTree_insertKeyValue___redArg(v_inst_780_, v_d_781_, v_a_791_, v_v_783_);
if (v_isShared_794_ == 0)
{
lean_ctor_set(v___x_793_, 0, v___x_795_);
v___x_797_ = v___x_793_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v___x_795_);
v___x_797_ = v_reuseFailAlloc_798_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
return v___x_797_;
}
}
}
else
{
lean_object* v_a_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_807_; 
lean_dec(v_v_783_);
lean_dec_ref(v_d_781_);
lean_dec_ref(v_inst_780_);
v_a_800_ = lean_ctor_get(v___x_790_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_790_);
if (v_isSharedCheck_807_ == 0)
{
v___x_802_ = v___x_790_;
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_a_800_);
lean_dec(v___x_790_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v___x_805_; 
if (v_isShared_803_ == 0)
{
v___x_805_ = v___x_802_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_a_800_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insert___redArg___boxed(lean_object* v_inst_808_, lean_object* v_d_809_, lean_object* v_e_810_, lean_object* v_v_811_, lean_object* v_noIndexAtArgs_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_, lean_object* v_a_816_, lean_object* v_a_817_){
_start:
{
uint8_t v_noIndexAtArgs_boxed_818_; lean_object* v_res_819_; 
v_noIndexAtArgs_boxed_818_ = lean_unbox(v_noIndexAtArgs_812_);
v_res_819_ = l_Lean_Meta_DiscrTree_insert___redArg(v_inst_808_, v_d_809_, v_e_810_, v_v_811_, v_noIndexAtArgs_boxed_818_, v_a_813_, v_a_814_, v_a_815_, v_a_816_);
lean_dec(v_a_816_);
lean_dec_ref(v_a_815_);
lean_dec(v_a_814_);
lean_dec_ref(v_a_813_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insert(lean_object* v_00_u03b1_820_, lean_object* v_inst_821_, lean_object* v_d_822_, lean_object* v_e_823_, lean_object* v_v_824_, uint8_t v_noIndexAtArgs_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_){
_start:
{
lean_object* v___x_831_; 
v___x_831_ = l_Lean_Meta_DiscrTree_insert___redArg(v_inst_821_, v_d_822_, v_e_823_, v_v_824_, v_noIndexAtArgs_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insert___boxed(lean_object* v_00_u03b1_832_, lean_object* v_inst_833_, lean_object* v_d_834_, lean_object* v_e_835_, lean_object* v_v_836_, lean_object* v_noIndexAtArgs_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_){
_start:
{
uint8_t v_noIndexAtArgs_boxed_843_; lean_object* v_res_844_; 
v_noIndexAtArgs_boxed_843_ = lean_unbox(v_noIndexAtArgs_837_);
v_res_844_ = l_Lean_Meta_DiscrTree_insert(v_00_u03b1_832_, v_inst_833_, v_d_834_, v_e_835_, v_v_836_, v_noIndexAtArgs_boxed_843_, v_a_838_, v_a_839_, v_a_840_, v_a_841_);
lean_dec(v_a_841_);
lean_dec_ref(v_a_840_);
lean_dec(v_a_839_);
lean_dec_ref(v_a_838_);
return v_res_844_;
}
}
static lean_object* _init_l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__4(void){
_start:
{
lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_859_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__3));
v___x_860_ = lean_array_get_size(v___x_859_);
return v___x_860_;
}
}
static lean_object* _init_l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__7(void){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_866_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__6));
v___x_867_ = lean_array_get_size(v___x_866_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg(lean_object* v_inst_868_, lean_object* v_d_869_, lean_object* v_e_870_, lean_object* v_v_871_, uint8_t v_noIndexAtArgs_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = l_Lean_Meta_DiscrTree_mkPath(v_e_870_, v_noIndexAtArgs_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_);
if (lean_obj_tag(v___x_878_) == 0)
{
lean_object* v_a_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_903_; 
v_a_879_ = lean_ctor_get(v___x_878_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_903_ == 0)
{
v___x_881_ = v___x_878_;
v_isShared_882_ = v_isSharedCheck_903_;
goto v_resetjp_880_;
}
else
{
lean_inc(v_a_879_);
lean_dec(v___x_878_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_903_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; uint8_t v___x_899_; 
v___x_896_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__6));
v___x_897_ = lean_array_get_size(v_a_879_);
v___x_898_ = lean_obj_once(&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__7, &l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__7_once, _init_l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__7);
v___x_899_ = lean_nat_dec_eq(v___x_897_, v___x_898_);
if (v___x_899_ == 0)
{
goto v___jp_888_;
}
else
{
lean_object* v___x_900_; uint8_t v___x_901_; 
v___x_900_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__5));
v___x_901_ = l_Array_isEqvAux___redArg(v_a_879_, v___x_896_, v___x_900_, v___x_897_);
if (v___x_901_ == 0)
{
goto v___jp_888_;
}
else
{
lean_object* v___x_902_; 
lean_del_object(v___x_881_);
lean_dec(v_a_879_);
lean_dec(v_v_871_);
lean_dec_ref(v_inst_868_);
v___x_902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_902_, 0, v_d_869_);
return v___x_902_;
}
}
v___jp_883_:
{
lean_object* v___x_884_; lean_object* v___x_886_; 
v___x_884_ = l_Lean_Meta_DiscrTree_insertKeyValue___redArg(v_inst_868_, v_d_869_, v_a_879_, v_v_871_);
if (v_isShared_882_ == 0)
{
lean_ctor_set(v___x_881_, 0, v___x_884_);
v___x_886_ = v___x_881_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v___x_884_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
v___jp_888_:
{
lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; uint8_t v___x_892_; 
v___x_889_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__3));
v___x_890_ = lean_array_get_size(v_a_879_);
v___x_891_ = lean_obj_once(&l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__4, &l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__4_once, _init_l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__4);
v___x_892_ = lean_nat_dec_eq(v___x_890_, v___x_891_);
if (v___x_892_ == 0)
{
goto v___jp_883_;
}
else
{
lean_object* v___x_893_; uint8_t v___x_894_; 
v___x_893_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___closed__5));
v___x_894_ = l_Array_isEqvAux___redArg(v_a_879_, v___x_889_, v___x_893_, v___x_890_);
if (v___x_894_ == 0)
{
goto v___jp_883_;
}
else
{
lean_object* v___x_895_; 
lean_del_object(v___x_881_);
lean_dec(v_a_879_);
lean_dec(v_v_871_);
lean_dec_ref(v_inst_868_);
v___x_895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_895_, 0, v_d_869_);
return v___x_895_;
}
}
}
}
}
else
{
lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_911_; 
lean_dec(v_v_871_);
lean_dec_ref(v_d_869_);
lean_dec_ref(v_inst_868_);
v_a_904_ = lean_ctor_get(v___x_878_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_911_ == 0)
{
v___x_906_ = v___x_878_;
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_878_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_909_; 
if (v_isShared_907_ == 0)
{
v___x_909_ = v___x_906_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_a_904_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___redArg___boxed(lean_object* v_inst_912_, lean_object* v_d_913_, lean_object* v_e_914_, lean_object* v_v_915_, lean_object* v_noIndexAtArgs_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_, lean_object* v_a_921_){
_start:
{
uint8_t v_noIndexAtArgs_boxed_922_; lean_object* v_res_923_; 
v_noIndexAtArgs_boxed_922_ = lean_unbox(v_noIndexAtArgs_916_);
v_res_923_ = l_Lean_Meta_DiscrTree_insertIfSpecific___redArg(v_inst_912_, v_d_913_, v_e_914_, v_v_915_, v_noIndexAtArgs_boxed_922_, v_a_917_, v_a_918_, v_a_919_, v_a_920_);
lean_dec(v_a_920_);
lean_dec_ref(v_a_919_);
lean_dec(v_a_918_);
lean_dec_ref(v_a_917_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific(lean_object* v_00_u03b1_924_, lean_object* v_inst_925_, lean_object* v_d_926_, lean_object* v_e_927_, lean_object* v_v_928_, uint8_t v_noIndexAtArgs_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_){
_start:
{
lean_object* v___x_935_; 
v___x_935_ = l_Lean_Meta_DiscrTree_insertIfSpecific___redArg(v_inst_925_, v_d_926_, v_e_927_, v_v_928_, v_noIndexAtArgs_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_);
return v___x_935_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertIfSpecific___boxed(lean_object* v_00_u03b1_936_, lean_object* v_inst_937_, lean_object* v_d_938_, lean_object* v_e_939_, lean_object* v_v_940_, lean_object* v_noIndexAtArgs_941_, lean_object* v_a_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_, lean_object* v_a_946_){
_start:
{
uint8_t v_noIndexAtArgs_boxed_947_; lean_object* v_res_948_; 
v_noIndexAtArgs_boxed_947_ = lean_unbox(v_noIndexAtArgs_941_);
v_res_948_ = l_Lean_Meta_DiscrTree_insertIfSpecific(v_00_u03b1_936_, v_inst_937_, v_d_938_, v_e_939_, v_v_940_, v_noIndexAtArgs_boxed_947_, v_a_942_, v_a_943_, v_a_944_, v_a_945_);
lean_dec(v_a_945_);
lean_dec_ref(v_a_944_);
lean_dec(v_a_943_);
lean_dec_ref(v_a_942_);
return v_res_948_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2___redArg(lean_object* v_declName_949_, lean_object* v___y_950_){
_start:
{
lean_object* v___x_952_; lean_object* v_env_953_; uint8_t v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_952_ = lean_st_ref_get(v___y_950_);
v_env_953_ = lean_ctor_get(v___x_952_, 0);
lean_inc_ref(v_env_953_);
lean_dec(v___x_952_);
v___x_954_ = l_Lean_isRecCore(v_env_953_, v_declName_949_);
v___x_955_ = lean_box(v___x_954_);
v___x_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_956_, 0, v___x_955_);
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2___redArg___boxed(lean_object* v_declName_957_, lean_object* v___y_958_, lean_object* v___y_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2___redArg(v_declName_957_, v___y_958_);
lean_dec(v___y_958_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2(lean_object* v_declName_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_){
_start:
{
lean_object* v___x_967_; 
v___x_967_ = l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2___redArg(v_declName_961_, v___y_965_);
return v___x_967_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2___boxed(lean_object* v_declName_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2(v_declName_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
lean_dec(v___y_970_);
lean_dec_ref(v___y_969_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1___redArg(lean_object* v_a_975_, lean_object* v_b_976_){
_start:
{
lean_object* v_array_978_; lean_object* v_start_979_; lean_object* v_stop_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_997_; 
v_array_978_ = lean_ctor_get(v_a_975_, 0);
v_start_979_ = lean_ctor_get(v_a_975_, 1);
v_stop_980_ = lean_ctor_get(v_a_975_, 2);
v_isSharedCheck_997_ = !lean_is_exclusive(v_a_975_);
if (v_isSharedCheck_997_ == 0)
{
v___x_982_ = v_a_975_;
v_isShared_983_ = v_isSharedCheck_997_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_stop_980_);
lean_inc(v_start_979_);
lean_inc(v_array_978_);
lean_dec(v_a_975_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_997_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
uint8_t v___x_984_; 
v___x_984_ = lean_nat_dec_lt(v_start_979_, v_stop_980_);
if (v___x_984_ == 0)
{
lean_object* v___x_985_; 
lean_del_object(v___x_982_);
lean_dec(v_stop_980_);
lean_dec(v_start_979_);
lean_dec_ref(v_array_978_);
v___x_985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_985_, 0, v_b_976_);
return v___x_985_;
}
else
{
lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_990_; 
v___x_986_ = lean_box(0);
v___x_987_ = lean_unsigned_to_nat(1u);
v___x_988_ = lean_nat_add(v_start_979_, v___x_987_);
lean_inc_ref(v_array_978_);
if (v_isShared_983_ == 0)
{
lean_ctor_set(v___x_982_, 1, v___x_988_);
v___x_990_ = v___x_982_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v_array_978_);
lean_ctor_set(v_reuseFailAlloc_996_, 1, v___x_988_);
lean_ctor_set(v_reuseFailAlloc_996_, 2, v_stop_980_);
v___x_990_ = v_reuseFailAlloc_996_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
lean_object* v___x_991_; uint8_t v___x_992_; 
v___x_991_ = lean_array_fget(v_array_978_, v_start_979_);
lean_dec(v_start_979_);
lean_dec_ref(v_array_978_);
v___x_992_ = l_Lean_Expr_hasExprMVar(v___x_991_);
lean_dec(v___x_991_);
if (v___x_992_ == 0)
{
v_a_975_ = v___x_990_;
v_b_976_ = v___x_986_;
goto _start;
}
else
{
lean_object* v___x_994_; 
v___x_994_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
if (lean_obj_tag(v___x_994_) == 0)
{
lean_dec_ref_known(v___x_994_, 1);
v_a_975_ = v___x_990_;
v_b_976_ = v___x_986_;
goto _start;
}
else
{
lean_dec_ref(v___x_990_);
return v___x_994_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1___redArg___boxed(lean_object* v_a_998_, lean_object* v_b_999_, lean_object* v___y_1000_){
_start:
{
lean_object* v_res_1001_; 
v_res_1001_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1___redArg(v_a_998_, v_b_999_);
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0___redArg(lean_object* v_declName_1002_, lean_object* v___y_1003_){
_start:
{
lean_object* v___x_1005_; lean_object* v_env_1006_; uint8_t v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1005_ = lean_st_ref_get(v___y_1003_);
v_env_1006_ = lean_ctor_get(v___x_1005_, 0);
lean_inc_ref(v_env_1006_);
lean_dec(v___x_1005_);
v___x_1007_ = l_Lean_getReducibilityStatusCore(v_env_1006_, v_declName_1002_);
v___x_1008_ = lean_box(v___x_1007_);
v___x_1009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1008_);
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0___redArg___boxed(lean_object* v_declName_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0___redArg(v_declName_1010_, v___y_1011_);
lean_dec(v___y_1011_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0(lean_object* v_declName_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_){
_start:
{
lean_object* v___x_1020_; lean_object* v_a_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1036_; 
v___x_1020_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0___redArg(v_declName_1014_, v___y_1018_);
v_a_1021_ = lean_ctor_get(v___x_1020_, 0);
v_isSharedCheck_1036_ = !lean_is_exclusive(v___x_1020_);
if (v_isSharedCheck_1036_ == 0)
{
v___x_1023_ = v___x_1020_;
v_isShared_1024_ = v_isSharedCheck_1036_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_a_1021_);
lean_dec(v___x_1020_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1036_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
uint8_t v___x_1025_; 
v___x_1025_ = lean_unbox(v_a_1021_);
lean_dec(v_a_1021_);
if (v___x_1025_ == 0)
{
uint8_t v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1029_; 
v___x_1026_ = 1;
v___x_1027_ = lean_box(v___x_1026_);
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 0, v___x_1027_);
v___x_1029_ = v___x_1023_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v___x_1027_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
else
{
uint8_t v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1034_; 
v___x_1031_ = 0;
v___x_1032_ = lean_box(v___x_1031_);
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 0, v___x_1032_);
v___x_1034_ = v___x_1023_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v___x_1032_);
v___x_1034_ = v_reuseFailAlloc_1035_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
return v___x_1034_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0___boxed(lean_object* v_declName_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
lean_object* v_res_1043_; 
v_res_1043_ = l_Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0(v_declName_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
return v_res_1043_;
}
}
static lean_object* _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__1(void){
_start:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1046_ = lean_box(0);
v___x_1047_ = l_unsafeCast___redArg(v___x_1046_);
return v___x_1047_;
}
}
static lean_object* _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__2(void){
_start:
{
lean_object* v___x_1048_; lean_object* v_dummy_1049_; 
v___x_1048_ = lean_obj_once(&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__1, &l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__1_once, _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__1);
v_dummy_1049_ = l_Lean_Expr_sort___override(v___x_1048_);
return v_dummy_1049_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs(lean_object* v_e_1056_, uint8_t v_isMatch_1057_, uint8_t v_root_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_){
_start:
{
lean_object* v___x_1064_; 
v___x_1064_ = l_Lean_Meta_DiscrTree_reduceDT(v_e_1056_, v_root_1058_, v_a_1059_, v_a_1060_, v_a_1061_, v_a_1062_);
if (lean_obj_tag(v___x_1064_) == 0)
{
lean_object* v_a_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1221_; 
v_a_1065_ = lean_ctor_get(v___x_1064_, 0);
v_isSharedCheck_1221_ = !lean_is_exclusive(v___x_1064_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1067_ = v___x_1064_;
v_isShared_1068_ = v_isSharedCheck_1221_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_a_1065_);
lean_dec(v___x_1064_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1221_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___y_1070_; lean_object* v___y_1080_; lean_object* v___y_1081_; lean_object* v___y_1082_; lean_object* v___y_1083_; 
if (v_root_1058_ == 0)
{
lean_object* v___x_1209_; 
lean_inc(v_a_1065_);
v___x_1209_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_toNatLit_x3f(v_a_1065_);
if (lean_obj_tag(v___x_1209_) == 1)
{
lean_object* v_val_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1220_; 
lean_del_object(v___x_1067_);
lean_dec(v_a_1065_);
v_val_1210_ = lean_ctor_get(v___x_1209_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1212_ = v___x_1209_;
v_isShared_1213_ = v_isSharedCheck_1220_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_val_1210_);
lean_dec(v___x_1209_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1220_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1215_; 
if (v_isShared_1213_ == 0)
{
lean_ctor_set_tag(v___x_1212_, 2);
v___x_1215_ = v___x_1212_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_val_1210_);
v___x_1215_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1216_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__0));
v___x_1217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1215_);
lean_ctor_set(v___x_1217_, 1, v___x_1216_);
v___x_1218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1217_);
return v___x_1218_;
}
}
}
else
{
lean_dec(v___x_1209_);
v___y_1080_ = v_a_1059_;
v___y_1081_ = v_a_1060_;
v___y_1082_ = v_a_1061_;
v___y_1083_ = v_a_1062_;
goto v___jp_1079_;
}
}
else
{
v___y_1080_ = v_a_1059_;
v___y_1081_ = v_a_1060_;
v___y_1082_ = v_a_1061_;
v___y_1083_ = v_a_1062_;
goto v___jp_1079_;
}
v___jp_1069_:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1077_; 
v___x_1071_ = l_Lean_Expr_getAppNumArgs(v_a_1065_);
lean_inc(v___x_1071_);
v___x_1072_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1072_, 0, v___y_1070_);
lean_ctor_set(v___x_1072_, 1, v___x_1071_);
v___x_1073_ = lean_mk_empty_array_with_capacity(v___x_1071_);
lean_dec(v___x_1071_);
v___x_1074_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1065_, v___x_1073_);
v___x_1075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1072_);
lean_ctor_set(v___x_1075_, 1, v___x_1074_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 0, v___x_1075_);
v___x_1077_ = v___x_1067_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v___x_1075_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
v___jp_1079_:
{
lean_object* v___x_1084_; 
v___x_1084_ = l_Lean_Expr_getAppFn(v_a_1065_);
switch(lean_obj_tag(v___x_1084_))
{
case 9:
{
lean_object* v_a_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
lean_del_object(v___x_1067_);
lean_dec(v_a_1065_);
v_a_1085_ = lean_ctor_get(v___x_1084_, 0);
lean_inc_ref(v_a_1085_);
lean_dec_ref_known(v___x_1084_, 1);
v___x_1086_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1086_, 0, v_a_1085_);
v___x_1087_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__0));
v___x_1088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1086_);
lean_ctor_set(v___x_1088_, 1, v___x_1087_);
v___x_1089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1088_);
return v___x_1089_;
}
case 4:
{
lean_object* v_declName_1090_; lean_object* v___x_1091_; uint8_t v_isDefEqStuckEx_1092_; 
v_declName_1090_ = lean_ctor_get(v___x_1084_, 0);
lean_inc(v_declName_1090_);
lean_dec_ref_known(v___x_1084_, 2);
v___x_1091_ = l_Lean_Meta_Context_config(v___y_1080_);
v_isDefEqStuckEx_1092_ = lean_ctor_get_uint8(v___x_1091_, 4);
lean_dec_ref(v___x_1091_);
if (v_isDefEqStuckEx_1092_ == 0)
{
v___y_1070_ = v_declName_1090_;
goto v___jp_1069_;
}
else
{
uint8_t v___x_1093_; 
v___x_1093_ = l_Lean_Expr_hasExprMVar(v_a_1065_);
if (v___x_1093_ == 0)
{
v___y_1070_ = v_declName_1090_;
goto v___jp_1069_;
}
else
{
lean_object* v___x_1094_; 
lean_inc(v_declName_1090_);
v___x_1094_ = l_Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0(v_declName_1090_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_);
if (lean_obj_tag(v___x_1094_) == 0)
{
lean_object* v_a_1095_; uint8_t v___x_1096_; 
v_a_1095_ = lean_ctor_get(v___x_1094_, 0);
lean_inc(v_a_1095_);
lean_dec_ref_known(v___x_1094_, 1);
v___x_1096_ = lean_unbox(v_a_1095_);
lean_dec(v_a_1095_);
if (v___x_1096_ == 0)
{
lean_object* v___x_1097_; lean_object* v_env_1098_; lean_object* v___x_1099_; 
v___x_1097_ = lean_st_ref_get(v___y_1083_);
v_env_1098_ = lean_ctor_get(v___x_1097_, 0);
lean_inc_ref(v_env_1098_);
lean_dec(v___x_1097_);
v___x_1099_ = l_Lean_Meta_isMatcherAppCore_x3f(v_env_1098_, v_a_1065_);
if (lean_obj_tag(v___x_1099_) == 1)
{
lean_object* v_val_1100_; lean_object* v_numDiscrs_1101_; lean_object* v_nargs_1102_; lean_object* v_dummy_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v_val_1100_ = lean_ctor_get(v___x_1099_, 0);
lean_inc(v_val_1100_);
lean_dec_ref_known(v___x_1099_, 1);
v_numDiscrs_1101_ = lean_ctor_get(v_val_1100_, 1);
lean_inc(v_numDiscrs_1101_);
v_nargs_1102_ = l_Lean_Expr_getAppNumArgs(v_a_1065_);
v_dummy_1103_ = lean_obj_once(&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__2, &l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__2_once, _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__2);
lean_inc(v_nargs_1102_);
v___x_1104_ = lean_mk_array(v_nargs_1102_, v_dummy_1103_);
v___x_1105_ = lean_unsigned_to_nat(1u);
v___x_1106_ = lean_nat_sub(v_nargs_1102_, v___x_1105_);
lean_dec(v_nargs_1102_);
lean_inc(v_a_1065_);
v___x_1107_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1065_, v___x_1104_, v___x_1106_);
v___x_1108_ = l_Lean_Meta_Match_MatcherInfo_getFirstDiscrPos(v_val_1100_);
lean_dec(v_val_1100_);
v___x_1109_ = lean_nat_add(v___x_1108_, v_numDiscrs_1101_);
lean_dec(v_numDiscrs_1101_);
v___x_1110_ = l_Array_toSubarray___redArg(v___x_1107_, v___x_1108_, v___x_1109_);
v___x_1111_ = lean_box(0);
v___x_1112_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1___redArg(v___x_1110_, v___x_1111_);
if (lean_obj_tag(v___x_1112_) == 0)
{
lean_dec_ref_known(v___x_1112_, 1);
v___y_1070_ = v_declName_1090_;
goto v___jp_1069_;
}
else
{
lean_object* v_a_1113_; lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1120_; 
lean_dec(v_declName_1090_);
lean_del_object(v___x_1067_);
lean_dec(v_a_1065_);
v_a_1113_ = lean_ctor_get(v___x_1112_, 0);
v_isSharedCheck_1120_ = !lean_is_exclusive(v___x_1112_);
if (v_isSharedCheck_1120_ == 0)
{
v___x_1115_ = v___x_1112_;
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
else
{
lean_inc(v_a_1113_);
lean_dec(v___x_1112_);
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
}
else
{
lean_object* v___x_1121_; lean_object* v_a_1122_; uint8_t v___x_1123_; 
lean_dec(v___x_1099_);
lean_inc(v_declName_1090_);
v___x_1121_ = l_Lean_isRec___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__2___redArg(v_declName_1090_, v___y_1083_);
v_a_1122_ = lean_ctor_get(v___x_1121_, 0);
lean_inc(v_a_1122_);
lean_dec_ref(v___x_1121_);
v___x_1123_ = lean_unbox(v_a_1122_);
lean_dec(v_a_1122_);
if (v___x_1123_ == 0)
{
v___y_1070_ = v_declName_1090_;
goto v___jp_1069_;
}
else
{
lean_object* v___x_1124_; 
v___x_1124_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
if (lean_obj_tag(v___x_1124_) == 0)
{
lean_dec_ref_known(v___x_1124_, 1);
v___y_1070_ = v_declName_1090_;
goto v___jp_1069_;
}
else
{
lean_object* v_a_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1132_; 
lean_dec(v_declName_1090_);
lean_del_object(v___x_1067_);
lean_dec(v_a_1065_);
v_a_1125_ = lean_ctor_get(v___x_1124_, 0);
v_isSharedCheck_1132_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1127_ = v___x_1124_;
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_a_1125_);
lean_dec(v___x_1124_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1130_; 
if (v_isShared_1128_ == 0)
{
v___x_1130_ = v___x_1127_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v_a_1125_);
v___x_1130_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
return v___x_1130_;
}
}
}
}
}
}
else
{
lean_object* v___x_1133_; 
v___x_1133_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
if (lean_obj_tag(v___x_1133_) == 0)
{
lean_dec_ref_known(v___x_1133_, 1);
v___y_1070_ = v_declName_1090_;
goto v___jp_1069_;
}
else
{
lean_object* v_a_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1141_; 
lean_dec(v_declName_1090_);
lean_del_object(v___x_1067_);
lean_dec(v_a_1065_);
v_a_1134_ = lean_ctor_get(v___x_1133_, 0);
v_isSharedCheck_1141_ = !lean_is_exclusive(v___x_1133_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1136_ = v___x_1133_;
v_isShared_1137_ = v_isSharedCheck_1141_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_a_1134_);
lean_dec(v___x_1133_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1141_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1139_; 
if (v_isShared_1137_ == 0)
{
v___x_1139_ = v___x_1136_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v_a_1134_);
v___x_1139_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
return v___x_1139_;
}
}
}
}
}
else
{
lean_object* v_a_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1149_; 
lean_dec(v_declName_1090_);
lean_del_object(v___x_1067_);
lean_dec(v_a_1065_);
v_a_1142_ = lean_ctor_get(v___x_1094_, 0);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_1094_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1144_ = v___x_1094_;
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_a_1142_);
lean_dec(v___x_1094_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1147_; 
if (v_isShared_1145_ == 0)
{
v___x_1147_ = v___x_1144_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_a_1142_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
}
}
}
case 1:
{
lean_object* v_fvarId_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; 
lean_del_object(v___x_1067_);
v_fvarId_1150_ = lean_ctor_get(v___x_1084_, 0);
lean_inc(v_fvarId_1150_);
lean_dec_ref_known(v___x_1084_, 1);
v___x_1151_ = l_Lean_Expr_getAppNumArgs(v_a_1065_);
lean_inc(v___x_1151_);
v___x_1152_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1152_, 0, v_fvarId_1150_);
lean_ctor_set(v___x_1152_, 1, v___x_1151_);
v___x_1153_ = lean_mk_empty_array_with_capacity(v___x_1151_);
lean_dec(v___x_1151_);
v___x_1154_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1065_, v___x_1153_);
v___x_1155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1155_, 0, v___x_1152_);
lean_ctor_set(v___x_1155_, 1, v___x_1154_);
v___x_1156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1155_);
return v___x_1156_;
}
case 2:
{
lean_del_object(v___x_1067_);
lean_dec(v_a_1065_);
if (v_isMatch_1057_ == 0)
{
lean_object* v_mvarId_1157_; lean_object* v___x_1158_; uint8_t v_isDefEqStuckEx_1159_; 
v_mvarId_1157_ = lean_ctor_get(v___x_1084_, 0);
lean_inc(v_mvarId_1157_);
lean_dec_ref_known(v___x_1084_, 1);
v___x_1158_ = l_Lean_Meta_Context_config(v___y_1080_);
v_isDefEqStuckEx_1159_ = lean_ctor_get_uint8(v___x_1158_, 4);
lean_dec_ref(v___x_1158_);
if (v_isDefEqStuckEx_1159_ == 0)
{
lean_object* v___x_1160_; 
v___x_1160_ = l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(v_mvarId_1157_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_);
if (lean_obj_tag(v___x_1160_) == 0)
{
lean_object* v_a_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1174_; 
v_a_1161_ = lean_ctor_get(v___x_1160_, 0);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1160_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1163_ = v___x_1160_;
v_isShared_1164_ = v_isSharedCheck_1174_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_a_1161_);
lean_dec(v___x_1160_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1174_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
uint8_t v___x_1165_; 
v___x_1165_ = lean_unbox(v_a_1161_);
lean_dec(v_a_1161_);
if (v___x_1165_ == 0)
{
lean_object* v___x_1166_; lean_object* v___x_1168_; 
v___x_1166_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__3));
if (v_isShared_1164_ == 0)
{
lean_ctor_set(v___x_1163_, 0, v___x_1166_);
v___x_1168_ = v___x_1163_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v___x_1166_);
v___x_1168_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
return v___x_1168_;
}
}
else
{
lean_object* v___x_1170_; lean_object* v___x_1172_; 
v___x_1170_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__4));
if (v_isShared_1164_ == 0)
{
lean_ctor_set(v___x_1163_, 0, v___x_1170_);
v___x_1172_ = v___x_1163_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v___x_1170_);
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
else
{
lean_object* v_a_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1182_; 
v_a_1175_ = lean_ctor_get(v___x_1160_, 0);
v_isSharedCheck_1182_ = !lean_is_exclusive(v___x_1160_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1177_ = v___x_1160_;
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_a_1175_);
lean_dec(v___x_1160_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
lean_object* v___x_1180_; 
if (v_isShared_1178_ == 0)
{
v___x_1180_ = v___x_1177_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v_a_1175_);
v___x_1180_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
return v___x_1180_;
}
}
}
}
else
{
lean_object* v___x_1183_; lean_object* v___x_1184_; 
lean_dec(v_mvarId_1157_);
v___x_1183_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__3));
v___x_1184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1183_);
return v___x_1184_;
}
}
else
{
lean_object* v___x_1185_; lean_object* v___x_1186_; 
lean_dec_ref_known(v___x_1084_, 1);
v___x_1185_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__4));
v___x_1186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1186_, 0, v___x_1185_);
return v___x_1186_;
}
}
case 11:
{
lean_object* v_typeName_1187_; lean_object* v_idx_1188_; lean_object* v_struct_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
lean_del_object(v___x_1067_);
v_typeName_1187_ = lean_ctor_get(v___x_1084_, 0);
lean_inc(v_typeName_1187_);
v_idx_1188_ = lean_ctor_get(v___x_1084_, 1);
lean_inc(v_idx_1188_);
v_struct_1189_ = lean_ctor_get(v___x_1084_, 2);
lean_inc_ref(v_struct_1189_);
lean_dec_ref_known(v___x_1084_, 3);
v___x_1190_ = l_Lean_Expr_getAppNumArgs(v_a_1065_);
lean_inc(v___x_1190_);
v___x_1191_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v___x_1191_, 0, v_typeName_1187_);
lean_ctor_set(v___x_1191_, 1, v_idx_1188_);
lean_ctor_set(v___x_1191_, 2, v___x_1190_);
v___x_1192_ = lean_unsigned_to_nat(1u);
v___x_1193_ = lean_mk_empty_array_with_capacity(v___x_1192_);
v___x_1194_ = lean_array_push(v___x_1193_, v_struct_1189_);
v___x_1195_ = lean_mk_empty_array_with_capacity(v___x_1190_);
lean_dec(v___x_1190_);
v___x_1196_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1065_, v___x_1195_);
v___x_1197_ = l_Array_append___redArg(v___x_1194_, v___x_1196_);
lean_dec_ref(v___x_1196_);
v___x_1198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1191_);
lean_ctor_set(v___x_1198_, 1, v___x_1197_);
v___x_1199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
return v___x_1199_;
}
case 7:
{
lean_object* v_binderType_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; 
lean_del_object(v___x_1067_);
lean_dec(v_a_1065_);
v_binderType_1200_ = lean_ctor_get(v___x_1084_, 1);
lean_inc_ref(v_binderType_1200_);
lean_dec_ref_known(v___x_1084_, 3);
v___x_1201_ = lean_box(5);
v___x_1202_ = lean_unsigned_to_nat(1u);
v___x_1203_ = lean_mk_empty_array_with_capacity(v___x_1202_);
v___x_1204_ = lean_array_push(v___x_1203_, v_binderType_1200_);
v___x_1205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1205_, 0, v___x_1201_);
lean_ctor_set(v___x_1205_, 1, v___x_1204_);
v___x_1206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1206_, 0, v___x_1205_);
return v___x_1206_;
}
default: 
{
lean_object* v___x_1207_; lean_object* v___x_1208_; 
lean_dec_ref(v___x_1084_);
lean_del_object(v___x_1067_);
lean_dec(v_a_1065_);
v___x_1207_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__4));
v___x_1208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1208_, 0, v___x_1207_);
return v___x_1208_;
}
}
}
}
}
else
{
lean_object* v_a_1222_; lean_object* v___x_1224_; uint8_t v_isShared_1225_; uint8_t v_isSharedCheck_1229_; 
v_a_1222_ = lean_ctor_get(v___x_1064_, 0);
v_isSharedCheck_1229_ = !lean_is_exclusive(v___x_1064_);
if (v_isSharedCheck_1229_ == 0)
{
v___x_1224_ = v___x_1064_;
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
else
{
lean_inc(v_a_1222_);
lean_dec(v___x_1064_);
v___x_1224_ = lean_box(0);
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
v_resetjp_1223_:
{
lean_object* v___x_1227_; 
if (v_isShared_1225_ == 0)
{
v___x_1227_ = v___x_1224_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v_a_1222_);
v___x_1227_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
return v___x_1227_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___boxed(lean_object* v_e_1230_, lean_object* v_isMatch_1231_, lean_object* v_root_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_, lean_object* v_a_1237_){
_start:
{
uint8_t v_isMatch_boxed_1238_; uint8_t v_root_boxed_1239_; lean_object* v_res_1240_; 
v_isMatch_boxed_1238_ = lean_unbox(v_isMatch_1231_);
v_root_boxed_1239_ = lean_unbox(v_root_1232_);
v_res_1240_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs(v_e_1230_, v_isMatch_boxed_1238_, v_root_boxed_1239_, v_a_1233_, v_a_1234_, v_a_1235_, v_a_1236_);
lean_dec(v_a_1236_);
lean_dec_ref(v_a_1235_);
lean_dec(v_a_1234_);
lean_dec_ref(v_a_1233_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0(lean_object* v_declName_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
lean_object* v___x_1247_; 
v___x_1247_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0___redArg(v_declName_1241_, v___y_1245_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0___boxed(lean_object* v_declName_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_){
_start:
{
lean_object* v_res_1254_; 
v_res_1254_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__0_spec__0(v_declName_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1(lean_object* v_inst_1255_, lean_object* v_R_1256_, lean_object* v_a_1257_, lean_object* v_b_1258_, lean_object* v_c_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_){
_start:
{
lean_object* v___x_1265_; 
v___x_1265_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1___redArg(v_a_1257_, v_b_1258_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1___boxed(lean_object* v_inst_1266_, lean_object* v_R_1267_, lean_object* v_a_1268_, lean_object* v_b_1269_, lean_object* v_c_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_){
_start:
{
lean_object* v_res_1276_; 
v_res_1276_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs_spec__1(v_inst_1266_, v_R_1267_, v_a_1268_, v_b_1269_, v_c_1270_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_);
lean_dec(v___y_1274_);
lean_dec_ref(v___y_1273_);
lean_dec(v___y_1272_);
lean_dec_ref(v___y_1271_);
return v_res_1276_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchKeyArgs(lean_object* v_e_1277_, uint8_t v_root_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_){
_start:
{
uint8_t v___x_1284_; lean_object* v___x_1285_; 
v___x_1284_ = 1;
v___x_1285_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs(v_e_1277_, v___x_1284_, v_root_1278_, v_a_1279_, v_a_1280_, v_a_1281_, v_a_1282_);
return v___x_1285_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchKeyArgs___boxed(lean_object* v_e_1286_, lean_object* v_root_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_, lean_object* v_a_1291_, lean_object* v_a_1292_){
_start:
{
uint8_t v_root_boxed_1293_; lean_object* v_res_1294_; 
v_root_boxed_1293_ = lean_unbox(v_root_1287_);
v_res_1294_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchKeyArgs(v_e_1286_, v_root_boxed_1293_, v_a_1288_, v_a_1289_, v_a_1290_, v_a_1291_);
lean_dec(v_a_1291_);
lean_dec_ref(v_a_1290_);
lean_dec(v_a_1289_);
lean_dec_ref(v_a_1288_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnifyKeyArgs(lean_object* v_e_1295_, uint8_t v_root_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_){
_start:
{
uint8_t v___x_1302_; lean_object* v___x_1303_; 
v___x_1302_ = 0;
v___x_1303_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs(v_e_1295_, v___x_1302_, v_root_1296_, v_a_1297_, v_a_1298_, v_a_1299_, v_a_1300_);
return v___x_1303_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnifyKeyArgs___boxed(lean_object* v_e_1304_, lean_object* v_root_1305_, lean_object* v_a_1306_, lean_object* v_a_1307_, lean_object* v_a_1308_, lean_object* v_a_1309_, lean_object* v_a_1310_){
_start:
{
uint8_t v_root_boxed_1311_; lean_object* v_res_1312_; 
v_root_boxed_1311_ = lean_unbox(v_root_1305_);
v_res_1312_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnifyKeyArgs(v_e_1304_, v_root_boxed_1311_, v_a_1306_, v_a_1307_, v_a_1308_, v_a_1309_);
lean_dec(v_a_1309_);
lean_dec_ref(v_a_1308_);
lean_dec(v_a_1307_);
lean_dec_ref(v_a_1306_);
return v_res_1312_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1313_, lean_object* v_vals_1314_, lean_object* v_i_1315_, lean_object* v_k_1316_){
_start:
{
lean_object* v___x_1317_; uint8_t v___x_1318_; 
v___x_1317_ = lean_array_get_size(v_keys_1313_);
v___x_1318_ = lean_nat_dec_lt(v_i_1315_, v___x_1317_);
if (v___x_1318_ == 0)
{
lean_object* v___x_1319_; 
lean_dec(v_i_1315_);
v___x_1319_ = lean_box(0);
return v___x_1319_;
}
else
{
lean_object* v_k_x27_1320_; uint8_t v___x_1321_; 
v_k_x27_1320_ = lean_array_fget_borrowed(v_keys_1313_, v_i_1315_);
v___x_1321_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_k_1316_, v_k_x27_1320_);
if (v___x_1321_ == 0)
{
lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1322_ = lean_unsigned_to_nat(1u);
v___x_1323_ = lean_nat_add(v_i_1315_, v___x_1322_);
lean_dec(v_i_1315_);
v_i_1315_ = v___x_1323_;
goto _start;
}
else
{
lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1325_ = lean_array_fget_borrowed(v_vals_1314_, v_i_1315_);
lean_dec(v_i_1315_);
lean_inc(v___x_1325_);
v___x_1326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1325_);
return v___x_1326_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1327_, lean_object* v_vals_1328_, lean_object* v_i_1329_, lean_object* v_k_1330_){
_start:
{
lean_object* v_res_1331_; 
v_res_1331_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1___redArg(v_keys_1327_, v_vals_1328_, v_i_1329_, v_k_1330_);
lean_dec(v_k_1330_);
lean_dec_ref(v_vals_1328_);
lean_dec_ref(v_keys_1327_);
return v_res_1331_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0___redArg(lean_object* v_x_1332_, size_t v_x_1333_, lean_object* v_x_1334_){
_start:
{
if (lean_obj_tag(v_x_1332_) == 0)
{
lean_object* v_es_1335_; lean_object* v___x_1336_; size_t v___x_1337_; size_t v___x_1338_; lean_object* v_j_1339_; lean_object* v___x_1340_; 
v_es_1335_ = lean_ctor_get(v_x_1332_, 0);
v___x_1336_ = lean_box(2);
v___x_1337_ = ((size_t)31ULL);
v___x_1338_ = lean_usize_land(v_x_1333_, v___x_1337_);
v_j_1339_ = lean_usize_to_nat(v___x_1338_);
v___x_1340_ = lean_array_get_borrowed(v___x_1336_, v_es_1335_, v_j_1339_);
lean_dec(v_j_1339_);
switch(lean_obj_tag(v___x_1340_))
{
case 0:
{
lean_object* v_key_1341_; lean_object* v_val_1342_; uint8_t v___x_1343_; 
v_key_1341_ = lean_ctor_get(v___x_1340_, 0);
v_val_1342_ = lean_ctor_get(v___x_1340_, 1);
v___x_1343_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_1334_, v_key_1341_);
if (v___x_1343_ == 0)
{
lean_object* v___x_1344_; 
v___x_1344_ = lean_box(0);
return v___x_1344_;
}
else
{
lean_object* v___x_1345_; 
lean_inc(v_val_1342_);
v___x_1345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1345_, 0, v_val_1342_);
return v___x_1345_;
}
}
case 1:
{
lean_object* v_node_1346_; size_t v___x_1347_; size_t v___x_1348_; 
v_node_1346_ = lean_ctor_get(v___x_1340_, 0);
v___x_1347_ = ((size_t)5ULL);
v___x_1348_ = lean_usize_shift_right(v_x_1333_, v___x_1347_);
v_x_1332_ = v_node_1346_;
v_x_1333_ = v___x_1348_;
goto _start;
}
default: 
{
lean_object* v___x_1350_; 
v___x_1350_ = lean_box(0);
return v___x_1350_;
}
}
}
else
{
lean_object* v_ks_1351_; lean_object* v_vs_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; 
v_ks_1351_ = lean_ctor_get(v_x_1332_, 0);
v_vs_1352_ = lean_ctor_get(v_x_1332_, 1);
v___x_1353_ = lean_unsigned_to_nat(0u);
v___x_1354_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1___redArg(v_ks_1351_, v_vs_1352_, v___x_1353_, v_x_1334_);
return v___x_1354_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0___redArg___boxed(lean_object* v_x_1355_, lean_object* v_x_1356_, lean_object* v_x_1357_){
_start:
{
size_t v_x_168__boxed_1358_; lean_object* v_res_1359_; 
v_x_168__boxed_1358_ = lean_unbox_usize(v_x_1356_);
lean_dec(v_x_1356_);
v_res_1359_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0___redArg(v_x_1355_, v_x_168__boxed_1358_, v_x_1357_);
lean_dec(v_x_1357_);
lean_dec_ref(v_x_1355_);
return v_res_1359_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg(lean_object* v_x_1360_, lean_object* v_x_1361_){
_start:
{
uint64_t v___x_1362_; size_t v___x_1363_; lean_object* v___x_1364_; 
v___x_1362_ = l_Lean_Meta_DiscrTree_Key_hash(v_x_1361_);
v___x_1363_ = lean_uint64_to_usize(v___x_1362_);
v___x_1364_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0___redArg(v_x_1360_, v___x_1363_, v_x_1361_);
return v___x_1364_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg___boxed(lean_object* v_x_1365_, lean_object* v_x_1366_){
_start:
{
lean_object* v_res_1367_; 
v_res_1367_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg(v_x_1365_, v_x_1366_);
lean_dec(v_x_1366_);
lean_dec_ref(v_x_1365_);
return v_res_1367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg(lean_object* v_d_1368_){
_start:
{
lean_object* v___x_1369_; lean_object* v_result_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1369_ = lean_unsigned_to_nat(8u);
v_result_1370_ = lean_mk_empty_array_with_capacity(v___x_1369_);
v___x_1371_ = lean_box(0);
v___x_1372_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg(v_d_1368_, v___x_1371_);
if (lean_obj_tag(v___x_1372_) == 0)
{
return v_result_1370_;
}
else
{
lean_object* v_val_1373_; lean_object* v_vs_1374_; lean_object* v___x_1375_; 
v_val_1373_ = lean_ctor_get(v___x_1372_, 0);
lean_inc(v_val_1373_);
lean_dec_ref_known(v___x_1372_, 1);
v_vs_1374_ = lean_ctor_get(v_val_1373_, 0);
lean_inc_ref(v_vs_1374_);
lean_dec(v_val_1373_);
v___x_1375_ = l_Array_append___redArg(v_result_1370_, v_vs_1374_);
lean_dec_ref(v_vs_1374_);
return v___x_1375_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg___boxed(lean_object* v_d_1376_){
_start:
{
lean_object* v_res_1377_; 
v_res_1377_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg(v_d_1376_);
lean_dec_ref(v_d_1376_);
return v_res_1377_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult(lean_object* v_00_u03b1_1378_, lean_object* v_d_1379_){
_start:
{
lean_object* v___x_1380_; 
v___x_1380_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg(v_d_1379_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___boxed(lean_object* v_00_u03b1_1381_, lean_object* v_d_1382_){
_start:
{
lean_object* v_res_1383_; 
v_res_1383_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult(v_00_u03b1_1381_, v_d_1382_);
lean_dec_ref(v_d_1382_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0(lean_object* v_00_u03b2_1384_, lean_object* v_x_1385_, lean_object* v_x_1386_){
_start:
{
lean_object* v___x_1387_; 
v___x_1387_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg(v_x_1385_, v_x_1386_);
return v___x_1387_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___boxed(lean_object* v_00_u03b2_1388_, lean_object* v_x_1389_, lean_object* v_x_1390_){
_start:
{
lean_object* v_res_1391_; 
v_res_1391_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0(v_00_u03b2_1388_, v_x_1389_, v_x_1390_);
lean_dec(v_x_1390_);
lean_dec_ref(v_x_1389_);
return v_res_1391_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0(lean_object* v_00_u03b2_1392_, lean_object* v_x_1393_, size_t v_x_1394_, lean_object* v_x_1395_){
_start:
{
lean_object* v___x_1396_; 
v___x_1396_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0___redArg(v_x_1393_, v_x_1394_, v_x_1395_);
return v___x_1396_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1397_, lean_object* v_x_1398_, lean_object* v_x_1399_, lean_object* v_x_1400_){
_start:
{
size_t v_x_250__boxed_1401_; lean_object* v_res_1402_; 
v_x_250__boxed_1401_ = lean_unbox_usize(v_x_1399_);
lean_dec(v_x_1399_);
v_res_1402_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0(v_00_u03b2_1397_, v_x_1398_, v_x_250__boxed_1401_, v_x_1400_);
lean_dec(v_x_1400_);
lean_dec_ref(v_x_1398_);
return v_res_1402_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1403_, lean_object* v_keys_1404_, lean_object* v_vals_1405_, lean_object* v_heq_1406_, lean_object* v_i_1407_, lean_object* v_k_1408_){
_start:
{
lean_object* v___x_1409_; 
v___x_1409_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1___redArg(v_keys_1404_, v_vals_1405_, v_i_1407_, v_k_1408_);
return v___x_1409_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1410_, lean_object* v_keys_1411_, lean_object* v_vals_1412_, lean_object* v_heq_1413_, lean_object* v_i_1414_, lean_object* v_k_1415_){
_start:
{
lean_object* v_res_1416_; 
v_res_1416_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0_spec__0_spec__1(v_00_u03b2_1410_, v_keys_1411_, v_vals_1412_, v_heq_1413_, v_i_1414_, v_k_1415_);
lean_dec(v_k_1415_);
lean_dec_ref(v_vals_1412_);
lean_dec_ref(v_keys_1411_);
return v_res_1416_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___lam__0(lean_object* v_a_1417_, lean_object* v_b_1418_){
_start:
{
lean_object* v_fst_1419_; lean_object* v_fst_1420_; uint8_t v___x_1421_; 
v_fst_1419_ = lean_ctor_get(v_a_1417_, 0);
v_fst_1420_ = lean_ctor_get(v_b_1418_, 0);
v___x_1421_ = l_Lean_Meta_DiscrTree_Key_lt(v_fst_1419_, v_fst_1420_);
return v___x_1421_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___lam__0___boxed(lean_object* v_a_1422_, lean_object* v_b_1423_){
_start:
{
uint8_t v_res_1424_; lean_object* v_r_1425_; 
v_res_1424_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___lam__0(v_a_1422_, v_b_1423_);
lean_dec_ref(v_b_1423_);
lean_dec_ref(v_a_1422_);
v_r_1425_ = lean_box(v_res_1424_);
return v_r_1425_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg(lean_object* v_cs_1432_, lean_object* v_k_1433_){
_start:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; uint8_t v___x_1436_; 
v___x_1434_ = lean_unsigned_to_nat(0u);
v___x_1435_ = lean_array_get_size(v_cs_1432_);
v___x_1436_ = lean_nat_dec_lt(v___x_1434_, v___x_1435_);
if (v___x_1436_ == 0)
{
lean_object* v___x_1437_; 
lean_dec(v_k_1433_);
v___x_1437_ = lean_box(0);
return v___x_1437_;
}
else
{
lean_object* v___x_1438_; lean_object* v___x_1439_; uint8_t v___x_1440_; 
v___x_1438_ = lean_unsigned_to_nat(1u);
v___x_1439_ = lean_nat_sub(v___x_1435_, v___x_1438_);
v___x_1440_ = lean_nat_dec_le(v___x_1434_, v___x_1439_);
if (v___x_1440_ == 0)
{
lean_object* v___x_1441_; 
lean_dec(v___x_1439_);
lean_dec(v_k_1433_);
v___x_1441_ = lean_box(0);
return v___x_1441_;
}
else
{
lean_object* v___f_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; 
v___f_1442_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__0));
v___x_1443_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__2));
v___x_1444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1444_, 0, v_k_1433_);
lean_ctor_set(v___x_1444_, 1, v___x_1443_);
v___x_1445_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__3));
v___x_1446_ = l_Array_binSearchAux___redArg(v___f_1442_, v___x_1445_, v_cs_1432_, v___x_1444_, v___x_1434_, v___x_1439_);
return v___x_1446_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___boxed(lean_object* v_cs_1447_, lean_object* v_k_1448_){
_start:
{
lean_object* v_res_1449_; 
v_res_1449_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg(v_cs_1447_, v_k_1448_);
lean_dec_ref(v_cs_1447_);
return v_res_1449_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey(lean_object* v_00_u03b1_1450_, lean_object* v_cs_1451_, lean_object* v_k_1452_){
_start:
{
lean_object* v___x_1453_; lean_object* v___x_1454_; uint8_t v___x_1455_; 
v___x_1453_ = lean_unsigned_to_nat(0u);
v___x_1454_ = lean_array_get_size(v_cs_1451_);
v___x_1455_ = lean_nat_dec_lt(v___x_1453_, v___x_1454_);
if (v___x_1455_ == 0)
{
lean_object* v___x_1456_; 
lean_dec(v_k_1452_);
v___x_1456_ = lean_box(0);
return v___x_1456_;
}
else
{
lean_object* v___x_1457_; lean_object* v___x_1458_; uint8_t v___x_1459_; 
v___x_1457_ = lean_unsigned_to_nat(1u);
v___x_1458_ = lean_nat_sub(v___x_1454_, v___x_1457_);
v___x_1459_ = lean_nat_dec_le(v___x_1453_, v___x_1458_);
if (v___x_1459_ == 0)
{
lean_object* v___x_1460_; 
lean_dec(v___x_1458_);
lean_dec(v_k_1452_);
v___x_1460_ = lean_box(0);
return v___x_1460_;
}
else
{
lean_object* v___f_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
v___f_1461_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__0));
v___x_1462_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__2));
v___x_1463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1463_, 0, v_k_1452_);
lean_ctor_set(v___x_1463_, 1, v___x_1462_);
v___x_1464_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__3));
v___x_1465_ = l_Array_binSearchAux___redArg(v___f_1461_, v___x_1464_, v_cs_1451_, v___x_1463_, v___x_1453_, v___x_1458_);
return v___x_1465_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___boxed(lean_object* v_00_u03b1_1466_, lean_object* v_cs_1467_, lean_object* v_k_1468_){
_start:
{
lean_object* v_res_1469_; 
v_res_1469_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey(v_00_u03b1_1466_, v_cs_1467_, v_k_1468_);
lean_dec_ref(v_cs_1467_);
return v_res_1469_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0___redArg(lean_object* v_as_1470_, lean_object* v_k_1471_, lean_object* v_x_1472_, lean_object* v_x_1473_){
_start:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v_m_1476_; lean_object* v_a_1477_; uint8_t v___x_1478_; 
v___x_1474_ = lean_nat_add(v_x_1472_, v_x_1473_);
v___x_1475_ = lean_unsigned_to_nat(1u);
v_m_1476_ = lean_nat_shiftr(v___x_1474_, v___x_1475_);
lean_dec(v___x_1474_);
v_a_1477_ = lean_array_fget_borrowed(v_as_1470_, v_m_1476_);
v___x_1478_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___lam__0(v_a_1477_, v_k_1471_);
if (v___x_1478_ == 0)
{
uint8_t v___x_1479_; 
lean_dec(v_x_1473_);
v___x_1479_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___lam__0(v_k_1471_, v_a_1477_);
if (v___x_1479_ == 0)
{
lean_object* v___x_1480_; 
lean_dec(v_m_1476_);
lean_dec(v_x_1472_);
lean_inc(v_a_1477_);
v___x_1480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1480_, 0, v_a_1477_);
return v___x_1480_;
}
else
{
lean_object* v___x_1481_; uint8_t v___x_1482_; lean_object* v___x_1483_; uint8_t v___y_1485_; 
v___x_1481_ = lean_unsigned_to_nat(0u);
v___x_1482_ = lean_nat_dec_eq(v_m_1476_, v___x_1481_);
v___x_1483_ = lean_nat_sub(v_m_1476_, v___x_1475_);
lean_dec(v_m_1476_);
if (v___x_1482_ == 0)
{
uint8_t v___x_1488_; 
v___x_1488_ = lean_nat_dec_lt(v___x_1483_, v_x_1472_);
v___y_1485_ = v___x_1488_;
goto v___jp_1484_;
}
else
{
v___y_1485_ = v___x_1482_;
goto v___jp_1484_;
}
v___jp_1484_:
{
if (v___y_1485_ == 0)
{
v_x_1473_ = v___x_1483_;
goto _start;
}
else
{
lean_object* v___x_1487_; 
lean_dec(v___x_1483_);
lean_dec(v_x_1472_);
v___x_1487_ = lean_box(0);
return v___x_1487_;
}
}
}
}
else
{
lean_object* v___x_1489_; uint8_t v___x_1490_; 
lean_dec(v_x_1472_);
v___x_1489_ = lean_nat_add(v_m_1476_, v___x_1475_);
lean_dec(v_m_1476_);
v___x_1490_ = lean_nat_dec_le(v___x_1489_, v_x_1473_);
if (v___x_1490_ == 0)
{
lean_object* v___x_1491_; 
lean_dec(v___x_1489_);
lean_dec(v_x_1473_);
v___x_1491_ = lean_box(0);
return v___x_1491_;
}
else
{
v_x_1472_ = v___x_1489_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0___redArg___boxed(lean_object* v_as_1493_, lean_object* v_k_1494_, lean_object* v_x_1495_, lean_object* v_x_1496_){
_start:
{
lean_object* v_res_1497_; 
v_res_1497_ = l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0___redArg(v_as_1493_, v_k_1494_, v_x_1495_, v_x_1496_);
lean_dec_ref(v_k_1494_);
lean_dec_ref(v_as_1493_);
return v_res_1497_;
}
}
static lean_object* _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__0(void){
_start:
{
lean_object* v___x_1498_; 
v___x_1498_ = l_Lean_Meta_DiscrTree_instInhabitedTrie___redArg();
return v___x_1498_;
}
}
static lean_object* _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__1(void){
_start:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1499_ = lean_obj_once(&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__0, &l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__0_once, _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__0);
v___x_1500_ = lean_box(0);
v___x_1501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1501_, 0, v___x_1500_);
lean_ctor_set(v___x_1501_, 1, v___x_1499_);
return v___x_1501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg(lean_object* v_todo_1502_, lean_object* v_c_1503_, lean_object* v_result_1504_, lean_object* v_a_1505_, lean_object* v_a_1506_, lean_object* v_a_1507_, lean_object* v_a_1508_){
_start:
{
lean_object* v_vs_1510_; lean_object* v_children_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; uint8_t v___x_1514_; 
v_vs_1510_ = lean_ctor_get(v_c_1503_, 0);
lean_inc_ref(v_vs_1510_);
v_children_1511_ = lean_ctor_get(v_c_1503_, 1);
lean_inc_ref(v_children_1511_);
lean_dec_ref(v_c_1503_);
v___x_1512_ = lean_array_get_size(v_todo_1502_);
v___x_1513_ = lean_unsigned_to_nat(0u);
v___x_1514_ = lean_nat_dec_eq(v___x_1512_, v___x_1513_);
if (v___x_1514_ == 0)
{
lean_object* v___x_1515_; uint8_t v___x_1516_; 
lean_dec_ref(v_vs_1510_);
v___x_1515_ = lean_array_get_size(v_children_1511_);
v___x_1516_ = lean_nat_dec_eq(v___x_1515_, v___x_1513_);
if (v___x_1516_ == 0)
{
lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v_e_1522_; lean_object* v_todo_1523_; lean_object* v_first_1524_; uint8_t v___x_1525_; lean_object* v___x_1526_; 
v___x_1517_ = l_Lean_instInhabitedExpr;
v___x_1518_ = lean_box(0);
v___x_1519_ = lean_obj_once(&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__1, &l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__1_once, _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__1);
v___x_1520_ = lean_unsigned_to_nat(1u);
v___x_1521_ = lean_nat_sub(v___x_1512_, v___x_1520_);
v_e_1522_ = lean_array_get(v___x_1517_, v_todo_1502_, v___x_1521_);
lean_dec(v___x_1521_);
v_todo_1523_ = lean_array_pop(v_todo_1502_);
v_first_1524_ = lean_array_get_borrowed(v___x_1519_, v_children_1511_, v___x_1513_);
v___x_1525_ = 1;
v___x_1526_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs(v_e_1522_, v___x_1525_, v___x_1516_, v_a_1505_, v_a_1506_, v_a_1507_, v_a_1508_);
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v_a_1527_; lean_object* v___x_1529_; uint8_t v_isShared_1530_; uint8_t v_isSharedCheck_1560_; 
v_a_1527_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1560_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1529_ = v___x_1526_;
v_isShared_1530_ = v_isSharedCheck_1560_;
goto v_resetjp_1528_;
}
else
{
lean_inc(v_a_1527_);
lean_dec(v___x_1526_);
v___x_1529_ = lean_box(0);
v_isShared_1530_ = v_isSharedCheck_1560_;
goto v_resetjp_1528_;
}
v_resetjp_1528_:
{
lean_object* v_fst_1531_; lean_object* v_snd_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1559_; 
v_fst_1531_ = lean_ctor_get(v_a_1527_, 0);
v_snd_1532_ = lean_ctor_get(v_a_1527_, 1);
v_isSharedCheck_1559_ = !lean_is_exclusive(v_a_1527_);
if (v_isSharedCheck_1559_ == 0)
{
v___x_1534_ = v_a_1527_;
v_isShared_1535_ = v_isSharedCheck_1559_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_snd_1532_);
lean_inc(v_fst_1531_);
lean_dec(v_a_1527_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1559_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___y_1537_; lean_object* v_a_1538_; lean_object* v_fst_1551_; lean_object* v_snd_1552_; uint8_t v___x_1553_; 
v_fst_1551_ = lean_ctor_get(v_first_1524_, 0);
v_snd_1552_ = lean_ctor_get(v_first_1524_, 1);
v___x_1553_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_fst_1551_, v___x_1518_);
if (v___x_1553_ == 0)
{
lean_object* v___x_1555_; 
lean_inc_ref(v_result_1504_);
if (v_isShared_1530_ == 0)
{
lean_ctor_set(v___x_1529_, 0, v_result_1504_);
v___x_1555_ = v___x_1529_;
goto v_reusejp_1554_;
}
else
{
lean_object* v_reuseFailAlloc_1556_; 
v_reuseFailAlloc_1556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1556_, 0, v_result_1504_);
v___x_1555_ = v_reuseFailAlloc_1556_;
goto v_reusejp_1554_;
}
v_reusejp_1554_:
{
v___y_1537_ = v___x_1555_;
v_a_1538_ = v_result_1504_;
goto v___jp_1536_;
}
}
else
{
lean_object* v___x_1557_; 
lean_del_object(v___x_1529_);
lean_inc(v_snd_1552_);
lean_inc_ref(v_todo_1523_);
v___x_1557_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg(v_todo_1523_, v_snd_1552_, v_result_1504_, v_a_1505_, v_a_1506_, v_a_1507_, v_a_1508_);
if (lean_obj_tag(v___x_1557_) == 0)
{
lean_object* v_a_1558_; 
v_a_1558_ = lean_ctor_get(v___x_1557_, 0);
lean_inc(v_a_1558_);
v___y_1537_ = v___x_1557_;
v_a_1538_ = v_a_1558_;
goto v___jp_1536_;
}
else
{
lean_del_object(v___x_1534_);
lean_dec(v_snd_1532_);
lean_dec(v_fst_1531_);
lean_dec_ref(v_todo_1523_);
lean_dec_ref(v_children_1511_);
return v___x_1557_;
}
}
v___jp_1536_:
{
if (lean_obj_tag(v_fst_1531_) == 0)
{
lean_dec_ref(v_a_1538_);
lean_del_object(v___x_1534_);
lean_dec(v_snd_1532_);
lean_dec_ref(v_todo_1523_);
lean_dec_ref(v_children_1511_);
return v___y_1537_;
}
else
{
uint8_t v___x_1539_; 
v___x_1539_ = lean_nat_dec_lt(v___x_1513_, v___x_1515_);
if (v___x_1539_ == 0)
{
lean_dec_ref(v_a_1538_);
lean_del_object(v___x_1534_);
lean_dec(v_snd_1532_);
lean_dec(v_fst_1531_);
lean_dec_ref(v_todo_1523_);
lean_dec_ref(v_children_1511_);
return v___y_1537_;
}
else
{
lean_object* v___x_1540_; uint8_t v___x_1541_; 
v___x_1540_ = lean_nat_sub(v___x_1515_, v___x_1520_);
v___x_1541_ = lean_nat_dec_le(v___x_1513_, v___x_1540_);
if (v___x_1541_ == 0)
{
lean_dec(v___x_1540_);
lean_dec_ref(v_a_1538_);
lean_del_object(v___x_1534_);
lean_dec(v_snd_1532_);
lean_dec(v_fst_1531_);
lean_dec_ref(v_todo_1523_);
lean_dec_ref(v_children_1511_);
return v___y_1537_;
}
else
{
lean_object* v___x_1542_; lean_object* v___x_1544_; 
v___x_1542_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__2));
if (v_isShared_1535_ == 0)
{
lean_ctor_set(v___x_1534_, 1, v___x_1542_);
v___x_1544_ = v___x_1534_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v_fst_1531_);
lean_ctor_set(v_reuseFailAlloc_1550_, 1, v___x_1542_);
v___x_1544_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
lean_object* v___x_1545_; 
v___x_1545_ = l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0___redArg(v_children_1511_, v___x_1544_, v___x_1513_, v___x_1540_);
lean_dec_ref(v___x_1544_);
lean_dec_ref(v_children_1511_);
if (lean_obj_tag(v___x_1545_) == 0)
{
lean_dec_ref(v_a_1538_);
lean_dec(v_snd_1532_);
lean_dec_ref(v_todo_1523_);
return v___y_1537_;
}
else
{
lean_object* v_val_1546_; lean_object* v_snd_1547_; lean_object* v___x_1548_; 
lean_dec_ref(v___y_1537_);
v_val_1546_ = lean_ctor_get(v___x_1545_, 0);
lean_inc(v_val_1546_);
lean_dec_ref_known(v___x_1545_, 1);
v_snd_1547_ = lean_ctor_get(v_val_1546_, 1);
lean_inc(v_snd_1547_);
lean_dec(v_val_1546_);
v___x_1548_ = l_Array_append___redArg(v_todo_1523_, v_snd_1532_);
lean_dec(v_snd_1532_);
v_todo_1502_ = v___x_1548_;
v_c_1503_ = v_snd_1547_;
v_result_1504_ = v_a_1538_;
goto _start;
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
lean_object* v_a_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1568_; 
lean_dec_ref(v_todo_1523_);
lean_dec_ref(v_children_1511_);
lean_dec_ref(v_result_1504_);
v_a_1561_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1568_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1563_ = v___x_1526_;
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_a_1561_);
lean_dec(v___x_1526_);
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
else
{
lean_object* v___x_1569_; 
lean_dec_ref(v_children_1511_);
lean_dec_ref(v_todo_1502_);
v___x_1569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1569_, 0, v_result_1504_);
return v___x_1569_;
}
}
else
{
lean_object* v___x_1570_; lean_object* v___x_1571_; 
lean_dec_ref(v_children_1511_);
lean_dec_ref(v_todo_1502_);
v___x_1570_ = l_Array_append___redArg(v_result_1504_, v_vs_1510_);
lean_dec_ref(v_vs_1510_);
v___x_1571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1571_, 0, v___x_1570_);
return v___x_1571_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___boxed(lean_object* v_todo_1572_, lean_object* v_c_1573_, lean_object* v_result_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_, lean_object* v_a_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_){
_start:
{
lean_object* v_res_1580_; 
v_res_1580_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg(v_todo_1572_, v_c_1573_, v_result_1574_, v_a_1575_, v_a_1576_, v_a_1577_, v_a_1578_);
lean_dec(v_a_1578_);
lean_dec_ref(v_a_1577_);
lean_dec(v_a_1576_);
lean_dec_ref(v_a_1575_);
return v_res_1580_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop(lean_object* v_00_u03b1_1581_, lean_object* v_todo_1582_, lean_object* v_c_1583_, lean_object* v_result_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_, lean_object* v_a_1588_){
_start:
{
lean_object* v___x_1590_; 
v___x_1590_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg(v_todo_1582_, v_c_1583_, v_result_1584_, v_a_1585_, v_a_1586_, v_a_1587_, v_a_1588_);
return v___x_1590_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___boxed(lean_object* v_00_u03b1_1591_, lean_object* v_todo_1592_, lean_object* v_c_1593_, lean_object* v_result_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_, lean_object* v_a_1597_, lean_object* v_a_1598_, lean_object* v_a_1599_){
_start:
{
lean_object* v_res_1600_; 
v_res_1600_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop(v_00_u03b1_1591_, v_todo_1592_, v_c_1593_, v_result_1594_, v_a_1595_, v_a_1596_, v_a_1597_, v_a_1598_);
lean_dec(v_a_1598_);
lean_dec_ref(v_a_1597_);
lean_dec(v_a_1596_);
lean_dec_ref(v_a_1595_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0(lean_object* v_00_u03b1_1601_, lean_object* v_as_1602_, lean_object* v_k_1603_, lean_object* v_x_1604_, lean_object* v_x_1605_, lean_object* v_x_1606_){
_start:
{
lean_object* v___x_1607_; 
v___x_1607_ = l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0___redArg(v_as_1602_, v_k_1603_, v_x_1604_, v_x_1605_);
return v___x_1607_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0___boxed(lean_object* v_00_u03b1_1608_, lean_object* v_as_1609_, lean_object* v_k_1610_, lean_object* v_x_1611_, lean_object* v_x_1612_, lean_object* v_x_1613_){
_start:
{
lean_object* v_res_1614_; 
v_res_1614_ = l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0(v_00_u03b1_1608_, v_as_1609_, v_k_1610_, v_x_1611_, v_x_1612_, v_x_1613_);
lean_dec_ref(v_k_1610_);
lean_dec_ref(v_as_1609_);
return v_res_1614_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot___redArg(lean_object* v_d_1615_, lean_object* v_k_1616_, lean_object* v_args_1617_, lean_object* v_result_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_, lean_object* v_a_1622_){
_start:
{
lean_object* v___x_1624_; 
v___x_1624_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg(v_d_1615_, v_k_1616_);
if (lean_obj_tag(v___x_1624_) == 0)
{
lean_object* v___x_1625_; 
lean_dec_ref(v_args_1617_);
v___x_1625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1625_, 0, v_result_1618_);
return v___x_1625_;
}
else
{
lean_object* v_val_1626_; lean_object* v___x_1627_; 
v_val_1626_ = lean_ctor_get(v___x_1624_, 0);
lean_inc(v_val_1626_);
lean_dec_ref_known(v___x_1624_, 1);
v___x_1627_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg(v_args_1617_, v_val_1626_, v_result_1618_, v_a_1619_, v_a_1620_, v_a_1621_, v_a_1622_);
return v___x_1627_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot___redArg___boxed(lean_object* v_d_1628_, lean_object* v_k_1629_, lean_object* v_args_1630_, lean_object* v_result_1631_, lean_object* v_a_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_){
_start:
{
lean_object* v_res_1637_; 
v_res_1637_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot___redArg(v_d_1628_, v_k_1629_, v_args_1630_, v_result_1631_, v_a_1632_, v_a_1633_, v_a_1634_, v_a_1635_);
lean_dec(v_a_1635_);
lean_dec_ref(v_a_1634_);
lean_dec(v_a_1633_);
lean_dec_ref(v_a_1632_);
lean_dec(v_k_1629_);
lean_dec_ref(v_d_1628_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot(lean_object* v_00_u03b1_1638_, lean_object* v_d_1639_, lean_object* v_k_1640_, lean_object* v_args_1641_, lean_object* v_result_1642_, lean_object* v_a_1643_, lean_object* v_a_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_){
_start:
{
lean_object* v___x_1648_; 
v___x_1648_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot___redArg(v_d_1639_, v_k_1640_, v_args_1641_, v_result_1642_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_);
return v___x_1648_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot___boxed(lean_object* v_00_u03b1_1649_, lean_object* v_d_1650_, lean_object* v_k_1651_, lean_object* v_args_1652_, lean_object* v_result_1653_, lean_object* v_a_1654_, lean_object* v_a_1655_, lean_object* v_a_1656_, lean_object* v_a_1657_, lean_object* v_a_1658_){
_start:
{
lean_object* v_res_1659_; 
v_res_1659_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot(v_00_u03b1_1649_, v_d_1650_, v_k_1651_, v_args_1652_, v_result_1653_, v_a_1654_, v_a_1655_, v_a_1656_, v_a_1657_);
lean_dec(v_a_1657_);
lean_dec_ref(v_a_1656_);
lean_dec(v_a_1655_);
lean_dec_ref(v_a_1654_);
lean_dec(v_k_1651_);
lean_dec_ref(v_d_1650_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg___lam__0(lean_object* v_e_1660_, uint8_t v___x_1661_, lean_object* v_result_1662_, lean_object* v_d_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_){
_start:
{
lean_object* v___x_1669_; 
v___x_1669_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs(v_e_1660_, v___x_1661_, v___x_1661_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_);
if (lean_obj_tag(v___x_1669_) == 0)
{
lean_object* v_a_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1713_; 
v_a_1670_ = lean_ctor_get(v___x_1669_, 0);
v_isSharedCheck_1713_ = !lean_is_exclusive(v___x_1669_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1672_ = v___x_1669_;
v_isShared_1673_ = v_isSharedCheck_1713_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_a_1670_);
lean_dec(v___x_1669_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1713_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v_fst_1674_; 
v_fst_1674_ = lean_ctor_get(v_a_1670_, 0);
lean_inc(v_fst_1674_);
if (lean_obj_tag(v_fst_1674_) == 0)
{
lean_object* v___x_1676_; uint8_t v_isShared_1677_; uint8_t v_isSharedCheck_1684_; 
v_isSharedCheck_1684_ = !lean_is_exclusive(v_a_1670_);
if (v_isSharedCheck_1684_ == 0)
{
lean_object* v_unused_1685_; lean_object* v_unused_1686_; 
v_unused_1685_ = lean_ctor_get(v_a_1670_, 1);
lean_dec(v_unused_1685_);
v_unused_1686_ = lean_ctor_get(v_a_1670_, 0);
lean_dec(v_unused_1686_);
v___x_1676_ = v_a_1670_;
v_isShared_1677_ = v_isSharedCheck_1684_;
goto v_resetjp_1675_;
}
else
{
lean_dec(v_a_1670_);
v___x_1676_ = lean_box(0);
v_isShared_1677_ = v_isSharedCheck_1684_;
goto v_resetjp_1675_;
}
v_resetjp_1675_:
{
lean_object* v___x_1679_; 
if (v_isShared_1677_ == 0)
{
lean_ctor_set(v___x_1676_, 1, v_result_1662_);
v___x_1679_ = v___x_1676_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v_fst_1674_);
lean_ctor_set(v_reuseFailAlloc_1683_, 1, v_result_1662_);
v___x_1679_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
lean_object* v___x_1681_; 
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 0, v___x_1679_);
v___x_1681_ = v___x_1672_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v___x_1679_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
}
}
}
}
else
{
lean_object* v_snd_1687_; lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1711_; 
lean_del_object(v___x_1672_);
v_snd_1687_ = lean_ctor_get(v_a_1670_, 1);
v_isSharedCheck_1711_ = !lean_is_exclusive(v_a_1670_);
if (v_isSharedCheck_1711_ == 0)
{
lean_object* v_unused_1712_; 
v_unused_1712_ = lean_ctor_get(v_a_1670_, 0);
lean_dec(v_unused_1712_);
v___x_1689_ = v_a_1670_;
v_isShared_1690_ = v_isSharedCheck_1711_;
goto v_resetjp_1688_;
}
else
{
lean_inc(v_snd_1687_);
lean_dec(v_a_1670_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1711_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
lean_object* v___x_1691_; 
v___x_1691_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchRoot___redArg(v_d_1663_, v_fst_1674_, v_snd_1687_, v_result_1662_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_);
if (lean_obj_tag(v___x_1691_) == 0)
{
lean_object* v_a_1692_; lean_object* v___x_1694_; uint8_t v_isShared_1695_; uint8_t v_isSharedCheck_1702_; 
v_a_1692_ = lean_ctor_get(v___x_1691_, 0);
v_isSharedCheck_1702_ = !lean_is_exclusive(v___x_1691_);
if (v_isSharedCheck_1702_ == 0)
{
v___x_1694_ = v___x_1691_;
v_isShared_1695_ = v_isSharedCheck_1702_;
goto v_resetjp_1693_;
}
else
{
lean_inc(v_a_1692_);
lean_dec(v___x_1691_);
v___x_1694_ = lean_box(0);
v_isShared_1695_ = v_isSharedCheck_1702_;
goto v_resetjp_1693_;
}
v_resetjp_1693_:
{
lean_object* v___x_1697_; 
if (v_isShared_1690_ == 0)
{
lean_ctor_set(v___x_1689_, 1, v_a_1692_);
v___x_1697_ = v___x_1689_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v_fst_1674_);
lean_ctor_set(v_reuseFailAlloc_1701_, 1, v_a_1692_);
v___x_1697_ = v_reuseFailAlloc_1701_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
lean_object* v___x_1699_; 
if (v_isShared_1695_ == 0)
{
lean_ctor_set(v___x_1694_, 0, v___x_1697_);
v___x_1699_ = v___x_1694_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v___x_1697_);
v___x_1699_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
return v___x_1699_;
}
}
}
}
else
{
lean_object* v_a_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1710_; 
lean_del_object(v___x_1689_);
lean_dec(v_fst_1674_);
v_a_1703_ = lean_ctor_get(v___x_1691_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v___x_1691_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1705_ = v___x_1691_;
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_a_1703_);
lean_dec(v___x_1691_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v___x_1708_; 
if (v_isShared_1706_ == 0)
{
v___x_1708_ = v___x_1705_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v_a_1703_);
v___x_1708_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
return v___x_1708_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1721_; 
lean_dec_ref(v_result_1662_);
v_a_1714_ = lean_ctor_get(v___x_1669_, 0);
v_isSharedCheck_1721_ = !lean_is_exclusive(v___x_1669_);
if (v_isSharedCheck_1721_ == 0)
{
v___x_1716_ = v___x_1669_;
v_isShared_1717_ = v_isSharedCheck_1721_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_a_1714_);
lean_dec(v___x_1669_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1721_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v___x_1719_; 
if (v_isShared_1717_ == 0)
{
v___x_1719_ = v___x_1716_;
goto v_reusejp_1718_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v_a_1714_);
v___x_1719_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1718_;
}
v_reusejp_1718_:
{
return v___x_1719_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg___lam__0___boxed(lean_object* v_e_1722_, lean_object* v___x_1723_, lean_object* v_result_1724_, lean_object* v_d_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_){
_start:
{
uint8_t v___x_802__boxed_1731_; lean_object* v_res_1732_; 
v___x_802__boxed_1731_ = lean_unbox(v___x_1723_);
v_res_1732_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg___lam__0(v_e_1722_, v___x_802__boxed_1731_, v_result_1724_, v_d_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_);
lean_dec(v___y_1729_);
lean_dec_ref(v___y_1728_);
lean_dec(v___y_1727_);
lean_dec_ref(v___y_1726_);
lean_dec_ref(v_d_1725_);
return v_res_1732_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg(lean_object* v_d_1733_, lean_object* v_e_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_){
_start:
{
lean_object* v___y_1741_; lean_object* v___x_1758_; uint8_t v_transparency_1759_; lean_object* v_result_1760_; uint8_t v___x_1761_; uint8_t v___x_1762_; uint8_t v___x_1763_; 
v___x_1758_ = l_Lean_Meta_Context_config(v_a_1735_);
v_transparency_1759_ = lean_ctor_get_uint8(v___x_1758_, 9);
lean_dec_ref(v___x_1758_);
v_result_1760_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg(v_d_1733_);
v___x_1761_ = 1;
v___x_1762_ = 2;
v___x_1763_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1759_, v___x_1762_);
if (v___x_1763_ == 0)
{
lean_object* v_keyedConfig_1764_; uint8_t v_trackZetaDelta_1765_; lean_object* v_zetaDeltaSet_1766_; lean_object* v_lctx_1767_; lean_object* v_localInstances_1768_; lean_object* v_defEqCtx_x3f_1769_; lean_object* v_synthPendingDepth_1770_; lean_object* v_customCanUnfoldPredicate_x3f_1771_; uint8_t v_univApprox_1772_; uint8_t v_inTypeClassResolution_1773_; uint8_t v_cacheInferType_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v_keyedConfig_1764_ = lean_ctor_get(v_a_1735_, 0);
v_trackZetaDelta_1765_ = lean_ctor_get_uint8(v_a_1735_, sizeof(void*)*7);
v_zetaDeltaSet_1766_ = lean_ctor_get(v_a_1735_, 1);
v_lctx_1767_ = lean_ctor_get(v_a_1735_, 2);
v_localInstances_1768_ = lean_ctor_get(v_a_1735_, 3);
v_defEqCtx_x3f_1769_ = lean_ctor_get(v_a_1735_, 4);
v_synthPendingDepth_1770_ = lean_ctor_get(v_a_1735_, 5);
v_customCanUnfoldPredicate_x3f_1771_ = lean_ctor_get(v_a_1735_, 6);
v_univApprox_1772_ = lean_ctor_get_uint8(v_a_1735_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1773_ = lean_ctor_get_uint8(v_a_1735_, sizeof(void*)*7 + 2);
v_cacheInferType_1774_ = lean_ctor_get_uint8(v_a_1735_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1764_);
v___x_1775_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1762_, v_keyedConfig_1764_);
lean_inc(v_customCanUnfoldPredicate_x3f_1771_);
lean_inc(v_synthPendingDepth_1770_);
lean_inc(v_defEqCtx_x3f_1769_);
lean_inc_ref(v_localInstances_1768_);
lean_inc_ref(v_lctx_1767_);
lean_inc(v_zetaDeltaSet_1766_);
v___x_1776_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1776_, 0, v___x_1775_);
lean_ctor_set(v___x_1776_, 1, v_zetaDeltaSet_1766_);
lean_ctor_set(v___x_1776_, 2, v_lctx_1767_);
lean_ctor_set(v___x_1776_, 3, v_localInstances_1768_);
lean_ctor_set(v___x_1776_, 4, v_defEqCtx_x3f_1769_);
lean_ctor_set(v___x_1776_, 5, v_synthPendingDepth_1770_);
lean_ctor_set(v___x_1776_, 6, v_customCanUnfoldPredicate_x3f_1771_);
lean_ctor_set_uint8(v___x_1776_, sizeof(void*)*7, v_trackZetaDelta_1765_);
lean_ctor_set_uint8(v___x_1776_, sizeof(void*)*7 + 1, v_univApprox_1772_);
lean_ctor_set_uint8(v___x_1776_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1773_);
lean_ctor_set_uint8(v___x_1776_, sizeof(void*)*7 + 3, v_cacheInferType_1774_);
v___x_1777_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg___lam__0(v_e_1734_, v___x_1761_, v_result_1760_, v_d_1733_, v___x_1776_, v_a_1736_, v_a_1737_, v_a_1738_);
lean_dec_ref_known(v___x_1776_, 7);
v___y_1741_ = v___x_1777_;
goto v___jp_1740_;
}
else
{
lean_object* v___x_1778_; 
v___x_1778_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg___lam__0(v_e_1734_, v___x_1761_, v_result_1760_, v_d_1733_, v_a_1735_, v_a_1736_, v_a_1737_, v_a_1738_);
v___y_1741_ = v___x_1778_;
goto v___jp_1740_;
}
v___jp_1740_:
{
if (lean_obj_tag(v___y_1741_) == 0)
{
lean_object* v_a_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1749_; 
v_a_1742_ = lean_ctor_get(v___y_1741_, 0);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___y_1741_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1744_ = v___y_1741_;
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_a_1742_);
lean_dec(v___y_1741_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v___x_1747_; 
if (v_isShared_1745_ == 0)
{
v___x_1747_ = v___x_1744_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_a_1742_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
}
else
{
lean_object* v_a_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1757_; 
v_a_1750_ = lean_ctor_get(v___y_1741_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___y_1741_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1752_ = v___y_1741_;
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_a_1750_);
lean_dec(v___y_1741_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1755_; 
if (v_isShared_1753_ == 0)
{
v___x_1755_ = v___x_1752_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_a_1750_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg___boxed(lean_object* v_d_1779_, lean_object* v_e_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_, lean_object* v_a_1785_){
_start:
{
lean_object* v_res_1786_; 
v_res_1786_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg(v_d_1779_, v_e_1780_, v_a_1781_, v_a_1782_, v_a_1783_, v_a_1784_);
lean_dec(v_a_1784_);
lean_dec_ref(v_a_1783_);
lean_dec(v_a_1782_);
lean_dec_ref(v_a_1781_);
lean_dec_ref(v_d_1779_);
return v_res_1786_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore(lean_object* v_00_u03b1_1787_, lean_object* v_d_1788_, lean_object* v_e_1789_, lean_object* v_a_1790_, lean_object* v_a_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_){
_start:
{
lean_object* v___x_1795_; 
v___x_1795_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg(v_d_1788_, v_e_1789_, v_a_1790_, v_a_1791_, v_a_1792_, v_a_1793_);
return v___x_1795_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___boxed(lean_object* v_00_u03b1_1796_, lean_object* v_d_1797_, lean_object* v_e_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_){
_start:
{
lean_object* v_res_1804_; 
v_res_1804_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore(v_00_u03b1_1796_, v_d_1797_, v_e_1798_, v_a_1799_, v_a_1800_, v_a_1801_, v_a_1802_);
lean_dec(v_a_1802_);
lean_dec_ref(v_a_1801_);
lean_dec(v_a_1800_);
lean_dec_ref(v_a_1799_);
lean_dec_ref(v_d_1797_);
return v_res_1804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatch___redArg(lean_object* v_d_1805_, lean_object* v_e_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_, lean_object* v_a_1810_){
_start:
{
lean_object* v___x_1812_; 
v___x_1812_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg(v_d_1805_, v_e_1806_, v_a_1807_, v_a_1808_, v_a_1809_, v_a_1810_);
if (lean_obj_tag(v___x_1812_) == 0)
{
lean_object* v_a_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1821_; 
v_a_1813_ = lean_ctor_get(v___x_1812_, 0);
v_isSharedCheck_1821_ = !lean_is_exclusive(v___x_1812_);
if (v_isSharedCheck_1821_ == 0)
{
v___x_1815_ = v___x_1812_;
v_isShared_1816_ = v_isSharedCheck_1821_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_a_1813_);
lean_dec(v___x_1812_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1821_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v_snd_1817_; lean_object* v___x_1819_; 
v_snd_1817_ = lean_ctor_get(v_a_1813_, 1);
lean_inc(v_snd_1817_);
lean_dec(v_a_1813_);
if (v_isShared_1816_ == 0)
{
lean_ctor_set(v___x_1815_, 0, v_snd_1817_);
v___x_1819_ = v___x_1815_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v_snd_1817_);
v___x_1819_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
return v___x_1819_;
}
}
}
else
{
lean_object* v_a_1822_; lean_object* v___x_1824_; uint8_t v_isShared_1825_; uint8_t v_isSharedCheck_1829_; 
v_a_1822_ = lean_ctor_get(v___x_1812_, 0);
v_isSharedCheck_1829_ = !lean_is_exclusive(v___x_1812_);
if (v_isSharedCheck_1829_ == 0)
{
v___x_1824_ = v___x_1812_;
v_isShared_1825_ = v_isSharedCheck_1829_;
goto v_resetjp_1823_;
}
else
{
lean_inc(v_a_1822_);
lean_dec(v___x_1812_);
v___x_1824_ = lean_box(0);
v_isShared_1825_ = v_isSharedCheck_1829_;
goto v_resetjp_1823_;
}
v_resetjp_1823_:
{
lean_object* v___x_1827_; 
if (v_isShared_1825_ == 0)
{
v___x_1827_ = v___x_1824_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1828_; 
v_reuseFailAlloc_1828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1828_, 0, v_a_1822_);
v___x_1827_ = v_reuseFailAlloc_1828_;
goto v_reusejp_1826_;
}
v_reusejp_1826_:
{
return v___x_1827_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatch___redArg___boxed(lean_object* v_d_1830_, lean_object* v_e_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_, lean_object* v_a_1834_, lean_object* v_a_1835_, lean_object* v_a_1836_){
_start:
{
lean_object* v_res_1837_; 
v_res_1837_ = l_Lean_Meta_DiscrTree_getMatch___redArg(v_d_1830_, v_e_1831_, v_a_1832_, v_a_1833_, v_a_1834_, v_a_1835_);
lean_dec(v_a_1835_);
lean_dec_ref(v_a_1834_);
lean_dec(v_a_1833_);
lean_dec_ref(v_a_1832_);
lean_dec_ref(v_d_1830_);
return v_res_1837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatch(lean_object* v_00_u03b1_1838_, lean_object* v_d_1839_, lean_object* v_e_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_){
_start:
{
lean_object* v___x_1846_; 
v___x_1846_ = l_Lean_Meta_DiscrTree_getMatch___redArg(v_d_1839_, v_e_1840_, v_a_1841_, v_a_1842_, v_a_1843_, v_a_1844_);
return v___x_1846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatch___boxed(lean_object* v_00_u03b1_1847_, lean_object* v_d_1848_, lean_object* v_e_1849_, lean_object* v_a_1850_, lean_object* v_a_1851_, lean_object* v_a_1852_, lean_object* v_a_1853_, lean_object* v_a_1854_){
_start:
{
lean_object* v_res_1855_; 
v_res_1855_ = l_Lean_Meta_DiscrTree_getMatch(v_00_u03b1_1847_, v_d_1848_, v_e_1849_, v_a_1850_, v_a_1851_, v_a_1852_, v_a_1853_);
lean_dec(v_a_1853_);
lean_dec_ref(v_a_1852_);
lean_dec(v_a_1851_);
lean_dec_ref(v_a_1850_);
lean_dec_ref(v_d_1848_);
return v_res_1855_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix___redArg(lean_object* v_d_1856_, lean_object* v_k_1857_, lean_object* v_a_1858_, lean_object* v_a_1859_, lean_object* v_a_1860_, lean_object* v_a_1861_){
_start:
{
lean_object* v_k_1868_; lean_object* v___y_1869_; lean_object* v___y_1870_; lean_object* v___y_1871_; lean_object* v___y_1872_; 
switch(lean_obj_tag(v_k_1857_))
{
case 4:
{
lean_object* v_a_1885_; lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1897_; 
v_a_1885_ = lean_ctor_get(v_k_1857_, 0);
v_a_1886_ = lean_ctor_get(v_k_1857_, 1);
v_isSharedCheck_1897_ = !lean_is_exclusive(v_k_1857_);
if (v_isSharedCheck_1897_ == 0)
{
v___x_1888_ = v_k_1857_;
v_isShared_1889_ = v_isSharedCheck_1897_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_inc(v_a_1885_);
lean_dec(v_k_1857_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1897_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v_zero_1890_; uint8_t v_isZero_1891_; 
v_zero_1890_ = lean_unsigned_to_nat(0u);
v_isZero_1891_ = lean_nat_dec_eq(v_a_1886_, v_zero_1890_);
if (v_isZero_1891_ == 0)
{
lean_object* v_one_1892_; lean_object* v_n_1893_; lean_object* v___x_1895_; 
v_one_1892_ = lean_unsigned_to_nat(1u);
v_n_1893_ = lean_nat_sub(v_a_1886_, v_one_1892_);
lean_dec(v_a_1886_);
if (v_isShared_1889_ == 0)
{
lean_ctor_set(v___x_1888_, 1, v_n_1893_);
v___x_1895_ = v___x_1888_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v_a_1885_);
lean_ctor_set(v_reuseFailAlloc_1896_, 1, v_n_1893_);
v___x_1895_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
v_k_1868_ = v___x_1895_;
v___y_1869_ = v_a_1858_;
v___y_1870_ = v_a_1859_;
v___y_1871_ = v_a_1860_;
v___y_1872_ = v_a_1861_;
goto v___jp_1867_;
}
}
else
{
lean_del_object(v___x_1888_);
lean_dec(v_a_1886_);
lean_dec(v_a_1885_);
goto v___jp_1863_;
}
}
}
case 3:
{
lean_object* v_a_1898_; lean_object* v_a_1899_; lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1910_; 
v_a_1898_ = lean_ctor_get(v_k_1857_, 0);
v_a_1899_ = lean_ctor_get(v_k_1857_, 1);
v_isSharedCheck_1910_ = !lean_is_exclusive(v_k_1857_);
if (v_isSharedCheck_1910_ == 0)
{
v___x_1901_ = v_k_1857_;
v_isShared_1902_ = v_isSharedCheck_1910_;
goto v_resetjp_1900_;
}
else
{
lean_inc(v_a_1899_);
lean_inc(v_a_1898_);
lean_dec(v_k_1857_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1910_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
lean_object* v_zero_1903_; uint8_t v_isZero_1904_; 
v_zero_1903_ = lean_unsigned_to_nat(0u);
v_isZero_1904_ = lean_nat_dec_eq(v_a_1899_, v_zero_1903_);
if (v_isZero_1904_ == 0)
{
lean_object* v_one_1905_; lean_object* v_n_1906_; lean_object* v___x_1908_; 
v_one_1905_ = lean_unsigned_to_nat(1u);
v_n_1906_ = lean_nat_sub(v_a_1899_, v_one_1905_);
lean_dec(v_a_1899_);
if (v_isShared_1902_ == 0)
{
lean_ctor_set(v___x_1901_, 1, v_n_1906_);
v___x_1908_ = v___x_1901_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v_a_1898_);
lean_ctor_set(v_reuseFailAlloc_1909_, 1, v_n_1906_);
v___x_1908_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
v_k_1868_ = v___x_1908_;
v___y_1869_ = v_a_1858_;
v___y_1870_ = v_a_1859_;
v___y_1871_ = v_a_1860_;
v___y_1872_ = v_a_1861_;
goto v___jp_1867_;
}
}
else
{
lean_del_object(v___x_1901_);
lean_dec(v_a_1899_);
lean_dec(v_a_1898_);
goto v___jp_1863_;
}
}
}
case 6:
{
lean_object* v_a_1911_; lean_object* v_a_1912_; lean_object* v_a_1913_; lean_object* v___x_1915_; uint8_t v_isShared_1916_; uint8_t v_isSharedCheck_1924_; 
v_a_1911_ = lean_ctor_get(v_k_1857_, 0);
v_a_1912_ = lean_ctor_get(v_k_1857_, 1);
v_a_1913_ = lean_ctor_get(v_k_1857_, 2);
v_isSharedCheck_1924_ = !lean_is_exclusive(v_k_1857_);
if (v_isSharedCheck_1924_ == 0)
{
v___x_1915_ = v_k_1857_;
v_isShared_1916_ = v_isSharedCheck_1924_;
goto v_resetjp_1914_;
}
else
{
lean_inc(v_a_1913_);
lean_inc(v_a_1912_);
lean_inc(v_a_1911_);
lean_dec(v_k_1857_);
v___x_1915_ = lean_box(0);
v_isShared_1916_ = v_isSharedCheck_1924_;
goto v_resetjp_1914_;
}
v_resetjp_1914_:
{
lean_object* v_zero_1917_; uint8_t v_isZero_1918_; 
v_zero_1917_ = lean_unsigned_to_nat(0u);
v_isZero_1918_ = lean_nat_dec_eq(v_a_1913_, v_zero_1917_);
if (v_isZero_1918_ == 0)
{
lean_object* v_one_1919_; lean_object* v_n_1920_; lean_object* v___x_1922_; 
v_one_1919_ = lean_unsigned_to_nat(1u);
v_n_1920_ = lean_nat_sub(v_a_1913_, v_one_1919_);
lean_dec(v_a_1913_);
if (v_isShared_1916_ == 0)
{
lean_ctor_set(v___x_1915_, 2, v_n_1920_);
v___x_1922_ = v___x_1915_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_a_1911_);
lean_ctor_set(v_reuseFailAlloc_1923_, 1, v_a_1912_);
lean_ctor_set(v_reuseFailAlloc_1923_, 2, v_n_1920_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
v_k_1868_ = v___x_1922_;
v___y_1869_ = v_a_1858_;
v___y_1870_ = v_a_1859_;
v___y_1871_ = v_a_1860_;
v___y_1872_ = v_a_1861_;
goto v___jp_1867_;
}
}
else
{
lean_del_object(v___x_1915_);
lean_dec(v_a_1913_);
lean_dec(v_a_1912_);
lean_dec(v_a_1911_);
goto v___jp_1863_;
}
}
}
default: 
{
lean_dec(v_k_1857_);
goto v___jp_1863_;
}
}
v___jp_1863_:
{
uint8_t v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1864_ = 0;
v___x_1865_ = lean_box(v___x_1864_);
v___x_1866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1866_, 0, v___x_1865_);
return v___x_1866_;
}
v___jp_1867_:
{
lean_object* v___x_1873_; 
v___x_1873_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg(v_d_1856_, v_k_1868_);
if (lean_obj_tag(v___x_1873_) == 0)
{
v_k_1857_ = v_k_1868_;
v_a_1858_ = v___y_1869_;
v_a_1859_ = v___y_1870_;
v_a_1860_ = v___y_1871_;
v_a_1861_ = v___y_1872_;
goto _start;
}
else
{
lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1883_; 
lean_dec(v_k_1868_);
v_isSharedCheck_1883_ = !lean_is_exclusive(v___x_1873_);
if (v_isSharedCheck_1883_ == 0)
{
lean_object* v_unused_1884_; 
v_unused_1884_ = lean_ctor_get(v___x_1873_, 0);
lean_dec(v_unused_1884_);
v___x_1876_ = v___x_1873_;
v_isShared_1877_ = v_isSharedCheck_1883_;
goto v_resetjp_1875_;
}
else
{
lean_dec(v___x_1873_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1883_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
uint8_t v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1881_; 
v___x_1878_ = 1;
v___x_1879_ = lean_box(v___x_1878_);
if (v_isShared_1877_ == 0)
{
lean_ctor_set_tag(v___x_1876_, 0);
lean_ctor_set(v___x_1876_, 0, v___x_1879_);
v___x_1881_ = v___x_1876_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v___x_1879_);
v___x_1881_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
return v___x_1881_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix___redArg___boxed(lean_object* v_d_1925_, lean_object* v_k_1926_, lean_object* v_a_1927_, lean_object* v_a_1928_, lean_object* v_a_1929_, lean_object* v_a_1930_, lean_object* v_a_1931_){
_start:
{
lean_object* v_res_1932_; 
v_res_1932_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix___redArg(v_d_1925_, v_k_1926_, v_a_1927_, v_a_1928_, v_a_1929_, v_a_1930_);
lean_dec(v_a_1930_);
lean_dec_ref(v_a_1929_);
lean_dec(v_a_1928_);
lean_dec_ref(v_a_1927_);
lean_dec_ref(v_d_1925_);
return v_res_1932_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix(lean_object* v_00_u03b1_1933_, lean_object* v_d_1934_, lean_object* v_k_1935_, lean_object* v_a_1936_, lean_object* v_a_1937_, lean_object* v_a_1938_, lean_object* v_a_1939_){
_start:
{
lean_object* v___x_1941_; 
v___x_1941_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix___redArg(v_d_1934_, v_k_1935_, v_a_1936_, v_a_1937_, v_a_1938_, v_a_1939_);
return v___x_1941_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix___boxed(lean_object* v_00_u03b1_1942_, lean_object* v_d_1943_, lean_object* v_k_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_, lean_object* v_a_1949_){
_start:
{
lean_object* v_res_1950_; 
v_res_1950_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix(v_00_u03b1_1942_, v_d_1943_, v_k_1944_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_);
lean_dec(v_a_1948_);
lean_dec_ref(v_a_1947_);
lean_dec(v_a_1946_);
lean_dec_ref(v_a_1945_);
lean_dec_ref(v_d_1943_);
return v_res_1950_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0___redArg(lean_object* v_numExtra_1951_, size_t v_sz_1952_, size_t v_i_1953_, lean_object* v_bs_1954_){
_start:
{
uint8_t v___x_1955_; 
v___x_1955_ = lean_usize_dec_lt(v_i_1953_, v_sz_1952_);
if (v___x_1955_ == 0)
{
lean_object* v___x_1956_; 
lean_dec(v_numExtra_1951_);
v___x_1956_ = l_unsafeCast___redArg(v_bs_1954_);
lean_dec_ref(v_bs_1954_);
return v___x_1956_;
}
else
{
lean_object* v_v_1957_; lean_object* v___x_1958_; lean_object* v_bs_x27_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; size_t v___x_1962_; size_t v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; 
v_v_1957_ = lean_array_uget(v_bs_1954_, v_i_1953_);
v___x_1958_ = lean_unsigned_to_nat(0u);
v_bs_x27_1959_ = lean_array_uset(v_bs_1954_, v_i_1953_, v___x_1958_);
v___x_1960_ = l_unsafeCast___redArg(v_v_1957_);
lean_dec(v_v_1957_);
lean_inc(v_numExtra_1951_);
v___x_1961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1961_, 0, v___x_1960_);
lean_ctor_set(v___x_1961_, 1, v_numExtra_1951_);
v___x_1962_ = ((size_t)1ULL);
v___x_1963_ = lean_usize_add(v_i_1953_, v___x_1962_);
v___x_1964_ = l_unsafeCast___redArg(v___x_1961_);
lean_dec_ref_known(v___x_1961_, 2);
v___x_1965_ = lean_array_uset(v_bs_x27_1959_, v_i_1953_, v___x_1964_);
v_i_1953_ = v___x_1963_;
v_bs_1954_ = v___x_1965_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0___redArg___boxed(lean_object* v_numExtra_1967_, lean_object* v_sz_1968_, lean_object* v_i_1969_, lean_object* v_bs_1970_){
_start:
{
size_t v_sz_boxed_1971_; size_t v_i_boxed_1972_; lean_object* v_res_1973_; 
v_sz_boxed_1971_ = lean_unbox_usize(v_sz_1968_);
lean_dec(v_sz_1968_);
v_i_boxed_1972_ = lean_unbox_usize(v_i_1969_);
lean_dec(v_i_1969_);
v_res_1973_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0___redArg(v_numExtra_1967_, v_sz_boxed_1971_, v_i_boxed_1972_, v_bs_1970_);
return v_res_1973_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go___redArg(lean_object* v_d_1974_, lean_object* v_e_1975_, lean_object* v_numExtra_1976_, lean_object* v_result_1977_, lean_object* v_a_1978_, lean_object* v_a_1979_, lean_object* v_a_1980_, lean_object* v_a_1981_){
_start:
{
lean_object* v___x_1983_; 
lean_inc_ref(v_e_1975_);
v___x_1983_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg(v_d_1974_, v_e_1975_, v_a_1978_, v_a_1979_, v_a_1980_, v_a_1981_);
if (lean_obj_tag(v___x_1983_) == 0)
{
lean_object* v_a_1984_; lean_object* v___x_1986_; uint8_t v_isShared_1987_; uint8_t v_isSharedCheck_2003_; 
v_a_1984_ = lean_ctor_get(v___x_1983_, 0);
v_isSharedCheck_2003_ = !lean_is_exclusive(v___x_1983_);
if (v_isSharedCheck_2003_ == 0)
{
v___x_1986_ = v___x_1983_;
v_isShared_1987_ = v_isSharedCheck_2003_;
goto v_resetjp_1985_;
}
else
{
lean_inc(v_a_1984_);
lean_dec(v___x_1983_);
v___x_1986_ = lean_box(0);
v_isShared_1987_ = v_isSharedCheck_2003_;
goto v_resetjp_1985_;
}
v_resetjp_1985_:
{
lean_object* v_snd_1988_; size_t v_sz_1989_; size_t v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; uint8_t v___x_1995_; 
v_snd_1988_ = lean_ctor_get(v_a_1984_, 1);
lean_inc(v_snd_1988_);
lean_dec(v_a_1984_);
v_sz_1989_ = lean_array_size(v_snd_1988_);
v___x_1990_ = ((size_t)0ULL);
v___x_1991_ = l_unsafeCast___redArg(v_snd_1988_);
lean_dec(v_snd_1988_);
lean_inc(v_numExtra_1976_);
v___x_1992_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0___redArg(v_numExtra_1976_, v_sz_1989_, v___x_1990_, v___x_1991_);
v___x_1993_ = l_unsafeCast___redArg(v___x_1992_);
lean_dec_ref(v___x_1992_);
v___x_1994_ = l_Array_append___redArg(v_result_1977_, v___x_1993_);
lean_dec(v___x_1993_);
v___x_1995_ = l_Lean_Expr_isApp(v_e_1975_);
if (v___x_1995_ == 0)
{
lean_object* v___x_1997_; 
lean_dec(v_numExtra_1976_);
lean_dec_ref(v_e_1975_);
if (v_isShared_1987_ == 0)
{
lean_ctor_set(v___x_1986_, 0, v___x_1994_);
v___x_1997_ = v___x_1986_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v___x_1994_);
v___x_1997_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
return v___x_1997_;
}
}
else
{
lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; 
lean_del_object(v___x_1986_);
v___x_1999_ = l_Lean_Expr_appFn_x21(v_e_1975_);
lean_dec_ref(v_e_1975_);
v___x_2000_ = lean_unsigned_to_nat(1u);
v___x_2001_ = lean_nat_add(v_numExtra_1976_, v___x_2000_);
lean_dec(v_numExtra_1976_);
v_e_1975_ = v___x_1999_;
v_numExtra_1976_ = v___x_2001_;
v_result_1977_ = v___x_1994_;
goto _start;
}
}
}
else
{
lean_object* v_a_2004_; lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2011_; 
lean_dec_ref(v_result_1977_);
lean_dec(v_numExtra_1976_);
lean_dec_ref(v_e_1975_);
v_a_2004_ = lean_ctor_get(v___x_1983_, 0);
v_isSharedCheck_2011_ = !lean_is_exclusive(v___x_1983_);
if (v_isSharedCheck_2011_ == 0)
{
v___x_2006_ = v___x_1983_;
v_isShared_2007_ = v_isSharedCheck_2011_;
goto v_resetjp_2005_;
}
else
{
lean_inc(v_a_2004_);
lean_dec(v___x_1983_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2011_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
lean_object* v___x_2009_; 
if (v_isShared_2007_ == 0)
{
v___x_2009_ = v___x_2006_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v_a_2004_);
v___x_2009_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
return v___x_2009_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go___redArg___boxed(lean_object* v_d_2012_, lean_object* v_e_2013_, lean_object* v_numExtra_2014_, lean_object* v_result_2015_, lean_object* v_a_2016_, lean_object* v_a_2017_, lean_object* v_a_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_){
_start:
{
lean_object* v_res_2021_; 
v_res_2021_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go___redArg(v_d_2012_, v_e_2013_, v_numExtra_2014_, v_result_2015_, v_a_2016_, v_a_2017_, v_a_2018_, v_a_2019_);
lean_dec(v_a_2019_);
lean_dec_ref(v_a_2018_);
lean_dec(v_a_2017_);
lean_dec_ref(v_a_2016_);
lean_dec_ref(v_d_2012_);
return v_res_2021_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go(lean_object* v_00_u03b1_2022_, lean_object* v_d_2023_, lean_object* v_e_2024_, lean_object* v_numExtra_2025_, lean_object* v_result_2026_, lean_object* v_a_2027_, lean_object* v_a_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_){
_start:
{
lean_object* v___x_2032_; 
v___x_2032_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go___redArg(v_d_2023_, v_e_2024_, v_numExtra_2025_, v_result_2026_, v_a_2027_, v_a_2028_, v_a_2029_, v_a_2030_);
return v___x_2032_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go___boxed(lean_object* v_00_u03b1_2033_, lean_object* v_d_2034_, lean_object* v_e_2035_, lean_object* v_numExtra_2036_, lean_object* v_result_2037_, lean_object* v_a_2038_, lean_object* v_a_2039_, lean_object* v_a_2040_, lean_object* v_a_2041_, lean_object* v_a_2042_){
_start:
{
lean_object* v_res_2043_; 
v_res_2043_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go(v_00_u03b1_2033_, v_d_2034_, v_e_2035_, v_numExtra_2036_, v_result_2037_, v_a_2038_, v_a_2039_, v_a_2040_, v_a_2041_);
lean_dec(v_a_2041_);
lean_dec_ref(v_a_2040_);
lean_dec(v_a_2039_);
lean_dec_ref(v_a_2038_);
lean_dec_ref(v_d_2034_);
return v_res_2043_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0(lean_object* v_00_u03b1_2044_, lean_object* v_numExtra_2045_, size_t v_sz_2046_, size_t v_i_2047_, lean_object* v_bs_2048_){
_start:
{
lean_object* v___x_2049_; 
v___x_2049_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0___redArg(v_numExtra_2045_, v_sz_2046_, v_i_2047_, v_bs_2048_);
return v___x_2049_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0___boxed(lean_object* v_00_u03b1_2050_, lean_object* v_numExtra_2051_, lean_object* v_sz_2052_, lean_object* v_i_2053_, lean_object* v_bs_2054_){
_start:
{
size_t v_sz_boxed_2055_; size_t v_i_boxed_2056_; lean_object* v_res_2057_; 
v_sz_boxed_2055_ = lean_unbox_usize(v_sz_2052_);
lean_dec(v_sz_2052_);
v_i_boxed_2056_ = lean_unbox_usize(v_i_2053_);
lean_dec(v_i_2053_);
v_res_2057_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go_spec__0(v_00_u03b1_2050_, v_numExtra_2051_, v_sz_boxed_2055_, v_i_boxed_2056_, v_bs_2054_);
return v_res_2057_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0___redArg(size_t v_sz_2058_, size_t v_i_2059_, lean_object* v_bs_2060_){
_start:
{
uint8_t v___x_2061_; 
v___x_2061_ = lean_usize_dec_lt(v_i_2059_, v_sz_2058_);
if (v___x_2061_ == 0)
{
lean_object* v___x_2062_; 
v___x_2062_ = l_unsafeCast___redArg(v_bs_2060_);
lean_dec_ref(v_bs_2060_);
return v___x_2062_;
}
else
{
lean_object* v_v_2063_; lean_object* v___x_2064_; lean_object* v_bs_x27_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; size_t v___x_2068_; size_t v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; 
v_v_2063_ = lean_array_uget(v_bs_2060_, v_i_2059_);
v___x_2064_ = lean_unsigned_to_nat(0u);
v_bs_x27_2065_ = lean_array_uset(v_bs_2060_, v_i_2059_, v___x_2064_);
v___x_2066_ = l_unsafeCast___redArg(v_v_2063_);
lean_dec(v_v_2063_);
v___x_2067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2067_, 0, v___x_2066_);
lean_ctor_set(v___x_2067_, 1, v___x_2064_);
v___x_2068_ = ((size_t)1ULL);
v___x_2069_ = lean_usize_add(v_i_2059_, v___x_2068_);
v___x_2070_ = l_unsafeCast___redArg(v___x_2067_);
lean_dec_ref_known(v___x_2067_, 2);
v___x_2071_ = lean_array_uset(v_bs_x27_2065_, v_i_2059_, v___x_2070_);
v_i_2059_ = v___x_2069_;
v_bs_2060_ = v___x_2071_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0___redArg___boxed(lean_object* v_sz_2073_, lean_object* v_i_2074_, lean_object* v_bs_2075_){
_start:
{
size_t v_sz_boxed_2076_; size_t v_i_boxed_2077_; lean_object* v_res_2078_; 
v_sz_boxed_2076_ = lean_unbox_usize(v_sz_2073_);
lean_dec(v_sz_2073_);
v_i_boxed_2077_ = lean_unbox_usize(v_i_2074_);
lean_dec(v_i_2074_);
v_res_2078_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0___redArg(v_sz_boxed_2076_, v_i_boxed_2077_, v_bs_2075_);
return v_res_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchWithExtra___redArg(lean_object* v_d_2079_, lean_object* v_e_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_, lean_object* v_a_2084_){
_start:
{
lean_object* v___x_2086_; 
lean_inc_ref(v_e_2080_);
v___x_2086_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchCore___redArg(v_d_2079_, v_e_2080_, v_a_2081_, v_a_2082_, v_a_2083_, v_a_2084_);
if (lean_obj_tag(v___x_2086_) == 0)
{
lean_object* v_a_2087_; lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2123_; 
v_a_2087_ = lean_ctor_get(v___x_2086_, 0);
v_isSharedCheck_2123_ = !lean_is_exclusive(v___x_2086_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_2089_ = v___x_2086_;
v_isShared_2090_ = v_isSharedCheck_2123_;
goto v_resetjp_2088_;
}
else
{
lean_inc(v_a_2087_);
lean_dec(v___x_2086_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2123_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
lean_object* v_fst_2091_; lean_object* v_snd_2092_; size_t v_sz_2093_; size_t v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; uint8_t v___x_2098_; 
v_fst_2091_ = lean_ctor_get(v_a_2087_, 0);
lean_inc(v_fst_2091_);
v_snd_2092_ = lean_ctor_get(v_a_2087_, 1);
lean_inc(v_snd_2092_);
lean_dec(v_a_2087_);
v_sz_2093_ = lean_array_size(v_snd_2092_);
v___x_2094_ = ((size_t)0ULL);
v___x_2095_ = l_unsafeCast___redArg(v_snd_2092_);
lean_dec(v_snd_2092_);
v___x_2096_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0___redArg(v_sz_2093_, v___x_2094_, v___x_2095_);
v___x_2097_ = l_unsafeCast___redArg(v___x_2096_);
lean_dec_ref(v___x_2096_);
v___x_2098_ = l_Lean_Expr_isApp(v_e_2080_);
if (v___x_2098_ == 0)
{
lean_object* v___x_2100_; 
lean_dec(v_fst_2091_);
lean_dec_ref(v_e_2080_);
if (v_isShared_2090_ == 0)
{
lean_ctor_set(v___x_2089_, 0, v___x_2097_);
v___x_2100_ = v___x_2089_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v___x_2097_);
v___x_2100_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
return v___x_2100_;
}
}
else
{
lean_object* v___x_2102_; 
lean_del_object(v___x_2089_);
v___x_2102_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_mayMatchPrefix___redArg(v_d_2079_, v_fst_2091_, v_a_2081_, v_a_2082_, v_a_2083_, v_a_2084_);
if (lean_obj_tag(v___x_2102_) == 0)
{
lean_object* v_a_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2114_; 
v_a_2103_ = lean_ctor_get(v___x_2102_, 0);
v_isSharedCheck_2114_ = !lean_is_exclusive(v___x_2102_);
if (v_isSharedCheck_2114_ == 0)
{
v___x_2105_ = v___x_2102_;
v_isShared_2106_ = v_isSharedCheck_2114_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_a_2103_);
lean_dec(v___x_2102_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2114_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
uint8_t v___x_2107_; 
v___x_2107_ = lean_unbox(v_a_2103_);
lean_dec(v_a_2103_);
if (v___x_2107_ == 0)
{
lean_object* v___x_2109_; 
lean_dec_ref(v_e_2080_);
if (v_isShared_2106_ == 0)
{
lean_ctor_set(v___x_2105_, 0, v___x_2097_);
v___x_2109_ = v___x_2105_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2110_; 
v_reuseFailAlloc_2110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2110_, 0, v___x_2097_);
v___x_2109_ = v_reuseFailAlloc_2110_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
return v___x_2109_;
}
}
else
{
lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; 
lean_del_object(v___x_2105_);
v___x_2111_ = l_Lean_Expr_appFn_x21(v_e_2080_);
lean_dec_ref(v_e_2080_);
v___x_2112_ = lean_unsigned_to_nat(1u);
v___x_2113_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchWithExtra_go___redArg(v_d_2079_, v___x_2111_, v___x_2112_, v___x_2097_, v_a_2081_, v_a_2082_, v_a_2083_, v_a_2084_);
return v___x_2113_;
}
}
}
else
{
lean_object* v_a_2115_; lean_object* v___x_2117_; uint8_t v_isShared_2118_; uint8_t v_isSharedCheck_2122_; 
lean_dec(v___x_2097_);
lean_dec_ref(v_e_2080_);
v_a_2115_ = lean_ctor_get(v___x_2102_, 0);
v_isSharedCheck_2122_ = !lean_is_exclusive(v___x_2102_);
if (v_isSharedCheck_2122_ == 0)
{
v___x_2117_ = v___x_2102_;
v_isShared_2118_ = v_isSharedCheck_2122_;
goto v_resetjp_2116_;
}
else
{
lean_inc(v_a_2115_);
lean_dec(v___x_2102_);
v___x_2117_ = lean_box(0);
v_isShared_2118_ = v_isSharedCheck_2122_;
goto v_resetjp_2116_;
}
v_resetjp_2116_:
{
lean_object* v___x_2120_; 
if (v_isShared_2118_ == 0)
{
v___x_2120_ = v___x_2117_;
goto v_reusejp_2119_;
}
else
{
lean_object* v_reuseFailAlloc_2121_; 
v_reuseFailAlloc_2121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2121_, 0, v_a_2115_);
v___x_2120_ = v_reuseFailAlloc_2121_;
goto v_reusejp_2119_;
}
v_reusejp_2119_:
{
return v___x_2120_;
}
}
}
}
}
}
else
{
lean_object* v_a_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2131_; 
lean_dec_ref(v_e_2080_);
v_a_2124_ = lean_ctor_get(v___x_2086_, 0);
v_isSharedCheck_2131_ = !lean_is_exclusive(v___x_2086_);
if (v_isSharedCheck_2131_ == 0)
{
v___x_2126_ = v___x_2086_;
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_a_2124_);
lean_dec(v___x_2086_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2129_; 
if (v_isShared_2127_ == 0)
{
v___x_2129_ = v___x_2126_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v_a_2124_);
v___x_2129_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
return v___x_2129_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchWithExtra___redArg___boxed(lean_object* v_d_2132_, lean_object* v_e_2133_, lean_object* v_a_2134_, lean_object* v_a_2135_, lean_object* v_a_2136_, lean_object* v_a_2137_, lean_object* v_a_2138_){
_start:
{
lean_object* v_res_2139_; 
v_res_2139_ = l_Lean_Meta_DiscrTree_getMatchWithExtra___redArg(v_d_2132_, v_e_2133_, v_a_2134_, v_a_2135_, v_a_2136_, v_a_2137_);
lean_dec(v_a_2137_);
lean_dec_ref(v_a_2136_);
lean_dec(v_a_2135_);
lean_dec_ref(v_a_2134_);
lean_dec_ref(v_d_2132_);
return v_res_2139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchWithExtra(lean_object* v_00_u03b1_2140_, lean_object* v_d_2141_, lean_object* v_e_2142_, lean_object* v_a_2143_, lean_object* v_a_2144_, lean_object* v_a_2145_, lean_object* v_a_2146_){
_start:
{
lean_object* v___x_2148_; 
v___x_2148_ = l_Lean_Meta_DiscrTree_getMatchWithExtra___redArg(v_d_2141_, v_e_2142_, v_a_2143_, v_a_2144_, v_a_2145_, v_a_2146_);
return v___x_2148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchWithExtra___boxed(lean_object* v_00_u03b1_2149_, lean_object* v_d_2150_, lean_object* v_e_2151_, lean_object* v_a_2152_, lean_object* v_a_2153_, lean_object* v_a_2154_, lean_object* v_a_2155_, lean_object* v_a_2156_){
_start:
{
lean_object* v_res_2157_; 
v_res_2157_ = l_Lean_Meta_DiscrTree_getMatchWithExtra(v_00_u03b1_2149_, v_d_2150_, v_e_2151_, v_a_2152_, v_a_2153_, v_a_2154_, v_a_2155_);
lean_dec(v_a_2155_);
lean_dec_ref(v_a_2154_);
lean_dec(v_a_2153_);
lean_dec_ref(v_a_2152_);
lean_dec_ref(v_d_2150_);
return v_res_2157_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0(lean_object* v_00_u03b1_2158_, size_t v_sz_2159_, size_t v_i_2160_, lean_object* v_bs_2161_){
_start:
{
lean_object* v___x_2162_; 
v___x_2162_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0___redArg(v_sz_2159_, v_i_2160_, v_bs_2161_);
return v___x_2162_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0___boxed(lean_object* v_00_u03b1_2163_, lean_object* v_sz_2164_, lean_object* v_i_2165_, lean_object* v_bs_2166_){
_start:
{
size_t v_sz_boxed_2167_; size_t v_i_boxed_2168_; lean_object* v_res_2169_; 
v_sz_boxed_2167_ = lean_unbox_usize(v_sz_2164_);
lean_dec(v_sz_2164_);
v_i_boxed_2168_ = lean_unbox_usize(v_i_2165_);
lean_dec(v_i_2165_);
v_res_2169_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_DiscrTree_getMatchWithExtra_spec__0(v_00_u03b1_2163_, v_sz_boxed_2167_, v_i_boxed_2168_, v_bs_2166_);
return v_res_2169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchKeyRootFor(lean_object* v_e_2170_, lean_object* v_a_2171_, lean_object* v_a_2172_, lean_object* v_a_2173_, lean_object* v_a_2174_){
_start:
{
uint8_t v___x_2176_; lean_object* v___x_2177_; 
v___x_2176_ = 1;
v___x_2177_ = l_Lean_Meta_DiscrTree_reduceDT(v_e_2170_, v___x_2176_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_);
if (lean_obj_tag(v___x_2177_) == 0)
{
lean_object* v_a_2178_; lean_object* v___x_2180_; uint8_t v_isShared_2181_; uint8_t v_isSharedCheck_2202_; 
v_a_2178_ = lean_ctor_get(v___x_2177_, 0);
v_isSharedCheck_2202_ = !lean_is_exclusive(v___x_2177_);
if (v_isSharedCheck_2202_ == 0)
{
v___x_2180_ = v___x_2177_;
v_isShared_2181_ = v_isSharedCheck_2202_;
goto v_resetjp_2179_;
}
else
{
lean_inc(v_a_2178_);
lean_dec(v___x_2177_);
v___x_2180_ = lean_box(0);
v_isShared_2181_ = v_isSharedCheck_2202_;
goto v_resetjp_2179_;
}
v_resetjp_2179_:
{
lean_object* v___x_2182_; lean_object* v___y_2184_; lean_object* v___x_2189_; 
v___x_2182_ = l_Lean_Expr_getAppNumArgs(v_a_2178_);
v___x_2189_ = l_Lean_Expr_getAppFn(v_a_2178_);
lean_dec(v_a_2178_);
switch(lean_obj_tag(v___x_2189_))
{
case 9:
{
lean_object* v_a_2190_; lean_object* v___x_2191_; 
v_a_2190_ = lean_ctor_get(v___x_2189_, 0);
lean_inc_ref(v_a_2190_);
lean_dec_ref_known(v___x_2189_, 1);
v___x_2191_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2191_, 0, v_a_2190_);
v___y_2184_ = v___x_2191_;
goto v___jp_2183_;
}
case 1:
{
lean_object* v_fvarId_2192_; lean_object* v___x_2193_; 
v_fvarId_2192_ = lean_ctor_get(v___x_2189_, 0);
lean_inc(v_fvarId_2192_);
lean_dec_ref_known(v___x_2189_, 1);
lean_inc(v___x_2182_);
v___x_2193_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2193_, 0, v_fvarId_2192_);
lean_ctor_set(v___x_2193_, 1, v___x_2182_);
v___y_2184_ = v___x_2193_;
goto v___jp_2183_;
}
case 2:
{
lean_object* v___x_2194_; 
lean_dec_ref_known(v___x_2189_, 1);
v___x_2194_ = lean_box(1);
v___y_2184_ = v___x_2194_;
goto v___jp_2183_;
}
case 11:
{
lean_object* v_typeName_2195_; lean_object* v_idx_2196_; lean_object* v___x_2197_; 
v_typeName_2195_ = lean_ctor_get(v___x_2189_, 0);
lean_inc(v_typeName_2195_);
v_idx_2196_ = lean_ctor_get(v___x_2189_, 1);
lean_inc(v_idx_2196_);
lean_dec_ref_known(v___x_2189_, 3);
lean_inc(v___x_2182_);
v___x_2197_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v___x_2197_, 0, v_typeName_2195_);
lean_ctor_set(v___x_2197_, 1, v_idx_2196_);
lean_ctor_set(v___x_2197_, 2, v___x_2182_);
v___y_2184_ = v___x_2197_;
goto v___jp_2183_;
}
case 7:
{
lean_object* v___x_2198_; 
lean_dec_ref_known(v___x_2189_, 3);
v___x_2198_ = lean_box(5);
v___y_2184_ = v___x_2198_;
goto v___jp_2183_;
}
case 4:
{
lean_object* v_declName_2199_; lean_object* v___x_2200_; 
v_declName_2199_ = lean_ctor_get(v___x_2189_, 0);
lean_inc(v_declName_2199_);
lean_dec_ref_known(v___x_2189_, 2);
lean_inc(v___x_2182_);
v___x_2200_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2200_, 0, v_declName_2199_);
lean_ctor_set(v___x_2200_, 1, v___x_2182_);
v___y_2184_ = v___x_2200_;
goto v___jp_2183_;
}
default: 
{
lean_object* v___x_2201_; 
lean_dec_ref(v___x_2189_);
v___x_2201_ = lean_box(1);
v___y_2184_ = v___x_2201_;
goto v___jp_2183_;
}
}
v___jp_2183_:
{
lean_object* v___x_2185_; lean_object* v___x_2187_; 
v___x_2185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2185_, 0, v___y_2184_);
lean_ctor_set(v___x_2185_, 1, v___x_2182_);
if (v_isShared_2181_ == 0)
{
lean_ctor_set(v___x_2180_, 0, v___x_2185_);
v___x_2187_ = v___x_2180_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v___x_2185_);
v___x_2187_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
return v___x_2187_;
}
}
}
}
else
{
lean_object* v_a_2203_; lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2210_; 
v_a_2203_ = lean_ctor_get(v___x_2177_, 0);
v_isSharedCheck_2210_ = !lean_is_exclusive(v___x_2177_);
if (v_isSharedCheck_2210_ == 0)
{
v___x_2205_ = v___x_2177_;
v_isShared_2206_ = v_isSharedCheck_2210_;
goto v_resetjp_2204_;
}
else
{
lean_inc(v_a_2203_);
lean_dec(v___x_2177_);
v___x_2205_ = lean_box(0);
v_isShared_2206_ = v_isSharedCheck_2210_;
goto v_resetjp_2204_;
}
v_resetjp_2204_:
{
lean_object* v___x_2208_; 
if (v_isShared_2206_ == 0)
{
v___x_2208_ = v___x_2205_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v_a_2203_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
return v___x_2208_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchKeyRootFor___boxed(lean_object* v_e_2211_, lean_object* v_a_2212_, lean_object* v_a_2213_, lean_object* v_a_2214_, lean_object* v_a_2215_, lean_object* v_a_2216_){
_start:
{
lean_object* v_res_2217_; 
v_res_2217_ = l_Lean_Meta_DiscrTree_getMatchKeyRootFor(v_e_2211_, v_a_2212_, v_a_2213_, v_a_2214_, v_a_2215_);
lean_dec(v_a_2215_);
lean_dec_ref(v_a_2214_);
lean_dec(v_a_2213_);
lean_dec_ref(v_a_2212_);
return v_res_2217_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0___redArg(lean_object* v_as_2218_, size_t v_sz_2219_, size_t v_i_2220_, lean_object* v_b_2221_){
_start:
{
uint8_t v___x_2222_; 
v___x_2222_ = lean_usize_dec_lt(v_i_2220_, v_sz_2219_);
if (v___x_2222_ == 0)
{
return v_b_2221_;
}
else
{
lean_object* v_a_2223_; lean_object* v_snd_2224_; lean_object* v___x_2225_; size_t v___x_2226_; size_t v___x_2227_; 
v_a_2223_ = lean_array_uget_borrowed(v_as_2218_, v_i_2220_);
v_snd_2224_ = lean_ctor_get(v_a_2223_, 1);
v___x_2225_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go___redArg(v_snd_2224_, v_b_2221_);
v___x_2226_ = ((size_t)1ULL);
v___x_2227_ = lean_usize_add(v_i_2220_, v___x_2226_);
v_i_2220_ = v___x_2227_;
v_b_2221_ = v___x_2225_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go___redArg(lean_object* v_trie_2229_, lean_object* v_result_2230_){
_start:
{
lean_object* v_vs_2231_; lean_object* v_children_2232_; lean_object* v_result_2233_; size_t v_sz_2234_; size_t v___x_2235_; lean_object* v___x_2236_; 
v_vs_2231_ = lean_ctor_get(v_trie_2229_, 0);
v_children_2232_ = lean_ctor_get(v_trie_2229_, 1);
v_result_2233_ = l_Array_append___redArg(v_result_2230_, v_vs_2231_);
v_sz_2234_ = lean_array_size(v_children_2232_);
v___x_2235_ = ((size_t)0ULL);
v___x_2236_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0___redArg(v_children_2232_, v_sz_2234_, v___x_2235_, v_result_2233_);
return v___x_2236_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go___redArg___boxed(lean_object* v_trie_2237_, lean_object* v_result_2238_){
_start:
{
lean_object* v_res_2239_; 
v_res_2239_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go___redArg(v_trie_2237_, v_result_2238_);
lean_dec_ref(v_trie_2237_);
return v_res_2239_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0___redArg___boxed(lean_object* v_as_2240_, lean_object* v_sz_2241_, lean_object* v_i_2242_, lean_object* v_b_2243_){
_start:
{
size_t v_sz_boxed_2244_; size_t v_i_boxed_2245_; lean_object* v_res_2246_; 
v_sz_boxed_2244_ = lean_unbox_usize(v_sz_2241_);
lean_dec(v_sz_2241_);
v_i_boxed_2245_ = lean_unbox_usize(v_i_2242_);
lean_dec(v_i_2242_);
v_res_2246_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0___redArg(v_as_2240_, v_sz_boxed_2244_, v_i_boxed_2245_, v_b_2243_);
lean_dec_ref(v_as_2240_);
return v_res_2246_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go(lean_object* v_00_u03b1_2247_, lean_object* v_trie_2248_, lean_object* v_result_2249_){
_start:
{
lean_object* v___x_2250_; 
v___x_2250_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go___redArg(v_trie_2248_, v_result_2249_);
return v___x_2250_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go___boxed(lean_object* v_00_u03b1_2251_, lean_object* v_trie_2252_, lean_object* v_result_2253_){
_start:
{
lean_object* v_res_2254_; 
v_res_2254_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go(v_00_u03b1_2251_, v_trie_2252_, v_result_2253_);
lean_dec_ref(v_trie_2252_);
return v_res_2254_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0(lean_object* v_00_u03b1_2255_, lean_object* v_as_2256_, size_t v_sz_2257_, size_t v_i_2258_, lean_object* v_b_2259_){
_start:
{
lean_object* v___x_2260_; 
v___x_2260_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0___redArg(v_as_2256_, v_sz_2257_, v_i_2258_, v_b_2259_);
return v___x_2260_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0___boxed(lean_object* v_00_u03b1_2261_, lean_object* v_as_2262_, lean_object* v_sz_2263_, lean_object* v_i_2264_, lean_object* v_b_2265_){
_start:
{
size_t v_sz_boxed_2266_; size_t v_i_boxed_2267_; lean_object* v_res_2268_; 
v_sz_boxed_2266_ = lean_unbox_usize(v_sz_2263_);
lean_dec(v_sz_2263_);
v_i_boxed_2267_ = lean_unbox_usize(v_i_2264_);
lean_dec(v_i_2264_);
v_res_2268_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go_spec__0(v_00_u03b1_2261_, v_as_2262_, v_sz_boxed_2266_, v_i_boxed_2267_, v_b_2265_);
lean_dec_ref(v_as_2262_);
return v_res_2268_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey___redArg(lean_object* v_d_2269_, lean_object* v_k_2270_, lean_object* v_result_2271_){
_start:
{
lean_object* v___x_2272_; 
v___x_2272_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg(v_d_2269_, v_k_2270_);
if (lean_obj_tag(v___x_2272_) == 0)
{
return v_result_2271_;
}
else
{
lean_object* v_val_2273_; lean_object* v___x_2274_; 
v_val_2273_ = lean_ctor_get(v___x_2272_, 0);
lean_inc(v_val_2273_);
lean_dec_ref_known(v___x_2272_, 1);
v___x_2274_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey_go___redArg(v_val_2273_, v_result_2271_);
lean_dec(v_val_2273_);
return v___x_2274_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey___redArg___boxed(lean_object* v_d_2275_, lean_object* v_k_2276_, lean_object* v_result_2277_){
_start:
{
lean_object* v_res_2278_; 
v_res_2278_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey___redArg(v_d_2275_, v_k_2276_, v_result_2277_);
lean_dec(v_k_2276_);
lean_dec_ref(v_d_2275_);
return v_res_2278_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey(lean_object* v_00_u03b1_2279_, lean_object* v_d_2280_, lean_object* v_k_2281_, lean_object* v_result_2282_){
_start:
{
lean_object* v___x_2283_; 
v___x_2283_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey___redArg(v_d_2280_, v_k_2281_, v_result_2282_);
return v___x_2283_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey___boxed(lean_object* v_00_u03b1_2284_, lean_object* v_d_2285_, lean_object* v_k_2286_, lean_object* v_result_2287_){
_start:
{
lean_object* v_res_2288_; 
v_res_2288_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey(v_00_u03b1_2284_, v_d_2285_, v_k_2286_, v_result_2287_);
lean_dec(v_k_2286_);
lean_dec_ref(v_d_2285_);
return v_res_2288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal___redArg___lam__0(lean_object* v_e_2289_, lean_object* v_result_2290_, lean_object* v_d_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_){
_start:
{
lean_object* v___x_2297_; 
v___x_2297_ = l_Lean_Meta_DiscrTree_getMatchKeyRootFor(v_e_2289_, v___y_2292_, v___y_2293_, v___y_2294_, v___y_2295_);
if (lean_obj_tag(v___x_2297_) == 0)
{
lean_object* v_a_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2315_; 
v_a_2298_ = lean_ctor_get(v___x_2297_, 0);
v_isSharedCheck_2315_ = !lean_is_exclusive(v___x_2297_);
if (v_isSharedCheck_2315_ == 0)
{
v___x_2300_ = v___x_2297_;
v_isShared_2301_ = v_isSharedCheck_2315_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_a_2298_);
lean_dec(v___x_2297_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2315_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v_fst_2302_; lean_object* v_snd_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2314_; 
v_fst_2302_ = lean_ctor_get(v_a_2298_, 0);
v_snd_2303_ = lean_ctor_get(v_a_2298_, 1);
v_isSharedCheck_2314_ = !lean_is_exclusive(v_a_2298_);
if (v_isSharedCheck_2314_ == 0)
{
v___x_2305_ = v_a_2298_;
v_isShared_2306_ = v_isSharedCheck_2314_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_snd_2303_);
lean_inc(v_fst_2302_);
lean_dec(v_a_2298_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2314_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
lean_object* v___x_2307_; lean_object* v___x_2309_; 
v___x_2307_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getAllValuesForKey___redArg(v_d_2291_, v_fst_2302_, v_result_2290_);
lean_dec(v_fst_2302_);
if (v_isShared_2306_ == 0)
{
lean_ctor_set(v___x_2305_, 0, v___x_2307_);
v___x_2309_ = v___x_2305_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v___x_2307_);
lean_ctor_set(v_reuseFailAlloc_2313_, 1, v_snd_2303_);
v___x_2309_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
lean_object* v___x_2311_; 
if (v_isShared_2301_ == 0)
{
lean_ctor_set(v___x_2300_, 0, v___x_2309_);
v___x_2311_ = v___x_2300_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v___x_2309_);
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
else
{
lean_object* v_a_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2323_; 
lean_dec_ref(v_result_2290_);
v_a_2316_ = lean_ctor_get(v___x_2297_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2297_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2318_ = v___x_2297_;
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_a_2316_);
lean_dec(v___x_2297_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v___x_2321_; 
if (v_isShared_2319_ == 0)
{
v___x_2321_ = v___x_2318_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v_a_2316_);
v___x_2321_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
return v___x_2321_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal___redArg___lam__0___boxed(lean_object* v_e_2324_, lean_object* v_result_2325_, lean_object* v_d_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_){
_start:
{
lean_object* v_res_2332_; 
v_res_2332_ = l_Lean_Meta_DiscrTree_getMatchLiberal___redArg___lam__0(v_e_2324_, v_result_2325_, v_d_2326_, v___y_2327_, v___y_2328_, v___y_2329_, v___y_2330_);
lean_dec(v___y_2330_);
lean_dec_ref(v___y_2329_);
lean_dec(v___y_2328_);
lean_dec_ref(v___y_2327_);
lean_dec_ref(v_d_2326_);
return v_res_2332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal___redArg(lean_object* v_d_2333_, lean_object* v_e_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_){
_start:
{
lean_object* v___y_2341_; lean_object* v___x_2358_; uint8_t v_transparency_2359_; lean_object* v_result_2360_; uint8_t v___x_2361_; uint8_t v___x_2362_; 
v___x_2358_ = l_Lean_Meta_Context_config(v_a_2335_);
v_transparency_2359_ = lean_ctor_get_uint8(v___x_2358_, 9);
lean_dec_ref(v___x_2358_);
v_result_2360_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg(v_d_2333_);
v___x_2361_ = 2;
v___x_2362_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2359_, v___x_2361_);
if (v___x_2362_ == 0)
{
lean_object* v_keyedConfig_2363_; uint8_t v_trackZetaDelta_2364_; lean_object* v_zetaDeltaSet_2365_; lean_object* v_lctx_2366_; lean_object* v_localInstances_2367_; lean_object* v_defEqCtx_x3f_2368_; lean_object* v_synthPendingDepth_2369_; lean_object* v_customCanUnfoldPredicate_x3f_2370_; uint8_t v_univApprox_2371_; uint8_t v_inTypeClassResolution_2372_; uint8_t v_cacheInferType_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; 
v_keyedConfig_2363_ = lean_ctor_get(v_a_2335_, 0);
v_trackZetaDelta_2364_ = lean_ctor_get_uint8(v_a_2335_, sizeof(void*)*7);
v_zetaDeltaSet_2365_ = lean_ctor_get(v_a_2335_, 1);
v_lctx_2366_ = lean_ctor_get(v_a_2335_, 2);
v_localInstances_2367_ = lean_ctor_get(v_a_2335_, 3);
v_defEqCtx_x3f_2368_ = lean_ctor_get(v_a_2335_, 4);
v_synthPendingDepth_2369_ = lean_ctor_get(v_a_2335_, 5);
v_customCanUnfoldPredicate_x3f_2370_ = lean_ctor_get(v_a_2335_, 6);
v_univApprox_2371_ = lean_ctor_get_uint8(v_a_2335_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2372_ = lean_ctor_get_uint8(v_a_2335_, sizeof(void*)*7 + 2);
v_cacheInferType_2373_ = lean_ctor_get_uint8(v_a_2335_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2363_);
v___x_2374_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2361_, v_keyedConfig_2363_);
lean_inc(v_customCanUnfoldPredicate_x3f_2370_);
lean_inc(v_synthPendingDepth_2369_);
lean_inc(v_defEqCtx_x3f_2368_);
lean_inc_ref(v_localInstances_2367_);
lean_inc_ref(v_lctx_2366_);
lean_inc(v_zetaDeltaSet_2365_);
v___x_2375_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2375_, 0, v___x_2374_);
lean_ctor_set(v___x_2375_, 1, v_zetaDeltaSet_2365_);
lean_ctor_set(v___x_2375_, 2, v_lctx_2366_);
lean_ctor_set(v___x_2375_, 3, v_localInstances_2367_);
lean_ctor_set(v___x_2375_, 4, v_defEqCtx_x3f_2368_);
lean_ctor_set(v___x_2375_, 5, v_synthPendingDepth_2369_);
lean_ctor_set(v___x_2375_, 6, v_customCanUnfoldPredicate_x3f_2370_);
lean_ctor_set_uint8(v___x_2375_, sizeof(void*)*7, v_trackZetaDelta_2364_);
lean_ctor_set_uint8(v___x_2375_, sizeof(void*)*7 + 1, v_univApprox_2371_);
lean_ctor_set_uint8(v___x_2375_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2372_);
lean_ctor_set_uint8(v___x_2375_, sizeof(void*)*7 + 3, v_cacheInferType_2373_);
v___x_2376_ = l_Lean_Meta_DiscrTree_getMatchLiberal___redArg___lam__0(v_e_2334_, v_result_2360_, v_d_2333_, v___x_2375_, v_a_2336_, v_a_2337_, v_a_2338_);
lean_dec_ref_known(v___x_2375_, 7);
v___y_2341_ = v___x_2376_;
goto v___jp_2340_;
}
else
{
lean_object* v___x_2377_; 
v___x_2377_ = l_Lean_Meta_DiscrTree_getMatchLiberal___redArg___lam__0(v_e_2334_, v_result_2360_, v_d_2333_, v_a_2335_, v_a_2336_, v_a_2337_, v_a_2338_);
v___y_2341_ = v___x_2377_;
goto v___jp_2340_;
}
v___jp_2340_:
{
if (lean_obj_tag(v___y_2341_) == 0)
{
lean_object* v_a_2342_; lean_object* v___x_2344_; uint8_t v_isShared_2345_; uint8_t v_isSharedCheck_2349_; 
v_a_2342_ = lean_ctor_get(v___y_2341_, 0);
v_isSharedCheck_2349_ = !lean_is_exclusive(v___y_2341_);
if (v_isSharedCheck_2349_ == 0)
{
v___x_2344_ = v___y_2341_;
v_isShared_2345_ = v_isSharedCheck_2349_;
goto v_resetjp_2343_;
}
else
{
lean_inc(v_a_2342_);
lean_dec(v___y_2341_);
v___x_2344_ = lean_box(0);
v_isShared_2345_ = v_isSharedCheck_2349_;
goto v_resetjp_2343_;
}
v_resetjp_2343_:
{
lean_object* v___x_2347_; 
if (v_isShared_2345_ == 0)
{
v___x_2347_ = v___x_2344_;
goto v_reusejp_2346_;
}
else
{
lean_object* v_reuseFailAlloc_2348_; 
v_reuseFailAlloc_2348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2348_, 0, v_a_2342_);
v___x_2347_ = v_reuseFailAlloc_2348_;
goto v_reusejp_2346_;
}
v_reusejp_2346_:
{
return v___x_2347_;
}
}
}
else
{
lean_object* v_a_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2357_; 
v_a_2350_ = lean_ctor_get(v___y_2341_, 0);
v_isSharedCheck_2357_ = !lean_is_exclusive(v___y_2341_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2352_ = v___y_2341_;
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_a_2350_);
lean_dec(v___y_2341_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___x_2355_; 
if (v_isShared_2353_ == 0)
{
v___x_2355_ = v___x_2352_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v_a_2350_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
return v___x_2355_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal___redArg___boxed(lean_object* v_d_2378_, lean_object* v_e_2379_, lean_object* v_a_2380_, lean_object* v_a_2381_, lean_object* v_a_2382_, lean_object* v_a_2383_, lean_object* v_a_2384_){
_start:
{
lean_object* v_res_2385_; 
v_res_2385_ = l_Lean_Meta_DiscrTree_getMatchLiberal___redArg(v_d_2378_, v_e_2379_, v_a_2380_, v_a_2381_, v_a_2382_, v_a_2383_);
lean_dec(v_a_2383_);
lean_dec_ref(v_a_2382_);
lean_dec(v_a_2381_);
lean_dec_ref(v_a_2380_);
lean_dec_ref(v_d_2378_);
return v_res_2385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal(lean_object* v_00_u03b1_2386_, lean_object* v_d_2387_, lean_object* v_e_2388_, lean_object* v_a_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_){
_start:
{
lean_object* v___x_2394_; 
v___x_2394_ = l_Lean_Meta_DiscrTree_getMatchLiberal___redArg(v_d_2387_, v_e_2388_, v_a_2389_, v_a_2390_, v_a_2391_, v_a_2392_);
return v___x_2394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getMatchLiberal___boxed(lean_object* v_00_u03b1_2395_, lean_object* v_d_2396_, lean_object* v_e_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_, lean_object* v_a_2402_){
_start:
{
lean_object* v_res_2403_; 
v_res_2403_ = l_Lean_Meta_DiscrTree_getMatchLiberal(v_00_u03b1_2395_, v_d_2396_, v_e_2397_, v_a_2398_, v_a_2399_, v_a_2400_, v_a_2401_);
lean_dec(v_a_2401_);
lean_dec_ref(v_a_2400_);
lean_dec(v_a_2399_);
lean_dec_ref(v_a_2398_);
lean_dec_ref(v_d_2396_);
return v_res_2403_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1___redArg(lean_object* v_n_2404_, lean_object* v_todo_2405_, lean_object* v_as_2406_, size_t v_i_2407_, size_t v_stop_2408_, lean_object* v_b_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_){
_start:
{
uint8_t v___x_2415_; 
v___x_2415_ = lean_usize_dec_eq(v_i_2407_, v_stop_2408_);
if (v___x_2415_ == 0)
{
lean_object* v___x_2416_; lean_object* v_fst_2417_; lean_object* v_snd_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; 
v___x_2416_ = lean_array_uget_borrowed(v_as_2406_, v_i_2407_);
v_fst_2417_ = lean_ctor_get(v___x_2416_, 0);
v_snd_2418_ = lean_ctor_get(v___x_2416_, 1);
v___x_2419_ = l_Lean_Meta_DiscrTree_Key_arity(v_fst_2417_);
v___x_2420_ = lean_nat_add(v_n_2404_, v___x_2419_);
lean_dec(v___x_2419_);
lean_inc(v_snd_2418_);
lean_inc_ref(v_todo_2405_);
v___x_2421_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg(v___x_2420_, v_todo_2405_, v_snd_2418_, v_b_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_);
if (lean_obj_tag(v___x_2421_) == 0)
{
lean_object* v_a_2422_; size_t v___x_2423_; size_t v___x_2424_; 
v_a_2422_ = lean_ctor_get(v___x_2421_, 0);
lean_inc(v_a_2422_);
lean_dec_ref_known(v___x_2421_, 1);
v___x_2423_ = ((size_t)1ULL);
v___x_2424_ = lean_usize_add(v_i_2407_, v___x_2423_);
v_i_2407_ = v___x_2424_;
v_b_2409_ = v_a_2422_;
goto _start;
}
else
{
lean_dec_ref(v_todo_2405_);
return v___x_2421_;
}
}
else
{
lean_object* v___x_2426_; 
lean_dec_ref(v_todo_2405_);
v___x_2426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2426_, 0, v_b_2409_);
return v___x_2426_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg(lean_object* v_skip_2427_, lean_object* v_todo_2428_, lean_object* v_c_2429_, lean_object* v_result_2430_, lean_object* v_a_2431_, lean_object* v_a_2432_, lean_object* v_a_2433_, lean_object* v_a_2434_){
_start:
{
lean_object* v_zero_2436_; uint8_t v_isZero_2437_; 
v_zero_2436_ = lean_unsigned_to_nat(0u);
v_isZero_2437_ = lean_nat_dec_eq(v_skip_2427_, v_zero_2436_);
if (v_isZero_2437_ == 1)
{
lean_object* v_vs_2438_; lean_object* v_children_2439_; lean_object* v___x_2440_; uint8_t v___x_2441_; 
lean_dec(v_skip_2427_);
v_vs_2438_ = lean_ctor_get(v_c_2429_, 0);
lean_inc_ref(v_vs_2438_);
v_children_2439_ = lean_ctor_get(v_c_2429_, 1);
lean_inc_ref(v_children_2439_);
lean_dec_ref(v_c_2429_);
v___x_2440_ = lean_array_get_size(v_todo_2428_);
v___x_2441_ = lean_nat_dec_eq(v___x_2440_, v_zero_2436_);
if (v___x_2441_ == 0)
{
lean_object* v___x_2442_; uint8_t v___x_2443_; 
lean_dec_ref(v_vs_2438_);
v___x_2442_ = lean_array_get_size(v_children_2439_);
v___x_2443_ = lean_nat_dec_eq(v___x_2442_, v_zero_2436_);
if (v___x_2443_ == 0)
{
lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v_e_2449_; lean_object* v_todo_2450_; lean_object* v___x_2451_; 
v___x_2444_ = l_Lean_instInhabitedExpr;
v___x_2445_ = lean_box(0);
v___x_2446_ = lean_obj_once(&l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__1, &l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__1_once, _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop___redArg___closed__1);
v___x_2447_ = lean_unsigned_to_nat(1u);
v___x_2448_ = lean_nat_sub(v___x_2440_, v___x_2447_);
v_e_2449_ = lean_array_get(v___x_2444_, v_todo_2428_, v___x_2448_);
lean_dec(v___x_2448_);
v_todo_2450_ = lean_array_pop(v_todo_2428_);
v___x_2451_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs(v_e_2449_, v___x_2443_, v___x_2443_, v_a_2431_, v_a_2432_, v_a_2433_, v_a_2434_);
if (lean_obj_tag(v___x_2451_) == 0)
{
lean_object* v_a_2452_; lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2500_; 
v_a_2452_ = lean_ctor_get(v___x_2451_, 0);
v_isSharedCheck_2500_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2500_ == 0)
{
v___x_2454_ = v___x_2451_;
v_isShared_2455_ = v_isSharedCheck_2500_;
goto v_resetjp_2453_;
}
else
{
lean_inc(v_a_2452_);
lean_dec(v___x_2451_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2500_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
lean_object* v_fst_2456_; lean_object* v_snd_2457_; lean_object* v___x_2459_; uint8_t v_isShared_2460_; uint8_t v_isSharedCheck_2499_; 
v_fst_2456_ = lean_ctor_get(v_a_2452_, 0);
v_snd_2457_ = lean_ctor_get(v_a_2452_, 1);
v_isSharedCheck_2499_ = !lean_is_exclusive(v_a_2452_);
if (v_isSharedCheck_2499_ == 0)
{
v___x_2459_ = v_a_2452_;
v_isShared_2460_ = v_isSharedCheck_2499_;
goto v_resetjp_2458_;
}
else
{
lean_inc(v_snd_2457_);
lean_inc(v_fst_2456_);
lean_dec(v_a_2452_);
v___x_2459_ = lean_box(0);
v_isShared_2460_ = v_isSharedCheck_2499_;
goto v_resetjp_2458_;
}
v_resetjp_2458_:
{
lean_object* v___y_2462_; lean_object* v_a_2463_; 
if (lean_obj_tag(v_fst_2456_) == 0)
{
uint8_t v___x_2476_; 
lean_del_object(v___x_2459_);
lean_dec(v_snd_2457_);
v___x_2476_ = lean_nat_dec_lt(v_zero_2436_, v___x_2442_);
if (v___x_2476_ == 0)
{
lean_object* v___x_2478_; 
lean_dec_ref(v_todo_2450_);
lean_dec_ref(v_children_2439_);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 0, v_result_2430_);
v___x_2478_ = v___x_2454_;
goto v_reusejp_2477_;
}
else
{
lean_object* v_reuseFailAlloc_2479_; 
v_reuseFailAlloc_2479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2479_, 0, v_result_2430_);
v___x_2478_ = v_reuseFailAlloc_2479_;
goto v_reusejp_2477_;
}
v_reusejp_2477_:
{
return v___x_2478_;
}
}
else
{
uint8_t v___x_2480_; 
v___x_2480_ = lean_nat_dec_le(v___x_2442_, v___x_2442_);
if (v___x_2480_ == 0)
{
if (v___x_2476_ == 0)
{
lean_object* v___x_2482_; 
lean_dec_ref(v_todo_2450_);
lean_dec_ref(v_children_2439_);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 0, v_result_2430_);
v___x_2482_ = v___x_2454_;
goto v_reusejp_2481_;
}
else
{
lean_object* v_reuseFailAlloc_2483_; 
v_reuseFailAlloc_2483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2483_, 0, v_result_2430_);
v___x_2482_ = v_reuseFailAlloc_2483_;
goto v_reusejp_2481_;
}
v_reusejp_2481_:
{
return v___x_2482_;
}
}
else
{
size_t v___x_2484_; size_t v___x_2485_; lean_object* v___x_2486_; 
lean_del_object(v___x_2454_);
v___x_2484_ = ((size_t)0ULL);
v___x_2485_ = lean_usize_of_nat(v___x_2442_);
v___x_2486_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0___redArg(v_todo_2450_, v_children_2439_, v___x_2484_, v___x_2485_, v_result_2430_, v_a_2431_, v_a_2432_, v_a_2433_, v_a_2434_);
lean_dec_ref(v_children_2439_);
return v___x_2486_;
}
}
else
{
size_t v___x_2487_; size_t v___x_2488_; lean_object* v___x_2489_; 
lean_del_object(v___x_2454_);
v___x_2487_ = ((size_t)0ULL);
v___x_2488_ = lean_usize_of_nat(v___x_2442_);
v___x_2489_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0___redArg(v_todo_2450_, v_children_2439_, v___x_2487_, v___x_2488_, v_result_2430_, v_a_2431_, v_a_2432_, v_a_2433_, v_a_2434_);
lean_dec_ref(v_children_2439_);
return v___x_2489_;
}
}
}
else
{
lean_object* v___x_2490_; lean_object* v_fst_2491_; lean_object* v_snd_2492_; uint8_t v___x_2493_; 
v___x_2490_ = lean_array_get_borrowed(v___x_2446_, v_children_2439_, v_zero_2436_);
v_fst_2491_ = lean_ctor_get(v___x_2490_, 0);
v_snd_2492_ = lean_ctor_get(v___x_2490_, 1);
v___x_2493_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_fst_2491_, v___x_2445_);
if (v___x_2493_ == 0)
{
lean_object* v___x_2495_; 
lean_inc_ref(v_result_2430_);
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 0, v_result_2430_);
v___x_2495_ = v___x_2454_;
goto v_reusejp_2494_;
}
else
{
lean_object* v_reuseFailAlloc_2496_; 
v_reuseFailAlloc_2496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2496_, 0, v_result_2430_);
v___x_2495_ = v_reuseFailAlloc_2496_;
goto v_reusejp_2494_;
}
v_reusejp_2494_:
{
v___y_2462_ = v___x_2495_;
v_a_2463_ = v_result_2430_;
goto v___jp_2461_;
}
}
else
{
lean_object* v___x_2497_; 
lean_del_object(v___x_2454_);
lean_inc(v_snd_2492_);
lean_inc_ref(v_todo_2450_);
v___x_2497_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg(v_zero_2436_, v_todo_2450_, v_snd_2492_, v_result_2430_, v_a_2431_, v_a_2432_, v_a_2433_, v_a_2434_);
if (lean_obj_tag(v___x_2497_) == 0)
{
lean_object* v_a_2498_; 
v_a_2498_ = lean_ctor_get(v___x_2497_, 0);
lean_inc(v_a_2498_);
v___y_2462_ = v___x_2497_;
v_a_2463_ = v_a_2498_;
goto v___jp_2461_;
}
else
{
lean_del_object(v___x_2459_);
lean_dec(v_snd_2457_);
lean_dec(v_fst_2456_);
lean_dec_ref(v_todo_2450_);
lean_dec_ref(v_children_2439_);
return v___x_2497_;
}
}
}
v___jp_2461_:
{
uint8_t v___x_2464_; 
v___x_2464_ = lean_nat_dec_lt(v_zero_2436_, v___x_2442_);
if (v___x_2464_ == 0)
{
lean_dec_ref(v_a_2463_);
lean_del_object(v___x_2459_);
lean_dec(v_snd_2457_);
lean_dec(v_fst_2456_);
lean_dec_ref(v_todo_2450_);
lean_dec_ref(v_children_2439_);
return v___y_2462_;
}
else
{
lean_object* v___x_2465_; uint8_t v___x_2466_; 
v___x_2465_ = lean_nat_sub(v___x_2442_, v___x_2447_);
v___x_2466_ = lean_nat_dec_le(v_zero_2436_, v___x_2465_);
if (v___x_2466_ == 0)
{
lean_dec(v___x_2465_);
lean_dec_ref(v_a_2463_);
lean_del_object(v___x_2459_);
lean_dec(v_snd_2457_);
lean_dec(v_fst_2456_);
lean_dec_ref(v_todo_2450_);
lean_dec_ref(v_children_2439_);
return v___y_2462_;
}
else
{
lean_object* v___x_2467_; lean_object* v___x_2469_; 
v___x_2467_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__2));
if (v_isShared_2460_ == 0)
{
lean_ctor_set(v___x_2459_, 1, v___x_2467_);
v___x_2469_ = v___x_2459_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2475_; 
v_reuseFailAlloc_2475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2475_, 0, v_fst_2456_);
lean_ctor_set(v_reuseFailAlloc_2475_, 1, v___x_2467_);
v___x_2469_ = v_reuseFailAlloc_2475_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
lean_object* v___x_2470_; 
v___x_2470_ = l_Array_binSearchAux___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getMatchLoop_spec__0___redArg(v_children_2439_, v___x_2469_, v_zero_2436_, v___x_2465_);
lean_dec_ref(v___x_2469_);
lean_dec_ref(v_children_2439_);
if (lean_obj_tag(v___x_2470_) == 0)
{
lean_dec_ref(v_a_2463_);
lean_dec(v_snd_2457_);
lean_dec_ref(v_todo_2450_);
return v___y_2462_;
}
else
{
lean_object* v_val_2471_; lean_object* v_snd_2472_; lean_object* v___x_2473_; 
lean_dec_ref(v___y_2462_);
v_val_2471_ = lean_ctor_get(v___x_2470_, 0);
lean_inc(v_val_2471_);
lean_dec_ref_known(v___x_2470_, 1);
v_snd_2472_ = lean_ctor_get(v_val_2471_, 1);
lean_inc(v_snd_2472_);
lean_dec(v_val_2471_);
v___x_2473_ = l_Array_append___redArg(v_todo_2450_, v_snd_2457_);
lean_dec(v_snd_2457_);
v_skip_2427_ = v_zero_2436_;
v_todo_2428_ = v___x_2473_;
v_c_2429_ = v_snd_2472_;
v_result_2430_ = v_a_2463_;
goto _start;
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
lean_object* v_a_2501_; lean_object* v___x_2503_; uint8_t v_isShared_2504_; uint8_t v_isSharedCheck_2508_; 
lean_dec_ref(v_todo_2450_);
lean_dec_ref(v_children_2439_);
lean_dec_ref(v_result_2430_);
v_a_2501_ = lean_ctor_get(v___x_2451_, 0);
v_isSharedCheck_2508_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2508_ == 0)
{
v___x_2503_ = v___x_2451_;
v_isShared_2504_ = v_isSharedCheck_2508_;
goto v_resetjp_2502_;
}
else
{
lean_inc(v_a_2501_);
lean_dec(v___x_2451_);
v___x_2503_ = lean_box(0);
v_isShared_2504_ = v_isSharedCheck_2508_;
goto v_resetjp_2502_;
}
v_resetjp_2502_:
{
lean_object* v___x_2506_; 
if (v_isShared_2504_ == 0)
{
v___x_2506_ = v___x_2503_;
goto v_reusejp_2505_;
}
else
{
lean_object* v_reuseFailAlloc_2507_; 
v_reuseFailAlloc_2507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2507_, 0, v_a_2501_);
v___x_2506_ = v_reuseFailAlloc_2507_;
goto v_reusejp_2505_;
}
v_reusejp_2505_:
{
return v___x_2506_;
}
}
}
}
else
{
lean_object* v___x_2509_; 
lean_dec_ref(v_children_2439_);
lean_dec_ref(v_todo_2428_);
v___x_2509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2509_, 0, v_result_2430_);
return v___x_2509_;
}
}
else
{
lean_object* v___x_2510_; lean_object* v___x_2511_; 
lean_dec_ref(v_children_2439_);
lean_dec_ref(v_todo_2428_);
v___x_2510_ = l_Array_append___redArg(v_result_2430_, v_vs_2438_);
lean_dec_ref(v_vs_2438_);
v___x_2511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2511_, 0, v___x_2510_);
return v___x_2511_;
}
}
else
{
lean_object* v_children_2512_; lean_object* v___x_2513_; uint8_t v___x_2514_; 
v_children_2512_ = lean_ctor_get(v_c_2429_, 1);
lean_inc_ref(v_children_2512_);
lean_dec_ref(v_c_2429_);
v___x_2513_ = lean_array_get_size(v_children_2512_);
v___x_2514_ = lean_nat_dec_eq(v___x_2513_, v_zero_2436_);
if (v___x_2514_ == 0)
{
uint8_t v___x_2515_; 
v___x_2515_ = lean_nat_dec_lt(v_zero_2436_, v___x_2513_);
if (v___x_2515_ == 0)
{
lean_object* v___x_2516_; 
lean_dec_ref(v_children_2512_);
lean_dec_ref(v_todo_2428_);
lean_dec(v_skip_2427_);
v___x_2516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2516_, 0, v_result_2430_);
return v___x_2516_;
}
else
{
lean_object* v_one_2517_; lean_object* v_n_2518_; uint8_t v___x_2519_; 
v_one_2517_ = lean_unsigned_to_nat(1u);
v_n_2518_ = lean_nat_sub(v_skip_2427_, v_one_2517_);
lean_dec(v_skip_2427_);
v___x_2519_ = lean_nat_dec_le(v___x_2513_, v___x_2513_);
if (v___x_2519_ == 0)
{
if (v___x_2515_ == 0)
{
lean_object* v___x_2520_; 
lean_dec(v_n_2518_);
lean_dec_ref(v_children_2512_);
lean_dec_ref(v_todo_2428_);
v___x_2520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2520_, 0, v_result_2430_);
return v___x_2520_;
}
else
{
size_t v___x_2521_; size_t v___x_2522_; lean_object* v___x_2523_; 
v___x_2521_ = ((size_t)0ULL);
v___x_2522_ = lean_usize_of_nat(v___x_2513_);
v___x_2523_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1___redArg(v_n_2518_, v_todo_2428_, v_children_2512_, v___x_2521_, v___x_2522_, v_result_2430_, v_a_2431_, v_a_2432_, v_a_2433_, v_a_2434_);
lean_dec_ref(v_children_2512_);
lean_dec(v_n_2518_);
return v___x_2523_;
}
}
else
{
size_t v___x_2524_; size_t v___x_2525_; lean_object* v___x_2526_; 
v___x_2524_ = ((size_t)0ULL);
v___x_2525_ = lean_usize_of_nat(v___x_2513_);
v___x_2526_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1___redArg(v_n_2518_, v_todo_2428_, v_children_2512_, v___x_2524_, v___x_2525_, v_result_2430_, v_a_2431_, v_a_2432_, v_a_2433_, v_a_2434_);
lean_dec_ref(v_children_2512_);
lean_dec(v_n_2518_);
return v___x_2526_;
}
}
}
else
{
lean_object* v___x_2527_; 
lean_dec_ref(v_children_2512_);
lean_dec_ref(v_todo_2428_);
lean_dec(v_skip_2427_);
v___x_2527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2527_, 0, v_result_2430_);
return v___x_2527_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0___redArg(lean_object* v_todo_2528_, lean_object* v_as_2529_, size_t v_i_2530_, size_t v_stop_2531_, lean_object* v_b_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_){
_start:
{
uint8_t v___x_2538_; 
v___x_2538_ = lean_usize_dec_eq(v_i_2530_, v_stop_2531_);
if (v___x_2538_ == 0)
{
lean_object* v___x_2539_; lean_object* v_fst_2540_; lean_object* v_snd_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; 
v___x_2539_ = lean_array_uget_borrowed(v_as_2529_, v_i_2530_);
v_fst_2540_ = lean_ctor_get(v___x_2539_, 0);
v_snd_2541_ = lean_ctor_get(v___x_2539_, 1);
v___x_2542_ = l_Lean_Meta_DiscrTree_Key_arity(v_fst_2540_);
lean_inc(v_snd_2541_);
lean_inc_ref(v_todo_2528_);
v___x_2543_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg(v___x_2542_, v_todo_2528_, v_snd_2541_, v_b_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_);
if (lean_obj_tag(v___x_2543_) == 0)
{
lean_object* v_a_2544_; size_t v___x_2545_; size_t v___x_2546_; 
v_a_2544_ = lean_ctor_get(v___x_2543_, 0);
lean_inc(v_a_2544_);
lean_dec_ref_known(v___x_2543_, 1);
v___x_2545_ = ((size_t)1ULL);
v___x_2546_ = lean_usize_add(v_i_2530_, v___x_2545_);
v_i_2530_ = v___x_2546_;
v_b_2532_ = v_a_2544_;
goto _start;
}
else
{
lean_dec_ref(v_todo_2528_);
return v___x_2543_;
}
}
else
{
lean_object* v___x_2548_; 
lean_dec_ref(v_todo_2528_);
v___x_2548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2548_, 0, v_b_2532_);
return v___x_2548_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0___redArg___boxed(lean_object* v_todo_2549_, lean_object* v_as_2550_, lean_object* v_i_2551_, lean_object* v_stop_2552_, lean_object* v_b_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_){
_start:
{
size_t v_i_boxed_2559_; size_t v_stop_boxed_2560_; lean_object* v_res_2561_; 
v_i_boxed_2559_ = lean_unbox_usize(v_i_2551_);
lean_dec(v_i_2551_);
v_stop_boxed_2560_ = lean_unbox_usize(v_stop_2552_);
lean_dec(v_stop_2552_);
v_res_2561_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0___redArg(v_todo_2549_, v_as_2550_, v_i_boxed_2559_, v_stop_boxed_2560_, v_b_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_);
lean_dec(v___y_2557_);
lean_dec_ref(v___y_2556_);
lean_dec(v___y_2555_);
lean_dec_ref(v___y_2554_);
lean_dec_ref(v_as_2550_);
return v_res_2561_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1___redArg___boxed(lean_object* v_n_2562_, lean_object* v_todo_2563_, lean_object* v_as_2564_, lean_object* v_i_2565_, lean_object* v_stop_2566_, lean_object* v_b_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_){
_start:
{
size_t v_i_boxed_2573_; size_t v_stop_boxed_2574_; lean_object* v_res_2575_; 
v_i_boxed_2573_ = lean_unbox_usize(v_i_2565_);
lean_dec(v_i_2565_);
v_stop_boxed_2574_ = lean_unbox_usize(v_stop_2566_);
lean_dec(v_stop_2566_);
v_res_2575_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1___redArg(v_n_2562_, v_todo_2563_, v_as_2564_, v_i_boxed_2573_, v_stop_boxed_2574_, v_b_2567_, v___y_2568_, v___y_2569_, v___y_2570_, v___y_2571_);
lean_dec(v___y_2571_);
lean_dec_ref(v___y_2570_);
lean_dec(v___y_2569_);
lean_dec_ref(v___y_2568_);
lean_dec_ref(v_as_2564_);
lean_dec(v_n_2562_);
return v_res_2575_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg___boxed(lean_object* v_skip_2576_, lean_object* v_todo_2577_, lean_object* v_c_2578_, lean_object* v_result_2579_, lean_object* v_a_2580_, lean_object* v_a_2581_, lean_object* v_a_2582_, lean_object* v_a_2583_, lean_object* v_a_2584_){
_start:
{
lean_object* v_res_2585_; 
v_res_2585_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg(v_skip_2576_, v_todo_2577_, v_c_2578_, v_result_2579_, v_a_2580_, v_a_2581_, v_a_2582_, v_a_2583_);
lean_dec(v_a_2583_);
lean_dec_ref(v_a_2582_);
lean_dec(v_a_2581_);
lean_dec_ref(v_a_2580_);
return v_res_2585_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process(lean_object* v_00_u03b1_2586_, lean_object* v_skip_2587_, lean_object* v_todo_2588_, lean_object* v_c_2589_, lean_object* v_result_2590_, lean_object* v_a_2591_, lean_object* v_a_2592_, lean_object* v_a_2593_, lean_object* v_a_2594_){
_start:
{
lean_object* v___x_2596_; 
v___x_2596_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg(v_skip_2587_, v_todo_2588_, v_c_2589_, v_result_2590_, v_a_2591_, v_a_2592_, v_a_2593_, v_a_2594_);
return v___x_2596_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___boxed(lean_object* v_00_u03b1_2597_, lean_object* v_skip_2598_, lean_object* v_todo_2599_, lean_object* v_c_2600_, lean_object* v_result_2601_, lean_object* v_a_2602_, lean_object* v_a_2603_, lean_object* v_a_2604_, lean_object* v_a_2605_, lean_object* v_a_2606_){
_start:
{
lean_object* v_res_2607_; 
v_res_2607_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process(v_00_u03b1_2597_, v_skip_2598_, v_todo_2599_, v_c_2600_, v_result_2601_, v_a_2602_, v_a_2603_, v_a_2604_, v_a_2605_);
lean_dec(v_a_2605_);
lean_dec_ref(v_a_2604_);
lean_dec(v_a_2603_);
lean_dec_ref(v_a_2602_);
return v_res_2607_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0(lean_object* v_00_u03b1_2608_, lean_object* v_todo_2609_, lean_object* v_as_2610_, size_t v_i_2611_, size_t v_stop_2612_, lean_object* v_b_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_){
_start:
{
lean_object* v___x_2619_; 
v___x_2619_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0___redArg(v_todo_2609_, v_as_2610_, v_i_2611_, v_stop_2612_, v_b_2613_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_);
return v___x_2619_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0___boxed(lean_object* v_00_u03b1_2620_, lean_object* v_todo_2621_, lean_object* v_as_2622_, lean_object* v_i_2623_, lean_object* v_stop_2624_, lean_object* v_b_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_){
_start:
{
size_t v_i_boxed_2631_; size_t v_stop_boxed_2632_; lean_object* v_res_2633_; 
v_i_boxed_2631_ = lean_unbox_usize(v_i_2623_);
lean_dec(v_i_2623_);
v_stop_boxed_2632_ = lean_unbox_usize(v_stop_2624_);
lean_dec(v_stop_2624_);
v_res_2633_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__0(v_00_u03b1_2620_, v_todo_2621_, v_as_2622_, v_i_boxed_2631_, v_stop_boxed_2632_, v_b_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_);
lean_dec(v___y_2629_);
lean_dec_ref(v___y_2628_);
lean_dec(v___y_2627_);
lean_dec_ref(v___y_2626_);
lean_dec_ref(v_as_2622_);
return v_res_2633_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1(lean_object* v_00_u03b1_2634_, lean_object* v_n_2635_, lean_object* v_todo_2636_, lean_object* v_as_2637_, size_t v_i_2638_, size_t v_stop_2639_, lean_object* v_b_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_){
_start:
{
lean_object* v___x_2646_; 
v___x_2646_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1___redArg(v_n_2635_, v_todo_2636_, v_as_2637_, v_i_2638_, v_stop_2639_, v_b_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_);
return v___x_2646_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1___boxed(lean_object* v_00_u03b1_2647_, lean_object* v_n_2648_, lean_object* v_todo_2649_, lean_object* v_as_2650_, lean_object* v_i_2651_, lean_object* v_stop_2652_, lean_object* v_b_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_){
_start:
{
size_t v_i_boxed_2659_; size_t v_stop_boxed_2660_; lean_object* v_res_2661_; 
v_i_boxed_2659_ = lean_unbox_usize(v_i_2651_);
lean_dec(v_i_2651_);
v_stop_boxed_2660_ = lean_unbox_usize(v_stop_2652_);
lean_dec(v_stop_2652_);
v_res_2661_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process_spec__1(v_00_u03b1_2647_, v_n_2648_, v_todo_2649_, v_as_2650_, v_i_boxed_2659_, v_stop_boxed_2660_, v_b_2653_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_);
lean_dec(v___y_2657_);
lean_dec_ref(v___y_2656_);
lean_dec(v___y_2655_);
lean_dec_ref(v___y_2654_);
lean_dec_ref(v_as_2650_);
lean_dec(v_n_2648_);
return v_res_2661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___lam__0(lean_object* v_result_2662_, lean_object* v_k_2663_, lean_object* v_c_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_){
_start:
{
lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; 
v___x_2670_ = l_Lean_Meta_DiscrTree_Key_arity(v_k_2663_);
v___x_2671_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs___closed__0));
v___x_2672_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg(v___x_2670_, v___x_2671_, v_c_2664_, v_result_2662_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_);
return v___x_2672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___lam__0___boxed(lean_object* v_result_2673_, lean_object* v_k_2674_, lean_object* v_c_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_){
_start:
{
lean_object* v_res_2681_; 
v_res_2681_ = l_Lean_Meta_DiscrTree_getUnify___redArg___lam__0(v_result_2673_, v_k_2674_, v_c_2675_, v___y_2676_, v___y_2677_, v___y_2678_, v___y_2679_);
lean_dec(v___y_2679_);
lean_dec_ref(v___y_2678_);
lean_dec(v___y_2677_);
lean_dec_ref(v___y_2676_);
lean_dec(v_k_2674_);
return v_res_2681_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2___redArg(lean_object* v_f_2682_, lean_object* v_keys_2683_, lean_object* v_vals_2684_, lean_object* v_i_2685_, lean_object* v_acc_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_){
_start:
{
lean_object* v___x_2692_; uint8_t v___x_2693_; 
v___x_2692_ = lean_array_get_size(v_keys_2683_);
v___x_2693_ = lean_nat_dec_lt(v_i_2685_, v___x_2692_);
if (v___x_2693_ == 0)
{
lean_object* v___x_2694_; 
lean_dec(v_i_2685_);
lean_dec_ref(v_f_2682_);
v___x_2694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2694_, 0, v_acc_2686_);
return v___x_2694_;
}
else
{
lean_object* v_k_2695_; lean_object* v_v_2696_; lean_object* v___x_2697_; 
v_k_2695_ = lean_array_fget_borrowed(v_keys_2683_, v_i_2685_);
v_v_2696_ = lean_array_fget_borrowed(v_vals_2684_, v_i_2685_);
lean_inc_ref(v_f_2682_);
lean_inc(v___y_2690_);
lean_inc_ref(v___y_2689_);
lean_inc(v___y_2688_);
lean_inc_ref(v___y_2687_);
lean_inc(v_v_2696_);
lean_inc(v_k_2695_);
v___x_2697_ = lean_apply_8(v_f_2682_, v_acc_2686_, v_k_2695_, v_v_2696_, v___y_2687_, v___y_2688_, v___y_2689_, v___y_2690_, lean_box(0));
if (lean_obj_tag(v___x_2697_) == 0)
{
lean_object* v_a_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; 
v_a_2698_ = lean_ctor_get(v___x_2697_, 0);
lean_inc(v_a_2698_);
lean_dec_ref_known(v___x_2697_, 1);
v___x_2699_ = lean_unsigned_to_nat(1u);
v___x_2700_ = lean_nat_add(v_i_2685_, v___x_2699_);
lean_dec(v_i_2685_);
v_i_2685_ = v___x_2700_;
v_acc_2686_ = v_a_2698_;
goto _start;
}
else
{
lean_dec(v_i_2685_);
lean_dec_ref(v_f_2682_);
return v___x_2697_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_f_2702_, lean_object* v_keys_2703_, lean_object* v_vals_2704_, lean_object* v_i_2705_, lean_object* v_acc_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_){
_start:
{
lean_object* v_res_2712_; 
v_res_2712_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2___redArg(v_f_2702_, v_keys_2703_, v_vals_2704_, v_i_2705_, v_acc_2706_, v___y_2707_, v___y_2708_, v___y_2709_, v___y_2710_);
lean_dec(v___y_2710_);
lean_dec_ref(v___y_2709_);
lean_dec(v___y_2708_);
lean_dec_ref(v___y_2707_);
lean_dec_ref(v_vals_2704_);
lean_dec_ref(v_keys_2703_);
return v_res_2712_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1___redArg(lean_object* v_f_2713_, lean_object* v_as_2714_, size_t v_i_2715_, size_t v_stop_2716_, lean_object* v_b_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_){
_start:
{
lean_object* v_a_2724_; lean_object* v___y_2729_; uint8_t v___x_2731_; 
v___x_2731_ = lean_usize_dec_eq(v_i_2715_, v_stop_2716_);
if (v___x_2731_ == 0)
{
lean_object* v___x_2732_; 
v___x_2732_ = lean_array_uget_borrowed(v_as_2714_, v_i_2715_);
switch(lean_obj_tag(v___x_2732_))
{
case 0:
{
lean_object* v_key_2733_; lean_object* v_val_2734_; lean_object* v___x_2735_; 
v_key_2733_ = lean_ctor_get(v___x_2732_, 0);
v_val_2734_ = lean_ctor_get(v___x_2732_, 1);
lean_inc_ref(v_f_2713_);
lean_inc(v___y_2721_);
lean_inc_ref(v___y_2720_);
lean_inc(v___y_2719_);
lean_inc_ref(v___y_2718_);
lean_inc(v_val_2734_);
lean_inc(v_key_2733_);
v___x_2735_ = lean_apply_8(v_f_2713_, v_b_2717_, v_key_2733_, v_val_2734_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, lean_box(0));
v___y_2729_ = v___x_2735_;
goto v___jp_2728_;
}
case 1:
{
lean_object* v_node_2736_; lean_object* v___x_2737_; 
v_node_2736_ = lean_ctor_get(v___x_2732_, 0);
lean_inc(v_node_2736_);
lean_inc_ref(v_f_2713_);
v___x_2737_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___redArg(v_f_2713_, v_node_2736_, v_b_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_);
v___y_2729_ = v___x_2737_;
goto v___jp_2728_;
}
default: 
{
v_a_2724_ = v_b_2717_;
goto v___jp_2723_;
}
}
}
else
{
lean_object* v___x_2738_; 
lean_dec_ref(v_f_2713_);
v___x_2738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2738_, 0, v_b_2717_);
return v___x_2738_;
}
v___jp_2723_:
{
size_t v___x_2725_; size_t v___x_2726_; 
v___x_2725_ = ((size_t)1ULL);
v___x_2726_ = lean_usize_add(v_i_2715_, v___x_2725_);
v_i_2715_ = v___x_2726_;
v_b_2717_ = v_a_2724_;
goto _start;
}
v___jp_2728_:
{
if (lean_obj_tag(v___y_2729_) == 0)
{
lean_object* v_a_2730_; 
v_a_2730_ = lean_ctor_get(v___y_2729_, 0);
lean_inc(v_a_2730_);
lean_dec_ref_known(v___y_2729_, 1);
v_a_2724_ = v_a_2730_;
goto v___jp_2723_;
}
else
{
lean_dec_ref(v_f_2713_);
return v___y_2729_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___redArg(lean_object* v_f_2739_, lean_object* v_x_2740_, lean_object* v_x_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_){
_start:
{
if (lean_obj_tag(v_x_2740_) == 0)
{
lean_object* v_es_2747_; lean_object* v___x_2749_; uint8_t v_isShared_2750_; uint8_t v_isSharedCheck_2760_; 
v_es_2747_ = lean_ctor_get(v_x_2740_, 0);
v_isSharedCheck_2760_ = !lean_is_exclusive(v_x_2740_);
if (v_isSharedCheck_2760_ == 0)
{
v___x_2749_ = v_x_2740_;
v_isShared_2750_ = v_isSharedCheck_2760_;
goto v_resetjp_2748_;
}
else
{
lean_inc(v_es_2747_);
lean_dec(v_x_2740_);
v___x_2749_ = lean_box(0);
v_isShared_2750_ = v_isSharedCheck_2760_;
goto v_resetjp_2748_;
}
v_resetjp_2748_:
{
lean_object* v___x_2751_; lean_object* v___x_2752_; uint8_t v___x_2753_; 
v___x_2751_ = lean_unsigned_to_nat(0u);
v___x_2752_ = lean_array_get_size(v_es_2747_);
v___x_2753_ = lean_nat_dec_lt(v___x_2751_, v___x_2752_);
if (v___x_2753_ == 0)
{
lean_object* v___x_2755_; 
lean_dec_ref(v_es_2747_);
lean_dec_ref(v_f_2739_);
if (v_isShared_2750_ == 0)
{
lean_ctor_set(v___x_2749_, 0, v_x_2741_);
v___x_2755_ = v___x_2749_;
goto v_reusejp_2754_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v_x_2741_);
v___x_2755_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2754_;
}
v_reusejp_2754_:
{
return v___x_2755_;
}
}
else
{
size_t v___x_2757_; size_t v___x_2758_; lean_object* v___x_2759_; 
lean_del_object(v___x_2749_);
v___x_2757_ = ((size_t)0ULL);
v___x_2758_ = lean_usize_of_nat(v___x_2752_);
v___x_2759_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1___redArg(v_f_2739_, v_es_2747_, v___x_2757_, v___x_2758_, v_x_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_);
lean_dec_ref(v_es_2747_);
return v___x_2759_;
}
}
}
else
{
lean_object* v_ks_2761_; lean_object* v_vs_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; 
v_ks_2761_ = lean_ctor_get(v_x_2740_, 0);
lean_inc_ref(v_ks_2761_);
v_vs_2762_ = lean_ctor_get(v_x_2740_, 1);
lean_inc_ref(v_vs_2762_);
lean_dec_ref_known(v_x_2740_, 2);
v___x_2763_ = lean_unsigned_to_nat(0u);
v___x_2764_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2___redArg(v_f_2739_, v_ks_2761_, v_vs_2762_, v___x_2763_, v_x_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_);
lean_dec_ref(v_vs_2762_);
lean_dec_ref(v_ks_2761_);
return v___x_2764_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___redArg___boxed(lean_object* v_f_2765_, lean_object* v_x_2766_, lean_object* v_x_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_){
_start:
{
lean_object* v_res_2773_; 
v_res_2773_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___redArg(v_f_2765_, v_x_2766_, v_x_2767_, v___y_2768_, v___y_2769_, v___y_2770_, v___y_2771_);
lean_dec(v___y_2771_);
lean_dec_ref(v___y_2770_);
lean_dec(v___y_2769_);
lean_dec_ref(v___y_2768_);
return v_res_2773_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_2774_, lean_object* v_as_2775_, lean_object* v_i_2776_, lean_object* v_stop_2777_, lean_object* v_b_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_){
_start:
{
size_t v_i_boxed_2784_; size_t v_stop_boxed_2785_; lean_object* v_res_2786_; 
v_i_boxed_2784_ = lean_unbox_usize(v_i_2776_);
lean_dec(v_i_2776_);
v_stop_boxed_2785_ = lean_unbox_usize(v_stop_2777_);
lean_dec(v_stop_2777_);
v_res_2786_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1___redArg(v_f_2774_, v_as_2775_, v_i_boxed_2784_, v_stop_boxed_2785_, v_b_2778_, v___y_2779_, v___y_2780_, v___y_2781_, v___y_2782_);
lean_dec(v___y_2782_);
lean_dec_ref(v___y_2781_);
lean_dec(v___y_2780_);
lean_dec_ref(v___y_2779_);
lean_dec_ref(v_as_2775_);
return v_res_2786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___lam__1(lean_object* v_e_2787_, uint8_t v___x_2788_, lean_object* v___f_2789_, lean_object* v_d_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_){
_start:
{
uint8_t v___x_2796_; lean_object* v___x_2797_; 
v___x_2796_ = 0;
v___x_2797_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getKeyArgs(v_e_2787_, v___x_2796_, v___x_2788_, v___y_2791_, v___y_2792_, v___y_2793_, v___y_2794_);
if (lean_obj_tag(v___x_2797_) == 0)
{
lean_object* v_a_2798_; lean_object* v___x_2800_; uint8_t v_isShared_2801_; uint8_t v_isSharedCheck_2814_; 
v_a_2798_ = lean_ctor_get(v___x_2797_, 0);
v_isSharedCheck_2814_ = !lean_is_exclusive(v___x_2797_);
if (v_isSharedCheck_2814_ == 0)
{
v___x_2800_ = v___x_2797_;
v_isShared_2801_ = v_isSharedCheck_2814_;
goto v_resetjp_2799_;
}
else
{
lean_inc(v_a_2798_);
lean_dec(v___x_2797_);
v___x_2800_ = lean_box(0);
v_isShared_2801_ = v_isSharedCheck_2814_;
goto v_resetjp_2799_;
}
v_resetjp_2799_:
{
lean_object* v_fst_2802_; 
v_fst_2802_ = lean_ctor_get(v_a_2798_, 0);
lean_inc(v_fst_2802_);
if (lean_obj_tag(v_fst_2802_) == 0)
{
lean_object* v___x_2803_; lean_object* v___x_2804_; 
lean_del_object(v___x_2800_);
lean_dec(v_a_2798_);
v___x_2803_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_findKey___redArg___closed__1));
v___x_2804_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___redArg(v___f_2789_, v_d_2790_, v___x_2803_, v___y_2791_, v___y_2792_, v___y_2793_, v___y_2794_);
return v___x_2804_;
}
else
{
lean_object* v_snd_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; 
lean_dec_ref(v___f_2789_);
v_snd_2805_ = lean_ctor_get(v_a_2798_, 1);
lean_inc(v_snd_2805_);
lean_dec(v_a_2798_);
v___x_2806_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult___redArg(v_d_2790_);
v___x_2807_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getStarResult_spec__0___redArg(v_d_2790_, v_fst_2802_);
lean_dec(v_fst_2802_);
lean_dec_ref(v_d_2790_);
if (lean_obj_tag(v___x_2807_) == 0)
{
lean_object* v___x_2809_; 
lean_dec(v_snd_2805_);
if (v_isShared_2801_ == 0)
{
lean_ctor_set(v___x_2800_, 0, v___x_2806_);
v___x_2809_ = v___x_2800_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v___x_2806_);
v___x_2809_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
return v___x_2809_;
}
}
else
{
lean_object* v_val_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; 
lean_del_object(v___x_2800_);
v_val_2811_ = lean_ctor_get(v___x_2807_, 0);
lean_inc(v_val_2811_);
lean_dec_ref_known(v___x_2807_, 1);
v___x_2812_ = lean_unsigned_to_nat(0u);
v___x_2813_ = l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_getUnify_process___redArg(v___x_2812_, v_snd_2805_, v_val_2811_, v___x_2806_, v___y_2791_, v___y_2792_, v___y_2793_, v___y_2794_);
return v___x_2813_;
}
}
}
}
else
{
lean_object* v_a_2815_; lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2822_; 
lean_dec_ref(v_d_2790_);
lean_dec_ref(v___f_2789_);
v_a_2815_ = lean_ctor_get(v___x_2797_, 0);
v_isSharedCheck_2822_ = !lean_is_exclusive(v___x_2797_);
if (v_isSharedCheck_2822_ == 0)
{
v___x_2817_ = v___x_2797_;
v_isShared_2818_ = v_isSharedCheck_2822_;
goto v_resetjp_2816_;
}
else
{
lean_inc(v_a_2815_);
lean_dec(v___x_2797_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2822_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
lean_object* v___x_2820_; 
if (v_isShared_2818_ == 0)
{
v___x_2820_ = v___x_2817_;
goto v_reusejp_2819_;
}
else
{
lean_object* v_reuseFailAlloc_2821_; 
v_reuseFailAlloc_2821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2821_, 0, v_a_2815_);
v___x_2820_ = v_reuseFailAlloc_2821_;
goto v_reusejp_2819_;
}
v_reusejp_2819_:
{
return v___x_2820_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___lam__1___boxed(lean_object* v_e_2823_, lean_object* v___x_2824_, lean_object* v___f_2825_, lean_object* v_d_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_){
_start:
{
uint8_t v___x_1524__boxed_2832_; lean_object* v_res_2833_; 
v___x_1524__boxed_2832_ = lean_unbox(v___x_2824_);
v_res_2833_ = l_Lean_Meta_DiscrTree_getUnify___redArg___lam__1(v_e_2823_, v___x_1524__boxed_2832_, v___f_2825_, v_d_2826_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
lean_dec(v___y_2830_);
lean_dec_ref(v___y_2829_);
lean_dec(v___y_2828_);
lean_dec_ref(v___y_2827_);
return v_res_2833_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg(lean_object* v_d_2835_, lean_object* v_e_2836_, lean_object* v_a_2837_, lean_object* v_a_2838_, lean_object* v_a_2839_, lean_object* v_a_2840_){
_start:
{
lean_object* v___y_2843_; lean_object* v___x_2860_; uint8_t v_transparency_2861_; lean_object* v___f_2862_; uint8_t v___x_2863_; uint8_t v___x_2864_; uint8_t v___x_2865_; 
v___x_2860_ = l_Lean_Meta_Context_config(v_a_2837_);
v_transparency_2861_ = lean_ctor_get_uint8(v___x_2860_, 9);
lean_dec_ref(v___x_2860_);
v___f_2862_ = ((lean_object*)(l_Lean_Meta_DiscrTree_getUnify___redArg___closed__0));
v___x_2863_ = 1;
v___x_2864_ = 2;
v___x_2865_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_2861_, v___x_2864_);
if (v___x_2865_ == 0)
{
lean_object* v_keyedConfig_2866_; uint8_t v_trackZetaDelta_2867_; lean_object* v_zetaDeltaSet_2868_; lean_object* v_lctx_2869_; lean_object* v_localInstances_2870_; lean_object* v_defEqCtx_x3f_2871_; lean_object* v_synthPendingDepth_2872_; lean_object* v_customCanUnfoldPredicate_x3f_2873_; uint8_t v_univApprox_2874_; uint8_t v_inTypeClassResolution_2875_; uint8_t v_cacheInferType_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; 
v_keyedConfig_2866_ = lean_ctor_get(v_a_2837_, 0);
v_trackZetaDelta_2867_ = lean_ctor_get_uint8(v_a_2837_, sizeof(void*)*7);
v_zetaDeltaSet_2868_ = lean_ctor_get(v_a_2837_, 1);
v_lctx_2869_ = lean_ctor_get(v_a_2837_, 2);
v_localInstances_2870_ = lean_ctor_get(v_a_2837_, 3);
v_defEqCtx_x3f_2871_ = lean_ctor_get(v_a_2837_, 4);
v_synthPendingDepth_2872_ = lean_ctor_get(v_a_2837_, 5);
v_customCanUnfoldPredicate_x3f_2873_ = lean_ctor_get(v_a_2837_, 6);
v_univApprox_2874_ = lean_ctor_get_uint8(v_a_2837_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2875_ = lean_ctor_get_uint8(v_a_2837_, sizeof(void*)*7 + 2);
v_cacheInferType_2876_ = lean_ctor_get_uint8(v_a_2837_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_2866_);
v___x_2877_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_2864_, v_keyedConfig_2866_);
lean_inc(v_customCanUnfoldPredicate_x3f_2873_);
lean_inc(v_synthPendingDepth_2872_);
lean_inc(v_defEqCtx_x3f_2871_);
lean_inc_ref(v_localInstances_2870_);
lean_inc_ref(v_lctx_2869_);
lean_inc(v_zetaDeltaSet_2868_);
v___x_2878_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2878_, 0, v___x_2877_);
lean_ctor_set(v___x_2878_, 1, v_zetaDeltaSet_2868_);
lean_ctor_set(v___x_2878_, 2, v_lctx_2869_);
lean_ctor_set(v___x_2878_, 3, v_localInstances_2870_);
lean_ctor_set(v___x_2878_, 4, v_defEqCtx_x3f_2871_);
lean_ctor_set(v___x_2878_, 5, v_synthPendingDepth_2872_);
lean_ctor_set(v___x_2878_, 6, v_customCanUnfoldPredicate_x3f_2873_);
lean_ctor_set_uint8(v___x_2878_, sizeof(void*)*7, v_trackZetaDelta_2867_);
lean_ctor_set_uint8(v___x_2878_, sizeof(void*)*7 + 1, v_univApprox_2874_);
lean_ctor_set_uint8(v___x_2878_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2875_);
lean_ctor_set_uint8(v___x_2878_, sizeof(void*)*7 + 3, v_cacheInferType_2876_);
v___x_2879_ = l_Lean_Meta_DiscrTree_getUnify___redArg___lam__1(v_e_2836_, v___x_2863_, v___f_2862_, v_d_2835_, v___x_2878_, v_a_2838_, v_a_2839_, v_a_2840_);
lean_dec_ref_known(v___x_2878_, 7);
v___y_2843_ = v___x_2879_;
goto v___jp_2842_;
}
else
{
lean_object* v___x_2880_; 
v___x_2880_ = l_Lean_Meta_DiscrTree_getUnify___redArg___lam__1(v_e_2836_, v___x_2863_, v___f_2862_, v_d_2835_, v_a_2837_, v_a_2838_, v_a_2839_, v_a_2840_);
v___y_2843_ = v___x_2880_;
goto v___jp_2842_;
}
v___jp_2842_:
{
if (lean_obj_tag(v___y_2843_) == 0)
{
lean_object* v_a_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2851_; 
v_a_2844_ = lean_ctor_get(v___y_2843_, 0);
v_isSharedCheck_2851_ = !lean_is_exclusive(v___y_2843_);
if (v_isSharedCheck_2851_ == 0)
{
v___x_2846_ = v___y_2843_;
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_a_2844_);
lean_dec(v___y_2843_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v___x_2849_; 
if (v_isShared_2847_ == 0)
{
v___x_2849_ = v___x_2846_;
goto v_reusejp_2848_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v_a_2844_);
v___x_2849_ = v_reuseFailAlloc_2850_;
goto v_reusejp_2848_;
}
v_reusejp_2848_:
{
return v___x_2849_;
}
}
}
else
{
lean_object* v_a_2852_; lean_object* v___x_2854_; uint8_t v_isShared_2855_; uint8_t v_isSharedCheck_2859_; 
v_a_2852_ = lean_ctor_get(v___y_2843_, 0);
v_isSharedCheck_2859_ = !lean_is_exclusive(v___y_2843_);
if (v_isSharedCheck_2859_ == 0)
{
v___x_2854_ = v___y_2843_;
v_isShared_2855_ = v_isSharedCheck_2859_;
goto v_resetjp_2853_;
}
else
{
lean_inc(v_a_2852_);
lean_dec(v___y_2843_);
v___x_2854_ = lean_box(0);
v_isShared_2855_ = v_isSharedCheck_2859_;
goto v_resetjp_2853_;
}
v_resetjp_2853_:
{
lean_object* v___x_2857_; 
if (v_isShared_2855_ == 0)
{
v___x_2857_ = v___x_2854_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v_a_2852_);
v___x_2857_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
return v___x_2857_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___redArg___boxed(lean_object* v_d_2881_, lean_object* v_e_2882_, lean_object* v_a_2883_, lean_object* v_a_2884_, lean_object* v_a_2885_, lean_object* v_a_2886_, lean_object* v_a_2887_){
_start:
{
lean_object* v_res_2888_; 
v_res_2888_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v_d_2881_, v_e_2882_, v_a_2883_, v_a_2884_, v_a_2885_, v_a_2886_);
lean_dec(v_a_2886_);
lean_dec_ref(v_a_2885_);
lean_dec(v_a_2884_);
lean_dec_ref(v_a_2883_);
return v_res_2888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify(lean_object* v_00_u03b1_2889_, lean_object* v_d_2890_, lean_object* v_e_2891_, lean_object* v_a_2892_, lean_object* v_a_2893_, lean_object* v_a_2894_, lean_object* v_a_2895_){
_start:
{
lean_object* v___x_2897_; 
v___x_2897_ = l_Lean_Meta_DiscrTree_getUnify___redArg(v_d_2890_, v_e_2891_, v_a_2892_, v_a_2893_, v_a_2894_, v_a_2895_);
return v___x_2897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_getUnify___boxed(lean_object* v_00_u03b1_2898_, lean_object* v_d_2899_, lean_object* v_e_2900_, lean_object* v_a_2901_, lean_object* v_a_2902_, lean_object* v_a_2903_, lean_object* v_a_2904_, lean_object* v_a_2905_){
_start:
{
lean_object* v_res_2906_; 
v_res_2906_ = l_Lean_Meta_DiscrTree_getUnify(v_00_u03b1_2898_, v_d_2899_, v_e_2900_, v_a_2901_, v_a_2902_, v_a_2903_, v_a_2904_);
lean_dec(v_a_2904_);
lean_dec_ref(v_a_2903_);
lean_dec(v_a_2902_);
lean_dec_ref(v_a_2901_);
return v_res_2906_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0___redArg(lean_object* v_map_2907_, lean_object* v_f_2908_, lean_object* v_init_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_){
_start:
{
lean_object* v___x_2915_; 
v___x_2915_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___redArg(v_f_2908_, v_map_2907_, v_init_2909_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_);
return v___x_2915_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0___redArg___boxed(lean_object* v_map_2916_, lean_object* v_f_2917_, lean_object* v_init_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_){
_start:
{
lean_object* v_res_2924_; 
v_res_2924_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0___redArg(v_map_2916_, v_f_2917_, v_init_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_);
lean_dec(v___y_2922_);
lean_dec_ref(v___y_2921_);
lean_dec(v___y_2920_);
lean_dec_ref(v___y_2919_);
return v_res_2924_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0(lean_object* v_00_u03c3_2925_, lean_object* v_00_u03b2_2926_, lean_object* v_map_2927_, lean_object* v_f_2928_, lean_object* v_init_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_){
_start:
{
lean_object* v___x_2935_; 
v___x_2935_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___redArg(v_f_2928_, v_map_2927_, v_init_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_);
return v___x_2935_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0___boxed(lean_object* v_00_u03c3_2936_, lean_object* v_00_u03b2_2937_, lean_object* v_map_2938_, lean_object* v_f_2939_, lean_object* v_init_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_){
_start:
{
lean_object* v_res_2946_; 
v_res_2946_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0(v_00_u03c3_2936_, v_00_u03b2_2937_, v_map_2938_, v_f_2939_, v_init_2940_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
lean_dec(v___y_2944_);
lean_dec_ref(v___y_2943_);
lean_dec(v___y_2942_);
lean_dec_ref(v___y_2941_);
return v_res_2946_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0(lean_object* v_00_u03c3_2947_, lean_object* v_00_u03b1_2948_, lean_object* v_00_u03b2_2949_, lean_object* v_f_2950_, lean_object* v_x_2951_, lean_object* v_x_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_){
_start:
{
lean_object* v___x_2958_; 
v___x_2958_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___redArg(v_f_2950_, v_x_2951_, v_x_2952_, v___y_2953_, v___y_2954_, v___y_2955_, v___y_2956_);
return v___x_2958_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0___boxed(lean_object* v_00_u03c3_2959_, lean_object* v_00_u03b1_2960_, lean_object* v_00_u03b2_2961_, lean_object* v_f_2962_, lean_object* v_x_2963_, lean_object* v_x_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_){
_start:
{
lean_object* v_res_2970_; 
v_res_2970_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0(v_00_u03c3_2959_, v_00_u03b1_2960_, v_00_u03b2_2961_, v_f_2962_, v_x_2963_, v_x_2964_, v___y_2965_, v___y_2966_, v___y_2967_, v___y_2968_);
lean_dec(v___y_2968_);
lean_dec_ref(v___y_2967_);
lean_dec(v___y_2966_);
lean_dec_ref(v___y_2965_);
return v_res_2970_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_2971_, lean_object* v_00_u03b2_2972_, lean_object* v_00_u03c3_2973_, lean_object* v_f_2974_, lean_object* v_as_2975_, size_t v_i_2976_, size_t v_stop_2977_, lean_object* v_b_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_){
_start:
{
lean_object* v___x_2984_; 
v___x_2984_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1___redArg(v_f_2974_, v_as_2975_, v_i_2976_, v_stop_2977_, v_b_2978_, v___y_2979_, v___y_2980_, v___y_2981_, v___y_2982_);
return v___x_2984_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2985_, lean_object* v_00_u03b2_2986_, lean_object* v_00_u03c3_2987_, lean_object* v_f_2988_, lean_object* v_as_2989_, lean_object* v_i_2990_, lean_object* v_stop_2991_, lean_object* v_b_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_){
_start:
{
size_t v_i_boxed_2998_; size_t v_stop_boxed_2999_; lean_object* v_res_3000_; 
v_i_boxed_2998_ = lean_unbox_usize(v_i_2990_);
lean_dec(v_i_2990_);
v_stop_boxed_2999_ = lean_unbox_usize(v_stop_2991_);
lean_dec(v_stop_2991_);
v_res_3000_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__1(v_00_u03b1_2985_, v_00_u03b2_2986_, v_00_u03c3_2987_, v_f_2988_, v_as_2989_, v_i_boxed_2998_, v_stop_boxed_2999_, v_b_2992_, v___y_2993_, v___y_2994_, v___y_2995_, v___y_2996_);
lean_dec(v___y_2996_);
lean_dec_ref(v___y_2995_);
lean_dec(v___y_2994_);
lean_dec_ref(v___y_2993_);
lean_dec_ref(v_as_2989_);
return v_res_3000_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2(lean_object* v_00_u03c3_3001_, lean_object* v_00_u03b1_3002_, lean_object* v_00_u03b2_3003_, lean_object* v_f_3004_, lean_object* v_keys_3005_, lean_object* v_vals_3006_, lean_object* v_heq_3007_, lean_object* v_i_3008_, lean_object* v_acc_3009_, lean_object* v___y_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_){
_start:
{
lean_object* v___x_3015_; 
v___x_3015_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2___redArg(v_f_3004_, v_keys_3005_, v_vals_3006_, v_i_3008_, v_acc_3009_, v___y_3010_, v___y_3011_, v___y_3012_, v___y_3013_);
return v___x_3015_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03c3_3016_, lean_object* v_00_u03b1_3017_, lean_object* v_00_u03b2_3018_, lean_object* v_f_3019_, lean_object* v_keys_3020_, lean_object* v_vals_3021_, lean_object* v_heq_3022_, lean_object* v_i_3023_, lean_object* v_acc_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_){
_start:
{
lean_object* v_res_3030_; 
v_res_3030_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_DiscrTree_getUnify_spec__0_spec__0_spec__2(v_00_u03c3_3016_, v_00_u03b1_3017_, v_00_u03b2_3018_, v_f_3019_, v_keys_3020_, v_vals_3021_, v_heq_3022_, v_i_3023_, v_acc_3024_, v___y_3025_, v___y_3026_, v___y_3027_, v___y_3028_);
lean_dec(v___y_3028_);
lean_dec_ref(v___y_3027_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3025_);
lean_dec_ref(v_vals_3021_);
lean_dec_ref(v_keys_3020_);
return v_res_3030_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_DiscrTree_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_WHNF(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_DiscrTree_Main(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_DiscrTree_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar = _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar();
lean_mark_persistent(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_tmpStar);
l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_initCapacity = _init_l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_initCapacity();
lean_mark_persistent(l___private_Lean_Meta_DiscrTree_Main_0__Lean_Meta_DiscrTree_initCapacity);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_DiscrTree_Main(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_DiscrTree_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_WHNF(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_DiscrTree_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DiscrTree_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_WHNF(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_DiscrTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_DiscrTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_DiscrTree_Main(builtin);
}
#ifdef __cplusplus
}
#endif

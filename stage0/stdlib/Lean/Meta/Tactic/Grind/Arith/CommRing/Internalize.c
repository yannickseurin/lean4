// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.CommRing.Internalize
// Imports: public import Lean.Meta.Tactic.Grind.Arith.CommRing.RingId import Lean.Meta.Tactic.Grind.Simp import Lean.Meta.Tactic.Grind.Arith.Util import Lean.Meta.Tactic.Grind.Arith.CommRing.Reify import Lean.Meta.Tactic.Grind.Arith.CommRing.DenoteExpr
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
lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_canon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstance_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Lean_Meta_getIntValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getNatValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCommRingId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushNewFact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_hasChar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCharInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_int_emod(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_mkIntLit(lean_object*);
extern lean_object* l_Lean_eagerReflBoolTrue;
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
uint8_t l_Lean_Meta_Grind_Arith_isIntModuleVirtualParent(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_reify_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_CommRing_ringExt;
lean_object* l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_updateLastTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCommSemiringId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_sreify_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNonCommRingId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_ncreify_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommRingId___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommRingM_modifyRing___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNonCommSemiringId_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_ncsreify_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "IntCast"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "intCast"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 186, 193, 83, 149, 255, 18, 69)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(190, 203, 124, 26, 63, 107, 241, 61)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "NatCast"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "natCast"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(65, 128, 63, 191, 243, 154, 52, 80)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(47, 224, 192, 179, 253, 143, 7, 98)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__6_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__9_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__10_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__11_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HPow"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hPow"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__12_value),LEAN_SCALAR_PTR_LITERAL(155, 188, 136, 200, 106, 253, 76, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__14_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__13_value),LEAN_SCALAR_PTR_LITERAL(32, 63, 208, 57, 56, 184, 164, 144)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "HSMul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__15_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "hSMul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__16_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__15_value),LEAN_SCALAR_PTR_LITERAL(226, 107, 25, 48, 80, 144, 236, 217)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__17_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__16_value),LEAN_SCALAR_PTR_LITERAL(23, 127, 6, 115, 121, 139, 223, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__17_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__18_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__19 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__19_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__18_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__20_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__19_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__20_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HSub"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__21 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__21_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hSub"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__22 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__22_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__21_value),LEAN_SCALAR_PTR_LITERAL(121, 130, 45, 212, 110, 237, 236, 233)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__23_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__22_value),LEAN_SCALAR_PTR_LITERAL(231, 253, 204, 163, 168, 77, 27, 58)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__23 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__23_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__24 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__24_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__25 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__25_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__24_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__26_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__25_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__26 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__26_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__27 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__27_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__27_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__28 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__28_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__29 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__29_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__29_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__30 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__30_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__1_value),LEAN_SCALAR_PTR_LITERAL(109, 14, 90, 172, 72, 170, 136, 101)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LT"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__3_value),LEAN_SCALAR_PTR_LITERAL(71, 235, 154, 184, 62, 135, 30, 248)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__4_value),LEAN_SCALAR_PTR_LITERAL(54, 235, 251, 9, 4, 74, 57, 164)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMod"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMod"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__6_value),LEAN_SCALAR_PTR_LITERAL(93, 4, 3, 35, 188, 254, 191, 190)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__7_value),LEAN_SCALAR_PTR_LITERAL(120, 199, 142, 238, 9, 44, 94, 134)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HDiv"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hDiv"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__9_value),LEAN_SCALAR_PTR_LITERAL(74, 223, 78, 88, 255, 236, 144, 164)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__10_value),LEAN_SCALAR_PTR_LITERAL(26, 183, 188, 240, 156, 118, 170, 84)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__11_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "failed to find instance"};
static const lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1___boxed(lean_object**);
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Ring"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toNeg"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__4_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(100, 233, 103, 154, 53, 22, 86, 139)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__9_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___lam__0(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__0_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__0_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__0_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(1, 189, 244, 99, 68, 50, 19, 202)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 186, 193, 83, 149, 255, 18, 69)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cast"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__27_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(181, 4, 252, 84, 28, 16, 24, 6)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4___lam__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Semiring"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(84, 97, 73, 37, 143, 22, 233, 204)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(65, 128, 63, 191, 243, 154, 52, 80)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___lam__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Field"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toInv"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 164, 44, 189, 207, 226, 143, 119)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 152, 64, 108, 234, 163, 46, 107)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Inv"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(142, 68, 231, 210, 96, 163, 154, 19)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__4_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inv"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(142, 68, 231, 210, 96, 163, 154, 19)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(63, 31, 248, 222, 13, 64, 40, 141)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__6_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "`grind` internal error, type is not a field"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___lam__0(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__6_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__1;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(103, 49, 23, 61, 125, 46, 165, 129)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3_spec__5___boxed(lean_object**);
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHMul"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(177, 107, 107, 59, 202, 230, 169, 251)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toMul"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__3_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(232, 23, 103, 115, 5, 120, 143, 98)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__18_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "CommRing"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "inv_split"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__0_value),LEAN_SCALAR_PTR_LITERAL(205, 3, 54, 198, 92, 149, 38, 227)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__1_value),LEAN_SCALAR_PTR_LITERAL(145, 213, 231, 249, 53, 164, 241, 56)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "inv_int_eqC"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__0_value),LEAN_SCALAR_PTR_LITERAL(205, 3, 54, 198, 92, 149, 38, 227)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__4_value),LEAN_SCALAR_PTR_LITERAL(153, 82, 86, 32, 91, 2, 111, 119)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "inv_zero_eqC"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__0_value),LEAN_SCALAR_PTR_LITERAL(205, 3, 54, 198, 92, 149, 38, 227)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__6_value),LEAN_SCALAR_PTR_LITERAL(59, 171, 80, 119, 126, 116, 37, 65)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "inv_int_eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__0_value),LEAN_SCALAR_PTR_LITERAL(205, 3, 54, 198, 92, 149, 38, 227)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__9_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__8_value),LEAN_SCALAR_PTR_LITERAL(187, 42, 227, 251, 174, 7, 5, 152)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "inv_zero"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__11_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__11_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 164, 44, 189, 207, 226, 143, 119)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__11_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__10_value),LEAN_SCALAR_PTR_LITERAL(103, 152, 135, 191, 44, 26, 55, 129)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__11_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "PowIdentity"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__0_value;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "pow_eq"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__2_value_aux_1),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(169, 166, 196, 137, 32, 118, 33, 172)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__2_value_aux_2),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(235, 179, 238, 185, 247, 4, 37, 103)}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__2_value;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__3_value;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ring"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(17, 56, 209, 254, 185, 203, 153, 57)}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__5_value;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__6 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__7 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__7_value;
static lean_once_cell_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__8;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "PowIdentity: pushing x^"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__9 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__9_value;
static lean_once_cell_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__10;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " = x for "};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__11 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__11_value;
static lean_once_cell_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__12;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeInv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeInv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "internalize"};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(17, 56, 209, 254, 185, 203, 153, 57)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 40, 248, 182, 136, 181, 0, 182)}};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__4;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "]: "};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "semiring ["};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__8;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "(non-comm) ring ["};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__10;
static const lean_string_object l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "(non-comm) semiring ["};
static const lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__11_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__12;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f(lean_object* v_e_52_){
_start:
{
lean_object* v___x_53_; uint8_t v___x_54_; 
v___x_53_ = l_Lean_Expr_cleanupAnnotations(v_e_52_);
v___x_54_ = l_Lean_Expr_isApp(v___x_53_);
if (v___x_54_ == 0)
{
lean_object* v___x_55_; 
lean_dec_ref(v___x_53_);
v___x_55_ = lean_box(0);
return v___x_55_;
}
else
{
lean_object* v___x_56_; uint8_t v___x_57_; 
v___x_56_ = l_Lean_Expr_appFnCleanup___redArg(v___x_53_);
v___x_57_ = l_Lean_Expr_isApp(v___x_56_);
if (v___x_57_ == 0)
{
lean_object* v___x_58_; 
lean_dec_ref(v___x_56_);
v___x_58_ = lean_box(0);
return v___x_58_;
}
else
{
lean_object* v___x_59_; uint8_t v___x_60_; 
v___x_59_ = l_Lean_Expr_appFnCleanup___redArg(v___x_56_);
v___x_60_ = l_Lean_Expr_isApp(v___x_59_);
if (v___x_60_ == 0)
{
lean_object* v___x_61_; 
lean_dec_ref(v___x_59_);
v___x_61_ = lean_box(0);
return v___x_61_;
}
else
{
lean_object* v_arg_62_; lean_object* v___x_63_; lean_object* v___x_64_; uint8_t v___x_65_; 
v_arg_62_ = lean_ctor_get(v___x_59_, 1);
lean_inc_ref(v_arg_62_);
v___x_63_ = l_Lean_Expr_appFnCleanup___redArg(v___x_59_);
v___x_64_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__2));
v___x_65_ = l_Lean_Expr_isConstOf(v___x_63_, v___x_64_);
if (v___x_65_ == 0)
{
lean_object* v___x_66_; uint8_t v___x_67_; 
v___x_66_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5));
v___x_67_ = l_Lean_Expr_isConstOf(v___x_63_, v___x_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; uint8_t v___x_69_; 
v___x_68_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__8));
v___x_69_ = l_Lean_Expr_isConstOf(v___x_63_, v___x_68_);
if (v___x_69_ == 0)
{
lean_object* v___x_70_; uint8_t v___x_71_; 
v___x_70_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__11));
v___x_71_ = l_Lean_Expr_isConstOf(v___x_63_, v___x_70_);
if (v___x_71_ == 0)
{
uint8_t v___x_72_; 
lean_dec_ref(v_arg_62_);
v___x_72_ = l_Lean_Expr_isApp(v___x_63_);
if (v___x_72_ == 0)
{
lean_object* v___x_73_; 
lean_dec_ref(v___x_63_);
v___x_73_ = lean_box(0);
return v___x_73_;
}
else
{
lean_object* v___x_74_; uint8_t v___x_75_; 
v___x_74_ = l_Lean_Expr_appFnCleanup___redArg(v___x_63_);
v___x_75_ = l_Lean_Expr_isApp(v___x_74_);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; 
lean_dec_ref(v___x_74_);
v___x_76_ = lean_box(0);
return v___x_76_;
}
else
{
lean_object* v_arg_77_; lean_object* v___x_78_; uint8_t v___x_79_; 
v_arg_77_ = lean_ctor_get(v___x_74_, 1);
lean_inc_ref(v_arg_77_);
v___x_78_ = l_Lean_Expr_appFnCleanup___redArg(v___x_74_);
v___x_79_ = l_Lean_Expr_isApp(v___x_78_);
if (v___x_79_ == 0)
{
lean_object* v___x_80_; 
lean_dec_ref(v___x_78_);
lean_dec_ref(v_arg_77_);
v___x_80_ = lean_box(0);
return v___x_80_;
}
else
{
lean_object* v_arg_81_; lean_object* v___x_82_; lean_object* v___x_83_; uint8_t v___x_84_; 
v_arg_81_ = lean_ctor_get(v___x_78_, 1);
lean_inc_ref(v_arg_81_);
v___x_82_ = l_Lean_Expr_appFnCleanup___redArg(v___x_78_);
v___x_83_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__14));
v___x_84_ = l_Lean_Expr_isConstOf(v___x_82_, v___x_83_);
if (v___x_84_ == 0)
{
lean_object* v___x_85_; uint8_t v___x_86_; 
v___x_85_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__17));
v___x_86_ = l_Lean_Expr_isConstOf(v___x_82_, v___x_85_);
if (v___x_86_ == 0)
{
lean_object* v___x_87_; uint8_t v___x_88_; 
lean_dec_ref(v_arg_77_);
v___x_87_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__20));
v___x_88_ = l_Lean_Expr_isConstOf(v___x_82_, v___x_87_);
if (v___x_88_ == 0)
{
lean_object* v___x_89_; uint8_t v___x_90_; 
v___x_89_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__23));
v___x_90_ = l_Lean_Expr_isConstOf(v___x_82_, v___x_89_);
if (v___x_90_ == 0)
{
lean_object* v___x_91_; uint8_t v___x_92_; 
v___x_91_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__26));
v___x_92_ = l_Lean_Expr_isConstOf(v___x_82_, v___x_91_);
lean_dec_ref(v___x_82_);
if (v___x_92_ == 0)
{
lean_object* v___x_93_; 
lean_dec_ref(v_arg_81_);
v___x_93_ = lean_box(0);
return v___x_93_;
}
else
{
lean_object* v___x_94_; 
v___x_94_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_94_, 0, v_arg_81_);
return v___x_94_;
}
}
else
{
lean_object* v___x_95_; 
lean_dec_ref(v___x_82_);
v___x_95_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_95_, 0, v_arg_81_);
return v___x_95_;
}
}
else
{
lean_object* v___x_96_; 
lean_dec_ref(v___x_82_);
v___x_96_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_96_, 0, v_arg_81_);
return v___x_96_;
}
}
else
{
lean_object* v___x_97_; lean_object* v___x_98_; uint8_t v___x_99_; 
lean_dec_ref(v___x_82_);
v___x_97_ = l_Lean_Expr_cleanupAnnotations(v_arg_81_);
v___x_98_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__28));
v___x_99_ = l_Lean_Expr_isConstOf(v___x_97_, v___x_98_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_100_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__30));
v___x_101_ = l_Lean_Expr_isConstOf(v___x_97_, v___x_100_);
lean_dec_ref(v___x_97_);
if (v___x_101_ == 0)
{
lean_object* v___x_102_; 
lean_dec_ref(v_arg_77_);
v___x_102_ = lean_box(0);
return v___x_102_;
}
else
{
lean_object* v___x_103_; 
v___x_103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_103_, 0, v_arg_77_);
return v___x_103_;
}
}
else
{
lean_object* v___x_104_; 
lean_dec_ref(v___x_97_);
v___x_104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_104_, 0, v_arg_77_);
return v___x_104_;
}
}
}
else
{
lean_object* v___x_105_; lean_object* v___x_106_; uint8_t v___x_107_; 
lean_dec_ref(v___x_82_);
v___x_105_ = l_Lean_Expr_cleanupAnnotations(v_arg_77_);
v___x_106_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__30));
v___x_107_ = l_Lean_Expr_isConstOf(v___x_105_, v___x_106_);
lean_dec_ref(v___x_105_);
if (v___x_107_ == 0)
{
lean_object* v___x_108_; 
lean_dec_ref(v_arg_81_);
v___x_108_ = lean_box(0);
return v___x_108_;
}
else
{
lean_object* v___x_109_; 
v___x_109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_109_, 0, v_arg_81_);
return v___x_109_;
}
}
}
}
}
}
else
{
lean_object* v___x_110_; 
lean_dec_ref(v___x_63_);
v___x_110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_110_, 0, v_arg_62_);
return v___x_110_;
}
}
else
{
lean_object* v___x_111_; 
lean_dec_ref(v___x_63_);
v___x_111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_111_, 0, v_arg_62_);
return v___x_111_;
}
}
else
{
lean_object* v___x_112_; 
lean_dec_ref(v___x_63_);
v___x_112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_112_, 0, v_arg_62_);
return v___x_112_;
}
}
else
{
lean_object* v___x_113_; 
lean_dec_ref(v___x_63_);
v___x_113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_113_, 0, v_arg_62_);
return v___x_113_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent(lean_object* v_parent_x3f_134_){
_start:
{
if (lean_obj_tag(v_parent_x3f_134_) == 1)
{
lean_object* v_val_135_; lean_object* v___x_136_; 
v_val_135_ = lean_ctor_get(v_parent_x3f_134_, 0);
lean_inc_n(v_val_135_, 2);
lean_dec_ref_known(v_parent_x3f_134_, 1);
v___x_136_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f(v_val_135_);
if (lean_obj_tag(v___x_136_) == 0)
{
uint8_t v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; 
v___x_137_ = 0;
v___x_138_ = l_Lean_Expr_cleanupAnnotations(v_val_135_);
v___x_139_ = l_Lean_Expr_isApp(v___x_138_);
if (v___x_139_ == 0)
{
lean_dec_ref(v___x_138_);
return v___x_137_;
}
else
{
lean_object* v___x_140_; uint8_t v___x_141_; 
v___x_140_ = l_Lean_Expr_appFnCleanup___redArg(v___x_138_);
v___x_141_ = l_Lean_Expr_isApp(v___x_140_);
if (v___x_141_ == 0)
{
lean_dec_ref(v___x_140_);
return v___x_137_;
}
else
{
lean_object* v___x_142_; uint8_t v___x_143_; 
v___x_142_ = l_Lean_Expr_appFnCleanup___redArg(v___x_140_);
v___x_143_ = l_Lean_Expr_isApp(v___x_142_);
if (v___x_143_ == 0)
{
lean_dec_ref(v___x_142_);
return v___x_137_;
}
else
{
lean_object* v___x_144_; uint8_t v___x_145_; 
v___x_144_ = l_Lean_Expr_appFnCleanup___redArg(v___x_142_);
v___x_145_ = l_Lean_Expr_isApp(v___x_144_);
if (v___x_145_ == 0)
{
lean_dec_ref(v___x_144_);
return v___x_137_;
}
else
{
lean_object* v___x_146_; lean_object* v___x_147_; uint8_t v___x_148_; 
v___x_146_ = l_Lean_Expr_appFnCleanup___redArg(v___x_144_);
v___x_147_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__2));
v___x_148_ = l_Lean_Expr_isConstOf(v___x_146_, v___x_147_);
if (v___x_148_ == 0)
{
lean_object* v___x_149_; uint8_t v___x_150_; 
v___x_149_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__5));
v___x_150_ = l_Lean_Expr_isConstOf(v___x_146_, v___x_149_);
if (v___x_150_ == 0)
{
uint8_t v___x_151_; 
v___x_151_ = l_Lean_Expr_isApp(v___x_146_);
if (v___x_151_ == 0)
{
lean_dec_ref(v___x_146_);
return v___x_137_;
}
else
{
lean_object* v___x_152_; uint8_t v___x_153_; 
v___x_152_ = l_Lean_Expr_appFnCleanup___redArg(v___x_146_);
v___x_153_ = l_Lean_Expr_isApp(v___x_152_);
if (v___x_153_ == 0)
{
lean_dec_ref(v___x_152_);
return v___x_137_;
}
else
{
lean_object* v___x_154_; lean_object* v___x_155_; uint8_t v___x_156_; 
v___x_154_ = l_Lean_Expr_appFnCleanup___redArg(v___x_152_);
v___x_155_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__8));
v___x_156_ = l_Lean_Expr_isConstOf(v___x_154_, v___x_155_);
if (v___x_156_ == 0)
{
lean_object* v___x_157_; uint8_t v___x_158_; 
v___x_157_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___closed__11));
v___x_158_ = l_Lean_Expr_isConstOf(v___x_154_, v___x_157_);
lean_dec_ref(v___x_154_);
if (v___x_158_ == 0)
{
return v___x_137_;
}
else
{
return v___x_145_;
}
}
else
{
lean_dec_ref(v___x_154_);
return v___x_145_;
}
}
}
}
else
{
lean_dec_ref(v___x_146_);
return v___x_145_;
}
}
else
{
lean_dec_ref(v___x_146_);
return v___x_145_;
}
}
}
}
}
}
else
{
uint8_t v___x_159_; 
lean_dec_ref_known(v___x_136_, 1);
lean_dec(v_val_135_);
v___x_159_ = 1;
return v___x_159_;
}
}
else
{
uint8_t v___x_160_; 
lean_dec(v_parent_x3f_134_);
v___x_160_ = 0;
return v___x_160_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent___boxed(lean_object* v_parent_x3f_161_){
_start:
{
uint8_t v_res_162_; lean_object* v_r_163_; 
v_res_162_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent(v_parent_x3f_161_);
v_r_163_ = lean_box(v_res_162_);
return v_r_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___lam__0(lean_object* v_a_164_, lean_object* v_s_165_){
_start:
{
lean_object* v_toRing_166_; lean_object* v_invFn_x3f_167_; lean_object* v_semiringId_x3f_168_; lean_object* v_commSemiringInst_169_; lean_object* v_commRingInst_170_; lean_object* v_noZeroDivInst_x3f_171_; lean_object* v_fieldInst_x3f_172_; lean_object* v_powIdentityInst_x3f_173_; lean_object* v_denoteEntries_174_; lean_object* v_nextId_175_; lean_object* v_steps_176_; lean_object* v_queue_177_; lean_object* v_basis_178_; lean_object* v_diseqs_179_; uint8_t v_recheck_180_; lean_object* v_invSet_181_; lean_object* v_powIdentityVarCount_182_; lean_object* v_numEq0_x3f_183_; uint8_t v_numEq0Updated_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_216_; 
v_toRing_166_ = lean_ctor_get(v_s_165_, 0);
v_invFn_x3f_167_ = lean_ctor_get(v_s_165_, 1);
v_semiringId_x3f_168_ = lean_ctor_get(v_s_165_, 2);
v_commSemiringInst_169_ = lean_ctor_get(v_s_165_, 3);
v_commRingInst_170_ = lean_ctor_get(v_s_165_, 4);
v_noZeroDivInst_x3f_171_ = lean_ctor_get(v_s_165_, 5);
v_fieldInst_x3f_172_ = lean_ctor_get(v_s_165_, 6);
v_powIdentityInst_x3f_173_ = lean_ctor_get(v_s_165_, 7);
v_denoteEntries_174_ = lean_ctor_get(v_s_165_, 8);
v_nextId_175_ = lean_ctor_get(v_s_165_, 9);
v_steps_176_ = lean_ctor_get(v_s_165_, 10);
v_queue_177_ = lean_ctor_get(v_s_165_, 11);
v_basis_178_ = lean_ctor_get(v_s_165_, 12);
v_diseqs_179_ = lean_ctor_get(v_s_165_, 13);
v_recheck_180_ = lean_ctor_get_uint8(v_s_165_, sizeof(void*)*17);
v_invSet_181_ = lean_ctor_get(v_s_165_, 14);
v_powIdentityVarCount_182_ = lean_ctor_get(v_s_165_, 15);
v_numEq0_x3f_183_ = lean_ctor_get(v_s_165_, 16);
v_numEq0Updated_184_ = lean_ctor_get_uint8(v_s_165_, sizeof(void*)*17 + 1);
v_isSharedCheck_216_ = !lean_is_exclusive(v_s_165_);
if (v_isSharedCheck_216_ == 0)
{
v___x_186_ = v_s_165_;
v_isShared_187_ = v_isSharedCheck_216_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_numEq0_x3f_183_);
lean_inc(v_powIdentityVarCount_182_);
lean_inc(v_invSet_181_);
lean_inc(v_diseqs_179_);
lean_inc(v_basis_178_);
lean_inc(v_queue_177_);
lean_inc(v_steps_176_);
lean_inc(v_nextId_175_);
lean_inc(v_denoteEntries_174_);
lean_inc(v_powIdentityInst_x3f_173_);
lean_inc(v_fieldInst_x3f_172_);
lean_inc(v_noZeroDivInst_x3f_171_);
lean_inc(v_commRingInst_170_);
lean_inc(v_commSemiringInst_169_);
lean_inc(v_semiringId_x3f_168_);
lean_inc(v_invFn_x3f_167_);
lean_inc(v_toRing_166_);
lean_dec(v_s_165_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_216_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v_id_188_; lean_object* v_type_189_; lean_object* v_u_190_; lean_object* v_ringInst_191_; lean_object* v_semiringInst_192_; lean_object* v_charInst_x3f_193_; lean_object* v_addFn_x3f_194_; lean_object* v_mulFn_x3f_195_; lean_object* v_subFn_x3f_196_; lean_object* v_powFn_x3f_197_; lean_object* v_intCastFn_x3f_198_; lean_object* v_natCastFn_x3f_199_; lean_object* v_one_x3f_200_; lean_object* v_vars_201_; lean_object* v_varMap_202_; lean_object* v_denote_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_214_; 
v_id_188_ = lean_ctor_get(v_toRing_166_, 0);
v_type_189_ = lean_ctor_get(v_toRing_166_, 1);
v_u_190_ = lean_ctor_get(v_toRing_166_, 2);
v_ringInst_191_ = lean_ctor_get(v_toRing_166_, 3);
v_semiringInst_192_ = lean_ctor_get(v_toRing_166_, 4);
v_charInst_x3f_193_ = lean_ctor_get(v_toRing_166_, 5);
v_addFn_x3f_194_ = lean_ctor_get(v_toRing_166_, 6);
v_mulFn_x3f_195_ = lean_ctor_get(v_toRing_166_, 7);
v_subFn_x3f_196_ = lean_ctor_get(v_toRing_166_, 8);
v_powFn_x3f_197_ = lean_ctor_get(v_toRing_166_, 10);
v_intCastFn_x3f_198_ = lean_ctor_get(v_toRing_166_, 11);
v_natCastFn_x3f_199_ = lean_ctor_get(v_toRing_166_, 12);
v_one_x3f_200_ = lean_ctor_get(v_toRing_166_, 13);
v_vars_201_ = lean_ctor_get(v_toRing_166_, 14);
v_varMap_202_ = lean_ctor_get(v_toRing_166_, 15);
v_denote_203_ = lean_ctor_get(v_toRing_166_, 16);
v_isSharedCheck_214_ = !lean_is_exclusive(v_toRing_166_);
if (v_isSharedCheck_214_ == 0)
{
lean_object* v_unused_215_; 
v_unused_215_ = lean_ctor_get(v_toRing_166_, 9);
lean_dec(v_unused_215_);
v___x_205_ = v_toRing_166_;
v_isShared_206_ = v_isSharedCheck_214_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_denote_203_);
lean_inc(v_varMap_202_);
lean_inc(v_vars_201_);
lean_inc(v_one_x3f_200_);
lean_inc(v_natCastFn_x3f_199_);
lean_inc(v_intCastFn_x3f_198_);
lean_inc(v_powFn_x3f_197_);
lean_inc(v_subFn_x3f_196_);
lean_inc(v_mulFn_x3f_195_);
lean_inc(v_addFn_x3f_194_);
lean_inc(v_charInst_x3f_193_);
lean_inc(v_semiringInst_192_);
lean_inc(v_ringInst_191_);
lean_inc(v_u_190_);
lean_inc(v_type_189_);
lean_inc(v_id_188_);
lean_dec(v_toRing_166_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_214_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v___x_207_; lean_object* v___x_209_; 
v___x_207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_207_, 0, v_a_164_);
if (v_isShared_206_ == 0)
{
lean_ctor_set(v___x_205_, 9, v___x_207_);
v___x_209_ = v___x_205_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 17, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_id_188_);
lean_ctor_set(v_reuseFailAlloc_213_, 1, v_type_189_);
lean_ctor_set(v_reuseFailAlloc_213_, 2, v_u_190_);
lean_ctor_set(v_reuseFailAlloc_213_, 3, v_ringInst_191_);
lean_ctor_set(v_reuseFailAlloc_213_, 4, v_semiringInst_192_);
lean_ctor_set(v_reuseFailAlloc_213_, 5, v_charInst_x3f_193_);
lean_ctor_set(v_reuseFailAlloc_213_, 6, v_addFn_x3f_194_);
lean_ctor_set(v_reuseFailAlloc_213_, 7, v_mulFn_x3f_195_);
lean_ctor_set(v_reuseFailAlloc_213_, 8, v_subFn_x3f_196_);
lean_ctor_set(v_reuseFailAlloc_213_, 9, v___x_207_);
lean_ctor_set(v_reuseFailAlloc_213_, 10, v_powFn_x3f_197_);
lean_ctor_set(v_reuseFailAlloc_213_, 11, v_intCastFn_x3f_198_);
lean_ctor_set(v_reuseFailAlloc_213_, 12, v_natCastFn_x3f_199_);
lean_ctor_set(v_reuseFailAlloc_213_, 13, v_one_x3f_200_);
lean_ctor_set(v_reuseFailAlloc_213_, 14, v_vars_201_);
lean_ctor_set(v_reuseFailAlloc_213_, 15, v_varMap_202_);
lean_ctor_set(v_reuseFailAlloc_213_, 16, v_denote_203_);
v___x_209_ = v_reuseFailAlloc_213_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
lean_object* v___x_211_; 
if (v_isShared_187_ == 0)
{
lean_ctor_set(v___x_186_, 0, v___x_209_);
v___x_211_ = v___x_186_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(0, 17, 2);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v___x_209_);
lean_ctor_set(v_reuseFailAlloc_212_, 1, v_invFn_x3f_167_);
lean_ctor_set(v_reuseFailAlloc_212_, 2, v_semiringId_x3f_168_);
lean_ctor_set(v_reuseFailAlloc_212_, 3, v_commSemiringInst_169_);
lean_ctor_set(v_reuseFailAlloc_212_, 4, v_commRingInst_170_);
lean_ctor_set(v_reuseFailAlloc_212_, 5, v_noZeroDivInst_x3f_171_);
lean_ctor_set(v_reuseFailAlloc_212_, 6, v_fieldInst_x3f_172_);
lean_ctor_set(v_reuseFailAlloc_212_, 7, v_powIdentityInst_x3f_173_);
lean_ctor_set(v_reuseFailAlloc_212_, 8, v_denoteEntries_174_);
lean_ctor_set(v_reuseFailAlloc_212_, 9, v_nextId_175_);
lean_ctor_set(v_reuseFailAlloc_212_, 10, v_steps_176_);
lean_ctor_set(v_reuseFailAlloc_212_, 11, v_queue_177_);
lean_ctor_set(v_reuseFailAlloc_212_, 12, v_basis_178_);
lean_ctor_set(v_reuseFailAlloc_212_, 13, v_diseqs_179_);
lean_ctor_set(v_reuseFailAlloc_212_, 14, v_invSet_181_);
lean_ctor_set(v_reuseFailAlloc_212_, 15, v_powIdentityVarCount_182_);
lean_ctor_set(v_reuseFailAlloc_212_, 16, v_numEq0_x3f_183_);
lean_ctor_set_uint8(v_reuseFailAlloc_212_, sizeof(void*)*17, v_recheck_180_);
lean_ctor_set_uint8(v_reuseFailAlloc_212_, sizeof(void*)*17 + 1, v_numEq0Updated_184_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8_spec__9(lean_object* v_msgData_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_){
_start:
{
lean_object* v___x_223_; lean_object* v_env_224_; lean_object* v___x_225_; lean_object* v_toCold_226_; lean_object* v_mctx_227_; lean_object* v_lctx_228_; lean_object* v_options_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_223_ = lean_st_ref_get(v___y_221_);
v_env_224_ = lean_ctor_get(v___x_223_, 0);
lean_inc_ref(v_env_224_);
lean_dec(v___x_223_);
v___x_225_ = lean_st_ref_get(v___y_219_);
v_toCold_226_ = lean_ctor_get(v___y_220_, 0);
v_mctx_227_ = lean_ctor_get(v___x_225_, 0);
lean_inc_ref(v_mctx_227_);
lean_dec(v___x_225_);
v_lctx_228_ = lean_ctor_get(v___y_218_, 2);
v_options_229_ = lean_ctor_get(v_toCold_226_, 2);
lean_inc_ref(v_options_229_);
lean_inc_ref(v_lctx_228_);
v___x_230_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_230_, 0, v_env_224_);
lean_ctor_set(v___x_230_, 1, v_mctx_227_);
lean_ctor_set(v___x_230_, 2, v_lctx_228_);
lean_ctor_set(v___x_230_, 3, v_options_229_);
v___x_231_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_230_);
lean_ctor_set(v___x_231_, 1, v_msgData_217_);
v___x_232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_232_, 0, v___x_231_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8_spec__9___boxed(lean_object* v_msgData_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8_spec__9(v_msgData_233_, v___y_234_, v___y_235_, v___y_236_, v___y_237_);
lean_dec(v___y_237_);
lean_dec_ref(v___y_236_);
lean_dec(v___y_235_);
lean_dec_ref(v___y_234_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8___redArg(lean_object* v_msg_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_){
_start:
{
lean_object* v_ref_246_; lean_object* v___x_247_; lean_object* v_a_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_256_; 
v_ref_246_ = lean_ctor_get(v___y_243_, 2);
v___x_247_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8_spec__9(v_msg_240_, v___y_241_, v___y_242_, v___y_243_, v___y_244_);
v_a_248_ = lean_ctor_get(v___x_247_, 0);
v_isSharedCheck_256_ = !lean_is_exclusive(v___x_247_);
if (v_isSharedCheck_256_ == 0)
{
v___x_250_ = v___x_247_;
v_isShared_251_ = v_isSharedCheck_256_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_a_248_);
lean_dec(v___x_247_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_256_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_252_; lean_object* v___x_254_; 
lean_inc(v_ref_246_);
v___x_252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_252_, 0, v_ref_246_);
lean_ctor_set(v___x_252_, 1, v_a_248_);
if (v_isShared_251_ == 0)
{
lean_ctor_set_tag(v___x_250_, 1);
lean_ctor_set(v___x_250_, 0, v___x_252_);
v___x_254_ = v___x_250_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v___x_252_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8___redArg___boxed(lean_object* v_msg_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8___redArg(v_msg_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_);
lean_dec(v___y_261_);
lean_dec_ref(v___y_260_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
return v_res_263_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5___closed__1(void){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_265_ = ((lean_object*)(l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5___closed__0));
v___x_266_ = l_Lean_stringToMessageData(v___x_265_);
return v___x_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5(lean_object* v_type_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_){
_start:
{
lean_object* v___x_280_; 
lean_inc_ref(v_type_267_);
v___x_280_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_type_267_, v___y_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_293_; 
v_a_281_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_293_ == 0)
{
v___x_283_ = v___x_280_;
v_isShared_284_ = v_isSharedCheck_293_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_280_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_293_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
if (lean_obj_tag(v_a_281_) == 1)
{
lean_object* v_val_285_; lean_object* v___x_287_; 
lean_dec_ref(v_type_267_);
v_val_285_ = lean_ctor_get(v_a_281_, 0);
lean_inc(v_val_285_);
lean_dec_ref_known(v_a_281_, 1);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 0, v_val_285_);
v___x_287_ = v___x_283_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_val_285_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
else
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
lean_del_object(v___x_283_);
lean_dec(v_a_281_);
v___x_289_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5___closed__1, &l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5___closed__1_once, _init_l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5___closed__1);
v___x_290_ = l_Lean_indentExpr(v_type_267_);
v___x_291_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_289_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8___redArg(v___x_291_, v___y_275_, v___y_276_, v___y_277_, v___y_278_);
return v___x_292_;
}
}
}
else
{
lean_object* v_a_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_301_; 
lean_dec_ref(v_type_267_);
v_a_294_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_301_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_301_ == 0)
{
v___x_296_ = v___x_280_;
v_isShared_297_ = v_isSharedCheck_301_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_a_294_);
lean_dec(v___x_280_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_301_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v___x_299_; 
if (v_isShared_297_ == 0)
{
v___x_299_ = v___x_296_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v_a_294_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
return v___x_299_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_type_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_){
_start:
{
lean_object* v_res_315_; 
v_res_315_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5(v_type_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_, v___y_309_, v___y_310_, v___y_311_, v___y_312_, v___y_313_);
lean_dec(v___y_313_);
lean_dec_ref(v___y_312_);
lean_dec(v___y_311_);
lean_dec_ref(v___y_310_);
lean_dec(v___y_309_);
lean_dec_ref(v___y_308_);
lean_dec(v___y_307_);
lean_dec_ref(v___y_306_);
lean_dec(v___y_305_);
lean_dec(v___y_304_);
lean_dec_ref(v___y_303_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1(lean_object* v_type_316_, lean_object* v_u_317_, lean_object* v_instDeclName_318_, lean_object* v_declName_319_, lean_object* v_expectedInst_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_333_ = lean_box(0);
v___x_334_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_334_, 0, v_u_317_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
lean_inc_ref(v___x_334_);
v___x_335_ = l_Lean_mkConst(v_instDeclName_318_, v___x_334_);
lean_inc_ref(v_type_316_);
v___x_336_ = l_Lean_Expr_app___override(v___x_335_, v_type_316_);
v___x_337_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5(v___x_336_, v___y_321_, v___y_322_, v___y_323_, v___y_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_, v___y_329_, v___y_330_, v___y_331_);
if (lean_obj_tag(v___x_337_) == 0)
{
lean_object* v_a_338_; lean_object* v___x_339_; 
v_a_338_ = lean_ctor_get(v___x_337_, 0);
lean_inc_n(v_a_338_, 2);
lean_dec_ref_known(v___x_337_, 1);
lean_inc(v_declName_319_);
v___x_339_ = l_Lean_Meta_Grind_Arith_CommRing_checkInst(v_declName_319_, v_a_338_, v_expectedInst_320_, v___y_328_, v___y_329_, v___y_330_, v___y_331_);
if (lean_obj_tag(v___x_339_) == 0)
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
lean_dec_ref_known(v___x_339_, 1);
v___x_340_ = l_Lean_mkConst(v_declName_319_, v___x_334_);
v___x_341_ = l_Lean_mkAppB(v___x_340_, v_type_316_, v_a_338_);
v___x_342_ = l_Lean_Meta_Sym_canon(v___x_341_, v___y_326_, v___y_327_, v___y_328_, v___y_329_, v___y_330_, v___y_331_);
if (lean_obj_tag(v___x_342_) == 0)
{
lean_object* v_a_343_; lean_object* v___x_344_; 
v_a_343_ = lean_ctor_get(v___x_342_, 0);
lean_inc(v_a_343_);
lean_dec_ref_known(v___x_342_, 1);
v___x_344_ = l_Lean_Meta_Sym_shareCommon(v_a_343_, v___y_326_, v___y_327_, v___y_328_, v___y_329_, v___y_330_, v___y_331_);
return v___x_344_;
}
else
{
return v___x_342_;
}
}
else
{
lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_352_; 
lean_dec(v_a_338_);
lean_dec_ref_known(v___x_334_, 2);
lean_dec(v_declName_319_);
lean_dec_ref(v_type_316_);
v_a_345_ = lean_ctor_get(v___x_339_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v___x_339_);
if (v_isSharedCheck_352_ == 0)
{
v___x_347_ = v___x_339_;
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v___x_339_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_350_; 
if (v_isShared_348_ == 0)
{
v___x_350_ = v___x_347_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v_a_345_);
v___x_350_ = v_reuseFailAlloc_351_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
return v___x_350_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_334_, 2);
lean_dec_ref(v_expectedInst_320_);
lean_dec(v_declName_319_);
lean_dec_ref(v_type_316_);
return v___x_337_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1___boxed(lean_object** _args){
lean_object* v_type_353_ = _args[0];
lean_object* v_u_354_ = _args[1];
lean_object* v_instDeclName_355_ = _args[2];
lean_object* v_declName_356_ = _args[3];
lean_object* v_expectedInst_357_ = _args[4];
lean_object* v___y_358_ = _args[5];
lean_object* v___y_359_ = _args[6];
lean_object* v___y_360_ = _args[7];
lean_object* v___y_361_ = _args[8];
lean_object* v___y_362_ = _args[9];
lean_object* v___y_363_ = _args[10];
lean_object* v___y_364_ = _args[11];
lean_object* v___y_365_ = _args[12];
lean_object* v___y_366_ = _args[13];
lean_object* v___y_367_ = _args[14];
lean_object* v___y_368_ = _args[15];
lean_object* v___y_369_ = _args[16];
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l_Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1(v_type_353_, v_u_354_, v_instDeclName_355_, v_declName_356_, v_expectedInst_357_, v___y_358_, v___y_359_, v___y_360_, v___y_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_, v___y_366_, v___y_367_, v___y_368_);
lean_dec(v___y_368_);
lean_dec_ref(v___y_367_);
lean_dec(v___y_366_);
lean_dec_ref(v___y_365_);
lean_dec(v___y_364_);
lean_dec_ref(v___y_363_);
lean_dec(v___y_362_);
lean_dec_ref(v___y_361_);
lean_dec(v___y_360_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0(lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_);
if (lean_obj_tag(v___x_394_) == 0)
{
lean_object* v_a_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_435_; 
v_a_395_ = lean_ctor_get(v___x_394_, 0);
v_isSharedCheck_435_ = !lean_is_exclusive(v___x_394_);
if (v_isSharedCheck_435_ == 0)
{
v___x_397_ = v___x_394_;
v_isShared_398_ = v_isSharedCheck_435_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_a_395_);
lean_dec(v___x_394_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_435_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v_toRing_399_; lean_object* v_negFn_x3f_400_; 
v_toRing_399_ = lean_ctor_get(v_a_395_, 0);
lean_inc_ref(v_toRing_399_);
lean_dec(v_a_395_);
v_negFn_x3f_400_ = lean_ctor_get(v_toRing_399_, 9);
if (lean_obj_tag(v_negFn_x3f_400_) == 1)
{
lean_object* v_val_401_; lean_object* v___x_403_; 
lean_inc_ref(v_negFn_x3f_400_);
lean_dec_ref(v_toRing_399_);
v_val_401_ = lean_ctor_get(v_negFn_x3f_400_, 0);
lean_inc(v_val_401_);
lean_dec_ref_known(v_negFn_x3f_400_, 1);
if (v_isShared_398_ == 0)
{
lean_ctor_set(v___x_397_, 0, v_val_401_);
v___x_403_ = v___x_397_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_val_401_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
else
{
lean_object* v_type_405_; lean_object* v_u_406_; lean_object* v_ringInst_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v_expectedInst_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
lean_del_object(v___x_397_);
v_type_405_ = lean_ctor_get(v_toRing_399_, 1);
lean_inc_ref_n(v_type_405_, 2);
v_u_406_ = lean_ctor_get(v_toRing_399_, 2);
lean_inc_n(v_u_406_, 2);
v_ringInst_407_ = lean_ctor_get(v_toRing_399_, 3);
lean_inc_ref(v_ringInst_407_);
lean_dec_ref(v_toRing_399_);
v___x_408_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__4));
v___x_409_ = lean_box(0);
v___x_410_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_410_, 0, v_u_406_);
lean_ctor_set(v___x_410_, 1, v___x_409_);
v___x_411_ = l_Lean_mkConst(v___x_408_, v___x_410_);
v_expectedInst_412_ = l_Lean_mkAppB(v___x_411_, v_type_405_, v_ringInst_407_);
v___x_413_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___closed__5));
v___x_414_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__11));
v___x_415_ = l_Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1(v_type_405_, v_u_406_, v___x_413_, v___x_414_, v_expectedInst_412_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_);
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v_a_416_; lean_object* v___f_417_; lean_object* v___x_418_; 
v_a_416_ = lean_ctor_get(v___x_415_, 0);
lean_inc_n(v_a_416_, 2);
lean_dec_ref_known(v___x_415_, 1);
v___f_417_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___lam__0), 2, 1);
lean_closure_set(v___f_417_, 0, v_a_416_);
v___x_418_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v___f_417_, v___y_382_, v___y_383_);
if (lean_obj_tag(v___x_418_) == 0)
{
lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_425_; 
v_isSharedCheck_425_ = !lean_is_exclusive(v___x_418_);
if (v_isSharedCheck_425_ == 0)
{
lean_object* v_unused_426_; 
v_unused_426_ = lean_ctor_get(v___x_418_, 0);
lean_dec(v_unused_426_);
v___x_420_ = v___x_418_;
v_isShared_421_ = v_isSharedCheck_425_;
goto v_resetjp_419_;
}
else
{
lean_dec(v___x_418_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_425_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v___x_423_; 
if (v_isShared_421_ == 0)
{
lean_ctor_set(v___x_420_, 0, v_a_416_);
v___x_423_ = v___x_420_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v_a_416_);
v___x_423_ = v_reuseFailAlloc_424_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
return v___x_423_;
}
}
}
else
{
lean_object* v_a_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_434_; 
lean_dec(v_a_416_);
v_a_427_ = lean_ctor_get(v___x_418_, 0);
v_isSharedCheck_434_ = !lean_is_exclusive(v___x_418_);
if (v_isSharedCheck_434_ == 0)
{
v___x_429_ = v___x_418_;
v_isShared_430_ = v_isSharedCheck_434_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_a_427_);
lean_dec(v___x_418_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_434_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_432_; 
if (v_isShared_430_ == 0)
{
v___x_432_ = v___x_429_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v_a_427_);
v___x_432_ = v_reuseFailAlloc_433_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
return v___x_432_;
}
}
}
}
else
{
return v___x_415_;
}
}
}
}
else
{
lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_443_; 
v_a_436_ = lean_ctor_get(v___x_394_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_394_);
if (v_isSharedCheck_443_ == 0)
{
v___x_438_ = v___x_394_;
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_394_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_441_; 
if (v_isShared_439_ == 0)
{
v___x_441_ = v___x_438_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_a_436_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0___boxed(lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0(v___y_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_, v___y_449_, v___y_450_, v___y_451_, v___y_452_, v___y_453_, v___y_454_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
lean_dec(v___y_452_);
lean_dec_ref(v___y_451_);
lean_dec(v___y_450_);
lean_dec_ref(v___y_449_);
lean_dec(v___y_448_);
lean_dec_ref(v___y_447_);
lean_dec(v___y_446_);
lean_dec(v___y_445_);
lean_dec_ref(v___y_444_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0(lean_object* v_inst_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_){
_start:
{
lean_object* v___x_470_; 
v___x_470_ = l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0(v___y_458_, v___y_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v_a_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_483_; 
v_a_471_ = lean_ctor_get(v___x_470_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_483_ == 0)
{
v___x_473_ = v___x_470_;
v_isShared_474_ = v_isSharedCheck_483_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_a_471_);
lean_dec(v___x_470_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_483_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_475_; size_t v___x_476_; size_t v___x_477_; uint8_t v___x_478_; lean_object* v___x_479_; lean_object* v___x_481_; 
v___x_475_ = l_Lean_Expr_appArg_x21(v_a_471_);
lean_dec(v_a_471_);
v___x_476_ = lean_ptr_addr(v___x_475_);
lean_dec_ref(v___x_475_);
v___x_477_ = lean_ptr_addr(v_inst_457_);
v___x_478_ = lean_usize_dec_eq(v___x_476_, v___x_477_);
v___x_479_ = lean_box(v___x_478_);
if (v_isShared_474_ == 0)
{
lean_ctor_set(v___x_473_, 0, v___x_479_);
v___x_481_ = v___x_473_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v___x_479_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
else
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_491_; 
v_a_484_ = lean_ctor_get(v___x_470_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_491_ == 0)
{
v___x_486_ = v___x_470_;
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_470_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_489_; 
if (v_isShared_487_ == 0)
{
v___x_489_ = v___x_486_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_a_484_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0___boxed(lean_object* v_inst_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0(v_inst_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
lean_dec(v___y_503_);
lean_dec_ref(v___y_502_);
lean_dec(v___y_501_);
lean_dec_ref(v___y_500_);
lean_dec(v___y_499_);
lean_dec_ref(v___y_498_);
lean_dec(v___y_497_);
lean_dec_ref(v___y_496_);
lean_dec(v___y_495_);
lean_dec(v___y_494_);
lean_dec_ref(v___y_493_);
lean_dec_ref(v_inst_492_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___lam__0(lean_object* v_a_506_, lean_object* v_s_507_){
_start:
{
lean_object* v_toRing_508_; lean_object* v_invFn_x3f_509_; lean_object* v_semiringId_x3f_510_; lean_object* v_commSemiringInst_511_; lean_object* v_commRingInst_512_; lean_object* v_noZeroDivInst_x3f_513_; lean_object* v_fieldInst_x3f_514_; lean_object* v_powIdentityInst_x3f_515_; lean_object* v_denoteEntries_516_; lean_object* v_nextId_517_; lean_object* v_steps_518_; lean_object* v_queue_519_; lean_object* v_basis_520_; lean_object* v_diseqs_521_; uint8_t v_recheck_522_; lean_object* v_invSet_523_; lean_object* v_powIdentityVarCount_524_; lean_object* v_numEq0_x3f_525_; uint8_t v_numEq0Updated_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_558_; 
v_toRing_508_ = lean_ctor_get(v_s_507_, 0);
v_invFn_x3f_509_ = lean_ctor_get(v_s_507_, 1);
v_semiringId_x3f_510_ = lean_ctor_get(v_s_507_, 2);
v_commSemiringInst_511_ = lean_ctor_get(v_s_507_, 3);
v_commRingInst_512_ = lean_ctor_get(v_s_507_, 4);
v_noZeroDivInst_x3f_513_ = lean_ctor_get(v_s_507_, 5);
v_fieldInst_x3f_514_ = lean_ctor_get(v_s_507_, 6);
v_powIdentityInst_x3f_515_ = lean_ctor_get(v_s_507_, 7);
v_denoteEntries_516_ = lean_ctor_get(v_s_507_, 8);
v_nextId_517_ = lean_ctor_get(v_s_507_, 9);
v_steps_518_ = lean_ctor_get(v_s_507_, 10);
v_queue_519_ = lean_ctor_get(v_s_507_, 11);
v_basis_520_ = lean_ctor_get(v_s_507_, 12);
v_diseqs_521_ = lean_ctor_get(v_s_507_, 13);
v_recheck_522_ = lean_ctor_get_uint8(v_s_507_, sizeof(void*)*17);
v_invSet_523_ = lean_ctor_get(v_s_507_, 14);
v_powIdentityVarCount_524_ = lean_ctor_get(v_s_507_, 15);
v_numEq0_x3f_525_ = lean_ctor_get(v_s_507_, 16);
v_numEq0Updated_526_ = lean_ctor_get_uint8(v_s_507_, sizeof(void*)*17 + 1);
v_isSharedCheck_558_ = !lean_is_exclusive(v_s_507_);
if (v_isSharedCheck_558_ == 0)
{
v___x_528_ = v_s_507_;
v_isShared_529_ = v_isSharedCheck_558_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_numEq0_x3f_525_);
lean_inc(v_powIdentityVarCount_524_);
lean_inc(v_invSet_523_);
lean_inc(v_diseqs_521_);
lean_inc(v_basis_520_);
lean_inc(v_queue_519_);
lean_inc(v_steps_518_);
lean_inc(v_nextId_517_);
lean_inc(v_denoteEntries_516_);
lean_inc(v_powIdentityInst_x3f_515_);
lean_inc(v_fieldInst_x3f_514_);
lean_inc(v_noZeroDivInst_x3f_513_);
lean_inc(v_commRingInst_512_);
lean_inc(v_commSemiringInst_511_);
lean_inc(v_semiringId_x3f_510_);
lean_inc(v_invFn_x3f_509_);
lean_inc(v_toRing_508_);
lean_dec(v_s_507_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_558_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v_id_530_; lean_object* v_type_531_; lean_object* v_u_532_; lean_object* v_ringInst_533_; lean_object* v_semiringInst_534_; lean_object* v_charInst_x3f_535_; lean_object* v_addFn_x3f_536_; lean_object* v_mulFn_x3f_537_; lean_object* v_subFn_x3f_538_; lean_object* v_negFn_x3f_539_; lean_object* v_powFn_x3f_540_; lean_object* v_natCastFn_x3f_541_; lean_object* v_one_x3f_542_; lean_object* v_vars_543_; lean_object* v_varMap_544_; lean_object* v_denote_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_556_; 
v_id_530_ = lean_ctor_get(v_toRing_508_, 0);
v_type_531_ = lean_ctor_get(v_toRing_508_, 1);
v_u_532_ = lean_ctor_get(v_toRing_508_, 2);
v_ringInst_533_ = lean_ctor_get(v_toRing_508_, 3);
v_semiringInst_534_ = lean_ctor_get(v_toRing_508_, 4);
v_charInst_x3f_535_ = lean_ctor_get(v_toRing_508_, 5);
v_addFn_x3f_536_ = lean_ctor_get(v_toRing_508_, 6);
v_mulFn_x3f_537_ = lean_ctor_get(v_toRing_508_, 7);
v_subFn_x3f_538_ = lean_ctor_get(v_toRing_508_, 8);
v_negFn_x3f_539_ = lean_ctor_get(v_toRing_508_, 9);
v_powFn_x3f_540_ = lean_ctor_get(v_toRing_508_, 10);
v_natCastFn_x3f_541_ = lean_ctor_get(v_toRing_508_, 12);
v_one_x3f_542_ = lean_ctor_get(v_toRing_508_, 13);
v_vars_543_ = lean_ctor_get(v_toRing_508_, 14);
v_varMap_544_ = lean_ctor_get(v_toRing_508_, 15);
v_denote_545_ = lean_ctor_get(v_toRing_508_, 16);
v_isSharedCheck_556_ = !lean_is_exclusive(v_toRing_508_);
if (v_isSharedCheck_556_ == 0)
{
lean_object* v_unused_557_; 
v_unused_557_ = lean_ctor_get(v_toRing_508_, 11);
lean_dec(v_unused_557_);
v___x_547_ = v_toRing_508_;
v_isShared_548_ = v_isSharedCheck_556_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_denote_545_);
lean_inc(v_varMap_544_);
lean_inc(v_vars_543_);
lean_inc(v_one_x3f_542_);
lean_inc(v_natCastFn_x3f_541_);
lean_inc(v_powFn_x3f_540_);
lean_inc(v_negFn_x3f_539_);
lean_inc(v_subFn_x3f_538_);
lean_inc(v_mulFn_x3f_537_);
lean_inc(v_addFn_x3f_536_);
lean_inc(v_charInst_x3f_535_);
lean_inc(v_semiringInst_534_);
lean_inc(v_ringInst_533_);
lean_inc(v_u_532_);
lean_inc(v_type_531_);
lean_inc(v_id_530_);
lean_dec(v_toRing_508_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_556_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v___x_549_; lean_object* v___x_551_; 
v___x_549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_549_, 0, v_a_506_);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 11, v___x_549_);
v___x_551_ = v___x_547_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 17, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_id_530_);
lean_ctor_set(v_reuseFailAlloc_555_, 1, v_type_531_);
lean_ctor_set(v_reuseFailAlloc_555_, 2, v_u_532_);
lean_ctor_set(v_reuseFailAlloc_555_, 3, v_ringInst_533_);
lean_ctor_set(v_reuseFailAlloc_555_, 4, v_semiringInst_534_);
lean_ctor_set(v_reuseFailAlloc_555_, 5, v_charInst_x3f_535_);
lean_ctor_set(v_reuseFailAlloc_555_, 6, v_addFn_x3f_536_);
lean_ctor_set(v_reuseFailAlloc_555_, 7, v_mulFn_x3f_537_);
lean_ctor_set(v_reuseFailAlloc_555_, 8, v_subFn_x3f_538_);
lean_ctor_set(v_reuseFailAlloc_555_, 9, v_negFn_x3f_539_);
lean_ctor_set(v_reuseFailAlloc_555_, 10, v_powFn_x3f_540_);
lean_ctor_set(v_reuseFailAlloc_555_, 11, v___x_549_);
lean_ctor_set(v_reuseFailAlloc_555_, 12, v_natCastFn_x3f_541_);
lean_ctor_set(v_reuseFailAlloc_555_, 13, v_one_x3f_542_);
lean_ctor_set(v_reuseFailAlloc_555_, 14, v_vars_543_);
lean_ctor_set(v_reuseFailAlloc_555_, 15, v_varMap_544_);
lean_ctor_set(v_reuseFailAlloc_555_, 16, v_denote_545_);
v___x_551_ = v_reuseFailAlloc_555_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
lean_object* v___x_553_; 
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 0, v___x_551_);
v___x_553_ = v___x_528_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 17, 2);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v___x_551_);
lean_ctor_set(v_reuseFailAlloc_554_, 1, v_invFn_x3f_509_);
lean_ctor_set(v_reuseFailAlloc_554_, 2, v_semiringId_x3f_510_);
lean_ctor_set(v_reuseFailAlloc_554_, 3, v_commSemiringInst_511_);
lean_ctor_set(v_reuseFailAlloc_554_, 4, v_commRingInst_512_);
lean_ctor_set(v_reuseFailAlloc_554_, 5, v_noZeroDivInst_x3f_513_);
lean_ctor_set(v_reuseFailAlloc_554_, 6, v_fieldInst_x3f_514_);
lean_ctor_set(v_reuseFailAlloc_554_, 7, v_powIdentityInst_x3f_515_);
lean_ctor_set(v_reuseFailAlloc_554_, 8, v_denoteEntries_516_);
lean_ctor_set(v_reuseFailAlloc_554_, 9, v_nextId_517_);
lean_ctor_set(v_reuseFailAlloc_554_, 10, v_steps_518_);
lean_ctor_set(v_reuseFailAlloc_554_, 11, v_queue_519_);
lean_ctor_set(v_reuseFailAlloc_554_, 12, v_basis_520_);
lean_ctor_set(v_reuseFailAlloc_554_, 13, v_diseqs_521_);
lean_ctor_set(v_reuseFailAlloc_554_, 14, v_invSet_523_);
lean_ctor_set(v_reuseFailAlloc_554_, 15, v_powIdentityVarCount_524_);
lean_ctor_set(v_reuseFailAlloc_554_, 16, v_numEq0_x3f_525_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, sizeof(void*)*17, v_recheck_522_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, sizeof(void*)*17 + 1, v_numEq0Updated_526_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2(lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_){
_start:
{
lean_object* v___y_583_; lean_object* v___y_584_; lean_object* v___y_585_; lean_object* v___x_605_; 
v___x_605_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___y_570_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_, v___y_580_);
if (lean_obj_tag(v___x_605_) == 0)
{
lean_object* v_a_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_664_; 
v_a_606_ = lean_ctor_get(v___x_605_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_664_ == 0)
{
v___x_608_ = v___x_605_;
v_isShared_609_ = v_isSharedCheck_664_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_a_606_);
lean_dec(v___x_605_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_664_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v_toRing_610_; lean_object* v_intCastFn_x3f_611_; 
v_toRing_610_ = lean_ctor_get(v_a_606_, 0);
lean_inc_ref(v_toRing_610_);
lean_dec(v_a_606_);
v_intCastFn_x3f_611_ = lean_ctor_get(v_toRing_610_, 11);
if (lean_obj_tag(v_intCastFn_x3f_611_) == 1)
{
lean_object* v_val_612_; lean_object* v___x_614_; 
lean_inc_ref(v_intCastFn_x3f_611_);
lean_dec_ref(v_toRing_610_);
v_val_612_ = lean_ctor_get(v_intCastFn_x3f_611_, 0);
lean_inc(v_val_612_);
lean_dec_ref_known(v_intCastFn_x3f_611_, 1);
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 0, v_val_612_);
v___x_614_ = v___x_608_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_val_612_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
}
}
else
{
lean_object* v_type_616_; lean_object* v_u_617_; lean_object* v_ringInst_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v_inst_x27_623_; lean_object* v_inst_625_; lean_object* v___y_626_; lean_object* v___y_627_; lean_object* v___y_628_; lean_object* v___y_629_; lean_object* v___y_630_; lean_object* v___y_631_; lean_object* v___y_632_; lean_object* v___y_633_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v_instType_642_; lean_object* v___x_643_; 
lean_del_object(v___x_608_);
v_type_616_ = lean_ctor_get(v_toRing_610_, 1);
lean_inc_ref_n(v_type_616_, 3);
v_u_617_ = lean_ctor_get(v_toRing_610_, 2);
lean_inc(v_u_617_);
v_ringInst_618_ = lean_ctor_get(v_toRing_610_, 3);
lean_inc_ref(v_ringInst_618_);
lean_dec_ref(v_toRing_610_);
v___x_619_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__0));
v___x_620_ = lean_box(0);
v___x_621_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_621_, 0, v_u_617_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
lean_inc_ref_n(v___x_621_, 2);
v___x_622_ = l_Lean_mkConst(v___x_619_, v___x_621_);
v_inst_x27_623_ = l_Lean_mkAppB(v___x_622_, v_type_616_, v_ringInst_618_);
v___x_640_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__1));
v___x_641_ = l_Lean_mkConst(v___x_640_, v___x_621_);
v_instType_642_ = l_Lean_Expr_app___override(v___x_641_, v_type_616_);
v___x_643_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_instType_642_, v___y_576_, v___y_577_, v___y_578_, v___y_579_, v___y_580_);
if (lean_obj_tag(v___x_643_) == 0)
{
lean_object* v_a_644_; 
v_a_644_ = lean_ctor_get(v___x_643_, 0);
lean_inc(v_a_644_);
lean_dec_ref_known(v___x_643_, 1);
if (lean_obj_tag(v_a_644_) == 0)
{
v_inst_625_ = v_inst_x27_623_;
v___y_626_ = v___y_570_;
v___y_627_ = v___y_571_;
v___y_628_ = v___y_575_;
v___y_629_ = v___y_576_;
v___y_630_ = v___y_577_;
v___y_631_ = v___y_578_;
v___y_632_ = v___y_579_;
v___y_633_ = v___y_580_;
goto v___jp_624_;
}
else
{
lean_object* v_val_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
v_val_645_ = lean_ctor_get(v_a_644_, 0);
lean_inc_n(v_val_645_, 2);
lean_dec_ref_known(v_a_644_, 1);
v___x_646_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___closed__3));
v___x_647_ = l_Lean_Meta_Grind_Arith_CommRing_checkInst(v___x_646_, v_val_645_, v_inst_x27_623_, v___y_577_, v___y_578_, v___y_579_, v___y_580_);
if (lean_obj_tag(v___x_647_) == 0)
{
lean_dec_ref_known(v___x_647_, 1);
v_inst_625_ = v_val_645_;
v___y_626_ = v___y_570_;
v___y_627_ = v___y_571_;
v___y_628_ = v___y_575_;
v___y_629_ = v___y_576_;
v___y_630_ = v___y_577_;
v___y_631_ = v___y_578_;
v___y_632_ = v___y_579_;
v___y_633_ = v___y_580_;
goto v___jp_624_;
}
else
{
lean_object* v_a_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_655_; 
lean_dec(v_val_645_);
lean_dec_ref_known(v___x_621_, 2);
lean_dec_ref(v_type_616_);
v_a_648_ = lean_ctor_get(v___x_647_, 0);
v_isSharedCheck_655_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_655_ == 0)
{
v___x_650_ = v___x_647_;
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_a_648_);
lean_dec(v___x_647_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_653_; 
if (v_isShared_651_ == 0)
{
v___x_653_ = v___x_650_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_a_648_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
return v___x_653_;
}
}
}
}
}
else
{
lean_object* v_a_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_663_; 
lean_dec_ref(v_inst_x27_623_);
lean_dec_ref_known(v___x_621_, 2);
lean_dec_ref(v_type_616_);
v_a_656_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_663_ == 0)
{
v___x_658_ = v___x_643_;
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_a_656_);
lean_dec(v___x_643_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v___x_661_; 
if (v_isShared_659_ == 0)
{
v___x_661_ = v___x_658_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v_a_656_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
}
v___jp_624_:
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_634_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__2));
v___x_635_ = l_Lean_mkConst(v___x_634_, v___x_621_);
v___x_636_ = l_Lean_mkAppB(v___x_635_, v_type_616_, v_inst_625_);
v___x_637_ = l_Lean_Meta_Sym_canon(v___x_636_, v___y_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_);
if (lean_obj_tag(v___x_637_) == 0)
{
lean_object* v_a_638_; lean_object* v___x_639_; 
v_a_638_ = lean_ctor_get(v___x_637_, 0);
lean_inc(v_a_638_);
lean_dec_ref_known(v___x_637_, 1);
v___x_639_ = l_Lean_Meta_Sym_shareCommon(v_a_638_, v___y_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_);
v___y_583_ = v___y_626_;
v___y_584_ = v___y_627_;
v___y_585_ = v___x_639_;
goto v___jp_582_;
}
else
{
v___y_583_ = v___y_626_;
v___y_584_ = v___y_627_;
v___y_585_ = v___x_637_;
goto v___jp_582_;
}
}
}
}
}
else
{
lean_object* v_a_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_672_; 
v_a_665_ = lean_ctor_get(v___x_605_, 0);
v_isSharedCheck_672_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_672_ == 0)
{
v___x_667_ = v___x_605_;
v_isShared_668_ = v_isSharedCheck_672_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_a_665_);
lean_dec(v___x_605_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_672_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_670_; 
if (v_isShared_668_ == 0)
{
v___x_670_ = v___x_667_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v_a_665_);
v___x_670_ = v_reuseFailAlloc_671_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
return v___x_670_;
}
}
}
v___jp_582_:
{
if (lean_obj_tag(v___y_585_) == 0)
{
lean_object* v_a_586_; lean_object* v___f_587_; lean_object* v___x_588_; 
v_a_586_ = lean_ctor_get(v___y_585_, 0);
lean_inc_n(v_a_586_, 2);
lean_dec_ref_known(v___y_585_, 1);
v___f_587_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___lam__0), 2, 1);
lean_closure_set(v___f_587_, 0, v_a_586_);
v___x_588_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v___f_587_, v___y_583_, v___y_584_);
if (lean_obj_tag(v___x_588_) == 0)
{
lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_595_; 
v_isSharedCheck_595_ = !lean_is_exclusive(v___x_588_);
if (v_isSharedCheck_595_ == 0)
{
lean_object* v_unused_596_; 
v_unused_596_ = lean_ctor_get(v___x_588_, 0);
lean_dec(v_unused_596_);
v___x_590_ = v___x_588_;
v_isShared_591_ = v_isSharedCheck_595_;
goto v_resetjp_589_;
}
else
{
lean_dec(v___x_588_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_595_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v___x_593_; 
if (v_isShared_591_ == 0)
{
lean_ctor_set(v___x_590_, 0, v_a_586_);
v___x_593_ = v___x_590_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v_a_586_);
v___x_593_ = v_reuseFailAlloc_594_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
return v___x_593_;
}
}
}
else
{
lean_object* v_a_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_604_; 
lean_dec(v_a_586_);
v_a_597_ = lean_ctor_get(v___x_588_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_588_);
if (v_isSharedCheck_604_ == 0)
{
v___x_599_ = v___x_588_;
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_a_597_);
lean_dec(v___x_588_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_602_; 
if (v_isShared_600_ == 0)
{
v___x_602_ = v___x_599_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_a_597_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
}
else
{
return v___y_585_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2___boxed(lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_){
_start:
{
lean_object* v_res_685_; 
v_res_685_ = l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2(v___y_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
lean_dec(v___y_683_);
lean_dec_ref(v___y_682_);
lean_dec(v___y_681_);
lean_dec_ref(v___y_680_);
lean_dec(v___y_679_);
lean_dec_ref(v___y_678_);
lean_dec(v___y_677_);
lean_dec_ref(v___y_676_);
lean_dec(v___y_675_);
lean_dec(v___y_674_);
lean_dec_ref(v___y_673_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1(lean_object* v_inst_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_){
_start:
{
lean_object* v___x_699_; 
v___x_699_ = l_Lean_Meta_Grind_Arith_CommRing_getIntCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1_spec__2(v___y_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_, v___y_697_);
if (lean_obj_tag(v___x_699_) == 0)
{
lean_object* v_a_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_712_; 
v_a_700_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_712_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_712_ == 0)
{
v___x_702_ = v___x_699_;
v_isShared_703_ = v_isSharedCheck_712_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_a_700_);
lean_dec(v___x_699_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_712_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___x_704_; size_t v___x_705_; size_t v___x_706_; uint8_t v___x_707_; lean_object* v___x_708_; lean_object* v___x_710_; 
v___x_704_ = l_Lean_Expr_appArg_x21(v_a_700_);
lean_dec(v_a_700_);
v___x_705_ = lean_ptr_addr(v___x_704_);
lean_dec_ref(v___x_704_);
v___x_706_ = lean_ptr_addr(v_inst_686_);
v___x_707_ = lean_usize_dec_eq(v___x_705_, v___x_706_);
v___x_708_ = lean_box(v___x_707_);
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 0, v___x_708_);
v___x_710_ = v___x_702_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v___x_708_);
v___x_710_ = v_reuseFailAlloc_711_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
return v___x_710_;
}
}
}
else
{
lean_object* v_a_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_720_; 
v_a_713_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_720_ == 0)
{
v___x_715_ = v___x_699_;
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_a_713_);
lean_dec(v___x_699_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___x_718_; 
if (v_isShared_716_ == 0)
{
v___x_718_ = v___x_715_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_a_713_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1___boxed(lean_object* v_inst_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_){
_start:
{
lean_object* v_res_734_; 
v_res_734_ = l_Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1(v_inst_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_, v___y_726_, v___y_727_, v___y_728_, v___y_729_, v___y_730_, v___y_731_, v___y_732_);
lean_dec(v___y_732_);
lean_dec_ref(v___y_731_);
lean_dec(v___y_730_);
lean_dec_ref(v___y_729_);
lean_dec(v___y_728_);
lean_dec_ref(v___y_727_);
lean_dec(v___y_726_);
lean_dec_ref(v___y_725_);
lean_dec(v___y_724_);
lean_dec(v___y_723_);
lean_dec_ref(v___y_722_);
lean_dec_ref(v_inst_721_);
return v_res_734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4___lam__0(lean_object* v_a_735_, lean_object* v_s_736_){
_start:
{
lean_object* v_toRing_737_; lean_object* v_invFn_x3f_738_; lean_object* v_semiringId_x3f_739_; lean_object* v_commSemiringInst_740_; lean_object* v_commRingInst_741_; lean_object* v_noZeroDivInst_x3f_742_; lean_object* v_fieldInst_x3f_743_; lean_object* v_powIdentityInst_x3f_744_; lean_object* v_denoteEntries_745_; lean_object* v_nextId_746_; lean_object* v_steps_747_; lean_object* v_queue_748_; lean_object* v_basis_749_; lean_object* v_diseqs_750_; uint8_t v_recheck_751_; lean_object* v_invSet_752_; lean_object* v_powIdentityVarCount_753_; lean_object* v_numEq0_x3f_754_; uint8_t v_numEq0Updated_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_787_; 
v_toRing_737_ = lean_ctor_get(v_s_736_, 0);
v_invFn_x3f_738_ = lean_ctor_get(v_s_736_, 1);
v_semiringId_x3f_739_ = lean_ctor_get(v_s_736_, 2);
v_commSemiringInst_740_ = lean_ctor_get(v_s_736_, 3);
v_commRingInst_741_ = lean_ctor_get(v_s_736_, 4);
v_noZeroDivInst_x3f_742_ = lean_ctor_get(v_s_736_, 5);
v_fieldInst_x3f_743_ = lean_ctor_get(v_s_736_, 6);
v_powIdentityInst_x3f_744_ = lean_ctor_get(v_s_736_, 7);
v_denoteEntries_745_ = lean_ctor_get(v_s_736_, 8);
v_nextId_746_ = lean_ctor_get(v_s_736_, 9);
v_steps_747_ = lean_ctor_get(v_s_736_, 10);
v_queue_748_ = lean_ctor_get(v_s_736_, 11);
v_basis_749_ = lean_ctor_get(v_s_736_, 12);
v_diseqs_750_ = lean_ctor_get(v_s_736_, 13);
v_recheck_751_ = lean_ctor_get_uint8(v_s_736_, sizeof(void*)*17);
v_invSet_752_ = lean_ctor_get(v_s_736_, 14);
v_powIdentityVarCount_753_ = lean_ctor_get(v_s_736_, 15);
v_numEq0_x3f_754_ = lean_ctor_get(v_s_736_, 16);
v_numEq0Updated_755_ = lean_ctor_get_uint8(v_s_736_, sizeof(void*)*17 + 1);
v_isSharedCheck_787_ = !lean_is_exclusive(v_s_736_);
if (v_isSharedCheck_787_ == 0)
{
v___x_757_ = v_s_736_;
v_isShared_758_ = v_isSharedCheck_787_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_numEq0_x3f_754_);
lean_inc(v_powIdentityVarCount_753_);
lean_inc(v_invSet_752_);
lean_inc(v_diseqs_750_);
lean_inc(v_basis_749_);
lean_inc(v_queue_748_);
lean_inc(v_steps_747_);
lean_inc(v_nextId_746_);
lean_inc(v_denoteEntries_745_);
lean_inc(v_powIdentityInst_x3f_744_);
lean_inc(v_fieldInst_x3f_743_);
lean_inc(v_noZeroDivInst_x3f_742_);
lean_inc(v_commRingInst_741_);
lean_inc(v_commSemiringInst_740_);
lean_inc(v_semiringId_x3f_739_);
lean_inc(v_invFn_x3f_738_);
lean_inc(v_toRing_737_);
lean_dec(v_s_736_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_787_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v_id_759_; lean_object* v_type_760_; lean_object* v_u_761_; lean_object* v_ringInst_762_; lean_object* v_semiringInst_763_; lean_object* v_charInst_x3f_764_; lean_object* v_addFn_x3f_765_; lean_object* v_mulFn_x3f_766_; lean_object* v_subFn_x3f_767_; lean_object* v_negFn_x3f_768_; lean_object* v_powFn_x3f_769_; lean_object* v_intCastFn_x3f_770_; lean_object* v_one_x3f_771_; lean_object* v_vars_772_; lean_object* v_varMap_773_; lean_object* v_denote_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_785_; 
v_id_759_ = lean_ctor_get(v_toRing_737_, 0);
v_type_760_ = lean_ctor_get(v_toRing_737_, 1);
v_u_761_ = lean_ctor_get(v_toRing_737_, 2);
v_ringInst_762_ = lean_ctor_get(v_toRing_737_, 3);
v_semiringInst_763_ = lean_ctor_get(v_toRing_737_, 4);
v_charInst_x3f_764_ = lean_ctor_get(v_toRing_737_, 5);
v_addFn_x3f_765_ = lean_ctor_get(v_toRing_737_, 6);
v_mulFn_x3f_766_ = lean_ctor_get(v_toRing_737_, 7);
v_subFn_x3f_767_ = lean_ctor_get(v_toRing_737_, 8);
v_negFn_x3f_768_ = lean_ctor_get(v_toRing_737_, 9);
v_powFn_x3f_769_ = lean_ctor_get(v_toRing_737_, 10);
v_intCastFn_x3f_770_ = lean_ctor_get(v_toRing_737_, 11);
v_one_x3f_771_ = lean_ctor_get(v_toRing_737_, 13);
v_vars_772_ = lean_ctor_get(v_toRing_737_, 14);
v_varMap_773_ = lean_ctor_get(v_toRing_737_, 15);
v_denote_774_ = lean_ctor_get(v_toRing_737_, 16);
v_isSharedCheck_785_ = !lean_is_exclusive(v_toRing_737_);
if (v_isSharedCheck_785_ == 0)
{
lean_object* v_unused_786_; 
v_unused_786_ = lean_ctor_get(v_toRing_737_, 12);
lean_dec(v_unused_786_);
v___x_776_ = v_toRing_737_;
v_isShared_777_ = v_isSharedCheck_785_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_denote_774_);
lean_inc(v_varMap_773_);
lean_inc(v_vars_772_);
lean_inc(v_one_x3f_771_);
lean_inc(v_intCastFn_x3f_770_);
lean_inc(v_powFn_x3f_769_);
lean_inc(v_negFn_x3f_768_);
lean_inc(v_subFn_x3f_767_);
lean_inc(v_mulFn_x3f_766_);
lean_inc(v_addFn_x3f_765_);
lean_inc(v_charInst_x3f_764_);
lean_inc(v_semiringInst_763_);
lean_inc(v_ringInst_762_);
lean_inc(v_u_761_);
lean_inc(v_type_760_);
lean_inc(v_id_759_);
lean_dec(v_toRing_737_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_785_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_778_; lean_object* v___x_780_; 
v___x_778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_778_, 0, v_a_735_);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 12, v___x_778_);
v___x_780_ = v___x_776_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(0, 17, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_id_759_);
lean_ctor_set(v_reuseFailAlloc_784_, 1, v_type_760_);
lean_ctor_set(v_reuseFailAlloc_784_, 2, v_u_761_);
lean_ctor_set(v_reuseFailAlloc_784_, 3, v_ringInst_762_);
lean_ctor_set(v_reuseFailAlloc_784_, 4, v_semiringInst_763_);
lean_ctor_set(v_reuseFailAlloc_784_, 5, v_charInst_x3f_764_);
lean_ctor_set(v_reuseFailAlloc_784_, 6, v_addFn_x3f_765_);
lean_ctor_set(v_reuseFailAlloc_784_, 7, v_mulFn_x3f_766_);
lean_ctor_set(v_reuseFailAlloc_784_, 8, v_subFn_x3f_767_);
lean_ctor_set(v_reuseFailAlloc_784_, 9, v_negFn_x3f_768_);
lean_ctor_set(v_reuseFailAlloc_784_, 10, v_powFn_x3f_769_);
lean_ctor_set(v_reuseFailAlloc_784_, 11, v_intCastFn_x3f_770_);
lean_ctor_set(v_reuseFailAlloc_784_, 12, v___x_778_);
lean_ctor_set(v_reuseFailAlloc_784_, 13, v_one_x3f_771_);
lean_ctor_set(v_reuseFailAlloc_784_, 14, v_vars_772_);
lean_ctor_set(v_reuseFailAlloc_784_, 15, v_varMap_773_);
lean_ctor_set(v_reuseFailAlloc_784_, 16, v_denote_774_);
v___x_780_ = v_reuseFailAlloc_784_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
lean_object* v___x_782_; 
if (v_isShared_758_ == 0)
{
lean_ctor_set(v___x_757_, 0, v___x_780_);
v___x_782_ = v___x_757_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(0, 17, 2);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v___x_780_);
lean_ctor_set(v_reuseFailAlloc_783_, 1, v_invFn_x3f_738_);
lean_ctor_set(v_reuseFailAlloc_783_, 2, v_semiringId_x3f_739_);
lean_ctor_set(v_reuseFailAlloc_783_, 3, v_commSemiringInst_740_);
lean_ctor_set(v_reuseFailAlloc_783_, 4, v_commRingInst_741_);
lean_ctor_set(v_reuseFailAlloc_783_, 5, v_noZeroDivInst_x3f_742_);
lean_ctor_set(v_reuseFailAlloc_783_, 6, v_fieldInst_x3f_743_);
lean_ctor_set(v_reuseFailAlloc_783_, 7, v_powIdentityInst_x3f_744_);
lean_ctor_set(v_reuseFailAlloc_783_, 8, v_denoteEntries_745_);
lean_ctor_set(v_reuseFailAlloc_783_, 9, v_nextId_746_);
lean_ctor_set(v_reuseFailAlloc_783_, 10, v_steps_747_);
lean_ctor_set(v_reuseFailAlloc_783_, 11, v_queue_748_);
lean_ctor_set(v_reuseFailAlloc_783_, 12, v_basis_749_);
lean_ctor_set(v_reuseFailAlloc_783_, 13, v_diseqs_750_);
lean_ctor_set(v_reuseFailAlloc_783_, 14, v_invSet_752_);
lean_ctor_set(v_reuseFailAlloc_783_, 15, v_powIdentityVarCount_753_);
lean_ctor_set(v_reuseFailAlloc_783_, 16, v_numEq0_x3f_754_);
lean_ctor_set_uint8(v_reuseFailAlloc_783_, sizeof(void*)*17, v_recheck_751_);
lean_ctor_set_uint8(v_reuseFailAlloc_783_, sizeof(void*)*17 + 1, v_numEq0Updated_755_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
return v___x_782_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg(lean_object* v_u_796_, lean_object* v_type_797_, lean_object* v_semiringInst_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_){
_start:
{
lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v_inst_x27_810_; lean_object* v_inst_812_; lean_object* v___y_813_; lean_object* v___y_814_; lean_object* v___y_815_; lean_object* v___y_816_; lean_object* v___y_817_; lean_object* v___y_818_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v_instType_827_; lean_object* v___x_828_; 
v___x_806_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___closed__1));
v___x_807_ = lean_box(0);
v___x_808_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_808_, 0, v_u_796_);
lean_ctor_set(v___x_808_, 1, v___x_807_);
lean_inc_ref_n(v___x_808_, 2);
v___x_809_ = l_Lean_mkConst(v___x_806_, v___x_808_);
lean_inc_ref_n(v_type_797_, 2);
v_inst_x27_810_ = l_Lean_mkAppB(v___x_809_, v_type_797_, v_semiringInst_798_);
v___x_825_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___closed__2));
v___x_826_ = l_Lean_mkConst(v___x_825_, v___x_808_);
v_instType_827_ = l_Lean_Expr_app___override(v___x_826_, v_type_797_);
v___x_828_ = l_Lean_Meta_Sym_synthInstance_x3f___redArg(v_instType_827_, v___y_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_object* v_a_829_; 
v_a_829_ = lean_ctor_get(v___x_828_, 0);
lean_inc(v_a_829_);
lean_dec_ref_known(v___x_828_, 1);
if (lean_obj_tag(v_a_829_) == 0)
{
v_inst_812_ = v_inst_x27_810_;
v___y_813_ = v___y_799_;
v___y_814_ = v___y_800_;
v___y_815_ = v___y_801_;
v___y_816_ = v___y_802_;
v___y_817_ = v___y_803_;
v___y_818_ = v___y_804_;
goto v___jp_811_;
}
else
{
lean_object* v_val_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v_val_830_ = lean_ctor_get(v_a_829_, 0);
lean_inc_n(v_val_830_, 2);
lean_dec_ref_known(v_a_829_, 1);
v___x_831_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5));
v___x_832_ = l_Lean_Meta_Grind_Arith_CommRing_checkInst(v___x_831_, v_val_830_, v_inst_x27_810_, v___y_801_, v___y_802_, v___y_803_, v___y_804_);
if (lean_obj_tag(v___x_832_) == 0)
{
lean_dec_ref_known(v___x_832_, 1);
v_inst_812_ = v_val_830_;
v___y_813_ = v___y_799_;
v___y_814_ = v___y_800_;
v___y_815_ = v___y_801_;
v___y_816_ = v___y_802_;
v___y_817_ = v___y_803_;
v___y_818_ = v___y_804_;
goto v___jp_811_;
}
else
{
lean_object* v_a_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_840_; 
lean_dec(v_val_830_);
lean_dec_ref_known(v___x_808_, 2);
lean_dec_ref(v_type_797_);
v_a_833_ = lean_ctor_get(v___x_832_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_832_);
if (v_isSharedCheck_840_ == 0)
{
v___x_835_ = v___x_832_;
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v___x_832_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_838_; 
if (v_isShared_836_ == 0)
{
v___x_838_ = v___x_835_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_a_833_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
}
}
}
else
{
lean_object* v_a_841_; lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_848_; 
lean_dec_ref(v_inst_x27_810_);
lean_dec_ref_known(v___x_808_, 2);
lean_dec_ref(v_type_797_);
v_a_841_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_848_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_848_ == 0)
{
v___x_843_ = v___x_828_;
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
else
{
lean_inc(v_a_841_);
lean_dec(v___x_828_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v___x_846_; 
if (v_isShared_844_ == 0)
{
v___x_846_ = v___x_843_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v_a_841_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
v___jp_811_:
{
lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_819_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5));
v___x_820_ = l_Lean_mkConst(v___x_819_, v___x_808_);
v___x_821_ = l_Lean_mkAppB(v___x_820_, v_type_797_, v_inst_812_);
v___x_822_ = l_Lean_Meta_Sym_canon(v___x_821_, v___y_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_);
if (lean_obj_tag(v___x_822_) == 0)
{
lean_object* v_a_823_; lean_object* v___x_824_; 
v_a_823_ = lean_ctor_get(v___x_822_, 0);
lean_inc(v_a_823_);
lean_dec_ref_known(v___x_822_, 1);
v___x_824_ = l_Lean_Meta_Sym_shareCommon(v_a_823_, v___y_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_);
return v___x_824_;
}
else
{
return v___x_822_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg___boxed(lean_object* v_u_849_, lean_object* v_type_850_, lean_object* v_semiringInst_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg(v_u_849_, v_type_850_, v_semiringInst_851_, v___y_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_);
lean_dec(v___y_857_);
lean_dec_ref(v___y_856_);
lean_dec(v___y_855_);
lean_dec_ref(v___y_854_);
lean_dec(v___y_853_);
lean_dec_ref(v___y_852_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4(lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_){
_start:
{
lean_object* v___x_872_; 
v___x_872_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___y_860_, v___y_861_, v___y_862_, v___y_863_, v___y_864_, v___y_865_, v___y_866_, v___y_867_, v___y_868_, v___y_869_, v___y_870_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_906_; 
v_a_873_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_906_ == 0)
{
v___x_875_ = v___x_872_;
v_isShared_876_ = v_isSharedCheck_906_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v___x_872_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_906_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v_toRing_877_; lean_object* v_natCastFn_x3f_878_; 
v_toRing_877_ = lean_ctor_get(v_a_873_, 0);
lean_inc_ref(v_toRing_877_);
lean_dec(v_a_873_);
v_natCastFn_x3f_878_ = lean_ctor_get(v_toRing_877_, 12);
if (lean_obj_tag(v_natCastFn_x3f_878_) == 1)
{
lean_object* v_val_879_; lean_object* v___x_881_; 
lean_inc_ref(v_natCastFn_x3f_878_);
lean_dec_ref(v_toRing_877_);
v_val_879_ = lean_ctor_get(v_natCastFn_x3f_878_, 0);
lean_inc(v_val_879_);
lean_dec_ref_known(v_natCastFn_x3f_878_, 1);
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 0, v_val_879_);
v___x_881_ = v___x_875_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_val_879_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
else
{
lean_object* v_type_883_; lean_object* v_u_884_; lean_object* v_semiringInst_885_; lean_object* v___x_886_; 
lean_del_object(v___x_875_);
v_type_883_ = lean_ctor_get(v_toRing_877_, 1);
lean_inc_ref(v_type_883_);
v_u_884_ = lean_ctor_get(v_toRing_877_, 2);
lean_inc(v_u_884_);
v_semiringInst_885_ = lean_ctor_get(v_toRing_877_, 4);
lean_inc_ref(v_semiringInst_885_);
lean_dec_ref(v_toRing_877_);
v___x_886_ = l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg(v_u_884_, v_type_883_, v_semiringInst_885_, v___y_865_, v___y_866_, v___y_867_, v___y_868_, v___y_869_, v___y_870_);
if (lean_obj_tag(v___x_886_) == 0)
{
lean_object* v_a_887_; lean_object* v___f_888_; lean_object* v___x_889_; 
v_a_887_ = lean_ctor_get(v___x_886_, 0);
lean_inc_n(v_a_887_, 2);
lean_dec_ref_known(v___x_886_, 1);
v___f_888_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4___lam__0), 2, 1);
lean_closure_set(v___f_888_, 0, v_a_887_);
v___x_889_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v___f_888_, v___y_860_, v___y_861_);
if (lean_obj_tag(v___x_889_) == 0)
{
lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_896_; 
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_896_ == 0)
{
lean_object* v_unused_897_; 
v_unused_897_ = lean_ctor_get(v___x_889_, 0);
lean_dec(v_unused_897_);
v___x_891_ = v___x_889_;
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
else
{
lean_dec(v___x_889_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_894_; 
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 0, v_a_887_);
v___x_894_ = v___x_891_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_a_887_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
else
{
lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_905_; 
lean_dec(v_a_887_);
v_a_898_ = lean_ctor_get(v___x_889_, 0);
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_905_ == 0)
{
v___x_900_ = v___x_889_;
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_898_);
lean_dec(v___x_889_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_903_; 
if (v_isShared_901_ == 0)
{
v___x_903_ = v___x_900_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_a_898_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
}
else
{
return v___x_886_;
}
}
}
}
else
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
v_a_907_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_872_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_872_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_a_907_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4___boxed(lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_){
_start:
{
lean_object* v_res_927_; 
v_res_927_ = l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4(v___y_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
lean_dec(v___y_921_);
lean_dec_ref(v___y_920_);
lean_dec(v___y_919_);
lean_dec_ref(v___y_918_);
lean_dec(v___y_917_);
lean_dec(v___y_916_);
lean_dec_ref(v___y_915_);
return v_res_927_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2(lean_object* v_inst_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_){
_start:
{
lean_object* v___x_941_; 
v___x_941_ = l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4(v___y_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
if (lean_obj_tag(v___x_941_) == 0)
{
lean_object* v_a_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_954_; 
v_a_942_ = lean_ctor_get(v___x_941_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_954_ == 0)
{
v___x_944_ = v___x_941_;
v_isShared_945_ = v_isSharedCheck_954_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_a_942_);
lean_dec(v___x_941_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_954_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_946_; size_t v___x_947_; size_t v___x_948_; uint8_t v___x_949_; lean_object* v___x_950_; lean_object* v___x_952_; 
v___x_946_ = l_Lean_Expr_appArg_x21(v_a_942_);
lean_dec(v_a_942_);
v___x_947_ = lean_ptr_addr(v___x_946_);
lean_dec_ref(v___x_946_);
v___x_948_ = lean_ptr_addr(v_inst_928_);
v___x_949_ = lean_usize_dec_eq(v___x_947_, v___x_948_);
v___x_950_ = lean_box(v___x_949_);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 0, v___x_950_);
v___x_952_ = v___x_944_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v___x_950_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
}
else
{
lean_object* v_a_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_962_; 
v_a_955_ = lean_ctor_get(v___x_941_, 0);
v_isSharedCheck_962_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_962_ == 0)
{
v___x_957_ = v___x_941_;
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_a_955_);
lean_dec(v___x_941_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v___x_960_; 
if (v_isShared_958_ == 0)
{
v___x_960_ = v___x_957_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v_a_955_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2___boxed(lean_object* v_inst_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2(v_inst_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_, v___y_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
lean_dec(v___y_970_);
lean_dec_ref(v___y_969_);
lean_dec(v___y_968_);
lean_dec_ref(v___y_967_);
lean_dec(v___y_966_);
lean_dec(v___y_965_);
lean_dec_ref(v___y_964_);
lean_dec_ref(v_inst_963_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f(lean_object* v_e_977_, lean_object* v_a_978_, lean_object* v_a_979_, lean_object* v_a_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_, lean_object* v_a_986_, lean_object* v_a_987_, lean_object* v_a_988_){
_start:
{
lean_object* v___x_993_; 
v___x_993_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_977_, v_a_986_);
if (lean_obj_tag(v___x_993_) == 0)
{
lean_object* v_a_994_; lean_object* v___x_995_; uint8_t v___x_996_; 
v_a_994_ = lean_ctor_get(v___x_993_, 0);
lean_inc(v_a_994_);
lean_dec_ref_known(v___x_993_, 1);
v___x_995_ = l_Lean_Expr_cleanupAnnotations(v_a_994_);
v___x_996_ = l_Lean_Expr_isApp(v___x_995_);
if (v___x_996_ == 0)
{
lean_dec_ref(v___x_995_);
goto v___jp_990_;
}
else
{
lean_object* v_arg_997_; lean_object* v___x_998_; uint8_t v___x_999_; 
v_arg_997_ = lean_ctor_get(v___x_995_, 1);
lean_inc_ref(v_arg_997_);
v___x_998_ = l_Lean_Expr_appFnCleanup___redArg(v___x_995_);
v___x_999_ = l_Lean_Expr_isApp(v___x_998_);
if (v___x_999_ == 0)
{
lean_dec_ref(v___x_998_);
lean_dec_ref(v_arg_997_);
goto v___jp_990_;
}
else
{
lean_object* v_arg_1000_; lean_object* v___x_1001_; uint8_t v___x_1002_; 
v_arg_1000_ = lean_ctor_get(v___x_998_, 1);
lean_inc_ref(v_arg_1000_);
v___x_1001_ = l_Lean_Expr_appFnCleanup___redArg(v___x_998_);
v___x_1002_ = l_Lean_Expr_isApp(v___x_1001_);
if (v___x_1002_ == 0)
{
lean_dec_ref(v___x_1001_);
lean_dec_ref(v_arg_1000_);
lean_dec_ref(v_arg_997_);
goto v___jp_990_;
}
else
{
lean_object* v___x_1003_; lean_object* v___x_1004_; uint8_t v___x_1005_; 
v___x_1003_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1001_);
v___x_1004_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__8));
v___x_1005_ = l_Lean_Expr_isConstOf(v___x_1003_, v___x_1004_);
if (v___x_1005_ == 0)
{
lean_object* v___x_1006_; uint8_t v___x_1007_; 
v___x_1006_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__5));
v___x_1007_ = l_Lean_Expr_isConstOf(v___x_1003_, v___x_1006_);
if (v___x_1007_ == 0)
{
lean_object* v___x_1008_; uint8_t v___x_1009_; 
v___x_1008_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__2));
v___x_1009_ = l_Lean_Expr_isConstOf(v___x_1003_, v___x_1008_);
if (v___x_1009_ == 0)
{
lean_object* v___x_1010_; uint8_t v___x_1011_; 
v___x_1010_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__11));
v___x_1011_ = l_Lean_Expr_isConstOf(v___x_1003_, v___x_1010_);
lean_dec_ref(v___x_1003_);
if (v___x_1011_ == 0)
{
lean_dec_ref(v_arg_1000_);
lean_dec_ref(v_arg_997_);
goto v___jp_990_;
}
else
{
lean_object* v___x_1012_; 
v___x_1012_ = l_Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0(v_arg_1000_, v_a_978_, v_a_979_, v_a_980_, v_a_981_, v_a_982_, v_a_983_, v_a_984_, v_a_985_, v_a_986_, v_a_987_, v_a_988_);
lean_dec_ref(v_arg_1000_);
if (lean_obj_tag(v___x_1012_) == 0)
{
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1041_; 
v_a_1013_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1041_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1041_ == 0)
{
v___x_1015_ = v___x_1012_;
v_isShared_1016_ = v_isSharedCheck_1041_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___x_1012_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1041_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
uint8_t v___x_1017_; 
v___x_1017_ = lean_unbox(v_a_1013_);
lean_dec(v_a_1013_);
if (v___x_1017_ == 0)
{
lean_object* v___x_1018_; lean_object* v___x_1020_; 
lean_dec_ref(v_arg_997_);
v___x_1018_ = lean_box(0);
if (v_isShared_1016_ == 0)
{
lean_ctor_set(v___x_1015_, 0, v___x_1018_);
v___x_1020_ = v___x_1015_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v___x_1018_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
else
{
lean_object* v___x_1022_; 
lean_del_object(v___x_1015_);
v___x_1022_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f(v_arg_997_, v_a_978_, v_a_979_, v_a_980_, v_a_981_, v_a_982_, v_a_983_, v_a_984_, v_a_985_, v_a_986_, v_a_987_, v_a_988_);
if (lean_obj_tag(v___x_1022_) == 0)
{
lean_object* v_a_1023_; 
v_a_1023_ = lean_ctor_get(v___x_1022_, 0);
lean_inc(v_a_1023_);
if (lean_obj_tag(v_a_1023_) == 0)
{
return v___x_1022_;
}
else
{
lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1039_; 
v_isSharedCheck_1039_ = !lean_is_exclusive(v___x_1022_);
if (v_isSharedCheck_1039_ == 0)
{
lean_object* v_unused_1040_; 
v_unused_1040_ = lean_ctor_get(v___x_1022_, 0);
lean_dec(v_unused_1040_);
v___x_1025_ = v___x_1022_;
v_isShared_1026_ = v_isSharedCheck_1039_;
goto v_resetjp_1024_;
}
else
{
lean_dec(v___x_1022_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1039_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v_val_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1038_; 
v_val_1027_ = lean_ctor_get(v_a_1023_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v_a_1023_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1029_ = v_a_1023_;
v_isShared_1030_ = v_isSharedCheck_1038_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_val_1027_);
lean_dec(v_a_1023_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1038_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1031_; lean_object* v___x_1033_; 
v___x_1031_ = lean_int_neg(v_val_1027_);
lean_dec(v_val_1027_);
if (v_isShared_1030_ == 0)
{
lean_ctor_set(v___x_1029_, 0, v___x_1031_);
v___x_1033_ = v___x_1029_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_1031_);
v___x_1033_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
lean_object* v___x_1035_; 
if (v_isShared_1026_ == 0)
{
lean_ctor_set(v___x_1025_, 0, v___x_1033_);
v___x_1035_ = v___x_1025_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_1033_);
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
}
else
{
return v___x_1022_;
}
}
}
}
else
{
lean_object* v_a_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1049_; 
lean_dec_ref(v_arg_997_);
v_a_1042_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1049_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1049_ == 0)
{
v___x_1044_ = v___x_1012_;
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_a_1042_);
lean_dec(v___x_1012_);
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
else
{
lean_object* v___x_1050_; 
lean_dec_ref(v___x_1003_);
v___x_1050_ = l_Lean_Meta_Grind_Arith_CommRing_isIntCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__1(v_arg_1000_, v_a_978_, v_a_979_, v_a_980_, v_a_981_, v_a_982_, v_a_983_, v_a_984_, v_a_985_, v_a_986_, v_a_987_, v_a_988_);
lean_dec_ref(v_arg_1000_);
if (lean_obj_tag(v___x_1050_) == 0)
{
lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1061_; 
v_a_1051_ = lean_ctor_get(v___x_1050_, 0);
v_isSharedCheck_1061_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1053_ = v___x_1050_;
v_isShared_1054_ = v_isSharedCheck_1061_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_dec(v___x_1050_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1061_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
uint8_t v___x_1055_; 
v___x_1055_ = lean_unbox(v_a_1051_);
lean_dec(v_a_1051_);
if (v___x_1055_ == 0)
{
lean_object* v___x_1056_; lean_object* v___x_1058_; 
lean_dec_ref(v_arg_997_);
v___x_1056_ = lean_box(0);
if (v_isShared_1054_ == 0)
{
lean_ctor_set(v___x_1053_, 0, v___x_1056_);
v___x_1058_ = v___x_1053_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v___x_1056_);
v___x_1058_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
return v___x_1058_;
}
}
else
{
lean_object* v___x_1060_; 
lean_del_object(v___x_1053_);
v___x_1060_ = l_Lean_Meta_getIntValue_x3f(v_arg_997_, v_a_985_, v_a_986_, v_a_987_, v_a_988_);
return v___x_1060_;
}
}
}
else
{
lean_object* v_a_1062_; lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1069_; 
lean_dec_ref(v_arg_997_);
v_a_1062_ = lean_ctor_get(v___x_1050_, 0);
v_isSharedCheck_1069_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1069_ == 0)
{
v___x_1064_ = v___x_1050_;
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
else
{
lean_inc(v_a_1062_);
lean_dec(v___x_1050_);
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
}
else
{
lean_object* v___x_1070_; 
lean_dec_ref(v___x_1003_);
v___x_1070_ = l_Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2(v_arg_1000_, v_a_978_, v_a_979_, v_a_980_, v_a_981_, v_a_982_, v_a_983_, v_a_984_, v_a_985_, v_a_986_, v_a_987_, v_a_988_);
lean_dec_ref(v_arg_1000_);
if (lean_obj_tag(v___x_1070_) == 0)
{
lean_object* v_a_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1110_; 
v_a_1071_ = lean_ctor_get(v___x_1070_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1070_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1073_ = v___x_1070_;
v_isShared_1074_ = v_isSharedCheck_1110_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_a_1071_);
lean_dec(v___x_1070_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1110_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
uint8_t v___x_1075_; 
v___x_1075_ = lean_unbox(v_a_1071_);
lean_dec(v_a_1071_);
if (v___x_1075_ == 0)
{
lean_object* v___x_1076_; lean_object* v___x_1078_; 
lean_dec_ref(v_arg_997_);
v___x_1076_ = lean_box(0);
if (v_isShared_1074_ == 0)
{
lean_ctor_set(v___x_1073_, 0, v___x_1076_);
v___x_1078_ = v___x_1073_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v___x_1076_);
v___x_1078_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
return v___x_1078_;
}
}
else
{
lean_object* v___x_1080_; 
lean_del_object(v___x_1073_);
v___x_1080_ = l_Lean_Meta_getNatValue_x3f(v_arg_997_, v_a_985_, v_a_986_, v_a_987_, v_a_988_);
lean_dec_ref(v_arg_997_);
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v_a_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1101_; 
v_a_1081_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1101_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_1083_ = v___x_1080_;
v_isShared_1084_ = v_isSharedCheck_1101_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_a_1081_);
lean_dec(v___x_1080_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1101_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
if (lean_obj_tag(v_a_1081_) == 1)
{
lean_object* v_val_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1096_; 
v_val_1085_ = lean_ctor_get(v_a_1081_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v_a_1081_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1087_ = v_a_1081_;
v_isShared_1088_ = v_isSharedCheck_1096_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_val_1085_);
lean_dec(v_a_1081_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1096_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v___x_1089_; lean_object* v___x_1091_; 
v___x_1089_ = lean_nat_to_int(v_val_1085_);
if (v_isShared_1088_ == 0)
{
lean_ctor_set(v___x_1087_, 0, v___x_1089_);
v___x_1091_ = v___x_1087_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v___x_1089_);
v___x_1091_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
lean_object* v___x_1093_; 
if (v_isShared_1084_ == 0)
{
lean_ctor_set(v___x_1083_, 0, v___x_1091_);
v___x_1093_ = v___x_1083_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v___x_1091_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
}
}
else
{
lean_object* v___x_1097_; lean_object* v___x_1099_; 
lean_dec(v_a_1081_);
v___x_1097_ = lean_box(0);
if (v_isShared_1084_ == 0)
{
lean_ctor_set(v___x_1083_, 0, v___x_1097_);
v___x_1099_ = v___x_1083_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v___x_1097_);
v___x_1099_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
return v___x_1099_;
}
}
}
}
else
{
lean_object* v_a_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1109_; 
v_a_1102_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1104_ = v___x_1080_;
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_a_1102_);
lean_dec(v___x_1080_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1107_; 
if (v_isShared_1105_ == 0)
{
v___x_1107_ = v___x_1104_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_a_1102_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
return v___x_1107_;
}
}
}
}
}
}
else
{
lean_object* v_a_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1118_; 
lean_dec_ref(v_arg_997_);
v_a_1111_ = lean_ctor_get(v___x_1070_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1070_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1113_ = v___x_1070_;
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_a_1111_);
lean_dec(v___x_1070_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1116_; 
if (v_isShared_1114_ == 0)
{
v___x_1116_ = v___x_1113_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_a_1111_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
}
}
else
{
lean_object* v___x_1119_; 
lean_dec_ref(v___x_1003_);
lean_dec_ref(v_arg_997_);
v___x_1119_ = l_Lean_Meta_getNatValue_x3f(v_arg_1000_, v_a_985_, v_a_986_, v_a_987_, v_a_988_);
lean_dec_ref(v_arg_1000_);
if (lean_obj_tag(v___x_1119_) == 0)
{
lean_object* v_a_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1140_; 
v_a_1120_ = lean_ctor_get(v___x_1119_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1122_ = v___x_1119_;
v_isShared_1123_ = v_isSharedCheck_1140_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_a_1120_);
lean_dec(v___x_1119_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1140_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
if (lean_obj_tag(v_a_1120_) == 1)
{
lean_object* v_val_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1135_; 
v_val_1124_ = lean_ctor_get(v_a_1120_, 0);
v_isSharedCheck_1135_ = !lean_is_exclusive(v_a_1120_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1126_ = v_a_1120_;
v_isShared_1127_ = v_isSharedCheck_1135_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_val_1124_);
lean_dec(v_a_1120_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1135_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1128_; lean_object* v___x_1130_; 
v___x_1128_ = lean_nat_to_int(v_val_1124_);
if (v_isShared_1127_ == 0)
{
lean_ctor_set(v___x_1126_, 0, v___x_1128_);
v___x_1130_ = v___x_1126_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v___x_1128_);
v___x_1130_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
lean_object* v___x_1132_; 
if (v_isShared_1123_ == 0)
{
lean_ctor_set(v___x_1122_, 0, v___x_1130_);
v___x_1132_ = v___x_1122_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v___x_1130_);
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
lean_object* v___x_1136_; lean_object* v___x_1138_; 
lean_dec(v_a_1120_);
v___x_1136_ = lean_box(0);
if (v_isShared_1123_ == 0)
{
lean_ctor_set(v___x_1122_, 0, v___x_1136_);
v___x_1138_ = v___x_1122_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1136_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
}
else
{
lean_object* v_a_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1148_; 
v_a_1141_ = lean_ctor_get(v___x_1119_, 0);
v_isSharedCheck_1148_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1148_ == 0)
{
v___x_1143_ = v___x_1119_;
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_a_1141_);
lean_dec(v___x_1119_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v___x_1146_; 
if (v_isShared_1144_ == 0)
{
v___x_1146_ = v___x_1143_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v_a_1141_);
v___x_1146_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
return v___x_1146_;
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
lean_object* v_a_1149_; lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1156_; 
v_a_1149_ = lean_ctor_get(v___x_993_, 0);
v_isSharedCheck_1156_ = !lean_is_exclusive(v___x_993_);
if (v_isSharedCheck_1156_ == 0)
{
v___x_1151_ = v___x_993_;
v_isShared_1152_ = v_isSharedCheck_1156_;
goto v_resetjp_1150_;
}
else
{
lean_inc(v_a_1149_);
lean_dec(v___x_993_);
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
v_reuseFailAlloc_1155_ = lean_alloc_ctor(1, 1, 0);
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
v___jp_990_:
{
lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_991_ = lean_box(0);
v___x_992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_992_, 0, v___x_991_);
return v___x_992_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f___boxed(lean_object* v_e_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_, lean_object* v_a_1169_){
_start:
{
lean_object* v_res_1170_; 
v_res_1170_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f(v_e_1157_, v_a_1158_, v_a_1159_, v_a_1160_, v_a_1161_, v_a_1162_, v_a_1163_, v_a_1164_, v_a_1165_, v_a_1166_, v_a_1167_, v_a_1168_);
lean_dec(v_a_1168_);
lean_dec_ref(v_a_1167_);
lean_dec(v_a_1166_);
lean_dec_ref(v_a_1165_);
lean_dec(v_a_1164_);
lean_dec_ref(v_a_1163_);
lean_dec(v_a_1162_);
lean_dec_ref(v_a_1161_);
lean_dec(v_a_1160_);
lean_dec(v_a_1159_);
lean_dec_ref(v_a_1158_);
return v_res_1170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6(lean_object* v_u_1171_, lean_object* v_type_1172_, lean_object* v_semiringInst_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_){
_start:
{
lean_object* v___x_1186_; 
v___x_1186_ = l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___redArg(v_u_1171_, v_type_1172_, v_semiringInst_1173_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6___boxed(lean_object* v_u_1187_, lean_object* v_type_1188_, lean_object* v_semiringInst_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_){
_start:
{
lean_object* v_res_1202_; 
v_res_1202_ = l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_getNatCastFn___at___00Lean_Meta_Grind_Arith_CommRing_isNatCastInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__2_spec__4_spec__6(v_u_1187_, v_type_1188_, v_semiringInst_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_);
lean_dec(v___y_1200_);
lean_dec_ref(v___y_1199_);
lean_dec(v___y_1198_);
lean_dec_ref(v___y_1197_);
lean_dec(v___y_1196_);
lean_dec_ref(v___y_1195_);
lean_dec(v___y_1194_);
lean_dec_ref(v___y_1193_);
lean_dec(v___y_1192_);
lean_dec(v___y_1191_);
lean_dec_ref(v___y_1190_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8(lean_object* v_00_u03b1_1203_, lean_object* v_msg_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_){
_start:
{
lean_object* v___x_1217_; 
v___x_1217_ = l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8___redArg(v_msg_1204_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8___boxed(lean_object* v_00_u03b1_1218_, lean_object* v_msg_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_){
_start:
{
lean_object* v_res_1232_; 
v_res_1232_ = l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8(v_00_u03b1_1218_, v_msg_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_);
lean_dec(v___y_1230_);
lean_dec_ref(v___y_1229_);
lean_dec(v___y_1228_);
lean_dec_ref(v___y_1227_);
lean_dec(v___y_1226_);
lean_dec_ref(v___y_1225_);
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec(v___y_1221_);
lean_dec_ref(v___y_1220_);
return v_res_1232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___lam__0(lean_object* v_a_1233_, lean_object* v_s_1234_){
_start:
{
lean_object* v_toRing_1235_; lean_object* v_semiringId_x3f_1236_; lean_object* v_commSemiringInst_1237_; lean_object* v_commRingInst_1238_; lean_object* v_noZeroDivInst_x3f_1239_; lean_object* v_fieldInst_x3f_1240_; lean_object* v_powIdentityInst_x3f_1241_; lean_object* v_denoteEntries_1242_; lean_object* v_nextId_1243_; lean_object* v_steps_1244_; lean_object* v_queue_1245_; lean_object* v_basis_1246_; lean_object* v_diseqs_1247_; uint8_t v_recheck_1248_; lean_object* v_invSet_1249_; lean_object* v_powIdentityVarCount_1250_; lean_object* v_numEq0_x3f_1251_; uint8_t v_numEq0Updated_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1260_; 
v_toRing_1235_ = lean_ctor_get(v_s_1234_, 0);
v_semiringId_x3f_1236_ = lean_ctor_get(v_s_1234_, 2);
v_commSemiringInst_1237_ = lean_ctor_get(v_s_1234_, 3);
v_commRingInst_1238_ = lean_ctor_get(v_s_1234_, 4);
v_noZeroDivInst_x3f_1239_ = lean_ctor_get(v_s_1234_, 5);
v_fieldInst_x3f_1240_ = lean_ctor_get(v_s_1234_, 6);
v_powIdentityInst_x3f_1241_ = lean_ctor_get(v_s_1234_, 7);
v_denoteEntries_1242_ = lean_ctor_get(v_s_1234_, 8);
v_nextId_1243_ = lean_ctor_get(v_s_1234_, 9);
v_steps_1244_ = lean_ctor_get(v_s_1234_, 10);
v_queue_1245_ = lean_ctor_get(v_s_1234_, 11);
v_basis_1246_ = lean_ctor_get(v_s_1234_, 12);
v_diseqs_1247_ = lean_ctor_get(v_s_1234_, 13);
v_recheck_1248_ = lean_ctor_get_uint8(v_s_1234_, sizeof(void*)*17);
v_invSet_1249_ = lean_ctor_get(v_s_1234_, 14);
v_powIdentityVarCount_1250_ = lean_ctor_get(v_s_1234_, 15);
v_numEq0_x3f_1251_ = lean_ctor_get(v_s_1234_, 16);
v_numEq0Updated_1252_ = lean_ctor_get_uint8(v_s_1234_, sizeof(void*)*17 + 1);
v_isSharedCheck_1260_ = !lean_is_exclusive(v_s_1234_);
if (v_isSharedCheck_1260_ == 0)
{
lean_object* v_unused_1261_; 
v_unused_1261_ = lean_ctor_get(v_s_1234_, 1);
lean_dec(v_unused_1261_);
v___x_1254_ = v_s_1234_;
v_isShared_1255_ = v_isSharedCheck_1260_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_numEq0_x3f_1251_);
lean_inc(v_powIdentityVarCount_1250_);
lean_inc(v_invSet_1249_);
lean_inc(v_diseqs_1247_);
lean_inc(v_basis_1246_);
lean_inc(v_queue_1245_);
lean_inc(v_steps_1244_);
lean_inc(v_nextId_1243_);
lean_inc(v_denoteEntries_1242_);
lean_inc(v_powIdentityInst_x3f_1241_);
lean_inc(v_fieldInst_x3f_1240_);
lean_inc(v_noZeroDivInst_x3f_1239_);
lean_inc(v_commRingInst_1238_);
lean_inc(v_commSemiringInst_1237_);
lean_inc(v_semiringId_x3f_1236_);
lean_inc(v_toRing_1235_);
lean_dec(v_s_1234_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1260_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1256_; lean_object* v___x_1258_; 
v___x_1256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1256_, 0, v_a_1233_);
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 1, v___x_1256_);
v___x_1258_ = v___x_1254_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(0, 17, 2);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_toRing_1235_);
lean_ctor_set(v_reuseFailAlloc_1259_, 1, v___x_1256_);
lean_ctor_set(v_reuseFailAlloc_1259_, 2, v_semiringId_x3f_1236_);
lean_ctor_set(v_reuseFailAlloc_1259_, 3, v_commSemiringInst_1237_);
lean_ctor_set(v_reuseFailAlloc_1259_, 4, v_commRingInst_1238_);
lean_ctor_set(v_reuseFailAlloc_1259_, 5, v_noZeroDivInst_x3f_1239_);
lean_ctor_set(v_reuseFailAlloc_1259_, 6, v_fieldInst_x3f_1240_);
lean_ctor_set(v_reuseFailAlloc_1259_, 7, v_powIdentityInst_x3f_1241_);
lean_ctor_set(v_reuseFailAlloc_1259_, 8, v_denoteEntries_1242_);
lean_ctor_set(v_reuseFailAlloc_1259_, 9, v_nextId_1243_);
lean_ctor_set(v_reuseFailAlloc_1259_, 10, v_steps_1244_);
lean_ctor_set(v_reuseFailAlloc_1259_, 11, v_queue_1245_);
lean_ctor_set(v_reuseFailAlloc_1259_, 12, v_basis_1246_);
lean_ctor_set(v_reuseFailAlloc_1259_, 13, v_diseqs_1247_);
lean_ctor_set(v_reuseFailAlloc_1259_, 14, v_invSet_1249_);
lean_ctor_set(v_reuseFailAlloc_1259_, 15, v_powIdentityVarCount_1250_);
lean_ctor_set(v_reuseFailAlloc_1259_, 16, v_numEq0_x3f_1251_);
lean_ctor_set_uint8(v_reuseFailAlloc_1259_, sizeof(void*)*17, v_recheck_1248_);
lean_ctor_set_uint8(v_reuseFailAlloc_1259_, sizeof(void*)*17 + 1, v_numEq0Updated_1252_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__8(void){
_start:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; 
v___x_1277_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__7));
v___x_1278_ = l_Lean_stringToMessageData(v___x_1277_);
return v___x_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0(lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_){
_start:
{
lean_object* v___x_1291_; 
v___x_1291_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_);
if (lean_obj_tag(v___x_1291_) == 0)
{
lean_object* v_a_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1339_; 
v_a_1292_ = lean_ctor_get(v___x_1291_, 0);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___x_1291_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1294_ = v___x_1291_;
v_isShared_1295_ = v_isSharedCheck_1339_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_a_1292_);
lean_dec(v___x_1291_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1339_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v_fieldInst_x3f_1296_; 
v_fieldInst_x3f_1296_ = lean_ctor_get(v_a_1292_, 6);
if (lean_obj_tag(v_fieldInst_x3f_1296_) == 1)
{
lean_object* v_invFn_x3f_1297_; 
lean_inc_ref(v_fieldInst_x3f_1296_);
v_invFn_x3f_1297_ = lean_ctor_get(v_a_1292_, 1);
if (lean_obj_tag(v_invFn_x3f_1297_) == 1)
{
lean_object* v_val_1298_; lean_object* v___x_1300_; 
lean_inc_ref(v_invFn_x3f_1297_);
lean_dec_ref_known(v_fieldInst_x3f_1296_, 1);
lean_dec(v_a_1292_);
v_val_1298_ = lean_ctor_get(v_invFn_x3f_1297_, 0);
lean_inc(v_val_1298_);
lean_dec_ref_known(v_invFn_x3f_1297_, 1);
if (v_isShared_1295_ == 0)
{
lean_ctor_set(v___x_1294_, 0, v_val_1298_);
v___x_1300_ = v___x_1294_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_val_1298_);
v___x_1300_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
return v___x_1300_;
}
}
else
{
lean_object* v_toRing_1302_; lean_object* v_val_1303_; lean_object* v_type_1304_; lean_object* v_u_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v_expectedInst_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
lean_del_object(v___x_1294_);
v_toRing_1302_ = lean_ctor_get(v_a_1292_, 0);
lean_inc_ref(v_toRing_1302_);
lean_dec(v_a_1292_);
v_val_1303_ = lean_ctor_get(v_fieldInst_x3f_1296_, 0);
lean_inc(v_val_1303_);
lean_dec_ref_known(v_fieldInst_x3f_1296_, 1);
v_type_1304_ = lean_ctor_get(v_toRing_1302_, 1);
lean_inc_ref_n(v_type_1304_, 2);
v_u_1305_ = lean_ctor_get(v_toRing_1302_, 2);
lean_inc_n(v_u_1305_, 2);
lean_dec_ref(v_toRing_1302_);
v___x_1306_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__2));
v___x_1307_ = lean_box(0);
v___x_1308_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1308_, 0, v_u_1305_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
v___x_1309_ = l_Lean_mkConst(v___x_1306_, v___x_1308_);
v_expectedInst_1310_ = l_Lean_mkAppB(v___x_1309_, v_type_1304_, v_val_1303_);
v___x_1311_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__4));
v___x_1312_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__6));
v___x_1313_ = l_Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1(v_type_1304_, v_u_1305_, v___x_1311_, v___x_1312_, v_expectedInst_1310_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_);
if (lean_obj_tag(v___x_1313_) == 0)
{
lean_object* v_a_1314_; lean_object* v___f_1315_; lean_object* v___x_1316_; 
v_a_1314_ = lean_ctor_get(v___x_1313_, 0);
lean_inc_n(v_a_1314_, 2);
lean_dec_ref_known(v___x_1313_, 1);
v___f_1315_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___lam__0), 2, 1);
lean_closure_set(v___f_1315_, 0, v_a_1314_);
v___x_1316_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v___f_1315_, v___y_1279_, v___y_1280_);
if (lean_obj_tag(v___x_1316_) == 0)
{
lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1323_; 
v_isSharedCheck_1323_ = !lean_is_exclusive(v___x_1316_);
if (v_isSharedCheck_1323_ == 0)
{
lean_object* v_unused_1324_; 
v_unused_1324_ = lean_ctor_get(v___x_1316_, 0);
lean_dec(v_unused_1324_);
v___x_1318_ = v___x_1316_;
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
else
{
lean_dec(v___x_1316_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v___x_1321_; 
if (v_isShared_1319_ == 0)
{
lean_ctor_set(v___x_1318_, 0, v_a_1314_);
v___x_1321_ = v___x_1318_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v_a_1314_);
v___x_1321_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
return v___x_1321_;
}
}
}
else
{
lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1332_; 
lean_dec(v_a_1314_);
v_a_1325_ = lean_ctor_get(v___x_1316_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1316_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1327_ = v___x_1316_;
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v___x_1316_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1330_; 
if (v_isShared_1328_ == 0)
{
v___x_1330_ = v___x_1327_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_a_1325_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
}
else
{
return v___x_1313_;
}
}
}
else
{
lean_object* v_toRing_1333_; lean_object* v_type_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; 
lean_del_object(v___x_1294_);
v_toRing_1333_ = lean_ctor_get(v_a_1292_, 0);
lean_inc_ref(v_toRing_1333_);
lean_dec(v_a_1292_);
v_type_1334_ = lean_ctor_get(v_toRing_1333_, 1);
lean_inc_ref(v_type_1334_);
lean_dec_ref(v_toRing_1333_);
v___x_1335_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__8, &l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__8_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__8);
v___x_1336_ = l_Lean_indentExpr(v_type_1334_);
v___x_1337_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1337_, 0, v___x_1335_);
lean_ctor_set(v___x_1337_, 1, v___x_1336_);
v___x_1338_ = l_Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8___redArg(v___x_1337_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_);
return v___x_1338_;
}
}
}
else
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1347_; 
v_a_1340_ = lean_ctor_get(v___x_1291_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1291_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1342_ = v___x_1291_;
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1291_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1345_; 
if (v_isShared_1343_ == 0)
{
v___x_1345_ = v___x_1342_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_a_1340_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___boxed(lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_){
_start:
{
lean_object* v_res_1360_; 
v_res_1360_ = l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0(v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_);
lean_dec(v___y_1358_);
lean_dec_ref(v___y_1357_);
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec(v___y_1352_);
lean_dec_ref(v___y_1351_);
lean_dec(v___y_1350_);
lean_dec(v___y_1349_);
lean_dec_ref(v___y_1348_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst(lean_object* v_inst_1361_, lean_object* v_a_1362_, lean_object* v_a_1363_, lean_object* v_a_1364_, lean_object* v_a_1365_, lean_object* v_a_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_, lean_object* v_a_1371_, lean_object* v_a_1372_){
_start:
{
lean_object* v___x_1374_; 
v___x_1374_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_, v_a_1372_);
if (lean_obj_tag(v___x_1374_) == 0)
{
lean_object* v_a_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1407_; 
v_a_1375_ = lean_ctor_get(v___x_1374_, 0);
v_isSharedCheck_1407_ = !lean_is_exclusive(v___x_1374_);
if (v_isSharedCheck_1407_ == 0)
{
v___x_1377_ = v___x_1374_;
v_isShared_1378_ = v_isSharedCheck_1407_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_a_1375_);
lean_dec(v___x_1374_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1407_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v_fieldInst_x3f_1379_; 
v_fieldInst_x3f_1379_ = lean_ctor_get(v_a_1375_, 6);
lean_inc(v_fieldInst_x3f_1379_);
lean_dec(v_a_1375_);
if (lean_obj_tag(v_fieldInst_x3f_1379_) == 0)
{
uint8_t v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1383_; 
v___x_1380_ = 0;
v___x_1381_ = lean_box(v___x_1380_);
if (v_isShared_1378_ == 0)
{
lean_ctor_set(v___x_1377_, 0, v___x_1381_);
v___x_1383_ = v___x_1377_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v___x_1381_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
else
{
lean_object* v___x_1385_; 
lean_dec_ref_known(v_fieldInst_x3f_1379_, 1);
lean_del_object(v___x_1377_);
v___x_1385_ = l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0(v_a_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_, v_a_1372_);
if (lean_obj_tag(v___x_1385_) == 0)
{
lean_object* v_a_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1398_; 
v_a_1386_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1388_ = v___x_1385_;
v_isShared_1389_ = v_isSharedCheck_1398_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_a_1386_);
lean_dec(v___x_1385_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1398_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1390_; size_t v___x_1391_; size_t v___x_1392_; uint8_t v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1396_; 
v___x_1390_ = l_Lean_Expr_appArg_x21(v_a_1386_);
lean_dec(v_a_1386_);
v___x_1391_ = lean_ptr_addr(v___x_1390_);
lean_dec_ref(v___x_1390_);
v___x_1392_ = lean_ptr_addr(v_inst_1361_);
v___x_1393_ = lean_usize_dec_eq(v___x_1391_, v___x_1392_);
v___x_1394_ = lean_box(v___x_1393_);
if (v_isShared_1389_ == 0)
{
lean_ctor_set(v___x_1388_, 0, v___x_1394_);
v___x_1396_ = v___x_1388_;
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
}
else
{
lean_object* v_a_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1406_; 
v_a_1399_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1406_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1401_ = v___x_1385_;
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_a_1399_);
lean_dec(v___x_1385_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v___x_1404_; 
if (v_isShared_1402_ == 0)
{
v___x_1404_ = v___x_1401_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v_a_1399_);
v___x_1404_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
return v___x_1404_;
}
}
}
}
}
}
else
{
lean_object* v_a_1408_; lean_object* v___x_1410_; uint8_t v_isShared_1411_; uint8_t v_isSharedCheck_1415_; 
v_a_1408_ = lean_ctor_get(v___x_1374_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v___x_1374_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1410_ = v___x_1374_;
v_isShared_1411_ = v_isSharedCheck_1415_;
goto v_resetjp_1409_;
}
else
{
lean_inc(v_a_1408_);
lean_dec(v___x_1374_);
v___x_1410_ = lean_box(0);
v_isShared_1411_ = v_isSharedCheck_1415_;
goto v_resetjp_1409_;
}
v_resetjp_1409_:
{
lean_object* v___x_1413_; 
if (v_isShared_1411_ == 0)
{
v___x_1413_ = v___x_1410_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v_a_1408_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
return v___x_1413_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst___boxed(lean_object* v_inst_1416_, lean_object* v_a_1417_, lean_object* v_a_1418_, lean_object* v_a_1419_, lean_object* v_a_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_, lean_object* v_a_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_, lean_object* v_a_1428_){
_start:
{
lean_object* v_res_1429_; 
v_res_1429_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst(v_inst_1416_, v_a_1417_, v_a_1418_, v_a_1419_, v_a_1420_, v_a_1421_, v_a_1422_, v_a_1423_, v_a_1424_, v_a_1425_, v_a_1426_, v_a_1427_);
lean_dec(v_a_1427_);
lean_dec_ref(v_a_1426_);
lean_dec(v_a_1425_);
lean_dec_ref(v_a_1424_);
lean_dec(v_a_1423_);
lean_dec_ref(v_a_1422_);
lean_dec(v_a_1421_);
lean_dec_ref(v_a_1420_);
lean_dec(v_a_1419_);
lean_dec(v_a_1418_);
lean_dec_ref(v_a_1417_);
lean_dec_ref(v_inst_1416_);
return v_res_1429_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__2(lean_object* v_a_1430_){
_start:
{
lean_object* v___x_1431_; 
v___x_1431_ = lean_nat_to_int(v_a_1430_);
return v___x_1431_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2_spec__6___redArg(lean_object* v_x_1432_, lean_object* v_x_1433_, lean_object* v_x_1434_, lean_object* v_x_1435_){
_start:
{
lean_object* v_ks_1436_; lean_object* v_vs_1437_; lean_object* v___x_1439_; uint8_t v_isShared_1440_; uint8_t v_isSharedCheck_1461_; 
v_ks_1436_ = lean_ctor_get(v_x_1432_, 0);
v_vs_1437_ = lean_ctor_get(v_x_1432_, 1);
v_isSharedCheck_1461_ = !lean_is_exclusive(v_x_1432_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1439_ = v_x_1432_;
v_isShared_1440_ = v_isSharedCheck_1461_;
goto v_resetjp_1438_;
}
else
{
lean_inc(v_vs_1437_);
lean_inc(v_ks_1436_);
lean_dec(v_x_1432_);
v___x_1439_ = lean_box(0);
v_isShared_1440_ = v_isSharedCheck_1461_;
goto v_resetjp_1438_;
}
v_resetjp_1438_:
{
lean_object* v___x_1441_; uint8_t v___x_1442_; 
v___x_1441_ = lean_array_get_size(v_ks_1436_);
v___x_1442_ = lean_nat_dec_lt(v_x_1433_, v___x_1441_);
if (v___x_1442_ == 0)
{
lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1446_; 
lean_dec(v_x_1433_);
v___x_1443_ = lean_array_push(v_ks_1436_, v_x_1434_);
v___x_1444_ = lean_array_push(v_vs_1437_, v_x_1435_);
if (v_isShared_1440_ == 0)
{
lean_ctor_set(v___x_1439_, 1, v___x_1444_);
lean_ctor_set(v___x_1439_, 0, v___x_1443_);
v___x_1446_ = v___x_1439_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v___x_1443_);
lean_ctor_set(v_reuseFailAlloc_1447_, 1, v___x_1444_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
return v___x_1446_;
}
}
else
{
lean_object* v_k_x27_1448_; uint8_t v___x_1449_; 
v_k_x27_1448_ = lean_array_fget_borrowed(v_ks_1436_, v_x_1433_);
v___x_1449_ = lean_expr_eqv(v_x_1434_, v_k_x27_1448_);
if (v___x_1449_ == 0)
{
lean_object* v___x_1451_; 
if (v_isShared_1440_ == 0)
{
v___x_1451_ = v___x_1439_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v_ks_1436_);
lean_ctor_set(v_reuseFailAlloc_1455_, 1, v_vs_1437_);
v___x_1451_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
lean_object* v___x_1452_; lean_object* v___x_1453_; 
v___x_1452_ = lean_unsigned_to_nat(1u);
v___x_1453_ = lean_nat_add(v_x_1433_, v___x_1452_);
lean_dec(v_x_1433_);
v_x_1432_ = v___x_1451_;
v_x_1433_ = v___x_1453_;
goto _start;
}
}
else
{
lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1459_; 
v___x_1456_ = lean_array_fset(v_ks_1436_, v_x_1433_, v_x_1434_);
v___x_1457_ = lean_array_fset(v_vs_1437_, v_x_1433_, v_x_1435_);
lean_dec(v_x_1433_);
if (v_isShared_1440_ == 0)
{
lean_ctor_set(v___x_1439_, 1, v___x_1457_);
lean_ctor_set(v___x_1439_, 0, v___x_1456_);
v___x_1459_ = v___x_1439_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v___x_1456_);
lean_ctor_set(v_reuseFailAlloc_1460_, 1, v___x_1457_);
v___x_1459_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
return v___x_1459_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2___redArg(lean_object* v_n_1462_, lean_object* v_k_1463_, lean_object* v_v_1464_){
_start:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; 
v___x_1465_ = lean_unsigned_to_nat(0u);
v___x_1466_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2_spec__6___redArg(v_n_1462_, v___x_1465_, v_k_1463_, v_v_1464_);
return v___x_1466_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1467_; lean_object* v___x_1468_; 
v___x_1467_ = lean_box(0);
v___x_1468_ = l_unsafeCast___redArg(v___x_1467_);
return v___x_1468_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1469_; 
v___x_1469_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1469_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg(lean_object* v_x_1470_, size_t v_x_1471_, size_t v_x_1472_, lean_object* v_x_1473_, lean_object* v_x_1474_){
_start:
{
if (lean_obj_tag(v_x_1470_) == 0)
{
lean_object* v_es_1475_; size_t v___x_1476_; size_t v___x_1477_; lean_object* v_j_1478_; lean_object* v___x_1479_; uint8_t v___x_1480_; 
v_es_1475_ = lean_ctor_get(v_x_1470_, 0);
v___x_1476_ = ((size_t)31ULL);
v___x_1477_ = lean_usize_land(v_x_1471_, v___x_1476_);
v_j_1478_ = lean_usize_to_nat(v___x_1477_);
v___x_1479_ = lean_array_get_size(v_es_1475_);
v___x_1480_ = lean_nat_dec_lt(v_j_1478_, v___x_1479_);
if (v___x_1480_ == 0)
{
lean_dec(v_j_1478_);
lean_dec(v_x_1474_);
lean_dec_ref(v_x_1473_);
return v_x_1470_;
}
else
{
lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1519_; 
lean_inc_ref(v_es_1475_);
v_isSharedCheck_1519_ = !lean_is_exclusive(v_x_1470_);
if (v_isSharedCheck_1519_ == 0)
{
lean_object* v_unused_1520_; 
v_unused_1520_ = lean_ctor_get(v_x_1470_, 0);
lean_dec(v_unused_1520_);
v___x_1482_ = v_x_1470_;
v_isShared_1483_ = v_isSharedCheck_1519_;
goto v_resetjp_1481_;
}
else
{
lean_dec(v_x_1470_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1519_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
lean_object* v_v_1484_; lean_object* v___x_1485_; lean_object* v_xs_x27_1486_; lean_object* v___y_1488_; 
v_v_1484_ = lean_array_fget(v_es_1475_, v_j_1478_);
v___x_1485_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__0);
v_xs_x27_1486_ = lean_array_fset(v_es_1475_, v_j_1478_, v___x_1485_);
switch(lean_obj_tag(v_v_1484_))
{
case 0:
{
lean_object* v_key_1493_; lean_object* v_val_1494_; lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1504_; 
v_key_1493_ = lean_ctor_get(v_v_1484_, 0);
v_val_1494_ = lean_ctor_get(v_v_1484_, 1);
v_isSharedCheck_1504_ = !lean_is_exclusive(v_v_1484_);
if (v_isSharedCheck_1504_ == 0)
{
v___x_1496_ = v_v_1484_;
v_isShared_1497_ = v_isSharedCheck_1504_;
goto v_resetjp_1495_;
}
else
{
lean_inc(v_val_1494_);
lean_inc(v_key_1493_);
lean_dec(v_v_1484_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1504_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
uint8_t v___x_1498_; 
v___x_1498_ = lean_expr_eqv(v_x_1473_, v_key_1493_);
if (v___x_1498_ == 0)
{
lean_object* v___x_1499_; lean_object* v___x_1500_; 
lean_del_object(v___x_1496_);
v___x_1499_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1493_, v_val_1494_, v_x_1473_, v_x_1474_);
v___x_1500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1499_);
v___y_1488_ = v___x_1500_;
goto v___jp_1487_;
}
else
{
lean_object* v___x_1502_; 
lean_dec(v_val_1494_);
lean_dec(v_key_1493_);
if (v_isShared_1497_ == 0)
{
lean_ctor_set(v___x_1496_, 1, v_x_1474_);
lean_ctor_set(v___x_1496_, 0, v_x_1473_);
v___x_1502_ = v___x_1496_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_x_1473_);
lean_ctor_set(v_reuseFailAlloc_1503_, 1, v_x_1474_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
v___y_1488_ = v___x_1502_;
goto v___jp_1487_;
}
}
}
}
case 1:
{
lean_object* v_node_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1517_; 
v_node_1505_ = lean_ctor_get(v_v_1484_, 0);
v_isSharedCheck_1517_ = !lean_is_exclusive(v_v_1484_);
if (v_isSharedCheck_1517_ == 0)
{
v___x_1507_ = v_v_1484_;
v_isShared_1508_ = v_isSharedCheck_1517_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_node_1505_);
lean_dec(v_v_1484_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1517_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
size_t v___x_1509_; size_t v___x_1510_; size_t v___x_1511_; size_t v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1515_; 
v___x_1509_ = ((size_t)5ULL);
v___x_1510_ = lean_usize_shift_right(v_x_1471_, v___x_1509_);
v___x_1511_ = ((size_t)1ULL);
v___x_1512_ = lean_usize_add(v_x_1472_, v___x_1511_);
v___x_1513_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg(v_node_1505_, v___x_1510_, v___x_1512_, v_x_1473_, v_x_1474_);
if (v_isShared_1508_ == 0)
{
lean_ctor_set(v___x_1507_, 0, v___x_1513_);
v___x_1515_ = v___x_1507_;
goto v_reusejp_1514_;
}
else
{
lean_object* v_reuseFailAlloc_1516_; 
v_reuseFailAlloc_1516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1516_, 0, v___x_1513_);
v___x_1515_ = v_reuseFailAlloc_1516_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
v___y_1488_ = v___x_1515_;
goto v___jp_1487_;
}
}
}
default: 
{
lean_object* v___x_1518_; 
v___x_1518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1518_, 0, v_x_1473_);
lean_ctor_set(v___x_1518_, 1, v_x_1474_);
v___y_1488_ = v___x_1518_;
goto v___jp_1487_;
}
}
v___jp_1487_:
{
lean_object* v___x_1489_; lean_object* v___x_1491_; 
v___x_1489_ = lean_array_fset(v_xs_x27_1486_, v_j_1478_, v___y_1488_);
lean_dec(v_j_1478_);
if (v_isShared_1483_ == 0)
{
lean_ctor_set(v___x_1482_, 0, v___x_1489_);
v___x_1491_ = v___x_1482_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v___x_1489_);
v___x_1491_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
return v___x_1491_;
}
}
}
}
}
else
{
lean_object* v_ks_1521_; lean_object* v_vs_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1540_; 
v_ks_1521_ = lean_ctor_get(v_x_1470_, 0);
v_vs_1522_ = lean_ctor_get(v_x_1470_, 1);
v_isSharedCheck_1540_ = !lean_is_exclusive(v_x_1470_);
if (v_isSharedCheck_1540_ == 0)
{
v___x_1524_ = v_x_1470_;
v_isShared_1525_ = v_isSharedCheck_1540_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_vs_1522_);
lean_inc(v_ks_1521_);
lean_dec(v_x_1470_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1540_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v___x_1527_; 
if (v_isShared_1525_ == 0)
{
v___x_1527_ = v___x_1524_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v_ks_1521_);
lean_ctor_set(v_reuseFailAlloc_1539_, 1, v_vs_1522_);
v___x_1527_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
lean_object* v_newNode_1528_; size_t v___x_1529_; uint8_t v___x_1530_; 
v_newNode_1528_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2___redArg(v___x_1527_, v_x_1473_, v_x_1474_);
v___x_1529_ = ((size_t)7ULL);
v___x_1530_ = lean_usize_dec_le(v___x_1529_, v_x_1472_);
if (v___x_1530_ == 0)
{
lean_object* v___x_1531_; lean_object* v___x_1532_; uint8_t v___x_1533_; 
v___x_1531_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1528_);
v___x_1532_ = lean_unsigned_to_nat(4u);
v___x_1533_ = lean_nat_dec_lt(v___x_1531_, v___x_1532_);
lean_dec(v___x_1531_);
if (v___x_1533_ == 0)
{
lean_object* v_ks_1534_; lean_object* v_vs_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; 
v_ks_1534_ = lean_ctor_get(v_newNode_1528_, 0);
lean_inc_ref(v_ks_1534_);
v_vs_1535_ = lean_ctor_get(v_newNode_1528_, 1);
lean_inc_ref(v_vs_1535_);
lean_dec_ref(v_newNode_1528_);
v___x_1536_ = lean_unsigned_to_nat(0u);
v___x_1537_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__1);
v___x_1538_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__3___redArg(v_x_1472_, v_ks_1534_, v_vs_1535_, v___x_1536_, v___x_1537_);
lean_dec_ref(v_vs_1535_);
lean_dec_ref(v_ks_1534_);
return v___x_1538_;
}
else
{
return v_newNode_1528_;
}
}
else
{
return v_newNode_1528_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__3___redArg(size_t v_depth_1541_, lean_object* v_keys_1542_, lean_object* v_vals_1543_, lean_object* v_i_1544_, lean_object* v_entries_1545_){
_start:
{
lean_object* v___x_1546_; uint8_t v___x_1547_; 
v___x_1546_ = lean_array_get_size(v_keys_1542_);
v___x_1547_ = lean_nat_dec_lt(v_i_1544_, v___x_1546_);
if (v___x_1547_ == 0)
{
lean_dec(v_i_1544_);
return v_entries_1545_;
}
else
{
lean_object* v_k_1548_; lean_object* v_v_1549_; uint64_t v___x_1550_; size_t v_h_1551_; size_t v___x_1552_; lean_object* v___x_1553_; size_t v___x_1554_; size_t v___x_1555_; size_t v___x_1556_; size_t v_h_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
v_k_1548_ = lean_array_fget_borrowed(v_keys_1542_, v_i_1544_);
v_v_1549_ = lean_array_fget_borrowed(v_vals_1543_, v_i_1544_);
v___x_1550_ = l_Lean_Expr_hash(v_k_1548_);
v_h_1551_ = lean_uint64_to_usize(v___x_1550_);
v___x_1552_ = ((size_t)5ULL);
v___x_1553_ = lean_unsigned_to_nat(1u);
v___x_1554_ = ((size_t)1ULL);
v___x_1555_ = lean_usize_sub(v_depth_1541_, v___x_1554_);
v___x_1556_ = lean_usize_mul(v___x_1552_, v___x_1555_);
v_h_1557_ = lean_usize_shift_right(v_h_1551_, v___x_1556_);
v___x_1558_ = lean_nat_add(v_i_1544_, v___x_1553_);
lean_dec(v_i_1544_);
lean_inc(v_v_1549_);
lean_inc(v_k_1548_);
v___x_1559_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg(v_entries_1545_, v_h_1557_, v_depth_1541_, v_k_1548_, v_v_1549_);
v_i_1544_ = v___x_1558_;
v_entries_1545_ = v___x_1559_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_depth_1561_, lean_object* v_keys_1562_, lean_object* v_vals_1563_, lean_object* v_i_1564_, lean_object* v_entries_1565_){
_start:
{
size_t v_depth_boxed_1566_; lean_object* v_res_1567_; 
v_depth_boxed_1566_ = lean_unbox_usize(v_depth_1561_);
lean_dec(v_depth_1561_);
v_res_1567_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__3___redArg(v_depth_boxed_1566_, v_keys_1562_, v_vals_1563_, v_i_1564_, v_entries_1565_);
lean_dec_ref(v_vals_1563_);
lean_dec_ref(v_keys_1562_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___boxed(lean_object* v_x_1568_, lean_object* v_x_1569_, lean_object* v_x_1570_, lean_object* v_x_1571_, lean_object* v_x_1572_){
_start:
{
size_t v_x_81069__boxed_1573_; size_t v_x_81070__boxed_1574_; lean_object* v_res_1575_; 
v_x_81069__boxed_1573_ = lean_unbox_usize(v_x_1569_);
lean_dec(v_x_1569_);
v_x_81070__boxed_1574_ = lean_unbox_usize(v_x_1570_);
lean_dec(v_x_1570_);
v_res_1575_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg(v_x_1568_, v_x_81069__boxed_1573_, v_x_81070__boxed_1574_, v_x_1571_, v_x_1572_);
return v_res_1575_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0___redArg(lean_object* v_x_1576_, lean_object* v_x_1577_, lean_object* v_x_1578_){
_start:
{
uint64_t v___x_1579_; size_t v___x_1580_; size_t v___x_1581_; lean_object* v___x_1582_; 
v___x_1579_ = l_Lean_Expr_hash(v_x_1577_);
v___x_1580_ = lean_uint64_to_usize(v___x_1579_);
v___x_1581_ = ((size_t)1ULL);
v___x_1582_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg(v_x_1576_, v___x_1580_, v___x_1581_, v_x_1577_, v_x_1578_);
return v___x_1582_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___lam__0(lean_object* v_a_1583_, lean_object* v_s_1584_){
_start:
{
lean_object* v_toRing_1585_; lean_object* v_invFn_x3f_1586_; lean_object* v_semiringId_x3f_1587_; lean_object* v_commSemiringInst_1588_; lean_object* v_commRingInst_1589_; lean_object* v_noZeroDivInst_x3f_1590_; lean_object* v_fieldInst_x3f_1591_; lean_object* v_powIdentityInst_x3f_1592_; lean_object* v_denoteEntries_1593_; lean_object* v_nextId_1594_; lean_object* v_steps_1595_; lean_object* v_queue_1596_; lean_object* v_basis_1597_; lean_object* v_diseqs_1598_; uint8_t v_recheck_1599_; lean_object* v_invSet_1600_; lean_object* v_powIdentityVarCount_1601_; lean_object* v_numEq0_x3f_1602_; uint8_t v_numEq0Updated_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1612_; 
v_toRing_1585_ = lean_ctor_get(v_s_1584_, 0);
v_invFn_x3f_1586_ = lean_ctor_get(v_s_1584_, 1);
v_semiringId_x3f_1587_ = lean_ctor_get(v_s_1584_, 2);
v_commSemiringInst_1588_ = lean_ctor_get(v_s_1584_, 3);
v_commRingInst_1589_ = lean_ctor_get(v_s_1584_, 4);
v_noZeroDivInst_x3f_1590_ = lean_ctor_get(v_s_1584_, 5);
v_fieldInst_x3f_1591_ = lean_ctor_get(v_s_1584_, 6);
v_powIdentityInst_x3f_1592_ = lean_ctor_get(v_s_1584_, 7);
v_denoteEntries_1593_ = lean_ctor_get(v_s_1584_, 8);
v_nextId_1594_ = lean_ctor_get(v_s_1584_, 9);
v_steps_1595_ = lean_ctor_get(v_s_1584_, 10);
v_queue_1596_ = lean_ctor_get(v_s_1584_, 11);
v_basis_1597_ = lean_ctor_get(v_s_1584_, 12);
v_diseqs_1598_ = lean_ctor_get(v_s_1584_, 13);
v_recheck_1599_ = lean_ctor_get_uint8(v_s_1584_, sizeof(void*)*17);
v_invSet_1600_ = lean_ctor_get(v_s_1584_, 14);
v_powIdentityVarCount_1601_ = lean_ctor_get(v_s_1584_, 15);
v_numEq0_x3f_1602_ = lean_ctor_get(v_s_1584_, 16);
v_numEq0Updated_1603_ = lean_ctor_get_uint8(v_s_1584_, sizeof(void*)*17 + 1);
v_isSharedCheck_1612_ = !lean_is_exclusive(v_s_1584_);
if (v_isSharedCheck_1612_ == 0)
{
v___x_1605_ = v_s_1584_;
v_isShared_1606_ = v_isSharedCheck_1612_;
goto v_resetjp_1604_;
}
else
{
lean_inc(v_numEq0_x3f_1602_);
lean_inc(v_powIdentityVarCount_1601_);
lean_inc(v_invSet_1600_);
lean_inc(v_diseqs_1598_);
lean_inc(v_basis_1597_);
lean_inc(v_queue_1596_);
lean_inc(v_steps_1595_);
lean_inc(v_nextId_1594_);
lean_inc(v_denoteEntries_1593_);
lean_inc(v_powIdentityInst_x3f_1592_);
lean_inc(v_fieldInst_x3f_1591_);
lean_inc(v_noZeroDivInst_x3f_1590_);
lean_inc(v_commRingInst_1589_);
lean_inc(v_commSemiringInst_1588_);
lean_inc(v_semiringId_x3f_1587_);
lean_inc(v_invFn_x3f_1586_);
lean_inc(v_toRing_1585_);
lean_dec(v_s_1584_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1612_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1610_; 
v___x_1607_ = lean_box(0);
v___x_1608_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0___redArg(v_invSet_1600_, v_a_1583_, v___x_1607_);
if (v_isShared_1606_ == 0)
{
lean_ctor_set(v___x_1605_, 14, v___x_1608_);
v___x_1610_ = v___x_1605_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(0, 17, 2);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v_toRing_1585_);
lean_ctor_set(v_reuseFailAlloc_1611_, 1, v_invFn_x3f_1586_);
lean_ctor_set(v_reuseFailAlloc_1611_, 2, v_semiringId_x3f_1587_);
lean_ctor_set(v_reuseFailAlloc_1611_, 3, v_commSemiringInst_1588_);
lean_ctor_set(v_reuseFailAlloc_1611_, 4, v_commRingInst_1589_);
lean_ctor_set(v_reuseFailAlloc_1611_, 5, v_noZeroDivInst_x3f_1590_);
lean_ctor_set(v_reuseFailAlloc_1611_, 6, v_fieldInst_x3f_1591_);
lean_ctor_set(v_reuseFailAlloc_1611_, 7, v_powIdentityInst_x3f_1592_);
lean_ctor_set(v_reuseFailAlloc_1611_, 8, v_denoteEntries_1593_);
lean_ctor_set(v_reuseFailAlloc_1611_, 9, v_nextId_1594_);
lean_ctor_set(v_reuseFailAlloc_1611_, 10, v_steps_1595_);
lean_ctor_set(v_reuseFailAlloc_1611_, 11, v_queue_1596_);
lean_ctor_set(v_reuseFailAlloc_1611_, 12, v_basis_1597_);
lean_ctor_set(v_reuseFailAlloc_1611_, 13, v_diseqs_1598_);
lean_ctor_set(v_reuseFailAlloc_1611_, 14, v___x_1608_);
lean_ctor_set(v_reuseFailAlloc_1611_, 15, v_powIdentityVarCount_1601_);
lean_ctor_set(v_reuseFailAlloc_1611_, 16, v_numEq0_x3f_1602_);
lean_ctor_set_uint8(v_reuseFailAlloc_1611_, sizeof(void*)*17, v_recheck_1599_);
lean_ctor_set_uint8(v_reuseFailAlloc_1611_, sizeof(void*)*17 + 1, v_numEq0Updated_1603_);
v___x_1610_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
return v___x_1610_;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__1(void){
_start:
{
lean_object* v___x_1615_; lean_object* v___x_1616_; 
v___x_1615_ = lean_unsigned_to_nat(0u);
v___x_1616_ = lean_nat_to_int(v___x_1615_);
return v___x_1616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4(lean_object* v_k_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_){
_start:
{
lean_object* v___x_1635_; 
v___x_1635_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_);
if (lean_obj_tag(v___x_1635_) == 0)
{
lean_object* v_a_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1697_; 
v_a_1636_ = lean_ctor_get(v___x_1635_, 0);
v_isSharedCheck_1697_ = !lean_is_exclusive(v___x_1635_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1638_ = v___x_1635_;
v_isShared_1639_ = v_isSharedCheck_1697_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_a_1636_);
lean_dec(v___x_1635_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1697_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v_toRing_1640_; lean_object* v_type_1641_; lean_object* v_u_1642_; lean_object* v_semiringInst_1643_; lean_object* v___x_1644_; lean_object* v_n_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v_ofNatInst_1650_; lean_object* v___y_1651_; lean_object* v___y_1652_; lean_object* v___y_1653_; lean_object* v___y_1654_; lean_object* v___y_1655_; lean_object* v___y_1656_; lean_object* v___y_1657_; lean_object* v___y_1658_; lean_object* v___y_1659_; lean_object* v___y_1660_; lean_object* v___y_1661_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; 
v_toRing_1640_ = lean_ctor_get(v_a_1636_, 0);
lean_inc_ref(v_toRing_1640_);
lean_dec(v_a_1636_);
v_type_1641_ = lean_ctor_get(v_toRing_1640_, 1);
lean_inc_ref_n(v_type_1641_, 2);
v_u_1642_ = lean_ctor_get(v_toRing_1640_, 2);
lean_inc(v_u_1642_);
v_semiringInst_1643_ = lean_ctor_get(v_toRing_1640_, 4);
lean_inc_ref(v_semiringInst_1643_);
lean_dec_ref(v_toRing_1640_);
v___x_1644_ = lean_nat_abs(v_k_1622_);
v_n_1645_ = l_Lean_mkRawNatLit(v___x_1644_);
v___x_1646_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__0));
v___x_1647_ = lean_box(0);
v___x_1648_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1648_, 0, v_u_1642_);
lean_ctor_set(v___x_1648_, 1, v___x_1647_);
lean_inc_ref(v___x_1648_);
v___x_1680_ = l_Lean_mkConst(v___x_1646_, v___x_1648_);
lean_inc_ref(v_n_1645_);
v___x_1681_ = l_Lean_mkAppB(v___x_1680_, v_type_1641_, v_n_1645_);
v___x_1682_ = lean_box(0);
v___x_1683_ = l_Lean_Meta_synthInstance_x3f(v___x_1681_, v___x_1682_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_);
if (lean_obj_tag(v___x_1683_) == 0)
{
lean_object* v_a_1684_; 
v_a_1684_ = lean_ctor_get(v___x_1683_, 0);
lean_inc(v_a_1684_);
lean_dec_ref_known(v___x_1683_, 1);
if (lean_obj_tag(v_a_1684_) == 1)
{
lean_object* v_val_1685_; 
lean_dec_ref(v_semiringInst_1643_);
v_val_1685_ = lean_ctor_get(v_a_1684_, 0);
lean_inc(v_val_1685_);
lean_dec_ref_known(v_a_1684_, 1);
v_ofNatInst_1650_ = v_val_1685_;
v___y_1651_ = v___y_1623_;
v___y_1652_ = v___y_1624_;
v___y_1653_ = v___y_1625_;
v___y_1654_ = v___y_1626_;
v___y_1655_ = v___y_1627_;
v___y_1656_ = v___y_1628_;
v___y_1657_ = v___y_1629_;
v___y_1658_ = v___y_1630_;
v___y_1659_ = v___y_1631_;
v___y_1660_ = v___y_1632_;
v___y_1661_ = v___y_1633_;
goto v___jp_1649_;
}
else
{
lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; 
lean_dec(v_a_1684_);
v___x_1686_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__2));
lean_inc_ref(v___x_1648_);
v___x_1687_ = l_Lean_mkConst(v___x_1686_, v___x_1648_);
lean_inc_ref(v_n_1645_);
lean_inc_ref(v_type_1641_);
v___x_1688_ = l_Lean_mkApp3(v___x_1687_, v_type_1641_, v_semiringInst_1643_, v_n_1645_);
v_ofNatInst_1650_ = v___x_1688_;
v___y_1651_ = v___y_1623_;
v___y_1652_ = v___y_1624_;
v___y_1653_ = v___y_1625_;
v___y_1654_ = v___y_1626_;
v___y_1655_ = v___y_1627_;
v___y_1656_ = v___y_1628_;
v___y_1657_ = v___y_1629_;
v___y_1658_ = v___y_1630_;
v___y_1659_ = v___y_1631_;
v___y_1660_ = v___y_1632_;
v___y_1661_ = v___y_1633_;
goto v___jp_1649_;
}
}
else
{
lean_object* v_a_1689_; lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1696_; 
lean_dec_ref_known(v___x_1648_, 2);
lean_dec_ref(v_n_1645_);
lean_dec_ref(v_semiringInst_1643_);
lean_dec_ref(v_type_1641_);
lean_del_object(v___x_1638_);
v_a_1689_ = lean_ctor_get(v___x_1683_, 0);
v_isSharedCheck_1696_ = !lean_is_exclusive(v___x_1683_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1691_ = v___x_1683_;
v_isShared_1692_ = v_isSharedCheck_1696_;
goto v_resetjp_1690_;
}
else
{
lean_inc(v_a_1689_);
lean_dec(v___x_1683_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1696_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
lean_object* v___x_1694_; 
if (v_isShared_1692_ == 0)
{
v___x_1694_ = v___x_1691_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v_a_1689_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
return v___x_1694_;
}
}
}
v___jp_1649_:
{
lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v_n_1664_; lean_object* v___x_1665_; uint8_t v___x_1666_; 
v___x_1662_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__8));
v___x_1663_ = l_Lean_mkConst(v___x_1662_, v___x_1648_);
v_n_1664_ = l_Lean_mkApp3(v___x_1663_, v_type_1641_, v_n_1645_, v_ofNatInst_1650_);
v___x_1665_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__1);
v___x_1666_ = lean_int_dec_lt(v_k_1622_, v___x_1665_);
if (v___x_1666_ == 0)
{
lean_object* v___x_1668_; 
if (v_isShared_1639_ == 0)
{
lean_ctor_set(v___x_1638_, 0, v_n_1664_);
v___x_1668_ = v___x_1638_;
goto v_reusejp_1667_;
}
else
{
lean_object* v_reuseFailAlloc_1669_; 
v_reuseFailAlloc_1669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1669_, 0, v_n_1664_);
v___x_1668_ = v_reuseFailAlloc_1669_;
goto v_reusejp_1667_;
}
v_reusejp_1667_:
{
return v___x_1668_;
}
}
else
{
lean_object* v___x_1670_; 
lean_del_object(v___x_1638_);
v___x_1670_ = l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0(v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_);
if (lean_obj_tag(v___x_1670_) == 0)
{
lean_object* v_a_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1679_; 
v_a_1671_ = lean_ctor_get(v___x_1670_, 0);
v_isSharedCheck_1679_ = !lean_is_exclusive(v___x_1670_);
if (v_isSharedCheck_1679_ == 0)
{
v___x_1673_ = v___x_1670_;
v_isShared_1674_ = v_isSharedCheck_1679_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_a_1671_);
lean_dec(v___x_1670_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1679_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v___x_1675_; lean_object* v___x_1677_; 
v___x_1675_ = l_Lean_Expr_app___override(v_a_1671_, v_n_1664_);
if (v_isShared_1674_ == 0)
{
lean_ctor_set(v___x_1673_, 0, v___x_1675_);
v___x_1677_ = v___x_1673_;
goto v_reusejp_1676_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v___x_1675_);
v___x_1677_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1676_;
}
v_reusejp_1676_:
{
return v___x_1677_;
}
}
}
else
{
lean_dec_ref(v_n_1664_);
return v___x_1670_;
}
}
}
}
}
else
{
lean_object* v_a_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1705_; 
v_a_1698_ = lean_ctor_get(v___x_1635_, 0);
v_isSharedCheck_1705_ = !lean_is_exclusive(v___x_1635_);
if (v_isSharedCheck_1705_ == 0)
{
v___x_1700_ = v___x_1635_;
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_a_1698_);
lean_dec(v___x_1635_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v___x_1703_; 
if (v_isShared_1701_ == 0)
{
v___x_1703_ = v___x_1700_;
goto v_reusejp_1702_;
}
else
{
lean_object* v_reuseFailAlloc_1704_; 
v_reuseFailAlloc_1704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1704_, 0, v_a_1698_);
v___x_1703_ = v_reuseFailAlloc_1704_;
goto v_reusejp_1702_;
}
v_reusejp_1702_:
{
return v___x_1703_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___boxed(lean_object* v_k_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4(v_k_1706_, v___y_1707_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_);
lean_dec(v___y_1717_);
lean_dec_ref(v___y_1716_);
lean_dec(v___y_1715_);
lean_dec_ref(v___y_1714_);
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
lean_dec(v___y_1711_);
lean_dec_ref(v___y_1710_);
lean_dec(v___y_1709_);
lean_dec(v___y_1708_);
lean_dec_ref(v___y_1707_);
lean_dec(v_k_1706_);
return v_res_1719_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__6___redArg(lean_object* v_keys_1720_, lean_object* v_i_1721_, lean_object* v_k_1722_){
_start:
{
lean_object* v___x_1723_; uint8_t v___x_1724_; 
v___x_1723_ = lean_array_get_size(v_keys_1720_);
v___x_1724_ = lean_nat_dec_lt(v_i_1721_, v___x_1723_);
if (v___x_1724_ == 0)
{
lean_dec(v_i_1721_);
return v___x_1724_;
}
else
{
lean_object* v_k_x27_1725_; uint8_t v___x_1726_; 
v_k_x27_1725_ = lean_array_fget_borrowed(v_keys_1720_, v_i_1721_);
v___x_1726_ = lean_expr_eqv(v_k_1722_, v_k_x27_1725_);
if (v___x_1726_ == 0)
{
lean_object* v___x_1727_; lean_object* v___x_1728_; 
v___x_1727_ = lean_unsigned_to_nat(1u);
v___x_1728_ = lean_nat_add(v_i_1721_, v___x_1727_);
lean_dec(v_i_1721_);
v_i_1721_ = v___x_1728_;
goto _start;
}
else
{
lean_dec(v_i_1721_);
return v___x_1724_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__6___redArg___boxed(lean_object* v_keys_1730_, lean_object* v_i_1731_, lean_object* v_k_1732_){
_start:
{
uint8_t v_res_1733_; lean_object* v_r_1734_; 
v_res_1733_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__6___redArg(v_keys_1730_, v_i_1731_, v_k_1732_);
lean_dec_ref(v_k_1732_);
lean_dec_ref(v_keys_1730_);
v_r_1734_ = lean_box(v_res_1733_);
return v_r_1734_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2___redArg(lean_object* v_x_1735_, size_t v_x_1736_, lean_object* v_x_1737_){
_start:
{
if (lean_obj_tag(v_x_1735_) == 0)
{
lean_object* v_es_1738_; lean_object* v___x_1739_; size_t v___x_1740_; size_t v___x_1741_; lean_object* v_j_1742_; lean_object* v___x_1743_; 
v_es_1738_ = lean_ctor_get(v_x_1735_, 0);
v___x_1739_ = lean_box(2);
v___x_1740_ = ((size_t)31ULL);
v___x_1741_ = lean_usize_land(v_x_1736_, v___x_1740_);
v_j_1742_ = lean_usize_to_nat(v___x_1741_);
v___x_1743_ = lean_array_get_borrowed(v___x_1739_, v_es_1738_, v_j_1742_);
lean_dec(v_j_1742_);
switch(lean_obj_tag(v___x_1743_))
{
case 0:
{
lean_object* v_key_1744_; uint8_t v___x_1745_; 
v_key_1744_ = lean_ctor_get(v___x_1743_, 0);
v___x_1745_ = lean_expr_eqv(v_x_1737_, v_key_1744_);
return v___x_1745_;
}
case 1:
{
lean_object* v_node_1746_; size_t v___x_1747_; size_t v___x_1748_; 
v_node_1746_ = lean_ctor_get(v___x_1743_, 0);
v___x_1747_ = ((size_t)5ULL);
v___x_1748_ = lean_usize_shift_right(v_x_1736_, v___x_1747_);
v_x_1735_ = v_node_1746_;
v_x_1736_ = v___x_1748_;
goto _start;
}
default: 
{
uint8_t v___x_1750_; 
v___x_1750_ = 0;
return v___x_1750_;
}
}
}
else
{
lean_object* v_ks_1751_; lean_object* v___x_1752_; uint8_t v___x_1753_; 
v_ks_1751_ = lean_ctor_get(v_x_1735_, 0);
v___x_1752_ = lean_unsigned_to_nat(0u);
v___x_1753_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__6___redArg(v_ks_1751_, v___x_1752_, v_x_1737_);
return v___x_1753_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2___redArg___boxed(lean_object* v_x_1754_, lean_object* v_x_1755_, lean_object* v_x_1756_){
_start:
{
size_t v_x_81468__boxed_1757_; uint8_t v_res_1758_; lean_object* v_r_1759_; 
v_x_81468__boxed_1757_ = lean_unbox_usize(v_x_1755_);
lean_dec(v_x_1755_);
v_res_1758_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2___redArg(v_x_1754_, v_x_81468__boxed_1757_, v_x_1756_);
lean_dec_ref(v_x_1756_);
lean_dec_ref(v_x_1754_);
v_r_1759_ = lean_box(v_res_1758_);
return v_r_1759_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1___redArg(lean_object* v_x_1760_, lean_object* v_x_1761_){
_start:
{
uint64_t v___x_1762_; size_t v___x_1763_; uint8_t v___x_1764_; 
v___x_1762_ = l_Lean_Expr_hash(v_x_1761_);
v___x_1763_ = lean_uint64_to_usize(v___x_1762_);
v___x_1764_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2___redArg(v_x_1760_, v___x_1763_, v_x_1761_);
return v___x_1764_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1___redArg___boxed(lean_object* v_x_1765_, lean_object* v_x_1766_){
_start:
{
uint8_t v_res_1767_; lean_object* v_r_1768_; 
v_res_1767_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1___redArg(v_x_1765_, v_x_1766_);
lean_dec_ref(v_x_1766_);
lean_dec_ref(v_x_1765_);
v_r_1768_ = lean_box(v_res_1767_);
return v_r_1768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___lam__0(lean_object* v_a_1769_, lean_object* v_s_1770_){
_start:
{
lean_object* v_toRing_1771_; lean_object* v_invFn_x3f_1772_; lean_object* v_semiringId_x3f_1773_; lean_object* v_commSemiringInst_1774_; lean_object* v_commRingInst_1775_; lean_object* v_noZeroDivInst_x3f_1776_; lean_object* v_fieldInst_x3f_1777_; lean_object* v_powIdentityInst_x3f_1778_; lean_object* v_denoteEntries_1779_; lean_object* v_nextId_1780_; lean_object* v_steps_1781_; lean_object* v_queue_1782_; lean_object* v_basis_1783_; lean_object* v_diseqs_1784_; uint8_t v_recheck_1785_; lean_object* v_invSet_1786_; lean_object* v_powIdentityVarCount_1787_; lean_object* v_numEq0_x3f_1788_; uint8_t v_numEq0Updated_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1821_; 
v_toRing_1771_ = lean_ctor_get(v_s_1770_, 0);
v_invFn_x3f_1772_ = lean_ctor_get(v_s_1770_, 1);
v_semiringId_x3f_1773_ = lean_ctor_get(v_s_1770_, 2);
v_commSemiringInst_1774_ = lean_ctor_get(v_s_1770_, 3);
v_commRingInst_1775_ = lean_ctor_get(v_s_1770_, 4);
v_noZeroDivInst_x3f_1776_ = lean_ctor_get(v_s_1770_, 5);
v_fieldInst_x3f_1777_ = lean_ctor_get(v_s_1770_, 6);
v_powIdentityInst_x3f_1778_ = lean_ctor_get(v_s_1770_, 7);
v_denoteEntries_1779_ = lean_ctor_get(v_s_1770_, 8);
v_nextId_1780_ = lean_ctor_get(v_s_1770_, 9);
v_steps_1781_ = lean_ctor_get(v_s_1770_, 10);
v_queue_1782_ = lean_ctor_get(v_s_1770_, 11);
v_basis_1783_ = lean_ctor_get(v_s_1770_, 12);
v_diseqs_1784_ = lean_ctor_get(v_s_1770_, 13);
v_recheck_1785_ = lean_ctor_get_uint8(v_s_1770_, sizeof(void*)*17);
v_invSet_1786_ = lean_ctor_get(v_s_1770_, 14);
v_powIdentityVarCount_1787_ = lean_ctor_get(v_s_1770_, 15);
v_numEq0_x3f_1788_ = lean_ctor_get(v_s_1770_, 16);
v_numEq0Updated_1789_ = lean_ctor_get_uint8(v_s_1770_, sizeof(void*)*17 + 1);
v_isSharedCheck_1821_ = !lean_is_exclusive(v_s_1770_);
if (v_isSharedCheck_1821_ == 0)
{
v___x_1791_ = v_s_1770_;
v_isShared_1792_ = v_isSharedCheck_1821_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_numEq0_x3f_1788_);
lean_inc(v_powIdentityVarCount_1787_);
lean_inc(v_invSet_1786_);
lean_inc(v_diseqs_1784_);
lean_inc(v_basis_1783_);
lean_inc(v_queue_1782_);
lean_inc(v_steps_1781_);
lean_inc(v_nextId_1780_);
lean_inc(v_denoteEntries_1779_);
lean_inc(v_powIdentityInst_x3f_1778_);
lean_inc(v_fieldInst_x3f_1777_);
lean_inc(v_noZeroDivInst_x3f_1776_);
lean_inc(v_commRingInst_1775_);
lean_inc(v_commSemiringInst_1774_);
lean_inc(v_semiringId_x3f_1773_);
lean_inc(v_invFn_x3f_1772_);
lean_inc(v_toRing_1771_);
lean_dec(v_s_1770_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1821_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v_id_1793_; lean_object* v_type_1794_; lean_object* v_u_1795_; lean_object* v_ringInst_1796_; lean_object* v_semiringInst_1797_; lean_object* v_charInst_x3f_1798_; lean_object* v_addFn_x3f_1799_; lean_object* v_subFn_x3f_1800_; lean_object* v_negFn_x3f_1801_; lean_object* v_powFn_x3f_1802_; lean_object* v_intCastFn_x3f_1803_; lean_object* v_natCastFn_x3f_1804_; lean_object* v_one_x3f_1805_; lean_object* v_vars_1806_; lean_object* v_varMap_1807_; lean_object* v_denote_1808_; lean_object* v___x_1810_; uint8_t v_isShared_1811_; uint8_t v_isSharedCheck_1819_; 
v_id_1793_ = lean_ctor_get(v_toRing_1771_, 0);
v_type_1794_ = lean_ctor_get(v_toRing_1771_, 1);
v_u_1795_ = lean_ctor_get(v_toRing_1771_, 2);
v_ringInst_1796_ = lean_ctor_get(v_toRing_1771_, 3);
v_semiringInst_1797_ = lean_ctor_get(v_toRing_1771_, 4);
v_charInst_x3f_1798_ = lean_ctor_get(v_toRing_1771_, 5);
v_addFn_x3f_1799_ = lean_ctor_get(v_toRing_1771_, 6);
v_subFn_x3f_1800_ = lean_ctor_get(v_toRing_1771_, 8);
v_negFn_x3f_1801_ = lean_ctor_get(v_toRing_1771_, 9);
v_powFn_x3f_1802_ = lean_ctor_get(v_toRing_1771_, 10);
v_intCastFn_x3f_1803_ = lean_ctor_get(v_toRing_1771_, 11);
v_natCastFn_x3f_1804_ = lean_ctor_get(v_toRing_1771_, 12);
v_one_x3f_1805_ = lean_ctor_get(v_toRing_1771_, 13);
v_vars_1806_ = lean_ctor_get(v_toRing_1771_, 14);
v_varMap_1807_ = lean_ctor_get(v_toRing_1771_, 15);
v_denote_1808_ = lean_ctor_get(v_toRing_1771_, 16);
v_isSharedCheck_1819_ = !lean_is_exclusive(v_toRing_1771_);
if (v_isSharedCheck_1819_ == 0)
{
lean_object* v_unused_1820_; 
v_unused_1820_ = lean_ctor_get(v_toRing_1771_, 7);
lean_dec(v_unused_1820_);
v___x_1810_ = v_toRing_1771_;
v_isShared_1811_ = v_isSharedCheck_1819_;
goto v_resetjp_1809_;
}
else
{
lean_inc(v_denote_1808_);
lean_inc(v_varMap_1807_);
lean_inc(v_vars_1806_);
lean_inc(v_one_x3f_1805_);
lean_inc(v_natCastFn_x3f_1804_);
lean_inc(v_intCastFn_x3f_1803_);
lean_inc(v_powFn_x3f_1802_);
lean_inc(v_negFn_x3f_1801_);
lean_inc(v_subFn_x3f_1800_);
lean_inc(v_addFn_x3f_1799_);
lean_inc(v_charInst_x3f_1798_);
lean_inc(v_semiringInst_1797_);
lean_inc(v_ringInst_1796_);
lean_inc(v_u_1795_);
lean_inc(v_type_1794_);
lean_inc(v_id_1793_);
lean_dec(v_toRing_1771_);
v___x_1810_ = lean_box(0);
v_isShared_1811_ = v_isSharedCheck_1819_;
goto v_resetjp_1809_;
}
v_resetjp_1809_:
{
lean_object* v___x_1812_; lean_object* v___x_1814_; 
v___x_1812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1812_, 0, v_a_1769_);
if (v_isShared_1811_ == 0)
{
lean_ctor_set(v___x_1810_, 7, v___x_1812_);
v___x_1814_ = v___x_1810_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(0, 17, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v_id_1793_);
lean_ctor_set(v_reuseFailAlloc_1818_, 1, v_type_1794_);
lean_ctor_set(v_reuseFailAlloc_1818_, 2, v_u_1795_);
lean_ctor_set(v_reuseFailAlloc_1818_, 3, v_ringInst_1796_);
lean_ctor_set(v_reuseFailAlloc_1818_, 4, v_semiringInst_1797_);
lean_ctor_set(v_reuseFailAlloc_1818_, 5, v_charInst_x3f_1798_);
lean_ctor_set(v_reuseFailAlloc_1818_, 6, v_addFn_x3f_1799_);
lean_ctor_set(v_reuseFailAlloc_1818_, 7, v___x_1812_);
lean_ctor_set(v_reuseFailAlloc_1818_, 8, v_subFn_x3f_1800_);
lean_ctor_set(v_reuseFailAlloc_1818_, 9, v_negFn_x3f_1801_);
lean_ctor_set(v_reuseFailAlloc_1818_, 10, v_powFn_x3f_1802_);
lean_ctor_set(v_reuseFailAlloc_1818_, 11, v_intCastFn_x3f_1803_);
lean_ctor_set(v_reuseFailAlloc_1818_, 12, v_natCastFn_x3f_1804_);
lean_ctor_set(v_reuseFailAlloc_1818_, 13, v_one_x3f_1805_);
lean_ctor_set(v_reuseFailAlloc_1818_, 14, v_vars_1806_);
lean_ctor_set(v_reuseFailAlloc_1818_, 15, v_varMap_1807_);
lean_ctor_set(v_reuseFailAlloc_1818_, 16, v_denote_1808_);
v___x_1814_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
lean_object* v___x_1816_; 
if (v_isShared_1792_ == 0)
{
lean_ctor_set(v___x_1791_, 0, v___x_1814_);
v___x_1816_ = v___x_1791_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(0, 17, 2);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v___x_1814_);
lean_ctor_set(v_reuseFailAlloc_1817_, 1, v_invFn_x3f_1772_);
lean_ctor_set(v_reuseFailAlloc_1817_, 2, v_semiringId_x3f_1773_);
lean_ctor_set(v_reuseFailAlloc_1817_, 3, v_commSemiringInst_1774_);
lean_ctor_set(v_reuseFailAlloc_1817_, 4, v_commRingInst_1775_);
lean_ctor_set(v_reuseFailAlloc_1817_, 5, v_noZeroDivInst_x3f_1776_);
lean_ctor_set(v_reuseFailAlloc_1817_, 6, v_fieldInst_x3f_1777_);
lean_ctor_set(v_reuseFailAlloc_1817_, 7, v_powIdentityInst_x3f_1778_);
lean_ctor_set(v_reuseFailAlloc_1817_, 8, v_denoteEntries_1779_);
lean_ctor_set(v_reuseFailAlloc_1817_, 9, v_nextId_1780_);
lean_ctor_set(v_reuseFailAlloc_1817_, 10, v_steps_1781_);
lean_ctor_set(v_reuseFailAlloc_1817_, 11, v_queue_1782_);
lean_ctor_set(v_reuseFailAlloc_1817_, 12, v_basis_1783_);
lean_ctor_set(v_reuseFailAlloc_1817_, 13, v_diseqs_1784_);
lean_ctor_set(v_reuseFailAlloc_1817_, 14, v_invSet_1786_);
lean_ctor_set(v_reuseFailAlloc_1817_, 15, v_powIdentityVarCount_1787_);
lean_ctor_set(v_reuseFailAlloc_1817_, 16, v_numEq0_x3f_1788_);
lean_ctor_set_uint8(v_reuseFailAlloc_1817_, sizeof(void*)*17, v_recheck_1785_);
lean_ctor_set_uint8(v_reuseFailAlloc_1817_, sizeof(void*)*17 + 1, v_numEq0Updated_1789_);
v___x_1816_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
return v___x_1816_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3_spec__5(lean_object* v_type_1822_, lean_object* v_u_1823_, lean_object* v_instDeclName_1824_, lean_object* v_declName_1825_, lean_object* v_expectedInst_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_){
_start:
{
lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; 
v___x_1839_ = lean_box(0);
lean_inc_n(v_u_1823_, 2);
v___x_1840_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1840_, 0, v_u_1823_);
lean_ctor_set(v___x_1840_, 1, v___x_1839_);
v___x_1841_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1841_, 0, v_u_1823_);
lean_ctor_set(v___x_1841_, 1, v___x_1840_);
v___x_1842_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1842_, 0, v_u_1823_);
lean_ctor_set(v___x_1842_, 1, v___x_1841_);
lean_inc_ref(v___x_1842_);
v___x_1843_ = l_Lean_mkConst(v_instDeclName_1824_, v___x_1842_);
lean_inc_ref_n(v_type_1822_, 3);
v___x_1844_ = l_Lean_mkApp3(v___x_1843_, v_type_1822_, v_type_1822_, v_type_1822_);
v___x_1845_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5(v___x_1844_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_);
if (lean_obj_tag(v___x_1845_) == 0)
{
lean_object* v_a_1846_; lean_object* v___x_1847_; 
v_a_1846_ = lean_ctor_get(v___x_1845_, 0);
lean_inc_n(v_a_1846_, 2);
lean_dec_ref_known(v___x_1845_, 1);
lean_inc(v_declName_1825_);
v___x_1847_ = l_Lean_Meta_Grind_Arith_CommRing_checkInst(v_declName_1825_, v_a_1846_, v_expectedInst_1826_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_);
if (lean_obj_tag(v___x_1847_) == 0)
{
lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; 
lean_dec_ref_known(v___x_1847_, 1);
v___x_1848_ = l_Lean_mkConst(v_declName_1825_, v___x_1842_);
lean_inc_ref_n(v_type_1822_, 2);
v___x_1849_ = l_Lean_mkApp4(v___x_1848_, v_type_1822_, v_type_1822_, v_type_1822_, v_a_1846_);
v___x_1850_ = l_Lean_Meta_Sym_canon(v___x_1849_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_);
if (lean_obj_tag(v___x_1850_) == 0)
{
lean_object* v_a_1851_; lean_object* v___x_1852_; 
v_a_1851_ = lean_ctor_get(v___x_1850_, 0);
lean_inc(v_a_1851_);
lean_dec_ref_known(v___x_1850_, 1);
v___x_1852_ = l_Lean_Meta_Sym_shareCommon(v_a_1851_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_);
return v___x_1852_;
}
else
{
return v___x_1850_;
}
}
else
{
lean_object* v_a_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1860_; 
lean_dec(v_a_1846_);
lean_dec_ref_known(v___x_1842_, 2);
lean_dec(v_declName_1825_);
lean_dec_ref(v_type_1822_);
v_a_1853_ = lean_ctor_get(v___x_1847_, 0);
v_isSharedCheck_1860_ = !lean_is_exclusive(v___x_1847_);
if (v_isSharedCheck_1860_ == 0)
{
v___x_1855_ = v___x_1847_;
v_isShared_1856_ = v_isSharedCheck_1860_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_a_1853_);
lean_dec(v___x_1847_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1860_;
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
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v_a_1853_);
v___x_1858_ = v_reuseFailAlloc_1859_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
return v___x_1858_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_1842_, 2);
lean_dec_ref(v_expectedInst_1826_);
lean_dec(v_declName_1825_);
lean_dec_ref(v_type_1822_);
return v___x_1845_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3_spec__5___boxed(lean_object** _args){
lean_object* v_type_1861_ = _args[0];
lean_object* v_u_1862_ = _args[1];
lean_object* v_instDeclName_1863_ = _args[2];
lean_object* v_declName_1864_ = _args[3];
lean_object* v_expectedInst_1865_ = _args[4];
lean_object* v___y_1866_ = _args[5];
lean_object* v___y_1867_ = _args[6];
lean_object* v___y_1868_ = _args[7];
lean_object* v___y_1869_ = _args[8];
lean_object* v___y_1870_ = _args[9];
lean_object* v___y_1871_ = _args[10];
lean_object* v___y_1872_ = _args[11];
lean_object* v___y_1873_ = _args[12];
lean_object* v___y_1874_ = _args[13];
lean_object* v___y_1875_ = _args[14];
lean_object* v___y_1876_ = _args[15];
lean_object* v___y_1877_ = _args[16];
_start:
{
lean_object* v_res_1878_; 
v_res_1878_ = l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3_spec__5(v_type_1861_, v_u_1862_, v_instDeclName_1863_, v_declName_1864_, v_expectedInst_1865_, v___y_1866_, v___y_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_);
lean_dec(v___y_1876_);
lean_dec_ref(v___y_1875_);
lean_dec(v___y_1874_);
lean_dec_ref(v___y_1873_);
lean_dec(v___y_1872_);
lean_dec_ref(v___y_1871_);
lean_dec(v___y_1870_);
lean_dec_ref(v___y_1869_);
lean_dec(v___y_1868_);
lean_dec(v___y_1867_);
lean_dec_ref(v___y_1866_);
return v_res_1878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3(lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_){
_start:
{
lean_object* v___x_1902_; 
v___x_1902_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_);
if (lean_obj_tag(v___x_1902_) == 0)
{
lean_object* v_a_1903_; lean_object* v___x_1905_; uint8_t v_isShared_1906_; uint8_t v_isSharedCheck_1946_; 
v_a_1903_ = lean_ctor_get(v___x_1902_, 0);
v_isSharedCheck_1946_ = !lean_is_exclusive(v___x_1902_);
if (v_isSharedCheck_1946_ == 0)
{
v___x_1905_ = v___x_1902_;
v_isShared_1906_ = v_isSharedCheck_1946_;
goto v_resetjp_1904_;
}
else
{
lean_inc(v_a_1903_);
lean_dec(v___x_1902_);
v___x_1905_ = lean_box(0);
v_isShared_1906_ = v_isSharedCheck_1946_;
goto v_resetjp_1904_;
}
v_resetjp_1904_:
{
lean_object* v_toRing_1907_; lean_object* v_mulFn_x3f_1908_; 
v_toRing_1907_ = lean_ctor_get(v_a_1903_, 0);
lean_inc_ref(v_toRing_1907_);
lean_dec(v_a_1903_);
v_mulFn_x3f_1908_ = lean_ctor_get(v_toRing_1907_, 7);
if (lean_obj_tag(v_mulFn_x3f_1908_) == 1)
{
lean_object* v_val_1909_; lean_object* v___x_1911_; 
lean_inc_ref(v_mulFn_x3f_1908_);
lean_dec_ref(v_toRing_1907_);
v_val_1909_ = lean_ctor_get(v_mulFn_x3f_1908_, 0);
lean_inc(v_val_1909_);
lean_dec_ref_known(v_mulFn_x3f_1908_, 1);
if (v_isShared_1906_ == 0)
{
lean_ctor_set(v___x_1905_, 0, v_val_1909_);
v___x_1911_ = v___x_1905_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v_val_1909_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
return v___x_1911_;
}
}
else
{
lean_object* v_type_1913_; lean_object* v_u_1914_; lean_object* v_semiringInst_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v_expectedInst_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; 
lean_del_object(v___x_1905_);
v_type_1913_ = lean_ctor_get(v_toRing_1907_, 1);
lean_inc_ref_n(v_type_1913_, 3);
v_u_1914_ = lean_ctor_get(v_toRing_1907_, 2);
lean_inc_n(v_u_1914_, 2);
v_semiringInst_1915_ = lean_ctor_get(v_toRing_1907_, 4);
lean_inc_ref(v_semiringInst_1915_);
lean_dec_ref(v_toRing_1907_);
v___x_1916_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__1));
v___x_1917_ = lean_box(0);
v___x_1918_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1918_, 0, v_u_1914_);
lean_ctor_set(v___x_1918_, 1, v___x_1917_);
lean_inc_ref(v___x_1918_);
v___x_1919_ = l_Lean_mkConst(v___x_1916_, v___x_1918_);
v___x_1920_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__3));
v___x_1921_ = l_Lean_mkConst(v___x_1920_, v___x_1918_);
v___x_1922_ = l_Lean_mkAppB(v___x_1921_, v_type_1913_, v_semiringInst_1915_);
v_expectedInst_1923_ = l_Lean_mkAppB(v___x_1919_, v_type_1913_, v___x_1922_);
v___x_1924_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___closed__4));
v___x_1925_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f___closed__20));
v___x_1926_ = l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3_spec__5(v_type_1913_, v_u_1914_, v___x_1924_, v___x_1925_, v_expectedInst_1923_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_);
if (lean_obj_tag(v___x_1926_) == 0)
{
lean_object* v_a_1927_; lean_object* v___f_1928_; lean_object* v___x_1929_; 
v_a_1927_ = lean_ctor_get(v___x_1926_, 0);
lean_inc_n(v_a_1927_, 2);
lean_dec_ref_known(v___x_1926_, 1);
v___f_1928_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___lam__0), 2, 1);
lean_closure_set(v___f_1928_, 0, v_a_1927_);
v___x_1929_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v___f_1928_, v___y_1890_, v___y_1891_);
if (lean_obj_tag(v___x_1929_) == 0)
{
lean_object* v___x_1931_; uint8_t v_isShared_1932_; uint8_t v_isSharedCheck_1936_; 
v_isSharedCheck_1936_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1936_ == 0)
{
lean_object* v_unused_1937_; 
v_unused_1937_ = lean_ctor_get(v___x_1929_, 0);
lean_dec(v_unused_1937_);
v___x_1931_ = v___x_1929_;
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
else
{
lean_dec(v___x_1929_);
v___x_1931_ = lean_box(0);
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
v_resetjp_1930_:
{
lean_object* v___x_1934_; 
if (v_isShared_1932_ == 0)
{
lean_ctor_set(v___x_1931_, 0, v_a_1927_);
v___x_1934_ = v___x_1931_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v_a_1927_);
v___x_1934_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
return v___x_1934_;
}
}
}
else
{
lean_object* v_a_1938_; lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1945_; 
lean_dec(v_a_1927_);
v_a_1938_ = lean_ctor_get(v___x_1929_, 0);
v_isSharedCheck_1945_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1945_ == 0)
{
v___x_1940_ = v___x_1929_;
v_isShared_1941_ = v_isSharedCheck_1945_;
goto v_resetjp_1939_;
}
else
{
lean_inc(v_a_1938_);
lean_dec(v___x_1929_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1945_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
lean_object* v___x_1943_; 
if (v_isShared_1941_ == 0)
{
v___x_1943_ = v___x_1940_;
goto v_reusejp_1942_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v_a_1938_);
v___x_1943_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1942_;
}
v_reusejp_1942_:
{
return v___x_1943_;
}
}
}
}
else
{
return v___x_1926_;
}
}
}
}
else
{
lean_object* v_a_1947_; lean_object* v___x_1949_; uint8_t v_isShared_1950_; uint8_t v_isSharedCheck_1954_; 
v_a_1947_ = lean_ctor_get(v___x_1902_, 0);
v_isSharedCheck_1954_ = !lean_is_exclusive(v___x_1902_);
if (v_isSharedCheck_1954_ == 0)
{
v___x_1949_ = v___x_1902_;
v_isShared_1950_ = v_isSharedCheck_1954_;
goto v_resetjp_1948_;
}
else
{
lean_inc(v_a_1947_);
lean_dec(v___x_1902_);
v___x_1949_ = lean_box(0);
v_isShared_1950_ = v_isSharedCheck_1954_;
goto v_resetjp_1948_;
}
v_resetjp_1948_:
{
lean_object* v___x_1952_; 
if (v_isShared_1950_ == 0)
{
v___x_1952_ = v___x_1949_;
goto v_reusejp_1951_;
}
else
{
lean_object* v_reuseFailAlloc_1953_; 
v_reuseFailAlloc_1953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1953_, 0, v_a_1947_);
v___x_1952_ = v_reuseFailAlloc_1953_;
goto v_reusejp_1951_;
}
v_reusejp_1951_:
{
return v___x_1952_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3___boxed(lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_){
_start:
{
lean_object* v_res_1967_; 
v_res_1967_ = l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3(v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
lean_dec(v___y_1963_);
lean_dec_ref(v___y_1962_);
lean_dec(v___y_1961_);
lean_dec_ref(v___y_1960_);
lean_dec(v___y_1959_);
lean_dec_ref(v___y_1958_);
lean_dec(v___y_1957_);
lean_dec(v___y_1956_);
lean_dec_ref(v___y_1955_);
return v_res_1967_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__3(void){
_start:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; 
v___x_1975_ = lean_unsigned_to_nat(1u);
v___x_1976_ = lean_nat_to_int(v___x_1975_);
return v___x_1976_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv(lean_object* v_e_2001_, lean_object* v_inst_2002_, lean_object* v_a_2003_, lean_object* v_a_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_, lean_object* v_a_2007_, lean_object* v_a_2008_, lean_object* v_a_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_, lean_object* v_a_2013_, lean_object* v_a_2014_){
_start:
{
lean_object* v___f_2019_; lean_object* v___x_2020_; 
lean_inc_ref(v_a_2003_);
v___f_2019_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___lam__0), 2, 1);
lean_closure_set(v___f_2019_, 0, v_a_2003_);
v___x_2020_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst(v_inst_2002_, v_a_2004_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2020_) == 0)
{
lean_object* v_a_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2279_; 
v_a_2021_ = lean_ctor_get(v___x_2020_, 0);
v_isSharedCheck_2279_ = !lean_is_exclusive(v___x_2020_);
if (v_isSharedCheck_2279_ == 0)
{
v___x_2023_ = v___x_2020_;
v_isShared_2024_ = v_isSharedCheck_2279_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_a_2021_);
lean_dec(v___x_2020_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2279_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
uint8_t v___x_2025_; 
v___x_2025_ = lean_unbox(v_a_2021_);
lean_dec(v_a_2021_);
if (v___x_2025_ == 0)
{
lean_object* v___x_2026_; lean_object* v___x_2028_; 
lean_dec_ref(v___f_2019_);
lean_dec_ref(v_a_2003_);
lean_dec_ref(v_e_2001_);
v___x_2026_ = lean_box(0);
if (v_isShared_2024_ == 0)
{
lean_ctor_set(v___x_2023_, 0, v___x_2026_);
v___x_2028_ = v___x_2023_;
goto v_reusejp_2027_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v___x_2026_);
v___x_2028_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2027_;
}
v_reusejp_2027_:
{
return v___x_2028_;
}
}
else
{
lean_object* v___x_2030_; 
lean_del_object(v___x_2023_);
v___x_2030_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_2004_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2030_) == 0)
{
lean_object* v_a_2031_; lean_object* v___x_2033_; uint8_t v_isShared_2034_; uint8_t v_isSharedCheck_2270_; 
v_a_2031_ = lean_ctor_get(v___x_2030_, 0);
v_isSharedCheck_2270_ = !lean_is_exclusive(v___x_2030_);
if (v_isSharedCheck_2270_ == 0)
{
v___x_2033_ = v___x_2030_;
v_isShared_2034_ = v_isSharedCheck_2270_;
goto v_resetjp_2032_;
}
else
{
lean_inc(v_a_2031_);
lean_dec(v___x_2030_);
v___x_2033_ = lean_box(0);
v_isShared_2034_ = v_isSharedCheck_2270_;
goto v_resetjp_2032_;
}
v_resetjp_2032_:
{
lean_object* v_fieldInst_x3f_2035_; 
v_fieldInst_x3f_2035_ = lean_ctor_get(v_a_2031_, 6);
lean_inc(v_fieldInst_x3f_2035_);
if (lean_obj_tag(v_fieldInst_x3f_2035_) == 1)
{
lean_object* v_toRing_2036_; lean_object* v_val_2037_; lean_object* v___y_2039_; lean_object* v___y_2040_; lean_object* v___y_2041_; lean_object* v___y_2042_; lean_object* v___y_2043_; lean_object* v___y_2044_; lean_object* v___y_2045_; lean_object* v___y_2046_; lean_object* v___y_2047_; lean_object* v___y_2048_; lean_object* v___x_2058_; 
lean_del_object(v___x_2033_);
v_toRing_2036_ = lean_ctor_get(v_a_2031_, 0);
lean_inc_ref(v_toRing_2036_);
lean_dec(v_a_2031_);
v_val_2037_ = lean_ctor_get(v_fieldInst_x3f_2035_, 0);
lean_inc(v_val_2037_);
lean_dec_ref_known(v_fieldInst_x3f_2035_, 1);
v___x_2058_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_2004_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2058_) == 0)
{
lean_object* v_a_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2257_; 
v_a_2059_ = lean_ctor_get(v___x_2058_, 0);
v_isSharedCheck_2257_ = !lean_is_exclusive(v___x_2058_);
if (v_isSharedCheck_2257_ == 0)
{
v___x_2061_ = v___x_2058_;
v_isShared_2062_ = v_isSharedCheck_2257_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_a_2059_);
lean_dec(v___x_2058_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2257_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
lean_object* v_invSet_2063_; uint8_t v___x_2064_; 
v_invSet_2063_ = lean_ctor_get(v_a_2059_, 14);
lean_inc_ref(v_invSet_2063_);
lean_dec(v_a_2059_);
v___x_2064_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1___redArg(v_invSet_2063_, v_a_2003_);
lean_dec_ref(v_invSet_2063_);
if (v___x_2064_ == 0)
{
lean_object* v___x_2065_; 
lean_del_object(v___x_2061_);
v___x_2065_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v___f_2019_, v_a_2004_, v_a_2005_);
if (lean_obj_tag(v___x_2065_) == 0)
{
lean_object* v___x_2066_; 
lean_dec_ref_known(v___x_2065_, 1);
lean_inc_ref(v_a_2003_);
v___x_2066_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f(v_a_2003_, v_a_2004_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2066_) == 0)
{
lean_object* v_a_2067_; 
v_a_2067_ = lean_ctor_get(v___x_2066_, 0);
lean_inc(v_a_2067_);
lean_dec_ref_known(v___x_2066_, 1);
if (lean_obj_tag(v_a_2067_) == 1)
{
lean_object* v_val_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; uint8_t v___x_2071_; 
v_val_2068_ = lean_ctor_get(v_a_2067_, 0);
lean_inc(v_val_2068_);
lean_dec_ref_known(v_a_2067_, 1);
v___x_2069_ = lean_unsigned_to_nat(0u);
v___x_2070_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4___closed__1);
v___x_2071_ = lean_int_dec_eq(v_val_2068_, v___x_2070_);
if (v___x_2071_ == 0)
{
lean_object* v___x_2072_; 
v___x_2072_ = l_Lean_Meta_Grind_Arith_CommRing_hasChar(v_a_2004_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2072_) == 0)
{
lean_object* v_a_2073_; uint8_t v___x_2074_; 
v_a_2073_ = lean_ctor_get(v___x_2072_, 0);
lean_inc(v_a_2073_);
lean_dec_ref_known(v___x_2072_, 1);
v___x_2074_ = lean_unbox(v_a_2073_);
lean_dec(v_a_2073_);
if (v___x_2074_ == 0)
{
lean_dec(v_val_2068_);
lean_dec_ref(v_e_2001_);
v___y_2039_ = v_a_2005_;
v___y_2040_ = v_a_2006_;
v___y_2041_ = v_a_2007_;
v___y_2042_ = v_a_2008_;
v___y_2043_ = v_a_2009_;
v___y_2044_ = v_a_2010_;
v___y_2045_ = v_a_2011_;
v___y_2046_ = v_a_2012_;
v___y_2047_ = v_a_2013_;
v___y_2048_ = v_a_2014_;
goto v___jp_2038_;
}
else
{
lean_object* v___x_2075_; 
v___x_2075_ = l_Lean_Meta_Grind_Arith_CommRing_getCharInst(v_a_2004_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2075_) == 0)
{
lean_object* v_a_2076_; lean_object* v_fst_2077_; lean_object* v_snd_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2211_; 
v_a_2076_ = lean_ctor_get(v___x_2075_, 0);
lean_inc(v_a_2076_);
lean_dec_ref_known(v___x_2075_, 1);
v_fst_2077_ = lean_ctor_get(v_a_2076_, 0);
v_snd_2078_ = lean_ctor_get(v_a_2076_, 1);
v_isSharedCheck_2211_ = !lean_is_exclusive(v_a_2076_);
if (v_isSharedCheck_2211_ == 0)
{
v___x_2080_ = v_a_2076_;
v_isShared_2081_ = v_isSharedCheck_2211_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_snd_2078_);
lean_inc(v_fst_2077_);
lean_dec(v_a_2076_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2211_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
uint8_t v___x_2082_; 
v___x_2082_ = lean_nat_dec_eq(v_snd_2078_, v___x_2069_);
if (v___x_2082_ == 0)
{
lean_object* v___x_2083_; lean_object* v___x_2084_; uint8_t v___x_2085_; 
lean_inc(v_snd_2078_);
v___x_2083_ = lean_nat_to_int(v_snd_2078_);
v___x_2084_ = lean_int_emod(v_val_2068_, v___x_2083_);
lean_dec(v___x_2083_);
v___x_2085_ = lean_int_dec_eq(v___x_2084_, v___x_2070_);
lean_dec(v___x_2084_);
if (v___x_2085_ == 0)
{
lean_object* v___x_2086_; 
v___x_2086_ = l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3(v_a_2004_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2086_) == 0)
{
lean_object* v_a_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; 
v_a_2087_ = lean_ctor_get(v___x_2086_, 0);
lean_inc(v_a_2087_);
lean_dec_ref_known(v___x_2086_, 1);
v___x_2088_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__3);
v___x_2089_ = l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4(v___x_2088_, v_a_2004_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2089_) == 0)
{
lean_object* v_a_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; 
v_a_2090_ = lean_ctor_get(v___x_2089_, 0);
lean_inc(v_a_2090_);
lean_dec_ref_known(v___x_2089_, 1);
v___x_2091_ = l_Lean_mkAppB(v_a_2087_, v_a_2003_, v_e_2001_);
v___x_2092_ = l_Lean_Meta_mkEq(v___x_2091_, v_a_2090_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2092_) == 0)
{
lean_object* v_a_2093_; lean_object* v_type_2094_; lean_object* v_u_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2099_; 
v_a_2093_ = lean_ctor_get(v___x_2092_, 0);
lean_inc(v_a_2093_);
lean_dec_ref_known(v___x_2092_, 1);
v_type_2094_ = lean_ctor_get(v_toRing_2036_, 1);
lean_inc_ref(v_type_2094_);
v_u_2095_ = lean_ctor_get(v_toRing_2036_, 2);
lean_inc(v_u_2095_);
lean_dec_ref(v_toRing_2036_);
v___x_2096_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__5));
v___x_2097_ = lean_box(0);
if (v_isShared_2081_ == 0)
{
lean_ctor_set_tag(v___x_2080_, 1);
lean_ctor_set(v___x_2080_, 1, v___x_2097_);
lean_ctor_set(v___x_2080_, 0, v_u_2095_);
v___x_2099_ = v___x_2080_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v_u_2095_);
lean_ctor_set(v_reuseFailAlloc_2107_, 1, v___x_2097_);
v___x_2099_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; 
v___x_2100_ = l_Lean_mkConst(v___x_2096_, v___x_2099_);
v___x_2101_ = l_Lean_mkNatLit(v_snd_2078_);
v___x_2102_ = l_Lean_mkIntLit(v_val_2068_);
lean_dec(v_val_2068_);
v___x_2103_ = l_Lean_eagerReflBoolTrue;
v___x_2104_ = l_Lean_mkApp6(v___x_2100_, v_type_2094_, v___x_2101_, v_val_2037_, v_fst_2077_, v___x_2102_, v___x_2103_);
v___x_2105_ = l_Lean_Meta_mkExpectedPropHint(v___x_2104_, v_a_2093_);
v___x_2106_ = l_Lean_Meta_Grind_pushNewFact(v___x_2105_, v___x_2069_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2106_) == 0)
{
lean_dec_ref_known(v___x_2106_, 1);
goto v___jp_2016_;
}
else
{
return v___x_2106_;
}
}
}
else
{
lean_object* v_a_2108_; lean_object* v___x_2110_; uint8_t v_isShared_2111_; uint8_t v_isSharedCheck_2115_; 
lean_del_object(v___x_2080_);
lean_dec(v_snd_2078_);
lean_dec(v_fst_2077_);
lean_dec(v_val_2068_);
lean_dec(v_val_2037_);
lean_dec_ref(v_toRing_2036_);
v_a_2108_ = lean_ctor_get(v___x_2092_, 0);
v_isSharedCheck_2115_ = !lean_is_exclusive(v___x_2092_);
if (v_isSharedCheck_2115_ == 0)
{
v___x_2110_ = v___x_2092_;
v_isShared_2111_ = v_isSharedCheck_2115_;
goto v_resetjp_2109_;
}
else
{
lean_inc(v_a_2108_);
lean_dec(v___x_2092_);
v___x_2110_ = lean_box(0);
v_isShared_2111_ = v_isSharedCheck_2115_;
goto v_resetjp_2109_;
}
v_resetjp_2109_:
{
lean_object* v___x_2113_; 
if (v_isShared_2111_ == 0)
{
v___x_2113_ = v___x_2110_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v_a_2108_);
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
else
{
lean_object* v_a_2116_; lean_object* v___x_2118_; uint8_t v_isShared_2119_; uint8_t v_isSharedCheck_2123_; 
lean_dec(v_a_2087_);
lean_del_object(v___x_2080_);
lean_dec(v_snd_2078_);
lean_dec(v_fst_2077_);
lean_dec(v_val_2068_);
lean_dec(v_val_2037_);
lean_dec_ref(v_toRing_2036_);
lean_dec_ref(v_a_2003_);
lean_dec_ref(v_e_2001_);
v_a_2116_ = lean_ctor_get(v___x_2089_, 0);
v_isSharedCheck_2123_ = !lean_is_exclusive(v___x_2089_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_2118_ = v___x_2089_;
v_isShared_2119_ = v_isSharedCheck_2123_;
goto v_resetjp_2117_;
}
else
{
lean_inc(v_a_2116_);
lean_dec(v___x_2089_);
v___x_2118_ = lean_box(0);
v_isShared_2119_ = v_isSharedCheck_2123_;
goto v_resetjp_2117_;
}
v_resetjp_2117_:
{
lean_object* v___x_2121_; 
if (v_isShared_2119_ == 0)
{
v___x_2121_ = v___x_2118_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2122_; 
v_reuseFailAlloc_2122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2122_, 0, v_a_2116_);
v___x_2121_ = v_reuseFailAlloc_2122_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
return v___x_2121_;
}
}
}
}
else
{
lean_object* v_a_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2131_; 
lean_del_object(v___x_2080_);
lean_dec(v_snd_2078_);
lean_dec(v_fst_2077_);
lean_dec(v_val_2068_);
lean_dec(v_val_2037_);
lean_dec_ref(v_toRing_2036_);
lean_dec_ref(v_a_2003_);
lean_dec_ref(v_e_2001_);
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
else
{
lean_object* v___x_2132_; 
lean_dec_ref(v_a_2003_);
v___x_2132_ = l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4(v___x_2070_, v_a_2004_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2132_) == 0)
{
lean_object* v_a_2133_; lean_object* v___x_2134_; 
v_a_2133_ = lean_ctor_get(v___x_2132_, 0);
lean_inc(v_a_2133_);
lean_dec_ref_known(v___x_2132_, 1);
v___x_2134_ = l_Lean_Meta_mkEq(v_e_2001_, v_a_2133_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2134_) == 0)
{
lean_object* v_a_2135_; lean_object* v_type_2136_; lean_object* v_u_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2141_; 
v_a_2135_ = lean_ctor_get(v___x_2134_, 0);
lean_inc(v_a_2135_);
lean_dec_ref_known(v___x_2134_, 1);
v_type_2136_ = lean_ctor_get(v_toRing_2036_, 1);
lean_inc_ref(v_type_2136_);
v_u_2137_ = lean_ctor_get(v_toRing_2036_, 2);
lean_inc(v_u_2137_);
lean_dec_ref(v_toRing_2036_);
v___x_2138_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__7));
v___x_2139_ = lean_box(0);
if (v_isShared_2081_ == 0)
{
lean_ctor_set_tag(v___x_2080_, 1);
lean_ctor_set(v___x_2080_, 1, v___x_2139_);
lean_ctor_set(v___x_2080_, 0, v_u_2137_);
v___x_2141_ = v___x_2080_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v_u_2137_);
lean_ctor_set(v_reuseFailAlloc_2149_, 1, v___x_2139_);
v___x_2141_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; 
v___x_2142_ = l_Lean_mkConst(v___x_2138_, v___x_2141_);
v___x_2143_ = l_Lean_mkNatLit(v_snd_2078_);
v___x_2144_ = l_Lean_mkIntLit(v_val_2068_);
lean_dec(v_val_2068_);
v___x_2145_ = l_Lean_eagerReflBoolTrue;
v___x_2146_ = l_Lean_mkApp6(v___x_2142_, v_type_2136_, v___x_2143_, v_val_2037_, v_fst_2077_, v___x_2144_, v___x_2145_);
v___x_2147_ = l_Lean_Meta_mkExpectedPropHint(v___x_2146_, v_a_2135_);
v___x_2148_ = l_Lean_Meta_Grind_pushNewFact(v___x_2147_, v___x_2069_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2148_) == 0)
{
lean_dec_ref_known(v___x_2148_, 1);
goto v___jp_2016_;
}
else
{
return v___x_2148_;
}
}
}
else
{
lean_object* v_a_2150_; lean_object* v___x_2152_; uint8_t v_isShared_2153_; uint8_t v_isSharedCheck_2157_; 
lean_del_object(v___x_2080_);
lean_dec(v_snd_2078_);
lean_dec(v_fst_2077_);
lean_dec(v_val_2068_);
lean_dec(v_val_2037_);
lean_dec_ref(v_toRing_2036_);
v_a_2150_ = lean_ctor_get(v___x_2134_, 0);
v_isSharedCheck_2157_ = !lean_is_exclusive(v___x_2134_);
if (v_isSharedCheck_2157_ == 0)
{
v___x_2152_ = v___x_2134_;
v_isShared_2153_ = v_isSharedCheck_2157_;
goto v_resetjp_2151_;
}
else
{
lean_inc(v_a_2150_);
lean_dec(v___x_2134_);
v___x_2152_ = lean_box(0);
v_isShared_2153_ = v_isSharedCheck_2157_;
goto v_resetjp_2151_;
}
v_resetjp_2151_:
{
lean_object* v___x_2155_; 
if (v_isShared_2153_ == 0)
{
v___x_2155_ = v___x_2152_;
goto v_reusejp_2154_;
}
else
{
lean_object* v_reuseFailAlloc_2156_; 
v_reuseFailAlloc_2156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2156_, 0, v_a_2150_);
v___x_2155_ = v_reuseFailAlloc_2156_;
goto v_reusejp_2154_;
}
v_reusejp_2154_:
{
return v___x_2155_;
}
}
}
}
else
{
lean_object* v_a_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2165_; 
lean_del_object(v___x_2080_);
lean_dec(v_snd_2078_);
lean_dec(v_fst_2077_);
lean_dec(v_val_2068_);
lean_dec(v_val_2037_);
lean_dec_ref(v_toRing_2036_);
lean_dec_ref(v_e_2001_);
v_a_2158_ = lean_ctor_get(v___x_2132_, 0);
v_isSharedCheck_2165_ = !lean_is_exclusive(v___x_2132_);
if (v_isSharedCheck_2165_ == 0)
{
v___x_2160_ = v___x_2132_;
v_isShared_2161_ = v_isSharedCheck_2165_;
goto v_resetjp_2159_;
}
else
{
lean_inc(v_a_2158_);
lean_dec(v___x_2132_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2165_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
lean_object* v___x_2163_; 
if (v_isShared_2161_ == 0)
{
v___x_2163_ = v___x_2160_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v_a_2158_);
v___x_2163_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
return v___x_2163_;
}
}
}
}
}
else
{
lean_object* v___x_2166_; 
lean_dec(v_snd_2078_);
v___x_2166_ = l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__3(v_a_2004_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2166_) == 0)
{
lean_object* v_a_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; 
v_a_2167_ = lean_ctor_get(v___x_2166_, 0);
lean_inc(v_a_2167_);
lean_dec_ref_known(v___x_2166_, 1);
v___x_2168_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__3);
v___x_2169_ = l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__4(v___x_2168_, v_a_2004_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2169_) == 0)
{
lean_object* v_a_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
v_a_2170_ = lean_ctor_get(v___x_2169_, 0);
lean_inc(v_a_2170_);
lean_dec_ref_known(v___x_2169_, 1);
v___x_2171_ = l_Lean_mkAppB(v_a_2167_, v_a_2003_, v_e_2001_);
v___x_2172_ = l_Lean_Meta_mkEq(v___x_2171_, v_a_2170_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2172_) == 0)
{
lean_object* v_a_2173_; lean_object* v_type_2174_; lean_object* v_u_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2179_; 
v_a_2173_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_a_2173_);
lean_dec_ref_known(v___x_2172_, 1);
v_type_2174_ = lean_ctor_get(v_toRing_2036_, 1);
lean_inc_ref(v_type_2174_);
v_u_2175_ = lean_ctor_get(v_toRing_2036_, 2);
lean_inc(v_u_2175_);
lean_dec_ref(v_toRing_2036_);
v___x_2176_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__9));
v___x_2177_ = lean_box(0);
if (v_isShared_2081_ == 0)
{
lean_ctor_set_tag(v___x_2080_, 1);
lean_ctor_set(v___x_2080_, 1, v___x_2177_);
lean_ctor_set(v___x_2080_, 0, v_u_2175_);
v___x_2179_ = v___x_2080_;
goto v_reusejp_2178_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v_u_2175_);
lean_ctor_set(v_reuseFailAlloc_2186_, 1, v___x_2177_);
v___x_2179_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2178_;
}
v_reusejp_2178_:
{
lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; 
v___x_2180_ = l_Lean_mkConst(v___x_2176_, v___x_2179_);
v___x_2181_ = l_Lean_mkIntLit(v_val_2068_);
lean_dec(v_val_2068_);
v___x_2182_ = l_Lean_eagerReflBoolTrue;
v___x_2183_ = l_Lean_mkApp5(v___x_2180_, v_type_2174_, v_val_2037_, v_fst_2077_, v___x_2181_, v___x_2182_);
v___x_2184_ = l_Lean_Meta_mkExpectedPropHint(v___x_2183_, v_a_2173_);
v___x_2185_ = l_Lean_Meta_Grind_pushNewFact(v___x_2184_, v___x_2069_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2185_) == 0)
{
lean_dec_ref_known(v___x_2185_, 1);
goto v___jp_2016_;
}
else
{
return v___x_2185_;
}
}
}
else
{
lean_object* v_a_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2194_; 
lean_del_object(v___x_2080_);
lean_dec(v_fst_2077_);
lean_dec(v_val_2068_);
lean_dec(v_val_2037_);
lean_dec_ref(v_toRing_2036_);
v_a_2187_ = lean_ctor_get(v___x_2172_, 0);
v_isSharedCheck_2194_ = !lean_is_exclusive(v___x_2172_);
if (v_isSharedCheck_2194_ == 0)
{
v___x_2189_ = v___x_2172_;
v_isShared_2190_ = v_isSharedCheck_2194_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_a_2187_);
lean_dec(v___x_2172_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2194_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
lean_object* v___x_2192_; 
if (v_isShared_2190_ == 0)
{
v___x_2192_ = v___x_2189_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v_a_2187_);
v___x_2192_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
return v___x_2192_;
}
}
}
}
else
{
lean_object* v_a_2195_; lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2202_; 
lean_dec(v_a_2167_);
lean_del_object(v___x_2080_);
lean_dec(v_fst_2077_);
lean_dec(v_val_2068_);
lean_dec(v_val_2037_);
lean_dec_ref(v_toRing_2036_);
lean_dec_ref(v_a_2003_);
lean_dec_ref(v_e_2001_);
v_a_2195_ = lean_ctor_get(v___x_2169_, 0);
v_isSharedCheck_2202_ = !lean_is_exclusive(v___x_2169_);
if (v_isSharedCheck_2202_ == 0)
{
v___x_2197_ = v___x_2169_;
v_isShared_2198_ = v_isSharedCheck_2202_;
goto v_resetjp_2196_;
}
else
{
lean_inc(v_a_2195_);
lean_dec(v___x_2169_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2202_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
lean_object* v___x_2200_; 
if (v_isShared_2198_ == 0)
{
v___x_2200_ = v___x_2197_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2201_; 
v_reuseFailAlloc_2201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2201_, 0, v_a_2195_);
v___x_2200_ = v_reuseFailAlloc_2201_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
return v___x_2200_;
}
}
}
}
else
{
lean_object* v_a_2203_; lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2210_; 
lean_del_object(v___x_2080_);
lean_dec(v_fst_2077_);
lean_dec(v_val_2068_);
lean_dec(v_val_2037_);
lean_dec_ref(v_toRing_2036_);
lean_dec_ref(v_a_2003_);
lean_dec_ref(v_e_2001_);
v_a_2203_ = lean_ctor_get(v___x_2166_, 0);
v_isSharedCheck_2210_ = !lean_is_exclusive(v___x_2166_);
if (v_isSharedCheck_2210_ == 0)
{
v___x_2205_ = v___x_2166_;
v_isShared_2206_ = v_isSharedCheck_2210_;
goto v_resetjp_2204_;
}
else
{
lean_inc(v_a_2203_);
lean_dec(v___x_2166_);
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
}
else
{
lean_object* v_a_2212_; lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2219_; 
lean_dec(v_val_2068_);
lean_dec(v_val_2037_);
lean_dec_ref(v_toRing_2036_);
lean_dec_ref(v_a_2003_);
lean_dec_ref(v_e_2001_);
v_a_2212_ = lean_ctor_get(v___x_2075_, 0);
v_isSharedCheck_2219_ = !lean_is_exclusive(v___x_2075_);
if (v_isSharedCheck_2219_ == 0)
{
v___x_2214_ = v___x_2075_;
v_isShared_2215_ = v_isSharedCheck_2219_;
goto v_resetjp_2213_;
}
else
{
lean_inc(v_a_2212_);
lean_dec(v___x_2075_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2219_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v___x_2217_; 
if (v_isShared_2215_ == 0)
{
v___x_2217_ = v___x_2214_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v_a_2212_);
v___x_2217_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
return v___x_2217_;
}
}
}
}
}
else
{
lean_object* v_a_2220_; lean_object* v___x_2222_; uint8_t v_isShared_2223_; uint8_t v_isSharedCheck_2227_; 
lean_dec(v_val_2068_);
lean_dec(v_val_2037_);
lean_dec_ref(v_toRing_2036_);
lean_dec_ref(v_a_2003_);
lean_dec_ref(v_e_2001_);
v_a_2220_ = lean_ctor_get(v___x_2072_, 0);
v_isSharedCheck_2227_ = !lean_is_exclusive(v___x_2072_);
if (v_isSharedCheck_2227_ == 0)
{
v___x_2222_ = v___x_2072_;
v_isShared_2223_ = v_isSharedCheck_2227_;
goto v_resetjp_2221_;
}
else
{
lean_inc(v_a_2220_);
lean_dec(v___x_2072_);
v___x_2222_ = lean_box(0);
v_isShared_2223_ = v_isSharedCheck_2227_;
goto v_resetjp_2221_;
}
v_resetjp_2221_:
{
lean_object* v___x_2225_; 
if (v_isShared_2223_ == 0)
{
v___x_2225_ = v___x_2222_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v_a_2220_);
v___x_2225_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
return v___x_2225_;
}
}
}
}
else
{
lean_object* v_type_2228_; lean_object* v_u_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; 
lean_dec(v_val_2068_);
v_type_2228_ = lean_ctor_get(v_toRing_2036_, 1);
lean_inc_ref(v_type_2228_);
v_u_2229_ = lean_ctor_get(v_toRing_2036_, 2);
lean_inc(v_u_2229_);
lean_dec_ref(v_toRing_2036_);
v___x_2230_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__11));
v___x_2231_ = lean_box(0);
v___x_2232_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2232_, 0, v_u_2229_);
lean_ctor_set(v___x_2232_, 1, v___x_2231_);
v___x_2233_ = l_Lean_mkConst(v___x_2230_, v___x_2232_);
v___x_2234_ = l_Lean_mkAppB(v___x_2233_, v_type_2228_, v_val_2037_);
v___x_2235_ = l_Lean_Meta_Grind_pushEqCore___redArg(v_e_2001_, v_a_2003_, v___x_2234_, v___x_2064_, v_a_2005_, v_a_2007_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_);
if (lean_obj_tag(v___x_2235_) == 0)
{
lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2243_; 
v_isSharedCheck_2243_ = !lean_is_exclusive(v___x_2235_);
if (v_isSharedCheck_2243_ == 0)
{
lean_object* v_unused_2244_; 
v_unused_2244_ = lean_ctor_get(v___x_2235_, 0);
lean_dec(v_unused_2244_);
v___x_2237_ = v___x_2235_;
v_isShared_2238_ = v_isSharedCheck_2243_;
goto v_resetjp_2236_;
}
else
{
lean_dec(v___x_2235_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2243_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
lean_object* v___x_2239_; lean_object* v___x_2241_; 
v___x_2239_ = lean_box(0);
if (v_isShared_2238_ == 0)
{
lean_ctor_set(v___x_2237_, 0, v___x_2239_);
v___x_2241_ = v___x_2237_;
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
}
else
{
return v___x_2235_;
}
}
}
else
{
lean_dec(v_a_2067_);
lean_dec_ref(v_e_2001_);
v___y_2039_ = v_a_2005_;
v___y_2040_ = v_a_2006_;
v___y_2041_ = v_a_2007_;
v___y_2042_ = v_a_2008_;
v___y_2043_ = v_a_2009_;
v___y_2044_ = v_a_2010_;
v___y_2045_ = v_a_2011_;
v___y_2046_ = v_a_2012_;
v___y_2047_ = v_a_2013_;
v___y_2048_ = v_a_2014_;
goto v___jp_2038_;
}
}
else
{
lean_object* v_a_2245_; lean_object* v___x_2247_; uint8_t v_isShared_2248_; uint8_t v_isSharedCheck_2252_; 
lean_dec(v_val_2037_);
lean_dec_ref(v_toRing_2036_);
lean_dec_ref(v_a_2003_);
lean_dec_ref(v_e_2001_);
v_a_2245_ = lean_ctor_get(v___x_2066_, 0);
v_isSharedCheck_2252_ = !lean_is_exclusive(v___x_2066_);
if (v_isSharedCheck_2252_ == 0)
{
v___x_2247_ = v___x_2066_;
v_isShared_2248_ = v_isSharedCheck_2252_;
goto v_resetjp_2246_;
}
else
{
lean_inc(v_a_2245_);
lean_dec(v___x_2066_);
v___x_2247_ = lean_box(0);
v_isShared_2248_ = v_isSharedCheck_2252_;
goto v_resetjp_2246_;
}
v_resetjp_2246_:
{
lean_object* v___x_2250_; 
if (v_isShared_2248_ == 0)
{
v___x_2250_ = v___x_2247_;
goto v_reusejp_2249_;
}
else
{
lean_object* v_reuseFailAlloc_2251_; 
v_reuseFailAlloc_2251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2251_, 0, v_a_2245_);
v___x_2250_ = v_reuseFailAlloc_2251_;
goto v_reusejp_2249_;
}
v_reusejp_2249_:
{
return v___x_2250_;
}
}
}
}
else
{
lean_dec(v_val_2037_);
lean_dec_ref(v_toRing_2036_);
lean_dec_ref(v_a_2003_);
lean_dec_ref(v_e_2001_);
return v___x_2065_;
}
}
else
{
lean_object* v___x_2253_; lean_object* v___x_2255_; 
lean_dec(v_val_2037_);
lean_dec_ref(v_toRing_2036_);
lean_dec_ref(v___f_2019_);
lean_dec_ref(v_a_2003_);
lean_dec_ref(v_e_2001_);
v___x_2253_ = lean_box(0);
if (v_isShared_2062_ == 0)
{
lean_ctor_set(v___x_2061_, 0, v___x_2253_);
v___x_2255_ = v___x_2061_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2256_; 
v_reuseFailAlloc_2256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2256_, 0, v___x_2253_);
v___x_2255_ = v_reuseFailAlloc_2256_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
return v___x_2255_;
}
}
}
}
else
{
lean_object* v_a_2258_; lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2265_; 
lean_dec(v_val_2037_);
lean_dec_ref(v_toRing_2036_);
lean_dec_ref(v___f_2019_);
lean_dec_ref(v_a_2003_);
lean_dec_ref(v_e_2001_);
v_a_2258_ = lean_ctor_get(v___x_2058_, 0);
v_isSharedCheck_2265_ = !lean_is_exclusive(v___x_2058_);
if (v_isSharedCheck_2265_ == 0)
{
v___x_2260_ = v___x_2058_;
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
else
{
lean_inc(v_a_2258_);
lean_dec(v___x_2058_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
lean_object* v___x_2263_; 
if (v_isShared_2261_ == 0)
{
v___x_2263_ = v___x_2260_;
goto v_reusejp_2262_;
}
else
{
lean_object* v_reuseFailAlloc_2264_; 
v_reuseFailAlloc_2264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2264_, 0, v_a_2258_);
v___x_2263_ = v_reuseFailAlloc_2264_;
goto v_reusejp_2262_;
}
v_reusejp_2262_:
{
return v___x_2263_;
}
}
}
v___jp_2038_:
{
lean_object* v_type_2049_; lean_object* v_u_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
v_type_2049_ = lean_ctor_get(v_toRing_2036_, 1);
lean_inc_ref(v_type_2049_);
v_u_2050_ = lean_ctor_get(v_toRing_2036_, 2);
lean_inc(v_u_2050_);
lean_dec_ref(v_toRing_2036_);
v___x_2051_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___closed__2));
v___x_2052_ = lean_box(0);
v___x_2053_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2053_, 0, v_u_2050_);
lean_ctor_set(v___x_2053_, 1, v___x_2052_);
v___x_2054_ = l_Lean_mkConst(v___x_2051_, v___x_2053_);
v___x_2055_ = l_Lean_mkApp3(v___x_2054_, v_type_2049_, v_val_2037_, v_a_2003_);
v___x_2056_ = lean_unsigned_to_nat(0u);
v___x_2057_ = l_Lean_Meta_Grind_pushNewFact(v___x_2055_, v___x_2056_, v___y_2039_, v___y_2040_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_);
return v___x_2057_;
}
}
else
{
lean_object* v___x_2266_; lean_object* v___x_2268_; 
lean_dec(v_fieldInst_x3f_2035_);
lean_dec(v_a_2031_);
lean_dec_ref(v___f_2019_);
lean_dec_ref(v_a_2003_);
lean_dec_ref(v_e_2001_);
v___x_2266_ = lean_box(0);
if (v_isShared_2034_ == 0)
{
lean_ctor_set(v___x_2033_, 0, v___x_2266_);
v___x_2268_ = v___x_2033_;
goto v_reusejp_2267_;
}
else
{
lean_object* v_reuseFailAlloc_2269_; 
v_reuseFailAlloc_2269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2269_, 0, v___x_2266_);
v___x_2268_ = v_reuseFailAlloc_2269_;
goto v_reusejp_2267_;
}
v_reusejp_2267_:
{
return v___x_2268_;
}
}
}
}
else
{
lean_object* v_a_2271_; lean_object* v___x_2273_; uint8_t v_isShared_2274_; uint8_t v_isSharedCheck_2278_; 
lean_dec_ref(v___f_2019_);
lean_dec_ref(v_a_2003_);
lean_dec_ref(v_e_2001_);
v_a_2271_ = lean_ctor_get(v___x_2030_, 0);
v_isSharedCheck_2278_ = !lean_is_exclusive(v___x_2030_);
if (v_isSharedCheck_2278_ == 0)
{
v___x_2273_ = v___x_2030_;
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
else
{
lean_inc(v_a_2271_);
lean_dec(v___x_2030_);
v___x_2273_ = lean_box(0);
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
v_resetjp_2272_:
{
lean_object* v___x_2276_; 
if (v_isShared_2274_ == 0)
{
v___x_2276_ = v___x_2273_;
goto v_reusejp_2275_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v_a_2271_);
v___x_2276_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2275_;
}
v_reusejp_2275_:
{
return v___x_2276_;
}
}
}
}
}
}
else
{
lean_object* v_a_2280_; lean_object* v___x_2282_; uint8_t v_isShared_2283_; uint8_t v_isSharedCheck_2287_; 
lean_dec_ref(v___f_2019_);
lean_dec_ref(v_a_2003_);
lean_dec_ref(v_e_2001_);
v_a_2280_ = lean_ctor_get(v___x_2020_, 0);
v_isSharedCheck_2287_ = !lean_is_exclusive(v___x_2020_);
if (v_isSharedCheck_2287_ == 0)
{
v___x_2282_ = v___x_2020_;
v_isShared_2283_ = v_isSharedCheck_2287_;
goto v_resetjp_2281_;
}
else
{
lean_inc(v_a_2280_);
lean_dec(v___x_2020_);
v___x_2282_ = lean_box(0);
v_isShared_2283_ = v_isSharedCheck_2287_;
goto v_resetjp_2281_;
}
v_resetjp_2281_:
{
lean_object* v___x_2285_; 
if (v_isShared_2283_ == 0)
{
v___x_2285_ = v___x_2282_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v_a_2280_);
v___x_2285_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
return v___x_2285_;
}
}
}
v___jp_2016_:
{
lean_object* v___x_2017_; lean_object* v___x_2018_; 
v___x_2017_ = lean_box(0);
v___x_2018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2018_, 0, v___x_2017_);
return v___x_2018_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv___boxed(lean_object* v_e_2288_, lean_object* v_inst_2289_, lean_object* v_a_2290_, lean_object* v_a_2291_, lean_object* v_a_2292_, lean_object* v_a_2293_, lean_object* v_a_2294_, lean_object* v_a_2295_, lean_object* v_a_2296_, lean_object* v_a_2297_, lean_object* v_a_2298_, lean_object* v_a_2299_, lean_object* v_a_2300_, lean_object* v_a_2301_, lean_object* v_a_2302_){
_start:
{
lean_object* v_res_2303_; 
v_res_2303_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv(v_e_2288_, v_inst_2289_, v_a_2290_, v_a_2291_, v_a_2292_, v_a_2293_, v_a_2294_, v_a_2295_, v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec(v_a_2301_);
lean_dec_ref(v_a_2300_);
lean_dec(v_a_2299_);
lean_dec_ref(v_a_2298_);
lean_dec(v_a_2297_);
lean_dec_ref(v_a_2296_);
lean_dec(v_a_2295_);
lean_dec_ref(v_a_2294_);
lean_dec(v_a_2293_);
lean_dec(v_a_2292_);
lean_dec_ref(v_a_2291_);
lean_dec_ref(v_inst_2289_);
return v_res_2303_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0(lean_object* v_00_u03b2_2304_, lean_object* v_x_2305_, lean_object* v_x_2306_, lean_object* v_x_2307_){
_start:
{
lean_object* v___x_2308_; 
v___x_2308_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0___redArg(v_x_2305_, v_x_2306_, v_x_2307_);
return v___x_2308_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1(lean_object* v_00_u03b2_2309_, lean_object* v_x_2310_, lean_object* v_x_2311_){
_start:
{
uint8_t v___x_2312_; 
v___x_2312_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1___redArg(v_x_2310_, v_x_2311_);
return v___x_2312_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1___boxed(lean_object* v_00_u03b2_2313_, lean_object* v_x_2314_, lean_object* v_x_2315_){
_start:
{
uint8_t v_res_2316_; lean_object* v_r_2317_; 
v_res_2316_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1(v_00_u03b2_2313_, v_x_2314_, v_x_2315_);
lean_dec_ref(v_x_2315_);
lean_dec_ref(v_x_2314_);
v_r_2317_ = lean_box(v_res_2316_);
return v_r_2317_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0(lean_object* v_00_u03b2_2318_, lean_object* v_x_2319_, size_t v_x_2320_, size_t v_x_2321_, lean_object* v_x_2322_, lean_object* v_x_2323_){
_start:
{
lean_object* v___x_2324_; 
v___x_2324_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg(v_x_2319_, v_x_2320_, v_x_2321_, v_x_2322_, v_x_2323_);
return v___x_2324_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2325_, lean_object* v_x_2326_, lean_object* v_x_2327_, lean_object* v_x_2328_, lean_object* v_x_2329_, lean_object* v_x_2330_){
_start:
{
size_t v_x_82475__boxed_2331_; size_t v_x_82476__boxed_2332_; lean_object* v_res_2333_; 
v_x_82475__boxed_2331_ = lean_unbox_usize(v_x_2327_);
lean_dec(v_x_2327_);
v_x_82476__boxed_2332_ = lean_unbox_usize(v_x_2328_);
lean_dec(v_x_2328_);
v_res_2333_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0(v_00_u03b2_2325_, v_x_2326_, v_x_82475__boxed_2331_, v_x_82476__boxed_2332_, v_x_2329_, v_x_2330_);
return v_res_2333_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2(lean_object* v_00_u03b2_2334_, lean_object* v_x_2335_, size_t v_x_2336_, lean_object* v_x_2337_){
_start:
{
uint8_t v___x_2338_; 
v___x_2338_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2___redArg(v_x_2335_, v_x_2336_, v_x_2337_);
return v___x_2338_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2339_, lean_object* v_x_2340_, lean_object* v_x_2341_, lean_object* v_x_2342_){
_start:
{
size_t v_x_82492__boxed_2343_; uint8_t v_res_2344_; lean_object* v_r_2345_; 
v_x_82492__boxed_2343_ = lean_unbox_usize(v_x_2341_);
lean_dec(v_x_2341_);
v_res_2344_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2(v_00_u03b2_2339_, v_x_2340_, v_x_82492__boxed_2343_, v_x_2342_);
lean_dec_ref(v_x_2342_);
lean_dec_ref(v_x_2340_);
v_r_2345_ = lean_box(v_res_2344_);
return v_r_2345_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_2346_, lean_object* v_n_2347_, lean_object* v_k_2348_, lean_object* v_v_2349_){
_start:
{
lean_object* v___x_2350_; 
v___x_2350_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2___redArg(v_n_2347_, v_k_2348_, v_v_2349_);
return v___x_2350_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_2351_, size_t v_depth_2352_, lean_object* v_keys_2353_, lean_object* v_vals_2354_, lean_object* v_heq_2355_, lean_object* v_i_2356_, lean_object* v_entries_2357_){
_start:
{
lean_object* v___x_2358_; 
v___x_2358_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__3___redArg(v_depth_2352_, v_keys_2353_, v_vals_2354_, v_i_2356_, v_entries_2357_);
return v___x_2358_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_2359_, lean_object* v_depth_2360_, lean_object* v_keys_2361_, lean_object* v_vals_2362_, lean_object* v_heq_2363_, lean_object* v_i_2364_, lean_object* v_entries_2365_){
_start:
{
size_t v_depth_boxed_2366_; lean_object* v_res_2367_; 
v_depth_boxed_2366_ = lean_unbox_usize(v_depth_2360_);
lean_dec(v_depth_2360_);
v_res_2367_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__3(v_00_u03b2_2359_, v_depth_boxed_2366_, v_keys_2361_, v_vals_2362_, v_heq_2363_, v_i_2364_, v_entries_2365_);
lean_dec_ref(v_vals_2362_);
lean_dec_ref(v_keys_2361_);
return v_res_2367_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__6(lean_object* v_00_u03b2_2368_, lean_object* v_keys_2369_, lean_object* v_vals_2370_, lean_object* v_heq_2371_, lean_object* v_i_2372_, lean_object* v_k_2373_){
_start:
{
uint8_t v___x_2374_; 
v___x_2374_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__6___redArg(v_keys_2369_, v_i_2372_, v_k_2373_);
return v___x_2374_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__6___boxed(lean_object* v_00_u03b2_2375_, lean_object* v_keys_2376_, lean_object* v_vals_2377_, lean_object* v_heq_2378_, lean_object* v_i_2379_, lean_object* v_k_2380_){
_start:
{
uint8_t v_res_2381_; lean_object* v_r_2382_; 
v_res_2381_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__1_spec__2_spec__6(v_00_u03b2_2375_, v_keys_2376_, v_vals_2377_, v_heq_2378_, v_i_2379_, v_k_2380_);
lean_dec_ref(v_k_2380_);
lean_dec_ref(v_vals_2377_);
lean_dec_ref(v_keys_2376_);
v_r_2382_ = lean_box(v_res_2381_);
return v_r_2382_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2_spec__6(lean_object* v_00_u03b2_2383_, lean_object* v_x_2384_, lean_object* v_x_2385_, lean_object* v_x_2386_, lean_object* v_x_2387_){
_start:
{
lean_object* v___x_2388_; 
v___x_2388_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0_spec__2_spec__6___redArg(v_x_2384_, v_x_2385_, v_x_2386_, v_x_2387_);
return v___x_2388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars___lam__0(lean_object* v_size_2389_, lean_object* v_s_2390_){
_start:
{
lean_object* v_toRing_2391_; lean_object* v_invFn_x3f_2392_; lean_object* v_semiringId_x3f_2393_; lean_object* v_commSemiringInst_2394_; lean_object* v_commRingInst_2395_; lean_object* v_noZeroDivInst_x3f_2396_; lean_object* v_fieldInst_x3f_2397_; lean_object* v_powIdentityInst_x3f_2398_; lean_object* v_denoteEntries_2399_; lean_object* v_nextId_2400_; lean_object* v_steps_2401_; lean_object* v_queue_2402_; lean_object* v_basis_2403_; lean_object* v_diseqs_2404_; uint8_t v_recheck_2405_; lean_object* v_invSet_2406_; lean_object* v_numEq0_x3f_2407_; uint8_t v_numEq0Updated_2408_; lean_object* v___x_2410_; uint8_t v_isShared_2411_; uint8_t v_isSharedCheck_2415_; 
v_toRing_2391_ = lean_ctor_get(v_s_2390_, 0);
v_invFn_x3f_2392_ = lean_ctor_get(v_s_2390_, 1);
v_semiringId_x3f_2393_ = lean_ctor_get(v_s_2390_, 2);
v_commSemiringInst_2394_ = lean_ctor_get(v_s_2390_, 3);
v_commRingInst_2395_ = lean_ctor_get(v_s_2390_, 4);
v_noZeroDivInst_x3f_2396_ = lean_ctor_get(v_s_2390_, 5);
v_fieldInst_x3f_2397_ = lean_ctor_get(v_s_2390_, 6);
v_powIdentityInst_x3f_2398_ = lean_ctor_get(v_s_2390_, 7);
v_denoteEntries_2399_ = lean_ctor_get(v_s_2390_, 8);
v_nextId_2400_ = lean_ctor_get(v_s_2390_, 9);
v_steps_2401_ = lean_ctor_get(v_s_2390_, 10);
v_queue_2402_ = lean_ctor_get(v_s_2390_, 11);
v_basis_2403_ = lean_ctor_get(v_s_2390_, 12);
v_diseqs_2404_ = lean_ctor_get(v_s_2390_, 13);
v_recheck_2405_ = lean_ctor_get_uint8(v_s_2390_, sizeof(void*)*17);
v_invSet_2406_ = lean_ctor_get(v_s_2390_, 14);
v_numEq0_x3f_2407_ = lean_ctor_get(v_s_2390_, 16);
v_numEq0Updated_2408_ = lean_ctor_get_uint8(v_s_2390_, sizeof(void*)*17 + 1);
v_isSharedCheck_2415_ = !lean_is_exclusive(v_s_2390_);
if (v_isSharedCheck_2415_ == 0)
{
lean_object* v_unused_2416_; 
v_unused_2416_ = lean_ctor_get(v_s_2390_, 15);
lean_dec(v_unused_2416_);
v___x_2410_ = v_s_2390_;
v_isShared_2411_ = v_isSharedCheck_2415_;
goto v_resetjp_2409_;
}
else
{
lean_inc(v_numEq0_x3f_2407_);
lean_inc(v_invSet_2406_);
lean_inc(v_diseqs_2404_);
lean_inc(v_basis_2403_);
lean_inc(v_queue_2402_);
lean_inc(v_steps_2401_);
lean_inc(v_nextId_2400_);
lean_inc(v_denoteEntries_2399_);
lean_inc(v_powIdentityInst_x3f_2398_);
lean_inc(v_fieldInst_x3f_2397_);
lean_inc(v_noZeroDivInst_x3f_2396_);
lean_inc(v_commRingInst_2395_);
lean_inc(v_commSemiringInst_2394_);
lean_inc(v_semiringId_x3f_2393_);
lean_inc(v_invFn_x3f_2392_);
lean_inc(v_toRing_2391_);
lean_dec(v_s_2390_);
v___x_2410_ = lean_box(0);
v_isShared_2411_ = v_isSharedCheck_2415_;
goto v_resetjp_2409_;
}
v_resetjp_2409_:
{
lean_object* v___x_2413_; 
if (v_isShared_2411_ == 0)
{
lean_ctor_set(v___x_2410_, 15, v_size_2389_);
v___x_2413_ = v___x_2410_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2414_; 
v_reuseFailAlloc_2414_ = lean_alloc_ctor(0, 17, 2);
lean_ctor_set(v_reuseFailAlloc_2414_, 0, v_toRing_2391_);
lean_ctor_set(v_reuseFailAlloc_2414_, 1, v_invFn_x3f_2392_);
lean_ctor_set(v_reuseFailAlloc_2414_, 2, v_semiringId_x3f_2393_);
lean_ctor_set(v_reuseFailAlloc_2414_, 3, v_commSemiringInst_2394_);
lean_ctor_set(v_reuseFailAlloc_2414_, 4, v_commRingInst_2395_);
lean_ctor_set(v_reuseFailAlloc_2414_, 5, v_noZeroDivInst_x3f_2396_);
lean_ctor_set(v_reuseFailAlloc_2414_, 6, v_fieldInst_x3f_2397_);
lean_ctor_set(v_reuseFailAlloc_2414_, 7, v_powIdentityInst_x3f_2398_);
lean_ctor_set(v_reuseFailAlloc_2414_, 8, v_denoteEntries_2399_);
lean_ctor_set(v_reuseFailAlloc_2414_, 9, v_nextId_2400_);
lean_ctor_set(v_reuseFailAlloc_2414_, 10, v_steps_2401_);
lean_ctor_set(v_reuseFailAlloc_2414_, 11, v_queue_2402_);
lean_ctor_set(v_reuseFailAlloc_2414_, 12, v_basis_2403_);
lean_ctor_set(v_reuseFailAlloc_2414_, 13, v_diseqs_2404_);
lean_ctor_set(v_reuseFailAlloc_2414_, 14, v_invSet_2406_);
lean_ctor_set(v_reuseFailAlloc_2414_, 15, v_size_2389_);
lean_ctor_set(v_reuseFailAlloc_2414_, 16, v_numEq0_x3f_2407_);
lean_ctor_set_uint8(v_reuseFailAlloc_2414_, sizeof(void*)*17, v_recheck_2405_);
lean_ctor_set_uint8(v_reuseFailAlloc_2414_, sizeof(void*)*17 + 1, v_numEq0Updated_2408_);
v___x_2413_ = v_reuseFailAlloc_2414_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
return v___x_2413_;
}
}
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2417_; double v___x_2418_; 
v___x_2417_ = lean_unsigned_to_nat(0u);
v___x_2418_ = lean_float_of_nat(v___x_2417_);
return v___x_2418_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg(lean_object* v_cls_2422_, lean_object* v_msg_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_){
_start:
{
lean_object* v_ref_2429_; lean_object* v___x_2430_; lean_object* v_a_2431_; lean_object* v___x_2433_; uint8_t v_isShared_2434_; uint8_t v_isSharedCheck_2475_; 
v_ref_2429_ = lean_ctor_get(v___y_2426_, 2);
v___x_2430_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8_spec__9(v_msg_2423_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_);
v_a_2431_ = lean_ctor_get(v___x_2430_, 0);
v_isSharedCheck_2475_ = !lean_is_exclusive(v___x_2430_);
if (v_isSharedCheck_2475_ == 0)
{
v___x_2433_ = v___x_2430_;
v_isShared_2434_ = v_isSharedCheck_2475_;
goto v_resetjp_2432_;
}
else
{
lean_inc(v_a_2431_);
lean_dec(v___x_2430_);
v___x_2433_ = lean_box(0);
v_isShared_2434_ = v_isSharedCheck_2475_;
goto v_resetjp_2432_;
}
v_resetjp_2432_:
{
lean_object* v___x_2435_; lean_object* v_traceState_2436_; lean_object* v_env_2437_; lean_object* v_nextMacroScope_2438_; lean_object* v_ngen_2439_; lean_object* v_auxDeclNGen_2440_; lean_object* v_cache_2441_; lean_object* v_messages_2442_; lean_object* v_infoState_2443_; lean_object* v_snapshotTasks_2444_; lean_object* v___x_2446_; uint8_t v_isShared_2447_; uint8_t v_isSharedCheck_2474_; 
v___x_2435_ = lean_st_ref_take(v___y_2427_);
v_traceState_2436_ = lean_ctor_get(v___x_2435_, 4);
v_env_2437_ = lean_ctor_get(v___x_2435_, 0);
v_nextMacroScope_2438_ = lean_ctor_get(v___x_2435_, 1);
v_ngen_2439_ = lean_ctor_get(v___x_2435_, 2);
v_auxDeclNGen_2440_ = lean_ctor_get(v___x_2435_, 3);
v_cache_2441_ = lean_ctor_get(v___x_2435_, 5);
v_messages_2442_ = lean_ctor_get(v___x_2435_, 6);
v_infoState_2443_ = lean_ctor_get(v___x_2435_, 7);
v_snapshotTasks_2444_ = lean_ctor_get(v___x_2435_, 8);
v_isSharedCheck_2474_ = !lean_is_exclusive(v___x_2435_);
if (v_isSharedCheck_2474_ == 0)
{
v___x_2446_ = v___x_2435_;
v_isShared_2447_ = v_isSharedCheck_2474_;
goto v_resetjp_2445_;
}
else
{
lean_inc(v_snapshotTasks_2444_);
lean_inc(v_infoState_2443_);
lean_inc(v_messages_2442_);
lean_inc(v_cache_2441_);
lean_inc(v_traceState_2436_);
lean_inc(v_auxDeclNGen_2440_);
lean_inc(v_ngen_2439_);
lean_inc(v_nextMacroScope_2438_);
lean_inc(v_env_2437_);
lean_dec(v___x_2435_);
v___x_2446_ = lean_box(0);
v_isShared_2447_ = v_isSharedCheck_2474_;
goto v_resetjp_2445_;
}
v_resetjp_2445_:
{
uint64_t v_tid_2448_; lean_object* v_traces_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2473_; 
v_tid_2448_ = lean_ctor_get_uint64(v_traceState_2436_, sizeof(void*)*1);
v_traces_2449_ = lean_ctor_get(v_traceState_2436_, 0);
v_isSharedCheck_2473_ = !lean_is_exclusive(v_traceState_2436_);
if (v_isSharedCheck_2473_ == 0)
{
v___x_2451_ = v_traceState_2436_;
v_isShared_2452_ = v_isSharedCheck_2473_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_traces_2449_);
lean_dec(v_traceState_2436_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2473_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
lean_object* v___x_2453_; lean_object* v___x_2454_; double v___x_2455_; uint8_t v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2464_; 
v___x_2453_ = lean_box(0);
v___x_2454_ = lean_box(0);
v___x_2455_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0);
v___x_2456_ = 0;
v___x_2457_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__1));
v___x_2458_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2458_, 0, v_cls_2422_);
lean_ctor_set(v___x_2458_, 1, v___x_2454_);
lean_ctor_set(v___x_2458_, 2, v___x_2457_);
lean_ctor_set_float(v___x_2458_, sizeof(void*)*3, v___x_2455_);
lean_ctor_set_float(v___x_2458_, sizeof(void*)*3 + 8, v___x_2455_);
lean_ctor_set_uint8(v___x_2458_, sizeof(void*)*3 + 16, v___x_2456_);
v___x_2459_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__2));
v___x_2460_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2460_, 0, v___x_2458_);
lean_ctor_set(v___x_2460_, 1, v_a_2431_);
lean_ctor_set(v___x_2460_, 2, v___x_2459_);
lean_inc(v_ref_2429_);
v___x_2461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2461_, 0, v_ref_2429_);
lean_ctor_set(v___x_2461_, 1, v___x_2460_);
v___x_2462_ = l_Lean_PersistentArray_push___redArg(v_traces_2449_, v___x_2461_);
if (v_isShared_2452_ == 0)
{
lean_ctor_set(v___x_2451_, 0, v___x_2462_);
v___x_2464_ = v___x_2451_;
goto v_reusejp_2463_;
}
else
{
lean_object* v_reuseFailAlloc_2472_; 
v_reuseFailAlloc_2472_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2472_, 0, v___x_2462_);
lean_ctor_set_uint64(v_reuseFailAlloc_2472_, sizeof(void*)*1, v_tid_2448_);
v___x_2464_ = v_reuseFailAlloc_2472_;
goto v_reusejp_2463_;
}
v_reusejp_2463_:
{
lean_object* v___x_2466_; 
if (v_isShared_2447_ == 0)
{
lean_ctor_set(v___x_2446_, 4, v___x_2464_);
v___x_2466_ = v___x_2446_;
goto v_reusejp_2465_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v_env_2437_);
lean_ctor_set(v_reuseFailAlloc_2471_, 1, v_nextMacroScope_2438_);
lean_ctor_set(v_reuseFailAlloc_2471_, 2, v_ngen_2439_);
lean_ctor_set(v_reuseFailAlloc_2471_, 3, v_auxDeclNGen_2440_);
lean_ctor_set(v_reuseFailAlloc_2471_, 4, v___x_2464_);
lean_ctor_set(v_reuseFailAlloc_2471_, 5, v_cache_2441_);
lean_ctor_set(v_reuseFailAlloc_2471_, 6, v_messages_2442_);
lean_ctor_set(v_reuseFailAlloc_2471_, 7, v_infoState_2443_);
lean_ctor_set(v_reuseFailAlloc_2471_, 8, v_snapshotTasks_2444_);
v___x_2466_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2465_;
}
v_reusejp_2465_:
{
lean_object* v___x_2467_; lean_object* v___x_2469_; 
v___x_2467_ = lean_st_ref_put(v___y_2427_, v___x_2466_);
if (v_isShared_2434_ == 0)
{
lean_ctor_set(v___x_2433_, 0, v___x_2453_);
v___x_2469_ = v___x_2433_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v___x_2453_);
v___x_2469_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
return v___x_2469_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___boxed(lean_object* v_cls_2476_, lean_object* v_msg_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_){
_start:
{
lean_object* v_res_2483_; 
v_res_2483_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg(v_cls_2476_, v_msg_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_);
lean_dec(v___y_2481_);
lean_dec_ref(v___y_2480_);
lean_dec(v___y_2479_);
lean_dec_ref(v___y_2478_);
return v_res_2483_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__8(void){
_start:
{
lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; 
v___x_2499_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__5));
v___x_2500_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__7));
v___x_2501_ = l_Lean_Name_append(v___x_2500_, v___x_2499_);
return v___x_2501_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__10(void){
_start:
{
lean_object* v___x_2503_; lean_object* v___x_2504_; 
v___x_2503_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__9));
v___x_2504_ = l_Lean_stringToMessageData(v___x_2503_);
return v___x_2504_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__12(void){
_start:
{
lean_object* v___x_2506_; lean_object* v___x_2507_; 
v___x_2506_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__11));
v___x_2507_ = l_Lean_stringToMessageData(v___x_2506_);
return v___x_2507_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg(lean_object* v___x_2508_, lean_object* v_snd_2509_, lean_object* v_fst_2510_, lean_object* v_fst_2511_, lean_object* v___x_2512_, lean_object* v_range_2513_, lean_object* v_b_2514_, lean_object* v_i_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_){
_start:
{
lean_object* v_stop_2528_; lean_object* v_step_2529_; uint8_t v___x_2530_; 
v_stop_2528_ = lean_ctor_get(v_range_2513_, 1);
v_step_2529_ = lean_ctor_get(v_range_2513_, 2);
v___x_2530_ = lean_nat_dec_lt(v_i_2515_, v_stop_2528_);
if (v___x_2530_ == 0)
{
lean_object* v___x_2531_; 
lean_dec(v_i_2515_);
lean_dec_ref(v_fst_2511_);
lean_dec_ref(v_fst_2510_);
lean_dec(v_snd_2509_);
lean_dec_ref(v___x_2508_);
v___x_2531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2531_, 0, v_b_2514_);
return v___x_2531_;
}
else
{
lean_object* v_size_2532_; lean_object* v___x_2533_; lean_object* v___y_2535_; lean_object* v___y_2536_; lean_object* v___y_2537_; lean_object* v___y_2538_; lean_object* v___y_2539_; lean_object* v___y_2540_; lean_object* v___y_2541_; lean_object* v___y_2542_; lean_object* v___y_2543_; lean_object* v___y_2544_; lean_object* v___y_2545_; lean_object* v___y_2559_; lean_object* v___x_2585_; uint8_t v___x_2586_; 
v_size_2532_ = lean_ctor_get(v___x_2512_, 2);
v___x_2533_ = lean_box(0);
v___x_2585_ = l_Lean_instInhabitedExpr;
v___x_2586_ = lean_nat_dec_lt(v_i_2515_, v_size_2532_);
if (v___x_2586_ == 0)
{
lean_object* v___x_2587_; 
v___x_2587_ = l_outOfBounds___redArg(v___x_2585_);
v___y_2559_ = v___x_2587_;
goto v___jp_2558_;
}
else
{
lean_object* v___x_2588_; 
v___x_2588_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2585_, v___x_2512_, v_i_2515_);
v___y_2559_ = v___x_2588_;
goto v___jp_2558_;
}
v___jp_2534_:
{
lean_object* v_type_2546_; lean_object* v_u_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; 
v_type_2546_ = lean_ctor_get(v___x_2508_, 1);
v_u_2547_ = lean_ctor_get(v___x_2508_, 2);
v___x_2548_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__2));
v___x_2549_ = lean_box(0);
lean_inc(v_u_2547_);
v___x_2550_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2550_, 0, v_u_2547_);
lean_ctor_set(v___x_2550_, 1, v___x_2549_);
v___x_2551_ = l_Lean_mkConst(v___x_2548_, v___x_2550_);
lean_inc(v_snd_2509_);
v___x_2552_ = l_Lean_mkNatLit(v_snd_2509_);
lean_inc_ref(v_fst_2511_);
lean_inc_ref(v_fst_2510_);
lean_inc_ref(v_type_2546_);
v___x_2553_ = l_Lean_mkApp5(v___x_2551_, v_type_2546_, v_fst_2510_, v___x_2552_, v_fst_2511_, v___y_2535_);
v___x_2554_ = lean_unsigned_to_nat(0u);
v___x_2555_ = l_Lean_Meta_Grind_pushNewFact(v___x_2553_, v___x_2554_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_);
if (lean_obj_tag(v___x_2555_) == 0)
{
lean_object* v___x_2556_; 
lean_dec_ref_known(v___x_2555_, 1);
v___x_2556_ = lean_nat_add(v_i_2515_, v_step_2529_);
lean_dec(v_i_2515_);
v_b_2514_ = v___x_2533_;
v_i_2515_ = v___x_2556_;
goto _start;
}
else
{
lean_dec(v_i_2515_);
lean_dec_ref(v_fst_2511_);
lean_dec_ref(v_fst_2510_);
lean_dec(v_snd_2509_);
lean_dec_ref(v___x_2508_);
return v___x_2555_;
}
}
v___jp_2558_:
{
lean_object* v_toCold_2560_; lean_object* v_options_2561_; uint8_t v_hasTrace_2562_; 
v_toCold_2560_ = lean_ctor_get(v___y_2525_, 0);
v_options_2561_ = lean_ctor_get(v_toCold_2560_, 2);
v_hasTrace_2562_ = lean_ctor_get_uint8(v_options_2561_, sizeof(void*)*1);
if (v_hasTrace_2562_ == 0)
{
v___y_2535_ = v___y_2559_;
v___y_2536_ = v___y_2517_;
v___y_2537_ = v___y_2518_;
v___y_2538_ = v___y_2519_;
v___y_2539_ = v___y_2520_;
v___y_2540_ = v___y_2521_;
v___y_2541_ = v___y_2522_;
v___y_2542_ = v___y_2523_;
v___y_2543_ = v___y_2524_;
v___y_2544_ = v___y_2525_;
v___y_2545_ = v___y_2526_;
goto v___jp_2534_;
}
else
{
lean_object* v_inheritedTraceOptions_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; uint8_t v___x_2566_; 
v_inheritedTraceOptions_2563_ = lean_ctor_get(v_toCold_2560_, 11);
v___x_2564_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__5));
v___x_2565_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__8, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__8_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__8);
v___x_2566_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2563_, v_options_2561_, v___x_2565_);
if (v___x_2566_ == 0)
{
v___y_2535_ = v___y_2559_;
v___y_2536_ = v___y_2517_;
v___y_2537_ = v___y_2518_;
v___y_2538_ = v___y_2519_;
v___y_2539_ = v___y_2520_;
v___y_2540_ = v___y_2521_;
v___y_2541_ = v___y_2522_;
v___y_2542_ = v___y_2523_;
v___y_2543_ = v___y_2524_;
v___y_2544_ = v___y_2525_;
v___y_2545_ = v___y_2526_;
goto v___jp_2534_;
}
else
{
lean_object* v___x_2567_; 
v___x_2567_ = l_Lean_Meta_Grind_updateLastTag(v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_);
if (lean_obj_tag(v___x_2567_) == 0)
{
lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2583_; 
v_isSharedCheck_2583_ = !lean_is_exclusive(v___x_2567_);
if (v_isSharedCheck_2583_ == 0)
{
lean_object* v_unused_2584_; 
v_unused_2584_ = lean_ctor_get(v___x_2567_, 0);
lean_dec(v_unused_2584_);
v___x_2569_ = v___x_2567_;
v_isShared_2570_ = v_isSharedCheck_2583_;
goto v_resetjp_2568_;
}
else
{
lean_dec(v___x_2567_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2583_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2574_; 
v___x_2571_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__10, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__10_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__10);
lean_inc(v_snd_2509_);
v___x_2572_ = l_Nat_reprFast(v_snd_2509_);
if (v_isShared_2570_ == 0)
{
lean_ctor_set_tag(v___x_2569_, 3);
lean_ctor_set(v___x_2569_, 0, v___x_2572_);
v___x_2574_ = v___x_2569_;
goto v_reusejp_2573_;
}
else
{
lean_object* v_reuseFailAlloc_2582_; 
v_reuseFailAlloc_2582_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2582_, 0, v___x_2572_);
v___x_2574_ = v_reuseFailAlloc_2582_;
goto v_reusejp_2573_;
}
v_reusejp_2573_:
{
lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; 
v___x_2575_ = l_Lean_MessageData_ofFormat(v___x_2574_);
v___x_2576_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2576_, 0, v___x_2571_);
lean_ctor_set(v___x_2576_, 1, v___x_2575_);
v___x_2577_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__12, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__12_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__12);
v___x_2578_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2578_, 0, v___x_2576_);
lean_ctor_set(v___x_2578_, 1, v___x_2577_);
lean_inc_ref(v___y_2559_);
v___x_2579_ = l_Lean_MessageData_ofExpr(v___y_2559_);
v___x_2580_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2580_, 0, v___x_2578_);
lean_ctor_set(v___x_2580_, 1, v___x_2579_);
v___x_2581_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg(v___x_2564_, v___x_2580_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_);
if (lean_obj_tag(v___x_2581_) == 0)
{
lean_dec_ref_known(v___x_2581_, 1);
v___y_2535_ = v___y_2559_;
v___y_2536_ = v___y_2517_;
v___y_2537_ = v___y_2518_;
v___y_2538_ = v___y_2519_;
v___y_2539_ = v___y_2520_;
v___y_2540_ = v___y_2521_;
v___y_2541_ = v___y_2522_;
v___y_2542_ = v___y_2523_;
v___y_2543_ = v___y_2524_;
v___y_2544_ = v___y_2525_;
v___y_2545_ = v___y_2526_;
goto v___jp_2534_;
}
else
{
lean_dec_ref(v___y_2559_);
lean_dec(v_i_2515_);
lean_dec_ref(v_fst_2511_);
lean_dec_ref(v_fst_2510_);
lean_dec(v_snd_2509_);
lean_dec_ref(v___x_2508_);
return v___x_2581_;
}
}
}
}
else
{
lean_dec_ref(v___y_2559_);
lean_dec(v_i_2515_);
lean_dec_ref(v_fst_2511_);
lean_dec_ref(v_fst_2510_);
lean_dec(v_snd_2509_);
lean_dec_ref(v___x_2508_);
return v___x_2567_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___boxed(lean_object** _args){
lean_object* v___x_2589_ = _args[0];
lean_object* v_snd_2590_ = _args[1];
lean_object* v_fst_2591_ = _args[2];
lean_object* v_fst_2592_ = _args[3];
lean_object* v___x_2593_ = _args[4];
lean_object* v_range_2594_ = _args[5];
lean_object* v_b_2595_ = _args[6];
lean_object* v_i_2596_ = _args[7];
lean_object* v___y_2597_ = _args[8];
lean_object* v___y_2598_ = _args[9];
lean_object* v___y_2599_ = _args[10];
lean_object* v___y_2600_ = _args[11];
lean_object* v___y_2601_ = _args[12];
lean_object* v___y_2602_ = _args[13];
lean_object* v___y_2603_ = _args[14];
lean_object* v___y_2604_ = _args[15];
lean_object* v___y_2605_ = _args[16];
lean_object* v___y_2606_ = _args[17];
lean_object* v___y_2607_ = _args[18];
lean_object* v___y_2608_ = _args[19];
_start:
{
lean_object* v_res_2609_; 
v_res_2609_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg(v___x_2589_, v_snd_2590_, v_fst_2591_, v_fst_2592_, v___x_2593_, v_range_2594_, v_b_2595_, v_i_2596_, v___y_2597_, v___y_2598_, v___y_2599_, v___y_2600_, v___y_2601_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_, v___y_2606_, v___y_2607_);
lean_dec(v___y_2607_);
lean_dec_ref(v___y_2606_);
lean_dec(v___y_2605_);
lean_dec_ref(v___y_2604_);
lean_dec(v___y_2603_);
lean_dec_ref(v___y_2602_);
lean_dec(v___y_2601_);
lean_dec_ref(v___y_2600_);
lean_dec(v___y_2599_);
lean_dec(v___y_2598_);
lean_dec_ref(v___y_2597_);
lean_dec_ref(v_range_2594_);
lean_dec_ref(v___x_2593_);
return v_res_2609_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars(lean_object* v_a_2610_, lean_object* v_a_2611_, lean_object* v_a_2612_, lean_object* v_a_2613_, lean_object* v_a_2614_, lean_object* v_a_2615_, lean_object* v_a_2616_, lean_object* v_a_2617_, lean_object* v_a_2618_, lean_object* v_a_2619_, lean_object* v_a_2620_){
_start:
{
lean_object* v___x_2622_; 
v___x_2622_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_2610_, v_a_2611_, v_a_2612_, v_a_2613_, v_a_2614_, v_a_2615_, v_a_2616_, v_a_2617_, v_a_2618_, v_a_2619_, v_a_2620_);
if (lean_obj_tag(v___x_2622_) == 0)
{
lean_object* v_a_2623_; lean_object* v___x_2625_; uint8_t v_isShared_2626_; uint8_t v_isSharedCheck_2652_; 
v_a_2623_ = lean_ctor_get(v___x_2622_, 0);
v_isSharedCheck_2652_ = !lean_is_exclusive(v___x_2622_);
if (v_isSharedCheck_2652_ == 0)
{
v___x_2625_ = v___x_2622_;
v_isShared_2626_ = v_isSharedCheck_2652_;
goto v_resetjp_2624_;
}
else
{
lean_inc(v_a_2623_);
lean_dec(v___x_2622_);
v___x_2625_ = lean_box(0);
v_isShared_2626_ = v_isSharedCheck_2652_;
goto v_resetjp_2624_;
}
v_resetjp_2624_:
{
lean_object* v_powIdentityInst_x3f_2627_; 
v_powIdentityInst_x3f_2627_ = lean_ctor_get(v_a_2623_, 7);
if (lean_obj_tag(v_powIdentityInst_x3f_2627_) == 1)
{
lean_object* v_val_2628_; lean_object* v_snd_2629_; lean_object* v_toRing_2630_; lean_object* v_vars_2631_; lean_object* v_powIdentityVarCount_2632_; lean_object* v_fst_2633_; lean_object* v_fst_2634_; lean_object* v_snd_2635_; lean_object* v_size_2636_; uint8_t v___x_2637_; 
v_val_2628_ = lean_ctor_get(v_powIdentityInst_x3f_2627_, 0);
lean_inc(v_val_2628_);
v_snd_2629_ = lean_ctor_get(v_val_2628_, 1);
lean_inc(v_snd_2629_);
v_toRing_2630_ = lean_ctor_get(v_a_2623_, 0);
lean_inc_ref(v_toRing_2630_);
v_vars_2631_ = lean_ctor_get(v_toRing_2630_, 14);
lean_inc_ref(v_vars_2631_);
v_powIdentityVarCount_2632_ = lean_ctor_get(v_a_2623_, 15);
lean_inc(v_powIdentityVarCount_2632_);
lean_dec(v_a_2623_);
v_fst_2633_ = lean_ctor_get(v_val_2628_, 0);
lean_inc(v_fst_2633_);
lean_dec(v_val_2628_);
v_fst_2634_ = lean_ctor_get(v_snd_2629_, 0);
lean_inc(v_fst_2634_);
v_snd_2635_ = lean_ctor_get(v_snd_2629_, 1);
lean_inc(v_snd_2635_);
lean_dec(v_snd_2629_);
v_size_2636_ = lean_ctor_get(v_vars_2631_, 2);
v___x_2637_ = lean_nat_dec_le(v_size_2636_, v_powIdentityVarCount_2632_);
if (v___x_2637_ == 0)
{
lean_object* v___f_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; 
lean_del_object(v___x_2625_);
lean_inc_n(v_size_2636_, 2);
v___f_2638_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars___lam__0), 2, 1);
lean_closure_set(v___f_2638_, 0, v_size_2636_);
v___x_2639_ = lean_unsigned_to_nat(1u);
lean_inc(v_powIdentityVarCount_2632_);
v___x_2640_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2640_, 0, v_powIdentityVarCount_2632_);
lean_ctor_set(v___x_2640_, 1, v_size_2636_);
lean_ctor_set(v___x_2640_, 2, v___x_2639_);
v___x_2641_ = lean_box(0);
v___x_2642_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg(v_toRing_2630_, v_snd_2635_, v_fst_2634_, v_fst_2633_, v_vars_2631_, v___x_2640_, v___x_2641_, v_powIdentityVarCount_2632_, v_a_2610_, v_a_2611_, v_a_2612_, v_a_2613_, v_a_2614_, v_a_2615_, v_a_2616_, v_a_2617_, v_a_2618_, v_a_2619_, v_a_2620_);
lean_dec_ref_known(v___x_2640_, 3);
lean_dec_ref(v_vars_2631_);
if (lean_obj_tag(v___x_2642_) == 0)
{
lean_object* v___x_2643_; 
lean_dec_ref_known(v___x_2642_, 1);
v___x_2643_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v___f_2638_, v_a_2610_, v_a_2611_);
return v___x_2643_;
}
else
{
lean_dec_ref(v___f_2638_);
return v___x_2642_;
}
}
else
{
lean_object* v___x_2644_; lean_object* v___x_2646_; 
lean_dec(v_snd_2635_);
lean_dec(v_fst_2634_);
lean_dec(v_fst_2633_);
lean_dec(v_powIdentityVarCount_2632_);
lean_dec_ref(v_vars_2631_);
lean_dec_ref(v_toRing_2630_);
v___x_2644_ = lean_box(0);
if (v_isShared_2626_ == 0)
{
lean_ctor_set(v___x_2625_, 0, v___x_2644_);
v___x_2646_ = v___x_2625_;
goto v_reusejp_2645_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v___x_2644_);
v___x_2646_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2645_;
}
v_reusejp_2645_:
{
return v___x_2646_;
}
}
}
else
{
lean_object* v___x_2648_; lean_object* v___x_2650_; 
lean_dec(v_a_2623_);
v___x_2648_ = lean_box(0);
if (v_isShared_2626_ == 0)
{
lean_ctor_set(v___x_2625_, 0, v___x_2648_);
v___x_2650_ = v___x_2625_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2651_; 
v_reuseFailAlloc_2651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2651_, 0, v___x_2648_);
v___x_2650_ = v_reuseFailAlloc_2651_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
return v___x_2650_;
}
}
}
}
else
{
lean_object* v_a_2653_; lean_object* v___x_2655_; uint8_t v_isShared_2656_; uint8_t v_isSharedCheck_2660_; 
v_a_2653_ = lean_ctor_get(v___x_2622_, 0);
v_isSharedCheck_2660_ = !lean_is_exclusive(v___x_2622_);
if (v_isSharedCheck_2660_ == 0)
{
v___x_2655_ = v___x_2622_;
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
else
{
lean_inc(v_a_2653_);
lean_dec(v___x_2622_);
v___x_2655_ = lean_box(0);
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
v_resetjp_2654_:
{
lean_object* v___x_2658_; 
if (v_isShared_2656_ == 0)
{
v___x_2658_ = v___x_2655_;
goto v_reusejp_2657_;
}
else
{
lean_object* v_reuseFailAlloc_2659_; 
v_reuseFailAlloc_2659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2659_, 0, v_a_2653_);
v___x_2658_ = v_reuseFailAlloc_2659_;
goto v_reusejp_2657_;
}
v_reusejp_2657_:
{
return v___x_2658_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars___boxed(lean_object* v_a_2661_, lean_object* v_a_2662_, lean_object* v_a_2663_, lean_object* v_a_2664_, lean_object* v_a_2665_, lean_object* v_a_2666_, lean_object* v_a_2667_, lean_object* v_a_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_, lean_object* v_a_2671_, lean_object* v_a_2672_){
_start:
{
lean_object* v_res_2673_; 
v_res_2673_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars(v_a_2661_, v_a_2662_, v_a_2663_, v_a_2664_, v_a_2665_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_, v_a_2670_, v_a_2671_);
lean_dec(v_a_2671_);
lean_dec_ref(v_a_2670_);
lean_dec(v_a_2669_);
lean_dec_ref(v_a_2668_);
lean_dec(v_a_2667_);
lean_dec_ref(v_a_2666_);
lean_dec(v_a_2665_);
lean_dec_ref(v_a_2664_);
lean_dec(v_a_2663_);
lean_dec(v_a_2662_);
lean_dec_ref(v_a_2661_);
return v_res_2673_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0(lean_object* v_cls_2674_, lean_object* v_msg_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_){
_start:
{
lean_object* v___x_2688_; 
v___x_2688_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg(v_cls_2674_, v_msg_2675_, v___y_2683_, v___y_2684_, v___y_2685_, v___y_2686_);
return v___x_2688_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___boxed(lean_object* v_cls_2689_, lean_object* v_msg_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_){
_start:
{
lean_object* v_res_2703_; 
v_res_2703_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0(v_cls_2689_, v_msg_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_, v___y_2700_, v___y_2701_);
lean_dec(v___y_2701_);
lean_dec_ref(v___y_2700_);
lean_dec(v___y_2699_);
lean_dec_ref(v___y_2698_);
lean_dec(v___y_2697_);
lean_dec_ref(v___y_2696_);
lean_dec(v___y_2695_);
lean_dec_ref(v___y_2694_);
lean_dec(v___y_2693_);
lean_dec(v___y_2692_);
lean_dec_ref(v___y_2691_);
return v_res_2703_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1(lean_object* v___x_2704_, lean_object* v_snd_2705_, lean_object* v_fst_2706_, lean_object* v_fst_2707_, lean_object* v___x_2708_, lean_object* v_range_2709_, lean_object* v_b_2710_, lean_object* v_i_2711_, lean_object* v_hs_2712_, lean_object* v_hl_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_){
_start:
{
lean_object* v___x_2726_; 
v___x_2726_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg(v___x_2704_, v_snd_2705_, v_fst_2706_, v_fst_2707_, v___x_2708_, v_range_2709_, v_b_2710_, v_i_2711_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_);
return v___x_2726_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___boxed(lean_object** _args){
lean_object* v___x_2727_ = _args[0];
lean_object* v_snd_2728_ = _args[1];
lean_object* v_fst_2729_ = _args[2];
lean_object* v_fst_2730_ = _args[3];
lean_object* v___x_2731_ = _args[4];
lean_object* v_range_2732_ = _args[5];
lean_object* v_b_2733_ = _args[6];
lean_object* v_i_2734_ = _args[7];
lean_object* v_hs_2735_ = _args[8];
lean_object* v_hl_2736_ = _args[9];
lean_object* v___y_2737_ = _args[10];
lean_object* v___y_2738_ = _args[11];
lean_object* v___y_2739_ = _args[12];
lean_object* v___y_2740_ = _args[13];
lean_object* v___y_2741_ = _args[14];
lean_object* v___y_2742_ = _args[15];
lean_object* v___y_2743_ = _args[16];
lean_object* v___y_2744_ = _args[17];
lean_object* v___y_2745_ = _args[18];
lean_object* v___y_2746_ = _args[19];
lean_object* v___y_2747_ = _args[20];
lean_object* v___y_2748_ = _args[21];
_start:
{
lean_object* v_res_2749_; 
v_res_2749_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1(v___x_2727_, v_snd_2728_, v_fst_2729_, v_fst_2730_, v___x_2731_, v_range_2732_, v_b_2733_, v_i_2734_, v_hs_2735_, v_hl_2736_, v___y_2737_, v___y_2738_, v___y_2739_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_, v___y_2747_);
lean_dec(v___y_2747_);
lean_dec_ref(v___y_2746_);
lean_dec(v___y_2745_);
lean_dec_ref(v___y_2744_);
lean_dec(v___y_2743_);
lean_dec_ref(v___y_2742_);
lean_dec(v___y_2741_);
lean_dec_ref(v___y_2740_);
lean_dec(v___y_2739_);
lean_dec(v___y_2738_);
lean_dec_ref(v___y_2737_);
lean_dec_ref(v_range_2732_);
lean_dec_ref(v___x_2731_);
return v_res_2749_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeInv(lean_object* v_e_2750_, lean_object* v_a_2751_, lean_object* v_a_2752_, lean_object* v_a_2753_, lean_object* v_a_2754_, lean_object* v_a_2755_, lean_object* v_a_2756_, lean_object* v_a_2757_, lean_object* v_a_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_){
_start:
{
lean_object* v___x_2766_; 
lean_inc_ref(v_e_2750_);
v___x_2766_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_2750_, v_a_2758_);
if (lean_obj_tag(v___x_2766_) == 0)
{
lean_object* v_a_2767_; lean_object* v___x_2768_; uint8_t v___x_2769_; 
v_a_2767_ = lean_ctor_get(v___x_2766_, 0);
lean_inc(v_a_2767_);
lean_dec_ref_known(v___x_2766_, 1);
v___x_2768_ = l_Lean_Expr_cleanupAnnotations(v_a_2767_);
v___x_2769_ = l_Lean_Expr_isApp(v___x_2768_);
if (v___x_2769_ == 0)
{
lean_dec_ref(v___x_2768_);
lean_dec_ref(v_e_2750_);
goto v___jp_2762_;
}
else
{
lean_object* v_arg_2770_; lean_object* v___x_2771_; uint8_t v___x_2772_; 
v_arg_2770_ = lean_ctor_get(v___x_2768_, 1);
lean_inc_ref(v_arg_2770_);
v___x_2771_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2768_);
v___x_2772_ = l_Lean_Expr_isApp(v___x_2771_);
if (v___x_2772_ == 0)
{
lean_dec_ref(v___x_2771_);
lean_dec_ref(v_arg_2770_);
lean_dec_ref(v_e_2750_);
goto v___jp_2762_;
}
else
{
lean_object* v_arg_2773_; lean_object* v___x_2774_; uint8_t v___x_2775_; 
v_arg_2773_ = lean_ctor_get(v___x_2771_, 1);
lean_inc_ref(v_arg_2773_);
v___x_2774_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2771_);
v___x_2775_ = l_Lean_Expr_isApp(v___x_2774_);
if (v___x_2775_ == 0)
{
lean_dec_ref(v___x_2774_);
lean_dec_ref(v_arg_2773_);
lean_dec_ref(v_arg_2770_);
lean_dec_ref(v_e_2750_);
goto v___jp_2762_;
}
else
{
lean_object* v_arg_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; uint8_t v___x_2779_; 
v_arg_2776_ = lean_ctor_get(v___x_2774_, 1);
lean_inc_ref(v_arg_2776_);
v___x_2777_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2774_);
v___x_2778_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_getInvFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isInvInst_spec__0___closed__6));
v___x_2779_ = l_Lean_Expr_isConstOf(v___x_2777_, v___x_2778_);
lean_dec_ref(v___x_2777_);
if (v___x_2779_ == 0)
{
lean_dec_ref(v_arg_2776_);
lean_dec_ref(v_arg_2773_);
lean_dec_ref(v_arg_2770_);
lean_dec_ref(v_e_2750_);
goto v___jp_2762_;
}
else
{
lean_object* v___x_2780_; 
v___x_2780_ = l_Lean_Meta_Grind_Arith_CommRing_getCommRingId_x3f(v_arg_2776_, v_a_2751_, v_a_2752_, v_a_2753_, v_a_2754_, v_a_2755_, v_a_2756_, v_a_2757_, v_a_2758_, v_a_2759_, v_a_2760_);
if (lean_obj_tag(v___x_2780_) == 0)
{
lean_object* v_a_2781_; lean_object* v___x_2783_; uint8_t v_isShared_2784_; uint8_t v_isSharedCheck_2810_; 
v_a_2781_ = lean_ctor_get(v___x_2780_, 0);
v_isSharedCheck_2810_ = !lean_is_exclusive(v___x_2780_);
if (v_isSharedCheck_2810_ == 0)
{
v___x_2783_ = v___x_2780_;
v_isShared_2784_ = v_isSharedCheck_2810_;
goto v_resetjp_2782_;
}
else
{
lean_inc(v_a_2781_);
lean_dec(v___x_2780_);
v___x_2783_ = lean_box(0);
v_isShared_2784_ = v_isSharedCheck_2810_;
goto v_resetjp_2782_;
}
v_resetjp_2782_:
{
if (lean_obj_tag(v_a_2781_) == 1)
{
lean_object* v_val_2785_; uint8_t v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; 
lean_del_object(v___x_2783_);
v_val_2785_ = lean_ctor_get(v_a_2781_, 0);
lean_inc(v_val_2785_);
lean_dec_ref_known(v_a_2781_, 1);
v___x_2786_ = 0;
v___x_2787_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2787_, 0, v_val_2785_);
lean_ctor_set_uint8(v___x_2787_, sizeof(void*)*1, v___x_2786_);
v___x_2788_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv(v_e_2750_, v_arg_2773_, v_arg_2770_, v___x_2787_, v_a_2751_, v_a_2752_, v_a_2753_, v_a_2754_, v_a_2755_, v_a_2756_, v_a_2757_, v_a_2758_, v_a_2759_, v_a_2760_);
lean_dec_ref_known(v___x_2787_, 1);
lean_dec_ref(v_arg_2773_);
if (lean_obj_tag(v___x_2788_) == 0)
{
lean_object* v___x_2790_; uint8_t v_isShared_2791_; uint8_t v_isSharedCheck_2796_; 
v_isSharedCheck_2796_ = !lean_is_exclusive(v___x_2788_);
if (v_isSharedCheck_2796_ == 0)
{
lean_object* v_unused_2797_; 
v_unused_2797_ = lean_ctor_get(v___x_2788_, 0);
lean_dec(v_unused_2797_);
v___x_2790_ = v___x_2788_;
v_isShared_2791_ = v_isSharedCheck_2796_;
goto v_resetjp_2789_;
}
else
{
lean_dec(v___x_2788_);
v___x_2790_ = lean_box(0);
v_isShared_2791_ = v_isSharedCheck_2796_;
goto v_resetjp_2789_;
}
v_resetjp_2789_:
{
lean_object* v___x_2792_; lean_object* v___x_2794_; 
v___x_2792_ = lean_box(v___x_2779_);
if (v_isShared_2791_ == 0)
{
lean_ctor_set(v___x_2790_, 0, v___x_2792_);
v___x_2794_ = v___x_2790_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v___x_2792_);
v___x_2794_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
return v___x_2794_;
}
}
}
else
{
lean_object* v_a_2798_; lean_object* v___x_2800_; uint8_t v_isShared_2801_; uint8_t v_isSharedCheck_2805_; 
v_a_2798_ = lean_ctor_get(v___x_2788_, 0);
v_isSharedCheck_2805_ = !lean_is_exclusive(v___x_2788_);
if (v_isSharedCheck_2805_ == 0)
{
v___x_2800_ = v___x_2788_;
v_isShared_2801_ = v_isSharedCheck_2805_;
goto v_resetjp_2799_;
}
else
{
lean_inc(v_a_2798_);
lean_dec(v___x_2788_);
v___x_2800_ = lean_box(0);
v_isShared_2801_ = v_isSharedCheck_2805_;
goto v_resetjp_2799_;
}
v_resetjp_2799_:
{
lean_object* v___x_2803_; 
if (v_isShared_2801_ == 0)
{
v___x_2803_ = v___x_2800_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v_a_2798_);
v___x_2803_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
return v___x_2803_;
}
}
}
}
else
{
lean_object* v___x_2806_; lean_object* v___x_2808_; 
lean_dec(v_a_2781_);
lean_dec_ref(v_arg_2773_);
lean_dec_ref(v_arg_2770_);
lean_dec_ref(v_e_2750_);
v___x_2806_ = lean_box(v___x_2779_);
if (v_isShared_2784_ == 0)
{
lean_ctor_set(v___x_2783_, 0, v___x_2806_);
v___x_2808_ = v___x_2783_;
goto v_reusejp_2807_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v___x_2806_);
v___x_2808_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2807_;
}
v_reusejp_2807_:
{
return v___x_2808_;
}
}
}
}
else
{
lean_object* v_a_2811_; lean_object* v___x_2813_; uint8_t v_isShared_2814_; uint8_t v_isSharedCheck_2818_; 
lean_dec_ref(v_arg_2773_);
lean_dec_ref(v_arg_2770_);
lean_dec_ref(v_e_2750_);
v_a_2811_ = lean_ctor_get(v___x_2780_, 0);
v_isSharedCheck_2818_ = !lean_is_exclusive(v___x_2780_);
if (v_isSharedCheck_2818_ == 0)
{
v___x_2813_ = v___x_2780_;
v_isShared_2814_ = v_isSharedCheck_2818_;
goto v_resetjp_2812_;
}
else
{
lean_inc(v_a_2811_);
lean_dec(v___x_2780_);
v___x_2813_ = lean_box(0);
v_isShared_2814_ = v_isSharedCheck_2818_;
goto v_resetjp_2812_;
}
v_resetjp_2812_:
{
lean_object* v___x_2816_; 
if (v_isShared_2814_ == 0)
{
v___x_2816_ = v___x_2813_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2817_, 0, v_a_2811_);
v___x_2816_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
return v___x_2816_;
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
lean_object* v_a_2819_; lean_object* v___x_2821_; uint8_t v_isShared_2822_; uint8_t v_isSharedCheck_2826_; 
lean_dec_ref(v_e_2750_);
v_a_2819_ = lean_ctor_get(v___x_2766_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v___x_2766_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2821_ = v___x_2766_;
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
else
{
lean_inc(v_a_2819_);
lean_dec(v___x_2766_);
v___x_2821_ = lean_box(0);
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
v_resetjp_2820_:
{
lean_object* v___x_2824_; 
if (v_isShared_2822_ == 0)
{
v___x_2824_ = v___x_2821_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_a_2819_);
v___x_2824_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
return v___x_2824_;
}
}
}
v___jp_2762_:
{
uint8_t v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; 
v___x_2763_ = 0;
v___x_2764_ = lean_box(v___x_2763_);
v___x_2765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2765_, 0, v___x_2764_);
return v___x_2765_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeInv___boxed(lean_object* v_e_2827_, lean_object* v_a_2828_, lean_object* v_a_2829_, lean_object* v_a_2830_, lean_object* v_a_2831_, lean_object* v_a_2832_, lean_object* v_a_2833_, lean_object* v_a_2834_, lean_object* v_a_2835_, lean_object* v_a_2836_, lean_object* v_a_2837_, lean_object* v_a_2838_){
_start:
{
lean_object* v_res_2839_; 
v_res_2839_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeInv(v_e_2827_, v_a_2828_, v_a_2829_, v_a_2830_, v_a_2831_, v_a_2832_, v_a_2833_, v_a_2834_, v_a_2835_, v_a_2836_, v_a_2837_);
lean_dec(v_a_2837_);
lean_dec_ref(v_a_2836_);
lean_dec(v_a_2835_);
lean_dec_ref(v_a_2834_);
lean_dec(v_a_2833_);
lean_dec_ref(v_a_2832_);
lean_dec(v_a_2831_);
lean_dec_ref(v_a_2830_);
lean_dec(v_a_2829_);
lean_dec(v_a_2828_);
return v_res_2839_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__1_spec__5___redArg(lean_object* v_x_2840_, lean_object* v_x_2841_, lean_object* v_x_2842_, lean_object* v_x_2843_){
_start:
{
lean_object* v_ks_2844_; lean_object* v_vs_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2871_; 
v_ks_2844_ = lean_ctor_get(v_x_2840_, 0);
v_vs_2845_ = lean_ctor_get(v_x_2840_, 1);
v_isSharedCheck_2871_ = !lean_is_exclusive(v_x_2840_);
if (v_isSharedCheck_2871_ == 0)
{
v___x_2847_ = v_x_2840_;
v_isShared_2848_ = v_isSharedCheck_2871_;
goto v_resetjp_2846_;
}
else
{
lean_inc(v_vs_2845_);
lean_inc(v_ks_2844_);
lean_dec(v_x_2840_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2871_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v___x_2849_; uint8_t v___x_2850_; 
v___x_2849_ = lean_array_get_size(v_ks_2844_);
v___x_2850_ = lean_nat_dec_lt(v_x_2841_, v___x_2849_);
if (v___x_2850_ == 0)
{
lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2854_; 
lean_dec(v_x_2841_);
v___x_2851_ = lean_array_push(v_ks_2844_, v_x_2842_);
v___x_2852_ = lean_array_push(v_vs_2845_, v_x_2843_);
if (v_isShared_2848_ == 0)
{
lean_ctor_set(v___x_2847_, 1, v___x_2852_);
lean_ctor_set(v___x_2847_, 0, v___x_2851_);
v___x_2854_ = v___x_2847_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v___x_2851_);
lean_ctor_set(v_reuseFailAlloc_2855_, 1, v___x_2852_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
return v___x_2854_;
}
}
else
{
lean_object* v_k_x27_2856_; size_t v___x_2857_; size_t v___x_2858_; uint8_t v___x_2859_; 
v_k_x27_2856_ = lean_array_fget_borrowed(v_ks_2844_, v_x_2841_);
v___x_2857_ = lean_ptr_addr(v_x_2842_);
v___x_2858_ = lean_ptr_addr(v_k_x27_2856_);
v___x_2859_ = lean_usize_dec_eq(v___x_2857_, v___x_2858_);
if (v___x_2859_ == 0)
{
lean_object* v___x_2861_; 
if (v_isShared_2848_ == 0)
{
v___x_2861_ = v___x_2847_;
goto v_reusejp_2860_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v_ks_2844_);
lean_ctor_set(v_reuseFailAlloc_2865_, 1, v_vs_2845_);
v___x_2861_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2860_;
}
v_reusejp_2860_:
{
lean_object* v___x_2862_; lean_object* v___x_2863_; 
v___x_2862_ = lean_unsigned_to_nat(1u);
v___x_2863_ = lean_nat_add(v_x_2841_, v___x_2862_);
lean_dec(v_x_2841_);
v_x_2840_ = v___x_2861_;
v_x_2841_ = v___x_2863_;
goto _start;
}
}
else
{
lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2869_; 
v___x_2866_ = lean_array_fset(v_ks_2844_, v_x_2841_, v_x_2842_);
v___x_2867_ = lean_array_fset(v_vs_2845_, v_x_2841_, v_x_2843_);
lean_dec(v_x_2841_);
if (v_isShared_2848_ == 0)
{
lean_ctor_set(v___x_2847_, 1, v___x_2867_);
lean_ctor_set(v___x_2847_, 0, v___x_2866_);
v___x_2869_ = v___x_2847_;
goto v_reusejp_2868_;
}
else
{
lean_object* v_reuseFailAlloc_2870_; 
v_reuseFailAlloc_2870_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2870_, 0, v___x_2866_);
lean_ctor_set(v_reuseFailAlloc_2870_, 1, v___x_2867_);
v___x_2869_ = v_reuseFailAlloc_2870_;
goto v_reusejp_2868_;
}
v_reusejp_2868_:
{
return v___x_2869_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__1___redArg(lean_object* v_n_2872_, lean_object* v_k_2873_, lean_object* v_v_2874_){
_start:
{
lean_object* v___x_2875_; lean_object* v___x_2876_; 
v___x_2875_ = lean_unsigned_to_nat(0u);
v___x_2876_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__1_spec__5___redArg(v_n_2872_, v___x_2875_, v_k_2873_, v_v_2874_);
return v___x_2876_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0___redArg(lean_object* v_x_2877_, size_t v_x_2878_, size_t v_x_2879_, lean_object* v_x_2880_, lean_object* v_x_2881_){
_start:
{
if (lean_obj_tag(v_x_2877_) == 0)
{
lean_object* v_es_2882_; size_t v___x_2883_; size_t v___x_2884_; lean_object* v_j_2885_; lean_object* v___x_2886_; uint8_t v___x_2887_; 
v_es_2882_ = lean_ctor_get(v_x_2877_, 0);
v___x_2883_ = ((size_t)31ULL);
v___x_2884_ = lean_usize_land(v_x_2878_, v___x_2883_);
v_j_2885_ = lean_usize_to_nat(v___x_2884_);
v___x_2886_ = lean_array_get_size(v_es_2882_);
v___x_2887_ = lean_nat_dec_lt(v_j_2885_, v___x_2886_);
if (v___x_2887_ == 0)
{
lean_dec(v_j_2885_);
lean_dec(v_x_2881_);
lean_dec_ref(v_x_2880_);
return v_x_2877_;
}
else
{
lean_object* v___x_2889_; uint8_t v_isShared_2890_; uint8_t v_isSharedCheck_2928_; 
lean_inc_ref(v_es_2882_);
v_isSharedCheck_2928_ = !lean_is_exclusive(v_x_2877_);
if (v_isSharedCheck_2928_ == 0)
{
lean_object* v_unused_2929_; 
v_unused_2929_ = lean_ctor_get(v_x_2877_, 0);
lean_dec(v_unused_2929_);
v___x_2889_ = v_x_2877_;
v_isShared_2890_ = v_isSharedCheck_2928_;
goto v_resetjp_2888_;
}
else
{
lean_dec(v_x_2877_);
v___x_2889_ = lean_box(0);
v_isShared_2890_ = v_isSharedCheck_2928_;
goto v_resetjp_2888_;
}
v_resetjp_2888_:
{
lean_object* v_v_2891_; lean_object* v___x_2892_; lean_object* v_xs_x27_2893_; lean_object* v___y_2895_; 
v_v_2891_ = lean_array_fget(v_es_2882_, v_j_2885_);
v___x_2892_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__0);
v_xs_x27_2893_ = lean_array_fset(v_es_2882_, v_j_2885_, v___x_2892_);
switch(lean_obj_tag(v_v_2891_))
{
case 0:
{
lean_object* v_key_2900_; lean_object* v_val_2901_; lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2913_; 
v_key_2900_ = lean_ctor_get(v_v_2891_, 0);
v_val_2901_ = lean_ctor_get(v_v_2891_, 1);
v_isSharedCheck_2913_ = !lean_is_exclusive(v_v_2891_);
if (v_isSharedCheck_2913_ == 0)
{
v___x_2903_ = v_v_2891_;
v_isShared_2904_ = v_isSharedCheck_2913_;
goto v_resetjp_2902_;
}
else
{
lean_inc(v_val_2901_);
lean_inc(v_key_2900_);
lean_dec(v_v_2891_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2913_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
size_t v___x_2905_; size_t v___x_2906_; uint8_t v___x_2907_; 
v___x_2905_ = lean_ptr_addr(v_x_2880_);
v___x_2906_ = lean_ptr_addr(v_key_2900_);
v___x_2907_ = lean_usize_dec_eq(v___x_2905_, v___x_2906_);
if (v___x_2907_ == 0)
{
lean_object* v___x_2908_; lean_object* v___x_2909_; 
lean_del_object(v___x_2903_);
v___x_2908_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2900_, v_val_2901_, v_x_2880_, v_x_2881_);
v___x_2909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2908_);
v___y_2895_ = v___x_2909_;
goto v___jp_2894_;
}
else
{
lean_object* v___x_2911_; 
lean_dec(v_val_2901_);
lean_dec(v_key_2900_);
if (v_isShared_2904_ == 0)
{
lean_ctor_set(v___x_2903_, 1, v_x_2881_);
lean_ctor_set(v___x_2903_, 0, v_x_2880_);
v___x_2911_ = v___x_2903_;
goto v_reusejp_2910_;
}
else
{
lean_object* v_reuseFailAlloc_2912_; 
v_reuseFailAlloc_2912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2912_, 0, v_x_2880_);
lean_ctor_set(v_reuseFailAlloc_2912_, 1, v_x_2881_);
v___x_2911_ = v_reuseFailAlloc_2912_;
goto v_reusejp_2910_;
}
v_reusejp_2910_:
{
v___y_2895_ = v___x_2911_;
goto v___jp_2894_;
}
}
}
}
case 1:
{
lean_object* v_node_2914_; lean_object* v___x_2916_; uint8_t v_isShared_2917_; uint8_t v_isSharedCheck_2926_; 
v_node_2914_ = lean_ctor_get(v_v_2891_, 0);
v_isSharedCheck_2926_ = !lean_is_exclusive(v_v_2891_);
if (v_isSharedCheck_2926_ == 0)
{
v___x_2916_ = v_v_2891_;
v_isShared_2917_ = v_isSharedCheck_2926_;
goto v_resetjp_2915_;
}
else
{
lean_inc(v_node_2914_);
lean_dec(v_v_2891_);
v___x_2916_ = lean_box(0);
v_isShared_2917_ = v_isSharedCheck_2926_;
goto v_resetjp_2915_;
}
v_resetjp_2915_:
{
size_t v___x_2918_; size_t v___x_2919_; size_t v___x_2920_; size_t v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2924_; 
v___x_2918_ = ((size_t)5ULL);
v___x_2919_ = lean_usize_shift_right(v_x_2878_, v___x_2918_);
v___x_2920_ = ((size_t)1ULL);
v___x_2921_ = lean_usize_add(v_x_2879_, v___x_2920_);
v___x_2922_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0___redArg(v_node_2914_, v___x_2919_, v___x_2921_, v_x_2880_, v_x_2881_);
if (v_isShared_2917_ == 0)
{
lean_ctor_set(v___x_2916_, 0, v___x_2922_);
v___x_2924_ = v___x_2916_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v___x_2922_);
v___x_2924_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
v___y_2895_ = v___x_2924_;
goto v___jp_2894_;
}
}
}
default: 
{
lean_object* v___x_2927_; 
v___x_2927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2927_, 0, v_x_2880_);
lean_ctor_set(v___x_2927_, 1, v_x_2881_);
v___y_2895_ = v___x_2927_;
goto v___jp_2894_;
}
}
v___jp_2894_:
{
lean_object* v___x_2896_; lean_object* v___x_2898_; 
v___x_2896_ = lean_array_fset(v_xs_x27_2893_, v_j_2885_, v___y_2895_);
lean_dec(v_j_2885_);
if (v_isShared_2890_ == 0)
{
lean_ctor_set(v___x_2889_, 0, v___x_2896_);
v___x_2898_ = v___x_2889_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v___x_2896_);
v___x_2898_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
return v___x_2898_;
}
}
}
}
}
else
{
lean_object* v_ks_2930_; lean_object* v_vs_2931_; lean_object* v___x_2933_; uint8_t v_isShared_2934_; uint8_t v_isSharedCheck_2949_; 
v_ks_2930_ = lean_ctor_get(v_x_2877_, 0);
v_vs_2931_ = lean_ctor_get(v_x_2877_, 1);
v_isSharedCheck_2949_ = !lean_is_exclusive(v_x_2877_);
if (v_isSharedCheck_2949_ == 0)
{
v___x_2933_ = v_x_2877_;
v_isShared_2934_ = v_isSharedCheck_2949_;
goto v_resetjp_2932_;
}
else
{
lean_inc(v_vs_2931_);
lean_inc(v_ks_2930_);
lean_dec(v_x_2877_);
v___x_2933_ = lean_box(0);
v_isShared_2934_ = v_isSharedCheck_2949_;
goto v_resetjp_2932_;
}
v_resetjp_2932_:
{
lean_object* v___x_2936_; 
if (v_isShared_2934_ == 0)
{
v___x_2936_ = v___x_2933_;
goto v_reusejp_2935_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v_ks_2930_);
lean_ctor_set(v_reuseFailAlloc_2948_, 1, v_vs_2931_);
v___x_2936_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2935_;
}
v_reusejp_2935_:
{
lean_object* v_newNode_2937_; size_t v___x_2938_; uint8_t v___x_2939_; 
v_newNode_2937_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__1___redArg(v___x_2936_, v_x_2880_, v_x_2881_);
v___x_2938_ = ((size_t)7ULL);
v___x_2939_ = lean_usize_dec_le(v___x_2938_, v_x_2879_);
if (v___x_2939_ == 0)
{
lean_object* v___x_2940_; lean_object* v___x_2941_; uint8_t v___x_2942_; 
v___x_2940_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2937_);
v___x_2941_ = lean_unsigned_to_nat(4u);
v___x_2942_ = lean_nat_dec_lt(v___x_2940_, v___x_2941_);
lean_dec(v___x_2940_);
if (v___x_2942_ == 0)
{
lean_object* v_ks_2943_; lean_object* v_vs_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; 
v_ks_2943_ = lean_ctor_get(v_newNode_2937_, 0);
lean_inc_ref(v_ks_2943_);
v_vs_2944_ = lean_ctor_get(v_newNode_2937_, 1);
lean_inc_ref(v_vs_2944_);
lean_dec_ref(v_newNode_2937_);
v___x_2945_ = lean_unsigned_to_nat(0u);
v___x_2946_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__1);
v___x_2947_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__2___redArg(v_x_2879_, v_ks_2943_, v_vs_2944_, v___x_2945_, v___x_2946_);
lean_dec_ref(v_vs_2944_);
lean_dec_ref(v_ks_2943_);
return v___x_2947_;
}
else
{
return v_newNode_2937_;
}
}
else
{
return v_newNode_2937_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__2___redArg(size_t v_depth_2950_, lean_object* v_keys_2951_, lean_object* v_vals_2952_, lean_object* v_i_2953_, lean_object* v_entries_2954_){
_start:
{
lean_object* v___x_2955_; uint8_t v___x_2956_; 
v___x_2955_ = lean_array_get_size(v_keys_2951_);
v___x_2956_ = lean_nat_dec_lt(v_i_2953_, v___x_2955_);
if (v___x_2956_ == 0)
{
lean_dec(v_i_2953_);
return v_entries_2954_;
}
else
{
lean_object* v_k_2957_; lean_object* v_v_2958_; size_t v___x_2959_; size_t v___x_2960_; size_t v___x_2961_; uint64_t v___x_2962_; size_t v_h_2963_; size_t v___x_2964_; lean_object* v___x_2965_; size_t v___x_2966_; size_t v___x_2967_; size_t v___x_2968_; size_t v_h_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
v_k_2957_ = lean_array_fget_borrowed(v_keys_2951_, v_i_2953_);
v_v_2958_ = lean_array_fget_borrowed(v_vals_2952_, v_i_2953_);
v___x_2959_ = lean_ptr_addr(v_k_2957_);
v___x_2960_ = ((size_t)3ULL);
v___x_2961_ = lean_usize_shift_right(v___x_2959_, v___x_2960_);
v___x_2962_ = lean_usize_to_uint64(v___x_2961_);
v_h_2963_ = lean_uint64_to_usize(v___x_2962_);
v___x_2964_ = ((size_t)5ULL);
v___x_2965_ = lean_unsigned_to_nat(1u);
v___x_2966_ = ((size_t)1ULL);
v___x_2967_ = lean_usize_sub(v_depth_2950_, v___x_2966_);
v___x_2968_ = lean_usize_mul(v___x_2964_, v___x_2967_);
v_h_2969_ = lean_usize_shift_right(v_h_2963_, v___x_2968_);
v___x_2970_ = lean_nat_add(v_i_2953_, v___x_2965_);
lean_dec(v_i_2953_);
lean_inc(v_v_2958_);
lean_inc(v_k_2957_);
v___x_2971_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0___redArg(v_entries_2954_, v_h_2969_, v_depth_2950_, v_k_2957_, v_v_2958_);
v_i_2953_ = v___x_2970_;
v_entries_2954_ = v___x_2971_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_2973_, lean_object* v_keys_2974_, lean_object* v_vals_2975_, lean_object* v_i_2976_, lean_object* v_entries_2977_){
_start:
{
size_t v_depth_boxed_2978_; lean_object* v_res_2979_; 
v_depth_boxed_2978_ = lean_unbox_usize(v_depth_2973_);
lean_dec(v_depth_2973_);
v_res_2979_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__2___redArg(v_depth_boxed_2978_, v_keys_2974_, v_vals_2975_, v_i_2976_, v_entries_2977_);
lean_dec_ref(v_vals_2975_);
lean_dec_ref(v_keys_2974_);
return v_res_2979_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0___redArg___boxed(lean_object* v_x_2980_, lean_object* v_x_2981_, lean_object* v_x_2982_, lean_object* v_x_2983_, lean_object* v_x_2984_){
_start:
{
size_t v_x_151445__boxed_2985_; size_t v_x_151446__boxed_2986_; lean_object* v_res_2987_; 
v_x_151445__boxed_2985_ = lean_unbox_usize(v_x_2981_);
lean_dec(v_x_2981_);
v_x_151446__boxed_2986_ = lean_unbox_usize(v_x_2982_);
lean_dec(v_x_2982_);
v_res_2987_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0___redArg(v_x_2980_, v_x_151445__boxed_2985_, v_x_151446__boxed_2986_, v_x_2983_, v_x_2984_);
return v_res_2987_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0___redArg(lean_object* v_x_2988_, lean_object* v_x_2989_, lean_object* v_x_2990_){
_start:
{
size_t v___x_2991_; size_t v___x_2992_; size_t v___x_2993_; uint64_t v___x_2994_; size_t v___x_2995_; size_t v___x_2996_; lean_object* v___x_2997_; 
v___x_2991_ = lean_ptr_addr(v_x_2989_);
v___x_2992_ = ((size_t)3ULL);
v___x_2993_ = lean_usize_shift_right(v___x_2991_, v___x_2992_);
v___x_2994_ = lean_usize_to_uint64(v___x_2993_);
v___x_2995_ = lean_uint64_to_usize(v___x_2994_);
v___x_2996_ = ((size_t)1ULL);
v___x_2997_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0___redArg(v_x_2988_, v___x_2995_, v___x_2996_, v_x_2989_, v_x_2990_);
return v___x_2997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__0(lean_object* v_e_2998_, lean_object* v_val_2999_, lean_object* v_s_3000_){
_start:
{
lean_object* v_toRing_3001_; lean_object* v_invFn_x3f_3002_; lean_object* v_semiringId_x3f_3003_; lean_object* v_commSemiringInst_3004_; lean_object* v_commRingInst_3005_; lean_object* v_noZeroDivInst_x3f_3006_; lean_object* v_fieldInst_x3f_3007_; lean_object* v_powIdentityInst_x3f_3008_; lean_object* v_denoteEntries_3009_; lean_object* v_nextId_3010_; lean_object* v_steps_3011_; lean_object* v_queue_3012_; lean_object* v_basis_3013_; lean_object* v_diseqs_3014_; uint8_t v_recheck_3015_; lean_object* v_invSet_3016_; lean_object* v_powIdentityVarCount_3017_; lean_object* v_numEq0_x3f_3018_; uint8_t v_numEq0Updated_3019_; lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3053_; 
v_toRing_3001_ = lean_ctor_get(v_s_3000_, 0);
v_invFn_x3f_3002_ = lean_ctor_get(v_s_3000_, 1);
v_semiringId_x3f_3003_ = lean_ctor_get(v_s_3000_, 2);
v_commSemiringInst_3004_ = lean_ctor_get(v_s_3000_, 3);
v_commRingInst_3005_ = lean_ctor_get(v_s_3000_, 4);
v_noZeroDivInst_x3f_3006_ = lean_ctor_get(v_s_3000_, 5);
v_fieldInst_x3f_3007_ = lean_ctor_get(v_s_3000_, 6);
v_powIdentityInst_x3f_3008_ = lean_ctor_get(v_s_3000_, 7);
v_denoteEntries_3009_ = lean_ctor_get(v_s_3000_, 8);
v_nextId_3010_ = lean_ctor_get(v_s_3000_, 9);
v_steps_3011_ = lean_ctor_get(v_s_3000_, 10);
v_queue_3012_ = lean_ctor_get(v_s_3000_, 11);
v_basis_3013_ = lean_ctor_get(v_s_3000_, 12);
v_diseqs_3014_ = lean_ctor_get(v_s_3000_, 13);
v_recheck_3015_ = lean_ctor_get_uint8(v_s_3000_, sizeof(void*)*17);
v_invSet_3016_ = lean_ctor_get(v_s_3000_, 14);
v_powIdentityVarCount_3017_ = lean_ctor_get(v_s_3000_, 15);
v_numEq0_x3f_3018_ = lean_ctor_get(v_s_3000_, 16);
v_numEq0Updated_3019_ = lean_ctor_get_uint8(v_s_3000_, sizeof(void*)*17 + 1);
v_isSharedCheck_3053_ = !lean_is_exclusive(v_s_3000_);
if (v_isSharedCheck_3053_ == 0)
{
v___x_3021_ = v_s_3000_;
v_isShared_3022_ = v_isSharedCheck_3053_;
goto v_resetjp_3020_;
}
else
{
lean_inc(v_numEq0_x3f_3018_);
lean_inc(v_powIdentityVarCount_3017_);
lean_inc(v_invSet_3016_);
lean_inc(v_diseqs_3014_);
lean_inc(v_basis_3013_);
lean_inc(v_queue_3012_);
lean_inc(v_steps_3011_);
lean_inc(v_nextId_3010_);
lean_inc(v_denoteEntries_3009_);
lean_inc(v_powIdentityInst_x3f_3008_);
lean_inc(v_fieldInst_x3f_3007_);
lean_inc(v_noZeroDivInst_x3f_3006_);
lean_inc(v_commRingInst_3005_);
lean_inc(v_commSemiringInst_3004_);
lean_inc(v_semiringId_x3f_3003_);
lean_inc(v_invFn_x3f_3002_);
lean_inc(v_toRing_3001_);
lean_dec(v_s_3000_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3053_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v_id_3023_; lean_object* v_type_3024_; lean_object* v_u_3025_; lean_object* v_ringInst_3026_; lean_object* v_semiringInst_3027_; lean_object* v_charInst_x3f_3028_; lean_object* v_addFn_x3f_3029_; lean_object* v_mulFn_x3f_3030_; lean_object* v_subFn_x3f_3031_; lean_object* v_negFn_x3f_3032_; lean_object* v_powFn_x3f_3033_; lean_object* v_intCastFn_x3f_3034_; lean_object* v_natCastFn_x3f_3035_; lean_object* v_one_x3f_3036_; lean_object* v_vars_3037_; lean_object* v_varMap_3038_; lean_object* v_denote_3039_; lean_object* v___x_3041_; uint8_t v_isShared_3042_; uint8_t v_isSharedCheck_3052_; 
v_id_3023_ = lean_ctor_get(v_toRing_3001_, 0);
v_type_3024_ = lean_ctor_get(v_toRing_3001_, 1);
v_u_3025_ = lean_ctor_get(v_toRing_3001_, 2);
v_ringInst_3026_ = lean_ctor_get(v_toRing_3001_, 3);
v_semiringInst_3027_ = lean_ctor_get(v_toRing_3001_, 4);
v_charInst_x3f_3028_ = lean_ctor_get(v_toRing_3001_, 5);
v_addFn_x3f_3029_ = lean_ctor_get(v_toRing_3001_, 6);
v_mulFn_x3f_3030_ = lean_ctor_get(v_toRing_3001_, 7);
v_subFn_x3f_3031_ = lean_ctor_get(v_toRing_3001_, 8);
v_negFn_x3f_3032_ = lean_ctor_get(v_toRing_3001_, 9);
v_powFn_x3f_3033_ = lean_ctor_get(v_toRing_3001_, 10);
v_intCastFn_x3f_3034_ = lean_ctor_get(v_toRing_3001_, 11);
v_natCastFn_x3f_3035_ = lean_ctor_get(v_toRing_3001_, 12);
v_one_x3f_3036_ = lean_ctor_get(v_toRing_3001_, 13);
v_vars_3037_ = lean_ctor_get(v_toRing_3001_, 14);
v_varMap_3038_ = lean_ctor_get(v_toRing_3001_, 15);
v_denote_3039_ = lean_ctor_get(v_toRing_3001_, 16);
v_isSharedCheck_3052_ = !lean_is_exclusive(v_toRing_3001_);
if (v_isSharedCheck_3052_ == 0)
{
v___x_3041_ = v_toRing_3001_;
v_isShared_3042_ = v_isSharedCheck_3052_;
goto v_resetjp_3040_;
}
else
{
lean_inc(v_denote_3039_);
lean_inc(v_varMap_3038_);
lean_inc(v_vars_3037_);
lean_inc(v_one_x3f_3036_);
lean_inc(v_natCastFn_x3f_3035_);
lean_inc(v_intCastFn_x3f_3034_);
lean_inc(v_powFn_x3f_3033_);
lean_inc(v_negFn_x3f_3032_);
lean_inc(v_subFn_x3f_3031_);
lean_inc(v_mulFn_x3f_3030_);
lean_inc(v_addFn_x3f_3029_);
lean_inc(v_charInst_x3f_3028_);
lean_inc(v_semiringInst_3027_);
lean_inc(v_ringInst_3026_);
lean_inc(v_u_3025_);
lean_inc(v_type_3024_);
lean_inc(v_id_3023_);
lean_dec(v_toRing_3001_);
v___x_3041_ = lean_box(0);
v_isShared_3042_ = v_isSharedCheck_3052_;
goto v_resetjp_3040_;
}
v_resetjp_3040_:
{
lean_object* v___x_3043_; lean_object* v___x_3045_; 
lean_inc_ref(v_val_2999_);
lean_inc_ref(v_e_2998_);
v___x_3043_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0___redArg(v_denote_3039_, v_e_2998_, v_val_2999_);
if (v_isShared_3042_ == 0)
{
lean_ctor_set(v___x_3041_, 16, v___x_3043_);
v___x_3045_ = v___x_3041_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3051_; 
v_reuseFailAlloc_3051_ = lean_alloc_ctor(0, 17, 0);
lean_ctor_set(v_reuseFailAlloc_3051_, 0, v_id_3023_);
lean_ctor_set(v_reuseFailAlloc_3051_, 1, v_type_3024_);
lean_ctor_set(v_reuseFailAlloc_3051_, 2, v_u_3025_);
lean_ctor_set(v_reuseFailAlloc_3051_, 3, v_ringInst_3026_);
lean_ctor_set(v_reuseFailAlloc_3051_, 4, v_semiringInst_3027_);
lean_ctor_set(v_reuseFailAlloc_3051_, 5, v_charInst_x3f_3028_);
lean_ctor_set(v_reuseFailAlloc_3051_, 6, v_addFn_x3f_3029_);
lean_ctor_set(v_reuseFailAlloc_3051_, 7, v_mulFn_x3f_3030_);
lean_ctor_set(v_reuseFailAlloc_3051_, 8, v_subFn_x3f_3031_);
lean_ctor_set(v_reuseFailAlloc_3051_, 9, v_negFn_x3f_3032_);
lean_ctor_set(v_reuseFailAlloc_3051_, 10, v_powFn_x3f_3033_);
lean_ctor_set(v_reuseFailAlloc_3051_, 11, v_intCastFn_x3f_3034_);
lean_ctor_set(v_reuseFailAlloc_3051_, 12, v_natCastFn_x3f_3035_);
lean_ctor_set(v_reuseFailAlloc_3051_, 13, v_one_x3f_3036_);
lean_ctor_set(v_reuseFailAlloc_3051_, 14, v_vars_3037_);
lean_ctor_set(v_reuseFailAlloc_3051_, 15, v_varMap_3038_);
lean_ctor_set(v_reuseFailAlloc_3051_, 16, v___x_3043_);
v___x_3045_ = v_reuseFailAlloc_3051_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3049_; 
v___x_3046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3046_, 0, v_e_2998_);
lean_ctor_set(v___x_3046_, 1, v_val_2999_);
v___x_3047_ = l_Lean_PersistentArray_push___redArg(v_denoteEntries_3009_, v___x_3046_);
if (v_isShared_3022_ == 0)
{
lean_ctor_set(v___x_3021_, 8, v___x_3047_);
lean_ctor_set(v___x_3021_, 0, v___x_3045_);
v___x_3049_ = v___x_3021_;
goto v_reusejp_3048_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(0, 17, 2);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v___x_3045_);
lean_ctor_set(v_reuseFailAlloc_3050_, 1, v_invFn_x3f_3002_);
lean_ctor_set(v_reuseFailAlloc_3050_, 2, v_semiringId_x3f_3003_);
lean_ctor_set(v_reuseFailAlloc_3050_, 3, v_commSemiringInst_3004_);
lean_ctor_set(v_reuseFailAlloc_3050_, 4, v_commRingInst_3005_);
lean_ctor_set(v_reuseFailAlloc_3050_, 5, v_noZeroDivInst_x3f_3006_);
lean_ctor_set(v_reuseFailAlloc_3050_, 6, v_fieldInst_x3f_3007_);
lean_ctor_set(v_reuseFailAlloc_3050_, 7, v_powIdentityInst_x3f_3008_);
lean_ctor_set(v_reuseFailAlloc_3050_, 8, v___x_3047_);
lean_ctor_set(v_reuseFailAlloc_3050_, 9, v_nextId_3010_);
lean_ctor_set(v_reuseFailAlloc_3050_, 10, v_steps_3011_);
lean_ctor_set(v_reuseFailAlloc_3050_, 11, v_queue_3012_);
lean_ctor_set(v_reuseFailAlloc_3050_, 12, v_basis_3013_);
lean_ctor_set(v_reuseFailAlloc_3050_, 13, v_diseqs_3014_);
lean_ctor_set(v_reuseFailAlloc_3050_, 14, v_invSet_3016_);
lean_ctor_set(v_reuseFailAlloc_3050_, 15, v_powIdentityVarCount_3017_);
lean_ctor_set(v_reuseFailAlloc_3050_, 16, v_numEq0_x3f_3018_);
lean_ctor_set_uint8(v_reuseFailAlloc_3050_, sizeof(void*)*17, v_recheck_3015_);
lean_ctor_set_uint8(v_reuseFailAlloc_3050_, sizeof(void*)*17 + 1, v_numEq0Updated_3019_);
v___x_3049_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3048_;
}
v_reusejp_3048_:
{
return v___x_3049_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__1(lean_object* v___y_3054_, lean_object* v_e_3055_, lean_object* v_val_3056_, lean_object* v_s_3057_){
_start:
{
lean_object* v_rings_3058_; lean_object* v_typeIdOf_3059_; lean_object* v_exprToRingId_3060_; lean_object* v_semirings_3061_; lean_object* v_stypeIdOf_3062_; lean_object* v_exprToSemiringId_3063_; lean_object* v_ncRings_3064_; lean_object* v_exprToNCRingId_3065_; lean_object* v_nctypeIdOf_3066_; lean_object* v_ncSemirings_3067_; lean_object* v_exprToNCSemiringId_3068_; lean_object* v_ncstypeIdOf_3069_; lean_object* v_steps_3070_; uint8_t v_reportedMaxDegreeIssue_3071_; lean_object* v___x_3072_; uint8_t v___x_3073_; 
v_rings_3058_ = lean_ctor_get(v_s_3057_, 0);
v_typeIdOf_3059_ = lean_ctor_get(v_s_3057_, 1);
v_exprToRingId_3060_ = lean_ctor_get(v_s_3057_, 2);
v_semirings_3061_ = lean_ctor_get(v_s_3057_, 3);
v_stypeIdOf_3062_ = lean_ctor_get(v_s_3057_, 4);
v_exprToSemiringId_3063_ = lean_ctor_get(v_s_3057_, 5);
v_ncRings_3064_ = lean_ctor_get(v_s_3057_, 6);
v_exprToNCRingId_3065_ = lean_ctor_get(v_s_3057_, 7);
v_nctypeIdOf_3066_ = lean_ctor_get(v_s_3057_, 8);
v_ncSemirings_3067_ = lean_ctor_get(v_s_3057_, 9);
v_exprToNCSemiringId_3068_ = lean_ctor_get(v_s_3057_, 10);
v_ncstypeIdOf_3069_ = lean_ctor_get(v_s_3057_, 11);
v_steps_3070_ = lean_ctor_get(v_s_3057_, 12);
v_reportedMaxDegreeIssue_3071_ = lean_ctor_get_uint8(v_s_3057_, sizeof(void*)*13);
v___x_3072_ = lean_array_get_size(v_semirings_3061_);
v___x_3073_ = lean_nat_dec_lt(v___y_3054_, v___x_3072_);
if (v___x_3073_ == 0)
{
lean_dec_ref(v_val_3056_);
lean_dec_ref(v_e_3055_);
return v_s_3057_;
}
else
{
lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3115_; 
lean_inc(v_steps_3070_);
lean_inc_ref(v_ncstypeIdOf_3069_);
lean_inc_ref(v_exprToNCSemiringId_3068_);
lean_inc_ref(v_ncSemirings_3067_);
lean_inc_ref(v_nctypeIdOf_3066_);
lean_inc_ref(v_exprToNCRingId_3065_);
lean_inc_ref(v_ncRings_3064_);
lean_inc_ref(v_exprToSemiringId_3063_);
lean_inc_ref(v_stypeIdOf_3062_);
lean_inc_ref(v_semirings_3061_);
lean_inc_ref(v_exprToRingId_3060_);
lean_inc_ref(v_typeIdOf_3059_);
lean_inc_ref(v_rings_3058_);
v_isSharedCheck_3115_ = !lean_is_exclusive(v_s_3057_);
if (v_isSharedCheck_3115_ == 0)
{
lean_object* v_unused_3116_; lean_object* v_unused_3117_; lean_object* v_unused_3118_; lean_object* v_unused_3119_; lean_object* v_unused_3120_; lean_object* v_unused_3121_; lean_object* v_unused_3122_; lean_object* v_unused_3123_; lean_object* v_unused_3124_; lean_object* v_unused_3125_; lean_object* v_unused_3126_; lean_object* v_unused_3127_; lean_object* v_unused_3128_; 
v_unused_3116_ = lean_ctor_get(v_s_3057_, 12);
lean_dec(v_unused_3116_);
v_unused_3117_ = lean_ctor_get(v_s_3057_, 11);
lean_dec(v_unused_3117_);
v_unused_3118_ = lean_ctor_get(v_s_3057_, 10);
lean_dec(v_unused_3118_);
v_unused_3119_ = lean_ctor_get(v_s_3057_, 9);
lean_dec(v_unused_3119_);
v_unused_3120_ = lean_ctor_get(v_s_3057_, 8);
lean_dec(v_unused_3120_);
v_unused_3121_ = lean_ctor_get(v_s_3057_, 7);
lean_dec(v_unused_3121_);
v_unused_3122_ = lean_ctor_get(v_s_3057_, 6);
lean_dec(v_unused_3122_);
v_unused_3123_ = lean_ctor_get(v_s_3057_, 5);
lean_dec(v_unused_3123_);
v_unused_3124_ = lean_ctor_get(v_s_3057_, 4);
lean_dec(v_unused_3124_);
v_unused_3125_ = lean_ctor_get(v_s_3057_, 3);
lean_dec(v_unused_3125_);
v_unused_3126_ = lean_ctor_get(v_s_3057_, 2);
lean_dec(v_unused_3126_);
v_unused_3127_ = lean_ctor_get(v_s_3057_, 1);
lean_dec(v_unused_3127_);
v_unused_3128_ = lean_ctor_get(v_s_3057_, 0);
lean_dec(v_unused_3128_);
v___x_3075_ = v_s_3057_;
v_isShared_3076_ = v_isSharedCheck_3115_;
goto v_resetjp_3074_;
}
else
{
lean_dec(v_s_3057_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3115_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v_v_3077_; lean_object* v_toSemiring_3078_; lean_object* v_ringId_3079_; lean_object* v_commSemiringInst_3080_; lean_object* v_addRightCancelInst_x3f_3081_; lean_object* v_toQFn_x3f_3082_; lean_object* v___x_3084_; uint8_t v_isShared_3085_; uint8_t v_isSharedCheck_3114_; 
v_v_3077_ = lean_array_fget(v_semirings_3061_, v___y_3054_);
v_toSemiring_3078_ = lean_ctor_get(v_v_3077_, 0);
v_ringId_3079_ = lean_ctor_get(v_v_3077_, 1);
v_commSemiringInst_3080_ = lean_ctor_get(v_v_3077_, 2);
v_addRightCancelInst_x3f_3081_ = lean_ctor_get(v_v_3077_, 3);
v_toQFn_x3f_3082_ = lean_ctor_get(v_v_3077_, 4);
v_isSharedCheck_3114_ = !lean_is_exclusive(v_v_3077_);
if (v_isSharedCheck_3114_ == 0)
{
v___x_3084_ = v_v_3077_;
v_isShared_3085_ = v_isSharedCheck_3114_;
goto v_resetjp_3083_;
}
else
{
lean_inc(v_toQFn_x3f_3082_);
lean_inc(v_addRightCancelInst_x3f_3081_);
lean_inc(v_commSemiringInst_3080_);
lean_inc(v_ringId_3079_);
lean_inc(v_toSemiring_3078_);
lean_dec(v_v_3077_);
v___x_3084_ = lean_box(0);
v_isShared_3085_ = v_isSharedCheck_3114_;
goto v_resetjp_3083_;
}
v_resetjp_3083_:
{
lean_object* v_id_3086_; lean_object* v_type_3087_; lean_object* v_u_3088_; lean_object* v_semiringInst_3089_; lean_object* v_addFn_x3f_3090_; lean_object* v_mulFn_x3f_3091_; lean_object* v_powFn_x3f_3092_; lean_object* v_natCastFn_x3f_3093_; lean_object* v_denote_3094_; lean_object* v_vars_3095_; lean_object* v_varMap_3096_; lean_object* v___x_3098_; uint8_t v_isShared_3099_; uint8_t v_isSharedCheck_3113_; 
v_id_3086_ = lean_ctor_get(v_toSemiring_3078_, 0);
v_type_3087_ = lean_ctor_get(v_toSemiring_3078_, 1);
v_u_3088_ = lean_ctor_get(v_toSemiring_3078_, 2);
v_semiringInst_3089_ = lean_ctor_get(v_toSemiring_3078_, 3);
v_addFn_x3f_3090_ = lean_ctor_get(v_toSemiring_3078_, 4);
v_mulFn_x3f_3091_ = lean_ctor_get(v_toSemiring_3078_, 5);
v_powFn_x3f_3092_ = lean_ctor_get(v_toSemiring_3078_, 6);
v_natCastFn_x3f_3093_ = lean_ctor_get(v_toSemiring_3078_, 7);
v_denote_3094_ = lean_ctor_get(v_toSemiring_3078_, 8);
v_vars_3095_ = lean_ctor_get(v_toSemiring_3078_, 9);
v_varMap_3096_ = lean_ctor_get(v_toSemiring_3078_, 10);
v_isSharedCheck_3113_ = !lean_is_exclusive(v_toSemiring_3078_);
if (v_isSharedCheck_3113_ == 0)
{
v___x_3098_ = v_toSemiring_3078_;
v_isShared_3099_ = v_isSharedCheck_3113_;
goto v_resetjp_3097_;
}
else
{
lean_inc(v_varMap_3096_);
lean_inc(v_vars_3095_);
lean_inc(v_denote_3094_);
lean_inc(v_natCastFn_x3f_3093_);
lean_inc(v_powFn_x3f_3092_);
lean_inc(v_mulFn_x3f_3091_);
lean_inc(v_addFn_x3f_3090_);
lean_inc(v_semiringInst_3089_);
lean_inc(v_u_3088_);
lean_inc(v_type_3087_);
lean_inc(v_id_3086_);
lean_dec(v_toSemiring_3078_);
v___x_3098_ = lean_box(0);
v_isShared_3099_ = v_isSharedCheck_3113_;
goto v_resetjp_3097_;
}
v_resetjp_3097_:
{
lean_object* v___x_3100_; lean_object* v_xs_x27_3101_; lean_object* v___x_3102_; lean_object* v___x_3104_; 
v___x_3100_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processInv_spec__0_spec__0___redArg___closed__0);
v_xs_x27_3101_ = lean_array_fset(v_semirings_3061_, v___y_3054_, v___x_3100_);
v___x_3102_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0___redArg(v_denote_3094_, v_e_3055_, v_val_3056_);
if (v_isShared_3099_ == 0)
{
lean_ctor_set(v___x_3098_, 8, v___x_3102_);
v___x_3104_ = v___x_3098_;
goto v_reusejp_3103_;
}
else
{
lean_object* v_reuseFailAlloc_3112_; 
v_reuseFailAlloc_3112_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_3112_, 0, v_id_3086_);
lean_ctor_set(v_reuseFailAlloc_3112_, 1, v_type_3087_);
lean_ctor_set(v_reuseFailAlloc_3112_, 2, v_u_3088_);
lean_ctor_set(v_reuseFailAlloc_3112_, 3, v_semiringInst_3089_);
lean_ctor_set(v_reuseFailAlloc_3112_, 4, v_addFn_x3f_3090_);
lean_ctor_set(v_reuseFailAlloc_3112_, 5, v_mulFn_x3f_3091_);
lean_ctor_set(v_reuseFailAlloc_3112_, 6, v_powFn_x3f_3092_);
lean_ctor_set(v_reuseFailAlloc_3112_, 7, v_natCastFn_x3f_3093_);
lean_ctor_set(v_reuseFailAlloc_3112_, 8, v___x_3102_);
lean_ctor_set(v_reuseFailAlloc_3112_, 9, v_vars_3095_);
lean_ctor_set(v_reuseFailAlloc_3112_, 10, v_varMap_3096_);
v___x_3104_ = v_reuseFailAlloc_3112_;
goto v_reusejp_3103_;
}
v_reusejp_3103_:
{
lean_object* v___x_3106_; 
if (v_isShared_3085_ == 0)
{
lean_ctor_set(v___x_3084_, 0, v___x_3104_);
v___x_3106_ = v___x_3084_;
goto v_reusejp_3105_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v___x_3104_);
lean_ctor_set(v_reuseFailAlloc_3111_, 1, v_ringId_3079_);
lean_ctor_set(v_reuseFailAlloc_3111_, 2, v_commSemiringInst_3080_);
lean_ctor_set(v_reuseFailAlloc_3111_, 3, v_addRightCancelInst_x3f_3081_);
lean_ctor_set(v_reuseFailAlloc_3111_, 4, v_toQFn_x3f_3082_);
v___x_3106_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3105_;
}
v_reusejp_3105_:
{
lean_object* v___x_3107_; lean_object* v___x_3109_; 
v___x_3107_ = lean_array_fset(v_xs_x27_3101_, v___y_3054_, v___x_3106_);
if (v_isShared_3076_ == 0)
{
lean_ctor_set(v___x_3075_, 3, v___x_3107_);
v___x_3109_ = v___x_3075_;
goto v_reusejp_3108_;
}
else
{
lean_object* v_reuseFailAlloc_3110_; 
v_reuseFailAlloc_3110_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_3110_, 0, v_rings_3058_);
lean_ctor_set(v_reuseFailAlloc_3110_, 1, v_typeIdOf_3059_);
lean_ctor_set(v_reuseFailAlloc_3110_, 2, v_exprToRingId_3060_);
lean_ctor_set(v_reuseFailAlloc_3110_, 3, v___x_3107_);
lean_ctor_set(v_reuseFailAlloc_3110_, 4, v_stypeIdOf_3062_);
lean_ctor_set(v_reuseFailAlloc_3110_, 5, v_exprToSemiringId_3063_);
lean_ctor_set(v_reuseFailAlloc_3110_, 6, v_ncRings_3064_);
lean_ctor_set(v_reuseFailAlloc_3110_, 7, v_exprToNCRingId_3065_);
lean_ctor_set(v_reuseFailAlloc_3110_, 8, v_nctypeIdOf_3066_);
lean_ctor_set(v_reuseFailAlloc_3110_, 9, v_ncSemirings_3067_);
lean_ctor_set(v_reuseFailAlloc_3110_, 10, v_exprToNCSemiringId_3068_);
lean_ctor_set(v_reuseFailAlloc_3110_, 11, v_ncstypeIdOf_3069_);
lean_ctor_set(v_reuseFailAlloc_3110_, 12, v_steps_3070_);
lean_ctor_set_uint8(v_reuseFailAlloc_3110_, sizeof(void*)*13, v_reportedMaxDegreeIssue_3071_);
v___x_3109_ = v_reuseFailAlloc_3110_;
goto v_reusejp_3108_;
}
v_reusejp_3108_:
{
return v___x_3109_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__1___boxed(lean_object* v___y_3129_, lean_object* v_e_3130_, lean_object* v_val_3131_, lean_object* v_s_3132_){
_start:
{
lean_object* v_res_3133_; 
v_res_3133_ = l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__1(v___y_3129_, v_e_3130_, v_val_3131_, v_s_3132_);
lean_dec(v___y_3129_);
return v_res_3133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__2(lean_object* v_e_3134_, lean_object* v_val_3135_, lean_object* v_s_3136_){
_start:
{
lean_object* v_id_3137_; lean_object* v_type_3138_; lean_object* v_u_3139_; lean_object* v_ringInst_3140_; lean_object* v_semiringInst_3141_; lean_object* v_charInst_x3f_3142_; lean_object* v_addFn_x3f_3143_; lean_object* v_mulFn_x3f_3144_; lean_object* v_subFn_x3f_3145_; lean_object* v_negFn_x3f_3146_; lean_object* v_powFn_x3f_3147_; lean_object* v_intCastFn_x3f_3148_; lean_object* v_natCastFn_x3f_3149_; lean_object* v_one_x3f_3150_; lean_object* v_vars_3151_; lean_object* v_varMap_3152_; lean_object* v_denote_3153_; lean_object* v___x_3155_; uint8_t v_isShared_3156_; uint8_t v_isSharedCheck_3161_; 
v_id_3137_ = lean_ctor_get(v_s_3136_, 0);
v_type_3138_ = lean_ctor_get(v_s_3136_, 1);
v_u_3139_ = lean_ctor_get(v_s_3136_, 2);
v_ringInst_3140_ = lean_ctor_get(v_s_3136_, 3);
v_semiringInst_3141_ = lean_ctor_get(v_s_3136_, 4);
v_charInst_x3f_3142_ = lean_ctor_get(v_s_3136_, 5);
v_addFn_x3f_3143_ = lean_ctor_get(v_s_3136_, 6);
v_mulFn_x3f_3144_ = lean_ctor_get(v_s_3136_, 7);
v_subFn_x3f_3145_ = lean_ctor_get(v_s_3136_, 8);
v_negFn_x3f_3146_ = lean_ctor_get(v_s_3136_, 9);
v_powFn_x3f_3147_ = lean_ctor_get(v_s_3136_, 10);
v_intCastFn_x3f_3148_ = lean_ctor_get(v_s_3136_, 11);
v_natCastFn_x3f_3149_ = lean_ctor_get(v_s_3136_, 12);
v_one_x3f_3150_ = lean_ctor_get(v_s_3136_, 13);
v_vars_3151_ = lean_ctor_get(v_s_3136_, 14);
v_varMap_3152_ = lean_ctor_get(v_s_3136_, 15);
v_denote_3153_ = lean_ctor_get(v_s_3136_, 16);
v_isSharedCheck_3161_ = !lean_is_exclusive(v_s_3136_);
if (v_isSharedCheck_3161_ == 0)
{
v___x_3155_ = v_s_3136_;
v_isShared_3156_ = v_isSharedCheck_3161_;
goto v_resetjp_3154_;
}
else
{
lean_inc(v_denote_3153_);
lean_inc(v_varMap_3152_);
lean_inc(v_vars_3151_);
lean_inc(v_one_x3f_3150_);
lean_inc(v_natCastFn_x3f_3149_);
lean_inc(v_intCastFn_x3f_3148_);
lean_inc(v_powFn_x3f_3147_);
lean_inc(v_negFn_x3f_3146_);
lean_inc(v_subFn_x3f_3145_);
lean_inc(v_mulFn_x3f_3144_);
lean_inc(v_addFn_x3f_3143_);
lean_inc(v_charInst_x3f_3142_);
lean_inc(v_semiringInst_3141_);
lean_inc(v_ringInst_3140_);
lean_inc(v_u_3139_);
lean_inc(v_type_3138_);
lean_inc(v_id_3137_);
lean_dec(v_s_3136_);
v___x_3155_ = lean_box(0);
v_isShared_3156_ = v_isSharedCheck_3161_;
goto v_resetjp_3154_;
}
v_resetjp_3154_:
{
lean_object* v___x_3157_; lean_object* v___x_3159_; 
v___x_3157_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0___redArg(v_denote_3153_, v_e_3134_, v_val_3135_);
if (v_isShared_3156_ == 0)
{
lean_ctor_set(v___x_3155_, 16, v___x_3157_);
v___x_3159_ = v___x_3155_;
goto v_reusejp_3158_;
}
else
{
lean_object* v_reuseFailAlloc_3160_; 
v_reuseFailAlloc_3160_ = lean_alloc_ctor(0, 17, 0);
lean_ctor_set(v_reuseFailAlloc_3160_, 0, v_id_3137_);
lean_ctor_set(v_reuseFailAlloc_3160_, 1, v_type_3138_);
lean_ctor_set(v_reuseFailAlloc_3160_, 2, v_u_3139_);
lean_ctor_set(v_reuseFailAlloc_3160_, 3, v_ringInst_3140_);
lean_ctor_set(v_reuseFailAlloc_3160_, 4, v_semiringInst_3141_);
lean_ctor_set(v_reuseFailAlloc_3160_, 5, v_charInst_x3f_3142_);
lean_ctor_set(v_reuseFailAlloc_3160_, 6, v_addFn_x3f_3143_);
lean_ctor_set(v_reuseFailAlloc_3160_, 7, v_mulFn_x3f_3144_);
lean_ctor_set(v_reuseFailAlloc_3160_, 8, v_subFn_x3f_3145_);
lean_ctor_set(v_reuseFailAlloc_3160_, 9, v_negFn_x3f_3146_);
lean_ctor_set(v_reuseFailAlloc_3160_, 10, v_powFn_x3f_3147_);
lean_ctor_set(v_reuseFailAlloc_3160_, 11, v_intCastFn_x3f_3148_);
lean_ctor_set(v_reuseFailAlloc_3160_, 12, v_natCastFn_x3f_3149_);
lean_ctor_set(v_reuseFailAlloc_3160_, 13, v_one_x3f_3150_);
lean_ctor_set(v_reuseFailAlloc_3160_, 14, v_vars_3151_);
lean_ctor_set(v_reuseFailAlloc_3160_, 15, v_varMap_3152_);
lean_ctor_set(v_reuseFailAlloc_3160_, 16, v___x_3157_);
v___x_3159_ = v_reuseFailAlloc_3160_;
goto v_reusejp_3158_;
}
v_reusejp_3158_:
{
return v___x_3159_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__3(lean_object* v_e_3162_, lean_object* v_val_3163_, lean_object* v_s_3164_){
_start:
{
lean_object* v_id_3165_; lean_object* v_type_3166_; lean_object* v_u_3167_; lean_object* v_semiringInst_3168_; lean_object* v_addFn_x3f_3169_; lean_object* v_mulFn_x3f_3170_; lean_object* v_powFn_x3f_3171_; lean_object* v_natCastFn_x3f_3172_; lean_object* v_denote_3173_; lean_object* v_vars_3174_; lean_object* v_varMap_3175_; lean_object* v___x_3177_; uint8_t v_isShared_3178_; uint8_t v_isSharedCheck_3183_; 
v_id_3165_ = lean_ctor_get(v_s_3164_, 0);
v_type_3166_ = lean_ctor_get(v_s_3164_, 1);
v_u_3167_ = lean_ctor_get(v_s_3164_, 2);
v_semiringInst_3168_ = lean_ctor_get(v_s_3164_, 3);
v_addFn_x3f_3169_ = lean_ctor_get(v_s_3164_, 4);
v_mulFn_x3f_3170_ = lean_ctor_get(v_s_3164_, 5);
v_powFn_x3f_3171_ = lean_ctor_get(v_s_3164_, 6);
v_natCastFn_x3f_3172_ = lean_ctor_get(v_s_3164_, 7);
v_denote_3173_ = lean_ctor_get(v_s_3164_, 8);
v_vars_3174_ = lean_ctor_get(v_s_3164_, 9);
v_varMap_3175_ = lean_ctor_get(v_s_3164_, 10);
v_isSharedCheck_3183_ = !lean_is_exclusive(v_s_3164_);
if (v_isSharedCheck_3183_ == 0)
{
v___x_3177_ = v_s_3164_;
v_isShared_3178_ = v_isSharedCheck_3183_;
goto v_resetjp_3176_;
}
else
{
lean_inc(v_varMap_3175_);
lean_inc(v_vars_3174_);
lean_inc(v_denote_3173_);
lean_inc(v_natCastFn_x3f_3172_);
lean_inc(v_powFn_x3f_3171_);
lean_inc(v_mulFn_x3f_3170_);
lean_inc(v_addFn_x3f_3169_);
lean_inc(v_semiringInst_3168_);
lean_inc(v_u_3167_);
lean_inc(v_type_3166_);
lean_inc(v_id_3165_);
lean_dec(v_s_3164_);
v___x_3177_ = lean_box(0);
v_isShared_3178_ = v_isSharedCheck_3183_;
goto v_resetjp_3176_;
}
v_resetjp_3176_:
{
lean_object* v___x_3179_; lean_object* v___x_3181_; 
v___x_3179_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0___redArg(v_denote_3173_, v_e_3162_, v_val_3163_);
if (v_isShared_3178_ == 0)
{
lean_ctor_set(v___x_3177_, 8, v___x_3179_);
v___x_3181_ = v___x_3177_;
goto v_reusejp_3180_;
}
else
{
lean_object* v_reuseFailAlloc_3182_; 
v_reuseFailAlloc_3182_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_3182_, 0, v_id_3165_);
lean_ctor_set(v_reuseFailAlloc_3182_, 1, v_type_3166_);
lean_ctor_set(v_reuseFailAlloc_3182_, 2, v_u_3167_);
lean_ctor_set(v_reuseFailAlloc_3182_, 3, v_semiringInst_3168_);
lean_ctor_set(v_reuseFailAlloc_3182_, 4, v_addFn_x3f_3169_);
lean_ctor_set(v_reuseFailAlloc_3182_, 5, v_mulFn_x3f_3170_);
lean_ctor_set(v_reuseFailAlloc_3182_, 6, v_powFn_x3f_3171_);
lean_ctor_set(v_reuseFailAlloc_3182_, 7, v_natCastFn_x3f_3172_);
lean_ctor_set(v_reuseFailAlloc_3182_, 8, v___x_3179_);
lean_ctor_set(v_reuseFailAlloc_3182_, 9, v_vars_3174_);
lean_ctor_set(v_reuseFailAlloc_3182_, 10, v_varMap_3175_);
v___x_3181_ = v_reuseFailAlloc_3182_;
goto v_reusejp_3180_;
}
v_reusejp_3180_:
{
return v___x_3181_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1___redArg(lean_object* v_cls_3184_, lean_object* v_msg_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_){
_start:
{
lean_object* v_ref_3191_; lean_object* v___x_3192_; lean_object* v_a_3193_; lean_object* v___x_3195_; uint8_t v_isShared_3196_; uint8_t v_isSharedCheck_3237_; 
v_ref_3191_ = lean_ctor_get(v___y_3188_, 2);
v___x_3192_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8_spec__9(v_msg_3185_, v___y_3186_, v___y_3187_, v___y_3188_, v___y_3189_);
v_a_3193_ = lean_ctor_get(v___x_3192_, 0);
v_isSharedCheck_3237_ = !lean_is_exclusive(v___x_3192_);
if (v_isSharedCheck_3237_ == 0)
{
v___x_3195_ = v___x_3192_;
v_isShared_3196_ = v_isSharedCheck_3237_;
goto v_resetjp_3194_;
}
else
{
lean_inc(v_a_3193_);
lean_dec(v___x_3192_);
v___x_3195_ = lean_box(0);
v_isShared_3196_ = v_isSharedCheck_3237_;
goto v_resetjp_3194_;
}
v_resetjp_3194_:
{
lean_object* v___x_3197_; lean_object* v_traceState_3198_; lean_object* v_env_3199_; lean_object* v_nextMacroScope_3200_; lean_object* v_ngen_3201_; lean_object* v_auxDeclNGen_3202_; lean_object* v_cache_3203_; lean_object* v_messages_3204_; lean_object* v_infoState_3205_; lean_object* v_snapshotTasks_3206_; lean_object* v___x_3208_; uint8_t v_isShared_3209_; uint8_t v_isSharedCheck_3236_; 
v___x_3197_ = lean_st_ref_take(v___y_3189_);
v_traceState_3198_ = lean_ctor_get(v___x_3197_, 4);
v_env_3199_ = lean_ctor_get(v___x_3197_, 0);
v_nextMacroScope_3200_ = lean_ctor_get(v___x_3197_, 1);
v_ngen_3201_ = lean_ctor_get(v___x_3197_, 2);
v_auxDeclNGen_3202_ = lean_ctor_get(v___x_3197_, 3);
v_cache_3203_ = lean_ctor_get(v___x_3197_, 5);
v_messages_3204_ = lean_ctor_get(v___x_3197_, 6);
v_infoState_3205_ = lean_ctor_get(v___x_3197_, 7);
v_snapshotTasks_3206_ = lean_ctor_get(v___x_3197_, 8);
v_isSharedCheck_3236_ = !lean_is_exclusive(v___x_3197_);
if (v_isSharedCheck_3236_ == 0)
{
v___x_3208_ = v___x_3197_;
v_isShared_3209_ = v_isSharedCheck_3236_;
goto v_resetjp_3207_;
}
else
{
lean_inc(v_snapshotTasks_3206_);
lean_inc(v_infoState_3205_);
lean_inc(v_messages_3204_);
lean_inc(v_cache_3203_);
lean_inc(v_traceState_3198_);
lean_inc(v_auxDeclNGen_3202_);
lean_inc(v_ngen_3201_);
lean_inc(v_nextMacroScope_3200_);
lean_inc(v_env_3199_);
lean_dec(v___x_3197_);
v___x_3208_ = lean_box(0);
v_isShared_3209_ = v_isSharedCheck_3236_;
goto v_resetjp_3207_;
}
v_resetjp_3207_:
{
uint64_t v_tid_3210_; lean_object* v_traces_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3235_; 
v_tid_3210_ = lean_ctor_get_uint64(v_traceState_3198_, sizeof(void*)*1);
v_traces_3211_ = lean_ctor_get(v_traceState_3198_, 0);
v_isSharedCheck_3235_ = !lean_is_exclusive(v_traceState_3198_);
if (v_isSharedCheck_3235_ == 0)
{
v___x_3213_ = v_traceState_3198_;
v_isShared_3214_ = v_isSharedCheck_3235_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_traces_3211_);
lean_dec(v_traceState_3198_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3235_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
lean_object* v___x_3215_; lean_object* v___x_3216_; double v___x_3217_; uint8_t v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3226_; 
v___x_3215_ = lean_box(0);
v___x_3216_ = lean_box(0);
v___x_3217_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0);
v___x_3218_ = 0;
v___x_3219_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__1));
v___x_3220_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3220_, 0, v_cls_3184_);
lean_ctor_set(v___x_3220_, 1, v___x_3216_);
lean_ctor_set(v___x_3220_, 2, v___x_3219_);
lean_ctor_set_float(v___x_3220_, sizeof(void*)*3, v___x_3217_);
lean_ctor_set_float(v___x_3220_, sizeof(void*)*3 + 8, v___x_3217_);
lean_ctor_set_uint8(v___x_3220_, sizeof(void*)*3 + 16, v___x_3218_);
v___x_3221_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__2));
v___x_3222_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3222_, 0, v___x_3220_);
lean_ctor_set(v___x_3222_, 1, v_a_3193_);
lean_ctor_set(v___x_3222_, 2, v___x_3221_);
lean_inc(v_ref_3191_);
v___x_3223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3223_, 0, v_ref_3191_);
lean_ctor_set(v___x_3223_, 1, v___x_3222_);
v___x_3224_ = l_Lean_PersistentArray_push___redArg(v_traces_3211_, v___x_3223_);
if (v_isShared_3214_ == 0)
{
lean_ctor_set(v___x_3213_, 0, v___x_3224_);
v___x_3226_ = v___x_3213_;
goto v_reusejp_3225_;
}
else
{
lean_object* v_reuseFailAlloc_3234_; 
v_reuseFailAlloc_3234_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3234_, 0, v___x_3224_);
lean_ctor_set_uint64(v_reuseFailAlloc_3234_, sizeof(void*)*1, v_tid_3210_);
v___x_3226_ = v_reuseFailAlloc_3234_;
goto v_reusejp_3225_;
}
v_reusejp_3225_:
{
lean_object* v___x_3228_; 
if (v_isShared_3209_ == 0)
{
lean_ctor_set(v___x_3208_, 4, v___x_3226_);
v___x_3228_ = v___x_3208_;
goto v_reusejp_3227_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v_env_3199_);
lean_ctor_set(v_reuseFailAlloc_3233_, 1, v_nextMacroScope_3200_);
lean_ctor_set(v_reuseFailAlloc_3233_, 2, v_ngen_3201_);
lean_ctor_set(v_reuseFailAlloc_3233_, 3, v_auxDeclNGen_3202_);
lean_ctor_set(v_reuseFailAlloc_3233_, 4, v___x_3226_);
lean_ctor_set(v_reuseFailAlloc_3233_, 5, v_cache_3203_);
lean_ctor_set(v_reuseFailAlloc_3233_, 6, v_messages_3204_);
lean_ctor_set(v_reuseFailAlloc_3233_, 7, v_infoState_3205_);
lean_ctor_set(v_reuseFailAlloc_3233_, 8, v_snapshotTasks_3206_);
v___x_3228_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3227_;
}
v_reusejp_3227_:
{
lean_object* v___x_3229_; lean_object* v___x_3231_; 
v___x_3229_ = lean_st_ref_put(v___y_3189_, v___x_3228_);
if (v_isShared_3196_ == 0)
{
lean_ctor_set(v___x_3195_, 0, v___x_3215_);
v___x_3231_ = v___x_3195_;
goto v_reusejp_3230_;
}
else
{
lean_object* v_reuseFailAlloc_3232_; 
v_reuseFailAlloc_3232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3232_, 0, v___x_3215_);
v___x_3231_ = v_reuseFailAlloc_3232_;
goto v_reusejp_3230_;
}
v_reusejp_3230_:
{
return v___x_3231_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1___redArg___boxed(lean_object* v_cls_3238_, lean_object* v_msg_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_){
_start:
{
lean_object* v_res_3245_; 
v_res_3245_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1___redArg(v_cls_3238_, v_msg_3239_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_);
lean_dec(v___y_3243_);
lean_dec_ref(v___y_3242_);
lean_dec(v___y_3241_);
lean_dec_ref(v___y_3240_);
return v_res_3245_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2___redArg(lean_object* v_cls_3246_, lean_object* v_msg_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_){
_start:
{
lean_object* v_ref_3253_; lean_object* v___x_3254_; lean_object* v_a_3255_; lean_object* v___x_3257_; uint8_t v_isShared_3258_; uint8_t v_isSharedCheck_3299_; 
v_ref_3253_ = lean_ctor_get(v___y_3250_, 2);
v___x_3254_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8_spec__9(v_msg_3247_, v___y_3248_, v___y_3249_, v___y_3250_, v___y_3251_);
v_a_3255_ = lean_ctor_get(v___x_3254_, 0);
v_isSharedCheck_3299_ = !lean_is_exclusive(v___x_3254_);
if (v_isSharedCheck_3299_ == 0)
{
v___x_3257_ = v___x_3254_;
v_isShared_3258_ = v_isSharedCheck_3299_;
goto v_resetjp_3256_;
}
else
{
lean_inc(v_a_3255_);
lean_dec(v___x_3254_);
v___x_3257_ = lean_box(0);
v_isShared_3258_ = v_isSharedCheck_3299_;
goto v_resetjp_3256_;
}
v_resetjp_3256_:
{
lean_object* v___x_3259_; lean_object* v_traceState_3260_; lean_object* v_env_3261_; lean_object* v_nextMacroScope_3262_; lean_object* v_ngen_3263_; lean_object* v_auxDeclNGen_3264_; lean_object* v_cache_3265_; lean_object* v_messages_3266_; lean_object* v_infoState_3267_; lean_object* v_snapshotTasks_3268_; lean_object* v___x_3270_; uint8_t v_isShared_3271_; uint8_t v_isSharedCheck_3298_; 
v___x_3259_ = lean_st_ref_take(v___y_3251_);
v_traceState_3260_ = lean_ctor_get(v___x_3259_, 4);
v_env_3261_ = lean_ctor_get(v___x_3259_, 0);
v_nextMacroScope_3262_ = lean_ctor_get(v___x_3259_, 1);
v_ngen_3263_ = lean_ctor_get(v___x_3259_, 2);
v_auxDeclNGen_3264_ = lean_ctor_get(v___x_3259_, 3);
v_cache_3265_ = lean_ctor_get(v___x_3259_, 5);
v_messages_3266_ = lean_ctor_get(v___x_3259_, 6);
v_infoState_3267_ = lean_ctor_get(v___x_3259_, 7);
v_snapshotTasks_3268_ = lean_ctor_get(v___x_3259_, 8);
v_isSharedCheck_3298_ = !lean_is_exclusive(v___x_3259_);
if (v_isSharedCheck_3298_ == 0)
{
v___x_3270_ = v___x_3259_;
v_isShared_3271_ = v_isSharedCheck_3298_;
goto v_resetjp_3269_;
}
else
{
lean_inc(v_snapshotTasks_3268_);
lean_inc(v_infoState_3267_);
lean_inc(v_messages_3266_);
lean_inc(v_cache_3265_);
lean_inc(v_traceState_3260_);
lean_inc(v_auxDeclNGen_3264_);
lean_inc(v_ngen_3263_);
lean_inc(v_nextMacroScope_3262_);
lean_inc(v_env_3261_);
lean_dec(v___x_3259_);
v___x_3270_ = lean_box(0);
v_isShared_3271_ = v_isSharedCheck_3298_;
goto v_resetjp_3269_;
}
v_resetjp_3269_:
{
uint64_t v_tid_3272_; lean_object* v_traces_3273_; lean_object* v___x_3275_; uint8_t v_isShared_3276_; uint8_t v_isSharedCheck_3297_; 
v_tid_3272_ = lean_ctor_get_uint64(v_traceState_3260_, sizeof(void*)*1);
v_traces_3273_ = lean_ctor_get(v_traceState_3260_, 0);
v_isSharedCheck_3297_ = !lean_is_exclusive(v_traceState_3260_);
if (v_isSharedCheck_3297_ == 0)
{
v___x_3275_ = v_traceState_3260_;
v_isShared_3276_ = v_isSharedCheck_3297_;
goto v_resetjp_3274_;
}
else
{
lean_inc(v_traces_3273_);
lean_dec(v_traceState_3260_);
v___x_3275_ = lean_box(0);
v_isShared_3276_ = v_isSharedCheck_3297_;
goto v_resetjp_3274_;
}
v_resetjp_3274_:
{
lean_object* v___x_3277_; lean_object* v___x_3278_; double v___x_3279_; uint8_t v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3288_; 
v___x_3277_ = lean_box(0);
v___x_3278_ = lean_box(0);
v___x_3279_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0);
v___x_3280_ = 0;
v___x_3281_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__1));
v___x_3282_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3282_, 0, v_cls_3246_);
lean_ctor_set(v___x_3282_, 1, v___x_3278_);
lean_ctor_set(v___x_3282_, 2, v___x_3281_);
lean_ctor_set_float(v___x_3282_, sizeof(void*)*3, v___x_3279_);
lean_ctor_set_float(v___x_3282_, sizeof(void*)*3 + 8, v___x_3279_);
lean_ctor_set_uint8(v___x_3282_, sizeof(void*)*3 + 16, v___x_3280_);
v___x_3283_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__2));
v___x_3284_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3284_, 0, v___x_3282_);
lean_ctor_set(v___x_3284_, 1, v_a_3255_);
lean_ctor_set(v___x_3284_, 2, v___x_3283_);
lean_inc(v_ref_3253_);
v___x_3285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3285_, 0, v_ref_3253_);
lean_ctor_set(v___x_3285_, 1, v___x_3284_);
v___x_3286_ = l_Lean_PersistentArray_push___redArg(v_traces_3273_, v___x_3285_);
if (v_isShared_3276_ == 0)
{
lean_ctor_set(v___x_3275_, 0, v___x_3286_);
v___x_3288_ = v___x_3275_;
goto v_reusejp_3287_;
}
else
{
lean_object* v_reuseFailAlloc_3296_; 
v_reuseFailAlloc_3296_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3296_, 0, v___x_3286_);
lean_ctor_set_uint64(v_reuseFailAlloc_3296_, sizeof(void*)*1, v_tid_3272_);
v___x_3288_ = v_reuseFailAlloc_3296_;
goto v_reusejp_3287_;
}
v_reusejp_3287_:
{
lean_object* v___x_3290_; 
if (v_isShared_3271_ == 0)
{
lean_ctor_set(v___x_3270_, 4, v___x_3288_);
v___x_3290_ = v___x_3270_;
goto v_reusejp_3289_;
}
else
{
lean_object* v_reuseFailAlloc_3295_; 
v_reuseFailAlloc_3295_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3295_, 0, v_env_3261_);
lean_ctor_set(v_reuseFailAlloc_3295_, 1, v_nextMacroScope_3262_);
lean_ctor_set(v_reuseFailAlloc_3295_, 2, v_ngen_3263_);
lean_ctor_set(v_reuseFailAlloc_3295_, 3, v_auxDeclNGen_3264_);
lean_ctor_set(v_reuseFailAlloc_3295_, 4, v___x_3288_);
lean_ctor_set(v_reuseFailAlloc_3295_, 5, v_cache_3265_);
lean_ctor_set(v_reuseFailAlloc_3295_, 6, v_messages_3266_);
lean_ctor_set(v_reuseFailAlloc_3295_, 7, v_infoState_3267_);
lean_ctor_set(v_reuseFailAlloc_3295_, 8, v_snapshotTasks_3268_);
v___x_3290_ = v_reuseFailAlloc_3295_;
goto v_reusejp_3289_;
}
v_reusejp_3289_:
{
lean_object* v___x_3291_; lean_object* v___x_3293_; 
v___x_3291_ = lean_st_ref_put(v___y_3251_, v___x_3290_);
if (v_isShared_3258_ == 0)
{
lean_ctor_set(v___x_3257_, 0, v___x_3277_);
v___x_3293_ = v___x_3257_;
goto v_reusejp_3292_;
}
else
{
lean_object* v_reuseFailAlloc_3294_; 
v_reuseFailAlloc_3294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3294_, 0, v___x_3277_);
v___x_3293_ = v_reuseFailAlloc_3294_;
goto v_reusejp_3292_;
}
v_reusejp_3292_:
{
return v___x_3293_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2___redArg___boxed(lean_object* v_cls_3300_, lean_object* v_msg_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_){
_start:
{
lean_object* v_res_3307_; 
v_res_3307_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2___redArg(v_cls_3300_, v_msg_3301_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_);
lean_dec(v___y_3305_);
lean_dec_ref(v___y_3304_);
lean_dec(v___y_3303_);
lean_dec_ref(v___y_3302_);
return v_res_3307_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__3___redArg(lean_object* v_cls_3308_, lean_object* v_msg_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_){
_start:
{
lean_object* v_ref_3315_; lean_object* v___x_3316_; lean_object* v_a_3317_; lean_object* v___x_3319_; uint8_t v_isShared_3320_; uint8_t v_isSharedCheck_3361_; 
v_ref_3315_ = lean_ctor_get(v___y_3312_, 2);
v___x_3316_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_isNegInst___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_toInt_x3f_spec__0_spec__0_spec__1_spec__5_spec__8_spec__9(v_msg_3309_, v___y_3310_, v___y_3311_, v___y_3312_, v___y_3313_);
v_a_3317_ = lean_ctor_get(v___x_3316_, 0);
v_isSharedCheck_3361_ = !lean_is_exclusive(v___x_3316_);
if (v_isSharedCheck_3361_ == 0)
{
v___x_3319_ = v___x_3316_;
v_isShared_3320_ = v_isSharedCheck_3361_;
goto v_resetjp_3318_;
}
else
{
lean_inc(v_a_3317_);
lean_dec(v___x_3316_);
v___x_3319_ = lean_box(0);
v_isShared_3320_ = v_isSharedCheck_3361_;
goto v_resetjp_3318_;
}
v_resetjp_3318_:
{
lean_object* v___x_3321_; lean_object* v_traceState_3322_; lean_object* v_env_3323_; lean_object* v_nextMacroScope_3324_; lean_object* v_ngen_3325_; lean_object* v_auxDeclNGen_3326_; lean_object* v_cache_3327_; lean_object* v_messages_3328_; lean_object* v_infoState_3329_; lean_object* v_snapshotTasks_3330_; lean_object* v___x_3332_; uint8_t v_isShared_3333_; uint8_t v_isSharedCheck_3360_; 
v___x_3321_ = lean_st_ref_take(v___y_3313_);
v_traceState_3322_ = lean_ctor_get(v___x_3321_, 4);
v_env_3323_ = lean_ctor_get(v___x_3321_, 0);
v_nextMacroScope_3324_ = lean_ctor_get(v___x_3321_, 1);
v_ngen_3325_ = lean_ctor_get(v___x_3321_, 2);
v_auxDeclNGen_3326_ = lean_ctor_get(v___x_3321_, 3);
v_cache_3327_ = lean_ctor_get(v___x_3321_, 5);
v_messages_3328_ = lean_ctor_get(v___x_3321_, 6);
v_infoState_3329_ = lean_ctor_get(v___x_3321_, 7);
v_snapshotTasks_3330_ = lean_ctor_get(v___x_3321_, 8);
v_isSharedCheck_3360_ = !lean_is_exclusive(v___x_3321_);
if (v_isSharedCheck_3360_ == 0)
{
v___x_3332_ = v___x_3321_;
v_isShared_3333_ = v_isSharedCheck_3360_;
goto v_resetjp_3331_;
}
else
{
lean_inc(v_snapshotTasks_3330_);
lean_inc(v_infoState_3329_);
lean_inc(v_messages_3328_);
lean_inc(v_cache_3327_);
lean_inc(v_traceState_3322_);
lean_inc(v_auxDeclNGen_3326_);
lean_inc(v_ngen_3325_);
lean_inc(v_nextMacroScope_3324_);
lean_inc(v_env_3323_);
lean_dec(v___x_3321_);
v___x_3332_ = lean_box(0);
v_isShared_3333_ = v_isSharedCheck_3360_;
goto v_resetjp_3331_;
}
v_resetjp_3331_:
{
uint64_t v_tid_3334_; lean_object* v_traces_3335_; lean_object* v___x_3337_; uint8_t v_isShared_3338_; uint8_t v_isSharedCheck_3359_; 
v_tid_3334_ = lean_ctor_get_uint64(v_traceState_3322_, sizeof(void*)*1);
v_traces_3335_ = lean_ctor_get(v_traceState_3322_, 0);
v_isSharedCheck_3359_ = !lean_is_exclusive(v_traceState_3322_);
if (v_isSharedCheck_3359_ == 0)
{
v___x_3337_ = v_traceState_3322_;
v_isShared_3338_ = v_isSharedCheck_3359_;
goto v_resetjp_3336_;
}
else
{
lean_inc(v_traces_3335_);
lean_dec(v_traceState_3322_);
v___x_3337_ = lean_box(0);
v_isShared_3338_ = v_isSharedCheck_3359_;
goto v_resetjp_3336_;
}
v_resetjp_3336_:
{
lean_object* v___x_3339_; lean_object* v___x_3340_; double v___x_3341_; uint8_t v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3350_; 
v___x_3339_ = lean_box(0);
v___x_3340_ = lean_box(0);
v___x_3341_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__0);
v___x_3342_ = 0;
v___x_3343_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__1));
v___x_3344_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3344_, 0, v_cls_3308_);
lean_ctor_set(v___x_3344_, 1, v___x_3340_);
lean_ctor_set(v___x_3344_, 2, v___x_3343_);
lean_ctor_set_float(v___x_3344_, sizeof(void*)*3, v___x_3341_);
lean_ctor_set_float(v___x_3344_, sizeof(void*)*3 + 8, v___x_3341_);
lean_ctor_set_uint8(v___x_3344_, sizeof(void*)*3 + 16, v___x_3342_);
v___x_3345_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg___closed__2));
v___x_3346_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3346_, 0, v___x_3344_);
lean_ctor_set(v___x_3346_, 1, v_a_3317_);
lean_ctor_set(v___x_3346_, 2, v___x_3345_);
lean_inc(v_ref_3315_);
v___x_3347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3347_, 0, v_ref_3315_);
lean_ctor_set(v___x_3347_, 1, v___x_3346_);
v___x_3348_ = l_Lean_PersistentArray_push___redArg(v_traces_3335_, v___x_3347_);
if (v_isShared_3338_ == 0)
{
lean_ctor_set(v___x_3337_, 0, v___x_3348_);
v___x_3350_ = v___x_3337_;
goto v_reusejp_3349_;
}
else
{
lean_object* v_reuseFailAlloc_3358_; 
v_reuseFailAlloc_3358_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3358_, 0, v___x_3348_);
lean_ctor_set_uint64(v_reuseFailAlloc_3358_, sizeof(void*)*1, v_tid_3334_);
v___x_3350_ = v_reuseFailAlloc_3358_;
goto v_reusejp_3349_;
}
v_reusejp_3349_:
{
lean_object* v___x_3352_; 
if (v_isShared_3333_ == 0)
{
lean_ctor_set(v___x_3332_, 4, v___x_3350_);
v___x_3352_ = v___x_3332_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3357_; 
v_reuseFailAlloc_3357_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3357_, 0, v_env_3323_);
lean_ctor_set(v_reuseFailAlloc_3357_, 1, v_nextMacroScope_3324_);
lean_ctor_set(v_reuseFailAlloc_3357_, 2, v_ngen_3325_);
lean_ctor_set(v_reuseFailAlloc_3357_, 3, v_auxDeclNGen_3326_);
lean_ctor_set(v_reuseFailAlloc_3357_, 4, v___x_3350_);
lean_ctor_set(v_reuseFailAlloc_3357_, 5, v_cache_3327_);
lean_ctor_set(v_reuseFailAlloc_3357_, 6, v_messages_3328_);
lean_ctor_set(v_reuseFailAlloc_3357_, 7, v_infoState_3329_);
lean_ctor_set(v_reuseFailAlloc_3357_, 8, v_snapshotTasks_3330_);
v___x_3352_ = v_reuseFailAlloc_3357_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
lean_object* v___x_3353_; lean_object* v___x_3355_; 
v___x_3353_ = lean_st_ref_put(v___y_3313_, v___x_3352_);
if (v_isShared_3320_ == 0)
{
lean_ctor_set(v___x_3319_, 0, v___x_3339_);
v___x_3355_ = v___x_3319_;
goto v_reusejp_3354_;
}
else
{
lean_object* v_reuseFailAlloc_3356_; 
v_reuseFailAlloc_3356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3356_, 0, v___x_3339_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__3___redArg___boxed(lean_object* v_cls_3362_, lean_object* v_msg_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_){
_start:
{
lean_object* v_res_3369_; 
v_res_3369_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__3___redArg(v_cls_3362_, v_msg_3363_, v___y_3364_, v___y_3365_, v___y_3366_, v___y_3367_);
lean_dec(v___y_3367_);
lean_dec_ref(v___y_3366_);
lean_dec(v___y_3365_);
lean_dec_ref(v___y_3364_);
return v_res_3369_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2(void){
_start:
{
lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; 
v___x_3375_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1));
v___x_3376_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__1___redArg___closed__7));
v___x_3377_ = l_Lean_Name_append(v___x_3376_, v___x_3375_);
return v___x_3377_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__4(void){
_start:
{
lean_object* v___x_3379_; lean_object* v___x_3380_; 
v___x_3379_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__3));
v___x_3380_ = l_Lean_stringToMessageData(v___x_3379_);
return v___x_3380_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6(void){
_start:
{
lean_object* v___x_3382_; lean_object* v___x_3383_; 
v___x_3382_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__5));
v___x_3383_ = l_Lean_stringToMessageData(v___x_3382_);
return v___x_3383_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__8(void){
_start:
{
lean_object* v___x_3385_; lean_object* v___x_3386_; 
v___x_3385_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__7));
v___x_3386_ = l_Lean_stringToMessageData(v___x_3385_);
return v___x_3386_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__10(void){
_start:
{
lean_object* v___x_3388_; lean_object* v___x_3389_; 
v___x_3388_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__9));
v___x_3389_ = l_Lean_stringToMessageData(v___x_3388_);
return v___x_3389_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__12(void){
_start:
{
lean_object* v___x_3391_; lean_object* v___x_3392_; 
v___x_3391_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__11));
v___x_3392_ = l_Lean_stringToMessageData(v___x_3391_);
return v___x_3392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize(lean_object* v_e_3393_, lean_object* v_parent_x3f_3394_, lean_object* v_a_3395_, lean_object* v_a_3396_, lean_object* v_a_3397_, lean_object* v_a_3398_, lean_object* v_a_3399_, lean_object* v_a_3400_, lean_object* v_a_3401_, lean_object* v_a_3402_, lean_object* v_a_3403_, lean_object* v_a_3404_){
_start:
{
lean_object* v___x_3406_; 
v___x_3406_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_3397_);
if (lean_obj_tag(v___x_3406_) == 0)
{
lean_object* v_a_3407_; lean_object* v___x_3409_; uint8_t v_isShared_3410_; uint8_t v_isSharedCheck_3751_; 
v_a_3407_ = lean_ctor_get(v___x_3406_, 0);
v_isSharedCheck_3751_ = !lean_is_exclusive(v___x_3406_);
if (v_isSharedCheck_3751_ == 0)
{
v___x_3409_ = v___x_3406_;
v_isShared_3410_ = v_isSharedCheck_3751_;
goto v_resetjp_3408_;
}
else
{
lean_inc(v_a_3407_);
lean_dec(v___x_3406_);
v___x_3409_ = lean_box(0);
v_isShared_3410_ = v_isSharedCheck_3751_;
goto v_resetjp_3408_;
}
v_resetjp_3408_:
{
uint8_t v_ring_3411_; 
v_ring_3411_ = lean_ctor_get_uint8(v_a_3407_, sizeof(void*)*14 + 21);
lean_dec(v_a_3407_);
if (v_ring_3411_ == 0)
{
lean_object* v___x_3412_; lean_object* v___x_3414_; 
lean_dec(v_parent_x3f_3394_);
lean_dec_ref(v_e_3393_);
v___x_3412_ = lean_box(0);
if (v_isShared_3410_ == 0)
{
lean_ctor_set(v___x_3409_, 0, v___x_3412_);
v___x_3414_ = v___x_3409_;
goto v_reusejp_3413_;
}
else
{
lean_object* v_reuseFailAlloc_3415_; 
v_reuseFailAlloc_3415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3415_, 0, v___x_3412_);
v___x_3414_ = v_reuseFailAlloc_3415_;
goto v_reusejp_3413_;
}
v_reusejp_3413_:
{
return v___x_3414_;
}
}
else
{
uint8_t v___x_3416_; 
v___x_3416_ = l_Lean_Meta_Grind_Arith_isIntModuleVirtualParent(v_parent_x3f_3394_);
if (v___x_3416_ == 0)
{
lean_object* v___x_3417_; 
lean_del_object(v___x_3409_);
lean_inc_ref(v_e_3393_);
v___x_3417_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_internalizeInv(v_e_3393_, v_a_3395_, v_a_3396_, v_a_3397_, v_a_3398_, v_a_3399_, v_a_3400_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_);
if (lean_obj_tag(v___x_3417_) == 0)
{
lean_object* v_a_3418_; lean_object* v___x_3420_; uint8_t v_isShared_3421_; uint8_t v_isSharedCheck_3738_; 
v_a_3418_ = lean_ctor_get(v___x_3417_, 0);
v_isSharedCheck_3738_ = !lean_is_exclusive(v___x_3417_);
if (v_isSharedCheck_3738_ == 0)
{
v___x_3420_ = v___x_3417_;
v_isShared_3421_ = v_isSharedCheck_3738_;
goto v_resetjp_3419_;
}
else
{
lean_inc(v_a_3418_);
lean_dec(v___x_3417_);
v___x_3420_ = lean_box(0);
v_isShared_3421_ = v_isSharedCheck_3738_;
goto v_resetjp_3419_;
}
v_resetjp_3419_:
{
uint8_t v___x_3422_; 
v___x_3422_ = lean_unbox(v_a_3418_);
lean_dec(v_a_3418_);
if (v___x_3422_ == 0)
{
lean_object* v___x_3423_; 
lean_inc_ref(v_e_3393_);
v___x_3423_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_getType_x3f(v_e_3393_);
if (lean_obj_tag(v___x_3423_) == 1)
{
lean_object* v_val_3424_; uint8_t v___x_3425_; 
v_val_3424_ = lean_ctor_get(v___x_3423_, 0);
lean_inc(v_val_3424_);
lean_dec_ref_known(v___x_3423_, 1);
v___x_3425_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_isForbiddenParent(v_parent_x3f_3394_);
if (v___x_3425_ == 0)
{
lean_object* v___x_3426_; 
lean_del_object(v___x_3420_);
lean_inc(v_val_3424_);
v___x_3426_ = l_Lean_Meta_Grind_Arith_CommRing_getCommRingId_x3f(v_val_3424_, v_a_3395_, v_a_3396_, v_a_3397_, v_a_3398_, v_a_3399_, v_a_3400_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_);
if (lean_obj_tag(v___x_3426_) == 0)
{
lean_object* v_a_3427_; 
v_a_3427_ = lean_ctor_get(v___x_3426_, 0);
lean_inc(v_a_3427_);
lean_dec_ref_known(v___x_3426_, 1);
if (lean_obj_tag(v_a_3427_) == 1)
{
lean_object* v_val_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; 
lean_dec(v_val_3424_);
v_val_3428_ = lean_ctor_get(v_a_3427_, 0);
lean_inc_n(v_val_3428_, 2);
lean_dec_ref_known(v_a_3427_, 1);
v___x_3429_ = lean_unsigned_to_nat(0u);
v___x_3430_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3430_, 0, v_val_3428_);
lean_ctor_set_uint8(v___x_3430_, sizeof(void*)*1, v___x_3425_);
lean_inc_ref(v_e_3393_);
v___x_3431_ = l_Lean_Meta_Grind_Arith_CommRing_reify_x3f(v_e_3393_, v_ring_3411_, v___x_3429_, v___x_3430_, v_a_3395_, v_a_3396_, v_a_3397_, v_a_3398_, v_a_3399_, v_a_3400_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_);
if (lean_obj_tag(v___x_3431_) == 0)
{
lean_object* v_a_3432_; lean_object* v___x_3434_; uint8_t v_isShared_3435_; uint8_t v_isSharedCheck_3484_; 
v_a_3432_ = lean_ctor_get(v___x_3431_, 0);
v_isSharedCheck_3484_ = !lean_is_exclusive(v___x_3431_);
if (v_isSharedCheck_3484_ == 0)
{
v___x_3434_ = v___x_3431_;
v_isShared_3435_ = v_isSharedCheck_3484_;
goto v_resetjp_3433_;
}
else
{
lean_inc(v_a_3432_);
lean_dec(v___x_3431_);
v___x_3434_ = lean_box(0);
v_isShared_3435_ = v_isSharedCheck_3484_;
goto v_resetjp_3433_;
}
v_resetjp_3433_:
{
if (lean_obj_tag(v_a_3432_) == 1)
{
lean_object* v_toCold_3436_; lean_object* v_options_3437_; lean_object* v_val_3438_; lean_object* v_inheritedTraceOptions_3439_; uint8_t v_hasTrace_3440_; lean_object* v___f_3441_; lean_object* v___y_3443_; lean_object* v___y_3444_; lean_object* v___y_3445_; lean_object* v___y_3446_; lean_object* v___y_3447_; lean_object* v___y_3448_; lean_object* v___y_3449_; lean_object* v___y_3450_; lean_object* v___y_3451_; lean_object* v___y_3452_; lean_object* v___y_3453_; 
lean_del_object(v___x_3434_);
v_toCold_3436_ = lean_ctor_get(v_a_3403_, 0);
v_options_3437_ = lean_ctor_get(v_toCold_3436_, 2);
v_val_3438_ = lean_ctor_get(v_a_3432_, 0);
lean_inc(v_val_3438_);
lean_dec_ref_known(v_a_3432_, 1);
v_inheritedTraceOptions_3439_ = lean_ctor_get(v_toCold_3436_, 11);
v_hasTrace_3440_ = lean_ctor_get_uint8(v_options_3437_, sizeof(void*)*1);
lean_inc_ref(v_e_3393_);
v___f_3441_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__0), 3, 2);
lean_closure_set(v___f_3441_, 0, v_e_3393_);
lean_closure_set(v___f_3441_, 1, v_val_3438_);
if (v_hasTrace_3440_ == 0)
{
lean_dec(v_val_3428_);
v___y_3443_ = v___x_3430_;
v___y_3444_ = v_a_3395_;
v___y_3445_ = v_a_3396_;
v___y_3446_ = v_a_3397_;
v___y_3447_ = v_a_3398_;
v___y_3448_ = v_a_3399_;
v___y_3449_ = v_a_3400_;
v___y_3450_ = v_a_3401_;
v___y_3451_ = v_a_3402_;
v___y_3452_ = v_a_3403_;
v___y_3453_ = v_a_3404_;
goto v___jp_3442_;
}
else
{
lean_object* v___x_3459_; lean_object* v___x_3460_; uint8_t v___x_3461_; 
v___x_3459_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1));
v___x_3460_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2);
v___x_3461_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3439_, v_options_3437_, v___x_3460_);
if (v___x_3461_ == 0)
{
lean_dec(v_val_3428_);
v___y_3443_ = v___x_3430_;
v___y_3444_ = v_a_3395_;
v___y_3445_ = v_a_3396_;
v___y_3446_ = v_a_3397_;
v___y_3447_ = v_a_3398_;
v___y_3448_ = v_a_3399_;
v___y_3449_ = v_a_3400_;
v___y_3450_ = v_a_3401_;
v___y_3451_ = v_a_3402_;
v___y_3452_ = v_a_3403_;
v___y_3453_ = v_a_3404_;
goto v___jp_3442_;
}
else
{
lean_object* v___x_3462_; 
v___x_3462_ = l_Lean_Meta_Grind_updateLastTag(v_a_3395_, v_a_3396_, v_a_3397_, v_a_3398_, v_a_3399_, v_a_3400_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_);
if (lean_obj_tag(v___x_3462_) == 0)
{
lean_object* v___x_3464_; uint8_t v_isShared_3465_; uint8_t v_isSharedCheck_3478_; 
v_isSharedCheck_3478_ = !lean_is_exclusive(v___x_3462_);
if (v_isSharedCheck_3478_ == 0)
{
lean_object* v_unused_3479_; 
v_unused_3479_ = lean_ctor_get(v___x_3462_, 0);
lean_dec(v_unused_3479_);
v___x_3464_ = v___x_3462_;
v_isShared_3465_ = v_isSharedCheck_3478_;
goto v_resetjp_3463_;
}
else
{
lean_dec(v___x_3462_);
v___x_3464_ = lean_box(0);
v_isShared_3465_ = v_isSharedCheck_3478_;
goto v_resetjp_3463_;
}
v_resetjp_3463_:
{
lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3469_; 
v___x_3466_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__4, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__4_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__4);
v___x_3467_ = l_Nat_reprFast(v_val_3428_);
if (v_isShared_3465_ == 0)
{
lean_ctor_set_tag(v___x_3464_, 3);
lean_ctor_set(v___x_3464_, 0, v___x_3467_);
v___x_3469_ = v___x_3464_;
goto v_reusejp_3468_;
}
else
{
lean_object* v_reuseFailAlloc_3477_; 
v_reuseFailAlloc_3477_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3477_, 0, v___x_3467_);
v___x_3469_ = v_reuseFailAlloc_3477_;
goto v_reusejp_3468_;
}
v_reusejp_3468_:
{
lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; 
v___x_3470_ = l_Lean_MessageData_ofFormat(v___x_3469_);
v___x_3471_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3471_, 0, v___x_3466_);
lean_ctor_set(v___x_3471_, 1, v___x_3470_);
v___x_3472_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6);
v___x_3473_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3473_, 0, v___x_3471_);
lean_ctor_set(v___x_3473_, 1, v___x_3472_);
lean_inc_ref(v_e_3393_);
v___x_3474_ = l_Lean_MessageData_ofExpr(v_e_3393_);
v___x_3475_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3475_, 0, v___x_3473_);
lean_ctor_set(v___x_3475_, 1, v___x_3474_);
v___x_3476_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars_spec__0___redArg(v___x_3459_, v___x_3475_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_);
if (lean_obj_tag(v___x_3476_) == 0)
{
lean_dec_ref_known(v___x_3476_, 1);
v___y_3443_ = v___x_3430_;
v___y_3444_ = v_a_3395_;
v___y_3445_ = v_a_3396_;
v___y_3446_ = v_a_3397_;
v___y_3447_ = v_a_3398_;
v___y_3448_ = v_a_3399_;
v___y_3449_ = v_a_3400_;
v___y_3450_ = v_a_3401_;
v___y_3451_ = v_a_3402_;
v___y_3452_ = v_a_3403_;
v___y_3453_ = v_a_3404_;
goto v___jp_3442_;
}
else
{
lean_dec_ref(v___f_3441_);
lean_dec_ref_known(v___x_3430_, 1);
lean_dec_ref(v_e_3393_);
return v___x_3476_;
}
}
}
}
else
{
lean_dec_ref(v___f_3441_);
lean_dec_ref_known(v___x_3430_, 1);
lean_dec(v_val_3428_);
lean_dec_ref(v_e_3393_);
return v___x_3462_;
}
}
}
v___jp_3442_:
{
lean_object* v___x_3454_; 
lean_inc_ref(v_e_3393_);
v___x_3454_ = l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg(v_e_3393_, v___y_3443_, v___y_3444_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_);
if (lean_obj_tag(v___x_3454_) == 0)
{
lean_object* v___x_3455_; lean_object* v___x_3456_; 
lean_dec_ref_known(v___x_3454_, 1);
v___x_3455_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_3456_ = l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(v___x_3455_, v_e_3393_, v___y_3444_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_);
if (lean_obj_tag(v___x_3456_) == 0)
{
lean_object* v___x_3457_; 
lean_dec_ref_known(v___x_3456_, 1);
v___x_3457_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v___f_3441_, v___y_3443_, v___y_3444_);
if (lean_obj_tag(v___x_3457_) == 0)
{
lean_object* v___x_3458_; 
lean_dec_ref_known(v___x_3457_, 1);
v___x_3458_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize_0__Lean_Meta_Grind_Arith_CommRing_processPowIdentityVars(v___y_3443_, v___y_3444_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_);
lean_dec_ref(v___y_3443_);
return v___x_3458_;
}
else
{
lean_dec_ref(v___y_3443_);
return v___x_3457_;
}
}
else
{
lean_dec_ref(v___y_3443_);
lean_dec_ref(v___f_3441_);
return v___x_3456_;
}
}
else
{
lean_dec_ref(v___y_3443_);
lean_dec_ref(v___f_3441_);
lean_dec_ref(v_e_3393_);
return v___x_3454_;
}
}
}
else
{
lean_object* v___x_3480_; lean_object* v___x_3482_; 
lean_dec(v_a_3432_);
lean_dec_ref_known(v___x_3430_, 1);
lean_dec(v_val_3428_);
lean_dec_ref(v_e_3393_);
v___x_3480_ = lean_box(0);
if (v_isShared_3435_ == 0)
{
lean_ctor_set(v___x_3434_, 0, v___x_3480_);
v___x_3482_ = v___x_3434_;
goto v_reusejp_3481_;
}
else
{
lean_object* v_reuseFailAlloc_3483_; 
v_reuseFailAlloc_3483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3483_, 0, v___x_3480_);
v___x_3482_ = v_reuseFailAlloc_3483_;
goto v_reusejp_3481_;
}
v_reusejp_3481_:
{
return v___x_3482_;
}
}
}
}
else
{
lean_object* v_a_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3492_; 
lean_dec_ref_known(v___x_3430_, 1);
lean_dec(v_val_3428_);
lean_dec_ref(v_e_3393_);
v_a_3485_ = lean_ctor_get(v___x_3431_, 0);
v_isSharedCheck_3492_ = !lean_is_exclusive(v___x_3431_);
if (v_isSharedCheck_3492_ == 0)
{
v___x_3487_ = v___x_3431_;
v_isShared_3488_ = v_isSharedCheck_3492_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_a_3485_);
lean_dec(v___x_3431_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3492_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v___x_3490_; 
if (v_isShared_3488_ == 0)
{
v___x_3490_ = v___x_3487_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3491_; 
v_reuseFailAlloc_3491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3491_, 0, v_a_3485_);
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
else
{
lean_object* v___x_3493_; 
lean_dec(v_a_3427_);
lean_inc(v_val_3424_);
v___x_3493_ = l_Lean_Meta_Grind_Arith_CommRing_getCommSemiringId_x3f(v_val_3424_, v_a_3395_, v_a_3396_, v_a_3397_, v_a_3398_, v_a_3399_, v_a_3400_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_);
if (lean_obj_tag(v___x_3493_) == 0)
{
lean_object* v_a_3494_; 
v_a_3494_ = lean_ctor_get(v___x_3493_, 0);
lean_inc(v_a_3494_);
lean_dec_ref_known(v___x_3493_, 1);
if (lean_obj_tag(v_a_3494_) == 1)
{
lean_object* v_val_3495_; lean_object* v___x_3496_; 
lean_dec(v_val_3424_);
v_val_3495_ = lean_ctor_get(v_a_3494_, 0);
lean_inc(v_val_3495_);
lean_dec_ref_known(v_a_3494_, 1);
lean_inc_ref(v_e_3393_);
v___x_3496_ = l_Lean_Meta_Grind_Arith_CommRing_sreify_x3f(v_e_3393_, v_val_3495_, v_a_3395_, v_a_3396_, v_a_3397_, v_a_3398_, v_a_3399_, v_a_3400_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_);
if (lean_obj_tag(v___x_3496_) == 0)
{
lean_object* v_a_3497_; lean_object* v___x_3499_; uint8_t v_isShared_3500_; uint8_t v_isSharedCheck_3548_; 
v_a_3497_ = lean_ctor_get(v___x_3496_, 0);
v_isSharedCheck_3548_ = !lean_is_exclusive(v___x_3496_);
if (v_isSharedCheck_3548_ == 0)
{
v___x_3499_ = v___x_3496_;
v_isShared_3500_ = v_isSharedCheck_3548_;
goto v_resetjp_3498_;
}
else
{
lean_inc(v_a_3497_);
lean_dec(v___x_3496_);
v___x_3499_ = lean_box(0);
v_isShared_3500_ = v_isSharedCheck_3548_;
goto v_resetjp_3498_;
}
v_resetjp_3498_:
{
if (lean_obj_tag(v_a_3497_) == 1)
{
lean_object* v_val_3501_; lean_object* v___y_3503_; lean_object* v___y_3504_; lean_object* v___y_3505_; lean_object* v___y_3506_; lean_object* v___y_3507_; lean_object* v___y_3508_; lean_object* v___y_3509_; lean_object* v___y_3510_; lean_object* v___y_3511_; lean_object* v___y_3512_; lean_object* v___y_3513_; lean_object* v_toCold_3519_; lean_object* v_options_3520_; uint8_t v_hasTrace_3521_; 
lean_del_object(v___x_3499_);
v_val_3501_ = lean_ctor_get(v_a_3497_, 0);
lean_inc(v_val_3501_);
lean_dec_ref_known(v_a_3497_, 1);
v_toCold_3519_ = lean_ctor_get(v_a_3403_, 0);
v_options_3520_ = lean_ctor_get(v_toCold_3519_, 2);
v_hasTrace_3521_ = lean_ctor_get_uint8(v_options_3520_, sizeof(void*)*1);
if (v_hasTrace_3521_ == 0)
{
v___y_3503_ = v_val_3495_;
v___y_3504_ = v_a_3395_;
v___y_3505_ = v_a_3396_;
v___y_3506_ = v_a_3397_;
v___y_3507_ = v_a_3398_;
v___y_3508_ = v_a_3399_;
v___y_3509_ = v_a_3400_;
v___y_3510_ = v_a_3401_;
v___y_3511_ = v_a_3402_;
v___y_3512_ = v_a_3403_;
v___y_3513_ = v_a_3404_;
goto v___jp_3502_;
}
else
{
lean_object* v_inheritedTraceOptions_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; uint8_t v___x_3525_; 
v_inheritedTraceOptions_3522_ = lean_ctor_get(v_toCold_3519_, 11);
v___x_3523_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1));
v___x_3524_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2);
v___x_3525_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3522_, v_options_3520_, v___x_3524_);
if (v___x_3525_ == 0)
{
v___y_3503_ = v_val_3495_;
v___y_3504_ = v_a_3395_;
v___y_3505_ = v_a_3396_;
v___y_3506_ = v_a_3397_;
v___y_3507_ = v_a_3398_;
v___y_3508_ = v_a_3399_;
v___y_3509_ = v_a_3400_;
v___y_3510_ = v_a_3401_;
v___y_3511_ = v_a_3402_;
v___y_3512_ = v_a_3403_;
v___y_3513_ = v_a_3404_;
goto v___jp_3502_;
}
else
{
lean_object* v___x_3526_; 
v___x_3526_ = l_Lean_Meta_Grind_updateLastTag(v_a_3395_, v_a_3396_, v_a_3397_, v_a_3398_, v_a_3399_, v_a_3400_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_);
if (lean_obj_tag(v___x_3526_) == 0)
{
lean_object* v___x_3528_; uint8_t v_isShared_3529_; uint8_t v_isSharedCheck_3542_; 
v_isSharedCheck_3542_ = !lean_is_exclusive(v___x_3526_);
if (v_isSharedCheck_3542_ == 0)
{
lean_object* v_unused_3543_; 
v_unused_3543_ = lean_ctor_get(v___x_3526_, 0);
lean_dec(v_unused_3543_);
v___x_3528_ = v___x_3526_;
v_isShared_3529_ = v_isSharedCheck_3542_;
goto v_resetjp_3527_;
}
else
{
lean_dec(v___x_3526_);
v___x_3528_ = lean_box(0);
v_isShared_3529_ = v_isSharedCheck_3542_;
goto v_resetjp_3527_;
}
v_resetjp_3527_:
{
lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3533_; 
v___x_3530_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__8, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__8_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__8);
lean_inc(v_val_3495_);
v___x_3531_ = l_Nat_reprFast(v_val_3495_);
if (v_isShared_3529_ == 0)
{
lean_ctor_set_tag(v___x_3528_, 3);
lean_ctor_set(v___x_3528_, 0, v___x_3531_);
v___x_3533_ = v___x_3528_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v___x_3531_);
v___x_3533_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; 
v___x_3534_ = l_Lean_MessageData_ofFormat(v___x_3533_);
v___x_3535_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3535_, 0, v___x_3530_);
lean_ctor_set(v___x_3535_, 1, v___x_3534_);
v___x_3536_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6);
v___x_3537_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3537_, 0, v___x_3535_);
lean_ctor_set(v___x_3537_, 1, v___x_3536_);
lean_inc_ref(v_e_3393_);
v___x_3538_ = l_Lean_MessageData_ofExpr(v_e_3393_);
v___x_3539_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3539_, 0, v___x_3537_);
lean_ctor_set(v___x_3539_, 1, v___x_3538_);
v___x_3540_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1___redArg(v___x_3523_, v___x_3539_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_);
if (lean_obj_tag(v___x_3540_) == 0)
{
lean_dec_ref_known(v___x_3540_, 1);
v___y_3503_ = v_val_3495_;
v___y_3504_ = v_a_3395_;
v___y_3505_ = v_a_3396_;
v___y_3506_ = v_a_3397_;
v___y_3507_ = v_a_3398_;
v___y_3508_ = v_a_3399_;
v___y_3509_ = v_a_3400_;
v___y_3510_ = v_a_3401_;
v___y_3511_ = v_a_3402_;
v___y_3512_ = v_a_3403_;
v___y_3513_ = v_a_3404_;
goto v___jp_3502_;
}
else
{
lean_dec(v_val_3501_);
lean_dec(v_val_3495_);
lean_dec_ref(v_e_3393_);
return v___x_3540_;
}
}
}
}
else
{
lean_dec(v_val_3501_);
lean_dec(v_val_3495_);
lean_dec_ref(v_e_3393_);
return v___x_3526_;
}
}
}
v___jp_3502_:
{
lean_object* v___f_3514_; lean_object* v___x_3515_; 
lean_inc_ref_n(v_e_3393_, 2);
lean_inc(v___y_3503_);
v___f_3514_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__1___boxed), 4, 3);
lean_closure_set(v___f_3514_, 0, v___y_3503_);
lean_closure_set(v___f_3514_, 1, v_e_3393_);
lean_closure_set(v___f_3514_, 2, v_val_3501_);
v___x_3515_ = l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg(v_e_3393_, v___y_3503_, v___y_3504_, v___y_3508_, v___y_3509_, v___y_3510_, v___y_3511_, v___y_3512_, v___y_3513_);
lean_dec(v___y_3503_);
if (lean_obj_tag(v___x_3515_) == 0)
{
lean_object* v___x_3516_; lean_object* v___x_3517_; 
lean_dec_ref_known(v___x_3515_, 1);
v___x_3516_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_3517_ = l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(v___x_3516_, v_e_3393_, v___y_3504_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_, v___y_3509_, v___y_3510_, v___y_3511_, v___y_3512_, v___y_3513_);
if (lean_obj_tag(v___x_3517_) == 0)
{
lean_object* v___x_3518_; 
lean_dec_ref_known(v___x_3517_, 1);
v___x_3518_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_3516_, v___f_3514_, v___y_3504_);
return v___x_3518_;
}
else
{
lean_dec_ref(v___f_3514_);
return v___x_3517_;
}
}
else
{
lean_dec_ref(v___f_3514_);
lean_dec_ref(v_e_3393_);
return v___x_3515_;
}
}
}
else
{
lean_object* v___x_3544_; lean_object* v___x_3546_; 
lean_dec(v_a_3497_);
lean_dec(v_val_3495_);
lean_dec_ref(v_e_3393_);
v___x_3544_ = lean_box(0);
if (v_isShared_3500_ == 0)
{
lean_ctor_set(v___x_3499_, 0, v___x_3544_);
v___x_3546_ = v___x_3499_;
goto v_reusejp_3545_;
}
else
{
lean_object* v_reuseFailAlloc_3547_; 
v_reuseFailAlloc_3547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3547_, 0, v___x_3544_);
v___x_3546_ = v_reuseFailAlloc_3547_;
goto v_reusejp_3545_;
}
v_reusejp_3545_:
{
return v___x_3546_;
}
}
}
}
else
{
lean_object* v_a_3549_; lean_object* v___x_3551_; uint8_t v_isShared_3552_; uint8_t v_isSharedCheck_3556_; 
lean_dec(v_val_3495_);
lean_dec_ref(v_e_3393_);
v_a_3549_ = lean_ctor_get(v___x_3496_, 0);
v_isSharedCheck_3556_ = !lean_is_exclusive(v___x_3496_);
if (v_isSharedCheck_3556_ == 0)
{
v___x_3551_ = v___x_3496_;
v_isShared_3552_ = v_isSharedCheck_3556_;
goto v_resetjp_3550_;
}
else
{
lean_inc(v_a_3549_);
lean_dec(v___x_3496_);
v___x_3551_ = lean_box(0);
v_isShared_3552_ = v_isSharedCheck_3556_;
goto v_resetjp_3550_;
}
v_resetjp_3550_:
{
lean_object* v___x_3554_; 
if (v_isShared_3552_ == 0)
{
v___x_3554_ = v___x_3551_;
goto v_reusejp_3553_;
}
else
{
lean_object* v_reuseFailAlloc_3555_; 
v_reuseFailAlloc_3555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3555_, 0, v_a_3549_);
v___x_3554_ = v_reuseFailAlloc_3555_;
goto v_reusejp_3553_;
}
v_reusejp_3553_:
{
return v___x_3554_;
}
}
}
}
else
{
lean_object* v___x_3557_; 
lean_dec(v_a_3494_);
lean_inc(v_val_3424_);
v___x_3557_ = l_Lean_Meta_Grind_Arith_CommRing_getNonCommRingId_x3f(v_val_3424_, v_a_3395_, v_a_3396_, v_a_3397_, v_a_3398_, v_a_3399_, v_a_3400_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_);
if (lean_obj_tag(v___x_3557_) == 0)
{
lean_object* v_a_3558_; 
v_a_3558_ = lean_ctor_get(v___x_3557_, 0);
lean_inc(v_a_3558_);
lean_dec_ref_known(v___x_3557_, 1);
if (lean_obj_tag(v_a_3558_) == 1)
{
lean_object* v_val_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; 
lean_dec(v_val_3424_);
v_val_3559_ = lean_ctor_get(v_a_3558_, 0);
lean_inc(v_val_3559_);
lean_dec_ref_known(v_a_3558_, 1);
v___x_3560_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_e_3393_);
v___x_3561_ = l_Lean_Meta_Grind_Arith_CommRing_ncreify_x3f(v_e_3393_, v_ring_3411_, v___x_3560_, v_val_3559_, v_a_3395_, v_a_3396_, v_a_3397_, v_a_3398_, v_a_3399_, v_a_3400_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_);
if (lean_obj_tag(v___x_3561_) == 0)
{
lean_object* v_a_3562_; lean_object* v___x_3564_; uint8_t v_isShared_3565_; uint8_t v_isSharedCheck_3613_; 
v_a_3562_ = lean_ctor_get(v___x_3561_, 0);
v_isSharedCheck_3613_ = !lean_is_exclusive(v___x_3561_);
if (v_isSharedCheck_3613_ == 0)
{
v___x_3564_ = v___x_3561_;
v_isShared_3565_ = v_isSharedCheck_3613_;
goto v_resetjp_3563_;
}
else
{
lean_inc(v_a_3562_);
lean_dec(v___x_3561_);
v___x_3564_ = lean_box(0);
v_isShared_3565_ = v_isSharedCheck_3613_;
goto v_resetjp_3563_;
}
v_resetjp_3563_:
{
if (lean_obj_tag(v_a_3562_) == 1)
{
lean_object* v_toCold_3566_; lean_object* v_options_3567_; lean_object* v_val_3568_; lean_object* v_inheritedTraceOptions_3569_; uint8_t v_hasTrace_3570_; lean_object* v___f_3571_; lean_object* v___y_3573_; lean_object* v___y_3574_; lean_object* v___y_3575_; lean_object* v___y_3576_; lean_object* v___y_3577_; lean_object* v___y_3578_; lean_object* v___y_3579_; lean_object* v___y_3580_; lean_object* v___y_3581_; lean_object* v___y_3582_; lean_object* v___y_3583_; 
lean_del_object(v___x_3564_);
v_toCold_3566_ = lean_ctor_get(v_a_3403_, 0);
v_options_3567_ = lean_ctor_get(v_toCold_3566_, 2);
v_val_3568_ = lean_ctor_get(v_a_3562_, 0);
lean_inc(v_val_3568_);
lean_dec_ref_known(v_a_3562_, 1);
v_inheritedTraceOptions_3569_ = lean_ctor_get(v_toCold_3566_, 11);
v_hasTrace_3570_ = lean_ctor_get_uint8(v_options_3567_, sizeof(void*)*1);
lean_inc_ref(v_e_3393_);
v___f_3571_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__2), 3, 2);
lean_closure_set(v___f_3571_, 0, v_e_3393_);
lean_closure_set(v___f_3571_, 1, v_val_3568_);
if (v_hasTrace_3570_ == 0)
{
v___y_3573_ = v_val_3559_;
v___y_3574_ = v_a_3395_;
v___y_3575_ = v_a_3396_;
v___y_3576_ = v_a_3397_;
v___y_3577_ = v_a_3398_;
v___y_3578_ = v_a_3399_;
v___y_3579_ = v_a_3400_;
v___y_3580_ = v_a_3401_;
v___y_3581_ = v_a_3402_;
v___y_3582_ = v_a_3403_;
v___y_3583_ = v_a_3404_;
goto v___jp_3572_;
}
else
{
lean_object* v___x_3588_; lean_object* v___x_3589_; uint8_t v___x_3590_; 
v___x_3588_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1));
v___x_3589_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2);
v___x_3590_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3569_, v_options_3567_, v___x_3589_);
if (v___x_3590_ == 0)
{
v___y_3573_ = v_val_3559_;
v___y_3574_ = v_a_3395_;
v___y_3575_ = v_a_3396_;
v___y_3576_ = v_a_3397_;
v___y_3577_ = v_a_3398_;
v___y_3578_ = v_a_3399_;
v___y_3579_ = v_a_3400_;
v___y_3580_ = v_a_3401_;
v___y_3581_ = v_a_3402_;
v___y_3582_ = v_a_3403_;
v___y_3583_ = v_a_3404_;
goto v___jp_3572_;
}
else
{
lean_object* v___x_3591_; 
v___x_3591_ = l_Lean_Meta_Grind_updateLastTag(v_a_3395_, v_a_3396_, v_a_3397_, v_a_3398_, v_a_3399_, v_a_3400_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_);
if (lean_obj_tag(v___x_3591_) == 0)
{
lean_object* v___x_3593_; uint8_t v_isShared_3594_; uint8_t v_isSharedCheck_3607_; 
v_isSharedCheck_3607_ = !lean_is_exclusive(v___x_3591_);
if (v_isSharedCheck_3607_ == 0)
{
lean_object* v_unused_3608_; 
v_unused_3608_ = lean_ctor_get(v___x_3591_, 0);
lean_dec(v_unused_3608_);
v___x_3593_ = v___x_3591_;
v_isShared_3594_ = v_isSharedCheck_3607_;
goto v_resetjp_3592_;
}
else
{
lean_dec(v___x_3591_);
v___x_3593_ = lean_box(0);
v_isShared_3594_ = v_isSharedCheck_3607_;
goto v_resetjp_3592_;
}
v_resetjp_3592_:
{
lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3598_; 
v___x_3595_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__10, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__10_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__10);
lean_inc(v_val_3559_);
v___x_3596_ = l_Nat_reprFast(v_val_3559_);
if (v_isShared_3594_ == 0)
{
lean_ctor_set_tag(v___x_3593_, 3);
lean_ctor_set(v___x_3593_, 0, v___x_3596_);
v___x_3598_ = v___x_3593_;
goto v_reusejp_3597_;
}
else
{
lean_object* v_reuseFailAlloc_3606_; 
v_reuseFailAlloc_3606_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3606_, 0, v___x_3596_);
v___x_3598_ = v_reuseFailAlloc_3606_;
goto v_reusejp_3597_;
}
v_reusejp_3597_:
{
lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; 
v___x_3599_ = l_Lean_MessageData_ofFormat(v___x_3598_);
v___x_3600_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3600_, 0, v___x_3595_);
lean_ctor_set(v___x_3600_, 1, v___x_3599_);
v___x_3601_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6);
v___x_3602_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3602_, 0, v___x_3600_);
lean_ctor_set(v___x_3602_, 1, v___x_3601_);
lean_inc_ref(v_e_3393_);
v___x_3603_ = l_Lean_MessageData_ofExpr(v_e_3393_);
v___x_3604_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3604_, 0, v___x_3602_);
lean_ctor_set(v___x_3604_, 1, v___x_3603_);
v___x_3605_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2___redArg(v___x_3588_, v___x_3604_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_);
if (lean_obj_tag(v___x_3605_) == 0)
{
lean_dec_ref_known(v___x_3605_, 1);
v___y_3573_ = v_val_3559_;
v___y_3574_ = v_a_3395_;
v___y_3575_ = v_a_3396_;
v___y_3576_ = v_a_3397_;
v___y_3577_ = v_a_3398_;
v___y_3578_ = v_a_3399_;
v___y_3579_ = v_a_3400_;
v___y_3580_ = v_a_3401_;
v___y_3581_ = v_a_3402_;
v___y_3582_ = v_a_3403_;
v___y_3583_ = v_a_3404_;
goto v___jp_3572_;
}
else
{
lean_dec_ref(v___f_3571_);
lean_dec(v_val_3559_);
lean_dec_ref(v_e_3393_);
return v___x_3605_;
}
}
}
}
else
{
lean_dec_ref(v___f_3571_);
lean_dec(v_val_3559_);
lean_dec_ref(v_e_3393_);
return v___x_3591_;
}
}
}
v___jp_3572_:
{
lean_object* v___x_3584_; 
lean_inc_ref(v_e_3393_);
v___x_3584_ = l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommRingId___redArg(v_e_3393_, v___y_3573_, v___y_3574_, v___y_3578_, v___y_3579_, v___y_3580_, v___y_3581_, v___y_3582_, v___y_3583_);
if (lean_obj_tag(v___x_3584_) == 0)
{
lean_object* v___x_3585_; lean_object* v___x_3586_; 
lean_dec_ref_known(v___x_3584_, 1);
v___x_3585_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_3586_ = l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(v___x_3585_, v_e_3393_, v___y_3574_, v___y_3575_, v___y_3576_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_, v___y_3581_, v___y_3582_, v___y_3583_);
if (lean_obj_tag(v___x_3586_) == 0)
{
lean_object* v___x_3587_; 
lean_dec_ref_known(v___x_3586_, 1);
v___x_3587_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommRingM_modifyRing___redArg(v___f_3571_, v___y_3573_, v___y_3574_);
lean_dec(v___y_3573_);
return v___x_3587_;
}
else
{
lean_dec(v___y_3573_);
lean_dec_ref(v___f_3571_);
return v___x_3586_;
}
}
else
{
lean_dec(v___y_3573_);
lean_dec_ref(v___f_3571_);
lean_dec_ref(v_e_3393_);
return v___x_3584_;
}
}
}
else
{
lean_object* v___x_3609_; lean_object* v___x_3611_; 
lean_dec(v_a_3562_);
lean_dec(v_val_3559_);
lean_dec_ref(v_e_3393_);
v___x_3609_ = lean_box(0);
if (v_isShared_3565_ == 0)
{
lean_ctor_set(v___x_3564_, 0, v___x_3609_);
v___x_3611_ = v___x_3564_;
goto v_reusejp_3610_;
}
else
{
lean_object* v_reuseFailAlloc_3612_; 
v_reuseFailAlloc_3612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3612_, 0, v___x_3609_);
v___x_3611_ = v_reuseFailAlloc_3612_;
goto v_reusejp_3610_;
}
v_reusejp_3610_:
{
return v___x_3611_;
}
}
}
}
else
{
lean_object* v_a_3614_; lean_object* v___x_3616_; uint8_t v_isShared_3617_; uint8_t v_isSharedCheck_3621_; 
lean_dec(v_val_3559_);
lean_dec_ref(v_e_3393_);
v_a_3614_ = lean_ctor_get(v___x_3561_, 0);
v_isSharedCheck_3621_ = !lean_is_exclusive(v___x_3561_);
if (v_isSharedCheck_3621_ == 0)
{
v___x_3616_ = v___x_3561_;
v_isShared_3617_ = v_isSharedCheck_3621_;
goto v_resetjp_3615_;
}
else
{
lean_inc(v_a_3614_);
lean_dec(v___x_3561_);
v___x_3616_ = lean_box(0);
v_isShared_3617_ = v_isSharedCheck_3621_;
goto v_resetjp_3615_;
}
v_resetjp_3615_:
{
lean_object* v___x_3619_; 
if (v_isShared_3617_ == 0)
{
v___x_3619_ = v___x_3616_;
goto v_reusejp_3618_;
}
else
{
lean_object* v_reuseFailAlloc_3620_; 
v_reuseFailAlloc_3620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3620_, 0, v_a_3614_);
v___x_3619_ = v_reuseFailAlloc_3620_;
goto v_reusejp_3618_;
}
v_reusejp_3618_:
{
return v___x_3619_;
}
}
}
}
else
{
lean_object* v___x_3622_; 
lean_dec(v_a_3558_);
v___x_3622_ = l_Lean_Meta_Grind_Arith_CommRing_getNonCommSemiringId_x3f___redArg(v_val_3424_, v_a_3395_, v_a_3400_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_);
if (lean_obj_tag(v___x_3622_) == 0)
{
lean_object* v_a_3623_; lean_object* v___x_3625_; uint8_t v_isShared_3626_; uint8_t v_isSharedCheck_3693_; 
v_a_3623_ = lean_ctor_get(v___x_3622_, 0);
v_isSharedCheck_3693_ = !lean_is_exclusive(v___x_3622_);
if (v_isSharedCheck_3693_ == 0)
{
v___x_3625_ = v___x_3622_;
v_isShared_3626_ = v_isSharedCheck_3693_;
goto v_resetjp_3624_;
}
else
{
lean_inc(v_a_3623_);
lean_dec(v___x_3622_);
v___x_3625_ = lean_box(0);
v_isShared_3626_ = v_isSharedCheck_3693_;
goto v_resetjp_3624_;
}
v_resetjp_3624_:
{
if (lean_obj_tag(v_a_3623_) == 1)
{
lean_object* v_val_3627_; lean_object* v___x_3628_; 
lean_del_object(v___x_3625_);
v_val_3627_ = lean_ctor_get(v_a_3623_, 0);
lean_inc(v_val_3627_);
lean_dec_ref_known(v_a_3623_, 1);
lean_inc_ref(v_e_3393_);
v___x_3628_ = l_Lean_Meta_Grind_Arith_CommRing_ncsreify_x3f(v_e_3393_, v_val_3627_, v_a_3395_, v_a_3396_, v_a_3397_, v_a_3398_, v_a_3399_, v_a_3400_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_);
if (lean_obj_tag(v___x_3628_) == 0)
{
lean_object* v_a_3629_; lean_object* v___x_3631_; uint8_t v_isShared_3632_; uint8_t v_isSharedCheck_3680_; 
v_a_3629_ = lean_ctor_get(v___x_3628_, 0);
v_isSharedCheck_3680_ = !lean_is_exclusive(v___x_3628_);
if (v_isSharedCheck_3680_ == 0)
{
v___x_3631_ = v___x_3628_;
v_isShared_3632_ = v_isSharedCheck_3680_;
goto v_resetjp_3630_;
}
else
{
lean_inc(v_a_3629_);
lean_dec(v___x_3628_);
v___x_3631_ = lean_box(0);
v_isShared_3632_ = v_isSharedCheck_3680_;
goto v_resetjp_3630_;
}
v_resetjp_3630_:
{
if (lean_obj_tag(v_a_3629_) == 1)
{
lean_object* v_toCold_3633_; lean_object* v_options_3634_; lean_object* v_val_3635_; lean_object* v_inheritedTraceOptions_3636_; uint8_t v_hasTrace_3637_; lean_object* v___f_3638_; lean_object* v___y_3640_; lean_object* v___y_3641_; lean_object* v___y_3642_; lean_object* v___y_3643_; lean_object* v___y_3644_; lean_object* v___y_3645_; lean_object* v___y_3646_; lean_object* v___y_3647_; lean_object* v___y_3648_; lean_object* v___y_3649_; lean_object* v___y_3650_; 
lean_del_object(v___x_3631_);
v_toCold_3633_ = lean_ctor_get(v_a_3403_, 0);
v_options_3634_ = lean_ctor_get(v_toCold_3633_, 2);
v_val_3635_ = lean_ctor_get(v_a_3629_, 0);
lean_inc(v_val_3635_);
lean_dec_ref_known(v_a_3629_, 1);
v_inheritedTraceOptions_3636_ = lean_ctor_get(v_toCold_3633_, 11);
v_hasTrace_3637_ = lean_ctor_get_uint8(v_options_3634_, sizeof(void*)*1);
lean_inc_ref(v_e_3393_);
v___f_3638_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___lam__3), 3, 2);
lean_closure_set(v___f_3638_, 0, v_e_3393_);
lean_closure_set(v___f_3638_, 1, v_val_3635_);
if (v_hasTrace_3637_ == 0)
{
v___y_3640_ = v_val_3627_;
v___y_3641_ = v_a_3395_;
v___y_3642_ = v_a_3396_;
v___y_3643_ = v_a_3397_;
v___y_3644_ = v_a_3398_;
v___y_3645_ = v_a_3399_;
v___y_3646_ = v_a_3400_;
v___y_3647_ = v_a_3401_;
v___y_3648_ = v_a_3402_;
v___y_3649_ = v_a_3403_;
v___y_3650_ = v_a_3404_;
goto v___jp_3639_;
}
else
{
lean_object* v___x_3655_; lean_object* v___x_3656_; uint8_t v___x_3657_; 
v___x_3655_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__1));
v___x_3656_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__2);
v___x_3657_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3636_, v_options_3634_, v___x_3656_);
if (v___x_3657_ == 0)
{
v___y_3640_ = v_val_3627_;
v___y_3641_ = v_a_3395_;
v___y_3642_ = v_a_3396_;
v___y_3643_ = v_a_3397_;
v___y_3644_ = v_a_3398_;
v___y_3645_ = v_a_3399_;
v___y_3646_ = v_a_3400_;
v___y_3647_ = v_a_3401_;
v___y_3648_ = v_a_3402_;
v___y_3649_ = v_a_3403_;
v___y_3650_ = v_a_3404_;
goto v___jp_3639_;
}
else
{
lean_object* v___x_3658_; 
v___x_3658_ = l_Lean_Meta_Grind_updateLastTag(v_a_3395_, v_a_3396_, v_a_3397_, v_a_3398_, v_a_3399_, v_a_3400_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_);
if (lean_obj_tag(v___x_3658_) == 0)
{
lean_object* v___x_3660_; uint8_t v_isShared_3661_; uint8_t v_isSharedCheck_3674_; 
v_isSharedCheck_3674_ = !lean_is_exclusive(v___x_3658_);
if (v_isSharedCheck_3674_ == 0)
{
lean_object* v_unused_3675_; 
v_unused_3675_ = lean_ctor_get(v___x_3658_, 0);
lean_dec(v_unused_3675_);
v___x_3660_ = v___x_3658_;
v_isShared_3661_ = v_isSharedCheck_3674_;
goto v_resetjp_3659_;
}
else
{
lean_dec(v___x_3658_);
v___x_3660_ = lean_box(0);
v_isShared_3661_ = v_isSharedCheck_3674_;
goto v_resetjp_3659_;
}
v_resetjp_3659_:
{
lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3665_; 
v___x_3662_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__12, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__12_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__12);
lean_inc(v_val_3627_);
v___x_3663_ = l_Nat_reprFast(v_val_3627_);
if (v_isShared_3661_ == 0)
{
lean_ctor_set_tag(v___x_3660_, 3);
lean_ctor_set(v___x_3660_, 0, v___x_3663_);
v___x_3665_ = v___x_3660_;
goto v_reusejp_3664_;
}
else
{
lean_object* v_reuseFailAlloc_3673_; 
v_reuseFailAlloc_3673_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3673_, 0, v___x_3663_);
v___x_3665_ = v_reuseFailAlloc_3673_;
goto v_reusejp_3664_;
}
v_reusejp_3664_:
{
lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; 
v___x_3666_ = l_Lean_MessageData_ofFormat(v___x_3665_);
v___x_3667_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3667_, 0, v___x_3662_);
lean_ctor_set(v___x_3667_, 1, v___x_3666_);
v___x_3668_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6, &l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6_once, _init_l_Lean_Meta_Grind_Arith_CommRing_internalize___closed__6);
v___x_3669_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3669_, 0, v___x_3667_);
lean_ctor_set(v___x_3669_, 1, v___x_3668_);
lean_inc_ref(v_e_3393_);
v___x_3670_ = l_Lean_MessageData_ofExpr(v_e_3393_);
v___x_3671_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3671_, 0, v___x_3669_);
lean_ctor_set(v___x_3671_, 1, v___x_3670_);
v___x_3672_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__3___redArg(v___x_3655_, v___x_3671_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_);
if (lean_obj_tag(v___x_3672_) == 0)
{
lean_dec_ref_known(v___x_3672_, 1);
v___y_3640_ = v_val_3627_;
v___y_3641_ = v_a_3395_;
v___y_3642_ = v_a_3396_;
v___y_3643_ = v_a_3397_;
v___y_3644_ = v_a_3398_;
v___y_3645_ = v_a_3399_;
v___y_3646_ = v_a_3400_;
v___y_3647_ = v_a_3401_;
v___y_3648_ = v_a_3402_;
v___y_3649_ = v_a_3403_;
v___y_3650_ = v_a_3404_;
goto v___jp_3639_;
}
else
{
lean_dec_ref(v___f_3638_);
lean_dec(v_val_3627_);
lean_dec_ref(v_e_3393_);
return v___x_3672_;
}
}
}
}
else
{
lean_dec_ref(v___f_3638_);
lean_dec(v_val_3627_);
lean_dec_ref(v_e_3393_);
return v___x_3658_;
}
}
}
v___jp_3639_:
{
lean_object* v___x_3651_; 
lean_inc_ref(v_e_3393_);
v___x_3651_ = l_Lean_Meta_Grind_Arith_CommRing_setTermNonCommSemiringId___redArg(v_e_3393_, v___y_3640_, v___y_3641_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_);
if (lean_obj_tag(v___x_3651_) == 0)
{
lean_object* v___x_3652_; lean_object* v___x_3653_; 
lean_dec_ref_known(v___x_3651_, 1);
v___x_3652_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_3653_ = l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(v___x_3652_, v_e_3393_, v___y_3641_, v___y_3642_, v___y_3643_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_);
if (lean_obj_tag(v___x_3653_) == 0)
{
lean_object* v___x_3654_; 
lean_dec_ref_known(v___x_3653_, 1);
v___x_3654_ = l_Lean_Meta_Grind_Arith_CommRing_NonCommSemiringM_modifySemiring___redArg(v___f_3638_, v___y_3640_, v___y_3641_);
lean_dec(v___y_3640_);
return v___x_3654_;
}
else
{
lean_dec(v___y_3640_);
lean_dec_ref(v___f_3638_);
return v___x_3653_;
}
}
else
{
lean_dec(v___y_3640_);
lean_dec_ref(v___f_3638_);
lean_dec_ref(v_e_3393_);
return v___x_3651_;
}
}
}
else
{
lean_object* v___x_3676_; lean_object* v___x_3678_; 
lean_dec(v_a_3629_);
lean_dec(v_val_3627_);
lean_dec_ref(v_e_3393_);
v___x_3676_ = lean_box(0);
if (v_isShared_3632_ == 0)
{
lean_ctor_set(v___x_3631_, 0, v___x_3676_);
v___x_3678_ = v___x_3631_;
goto v_reusejp_3677_;
}
else
{
lean_object* v_reuseFailAlloc_3679_; 
v_reuseFailAlloc_3679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3679_, 0, v___x_3676_);
v___x_3678_ = v_reuseFailAlloc_3679_;
goto v_reusejp_3677_;
}
v_reusejp_3677_:
{
return v___x_3678_;
}
}
}
}
else
{
lean_object* v_a_3681_; lean_object* v___x_3683_; uint8_t v_isShared_3684_; uint8_t v_isSharedCheck_3688_; 
lean_dec(v_val_3627_);
lean_dec_ref(v_e_3393_);
v_a_3681_ = lean_ctor_get(v___x_3628_, 0);
v_isSharedCheck_3688_ = !lean_is_exclusive(v___x_3628_);
if (v_isSharedCheck_3688_ == 0)
{
v___x_3683_ = v___x_3628_;
v_isShared_3684_ = v_isSharedCheck_3688_;
goto v_resetjp_3682_;
}
else
{
lean_inc(v_a_3681_);
lean_dec(v___x_3628_);
v___x_3683_ = lean_box(0);
v_isShared_3684_ = v_isSharedCheck_3688_;
goto v_resetjp_3682_;
}
v_resetjp_3682_:
{
lean_object* v___x_3686_; 
if (v_isShared_3684_ == 0)
{
v___x_3686_ = v___x_3683_;
goto v_reusejp_3685_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v_a_3681_);
v___x_3686_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3685_;
}
v_reusejp_3685_:
{
return v___x_3686_;
}
}
}
}
else
{
lean_object* v___x_3689_; lean_object* v___x_3691_; 
lean_dec(v_a_3623_);
lean_dec_ref(v_e_3393_);
v___x_3689_ = lean_box(0);
if (v_isShared_3626_ == 0)
{
lean_ctor_set(v___x_3625_, 0, v___x_3689_);
v___x_3691_ = v___x_3625_;
goto v_reusejp_3690_;
}
else
{
lean_object* v_reuseFailAlloc_3692_; 
v_reuseFailAlloc_3692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3692_, 0, v___x_3689_);
v___x_3691_ = v_reuseFailAlloc_3692_;
goto v_reusejp_3690_;
}
v_reusejp_3690_:
{
return v___x_3691_;
}
}
}
}
else
{
lean_object* v_a_3694_; lean_object* v___x_3696_; uint8_t v_isShared_3697_; uint8_t v_isSharedCheck_3701_; 
lean_dec_ref(v_e_3393_);
v_a_3694_ = lean_ctor_get(v___x_3622_, 0);
v_isSharedCheck_3701_ = !lean_is_exclusive(v___x_3622_);
if (v_isSharedCheck_3701_ == 0)
{
v___x_3696_ = v___x_3622_;
v_isShared_3697_ = v_isSharedCheck_3701_;
goto v_resetjp_3695_;
}
else
{
lean_inc(v_a_3694_);
lean_dec(v___x_3622_);
v___x_3696_ = lean_box(0);
v_isShared_3697_ = v_isSharedCheck_3701_;
goto v_resetjp_3695_;
}
v_resetjp_3695_:
{
lean_object* v___x_3699_; 
if (v_isShared_3697_ == 0)
{
v___x_3699_ = v___x_3696_;
goto v_reusejp_3698_;
}
else
{
lean_object* v_reuseFailAlloc_3700_; 
v_reuseFailAlloc_3700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3700_, 0, v_a_3694_);
v___x_3699_ = v_reuseFailAlloc_3700_;
goto v_reusejp_3698_;
}
v_reusejp_3698_:
{
return v___x_3699_;
}
}
}
}
}
else
{
lean_object* v_a_3702_; lean_object* v___x_3704_; uint8_t v_isShared_3705_; uint8_t v_isSharedCheck_3709_; 
lean_dec(v_val_3424_);
lean_dec_ref(v_e_3393_);
v_a_3702_ = lean_ctor_get(v___x_3557_, 0);
v_isSharedCheck_3709_ = !lean_is_exclusive(v___x_3557_);
if (v_isSharedCheck_3709_ == 0)
{
v___x_3704_ = v___x_3557_;
v_isShared_3705_ = v_isSharedCheck_3709_;
goto v_resetjp_3703_;
}
else
{
lean_inc(v_a_3702_);
lean_dec(v___x_3557_);
v___x_3704_ = lean_box(0);
v_isShared_3705_ = v_isSharedCheck_3709_;
goto v_resetjp_3703_;
}
v_resetjp_3703_:
{
lean_object* v___x_3707_; 
if (v_isShared_3705_ == 0)
{
v___x_3707_ = v___x_3704_;
goto v_reusejp_3706_;
}
else
{
lean_object* v_reuseFailAlloc_3708_; 
v_reuseFailAlloc_3708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3708_, 0, v_a_3702_);
v___x_3707_ = v_reuseFailAlloc_3708_;
goto v_reusejp_3706_;
}
v_reusejp_3706_:
{
return v___x_3707_;
}
}
}
}
}
else
{
lean_object* v_a_3710_; lean_object* v___x_3712_; uint8_t v_isShared_3713_; uint8_t v_isSharedCheck_3717_; 
lean_dec(v_val_3424_);
lean_dec_ref(v_e_3393_);
v_a_3710_ = lean_ctor_get(v___x_3493_, 0);
v_isSharedCheck_3717_ = !lean_is_exclusive(v___x_3493_);
if (v_isSharedCheck_3717_ == 0)
{
v___x_3712_ = v___x_3493_;
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
else
{
lean_inc(v_a_3710_);
lean_dec(v___x_3493_);
v___x_3712_ = lean_box(0);
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
v_resetjp_3711_:
{
lean_object* v___x_3715_; 
if (v_isShared_3713_ == 0)
{
v___x_3715_ = v___x_3712_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v_a_3710_);
v___x_3715_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3714_;
}
v_reusejp_3714_:
{
return v___x_3715_;
}
}
}
}
}
else
{
lean_object* v_a_3718_; lean_object* v___x_3720_; uint8_t v_isShared_3721_; uint8_t v_isSharedCheck_3725_; 
lean_dec(v_val_3424_);
lean_dec_ref(v_e_3393_);
v_a_3718_ = lean_ctor_get(v___x_3426_, 0);
v_isSharedCheck_3725_ = !lean_is_exclusive(v___x_3426_);
if (v_isSharedCheck_3725_ == 0)
{
v___x_3720_ = v___x_3426_;
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
else
{
lean_inc(v_a_3718_);
lean_dec(v___x_3426_);
v___x_3720_ = lean_box(0);
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
v_resetjp_3719_:
{
lean_object* v___x_3723_; 
if (v_isShared_3721_ == 0)
{
v___x_3723_ = v___x_3720_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v_a_3718_);
v___x_3723_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
return v___x_3723_;
}
}
}
}
else
{
lean_object* v___x_3726_; lean_object* v___x_3728_; 
lean_dec(v_val_3424_);
lean_dec_ref(v_e_3393_);
v___x_3726_ = lean_box(0);
if (v_isShared_3421_ == 0)
{
lean_ctor_set(v___x_3420_, 0, v___x_3726_);
v___x_3728_ = v___x_3420_;
goto v_reusejp_3727_;
}
else
{
lean_object* v_reuseFailAlloc_3729_; 
v_reuseFailAlloc_3729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3729_, 0, v___x_3726_);
v___x_3728_ = v_reuseFailAlloc_3729_;
goto v_reusejp_3727_;
}
v_reusejp_3727_:
{
return v___x_3728_;
}
}
}
else
{
lean_object* v___x_3730_; lean_object* v___x_3732_; 
lean_dec(v___x_3423_);
lean_dec(v_parent_x3f_3394_);
lean_dec_ref(v_e_3393_);
v___x_3730_ = lean_box(0);
if (v_isShared_3421_ == 0)
{
lean_ctor_set(v___x_3420_, 0, v___x_3730_);
v___x_3732_ = v___x_3420_;
goto v_reusejp_3731_;
}
else
{
lean_object* v_reuseFailAlloc_3733_; 
v_reuseFailAlloc_3733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3733_, 0, v___x_3730_);
v___x_3732_ = v_reuseFailAlloc_3733_;
goto v_reusejp_3731_;
}
v_reusejp_3731_:
{
return v___x_3732_;
}
}
}
else
{
lean_object* v___x_3734_; lean_object* v___x_3736_; 
lean_dec(v_parent_x3f_3394_);
lean_dec_ref(v_e_3393_);
v___x_3734_ = lean_box(0);
if (v_isShared_3421_ == 0)
{
lean_ctor_set(v___x_3420_, 0, v___x_3734_);
v___x_3736_ = v___x_3420_;
goto v_reusejp_3735_;
}
else
{
lean_object* v_reuseFailAlloc_3737_; 
v_reuseFailAlloc_3737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3737_, 0, v___x_3734_);
v___x_3736_ = v_reuseFailAlloc_3737_;
goto v_reusejp_3735_;
}
v_reusejp_3735_:
{
return v___x_3736_;
}
}
}
}
else
{
lean_object* v_a_3739_; lean_object* v___x_3741_; uint8_t v_isShared_3742_; uint8_t v_isSharedCheck_3746_; 
lean_dec(v_parent_x3f_3394_);
lean_dec_ref(v_e_3393_);
v_a_3739_ = lean_ctor_get(v___x_3417_, 0);
v_isSharedCheck_3746_ = !lean_is_exclusive(v___x_3417_);
if (v_isSharedCheck_3746_ == 0)
{
v___x_3741_ = v___x_3417_;
v_isShared_3742_ = v_isSharedCheck_3746_;
goto v_resetjp_3740_;
}
else
{
lean_inc(v_a_3739_);
lean_dec(v___x_3417_);
v___x_3741_ = lean_box(0);
v_isShared_3742_ = v_isSharedCheck_3746_;
goto v_resetjp_3740_;
}
v_resetjp_3740_:
{
lean_object* v___x_3744_; 
if (v_isShared_3742_ == 0)
{
v___x_3744_ = v___x_3741_;
goto v_reusejp_3743_;
}
else
{
lean_object* v_reuseFailAlloc_3745_; 
v_reuseFailAlloc_3745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3745_, 0, v_a_3739_);
v___x_3744_ = v_reuseFailAlloc_3745_;
goto v_reusejp_3743_;
}
v_reusejp_3743_:
{
return v___x_3744_;
}
}
}
}
else
{
lean_object* v___x_3747_; lean_object* v___x_3749_; 
lean_dec(v_parent_x3f_3394_);
lean_dec_ref(v_e_3393_);
v___x_3747_ = lean_box(0);
if (v_isShared_3410_ == 0)
{
lean_ctor_set(v___x_3409_, 0, v___x_3747_);
v___x_3749_ = v___x_3409_;
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
}
}
else
{
lean_object* v_a_3752_; lean_object* v___x_3754_; uint8_t v_isShared_3755_; uint8_t v_isSharedCheck_3759_; 
lean_dec(v_parent_x3f_3394_);
lean_dec_ref(v_e_3393_);
v_a_3752_ = lean_ctor_get(v___x_3406_, 0);
v_isSharedCheck_3759_ = !lean_is_exclusive(v___x_3406_);
if (v_isSharedCheck_3759_ == 0)
{
v___x_3754_ = v___x_3406_;
v_isShared_3755_ = v_isSharedCheck_3759_;
goto v_resetjp_3753_;
}
else
{
lean_inc(v_a_3752_);
lean_dec(v___x_3406_);
v___x_3754_ = lean_box(0);
v_isShared_3755_ = v_isSharedCheck_3759_;
goto v_resetjp_3753_;
}
v_resetjp_3753_:
{
lean_object* v___x_3757_; 
if (v_isShared_3755_ == 0)
{
v___x_3757_ = v___x_3754_;
goto v_reusejp_3756_;
}
else
{
lean_object* v_reuseFailAlloc_3758_; 
v_reuseFailAlloc_3758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3758_, 0, v_a_3752_);
v___x_3757_ = v_reuseFailAlloc_3758_;
goto v_reusejp_3756_;
}
v_reusejp_3756_:
{
return v___x_3757_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_internalize___boxed(lean_object* v_e_3760_, lean_object* v_parent_x3f_3761_, lean_object* v_a_3762_, lean_object* v_a_3763_, lean_object* v_a_3764_, lean_object* v_a_3765_, lean_object* v_a_3766_, lean_object* v_a_3767_, lean_object* v_a_3768_, lean_object* v_a_3769_, lean_object* v_a_3770_, lean_object* v_a_3771_, lean_object* v_a_3772_){
_start:
{
lean_object* v_res_3773_; 
v_res_3773_ = l_Lean_Meta_Grind_Arith_CommRing_internalize(v_e_3760_, v_parent_x3f_3761_, v_a_3762_, v_a_3763_, v_a_3764_, v_a_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_, v_a_3770_, v_a_3771_);
lean_dec(v_a_3771_);
lean_dec_ref(v_a_3770_);
lean_dec(v_a_3769_);
lean_dec_ref(v_a_3768_);
lean_dec(v_a_3767_);
lean_dec_ref(v_a_3766_);
lean_dec(v_a_3765_);
lean_dec_ref(v_a_3764_);
lean_dec(v_a_3763_);
lean_dec(v_a_3762_);
return v_res_3773_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0(lean_object* v_00_u03b2_3774_, lean_object* v_x_3775_, lean_object* v_x_3776_, lean_object* v_x_3777_){
_start:
{
lean_object* v___x_3778_; 
v___x_3778_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0___redArg(v_x_3775_, v_x_3776_, v_x_3777_);
return v___x_3778_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1(lean_object* v_cls_3779_, lean_object* v_msg_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_, lean_object* v___y_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_){
_start:
{
lean_object* v___x_3793_; 
v___x_3793_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1___redArg(v_cls_3779_, v_msg_3780_, v___y_3788_, v___y_3789_, v___y_3790_, v___y_3791_);
return v___x_3793_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1___boxed(lean_object* v_cls_3794_, lean_object* v_msg_3795_, lean_object* v___y_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_, lean_object* v___y_3806_, lean_object* v___y_3807_){
_start:
{
lean_object* v_res_3808_; 
v_res_3808_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__1(v_cls_3794_, v_msg_3795_, v___y_3796_, v___y_3797_, v___y_3798_, v___y_3799_, v___y_3800_, v___y_3801_, v___y_3802_, v___y_3803_, v___y_3804_, v___y_3805_, v___y_3806_);
lean_dec(v___y_3806_);
lean_dec_ref(v___y_3805_);
lean_dec(v___y_3804_);
lean_dec_ref(v___y_3803_);
lean_dec(v___y_3802_);
lean_dec_ref(v___y_3801_);
lean_dec(v___y_3800_);
lean_dec_ref(v___y_3799_);
lean_dec(v___y_3798_);
lean_dec(v___y_3797_);
lean_dec(v___y_3796_);
return v_res_3808_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2(lean_object* v_cls_3809_, lean_object* v_msg_3810_, lean_object* v___y_3811_, lean_object* v___y_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_){
_start:
{
lean_object* v___x_3823_; 
v___x_3823_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2___redArg(v_cls_3809_, v_msg_3810_, v___y_3818_, v___y_3819_, v___y_3820_, v___y_3821_);
return v___x_3823_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2___boxed(lean_object* v_cls_3824_, lean_object* v_msg_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_){
_start:
{
lean_object* v_res_3838_; 
v_res_3838_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__2(v_cls_3824_, v_msg_3825_, v___y_3826_, v___y_3827_, v___y_3828_, v___y_3829_, v___y_3830_, v___y_3831_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_);
lean_dec(v___y_3836_);
lean_dec_ref(v___y_3835_);
lean_dec(v___y_3834_);
lean_dec_ref(v___y_3833_);
lean_dec(v___y_3832_);
lean_dec_ref(v___y_3831_);
lean_dec(v___y_3830_);
lean_dec_ref(v___y_3829_);
lean_dec(v___y_3828_);
lean_dec(v___y_3827_);
lean_dec(v___y_3826_);
return v_res_3838_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__3(lean_object* v_cls_3839_, lean_object* v_msg_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_, lean_object* v___y_3847_, lean_object* v___y_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_){
_start:
{
lean_object* v___x_3853_; 
v___x_3853_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__3___redArg(v_cls_3839_, v_msg_3840_, v___y_3848_, v___y_3849_, v___y_3850_, v___y_3851_);
return v___x_3853_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__3___boxed(lean_object* v_cls_3854_, lean_object* v_msg_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_, lean_object* v___y_3866_, lean_object* v___y_3867_){
_start:
{
lean_object* v_res_3868_; 
v_res_3868_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__3(v_cls_3854_, v_msg_3855_, v___y_3856_, v___y_3857_, v___y_3858_, v___y_3859_, v___y_3860_, v___y_3861_, v___y_3862_, v___y_3863_, v___y_3864_, v___y_3865_, v___y_3866_);
lean_dec(v___y_3866_);
lean_dec_ref(v___y_3865_);
lean_dec(v___y_3864_);
lean_dec_ref(v___y_3863_);
lean_dec(v___y_3862_);
lean_dec_ref(v___y_3861_);
lean_dec(v___y_3860_);
lean_dec_ref(v___y_3859_);
lean_dec(v___y_3858_);
lean_dec(v___y_3857_);
lean_dec(v___y_3856_);
return v_res_3868_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0(lean_object* v_00_u03b2_3869_, lean_object* v_x_3870_, size_t v_x_3871_, size_t v_x_3872_, lean_object* v_x_3873_, lean_object* v_x_3874_){
_start:
{
lean_object* v___x_3875_; 
v___x_3875_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0___redArg(v_x_3870_, v_x_3871_, v_x_3872_, v_x_3873_, v_x_3874_);
return v___x_3875_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3876_, lean_object* v_x_3877_, lean_object* v_x_3878_, lean_object* v_x_3879_, lean_object* v_x_3880_, lean_object* v_x_3881_){
_start:
{
size_t v_x_153014__boxed_3882_; size_t v_x_153015__boxed_3883_; lean_object* v_res_3884_; 
v_x_153014__boxed_3882_ = lean_unbox_usize(v_x_3878_);
lean_dec(v_x_3878_);
v_x_153015__boxed_3883_ = lean_unbox_usize(v_x_3879_);
lean_dec(v_x_3879_);
v_res_3884_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0(v_00_u03b2_3876_, v_x_3877_, v_x_153014__boxed_3882_, v_x_153015__boxed_3883_, v_x_3880_, v_x_3881_);
return v_res_3884_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_3885_, lean_object* v_n_3886_, lean_object* v_k_3887_, lean_object* v_v_3888_){
_start:
{
lean_object* v___x_3889_; 
v___x_3889_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__1___redArg(v_n_3886_, v_k_3887_, v_v_3888_);
return v___x_3889_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_3890_, size_t v_depth_3891_, lean_object* v_keys_3892_, lean_object* v_vals_3893_, lean_object* v_heq_3894_, lean_object* v_i_3895_, lean_object* v_entries_3896_){
_start:
{
lean_object* v___x_3897_; 
v___x_3897_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__2___redArg(v_depth_3891_, v_keys_3892_, v_vals_3893_, v_i_3895_, v_entries_3896_);
return v___x_3897_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_3898_, lean_object* v_depth_3899_, lean_object* v_keys_3900_, lean_object* v_vals_3901_, lean_object* v_heq_3902_, lean_object* v_i_3903_, lean_object* v_entries_3904_){
_start:
{
size_t v_depth_boxed_3905_; lean_object* v_res_3906_; 
v_depth_boxed_3905_ = lean_unbox_usize(v_depth_3899_);
lean_dec(v_depth_3899_);
v_res_3906_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__2(v_00_u03b2_3898_, v_depth_boxed_3905_, v_keys_3900_, v_vals_3901_, v_heq_3902_, v_i_3903_, v_entries_3904_);
lean_dec_ref(v_vals_3901_);
lean_dec_ref(v_keys_3900_);
return v_res_3906_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__1_spec__5(lean_object* v_00_u03b2_3907_, lean_object* v_x_3908_, lean_object* v_x_3909_, lean_object* v_x_3910_, lean_object* v_x_3911_){
_start:
{
lean_object* v___x_3912_; 
v___x_3912_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_internalize_spec__0_spec__0_spec__1_spec__5___redArg(v_x_3908_, v_x_3909_, v_x_3910_, v_x_3911_);
return v___x_3912_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_DenoteExpr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_DenoteExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_DenoteExpr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_DenoteExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Internalize(builtin);
}
#ifdef __cplusplus
}
#endif

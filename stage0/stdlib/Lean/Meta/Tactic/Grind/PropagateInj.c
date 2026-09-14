// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.PropagateInj
// Imports: public import Lean.Meta.Tactic.Grind.Types import Init.Grind.Propagator import Init.Grind.Injective import Lean.Meta.Tactic.Grind.PropagatorAttr import Lean.Meta.Tactic.Grind.Simp
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
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_HeadIndex_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
uint8_t l_Lean_instBEqHeadIndex_beq(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t lean_usize_to_uint64(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_toHeadIndex(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_instInhabitedGoalM___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_preprocessLight___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
lean_object* lean_grind_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqTrueProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_Meta_mkOfEqTrueCore(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqTrue___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_eta(lean_object*);
lean_object* l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Meta.Tactic.Grind.PropagateInj"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "_private.Lean.Meta.Tactic.Grind.PropagateInj.0.Lean.Meta.Grind.getInvFor\?"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Nonempty"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(142, 191, 110, 220, 210, 100, 152, 183)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(113, 209, 180, 93, 84, 117, 67, 110)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "leftInv"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__8_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__10_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__9_value),LEAN_SCALAR_PTR_LITERAL(125, 193, 128, 144, 122, 197, 27, 63)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__11;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__12;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "leftInv_eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__14_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__8_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__14_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__13_value),LEAN_SCALAR_PTR_LITERAL(247, 98, 181, 128, 57, 3, 90, 161)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__14_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_mkInjEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l_Lean_Meta_Grind_mkInjEq___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_mkInjEq___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_mkInjEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inj"};
static const lean_object* l_Lean_Meta_Grind_mkInjEq___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_mkInjEq___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_mkInjEq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "assert"};
static const lean_object* l_Lean_Meta_Grind_mkInjEq___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_mkInjEq___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_mkInjEq___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_mkInjEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkInjEq___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkInjEq___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_mkInjEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(178, 139, 26, 158, 27, 86, 65, 26)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkInjEq___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkInjEq___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_mkInjEq___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 213, 49, 65, 20, 205, 188, 235)}};
static const lean_object* l_Lean_Meta_Grind_mkInjEq___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_mkInjEq___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_mkInjEq___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Grind_mkInjEq___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_mkInjEq___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_mkInjEq___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_mkInjEq___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Grind_mkInjEq___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_mkInjEq___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Grind_mkInjEq___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkInjEq___closed__6;
static const lean_string_object l_Lean_Meta_Grind_mkInjEq___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lean_Meta_Grind_mkInjEq___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_mkInjEq___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Grind_mkInjEq___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkInjEq___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkInjEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkInjEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Function"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Injective"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 8, 186, 189, 152, 89, 197, 12)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 162, 25, 76, 92, 227, 14, 201)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___regBuiltin___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj_declare__1_00___x40_Lean_Meta_Tactic_Grind_PropagateInj_3930705876____hygCtx___hyg_9_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___regBuiltin___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj_declare__1_00___x40_Lean_Meta_Tactic_Grind_PropagateInj_3930705876____hygCtx___hyg_9____boxed(lean_object*);
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_Meta_Grind_instInhabitedGoalM___redArg();
return v___x_1_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__0(lean_object* v_msg_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_){
_start:
{
lean_object* v___x_14_; lean_object* v___x_9232__overap_15_; lean_object* v___x_16_; 
v___x_14_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__0___closed__0, &l_panic___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__0___closed__0);
v___x_9232__overap_15_ = lean_panic_fn_borrowed(v___x_14_, v_msg_2_);
lean_inc(v___y_12_);
lean_inc_ref(v___y_11_);
lean_inc(v___y_10_);
lean_inc_ref(v___y_9_);
lean_inc(v___y_8_);
lean_inc_ref(v___y_7_);
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
lean_inc(v___y_4_);
lean_inc(v___y_3_);
v___x_16_ = lean_apply_11(v___x_9232__overap_15_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, v___y_11_, v___y_12_, lean_box(0));
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__0___boxed(lean_object* v_msg_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__0(v_msg_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_);
lean_dec(v___y_27_);
lean_dec_ref(v___y_26_);
lean_dec(v___y_25_);
lean_dec_ref(v___y_24_);
lean_dec(v___y_23_);
lean_dec_ref(v___y_22_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
lean_dec(v___y_19_);
lean_dec(v___y_18_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1_spec__2___redArg(lean_object* v_keys_30_, lean_object* v_vals_31_, lean_object* v_i_32_, lean_object* v_k_33_){
_start:
{
lean_object* v___x_34_; uint8_t v___x_35_; 
v___x_34_ = lean_array_get_size(v_keys_30_);
v___x_35_ = lean_nat_dec_lt(v_i_32_, v___x_34_);
if (v___x_35_ == 0)
{
lean_object* v___x_36_; 
lean_dec(v_i_32_);
v___x_36_ = lean_box(0);
return v___x_36_;
}
else
{
lean_object* v_k_x27_37_; size_t v___x_38_; size_t v___x_39_; uint8_t v___x_40_; 
v_k_x27_37_ = lean_array_fget_borrowed(v_keys_30_, v_i_32_);
v___x_38_ = lean_ptr_addr(v_k_33_);
v___x_39_ = lean_ptr_addr(v_k_x27_37_);
v___x_40_ = lean_usize_dec_eq(v___x_38_, v___x_39_);
if (v___x_40_ == 0)
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_unsigned_to_nat(1u);
v___x_42_ = lean_nat_add(v_i_32_, v___x_41_);
lean_dec(v_i_32_);
v_i_32_ = v___x_42_;
goto _start;
}
else
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = lean_array_fget_borrowed(v_vals_31_, v_i_32_);
lean_dec(v_i_32_);
lean_inc(v___x_44_);
v___x_45_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_45_, 0, v___x_44_);
return v___x_45_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_keys_46_, lean_object* v_vals_47_, lean_object* v_i_48_, lean_object* v_k_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1_spec__2___redArg(v_keys_46_, v_vals_47_, v_i_48_, v_k_49_);
lean_dec_ref(v_k_49_);
lean_dec_ref(v_vals_47_);
lean_dec_ref(v_keys_46_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1___redArg(lean_object* v_x_51_, size_t v_x_52_, lean_object* v_x_53_){
_start:
{
if (lean_obj_tag(v_x_51_) == 0)
{
lean_object* v_es_54_; lean_object* v___x_55_; size_t v___x_56_; size_t v___x_57_; lean_object* v_j_58_; lean_object* v___x_59_; 
v_es_54_ = lean_ctor_get(v_x_51_, 0);
v___x_55_ = lean_box(2);
v___x_56_ = ((size_t)31ULL);
v___x_57_ = lean_usize_land(v_x_52_, v___x_56_);
v_j_58_ = lean_usize_to_nat(v___x_57_);
v___x_59_ = lean_array_get_borrowed(v___x_55_, v_es_54_, v_j_58_);
lean_dec(v_j_58_);
switch(lean_obj_tag(v___x_59_))
{
case 0:
{
lean_object* v_key_60_; lean_object* v_val_61_; size_t v___x_62_; size_t v___x_63_; uint8_t v___x_64_; 
v_key_60_ = lean_ctor_get(v___x_59_, 0);
v_val_61_ = lean_ctor_get(v___x_59_, 1);
v___x_62_ = lean_ptr_addr(v_x_53_);
v___x_63_ = lean_ptr_addr(v_key_60_);
v___x_64_ = lean_usize_dec_eq(v___x_62_, v___x_63_);
if (v___x_64_ == 0)
{
lean_object* v___x_65_; 
v___x_65_ = lean_box(0);
return v___x_65_;
}
else
{
lean_object* v___x_66_; 
lean_inc(v_val_61_);
v___x_66_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_66_, 0, v_val_61_);
return v___x_66_;
}
}
case 1:
{
lean_object* v_node_67_; size_t v___x_68_; size_t v___x_69_; 
v_node_67_ = lean_ctor_get(v___x_59_, 0);
v___x_68_ = ((size_t)5ULL);
v___x_69_ = lean_usize_shift_right(v_x_52_, v___x_68_);
v_x_51_ = v_node_67_;
v_x_52_ = v___x_69_;
goto _start;
}
default: 
{
lean_object* v___x_71_; 
v___x_71_ = lean_box(0);
return v___x_71_;
}
}
}
else
{
lean_object* v_ks_72_; lean_object* v_vs_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v_ks_72_ = lean_ctor_get(v_x_51_, 0);
v_vs_73_ = lean_ctor_get(v_x_51_, 1);
v___x_74_ = lean_unsigned_to_nat(0u);
v___x_75_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1_spec__2___redArg(v_ks_72_, v_vs_73_, v___x_74_, v_x_53_);
return v___x_75_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1___redArg___boxed(lean_object* v_x_76_, lean_object* v_x_77_, lean_object* v_x_78_){
_start:
{
size_t v_x_9785__boxed_79_; lean_object* v_res_80_; 
v_x_9785__boxed_79_ = lean_unbox_usize(v_x_77_);
lean_dec(v_x_77_);
v_res_80_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1___redArg(v_x_76_, v_x_9785__boxed_79_, v_x_78_);
lean_dec_ref(v_x_78_);
lean_dec_ref(v_x_76_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1___redArg(lean_object* v_x_81_, lean_object* v_x_82_){
_start:
{
size_t v___x_83_; size_t v___x_84_; size_t v___x_85_; uint64_t v___x_86_; size_t v___x_87_; lean_object* v___x_88_; 
v___x_83_ = lean_ptr_addr(v_x_82_);
v___x_84_ = ((size_t)3ULL);
v___x_85_ = lean_usize_shift_right(v___x_83_, v___x_84_);
v___x_86_ = lean_usize_to_uint64(v___x_85_);
v___x_87_ = lean_uint64_to_usize(v___x_86_);
v___x_88_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1___redArg(v_x_81_, v___x_87_, v_x_82_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1___redArg___boxed(lean_object* v_x_89_, lean_object* v_x_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1___redArg(v_x_89_, v_x_90_);
lean_dec_ref(v_x_90_);
lean_dec_ref(v_x_89_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__5_spec__6___redArg(lean_object* v_x_92_, lean_object* v_x_93_, lean_object* v_x_94_, lean_object* v_x_95_){
_start:
{
lean_object* v_ks_96_; lean_object* v_vs_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_123_; 
v_ks_96_ = lean_ctor_get(v_x_92_, 0);
v_vs_97_ = lean_ctor_get(v_x_92_, 1);
v_isSharedCheck_123_ = !lean_is_exclusive(v_x_92_);
if (v_isSharedCheck_123_ == 0)
{
v___x_99_ = v_x_92_;
v_isShared_100_ = v_isSharedCheck_123_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_vs_97_);
lean_inc(v_ks_96_);
lean_dec(v_x_92_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_123_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___x_101_; uint8_t v___x_102_; 
v___x_101_ = lean_array_get_size(v_ks_96_);
v___x_102_ = lean_nat_dec_lt(v_x_93_, v___x_101_);
if (v___x_102_ == 0)
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_106_; 
lean_dec(v_x_93_);
v___x_103_ = lean_array_push(v_ks_96_, v_x_94_);
v___x_104_ = lean_array_push(v_vs_97_, v_x_95_);
if (v_isShared_100_ == 0)
{
lean_ctor_set(v___x_99_, 1, v___x_104_);
lean_ctor_set(v___x_99_, 0, v___x_103_);
v___x_106_ = v___x_99_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v___x_103_);
lean_ctor_set(v_reuseFailAlloc_107_, 1, v___x_104_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
else
{
lean_object* v_k_x27_108_; size_t v___x_109_; size_t v___x_110_; uint8_t v___x_111_; 
v_k_x27_108_ = lean_array_fget_borrowed(v_ks_96_, v_x_93_);
v___x_109_ = lean_ptr_addr(v_x_94_);
v___x_110_ = lean_ptr_addr(v_k_x27_108_);
v___x_111_ = lean_usize_dec_eq(v___x_109_, v___x_110_);
if (v___x_111_ == 0)
{
lean_object* v___x_113_; 
if (v_isShared_100_ == 0)
{
v___x_113_ = v___x_99_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v_ks_96_);
lean_ctor_set(v_reuseFailAlloc_117_, 1, v_vs_97_);
v___x_113_ = v_reuseFailAlloc_117_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_114_ = lean_unsigned_to_nat(1u);
v___x_115_ = lean_nat_add(v_x_93_, v___x_114_);
lean_dec(v_x_93_);
v_x_92_ = v___x_113_;
v_x_93_ = v___x_115_;
goto _start;
}
}
else
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_121_; 
v___x_118_ = lean_array_fset(v_ks_96_, v_x_93_, v_x_94_);
v___x_119_ = lean_array_fset(v_vs_97_, v_x_93_, v_x_95_);
lean_dec(v_x_93_);
if (v_isShared_100_ == 0)
{
lean_ctor_set(v___x_99_, 1, v___x_119_);
lean_ctor_set(v___x_99_, 0, v___x_118_);
v___x_121_ = v___x_99_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v___x_118_);
lean_ctor_set(v_reuseFailAlloc_122_, 1, v___x_119_);
v___x_121_ = v_reuseFailAlloc_122_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
return v___x_121_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__5___redArg(lean_object* v_n_124_, lean_object* v_k_125_, lean_object* v_v_126_){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = lean_unsigned_to_nat(0u);
v___x_128_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__5_spec__6___redArg(v_n_124_, v___x_127_, v_k_125_, v_v_126_);
return v___x_128_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_box(0);
v___x_130_ = l_unsafeCast___redArg(v___x_129_);
return v___x_130_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___redArg(lean_object* v_x_132_, size_t v_x_133_, size_t v_x_134_, lean_object* v_x_135_, lean_object* v_x_136_){
_start:
{
if (lean_obj_tag(v_x_132_) == 0)
{
lean_object* v_es_137_; size_t v___x_138_; size_t v___x_139_; lean_object* v_j_140_; lean_object* v___x_141_; uint8_t v___x_142_; 
v_es_137_ = lean_ctor_get(v_x_132_, 0);
v___x_138_ = ((size_t)31ULL);
v___x_139_ = lean_usize_land(v_x_133_, v___x_138_);
v_j_140_ = lean_usize_to_nat(v___x_139_);
v___x_141_ = lean_array_get_size(v_es_137_);
v___x_142_ = lean_nat_dec_lt(v_j_140_, v___x_141_);
if (v___x_142_ == 0)
{
lean_dec(v_j_140_);
lean_dec(v_x_136_);
lean_dec_ref(v_x_135_);
return v_x_132_;
}
else
{
lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_183_; 
lean_inc_ref(v_es_137_);
v_isSharedCheck_183_ = !lean_is_exclusive(v_x_132_);
if (v_isSharedCheck_183_ == 0)
{
lean_object* v_unused_184_; 
v_unused_184_ = lean_ctor_get(v_x_132_, 0);
lean_dec(v_unused_184_);
v___x_144_ = v_x_132_;
v_isShared_145_ = v_isSharedCheck_183_;
goto v_resetjp_143_;
}
else
{
lean_dec(v_x_132_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_183_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v_v_146_; lean_object* v___x_147_; lean_object* v_xs_x27_148_; lean_object* v___y_150_; 
v_v_146_ = lean_array_fget(v_es_137_, v_j_140_);
v___x_147_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___redArg___closed__0);
v_xs_x27_148_ = lean_array_fset(v_es_137_, v_j_140_, v___x_147_);
switch(lean_obj_tag(v_v_146_))
{
case 0:
{
lean_object* v_key_155_; lean_object* v_val_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_168_; 
v_key_155_ = lean_ctor_get(v_v_146_, 0);
v_val_156_ = lean_ctor_get(v_v_146_, 1);
v_isSharedCheck_168_ = !lean_is_exclusive(v_v_146_);
if (v_isSharedCheck_168_ == 0)
{
v___x_158_ = v_v_146_;
v_isShared_159_ = v_isSharedCheck_168_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_val_156_);
lean_inc(v_key_155_);
lean_dec(v_v_146_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_168_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
size_t v___x_160_; size_t v___x_161_; uint8_t v___x_162_; 
v___x_160_ = lean_ptr_addr(v_x_135_);
v___x_161_ = lean_ptr_addr(v_key_155_);
v___x_162_ = lean_usize_dec_eq(v___x_160_, v___x_161_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; lean_object* v___x_164_; 
lean_del_object(v___x_158_);
v___x_163_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_155_, v_val_156_, v_x_135_, v_x_136_);
v___x_164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
v___y_150_ = v___x_164_;
goto v___jp_149_;
}
else
{
lean_object* v___x_166_; 
lean_dec(v_val_156_);
lean_dec(v_key_155_);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 1, v_x_136_);
lean_ctor_set(v___x_158_, 0, v_x_135_);
v___x_166_ = v___x_158_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v_x_135_);
lean_ctor_set(v_reuseFailAlloc_167_, 1, v_x_136_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
v___y_150_ = v___x_166_;
goto v___jp_149_;
}
}
}
}
case 1:
{
lean_object* v_node_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_181_; 
v_node_169_ = lean_ctor_get(v_v_146_, 0);
v_isSharedCheck_181_ = !lean_is_exclusive(v_v_146_);
if (v_isSharedCheck_181_ == 0)
{
v___x_171_ = v_v_146_;
v_isShared_172_ = v_isSharedCheck_181_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_node_169_);
lean_dec(v_v_146_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_181_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
size_t v___x_173_; size_t v___x_174_; size_t v___x_175_; size_t v___x_176_; lean_object* v___x_177_; lean_object* v___x_179_; 
v___x_173_ = ((size_t)5ULL);
v___x_174_ = lean_usize_shift_right(v_x_133_, v___x_173_);
v___x_175_ = ((size_t)1ULL);
v___x_176_ = lean_usize_add(v_x_134_, v___x_175_);
v___x_177_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___redArg(v_node_169_, v___x_174_, v___x_176_, v_x_135_, v_x_136_);
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 0, v___x_177_);
v___x_179_ = v___x_171_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v___x_177_);
v___x_179_ = v_reuseFailAlloc_180_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
v___y_150_ = v___x_179_;
goto v___jp_149_;
}
}
}
default: 
{
lean_object* v___x_182_; 
v___x_182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_182_, 0, v_x_135_);
lean_ctor_set(v___x_182_, 1, v_x_136_);
v___y_150_ = v___x_182_;
goto v___jp_149_;
}
}
v___jp_149_:
{
lean_object* v___x_151_; lean_object* v___x_153_; 
v___x_151_ = lean_array_fset(v_xs_x27_148_, v_j_140_, v___y_150_);
lean_dec(v_j_140_);
if (v_isShared_145_ == 0)
{
lean_ctor_set(v___x_144_, 0, v___x_151_);
v___x_153_ = v___x_144_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v___x_151_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
}
else
{
lean_object* v_ks_185_; lean_object* v_vs_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_204_; 
v_ks_185_ = lean_ctor_get(v_x_132_, 0);
v_vs_186_ = lean_ctor_get(v_x_132_, 1);
v_isSharedCheck_204_ = !lean_is_exclusive(v_x_132_);
if (v_isSharedCheck_204_ == 0)
{
v___x_188_ = v_x_132_;
v_isShared_189_ = v_isSharedCheck_204_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_vs_186_);
lean_inc(v_ks_185_);
lean_dec(v_x_132_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_204_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_191_; 
if (v_isShared_189_ == 0)
{
v___x_191_ = v___x_188_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v_ks_185_);
lean_ctor_set(v_reuseFailAlloc_203_, 1, v_vs_186_);
v___x_191_ = v_reuseFailAlloc_203_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
lean_object* v_newNode_192_; size_t v___x_193_; uint8_t v___x_194_; 
v_newNode_192_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__5___redArg(v___x_191_, v_x_135_, v_x_136_);
v___x_193_ = ((size_t)7ULL);
v___x_194_ = lean_usize_dec_le(v___x_193_, v_x_134_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; lean_object* v___x_196_; uint8_t v___x_197_; 
v___x_195_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_192_);
v___x_196_ = lean_unsigned_to_nat(4u);
v___x_197_ = lean_nat_dec_lt(v___x_195_, v___x_196_);
lean_dec(v___x_195_);
if (v___x_197_ == 0)
{
lean_object* v_ks_198_; lean_object* v_vs_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v_ks_198_ = lean_ctor_get(v_newNode_192_, 0);
lean_inc_ref(v_ks_198_);
v_vs_199_ = lean_ctor_get(v_newNode_192_, 1);
lean_inc_ref(v_vs_199_);
lean_dec_ref(v_newNode_192_);
v___x_200_ = lean_unsigned_to_nat(0u);
v___x_201_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___redArg___closed__1);
v___x_202_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__6___redArg(v_x_134_, v_ks_198_, v_vs_199_, v___x_200_, v___x_201_);
lean_dec_ref(v_vs_199_);
lean_dec_ref(v_ks_198_);
return v___x_202_;
}
else
{
return v_newNode_192_;
}
}
else
{
return v_newNode_192_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__6___redArg(size_t v_depth_205_, lean_object* v_keys_206_, lean_object* v_vals_207_, lean_object* v_i_208_, lean_object* v_entries_209_){
_start:
{
lean_object* v___x_210_; uint8_t v___x_211_; 
v___x_210_ = lean_array_get_size(v_keys_206_);
v___x_211_ = lean_nat_dec_lt(v_i_208_, v___x_210_);
if (v___x_211_ == 0)
{
lean_dec(v_i_208_);
return v_entries_209_;
}
else
{
lean_object* v_k_212_; lean_object* v_v_213_; size_t v___x_214_; size_t v___x_215_; size_t v___x_216_; uint64_t v___x_217_; size_t v_h_218_; size_t v___x_219_; lean_object* v___x_220_; size_t v___x_221_; size_t v___x_222_; size_t v___x_223_; size_t v_h_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v_k_212_ = lean_array_fget_borrowed(v_keys_206_, v_i_208_);
v_v_213_ = lean_array_fget_borrowed(v_vals_207_, v_i_208_);
v___x_214_ = lean_ptr_addr(v_k_212_);
v___x_215_ = ((size_t)3ULL);
v___x_216_ = lean_usize_shift_right(v___x_214_, v___x_215_);
v___x_217_ = lean_usize_to_uint64(v___x_216_);
v_h_218_ = lean_uint64_to_usize(v___x_217_);
v___x_219_ = ((size_t)5ULL);
v___x_220_ = lean_unsigned_to_nat(1u);
v___x_221_ = ((size_t)1ULL);
v___x_222_ = lean_usize_sub(v_depth_205_, v___x_221_);
v___x_223_ = lean_usize_mul(v___x_219_, v___x_222_);
v_h_224_ = lean_usize_shift_right(v_h_218_, v___x_223_);
v___x_225_ = lean_nat_add(v_i_208_, v___x_220_);
lean_dec(v_i_208_);
lean_inc(v_v_213_);
lean_inc(v_k_212_);
v___x_226_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___redArg(v_entries_209_, v_h_224_, v_depth_205_, v_k_212_, v_v_213_);
v_i_208_ = v___x_225_;
v_entries_209_ = v___x_226_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_depth_228_, lean_object* v_keys_229_, lean_object* v_vals_230_, lean_object* v_i_231_, lean_object* v_entries_232_){
_start:
{
size_t v_depth_boxed_233_; lean_object* v_res_234_; 
v_depth_boxed_233_ = lean_unbox_usize(v_depth_228_);
lean_dec(v_depth_228_);
v_res_234_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__6___redArg(v_depth_boxed_233_, v_keys_229_, v_vals_230_, v_i_231_, v_entries_232_);
lean_dec_ref(v_vals_230_);
lean_dec_ref(v_keys_229_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___redArg___boxed(lean_object* v_x_235_, lean_object* v_x_236_, lean_object* v_x_237_, lean_object* v_x_238_, lean_object* v_x_239_){
_start:
{
size_t v_x_9941__boxed_240_; size_t v_x_9942__boxed_241_; lean_object* v_res_242_; 
v_x_9941__boxed_240_ = lean_unbox_usize(v_x_236_);
lean_dec(v_x_236_);
v_x_9942__boxed_241_ = lean_unbox_usize(v_x_237_);
lean_dec(v_x_237_);
v_res_242_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___redArg(v_x_235_, v_x_9941__boxed_240_, v_x_9942__boxed_241_, v_x_238_, v_x_239_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2___redArg(lean_object* v_x_243_, lean_object* v_x_244_, lean_object* v_x_245_){
_start:
{
size_t v___x_246_; size_t v___x_247_; size_t v___x_248_; uint64_t v___x_249_; size_t v___x_250_; size_t v___x_251_; lean_object* v___x_252_; 
v___x_246_ = lean_ptr_addr(v_x_244_);
v___x_247_ = ((size_t)3ULL);
v___x_248_ = lean_usize_shift_right(v___x_246_, v___x_247_);
v___x_249_ = lean_usize_to_uint64(v___x_248_);
v___x_250_ = lean_uint64_to_usize(v___x_249_);
v___x_251_ = ((size_t)1ULL);
v___x_252_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___redArg(v_x_243_, v___x_250_, v___x_251_, v_x_244_, v_x_245_);
return v___x_252_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__3(void){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_256_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__2));
v___x_257_ = lean_unsigned_to_nat(26u);
v___x_258_ = lean_unsigned_to_nat(19u);
v___x_259_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__1));
v___x_260_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__0));
v___x_261_ = l_mkPanicMessageWithDecl(v___x_260_, v___x_259_, v___x_258_, v___x_257_, v___x_256_);
return v___x_261_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__11(void){
_start:
{
lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_274_ = lean_box(0);
v___x_275_ = l_unsafeCast___redArg(v___x_274_);
return v___x_275_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__12(void){
_start:
{
lean_object* v___x_276_; lean_object* v_dummy_277_; 
v___x_276_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__11, &l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__11_once, _init_l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__11);
v_dummy_277_ = l_Lean_Expr_sort___override(v___x_276_);
return v_dummy_277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f(lean_object* v_f_283_, lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_){
_start:
{
lean_object* v___y_297_; lean_object* v___y_298_; lean_object* v___y_299_; lean_object* v___y_300_; lean_object* v___y_301_; lean_object* v___y_302_; lean_object* v___y_303_; lean_object* v___y_304_; lean_object* v___y_305_; lean_object* v___y_306_; lean_object* v___x_309_; lean_object* v_toGoalState_310_; lean_object* v_inj_311_; lean_object* v_fns_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_436_; 
v___x_309_ = lean_st_ref_get(v_a_285_);
v_toGoalState_310_ = lean_ctor_get(v___x_309_, 0);
lean_inc_ref(v_toGoalState_310_);
lean_dec(v___x_309_);
v_inj_311_ = lean_ctor_get(v_toGoalState_310_, 13);
lean_inc_ref(v_inj_311_);
lean_dec_ref(v_toGoalState_310_);
v_fns_312_ = lean_ctor_get(v_inj_311_, 1);
v_isSharedCheck_436_ = !lean_is_exclusive(v_inj_311_);
if (v_isSharedCheck_436_ == 0)
{
lean_object* v_unused_437_; 
v_unused_437_ = lean_ctor_get(v_inj_311_, 0);
lean_dec(v_unused_437_);
v___x_314_ = v_inj_311_;
v_isShared_315_ = v_isSharedCheck_436_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_fns_312_);
lean_dec(v_inj_311_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_436_;
goto v_resetjp_313_;
}
v___jp_296_:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__3, &l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__3);
v___x_308_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__0(v___x_307_, v___y_297_, v___y_298_, v___y_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_);
return v___x_308_;
}
v_resetjp_313_:
{
lean_object* v___x_316_; 
v___x_316_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1___redArg(v_fns_312_, v_f_283_);
lean_dec_ref(v_fns_312_);
if (lean_obj_tag(v___x_316_) == 1)
{
lean_object* v_val_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_433_; 
v_val_317_ = lean_ctor_get(v___x_316_, 0);
v_isSharedCheck_433_ = !lean_is_exclusive(v___x_316_);
if (v_isSharedCheck_433_ == 0)
{
v___x_319_ = v___x_316_;
v_isShared_320_ = v_isSharedCheck_433_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_val_317_);
lean_dec(v___x_316_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_433_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v_inv_x3f_321_; 
v_inv_x3f_321_ = lean_ctor_get(v_val_317_, 4);
if (lean_obj_tag(v_inv_x3f_321_) == 1)
{
lean_object* v___x_322_; 
lean_inc_ref(v_inv_x3f_321_);
lean_del_object(v___x_319_);
lean_dec(v_val_317_);
lean_del_object(v___x_314_);
lean_dec_ref(v_a_284_);
lean_dec_ref(v_f_283_);
v___x_322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_322_, 0, v_inv_x3f_321_);
return v___x_322_;
}
else
{
lean_object* v_us_323_; 
v_us_323_ = lean_ctor_get(v_val_317_, 0);
lean_inc(v_us_323_);
if (lean_obj_tag(v_us_323_) == 1)
{
lean_object* v_tail_324_; 
v_tail_324_ = lean_ctor_get(v_us_323_, 1);
lean_inc(v_tail_324_);
if (lean_obj_tag(v_tail_324_) == 1)
{
lean_object* v_tail_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_431_; 
v_tail_325_ = lean_ctor_get(v_tail_324_, 1);
v_isSharedCheck_431_ = !lean_is_exclusive(v_tail_324_);
if (v_isSharedCheck_431_ == 0)
{
lean_object* v_unused_432_; 
v_unused_432_ = lean_ctor_get(v_tail_324_, 0);
lean_dec(v_unused_432_);
v___x_327_ = v_tail_324_;
v_isShared_328_ = v_isSharedCheck_431_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_tail_325_);
lean_dec(v_tail_324_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_431_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
if (lean_obj_tag(v_tail_325_) == 0)
{
lean_object* v_00_u03b1_329_; lean_object* v_00_u03b2_330_; lean_object* v_h_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_428_; 
v_00_u03b1_329_ = lean_ctor_get(v_val_317_, 1);
v_00_u03b2_330_ = lean_ctor_get(v_val_317_, 2);
v_h_331_ = lean_ctor_get(v_val_317_, 3);
v_isSharedCheck_428_ = !lean_is_exclusive(v_val_317_);
if (v_isSharedCheck_428_ == 0)
{
lean_object* v_unused_429_; lean_object* v_unused_430_; 
v_unused_429_ = lean_ctor_get(v_val_317_, 4);
lean_dec(v_unused_429_);
v_unused_430_ = lean_ctor_get(v_val_317_, 0);
lean_dec(v_unused_430_);
v___x_333_ = v_val_317_;
v_isShared_334_ = v_isSharedCheck_428_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_h_331_);
lean_inc(v_00_u03b2_330_);
lean_inc(v_00_u03b1_329_);
lean_dec(v_val_317_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_428_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v_head_335_; lean_object* v___x_336_; lean_object* v___x_338_; 
v_head_335_ = lean_ctor_get(v_us_323_, 0);
v___x_336_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__6));
lean_inc(v_head_335_);
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 0, v_head_335_);
v___x_338_ = v___x_327_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_head_335_);
lean_ctor_set(v_reuseFailAlloc_427_, 1, v_tail_325_);
v___x_338_ = v_reuseFailAlloc_427_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_339_ = l_Lean_mkConst(v___x_336_, v___x_338_);
lean_inc_ref_n(v_00_u03b1_329_, 2);
v___x_340_ = l_Lean_mkAppB(v___x_339_, v_00_u03b1_329_, v_a_284_);
v___x_341_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__10));
lean_inc_ref(v_us_323_);
v___x_342_ = l_Lean_mkConst(v___x_341_, v_us_323_);
lean_inc_ref(v_h_331_);
lean_inc_ref(v_f_283_);
lean_inc_ref(v_00_u03b2_330_);
v___x_343_ = l_Lean_mkApp5(v___x_342_, v_00_u03b1_329_, v_00_u03b2_330_, v_f_283_, v_h_331_, v___x_340_);
v___x_344_ = l_Lean_Meta_Grind_preprocessLight___redArg(v___x_343_, v_a_286_, v_a_287_, v_a_288_, v_a_289_, v_a_290_, v_a_291_, v_a_292_, v_a_293_, v_a_294_);
if (lean_obj_tag(v___x_344_) == 0)
{
lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_418_; 
v_a_345_ = lean_ctor_get(v___x_344_, 0);
v_isSharedCheck_418_ = !lean_is_exclusive(v___x_344_);
if (v_isSharedCheck_418_ == 0)
{
v___x_347_ = v___x_344_;
v_isShared_348_ = v_isSharedCheck_418_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v___x_344_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_418_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v_dummy_349_; lean_object* v_nargs_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_359_; 
v_dummy_349_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__12, &l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__12_once, _init_l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__12);
v_nargs_350_ = l_Lean_Expr_getAppNumArgs(v_a_345_);
lean_inc(v_nargs_350_);
v___x_351_ = lean_mk_array(v_nargs_350_, v_dummy_349_);
v___x_352_ = lean_unsigned_to_nat(1u);
v___x_353_ = lean_nat_sub(v_nargs_350_, v___x_352_);
lean_dec(v_nargs_350_);
lean_inc(v_a_345_);
v___x_354_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_345_, v___x_351_, v___x_353_);
v___x_355_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___closed__14));
lean_inc_ref(v_us_323_);
v___x_356_ = l_Lean_mkConst(v___x_355_, v_us_323_);
v___x_357_ = l_Lean_mkAppN(v___x_356_, v___x_354_);
lean_dec_ref(v___x_354_);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 1, v___x_357_);
lean_ctor_set(v___x_314_, 0, v_a_345_);
v___x_359_ = v___x_314_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_a_345_);
lean_ctor_set(v_reuseFailAlloc_417_, 1, v___x_357_);
v___x_359_ = v_reuseFailAlloc_417_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
lean_object* v___x_361_; 
if (v_isShared_320_ == 0)
{
lean_ctor_set(v___x_319_, 0, v___x_359_);
v___x_361_ = v___x_319_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v___x_359_);
v___x_361_ = v_reuseFailAlloc_416_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
lean_object* v___x_363_; 
lean_inc_ref(v___x_361_);
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 4, v___x_361_);
v___x_363_ = v___x_333_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_us_323_);
lean_ctor_set(v_reuseFailAlloc_415_, 1, v_00_u03b1_329_);
lean_ctor_set(v_reuseFailAlloc_415_, 2, v_00_u03b2_330_);
lean_ctor_set(v_reuseFailAlloc_415_, 3, v_h_331_);
lean_ctor_set(v_reuseFailAlloc_415_, 4, v___x_361_);
v___x_363_ = v_reuseFailAlloc_415_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
lean_object* v___x_364_; lean_object* v_toGoalState_365_; lean_object* v_inj_366_; lean_object* v_mvarId_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_413_; 
v___x_364_ = lean_st_ref_take(v_a_285_);
v_toGoalState_365_ = lean_ctor_get(v___x_364_, 0);
lean_inc_ref(v_toGoalState_365_);
v_inj_366_ = lean_ctor_get(v_toGoalState_365_, 13);
lean_inc_ref(v_inj_366_);
v_mvarId_367_ = lean_ctor_get(v___x_364_, 1);
v_isSharedCheck_413_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_413_ == 0)
{
lean_object* v_unused_414_; 
v_unused_414_ = lean_ctor_get(v___x_364_, 0);
lean_dec(v_unused_414_);
v___x_369_ = v___x_364_;
v_isShared_370_ = v_isSharedCheck_413_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_mvarId_367_);
lean_dec(v___x_364_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_413_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v_nextDeclIdx_371_; lean_object* v_enodeMap_372_; lean_object* v_exprs_373_; lean_object* v_parents_374_; lean_object* v_congrTable_375_; lean_object* v_appMap_376_; lean_object* v_indicesFound_377_; lean_object* v_newFacts_378_; uint8_t v_inconsistent_379_; lean_object* v_nextIdx_380_; lean_object* v_newRawFacts_381_; lean_object* v_facts_382_; lean_object* v_extThms_383_; lean_object* v_ematch_384_; lean_object* v_split_385_; lean_object* v_clean_386_; lean_object* v_sstates_387_; lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_411_; 
v_nextDeclIdx_371_ = lean_ctor_get(v_toGoalState_365_, 0);
v_enodeMap_372_ = lean_ctor_get(v_toGoalState_365_, 1);
v_exprs_373_ = lean_ctor_get(v_toGoalState_365_, 2);
v_parents_374_ = lean_ctor_get(v_toGoalState_365_, 3);
v_congrTable_375_ = lean_ctor_get(v_toGoalState_365_, 4);
v_appMap_376_ = lean_ctor_get(v_toGoalState_365_, 5);
v_indicesFound_377_ = lean_ctor_get(v_toGoalState_365_, 6);
v_newFacts_378_ = lean_ctor_get(v_toGoalState_365_, 7);
v_inconsistent_379_ = lean_ctor_get_uint8(v_toGoalState_365_, sizeof(void*)*17);
v_nextIdx_380_ = lean_ctor_get(v_toGoalState_365_, 8);
v_newRawFacts_381_ = lean_ctor_get(v_toGoalState_365_, 9);
v_facts_382_ = lean_ctor_get(v_toGoalState_365_, 10);
v_extThms_383_ = lean_ctor_get(v_toGoalState_365_, 11);
v_ematch_384_ = lean_ctor_get(v_toGoalState_365_, 12);
v_split_385_ = lean_ctor_get(v_toGoalState_365_, 14);
v_clean_386_ = lean_ctor_get(v_toGoalState_365_, 15);
v_sstates_387_ = lean_ctor_get(v_toGoalState_365_, 16);
v_isSharedCheck_411_ = !lean_is_exclusive(v_toGoalState_365_);
if (v_isSharedCheck_411_ == 0)
{
lean_object* v_unused_412_; 
v_unused_412_ = lean_ctor_get(v_toGoalState_365_, 13);
lean_dec(v_unused_412_);
v___x_389_ = v_toGoalState_365_;
v_isShared_390_ = v_isSharedCheck_411_;
goto v_resetjp_388_;
}
else
{
lean_inc(v_sstates_387_);
lean_inc(v_clean_386_);
lean_inc(v_split_385_);
lean_inc(v_ematch_384_);
lean_inc(v_extThms_383_);
lean_inc(v_facts_382_);
lean_inc(v_newRawFacts_381_);
lean_inc(v_nextIdx_380_);
lean_inc(v_newFacts_378_);
lean_inc(v_indicesFound_377_);
lean_inc(v_appMap_376_);
lean_inc(v_congrTable_375_);
lean_inc(v_parents_374_);
lean_inc(v_exprs_373_);
lean_inc(v_enodeMap_372_);
lean_inc(v_nextDeclIdx_371_);
lean_dec(v_toGoalState_365_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_411_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
lean_object* v_thms_391_; lean_object* v_fns_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_410_; 
v_thms_391_ = lean_ctor_get(v_inj_366_, 0);
v_fns_392_ = lean_ctor_get(v_inj_366_, 1);
v_isSharedCheck_410_ = !lean_is_exclusive(v_inj_366_);
if (v_isSharedCheck_410_ == 0)
{
v___x_394_ = v_inj_366_;
v_isShared_395_ = v_isSharedCheck_410_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_fns_392_);
lean_inc(v_thms_391_);
lean_dec(v_inj_366_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_410_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_396_; lean_object* v___x_398_; 
v___x_396_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2___redArg(v_fns_392_, v_f_283_, v___x_363_);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 1, v___x_396_);
v___x_398_ = v___x_394_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v_thms_391_);
lean_ctor_set(v_reuseFailAlloc_409_, 1, v___x_396_);
v___x_398_ = v_reuseFailAlloc_409_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
lean_object* v___x_400_; 
if (v_isShared_390_ == 0)
{
lean_ctor_set(v___x_389_, 13, v___x_398_);
v___x_400_ = v___x_389_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_nextDeclIdx_371_);
lean_ctor_set(v_reuseFailAlloc_408_, 1, v_enodeMap_372_);
lean_ctor_set(v_reuseFailAlloc_408_, 2, v_exprs_373_);
lean_ctor_set(v_reuseFailAlloc_408_, 3, v_parents_374_);
lean_ctor_set(v_reuseFailAlloc_408_, 4, v_congrTable_375_);
lean_ctor_set(v_reuseFailAlloc_408_, 5, v_appMap_376_);
lean_ctor_set(v_reuseFailAlloc_408_, 6, v_indicesFound_377_);
lean_ctor_set(v_reuseFailAlloc_408_, 7, v_newFacts_378_);
lean_ctor_set(v_reuseFailAlloc_408_, 8, v_nextIdx_380_);
lean_ctor_set(v_reuseFailAlloc_408_, 9, v_newRawFacts_381_);
lean_ctor_set(v_reuseFailAlloc_408_, 10, v_facts_382_);
lean_ctor_set(v_reuseFailAlloc_408_, 11, v_extThms_383_);
lean_ctor_set(v_reuseFailAlloc_408_, 12, v_ematch_384_);
lean_ctor_set(v_reuseFailAlloc_408_, 13, v___x_398_);
lean_ctor_set(v_reuseFailAlloc_408_, 14, v_split_385_);
lean_ctor_set(v_reuseFailAlloc_408_, 15, v_clean_386_);
lean_ctor_set(v_reuseFailAlloc_408_, 16, v_sstates_387_);
lean_ctor_set_uint8(v_reuseFailAlloc_408_, sizeof(void*)*17, v_inconsistent_379_);
v___x_400_ = v_reuseFailAlloc_408_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
lean_object* v___x_402_; 
if (v_isShared_370_ == 0)
{
lean_ctor_set(v___x_369_, 0, v___x_400_);
v___x_402_ = v___x_369_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v___x_400_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v_mvarId_367_);
v___x_402_ = v_reuseFailAlloc_407_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
lean_object* v___x_403_; lean_object* v___x_405_; 
v___x_403_ = lean_st_ref_put(v_a_285_, v___x_402_);
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 0, v___x_361_);
v___x_405_ = v___x_347_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v___x_361_);
v___x_405_ = v_reuseFailAlloc_406_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
return v___x_405_;
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
lean_object* v_a_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_426_; 
lean_del_object(v___x_333_);
lean_dec_ref(v_h_331_);
lean_dec_ref(v_00_u03b2_330_);
lean_dec_ref(v_00_u03b1_329_);
lean_dec_ref_known(v_us_323_, 2);
lean_del_object(v___x_319_);
lean_del_object(v___x_314_);
lean_dec_ref(v_f_283_);
v_a_419_ = lean_ctor_get(v___x_344_, 0);
v_isSharedCheck_426_ = !lean_is_exclusive(v___x_344_);
if (v_isSharedCheck_426_ == 0)
{
v___x_421_ = v___x_344_;
v_isShared_422_ = v_isSharedCheck_426_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_a_419_);
lean_dec(v___x_344_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_426_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v___x_424_; 
if (v_isShared_422_ == 0)
{
v___x_424_ = v___x_421_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_a_419_);
v___x_424_ = v_reuseFailAlloc_425_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
return v___x_424_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_327_);
lean_dec(v_tail_325_);
lean_dec_ref_known(v_us_323_, 2);
lean_del_object(v___x_319_);
lean_dec(v_val_317_);
lean_del_object(v___x_314_);
lean_dec_ref(v_a_284_);
lean_dec_ref(v_f_283_);
v___y_297_ = v_a_285_;
v___y_298_ = v_a_286_;
v___y_299_ = v_a_287_;
v___y_300_ = v_a_288_;
v___y_301_ = v_a_289_;
v___y_302_ = v_a_290_;
v___y_303_ = v_a_291_;
v___y_304_ = v_a_292_;
v___y_305_ = v_a_293_;
v___y_306_ = v_a_294_;
goto v___jp_296_;
}
}
}
else
{
lean_dec_ref_known(v_us_323_, 2);
lean_dec(v_tail_324_);
lean_del_object(v___x_319_);
lean_dec(v_val_317_);
lean_del_object(v___x_314_);
lean_dec_ref(v_a_284_);
lean_dec_ref(v_f_283_);
v___y_297_ = v_a_285_;
v___y_298_ = v_a_286_;
v___y_299_ = v_a_287_;
v___y_300_ = v_a_288_;
v___y_301_ = v_a_289_;
v___y_302_ = v_a_290_;
v___y_303_ = v_a_291_;
v___y_304_ = v_a_292_;
v___y_305_ = v_a_293_;
v___y_306_ = v_a_294_;
goto v___jp_296_;
}
}
else
{
lean_dec(v_us_323_);
lean_del_object(v___x_319_);
lean_dec(v_val_317_);
lean_del_object(v___x_314_);
lean_dec_ref(v_a_284_);
lean_dec_ref(v_f_283_);
v___y_297_ = v_a_285_;
v___y_298_ = v_a_286_;
v___y_299_ = v_a_287_;
v___y_300_ = v_a_288_;
v___y_301_ = v_a_289_;
v___y_302_ = v_a_290_;
v___y_303_ = v_a_291_;
v___y_304_ = v_a_292_;
v___y_305_ = v_a_293_;
v___y_306_ = v_a_294_;
goto v___jp_296_;
}
}
}
}
else
{
lean_object* v___x_434_; lean_object* v___x_435_; 
lean_dec(v___x_316_);
lean_del_object(v___x_314_);
lean_dec_ref(v_a_284_);
lean_dec_ref(v_f_283_);
v___x_434_ = lean_box(0);
v___x_435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_435_, 0, v___x_434_);
return v___x_435_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f___boxed(lean_object* v_f_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_, lean_object* v_a_449_, lean_object* v_a_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f(v_f_438_, v_a_439_, v_a_440_, v_a_441_, v_a_442_, v_a_443_, v_a_444_, v_a_445_, v_a_446_, v_a_447_, v_a_448_, v_a_449_);
lean_dec(v_a_449_);
lean_dec_ref(v_a_448_);
lean_dec(v_a_447_);
lean_dec_ref(v_a_446_);
lean_dec(v_a_445_);
lean_dec_ref(v_a_444_);
lean_dec(v_a_443_);
lean_dec_ref(v_a_442_);
lean_dec(v_a_441_);
lean_dec(v_a_440_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1(lean_object* v_00_u03b2_452_, lean_object* v_x_453_, lean_object* v_x_454_){
_start:
{
lean_object* v___x_455_; 
v___x_455_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1___redArg(v_x_453_, v_x_454_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1___boxed(lean_object* v_00_u03b2_456_, lean_object* v_x_457_, lean_object* v_x_458_){
_start:
{
lean_object* v_res_459_; 
v_res_459_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1(v_00_u03b2_456_, v_x_457_, v_x_458_);
lean_dec_ref(v_x_458_);
lean_dec_ref(v_x_457_);
return v_res_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2(lean_object* v_00_u03b2_460_, lean_object* v_x_461_, lean_object* v_x_462_, lean_object* v_x_463_){
_start:
{
lean_object* v___x_464_; 
v___x_464_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2___redArg(v_x_461_, v_x_462_, v_x_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1(lean_object* v_00_u03b2_465_, lean_object* v_x_466_, size_t v_x_467_, lean_object* v_x_468_){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1___redArg(v_x_466_, v_x_467_, v_x_468_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1___boxed(lean_object* v_00_u03b2_470_, lean_object* v_x_471_, lean_object* v_x_472_, lean_object* v_x_473_){
_start:
{
size_t v_x_10449__boxed_474_; lean_object* v_res_475_; 
v_x_10449__boxed_474_ = lean_unbox_usize(v_x_472_);
lean_dec(v_x_472_);
v_res_475_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1(v_00_u03b2_470_, v_x_471_, v_x_10449__boxed_474_, v_x_473_);
lean_dec_ref(v_x_473_);
lean_dec_ref(v_x_471_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3(lean_object* v_00_u03b2_476_, lean_object* v_x_477_, size_t v_x_478_, size_t v_x_479_, lean_object* v_x_480_, lean_object* v_x_481_){
_start:
{
lean_object* v___x_482_; 
v___x_482_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___redArg(v_x_477_, v_x_478_, v_x_479_, v_x_480_, v_x_481_);
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3___boxed(lean_object* v_00_u03b2_483_, lean_object* v_x_484_, lean_object* v_x_485_, lean_object* v_x_486_, lean_object* v_x_487_, lean_object* v_x_488_){
_start:
{
size_t v_x_10460__boxed_489_; size_t v_x_10461__boxed_490_; lean_object* v_res_491_; 
v_x_10460__boxed_489_ = lean_unbox_usize(v_x_485_);
lean_dec(v_x_485_);
v_x_10461__boxed_490_ = lean_unbox_usize(v_x_486_);
lean_dec(v_x_486_);
v_res_491_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3(v_00_u03b2_483_, v_x_484_, v_x_10460__boxed_489_, v_x_10461__boxed_490_, v_x_487_, v_x_488_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_492_, lean_object* v_keys_493_, lean_object* v_vals_494_, lean_object* v_heq_495_, lean_object* v_i_496_, lean_object* v_k_497_){
_start:
{
lean_object* v___x_498_; 
v___x_498_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1_spec__2___redArg(v_keys_493_, v_vals_494_, v_i_496_, v_k_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_499_, lean_object* v_keys_500_, lean_object* v_vals_501_, lean_object* v_heq_502_, lean_object* v_i_503_, lean_object* v_k_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__1_spec__1_spec__2(v_00_u03b2_499_, v_keys_500_, v_vals_501_, v_heq_502_, v_i_503_, v_k_504_);
lean_dec_ref(v_k_504_);
lean_dec_ref(v_vals_501_);
lean_dec_ref(v_keys_500_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_506_, lean_object* v_n_507_, lean_object* v_k_508_, lean_object* v_v_509_){
_start:
{
lean_object* v___x_510_; 
v___x_510_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__5___redArg(v_n_507_, v_k_508_, v_v_509_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__6(lean_object* v_00_u03b2_511_, size_t v_depth_512_, lean_object* v_keys_513_, lean_object* v_vals_514_, lean_object* v_heq_515_, lean_object* v_i_516_, lean_object* v_entries_517_){
_start:
{
lean_object* v___x_518_; 
v___x_518_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__6___redArg(v_depth_512_, v_keys_513_, v_vals_514_, v_i_516_, v_entries_517_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__6___boxed(lean_object* v_00_u03b2_519_, lean_object* v_depth_520_, lean_object* v_keys_521_, lean_object* v_vals_522_, lean_object* v_heq_523_, lean_object* v_i_524_, lean_object* v_entries_525_){
_start:
{
size_t v_depth_boxed_526_; lean_object* v_res_527_; 
v_depth_boxed_526_ = lean_unbox_usize(v_depth_520_);
lean_dec(v_depth_520_);
v_res_527_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__6(v_00_u03b2_519_, v_depth_boxed_526_, v_keys_521_, v_vals_522_, v_heq_523_, v_i_524_, v_entries_525_);
lean_dec_ref(v_vals_522_);
lean_dec_ref(v_keys_521_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__5_spec__6(lean_object* v_00_u03b2_528_, lean_object* v_x_529_, lean_object* v_x_530_, lean_object* v_x_531_, lean_object* v_x_532_){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2_spec__3_spec__5_spec__6___redArg(v_x_529_, v_x_530_, v_x_531_, v_x_532_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0_spec__0(lean_object* v_msgData_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_){
_start:
{
lean_object* v___x_540_; lean_object* v_env_541_; lean_object* v___x_542_; lean_object* v_toCold_543_; lean_object* v_mctx_544_; lean_object* v_lctx_545_; lean_object* v_options_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_540_ = lean_st_ref_get(v___y_538_);
v_env_541_ = lean_ctor_get(v___x_540_, 0);
lean_inc_ref(v_env_541_);
lean_dec(v___x_540_);
v___x_542_ = lean_st_ref_get(v___y_536_);
v_toCold_543_ = lean_ctor_get(v___y_537_, 0);
v_mctx_544_ = lean_ctor_get(v___x_542_, 0);
lean_inc_ref(v_mctx_544_);
lean_dec(v___x_542_);
v_lctx_545_ = lean_ctor_get(v___y_535_, 2);
v_options_546_ = lean_ctor_get(v_toCold_543_, 2);
lean_inc_ref(v_options_546_);
lean_inc_ref(v_lctx_545_);
v___x_547_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_547_, 0, v_env_541_);
lean_ctor_set(v___x_547_, 1, v_mctx_544_);
lean_ctor_set(v___x_547_, 2, v_lctx_545_);
lean_ctor_set(v___x_547_, 3, v_options_546_);
v___x_548_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_548_, 0, v___x_547_);
lean_ctor_set(v___x_548_, 1, v_msgData_534_);
v___x_549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_549_, 0, v___x_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0_spec__0___boxed(lean_object* v_msgData_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0_spec__0(v_msgData_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
lean_dec(v___y_552_);
lean_dec_ref(v___y_551_);
return v_res_556_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_557_; double v___x_558_; 
v___x_557_ = lean_unsigned_to_nat(0u);
v___x_558_ = lean_float_of_nat(v___x_557_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___redArg(lean_object* v_cls_562_, lean_object* v_msg_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_){
_start:
{
lean_object* v_ref_569_; lean_object* v___x_570_; lean_object* v_a_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_615_; 
v_ref_569_ = lean_ctor_get(v___y_566_, 2);
v___x_570_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0_spec__0(v_msg_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_);
v_a_571_ = lean_ctor_get(v___x_570_, 0);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_615_ == 0)
{
v___x_573_ = v___x_570_;
v_isShared_574_ = v_isSharedCheck_615_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_a_571_);
lean_dec(v___x_570_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_615_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___x_575_; lean_object* v_traceState_576_; lean_object* v_env_577_; lean_object* v_nextMacroScope_578_; lean_object* v_ngen_579_; lean_object* v_auxDeclNGen_580_; lean_object* v_cache_581_; lean_object* v_messages_582_; lean_object* v_infoState_583_; lean_object* v_snapshotTasks_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_614_; 
v___x_575_ = lean_st_ref_take(v___y_567_);
v_traceState_576_ = lean_ctor_get(v___x_575_, 4);
v_env_577_ = lean_ctor_get(v___x_575_, 0);
v_nextMacroScope_578_ = lean_ctor_get(v___x_575_, 1);
v_ngen_579_ = lean_ctor_get(v___x_575_, 2);
v_auxDeclNGen_580_ = lean_ctor_get(v___x_575_, 3);
v_cache_581_ = lean_ctor_get(v___x_575_, 5);
v_messages_582_ = lean_ctor_get(v___x_575_, 6);
v_infoState_583_ = lean_ctor_get(v___x_575_, 7);
v_snapshotTasks_584_ = lean_ctor_get(v___x_575_, 8);
v_isSharedCheck_614_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_614_ == 0)
{
v___x_586_ = v___x_575_;
v_isShared_587_ = v_isSharedCheck_614_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_snapshotTasks_584_);
lean_inc(v_infoState_583_);
lean_inc(v_messages_582_);
lean_inc(v_cache_581_);
lean_inc(v_traceState_576_);
lean_inc(v_auxDeclNGen_580_);
lean_inc(v_ngen_579_);
lean_inc(v_nextMacroScope_578_);
lean_inc(v_env_577_);
lean_dec(v___x_575_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_614_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
uint64_t v_tid_588_; lean_object* v_traces_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_613_; 
v_tid_588_ = lean_ctor_get_uint64(v_traceState_576_, sizeof(void*)*1);
v_traces_589_ = lean_ctor_get(v_traceState_576_, 0);
v_isSharedCheck_613_ = !lean_is_exclusive(v_traceState_576_);
if (v_isSharedCheck_613_ == 0)
{
v___x_591_ = v_traceState_576_;
v_isShared_592_ = v_isSharedCheck_613_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_traces_589_);
lean_dec(v_traceState_576_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_613_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_593_; lean_object* v___x_594_; double v___x_595_; uint8_t v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_604_; 
v___x_593_ = lean_box(0);
v___x_594_ = lean_box(0);
v___x_595_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___redArg___closed__0);
v___x_596_ = 0;
v___x_597_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___redArg___closed__1));
v___x_598_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_598_, 0, v_cls_562_);
lean_ctor_set(v___x_598_, 1, v___x_594_);
lean_ctor_set(v___x_598_, 2, v___x_597_);
lean_ctor_set_float(v___x_598_, sizeof(void*)*3, v___x_595_);
lean_ctor_set_float(v___x_598_, sizeof(void*)*3 + 8, v___x_595_);
lean_ctor_set_uint8(v___x_598_, sizeof(void*)*3 + 16, v___x_596_);
v___x_599_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___redArg___closed__2));
v___x_600_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_600_, 0, v___x_598_);
lean_ctor_set(v___x_600_, 1, v_a_571_);
lean_ctor_set(v___x_600_, 2, v___x_599_);
lean_inc(v_ref_569_);
v___x_601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_601_, 0, v_ref_569_);
lean_ctor_set(v___x_601_, 1, v___x_600_);
v___x_602_ = l_Lean_PersistentArray_push___redArg(v_traces_589_, v___x_601_);
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 0, v___x_602_);
v___x_604_ = v___x_591_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v___x_602_);
lean_ctor_set_uint64(v_reuseFailAlloc_612_, sizeof(void*)*1, v_tid_588_);
v___x_604_ = v_reuseFailAlloc_612_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
lean_object* v___x_606_; 
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 4, v___x_604_);
v___x_606_ = v___x_586_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_env_577_);
lean_ctor_set(v_reuseFailAlloc_611_, 1, v_nextMacroScope_578_);
lean_ctor_set(v_reuseFailAlloc_611_, 2, v_ngen_579_);
lean_ctor_set(v_reuseFailAlloc_611_, 3, v_auxDeclNGen_580_);
lean_ctor_set(v_reuseFailAlloc_611_, 4, v___x_604_);
lean_ctor_set(v_reuseFailAlloc_611_, 5, v_cache_581_);
lean_ctor_set(v_reuseFailAlloc_611_, 6, v_messages_582_);
lean_ctor_set(v_reuseFailAlloc_611_, 7, v_infoState_583_);
lean_ctor_set(v_reuseFailAlloc_611_, 8, v_snapshotTasks_584_);
v___x_606_ = v_reuseFailAlloc_611_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
lean_object* v___x_607_; lean_object* v___x_609_; 
v___x_607_ = lean_st_ref_put(v___y_567_, v___x_606_);
if (v_isShared_574_ == 0)
{
lean_ctor_set(v___x_573_, 0, v___x_593_);
v___x_609_ = v___x_573_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v___x_593_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
return v___x_609_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___redArg___boxed(lean_object* v_cls_616_, lean_object* v_msg_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___redArg(v_cls_616_, v_msg_617_, v___y_618_, v___y_619_, v___y_620_, v___y_621_);
lean_dec(v___y_621_);
lean_dec_ref(v___y_620_);
lean_dec(v___y_619_);
lean_dec_ref(v___y_618_);
return v_res_623_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkInjEq___closed__6(void){
_start:
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_634_ = ((lean_object*)(l_Lean_Meta_Grind_mkInjEq___closed__3));
v___x_635_ = ((lean_object*)(l_Lean_Meta_Grind_mkInjEq___closed__5));
v___x_636_ = l_Lean_Name_append(v___x_635_, v___x_634_);
return v___x_636_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkInjEq___closed__8(void){
_start:
{
lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_638_ = ((lean_object*)(l_Lean_Meta_Grind_mkInjEq___closed__7));
v___x_639_ = l_Lean_stringToMessageData(v___x_638_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkInjEq(lean_object* v_e_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_){
_start:
{
if (lean_obj_tag(v_e_640_) == 5)
{
lean_object* v_fn_652_; lean_object* v_arg_653_; lean_object* v___x_654_; 
v_fn_652_ = lean_ctor_get(v_e_640_, 0);
v_arg_653_ = lean_ctor_get(v_e_640_, 1);
lean_inc_ref_n(v_arg_653_, 2);
lean_inc_ref(v_fn_652_);
v___x_654_ = l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f(v_fn_652_, v_arg_653_, v_a_641_, v_a_642_, v_a_643_, v_a_644_, v_a_645_, v_a_646_, v_a_647_, v_a_648_, v_a_649_, v_a_650_);
if (lean_obj_tag(v___x_654_) == 0)
{
lean_object* v_a_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_708_; 
v_a_655_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_708_ == 0)
{
v___x_657_ = v___x_654_;
v_isShared_658_ = v_isSharedCheck_708_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_a_655_);
lean_dec(v___x_654_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_708_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
if (lean_obj_tag(v_a_655_) == 1)
{
lean_object* v_val_659_; lean_object* v_fst_660_; lean_object* v_snd_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_703_; 
lean_del_object(v___x_657_);
v_val_659_ = lean_ctor_get(v_a_655_, 0);
lean_inc(v_val_659_);
lean_dec_ref_known(v_a_655_, 1);
v_fst_660_ = lean_ctor_get(v_val_659_, 0);
v_snd_661_ = lean_ctor_get(v_val_659_, 1);
v_isSharedCheck_703_ = !lean_is_exclusive(v_val_659_);
if (v_isSharedCheck_703_ == 0)
{
v___x_663_ = v_val_659_;
v_isShared_664_ = v_isSharedCheck_703_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_snd_661_);
lean_inc(v_fst_660_);
lean_dec(v_val_659_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_703_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v___x_665_; lean_object* v___y_667_; lean_object* v___y_668_; lean_object* v___y_669_; lean_object* v___y_670_; lean_object* v___y_671_; lean_object* v___y_672_; lean_object* v___x_676_; 
lean_inc_ref(v_e_640_);
v___x_665_ = l_Lean_Expr_app___override(v_fst_660_, v_e_640_);
v___x_676_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_640_, v_a_641_);
lean_dec_ref_known(v_e_640_, 2);
if (lean_obj_tag(v___x_676_) == 0)
{
lean_object* v_a_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
v_a_677_ = lean_ctor_get(v___x_676_, 0);
lean_inc(v_a_677_);
lean_dec_ref_known(v___x_676_, 1);
v___x_678_ = lean_box(0);
lean_inc(v_a_650_);
lean_inc_ref(v_a_649_);
lean_inc(v_a_648_);
lean_inc_ref(v_a_647_);
lean_inc(v_a_646_);
lean_inc_ref(v_a_645_);
lean_inc(v_a_644_);
lean_inc_ref(v_a_643_);
lean_inc(v_a_642_);
lean_inc(v_a_641_);
lean_inc_ref(v___x_665_);
v___x_679_ = lean_grind_internalize(v___x_665_, v_a_677_, v___x_678_, v_a_641_, v_a_642_, v_a_643_, v_a_644_, v_a_645_, v_a_646_, v_a_647_, v_a_648_, v_a_649_, v_a_650_);
if (lean_obj_tag(v___x_679_) == 0)
{
lean_object* v_toCold_680_; lean_object* v_options_681_; uint8_t v_hasTrace_682_; 
lean_dec_ref_known(v___x_679_, 1);
v_toCold_680_ = lean_ctor_get(v_a_649_, 0);
v_options_681_ = lean_ctor_get(v_toCold_680_, 2);
v_hasTrace_682_ = lean_ctor_get_uint8(v_options_681_, sizeof(void*)*1);
if (v_hasTrace_682_ == 0)
{
lean_del_object(v___x_663_);
v___y_667_ = v_a_641_;
v___y_668_ = v_a_643_;
v___y_669_ = v_a_647_;
v___y_670_ = v_a_648_;
v___y_671_ = v_a_649_;
v___y_672_ = v_a_650_;
goto v___jp_666_;
}
else
{
lean_object* v_inheritedTraceOptions_683_; lean_object* v___x_684_; lean_object* v___x_685_; uint8_t v___x_686_; 
v_inheritedTraceOptions_683_ = lean_ctor_get(v_toCold_680_, 11);
v___x_684_ = ((lean_object*)(l_Lean_Meta_Grind_mkInjEq___closed__3));
v___x_685_ = lean_obj_once(&l_Lean_Meta_Grind_mkInjEq___closed__6, &l_Lean_Meta_Grind_mkInjEq___closed__6_once, _init_l_Lean_Meta_Grind_mkInjEq___closed__6);
v___x_686_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_683_, v_options_681_, v___x_685_);
if (v___x_686_ == 0)
{
lean_del_object(v___x_663_);
v___y_667_ = v_a_641_;
v___y_668_ = v_a_643_;
v___y_669_ = v_a_647_;
v___y_670_ = v_a_648_;
v___y_671_ = v_a_649_;
v___y_672_ = v_a_650_;
goto v___jp_666_;
}
else
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_690_; 
lean_inc_ref(v___x_665_);
v___x_687_ = l_Lean_MessageData_ofExpr(v___x_665_);
v___x_688_ = lean_obj_once(&l_Lean_Meta_Grind_mkInjEq___closed__8, &l_Lean_Meta_Grind_mkInjEq___closed__8_once, _init_l_Lean_Meta_Grind_mkInjEq___closed__8);
if (v_isShared_664_ == 0)
{
lean_ctor_set_tag(v___x_663_, 7);
lean_ctor_set(v___x_663_, 1, v___x_688_);
lean_ctor_set(v___x_663_, 0, v___x_687_);
v___x_690_ = v___x_663_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v___x_687_);
lean_ctor_set(v_reuseFailAlloc_694_, 1, v___x_688_);
v___x_690_ = v_reuseFailAlloc_694_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
lean_inc_ref(v_arg_653_);
v___x_691_ = l_Lean_MessageData_ofExpr(v_arg_653_);
v___x_692_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_692_, 0, v___x_690_);
lean_ctor_set(v___x_692_, 1, v___x_691_);
v___x_693_ = l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___redArg(v___x_684_, v___x_692_, v_a_647_, v_a_648_, v_a_649_, v_a_650_);
if (lean_obj_tag(v___x_693_) == 0)
{
lean_dec_ref_known(v___x_693_, 1);
v___y_667_ = v_a_641_;
v___y_668_ = v_a_643_;
v___y_669_ = v_a_647_;
v___y_670_ = v_a_648_;
v___y_671_ = v_a_649_;
v___y_672_ = v_a_650_;
goto v___jp_666_;
}
else
{
lean_dec_ref(v___x_665_);
lean_dec(v_snd_661_);
lean_dec_ref(v_arg_653_);
return v___x_693_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_665_);
lean_del_object(v___x_663_);
lean_dec(v_snd_661_);
lean_dec_ref(v_arg_653_);
return v___x_679_;
}
}
else
{
lean_object* v_a_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_702_; 
lean_dec_ref(v___x_665_);
lean_del_object(v___x_663_);
lean_dec(v_snd_661_);
lean_dec_ref(v_arg_653_);
v_a_695_ = lean_ctor_get(v___x_676_, 0);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_702_ == 0)
{
v___x_697_ = v___x_676_;
v_isShared_698_ = v_isSharedCheck_702_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_a_695_);
lean_dec(v___x_676_);
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
v___jp_666_:
{
lean_object* v___x_673_; uint8_t v___x_674_; lean_object* v___x_675_; 
lean_inc_ref(v_arg_653_);
v___x_673_ = l_Lean_Expr_app___override(v_snd_661_, v_arg_653_);
v___x_674_ = 0;
v___x_675_ = l_Lean_Meta_Grind_pushEqCore___redArg(v___x_665_, v_arg_653_, v___x_673_, v___x_674_, v___y_667_, v___y_668_, v___y_669_, v___y_670_, v___y_671_, v___y_672_);
return v___x_675_;
}
}
}
else
{
lean_object* v___x_704_; lean_object* v___x_706_; 
lean_dec(v_a_655_);
lean_dec_ref(v_arg_653_);
lean_dec_ref_known(v_e_640_, 2);
v___x_704_ = lean_box(0);
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 0, v___x_704_);
v___x_706_ = v___x_657_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v___x_704_);
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
lean_object* v_a_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_716_; 
lean_dec_ref(v_arg_653_);
lean_dec_ref_known(v_e_640_, 2);
v_a_709_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_716_ == 0)
{
v___x_711_ = v___x_654_;
v_isShared_712_ = v_isSharedCheck_716_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_a_709_);
lean_dec(v___x_654_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_716_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_714_; 
if (v_isShared_712_ == 0)
{
v___x_714_ = v___x_711_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v_a_709_);
v___x_714_ = v_reuseFailAlloc_715_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
return v___x_714_;
}
}
}
}
else
{
lean_object* v___x_717_; lean_object* v___x_718_; 
lean_dec_ref(v_e_640_);
v___x_717_ = lean_box(0);
v___x_718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_718_, 0, v___x_717_);
return v___x_718_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkInjEq___boxed(lean_object* v_e_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l_Lean_Meta_Grind_mkInjEq(v_e_719_, v_a_720_, v_a_721_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_);
lean_dec(v_a_729_);
lean_dec_ref(v_a_728_);
lean_dec(v_a_727_);
lean_dec_ref(v_a_726_);
lean_dec(v_a_725_);
lean_dec_ref(v_a_724_);
lean_dec(v_a_723_);
lean_dec_ref(v_a_722_);
lean_dec(v_a_721_);
lean_dec(v_a_720_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0(lean_object* v_cls_732_, lean_object* v_msg_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_){
_start:
{
lean_object* v___x_745_; 
v___x_745_ = l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___redArg(v_cls_732_, v_msg_733_, v___y_740_, v___y_741_, v___y_742_, v___y_743_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0___boxed(lean_object* v_cls_746_, lean_object* v_msg_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_){
_start:
{
lean_object* v_res_759_; 
v_res_759_ = l_Lean_addTrace___at___00Lean_Meta_Grind_mkInjEq_spec__0(v_cls_746_, v_msg_747_, v___y_748_, v___y_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_, v___y_755_, v___y_756_, v___y_757_);
lean_dec(v___y_757_);
lean_dec_ref(v___y_756_);
lean_dec(v___y_755_);
lean_dec_ref(v___y_754_);
lean_dec(v___y_753_);
lean_dec_ref(v___y_752_);
lean_dec(v___y_751_);
lean_dec_ref(v___y_750_);
lean_dec(v___y_749_);
lean_dec(v___y_748_);
return v_res_759_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1_spec__2___redArg(lean_object* v_keys_760_, lean_object* v_vals_761_, lean_object* v_i_762_, lean_object* v_k_763_){
_start:
{
lean_object* v___x_764_; uint8_t v___x_765_; 
v___x_764_ = lean_array_get_size(v_keys_760_);
v___x_765_ = lean_nat_dec_lt(v_i_762_, v___x_764_);
if (v___x_765_ == 0)
{
lean_object* v___x_766_; 
lean_dec(v_i_762_);
v___x_766_ = lean_box(0);
return v___x_766_;
}
else
{
lean_object* v_k_x27_767_; uint8_t v___x_768_; 
v_k_x27_767_ = lean_array_fget_borrowed(v_keys_760_, v_i_762_);
v___x_768_ = l_Lean_instBEqHeadIndex_beq(v_k_763_, v_k_x27_767_);
if (v___x_768_ == 0)
{
lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_769_ = lean_unsigned_to_nat(1u);
v___x_770_ = lean_nat_add(v_i_762_, v___x_769_);
lean_dec(v_i_762_);
v_i_762_ = v___x_770_;
goto _start;
}
else
{
lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_772_ = lean_array_fget_borrowed(v_vals_761_, v_i_762_);
lean_dec(v_i_762_);
lean_inc(v___x_772_);
v___x_773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_773_, 0, v___x_772_);
return v___x_773_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_keys_774_, lean_object* v_vals_775_, lean_object* v_i_776_, lean_object* v_k_777_){
_start:
{
lean_object* v_res_778_; 
v_res_778_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1_spec__2___redArg(v_keys_774_, v_vals_775_, v_i_776_, v_k_777_);
lean_dec(v_k_777_);
lean_dec_ref(v_vals_775_);
lean_dec_ref(v_keys_774_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1___redArg(lean_object* v_x_779_, size_t v_x_780_, lean_object* v_x_781_){
_start:
{
if (lean_obj_tag(v_x_779_) == 0)
{
lean_object* v_es_782_; lean_object* v___x_783_; size_t v___x_784_; size_t v___x_785_; lean_object* v_j_786_; lean_object* v___x_787_; 
v_es_782_ = lean_ctor_get(v_x_779_, 0);
v___x_783_ = lean_box(2);
v___x_784_ = ((size_t)31ULL);
v___x_785_ = lean_usize_land(v_x_780_, v___x_784_);
v_j_786_ = lean_usize_to_nat(v___x_785_);
v___x_787_ = lean_array_get_borrowed(v___x_783_, v_es_782_, v_j_786_);
lean_dec(v_j_786_);
switch(lean_obj_tag(v___x_787_))
{
case 0:
{
lean_object* v_key_788_; lean_object* v_val_789_; uint8_t v___x_790_; 
v_key_788_ = lean_ctor_get(v___x_787_, 0);
v_val_789_ = lean_ctor_get(v___x_787_, 1);
v___x_790_ = l_Lean_instBEqHeadIndex_beq(v_x_781_, v_key_788_);
if (v___x_790_ == 0)
{
lean_object* v___x_791_; 
v___x_791_ = lean_box(0);
return v___x_791_;
}
else
{
lean_object* v___x_792_; 
lean_inc(v_val_789_);
v___x_792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_792_, 0, v_val_789_);
return v___x_792_;
}
}
case 1:
{
lean_object* v_node_793_; size_t v___x_794_; size_t v___x_795_; 
v_node_793_ = lean_ctor_get(v___x_787_, 0);
v___x_794_ = ((size_t)5ULL);
v___x_795_ = lean_usize_shift_right(v_x_780_, v___x_794_);
v_x_779_ = v_node_793_;
v_x_780_ = v___x_795_;
goto _start;
}
default: 
{
lean_object* v___x_797_; 
v___x_797_ = lean_box(0);
return v___x_797_;
}
}
}
else
{
lean_object* v_ks_798_; lean_object* v_vs_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v_ks_798_ = lean_ctor_get(v_x_779_, 0);
v_vs_799_ = lean_ctor_get(v_x_779_, 1);
v___x_800_ = lean_unsigned_to_nat(0u);
v___x_801_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1_spec__2___redArg(v_ks_798_, v_vs_799_, v___x_800_, v_x_781_);
return v___x_801_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1___redArg___boxed(lean_object* v_x_802_, lean_object* v_x_803_, lean_object* v_x_804_){
_start:
{
size_t v_x_9563__boxed_805_; lean_object* v_res_806_; 
v_x_9563__boxed_805_ = lean_unbox_usize(v_x_803_);
lean_dec(v_x_803_);
v_res_806_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1___redArg(v_x_802_, v_x_9563__boxed_805_, v_x_804_);
lean_dec(v_x_804_);
lean_dec_ref(v_x_802_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1___redArg(lean_object* v_x_807_, lean_object* v_x_808_){
_start:
{
uint64_t v___x_809_; size_t v___x_810_; lean_object* v___x_811_; 
v___x_809_ = l_Lean_HeadIndex_hash(v_x_808_);
v___x_810_ = lean_uint64_to_usize(v___x_809_);
v___x_811_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1___redArg(v_x_807_, v___x_810_, v_x_808_);
return v___x_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1___redArg___boxed(lean_object* v_x_812_, lean_object* v_x_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1___redArg(v_x_812_, v_x_813_);
lean_dec(v_x_813_);
lean_dec_ref(v_x_812_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__0___redArg(lean_object* v_f_815_, lean_object* v_as_x27_816_, lean_object* v_b_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_){
_start:
{
if (lean_obj_tag(v_as_x27_816_) == 0)
{
lean_object* v___x_829_; 
v___x_829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_829_, 0, v_b_817_);
return v___x_829_;
}
else
{
lean_object* v_head_830_; lean_object* v_tail_831_; lean_object* v___x_832_; uint8_t v___y_834_; uint8_t v___x_838_; 
v_head_830_ = lean_ctor_get(v_as_x27_816_, 0);
v_tail_831_ = lean_ctor_get(v_as_x27_816_, 1);
v___x_832_ = lean_box(0);
v___x_838_ = l_Lean_Expr_isApp(v_head_830_);
if (v___x_838_ == 0)
{
v___y_834_ = v___x_838_;
goto v___jp_833_;
}
else
{
lean_object* v___x_839_; size_t v___x_840_; size_t v___x_841_; uint8_t v___x_842_; 
v___x_839_ = l_Lean_Expr_appFn_x21(v_head_830_);
v___x_840_ = lean_ptr_addr(v___x_839_);
lean_dec_ref(v___x_839_);
v___x_841_ = lean_ptr_addr(v_f_815_);
v___x_842_ = lean_usize_dec_eq(v___x_840_, v___x_841_);
v___y_834_ = v___x_842_;
goto v___jp_833_;
}
v___jp_833_:
{
if (v___y_834_ == 0)
{
v_as_x27_816_ = v_tail_831_;
v_b_817_ = v___x_832_;
goto _start;
}
else
{
lean_object* v___x_836_; 
lean_inc(v_head_830_);
v___x_836_ = l_Lean_Meta_Grind_mkInjEq(v_head_830_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_, v___y_825_, v___y_826_, v___y_827_);
if (lean_obj_tag(v___x_836_) == 0)
{
lean_dec_ref_known(v___x_836_, 1);
v_as_x27_816_ = v_tail_831_;
v_b_817_ = v___x_832_;
goto _start;
}
else
{
return v___x_836_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__0___redArg___boxed(lean_object* v_f_843_, lean_object* v_as_x27_844_, lean_object* v_b_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__0___redArg(v_f_843_, v_as_x27_844_, v_b_845_, v___y_846_, v___y_847_, v___y_848_, v___y_849_, v___y_850_, v___y_851_, v___y_852_, v___y_853_, v___y_854_, v___y_855_);
lean_dec(v___y_855_);
lean_dec_ref(v___y_854_);
lean_dec(v___y_853_);
lean_dec_ref(v___y_852_);
lean_dec(v___y_851_);
lean_dec_ref(v___y_850_);
lean_dec(v___y_849_);
lean_dec_ref(v___y_848_);
lean_dec(v___y_847_);
lean_dec(v___y_846_);
lean_dec(v_as_x27_844_);
lean_dec_ref(v_f_843_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn(lean_object* v_us_858_, lean_object* v_00_u03b1_859_, lean_object* v_00_u03b2_860_, lean_object* v_f_861_, lean_object* v_h_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_){
_start:
{
lean_object* v___x_874_; lean_object* v_toGoalState_875_; lean_object* v_inj_876_; lean_object* v_mvarId_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_941_; 
v___x_874_ = lean_st_ref_take(v_a_863_);
v_toGoalState_875_ = lean_ctor_get(v___x_874_, 0);
lean_inc_ref(v_toGoalState_875_);
v_inj_876_ = lean_ctor_get(v_toGoalState_875_, 13);
lean_inc_ref(v_inj_876_);
v_mvarId_877_ = lean_ctor_get(v___x_874_, 1);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_874_);
if (v_isSharedCheck_941_ == 0)
{
lean_object* v_unused_942_; 
v_unused_942_ = lean_ctor_get(v___x_874_, 0);
lean_dec(v_unused_942_);
v___x_879_ = v___x_874_;
v_isShared_880_ = v_isSharedCheck_941_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_mvarId_877_);
lean_dec(v___x_874_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_941_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v_nextDeclIdx_881_; lean_object* v_enodeMap_882_; lean_object* v_exprs_883_; lean_object* v_parents_884_; lean_object* v_congrTable_885_; lean_object* v_appMap_886_; lean_object* v_indicesFound_887_; lean_object* v_newFacts_888_; uint8_t v_inconsistent_889_; lean_object* v_nextIdx_890_; lean_object* v_newRawFacts_891_; lean_object* v_facts_892_; lean_object* v_extThms_893_; lean_object* v_ematch_894_; lean_object* v_split_895_; lean_object* v_clean_896_; lean_object* v_sstates_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_939_; 
v_nextDeclIdx_881_ = lean_ctor_get(v_toGoalState_875_, 0);
v_enodeMap_882_ = lean_ctor_get(v_toGoalState_875_, 1);
v_exprs_883_ = lean_ctor_get(v_toGoalState_875_, 2);
v_parents_884_ = lean_ctor_get(v_toGoalState_875_, 3);
v_congrTable_885_ = lean_ctor_get(v_toGoalState_875_, 4);
v_appMap_886_ = lean_ctor_get(v_toGoalState_875_, 5);
v_indicesFound_887_ = lean_ctor_get(v_toGoalState_875_, 6);
v_newFacts_888_ = lean_ctor_get(v_toGoalState_875_, 7);
v_inconsistent_889_ = lean_ctor_get_uint8(v_toGoalState_875_, sizeof(void*)*17);
v_nextIdx_890_ = lean_ctor_get(v_toGoalState_875_, 8);
v_newRawFacts_891_ = lean_ctor_get(v_toGoalState_875_, 9);
v_facts_892_ = lean_ctor_get(v_toGoalState_875_, 10);
v_extThms_893_ = lean_ctor_get(v_toGoalState_875_, 11);
v_ematch_894_ = lean_ctor_get(v_toGoalState_875_, 12);
v_split_895_ = lean_ctor_get(v_toGoalState_875_, 14);
v_clean_896_ = lean_ctor_get(v_toGoalState_875_, 15);
v_sstates_897_ = lean_ctor_get(v_toGoalState_875_, 16);
v_isSharedCheck_939_ = !lean_is_exclusive(v_toGoalState_875_);
if (v_isSharedCheck_939_ == 0)
{
lean_object* v_unused_940_; 
v_unused_940_ = lean_ctor_get(v_toGoalState_875_, 13);
lean_dec(v_unused_940_);
v___x_899_ = v_toGoalState_875_;
v_isShared_900_ = v_isSharedCheck_939_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_sstates_897_);
lean_inc(v_clean_896_);
lean_inc(v_split_895_);
lean_inc(v_ematch_894_);
lean_inc(v_extThms_893_);
lean_inc(v_facts_892_);
lean_inc(v_newRawFacts_891_);
lean_inc(v_nextIdx_890_);
lean_inc(v_newFacts_888_);
lean_inc(v_indicesFound_887_);
lean_inc(v_appMap_886_);
lean_inc(v_congrTable_885_);
lean_inc(v_parents_884_);
lean_inc(v_exprs_883_);
lean_inc(v_enodeMap_882_);
lean_inc(v_nextDeclIdx_881_);
lean_dec(v_toGoalState_875_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_939_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v_thms_901_; lean_object* v_fns_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_938_; 
v_thms_901_ = lean_ctor_get(v_inj_876_, 0);
v_fns_902_ = lean_ctor_get(v_inj_876_, 1);
v_isSharedCheck_938_ = !lean_is_exclusive(v_inj_876_);
if (v_isSharedCheck_938_ == 0)
{
v___x_904_ = v_inj_876_;
v_isShared_905_ = v_isSharedCheck_938_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_fns_902_);
lean_inc(v_thms_901_);
lean_dec(v_inj_876_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_938_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_910_; 
v___x_906_ = lean_box(0);
v___x_907_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_907_, 0, v_us_858_);
lean_ctor_set(v___x_907_, 1, v_00_u03b1_859_);
lean_ctor_set(v___x_907_, 2, v_00_u03b2_860_);
lean_ctor_set(v___x_907_, 3, v_h_862_);
lean_ctor_set(v___x_907_, 4, v___x_906_);
lean_inc_ref(v_f_861_);
v___x_908_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_getInvFor_x3f_spec__2___redArg(v_fns_902_, v_f_861_, v___x_907_);
if (v_isShared_905_ == 0)
{
lean_ctor_set(v___x_904_, 1, v___x_908_);
v___x_910_ = v___x_904_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v_thms_901_);
lean_ctor_set(v_reuseFailAlloc_937_, 1, v___x_908_);
v___x_910_ = v_reuseFailAlloc_937_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
lean_object* v___x_912_; 
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 13, v___x_910_);
v___x_912_ = v___x_899_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v_nextDeclIdx_881_);
lean_ctor_set(v_reuseFailAlloc_936_, 1, v_enodeMap_882_);
lean_ctor_set(v_reuseFailAlloc_936_, 2, v_exprs_883_);
lean_ctor_set(v_reuseFailAlloc_936_, 3, v_parents_884_);
lean_ctor_set(v_reuseFailAlloc_936_, 4, v_congrTable_885_);
lean_ctor_set(v_reuseFailAlloc_936_, 5, v_appMap_886_);
lean_ctor_set(v_reuseFailAlloc_936_, 6, v_indicesFound_887_);
lean_ctor_set(v_reuseFailAlloc_936_, 7, v_newFacts_888_);
lean_ctor_set(v_reuseFailAlloc_936_, 8, v_nextIdx_890_);
lean_ctor_set(v_reuseFailAlloc_936_, 9, v_newRawFacts_891_);
lean_ctor_set(v_reuseFailAlloc_936_, 10, v_facts_892_);
lean_ctor_set(v_reuseFailAlloc_936_, 11, v_extThms_893_);
lean_ctor_set(v_reuseFailAlloc_936_, 12, v_ematch_894_);
lean_ctor_set(v_reuseFailAlloc_936_, 13, v___x_910_);
lean_ctor_set(v_reuseFailAlloc_936_, 14, v_split_895_);
lean_ctor_set(v_reuseFailAlloc_936_, 15, v_clean_896_);
lean_ctor_set(v_reuseFailAlloc_936_, 16, v_sstates_897_);
lean_ctor_set_uint8(v_reuseFailAlloc_936_, sizeof(void*)*17, v_inconsistent_889_);
v___x_912_ = v_reuseFailAlloc_936_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
lean_object* v___x_914_; 
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 0, v___x_912_);
v___x_914_ = v___x_879_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v___x_912_);
lean_ctor_set(v_reuseFailAlloc_935_, 1, v_mvarId_877_);
v___x_914_ = v_reuseFailAlloc_935_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___y_919_; lean_object* v_toGoalState_930_; lean_object* v_appMap_931_; lean_object* v___x_932_; 
v___x_915_ = lean_st_ref_put(v_a_863_, v___x_914_);
lean_inc_ref(v_f_861_);
v___x_916_ = l_Lean_Expr_toHeadIndex(v_f_861_);
v___x_917_ = lean_st_ref_get(v_a_863_);
v_toGoalState_930_ = lean_ctor_get(v___x_917_, 0);
lean_inc_ref(v_toGoalState_930_);
lean_dec(v___x_917_);
v_appMap_931_ = lean_ctor_get(v_toGoalState_930_, 5);
lean_inc_ref(v_appMap_931_);
lean_dec_ref(v_toGoalState_930_);
v___x_932_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1___redArg(v_appMap_931_, v___x_916_);
lean_dec(v___x_916_);
lean_dec_ref(v_appMap_931_);
if (lean_obj_tag(v___x_932_) == 0)
{
lean_object* v___x_933_; 
v___x_933_ = lean_box(0);
v___y_919_ = v___x_933_;
goto v___jp_918_;
}
else
{
lean_object* v_val_934_; 
v_val_934_ = lean_ctor_get(v___x_932_, 0);
lean_inc(v_val_934_);
lean_dec_ref_known(v___x_932_, 1);
v___y_919_ = v_val_934_;
goto v___jp_918_;
}
v___jp_918_:
{
lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_920_ = lean_box(0);
v___x_921_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__0___redArg(v_f_861_, v___y_919_, v___x_920_, v_a_863_, v_a_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_);
lean_dec(v___y_919_);
lean_dec_ref(v_f_861_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_928_; 
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_928_ == 0)
{
lean_object* v_unused_929_; 
v_unused_929_ = lean_ctor_get(v___x_921_, 0);
lean_dec(v_unused_929_);
v___x_923_ = v___x_921_;
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
else
{
lean_dec(v___x_921_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v___x_926_; 
if (v_isShared_924_ == 0)
{
lean_ctor_set(v___x_923_, 0, v___x_920_);
v___x_926_ = v___x_923_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v___x_920_);
v___x_926_ = v_reuseFailAlloc_927_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
return v___x_926_;
}
}
}
else
{
return v___x_921_;
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn___boxed(lean_object* v_us_943_, lean_object* v_00_u03b1_944_, lean_object* v_00_u03b2_945_, lean_object* v_f_946_, lean_object* v_h_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_){
_start:
{
lean_object* v_res_959_; 
v_res_959_ = l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn(v_us_943_, v_00_u03b1_944_, v_00_u03b2_945_, v_f_946_, v_h_947_, v_a_948_, v_a_949_, v_a_950_, v_a_951_, v_a_952_, v_a_953_, v_a_954_, v_a_955_, v_a_956_, v_a_957_);
lean_dec(v_a_957_);
lean_dec_ref(v_a_956_);
lean_dec(v_a_955_);
lean_dec_ref(v_a_954_);
lean_dec(v_a_953_);
lean_dec_ref(v_a_952_);
lean_dec(v_a_951_);
lean_dec_ref(v_a_950_);
lean_dec(v_a_949_);
lean_dec(v_a_948_);
return v_res_959_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__0(lean_object* v_f_960_, lean_object* v_as_961_, lean_object* v_as_x27_962_, lean_object* v_b_963_, lean_object* v_a_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_){
_start:
{
lean_object* v___x_976_; 
v___x_976_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__0___redArg(v_f_960_, v_as_x27_962_, v_b_963_, v___y_965_, v___y_966_, v___y_967_, v___y_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_);
return v___x_976_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__0___boxed(lean_object* v_f_977_, lean_object* v_as_978_, lean_object* v_as_x27_979_, lean_object* v_b_980_, lean_object* v_a_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
lean_object* v_res_993_; 
v_res_993_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__0(v_f_977_, v_as_978_, v_as_x27_979_, v_b_980_, v_a_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_);
lean_dec(v___y_991_);
lean_dec_ref(v___y_990_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
lean_dec(v___y_985_);
lean_dec_ref(v___y_984_);
lean_dec(v___y_983_);
lean_dec(v___y_982_);
lean_dec(v_as_x27_979_);
lean_dec(v_as_978_);
lean_dec_ref(v_f_977_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1(lean_object* v_00_u03b2_994_, lean_object* v_x_995_, lean_object* v_x_996_){
_start:
{
lean_object* v___x_997_; 
v___x_997_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1___redArg(v_x_995_, v_x_996_);
return v___x_997_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1___boxed(lean_object* v_00_u03b2_998_, lean_object* v_x_999_, lean_object* v_x_1000_){
_start:
{
lean_object* v_res_1001_; 
v_res_1001_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1(v_00_u03b2_998_, v_x_999_, v_x_1000_);
lean_dec(v_x_1000_);
lean_dec_ref(v_x_999_);
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1(lean_object* v_00_u03b2_1002_, lean_object* v_x_1003_, size_t v_x_1004_, lean_object* v_x_1005_){
_start:
{
lean_object* v___x_1006_; 
v___x_1006_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1___redArg(v_x_1003_, v_x_1004_, v_x_1005_);
return v___x_1006_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1___boxed(lean_object* v_00_u03b2_1007_, lean_object* v_x_1008_, lean_object* v_x_1009_, lean_object* v_x_1010_){
_start:
{
size_t v_x_9826__boxed_1011_; lean_object* v_res_1012_; 
v_x_9826__boxed_1011_ = lean_unbox_usize(v_x_1009_);
lean_dec(v_x_1009_);
v_res_1012_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1(v_00_u03b2_1007_, v_x_1008_, v_x_9826__boxed_1011_, v_x_1010_);
lean_dec(v_x_1010_);
lean_dec_ref(v_x_1008_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_1013_, lean_object* v_keys_1014_, lean_object* v_vals_1015_, lean_object* v_heq_1016_, lean_object* v_i_1017_, lean_object* v_k_1018_){
_start:
{
lean_object* v___x_1019_; 
v___x_1019_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1_spec__2___redArg(v_keys_1014_, v_vals_1015_, v_i_1017_, v_k_1018_);
return v___x_1019_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1020_, lean_object* v_keys_1021_, lean_object* v_vals_1022_, lean_object* v_heq_1023_, lean_object* v_i_1024_, lean_object* v_k_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn_spec__1_spec__1_spec__2(v_00_u03b2_1020_, v_keys_1021_, v_vals_1022_, v_heq_1023_, v_i_1024_, v_k_1025_);
lean_dec(v_k_1025_);
lean_dec_ref(v_vals_1022_);
lean_dec_ref(v_keys_1021_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj(lean_object* v_e_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_){
_start:
{
lean_object* v___x_1047_; uint8_t v___x_1048_; 
lean_inc_ref(v_e_1032_);
v___x_1047_ = l_Lean_Expr_cleanupAnnotations(v_e_1032_);
v___x_1048_ = l_Lean_Expr_isApp(v___x_1047_);
if (v___x_1048_ == 0)
{
lean_dec_ref(v___x_1047_);
lean_dec_ref(v_e_1032_);
goto v___jp_1044_;
}
else
{
lean_object* v_arg_1049_; lean_object* v___x_1050_; uint8_t v___x_1051_; 
v_arg_1049_ = lean_ctor_get(v___x_1047_, 1);
lean_inc_ref(v_arg_1049_);
v___x_1050_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1047_);
v___x_1051_ = l_Lean_Expr_isApp(v___x_1050_);
if (v___x_1051_ == 0)
{
lean_dec_ref(v___x_1050_);
lean_dec_ref(v_arg_1049_);
lean_dec_ref(v_e_1032_);
goto v___jp_1044_;
}
else
{
lean_object* v_arg_1052_; lean_object* v___x_1053_; uint8_t v___x_1054_; 
v_arg_1052_ = lean_ctor_get(v___x_1050_, 1);
lean_inc_ref(v_arg_1052_);
v___x_1053_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1050_);
v___x_1054_ = l_Lean_Expr_isApp(v___x_1053_);
if (v___x_1054_ == 0)
{
lean_dec_ref(v___x_1053_);
lean_dec_ref(v_arg_1052_);
lean_dec_ref(v_arg_1049_);
lean_dec_ref(v_e_1032_);
goto v___jp_1044_;
}
else
{
lean_object* v_arg_1055_; lean_object* v___x_1056_; lean_object* v_f_1058_; lean_object* v___y_1059_; lean_object* v___y_1060_; lean_object* v___y_1061_; lean_object* v___y_1062_; lean_object* v___y_1063_; lean_object* v___y_1064_; lean_object* v___y_1065_; lean_object* v___y_1066_; lean_object* v___y_1067_; lean_object* v___y_1068_; lean_object* v___x_1082_; uint8_t v___x_1083_; 
v_arg_1055_ = lean_ctor_get(v___x_1053_, 1);
lean_inc_ref(v_arg_1055_);
v___x_1056_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1053_);
v___x_1082_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___closed__2));
v___x_1083_ = l_Lean_Expr_isConstOf(v___x_1056_, v___x_1082_);
if (v___x_1083_ == 0)
{
lean_dec_ref(v___x_1056_);
lean_dec_ref(v_arg_1055_);
lean_dec_ref(v_arg_1052_);
lean_dec_ref(v_arg_1049_);
lean_dec_ref(v_e_1032_);
goto v___jp_1044_;
}
else
{
lean_object* v___x_1084_; 
lean_inc_ref(v_e_1032_);
v___x_1084_ = l_Lean_Meta_Grind_isEqTrue___redArg(v_e_1032_, v_a_1033_, v_a_1037_, v_a_1039_, v_a_1040_, v_a_1041_, v_a_1042_);
if (lean_obj_tag(v___x_1084_) == 0)
{
lean_object* v_a_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1120_; 
v_a_1085_ = lean_ctor_get(v___x_1084_, 0);
v_isSharedCheck_1120_ = !lean_is_exclusive(v___x_1084_);
if (v_isSharedCheck_1120_ == 0)
{
v___x_1087_ = v___x_1084_;
v_isShared_1088_ = v_isSharedCheck_1120_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_a_1085_);
lean_dec(v___x_1084_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1120_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
uint8_t v___x_1089_; 
v___x_1089_ = lean_unbox(v_a_1085_);
lean_dec(v_a_1085_);
if (v___x_1089_ == 0)
{
lean_object* v___x_1090_; lean_object* v___x_1092_; 
lean_dec_ref(v___x_1056_);
lean_dec_ref(v_arg_1055_);
lean_dec_ref(v_arg_1052_);
lean_dec_ref(v_arg_1049_);
lean_dec_ref(v_e_1032_);
v___x_1090_ = lean_box(0);
if (v_isShared_1088_ == 0)
{
lean_ctor_set(v___x_1087_, 0, v___x_1090_);
v___x_1092_ = v___x_1087_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v___x_1090_);
v___x_1092_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
return v___x_1092_;
}
}
else
{
lean_object* v___x_1094_; size_t v___x_1095_; size_t v___x_1096_; uint8_t v___x_1097_; 
lean_del_object(v___x_1087_);
lean_inc_ref(v_arg_1049_);
v___x_1094_ = l_Lean_Expr_eta(v_arg_1049_);
v___x_1095_ = lean_ptr_addr(v_arg_1049_);
v___x_1096_ = lean_ptr_addr(v___x_1094_);
v___x_1097_ = lean_usize_dec_eq(v___x_1095_, v___x_1096_);
if (v___x_1097_ == 0)
{
lean_object* v___x_1098_; 
lean_dec_ref(v_arg_1049_);
v___x_1098_ = l_Lean_Meta_Grind_preprocessLight___redArg(v___x_1094_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_, v_a_1040_, v_a_1041_, v_a_1042_);
if (lean_obj_tag(v___x_1098_) == 0)
{
lean_object* v_a_1099_; lean_object* v___x_1100_; 
v_a_1099_ = lean_ctor_get(v___x_1098_, 0);
lean_inc(v_a_1099_);
lean_dec_ref_known(v___x_1098_, 1);
v___x_1100_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_1032_, v_a_1033_);
if (lean_obj_tag(v___x_1100_) == 0)
{
lean_object* v_a_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; 
v_a_1101_ = lean_ctor_get(v___x_1100_, 0);
lean_inc(v_a_1101_);
lean_dec_ref_known(v___x_1100_, 1);
v___x_1102_ = lean_box(0);
lean_inc(v_a_1042_);
lean_inc_ref(v_a_1041_);
lean_inc(v_a_1040_);
lean_inc_ref(v_a_1039_);
lean_inc(v_a_1038_);
lean_inc_ref(v_a_1037_);
lean_inc(v_a_1036_);
lean_inc_ref(v_a_1035_);
lean_inc(v_a_1034_);
lean_inc(v_a_1033_);
lean_inc(v_a_1099_);
v___x_1103_ = lean_grind_internalize(v_a_1099_, v_a_1101_, v___x_1102_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_, v_a_1040_, v_a_1041_, v_a_1042_);
if (lean_obj_tag(v___x_1103_) == 0)
{
lean_dec_ref_known(v___x_1103_, 1);
v_f_1058_ = v_a_1099_;
v___y_1059_ = v_a_1033_;
v___y_1060_ = v_a_1034_;
v___y_1061_ = v_a_1035_;
v___y_1062_ = v_a_1036_;
v___y_1063_ = v_a_1037_;
v___y_1064_ = v_a_1038_;
v___y_1065_ = v_a_1039_;
v___y_1066_ = v_a_1040_;
v___y_1067_ = v_a_1041_;
v___y_1068_ = v_a_1042_;
goto v___jp_1057_;
}
else
{
lean_dec(v_a_1099_);
lean_dec_ref(v___x_1056_);
lean_dec_ref(v_arg_1055_);
lean_dec_ref(v_arg_1052_);
lean_dec_ref(v_e_1032_);
return v___x_1103_;
}
}
else
{
lean_object* v_a_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1111_; 
lean_dec(v_a_1099_);
lean_dec_ref(v___x_1056_);
lean_dec_ref(v_arg_1055_);
lean_dec_ref(v_arg_1052_);
lean_dec_ref(v_e_1032_);
v_a_1104_ = lean_ctor_get(v___x_1100_, 0);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_1100_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1106_ = v___x_1100_;
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_a_1104_);
lean_dec(v___x_1100_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v___x_1109_; 
if (v_isShared_1107_ == 0)
{
v___x_1109_ = v___x_1106_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v_a_1104_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
}
}
else
{
lean_object* v_a_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1119_; 
lean_dec_ref(v___x_1056_);
lean_dec_ref(v_arg_1055_);
lean_dec_ref(v_arg_1052_);
lean_dec_ref(v_e_1032_);
v_a_1112_ = lean_ctor_get(v___x_1098_, 0);
v_isSharedCheck_1119_ = !lean_is_exclusive(v___x_1098_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1114_ = v___x_1098_;
v_isShared_1115_ = v_isSharedCheck_1119_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_a_1112_);
lean_dec(v___x_1098_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1119_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
lean_object* v___x_1117_; 
if (v_isShared_1115_ == 0)
{
v___x_1117_ = v___x_1114_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v_a_1112_);
v___x_1117_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
return v___x_1117_;
}
}
}
}
else
{
lean_dec_ref(v___x_1094_);
v_f_1058_ = v_arg_1049_;
v___y_1059_ = v_a_1033_;
v___y_1060_ = v_a_1034_;
v___y_1061_ = v_a_1035_;
v___y_1062_ = v_a_1036_;
v___y_1063_ = v_a_1037_;
v___y_1064_ = v_a_1038_;
v___y_1065_ = v_a_1039_;
v___y_1066_ = v_a_1040_;
v___y_1067_ = v_a_1041_;
v___y_1068_ = v_a_1042_;
goto v___jp_1057_;
}
}
}
}
else
{
lean_object* v_a_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1128_; 
lean_dec_ref(v___x_1056_);
lean_dec_ref(v_arg_1055_);
lean_dec_ref(v_arg_1052_);
lean_dec_ref(v_arg_1049_);
lean_dec_ref(v_e_1032_);
v_a_1121_ = lean_ctor_get(v___x_1084_, 0);
v_isSharedCheck_1128_ = !lean_is_exclusive(v___x_1084_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1123_ = v___x_1084_;
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_a_1121_);
lean_dec(v___x_1084_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___x_1126_; 
if (v_isShared_1124_ == 0)
{
v___x_1126_ = v___x_1123_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v_a_1121_);
v___x_1126_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
return v___x_1126_;
}
}
}
}
v___jp_1057_:
{
lean_object* v___x_1069_; 
lean_inc_ref(v_e_1032_);
v___x_1069_ = l_Lean_Meta_Grind_mkEqTrueProof(v_e_1032_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_);
if (lean_obj_tag(v___x_1069_) == 0)
{
lean_object* v_a_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; 
v_a_1070_ = lean_ctor_get(v___x_1069_, 0);
lean_inc(v_a_1070_);
lean_dec_ref_known(v___x_1069_, 1);
v___x_1071_ = l_Lean_Expr_constLevels_x21(v___x_1056_);
lean_dec_ref(v___x_1056_);
v___x_1072_ = l_Lean_Meta_mkOfEqTrueCore(v_e_1032_, v_a_1070_);
v___x_1073_ = l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_initInjFn(v___x_1071_, v_arg_1055_, v_arg_1052_, v_f_1058_, v___x_1072_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_);
return v___x_1073_;
}
else
{
lean_object* v_a_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1081_; 
lean_dec_ref(v_f_1058_);
lean_dec_ref(v___x_1056_);
lean_dec_ref(v_arg_1055_);
lean_dec_ref(v_arg_1052_);
lean_dec_ref(v_e_1032_);
v_a_1074_ = lean_ctor_get(v___x_1069_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_1069_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1076_ = v___x_1069_;
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_a_1074_);
lean_dec(v___x_1069_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v___x_1079_; 
if (v_isShared_1077_ == 0)
{
v___x_1079_ = v___x_1076_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v_a_1074_);
v___x_1079_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
return v___x_1079_;
}
}
}
}
}
}
}
v___jp_1044_:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1045_ = lean_box(0);
v___x_1046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1045_);
return v___x_1046_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___boxed(lean_object* v_e_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_){
_start:
{
lean_object* v_res_1141_; 
v_res_1141_ = l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj(v_e_1129_, v_a_1130_, v_a_1131_, v_a_1132_, v_a_1133_, v_a_1134_, v_a_1135_, v_a_1136_, v_a_1137_, v_a_1138_, v_a_1139_);
lean_dec(v_a_1139_);
lean_dec_ref(v_a_1138_);
lean_dec(v_a_1137_);
lean_dec_ref(v_a_1136_);
lean_dec(v_a_1135_);
lean_dec_ref(v_a_1134_);
lean_dec(v_a_1133_);
lean_dec_ref(v_a_1132_);
lean_dec(v_a_1131_);
lean_dec(v_a_1130_);
return v_res_1141_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___regBuiltin___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj_declare__1_00___x40_Lean_Meta_Tactic_Grind_PropagateInj_3930705876____hygCtx___hyg_9_(){
_start:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1143_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___closed__2));
v___x_1144_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___boxed), 12, 0);
v___x_1145_ = l_Lean_Meta_Grind_registerBuiltinDownwardPropagator(v___x_1143_, v___x_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___regBuiltin___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj_declare__1_00___x40_Lean_Meta_Tactic_Grind_PropagateInj_3930705876____hygCtx___hyg_9____boxed(lean_object* v_a_1146_){
_start:
{
lean_object* v_res_1147_; 
v_res_1147_ = l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___regBuiltin___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj_declare__1_00___x40_Lean_Meta_Tactic_Grind_PropagateInj_3930705876____hygCtx___hyg_9_();
return v_res_1147_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Propagator(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Injective(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_PropagateInj(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Propagator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Injective(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj___regBuiltin___private_Lean_Meta_Tactic_Grind_PropagateInj_0__Lean_Meta_Grind_propagateInj_declare__1_00___x40_Lean_Meta_Tactic_Grind_PropagateInj_3930705876____hygCtx___hyg_9_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_PropagateInj(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Init_Grind_Propagator(uint8_t builtin);
lean_object* initialize_Init_Grind_Injective(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_PropagateInj(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Propagator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Injective(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_PropagatorAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_PropagateInj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_PropagateInj(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_PropagateInj(builtin);
}
#ifdef __cplusplus
}
#endif

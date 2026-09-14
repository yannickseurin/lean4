// Lean compiler output
// Module: Lean.Meta.Sym.AlphaShareCommon
// Imports: public import Lean.Meta.Sym.ExprPtr public import Lean.Environment import Init.Grind.Util import Lean.ReducibilityAttrs import Lean.ProjFns
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l_Lean_KVMap_eqv(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t l_Lean_getReducibilityStatusCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_isProjectionFn(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_Sym_instHashableExprPtr___lam__0___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_findKeyDAux___redArg(lean_object*, lean_object*, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instBEqExprPtr___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_findEntry_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild___boxed(lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_isGrindGadget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_isGrindGadget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_isGrindGadget___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "nestedDecidable"};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__2_value),LEAN_SCALAR_PTR_LITERAL(65, 76, 105, 85, 179, 183, 200, 153)}};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__3_value;
static const lean_string_object l_Lean_Meta_Sym_isGrindGadget___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "EqMatch"};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__4_value),LEAN_SCALAR_PTR_LITERAL(128, 191, 100, 49, 216, 68, 143, 22)}};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__5_value;
static const lean_string_object l_Lean_Meta_Sym_isGrindGadget___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "MatchCond"};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__6_value),LEAN_SCALAR_PTR_LITERAL(109, 233, 187, 249, 156, 65, 204, 232)}};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_isGrindGadget(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isGrindGadget___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_isUnfoldReducibleCandidate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isUnfoldReducibleCandidate___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Meta_Sym_instHashableAlphaKey___private__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instHashableAlphaKey___private__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_instHashableAlphaKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_instHashableAlphaKey___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_instHashableAlphaKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_instHashableAlphaKey = (const lean_object*)&l_Lean_Meta_Sym_instHashableAlphaKey___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_instBEqAlphaKey___private__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instBEqAlphaKey___private__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_instBEqAlphaKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_instBEqAlphaKey___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_instBEqAlphaKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_instBEqAlphaKey = (const lean_object*)&l_Lean_Meta_Sym_instBEqAlphaKey___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_isReducible(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_isReducible___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "__dummy__"};
static const lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__0_value),LEAN_SCALAR_PTR_LITERAL(182, 141, 137, 132, 208, 124, 31, 129)}};
static const lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(lean_object*, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0(lean_object*, lean_object*, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_instBEqExprPtr___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_instHashableExprPtr___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlpha(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlpha___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visitInc(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visitInc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlphaInc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlphaInc___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(lean_object* v_e_1_){
_start:
{
switch(lean_obj_tag(v_e_1_))
{
case 5:
{
size_t v___x_7_; size_t v___x_8_; size_t v___x_9_; uint64_t v___x_10_; 
v___x_7_ = lean_ptr_addr(v_e_1_);
v___x_8_ = ((size_t)3ULL);
v___x_9_ = lean_usize_shift_right(v___x_7_, v___x_8_);
v___x_10_ = lean_usize_to_uint64(v___x_9_);
return v___x_10_;
}
case 6:
{
goto v___jp_2_;
}
case 7:
{
goto v___jp_2_;
}
case 8:
{
size_t v___x_11_; size_t v___x_12_; size_t v___x_13_; uint64_t v___x_14_; 
v___x_11_ = lean_ptr_addr(v_e_1_);
v___x_12_ = ((size_t)3ULL);
v___x_13_ = lean_usize_shift_right(v___x_11_, v___x_12_);
v___x_14_ = lean_usize_to_uint64(v___x_13_);
return v___x_14_;
}
case 10:
{
size_t v___x_15_; size_t v___x_16_; size_t v___x_17_; uint64_t v___x_18_; 
v___x_15_ = lean_ptr_addr(v_e_1_);
v___x_16_ = ((size_t)3ULL);
v___x_17_ = lean_usize_shift_right(v___x_15_, v___x_16_);
v___x_18_ = lean_usize_to_uint64(v___x_17_);
return v___x_18_;
}
case 11:
{
size_t v___x_19_; size_t v___x_20_; size_t v___x_21_; uint64_t v___x_22_; 
v___x_19_ = lean_ptr_addr(v_e_1_);
v___x_20_ = ((size_t)3ULL);
v___x_21_ = lean_usize_shift_right(v___x_19_, v___x_20_);
v___x_22_ = lean_usize_to_uint64(v___x_21_);
return v___x_22_;
}
default: 
{
uint64_t v___x_23_; 
v___x_23_ = l_Lean_Expr_hash(v_e_1_);
return v___x_23_;
}
}
v___jp_2_:
{
size_t v___x_3_; size_t v___x_4_; size_t v___x_5_; uint64_t v___x_6_; 
v___x_3_ = lean_ptr_addr(v_e_1_);
v___x_4_ = ((size_t)3ULL);
v___x_5_ = lean_usize_shift_right(v___x_3_, v___x_4_);
v___x_6_ = lean_usize_to_uint64(v___x_5_);
return v___x_6_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild___boxed(lean_object* v_e_24_){
_start:
{
uint64_t v_res_25_; lean_object* v_r_26_; 
v_res_25_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_e_24_);
lean_dec_ref(v_e_24_);
v_r_26_ = lean_box_uint64(v_res_25_);
return v_r_26_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(lean_object* v_e_27_){
_start:
{
lean_object* v_d_29_; lean_object* v_b_30_; 
switch(lean_obj_tag(v_e_27_))
{
case 5:
{
lean_object* v_fn_34_; lean_object* v_arg_35_; uint64_t v___x_36_; uint64_t v___x_37_; uint64_t v___x_38_; 
v_fn_34_ = lean_ctor_get(v_e_27_, 0);
v_arg_35_ = lean_ctor_get(v_e_27_, 1);
v___x_36_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_fn_34_);
v___x_37_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_arg_35_);
v___x_38_ = lean_uint64_mix_hash(v___x_36_, v___x_37_);
return v___x_38_;
}
case 6:
{
lean_object* v_binderType_39_; lean_object* v_body_40_; 
v_binderType_39_ = lean_ctor_get(v_e_27_, 1);
v_body_40_ = lean_ctor_get(v_e_27_, 2);
v_d_29_ = v_binderType_39_;
v_b_30_ = v_body_40_;
goto v___jp_28_;
}
case 7:
{
lean_object* v_binderType_41_; lean_object* v_body_42_; 
v_binderType_41_ = lean_ctor_get(v_e_27_, 1);
v_body_42_ = lean_ctor_get(v_e_27_, 2);
v_d_29_ = v_binderType_41_;
v_b_30_ = v_body_42_;
goto v___jp_28_;
}
case 8:
{
lean_object* v_value_43_; lean_object* v_body_44_; uint8_t v_nondep_45_; uint64_t v___y_47_; 
v_value_43_ = lean_ctor_get(v_e_27_, 2);
v_body_44_ = lean_ctor_get(v_e_27_, 3);
v_nondep_45_ = lean_ctor_get_uint8(v_e_27_, sizeof(void*)*4 + 8);
if (v_nondep_45_ == 0)
{
uint64_t v___x_52_; 
v___x_52_ = 19ULL;
v___y_47_ = v___x_52_;
goto v___jp_46_;
}
else
{
uint64_t v___x_53_; 
v___x_53_ = 17ULL;
v___y_47_ = v___x_53_;
goto v___jp_46_;
}
v___jp_46_:
{
uint64_t v___x_48_; uint64_t v___x_49_; uint64_t v___x_50_; uint64_t v___x_51_; 
v___x_48_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_value_43_);
v___x_49_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_body_44_);
v___x_50_ = lean_uint64_mix_hash(v___x_48_, v___x_49_);
v___x_51_ = lean_uint64_mix_hash(v___y_47_, v___x_50_);
return v___x_51_;
}
}
case 10:
{
lean_object* v_expr_54_; uint64_t v___x_55_; uint64_t v___x_56_; uint64_t v___x_57_; 
v_expr_54_ = lean_ctor_get(v_e_27_, 1);
v___x_55_ = 13ULL;
v___x_56_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_expr_54_);
v___x_57_ = lean_uint64_mix_hash(v___x_55_, v___x_56_);
return v___x_57_;
}
case 11:
{
lean_object* v_typeName_58_; lean_object* v_idx_59_; lean_object* v_struct_60_; uint64_t v___y_62_; lean_object* v___x_67_; 
v_typeName_58_ = lean_ctor_get(v_e_27_, 0);
v_idx_59_ = lean_ctor_get(v_e_27_, 1);
v_struct_60_ = lean_ctor_get(v_e_27_, 2);
v___x_67_ = l_unsafeCast___redArg(v_typeName_58_);
if (lean_obj_tag(v___x_67_) == 0)
{
uint64_t v___x_68_; 
v___x_68_ = 1723ULL;
v___y_62_ = v___x_68_;
goto v___jp_61_;
}
else
{
uint64_t v_hash_69_; 
v_hash_69_ = lean_ctor_get_uint64(v___x_67_, sizeof(void*)*2);
lean_dec(v___x_67_);
v___y_62_ = v_hash_69_;
goto v___jp_61_;
}
v___jp_61_:
{
uint64_t v___x_63_; uint64_t v___x_64_; uint64_t v___x_65_; uint64_t v___x_66_; 
v___x_63_ = lean_uint64_of_nat(v_idx_59_);
v___x_64_ = lean_uint64_mix_hash(v___y_62_, v___x_63_);
v___x_65_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_struct_60_);
v___x_66_ = lean_uint64_mix_hash(v___x_64_, v___x_65_);
return v___x_66_;
}
}
default: 
{
uint64_t v___x_70_; 
v___x_70_ = l_Lean_Expr_hash(v_e_27_);
return v___x_70_;
}
}
v___jp_28_:
{
uint64_t v___x_31_; uint64_t v___x_32_; uint64_t v___x_33_; 
v___x_31_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_d_29_);
v___x_32_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_b_30_);
v___x_33_ = lean_uint64_mix_hash(v___x_31_, v___x_32_);
return v___x_33_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash___boxed(lean_object* v_e_71_){
_start:
{
uint64_t v_res_72_; lean_object* v_r_73_; 
v_res_72_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_71_);
lean_dec_ref(v_e_71_);
v_r_73_ = lean_box_uint64(v_res_72_);
return v_r_73_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(lean_object* v_e_u2081_74_, lean_object* v_e_u2082_75_){
_start:
{
switch(lean_obj_tag(v_e_u2081_74_))
{
case 5:
{
if (lean_obj_tag(v_e_u2082_75_) == 5)
{
lean_object* v_fn_76_; lean_object* v_arg_77_; lean_object* v_fn_78_; lean_object* v_arg_79_; size_t v___x_80_; size_t v___x_81_; uint8_t v___x_82_; 
v_fn_76_ = lean_ctor_get(v_e_u2081_74_, 0);
v_arg_77_ = lean_ctor_get(v_e_u2081_74_, 1);
v_fn_78_ = lean_ctor_get(v_e_u2082_75_, 0);
v_arg_79_ = lean_ctor_get(v_e_u2082_75_, 1);
v___x_80_ = lean_ptr_addr(v_fn_76_);
v___x_81_ = lean_ptr_addr(v_fn_78_);
v___x_82_ = lean_usize_dec_eq(v___x_80_, v___x_81_);
if (v___x_82_ == 0)
{
return v___x_82_;
}
else
{
size_t v___x_83_; size_t v___x_84_; uint8_t v___x_85_; 
v___x_83_ = lean_ptr_addr(v_arg_77_);
v___x_84_ = lean_ptr_addr(v_arg_79_);
v___x_85_ = lean_usize_dec_eq(v___x_83_, v___x_84_);
return v___x_85_;
}
}
else
{
uint8_t v___x_86_; 
v___x_86_ = 0;
return v___x_86_;
}
}
case 6:
{
if (lean_obj_tag(v_e_u2082_75_) == 6)
{
lean_object* v_binderType_87_; lean_object* v_body_88_; lean_object* v_binderType_89_; lean_object* v_body_90_; size_t v___x_91_; size_t v___x_92_; uint8_t v___x_93_; 
v_binderType_87_ = lean_ctor_get(v_e_u2081_74_, 1);
v_body_88_ = lean_ctor_get(v_e_u2081_74_, 2);
v_binderType_89_ = lean_ctor_get(v_e_u2082_75_, 1);
v_body_90_ = lean_ctor_get(v_e_u2082_75_, 2);
v___x_91_ = lean_ptr_addr(v_binderType_87_);
v___x_92_ = lean_ptr_addr(v_binderType_89_);
v___x_93_ = lean_usize_dec_eq(v___x_91_, v___x_92_);
if (v___x_93_ == 0)
{
return v___x_93_;
}
else
{
size_t v___x_94_; size_t v___x_95_; uint8_t v___x_96_; 
v___x_94_ = lean_ptr_addr(v_body_88_);
v___x_95_ = lean_ptr_addr(v_body_90_);
v___x_96_ = lean_usize_dec_eq(v___x_94_, v___x_95_);
return v___x_96_;
}
}
else
{
uint8_t v___x_97_; 
v___x_97_ = 0;
return v___x_97_;
}
}
case 7:
{
if (lean_obj_tag(v_e_u2082_75_) == 7)
{
lean_object* v_binderType_98_; lean_object* v_body_99_; lean_object* v_binderType_100_; lean_object* v_body_101_; size_t v___x_102_; size_t v___x_103_; uint8_t v___x_104_; 
v_binderType_98_ = lean_ctor_get(v_e_u2081_74_, 1);
v_body_99_ = lean_ctor_get(v_e_u2081_74_, 2);
v_binderType_100_ = lean_ctor_get(v_e_u2082_75_, 1);
v_body_101_ = lean_ctor_get(v_e_u2082_75_, 2);
v___x_102_ = lean_ptr_addr(v_binderType_98_);
v___x_103_ = lean_ptr_addr(v_binderType_100_);
v___x_104_ = lean_usize_dec_eq(v___x_102_, v___x_103_);
if (v___x_104_ == 0)
{
return v___x_104_;
}
else
{
size_t v___x_105_; size_t v___x_106_; uint8_t v___x_107_; 
v___x_105_ = lean_ptr_addr(v_body_99_);
v___x_106_ = lean_ptr_addr(v_body_101_);
v___x_107_ = lean_usize_dec_eq(v___x_105_, v___x_106_);
return v___x_107_;
}
}
else
{
uint8_t v___x_108_; 
v___x_108_ = 0;
return v___x_108_;
}
}
case 8:
{
if (lean_obj_tag(v_e_u2082_75_) == 8)
{
lean_object* v_value_109_; lean_object* v_body_110_; uint8_t v_nondep_111_; lean_object* v_value_112_; lean_object* v_body_113_; uint8_t v_nondep_114_; 
v_value_109_ = lean_ctor_get(v_e_u2081_74_, 2);
v_body_110_ = lean_ctor_get(v_e_u2081_74_, 3);
v_nondep_111_ = lean_ctor_get_uint8(v_e_u2081_74_, sizeof(void*)*4 + 8);
v_value_112_ = lean_ctor_get(v_e_u2082_75_, 2);
v_body_113_ = lean_ctor_get(v_e_u2082_75_, 3);
v_nondep_114_ = lean_ctor_get_uint8(v_e_u2082_75_, sizeof(void*)*4 + 8);
if (v_nondep_114_ == 0)
{
if (v_nondep_111_ == 0)
{
goto v___jp_115_;
}
else
{
return v_nondep_114_;
}
}
else
{
if (v_nondep_111_ == 0)
{
return v_nondep_111_;
}
else
{
goto v___jp_115_;
}
}
v___jp_115_:
{
size_t v___x_116_; size_t v___x_117_; uint8_t v___x_118_; 
v___x_116_ = lean_ptr_addr(v_value_109_);
v___x_117_ = lean_ptr_addr(v_value_112_);
v___x_118_ = lean_usize_dec_eq(v___x_116_, v___x_117_);
if (v___x_118_ == 0)
{
return v___x_118_;
}
else
{
size_t v___x_119_; size_t v___x_120_; uint8_t v___x_121_; 
v___x_119_ = lean_ptr_addr(v_body_110_);
v___x_120_ = lean_ptr_addr(v_body_113_);
v___x_121_ = lean_usize_dec_eq(v___x_119_, v___x_120_);
return v___x_121_;
}
}
}
else
{
uint8_t v___x_122_; 
v___x_122_ = 0;
return v___x_122_;
}
}
case 10:
{
if (lean_obj_tag(v_e_u2082_75_) == 10)
{
lean_object* v_data_123_; lean_object* v_expr_124_; lean_object* v_data_125_; lean_object* v_expr_126_; size_t v___x_127_; size_t v___x_128_; uint8_t v___x_129_; 
v_data_123_ = lean_ctor_get(v_e_u2081_74_, 0);
v_expr_124_ = lean_ctor_get(v_e_u2081_74_, 1);
v_data_125_ = lean_ctor_get(v_e_u2082_75_, 0);
v_expr_126_ = lean_ctor_get(v_e_u2082_75_, 1);
v___x_127_ = lean_ptr_addr(v_expr_124_);
v___x_128_ = lean_ptr_addr(v_expr_126_);
v___x_129_ = lean_usize_dec_eq(v___x_127_, v___x_128_);
if (v___x_129_ == 0)
{
return v___x_129_;
}
else
{
uint8_t v___x_130_; 
v___x_130_ = l_Lean_KVMap_eqv(v_data_123_, v_data_125_);
return v___x_130_;
}
}
else
{
uint8_t v___x_131_; 
v___x_131_ = 0;
return v___x_131_;
}
}
case 11:
{
if (lean_obj_tag(v_e_u2082_75_) == 11)
{
lean_object* v_typeName_132_; lean_object* v_idx_133_; lean_object* v_struct_134_; lean_object* v_typeName_135_; lean_object* v_idx_136_; lean_object* v_struct_137_; uint8_t v___y_139_; uint8_t v___x_143_; 
v_typeName_132_ = lean_ctor_get(v_e_u2081_74_, 0);
v_idx_133_ = lean_ctor_get(v_e_u2081_74_, 1);
v_struct_134_ = lean_ctor_get(v_e_u2081_74_, 2);
v_typeName_135_ = lean_ctor_get(v_e_u2082_75_, 0);
v_idx_136_ = lean_ctor_get(v_e_u2082_75_, 1);
v_struct_137_ = lean_ctor_get(v_e_u2082_75_, 2);
v___x_143_ = lean_name_eq(v_typeName_132_, v_typeName_135_);
if (v___x_143_ == 0)
{
v___y_139_ = v___x_143_;
goto v___jp_138_;
}
else
{
uint8_t v___x_144_; 
v___x_144_ = lean_nat_dec_eq(v_idx_133_, v_idx_136_);
v___y_139_ = v___x_144_;
goto v___jp_138_;
}
v___jp_138_:
{
if (v___y_139_ == 0)
{
return v___y_139_;
}
else
{
size_t v___x_140_; size_t v___x_141_; uint8_t v___x_142_; 
v___x_140_ = lean_ptr_addr(v_struct_134_);
v___x_141_ = lean_ptr_addr(v_struct_137_);
v___x_142_ = lean_usize_dec_eq(v___x_140_, v___x_141_);
return v___x_142_;
}
}
}
else
{
uint8_t v___x_145_; 
v___x_145_ = 0;
return v___x_145_;
}
}
default: 
{
uint8_t v___x_146_; 
v___x_146_ = lean_expr_eqv(v_e_u2081_74_, v_e_u2082_75_);
return v___x_146_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq___boxed(lean_object* v_e_u2081_147_, lean_object* v_e_u2082_148_){
_start:
{
uint8_t v_res_149_; lean_object* v_r_150_; 
v_res_149_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_e_u2081_147_, v_e_u2082_148_);
lean_dec_ref(v_e_u2082_148_);
lean_dec_ref(v_e_u2081_147_);
v_r_150_ = lean_box(v_res_149_);
return v_r_150_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_isGrindGadget(lean_object* v_declName_168_){
_start:
{
uint8_t v___y_170_; lean_object* v___x_173_; uint8_t v___x_174_; 
v___x_173_ = ((lean_object*)(l_Lean_Meta_Sym_isGrindGadget___closed__5));
v___x_174_ = lean_name_eq(v_declName_168_, v___x_173_);
if (v___x_174_ == 0)
{
lean_object* v___x_175_; uint8_t v___x_176_; 
v___x_175_ = ((lean_object*)(l_Lean_Meta_Sym_isGrindGadget___closed__7));
v___x_176_ = lean_name_eq(v_declName_168_, v___x_175_);
v___y_170_ = v___x_176_;
goto v___jp_169_;
}
else
{
v___y_170_ = v___x_174_;
goto v___jp_169_;
}
v___jp_169_:
{
if (v___y_170_ == 0)
{
lean_object* v___x_171_; uint8_t v___x_172_; 
v___x_171_ = ((lean_object*)(l_Lean_Meta_Sym_isGrindGadget___closed__3));
v___x_172_ = lean_name_eq(v_declName_168_, v___x_171_);
return v___x_172_;
}
else
{
return v___y_170_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isGrindGadget___boxed(lean_object* v_declName_177_){
_start:
{
uint8_t v_res_178_; lean_object* v_r_179_; 
v_res_178_ = l_Lean_Meta_Sym_isGrindGadget(v_declName_177_);
lean_dec(v_declName_177_);
v_r_179_ = lean_box(v_res_178_);
return v_r_179_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_isUnfoldReducibleCandidate(lean_object* v_env_180_, lean_object* v_declName_181_){
_start:
{
uint8_t v___x_182_; 
lean_inc(v_declName_181_);
lean_inc_ref(v_env_180_);
v___x_182_ = l_Lean_getReducibilityStatusCore(v_env_180_, v_declName_181_);
if (v___x_182_ == 0)
{
uint8_t v___x_183_; 
v___x_183_ = l_Lean_Meta_Sym_isGrindGadget(v_declName_181_);
if (v___x_183_ == 0)
{
uint8_t v___x_184_; 
v___x_184_ = l_Lean_Environment_isProjectionFn(v_env_180_, v_declName_181_);
if (v___x_184_ == 0)
{
uint8_t v___x_185_; 
v___x_185_ = 1;
return v___x_185_;
}
else
{
return v___x_183_;
}
}
else
{
uint8_t v___x_186_; 
lean_dec(v_declName_181_);
lean_dec_ref(v_env_180_);
v___x_186_ = 0;
return v___x_186_;
}
}
else
{
uint8_t v___x_187_; 
lean_dec(v_declName_181_);
lean_dec_ref(v_env_180_);
v___x_187_ = 0;
return v___x_187_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isUnfoldReducibleCandidate___boxed(lean_object* v_env_188_, lean_object* v_declName_189_){
_start:
{
uint8_t v_res_190_; lean_object* v_r_191_; 
v_res_190_ = l_Lean_Meta_Sym_isUnfoldReducibleCandidate(v_env_188_, v_declName_189_);
v_r_191_ = lean_box(v_res_190_);
return v_r_191_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_Sym_instHashableAlphaKey___private__1(lean_object* v_k_192_){
_start:
{
uint64_t v___x_193_; 
v___x_193_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_k_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instHashableAlphaKey___private__1___boxed(lean_object* v_k_194_){
_start:
{
uint64_t v_res_195_; lean_object* v_r_196_; 
v_res_195_ = l_Lean_Meta_Sym_instHashableAlphaKey___private__1(v_k_194_);
lean_dec_ref(v_k_194_);
v_r_196_ = lean_box_uint64(v_res_195_);
return v_r_196_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_instBEqAlphaKey___private__1(lean_object* v_k_u2081_199_, lean_object* v_k_u2082_200_){
_start:
{
uint8_t v___x_201_; 
v___x_201_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_k_u2081_199_, v_k_u2082_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instBEqAlphaKey___private__1___boxed(lean_object* v_k_u2081_202_, lean_object* v_k_u2082_203_){
_start:
{
uint8_t v_res_204_; lean_object* v_r_205_; 
v_res_204_ = l_Lean_Meta_Sym_instBEqAlphaKey___private__1(v_k_u2081_202_, v_k_u2082_203_);
lean_dec_ref(v_k_u2082_203_);
lean_dec_ref(v_k_u2081_202_);
v_r_205_ = lean_box(v_res_204_);
return v_r_205_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_isReducible(lean_object* v_ctx_208_, lean_object* v_declName_209_){
_start:
{
uint8_t v_checkReducible_210_; 
v_checkReducible_210_ = lean_ctor_get_uint8(v_ctx_208_, sizeof(void*)*1);
if (v_checkReducible_210_ == 0)
{
lean_dec(v_declName_209_);
lean_dec_ref(v_ctx_208_);
return v_checkReducible_210_;
}
else
{
lean_object* v_env_211_; uint8_t v___x_212_; 
v_env_211_ = lean_ctor_get(v_ctx_208_, 0);
lean_inc_ref(v_env_211_);
lean_dec_ref(v_ctx_208_);
v___x_212_ = l_Lean_Meta_Sym_isUnfoldReducibleCandidate(v_env_211_, v_declName_209_);
return v___x_212_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_isReducible___boxed(lean_object* v_ctx_213_, lean_object* v_declName_214_){
_start:
{
uint8_t v_res_215_; lean_object* v_r_216_; 
v_res_215_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_isReducible(v_ctx_213_, v_declName_214_);
v_r_216_ = lean_box(v_res_215_);
return v_r_216_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2(void){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_220_ = lean_box(0);
v___x_221_ = ((lean_object*)(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__1));
v___x_222_ = l_Lean_mkConst(v___x_221_, v___x_220_);
return v___x_222_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy(void){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = lean_obj_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg(lean_object* v_keys_224_, lean_object* v_i_225_, lean_object* v_k_226_, lean_object* v_k_u2080_227_){
_start:
{
lean_object* v___x_228_; uint8_t v___x_229_; 
v___x_228_ = lean_array_get_size(v_keys_224_);
v___x_229_ = lean_nat_dec_lt(v_i_225_, v___x_228_);
if (v___x_229_ == 0)
{
lean_dec(v_i_225_);
lean_inc_ref(v_k_u2080_227_);
return v_k_u2080_227_;
}
else
{
lean_object* v_k_x27_230_; uint8_t v___x_231_; 
v_k_x27_230_ = lean_array_fget_borrowed(v_keys_224_, v_i_225_);
v___x_231_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_k_226_, v_k_x27_230_);
if (v___x_231_ == 0)
{
lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_232_ = lean_unsigned_to_nat(1u);
v___x_233_ = lean_nat_add(v_i_225_, v___x_232_);
lean_dec(v_i_225_);
v_i_225_ = v___x_233_;
goto _start;
}
else
{
lean_dec(v_i_225_);
lean_inc(v_k_x27_230_);
return v_k_x27_230_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg___boxed(lean_object* v_keys_235_, lean_object* v_i_236_, lean_object* v_k_237_, lean_object* v_k_u2080_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg(v_keys_235_, v_i_236_, v_k_237_, v_k_u2080_238_);
lean_dec_ref(v_k_u2080_238_);
lean_dec_ref(v_k_237_);
lean_dec_ref(v_keys_235_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(lean_object* v_x_240_, size_t v_x_241_, lean_object* v_x_242_, lean_object* v_x_243_){
_start:
{
if (lean_obj_tag(v_x_240_) == 0)
{
lean_object* v_es_244_; lean_object* v___x_245_; size_t v___x_246_; size_t v___x_247_; lean_object* v_j_248_; lean_object* v___x_249_; 
v_es_244_ = lean_ctor_get(v_x_240_, 0);
v___x_245_ = lean_box(2);
v___x_246_ = ((size_t)31ULL);
v___x_247_ = lean_usize_land(v_x_241_, v___x_246_);
v_j_248_ = lean_usize_to_nat(v___x_247_);
v___x_249_ = lean_array_get_borrowed(v___x_245_, v_es_244_, v_j_248_);
lean_dec(v_j_248_);
switch(lean_obj_tag(v___x_249_))
{
case 0:
{
lean_object* v_key_250_; uint8_t v___x_251_; 
v_key_250_ = lean_ctor_get(v___x_249_, 0);
v___x_251_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_242_, v_key_250_);
if (v___x_251_ == 0)
{
lean_inc_ref(v_x_243_);
return v_x_243_;
}
else
{
lean_inc(v_key_250_);
return v_key_250_;
}
}
case 1:
{
lean_object* v_node_252_; size_t v___x_253_; size_t v___x_254_; 
v_node_252_ = lean_ctor_get(v___x_249_, 0);
v___x_253_ = ((size_t)5ULL);
v___x_254_ = lean_usize_shift_right(v_x_241_, v___x_253_);
v_x_240_ = v_node_252_;
v_x_241_ = v___x_254_;
goto _start;
}
default: 
{
lean_inc_ref(v_x_243_);
return v_x_243_;
}
}
}
else
{
lean_object* v_ks_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v_ks_256_ = lean_ctor_get(v_x_240_, 0);
v___x_257_ = lean_unsigned_to_nat(0u);
v___x_258_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg(v_ks_256_, v___x_257_, v_x_242_, v_x_243_);
return v___x_258_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg___boxed(lean_object* v_x_259_, lean_object* v_x_260_, lean_object* v_x_261_, lean_object* v_x_262_){
_start:
{
size_t v_x_1951__boxed_263_; lean_object* v_res_264_; 
v_x_1951__boxed_263_ = lean_unbox_usize(v_x_260_);
lean_dec(v_x_260_);
v_res_264_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_x_259_, v_x_1951__boxed_263_, v_x_261_, v_x_262_);
lean_dec_ref(v_x_262_);
lean_dec_ref(v_x_261_);
lean_dec_ref(v_x_259_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10___redArg(lean_object* v_x_265_, lean_object* v_x_266_, lean_object* v_x_267_, lean_object* v_x_268_){
_start:
{
lean_object* v_ks_269_; lean_object* v_vs_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_294_; 
v_ks_269_ = lean_ctor_get(v_x_265_, 0);
v_vs_270_ = lean_ctor_get(v_x_265_, 1);
v_isSharedCheck_294_ = !lean_is_exclusive(v_x_265_);
if (v_isSharedCheck_294_ == 0)
{
v___x_272_ = v_x_265_;
v_isShared_273_ = v_isSharedCheck_294_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_vs_270_);
lean_inc(v_ks_269_);
lean_dec(v_x_265_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_294_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v___x_274_; uint8_t v___x_275_; 
v___x_274_ = lean_array_get_size(v_ks_269_);
v___x_275_ = lean_nat_dec_lt(v_x_266_, v___x_274_);
if (v___x_275_ == 0)
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_279_; 
lean_dec(v_x_266_);
v___x_276_ = lean_array_push(v_ks_269_, v_x_267_);
v___x_277_ = lean_array_push(v_vs_270_, v_x_268_);
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 1, v___x_277_);
lean_ctor_set(v___x_272_, 0, v___x_276_);
v___x_279_ = v___x_272_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v___x_276_);
lean_ctor_set(v_reuseFailAlloc_280_, 1, v___x_277_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
return v___x_279_;
}
}
else
{
lean_object* v_k_x27_281_; uint8_t v___x_282_; 
v_k_x27_281_ = lean_array_fget_borrowed(v_ks_269_, v_x_266_);
v___x_282_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_267_, v_k_x27_281_);
if (v___x_282_ == 0)
{
lean_object* v___x_284_; 
if (v_isShared_273_ == 0)
{
v___x_284_ = v___x_272_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_ks_269_);
lean_ctor_set(v_reuseFailAlloc_288_, 1, v_vs_270_);
v___x_284_ = v_reuseFailAlloc_288_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_285_ = lean_unsigned_to_nat(1u);
v___x_286_ = lean_nat_add(v_x_266_, v___x_285_);
lean_dec(v_x_266_);
v_x_265_ = v___x_284_;
v_x_266_ = v___x_286_;
goto _start;
}
}
else
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_292_; 
v___x_289_ = lean_array_fset(v_ks_269_, v_x_266_, v_x_267_);
v___x_290_ = lean_array_fset(v_vs_270_, v_x_266_, v_x_268_);
lean_dec(v_x_266_);
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 1, v___x_290_);
lean_ctor_set(v___x_272_, 0, v___x_289_);
v___x_292_ = v___x_272_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v___x_289_);
lean_ctor_set(v_reuseFailAlloc_293_, 1, v___x_290_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8___redArg(lean_object* v_n_295_, lean_object* v_k_296_, lean_object* v_v_297_){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_298_ = lean_unsigned_to_nat(0u);
v___x_299_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10___redArg(v_n_295_, v___x_298_, v_k_296_, v_v_297_);
return v___x_299_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_300_ = lean_box(0);
v___x_301_ = l_unsafeCast___redArg(v___x_300_);
return v___x_301_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_302_; 
v___x_302_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(lean_object* v_x_303_, size_t v_x_304_, size_t v_x_305_, lean_object* v_x_306_, lean_object* v_x_307_){
_start:
{
if (lean_obj_tag(v_x_303_) == 0)
{
lean_object* v_es_308_; size_t v___x_309_; size_t v___x_310_; lean_object* v_j_311_; lean_object* v___x_312_; uint8_t v___x_313_; 
v_es_308_ = lean_ctor_get(v_x_303_, 0);
v___x_309_ = ((size_t)31ULL);
v___x_310_ = lean_usize_land(v_x_304_, v___x_309_);
v_j_311_ = lean_usize_to_nat(v___x_310_);
v___x_312_ = lean_array_get_size(v_es_308_);
v___x_313_ = lean_nat_dec_lt(v_j_311_, v___x_312_);
if (v___x_313_ == 0)
{
lean_dec(v_j_311_);
lean_dec(v_x_307_);
lean_dec_ref(v_x_306_);
return v_x_303_;
}
else
{
lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_352_; 
lean_inc_ref(v_es_308_);
v_isSharedCheck_352_ = !lean_is_exclusive(v_x_303_);
if (v_isSharedCheck_352_ == 0)
{
lean_object* v_unused_353_; 
v_unused_353_ = lean_ctor_get(v_x_303_, 0);
lean_dec(v_unused_353_);
v___x_315_ = v_x_303_;
v_isShared_316_ = v_isSharedCheck_352_;
goto v_resetjp_314_;
}
else
{
lean_dec(v_x_303_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_352_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v_v_317_; lean_object* v___x_318_; lean_object* v_xs_x27_319_; lean_object* v___y_321_; 
v_v_317_ = lean_array_fget(v_es_308_, v_j_311_);
v___x_318_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0);
v_xs_x27_319_ = lean_array_fset(v_es_308_, v_j_311_, v___x_318_);
switch(lean_obj_tag(v_v_317_))
{
case 0:
{
lean_object* v_key_326_; lean_object* v_val_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_337_; 
v_key_326_ = lean_ctor_get(v_v_317_, 0);
v_val_327_ = lean_ctor_get(v_v_317_, 1);
v_isSharedCheck_337_ = !lean_is_exclusive(v_v_317_);
if (v_isSharedCheck_337_ == 0)
{
v___x_329_ = v_v_317_;
v_isShared_330_ = v_isSharedCheck_337_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_val_327_);
lean_inc(v_key_326_);
lean_dec(v_v_317_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_337_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
uint8_t v___x_331_; 
v___x_331_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_306_, v_key_326_);
if (v___x_331_ == 0)
{
lean_object* v___x_332_; lean_object* v___x_333_; 
lean_del_object(v___x_329_);
v___x_332_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_326_, v_val_327_, v_x_306_, v_x_307_);
v___x_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
v___y_321_ = v___x_333_;
goto v___jp_320_;
}
else
{
lean_object* v___x_335_; 
lean_dec(v_val_327_);
lean_dec(v_key_326_);
if (v_isShared_330_ == 0)
{
lean_ctor_set(v___x_329_, 1, v_x_307_);
lean_ctor_set(v___x_329_, 0, v_x_306_);
v___x_335_ = v___x_329_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v_x_306_);
lean_ctor_set(v_reuseFailAlloc_336_, 1, v_x_307_);
v___x_335_ = v_reuseFailAlloc_336_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
v___y_321_ = v___x_335_;
goto v___jp_320_;
}
}
}
}
case 1:
{
lean_object* v_node_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_350_; 
v_node_338_ = lean_ctor_get(v_v_317_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v_v_317_);
if (v_isSharedCheck_350_ == 0)
{
v___x_340_ = v_v_317_;
v_isShared_341_ = v_isSharedCheck_350_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_node_338_);
lean_dec(v_v_317_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_350_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
size_t v___x_342_; size_t v___x_343_; size_t v___x_344_; size_t v___x_345_; lean_object* v___x_346_; lean_object* v___x_348_; 
v___x_342_ = ((size_t)5ULL);
v___x_343_ = lean_usize_shift_right(v_x_304_, v___x_342_);
v___x_344_ = ((size_t)1ULL);
v___x_345_ = lean_usize_add(v_x_305_, v___x_344_);
v___x_346_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(v_node_338_, v___x_343_, v___x_345_, v_x_306_, v_x_307_);
if (v_isShared_341_ == 0)
{
lean_ctor_set(v___x_340_, 0, v___x_346_);
v___x_348_ = v___x_340_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v___x_346_);
v___x_348_ = v_reuseFailAlloc_349_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
v___y_321_ = v___x_348_;
goto v___jp_320_;
}
}
}
default: 
{
lean_object* v___x_351_; 
v___x_351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_351_, 0, v_x_306_);
lean_ctor_set(v___x_351_, 1, v_x_307_);
v___y_321_ = v___x_351_;
goto v___jp_320_;
}
}
v___jp_320_:
{
lean_object* v___x_322_; lean_object* v___x_324_; 
v___x_322_ = lean_array_fset(v_xs_x27_319_, v_j_311_, v___y_321_);
lean_dec(v_j_311_);
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 0, v___x_322_);
v___x_324_ = v___x_315_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v___x_322_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
}
}
else
{
lean_object* v_ks_354_; lean_object* v_vs_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_373_; 
v_ks_354_ = lean_ctor_get(v_x_303_, 0);
v_vs_355_ = lean_ctor_get(v_x_303_, 1);
v_isSharedCheck_373_ = !lean_is_exclusive(v_x_303_);
if (v_isSharedCheck_373_ == 0)
{
v___x_357_ = v_x_303_;
v_isShared_358_ = v_isSharedCheck_373_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_vs_355_);
lean_inc(v_ks_354_);
lean_dec(v_x_303_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_373_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_360_; 
if (v_isShared_358_ == 0)
{
v___x_360_ = v___x_357_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v_ks_354_);
lean_ctor_set(v_reuseFailAlloc_372_, 1, v_vs_355_);
v___x_360_ = v_reuseFailAlloc_372_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
lean_object* v_newNode_361_; size_t v___x_362_; uint8_t v___x_363_; 
v_newNode_361_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8___redArg(v___x_360_, v_x_306_, v_x_307_);
v___x_362_ = ((size_t)7ULL);
v___x_363_ = lean_usize_dec_le(v___x_362_, v_x_305_);
if (v___x_363_ == 0)
{
lean_object* v___x_364_; lean_object* v___x_365_; uint8_t v___x_366_; 
v___x_364_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_361_);
v___x_365_ = lean_unsigned_to_nat(4u);
v___x_366_ = lean_nat_dec_lt(v___x_364_, v___x_365_);
lean_dec(v___x_364_);
if (v___x_366_ == 0)
{
lean_object* v_ks_367_; lean_object* v_vs_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v_ks_367_ = lean_ctor_get(v_newNode_361_, 0);
lean_inc_ref(v_ks_367_);
v_vs_368_ = lean_ctor_get(v_newNode_361_, 1);
lean_inc_ref(v_vs_368_);
lean_dec_ref(v_newNode_361_);
v___x_369_ = lean_unsigned_to_nat(0u);
v___x_370_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__1);
v___x_371_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg(v_x_305_, v_ks_367_, v_vs_368_, v___x_369_, v___x_370_);
lean_dec_ref(v_vs_368_);
lean_dec_ref(v_ks_367_);
return v___x_371_;
}
else
{
return v_newNode_361_;
}
}
else
{
return v_newNode_361_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg(size_t v_depth_374_, lean_object* v_keys_375_, lean_object* v_vals_376_, lean_object* v_i_377_, lean_object* v_entries_378_){
_start:
{
lean_object* v___x_379_; uint8_t v___x_380_; 
v___x_379_ = lean_array_get_size(v_keys_375_);
v___x_380_ = lean_nat_dec_lt(v_i_377_, v___x_379_);
if (v___x_380_ == 0)
{
lean_dec(v_i_377_);
return v_entries_378_;
}
else
{
lean_object* v_k_381_; lean_object* v_v_382_; uint64_t v___x_383_; size_t v_h_384_; size_t v___x_385_; lean_object* v___x_386_; size_t v___x_387_; size_t v___x_388_; size_t v___x_389_; size_t v_h_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v_k_381_ = lean_array_fget_borrowed(v_keys_375_, v_i_377_);
v_v_382_ = lean_array_fget_borrowed(v_vals_376_, v_i_377_);
v___x_383_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_k_381_);
v_h_384_ = lean_uint64_to_usize(v___x_383_);
v___x_385_ = ((size_t)5ULL);
v___x_386_ = lean_unsigned_to_nat(1u);
v___x_387_ = ((size_t)1ULL);
v___x_388_ = lean_usize_sub(v_depth_374_, v___x_387_);
v___x_389_ = lean_usize_mul(v___x_385_, v___x_388_);
v_h_390_ = lean_usize_shift_right(v_h_384_, v___x_389_);
v___x_391_ = lean_nat_add(v_i_377_, v___x_386_);
lean_dec(v_i_377_);
lean_inc(v_v_382_);
lean_inc(v_k_381_);
v___x_392_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(v_entries_378_, v_h_390_, v_depth_374_, v_k_381_, v_v_382_);
v_i_377_ = v___x_391_;
v_entries_378_ = v___x_392_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg___boxed(lean_object* v_depth_394_, lean_object* v_keys_395_, lean_object* v_vals_396_, lean_object* v_i_397_, lean_object* v_entries_398_){
_start:
{
size_t v_depth_boxed_399_; lean_object* v_res_400_; 
v_depth_boxed_399_ = lean_unbox_usize(v_depth_394_);
lean_dec(v_depth_394_);
v_res_400_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg(v_depth_boxed_399_, v_keys_395_, v_vals_396_, v_i_397_, v_entries_398_);
lean_dec_ref(v_vals_396_);
lean_dec_ref(v_keys_395_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___boxed(lean_object* v_x_401_, lean_object* v_x_402_, lean_object* v_x_403_, lean_object* v_x_404_, lean_object* v_x_405_){
_start:
{
size_t v_x_2073__boxed_406_; size_t v_x_2074__boxed_407_; lean_object* v_res_408_; 
v_x_2073__boxed_406_ = lean_unbox_usize(v_x_402_);
lean_dec(v_x_402_);
v_x_2074__boxed_407_ = lean_unbox_usize(v_x_403_);
lean_dec(v_x_403_);
v_res_408_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(v_x_401_, v_x_2073__boxed_406_, v_x_2074__boxed_407_, v_x_404_, v_x_405_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(lean_object* v_x_409_, lean_object* v_x_410_, lean_object* v_x_411_){
_start:
{
uint64_t v___x_412_; size_t v___x_413_; size_t v___x_414_; lean_object* v___x_415_; 
v___x_412_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_x_410_);
v___x_413_ = lean_uint64_to_usize(v___x_412_);
v___x_414_ = ((size_t)1ULL);
v___x_415_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(v_x_409_, v___x_413_, v___x_414_, v_x_410_, v_x_411_);
return v___x_415_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4___redArg(lean_object* v_a_416_, lean_object* v_b_417_, lean_object* v_x_418_){
_start:
{
if (lean_obj_tag(v_x_418_) == 0)
{
lean_dec(v_b_417_);
lean_dec_ref(v_a_416_);
return v_x_418_;
}
else
{
lean_object* v_key_419_; lean_object* v_value_420_; lean_object* v_tail_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_435_; 
v_key_419_ = lean_ctor_get(v_x_418_, 0);
v_value_420_ = lean_ctor_get(v_x_418_, 1);
v_tail_421_ = lean_ctor_get(v_x_418_, 2);
v_isSharedCheck_435_ = !lean_is_exclusive(v_x_418_);
if (v_isSharedCheck_435_ == 0)
{
v___x_423_ = v_x_418_;
v_isShared_424_ = v_isSharedCheck_435_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_tail_421_);
lean_inc(v_value_420_);
lean_inc(v_key_419_);
lean_dec(v_x_418_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_435_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
size_t v___x_425_; size_t v___x_426_; uint8_t v___x_427_; 
v___x_425_ = lean_ptr_addr(v_key_419_);
v___x_426_ = lean_ptr_addr(v_a_416_);
v___x_427_ = lean_usize_dec_eq(v___x_425_, v___x_426_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; lean_object* v___x_430_; 
v___x_428_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4___redArg(v_a_416_, v_b_417_, v_tail_421_);
if (v_isShared_424_ == 0)
{
lean_ctor_set(v___x_423_, 2, v___x_428_);
v___x_430_ = v___x_423_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_key_419_);
lean_ctor_set(v_reuseFailAlloc_431_, 1, v_value_420_);
lean_ctor_set(v_reuseFailAlloc_431_, 2, v___x_428_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
return v___x_430_;
}
}
else
{
lean_object* v___x_433_; 
lean_dec(v_value_420_);
lean_dec(v_key_419_);
if (v_isShared_424_ == 0)
{
lean_ctor_set(v___x_423_, 1, v_b_417_);
lean_ctor_set(v___x_423_, 0, v_a_416_);
v___x_433_ = v___x_423_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_a_416_);
lean_ctor_set(v_reuseFailAlloc_434_, 1, v_b_417_);
lean_ctor_set(v_reuseFailAlloc_434_, 2, v_tail_421_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
return v___x_433_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6___redArg(lean_object* v_x_436_, lean_object* v_x_437_){
_start:
{
if (lean_obj_tag(v_x_437_) == 0)
{
return v_x_436_;
}
else
{
lean_object* v_key_438_; lean_object* v_value_439_; lean_object* v_tail_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_466_; 
v_key_438_ = lean_ctor_get(v_x_437_, 0);
v_value_439_ = lean_ctor_get(v_x_437_, 1);
v_tail_440_ = lean_ctor_get(v_x_437_, 2);
v_isSharedCheck_466_ = !lean_is_exclusive(v_x_437_);
if (v_isSharedCheck_466_ == 0)
{
v___x_442_ = v_x_437_;
v_isShared_443_ = v_isSharedCheck_466_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_tail_440_);
lean_inc(v_value_439_);
lean_inc(v_key_438_);
lean_dec(v_x_437_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_466_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_444_; size_t v___x_445_; size_t v___x_446_; size_t v___x_447_; uint64_t v___x_448_; uint64_t v___x_449_; uint64_t v___x_450_; uint64_t v_fold_451_; uint64_t v___x_452_; uint64_t v___x_453_; uint64_t v___x_454_; size_t v___x_455_; size_t v___x_456_; size_t v___x_457_; size_t v___x_458_; size_t v___x_459_; lean_object* v___x_460_; lean_object* v___x_462_; 
v___x_444_ = lean_array_get_size(v_x_436_);
v___x_445_ = lean_ptr_addr(v_key_438_);
v___x_446_ = ((size_t)3ULL);
v___x_447_ = lean_usize_shift_right(v___x_445_, v___x_446_);
v___x_448_ = lean_usize_to_uint64(v___x_447_);
v___x_449_ = 32ULL;
v___x_450_ = lean_uint64_shift_right(v___x_448_, v___x_449_);
v_fold_451_ = lean_uint64_xor(v___x_448_, v___x_450_);
v___x_452_ = 16ULL;
v___x_453_ = lean_uint64_shift_right(v_fold_451_, v___x_452_);
v___x_454_ = lean_uint64_xor(v_fold_451_, v___x_453_);
v___x_455_ = lean_uint64_to_usize(v___x_454_);
v___x_456_ = lean_usize_of_nat(v___x_444_);
v___x_457_ = ((size_t)1ULL);
v___x_458_ = lean_usize_sub(v___x_456_, v___x_457_);
v___x_459_ = lean_usize_land(v___x_455_, v___x_458_);
v___x_460_ = lean_array_uget_borrowed(v_x_436_, v___x_459_);
lean_inc(v___x_460_);
if (v_isShared_443_ == 0)
{
lean_ctor_set(v___x_442_, 2, v___x_460_);
v___x_462_ = v___x_442_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v_key_438_);
lean_ctor_set(v_reuseFailAlloc_465_, 1, v_value_439_);
lean_ctor_set(v_reuseFailAlloc_465_, 2, v___x_460_);
v___x_462_ = v_reuseFailAlloc_465_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
lean_object* v___x_463_; 
v___x_463_ = lean_array_uset(v_x_436_, v___x_459_, v___x_462_);
v_x_436_ = v___x_463_;
v_x_437_ = v_tail_440_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4___redArg(lean_object* v_i_467_, lean_object* v_source_468_, lean_object* v_target_469_){
_start:
{
lean_object* v___x_470_; uint8_t v___x_471_; 
v___x_470_ = lean_array_get_size(v_source_468_);
v___x_471_ = lean_nat_dec_lt(v_i_467_, v___x_470_);
if (v___x_471_ == 0)
{
lean_dec_ref(v_source_468_);
lean_dec(v_i_467_);
return v_target_469_;
}
else
{
lean_object* v_es_472_; lean_object* v___x_473_; lean_object* v_source_474_; lean_object* v_target_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v_es_472_ = lean_array_fget(v_source_468_, v_i_467_);
v___x_473_ = lean_box(0);
v_source_474_ = lean_array_fset(v_source_468_, v_i_467_, v___x_473_);
v_target_475_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6___redArg(v_target_469_, v_es_472_);
v___x_476_ = lean_unsigned_to_nat(1u);
v___x_477_ = lean_nat_add(v_i_467_, v___x_476_);
lean_dec(v_i_467_);
v_i_467_ = v___x_477_;
v_source_468_ = v_source_474_;
v_target_469_ = v_target_475_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3___redArg(lean_object* v_data_479_){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v_nbuckets_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_480_ = lean_array_get_size(v_data_479_);
v___x_481_ = lean_unsigned_to_nat(2u);
v_nbuckets_482_ = lean_nat_mul(v___x_480_, v___x_481_);
v___x_483_ = lean_unsigned_to_nat(0u);
v___x_484_ = lean_box(0);
v___x_485_ = lean_mk_array(v_nbuckets_482_, v___x_484_);
v___x_486_ = lean_array_propagate_mark(v_data_479_, v___x_485_);
v___x_487_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4___redArg(v___x_483_, v_data_479_, v___x_486_);
return v___x_487_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg(lean_object* v_a_488_, lean_object* v_x_489_){
_start:
{
if (lean_obj_tag(v_x_489_) == 0)
{
uint8_t v___x_490_; 
v___x_490_ = 0;
return v___x_490_;
}
else
{
lean_object* v_key_491_; lean_object* v_tail_492_; size_t v___x_493_; size_t v___x_494_; uint8_t v___x_495_; 
v_key_491_ = lean_ctor_get(v_x_489_, 0);
v_tail_492_ = lean_ctor_get(v_x_489_, 2);
v___x_493_ = lean_ptr_addr(v_key_491_);
v___x_494_ = lean_ptr_addr(v_a_488_);
v___x_495_ = lean_usize_dec_eq(v___x_493_, v___x_494_);
if (v___x_495_ == 0)
{
v_x_489_ = v_tail_492_;
goto _start;
}
else
{
return v___x_495_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg___boxed(lean_object* v_a_497_, lean_object* v_x_498_){
_start:
{
uint8_t v_res_499_; lean_object* v_r_500_; 
v_res_499_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg(v_a_497_, v_x_498_);
lean_dec(v_x_498_);
lean_dec_ref(v_a_497_);
v_r_500_ = lean_box(v_res_499_);
return v_r_500_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(lean_object* v_m_501_, lean_object* v_a_502_, lean_object* v_b_503_){
_start:
{
lean_object* v_size_504_; lean_object* v_buckets_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_551_; 
v_size_504_ = lean_ctor_get(v_m_501_, 0);
v_buckets_505_ = lean_ctor_get(v_m_501_, 1);
v_isSharedCheck_551_ = !lean_is_exclusive(v_m_501_);
if (v_isSharedCheck_551_ == 0)
{
v___x_507_ = v_m_501_;
v_isShared_508_ = v_isSharedCheck_551_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_buckets_505_);
lean_inc(v_size_504_);
lean_dec(v_m_501_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_551_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___x_509_; size_t v___x_510_; size_t v___x_511_; size_t v___x_512_; uint64_t v___x_513_; uint64_t v___x_514_; uint64_t v___x_515_; uint64_t v_fold_516_; uint64_t v___x_517_; uint64_t v___x_518_; uint64_t v___x_519_; size_t v___x_520_; size_t v___x_521_; size_t v___x_522_; size_t v___x_523_; size_t v___x_524_; lean_object* v_bkt_525_; uint8_t v___x_526_; 
v___x_509_ = lean_array_get_size(v_buckets_505_);
v___x_510_ = lean_ptr_addr(v_a_502_);
v___x_511_ = ((size_t)3ULL);
v___x_512_ = lean_usize_shift_right(v___x_510_, v___x_511_);
v___x_513_ = lean_usize_to_uint64(v___x_512_);
v___x_514_ = 32ULL;
v___x_515_ = lean_uint64_shift_right(v___x_513_, v___x_514_);
v_fold_516_ = lean_uint64_xor(v___x_513_, v___x_515_);
v___x_517_ = 16ULL;
v___x_518_ = lean_uint64_shift_right(v_fold_516_, v___x_517_);
v___x_519_ = lean_uint64_xor(v_fold_516_, v___x_518_);
v___x_520_ = lean_uint64_to_usize(v___x_519_);
v___x_521_ = lean_usize_of_nat(v___x_509_);
v___x_522_ = ((size_t)1ULL);
v___x_523_ = lean_usize_sub(v___x_521_, v___x_522_);
v___x_524_ = lean_usize_land(v___x_520_, v___x_523_);
v_bkt_525_ = lean_array_uget_borrowed(v_buckets_505_, v___x_524_);
v___x_526_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg(v_a_502_, v_bkt_525_);
if (v___x_526_ == 0)
{
lean_object* v___x_527_; lean_object* v_size_x27_528_; lean_object* v___x_529_; lean_object* v_buckets_x27_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; uint8_t v___x_536_; 
v___x_527_ = lean_unsigned_to_nat(1u);
v_size_x27_528_ = lean_nat_add(v_size_504_, v___x_527_);
lean_dec(v_size_504_);
lean_inc(v_bkt_525_);
v___x_529_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_529_, 0, v_a_502_);
lean_ctor_set(v___x_529_, 1, v_b_503_);
lean_ctor_set(v___x_529_, 2, v_bkt_525_);
v_buckets_x27_530_ = lean_array_uset(v_buckets_505_, v___x_524_, v___x_529_);
v___x_531_ = lean_unsigned_to_nat(4u);
v___x_532_ = lean_nat_mul(v_size_x27_528_, v___x_531_);
v___x_533_ = lean_unsigned_to_nat(3u);
v___x_534_ = lean_nat_div(v___x_532_, v___x_533_);
lean_dec(v___x_532_);
v___x_535_ = lean_array_get_size(v_buckets_x27_530_);
v___x_536_ = lean_nat_dec_le(v___x_534_, v___x_535_);
lean_dec(v___x_534_);
if (v___x_536_ == 0)
{
lean_object* v_val_537_; lean_object* v___x_539_; 
v_val_537_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3___redArg(v_buckets_x27_530_);
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 1, v_val_537_);
lean_ctor_set(v___x_507_, 0, v_size_x27_528_);
v___x_539_ = v___x_507_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_size_x27_528_);
lean_ctor_set(v_reuseFailAlloc_540_, 1, v_val_537_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
else
{
lean_object* v___x_542_; 
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 1, v_buckets_x27_530_);
lean_ctor_set(v___x_507_, 0, v_size_x27_528_);
v___x_542_ = v___x_507_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_size_x27_528_);
lean_ctor_set(v_reuseFailAlloc_543_, 1, v_buckets_x27_530_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
}
else
{
lean_object* v___x_544_; lean_object* v_buckets_x27_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_549_; 
lean_inc(v_bkt_525_);
v___x_544_ = lean_box(0);
v_buckets_x27_545_ = lean_array_uset(v_buckets_505_, v___x_524_, v___x_544_);
v___x_546_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4___redArg(v_a_502_, v_b_503_, v_bkt_525_);
v___x_547_ = lean_array_uset(v_buckets_x27_545_, v___x_524_, v___x_546_);
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 1, v___x_547_);
v___x_549_ = v___x_507_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v_size_504_);
lean_ctor_set(v_reuseFailAlloc_550_, 1, v___x_547_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
}
}
static size_t _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0(void){
_start:
{
lean_object* v___x_552_; size_t v___x_553_; 
v___x_552_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_553_ = lean_ptr_addr(v___x_552_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(lean_object* v_e_554_, lean_object* v_r_555_, lean_object* v_a_556_){
_start:
{
lean_object* v_map_557_; lean_object* v_set_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_582_; 
v_map_557_ = lean_ctor_get(v_a_556_, 0);
v_set_558_ = lean_ctor_get(v_a_556_, 1);
v_isSharedCheck_582_ = !lean_is_exclusive(v_a_556_);
if (v_isSharedCheck_582_ == 0)
{
v___x_560_ = v_a_556_;
v_isShared_561_ = v_isSharedCheck_582_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_set_558_);
lean_inc(v_map_557_);
lean_dec(v_a_556_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_582_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_562_; uint64_t v___x_563_; size_t v___x_564_; lean_object* v___x_565_; size_t v___x_566_; size_t v___x_567_; uint8_t v___x_568_; 
v___x_562_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_563_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_r_555_);
v___x_564_ = lean_uint64_to_usize(v___x_563_);
v___x_565_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_558_, v___x_564_, v_r_555_, v___x_562_);
v___x_566_ = lean_ptr_addr(v___x_565_);
v___x_567_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_568_ = lean_usize_dec_eq(v___x_566_, v___x_567_);
if (v___x_568_ == 0)
{
lean_object* v___x_569_; lean_object* v___x_571_; 
lean_dec_ref(v_r_555_);
lean_inc_ref(v___x_565_);
v___x_569_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(v_map_557_, v_e_554_, v___x_565_);
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 0, v___x_569_);
v___x_571_ = v___x_560_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v___x_569_);
lean_ctor_set(v_reuseFailAlloc_573_, 1, v_set_558_);
v___x_571_ = v_reuseFailAlloc_573_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
lean_object* v___x_572_; 
v___x_572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_572_, 0, v___x_565_);
lean_ctor_set(v___x_572_, 1, v___x_571_);
return v___x_572_;
}
}
else
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_579_; 
lean_dec_ref(v___x_565_);
lean_inc_ref_n(v_r_555_, 4);
v___x_574_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(v_map_557_, v_e_554_, v_r_555_);
v___x_575_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(v___x_574_, v_r_555_, v_r_555_);
v___x_576_ = lean_box(0);
v___x_577_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_set_558_, v_r_555_, v___x_576_);
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 1, v___x_577_);
lean_ctor_set(v___x_560_, 0, v___x_575_);
v___x_579_ = v___x_560_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v___x_575_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v___x_577_);
v___x_579_ = v_reuseFailAlloc_581_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
lean_object* v___x_580_; 
v___x_580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_580_, 0, v_r_555_);
lean_ctor_set(v___x_580_, 1, v___x_579_);
return v___x_580_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(lean_object* v_e_583_, lean_object* v_r_584_, lean_object* v_a_585_, lean_object* v_a_586_){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_583_, v_r_584_, v_a_586_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___boxed(lean_object* v_e_588_, lean_object* v_r_589_, lean_object* v_a_590_, lean_object* v_a_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(v_e_588_, v_r_589_, v_a_590_, v_a_591_);
lean_dec_ref(v_a_590_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0(lean_object* v_00_u03b2_593_, lean_object* v_x_594_, size_t v_x_595_, lean_object* v_x_596_, lean_object* v_x_597_){
_start:
{
lean_object* v___x_598_; 
v___x_598_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_x_594_, v_x_595_, v_x_596_, v_x_597_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___boxed(lean_object* v_00_u03b2_599_, lean_object* v_x_600_, lean_object* v_x_601_, lean_object* v_x_602_, lean_object* v_x_603_){
_start:
{
size_t v_x_2528__boxed_604_; lean_object* v_res_605_; 
v_x_2528__boxed_604_ = lean_unbox_usize(v_x_601_);
lean_dec(v_x_601_);
v_res_605_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0(v_00_u03b2_599_, v_x_600_, v_x_2528__boxed_604_, v_x_602_, v_x_603_);
lean_dec_ref(v_x_603_);
lean_dec_ref(v_x_602_);
lean_dec_ref(v_x_600_);
return v_res_605_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1(lean_object* v_00_u03b2_606_, lean_object* v_m_607_, lean_object* v_a_608_, lean_object* v_b_609_){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(v_m_607_, v_a_608_, v_b_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2(lean_object* v_00_u03b2_611_, lean_object* v_x_612_, lean_object* v_x_613_, lean_object* v_x_614_){
_start:
{
lean_object* v___x_615_; 
v___x_615_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_x_612_, v_x_613_, v_x_614_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0(lean_object* v_00_u03b2_616_, lean_object* v_keys_617_, lean_object* v_vals_618_, lean_object* v_heq_619_, lean_object* v_i_620_, lean_object* v_k_621_, lean_object* v_k_u2080_622_){
_start:
{
lean_object* v___x_623_; 
v___x_623_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg(v_keys_617_, v_i_620_, v_k_621_, v_k_u2080_622_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___boxed(lean_object* v_00_u03b2_624_, lean_object* v_keys_625_, lean_object* v_vals_626_, lean_object* v_heq_627_, lean_object* v_i_628_, lean_object* v_k_629_, lean_object* v_k_u2080_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0(v_00_u03b2_624_, v_keys_625_, v_vals_626_, v_heq_627_, v_i_628_, v_k_629_, v_k_u2080_630_);
lean_dec_ref(v_k_u2080_630_);
lean_dec_ref(v_k_629_);
lean_dec_ref(v_vals_626_);
lean_dec_ref(v_keys_625_);
return v_res_631_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2(lean_object* v_00_u03b2_632_, lean_object* v_a_633_, lean_object* v_x_634_){
_start:
{
uint8_t v___x_635_; 
v___x_635_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg(v_a_633_, v_x_634_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___boxed(lean_object* v_00_u03b2_636_, lean_object* v_a_637_, lean_object* v_x_638_){
_start:
{
uint8_t v_res_639_; lean_object* v_r_640_; 
v_res_639_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2(v_00_u03b2_636_, v_a_637_, v_x_638_);
lean_dec(v_x_638_);
lean_dec_ref(v_a_637_);
v_r_640_ = lean_box(v_res_639_);
return v_r_640_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3(lean_object* v_00_u03b2_641_, lean_object* v_data_642_){
_start:
{
lean_object* v___x_643_; 
v___x_643_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3___redArg(v_data_642_);
return v___x_643_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4(lean_object* v_00_u03b2_644_, lean_object* v_a_645_, lean_object* v_b_646_, lean_object* v_x_647_){
_start:
{
lean_object* v___x_648_; 
v___x_648_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4___redArg(v_a_645_, v_b_646_, v_x_647_);
return v___x_648_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6(lean_object* v_00_u03b2_649_, lean_object* v_x_650_, size_t v_x_651_, size_t v_x_652_, lean_object* v_x_653_, lean_object* v_x_654_){
_start:
{
lean_object* v___x_655_; 
v___x_655_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(v_x_650_, v_x_651_, v_x_652_, v_x_653_, v_x_654_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___boxed(lean_object* v_00_u03b2_656_, lean_object* v_x_657_, lean_object* v_x_658_, lean_object* v_x_659_, lean_object* v_x_660_, lean_object* v_x_661_){
_start:
{
size_t v_x_2565__boxed_662_; size_t v_x_2566__boxed_663_; lean_object* v_res_664_; 
v_x_2565__boxed_662_ = lean_unbox_usize(v_x_658_);
lean_dec(v_x_658_);
v_x_2566__boxed_663_ = lean_unbox_usize(v_x_659_);
lean_dec(v_x_659_);
v_res_664_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6(v_00_u03b2_656_, v_x_657_, v_x_2565__boxed_662_, v_x_2566__boxed_663_, v_x_660_, v_x_661_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_665_, lean_object* v_i_666_, lean_object* v_source_667_, lean_object* v_target_668_){
_start:
{
lean_object* v___x_669_; 
v___x_669_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4___redArg(v_i_666_, v_source_667_, v_target_668_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8(lean_object* v_00_u03b2_670_, lean_object* v_n_671_, lean_object* v_k_672_, lean_object* v_v_673_){
_start:
{
lean_object* v___x_674_; 
v___x_674_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8___redArg(v_n_671_, v_k_672_, v_v_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9(lean_object* v_00_u03b2_675_, size_t v_depth_676_, lean_object* v_keys_677_, lean_object* v_vals_678_, lean_object* v_heq_679_, lean_object* v_i_680_, lean_object* v_entries_681_){
_start:
{
lean_object* v___x_682_; 
v___x_682_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg(v_depth_676_, v_keys_677_, v_vals_678_, v_i_680_, v_entries_681_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___boxed(lean_object* v_00_u03b2_683_, lean_object* v_depth_684_, lean_object* v_keys_685_, lean_object* v_vals_686_, lean_object* v_heq_687_, lean_object* v_i_688_, lean_object* v_entries_689_){
_start:
{
size_t v_depth_boxed_690_; lean_object* v_res_691_; 
v_depth_boxed_690_ = lean_unbox_usize(v_depth_684_);
lean_dec(v_depth_684_);
v_res_691_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9(v_00_u03b2_683_, v_depth_boxed_690_, v_keys_685_, v_vals_686_, v_heq_687_, v_i_688_, v_entries_689_);
lean_dec_ref(v_vals_686_);
lean_dec_ref(v_keys_685_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6(lean_object* v_00_u03b2_692_, lean_object* v_x_693_, lean_object* v_x_694_){
_start:
{
lean_object* v___x_695_; 
v___x_695_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6___redArg(v_x_693_, v_x_694_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10(lean_object* v_00_u03b2_696_, lean_object* v_x_697_, lean_object* v_x_698_, lean_object* v_x_699_, lean_object* v_x_700_){
_start:
{
lean_object* v___x_701_; 
v___x_701_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10___redArg(v_x_697_, v_x_698_, v_x_699_, v_x_700_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit(lean_object* v_e_704_, lean_object* v_k_705_, lean_object* v_a_706_, lean_object* v_a_707_){
_start:
{
lean_object* v_map_708_; lean_object* v_set_709_; lean_object* v___f_710_; lean_object* v___f_711_; lean_object* v___x_712_; 
v_map_708_ = lean_ctor_get(v_a_707_, 0);
v_set_709_ = lean_ctor_get(v_a_707_, 1);
v___f_710_ = ((lean_object*)(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__0));
v___f_711_ = ((lean_object*)(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__1));
lean_inc_ref(v_e_704_);
v___x_712_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_710_, v___f_711_, v_map_708_, v_e_704_);
if (lean_obj_tag(v___x_712_) == 1)
{
lean_object* v_val_713_; lean_object* v___x_714_; 
lean_dec_ref(v_k_705_);
lean_dec_ref(v_e_704_);
v_val_713_ = lean_ctor_get(v___x_712_, 0);
lean_inc(v_val_713_);
lean_dec_ref_known(v___x_712_, 1);
v___x_714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_714_, 0, v_val_713_);
lean_ctor_set(v___x_714_, 1, v_a_707_);
return v___x_714_;
}
else
{
lean_object* v___f_715_; lean_object* v___x_716_; uint64_t v___x_717_; size_t v___x_718_; lean_object* v___x_719_; size_t v___x_720_; size_t v___x_721_; uint8_t v___x_722_; 
lean_dec(v___x_712_);
v___f_715_ = ((lean_object*)(l_Lean_Meta_Sym_instBEqAlphaKey___closed__0));
v___x_716_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_717_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_704_);
v___x_718_ = lean_uint64_to_usize(v___x_717_);
lean_inc_ref(v_e_704_);
lean_inc_ref(v_set_709_);
v___x_719_ = l_Lean_PersistentHashMap_findKeyDAux___redArg(v___f_715_, v_set_709_, v___x_718_, v_e_704_, v___x_716_);
v___x_720_ = lean_ptr_addr(v___x_719_);
v___x_721_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_722_ = lean_usize_dec_eq(v___x_720_, v___x_721_);
if (v___x_722_ == 0)
{
lean_object* v___x_723_; 
lean_dec_ref(v_k_705_);
lean_dec_ref(v_e_704_);
v___x_723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_723_, 0, v___x_719_);
lean_ctor_set(v___x_723_, 1, v_a_707_);
return v___x_723_;
}
else
{
lean_object* v___x_724_; 
lean_dec(v___x_719_);
lean_inc_ref(v_a_706_);
v___x_724_ = lean_apply_2(v_k_705_, v_a_706_, v_a_707_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v_a_725_; lean_object* v_a_726_; lean_object* v___x_727_; 
v_a_725_ = lean_ctor_get(v___x_724_, 0);
lean_inc(v_a_725_);
v_a_726_ = lean_ctor_get(v___x_724_, 1);
lean_inc(v_a_726_);
lean_dec_ref_known(v___x_724_, 2);
v___x_727_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_704_, v_a_725_, v_a_726_);
return v___x_727_;
}
else
{
lean_dec_ref(v_e_704_);
return v___x_724_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___boxed(lean_object* v_e_728_, lean_object* v_k_729_, lean_object* v_a_730_, lean_object* v_a_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit(v_e_728_, v_k_729_, v_a_730_, v_a_731_);
lean_dec_ref(v_a_730_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg(lean_object* v_a_733_, lean_object* v_x_734_){
_start:
{
if (lean_obj_tag(v_x_734_) == 0)
{
lean_object* v___x_735_; 
v___x_735_ = lean_box(0);
return v___x_735_;
}
else
{
lean_object* v_key_736_; lean_object* v_value_737_; lean_object* v_tail_738_; size_t v___x_739_; size_t v___x_740_; uint8_t v___x_741_; 
v_key_736_ = lean_ctor_get(v_x_734_, 0);
v_value_737_ = lean_ctor_get(v_x_734_, 1);
v_tail_738_ = lean_ctor_get(v_x_734_, 2);
v___x_739_ = lean_ptr_addr(v_key_736_);
v___x_740_ = lean_ptr_addr(v_a_733_);
v___x_741_ = lean_usize_dec_eq(v___x_739_, v___x_740_);
if (v___x_741_ == 0)
{
v_x_734_ = v_tail_738_;
goto _start;
}
else
{
lean_object* v___x_743_; 
lean_inc(v_value_737_);
v___x_743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_743_, 0, v_value_737_);
return v___x_743_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg___boxed(lean_object* v_a_744_, lean_object* v_x_745_){
_start:
{
lean_object* v_res_746_; 
v_res_746_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg(v_a_744_, v_x_745_);
lean_dec(v_x_745_);
lean_dec_ref(v_a_744_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(lean_object* v_m_747_, lean_object* v_a_748_){
_start:
{
lean_object* v_buckets_749_; lean_object* v___x_750_; size_t v___x_751_; size_t v___x_752_; size_t v___x_753_; uint64_t v___x_754_; uint64_t v___x_755_; uint64_t v___x_756_; uint64_t v_fold_757_; uint64_t v___x_758_; uint64_t v___x_759_; uint64_t v___x_760_; size_t v___x_761_; size_t v___x_762_; size_t v___x_763_; size_t v___x_764_; size_t v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v_buckets_749_ = lean_ctor_get(v_m_747_, 1);
v___x_750_ = lean_array_get_size(v_buckets_749_);
v___x_751_ = lean_ptr_addr(v_a_748_);
v___x_752_ = ((size_t)3ULL);
v___x_753_ = lean_usize_shift_right(v___x_751_, v___x_752_);
v___x_754_ = lean_usize_to_uint64(v___x_753_);
v___x_755_ = 32ULL;
v___x_756_ = lean_uint64_shift_right(v___x_754_, v___x_755_);
v_fold_757_ = lean_uint64_xor(v___x_754_, v___x_756_);
v___x_758_ = 16ULL;
v___x_759_ = lean_uint64_shift_right(v_fold_757_, v___x_758_);
v___x_760_ = lean_uint64_xor(v_fold_757_, v___x_759_);
v___x_761_ = lean_uint64_to_usize(v___x_760_);
v___x_762_ = lean_usize_of_nat(v___x_750_);
v___x_763_ = ((size_t)1ULL);
v___x_764_ = lean_usize_sub(v___x_762_, v___x_763_);
v___x_765_ = lean_usize_land(v___x_761_, v___x_764_);
v___x_766_ = lean_array_uget_borrowed(v_buckets_749_, v___x_765_);
v___x_767_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg(v_a_748_, v___x_766_);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg___boxed(lean_object* v_m_768_, lean_object* v_a_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_m_768_, v_a_769_);
lean_dec_ref(v_a_769_);
lean_dec_ref(v_m_768_);
return v_res_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_771_, lean_object* v_vals_772_, lean_object* v_i_773_, lean_object* v_k_774_){
_start:
{
lean_object* v___x_775_; uint8_t v___x_776_; 
v___x_775_ = lean_array_get_size(v_keys_771_);
v___x_776_ = lean_nat_dec_lt(v_i_773_, v___x_775_);
if (v___x_776_ == 0)
{
lean_object* v___x_777_; 
lean_dec(v_i_773_);
v___x_777_ = lean_box(0);
return v___x_777_;
}
else
{
lean_object* v_k_x27_778_; uint8_t v___x_779_; 
v_k_x27_778_ = lean_array_fget_borrowed(v_keys_771_, v_i_773_);
v___x_779_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_k_774_, v_k_x27_778_);
if (v___x_779_ == 0)
{
lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_780_ = lean_unsigned_to_nat(1u);
v___x_781_ = lean_nat_add(v_i_773_, v___x_780_);
lean_dec(v_i_773_);
v_i_773_ = v___x_781_;
goto _start;
}
else
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_783_ = lean_array_fget_borrowed(v_vals_772_, v_i_773_);
lean_dec(v_i_773_);
lean_inc(v___x_783_);
lean_inc(v_k_x27_778_);
v___x_784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_784_, 0, v_k_x27_778_);
lean_ctor_set(v___x_784_, 1, v___x_783_);
v___x_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
return v___x_785_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_786_, lean_object* v_vals_787_, lean_object* v_i_788_, lean_object* v_k_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___redArg(v_keys_786_, v_vals_787_, v_i_788_, v_k_789_);
lean_dec_ref(v_k_789_);
lean_dec_ref(v_vals_787_);
lean_dec_ref(v_keys_786_);
return v_res_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg(lean_object* v_x_791_, size_t v_x_792_, lean_object* v_x_793_){
_start:
{
if (lean_obj_tag(v_x_791_) == 0)
{
lean_object* v_es_794_; lean_object* v___x_795_; size_t v___x_796_; size_t v___x_797_; lean_object* v_j_798_; lean_object* v___x_799_; 
v_es_794_ = lean_ctor_get(v_x_791_, 0);
v___x_795_ = lean_box(2);
v___x_796_ = ((size_t)31ULL);
v___x_797_ = lean_usize_land(v_x_792_, v___x_796_);
v_j_798_ = lean_usize_to_nat(v___x_797_);
v___x_799_ = lean_array_get_borrowed(v___x_795_, v_es_794_, v_j_798_);
lean_dec(v_j_798_);
switch(lean_obj_tag(v___x_799_))
{
case 0:
{
lean_object* v_key_800_; lean_object* v_val_801_; uint8_t v___x_802_; 
v_key_800_ = lean_ctor_get(v___x_799_, 0);
v_val_801_ = lean_ctor_get(v___x_799_, 1);
v___x_802_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_793_, v_key_800_);
if (v___x_802_ == 0)
{
lean_object* v___x_803_; 
v___x_803_ = lean_box(0);
return v___x_803_;
}
else
{
lean_object* v___x_804_; lean_object* v___x_805_; 
lean_inc(v_val_801_);
lean_inc(v_key_800_);
v___x_804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_804_, 0, v_key_800_);
lean_ctor_set(v___x_804_, 1, v_val_801_);
v___x_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_805_, 0, v___x_804_);
return v___x_805_;
}
}
case 1:
{
lean_object* v_node_806_; size_t v___x_807_; size_t v___x_808_; 
v_node_806_ = lean_ctor_get(v___x_799_, 0);
v___x_807_ = ((size_t)5ULL);
v___x_808_ = lean_usize_shift_right(v_x_792_, v___x_807_);
v_x_791_ = v_node_806_;
v_x_792_ = v___x_808_;
goto _start;
}
default: 
{
lean_object* v___x_810_; 
v___x_810_ = lean_box(0);
return v___x_810_;
}
}
}
else
{
lean_object* v_ks_811_; lean_object* v_vs_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v_ks_811_ = lean_ctor_get(v_x_791_, 0);
v_vs_812_ = lean_ctor_get(v_x_791_, 1);
v___x_813_ = lean_unsigned_to_nat(0u);
v___x_814_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___redArg(v_ks_811_, v_vs_812_, v___x_813_, v_x_793_);
return v___x_814_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg___boxed(lean_object* v_x_815_, lean_object* v_x_816_, lean_object* v_x_817_){
_start:
{
size_t v_x_11088__boxed_818_; lean_object* v_res_819_; 
v_x_11088__boxed_818_ = lean_unbox_usize(v_x_816_);
lean_dec(v_x_816_);
v_res_819_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg(v_x_815_, v_x_11088__boxed_818_, v_x_817_);
lean_dec_ref(v_x_817_);
lean_dec_ref(v_x_815_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(lean_object* v_x_820_, lean_object* v_x_821_){
_start:
{
uint64_t v___x_822_; size_t v___x_823_; lean_object* v___x_824_; 
v___x_822_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_x_821_);
v___x_823_ = lean_uint64_to_usize(v___x_822_);
v___x_824_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg(v_x_820_, v___x_823_, v_x_821_);
return v___x_824_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg___boxed(lean_object* v_x_825_, lean_object* v_x_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(v_x_825_, v_x_826_);
lean_dec_ref(v_x_826_);
lean_dec_ref(v_x_825_);
return v_res_827_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(lean_object* v_e_828_, lean_object* v_a_829_, lean_object* v_a_830_){
_start:
{
lean_object* v___y_832_; lean_object* v___y_837_; lean_object* v___y_842_; lean_object* v___y_847_; 
switch(lean_obj_tag(v_e_828_))
{
case 4:
{
lean_object* v_declName_851_; lean_object* v_map_852_; lean_object* v_set_853_; lean_object* v___x_854_; 
v_declName_851_ = lean_ctor_get(v_e_828_, 0);
v_map_852_ = lean_ctor_get(v_a_830_, 0);
v_set_853_ = lean_ctor_get(v_a_830_, 1);
v___x_854_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(v_set_853_, v_e_828_);
if (lean_obj_tag(v___x_854_) == 0)
{
uint8_t v___x_855_; 
lean_inc(v_declName_851_);
lean_inc_ref(v_a_829_);
v___x_855_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_isReducible(v_a_829_, v_declName_851_);
if (v___x_855_ == 0)
{
lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_865_; 
lean_inc_ref(v_set_853_);
lean_inc_ref(v_map_852_);
v_isSharedCheck_865_ = !lean_is_exclusive(v_a_830_);
if (v_isSharedCheck_865_ == 0)
{
lean_object* v_unused_866_; lean_object* v_unused_867_; 
v_unused_866_ = lean_ctor_get(v_a_830_, 1);
lean_dec(v_unused_866_);
v_unused_867_ = lean_ctor_get(v_a_830_, 0);
lean_dec(v_unused_867_);
v___x_857_ = v_a_830_;
v_isShared_858_ = v_isSharedCheck_865_;
goto v_resetjp_856_;
}
else
{
lean_dec(v_a_830_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_865_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_862_; 
v___x_859_ = lean_box(0);
lean_inc_ref(v_e_828_);
v___x_860_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_set_853_, v_e_828_, v___x_859_);
if (v_isShared_858_ == 0)
{
lean_ctor_set(v___x_857_, 1, v___x_860_);
v___x_862_ = v___x_857_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_map_852_);
lean_ctor_set(v_reuseFailAlloc_864_, 1, v___x_860_);
v___x_862_ = v_reuseFailAlloc_864_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
lean_object* v___x_863_; 
v___x_863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_863_, 0, v_e_828_);
lean_ctor_set(v___x_863_, 1, v___x_862_);
return v___x_863_;
}
}
}
else
{
lean_object* v___x_868_; lean_object* v___x_869_; 
lean_dec_ref_known(v_e_828_, 2);
v___x_868_ = lean_box(0);
v___x_869_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_869_, 0, v___x_868_);
lean_ctor_set(v___x_869_, 1, v_a_830_);
return v___x_869_;
}
}
else
{
lean_object* v_val_870_; lean_object* v_fst_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_878_; 
lean_dec_ref_known(v_e_828_, 2);
v_val_870_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_val_870_);
lean_dec_ref_known(v___x_854_, 1);
v_fst_871_ = lean_ctor_get(v_val_870_, 0);
v_isSharedCheck_878_ = !lean_is_exclusive(v_val_870_);
if (v_isSharedCheck_878_ == 0)
{
lean_object* v_unused_879_; 
v_unused_879_ = lean_ctor_get(v_val_870_, 1);
lean_dec(v_unused_879_);
v___x_873_ = v_val_870_;
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_fst_871_);
lean_dec(v_val_870_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v___x_876_; 
if (v_isShared_874_ == 0)
{
lean_ctor_set(v___x_873_, 1, v_a_830_);
v___x_876_ = v___x_873_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_fst_871_);
lean_ctor_set(v_reuseFailAlloc_877_, 1, v_a_830_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
return v___x_876_;
}
}
}
}
case 5:
{
lean_object* v_fn_880_; lean_object* v_arg_881_; lean_object* v_map_882_; lean_object* v_set_883_; lean_object* v___x_884_; 
v_fn_880_ = lean_ctor_get(v_e_828_, 0);
v_arg_881_ = lean_ctor_get(v_e_828_, 1);
v_map_882_ = lean_ctor_get(v_a_830_, 0);
v_set_883_ = lean_ctor_get(v_a_830_, 1);
v___x_884_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_map_882_, v_e_828_);
if (lean_obj_tag(v___x_884_) == 1)
{
lean_object* v_val_885_; lean_object* v___x_886_; 
lean_dec_ref_known(v_e_828_, 2);
v_val_885_ = lean_ctor_get(v___x_884_, 0);
lean_inc(v_val_885_);
lean_dec_ref_known(v___x_884_, 1);
v___x_886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_886_, 0, v_val_885_);
lean_ctor_set(v___x_886_, 1, v_a_830_);
return v___x_886_;
}
else
{
lean_object* v___x_887_; uint64_t v___x_888_; size_t v___x_889_; lean_object* v___x_890_; size_t v___x_891_; size_t v___x_892_; uint8_t v___x_893_; 
lean_dec(v___x_884_);
v___x_887_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_888_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_828_);
v___x_889_ = lean_uint64_to_usize(v___x_888_);
v___x_890_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_883_, v___x_889_, v_e_828_, v___x_887_);
v___x_891_ = lean_ptr_addr(v___x_890_);
v___x_892_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_893_ = lean_usize_dec_eq(v___x_891_, v___x_892_);
if (v___x_893_ == 0)
{
lean_object* v___x_894_; 
lean_dec_ref_known(v_e_828_, 2);
v___x_894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_894_, 0, v___x_890_);
lean_ctor_set(v___x_894_, 1, v_a_830_);
return v___x_894_;
}
else
{
lean_object* v___x_895_; 
lean_dec_ref(v___x_890_);
lean_inc_ref(v_fn_880_);
v___x_895_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_fn_880_, v_a_829_, v_a_830_);
if (lean_obj_tag(v___x_895_) == 0)
{
lean_object* v_a_896_; lean_object* v_a_897_; lean_object* v___x_898_; 
v_a_896_ = lean_ctor_get(v___x_895_, 0);
lean_inc(v_a_896_);
v_a_897_ = lean_ctor_get(v___x_895_, 1);
lean_inc(v_a_897_);
lean_dec_ref_known(v___x_895_, 2);
lean_inc_ref(v_arg_881_);
v___x_898_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_arg_881_, v_a_829_, v_a_897_);
if (lean_obj_tag(v___x_898_) == 0)
{
lean_object* v_a_899_; lean_object* v_a_900_; size_t v___x_901_; size_t v___x_902_; uint8_t v___x_903_; 
v_a_899_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_a_899_);
v_a_900_ = lean_ctor_get(v___x_898_, 1);
lean_inc(v_a_900_);
lean_dec_ref_known(v___x_898_, 2);
v___x_901_ = lean_ptr_addr(v_fn_880_);
v___x_902_ = lean_ptr_addr(v_a_896_);
v___x_903_ = lean_usize_dec_eq(v___x_901_, v___x_902_);
if (v___x_903_ == 0)
{
lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_904_ = l_Lean_Expr_app___override(v_a_896_, v_a_899_);
v___x_905_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_904_, v_a_900_);
return v___x_905_;
}
else
{
size_t v___x_906_; size_t v___x_907_; uint8_t v___x_908_; 
v___x_906_ = lean_ptr_addr(v_arg_881_);
v___x_907_ = lean_ptr_addr(v_a_899_);
v___x_908_ = lean_usize_dec_eq(v___x_906_, v___x_907_);
if (v___x_908_ == 0)
{
lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_909_ = l_Lean_Expr_app___override(v_a_896_, v_a_899_);
v___x_910_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_909_, v_a_900_);
return v___x_910_;
}
else
{
lean_object* v___x_911_; 
lean_dec(v_a_899_);
lean_dec(v_a_896_);
lean_inc_ref(v_e_828_);
v___x_911_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v_e_828_, v_a_900_);
return v___x_911_;
}
}
}
else
{
lean_dec(v_a_896_);
v___y_832_ = v___x_898_;
goto v___jp_831_;
}
}
else
{
v___y_832_ = v___x_895_;
goto v___jp_831_;
}
}
}
}
case 6:
{
lean_object* v_binderName_912_; lean_object* v_binderType_913_; lean_object* v_body_914_; uint8_t v_binderInfo_915_; lean_object* v_map_916_; lean_object* v_set_917_; lean_object* v___x_918_; 
v_binderName_912_ = lean_ctor_get(v_e_828_, 0);
v_binderType_913_ = lean_ctor_get(v_e_828_, 1);
v_body_914_ = lean_ctor_get(v_e_828_, 2);
v_binderInfo_915_ = lean_ctor_get_uint8(v_e_828_, sizeof(void*)*3 + 8);
v_map_916_ = lean_ctor_get(v_a_830_, 0);
v_set_917_ = lean_ctor_get(v_a_830_, 1);
v___x_918_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_map_916_, v_e_828_);
if (lean_obj_tag(v___x_918_) == 1)
{
lean_object* v_val_919_; lean_object* v___x_920_; 
lean_dec_ref_known(v_e_828_, 3);
v_val_919_ = lean_ctor_get(v___x_918_, 0);
lean_inc(v_val_919_);
lean_dec_ref_known(v___x_918_, 1);
v___x_920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_920_, 0, v_val_919_);
lean_ctor_set(v___x_920_, 1, v_a_830_);
return v___x_920_;
}
else
{
lean_object* v___x_921_; uint64_t v___x_922_; size_t v___x_923_; lean_object* v___x_924_; size_t v___x_925_; size_t v___x_926_; uint8_t v___x_927_; 
lean_dec(v___x_918_);
v___x_921_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_922_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_828_);
v___x_923_ = lean_uint64_to_usize(v___x_922_);
v___x_924_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_917_, v___x_923_, v_e_828_, v___x_921_);
v___x_925_ = lean_ptr_addr(v___x_924_);
v___x_926_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_927_ = lean_usize_dec_eq(v___x_925_, v___x_926_);
if (v___x_927_ == 0)
{
lean_object* v___x_928_; 
lean_dec_ref_known(v_e_828_, 3);
v___x_928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_928_, 0, v___x_924_);
lean_ctor_set(v___x_928_, 1, v_a_830_);
return v___x_928_;
}
else
{
lean_object* v___x_929_; 
lean_dec_ref(v___x_924_);
lean_inc_ref(v_binderType_913_);
v___x_929_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_binderType_913_, v_a_829_, v_a_830_);
if (lean_obj_tag(v___x_929_) == 0)
{
lean_object* v_a_930_; lean_object* v_a_931_; lean_object* v___x_932_; 
v_a_930_ = lean_ctor_get(v___x_929_, 0);
lean_inc(v_a_930_);
v_a_931_ = lean_ctor_get(v___x_929_, 1);
lean_inc(v_a_931_);
lean_dec_ref_known(v___x_929_, 2);
lean_inc_ref(v_body_914_);
v___x_932_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_body_914_, v_a_829_, v_a_931_);
if (lean_obj_tag(v___x_932_) == 0)
{
lean_object* v_a_933_; lean_object* v_a_934_; size_t v___x_935_; size_t v___x_936_; uint8_t v___x_937_; 
v_a_933_ = lean_ctor_get(v___x_932_, 0);
lean_inc(v_a_933_);
v_a_934_ = lean_ctor_get(v___x_932_, 1);
lean_inc(v_a_934_);
lean_dec_ref_known(v___x_932_, 2);
v___x_935_ = lean_ptr_addr(v_binderType_913_);
v___x_936_ = lean_ptr_addr(v_a_930_);
v___x_937_ = lean_usize_dec_eq(v___x_935_, v___x_936_);
if (v___x_937_ == 0)
{
lean_object* v___x_938_; lean_object* v___x_939_; 
lean_inc(v_binderName_912_);
v___x_938_ = l_Lean_Expr_lam___override(v_binderName_912_, v_a_930_, v_a_933_, v_binderInfo_915_);
v___x_939_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_938_, v_a_934_);
return v___x_939_;
}
else
{
size_t v___x_940_; size_t v___x_941_; uint8_t v___x_942_; 
v___x_940_ = lean_ptr_addr(v_body_914_);
v___x_941_ = lean_ptr_addr(v_a_933_);
v___x_942_ = lean_usize_dec_eq(v___x_940_, v___x_941_);
if (v___x_942_ == 0)
{
lean_object* v___x_943_; lean_object* v___x_944_; 
lean_inc(v_binderName_912_);
v___x_943_ = l_Lean_Expr_lam___override(v_binderName_912_, v_a_930_, v_a_933_, v_binderInfo_915_);
v___x_944_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_943_, v_a_934_);
return v___x_944_;
}
else
{
uint8_t v___x_945_; 
v___x_945_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_915_, v_binderInfo_915_);
if (v___x_945_ == 0)
{
lean_object* v___x_946_; lean_object* v___x_947_; 
lean_inc(v_binderName_912_);
v___x_946_ = l_Lean_Expr_lam___override(v_binderName_912_, v_a_930_, v_a_933_, v_binderInfo_915_);
v___x_947_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_946_, v_a_934_);
return v___x_947_;
}
else
{
lean_object* v___x_948_; 
lean_dec(v_a_933_);
lean_dec(v_a_930_);
lean_inc_ref(v_e_828_);
v___x_948_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v_e_828_, v_a_934_);
return v___x_948_;
}
}
}
}
else
{
lean_dec(v_a_930_);
v___y_837_ = v___x_932_;
goto v___jp_836_;
}
}
else
{
v___y_837_ = v___x_929_;
goto v___jp_836_;
}
}
}
}
case 7:
{
lean_object* v_binderName_949_; lean_object* v_binderType_950_; lean_object* v_body_951_; uint8_t v_binderInfo_952_; lean_object* v_map_953_; lean_object* v_set_954_; lean_object* v___x_955_; 
v_binderName_949_ = lean_ctor_get(v_e_828_, 0);
v_binderType_950_ = lean_ctor_get(v_e_828_, 1);
v_body_951_ = lean_ctor_get(v_e_828_, 2);
v_binderInfo_952_ = lean_ctor_get_uint8(v_e_828_, sizeof(void*)*3 + 8);
v_map_953_ = lean_ctor_get(v_a_830_, 0);
v_set_954_ = lean_ctor_get(v_a_830_, 1);
v___x_955_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_map_953_, v_e_828_);
if (lean_obj_tag(v___x_955_) == 1)
{
lean_object* v_val_956_; lean_object* v___x_957_; 
lean_dec_ref_known(v_e_828_, 3);
v_val_956_ = lean_ctor_get(v___x_955_, 0);
lean_inc(v_val_956_);
lean_dec_ref_known(v___x_955_, 1);
v___x_957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_957_, 0, v_val_956_);
lean_ctor_set(v___x_957_, 1, v_a_830_);
return v___x_957_;
}
else
{
lean_object* v___x_958_; uint64_t v___x_959_; size_t v___x_960_; lean_object* v___x_961_; size_t v___x_962_; size_t v___x_963_; uint8_t v___x_964_; 
lean_dec(v___x_955_);
v___x_958_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_959_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_828_);
v___x_960_ = lean_uint64_to_usize(v___x_959_);
v___x_961_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_954_, v___x_960_, v_e_828_, v___x_958_);
v___x_962_ = lean_ptr_addr(v___x_961_);
v___x_963_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_964_ = lean_usize_dec_eq(v___x_962_, v___x_963_);
if (v___x_964_ == 0)
{
lean_object* v___x_965_; 
lean_dec_ref_known(v_e_828_, 3);
v___x_965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_965_, 0, v___x_961_);
lean_ctor_set(v___x_965_, 1, v_a_830_);
return v___x_965_;
}
else
{
lean_object* v___x_966_; 
lean_dec_ref(v___x_961_);
lean_inc_ref(v_binderType_950_);
v___x_966_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_binderType_950_, v_a_829_, v_a_830_);
if (lean_obj_tag(v___x_966_) == 0)
{
lean_object* v_a_967_; lean_object* v_a_968_; lean_object* v___x_969_; 
v_a_967_ = lean_ctor_get(v___x_966_, 0);
lean_inc(v_a_967_);
v_a_968_ = lean_ctor_get(v___x_966_, 1);
lean_inc(v_a_968_);
lean_dec_ref_known(v___x_966_, 2);
lean_inc_ref(v_body_951_);
v___x_969_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_body_951_, v_a_829_, v_a_968_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; lean_object* v_a_971_; size_t v___x_972_; size_t v___x_973_; uint8_t v___x_974_; 
v_a_970_ = lean_ctor_get(v___x_969_, 0);
lean_inc(v_a_970_);
v_a_971_ = lean_ctor_get(v___x_969_, 1);
lean_inc(v_a_971_);
lean_dec_ref_known(v___x_969_, 2);
v___x_972_ = lean_ptr_addr(v_binderType_950_);
v___x_973_ = lean_ptr_addr(v_a_967_);
v___x_974_ = lean_usize_dec_eq(v___x_972_, v___x_973_);
if (v___x_974_ == 0)
{
lean_object* v___x_975_; lean_object* v___x_976_; 
lean_inc(v_binderName_949_);
v___x_975_ = l_Lean_Expr_forallE___override(v_binderName_949_, v_a_967_, v_a_970_, v_binderInfo_952_);
v___x_976_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_975_, v_a_971_);
return v___x_976_;
}
else
{
size_t v___x_977_; size_t v___x_978_; uint8_t v___x_979_; 
v___x_977_ = lean_ptr_addr(v_body_951_);
v___x_978_ = lean_ptr_addr(v_a_970_);
v___x_979_ = lean_usize_dec_eq(v___x_977_, v___x_978_);
if (v___x_979_ == 0)
{
lean_object* v___x_980_; lean_object* v___x_981_; 
lean_inc(v_binderName_949_);
v___x_980_ = l_Lean_Expr_forallE___override(v_binderName_949_, v_a_967_, v_a_970_, v_binderInfo_952_);
v___x_981_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_980_, v_a_971_);
return v___x_981_;
}
else
{
uint8_t v___x_982_; 
v___x_982_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_952_, v_binderInfo_952_);
if (v___x_982_ == 0)
{
lean_object* v___x_983_; lean_object* v___x_984_; 
lean_inc(v_binderName_949_);
v___x_983_ = l_Lean_Expr_forallE___override(v_binderName_949_, v_a_967_, v_a_970_, v_binderInfo_952_);
v___x_984_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_983_, v_a_971_);
return v___x_984_;
}
else
{
lean_object* v___x_985_; 
lean_dec(v_a_970_);
lean_dec(v_a_967_);
lean_inc_ref(v_e_828_);
v___x_985_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v_e_828_, v_a_971_);
return v___x_985_;
}
}
}
}
else
{
lean_dec(v_a_967_);
v___y_842_ = v___x_969_;
goto v___jp_841_;
}
}
else
{
v___y_842_ = v___x_966_;
goto v___jp_841_;
}
}
}
}
case 8:
{
lean_object* v_declName_986_; lean_object* v_type_987_; lean_object* v_value_988_; lean_object* v_body_989_; uint8_t v_nondep_990_; lean_object* v_map_991_; lean_object* v_set_992_; lean_object* v___x_993_; 
v_declName_986_ = lean_ctor_get(v_e_828_, 0);
v_type_987_ = lean_ctor_get(v_e_828_, 1);
v_value_988_ = lean_ctor_get(v_e_828_, 2);
v_body_989_ = lean_ctor_get(v_e_828_, 3);
v_nondep_990_ = lean_ctor_get_uint8(v_e_828_, sizeof(void*)*4 + 8);
v_map_991_ = lean_ctor_get(v_a_830_, 0);
v_set_992_ = lean_ctor_get(v_a_830_, 1);
v___x_993_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_map_991_, v_e_828_);
if (lean_obj_tag(v___x_993_) == 1)
{
lean_object* v_val_994_; lean_object* v___x_995_; 
lean_dec_ref_known(v_e_828_, 4);
v_val_994_ = lean_ctor_get(v___x_993_, 0);
lean_inc(v_val_994_);
lean_dec_ref_known(v___x_993_, 1);
v___x_995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_995_, 0, v_val_994_);
lean_ctor_set(v___x_995_, 1, v_a_830_);
return v___x_995_;
}
else
{
lean_object* v___x_996_; uint64_t v___x_997_; size_t v___x_998_; lean_object* v___x_999_; size_t v___x_1000_; size_t v___x_1001_; uint8_t v___x_1002_; 
lean_dec(v___x_993_);
v___x_996_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_997_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_828_);
v___x_998_ = lean_uint64_to_usize(v___x_997_);
v___x_999_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_992_, v___x_998_, v_e_828_, v___x_996_);
v___x_1000_ = lean_ptr_addr(v___x_999_);
v___x_1001_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1002_ = lean_usize_dec_eq(v___x_1000_, v___x_1001_);
if (v___x_1002_ == 0)
{
lean_object* v___x_1003_; 
lean_dec_ref_known(v_e_828_, 4);
v___x_1003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___x_999_);
lean_ctor_set(v___x_1003_, 1, v_a_830_);
return v___x_1003_;
}
else
{
lean_object* v___x_1004_; 
lean_dec_ref(v___x_999_);
lean_inc_ref(v_type_987_);
v___x_1004_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_type_987_, v_a_829_, v_a_830_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v_a_1005_; lean_object* v_a_1006_; lean_object* v___x_1007_; 
v_a_1005_ = lean_ctor_get(v___x_1004_, 0);
lean_inc(v_a_1005_);
v_a_1006_ = lean_ctor_get(v___x_1004_, 1);
lean_inc(v_a_1006_);
lean_dec_ref_known(v___x_1004_, 2);
lean_inc_ref(v_value_988_);
v___x_1007_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_value_988_, v_a_829_, v_a_1006_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_object* v_a_1008_; lean_object* v_a_1009_; lean_object* v___x_1010_; 
v_a_1008_ = lean_ctor_get(v___x_1007_, 0);
lean_inc(v_a_1008_);
v_a_1009_ = lean_ctor_get(v___x_1007_, 1);
lean_inc(v_a_1009_);
lean_dec_ref_known(v___x_1007_, 2);
lean_inc_ref(v_body_989_);
v___x_1010_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_body_989_, v_a_829_, v_a_1009_);
if (lean_obj_tag(v___x_1010_) == 0)
{
lean_object* v_a_1011_; lean_object* v_a_1012_; size_t v___x_1013_; size_t v___x_1014_; uint8_t v___x_1015_; 
v_a_1011_ = lean_ctor_get(v___x_1010_, 0);
lean_inc(v_a_1011_);
v_a_1012_ = lean_ctor_get(v___x_1010_, 1);
lean_inc(v_a_1012_);
lean_dec_ref_known(v___x_1010_, 2);
v___x_1013_ = lean_ptr_addr(v_type_987_);
v___x_1014_ = lean_ptr_addr(v_a_1005_);
v___x_1015_ = lean_usize_dec_eq(v___x_1013_, v___x_1014_);
if (v___x_1015_ == 0)
{
lean_object* v___x_1016_; lean_object* v___x_1017_; 
lean_inc(v_declName_986_);
v___x_1016_ = l_Lean_Expr_letE___override(v_declName_986_, v_a_1005_, v_a_1008_, v_a_1011_, v_nondep_990_);
v___x_1017_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_1016_, v_a_1012_);
return v___x_1017_;
}
else
{
size_t v___x_1018_; size_t v___x_1019_; uint8_t v___x_1020_; 
v___x_1018_ = lean_ptr_addr(v_value_988_);
v___x_1019_ = lean_ptr_addr(v_a_1008_);
v___x_1020_ = lean_usize_dec_eq(v___x_1018_, v___x_1019_);
if (v___x_1020_ == 0)
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
lean_inc(v_declName_986_);
v___x_1021_ = l_Lean_Expr_letE___override(v_declName_986_, v_a_1005_, v_a_1008_, v_a_1011_, v_nondep_990_);
v___x_1022_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_1021_, v_a_1012_);
return v___x_1022_;
}
else
{
size_t v___x_1023_; size_t v___x_1024_; uint8_t v___x_1025_; 
v___x_1023_ = lean_ptr_addr(v_body_989_);
v___x_1024_ = lean_ptr_addr(v_a_1011_);
v___x_1025_ = lean_usize_dec_eq(v___x_1023_, v___x_1024_);
if (v___x_1025_ == 0)
{
lean_object* v___x_1026_; lean_object* v___x_1027_; 
lean_inc(v_declName_986_);
v___x_1026_ = l_Lean_Expr_letE___override(v_declName_986_, v_a_1005_, v_a_1008_, v_a_1011_, v_nondep_990_);
v___x_1027_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_1026_, v_a_1012_);
return v___x_1027_;
}
else
{
lean_object* v___x_1028_; 
lean_dec(v_a_1011_);
lean_dec(v_a_1008_);
lean_dec(v_a_1005_);
lean_inc_ref(v_e_828_);
v___x_1028_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v_e_828_, v_a_1012_);
return v___x_1028_;
}
}
}
}
else
{
lean_dec(v_a_1008_);
lean_dec(v_a_1005_);
v___y_847_ = v___x_1010_;
goto v___jp_846_;
}
}
else
{
lean_dec(v_a_1005_);
v___y_847_ = v___x_1007_;
goto v___jp_846_;
}
}
else
{
v___y_847_ = v___x_1004_;
goto v___jp_846_;
}
}
}
}
case 10:
{
lean_object* v_data_1029_; lean_object* v_expr_1030_; lean_object* v_map_1031_; lean_object* v_set_1032_; lean_object* v___x_1033_; 
v_data_1029_ = lean_ctor_get(v_e_828_, 0);
v_expr_1030_ = lean_ctor_get(v_e_828_, 1);
v_map_1031_ = lean_ctor_get(v_a_830_, 0);
v_set_1032_ = lean_ctor_get(v_a_830_, 1);
v___x_1033_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_map_1031_, v_e_828_);
if (lean_obj_tag(v___x_1033_) == 1)
{
lean_object* v_val_1034_; lean_object* v___x_1035_; 
lean_dec_ref_known(v_e_828_, 2);
v_val_1034_ = lean_ctor_get(v___x_1033_, 0);
lean_inc(v_val_1034_);
lean_dec_ref_known(v___x_1033_, 1);
v___x_1035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1035_, 0, v_val_1034_);
lean_ctor_set(v___x_1035_, 1, v_a_830_);
return v___x_1035_;
}
else
{
lean_object* v___x_1036_; uint64_t v___x_1037_; size_t v___x_1038_; lean_object* v___x_1039_; size_t v___x_1040_; size_t v___x_1041_; uint8_t v___x_1042_; 
lean_dec(v___x_1033_);
v___x_1036_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1037_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_828_);
v___x_1038_ = lean_uint64_to_usize(v___x_1037_);
v___x_1039_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_1032_, v___x_1038_, v_e_828_, v___x_1036_);
v___x_1040_ = lean_ptr_addr(v___x_1039_);
v___x_1041_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1042_ = lean_usize_dec_eq(v___x_1040_, v___x_1041_);
if (v___x_1042_ == 0)
{
lean_object* v___x_1043_; 
lean_dec_ref_known(v_e_828_, 2);
v___x_1043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1039_);
lean_ctor_set(v___x_1043_, 1, v_a_830_);
return v___x_1043_;
}
else
{
lean_object* v___x_1044_; 
lean_dec_ref(v___x_1039_);
lean_inc_ref(v_expr_1030_);
v___x_1044_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_expr_1030_, v_a_829_, v_a_830_);
if (lean_obj_tag(v___x_1044_) == 0)
{
lean_object* v_a_1045_; lean_object* v_a_1046_; size_t v___x_1047_; size_t v___x_1048_; uint8_t v___x_1049_; 
v_a_1045_ = lean_ctor_get(v___x_1044_, 0);
lean_inc(v_a_1045_);
v_a_1046_ = lean_ctor_get(v___x_1044_, 1);
lean_inc(v_a_1046_);
lean_dec_ref_known(v___x_1044_, 2);
v___x_1047_ = lean_ptr_addr(v_expr_1030_);
v___x_1048_ = lean_ptr_addr(v_a_1045_);
v___x_1049_ = lean_usize_dec_eq(v___x_1047_, v___x_1048_);
if (v___x_1049_ == 0)
{
lean_object* v___x_1050_; lean_object* v___x_1051_; 
lean_inc(v_data_1029_);
v___x_1050_ = l_Lean_Expr_mdata___override(v_data_1029_, v_a_1045_);
v___x_1051_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_1050_, v_a_1046_);
return v___x_1051_;
}
else
{
lean_object* v___x_1052_; 
lean_dec(v_a_1045_);
lean_inc_ref(v_e_828_);
v___x_1052_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v_e_828_, v_a_1046_);
return v___x_1052_;
}
}
else
{
if (lean_obj_tag(v___x_1044_) == 0)
{
lean_object* v_a_1053_; lean_object* v_a_1054_; lean_object* v___x_1055_; 
v_a_1053_ = lean_ctor_get(v___x_1044_, 0);
lean_inc(v_a_1053_);
v_a_1054_ = lean_ctor_get(v___x_1044_, 1);
lean_inc(v_a_1054_);
lean_dec_ref_known(v___x_1044_, 2);
v___x_1055_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v_a_1053_, v_a_1054_);
return v___x_1055_;
}
else
{
lean_dec_ref_known(v_e_828_, 2);
return v___x_1044_;
}
}
}
}
}
case 11:
{
lean_object* v_typeName_1056_; lean_object* v_idx_1057_; lean_object* v_struct_1058_; lean_object* v_map_1059_; lean_object* v_set_1060_; lean_object* v___x_1061_; 
v_typeName_1056_ = lean_ctor_get(v_e_828_, 0);
v_idx_1057_ = lean_ctor_get(v_e_828_, 1);
v_struct_1058_ = lean_ctor_get(v_e_828_, 2);
v_map_1059_ = lean_ctor_get(v_a_830_, 0);
v_set_1060_ = lean_ctor_get(v_a_830_, 1);
v___x_1061_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_map_1059_, v_e_828_);
if (lean_obj_tag(v___x_1061_) == 1)
{
lean_object* v_val_1062_; lean_object* v___x_1063_; 
lean_dec_ref_known(v_e_828_, 3);
v_val_1062_ = lean_ctor_get(v___x_1061_, 0);
lean_inc(v_val_1062_);
lean_dec_ref_known(v___x_1061_, 1);
v___x_1063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1063_, 0, v_val_1062_);
lean_ctor_set(v___x_1063_, 1, v_a_830_);
return v___x_1063_;
}
else
{
lean_object* v___x_1064_; uint64_t v___x_1065_; size_t v___x_1066_; lean_object* v___x_1067_; size_t v___x_1068_; size_t v___x_1069_; uint8_t v___x_1070_; 
lean_dec(v___x_1061_);
v___x_1064_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1065_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_828_);
v___x_1066_ = lean_uint64_to_usize(v___x_1065_);
v___x_1067_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_1060_, v___x_1066_, v_e_828_, v___x_1064_);
v___x_1068_ = lean_ptr_addr(v___x_1067_);
v___x_1069_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1070_ = lean_usize_dec_eq(v___x_1068_, v___x_1069_);
if (v___x_1070_ == 0)
{
lean_object* v___x_1071_; 
lean_dec_ref_known(v_e_828_, 3);
v___x_1071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1067_);
lean_ctor_set(v___x_1071_, 1, v_a_830_);
return v___x_1071_;
}
else
{
uint8_t v_checkProj_1072_; 
lean_dec_ref(v___x_1067_);
v_checkProj_1072_ = lean_ctor_get_uint8(v_a_829_, sizeof(void*)*1 + 1);
if (v_checkProj_1072_ == 0)
{
lean_object* v___x_1073_; 
lean_inc_ref(v_struct_1058_);
v___x_1073_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_struct_1058_, v_a_829_, v_a_830_);
if (lean_obj_tag(v___x_1073_) == 0)
{
lean_object* v_a_1074_; lean_object* v_a_1075_; size_t v___x_1076_; size_t v___x_1077_; uint8_t v___x_1078_; 
v_a_1074_ = lean_ctor_get(v___x_1073_, 0);
lean_inc(v_a_1074_);
v_a_1075_ = lean_ctor_get(v___x_1073_, 1);
lean_inc(v_a_1075_);
lean_dec_ref_known(v___x_1073_, 2);
v___x_1076_ = lean_ptr_addr(v_struct_1058_);
v___x_1077_ = lean_ptr_addr(v_a_1074_);
v___x_1078_ = lean_usize_dec_eq(v___x_1076_, v___x_1077_);
if (v___x_1078_ == 0)
{
lean_object* v___x_1079_; lean_object* v___x_1080_; 
lean_inc(v_idx_1057_);
lean_inc(v_typeName_1056_);
v___x_1079_ = l_Lean_Expr_proj___override(v_typeName_1056_, v_idx_1057_, v_a_1074_);
v___x_1080_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v___x_1079_, v_a_1075_);
return v___x_1080_;
}
else
{
lean_object* v___x_1081_; 
lean_dec(v_a_1074_);
lean_inc_ref(v_e_828_);
v___x_1081_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v_e_828_, v_a_1075_);
return v___x_1081_;
}
}
else
{
if (lean_obj_tag(v___x_1073_) == 0)
{
lean_object* v_a_1082_; lean_object* v_a_1083_; lean_object* v___x_1084_; 
v_a_1082_ = lean_ctor_get(v___x_1073_, 0);
lean_inc(v_a_1082_);
v_a_1083_ = lean_ctor_get(v___x_1073_, 1);
lean_inc(v_a_1083_);
lean_dec_ref_known(v___x_1073_, 2);
v___x_1084_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v_a_1082_, v_a_1083_);
return v___x_1084_;
}
else
{
lean_dec_ref_known(v_e_828_, 3);
return v___x_1073_;
}
}
}
else
{
lean_object* v___x_1085_; lean_object* v___x_1086_; 
lean_dec_ref_known(v_e_828_, 3);
v___x_1085_ = lean_box(0);
v___x_1086_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1085_);
lean_ctor_set(v___x_1086_, 1, v_a_830_);
return v___x_1086_;
}
}
}
}
default: 
{
lean_object* v_map_1087_; lean_object* v_set_1088_; lean_object* v___x_1089_; 
v_map_1087_ = lean_ctor_get(v_a_830_, 0);
v_set_1088_ = lean_ctor_get(v_a_830_, 1);
v___x_1089_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(v_set_1088_, v_e_828_);
if (lean_obj_tag(v___x_1089_) == 0)
{
lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1099_; 
lean_inc_ref(v_set_1088_);
lean_inc_ref(v_map_1087_);
v_isSharedCheck_1099_ = !lean_is_exclusive(v_a_830_);
if (v_isSharedCheck_1099_ == 0)
{
lean_object* v_unused_1100_; lean_object* v_unused_1101_; 
v_unused_1100_ = lean_ctor_get(v_a_830_, 1);
lean_dec(v_unused_1100_);
v_unused_1101_ = lean_ctor_get(v_a_830_, 0);
lean_dec(v_unused_1101_);
v___x_1091_ = v_a_830_;
v_isShared_1092_ = v_isSharedCheck_1099_;
goto v_resetjp_1090_;
}
else
{
lean_dec(v_a_830_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1099_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1096_; 
v___x_1093_ = lean_box(0);
lean_inc_ref(v_e_828_);
v___x_1094_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_set_1088_, v_e_828_, v___x_1093_);
if (v_isShared_1092_ == 0)
{
lean_ctor_set(v___x_1091_, 1, v___x_1094_);
v___x_1096_ = v___x_1091_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v_map_1087_);
lean_ctor_set(v_reuseFailAlloc_1098_, 1, v___x_1094_);
v___x_1096_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
lean_object* v___x_1097_; 
v___x_1097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1097_, 0, v_e_828_);
lean_ctor_set(v___x_1097_, 1, v___x_1096_);
return v___x_1097_;
}
}
}
else
{
lean_object* v_val_1102_; lean_object* v_fst_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1110_; 
lean_dec_ref(v_e_828_);
v_val_1102_ = lean_ctor_get(v___x_1089_, 0);
lean_inc(v_val_1102_);
lean_dec_ref_known(v___x_1089_, 1);
v_fst_1103_ = lean_ctor_get(v_val_1102_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v_val_1102_);
if (v_isSharedCheck_1110_ == 0)
{
lean_object* v_unused_1111_; 
v_unused_1111_ = lean_ctor_get(v_val_1102_, 1);
lean_dec(v_unused_1111_);
v___x_1105_ = v_val_1102_;
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_fst_1103_);
lean_dec(v_val_1102_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1108_; 
if (v_isShared_1106_ == 0)
{
lean_ctor_set(v___x_1105_, 1, v_a_830_);
v___x_1108_ = v___x_1105_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_fst_1103_);
lean_ctor_set(v_reuseFailAlloc_1109_, 1, v_a_830_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
}
}
v___jp_831_:
{
if (lean_obj_tag(v___y_832_) == 0)
{
lean_object* v_a_833_; lean_object* v_a_834_; lean_object* v___x_835_; 
v_a_833_ = lean_ctor_get(v___y_832_, 0);
lean_inc(v_a_833_);
v_a_834_ = lean_ctor_get(v___y_832_, 1);
lean_inc(v_a_834_);
lean_dec_ref_known(v___y_832_, 2);
v___x_835_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v_a_833_, v_a_834_);
return v___x_835_;
}
else
{
lean_dec_ref(v_e_828_);
return v___y_832_;
}
}
v___jp_836_:
{
if (lean_obj_tag(v___y_837_) == 0)
{
lean_object* v_a_838_; lean_object* v_a_839_; lean_object* v___x_840_; 
v_a_838_ = lean_ctor_get(v___y_837_, 0);
lean_inc(v_a_838_);
v_a_839_ = lean_ctor_get(v___y_837_, 1);
lean_inc(v_a_839_);
lean_dec_ref_known(v___y_837_, 2);
v___x_840_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v_a_838_, v_a_839_);
return v___x_840_;
}
else
{
lean_dec_ref(v_e_828_);
return v___y_837_;
}
}
v___jp_841_:
{
if (lean_obj_tag(v___y_842_) == 0)
{
lean_object* v_a_843_; lean_object* v_a_844_; lean_object* v___x_845_; 
v_a_843_ = lean_ctor_get(v___y_842_, 0);
lean_inc(v_a_843_);
v_a_844_ = lean_ctor_get(v___y_842_, 1);
lean_inc(v_a_844_);
lean_dec_ref_known(v___y_842_, 2);
v___x_845_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v_a_843_, v_a_844_);
return v___x_845_;
}
else
{
lean_dec_ref(v_e_828_);
return v___y_842_;
}
}
v___jp_846_:
{
if (lean_obj_tag(v___y_847_) == 0)
{
lean_object* v_a_848_; lean_object* v_a_849_; lean_object* v___x_850_; 
v_a_848_ = lean_ctor_get(v___y_847_, 0);
lean_inc(v_a_848_);
v_a_849_ = lean_ctor_get(v___y_847_, 1);
lean_inc(v_a_849_);
lean_dec_ref_known(v___y_847_, 2);
v___x_850_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_828_, v_a_848_, v_a_849_);
return v___x_850_;
}
else
{
lean_dec_ref(v_e_828_);
return v___y_847_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___boxed(lean_object* v_e_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_){
_start:
{
lean_object* v_res_1115_; 
v_res_1115_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_e_1112_, v_a_1113_, v_a_1114_);
lean_dec_ref(v_a_1113_);
return v_res_1115_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0(lean_object* v_00_u03b2_1116_, lean_object* v_x_1117_, lean_object* v_x_1118_){
_start:
{
lean_object* v___x_1119_; 
v___x_1119_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(v_x_1117_, v_x_1118_);
return v___x_1119_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___boxed(lean_object* v_00_u03b2_1120_, lean_object* v_x_1121_, lean_object* v_x_1122_){
_start:
{
lean_object* v_res_1123_; 
v_res_1123_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0(v_00_u03b2_1120_, v_x_1121_, v_x_1122_);
lean_dec_ref(v_x_1122_);
lean_dec_ref(v_x_1121_);
return v_res_1123_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1(lean_object* v_00_u03b2_1124_, lean_object* v_m_1125_, lean_object* v_a_1126_){
_start:
{
lean_object* v___x_1127_; 
v___x_1127_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_m_1125_, v_a_1126_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___boxed(lean_object* v_00_u03b2_1128_, lean_object* v_m_1129_, lean_object* v_a_1130_){
_start:
{
lean_object* v_res_1131_; 
v_res_1131_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1(v_00_u03b2_1128_, v_m_1129_, v_a_1130_);
lean_dec_ref(v_a_1130_);
lean_dec_ref(v_m_1129_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0(lean_object* v_00_u03b2_1132_, lean_object* v_x_1133_, size_t v_x_1134_, lean_object* v_x_1135_){
_start:
{
lean_object* v___x_1136_; 
v___x_1136_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg(v_x_1133_, v_x_1134_, v_x_1135_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1137_, lean_object* v_x_1138_, lean_object* v_x_1139_, lean_object* v_x_1140_){
_start:
{
size_t v_x_11734__boxed_1141_; lean_object* v_res_1142_; 
v_x_11734__boxed_1141_ = lean_unbox_usize(v_x_1139_);
lean_dec(v_x_1139_);
v_res_1142_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0(v_00_u03b2_1137_, v_x_1138_, v_x_11734__boxed_1141_, v_x_1140_);
lean_dec_ref(v_x_1140_);
lean_dec_ref(v_x_1138_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2(lean_object* v_00_u03b2_1143_, lean_object* v_a_1144_, lean_object* v_x_1145_){
_start:
{
lean_object* v___x_1146_; 
v___x_1146_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg(v_a_1144_, v_x_1145_);
return v___x_1146_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1147_, lean_object* v_a_1148_, lean_object* v_x_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2(v_00_u03b2_1147_, v_a_1148_, v_x_1149_);
lean_dec(v_x_1149_);
lean_dec_ref(v_a_1148_);
return v_res_1150_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1151_, lean_object* v_keys_1152_, lean_object* v_vals_1153_, lean_object* v_heq_1154_, lean_object* v_i_1155_, lean_object* v_k_1156_){
_start:
{
lean_object* v___x_1157_; 
v___x_1157_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___redArg(v_keys_1152_, v_vals_1153_, v_i_1155_, v_k_1156_);
return v___x_1157_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1158_, lean_object* v_keys_1159_, lean_object* v_vals_1160_, lean_object* v_heq_1161_, lean_object* v_i_1162_, lean_object* v_k_1163_){
_start:
{
lean_object* v_res_1164_; 
v_res_1164_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1(v_00_u03b2_1158_, v_keys_1159_, v_vals_1160_, v_heq_1161_, v_i_1162_, v_k_1163_);
lean_dec_ref(v_k_1163_);
lean_dec_ref(v_vals_1160_);
lean_dec_ref(v_keys_1159_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlpha(lean_object* v_e_1165_, lean_object* v_cache_1166_, lean_object* v_ctx_1167_, lean_object* v_s_1168_){
_start:
{
lean_object* v___f_1169_; lean_object* v___f_1170_; lean_object* v___x_1171_; 
v___f_1169_ = ((lean_object*)(l_Lean_Meta_Sym_instBEqAlphaKey___closed__0));
v___f_1170_ = ((lean_object*)(l_Lean_Meta_Sym_instHashableAlphaKey___closed__0));
lean_inc_ref(v_e_1165_);
v___x_1171_ = l_Lean_PersistentHashMap_findEntry_x3f___redArg(v___f_1169_, v___f_1170_, v_s_1168_, v_e_1165_);
if (lean_obj_tag(v___x_1171_) == 0)
{
lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1172_, 0, v_cache_1166_);
lean_ctor_set(v___x_1172_, 1, v_s_1168_);
v___x_1173_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_e_1165_, v_ctx_1167_, v___x_1172_);
if (lean_obj_tag(v___x_1173_) == 0)
{
lean_object* v_a_1174_; lean_object* v_a_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1183_; 
v_a_1174_ = lean_ctor_get(v___x_1173_, 1);
v_a_1175_ = lean_ctor_get(v___x_1173_, 0);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1177_ = v___x_1173_;
v_isShared_1178_ = v_isSharedCheck_1183_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_a_1174_);
lean_inc(v_a_1175_);
lean_dec(v___x_1173_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1183_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
lean_object* v_set_1179_; lean_object* v___x_1181_; 
v_set_1179_ = lean_ctor_get(v_a_1174_, 1);
lean_inc_ref(v_set_1179_);
lean_dec(v_a_1174_);
if (v_isShared_1178_ == 0)
{
lean_ctor_set(v___x_1177_, 1, v_set_1179_);
v___x_1181_ = v___x_1177_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v_a_1175_);
lean_ctor_set(v_reuseFailAlloc_1182_, 1, v_set_1179_);
v___x_1181_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
return v___x_1181_;
}
}
}
else
{
lean_object* v_a_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1193_; 
v_a_1184_ = lean_ctor_get(v___x_1173_, 1);
v_isSharedCheck_1193_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1193_ == 0)
{
lean_object* v_unused_1194_; 
v_unused_1194_ = lean_ctor_get(v___x_1173_, 0);
lean_dec(v_unused_1194_);
v___x_1186_ = v___x_1173_;
v_isShared_1187_ = v_isSharedCheck_1193_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_a_1184_);
lean_dec(v___x_1173_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1193_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v_map_1188_; lean_object* v_set_1189_; lean_object* v___x_1191_; 
v_map_1188_ = lean_ctor_get(v_a_1184_, 0);
lean_inc_ref(v_map_1188_);
v_set_1189_ = lean_ctor_get(v_a_1184_, 1);
lean_inc_ref(v_set_1189_);
lean_dec(v_a_1184_);
if (v_isShared_1187_ == 0)
{
lean_ctor_set(v___x_1186_, 1, v_set_1189_);
lean_ctor_set(v___x_1186_, 0, v_map_1188_);
v___x_1191_ = v___x_1186_;
goto v_reusejp_1190_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_map_1188_);
lean_ctor_set(v_reuseFailAlloc_1192_, 1, v_set_1189_);
v___x_1191_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1190_;
}
v_reusejp_1190_:
{
return v___x_1191_;
}
}
}
}
else
{
lean_object* v_val_1195_; lean_object* v_fst_1196_; lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1203_; 
lean_dec_ref(v_cache_1166_);
lean_dec_ref(v_e_1165_);
v_val_1195_ = lean_ctor_get(v___x_1171_, 0);
lean_inc(v_val_1195_);
lean_dec_ref_known(v___x_1171_, 1);
v_fst_1196_ = lean_ctor_get(v_val_1195_, 0);
v_isSharedCheck_1203_ = !lean_is_exclusive(v_val_1195_);
if (v_isSharedCheck_1203_ == 0)
{
lean_object* v_unused_1204_; 
v_unused_1204_ = lean_ctor_get(v_val_1195_, 1);
lean_dec(v_unused_1204_);
v___x_1198_ = v_val_1195_;
v_isShared_1199_ = v_isSharedCheck_1203_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_fst_1196_);
lean_dec(v_val_1195_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1203_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
lean_object* v___x_1201_; 
if (v_isShared_1199_ == 0)
{
lean_ctor_set(v___x_1198_, 1, v_s_1168_);
v___x_1201_ = v___x_1198_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v_fst_1196_);
lean_ctor_set(v_reuseFailAlloc_1202_, 1, v_s_1168_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlpha___boxed(lean_object* v_e_1205_, lean_object* v_cache_1206_, lean_object* v_ctx_1207_, lean_object* v_s_1208_){
_start:
{
lean_object* v_res_1209_; 
v_res_1209_ = l_Lean_Meta_Sym_shareCommonAlpha(v_e_1205_, v_cache_1206_, v_ctx_1207_, v_s_1208_);
lean_dec_ref(v_ctx_1207_);
return v_res_1209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(lean_object* v_e_1210_, lean_object* v_a_1211_){
_start:
{
lean_object* v___x_1212_; uint64_t v___x_1213_; size_t v___x_1214_; lean_object* v___x_1215_; size_t v___x_1216_; size_t v___x_1217_; uint8_t v___x_1218_; 
v___x_1212_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1213_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1210_);
v___x_1214_ = lean_uint64_to_usize(v___x_1213_);
v___x_1215_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1211_, v___x_1214_, v_e_1210_, v___x_1212_);
v___x_1216_ = lean_ptr_addr(v___x_1215_);
v___x_1217_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1218_ = lean_usize_dec_eq(v___x_1216_, v___x_1217_);
if (v___x_1218_ == 0)
{
lean_object* v___x_1219_; 
lean_dec_ref(v_e_1210_);
v___x_1219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1215_);
lean_ctor_set(v___x_1219_, 1, v_a_1211_);
return v___x_1219_;
}
else
{
lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
lean_dec_ref(v___x_1215_);
v___x_1220_ = lean_box(0);
lean_inc_ref(v_e_1210_);
v___x_1221_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_a_1211_, v_e_1210_, v___x_1220_);
v___x_1222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1222_, 0, v_e_1210_);
lean_ctor_set(v___x_1222_, 1, v___x_1221_);
return v___x_1222_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(lean_object* v_e_1223_, lean_object* v_a_1224_, lean_object* v_a_1225_){
_start:
{
lean_object* v___x_1226_; 
v___x_1226_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1223_, v_a_1225_);
return v___x_1226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___boxed(lean_object* v_e_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_){
_start:
{
lean_object* v_res_1230_; 
v_res_1230_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(v_e_1227_, v_a_1228_, v_a_1229_);
lean_dec_ref(v_a_1228_);
return v_res_1230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visitInc(lean_object* v_e_1231_, lean_object* v_k_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_){
_start:
{
lean_object* v___f_1235_; lean_object* v___x_1236_; uint64_t v___x_1237_; size_t v___x_1238_; lean_object* v___x_1239_; size_t v___x_1240_; size_t v___x_1241_; uint8_t v___x_1242_; 
v___f_1235_ = ((lean_object*)(l_Lean_Meta_Sym_instBEqAlphaKey___closed__0));
v___x_1236_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1237_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1231_);
v___x_1238_ = lean_uint64_to_usize(v___x_1237_);
lean_inc_ref(v_a_1234_);
v___x_1239_ = l_Lean_PersistentHashMap_findKeyDAux___redArg(v___f_1235_, v_a_1234_, v___x_1238_, v_e_1231_, v___x_1236_);
v___x_1240_ = lean_ptr_addr(v___x_1239_);
v___x_1241_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1242_ = lean_usize_dec_eq(v___x_1240_, v___x_1241_);
if (v___x_1242_ == 0)
{
lean_object* v___x_1243_; 
lean_dec_ref(v_k_1232_);
v___x_1243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1239_);
lean_ctor_set(v___x_1243_, 1, v_a_1234_);
return v___x_1243_;
}
else
{
lean_object* v___x_1244_; 
lean_dec(v___x_1239_);
lean_inc_ref(v_a_1233_);
v___x_1244_ = lean_apply_2(v_k_1232_, v_a_1233_, v_a_1234_);
if (lean_obj_tag(v___x_1244_) == 0)
{
lean_object* v_a_1245_; lean_object* v_a_1246_; lean_object* v___x_1247_; 
v_a_1245_ = lean_ctor_get(v___x_1244_, 0);
lean_inc(v_a_1245_);
v_a_1246_ = lean_ctor_get(v___x_1244_, 1);
lean_inc(v_a_1246_);
lean_dec_ref_known(v___x_1244_, 2);
v___x_1247_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_a_1245_, v_a_1246_);
return v___x_1247_;
}
else
{
return v___x_1244_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visitInc___boxed(lean_object* v_e_1248_, lean_object* v_k_1249_, lean_object* v_a_1250_, lean_object* v_a_1251_){
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visitInc(v_e_1248_, v_k_1249_, v_a_1250_, v_a_1251_);
lean_dec_ref(v_a_1250_);
return v_res_1252_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__0(void){
_start:
{
lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1253_ = lean_box(0);
v___x_1254_ = lean_unsigned_to_nat(16u);
v___x_1255_ = lean_mk_array(v___x_1254_, v___x_1253_);
return v___x_1255_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1(void){
_start:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1256_ = lean_obj_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__0);
v___x_1257_ = lean_unsigned_to_nat(0u);
v___x_1258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
lean_ctor_set(v___x_1258_, 1, v___x_1256_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(lean_object* v_e_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_){
_start:
{
lean_object* v___y_1263_; lean_object* v___y_1268_; lean_object* v___y_1273_; lean_object* v___y_1278_; 
switch(lean_obj_tag(v_e_1259_))
{
case 4:
{
lean_object* v_declName_1282_; lean_object* v___x_1283_; uint64_t v___x_1284_; size_t v___x_1285_; lean_object* v___x_1286_; size_t v___x_1287_; size_t v___x_1288_; uint8_t v___x_1289_; 
v_declName_1282_ = lean_ctor_get(v_e_1259_, 0);
v___x_1283_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1284_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1259_);
v___x_1285_ = lean_uint64_to_usize(v___x_1284_);
v___x_1286_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1261_, v___x_1285_, v_e_1259_, v___x_1283_);
v___x_1287_ = lean_ptr_addr(v___x_1286_);
v___x_1288_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1289_ = lean_usize_dec_eq(v___x_1287_, v___x_1288_);
if (v___x_1289_ == 0)
{
lean_object* v___x_1290_; 
lean_dec_ref_known(v_e_1259_, 2);
v___x_1290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1286_);
lean_ctor_set(v___x_1290_, 1, v_a_1261_);
return v___x_1290_;
}
else
{
uint8_t v___x_1291_; 
lean_dec_ref(v___x_1286_);
lean_inc(v_declName_1282_);
lean_inc_ref(v_a_1260_);
v___x_1291_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_isReducible(v_a_1260_, v_declName_1282_);
if (v___x_1291_ == 0)
{
lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1292_ = lean_box(0);
lean_inc_ref(v_e_1259_);
v___x_1293_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_a_1261_, v_e_1259_, v___x_1292_);
v___x_1294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1294_, 0, v_e_1259_);
lean_ctor_set(v___x_1294_, 1, v___x_1293_);
return v___x_1294_;
}
else
{
lean_object* v___x_1295_; lean_object* v___x_1296_; 
lean_dec_ref_known(v_e_1259_, 2);
v___x_1295_ = lean_obj_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1);
v___x_1296_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1295_);
lean_ctor_set(v___x_1296_, 1, v_a_1261_);
return v___x_1296_;
}
}
}
case 5:
{
lean_object* v_fn_1297_; lean_object* v_arg_1298_; lean_object* v___x_1299_; uint64_t v___x_1300_; size_t v___x_1301_; lean_object* v___x_1302_; size_t v___x_1303_; size_t v___x_1304_; uint8_t v___x_1305_; 
v_fn_1297_ = lean_ctor_get(v_e_1259_, 0);
v_arg_1298_ = lean_ctor_get(v_e_1259_, 1);
v___x_1299_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1300_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1259_);
v___x_1301_ = lean_uint64_to_usize(v___x_1300_);
v___x_1302_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1261_, v___x_1301_, v_e_1259_, v___x_1299_);
v___x_1303_ = lean_ptr_addr(v___x_1302_);
v___x_1304_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1305_ = lean_usize_dec_eq(v___x_1303_, v___x_1304_);
if (v___x_1305_ == 0)
{
lean_object* v___x_1306_; 
lean_dec_ref_known(v_e_1259_, 2);
v___x_1306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1302_);
lean_ctor_set(v___x_1306_, 1, v_a_1261_);
return v___x_1306_;
}
else
{
lean_object* v___x_1307_; 
lean_dec_ref(v___x_1302_);
lean_inc_ref(v_fn_1297_);
v___x_1307_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_fn_1297_, v_a_1260_, v_a_1261_);
if (lean_obj_tag(v___x_1307_) == 0)
{
lean_object* v_a_1308_; lean_object* v_a_1309_; lean_object* v___x_1310_; 
v_a_1308_ = lean_ctor_get(v___x_1307_, 0);
lean_inc(v_a_1308_);
v_a_1309_ = lean_ctor_get(v___x_1307_, 1);
lean_inc(v_a_1309_);
lean_dec_ref_known(v___x_1307_, 2);
lean_inc_ref(v_arg_1298_);
v___x_1310_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_arg_1298_, v_a_1260_, v_a_1309_);
if (lean_obj_tag(v___x_1310_) == 0)
{
lean_object* v_a_1311_; lean_object* v_a_1312_; size_t v___x_1313_; size_t v___x_1314_; uint8_t v___x_1315_; 
v_a_1311_ = lean_ctor_get(v___x_1310_, 0);
lean_inc(v_a_1311_);
v_a_1312_ = lean_ctor_get(v___x_1310_, 1);
lean_inc(v_a_1312_);
lean_dec_ref_known(v___x_1310_, 2);
v___x_1313_ = lean_ptr_addr(v_fn_1297_);
v___x_1314_ = lean_ptr_addr(v_a_1308_);
v___x_1315_ = lean_usize_dec_eq(v___x_1313_, v___x_1314_);
if (v___x_1315_ == 0)
{
lean_object* v___x_1316_; lean_object* v___x_1317_; 
lean_dec_ref_known(v_e_1259_, 2);
v___x_1316_ = l_Lean_Expr_app___override(v_a_1308_, v_a_1311_);
v___x_1317_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1316_, v_a_1312_);
return v___x_1317_;
}
else
{
size_t v___x_1318_; size_t v___x_1319_; uint8_t v___x_1320_; 
v___x_1318_ = lean_ptr_addr(v_arg_1298_);
v___x_1319_ = lean_ptr_addr(v_a_1311_);
v___x_1320_ = lean_usize_dec_eq(v___x_1318_, v___x_1319_);
if (v___x_1320_ == 0)
{
lean_object* v___x_1321_; lean_object* v___x_1322_; 
lean_dec_ref_known(v_e_1259_, 2);
v___x_1321_ = l_Lean_Expr_app___override(v_a_1308_, v_a_1311_);
v___x_1322_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1321_, v_a_1312_);
return v___x_1322_;
}
else
{
lean_object* v___x_1323_; 
lean_dec(v_a_1311_);
lean_dec(v_a_1308_);
v___x_1323_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1259_, v_a_1312_);
return v___x_1323_;
}
}
}
else
{
lean_dec(v_a_1308_);
lean_dec_ref_known(v_e_1259_, 2);
v___y_1263_ = v___x_1310_;
goto v___jp_1262_;
}
}
else
{
lean_dec_ref_known(v_e_1259_, 2);
v___y_1263_ = v___x_1307_;
goto v___jp_1262_;
}
}
}
case 6:
{
lean_object* v_binderName_1324_; lean_object* v_binderType_1325_; lean_object* v_body_1326_; uint8_t v_binderInfo_1327_; lean_object* v___x_1328_; uint64_t v___x_1329_; size_t v___x_1330_; lean_object* v___x_1331_; size_t v___x_1332_; size_t v___x_1333_; uint8_t v___x_1334_; 
v_binderName_1324_ = lean_ctor_get(v_e_1259_, 0);
v_binderType_1325_ = lean_ctor_get(v_e_1259_, 1);
v_body_1326_ = lean_ctor_get(v_e_1259_, 2);
v_binderInfo_1327_ = lean_ctor_get_uint8(v_e_1259_, sizeof(void*)*3 + 8);
v___x_1328_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1329_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1259_);
v___x_1330_ = lean_uint64_to_usize(v___x_1329_);
v___x_1331_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1261_, v___x_1330_, v_e_1259_, v___x_1328_);
v___x_1332_ = lean_ptr_addr(v___x_1331_);
v___x_1333_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1334_ = lean_usize_dec_eq(v___x_1332_, v___x_1333_);
if (v___x_1334_ == 0)
{
lean_object* v___x_1335_; 
lean_dec_ref_known(v_e_1259_, 3);
v___x_1335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1331_);
lean_ctor_set(v___x_1335_, 1, v_a_1261_);
return v___x_1335_;
}
else
{
lean_object* v___x_1336_; 
lean_dec_ref(v___x_1331_);
lean_inc_ref(v_binderType_1325_);
v___x_1336_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_binderType_1325_, v_a_1260_, v_a_1261_);
if (lean_obj_tag(v___x_1336_) == 0)
{
lean_object* v_a_1337_; lean_object* v_a_1338_; lean_object* v___x_1339_; 
v_a_1337_ = lean_ctor_get(v___x_1336_, 0);
lean_inc(v_a_1337_);
v_a_1338_ = lean_ctor_get(v___x_1336_, 1);
lean_inc(v_a_1338_);
lean_dec_ref_known(v___x_1336_, 2);
lean_inc_ref(v_body_1326_);
v___x_1339_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_body_1326_, v_a_1260_, v_a_1338_);
if (lean_obj_tag(v___x_1339_) == 0)
{
lean_object* v_a_1340_; lean_object* v_a_1341_; size_t v___x_1342_; size_t v___x_1343_; uint8_t v___x_1344_; 
v_a_1340_ = lean_ctor_get(v___x_1339_, 0);
lean_inc(v_a_1340_);
v_a_1341_ = lean_ctor_get(v___x_1339_, 1);
lean_inc(v_a_1341_);
lean_dec_ref_known(v___x_1339_, 2);
v___x_1342_ = lean_ptr_addr(v_binderType_1325_);
v___x_1343_ = lean_ptr_addr(v_a_1337_);
v___x_1344_ = lean_usize_dec_eq(v___x_1342_, v___x_1343_);
if (v___x_1344_ == 0)
{
lean_object* v___x_1345_; lean_object* v___x_1346_; 
lean_inc(v_binderName_1324_);
lean_dec_ref_known(v_e_1259_, 3);
v___x_1345_ = l_Lean_Expr_lam___override(v_binderName_1324_, v_a_1337_, v_a_1340_, v_binderInfo_1327_);
v___x_1346_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1345_, v_a_1341_);
return v___x_1346_;
}
else
{
size_t v___x_1347_; size_t v___x_1348_; uint8_t v___x_1349_; 
v___x_1347_ = lean_ptr_addr(v_body_1326_);
v___x_1348_ = lean_ptr_addr(v_a_1340_);
v___x_1349_ = lean_usize_dec_eq(v___x_1347_, v___x_1348_);
if (v___x_1349_ == 0)
{
lean_object* v___x_1350_; lean_object* v___x_1351_; 
lean_inc(v_binderName_1324_);
lean_dec_ref_known(v_e_1259_, 3);
v___x_1350_ = l_Lean_Expr_lam___override(v_binderName_1324_, v_a_1337_, v_a_1340_, v_binderInfo_1327_);
v___x_1351_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1350_, v_a_1341_);
return v___x_1351_;
}
else
{
uint8_t v___x_1352_; 
v___x_1352_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1327_, v_binderInfo_1327_);
if (v___x_1352_ == 0)
{
lean_object* v___x_1353_; lean_object* v___x_1354_; 
lean_inc(v_binderName_1324_);
lean_dec_ref_known(v_e_1259_, 3);
v___x_1353_ = l_Lean_Expr_lam___override(v_binderName_1324_, v_a_1337_, v_a_1340_, v_binderInfo_1327_);
v___x_1354_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1353_, v_a_1341_);
return v___x_1354_;
}
else
{
lean_object* v___x_1355_; 
lean_dec(v_a_1340_);
lean_dec(v_a_1337_);
v___x_1355_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1259_, v_a_1341_);
return v___x_1355_;
}
}
}
}
else
{
lean_dec(v_a_1337_);
lean_dec_ref_known(v_e_1259_, 3);
v___y_1268_ = v___x_1339_;
goto v___jp_1267_;
}
}
else
{
lean_dec_ref_known(v_e_1259_, 3);
v___y_1268_ = v___x_1336_;
goto v___jp_1267_;
}
}
}
case 7:
{
lean_object* v_binderName_1356_; lean_object* v_binderType_1357_; lean_object* v_body_1358_; uint8_t v_binderInfo_1359_; lean_object* v___x_1360_; uint64_t v___x_1361_; size_t v___x_1362_; lean_object* v___x_1363_; size_t v___x_1364_; size_t v___x_1365_; uint8_t v___x_1366_; 
v_binderName_1356_ = lean_ctor_get(v_e_1259_, 0);
v_binderType_1357_ = lean_ctor_get(v_e_1259_, 1);
v_body_1358_ = lean_ctor_get(v_e_1259_, 2);
v_binderInfo_1359_ = lean_ctor_get_uint8(v_e_1259_, sizeof(void*)*3 + 8);
v___x_1360_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1361_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1259_);
v___x_1362_ = lean_uint64_to_usize(v___x_1361_);
v___x_1363_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1261_, v___x_1362_, v_e_1259_, v___x_1360_);
v___x_1364_ = lean_ptr_addr(v___x_1363_);
v___x_1365_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1366_ = lean_usize_dec_eq(v___x_1364_, v___x_1365_);
if (v___x_1366_ == 0)
{
lean_object* v___x_1367_; 
lean_dec_ref_known(v_e_1259_, 3);
v___x_1367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1363_);
lean_ctor_set(v___x_1367_, 1, v_a_1261_);
return v___x_1367_;
}
else
{
lean_object* v___x_1368_; 
lean_dec_ref(v___x_1363_);
lean_inc_ref(v_binderType_1357_);
v___x_1368_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_binderType_1357_, v_a_1260_, v_a_1261_);
if (lean_obj_tag(v___x_1368_) == 0)
{
lean_object* v_a_1369_; lean_object* v_a_1370_; lean_object* v___x_1371_; 
v_a_1369_ = lean_ctor_get(v___x_1368_, 0);
lean_inc(v_a_1369_);
v_a_1370_ = lean_ctor_get(v___x_1368_, 1);
lean_inc(v_a_1370_);
lean_dec_ref_known(v___x_1368_, 2);
lean_inc_ref(v_body_1358_);
v___x_1371_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_body_1358_, v_a_1260_, v_a_1370_);
if (lean_obj_tag(v___x_1371_) == 0)
{
lean_object* v_a_1372_; lean_object* v_a_1373_; size_t v___x_1374_; size_t v___x_1375_; uint8_t v___x_1376_; 
v_a_1372_ = lean_ctor_get(v___x_1371_, 0);
lean_inc(v_a_1372_);
v_a_1373_ = lean_ctor_get(v___x_1371_, 1);
lean_inc(v_a_1373_);
lean_dec_ref_known(v___x_1371_, 2);
v___x_1374_ = lean_ptr_addr(v_binderType_1357_);
v___x_1375_ = lean_ptr_addr(v_a_1369_);
v___x_1376_ = lean_usize_dec_eq(v___x_1374_, v___x_1375_);
if (v___x_1376_ == 0)
{
lean_object* v___x_1377_; lean_object* v___x_1378_; 
lean_inc(v_binderName_1356_);
lean_dec_ref_known(v_e_1259_, 3);
v___x_1377_ = l_Lean_Expr_forallE___override(v_binderName_1356_, v_a_1369_, v_a_1372_, v_binderInfo_1359_);
v___x_1378_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1377_, v_a_1373_);
return v___x_1378_;
}
else
{
size_t v___x_1379_; size_t v___x_1380_; uint8_t v___x_1381_; 
v___x_1379_ = lean_ptr_addr(v_body_1358_);
v___x_1380_ = lean_ptr_addr(v_a_1372_);
v___x_1381_ = lean_usize_dec_eq(v___x_1379_, v___x_1380_);
if (v___x_1381_ == 0)
{
lean_object* v___x_1382_; lean_object* v___x_1383_; 
lean_inc(v_binderName_1356_);
lean_dec_ref_known(v_e_1259_, 3);
v___x_1382_ = l_Lean_Expr_forallE___override(v_binderName_1356_, v_a_1369_, v_a_1372_, v_binderInfo_1359_);
v___x_1383_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1382_, v_a_1373_);
return v___x_1383_;
}
else
{
uint8_t v___x_1384_; 
v___x_1384_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1359_, v_binderInfo_1359_);
if (v___x_1384_ == 0)
{
lean_object* v___x_1385_; lean_object* v___x_1386_; 
lean_inc(v_binderName_1356_);
lean_dec_ref_known(v_e_1259_, 3);
v___x_1385_ = l_Lean_Expr_forallE___override(v_binderName_1356_, v_a_1369_, v_a_1372_, v_binderInfo_1359_);
v___x_1386_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1385_, v_a_1373_);
return v___x_1386_;
}
else
{
lean_object* v___x_1387_; 
lean_dec(v_a_1372_);
lean_dec(v_a_1369_);
v___x_1387_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1259_, v_a_1373_);
return v___x_1387_;
}
}
}
}
else
{
lean_dec(v_a_1369_);
lean_dec_ref_known(v_e_1259_, 3);
v___y_1273_ = v___x_1371_;
goto v___jp_1272_;
}
}
else
{
lean_dec_ref_known(v_e_1259_, 3);
v___y_1273_ = v___x_1368_;
goto v___jp_1272_;
}
}
}
case 8:
{
lean_object* v_declName_1388_; lean_object* v_type_1389_; lean_object* v_value_1390_; lean_object* v_body_1391_; uint8_t v_nondep_1392_; lean_object* v___x_1393_; uint64_t v___x_1394_; size_t v___x_1395_; lean_object* v___x_1396_; size_t v___x_1397_; size_t v___x_1398_; uint8_t v___x_1399_; 
v_declName_1388_ = lean_ctor_get(v_e_1259_, 0);
v_type_1389_ = lean_ctor_get(v_e_1259_, 1);
v_value_1390_ = lean_ctor_get(v_e_1259_, 2);
v_body_1391_ = lean_ctor_get(v_e_1259_, 3);
v_nondep_1392_ = lean_ctor_get_uint8(v_e_1259_, sizeof(void*)*4 + 8);
v___x_1393_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1394_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1259_);
v___x_1395_ = lean_uint64_to_usize(v___x_1394_);
v___x_1396_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1261_, v___x_1395_, v_e_1259_, v___x_1393_);
v___x_1397_ = lean_ptr_addr(v___x_1396_);
v___x_1398_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1399_ = lean_usize_dec_eq(v___x_1397_, v___x_1398_);
if (v___x_1399_ == 0)
{
lean_object* v___x_1400_; 
lean_dec_ref_known(v_e_1259_, 4);
v___x_1400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1396_);
lean_ctor_set(v___x_1400_, 1, v_a_1261_);
return v___x_1400_;
}
else
{
lean_object* v___x_1401_; 
lean_dec_ref(v___x_1396_);
lean_inc_ref(v_type_1389_);
v___x_1401_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_type_1389_, v_a_1260_, v_a_1261_);
if (lean_obj_tag(v___x_1401_) == 0)
{
lean_object* v_a_1402_; lean_object* v_a_1403_; lean_object* v___x_1404_; 
v_a_1402_ = lean_ctor_get(v___x_1401_, 0);
lean_inc(v_a_1402_);
v_a_1403_ = lean_ctor_get(v___x_1401_, 1);
lean_inc(v_a_1403_);
lean_dec_ref_known(v___x_1401_, 2);
lean_inc_ref(v_value_1390_);
v___x_1404_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_value_1390_, v_a_1260_, v_a_1403_);
if (lean_obj_tag(v___x_1404_) == 0)
{
lean_object* v_a_1405_; lean_object* v_a_1406_; lean_object* v___x_1407_; 
v_a_1405_ = lean_ctor_get(v___x_1404_, 0);
lean_inc(v_a_1405_);
v_a_1406_ = lean_ctor_get(v___x_1404_, 1);
lean_inc(v_a_1406_);
lean_dec_ref_known(v___x_1404_, 2);
lean_inc_ref(v_body_1391_);
v___x_1407_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_body_1391_, v_a_1260_, v_a_1406_);
if (lean_obj_tag(v___x_1407_) == 0)
{
lean_object* v_a_1408_; lean_object* v_a_1409_; size_t v___x_1410_; size_t v___x_1411_; uint8_t v___x_1412_; 
v_a_1408_ = lean_ctor_get(v___x_1407_, 0);
lean_inc(v_a_1408_);
v_a_1409_ = lean_ctor_get(v___x_1407_, 1);
lean_inc(v_a_1409_);
lean_dec_ref_known(v___x_1407_, 2);
v___x_1410_ = lean_ptr_addr(v_type_1389_);
v___x_1411_ = lean_ptr_addr(v_a_1402_);
v___x_1412_ = lean_usize_dec_eq(v___x_1410_, v___x_1411_);
if (v___x_1412_ == 0)
{
lean_object* v___x_1413_; lean_object* v___x_1414_; 
lean_inc(v_declName_1388_);
lean_dec_ref_known(v_e_1259_, 4);
v___x_1413_ = l_Lean_Expr_letE___override(v_declName_1388_, v_a_1402_, v_a_1405_, v_a_1408_, v_nondep_1392_);
v___x_1414_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1413_, v_a_1409_);
return v___x_1414_;
}
else
{
size_t v___x_1415_; size_t v___x_1416_; uint8_t v___x_1417_; 
v___x_1415_ = lean_ptr_addr(v_value_1390_);
v___x_1416_ = lean_ptr_addr(v_a_1405_);
v___x_1417_ = lean_usize_dec_eq(v___x_1415_, v___x_1416_);
if (v___x_1417_ == 0)
{
lean_object* v___x_1418_; lean_object* v___x_1419_; 
lean_inc(v_declName_1388_);
lean_dec_ref_known(v_e_1259_, 4);
v___x_1418_ = l_Lean_Expr_letE___override(v_declName_1388_, v_a_1402_, v_a_1405_, v_a_1408_, v_nondep_1392_);
v___x_1419_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1418_, v_a_1409_);
return v___x_1419_;
}
else
{
size_t v___x_1420_; size_t v___x_1421_; uint8_t v___x_1422_; 
v___x_1420_ = lean_ptr_addr(v_body_1391_);
v___x_1421_ = lean_ptr_addr(v_a_1408_);
v___x_1422_ = lean_usize_dec_eq(v___x_1420_, v___x_1421_);
if (v___x_1422_ == 0)
{
lean_object* v___x_1423_; lean_object* v___x_1424_; 
lean_inc(v_declName_1388_);
lean_dec_ref_known(v_e_1259_, 4);
v___x_1423_ = l_Lean_Expr_letE___override(v_declName_1388_, v_a_1402_, v_a_1405_, v_a_1408_, v_nondep_1392_);
v___x_1424_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1423_, v_a_1409_);
return v___x_1424_;
}
else
{
lean_object* v___x_1425_; 
lean_dec(v_a_1408_);
lean_dec(v_a_1405_);
lean_dec(v_a_1402_);
v___x_1425_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1259_, v_a_1409_);
return v___x_1425_;
}
}
}
}
else
{
lean_dec(v_a_1405_);
lean_dec(v_a_1402_);
lean_dec_ref_known(v_e_1259_, 4);
v___y_1278_ = v___x_1407_;
goto v___jp_1277_;
}
}
else
{
lean_dec(v_a_1402_);
lean_dec_ref_known(v_e_1259_, 4);
v___y_1278_ = v___x_1404_;
goto v___jp_1277_;
}
}
else
{
lean_dec_ref_known(v_e_1259_, 4);
v___y_1278_ = v___x_1401_;
goto v___jp_1277_;
}
}
}
case 10:
{
lean_object* v_data_1426_; lean_object* v_expr_1427_; lean_object* v___x_1428_; uint64_t v___x_1429_; size_t v___x_1430_; lean_object* v___x_1431_; size_t v___x_1432_; size_t v___x_1433_; uint8_t v___x_1434_; 
v_data_1426_ = lean_ctor_get(v_e_1259_, 0);
v_expr_1427_ = lean_ctor_get(v_e_1259_, 1);
v___x_1428_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1429_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1259_);
v___x_1430_ = lean_uint64_to_usize(v___x_1429_);
v___x_1431_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1261_, v___x_1430_, v_e_1259_, v___x_1428_);
v___x_1432_ = lean_ptr_addr(v___x_1431_);
v___x_1433_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1434_ = lean_usize_dec_eq(v___x_1432_, v___x_1433_);
if (v___x_1434_ == 0)
{
lean_object* v___x_1435_; 
lean_dec_ref_known(v_e_1259_, 2);
v___x_1435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1435_, 0, v___x_1431_);
lean_ctor_set(v___x_1435_, 1, v_a_1261_);
return v___x_1435_;
}
else
{
lean_object* v___x_1436_; 
lean_dec_ref(v___x_1431_);
lean_inc_ref(v_expr_1427_);
v___x_1436_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_expr_1427_, v_a_1260_, v_a_1261_);
if (lean_obj_tag(v___x_1436_) == 0)
{
lean_object* v_a_1437_; lean_object* v_a_1438_; size_t v___x_1439_; size_t v___x_1440_; uint8_t v___x_1441_; 
v_a_1437_ = lean_ctor_get(v___x_1436_, 0);
lean_inc(v_a_1437_);
v_a_1438_ = lean_ctor_get(v___x_1436_, 1);
lean_inc(v_a_1438_);
lean_dec_ref_known(v___x_1436_, 2);
v___x_1439_ = lean_ptr_addr(v_expr_1427_);
v___x_1440_ = lean_ptr_addr(v_a_1437_);
v___x_1441_ = lean_usize_dec_eq(v___x_1439_, v___x_1440_);
if (v___x_1441_ == 0)
{
lean_object* v___x_1442_; lean_object* v___x_1443_; 
lean_inc(v_data_1426_);
lean_dec_ref_known(v_e_1259_, 2);
v___x_1442_ = l_Lean_Expr_mdata___override(v_data_1426_, v_a_1437_);
v___x_1443_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1442_, v_a_1438_);
return v___x_1443_;
}
else
{
lean_object* v___x_1444_; 
lean_dec(v_a_1437_);
v___x_1444_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1259_, v_a_1438_);
return v___x_1444_;
}
}
else
{
lean_dec_ref_known(v_e_1259_, 2);
if (lean_obj_tag(v___x_1436_) == 0)
{
lean_object* v_a_1445_; lean_object* v_a_1446_; lean_object* v___x_1447_; 
v_a_1445_ = lean_ctor_get(v___x_1436_, 0);
lean_inc(v_a_1445_);
v_a_1446_ = lean_ctor_get(v___x_1436_, 1);
lean_inc(v_a_1446_);
lean_dec_ref_known(v___x_1436_, 2);
v___x_1447_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_a_1445_, v_a_1446_);
return v___x_1447_;
}
else
{
return v___x_1436_;
}
}
}
}
case 11:
{
lean_object* v_typeName_1448_; lean_object* v_idx_1449_; lean_object* v_struct_1450_; lean_object* v___x_1451_; uint64_t v___x_1452_; size_t v___x_1453_; lean_object* v___x_1454_; size_t v___x_1455_; size_t v___x_1456_; uint8_t v___x_1457_; 
v_typeName_1448_ = lean_ctor_get(v_e_1259_, 0);
v_idx_1449_ = lean_ctor_get(v_e_1259_, 1);
v_struct_1450_ = lean_ctor_get(v_e_1259_, 2);
v___x_1451_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1452_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1259_);
v___x_1453_ = lean_uint64_to_usize(v___x_1452_);
v___x_1454_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1261_, v___x_1453_, v_e_1259_, v___x_1451_);
v___x_1455_ = lean_ptr_addr(v___x_1454_);
v___x_1456_ = lean_usize_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg___closed__0);
v___x_1457_ = lean_usize_dec_eq(v___x_1455_, v___x_1456_);
if (v___x_1457_ == 0)
{
lean_object* v___x_1458_; 
lean_dec_ref_known(v_e_1259_, 3);
v___x_1458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1454_);
lean_ctor_set(v___x_1458_, 1, v_a_1261_);
return v___x_1458_;
}
else
{
uint8_t v_checkProj_1459_; 
lean_dec_ref(v___x_1454_);
v_checkProj_1459_ = lean_ctor_get_uint8(v_a_1260_, sizeof(void*)*1 + 1);
if (v_checkProj_1459_ == 0)
{
lean_object* v___x_1460_; 
lean_inc_ref(v_struct_1450_);
v___x_1460_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_struct_1450_, v_a_1260_, v_a_1261_);
if (lean_obj_tag(v___x_1460_) == 0)
{
lean_object* v_a_1461_; lean_object* v_a_1462_; size_t v___x_1463_; size_t v___x_1464_; uint8_t v___x_1465_; 
v_a_1461_ = lean_ctor_get(v___x_1460_, 0);
lean_inc(v_a_1461_);
v_a_1462_ = lean_ctor_get(v___x_1460_, 1);
lean_inc(v_a_1462_);
lean_dec_ref_known(v___x_1460_, 2);
v___x_1463_ = lean_ptr_addr(v_struct_1450_);
v___x_1464_ = lean_ptr_addr(v_a_1461_);
v___x_1465_ = lean_usize_dec_eq(v___x_1463_, v___x_1464_);
if (v___x_1465_ == 0)
{
lean_object* v___x_1466_; lean_object* v___x_1467_; 
lean_inc(v_idx_1449_);
lean_inc(v_typeName_1448_);
lean_dec_ref_known(v_e_1259_, 3);
v___x_1466_ = l_Lean_Expr_proj___override(v_typeName_1448_, v_idx_1449_, v_a_1461_);
v___x_1467_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1466_, v_a_1462_);
return v___x_1467_;
}
else
{
lean_object* v___x_1468_; 
lean_dec(v_a_1461_);
v___x_1468_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1259_, v_a_1462_);
return v___x_1468_;
}
}
else
{
lean_dec_ref_known(v_e_1259_, 3);
if (lean_obj_tag(v___x_1460_) == 0)
{
lean_object* v_a_1469_; lean_object* v_a_1470_; lean_object* v___x_1471_; 
v_a_1469_ = lean_ctor_get(v___x_1460_, 0);
lean_inc(v_a_1469_);
v_a_1470_ = lean_ctor_get(v___x_1460_, 1);
lean_inc(v_a_1470_);
lean_dec_ref_known(v___x_1460_, 2);
v___x_1471_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_a_1469_, v_a_1470_);
return v___x_1471_;
}
else
{
return v___x_1460_;
}
}
}
else
{
lean_object* v___x_1472_; lean_object* v___x_1473_; 
lean_dec_ref_known(v_e_1259_, 3);
v___x_1472_ = lean_obj_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1);
v___x_1473_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1473_, 0, v___x_1472_);
lean_ctor_set(v___x_1473_, 1, v_a_1261_);
return v___x_1473_;
}
}
}
default: 
{
lean_object* v___x_1474_; 
v___x_1474_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1259_, v_a_1261_);
return v___x_1474_;
}
}
v___jp_1262_:
{
if (lean_obj_tag(v___y_1263_) == 0)
{
lean_object* v_a_1264_; lean_object* v_a_1265_; lean_object* v___x_1266_; 
v_a_1264_ = lean_ctor_get(v___y_1263_, 0);
lean_inc(v_a_1264_);
v_a_1265_ = lean_ctor_get(v___y_1263_, 1);
lean_inc(v_a_1265_);
lean_dec_ref_known(v___y_1263_, 2);
v___x_1266_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_a_1264_, v_a_1265_);
return v___x_1266_;
}
else
{
return v___y_1263_;
}
}
v___jp_1267_:
{
if (lean_obj_tag(v___y_1268_) == 0)
{
lean_object* v_a_1269_; lean_object* v_a_1270_; lean_object* v___x_1271_; 
v_a_1269_ = lean_ctor_get(v___y_1268_, 0);
lean_inc(v_a_1269_);
v_a_1270_ = lean_ctor_get(v___y_1268_, 1);
lean_inc(v_a_1270_);
lean_dec_ref_known(v___y_1268_, 2);
v___x_1271_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_a_1269_, v_a_1270_);
return v___x_1271_;
}
else
{
return v___y_1268_;
}
}
v___jp_1272_:
{
if (lean_obj_tag(v___y_1273_) == 0)
{
lean_object* v_a_1274_; lean_object* v_a_1275_; lean_object* v___x_1276_; 
v_a_1274_ = lean_ctor_get(v___y_1273_, 0);
lean_inc(v_a_1274_);
v_a_1275_ = lean_ctor_get(v___y_1273_, 1);
lean_inc(v_a_1275_);
lean_dec_ref_known(v___y_1273_, 2);
v___x_1276_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_a_1274_, v_a_1275_);
return v___x_1276_;
}
else
{
return v___y_1273_;
}
}
v___jp_1277_:
{
if (lean_obj_tag(v___y_1278_) == 0)
{
lean_object* v_a_1279_; lean_object* v_a_1280_; lean_object* v___x_1281_; 
v_a_1279_ = lean_ctor_get(v___y_1278_, 0);
lean_inc(v_a_1279_);
v_a_1280_ = lean_ctor_get(v___y_1278_, 1);
lean_inc(v_a_1280_);
lean_dec_ref_known(v___y_1278_, 2);
v___x_1281_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_a_1279_, v_a_1280_);
return v___x_1281_;
}
else
{
return v___y_1278_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___boxed(lean_object* v_e_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_e_1475_, v_a_1476_, v_a_1477_);
lean_dec_ref(v_a_1476_);
return v_res_1478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlphaInc(lean_object* v_e_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_){
_start:
{
lean_object* v___x_1482_; 
v___x_1482_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_e_1479_, v_a_1480_, v_a_1481_);
return v___x_1482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlphaInc___boxed(lean_object* v_e_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_){
_start:
{
lean_object* v_res_1486_; 
v_res_1486_ = l_Lean_Meta_Sym_shareCommonAlphaInc(v_e_1483_, v_a_1484_, v_a_1485_);
lean_dec_ref(v_a_1484_);
return v_res_1486_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Environment(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_ReducibilityAttrs(uint8_t builtin);
lean_object* runtime_initialize_Lean_ProjFns(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareCommon(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ReducibilityAttrs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy = _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy();
lean_mark_persistent(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_AlphaShareCommon(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
lean_object* initialize_Lean_Environment(uint8_t builtin);
lean_object* initialize_Init_Grind_Util(uint8_t builtin);
lean_object* initialize_Lean_ReducibilityAttrs(uint8_t builtin);
lean_object* initialize_Lean_ProjFns(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_AlphaShareCommon(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ReducibilityAttrs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareCommon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_AlphaShareCommon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_AlphaShareCommon(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Meta.AbstractNestedProofs
// Imports: public import Init.Grind.Util public import Lean.Meta.Closure public import Lean.Meta.Transform
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Expr_isAtomic(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAuxTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSorry(lean_object*);
lean_object* l_Lean_Meta_zetaReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_betaReduce(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_withoutExporting___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_PersistentArray_set___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
lean_object* lean_usize_to_nat(size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_LocalDecl_setType(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_value_x3f(lean_object*, uint8_t);
lean_object* l_Lean_LocalDecl_setValue(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_zetaReduce(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAuxTheorem(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__0(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_getLambdaBody(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_getLambdaBody___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__0(uint8_t, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1_spec__1___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__0_value;
static const lean_string_object l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__1_value;
static const lean_string_object l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "nestedProof"};
static const lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(182, 140, 29, 19, 223, 104, 218, 25)}};
static const lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__3_value;
static lean_once_cell_t l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__4;
static lean_once_cell_t l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__2;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1_spec__1(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__8___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__8(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__5_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11_spec__17___redArg(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11___redArg(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_AbstractNestedProofs_visit_spec__2(lean_object*, size_t, size_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_AbstractNestedProofs_visit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "abstract nested proofs"};
static const lean_object* l_Lean_Meta_AbstractNestedProofs_visit___closed__0 = (const lean_object*)&l_Lean_Meta_AbstractNestedProofs_visit___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__5(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__3(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9___boxed__const__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0(size_t, size_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_AbstractNestedProofs_visit_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11_spec__17(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__5_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11_spec__16(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_abstractNestedProofs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_abstractNestedProofs___closed__0;
static lean_once_cell_t l_Lean_Meta_abstractNestedProofs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_abstractNestedProofs___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_abstractNestedProofs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractNestedProofs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__0(lean_object* v_proof_1_, uint8_t v___x_2_, lean_object* v_inst_3_, uint8_t v_cache_4_, lean_object* v_type_5_){
_start:
{
uint8_t v___y_7_; 
if (v_cache_4_ == 0)
{
v___y_7_ = v_cache_4_;
goto v___jp_6_;
}
else
{
uint8_t v___x_13_; 
v___x_13_ = l_Lean_Expr_hasSorry(v_proof_1_);
if (v___x_13_ == 0)
{
v___y_7_ = v_cache_4_;
goto v___jp_6_;
}
else
{
uint8_t v___x_14_; 
v___x_14_ = 0;
v___y_7_ = v___x_14_;
goto v___jp_6_;
}
}
v___jp_6_:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_8_ = lean_box(0);
v___x_9_ = lean_box(v___x_2_);
v___x_10_ = lean_box(v___y_7_);
v___x_11_ = lean_alloc_closure((void*)(l_Lean_Meta_mkAuxTheorem___boxed), 10, 5);
lean_closure_set(v___x_11_, 0, v_type_5_);
lean_closure_set(v___x_11_, 1, v_proof_1_);
lean_closure_set(v___x_11_, 2, v___x_9_);
lean_closure_set(v___x_11_, 3, v___x_8_);
lean_closure_set(v___x_11_, 4, v___x_10_);
v___x_12_ = lean_apply_2(v_inst_3_, lean_box(0), v___x_11_);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__0___boxed(lean_object* v_proof_15_, lean_object* v___x_16_, lean_object* v_inst_17_, lean_object* v_cache_18_, lean_object* v_type_19_){
_start:
{
uint8_t v___x_151__boxed_20_; uint8_t v_cache_boxed_21_; lean_object* v_res_22_; 
v___x_151__boxed_20_ = lean_unbox(v___x_16_);
v_cache_boxed_21_ = lean_unbox(v_cache_18_);
v_res_22_ = l_Lean_Meta_abstractProof___redArg___lam__0(v_proof_15_, v___x_151__boxed_20_, v_inst_17_, v_cache_boxed_21_, v_type_19_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__1(lean_object* v_postprocessType_23_, lean_object* v_toBind_24_, lean_object* v___f_25_, lean_object* v_type_26_){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_apply_1(v_postprocessType_23_, v_type_26_);
v___x_28_ = lean_apply_4(v_toBind_24_, lean_box(0), lean_box(0), v___x_27_, v___f_25_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__2(uint8_t v___x_29_, lean_object* v_inst_30_, lean_object* v_toBind_31_, lean_object* v___f_32_, lean_object* v_type_33_){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_34_ = lean_box(v___x_29_);
v___x_35_ = lean_box(v___x_29_);
v___x_36_ = lean_box(v___x_29_);
v___x_37_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaReduce___boxed), 9, 4);
lean_closure_set(v___x_37_, 0, v_type_33_);
lean_closure_set(v___x_37_, 1, v___x_34_);
lean_closure_set(v___x_37_, 2, v___x_35_);
lean_closure_set(v___x_37_, 3, v___x_36_);
v___x_38_ = lean_apply_2(v_inst_30_, lean_box(0), v___x_37_);
v___x_39_ = lean_apply_4(v_toBind_31_, lean_box(0), lean_box(0), v___x_38_, v___f_32_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__2___boxed(lean_object* v___x_40_, lean_object* v_inst_41_, lean_object* v_toBind_42_, lean_object* v___f_43_, lean_object* v_type_44_){
_start:
{
uint8_t v___x_181__boxed_45_; lean_object* v_res_46_; 
v___x_181__boxed_45_ = lean_unbox(v___x_40_);
v_res_46_ = l_Lean_Meta_abstractProof___redArg___lam__2(v___x_181__boxed_45_, v_inst_41_, v_toBind_42_, v___f_43_, v_type_44_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__3(lean_object* v_type_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l_Lean_Core_betaReduce(v_type_47_, v___y_50_, v___y_51_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__3___boxed(lean_object* v_type_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Lean_Meta_abstractProof___redArg___lam__3(v_type_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_);
lean_dec(v___y_58_);
lean_dec_ref(v___y_57_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__4(lean_object* v_inst_61_, lean_object* v_toBind_62_, lean_object* v___f_63_, lean_object* v_type_64_){
_start:
{
lean_object* v___f_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___f_65_ = lean_alloc_closure((void*)(l_Lean_Meta_abstractProof___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_65_, 0, v_type_64_);
v___x_66_ = lean_apply_2(v_inst_61_, lean_box(0), v___f_65_);
v___x_67_ = lean_apply_4(v_toBind_62_, lean_box(0), lean_box(0), v___x_66_, v___f_63_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg(lean_object* v_inst_68_, lean_object* v_inst_69_, lean_object* v_inst_70_, lean_object* v_inst_71_, lean_object* v_proof_72_, uint8_t v_cache_73_, lean_object* v_postprocessType_74_){
_start:
{
lean_object* v_toBind_75_; lean_object* v___x_76_; lean_object* v___x_77_; uint8_t v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___f_81_; lean_object* v___f_82_; lean_object* v___x_83_; lean_object* v___f_84_; lean_object* v___f_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v_toBind_75_ = lean_ctor_get(v_inst_68_, 1);
lean_inc_n(v_toBind_75_, 4);
lean_inc_ref(v_proof_72_);
v___x_76_ = lean_alloc_closure((void*)(l_Lean_Meta_inferType___boxed), 6, 1);
lean_closure_set(v___x_76_, 0, v_proof_72_);
lean_inc_n(v_inst_69_, 3);
v___x_77_ = lean_apply_2(v_inst_69_, lean_box(0), v___x_76_);
v___x_78_ = 1;
v___x_79_ = lean_box(v___x_78_);
v___x_80_ = lean_box(v_cache_73_);
v___f_81_ = lean_alloc_closure((void*)(l_Lean_Meta_abstractProof___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_81_, 0, v_proof_72_);
lean_closure_set(v___f_81_, 1, v___x_79_);
lean_closure_set(v___f_81_, 2, v_inst_69_);
lean_closure_set(v___f_81_, 3, v___x_80_);
v___f_82_ = lean_alloc_closure((void*)(l_Lean_Meta_abstractProof___redArg___lam__1), 4, 3);
lean_closure_set(v___f_82_, 0, v_postprocessType_74_);
lean_closure_set(v___f_82_, 1, v_toBind_75_);
lean_closure_set(v___f_82_, 2, v___f_81_);
v___x_83_ = lean_box(v___x_78_);
v___f_84_ = lean_alloc_closure((void*)(l_Lean_Meta_abstractProof___redArg___lam__2___boxed), 5, 4);
lean_closure_set(v___f_84_, 0, v___x_83_);
lean_closure_set(v___f_84_, 1, v_inst_69_);
lean_closure_set(v___f_84_, 2, v_toBind_75_);
lean_closure_set(v___f_84_, 3, v___f_82_);
v___f_85_ = lean_alloc_closure((void*)(l_Lean_Meta_abstractProof___redArg___lam__4), 4, 3);
lean_closure_set(v___f_85_, 0, v_inst_69_);
lean_closure_set(v___f_85_, 1, v_toBind_75_);
lean_closure_set(v___f_85_, 2, v___f_84_);
v___x_86_ = l_Lean_withoutExporting___redArg(v_inst_68_, v_inst_70_, v_inst_71_, v___x_77_, v___x_78_);
v___x_87_ = lean_apply_4(v_toBind_75_, lean_box(0), lean_box(0), v___x_86_, v___f_85_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___boxed(lean_object* v_inst_88_, lean_object* v_inst_89_, lean_object* v_inst_90_, lean_object* v_inst_91_, lean_object* v_proof_92_, lean_object* v_cache_93_, lean_object* v_postprocessType_94_){
_start:
{
uint8_t v_cache_boxed_95_; lean_object* v_res_96_; 
v_cache_boxed_95_ = lean_unbox(v_cache_93_);
v_res_96_ = l_Lean_Meta_abstractProof___redArg(v_inst_88_, v_inst_89_, v_inst_90_, v_inst_91_, v_proof_92_, v_cache_boxed_95_, v_postprocessType_94_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof(lean_object* v_m_97_, lean_object* v_inst_98_, lean_object* v_inst_99_, lean_object* v_inst_100_, lean_object* v_inst_101_, lean_object* v_inst_102_, lean_object* v_proof_103_, uint8_t v_cache_104_, lean_object* v_postprocessType_105_){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = l_Lean_Meta_abstractProof___redArg(v_inst_98_, v_inst_99_, v_inst_100_, v_inst_102_, v_proof_103_, v_cache_104_, v_postprocessType_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___boxed(lean_object* v_m_107_, lean_object* v_inst_108_, lean_object* v_inst_109_, lean_object* v_inst_110_, lean_object* v_inst_111_, lean_object* v_inst_112_, lean_object* v_proof_113_, lean_object* v_cache_114_, lean_object* v_postprocessType_115_){
_start:
{
uint8_t v_cache_boxed_116_; lean_object* v_res_117_; 
v_cache_boxed_116_ = lean_unbox(v_cache_114_);
v_res_117_ = l_Lean_Meta_abstractProof(v_m_107_, v_inst_108_, v_inst_109_, v_inst_110_, v_inst_111_, v_inst_112_, v_proof_113_, v_cache_boxed_116_, v_postprocessType_115_);
lean_dec(v_inst_111_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_getLambdaBody(lean_object* v_e_118_){
_start:
{
if (lean_obj_tag(v_e_118_) == 6)
{
lean_object* v_body_119_; 
v_body_119_ = lean_ctor_get(v_e_118_, 2);
v_e_118_ = v_body_119_;
goto _start;
}
else
{
lean_inc_ref(v_e_118_);
return v_e_118_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_getLambdaBody___boxed(lean_object* v_e_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lean_Meta_AbstractNestedProofs_getLambdaBody(v_e_121_);
lean_dec_ref(v_e_121_);
return v_res_122_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__0(uint8_t v_a_123_, uint8_t v___x_124_, lean_object* v_as_125_, size_t v_i_126_, size_t v_stop_127_){
_start:
{
uint8_t v___x_128_; 
v___x_128_ = lean_usize_dec_eq(v_i_126_, v_stop_127_);
if (v___x_128_ == 0)
{
uint8_t v___x_129_; uint8_t v___y_131_; lean_object* v___x_135_; uint8_t v___x_136_; 
v___x_129_ = 1;
v___x_135_ = lean_array_uget_borrowed(v_as_125_, v_i_126_);
v___x_136_ = l_Lean_Expr_isAtomic(v___x_135_);
if (v___x_136_ == 0)
{
v___y_131_ = v_a_123_;
goto v___jp_130_;
}
else
{
v___y_131_ = v___x_124_;
goto v___jp_130_;
}
v___jp_130_:
{
if (v___y_131_ == 0)
{
size_t v___x_132_; size_t v___x_133_; 
v___x_132_ = ((size_t)1ULL);
v___x_133_ = lean_usize_add(v_i_126_, v___x_132_);
v_i_126_ = v___x_133_;
goto _start;
}
else
{
return v___x_129_;
}
}
}
else
{
uint8_t v___x_137_; 
v___x_137_ = 0;
return v___x_137_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__0___boxed(lean_object* v_a_138_, lean_object* v___x_139_, lean_object* v_as_140_, lean_object* v_i_141_, lean_object* v_stop_142_){
_start:
{
uint8_t v_a_4072__boxed_143_; uint8_t v___x_4073__boxed_144_; size_t v_i_boxed_145_; size_t v_stop_boxed_146_; uint8_t v_res_147_; lean_object* v_r_148_; 
v_a_4072__boxed_143_ = lean_unbox(v_a_138_);
v___x_4073__boxed_144_ = lean_unbox(v___x_139_);
v_i_boxed_145_ = lean_unbox_usize(v_i_141_);
lean_dec(v_i_141_);
v_stop_boxed_146_ = lean_unbox_usize(v_stop_142_);
lean_dec(v_stop_142_);
v_res_147_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__0(v_a_4072__boxed_143_, v___x_4073__boxed_144_, v_as_140_, v_i_boxed_145_, v_stop_boxed_146_);
lean_dec_ref(v_as_140_);
v_r_148_ = lean_box(v_res_147_);
return v_r_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1_spec__1___redArg(uint8_t v_a_149_, uint8_t v___x_150_, lean_object* v___x_151_, lean_object* v_x_152_, lean_object* v_x_153_, lean_object* v_x_154_){
_start:
{
if (lean_obj_tag(v_x_152_) == 5)
{
lean_object* v_fn_169_; lean_object* v_arg_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v_fn_169_ = lean_ctor_get(v_x_152_, 0);
lean_inc_ref(v_fn_169_);
v_arg_170_ = lean_ctor_get(v_x_152_, 1);
lean_inc_ref(v_arg_170_);
lean_dec_ref_known(v_x_152_, 2);
v___x_171_ = lean_array_set(v_x_153_, v_x_154_, v_arg_170_);
v___x_172_ = lean_unsigned_to_nat(1u);
v___x_173_ = lean_nat_sub(v_x_154_, v___x_172_);
lean_dec(v_x_154_);
v_x_152_ = v_fn_169_;
v_x_153_ = v___x_171_;
v_x_154_ = v___x_173_;
goto _start;
}
else
{
uint8_t v___x_175_; 
lean_dec(v_x_154_);
v___x_175_ = l_Lean_Expr_isAtomic(v_x_152_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; lean_object* v___x_177_; 
lean_dec_ref(v_x_153_);
lean_dec_ref(v_x_152_);
lean_dec_ref(v___x_151_);
v___x_176_ = lean_box(v_a_149_);
v___x_177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_177_, 0, v___x_176_);
return v___x_177_;
}
else
{
if (v___x_150_ == 0)
{
if (lean_obj_tag(v_x_152_) == 4)
{
lean_object* v_declName_178_; uint8_t v___x_179_; 
v_declName_178_ = lean_ctor_get(v_x_152_, 0);
lean_inc(v_declName_178_);
lean_dec_ref_known(v_x_152_, 2);
v___x_179_ = l_Lean_Environment_contains(v___x_151_, v_declName_178_, v_a_149_);
if (v___x_179_ == 0)
{
lean_object* v___x_180_; lean_object* v___x_181_; 
lean_dec_ref(v_x_153_);
v___x_180_ = lean_box(v_a_149_);
v___x_181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_181_, 0, v___x_180_);
return v___x_181_;
}
else
{
goto v___jp_156_;
}
}
else
{
lean_dec_ref(v_x_152_);
lean_dec_ref(v___x_151_);
goto v___jp_156_;
}
}
else
{
lean_object* v___x_182_; lean_object* v___x_183_; 
lean_dec_ref(v_x_153_);
lean_dec_ref(v_x_152_);
lean_dec_ref(v___x_151_);
v___x_182_ = lean_box(v_a_149_);
v___x_183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_183_, 0, v___x_182_);
return v___x_183_;
}
}
}
v___jp_156_:
{
lean_object* v___x_157_; lean_object* v___x_158_; uint8_t v___x_159_; 
v___x_157_ = lean_unsigned_to_nat(0u);
v___x_158_ = lean_array_get_size(v_x_153_);
v___x_159_ = lean_nat_dec_lt(v___x_157_, v___x_158_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; lean_object* v___x_161_; 
lean_dec_ref(v_x_153_);
v___x_160_ = lean_box(v___x_159_);
v___x_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
return v___x_161_;
}
else
{
if (v___x_159_ == 0)
{
lean_object* v___x_162_; lean_object* v___x_163_; 
lean_dec_ref(v_x_153_);
v___x_162_ = lean_box(v___x_159_);
v___x_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
return v___x_163_;
}
else
{
size_t v___x_164_; size_t v___x_165_; uint8_t v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_164_ = ((size_t)0ULL);
v___x_165_ = lean_usize_of_nat(v___x_158_);
v___x_166_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__0(v_a_149_, v___x_150_, v_x_153_, v___x_164_, v___x_165_);
lean_dec_ref(v_x_153_);
v___x_167_ = lean_box(v___x_166_);
v___x_168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
return v___x_168_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1_spec__1___redArg___boxed(lean_object* v_a_184_, lean_object* v___x_185_, lean_object* v___x_186_, lean_object* v_x_187_, lean_object* v_x_188_, lean_object* v_x_189_, lean_object* v___y_190_){
_start:
{
uint8_t v_a_4098__boxed_191_; uint8_t v___x_4099__boxed_192_; lean_object* v_res_193_; 
v_a_4098__boxed_191_ = lean_unbox(v_a_184_);
v___x_4099__boxed_192_ = lean_unbox(v___x_185_);
v_res_193_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1_spec__1___redArg(v_a_4098__boxed_191_, v___x_4099__boxed_192_, v___x_186_, v_x_187_, v_x_188_, v_x_189_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1(uint8_t v_a_194_, uint8_t v___x_195_, lean_object* v___x_196_, lean_object* v_x_197_, lean_object* v_x_198_, lean_object* v_x_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_){
_start:
{
if (lean_obj_tag(v_x_197_) == 5)
{
lean_object* v_fn_218_; lean_object* v_arg_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v_fn_218_ = lean_ctor_get(v_x_197_, 0);
lean_inc_ref(v_fn_218_);
v_arg_219_ = lean_ctor_get(v_x_197_, 1);
lean_inc_ref(v_arg_219_);
lean_dec_ref_known(v_x_197_, 2);
v___x_220_ = lean_array_set(v_x_198_, v_x_199_, v_arg_219_);
v___x_221_ = lean_unsigned_to_nat(1u);
v___x_222_ = lean_nat_sub(v_x_199_, v___x_221_);
v___x_223_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1_spec__1___redArg(v_a_194_, v___x_195_, v___x_196_, v_fn_218_, v___x_220_, v___x_222_);
return v___x_223_;
}
else
{
uint8_t v___x_224_; 
v___x_224_ = l_Lean_Expr_isAtomic(v_x_197_);
if (v___x_224_ == 0)
{
lean_object* v___x_225_; lean_object* v___x_226_; 
lean_dec_ref(v_x_198_);
lean_dec_ref(v_x_197_);
lean_dec_ref(v___x_196_);
v___x_225_ = lean_box(v_a_194_);
v___x_226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_226_, 0, v___x_225_);
return v___x_226_;
}
else
{
if (v___x_195_ == 0)
{
if (lean_obj_tag(v_x_197_) == 4)
{
lean_object* v_declName_227_; uint8_t v___x_228_; 
v_declName_227_ = lean_ctor_get(v_x_197_, 0);
lean_inc(v_declName_227_);
lean_dec_ref_known(v_x_197_, 2);
v___x_228_ = l_Lean_Environment_contains(v___x_196_, v_declName_227_, v_a_194_);
if (v___x_228_ == 0)
{
lean_object* v___x_229_; lean_object* v___x_230_; 
lean_dec_ref(v_x_198_);
v___x_229_ = lean_box(v_a_194_);
v___x_230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_230_, 0, v___x_229_);
return v___x_230_;
}
else
{
goto v___jp_205_;
}
}
else
{
lean_dec_ref(v_x_197_);
lean_dec_ref(v___x_196_);
goto v___jp_205_;
}
}
else
{
lean_object* v___x_231_; lean_object* v___x_232_; 
lean_dec_ref(v_x_198_);
lean_dec_ref(v_x_197_);
lean_dec_ref(v___x_196_);
v___x_231_ = lean_box(v_a_194_);
v___x_232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_232_, 0, v___x_231_);
return v___x_232_;
}
}
}
v___jp_205_:
{
lean_object* v___x_206_; lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_206_ = lean_unsigned_to_nat(0u);
v___x_207_ = lean_array_get_size(v_x_198_);
v___x_208_ = lean_nat_dec_lt(v___x_206_, v___x_207_);
if (v___x_208_ == 0)
{
lean_object* v___x_209_; lean_object* v___x_210_; 
lean_dec_ref(v_x_198_);
v___x_209_ = lean_box(v___x_208_);
v___x_210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_210_, 0, v___x_209_);
return v___x_210_;
}
else
{
if (v___x_208_ == 0)
{
lean_object* v___x_211_; lean_object* v___x_212_; 
lean_dec_ref(v_x_198_);
v___x_211_ = lean_box(v___x_208_);
v___x_212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_212_, 0, v___x_211_);
return v___x_212_;
}
else
{
size_t v___x_213_; size_t v___x_214_; uint8_t v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_213_ = ((size_t)0ULL);
v___x_214_ = lean_usize_of_nat(v___x_207_);
v___x_215_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__0(v_a_194_, v___x_195_, v_x_198_, v___x_213_, v___x_214_);
lean_dec_ref(v_x_198_);
v___x_216_ = lean_box(v___x_215_);
v___x_217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
return v___x_217_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1___boxed(lean_object* v_a_233_, lean_object* v___x_234_, lean_object* v___x_235_, lean_object* v_x_236_, lean_object* v_x_237_, lean_object* v_x_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_){
_start:
{
uint8_t v_a_4176__boxed_244_; uint8_t v___x_4177__boxed_245_; lean_object* v_res_246_; 
v_a_4176__boxed_244_ = lean_unbox(v_a_233_);
v___x_4177__boxed_245_ = lean_unbox(v___x_234_);
v_res_246_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1(v_a_4176__boxed_244_, v___x_4177__boxed_245_, v___x_235_, v_x_236_, v_x_237_, v_x_238_, v___y_239_, v___y_240_, v___y_241_, v___y_242_);
lean_dec(v___y_242_);
lean_dec_ref(v___y_241_);
lean_dec(v___y_240_);
lean_dec_ref(v___y_239_);
lean_dec(v_x_238_);
return v_res_246_;
}
}
static lean_object* _init_l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__4(void){
_start:
{
lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_254_ = lean_box(0);
v___x_255_ = l_unsafeCast___redArg(v___x_254_);
return v___x_255_;
}
}
static lean_object* _init_l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__5(void){
_start:
{
lean_object* v___x_256_; lean_object* v_dummy_257_; 
v___x_256_ = lean_obj_once(&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__4, &l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__4_once, _init_l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__4);
v_dummy_257_ = l_Lean_Expr_sort___override(v___x_256_);
return v_dummy_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0(lean_object* v_e_258_, lean_object* v_env_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_){
_start:
{
lean_object* v___x_265_; 
lean_inc_ref(v_e_258_);
v___x_265_ = l_Lean_Meta_isProof(v_e_258_, v___y_260_, v___y_261_, v___y_262_, v___y_263_);
if (lean_obj_tag(v___x_265_) == 0)
{
lean_object* v_a_266_; uint8_t v___x_267_; 
v_a_266_ = lean_ctor_get(v___x_265_, 0);
lean_inc(v_a_266_);
v___x_267_ = lean_unbox(v_a_266_);
if (v___x_267_ == 0)
{
lean_dec(v_a_266_);
lean_dec_ref(v_env_259_);
lean_dec_ref(v_e_258_);
return v___x_265_;
}
else
{
lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_286_; 
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_265_);
if (v_isSharedCheck_286_ == 0)
{
lean_object* v_unused_287_; 
v_unused_287_ = lean_ctor_get(v___x_265_, 0);
lean_dec(v_unused_287_);
v___x_269_ = v___x_265_;
v_isShared_270_ = v_isSharedCheck_286_;
goto v_resetjp_268_;
}
else
{
lean_dec(v___x_265_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_286_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_271_; uint8_t v___x_272_; 
v___x_271_ = ((lean_object*)(l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__3));
v___x_272_ = l_Lean_Expr_isAppOf(v_e_258_, v___x_271_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; lean_object* v_dummy_274_; lean_object* v_nargs_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; uint8_t v___x_279_; lean_object* v___x_280_; 
lean_del_object(v___x_269_);
v___x_273_ = l_Lean_Meta_AbstractNestedProofs_getLambdaBody(v_e_258_);
lean_dec_ref(v_e_258_);
v_dummy_274_ = lean_obj_once(&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__5, &l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__5_once, _init_l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__5);
v_nargs_275_ = l_Lean_Expr_getAppNumArgs(v___x_273_);
lean_inc(v_nargs_275_);
v___x_276_ = lean_mk_array(v_nargs_275_, v_dummy_274_);
v___x_277_ = lean_unsigned_to_nat(1u);
v___x_278_ = lean_nat_sub(v_nargs_275_, v___x_277_);
lean_dec(v_nargs_275_);
v___x_279_ = lean_unbox(v_a_266_);
lean_dec(v_a_266_);
v___x_280_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1(v___x_279_, v___x_272_, v_env_259_, v___x_273_, v___x_276_, v___x_278_, v___y_260_, v___y_261_, v___y_262_, v___y_263_);
lean_dec(v___x_278_);
return v___x_280_;
}
else
{
uint8_t v___x_281_; lean_object* v___x_282_; lean_object* v___x_284_; 
lean_dec(v_a_266_);
lean_dec_ref(v_env_259_);
lean_dec_ref(v_e_258_);
v___x_281_ = 0;
v___x_282_ = lean_box(v___x_281_);
if (v_isShared_270_ == 0)
{
lean_ctor_set(v___x_269_, 0, v___x_282_);
v___x_284_ = v___x_269_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v___x_282_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
}
}
else
{
lean_dec_ref(v_env_259_);
lean_dec_ref(v_e_258_);
return v___x_265_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___boxed(lean_object* v_e_288_, lean_object* v_env_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0(v_e_288_, v_env_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_);
lean_dec(v___y_293_);
lean_dec_ref(v___y_292_);
lean_dec(v___y_291_);
lean_dec_ref(v___y_290_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___lam__0(lean_object* v___y_296_, uint8_t v_isExporting_297_, lean_object* v___x_298_, lean_object* v___y_299_, lean_object* v___x_300_, lean_object* v_a_x3f_301_){
_start:
{
lean_object* v___x_303_; lean_object* v_env_304_; lean_object* v_nextMacroScope_305_; lean_object* v_ngen_306_; lean_object* v_auxDeclNGen_307_; lean_object* v_traceState_308_; lean_object* v_messages_309_; lean_object* v_infoState_310_; lean_object* v_snapshotTasks_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_336_; 
v___x_303_ = lean_st_ref_take(v___y_296_);
v_env_304_ = lean_ctor_get(v___x_303_, 0);
v_nextMacroScope_305_ = lean_ctor_get(v___x_303_, 1);
v_ngen_306_ = lean_ctor_get(v___x_303_, 2);
v_auxDeclNGen_307_ = lean_ctor_get(v___x_303_, 3);
v_traceState_308_ = lean_ctor_get(v___x_303_, 4);
v_messages_309_ = lean_ctor_get(v___x_303_, 6);
v_infoState_310_ = lean_ctor_get(v___x_303_, 7);
v_snapshotTasks_311_ = lean_ctor_get(v___x_303_, 8);
v_isSharedCheck_336_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_336_ == 0)
{
lean_object* v_unused_337_; 
v_unused_337_ = lean_ctor_get(v___x_303_, 5);
lean_dec(v_unused_337_);
v___x_313_ = v___x_303_;
v_isShared_314_ = v_isSharedCheck_336_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_snapshotTasks_311_);
lean_inc(v_infoState_310_);
lean_inc(v_messages_309_);
lean_inc(v_traceState_308_);
lean_inc(v_auxDeclNGen_307_);
lean_inc(v_ngen_306_);
lean_inc(v_nextMacroScope_305_);
lean_inc(v_env_304_);
lean_dec(v___x_303_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_336_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_315_; lean_object* v___x_317_; 
v___x_315_ = l_Lean_Environment_setExporting(v_env_304_, v_isExporting_297_);
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 5, v___x_298_);
lean_ctor_set(v___x_313_, 0, v___x_315_);
v___x_317_ = v___x_313_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v___x_315_);
lean_ctor_set(v_reuseFailAlloc_335_, 1, v_nextMacroScope_305_);
lean_ctor_set(v_reuseFailAlloc_335_, 2, v_ngen_306_);
lean_ctor_set(v_reuseFailAlloc_335_, 3, v_auxDeclNGen_307_);
lean_ctor_set(v_reuseFailAlloc_335_, 4, v_traceState_308_);
lean_ctor_set(v_reuseFailAlloc_335_, 5, v___x_298_);
lean_ctor_set(v_reuseFailAlloc_335_, 6, v_messages_309_);
lean_ctor_set(v_reuseFailAlloc_335_, 7, v_infoState_310_);
lean_ctor_set(v_reuseFailAlloc_335_, 8, v_snapshotTasks_311_);
v___x_317_ = v_reuseFailAlloc_335_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v_mctx_320_; lean_object* v_zetaDeltaFVarIds_321_; lean_object* v_postponed_322_; lean_object* v_diag_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_333_; 
v___x_318_ = lean_st_ref_put(v___y_296_, v___x_317_);
v___x_319_ = lean_st_ref_take(v___y_299_);
v_mctx_320_ = lean_ctor_get(v___x_319_, 0);
v_zetaDeltaFVarIds_321_ = lean_ctor_get(v___x_319_, 2);
v_postponed_322_ = lean_ctor_get(v___x_319_, 3);
v_diag_323_ = lean_ctor_get(v___x_319_, 4);
v_isSharedCheck_333_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_333_ == 0)
{
lean_object* v_unused_334_; 
v_unused_334_ = lean_ctor_get(v___x_319_, 1);
lean_dec(v_unused_334_);
v___x_325_ = v___x_319_;
v_isShared_326_ = v_isSharedCheck_333_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_diag_323_);
lean_inc(v_postponed_322_);
lean_inc(v_zetaDeltaFVarIds_321_);
lean_inc(v_mctx_320_);
lean_dec(v___x_319_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_333_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_327_; lean_object* v___x_329_; 
v___x_327_ = lean_box(0);
if (v_isShared_326_ == 0)
{
lean_ctor_set(v___x_325_, 1, v___x_300_);
v___x_329_ = v___x_325_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_mctx_320_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v___x_300_);
lean_ctor_set(v_reuseFailAlloc_332_, 2, v_zetaDeltaFVarIds_321_);
lean_ctor_set(v_reuseFailAlloc_332_, 3, v_postponed_322_);
lean_ctor_set(v_reuseFailAlloc_332_, 4, v_diag_323_);
v___x_329_ = v_reuseFailAlloc_332_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = lean_st_ref_put(v___y_299_, v___x_329_);
v___x_331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_331_, 0, v___x_327_);
return v___x_331_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___lam__0___boxed(lean_object* v___y_338_, lean_object* v_isExporting_339_, lean_object* v___x_340_, lean_object* v___y_341_, lean_object* v___x_342_, lean_object* v_a_x3f_343_, lean_object* v___y_344_){
_start:
{
uint8_t v_isExporting_boxed_345_; lean_object* v_res_346_; 
v_isExporting_boxed_345_ = lean_unbox(v_isExporting_339_);
v_res_346_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___lam__0(v___y_338_, v_isExporting_boxed_345_, v___x_340_, v___y_341_, v___x_342_, v_a_x3f_343_);
lean_dec(v_a_x3f_343_);
lean_dec(v___y_341_);
lean_dec(v___y_338_);
return v_res_346_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_347_; 
v___x_347_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_347_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_348_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__0);
v___x_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
return v___x_349_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__1);
v___x_351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
lean_ctor_set(v___x_351_, 1, v___x_350_);
return v___x_351_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__1);
v___x_353_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_353_, 0, v___x_352_);
lean_ctor_set(v___x_353_, 1, v___x_352_);
lean_ctor_set(v___x_353_, 2, v___x_352_);
lean_ctor_set(v___x_353_, 3, v___x_352_);
lean_ctor_set(v___x_353_, 4, v___x_352_);
lean_ctor_set(v___x_353_, 5, v___x_352_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg(lean_object* v_x_354_, uint8_t v_isExporting_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_){
_start:
{
lean_object* v___x_361_; lean_object* v_env_362_; lean_object* v___x_363_; uint8_t v_isModule_364_; 
v___x_361_ = lean_st_ref_get(v___y_359_);
v_env_362_ = lean_ctor_get(v___x_361_, 0);
lean_inc_ref(v_env_362_);
lean_dec(v___x_361_);
v___x_363_ = l_Lean_Environment_header(v_env_362_);
v_isModule_364_ = lean_ctor_get_uint8(v___x_363_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_363_);
if (v_isModule_364_ == 0)
{
lean_object* v___x_365_; 
lean_dec_ref(v_env_362_);
lean_inc(v___y_359_);
lean_inc_ref(v___y_358_);
lean_inc(v___y_357_);
lean_inc_ref(v___y_356_);
v___x_365_ = lean_apply_5(v_x_354_, v___y_356_, v___y_357_, v___y_358_, v___y_359_, lean_box(0));
return v___x_365_;
}
else
{
uint8_t v_isExporting_366_; 
v_isExporting_366_ = lean_ctor_get_uint8(v_env_362_, sizeof(void*)*8);
lean_dec_ref(v_env_362_);
if (v_isExporting_355_ == 0)
{
if (v_isExporting_366_ == 0)
{
lean_object* v___x_432_; 
lean_inc(v___y_359_);
lean_inc_ref(v___y_358_);
lean_inc(v___y_357_);
lean_inc_ref(v___y_356_);
v___x_432_ = lean_apply_5(v_x_354_, v___y_356_, v___y_357_, v___y_358_, v___y_359_, lean_box(0));
return v___x_432_;
}
else
{
goto v___jp_367_;
}
}
else
{
if (v_isExporting_366_ == 0)
{
goto v___jp_367_;
}
else
{
lean_object* v___x_433_; 
lean_inc(v___y_359_);
lean_inc_ref(v___y_358_);
lean_inc(v___y_357_);
lean_inc_ref(v___y_356_);
v___x_433_ = lean_apply_5(v_x_354_, v___y_356_, v___y_357_, v___y_358_, v___y_359_, lean_box(0));
return v___x_433_;
}
}
v___jp_367_:
{
lean_object* v___x_368_; lean_object* v_env_369_; lean_object* v_nextMacroScope_370_; lean_object* v_ngen_371_; lean_object* v_auxDeclNGen_372_; lean_object* v_traceState_373_; lean_object* v_messages_374_; lean_object* v_infoState_375_; lean_object* v_snapshotTasks_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_430_; 
v___x_368_ = lean_st_ref_take(v___y_359_);
v_env_369_ = lean_ctor_get(v___x_368_, 0);
v_nextMacroScope_370_ = lean_ctor_get(v___x_368_, 1);
v_ngen_371_ = lean_ctor_get(v___x_368_, 2);
v_auxDeclNGen_372_ = lean_ctor_get(v___x_368_, 3);
v_traceState_373_ = lean_ctor_get(v___x_368_, 4);
v_messages_374_ = lean_ctor_get(v___x_368_, 6);
v_infoState_375_ = lean_ctor_get(v___x_368_, 7);
v_snapshotTasks_376_ = lean_ctor_get(v___x_368_, 8);
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_368_);
if (v_isSharedCheck_430_ == 0)
{
lean_object* v_unused_431_; 
v_unused_431_ = lean_ctor_get(v___x_368_, 5);
lean_dec(v_unused_431_);
v___x_378_ = v___x_368_;
v_isShared_379_ = v_isSharedCheck_430_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_snapshotTasks_376_);
lean_inc(v_infoState_375_);
lean_inc(v_messages_374_);
lean_inc(v_traceState_373_);
lean_inc(v_auxDeclNGen_372_);
lean_inc(v_ngen_371_);
lean_inc(v_nextMacroScope_370_);
lean_inc(v_env_369_);
lean_dec(v___x_368_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_430_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_383_; 
v___x_380_ = l_Lean_Environment_setExporting(v_env_369_, v_isExporting_355_);
v___x_381_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__2);
if (v_isShared_379_ == 0)
{
lean_ctor_set(v___x_378_, 5, v___x_381_);
lean_ctor_set(v___x_378_, 0, v___x_380_);
v___x_383_ = v___x_378_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v___x_380_);
lean_ctor_set(v_reuseFailAlloc_429_, 1, v_nextMacroScope_370_);
lean_ctor_set(v_reuseFailAlloc_429_, 2, v_ngen_371_);
lean_ctor_set(v_reuseFailAlloc_429_, 3, v_auxDeclNGen_372_);
lean_ctor_set(v_reuseFailAlloc_429_, 4, v_traceState_373_);
lean_ctor_set(v_reuseFailAlloc_429_, 5, v___x_381_);
lean_ctor_set(v_reuseFailAlloc_429_, 6, v_messages_374_);
lean_ctor_set(v_reuseFailAlloc_429_, 7, v_infoState_375_);
lean_ctor_set(v_reuseFailAlloc_429_, 8, v_snapshotTasks_376_);
v___x_383_ = v_reuseFailAlloc_429_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v_mctx_386_; lean_object* v_zetaDeltaFVarIds_387_; lean_object* v_postponed_388_; lean_object* v_diag_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_427_; 
v___x_384_ = lean_st_ref_put(v___y_359_, v___x_383_);
v___x_385_ = lean_st_ref_take(v___y_357_);
v_mctx_386_ = lean_ctor_get(v___x_385_, 0);
v_zetaDeltaFVarIds_387_ = lean_ctor_get(v___x_385_, 2);
v_postponed_388_ = lean_ctor_get(v___x_385_, 3);
v_diag_389_ = lean_ctor_get(v___x_385_, 4);
v_isSharedCheck_427_ = !lean_is_exclusive(v___x_385_);
if (v_isSharedCheck_427_ == 0)
{
lean_object* v_unused_428_; 
v_unused_428_ = lean_ctor_get(v___x_385_, 1);
lean_dec(v_unused_428_);
v___x_391_ = v___x_385_;
v_isShared_392_ = v_isSharedCheck_427_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_diag_389_);
lean_inc(v_postponed_388_);
lean_inc(v_zetaDeltaFVarIds_387_);
lean_inc(v_mctx_386_);
lean_dec(v___x_385_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_427_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_393_; lean_object* v___x_395_; 
v___x_393_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__3, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__3);
if (v_isShared_392_ == 0)
{
lean_ctor_set(v___x_391_, 1, v___x_393_);
v___x_395_ = v___x_391_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_mctx_386_);
lean_ctor_set(v_reuseFailAlloc_426_, 1, v___x_393_);
lean_ctor_set(v_reuseFailAlloc_426_, 2, v_zetaDeltaFVarIds_387_);
lean_ctor_set(v_reuseFailAlloc_426_, 3, v_postponed_388_);
lean_ctor_set(v_reuseFailAlloc_426_, 4, v_diag_389_);
v___x_395_ = v_reuseFailAlloc_426_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
lean_object* v___x_396_; lean_object* v_r_397_; 
v___x_396_ = lean_st_ref_put(v___y_357_, v___x_395_);
lean_inc(v___y_359_);
lean_inc_ref(v___y_358_);
lean_inc(v___y_357_);
lean_inc_ref(v___y_356_);
v_r_397_ = lean_apply_5(v_x_354_, v___y_356_, v___y_357_, v___y_358_, v___y_359_, lean_box(0));
if (lean_obj_tag(v_r_397_) == 0)
{
lean_object* v_a_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_414_; 
v_a_398_ = lean_ctor_get(v_r_397_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v_r_397_);
if (v_isSharedCheck_414_ == 0)
{
v___x_400_ = v_r_397_;
v_isShared_401_ = v_isSharedCheck_414_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_a_398_);
lean_dec(v_r_397_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_414_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_403_; 
lean_inc(v_a_398_);
if (v_isShared_401_ == 0)
{
lean_ctor_set_tag(v___x_400_, 1);
v___x_403_ = v___x_400_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_a_398_);
v___x_403_ = v_reuseFailAlloc_413_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
lean_object* v___x_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_411_; 
v___x_404_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___lam__0(v___y_359_, v_isExporting_366_, v___x_381_, v___y_357_, v___x_393_, v___x_403_);
lean_dec_ref(v___x_403_);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_411_ == 0)
{
lean_object* v_unused_412_; 
v_unused_412_ = lean_ctor_get(v___x_404_, 0);
lean_dec(v_unused_412_);
v___x_406_ = v___x_404_;
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
else
{
lean_dec(v___x_404_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v___x_409_; 
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 0, v_a_398_);
v___x_409_ = v___x_406_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_a_398_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
}
}
}
else
{
lean_object* v_a_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
v_a_415_ = lean_ctor_get(v_r_397_, 0);
lean_inc(v_a_415_);
lean_dec_ref_known(v_r_397_, 1);
v___x_416_ = lean_box(0);
v___x_417_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___lam__0(v___y_359_, v_isExporting_366_, v___x_381_, v___y_357_, v___x_393_, v___x_416_);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_424_ == 0)
{
lean_object* v_unused_425_; 
v_unused_425_ = lean_ctor_get(v___x_417_, 0);
lean_dec(v_unused_425_);
v___x_419_ = v___x_417_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_dec(v___x_417_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
lean_ctor_set_tag(v___x_419_, 1);
lean_ctor_set(v___x_419_, 0, v_a_415_);
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_415_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___boxed(lean_object* v_x_434_, lean_object* v_isExporting_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_){
_start:
{
uint8_t v_isExporting_boxed_441_; lean_object* v_res_442_; 
v_isExporting_boxed_441_ = lean_unbox(v_isExporting_435_);
v_res_442_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg(v_x_434_, v_isExporting_boxed_441_, v___y_436_, v___y_437_, v___y_438_, v___y_439_);
lean_dec(v___y_439_);
lean_dec_ref(v___y_438_);
lean_dec(v___y_437_);
lean_dec_ref(v___y_436_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2___redArg(lean_object* v_x_443_, uint8_t v_when_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_){
_start:
{
if (v_when_444_ == 0)
{
lean_object* v___x_450_; 
lean_inc(v___y_448_);
lean_inc_ref(v___y_447_);
lean_inc(v___y_446_);
lean_inc_ref(v___y_445_);
v___x_450_ = lean_apply_5(v_x_443_, v___y_445_, v___y_446_, v___y_447_, v___y_448_, lean_box(0));
return v___x_450_;
}
else
{
uint8_t v___x_451_; lean_object* v___x_452_; 
v___x_451_ = 0;
v___x_452_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg(v_x_443_, v___x_451_, v___y_445_, v___y_446_, v___y_447_, v___y_448_);
return v___x_452_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2___redArg___boxed(lean_object* v_x_453_, lean_object* v_when_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_){
_start:
{
uint8_t v_when_boxed_460_; lean_object* v_res_461_; 
v_when_boxed_460_ = lean_unbox(v_when_454_);
v_res_461_ = l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2___redArg(v_x_453_, v_when_boxed_460_, v___y_455_, v___y_456_, v___y_457_, v___y_458_);
lean_dec(v___y_458_);
lean_dec_ref(v___y_457_);
lean_dec(v___y_456_);
lean_dec_ref(v___y_455_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof(lean_object* v_e_462_, lean_object* v_a_463_, lean_object* v_a_464_, lean_object* v_a_465_, lean_object* v_a_466_){
_start:
{
lean_object* v___x_468_; lean_object* v_env_469_; lean_object* v___f_470_; uint8_t v___x_471_; lean_object* v___x_472_; 
v___x_468_ = lean_st_ref_get(v_a_466_);
v_env_469_ = lean_ctor_get(v___x_468_, 0);
lean_inc_ref(v_env_469_);
lean_dec(v___x_468_);
v___f_470_ = lean_alloc_closure((void*)(l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___boxed), 7, 2);
lean_closure_set(v___f_470_, 0, v_e_462_);
lean_closure_set(v___f_470_, 1, v_env_469_);
v___x_471_ = 1;
v___x_472_ = l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2___redArg(v___f_470_, v___x_471_, v_a_463_, v_a_464_, v_a_465_, v_a_466_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___boxed(lean_object* v_e_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_){
_start:
{
lean_object* v_res_479_; 
v_res_479_ = l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof(v_e_473_, v_a_474_, v_a_475_, v_a_476_, v_a_477_);
lean_dec(v_a_477_);
lean_dec_ref(v_a_476_);
lean_dec(v_a_475_);
lean_dec_ref(v_a_474_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3(lean_object* v_00_u03b1_480_, lean_object* v_x_481_, uint8_t v_isExporting_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg(v_x_481_, v_isExporting_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___boxed(lean_object* v_00_u03b1_489_, lean_object* v_x_490_, lean_object* v_isExporting_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_){
_start:
{
uint8_t v_isExporting_boxed_497_; lean_object* v_res_498_; 
v_isExporting_boxed_497_ = lean_unbox(v_isExporting_491_);
v_res_498_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3(v_00_u03b1_489_, v_x_490_, v_isExporting_boxed_497_, v___y_492_, v___y_493_, v___y_494_, v___y_495_);
lean_dec(v___y_495_);
lean_dec_ref(v___y_494_);
lean_dec(v___y_493_);
lean_dec_ref(v___y_492_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2(lean_object* v_00_u03b1_499_, lean_object* v_x_500_, uint8_t v_when_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2___redArg(v_x_500_, v_when_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2___boxed(lean_object* v_00_u03b1_508_, lean_object* v_x_509_, lean_object* v_when_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_){
_start:
{
uint8_t v_when_boxed_516_; lean_object* v_res_517_; 
v_when_boxed_516_ = lean_unbox(v_when_510_);
v_res_517_ = l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2(v_00_u03b1_508_, v_x_509_, v_when_boxed_516_, v___y_511_, v___y_512_, v___y_513_, v___y_514_);
lean_dec(v___y_514_);
lean_dec_ref(v___y_513_);
lean_dec(v___y_512_);
lean_dec_ref(v___y_511_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1_spec__1(uint8_t v_a_518_, uint8_t v___x_519_, lean_object* v___x_520_, lean_object* v_x_521_, lean_object* v_x_522_, lean_object* v_x_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1_spec__1___redArg(v_a_518_, v___x_519_, v___x_520_, v_x_521_, v_x_522_, v_x_523_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1_spec__1___boxed(lean_object* v_a_530_, lean_object* v___x_531_, lean_object* v___x_532_, lean_object* v_x_533_, lean_object* v_x_534_, lean_object* v_x_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_){
_start:
{
uint8_t v_a_4647__boxed_541_; uint8_t v___x_4648__boxed_542_; lean_object* v_res_543_; 
v_a_4647__boxed_541_ = lean_unbox(v_a_530_);
v___x_4648__boxed_542_ = lean_unbox(v___x_531_);
v_res_543_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1_spec__1(v_a_4647__boxed_541_, v___x_4648__boxed_542_, v___x_532_, v_x_533_, v_x_534_, v_x_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_);
lean_dec(v___y_539_);
lean_dec_ref(v___y_538_);
lean_dec(v___y_537_);
lean_dec_ref(v___y_536_);
return v_res_543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg___lam__0(lean_object* v_x_544_, uint8_t v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_552_ = lean_box(v___y_545_);
lean_inc(v___y_546_);
v___x_553_ = lean_apply_7(v_x_544_, v___x_552_, v___y_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_, lean_box(0));
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg___lam__0___boxed(lean_object* v_x_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_){
_start:
{
uint8_t v___y_26110__boxed_562_; lean_object* v_res_563_; 
v___y_26110__boxed_562_ = lean_unbox(v___y_555_);
v_res_563_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg___lam__0(v_x_554_, v___y_26110__boxed_562_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_);
lean_dec(v___y_556_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg(lean_object* v_lctx_564_, lean_object* v_localInsts_565_, lean_object* v_x_566_, uint8_t v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_){
_start:
{
lean_object* v___x_574_; lean_object* v___f_575_; lean_object* v___x_576_; 
v___x_574_ = lean_box(v___y_567_);
lean_inc(v___y_568_);
v___f_575_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_575_, 0, v_x_566_);
lean_closure_set(v___f_575_, 1, v___x_574_);
lean_closure_set(v___f_575_, 2, v___y_568_);
v___x_576_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_564_, v_localInsts_565_, v___f_575_, v___y_569_, v___y_570_, v___y_571_, v___y_572_);
if (lean_obj_tag(v___x_576_) == 0)
{
return v___x_576_;
}
else
{
lean_object* v_a_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_584_; 
v_a_577_ = lean_ctor_get(v___x_576_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_584_ == 0)
{
v___x_579_ = v___x_576_;
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_a_577_);
lean_dec(v___x_576_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_582_; 
if (v_isShared_580_ == 0)
{
v___x_582_ = v___x_579_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_a_577_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg___boxed(lean_object* v_lctx_585_, lean_object* v_localInsts_586_, lean_object* v_x_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_){
_start:
{
uint8_t v___y_26135__boxed_595_; lean_object* v_res_596_; 
v___y_26135__boxed_595_ = lean_unbox(v___y_588_);
v_res_596_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg(v_lctx_585_, v_localInsts_586_, v_x_587_, v___y_26135__boxed_595_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
lean_dec(v___y_593_);
lean_dec_ref(v___y_592_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
lean_dec(v___y_589_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3(lean_object* v_00_u03b1_597_, lean_object* v_lctx_598_, lean_object* v_localInsts_599_, lean_object* v_x_600_, uint8_t v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_){
_start:
{
lean_object* v___x_608_; 
v___x_608_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg(v_lctx_598_, v_localInsts_599_, v_x_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_);
return v___x_608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___boxed(lean_object* v_00_u03b1_609_, lean_object* v_lctx_610_, lean_object* v_localInsts_611_, lean_object* v_x_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_){
_start:
{
uint8_t v___y_26179__boxed_620_; lean_object* v_res_621_; 
v___y_26179__boxed_620_ = lean_unbox(v___y_613_);
v_res_621_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3(v_00_u03b1_609_, v_lctx_610_, v_localInsts_611_, v_x_612_, v___y_26179__boxed_620_, v___y_614_, v___y_615_, v___y_616_, v___y_617_, v___y_618_);
lean_dec(v___y_618_);
lean_dec_ref(v___y_617_);
lean_dec(v___y_616_);
lean_dec_ref(v___y_615_);
lean_dec(v___y_614_);
return v_res_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg___lam__0(lean_object* v_k_622_, uint8_t v___y_623_, lean_object* v___y_624_, lean_object* v_b_625_, lean_object* v_c_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_){
_start:
{
lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_632_ = lean_box(v___y_623_);
lean_inc(v___y_630_);
lean_inc_ref(v___y_629_);
lean_inc(v___y_628_);
lean_inc_ref(v___y_627_);
lean_inc(v___y_624_);
v___x_633_ = lean_apply_9(v_k_622_, v_b_625_, v_c_626_, v___x_632_, v___y_624_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, lean_box(0));
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg___lam__0___boxed(lean_object* v_k_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v_b_637_, lean_object* v_c_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_){
_start:
{
uint8_t v___y_26202__boxed_644_; lean_object* v_res_645_; 
v___y_26202__boxed_644_ = lean_unbox(v___y_635_);
v_res_645_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg___lam__0(v_k_634_, v___y_26202__boxed_644_, v___y_636_, v_b_637_, v_c_638_, v___y_639_, v___y_640_, v___y_641_, v___y_642_);
lean_dec(v___y_642_);
lean_dec_ref(v___y_641_);
lean_dec(v___y_640_);
lean_dec_ref(v___y_639_);
lean_dec(v___y_636_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg(lean_object* v_e_646_, lean_object* v_k_647_, uint8_t v_cleanupAnnotations_648_, uint8_t v_preserveNondepLet_649_, uint8_t v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_){
_start:
{
lean_object* v___x_657_; lean_object* v___f_658_; uint8_t v___x_659_; uint8_t v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v___x_657_ = lean_box(v___y_650_);
lean_inc(v___y_651_);
v___f_658_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_658_, 0, v_k_647_);
lean_closure_set(v___f_658_, 1, v___x_657_);
lean_closure_set(v___f_658_, 2, v___y_651_);
v___x_659_ = 1;
v___x_660_ = 0;
v___x_661_ = lean_box(0);
v___x_662_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_646_, v___x_659_, v___x_659_, v_preserveNondepLet_649_, v___x_660_, v___x_661_, v___f_658_, v_cleanupAnnotations_648_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
if (lean_obj_tag(v___x_662_) == 0)
{
return v___x_662_;
}
else
{
lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_670_; 
v_a_663_ = lean_ctor_get(v___x_662_, 0);
v_isSharedCheck_670_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_670_ == 0)
{
v___x_665_ = v___x_662_;
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_dec(v___x_662_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_668_; 
if (v_isShared_666_ == 0)
{
v___x_668_ = v___x_665_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_a_663_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg___boxed(lean_object* v_e_671_, lean_object* v_k_672_, lean_object* v_cleanupAnnotations_673_, lean_object* v_preserveNondepLet_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_682_; uint8_t v_preserveNondepLet_boxed_683_; uint8_t v___y_26227__boxed_684_; lean_object* v_res_685_; 
v_cleanupAnnotations_boxed_682_ = lean_unbox(v_cleanupAnnotations_673_);
v_preserveNondepLet_boxed_683_ = lean_unbox(v_preserveNondepLet_674_);
v___y_26227__boxed_684_ = lean_unbox(v___y_675_);
v_res_685_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg(v_e_671_, v_k_672_, v_cleanupAnnotations_boxed_682_, v_preserveNondepLet_boxed_683_, v___y_26227__boxed_684_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_);
lean_dec(v___y_680_);
lean_dec_ref(v___y_679_);
lean_dec(v___y_678_);
lean_dec_ref(v___y_677_);
lean_dec(v___y_676_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7(lean_object* v_00_u03b1_686_, lean_object* v_e_687_, lean_object* v_k_688_, uint8_t v_cleanupAnnotations_689_, uint8_t v_preserveNondepLet_690_, uint8_t v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_){
_start:
{
lean_object* v___x_698_; 
v___x_698_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg(v_e_687_, v_k_688_, v_cleanupAnnotations_689_, v_preserveNondepLet_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_);
return v___x_698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___boxed(lean_object* v_00_u03b1_699_, lean_object* v_e_700_, lean_object* v_k_701_, lean_object* v_cleanupAnnotations_702_, lean_object* v_preserveNondepLet_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_711_; uint8_t v_preserveNondepLet_boxed_712_; uint8_t v___y_26277__boxed_713_; lean_object* v_res_714_; 
v_cleanupAnnotations_boxed_711_ = lean_unbox(v_cleanupAnnotations_702_);
v_preserveNondepLet_boxed_712_ = lean_unbox(v_preserveNondepLet_703_);
v___y_26277__boxed_713_ = lean_unbox(v___y_704_);
v_res_714_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7(v_00_u03b1_699_, v_e_700_, v_k_701_, v_cleanupAnnotations_boxed_711_, v_preserveNondepLet_boxed_712_, v___y_26277__boxed_713_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_);
lean_dec(v___y_709_);
lean_dec_ref(v___y_708_);
lean_dec(v___y_707_);
lean_dec_ref(v___y_706_);
lean_dec(v___y_705_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__8___redArg(lean_object* v_type_715_, lean_object* v_k_716_, uint8_t v_cleanupAnnotations_717_, uint8_t v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_){
_start:
{
lean_object* v___x_725_; lean_object* v___f_726_; uint8_t v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_725_ = lean_box(v___y_718_);
lean_inc(v___y_719_);
v___f_726_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_726_, 0, v_k_716_);
lean_closure_set(v___f_726_, 1, v___x_725_);
lean_closure_set(v___f_726_, 2, v___y_719_);
v___x_727_ = 0;
v___x_728_ = lean_box(0);
v___x_729_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_727_, v___x_728_, v_type_715_, v___f_726_, v_cleanupAnnotations_717_, v___x_727_, v___y_720_, v___y_721_, v___y_722_, v___y_723_);
if (lean_obj_tag(v___x_729_) == 0)
{
return v___x_729_;
}
else
{
lean_object* v_a_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_737_; 
v_a_730_ = lean_ctor_get(v___x_729_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_729_);
if (v_isSharedCheck_737_ == 0)
{
v___x_732_ = v___x_729_;
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_a_730_);
lean_dec(v___x_729_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_735_; 
if (v_isShared_733_ == 0)
{
v___x_735_ = v___x_732_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_a_730_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__8___redArg___boxed(lean_object* v_type_738_, lean_object* v_k_739_, lean_object* v_cleanupAnnotations_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_748_; uint8_t v___y_26300__boxed_749_; lean_object* v_res_750_; 
v_cleanupAnnotations_boxed_748_ = lean_unbox(v_cleanupAnnotations_740_);
v___y_26300__boxed_749_ = lean_unbox(v___y_741_);
v_res_750_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__8___redArg(v_type_738_, v_k_739_, v_cleanupAnnotations_boxed_748_, v___y_26300__boxed_749_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_);
lean_dec(v___y_746_);
lean_dec_ref(v___y_745_);
lean_dec(v___y_744_);
lean_dec_ref(v___y_743_);
lean_dec(v___y_742_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__8(lean_object* v_00_u03b1_751_, lean_object* v_type_752_, lean_object* v_k_753_, uint8_t v_cleanupAnnotations_754_, uint8_t v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v___x_762_; 
v___x_762_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__8___redArg(v_type_752_, v_k_753_, v_cleanupAnnotations_754_, v___y_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
return v___x_762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__8___boxed(lean_object* v_00_u03b1_763_, lean_object* v_type_764_, lean_object* v_k_765_, lean_object* v_cleanupAnnotations_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_774_; uint8_t v___y_26348__boxed_775_; lean_object* v_res_776_; 
v_cleanupAnnotations_boxed_774_ = lean_unbox(v_cleanupAnnotations_766_);
v___y_26348__boxed_775_ = lean_unbox(v___y_767_);
v_res_776_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__8(v_00_u03b1_763_, v_type_764_, v_k_765_, v_cleanupAnnotations_boxed_774_, v___y_26348__boxed_775_, v___y_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_);
lean_dec(v___y_772_);
lean_dec_ref(v___y_771_);
lean_dec(v___y_770_);
lean_dec_ref(v___y_769_);
lean_dec(v___y_768_);
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__5_spec__11___redArg(lean_object* v_x_777_, lean_object* v_x_778_, lean_object* v_x_779_, lean_object* v_x_780_){
_start:
{
lean_object* v_ks_781_; lean_object* v_vs_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_806_; 
v_ks_781_ = lean_ctor_get(v_x_777_, 0);
v_vs_782_ = lean_ctor_get(v_x_777_, 1);
v_isSharedCheck_806_ = !lean_is_exclusive(v_x_777_);
if (v_isSharedCheck_806_ == 0)
{
v___x_784_ = v_x_777_;
v_isShared_785_ = v_isSharedCheck_806_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_vs_782_);
lean_inc(v_ks_781_);
lean_dec(v_x_777_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_806_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v___x_786_; uint8_t v___x_787_; 
v___x_786_ = lean_array_get_size(v_ks_781_);
v___x_787_ = lean_nat_dec_lt(v_x_778_, v___x_786_);
if (v___x_787_ == 0)
{
lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_791_; 
lean_dec(v_x_778_);
v___x_788_ = lean_array_push(v_ks_781_, v_x_779_);
v___x_789_ = lean_array_push(v_vs_782_, v_x_780_);
if (v_isShared_785_ == 0)
{
lean_ctor_set(v___x_784_, 1, v___x_789_);
lean_ctor_set(v___x_784_, 0, v___x_788_);
v___x_791_ = v___x_784_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v___x_788_);
lean_ctor_set(v_reuseFailAlloc_792_, 1, v___x_789_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
else
{
lean_object* v_k_x27_793_; uint8_t v___x_794_; 
v_k_x27_793_ = lean_array_fget_borrowed(v_ks_781_, v_x_778_);
v___x_794_ = l_Lean_instBEqFVarId_beq(v_x_779_, v_k_x27_793_);
if (v___x_794_ == 0)
{
lean_object* v___x_796_; 
if (v_isShared_785_ == 0)
{
v___x_796_ = v___x_784_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_ks_781_);
lean_ctor_set(v_reuseFailAlloc_800_, 1, v_vs_782_);
v___x_796_ = v_reuseFailAlloc_800_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_797_ = lean_unsigned_to_nat(1u);
v___x_798_ = lean_nat_add(v_x_778_, v___x_797_);
lean_dec(v_x_778_);
v_x_777_ = v___x_796_;
v_x_778_ = v___x_798_;
goto _start;
}
}
else
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_804_; 
v___x_801_ = lean_array_fset(v_ks_781_, v_x_778_, v_x_779_);
v___x_802_ = lean_array_fset(v_vs_782_, v_x_778_, v_x_780_);
lean_dec(v_x_778_);
if (v_isShared_785_ == 0)
{
lean_ctor_set(v___x_784_, 1, v___x_802_);
lean_ctor_set(v___x_784_, 0, v___x_801_);
v___x_804_ = v___x_784_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v___x_801_);
lean_ctor_set(v_reuseFailAlloc_805_, 1, v___x_802_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__5___redArg(lean_object* v_n_807_, lean_object* v_k_808_, lean_object* v_v_809_){
_start:
{
lean_object* v___x_810_; lean_object* v___x_811_; 
v___x_810_ = lean_unsigned_to_nat(0u);
v___x_811_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__5_spec__11___redArg(v_n_807_, v___x_810_, v_k_808_, v_v_809_);
return v___x_811_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_812_ = lean_box(0);
v___x_813_ = l_unsafeCast___redArg(v___x_812_);
return v___x_813_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_814_; 
v___x_814_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___redArg(lean_object* v_x_815_, size_t v_x_816_, size_t v_x_817_, lean_object* v_x_818_, lean_object* v_x_819_){
_start:
{
if (lean_obj_tag(v_x_815_) == 0)
{
lean_object* v_es_820_; size_t v___x_821_; size_t v___x_822_; lean_object* v_j_823_; lean_object* v___x_824_; uint8_t v___x_825_; 
v_es_820_ = lean_ctor_get(v_x_815_, 0);
v___x_821_ = ((size_t)31ULL);
v___x_822_ = lean_usize_land(v_x_816_, v___x_821_);
v_j_823_ = lean_usize_to_nat(v___x_822_);
v___x_824_ = lean_array_get_size(v_es_820_);
v___x_825_ = lean_nat_dec_lt(v_j_823_, v___x_824_);
if (v___x_825_ == 0)
{
lean_dec(v_j_823_);
lean_dec(v_x_819_);
lean_dec(v_x_818_);
return v_x_815_;
}
else
{
lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_864_; 
lean_inc_ref(v_es_820_);
v_isSharedCheck_864_ = !lean_is_exclusive(v_x_815_);
if (v_isSharedCheck_864_ == 0)
{
lean_object* v_unused_865_; 
v_unused_865_ = lean_ctor_get(v_x_815_, 0);
lean_dec(v_unused_865_);
v___x_827_ = v_x_815_;
v_isShared_828_ = v_isSharedCheck_864_;
goto v_resetjp_826_;
}
else
{
lean_dec(v_x_815_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_864_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v_v_829_; lean_object* v___x_830_; lean_object* v_xs_x27_831_; lean_object* v___y_833_; 
v_v_829_ = lean_array_fget(v_es_820_, v_j_823_);
v___x_830_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___redArg___closed__0);
v_xs_x27_831_ = lean_array_fset(v_es_820_, v_j_823_, v___x_830_);
switch(lean_obj_tag(v_v_829_))
{
case 0:
{
lean_object* v_key_838_; lean_object* v_val_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_849_; 
v_key_838_ = lean_ctor_get(v_v_829_, 0);
v_val_839_ = lean_ctor_get(v_v_829_, 1);
v_isSharedCheck_849_ = !lean_is_exclusive(v_v_829_);
if (v_isSharedCheck_849_ == 0)
{
v___x_841_ = v_v_829_;
v_isShared_842_ = v_isSharedCheck_849_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_val_839_);
lean_inc(v_key_838_);
lean_dec(v_v_829_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_849_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
uint8_t v___x_843_; 
v___x_843_ = l_Lean_instBEqFVarId_beq(v_x_818_, v_key_838_);
if (v___x_843_ == 0)
{
lean_object* v___x_844_; lean_object* v___x_845_; 
lean_del_object(v___x_841_);
v___x_844_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_838_, v_val_839_, v_x_818_, v_x_819_);
v___x_845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_845_, 0, v___x_844_);
v___y_833_ = v___x_845_;
goto v___jp_832_;
}
else
{
lean_object* v___x_847_; 
lean_dec(v_val_839_);
lean_dec(v_key_838_);
if (v_isShared_842_ == 0)
{
lean_ctor_set(v___x_841_, 1, v_x_819_);
lean_ctor_set(v___x_841_, 0, v_x_818_);
v___x_847_ = v___x_841_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_x_818_);
lean_ctor_set(v_reuseFailAlloc_848_, 1, v_x_819_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
v___y_833_ = v___x_847_;
goto v___jp_832_;
}
}
}
}
case 1:
{
lean_object* v_node_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_862_; 
v_node_850_ = lean_ctor_get(v_v_829_, 0);
v_isSharedCheck_862_ = !lean_is_exclusive(v_v_829_);
if (v_isSharedCheck_862_ == 0)
{
v___x_852_ = v_v_829_;
v_isShared_853_ = v_isSharedCheck_862_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_node_850_);
lean_dec(v_v_829_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_862_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
size_t v___x_854_; size_t v___x_855_; size_t v___x_856_; size_t v___x_857_; lean_object* v___x_858_; lean_object* v___x_860_; 
v___x_854_ = ((size_t)5ULL);
v___x_855_ = lean_usize_shift_right(v_x_816_, v___x_854_);
v___x_856_ = ((size_t)1ULL);
v___x_857_ = lean_usize_add(v_x_817_, v___x_856_);
v___x_858_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___redArg(v_node_850_, v___x_855_, v___x_857_, v_x_818_, v_x_819_);
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 0, v___x_858_);
v___x_860_ = v___x_852_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v___x_858_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
v___y_833_ = v___x_860_;
goto v___jp_832_;
}
}
}
default: 
{
lean_object* v___x_863_; 
v___x_863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_863_, 0, v_x_818_);
lean_ctor_set(v___x_863_, 1, v_x_819_);
v___y_833_ = v___x_863_;
goto v___jp_832_;
}
}
v___jp_832_:
{
lean_object* v___x_834_; lean_object* v___x_836_; 
v___x_834_ = lean_array_fset(v_xs_x27_831_, v_j_823_, v___y_833_);
lean_dec(v_j_823_);
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 0, v___x_834_);
v___x_836_ = v___x_827_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v___x_834_);
v___x_836_ = v_reuseFailAlloc_837_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
return v___x_836_;
}
}
}
}
}
else
{
lean_object* v_ks_866_; lean_object* v_vs_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_885_; 
v_ks_866_ = lean_ctor_get(v_x_815_, 0);
v_vs_867_ = lean_ctor_get(v_x_815_, 1);
v_isSharedCheck_885_ = !lean_is_exclusive(v_x_815_);
if (v_isSharedCheck_885_ == 0)
{
v___x_869_ = v_x_815_;
v_isShared_870_ = v_isSharedCheck_885_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_vs_867_);
lean_inc(v_ks_866_);
lean_dec(v_x_815_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_885_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_872_; 
if (v_isShared_870_ == 0)
{
v___x_872_ = v___x_869_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v_ks_866_);
lean_ctor_set(v_reuseFailAlloc_884_, 1, v_vs_867_);
v___x_872_ = v_reuseFailAlloc_884_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
lean_object* v_newNode_873_; size_t v___x_874_; uint8_t v___x_875_; 
v_newNode_873_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__5___redArg(v___x_872_, v_x_818_, v_x_819_);
v___x_874_ = ((size_t)7ULL);
v___x_875_ = lean_usize_dec_le(v___x_874_, v_x_817_);
if (v___x_875_ == 0)
{
lean_object* v___x_876_; lean_object* v___x_877_; uint8_t v___x_878_; 
v___x_876_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_873_);
v___x_877_ = lean_unsigned_to_nat(4u);
v___x_878_ = lean_nat_dec_lt(v___x_876_, v___x_877_);
lean_dec(v___x_876_);
if (v___x_878_ == 0)
{
lean_object* v_ks_879_; lean_object* v_vs_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
v_ks_879_ = lean_ctor_get(v_newNode_873_, 0);
lean_inc_ref(v_ks_879_);
v_vs_880_ = lean_ctor_get(v_newNode_873_, 1);
lean_inc_ref(v_vs_880_);
lean_dec_ref(v_newNode_873_);
v___x_881_ = lean_unsigned_to_nat(0u);
v___x_882_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___redArg___closed__1);
v___x_883_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__6___redArg(v_x_817_, v_ks_879_, v_vs_880_, v___x_881_, v___x_882_);
lean_dec_ref(v_vs_880_);
lean_dec_ref(v_ks_879_);
return v___x_883_;
}
else
{
return v_newNode_873_;
}
}
else
{
return v_newNode_873_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__6___redArg(size_t v_depth_886_, lean_object* v_keys_887_, lean_object* v_vals_888_, lean_object* v_i_889_, lean_object* v_entries_890_){
_start:
{
lean_object* v___x_891_; uint8_t v___x_892_; 
v___x_891_ = lean_array_get_size(v_keys_887_);
v___x_892_ = lean_nat_dec_lt(v_i_889_, v___x_891_);
if (v___x_892_ == 0)
{
lean_dec(v_i_889_);
return v_entries_890_;
}
else
{
lean_object* v_k_893_; lean_object* v_v_894_; uint64_t v___x_895_; size_t v_h_896_; size_t v___x_897_; lean_object* v___x_898_; size_t v___x_899_; size_t v___x_900_; size_t v___x_901_; size_t v_h_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v_k_893_ = lean_array_fget_borrowed(v_keys_887_, v_i_889_);
v_v_894_ = lean_array_fget_borrowed(v_vals_888_, v_i_889_);
v___x_895_ = l_Lean_instHashableFVarId_hash(v_k_893_);
v_h_896_ = lean_uint64_to_usize(v___x_895_);
v___x_897_ = ((size_t)5ULL);
v___x_898_ = lean_unsigned_to_nat(1u);
v___x_899_ = ((size_t)1ULL);
v___x_900_ = lean_usize_sub(v_depth_886_, v___x_899_);
v___x_901_ = lean_usize_mul(v___x_897_, v___x_900_);
v_h_902_ = lean_usize_shift_right(v_h_896_, v___x_901_);
v___x_903_ = lean_nat_add(v_i_889_, v___x_898_);
lean_dec(v_i_889_);
lean_inc(v_v_894_);
lean_inc(v_k_893_);
v___x_904_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___redArg(v_entries_890_, v_h_902_, v_depth_886_, v_k_893_, v_v_894_);
v_i_889_ = v___x_903_;
v_entries_890_ = v___x_904_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__6___redArg___boxed(lean_object* v_depth_906_, lean_object* v_keys_907_, lean_object* v_vals_908_, lean_object* v_i_909_, lean_object* v_entries_910_){
_start:
{
size_t v_depth_boxed_911_; lean_object* v_res_912_; 
v_depth_boxed_911_ = lean_unbox_usize(v_depth_906_);
lean_dec(v_depth_906_);
v_res_912_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__6___redArg(v_depth_boxed_911_, v_keys_907_, v_vals_908_, v_i_909_, v_entries_910_);
lean_dec_ref(v_vals_908_);
lean_dec_ref(v_keys_907_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___redArg___boxed(lean_object* v_x_913_, lean_object* v_x_914_, lean_object* v_x_915_, lean_object* v_x_916_, lean_object* v_x_917_){
_start:
{
size_t v_x_26452__boxed_918_; size_t v_x_26453__boxed_919_; lean_object* v_res_920_; 
v_x_26452__boxed_918_ = lean_unbox_usize(v_x_914_);
lean_dec(v_x_914_);
v_x_26453__boxed_919_ = lean_unbox_usize(v_x_915_);
lean_dec(v_x_915_);
v_res_920_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___redArg(v_x_913_, v_x_26452__boxed_918_, v_x_26453__boxed_919_, v_x_916_, v_x_917_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1___redArg(lean_object* v_x_921_, lean_object* v_x_922_, lean_object* v_x_923_){
_start:
{
uint64_t v___x_924_; size_t v___x_925_; size_t v___x_926_; lean_object* v___x_927_; 
v___x_924_ = l_Lean_instHashableFVarId_hash(v_x_922_);
v___x_925_ = lean_uint64_to_usize(v___x_924_);
v___x_926_ = ((size_t)1ULL);
v___x_927_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___redArg(v_x_921_, v___x_925_, v___x_926_, v_x_922_, v_x_923_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__7___redArg(lean_object* v_a_928_, lean_object* v_b_929_, lean_object* v_x_930_){
_start:
{
if (lean_obj_tag(v_x_930_) == 0)
{
lean_dec(v_b_929_);
lean_dec_ref(v_a_928_);
return v_x_930_;
}
else
{
lean_object* v_key_931_; lean_object* v_value_932_; lean_object* v_tail_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_945_; 
v_key_931_ = lean_ctor_get(v_x_930_, 0);
v_value_932_ = lean_ctor_get(v_x_930_, 1);
v_tail_933_ = lean_ctor_get(v_x_930_, 2);
v_isSharedCheck_945_ = !lean_is_exclusive(v_x_930_);
if (v_isSharedCheck_945_ == 0)
{
v___x_935_ = v_x_930_;
v_isShared_936_ = v_isSharedCheck_945_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_tail_933_);
lean_inc(v_value_932_);
lean_inc(v_key_931_);
lean_dec(v_x_930_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_945_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
uint8_t v___x_937_; 
v___x_937_ = l_Lean_ExprStructEq_beq(v_key_931_, v_a_928_);
if (v___x_937_ == 0)
{
lean_object* v___x_938_; lean_object* v___x_940_; 
v___x_938_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__7___redArg(v_a_928_, v_b_929_, v_tail_933_);
if (v_isShared_936_ == 0)
{
lean_ctor_set(v___x_935_, 2, v___x_938_);
v___x_940_ = v___x_935_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_key_931_);
lean_ctor_set(v_reuseFailAlloc_941_, 1, v_value_932_);
lean_ctor_set(v_reuseFailAlloc_941_, 2, v___x_938_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
return v___x_940_;
}
}
else
{
lean_object* v___x_943_; 
lean_dec(v_value_932_);
lean_dec(v_key_931_);
if (v_isShared_936_ == 0)
{
lean_ctor_set(v___x_935_, 1, v_b_929_);
lean_ctor_set(v___x_935_, 0, v_a_928_);
v___x_943_ = v___x_935_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v_a_928_);
lean_ctor_set(v_reuseFailAlloc_944_, 1, v_b_929_);
lean_ctor_set(v_reuseFailAlloc_944_, 2, v_tail_933_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5___redArg(lean_object* v_a_946_, lean_object* v_x_947_){
_start:
{
if (lean_obj_tag(v_x_947_) == 0)
{
uint8_t v___x_948_; 
v___x_948_ = 0;
return v___x_948_;
}
else
{
lean_object* v_key_949_; lean_object* v_tail_950_; uint8_t v___x_951_; 
v_key_949_ = lean_ctor_get(v_x_947_, 0);
v_tail_950_ = lean_ctor_get(v_x_947_, 2);
v___x_951_ = l_Lean_ExprStructEq_beq(v_key_949_, v_a_946_);
if (v___x_951_ == 0)
{
v_x_947_ = v_tail_950_;
goto _start;
}
else
{
return v___x_951_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5___redArg___boxed(lean_object* v_a_953_, lean_object* v_x_954_){
_start:
{
uint8_t v_res_955_; lean_object* v_r_956_; 
v_res_955_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5___redArg(v_a_953_, v_x_954_);
lean_dec(v_x_954_);
lean_dec_ref(v_a_953_);
v_r_956_ = lean_box(v_res_955_);
return v_r_956_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11_spec__16___redArg(lean_object* v_x_957_, lean_object* v_x_958_){
_start:
{
if (lean_obj_tag(v_x_958_) == 0)
{
return v_x_957_;
}
else
{
lean_object* v_key_959_; lean_object* v_value_960_; lean_object* v_tail_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_984_; 
v_key_959_ = lean_ctor_get(v_x_958_, 0);
v_value_960_ = lean_ctor_get(v_x_958_, 1);
v_tail_961_ = lean_ctor_get(v_x_958_, 2);
v_isSharedCheck_984_ = !lean_is_exclusive(v_x_958_);
if (v_isSharedCheck_984_ == 0)
{
v___x_963_ = v_x_958_;
v_isShared_964_ = v_isSharedCheck_984_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_tail_961_);
lean_inc(v_value_960_);
lean_inc(v_key_959_);
lean_dec(v_x_958_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_984_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v___x_965_; uint64_t v___x_966_; uint64_t v___x_967_; uint64_t v___x_968_; uint64_t v_fold_969_; uint64_t v___x_970_; uint64_t v___x_971_; uint64_t v___x_972_; size_t v___x_973_; size_t v___x_974_; size_t v___x_975_; size_t v___x_976_; size_t v___x_977_; lean_object* v___x_978_; lean_object* v___x_980_; 
v___x_965_ = lean_array_get_size(v_x_957_);
v___x_966_ = l_Lean_ExprStructEq_hash(v_key_959_);
v___x_967_ = 32ULL;
v___x_968_ = lean_uint64_shift_right(v___x_966_, v___x_967_);
v_fold_969_ = lean_uint64_xor(v___x_966_, v___x_968_);
v___x_970_ = 16ULL;
v___x_971_ = lean_uint64_shift_right(v_fold_969_, v___x_970_);
v___x_972_ = lean_uint64_xor(v_fold_969_, v___x_971_);
v___x_973_ = lean_uint64_to_usize(v___x_972_);
v___x_974_ = lean_usize_of_nat(v___x_965_);
v___x_975_ = ((size_t)1ULL);
v___x_976_ = lean_usize_sub(v___x_974_, v___x_975_);
v___x_977_ = lean_usize_land(v___x_973_, v___x_976_);
v___x_978_ = lean_array_uget_borrowed(v_x_957_, v___x_977_);
lean_inc(v___x_978_);
if (v_isShared_964_ == 0)
{
lean_ctor_set(v___x_963_, 2, v___x_978_);
v___x_980_ = v___x_963_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v_key_959_);
lean_ctor_set(v_reuseFailAlloc_983_, 1, v_value_960_);
lean_ctor_set(v_reuseFailAlloc_983_, 2, v___x_978_);
v___x_980_ = v_reuseFailAlloc_983_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
lean_object* v___x_981_; 
v___x_981_ = lean_array_uset(v_x_957_, v___x_977_, v___x_980_);
v_x_957_ = v___x_981_;
v_x_958_ = v_tail_961_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11___redArg(lean_object* v_i_985_, lean_object* v_source_986_, lean_object* v_target_987_){
_start:
{
lean_object* v___x_988_; uint8_t v___x_989_; 
v___x_988_ = lean_array_get_size(v_source_986_);
v___x_989_ = lean_nat_dec_lt(v_i_985_, v___x_988_);
if (v___x_989_ == 0)
{
lean_dec_ref(v_source_986_);
lean_dec(v_i_985_);
return v_target_987_;
}
else
{
lean_object* v_es_990_; lean_object* v___x_991_; lean_object* v_source_992_; lean_object* v_target_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v_es_990_ = lean_array_fget(v_source_986_, v_i_985_);
v___x_991_ = lean_box(0);
v_source_992_ = lean_array_fset(v_source_986_, v_i_985_, v___x_991_);
v_target_993_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11_spec__16___redArg(v_target_987_, v_es_990_);
v___x_994_ = lean_unsigned_to_nat(1u);
v___x_995_ = lean_nat_add(v_i_985_, v___x_994_);
lean_dec(v_i_985_);
v_i_985_ = v___x_995_;
v_source_986_ = v_source_992_;
v_target_987_ = v_target_993_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6___redArg(lean_object* v_data_997_){
_start:
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v_nbuckets_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_998_ = lean_array_get_size(v_data_997_);
v___x_999_ = lean_unsigned_to_nat(2u);
v_nbuckets_1000_ = lean_nat_mul(v___x_998_, v___x_999_);
v___x_1001_ = lean_unsigned_to_nat(0u);
v___x_1002_ = lean_box(0);
v___x_1003_ = lean_mk_array(v_nbuckets_1000_, v___x_1002_);
v___x_1004_ = lean_array_propagate_mark(v_data_997_, v___x_1003_);
v___x_1005_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11___redArg(v___x_1001_, v_data_997_, v___x_1004_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4___redArg(lean_object* v_m_1006_, lean_object* v_a_1007_, lean_object* v_b_1008_){
_start:
{
lean_object* v_size_1009_; lean_object* v_buckets_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1053_; 
v_size_1009_ = lean_ctor_get(v_m_1006_, 0);
v_buckets_1010_ = lean_ctor_get(v_m_1006_, 1);
v_isSharedCheck_1053_ = !lean_is_exclusive(v_m_1006_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1012_ = v_m_1006_;
v_isShared_1013_ = v_isSharedCheck_1053_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_buckets_1010_);
lean_inc(v_size_1009_);
lean_dec(v_m_1006_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1053_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1014_; uint64_t v___x_1015_; uint64_t v___x_1016_; uint64_t v___x_1017_; uint64_t v_fold_1018_; uint64_t v___x_1019_; uint64_t v___x_1020_; uint64_t v___x_1021_; size_t v___x_1022_; size_t v___x_1023_; size_t v___x_1024_; size_t v___x_1025_; size_t v___x_1026_; lean_object* v_bkt_1027_; uint8_t v___x_1028_; 
v___x_1014_ = lean_array_get_size(v_buckets_1010_);
v___x_1015_ = l_Lean_ExprStructEq_hash(v_a_1007_);
v___x_1016_ = 32ULL;
v___x_1017_ = lean_uint64_shift_right(v___x_1015_, v___x_1016_);
v_fold_1018_ = lean_uint64_xor(v___x_1015_, v___x_1017_);
v___x_1019_ = 16ULL;
v___x_1020_ = lean_uint64_shift_right(v_fold_1018_, v___x_1019_);
v___x_1021_ = lean_uint64_xor(v_fold_1018_, v___x_1020_);
v___x_1022_ = lean_uint64_to_usize(v___x_1021_);
v___x_1023_ = lean_usize_of_nat(v___x_1014_);
v___x_1024_ = ((size_t)1ULL);
v___x_1025_ = lean_usize_sub(v___x_1023_, v___x_1024_);
v___x_1026_ = lean_usize_land(v___x_1022_, v___x_1025_);
v_bkt_1027_ = lean_array_uget_borrowed(v_buckets_1010_, v___x_1026_);
v___x_1028_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5___redArg(v_a_1007_, v_bkt_1027_);
if (v___x_1028_ == 0)
{
lean_object* v___x_1029_; lean_object* v_size_x27_1030_; lean_object* v___x_1031_; lean_object* v_buckets_x27_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; uint8_t v___x_1038_; 
v___x_1029_ = lean_unsigned_to_nat(1u);
v_size_x27_1030_ = lean_nat_add(v_size_1009_, v___x_1029_);
lean_dec(v_size_1009_);
lean_inc(v_bkt_1027_);
v___x_1031_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1031_, 0, v_a_1007_);
lean_ctor_set(v___x_1031_, 1, v_b_1008_);
lean_ctor_set(v___x_1031_, 2, v_bkt_1027_);
v_buckets_x27_1032_ = lean_array_uset(v_buckets_1010_, v___x_1026_, v___x_1031_);
v___x_1033_ = lean_unsigned_to_nat(4u);
v___x_1034_ = lean_nat_mul(v_size_x27_1030_, v___x_1033_);
v___x_1035_ = lean_unsigned_to_nat(3u);
v___x_1036_ = lean_nat_div(v___x_1034_, v___x_1035_);
lean_dec(v___x_1034_);
v___x_1037_ = lean_array_get_size(v_buckets_x27_1032_);
v___x_1038_ = lean_nat_dec_le(v___x_1036_, v___x_1037_);
lean_dec(v___x_1036_);
if (v___x_1038_ == 0)
{
lean_object* v_val_1039_; lean_object* v___x_1041_; 
v_val_1039_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6___redArg(v_buckets_x27_1032_);
if (v_isShared_1013_ == 0)
{
lean_ctor_set(v___x_1012_, 1, v_val_1039_);
lean_ctor_set(v___x_1012_, 0, v_size_x27_1030_);
v___x_1041_ = v___x_1012_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v_size_x27_1030_);
lean_ctor_set(v_reuseFailAlloc_1042_, 1, v_val_1039_);
v___x_1041_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
return v___x_1041_;
}
}
else
{
lean_object* v___x_1044_; 
if (v_isShared_1013_ == 0)
{
lean_ctor_set(v___x_1012_, 1, v_buckets_x27_1032_);
lean_ctor_set(v___x_1012_, 0, v_size_x27_1030_);
v___x_1044_ = v___x_1012_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v_size_x27_1030_);
lean_ctor_set(v_reuseFailAlloc_1045_, 1, v_buckets_x27_1032_);
v___x_1044_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
return v___x_1044_;
}
}
}
else
{
lean_object* v___x_1046_; lean_object* v_buckets_x27_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1051_; 
lean_inc(v_bkt_1027_);
v___x_1046_ = lean_box(0);
v_buckets_x27_1047_ = lean_array_uset(v_buckets_1010_, v___x_1026_, v___x_1046_);
v___x_1048_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__7___redArg(v_a_1007_, v_b_1008_, v_bkt_1027_);
v___x_1049_ = lean_array_uset(v_buckets_x27_1047_, v___x_1026_, v___x_1048_);
if (v_isShared_1013_ == 0)
{
lean_ctor_set(v___x_1012_, 1, v___x_1049_);
v___x_1051_ = v___x_1012_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_size_1009_);
lean_ctor_set(v_reuseFailAlloc_1052_, 1, v___x_1049_);
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
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9___redArg(lean_object* v_a_1054_, lean_object* v_x_1055_){
_start:
{
if (lean_obj_tag(v_x_1055_) == 0)
{
lean_object* v___x_1056_; 
v___x_1056_ = lean_box(0);
return v___x_1056_;
}
else
{
lean_object* v_key_1057_; lean_object* v_value_1058_; lean_object* v_tail_1059_; uint8_t v___x_1060_; 
v_key_1057_ = lean_ctor_get(v_x_1055_, 0);
v_value_1058_ = lean_ctor_get(v_x_1055_, 1);
v_tail_1059_ = lean_ctor_get(v_x_1055_, 2);
v___x_1060_ = l_Lean_ExprStructEq_beq(v_key_1057_, v_a_1054_);
if (v___x_1060_ == 0)
{
v_x_1055_ = v_tail_1059_;
goto _start;
}
else
{
lean_object* v___x_1062_; 
lean_inc(v_value_1058_);
v___x_1062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1062_, 0, v_value_1058_);
return v___x_1062_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9___redArg___boxed(lean_object* v_a_1063_, lean_object* v_x_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9___redArg(v_a_1063_, v_x_1064_);
lean_dec(v_x_1064_);
lean_dec_ref(v_a_1063_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5___redArg(lean_object* v_m_1066_, lean_object* v_a_1067_){
_start:
{
lean_object* v_buckets_1068_; lean_object* v___x_1069_; uint64_t v___x_1070_; uint64_t v___x_1071_; uint64_t v___x_1072_; uint64_t v_fold_1073_; uint64_t v___x_1074_; uint64_t v___x_1075_; uint64_t v___x_1076_; size_t v___x_1077_; size_t v___x_1078_; size_t v___x_1079_; size_t v___x_1080_; size_t v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v_buckets_1068_ = lean_ctor_get(v_m_1066_, 1);
v___x_1069_ = lean_array_get_size(v_buckets_1068_);
v___x_1070_ = l_Lean_ExprStructEq_hash(v_a_1067_);
v___x_1071_ = 32ULL;
v___x_1072_ = lean_uint64_shift_right(v___x_1070_, v___x_1071_);
v_fold_1073_ = lean_uint64_xor(v___x_1070_, v___x_1072_);
v___x_1074_ = 16ULL;
v___x_1075_ = lean_uint64_shift_right(v_fold_1073_, v___x_1074_);
v___x_1076_ = lean_uint64_xor(v_fold_1073_, v___x_1075_);
v___x_1077_ = lean_uint64_to_usize(v___x_1076_);
v___x_1078_ = lean_usize_of_nat(v___x_1069_);
v___x_1079_ = ((size_t)1ULL);
v___x_1080_ = lean_usize_sub(v___x_1078_, v___x_1079_);
v___x_1081_ = lean_usize_land(v___x_1077_, v___x_1080_);
v___x_1082_ = lean_array_uget_borrowed(v_buckets_1068_, v___x_1081_);
v___x_1083_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9___redArg(v_a_1067_, v___x_1082_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5___redArg___boxed(lean_object* v_m_1084_, lean_object* v_a_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5___redArg(v_m_1084_, v_a_1085_);
lean_dec_ref(v_a_1085_);
lean_dec_ref(v_m_1084_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___lam__0(lean_object* v_proof_1087_, uint8_t v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_){
_start:
{
lean_object* v___x_1095_; 
lean_inc(v___y_1093_);
lean_inc_ref(v___y_1092_);
lean_inc(v___y_1091_);
lean_inc_ref(v___y_1090_);
v___x_1095_ = lean_infer_type(v_proof_1087_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_);
return v___x_1095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___lam__0___boxed(lean_object* v_proof_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_){
_start:
{
uint8_t v___y_26873__boxed_1104_; lean_object* v_res_1105_; 
v___y_26873__boxed_1104_ = lean_unbox(v___y_1097_);
v_res_1105_ = l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___lam__0(v_proof_1096_, v___y_26873__boxed_1104_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_);
lean_dec(v___y_1102_);
lean_dec_ref(v___y_1101_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1099_);
lean_dec(v___y_1098_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11_spec__17___redArg(lean_object* v_x_1106_, uint8_t v_isExporting_1107_, uint8_t v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_){
_start:
{
lean_object* v___x_1115_; lean_object* v_env_1116_; lean_object* v___x_1117_; uint8_t v_isModule_1118_; 
v___x_1115_ = lean_st_ref_get(v___y_1113_);
v_env_1116_ = lean_ctor_get(v___x_1115_, 0);
lean_inc_ref(v_env_1116_);
lean_dec(v___x_1115_);
v___x_1117_ = l_Lean_Environment_header(v_env_1116_);
v_isModule_1118_ = lean_ctor_get_uint8(v___x_1117_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1117_);
if (v_isModule_1118_ == 0)
{
lean_object* v___x_1119_; lean_object* v___x_1120_; 
lean_dec_ref(v_env_1116_);
v___x_1119_ = lean_box(v___y_1108_);
lean_inc(v___y_1113_);
lean_inc_ref(v___y_1112_);
lean_inc(v___y_1111_);
lean_inc_ref(v___y_1110_);
lean_inc(v___y_1109_);
v___x_1120_ = lean_apply_7(v_x_1106_, v___x_1119_, v___y_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_, lean_box(0));
return v___x_1120_;
}
else
{
uint8_t v_isExporting_1121_; 
v_isExporting_1121_ = lean_ctor_get_uint8(v_env_1116_, sizeof(void*)*8);
lean_dec_ref(v_env_1116_);
if (v_isExporting_1107_ == 0)
{
if (v_isExporting_1121_ == 0)
{
lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1188_ = lean_box(v___y_1108_);
lean_inc(v___y_1113_);
lean_inc_ref(v___y_1112_);
lean_inc(v___y_1111_);
lean_inc_ref(v___y_1110_);
lean_inc(v___y_1109_);
v___x_1189_ = lean_apply_7(v_x_1106_, v___x_1188_, v___y_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_, lean_box(0));
return v___x_1189_;
}
else
{
goto v___jp_1122_;
}
}
else
{
if (v_isExporting_1121_ == 0)
{
goto v___jp_1122_;
}
else
{
lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1190_ = lean_box(v___y_1108_);
lean_inc(v___y_1113_);
lean_inc_ref(v___y_1112_);
lean_inc(v___y_1111_);
lean_inc_ref(v___y_1110_);
lean_inc(v___y_1109_);
v___x_1191_ = lean_apply_7(v_x_1106_, v___x_1190_, v___y_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_, lean_box(0));
return v___x_1191_;
}
}
v___jp_1122_:
{
lean_object* v___x_1123_; lean_object* v_env_1124_; lean_object* v_nextMacroScope_1125_; lean_object* v_ngen_1126_; lean_object* v_auxDeclNGen_1127_; lean_object* v_traceState_1128_; lean_object* v_messages_1129_; lean_object* v_infoState_1130_; lean_object* v_snapshotTasks_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1186_; 
v___x_1123_ = lean_st_ref_take(v___y_1113_);
v_env_1124_ = lean_ctor_get(v___x_1123_, 0);
v_nextMacroScope_1125_ = lean_ctor_get(v___x_1123_, 1);
v_ngen_1126_ = lean_ctor_get(v___x_1123_, 2);
v_auxDeclNGen_1127_ = lean_ctor_get(v___x_1123_, 3);
v_traceState_1128_ = lean_ctor_get(v___x_1123_, 4);
v_messages_1129_ = lean_ctor_get(v___x_1123_, 6);
v_infoState_1130_ = lean_ctor_get(v___x_1123_, 7);
v_snapshotTasks_1131_ = lean_ctor_get(v___x_1123_, 8);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1123_);
if (v_isSharedCheck_1186_ == 0)
{
lean_object* v_unused_1187_; 
v_unused_1187_ = lean_ctor_get(v___x_1123_, 5);
lean_dec(v_unused_1187_);
v___x_1133_ = v___x_1123_;
v_isShared_1134_ = v_isSharedCheck_1186_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_snapshotTasks_1131_);
lean_inc(v_infoState_1130_);
lean_inc(v_messages_1129_);
lean_inc(v_traceState_1128_);
lean_inc(v_auxDeclNGen_1127_);
lean_inc(v_ngen_1126_);
lean_inc(v_nextMacroScope_1125_);
lean_inc(v_env_1124_);
lean_dec(v___x_1123_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1186_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1138_; 
v___x_1135_ = l_Lean_Environment_setExporting(v_env_1124_, v_isExporting_1107_);
v___x_1136_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__2);
if (v_isShared_1134_ == 0)
{
lean_ctor_set(v___x_1133_, 5, v___x_1136_);
lean_ctor_set(v___x_1133_, 0, v___x_1135_);
v___x_1138_ = v___x_1133_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v___x_1135_);
lean_ctor_set(v_reuseFailAlloc_1185_, 1, v_nextMacroScope_1125_);
lean_ctor_set(v_reuseFailAlloc_1185_, 2, v_ngen_1126_);
lean_ctor_set(v_reuseFailAlloc_1185_, 3, v_auxDeclNGen_1127_);
lean_ctor_set(v_reuseFailAlloc_1185_, 4, v_traceState_1128_);
lean_ctor_set(v_reuseFailAlloc_1185_, 5, v___x_1136_);
lean_ctor_set(v_reuseFailAlloc_1185_, 6, v_messages_1129_);
lean_ctor_set(v_reuseFailAlloc_1185_, 7, v_infoState_1130_);
lean_ctor_set(v_reuseFailAlloc_1185_, 8, v_snapshotTasks_1131_);
v___x_1138_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v_mctx_1141_; lean_object* v_zetaDeltaFVarIds_1142_; lean_object* v_postponed_1143_; lean_object* v_diag_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1183_; 
v___x_1139_ = lean_st_ref_put(v___y_1113_, v___x_1138_);
v___x_1140_ = lean_st_ref_take(v___y_1111_);
v_mctx_1141_ = lean_ctor_get(v___x_1140_, 0);
v_zetaDeltaFVarIds_1142_ = lean_ctor_get(v___x_1140_, 2);
v_postponed_1143_ = lean_ctor_get(v___x_1140_, 3);
v_diag_1144_ = lean_ctor_get(v___x_1140_, 4);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1183_ == 0)
{
lean_object* v_unused_1184_; 
v_unused_1184_ = lean_ctor_get(v___x_1140_, 1);
lean_dec(v_unused_1184_);
v___x_1146_ = v___x_1140_;
v_isShared_1147_ = v_isSharedCheck_1183_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_diag_1144_);
lean_inc(v_postponed_1143_);
lean_inc(v_zetaDeltaFVarIds_1142_);
lean_inc(v_mctx_1141_);
lean_dec(v___x_1140_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1183_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v___x_1148_; lean_object* v___x_1150_; 
v___x_1148_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__3, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___closed__3);
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 1, v___x_1148_);
v___x_1150_ = v___x_1146_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v_mctx_1141_);
lean_ctor_set(v_reuseFailAlloc_1182_, 1, v___x_1148_);
lean_ctor_set(v_reuseFailAlloc_1182_, 2, v_zetaDeltaFVarIds_1142_);
lean_ctor_set(v_reuseFailAlloc_1182_, 3, v_postponed_1143_);
lean_ctor_set(v_reuseFailAlloc_1182_, 4, v_diag_1144_);
v___x_1150_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v_r_1153_; 
v___x_1151_ = lean_st_ref_put(v___y_1111_, v___x_1150_);
v___x_1152_ = lean_box(v___y_1108_);
lean_inc(v___y_1113_);
lean_inc_ref(v___y_1112_);
lean_inc(v___y_1111_);
lean_inc_ref(v___y_1110_);
lean_inc(v___y_1109_);
v_r_1153_ = lean_apply_7(v_x_1106_, v___x_1152_, v___y_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_, lean_box(0));
if (lean_obj_tag(v_r_1153_) == 0)
{
lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1170_; 
v_a_1154_ = lean_ctor_get(v_r_1153_, 0);
v_isSharedCheck_1170_ = !lean_is_exclusive(v_r_1153_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1156_ = v_r_1153_;
v_isShared_1157_ = v_isSharedCheck_1170_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1154_);
lean_dec(v_r_1153_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1170_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1159_; 
lean_inc(v_a_1154_);
if (v_isShared_1157_ == 0)
{
lean_ctor_set_tag(v___x_1156_, 1);
v___x_1159_ = v___x_1156_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v_a_1154_);
v___x_1159_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
lean_object* v___x_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1167_; 
v___x_1160_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___lam__0(v___y_1113_, v_isExporting_1121_, v___x_1136_, v___y_1111_, v___x_1148_, v___x_1159_);
lean_dec_ref(v___x_1159_);
v_isSharedCheck_1167_ = !lean_is_exclusive(v___x_1160_);
if (v_isSharedCheck_1167_ == 0)
{
lean_object* v_unused_1168_; 
v_unused_1168_ = lean_ctor_get(v___x_1160_, 0);
lean_dec(v_unused_1168_);
v___x_1162_ = v___x_1160_;
v_isShared_1163_ = v_isSharedCheck_1167_;
goto v_resetjp_1161_;
}
else
{
lean_dec(v___x_1160_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1167_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
lean_object* v___x_1165_; 
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 0, v_a_1154_);
v___x_1165_ = v___x_1162_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_a_1154_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
}
}
}
else
{
lean_object* v_a_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1180_; 
v_a_1171_ = lean_ctor_get(v_r_1153_, 0);
lean_inc(v_a_1171_);
lean_dec_ref_known(v_r_1153_, 1);
v___x_1172_ = lean_box(0);
v___x_1173_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__3___redArg___lam__0(v___y_1113_, v_isExporting_1121_, v___x_1136_, v___y_1111_, v___x_1148_, v___x_1172_);
v_isSharedCheck_1180_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1180_ == 0)
{
lean_object* v_unused_1181_; 
v_unused_1181_ = lean_ctor_get(v___x_1173_, 0);
lean_dec(v_unused_1181_);
v___x_1175_ = v___x_1173_;
v_isShared_1176_ = v_isSharedCheck_1180_;
goto v_resetjp_1174_;
}
else
{
lean_dec(v___x_1173_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1180_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
lean_object* v___x_1178_; 
if (v_isShared_1176_ == 0)
{
lean_ctor_set_tag(v___x_1175_, 1);
lean_ctor_set(v___x_1175_, 0, v_a_1171_);
v___x_1178_ = v___x_1175_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v_a_1171_);
v___x_1178_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
return v___x_1178_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11_spec__17___redArg___boxed(lean_object* v_x_1192_, lean_object* v_isExporting_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_){
_start:
{
uint8_t v_isExporting_boxed_1201_; uint8_t v___y_26909__boxed_1202_; lean_object* v_res_1203_; 
v_isExporting_boxed_1201_ = lean_unbox(v_isExporting_1193_);
v___y_26909__boxed_1202_ = lean_unbox(v___y_1194_);
v_res_1203_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11_spec__17___redArg(v_x_1192_, v_isExporting_boxed_1201_, v___y_26909__boxed_1202_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_);
lean_dec(v___y_1199_);
lean_dec_ref(v___y_1198_);
lean_dec(v___y_1197_);
lean_dec_ref(v___y_1196_);
lean_dec(v___y_1195_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11___redArg(lean_object* v_x_1204_, uint8_t v_when_1205_, uint8_t v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_){
_start:
{
if (v_when_1205_ == 0)
{
lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1213_ = lean_box(v___y_1206_);
lean_inc(v___y_1211_);
lean_inc_ref(v___y_1210_);
lean_inc(v___y_1209_);
lean_inc_ref(v___y_1208_);
lean_inc(v___y_1207_);
v___x_1214_ = lean_apply_7(v_x_1204_, v___x_1213_, v___y_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_, lean_box(0));
return v___x_1214_;
}
else
{
uint8_t v___x_1215_; lean_object* v___x_1216_; 
v___x_1215_ = 0;
v___x_1216_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11_spec__17___redArg(v_x_1204_, v___x_1215_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_);
return v___x_1216_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11___redArg___boxed(lean_object* v_x_1217_, lean_object* v_when_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_){
_start:
{
uint8_t v_when_boxed_1226_; uint8_t v___y_27058__boxed_1227_; lean_object* v_res_1228_; 
v_when_boxed_1226_ = lean_unbox(v_when_1218_);
v___y_27058__boxed_1227_ = lean_unbox(v___y_1219_);
v_res_1228_ = l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11___redArg(v_x_1217_, v_when_boxed_1226_, v___y_27058__boxed_1227_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_);
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
lean_dec(v___y_1220_);
return v_res_1228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6(lean_object* v_proof_1229_, uint8_t v_cache_1230_, lean_object* v_postprocessType_1231_, uint8_t v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_){
_start:
{
lean_object* v___f_1239_; uint8_t v___x_1240_; lean_object* v___x_1241_; 
lean_inc_ref(v_proof_1229_);
v___f_1239_ = lean_alloc_closure((void*)(l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1239_, 0, v_proof_1229_);
v___x_1240_ = 1;
v___x_1241_ = l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11___redArg(v___f_1239_, v___x_1240_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_);
if (lean_obj_tag(v___x_1241_) == 0)
{
lean_object* v_a_1242_; lean_object* v___x_1243_; 
v_a_1242_ = lean_ctor_get(v___x_1241_, 0);
lean_inc(v_a_1242_);
lean_dec_ref_known(v___x_1241_, 1);
v___x_1243_ = l_Lean_Core_betaReduce(v_a_1242_, v___y_1236_, v___y_1237_);
if (lean_obj_tag(v___x_1243_) == 0)
{
lean_object* v_a_1244_; lean_object* v___x_1245_; 
v_a_1244_ = lean_ctor_get(v___x_1243_, 0);
lean_inc(v_a_1244_);
lean_dec_ref_known(v___x_1243_, 1);
v___x_1245_ = l_Lean_Meta_zetaReduce(v_a_1244_, v___x_1240_, v___x_1240_, v___x_1240_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_);
if (lean_obj_tag(v___x_1245_) == 0)
{
lean_object* v_a_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; 
v_a_1246_ = lean_ctor_get(v___x_1245_, 0);
lean_inc(v_a_1246_);
lean_dec_ref_known(v___x_1245_, 1);
v___x_1247_ = lean_box(v___y_1232_);
lean_inc(v___y_1237_);
lean_inc_ref(v___y_1236_);
lean_inc(v___y_1235_);
lean_inc_ref(v___y_1234_);
lean_inc(v___y_1233_);
v___x_1248_ = lean_apply_8(v_postprocessType_1231_, v_a_1246_, v___x_1247_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_, lean_box(0));
if (lean_obj_tag(v___x_1248_) == 0)
{
lean_object* v_a_1249_; uint8_t v___y_1251_; 
v_a_1249_ = lean_ctor_get(v___x_1248_, 0);
lean_inc(v_a_1249_);
lean_dec_ref_known(v___x_1248_, 1);
if (v_cache_1230_ == 0)
{
v___y_1251_ = v_cache_1230_;
goto v___jp_1250_;
}
else
{
uint8_t v___x_1254_; 
v___x_1254_ = l_Lean_Expr_hasSorry(v_proof_1229_);
if (v___x_1254_ == 0)
{
v___y_1251_ = v_cache_1230_;
goto v___jp_1250_;
}
else
{
uint8_t v___x_1255_; 
v___x_1255_ = 0;
v___y_1251_ = v___x_1255_;
goto v___jp_1250_;
}
}
v___jp_1250_:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1252_ = lean_box(0);
v___x_1253_ = l_Lean_Meta_mkAuxTheorem(v_a_1249_, v_proof_1229_, v___x_1240_, v___x_1252_, v___y_1251_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_);
return v___x_1253_;
}
}
else
{
lean_dec_ref(v_proof_1229_);
return v___x_1248_;
}
}
else
{
lean_dec_ref(v_postprocessType_1231_);
lean_dec_ref(v_proof_1229_);
return v___x_1245_;
}
}
else
{
lean_dec_ref(v_postprocessType_1231_);
lean_dec_ref(v_proof_1229_);
return v___x_1243_;
}
}
else
{
lean_dec_ref(v_postprocessType_1231_);
lean_dec_ref(v_proof_1229_);
return v___x_1241_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___boxed(lean_object* v_proof_1256_, lean_object* v_cache_1257_, lean_object* v_postprocessType_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_){
_start:
{
uint8_t v_cache_boxed_1266_; uint8_t v___y_27087__boxed_1267_; lean_object* v_res_1268_; 
v_cache_boxed_1266_ = lean_unbox(v_cache_1257_);
v___y_27087__boxed_1267_ = lean_unbox(v___y_1259_);
v_res_1268_ = l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6(v_proof_1256_, v_cache_boxed_1266_, v_postprocessType_1258_, v___y_27087__boxed_1267_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_);
lean_dec(v___y_1264_);
lean_dec_ref(v___y_1263_);
lean_dec(v___y_1262_);
lean_dec_ref(v___y_1261_);
lean_dec(v___y_1260_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_AbstractNestedProofs_visit_spec__2(lean_object* v_as_1269_, size_t v_sz_1270_, size_t v_i_1271_, lean_object* v_b_1272_, uint8_t v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_){
_start:
{
lean_object* v_a_1281_; lean_object* v___y_1286_; lean_object* v___y_1287_; lean_object* v___y_1288_; lean_object* v___y_1289_; lean_object* v___y_1290_; uint8_t v___x_1294_; 
v___x_1294_ = lean_usize_dec_lt(v_i_1271_, v_sz_1270_);
if (v___x_1294_ == 0)
{
lean_object* v___x_1295_; 
v___x_1295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1295_, 0, v_b_1272_);
return v___x_1295_;
}
else
{
lean_object* v_a_1296_; lean_object* v___x_1297_; lean_object* v_localDecl_1299_; lean_object* v___x_1307_; 
v_a_1296_ = lean_array_uget_borrowed(v_as_1269_, v_i_1271_);
v___x_1297_ = l_Lean_Expr_fvarId_x21(v_a_1296_);
lean_inc(v___x_1297_);
v___x_1307_ = l_Lean_FVarId_getDecl___redArg(v___x_1297_, v___y_1275_, v___y_1277_, v___y_1278_);
if (lean_obj_tag(v___x_1307_) == 0)
{
lean_object* v_a_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v_a_1308_ = lean_ctor_get(v___x_1307_, 0);
lean_inc(v_a_1308_);
lean_dec_ref_known(v___x_1307_, 1);
v___x_1309_ = l_Lean_LocalDecl_type(v_a_1308_);
v___x_1310_ = l_Lean_Meta_AbstractNestedProofs_visit(v___x_1309_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_);
if (lean_obj_tag(v___x_1310_) == 0)
{
lean_object* v_a_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
v_a_1311_ = lean_ctor_get(v___x_1310_, 0);
lean_inc(v_a_1311_);
lean_dec_ref_known(v___x_1310_, 1);
v___x_1312_ = l_Lean_LocalDecl_setType(v_a_1308_, v_a_1311_);
v___x_1313_ = l_Lean_LocalDecl_value_x3f(v___x_1312_, v___x_1294_);
if (lean_obj_tag(v___x_1313_) == 0)
{
v_localDecl_1299_ = v___x_1312_;
goto v___jp_1298_;
}
else
{
lean_object* v_val_1314_; lean_object* v___x_1315_; 
v_val_1314_ = lean_ctor_get(v___x_1313_, 0);
lean_inc(v_val_1314_);
lean_dec_ref_known(v___x_1313_, 1);
v___x_1315_ = l_Lean_Meta_AbstractNestedProofs_visit(v_val_1314_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_);
if (lean_obj_tag(v___x_1315_) == 0)
{
lean_object* v_a_1316_; lean_object* v___x_1317_; 
v_a_1316_ = lean_ctor_get(v___x_1315_, 0);
lean_inc(v_a_1316_);
lean_dec_ref_known(v___x_1315_, 1);
v___x_1317_ = l_Lean_LocalDecl_setValue(v___x_1312_, v_a_1316_);
v_localDecl_1299_ = v___x_1317_;
goto v___jp_1298_;
}
else
{
lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1325_; 
lean_dec_ref(v___x_1312_);
lean_dec(v___x_1297_);
lean_dec_ref(v_b_1272_);
v_a_1318_ = lean_ctor_get(v___x_1315_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1315_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1320_ = v___x_1315_;
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v___x_1315_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1323_; 
if (v_isShared_1321_ == 0)
{
v___x_1323_ = v___x_1320_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_a_1318_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
}
}
else
{
lean_object* v_a_1326_; lean_object* v___x_1328_; uint8_t v_isShared_1329_; uint8_t v_isSharedCheck_1333_; 
lean_dec(v_a_1308_);
lean_dec(v___x_1297_);
lean_dec_ref(v_b_1272_);
v_a_1326_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1333_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1328_ = v___x_1310_;
v_isShared_1329_ = v_isSharedCheck_1333_;
goto v_resetjp_1327_;
}
else
{
lean_inc(v_a_1326_);
lean_dec(v___x_1310_);
v___x_1328_ = lean_box(0);
v_isShared_1329_ = v_isSharedCheck_1333_;
goto v_resetjp_1327_;
}
v_resetjp_1327_:
{
lean_object* v___x_1331_; 
if (v_isShared_1329_ == 0)
{
v___x_1331_ = v___x_1328_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v_a_1326_);
v___x_1331_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
return v___x_1331_;
}
}
}
}
else
{
lean_object* v_a_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1341_; 
lean_dec(v___x_1297_);
lean_dec_ref(v_b_1272_);
v_a_1334_ = lean_ctor_get(v___x_1307_, 0);
v_isSharedCheck_1341_ = !lean_is_exclusive(v___x_1307_);
if (v_isSharedCheck_1341_ == 0)
{
v___x_1336_ = v___x_1307_;
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_a_1334_);
lean_dec(v___x_1307_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v___x_1339_; 
if (v_isShared_1337_ == 0)
{
v___x_1339_ = v___x_1336_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v_a_1334_);
v___x_1339_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
return v___x_1339_;
}
}
}
v___jp_1298_:
{
lean_object* v_fvarIdToDecl_1300_; lean_object* v_decls_1301_; lean_object* v_auxDeclToFullName_1302_; lean_object* v___x_1303_; 
v_fvarIdToDecl_1300_ = lean_ctor_get(v_b_1272_, 0);
v_decls_1301_ = lean_ctor_get(v_b_1272_, 1);
v_auxDeclToFullName_1302_ = lean_ctor_get(v_b_1272_, 2);
lean_inc_ref(v_b_1272_);
v___x_1303_ = lean_local_ctx_find(v_b_1272_, v___x_1297_);
if (lean_obj_tag(v___x_1303_) == 0)
{
lean_dec_ref(v_localDecl_1299_);
v_a_1281_ = v_b_1272_;
goto v___jp_1280_;
}
else
{
lean_object* v_index_1304_; lean_object* v_fvarId_1305_; lean_object* v___x_1306_; 
lean_inc(v_auxDeclToFullName_1302_);
lean_inc_ref(v_decls_1301_);
lean_inc_ref(v_fvarIdToDecl_1300_);
lean_dec_ref_known(v___x_1303_, 1);
lean_dec_ref(v_b_1272_);
v_index_1304_ = lean_ctor_get(v_localDecl_1299_, 0);
lean_inc(v_index_1304_);
v_fvarId_1305_ = lean_ctor_get(v_localDecl_1299_, 1);
lean_inc_ref(v_localDecl_1299_);
lean_inc(v_fvarId_1305_);
v___x_1306_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1___redArg(v_fvarIdToDecl_1300_, v_fvarId_1305_, v_localDecl_1299_);
v___y_1286_ = v_localDecl_1299_;
v___y_1287_ = v_auxDeclToFullName_1302_;
v___y_1288_ = v_decls_1301_;
v___y_1289_ = v___x_1306_;
v___y_1290_ = v_index_1304_;
goto v___jp_1285_;
}
}
}
v___jp_1280_:
{
size_t v___x_1282_; size_t v___x_1283_; 
v___x_1282_ = ((size_t)1ULL);
v___x_1283_ = lean_usize_add(v_i_1271_, v___x_1282_);
v_i_1271_ = v___x_1283_;
v_b_1272_ = v_a_1281_;
goto _start;
}
v___jp_1285_:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1291_, 0, v___y_1286_);
v___x_1292_ = l_Lean_PersistentArray_set___redArg(v___y_1288_, v___y_1290_, v___x_1291_);
lean_dec(v___y_1290_);
v___x_1293_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1293_, 0, v___y_1289_);
lean_ctor_set(v___x_1293_, 1, v___x_1292_);
lean_ctor_set(v___x_1293_, 2, v___y_1287_);
v_a_1281_ = v___x_1293_;
goto v___jp_1280_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__0(lean_object* v_xs_1342_, lean_object* v_k_1343_, uint8_t v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_){
_start:
{
lean_object* v_lctx_1351_; lean_object* v_localInstances_1352_; size_t v_sz_1353_; size_t v___x_1354_; lean_object* v___x_1355_; 
v_lctx_1351_ = lean_ctor_get(v___y_1346_, 2);
v_localInstances_1352_ = lean_ctor_get(v___y_1346_, 3);
v_sz_1353_ = lean_array_size(v_xs_1342_);
v___x_1354_ = ((size_t)0ULL);
lean_inc_ref(v_lctx_1351_);
v___x_1355_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_AbstractNestedProofs_visit_spec__2(v_xs_1342_, v_sz_1353_, v___x_1354_, v_lctx_1351_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_object* v_a_1356_; lean_object* v___x_1357_; 
v_a_1356_ = lean_ctor_get(v___x_1355_, 0);
lean_inc(v_a_1356_);
lean_dec_ref_known(v___x_1355_, 1);
lean_inc_ref(v_localInstances_1352_);
v___x_1357_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg(v_a_1356_, v_localInstances_1352_, v_k_1343_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_);
return v___x_1357_;
}
else
{
lean_object* v_a_1358_; lean_object* v___x_1360_; uint8_t v_isShared_1361_; uint8_t v_isSharedCheck_1365_; 
lean_dec_ref(v_k_1343_);
v_a_1358_ = lean_ctor_get(v___x_1355_, 0);
v_isSharedCheck_1365_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1365_ == 0)
{
v___x_1360_ = v___x_1355_;
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
else
{
lean_inc(v_a_1358_);
lean_dec(v___x_1355_);
v___x_1360_ = lean_box(0);
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
v_resetjp_1359_:
{
lean_object* v___x_1363_; 
if (v_isShared_1361_ == 0)
{
v___x_1363_ = v___x_1360_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v_a_1358_);
v___x_1363_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
return v___x_1363_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__0___boxed(lean_object* v_xs_1366_, lean_object* v_k_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_){
_start:
{
uint8_t v___y_27200__boxed_1375_; lean_object* v_res_1376_; 
v___y_27200__boxed_1375_ = lean_unbox(v___y_1368_);
v_res_1376_ = l_Lean_Meta_AbstractNestedProofs_visit___lam__0(v_xs_1366_, v_k_1367_, v___y_27200__boxed_1375_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_);
lean_dec(v___y_1373_);
lean_dec_ref(v___y_1372_);
lean_dec(v___y_1371_);
lean_dec_ref(v___y_1370_);
lean_dec(v___y_1369_);
lean_dec_ref(v_xs_1366_);
return v_res_1376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___boxed(lean_object* v_e_1378_, lean_object* v_a_1379_, lean_object* v_a_1380_, lean_object* v_a_1381_, lean_object* v_a_1382_, lean_object* v_a_1383_, lean_object* v_a_1384_, lean_object* v_a_1385_){
_start:
{
uint8_t v_a_boxed_1386_; lean_object* v_res_1387_; 
v_a_boxed_1386_ = lean_unbox(v_a_1379_);
v_res_1387_ = l_Lean_Meta_AbstractNestedProofs_visit(v_e_1378_, v_a_boxed_1386_, v_a_1380_, v_a_1381_, v_a_1382_, v_a_1383_, v_a_1384_);
lean_dec(v_a_1384_);
lean_dec_ref(v_a_1383_);
lean_dec(v_a_1382_);
lean_dec_ref(v_a_1381_);
lean_dec(v_a_1380_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__2___boxed(lean_object* v___y_1388_, lean_object* v___f_1389_, lean_object* v_xs_1390_, lean_object* v_b_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_){
_start:
{
uint8_t v___y_27150__boxed_1399_; uint8_t v___y_27152__boxed_1400_; lean_object* v_res_1401_; 
v___y_27150__boxed_1399_ = lean_unbox(v___y_1388_);
v___y_27152__boxed_1400_ = lean_unbox(v___y_1392_);
v_res_1401_ = l_Lean_Meta_AbstractNestedProofs_visit___lam__2(v___y_27150__boxed_1399_, v___f_1389_, v_xs_1390_, v_b_1391_, v___y_27152__boxed_1400_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_);
lean_dec(v___y_1397_);
lean_dec_ref(v___y_1396_);
lean_dec(v___y_1395_);
lean_dec_ref(v___y_1394_);
lean_dec(v___y_1393_);
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__5(lean_object* v_b_1402_, lean_object* v_xs_1403_, uint8_t v___y_1404_, uint8_t v___x_1405_, uint8_t v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_){
_start:
{
lean_object* v___x_1413_; 
v___x_1413_ = l_Lean_Meta_AbstractNestedProofs_visit(v_b_1402_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_);
if (lean_obj_tag(v___x_1413_) == 0)
{
lean_object* v_a_1414_; uint8_t v___x_1415_; lean_object* v___x_1416_; 
v_a_1414_ = lean_ctor_get(v___x_1413_, 0);
lean_inc(v_a_1414_);
lean_dec_ref_known(v___x_1413_, 1);
v___x_1415_ = 1;
v___x_1416_ = l_Lean_Meta_mkForallFVars(v_xs_1403_, v_a_1414_, v___y_1404_, v___x_1405_, v___x_1405_, v___x_1415_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_);
return v___x_1416_;
}
else
{
lean_dec_ref(v_xs_1403_);
return v___x_1413_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__5___boxed(lean_object* v_b_1417_, lean_object* v_xs_1418_, lean_object* v___y_1419_, lean_object* v___x_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_){
_start:
{
uint8_t v___y_27186__boxed_1428_; uint8_t v___x_27187__boxed_1429_; uint8_t v___y_27188__boxed_1430_; lean_object* v_res_1431_; 
v___y_27186__boxed_1428_ = lean_unbox(v___y_1419_);
v___x_27187__boxed_1429_ = lean_unbox(v___x_1420_);
v___y_27188__boxed_1430_ = lean_unbox(v___y_1421_);
v_res_1431_ = l_Lean_Meta_AbstractNestedProofs_visit___lam__5(v_b_1417_, v_xs_1418_, v___y_27186__boxed_1428_, v___x_27187__boxed_1429_, v___y_27188__boxed_1430_, v___y_1422_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_);
lean_dec(v___y_1426_);
lean_dec_ref(v___y_1425_);
lean_dec(v___y_1424_);
lean_dec_ref(v___y_1423_);
lean_dec(v___y_1422_);
return v_res_1431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__3(uint8_t v___y_1432_, uint8_t v___x_1433_, lean_object* v___f_1434_, lean_object* v_xs_1435_, lean_object* v_b_1436_, uint8_t v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_){
_start:
{
lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___f_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; 
v___x_1444_ = lean_box(v___y_1432_);
v___x_1445_ = lean_box(v___x_1433_);
lean_inc_ref(v_xs_1435_);
v___f_1446_ = lean_alloc_closure((void*)(l_Lean_Meta_AbstractNestedProofs_visit___lam__5___boxed), 11, 4);
lean_closure_set(v___f_1446_, 0, v_b_1436_);
lean_closure_set(v___f_1446_, 1, v_xs_1435_);
lean_closure_set(v___f_1446_, 2, v___x_1444_);
lean_closure_set(v___f_1446_, 3, v___x_1445_);
v___x_1447_ = lean_box(v___y_1437_);
lean_inc(v___y_1442_);
lean_inc_ref(v___y_1441_);
lean_inc(v___y_1440_);
lean_inc_ref(v___y_1439_);
lean_inc(v___y_1438_);
v___x_1448_ = lean_apply_9(v___f_1434_, v_xs_1435_, v___f_1446_, v___x_1447_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_, lean_box(0));
return v___x_1448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__3___boxed(lean_object* v___y_1449_, lean_object* v___x_1450_, lean_object* v___f_1451_, lean_object* v_xs_1452_, lean_object* v_b_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_){
_start:
{
uint8_t v___y_27161__boxed_1461_; uint8_t v___x_27162__boxed_1462_; uint8_t v___y_27164__boxed_1463_; lean_object* v_res_1464_; 
v___y_27161__boxed_1461_ = lean_unbox(v___y_1449_);
v___x_27162__boxed_1462_ = lean_unbox(v___x_1450_);
v___y_27164__boxed_1463_ = lean_unbox(v___y_1454_);
v_res_1464_ = l_Lean_Meta_AbstractNestedProofs_visit___lam__3(v___y_27161__boxed_1461_, v___x_27162__boxed_1462_, v___f_1451_, v_xs_1452_, v_b_1453_, v___y_27164__boxed_1463_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_);
lean_dec(v___y_1459_);
lean_dec_ref(v___y_1458_);
lean_dec(v___y_1457_);
lean_dec_ref(v___y_1456_);
lean_dec(v___y_1455_);
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0(size_t v_sz_1467_, size_t v_i_1468_, lean_object* v_bs_1469_, uint8_t v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_){
_start:
{
uint8_t v___x_1477_; 
v___x_1477_ = lean_usize_dec_lt(v_i_1468_, v_sz_1467_);
if (v___x_1477_ == 0)
{
lean_object* v___x_1478_; lean_object* v___x_1479_; 
v___x_1478_ = l_unsafeCast___redArg(v_bs_1469_);
lean_dec_ref(v_bs_1469_);
v___x_1479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1479_, 0, v___x_1478_);
return v___x_1479_;
}
else
{
lean_object* v_v_1480_; lean_object* v___x_1481_; lean_object* v_bs_x27_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; 
v_v_1480_ = lean_array_uget(v_bs_1469_, v_i_1468_);
v___x_1481_ = lean_unsigned_to_nat(0u);
v_bs_x27_1482_ = lean_array_uset(v_bs_1469_, v_i_1468_, v___x_1481_);
v___x_1483_ = l_unsafeCast___redArg(v_v_1480_);
lean_dec(v_v_1480_);
v___x_1484_ = l_Lean_Meta_AbstractNestedProofs_visit(v___x_1483_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_);
if (lean_obj_tag(v___x_1484_) == 0)
{
lean_object* v_a_1485_; size_t v___x_1486_; size_t v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; 
v_a_1485_ = lean_ctor_get(v___x_1484_, 0);
lean_inc(v_a_1485_);
lean_dec_ref_known(v___x_1484_, 1);
v___x_1486_ = ((size_t)1ULL);
v___x_1487_ = lean_usize_add(v_i_1468_, v___x_1486_);
v___x_1488_ = l_unsafeCast___redArg(v_a_1485_);
lean_dec(v_a_1485_);
v___x_1489_ = lean_array_uset(v_bs_x27_1482_, v_i_1468_, v___x_1488_);
v_i_1468_ = v___x_1487_;
v_bs_1469_ = v___x_1489_;
goto _start;
}
else
{
lean_object* v_a_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1498_; 
lean_dec_ref(v_bs_x27_1482_);
v_a_1491_ = lean_ctor_get(v___x_1484_, 0);
v_isSharedCheck_1498_ = !lean_is_exclusive(v___x_1484_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1493_ = v___x_1484_;
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_a_1491_);
lean_dec(v___x_1484_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1496_; 
if (v_isShared_1494_ == 0)
{
v___x_1496_ = v___x_1493_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v_a_1491_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0___boxed(lean_object* v_sz_1499_, lean_object* v_i_1500_, lean_object* v_bs_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_){
_start:
{
size_t v_sz_boxed_1509_; size_t v_i_boxed_1510_; uint8_t v___y_27213__boxed_1511_; lean_object* v_res_1512_; 
v_sz_boxed_1509_ = lean_unbox_usize(v_sz_1499_);
lean_dec(v_sz_1499_);
v_i_boxed_1510_ = lean_unbox_usize(v_i_1500_);
lean_dec(v_i_1500_);
v___y_27213__boxed_1511_ = lean_unbox(v___y_1502_);
v_res_1512_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0(v_sz_boxed_1509_, v_i_boxed_1510_, v_bs_1501_, v___y_27213__boxed_1511_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_);
lean_dec(v___y_1507_);
lean_dec_ref(v___y_1506_);
lean_dec(v___y_1505_);
lean_dec_ref(v___y_1504_);
lean_dec(v___y_1503_);
return v_res_1512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9(lean_object* v_x_1513_, lean_object* v_x_1514_, lean_object* v_x_1515_, uint8_t v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
if (lean_obj_tag(v_x_1513_) == 5)
{
lean_object* v_fn_1523_; lean_object* v_arg_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; 
v_fn_1523_ = lean_ctor_get(v_x_1513_, 0);
lean_inc_ref(v_fn_1523_);
v_arg_1524_ = lean_ctor_get(v_x_1513_, 1);
lean_inc_ref(v_arg_1524_);
lean_dec_ref_known(v_x_1513_, 2);
v___x_1525_ = lean_array_set(v_x_1514_, v_x_1515_, v_arg_1524_);
v___x_1526_ = lean_unsigned_to_nat(1u);
v___x_1527_ = lean_nat_sub(v_x_1515_, v___x_1526_);
lean_dec(v_x_1515_);
v_x_1513_ = v_fn_1523_;
v_x_1514_ = v___x_1525_;
v_x_1515_ = v___x_1527_;
goto _start;
}
else
{
lean_object* v___x_1529_; 
lean_dec(v_x_1515_);
v___x_1529_ = l_Lean_Meta_AbstractNestedProofs_visit(v_x_1513_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_object* v_a_1530_; size_t v_sz_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_25810__overap_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; 
v_a_1530_ = lean_ctor_get(v___x_1529_, 0);
lean_inc(v_a_1530_);
lean_dec_ref_known(v___x_1529_, 1);
v_sz_1531_ = lean_array_size(v_x_1514_);
v___x_1532_ = l_unsafeCast___redArg(v_x_1514_);
lean_dec_ref(v_x_1514_);
v___x_1533_ = lean_box_usize(v_sz_1531_);
v___x_1534_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9___boxed__const__1));
v___x_1535_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0___boxed), 10, 3);
lean_closure_set(v___x_1535_, 0, v___x_1533_);
lean_closure_set(v___x_1535_, 1, v___x_1534_);
lean_closure_set(v___x_1535_, 2, v___x_1532_);
v___x_25810__overap_1536_ = l_unsafeCast___redArg(v___x_1535_);
lean_dec_ref(v___x_1535_);
v___x_1537_ = lean_box(v___y_1516_);
lean_inc(v___y_1521_);
lean_inc_ref(v___y_1520_);
lean_inc(v___y_1519_);
lean_inc_ref(v___y_1518_);
lean_inc(v___y_1517_);
v___x_1538_ = lean_apply_7(v___x_25810__overap_1536_, v___x_1537_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, lean_box(0));
if (lean_obj_tag(v___x_1538_) == 0)
{
lean_object* v_a_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1547_; 
v_a_1539_ = lean_ctor_get(v___x_1538_, 0);
v_isSharedCheck_1547_ = !lean_is_exclusive(v___x_1538_);
if (v_isSharedCheck_1547_ == 0)
{
v___x_1541_ = v___x_1538_;
v_isShared_1542_ = v_isSharedCheck_1547_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_a_1539_);
lean_dec(v___x_1538_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1547_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v___x_1543_; lean_object* v___x_1545_; 
v___x_1543_ = l_Lean_mkAppN(v_a_1530_, v_a_1539_);
lean_dec(v_a_1539_);
if (v_isShared_1542_ == 0)
{
lean_ctor_set(v___x_1541_, 0, v___x_1543_);
v___x_1545_ = v___x_1541_;
goto v_reusejp_1544_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v___x_1543_);
v___x_1545_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1544_;
}
v_reusejp_1544_:
{
return v___x_1545_;
}
}
}
else
{
lean_object* v_a_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1555_; 
lean_dec(v_a_1530_);
v_a_1548_ = lean_ctor_get(v___x_1538_, 0);
v_isSharedCheck_1555_ = !lean_is_exclusive(v___x_1538_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1550_ = v___x_1538_;
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_a_1548_);
lean_dec(v___x_1538_);
v___x_1550_ = lean_box(0);
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
v_resetjp_1549_:
{
lean_object* v___x_1553_; 
if (v_isShared_1551_ == 0)
{
v___x_1553_ = v___x_1550_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v_a_1548_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
return v___x_1553_;
}
}
}
}
else
{
lean_dec_ref(v_x_1514_);
return v___x_1529_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit(lean_object* v_e_1556_, uint8_t v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_){
_start:
{
lean_object* v_a_1565_; lean_object* v___y_1571_; lean_object* v___f_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___f_1573_ = lean_alloc_closure((void*)(l_Lean_Meta_AbstractNestedProofs_visit___lam__0___boxed), 9, 0);
v___x_1574_ = ((lean_object*)(l_Lean_Meta_AbstractNestedProofs_visit___closed__0));
v___x_1575_ = l_Lean_Core_checkSystem(v___x_1574_, v_a_1561_, v_a_1562_);
if (lean_obj_tag(v___x_1575_) == 0)
{
lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1640_; 
v_isSharedCheck_1640_ = !lean_is_exclusive(v___x_1575_);
if (v_isSharedCheck_1640_ == 0)
{
lean_object* v_unused_1641_; 
v_unused_1641_ = lean_ctor_get(v___x_1575_, 0);
lean_dec(v_unused_1641_);
v___x_1577_ = v___x_1575_;
v_isShared_1578_ = v_isSharedCheck_1640_;
goto v_resetjp_1576_;
}
else
{
lean_dec(v___x_1575_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1640_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
uint8_t v___x_1579_; 
v___x_1579_ = l_Lean_Expr_isAtomic(v_e_1556_);
if (v___x_1579_ == 0)
{
uint8_t v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; 
v___x_1580_ = 1;
v___x_1581_ = lean_st_ref_get(v_a_1558_);
v___x_1582_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5___redArg(v___x_1581_, v_e_1556_);
lean_dec(v___x_1581_);
if (lean_obj_tag(v___x_1582_) == 0)
{
lean_object* v___x_1583_; 
lean_del_object(v___x_1577_);
lean_inc_ref(v_e_1556_);
v___x_1583_ = l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof(v_e_1556_, v_a_1559_, v_a_1560_, v_a_1561_, v_a_1562_);
if (lean_obj_tag(v___x_1583_) == 0)
{
lean_object* v_a_1584_; uint8_t v___y_1589_; uint8_t v___x_1623_; 
v_a_1584_ = lean_ctor_get(v___x_1583_, 0);
lean_inc(v_a_1584_);
lean_dec_ref_known(v___x_1583_, 1);
v___x_1623_ = lean_unbox(v_a_1584_);
lean_dec(v_a_1584_);
if (v___x_1623_ == 0)
{
v___y_1589_ = v___x_1579_;
goto v___jp_1588_;
}
else
{
uint8_t v___x_1624_; 
v___x_1624_ = l_Lean_Expr_hasSorry(v_e_1556_);
if (v___x_1624_ == 0)
{
lean_dec_ref(v___f_1573_);
goto v___jp_1585_;
}
else
{
v___y_1589_ = v___x_1579_;
goto v___jp_1588_;
}
}
v___jp_1585_:
{
lean_object* v___x_1586_; lean_object* v___x_1587_; 
v___x_1586_ = lean_alloc_closure((void*)(l_Lean_Meta_AbstractNestedProofs_visit___boxed), 8, 0);
lean_inc_ref(v_e_1556_);
v___x_1587_ = l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6(v_e_1556_, v_a_1557_, v___x_1586_, v_a_1557_, v_a_1558_, v_a_1559_, v_a_1560_, v_a_1561_, v_a_1562_);
v___y_1571_ = v___x_1587_;
goto v___jp_1570_;
}
v___jp_1588_:
{
if (v___y_1589_ == 0)
{
switch(lean_obj_tag(v_e_1556_))
{
case 6:
{
lean_object* v___x_1590_; lean_object* v___f_1591_; lean_object* v___x_1592_; 
v___x_1590_ = lean_box(v___y_1589_);
v___f_1591_ = lean_alloc_closure((void*)(l_Lean_Meta_AbstractNestedProofs_visit___lam__2___boxed), 11, 2);
lean_closure_set(v___f_1591_, 0, v___x_1590_);
lean_closure_set(v___f_1591_, 1, v___f_1573_);
lean_inc_ref(v_e_1556_);
v___x_1592_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg(v_e_1556_, v___f_1591_, v___y_1589_, v___x_1580_, v_a_1557_, v_a_1558_, v_a_1559_, v_a_1560_, v_a_1561_, v_a_1562_);
v___y_1571_ = v___x_1592_;
goto v___jp_1570_;
}
case 8:
{
lean_object* v___x_1593_; lean_object* v___f_1594_; lean_object* v___x_1595_; 
v___x_1593_ = lean_box(v___y_1589_);
v___f_1594_ = lean_alloc_closure((void*)(l_Lean_Meta_AbstractNestedProofs_visit___lam__2___boxed), 11, 2);
lean_closure_set(v___f_1594_, 0, v___x_1593_);
lean_closure_set(v___f_1594_, 1, v___f_1573_);
lean_inc_ref(v_e_1556_);
v___x_1595_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg(v_e_1556_, v___f_1594_, v___y_1589_, v___x_1580_, v_a_1557_, v_a_1558_, v_a_1559_, v_a_1560_, v_a_1561_, v_a_1562_);
v___y_1571_ = v___x_1595_;
goto v___jp_1570_;
}
case 7:
{
lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___f_1598_; lean_object* v___x_1599_; 
v___x_1596_ = lean_box(v___y_1589_);
v___x_1597_ = lean_box(v___x_1580_);
v___f_1598_ = lean_alloc_closure((void*)(l_Lean_Meta_AbstractNestedProofs_visit___lam__3___boxed), 12, 3);
lean_closure_set(v___f_1598_, 0, v___x_1596_);
lean_closure_set(v___f_1598_, 1, v___x_1597_);
lean_closure_set(v___f_1598_, 2, v___f_1573_);
lean_inc_ref(v_e_1556_);
v___x_1599_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__8___redArg(v_e_1556_, v___f_1598_, v___y_1589_, v_a_1557_, v_a_1558_, v_a_1559_, v_a_1560_, v_a_1561_, v_a_1562_);
v___y_1571_ = v___x_1599_;
goto v___jp_1570_;
}
case 10:
{
lean_object* v_data_1600_; lean_object* v_expr_1601_; lean_object* v___x_1602_; 
lean_dec_ref(v___f_1573_);
v_data_1600_ = lean_ctor_get(v_e_1556_, 0);
v_expr_1601_ = lean_ctor_get(v_e_1556_, 1);
lean_inc_ref(v_expr_1601_);
v___x_1602_ = l_Lean_Meta_AbstractNestedProofs_visit(v_expr_1601_, v_a_1557_, v_a_1558_, v_a_1559_, v_a_1560_, v_a_1561_, v_a_1562_);
if (lean_obj_tag(v___x_1602_) == 0)
{
lean_object* v_a_1603_; size_t v___x_1604_; size_t v___x_1605_; uint8_t v___x_1606_; 
v_a_1603_ = lean_ctor_get(v___x_1602_, 0);
lean_inc(v_a_1603_);
lean_dec_ref_known(v___x_1602_, 1);
v___x_1604_ = lean_ptr_addr(v_expr_1601_);
v___x_1605_ = lean_ptr_addr(v_a_1603_);
v___x_1606_ = lean_usize_dec_eq(v___x_1604_, v___x_1605_);
if (v___x_1606_ == 0)
{
lean_object* v___x_1607_; 
lean_inc(v_data_1600_);
v___x_1607_ = l_Lean_Expr_mdata___override(v_data_1600_, v_a_1603_);
v_a_1565_ = v___x_1607_;
goto v___jp_1564_;
}
else
{
lean_dec(v_a_1603_);
lean_inc_ref(v_e_1556_);
v_a_1565_ = v_e_1556_;
goto v___jp_1564_;
}
}
else
{
v___y_1571_ = v___x_1602_;
goto v___jp_1570_;
}
}
case 11:
{
lean_object* v_typeName_1608_; lean_object* v_idx_1609_; lean_object* v_struct_1610_; lean_object* v___x_1611_; 
lean_dec_ref(v___f_1573_);
v_typeName_1608_ = lean_ctor_get(v_e_1556_, 0);
v_idx_1609_ = lean_ctor_get(v_e_1556_, 1);
v_struct_1610_ = lean_ctor_get(v_e_1556_, 2);
lean_inc_ref(v_struct_1610_);
v___x_1611_ = l_Lean_Meta_AbstractNestedProofs_visit(v_struct_1610_, v_a_1557_, v_a_1558_, v_a_1559_, v_a_1560_, v_a_1561_, v_a_1562_);
if (lean_obj_tag(v___x_1611_) == 0)
{
lean_object* v_a_1612_; size_t v___x_1613_; size_t v___x_1614_; uint8_t v___x_1615_; 
v_a_1612_ = lean_ctor_get(v___x_1611_, 0);
lean_inc(v_a_1612_);
lean_dec_ref_known(v___x_1611_, 1);
v___x_1613_ = lean_ptr_addr(v_struct_1610_);
v___x_1614_ = lean_ptr_addr(v_a_1612_);
v___x_1615_ = lean_usize_dec_eq(v___x_1613_, v___x_1614_);
if (v___x_1615_ == 0)
{
lean_object* v___x_1616_; 
lean_inc(v_idx_1609_);
lean_inc(v_typeName_1608_);
v___x_1616_ = l_Lean_Expr_proj___override(v_typeName_1608_, v_idx_1609_, v_a_1612_);
v_a_1565_ = v___x_1616_;
goto v___jp_1564_;
}
else
{
lean_dec(v_a_1612_);
lean_inc_ref(v_e_1556_);
v_a_1565_ = v_e_1556_;
goto v___jp_1564_;
}
}
else
{
v___y_1571_ = v___x_1611_;
goto v___jp_1570_;
}
}
case 5:
{
lean_object* v_dummy_1617_; lean_object* v_nargs_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; 
lean_dec_ref(v___f_1573_);
v_dummy_1617_ = lean_obj_once(&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__5, &l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__5_once, _init_l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__5);
v_nargs_1618_ = l_Lean_Expr_getAppNumArgs(v_e_1556_);
lean_inc(v_nargs_1618_);
v___x_1619_ = lean_mk_array(v_nargs_1618_, v_dummy_1617_);
v___x_1620_ = lean_unsigned_to_nat(1u);
v___x_1621_ = lean_nat_sub(v_nargs_1618_, v___x_1620_);
lean_dec(v_nargs_1618_);
lean_inc_ref(v_e_1556_);
v___x_1622_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9(v_e_1556_, v___x_1619_, v___x_1621_, v_a_1557_, v_a_1558_, v_a_1559_, v_a_1560_, v_a_1561_, v_a_1562_);
v___y_1571_ = v___x_1622_;
goto v___jp_1570_;
}
default: 
{
lean_dec_ref(v___f_1573_);
lean_inc_ref(v_e_1556_);
v_a_1565_ = v_e_1556_;
goto v___jp_1564_;
}
}
}
else
{
lean_dec_ref(v___f_1573_);
goto v___jp_1585_;
}
}
}
else
{
lean_object* v_a_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1632_; 
lean_dec_ref(v___f_1573_);
lean_dec_ref(v_e_1556_);
v_a_1625_ = lean_ctor_get(v___x_1583_, 0);
v_isSharedCheck_1632_ = !lean_is_exclusive(v___x_1583_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1627_ = v___x_1583_;
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_a_1625_);
lean_dec(v___x_1583_);
v___x_1627_ = lean_box(0);
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
v_resetjp_1626_:
{
lean_object* v___x_1630_; 
if (v_isShared_1628_ == 0)
{
v___x_1630_ = v___x_1627_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v_a_1625_);
v___x_1630_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
return v___x_1630_;
}
}
}
}
else
{
lean_object* v_val_1633_; lean_object* v___x_1635_; 
lean_dec_ref(v___f_1573_);
lean_dec_ref(v_e_1556_);
v_val_1633_ = lean_ctor_get(v___x_1582_, 0);
lean_inc(v_val_1633_);
lean_dec_ref_known(v___x_1582_, 1);
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 0, v_val_1633_);
v___x_1635_ = v___x_1577_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v_val_1633_);
v___x_1635_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
return v___x_1635_;
}
}
}
else
{
lean_object* v___x_1638_; 
lean_dec_ref(v___f_1573_);
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 0, v_e_1556_);
v___x_1638_ = v___x_1577_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v_e_1556_);
v___x_1638_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
return v___x_1638_;
}
}
}
}
else
{
lean_object* v_a_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1649_; 
lean_dec_ref(v___f_1573_);
lean_dec_ref(v_e_1556_);
v_a_1642_ = lean_ctor_get(v___x_1575_, 0);
v_isSharedCheck_1649_ = !lean_is_exclusive(v___x_1575_);
if (v_isSharedCheck_1649_ == 0)
{
v___x_1644_ = v___x_1575_;
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_a_1642_);
lean_dec(v___x_1575_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___x_1647_; 
if (v_isShared_1645_ == 0)
{
v___x_1647_ = v___x_1644_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v_a_1642_);
v___x_1647_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
return v___x_1647_;
}
}
}
v___jp_1564_:
{
lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; 
v___x_1566_ = lean_st_ref_take(v_a_1558_);
lean_inc_ref(v_a_1565_);
v___x_1567_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4___redArg(v___x_1566_, v_e_1556_, v_a_1565_);
v___x_1568_ = lean_st_ref_put(v_a_1558_, v___x_1567_);
v___x_1569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1569_, 0, v_a_1565_);
return v___x_1569_;
}
v___jp_1570_:
{
if (lean_obj_tag(v___y_1571_) == 0)
{
lean_object* v_a_1572_; 
v_a_1572_ = lean_ctor_get(v___y_1571_, 0);
lean_inc(v_a_1572_);
lean_dec_ref_known(v___y_1571_, 1);
v_a_1565_ = v_a_1572_;
goto v___jp_1564_;
}
else
{
lean_dec_ref(v_e_1556_);
return v___y_1571_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__1(lean_object* v_b_1650_, lean_object* v_xs_1651_, uint8_t v___y_1652_, uint8_t v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_){
_start:
{
lean_object* v___x_1660_; 
v___x_1660_ = l_Lean_Meta_AbstractNestedProofs_visit(v_b_1650_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_);
if (lean_obj_tag(v___x_1660_) == 0)
{
lean_object* v_a_1661_; uint8_t v___x_1662_; lean_object* v___x_1663_; 
v_a_1661_ = lean_ctor_get(v___x_1660_, 0);
lean_inc(v_a_1661_);
lean_dec_ref_known(v___x_1660_, 1);
v___x_1662_ = 1;
v___x_1663_ = l_Lean_Meta_mkLambdaFVars(v_xs_1651_, v_a_1661_, v___y_1652_, v___y_1652_, v___y_1652_, v___y_1652_, v___x_1662_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_);
return v___x_1663_;
}
else
{
lean_dec_ref(v_xs_1651_);
return v___x_1660_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__1___boxed(lean_object* v_b_1664_, lean_object* v_xs_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_){
_start:
{
uint8_t v___y_27173__boxed_1674_; uint8_t v___y_27174__boxed_1675_; lean_object* v_res_1676_; 
v___y_27173__boxed_1674_ = lean_unbox(v___y_1666_);
v___y_27174__boxed_1675_ = lean_unbox(v___y_1667_);
v_res_1676_ = l_Lean_Meta_AbstractNestedProofs_visit___lam__1(v_b_1664_, v_xs_1665_, v___y_27173__boxed_1674_, v___y_27174__boxed_1675_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_, v___y_1672_);
lean_dec(v___y_1672_);
lean_dec_ref(v___y_1671_);
lean_dec(v___y_1670_);
lean_dec_ref(v___y_1669_);
lean_dec(v___y_1668_);
return v_res_1676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__2(uint8_t v___y_1677_, lean_object* v___f_1678_, lean_object* v_xs_1679_, lean_object* v_b_1680_, uint8_t v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_){
_start:
{
lean_object* v___x_1688_; lean_object* v___f_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1688_ = lean_box(v___y_1677_);
lean_inc_ref(v_xs_1679_);
v___f_1689_ = lean_alloc_closure((void*)(l_Lean_Meta_AbstractNestedProofs_visit___lam__1___boxed), 10, 3);
lean_closure_set(v___f_1689_, 0, v_b_1680_);
lean_closure_set(v___f_1689_, 1, v_xs_1679_);
lean_closure_set(v___f_1689_, 2, v___x_1688_);
v___x_1690_ = lean_box(v___y_1681_);
lean_inc(v___y_1686_);
lean_inc_ref(v___y_1685_);
lean_inc(v___y_1684_);
lean_inc_ref(v___y_1683_);
lean_inc(v___y_1682_);
v___x_1691_ = lean_apply_9(v___f_1678_, v_xs_1679_, v___f_1689_, v___x_1690_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_, lean_box(0));
return v___x_1691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9___boxed(lean_object* v_x_1692_, lean_object* v_x_1693_, lean_object* v_x_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_){
_start:
{
uint8_t v___y_27237__boxed_1702_; lean_object* v_res_1703_; 
v___y_27237__boxed_1702_ = lean_unbox(v___y_1695_);
v_res_1703_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9(v_x_1692_, v_x_1693_, v_x_1694_, v___y_27237__boxed_1702_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_);
lean_dec(v___y_1700_);
lean_dec_ref(v___y_1699_);
lean_dec(v___y_1698_);
lean_dec_ref(v___y_1697_);
lean_dec(v___y_1696_);
return v_res_1703_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_AbstractNestedProofs_visit_spec__2___boxed(lean_object* v_as_1704_, lean_object* v_sz_1705_, lean_object* v_i_1706_, lean_object* v_b_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_){
_start:
{
size_t v_sz_boxed_1715_; size_t v_i_boxed_1716_; uint8_t v___y_27262__boxed_1717_; lean_object* v_res_1718_; 
v_sz_boxed_1715_ = lean_unbox_usize(v_sz_1705_);
lean_dec(v_sz_1705_);
v_i_boxed_1716_ = lean_unbox_usize(v_i_1706_);
lean_dec(v_i_1706_);
v___y_27262__boxed_1717_ = lean_unbox(v___y_1708_);
v_res_1718_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_AbstractNestedProofs_visit_spec__2(v_as_1704_, v_sz_boxed_1715_, v_i_boxed_1716_, v_b_1707_, v___y_27262__boxed_1717_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_);
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
lean_dec(v___y_1711_);
lean_dec_ref(v___y_1710_);
lean_dec(v___y_1709_);
lean_dec_ref(v_as_1704_);
return v_res_1718_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1(lean_object* v_00_u03b2_1719_, lean_object* v_x_1720_, lean_object* v_x_1721_, lean_object* v_x_1722_){
_start:
{
lean_object* v___x_1723_; 
v___x_1723_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1___redArg(v_x_1720_, v_x_1721_, v_x_1722_);
return v___x_1723_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4(lean_object* v_00_u03b2_1724_, lean_object* v_m_1725_, lean_object* v_a_1726_, lean_object* v_b_1727_){
_start:
{
lean_object* v___x_1728_; 
v___x_1728_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4___redArg(v_m_1725_, v_a_1726_, v_b_1727_);
return v___x_1728_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5(lean_object* v_00_u03b2_1729_, lean_object* v_m_1730_, lean_object* v_a_1731_){
_start:
{
lean_object* v___x_1732_; 
v___x_1732_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5___redArg(v_m_1730_, v_a_1731_);
return v___x_1732_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5___boxed(lean_object* v_00_u03b2_1733_, lean_object* v_m_1734_, lean_object* v_a_1735_){
_start:
{
lean_object* v_res_1736_; 
v_res_1736_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5(v_00_u03b2_1733_, v_m_1734_, v_a_1735_);
lean_dec_ref(v_a_1735_);
lean_dec_ref(v_m_1734_);
return v_res_1736_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1(lean_object* v_00_u03b2_1737_, lean_object* v_x_1738_, size_t v_x_1739_, size_t v_x_1740_, lean_object* v_x_1741_, lean_object* v_x_1742_){
_start:
{
lean_object* v___x_1743_; 
v___x_1743_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___redArg(v_x_1738_, v_x_1739_, v_x_1740_, v_x_1741_, v_x_1742_);
return v___x_1743_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1___boxed(lean_object* v_00_u03b2_1744_, lean_object* v_x_1745_, lean_object* v_x_1746_, lean_object* v_x_1747_, lean_object* v_x_1748_, lean_object* v_x_1749_){
_start:
{
size_t v_x_27856__boxed_1750_; size_t v_x_27857__boxed_1751_; lean_object* v_res_1752_; 
v_x_27856__boxed_1750_ = lean_unbox_usize(v_x_1746_);
lean_dec(v_x_1746_);
v_x_27857__boxed_1751_ = lean_unbox_usize(v_x_1747_);
lean_dec(v_x_1747_);
v_res_1752_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1(v_00_u03b2_1744_, v_x_1745_, v_x_27856__boxed_1750_, v_x_27857__boxed_1751_, v_x_1748_, v_x_1749_);
return v_res_1752_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5(lean_object* v_00_u03b2_1753_, lean_object* v_a_1754_, lean_object* v_x_1755_){
_start:
{
uint8_t v___x_1756_; 
v___x_1756_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5___redArg(v_a_1754_, v_x_1755_);
return v___x_1756_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5___boxed(lean_object* v_00_u03b2_1757_, lean_object* v_a_1758_, lean_object* v_x_1759_){
_start:
{
uint8_t v_res_1760_; lean_object* v_r_1761_; 
v_res_1760_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5(v_00_u03b2_1757_, v_a_1758_, v_x_1759_);
lean_dec(v_x_1759_);
lean_dec_ref(v_a_1758_);
v_r_1761_ = lean_box(v_res_1760_);
return v_r_1761_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6(lean_object* v_00_u03b2_1762_, lean_object* v_data_1763_){
_start:
{
lean_object* v___x_1764_; 
v___x_1764_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6___redArg(v_data_1763_);
return v___x_1764_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__7(lean_object* v_00_u03b2_1765_, lean_object* v_a_1766_, lean_object* v_b_1767_, lean_object* v_x_1768_){
_start:
{
lean_object* v___x_1769_; 
v___x_1769_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__7___redArg(v_a_1766_, v_b_1767_, v_x_1768_);
return v___x_1769_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9(lean_object* v_00_u03b2_1770_, lean_object* v_a_1771_, lean_object* v_x_1772_){
_start:
{
lean_object* v___x_1773_; 
v___x_1773_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9___redArg(v_a_1771_, v_x_1772_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9___boxed(lean_object* v_00_u03b2_1774_, lean_object* v_a_1775_, lean_object* v_x_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9(v_00_u03b2_1774_, v_a_1775_, v_x_1776_);
lean_dec(v_x_1776_);
lean_dec_ref(v_a_1775_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11_spec__17(lean_object* v_00_u03b1_1778_, lean_object* v_x_1779_, uint8_t v_isExporting_1780_, uint8_t v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_){
_start:
{
lean_object* v___x_1788_; 
v___x_1788_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11_spec__17___redArg(v_x_1779_, v_isExporting_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_);
return v___x_1788_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11_spec__17___boxed(lean_object* v_00_u03b1_1789_, lean_object* v_x_1790_, lean_object* v_isExporting_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_){
_start:
{
uint8_t v_isExporting_boxed_1799_; uint8_t v___y_27888__boxed_1800_; lean_object* v_res_1801_; 
v_isExporting_boxed_1799_ = lean_unbox(v_isExporting_1791_);
v___y_27888__boxed_1800_ = lean_unbox(v___y_1792_);
v_res_1801_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11_spec__17(v_00_u03b1_1789_, v_x_1790_, v_isExporting_boxed_1799_, v___y_27888__boxed_1800_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_);
lean_dec(v___y_1797_);
lean_dec_ref(v___y_1796_);
lean_dec(v___y_1795_);
lean_dec_ref(v___y_1794_);
lean_dec(v___y_1793_);
return v_res_1801_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11(lean_object* v_00_u03b1_1802_, lean_object* v_x_1803_, uint8_t v_when_1804_, uint8_t v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_){
_start:
{
lean_object* v___x_1812_; 
v___x_1812_ = l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11___redArg(v_x_1803_, v_when_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_);
return v___x_1812_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11___boxed(lean_object* v_00_u03b1_1813_, lean_object* v_x_1814_, lean_object* v_when_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_){
_start:
{
uint8_t v_when_boxed_1823_; uint8_t v___y_27911__boxed_1824_; lean_object* v_res_1825_; 
v_when_boxed_1823_ = lean_unbox(v_when_1815_);
v___y_27911__boxed_1824_ = lean_unbox(v___y_1816_);
v_res_1825_ = l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6_spec__11(v_00_u03b1_1813_, v_x_1814_, v_when_boxed_1823_, v___y_27911__boxed_1824_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
lean_dec(v___y_1821_);
lean_dec_ref(v___y_1820_);
lean_dec(v___y_1819_);
lean_dec_ref(v___y_1818_);
lean_dec(v___y_1817_);
return v_res_1825_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__5(lean_object* v_00_u03b2_1826_, lean_object* v_n_1827_, lean_object* v_k_1828_, lean_object* v_v_1829_){
_start:
{
lean_object* v___x_1830_; 
v___x_1830_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__5___redArg(v_n_1827_, v_k_1828_, v_v_1829_);
return v___x_1830_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__6(lean_object* v_00_u03b2_1831_, size_t v_depth_1832_, lean_object* v_keys_1833_, lean_object* v_vals_1834_, lean_object* v_heq_1835_, lean_object* v_i_1836_, lean_object* v_entries_1837_){
_start:
{
lean_object* v___x_1838_; 
v___x_1838_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__6___redArg(v_depth_1832_, v_keys_1833_, v_vals_1834_, v_i_1836_, v_entries_1837_);
return v___x_1838_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__6___boxed(lean_object* v_00_u03b2_1839_, lean_object* v_depth_1840_, lean_object* v_keys_1841_, lean_object* v_vals_1842_, lean_object* v_heq_1843_, lean_object* v_i_1844_, lean_object* v_entries_1845_){
_start:
{
size_t v_depth_boxed_1846_; lean_object* v_res_1847_; 
v_depth_boxed_1846_ = lean_unbox_usize(v_depth_1840_);
lean_dec(v_depth_1840_);
v_res_1847_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__6(v_00_u03b2_1839_, v_depth_boxed_1846_, v_keys_1841_, v_vals_1842_, v_heq_1843_, v_i_1844_, v_entries_1845_);
lean_dec_ref(v_vals_1842_);
lean_dec_ref(v_keys_1841_);
return v_res_1847_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11(lean_object* v_00_u03b2_1848_, lean_object* v_i_1849_, lean_object* v_source_1850_, lean_object* v_target_1851_){
_start:
{
lean_object* v___x_1852_; 
v___x_1852_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11___redArg(v_i_1849_, v_source_1850_, v_target_1851_);
return v___x_1852_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__5_spec__11(lean_object* v_00_u03b2_1853_, lean_object* v_x_1854_, lean_object* v_x_1855_, lean_object* v_x_1856_, lean_object* v_x_1857_){
_start:
{
lean_object* v___x_1858_; 
v___x_1858_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1_spec__1_spec__5_spec__11___redArg(v_x_1854_, v_x_1855_, v_x_1856_, v_x_1857_);
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11_spec__16(lean_object* v_00_u03b2_1859_, lean_object* v_x_1860_, lean_object* v_x_1861_){
_start:
{
lean_object* v___x_1862_; 
v___x_1862_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11_spec__16___redArg(v_x_1860_, v_x_1861_);
return v___x_1862_;
}
}
static lean_object* _init_l_Lean_Meta_abstractNestedProofs___closed__0(void){
_start:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; 
v___x_1863_ = lean_box(0);
v___x_1864_ = lean_unsigned_to_nat(16u);
v___x_1865_ = lean_mk_array(v___x_1864_, v___x_1863_);
return v___x_1865_;
}
}
static lean_object* _init_l_Lean_Meta_abstractNestedProofs___closed__1(void){
_start:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; 
v___x_1866_ = lean_obj_once(&l_Lean_Meta_abstractNestedProofs___closed__0, &l_Lean_Meta_abstractNestedProofs___closed__0_once, _init_l_Lean_Meta_abstractNestedProofs___closed__0);
v___x_1867_ = lean_unsigned_to_nat(0u);
v___x_1868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1868_, 0, v___x_1867_);
lean_ctor_set(v___x_1868_, 1, v___x_1866_);
return v___x_1868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractNestedProofs(lean_object* v_e_1869_, uint8_t v_cache_1870_, lean_object* v_a_1871_, lean_object* v_a_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_){
_start:
{
lean_object* v___x_1876_; 
lean_inc_ref(v_e_1869_);
v___x_1876_ = l_Lean_Meta_isProof(v_e_1869_, v_a_1871_, v_a_1872_, v_a_1873_, v_a_1874_);
if (lean_obj_tag(v___x_1876_) == 0)
{
lean_object* v_a_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1897_; 
v_a_1877_ = lean_ctor_get(v___x_1876_, 0);
v_isSharedCheck_1897_ = !lean_is_exclusive(v___x_1876_);
if (v_isSharedCheck_1897_ == 0)
{
v___x_1879_ = v___x_1876_;
v_isShared_1880_ = v_isSharedCheck_1897_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_a_1877_);
lean_dec(v___x_1876_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1897_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
uint8_t v___x_1881_; 
v___x_1881_ = lean_unbox(v_a_1877_);
lean_dec(v_a_1877_);
if (v___x_1881_ == 0)
{
lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; 
lean_del_object(v___x_1879_);
v___x_1882_ = lean_obj_once(&l_Lean_Meta_abstractNestedProofs___closed__1, &l_Lean_Meta_abstractNestedProofs___closed__1_once, _init_l_Lean_Meta_abstractNestedProofs___closed__1);
v___x_1883_ = lean_st_mk_ref(v___x_1882_);
v___x_1884_ = l_Lean_Meta_AbstractNestedProofs_visit(v_e_1869_, v_cache_1870_, v___x_1883_, v_a_1871_, v_a_1872_, v_a_1873_, v_a_1874_);
if (lean_obj_tag(v___x_1884_) == 0)
{
lean_object* v_a_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1893_; 
v_a_1885_ = lean_ctor_get(v___x_1884_, 0);
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1884_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1887_ = v___x_1884_;
v_isShared_1888_ = v_isSharedCheck_1893_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_a_1885_);
lean_dec(v___x_1884_);
v___x_1887_ = lean_box(0);
v_isShared_1888_ = v_isSharedCheck_1893_;
goto v_resetjp_1886_;
}
v_resetjp_1886_:
{
lean_object* v___x_1889_; lean_object* v___x_1891_; 
v___x_1889_ = lean_st_ref_get(v___x_1883_);
lean_dec(v___x_1883_);
lean_dec(v___x_1889_);
if (v_isShared_1888_ == 0)
{
v___x_1891_ = v___x_1887_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v_a_1885_);
v___x_1891_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
return v___x_1891_;
}
}
}
else
{
lean_dec(v___x_1883_);
return v___x_1884_;
}
}
else
{
lean_object* v___x_1895_; 
if (v_isShared_1880_ == 0)
{
lean_ctor_set(v___x_1879_, 0, v_e_1869_);
v___x_1895_ = v___x_1879_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v_e_1869_);
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
else
{
lean_object* v_a_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1905_; 
lean_dec_ref(v_e_1869_);
v_a_1898_ = lean_ctor_get(v___x_1876_, 0);
v_isSharedCheck_1905_ = !lean_is_exclusive(v___x_1876_);
if (v_isSharedCheck_1905_ == 0)
{
v___x_1900_ = v___x_1876_;
v_isShared_1901_ = v_isSharedCheck_1905_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_a_1898_);
lean_dec(v___x_1876_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1905_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
lean_object* v___x_1903_; 
if (v_isShared_1901_ == 0)
{
v___x_1903_ = v___x_1900_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v_a_1898_);
v___x_1903_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
return v___x_1903_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractNestedProofs___boxed(lean_object* v_e_1906_, lean_object* v_cache_1907_, lean_object* v_a_1908_, lean_object* v_a_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_, lean_object* v_a_1912_){
_start:
{
uint8_t v_cache_boxed_1913_; lean_object* v_res_1914_; 
v_cache_boxed_1913_ = lean_unbox(v_cache_1907_);
v_res_1914_ = l_Lean_Meta_abstractNestedProofs(v_e_1906_, v_cache_boxed_1913_, v_a_1908_, v_a_1909_, v_a_1910_, v_a_1911_);
lean_dec(v_a_1911_);
lean_dec_ref(v_a_1910_);
lean_dec(v_a_1909_);
lean_dec_ref(v_a_1908_);
return v_res_1914_;
}
}
lean_object* runtime_initialize_Init_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Closure(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Transform(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_AbstractNestedProofs(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_AbstractNestedProofs(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Closure(uint8_t builtin);
lean_object* initialize_Lean_Meta_Transform(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_AbstractNestedProofs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AbstractNestedProofs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_AbstractNestedProofs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_AbstractNestedProofs(builtin);
}
#ifdef __cplusplus
}
#endif

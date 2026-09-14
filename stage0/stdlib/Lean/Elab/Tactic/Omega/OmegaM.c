// Lean compiler output
// Module: Lean.Elab.Tactic.Omega.OmegaM
// Imports: public import Lean.Meta.AppBuilder public import Lean.Meta.Canonicalizer public import Init.Omega
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
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Canonicalizer_canon(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
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
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_getAppFnArgs(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_nat_x3f(lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecideProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_Lean_instToExprInt_mkNat(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Meta_mkListLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_int_x3f(lean_object*);
lean_object* l_Nat_pow___boxed(lean_object*, lean_object*);
lean_object* l_Nat_div___boxed(lean_object*, lean_object*);
lean_object* l_Nat_sub___boxed(lean_object*, lean_object*);
lean_object* l_Nat_mul___boxed(lean_object*, lean_object*);
lean_object* l_Nat_add___boxed(lean_object*, lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
lean_object* l_Int_ediv___boxed(lean_object*, lean_object*);
lean_object* l_Int_sub___boxed(lean_object*, lean_object*);
lean_object* l_Int_mul___boxed(lean_object*, lean_object*);
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_Canonicalizer_CanonM_run_x27___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Omega"};
static const lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Coeffs"};
static const lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ofList"};
static const lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(200, 12, 56, 206, 160, 32, 217, 148)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(16, 98, 247, 173, 146, 185, 161, 158)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cast"};
static const lean_object* l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_natCast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_Tactic_Omega_intCast_x3f_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_intCast_x3f(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HSub"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HDiv"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HPow"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hPow"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_pow___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__6_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hDiv"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__7_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_div___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__8_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hSub"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__9_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_sub___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__11_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_mul___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__12_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__13_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__14_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_ediv___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_sub___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_mul___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_groundInt_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMod"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Min"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Max"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "max"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "le_max_left"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(202, 116, 120, 162, 144, 249, 91, 118)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "le_max_right"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(187, 64, 160, 147, 232, 106, 148, 64)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "min"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "min_le_left"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__12_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(18, 98, 222, 238, 10, 11, 175, 208)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__12_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "min_le_right"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__15_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__14_value),LEAN_SCALAR_PTR_LITERAL(89, 109, 128, 29, 84, 251, 120, 13)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__15_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMod"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__17_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "emod_ofNat_nonneg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__18_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 141, 7, 147, 89, 24, 200, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__18_value),LEAN_SCALAR_PTR_LITERAL(193, 64, 179, 146, 49, 216, 163, 147)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LT"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__20_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__21_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__20_value),LEAN_SCALAR_PTR_LITERAL(71, 235, 154, 184, 62, 135, 30, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__21_value),LEAN_SCALAR_PTR_LITERAL(54, 235, 251, 9, 4, 74, 57, 164)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__24 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__24_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instLTNat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__25 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__25_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__25_value),LEAN_SCALAR_PTR_LITERAL(141, 27, 201, 217, 48, 203, 85, 203)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__26 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__26_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "pow_pos"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__28 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__28_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__28_value),LEAN_SCALAR_PTR_LITERAL(8, 188, 92, 81, 98, 125, 214, 195)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ofNat_pos_of_pos"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 141, 7, 147, 89, 24, 200, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30_value),LEAN_SCALAR_PTR_LITERAL(40, 203, 156, 230, 39, 171, 106, 183)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "emod_nonneg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__32 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__32_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__32_value),LEAN_SCALAR_PTR_LITERAL(61, 100, 115, 114, 207, 135, 28, 238)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ne_of_gt"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__34 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__34_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__34_value),LEAN_SCALAR_PTR_LITERAL(124, 85, 105, 24, 138, 4, 9, 162)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "emod_lt_of_pos"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__36 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__36_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__36_value),LEAN_SCALAR_PTR_LITERAL(179, 253, 191, 46, 213, 199, 79, 210)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__40 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__40_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__41 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__41_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__40_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__41_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instNegInt"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__43 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__43_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__43_value),LEAN_SCALAR_PTR_LITERAL(217, 109, 233, 1, 211, 122, 77, 88)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instLTInt"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__52 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__52_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__52_value),LEAN_SCALAR_PTR_LITERAL(174, 212, 102, 196, 69, 170, 149, 126)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "pos_pow_of_pos"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__55 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__55_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 141, 7, 147, 89, 24, 200, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__55_value),LEAN_SCALAR_PTR_LITERAL(145, 25, 143, 59, 16, 211, 163, 116)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Ne"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__64 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__64_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__64_value),LEAN_SCALAR_PTR_LITERAL(161, 247, 70, 70, 118, 145, 235, 92)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__65 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__65_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "mul_ediv_self_le"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__69 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__69_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__69_value),LEAN_SCALAR_PTR_LITERAL(252, 253, 214, 154, 97, 254, 157, 214)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "lt_mul_ediv_self_add"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__72 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__72_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__72_value),LEAN_SCALAR_PTR_LITERAL(94, 156, 157, 133, 195, 57, 68, 244)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "neg_le_natAbs"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__75 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__75_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 141, 7, 147, 89, 24, 200, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__75_value),LEAN_SCALAR_PTR_LITERAL(217, 253, 117, 167, 254, 111, 180, 184)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "natCast_nonneg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__77 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__77_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__77_value),LEAN_SCALAR_PTR_LITERAL(78, 189, 5, 123, 91, 219, 85, 246)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BitVec"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "isLt"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80_value),LEAN_SCALAR_PTR_LITERAL(196, 26, 231, 251, 226, 55, 19, 117)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Fin"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 162, 2, 110, 238, 123, 219)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80_value),LEAN_SCALAR_PTR_LITERAL(222, 150, 50, 101, 25, 222, 136, 68)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "le_natAbs"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__84 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__84_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__84_value),LEAN_SCALAR_PTR_LITERAL(90, 82, 63, 108, 86, 248, 24, 88)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toNat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__86 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__86_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "val"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__87 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__87_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "natAbs"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "ofNat_sub_dichotomy"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__89 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__89_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 141, 7, 147, 89, 24, 200, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__89_value),LEAN_SCALAR_PTR_LITERAL(132, 176, 7, 204, 155, 0, 78, 60)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__91 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__91_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "ite_disjunction"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__92 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__92_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__93_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__93_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__93_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__93_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__92_value),LEAN_SCALAR_PTR_LITERAL(77, 139, 125, 42, 52, 100, 157, 106)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__93 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__93_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__3(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_lookup___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "omega"};
static const lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_lookup___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__0_value),LEAN_SCALAR_PTR_LITERAL(107, 155, 144, 136, 132, 122, 189, 157)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_lookup___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_lookup___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_lookup___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__4;
static const lean_string_object l_Lean_Elab_Tactic_Omega_lookup___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "New facts: "};
static const lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_lookup___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__6;
static const lean_string_object l_Lean_Elab_Tactic_Omega_lookup___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "New atom: "};
static const lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__7_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_lookup___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__8;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_lookup(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_lookup___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0(lean_object* v___x_1_, lean_object* v___x_2_, lean_object* v_m_3_, lean_object* v_cfg_4_, uint8_t v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_12_ = lean_st_mk_ref(v___x_1_);
v___x_13_ = lean_st_mk_ref(v___x_2_);
v___x_14_ = lean_box(v___y_5_);
lean_inc(v___y_10_);
lean_inc_ref(v___y_9_);
lean_inc(v___y_8_);
lean_inc_ref(v___y_7_);
lean_inc(v___y_6_);
lean_inc(v___x_12_);
lean_inc(v___x_13_);
v___x_15_ = lean_apply_10(v_m_3_, v___x_13_, v___x_12_, v_cfg_4_, v___x_14_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, lean_box(0));
if (lean_obj_tag(v___x_15_) == 0)
{
lean_object* v_a_16_; lean_object* v___x_18_; uint8_t v_isShared_19_; uint8_t v_isSharedCheck_25_; 
v_a_16_ = lean_ctor_get(v___x_15_, 0);
v_isSharedCheck_25_ = !lean_is_exclusive(v___x_15_);
if (v_isSharedCheck_25_ == 0)
{
v___x_18_ = v___x_15_;
v_isShared_19_ = v_isSharedCheck_25_;
goto v_resetjp_17_;
}
else
{
lean_inc(v_a_16_);
lean_dec(v___x_15_);
v___x_18_ = lean_box(0);
v_isShared_19_ = v_isSharedCheck_25_;
goto v_resetjp_17_;
}
v_resetjp_17_:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_23_; 
v___x_20_ = lean_st_ref_get(v___x_13_);
lean_dec(v___x_13_);
lean_dec(v___x_20_);
v___x_21_ = lean_st_ref_get(v___x_12_);
lean_dec(v___x_12_);
lean_dec(v___x_21_);
if (v_isShared_19_ == 0)
{
v___x_23_ = v___x_18_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v_a_16_);
v___x_23_ = v_reuseFailAlloc_24_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
return v___x_23_;
}
}
}
else
{
lean_dec(v___x_13_);
lean_dec(v___x_12_);
return v___x_15_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0___boxed(lean_object* v___x_26_, lean_object* v___x_27_, lean_object* v_m_28_, lean_object* v_cfg_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
uint8_t v___y_4824__boxed_37_; lean_object* v_res_38_; 
v___y_4824__boxed_37_ = lean_unbox(v___y_30_);
v_res_38_ = l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0(v___x_26_, v___x_27_, v_m_28_, v_cfg_29_, v___y_4824__boxed_37_, v___y_31_, v___y_32_, v___y_33_, v___y_34_, v___y_35_);
lean_dec(v___y_35_);
lean_dec_ref(v___y_34_);
lean_dec(v___y_33_);
lean_dec_ref(v___y_32_);
lean_dec(v___y_31_);
return v_res_38_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_39_ = lean_box(0);
v___x_40_ = lean_unsigned_to_nat(16u);
v___x_41_ = lean_mk_array(v___x_40_, v___x_39_);
return v___x_41_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0, &l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0);
v___x_43_ = lean_unsigned_to_nat(0u);
v___x_44_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_44_, 0, v___x_43_);
lean_ctor_set(v___x_44_, 1, v___x_42_);
return v___x_44_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1, &l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1);
v___x_46_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
lean_ctor_set(v___x_46_, 1, v___x_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg(lean_object* v_m_47_, lean_object* v_cfg_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_){
_start:
{
lean_object* v___x_54_; lean_object* v___f_55_; uint8_t v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_54_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1, &l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1);
v___f_55_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0___boxed), 11, 4);
lean_closure_set(v___f_55_, 0, v___x_54_);
lean_closure_set(v___f_55_, 1, v___x_54_);
lean_closure_set(v___f_55_, 2, v_m_47_);
lean_closure_set(v___f_55_, 3, v_cfg_48_);
v___x_56_ = 3;
v___x_57_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2);
v___x_58_ = l_Lean_Meta_Canonicalizer_CanonM_run_x27___redArg(v___f_55_, v___x_56_, v___x_57_, v_a_49_, v_a_50_, v_a_51_, v_a_52_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___boxed(lean_object* v_m_59_, lean_object* v_cfg_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg(v_m_59_, v_cfg_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_);
lean_dec(v_a_64_);
lean_dec_ref(v_a_63_);
lean_dec(v_a_62_);
lean_dec_ref(v_a_61_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run(lean_object* v_00_u03b1_67_, lean_object* v_m_68_, lean_object* v_cfg_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg(v_m_68_, v_cfg_69_, v_a_70_, v_a_71_, v_a_72_, v_a_73_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___boxed(lean_object* v_00_u03b1_76_, lean_object* v_m_77_, lean_object* v_cfg_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Lean_Elab_Tactic_Omega_OmegaM_run(v_00_u03b1_76_, v_m_77_, v_cfg_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_);
lean_dec(v_a_82_);
lean_dec_ref(v_a_81_);
lean_dec(v_a_80_);
lean_dec_ref(v_a_79_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg___redArg(lean_object* v_a_85_){
_start:
{
lean_object* v___x_87_; 
lean_inc_ref(v_a_85_);
v___x_87_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_87_, 0, v_a_85_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg___redArg___boxed(lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lean_Elab_Tactic_Omega_cfg___redArg(v_a_88_);
lean_dec_ref(v_a_88_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg(lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, uint8_t v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_){
_start:
{
lean_object* v___x_101_; 
lean_inc_ref(v_a_93_);
v___x_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_101_, 0, v_a_93_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg___boxed(lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_){
_start:
{
uint8_t v_a_boxed_112_; lean_object* v_res_113_; 
v_a_boxed_112_ = lean_unbox(v_a_105_);
v_res_113_ = l_Lean_Elab_Tactic_Omega_cfg(v_a_102_, v_a_103_, v_a_104_, v_a_boxed_112_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_);
lean_dec(v_a_110_);
lean_dec_ref(v_a_109_);
lean_dec(v_a_108_);
lean_dec_ref(v_a_107_);
lean_dec(v_a_106_);
lean_dec_ref(v_a_104_);
lean_dec(v_a_103_);
lean_dec(v_a_102_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___redArg(lean_object* v_hi_114_, lean_object* v_pivot_115_, lean_object* v_as_116_, lean_object* v_i_117_, lean_object* v_k_118_){
_start:
{
uint8_t v___x_119_; 
v___x_119_ = lean_nat_dec_lt(v_k_118_, v_hi_114_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; lean_object* v___x_121_; 
lean_dec(v_k_118_);
v___x_120_ = lean_array_fswap(v_as_116_, v_i_117_, v_hi_114_);
v___x_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_121_, 0, v_i_117_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
return v___x_121_;
}
else
{
lean_object* v___x_122_; lean_object* v_snd_123_; lean_object* v_snd_124_; uint8_t v___x_125_; 
v___x_122_ = lean_array_fget_borrowed(v_as_116_, v_k_118_);
v_snd_123_ = lean_ctor_get(v___x_122_, 1);
v_snd_124_ = lean_ctor_get(v_pivot_115_, 1);
v___x_125_ = lean_nat_dec_lt(v_snd_123_, v_snd_124_);
if (v___x_125_ == 0)
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = lean_unsigned_to_nat(1u);
v___x_127_ = lean_nat_add(v_k_118_, v___x_126_);
lean_dec(v_k_118_);
v_k_118_ = v___x_127_;
goto _start;
}
else
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_129_ = lean_array_fswap(v_as_116_, v_i_117_, v_k_118_);
v___x_130_ = lean_unsigned_to_nat(1u);
v___x_131_ = lean_nat_add(v_i_117_, v___x_130_);
lean_dec(v_i_117_);
v___x_132_ = lean_nat_add(v_k_118_, v___x_130_);
lean_dec(v_k_118_);
v_as_116_ = v___x_129_;
v_i_117_ = v___x_131_;
v_k_118_ = v___x_132_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___redArg___boxed(lean_object* v_hi_134_, lean_object* v_pivot_135_, lean_object* v_as_136_, lean_object* v_i_137_, lean_object* v_k_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___redArg(v_hi_134_, v_pivot_135_, v_as_136_, v_i_137_, v_k_138_);
lean_dec_ref(v_pivot_135_);
lean_dec(v_hi_134_);
return v_res_139_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0(lean_object* v_x1_140_, lean_object* v_x2_141_){
_start:
{
lean_object* v_snd_142_; lean_object* v_snd_143_; uint8_t v___x_144_; 
v_snd_142_ = lean_ctor_get(v_x1_140_, 1);
v_snd_143_ = lean_ctor_get(v_x2_141_, 1);
v___x_144_ = lean_nat_dec_lt(v_snd_142_, v_snd_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0___boxed(lean_object* v_x1_145_, lean_object* v_x2_146_){
_start:
{
uint8_t v_res_147_; lean_object* v_r_148_; 
v_res_147_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0(v_x1_145_, v_x2_146_);
lean_dec_ref(v_x2_146_);
lean_dec_ref(v_x1_145_);
v_r_148_ = lean_box(v_res_147_);
return v_r_148_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(lean_object* v_n_149_, lean_object* v_as_150_, lean_object* v_lo_151_, lean_object* v_hi_152_){
_start:
{
lean_object* v___y_154_; uint8_t v___x_164_; 
v___x_164_ = lean_nat_dec_lt(v_lo_151_, v_hi_152_);
if (v___x_164_ == 0)
{
lean_dec(v_lo_151_);
return v_as_150_;
}
else
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v_mid_167_; lean_object* v___y_169_; lean_object* v___y_175_; lean_object* v___x_180_; lean_object* v___x_181_; uint8_t v___x_182_; 
v___x_165_ = lean_nat_add(v_lo_151_, v_hi_152_);
v___x_166_ = lean_unsigned_to_nat(1u);
v_mid_167_ = lean_nat_shiftr(v___x_165_, v___x_166_);
lean_dec(v___x_165_);
v___x_180_ = lean_array_fget_borrowed(v_as_150_, v_mid_167_);
v___x_181_ = lean_array_fget_borrowed(v_as_150_, v_lo_151_);
v___x_182_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0(v___x_180_, v___x_181_);
if (v___x_182_ == 0)
{
v___y_175_ = v_as_150_;
goto v___jp_174_;
}
else
{
lean_object* v___x_183_; 
v___x_183_ = lean_array_fswap(v_as_150_, v_lo_151_, v_mid_167_);
v___y_175_ = v___x_183_;
goto v___jp_174_;
}
v___jp_168_:
{
lean_object* v___x_170_; lean_object* v___x_171_; uint8_t v___x_172_; 
v___x_170_ = lean_array_fget_borrowed(v___y_169_, v_mid_167_);
v___x_171_ = lean_array_fget_borrowed(v___y_169_, v_hi_152_);
v___x_172_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0(v___x_170_, v___x_171_);
if (v___x_172_ == 0)
{
lean_dec(v_mid_167_);
v___y_154_ = v___y_169_;
goto v___jp_153_;
}
else
{
lean_object* v___x_173_; 
v___x_173_ = lean_array_fswap(v___y_169_, v_mid_167_, v_hi_152_);
lean_dec(v_mid_167_);
v___y_154_ = v___x_173_;
goto v___jp_153_;
}
}
v___jp_174_:
{
lean_object* v___x_176_; lean_object* v___x_177_; uint8_t v___x_178_; 
v___x_176_ = lean_array_fget_borrowed(v___y_175_, v_hi_152_);
v___x_177_ = lean_array_fget_borrowed(v___y_175_, v_lo_151_);
v___x_178_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0(v___x_176_, v___x_177_);
if (v___x_178_ == 0)
{
v___y_169_ = v___y_175_;
goto v___jp_168_;
}
else
{
lean_object* v___x_179_; 
v___x_179_ = lean_array_fswap(v___y_175_, v_lo_151_, v_hi_152_);
v___y_169_ = v___x_179_;
goto v___jp_168_;
}
}
}
v___jp_153_:
{
lean_object* v_pivot_155_; lean_object* v___x_156_; lean_object* v_fst_157_; lean_object* v_snd_158_; uint8_t v___x_159_; 
v_pivot_155_ = lean_array_fget(v___y_154_, v_hi_152_);
lean_inc_n(v_lo_151_, 2);
v___x_156_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___redArg(v_hi_152_, v_pivot_155_, v___y_154_, v_lo_151_, v_lo_151_);
lean_dec(v_pivot_155_);
v_fst_157_ = lean_ctor_get(v___x_156_, 0);
lean_inc(v_fst_157_);
v_snd_158_ = lean_ctor_get(v___x_156_, 1);
lean_inc(v_snd_158_);
lean_dec_ref(v___x_156_);
v___x_159_ = lean_nat_dec_le(v_hi_152_, v_fst_157_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_160_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(v_n_149_, v_snd_158_, v_lo_151_, v_fst_157_);
v___x_161_ = lean_unsigned_to_nat(1u);
v___x_162_ = lean_nat_add(v_fst_157_, v___x_161_);
lean_dec(v_fst_157_);
v_as_150_ = v___x_160_;
v_lo_151_ = v___x_162_;
goto _start;
}
else
{
lean_dec(v_fst_157_);
lean_dec(v_lo_151_);
return v_snd_158_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___boxed(lean_object* v_n_184_, lean_object* v_as_185_, lean_object* v_lo_186_, lean_object* v_hi_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(v_n_184_, v_as_185_, v_lo_186_, v_hi_187_);
lean_dec(v_hi_187_);
lean_dec(v_n_184_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2(lean_object* v_x_189_, lean_object* v_x_190_){
_start:
{
if (lean_obj_tag(v_x_190_) == 0)
{
return v_x_189_;
}
else
{
lean_object* v_key_191_; lean_object* v_value_192_; lean_object* v_tail_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v_key_191_ = lean_ctor_get(v_x_190_, 0);
v_value_192_ = lean_ctor_get(v_x_190_, 1);
v_tail_193_ = lean_ctor_get(v_x_190_, 2);
lean_inc(v_value_192_);
lean_inc(v_key_191_);
v___x_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_194_, 0, v_key_191_);
lean_ctor_set(v___x_194_, 1, v_value_192_);
v___x_195_ = lean_array_push(v_x_189_, v___x_194_);
v_x_189_ = v___x_195_;
v_x_190_ = v_tail_193_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2___boxed(lean_object* v_x_197_, lean_object* v_x_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2(v_x_197_, v_x_198_);
lean_dec(v_x_198_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3(lean_object* v_as_200_, size_t v_i_201_, size_t v_stop_202_, lean_object* v_b_203_){
_start:
{
uint8_t v___x_204_; 
v___x_204_ = lean_usize_dec_eq(v_i_201_, v_stop_202_);
if (v___x_204_ == 0)
{
lean_object* v___x_205_; lean_object* v___x_206_; size_t v___x_207_; size_t v___x_208_; 
v___x_205_ = lean_array_uget_borrowed(v_as_200_, v_i_201_);
v___x_206_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2(v_b_203_, v___x_205_);
v___x_207_ = ((size_t)1ULL);
v___x_208_ = lean_usize_add(v_i_201_, v___x_207_);
v_i_201_ = v___x_208_;
v_b_203_ = v___x_206_;
goto _start;
}
else
{
return v_b_203_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3___boxed(lean_object* v_as_210_, lean_object* v_i_211_, lean_object* v_stop_212_, lean_object* v_b_213_){
_start:
{
size_t v_i_boxed_214_; size_t v_stop_boxed_215_; lean_object* v_res_216_; 
v_i_boxed_214_ = lean_unbox_usize(v_i_211_);
lean_dec(v_i_211_);
v_stop_boxed_215_ = lean_unbox_usize(v_stop_212_);
lean_dec(v_stop_212_);
v_res_216_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3(v_as_210_, v_i_boxed_214_, v_stop_boxed_215_, v_b_213_);
lean_dec_ref(v_as_210_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0(size_t v_sz_217_, size_t v_i_218_, lean_object* v_bs_219_){
_start:
{
uint8_t v___x_220_; 
v___x_220_ = lean_usize_dec_lt(v_i_218_, v_sz_217_);
if (v___x_220_ == 0)
{
lean_object* v___x_221_; 
v___x_221_ = l_unsafeCast___redArg(v_bs_219_);
lean_dec_ref(v_bs_219_);
return v___x_221_;
}
else
{
lean_object* v_v_222_; lean_object* v___x_223_; lean_object* v_fst_224_; lean_object* v___x_225_; lean_object* v_bs_x27_226_; size_t v___x_227_; size_t v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v_v_222_ = lean_array_uget_borrowed(v_bs_219_, v_i_218_);
v___x_223_ = l_unsafeCast___redArg(v_v_222_);
v_fst_224_ = lean_ctor_get(v___x_223_, 0);
lean_inc(v_fst_224_);
lean_dec(v___x_223_);
v___x_225_ = lean_unsigned_to_nat(0u);
v_bs_x27_226_ = lean_array_uset(v_bs_219_, v_i_218_, v___x_225_);
v___x_227_ = ((size_t)1ULL);
v___x_228_ = lean_usize_add(v_i_218_, v___x_227_);
v___x_229_ = l_unsafeCast___redArg(v_fst_224_);
lean_dec(v_fst_224_);
v___x_230_ = lean_array_uset(v_bs_x27_226_, v_i_218_, v___x_229_);
v_i_218_ = v___x_228_;
v_bs_219_ = v___x_230_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0___boxed(lean_object* v_sz_232_, lean_object* v_i_233_, lean_object* v_bs_234_){
_start:
{
size_t v_sz_boxed_235_; size_t v_i_boxed_236_; lean_object* v_res_237_; 
v_sz_boxed_235_ = lean_unbox_usize(v_sz_232_);
lean_dec(v_sz_232_);
v_i_boxed_236_ = lean_unbox_usize(v_i_233_);
lean_dec(v_i_233_);
v_res_237_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0(v_sz_boxed_235_, v_i_boxed_236_, v_bs_234_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms___redArg(lean_object* v_a_238_){
_start:
{
lean_object* v___x_240_; lean_object* v___y_242_; lean_object* v___y_250_; lean_object* v___y_251_; lean_object* v___y_252_; lean_object* v___y_253_; lean_object* v___y_256_; lean_object* v___y_257_; lean_object* v___y_258_; lean_object* v___y_259_; lean_object* v___y_262_; lean_object* v_size_269_; lean_object* v_buckets_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; uint8_t v___x_274_; 
v___x_240_ = lean_st_ref_get(v_a_238_);
v_size_269_ = lean_ctor_get(v___x_240_, 0);
lean_inc(v_size_269_);
v_buckets_270_ = lean_ctor_get(v___x_240_, 1);
lean_inc_ref(v_buckets_270_);
lean_dec(v___x_240_);
v___x_271_ = lean_mk_empty_array_with_capacity(v_size_269_);
lean_dec(v_size_269_);
v___x_272_ = lean_unsigned_to_nat(0u);
v___x_273_ = lean_array_get_size(v_buckets_270_);
v___x_274_ = lean_nat_dec_lt(v___x_272_, v___x_273_);
if (v___x_274_ == 0)
{
lean_dec_ref(v_buckets_270_);
v___y_262_ = v___x_271_;
goto v___jp_261_;
}
else
{
size_t v___x_275_; size_t v___x_276_; lean_object* v___x_277_; 
v___x_275_ = ((size_t)0ULL);
v___x_276_ = lean_usize_of_nat(v___x_273_);
v___x_277_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3(v_buckets_270_, v___x_275_, v___x_276_, v___x_271_);
lean_dec_ref(v_buckets_270_);
v___y_262_ = v___x_277_;
goto v___jp_261_;
}
v___jp_241_:
{
size_t v_sz_243_; size_t v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v_sz_243_ = lean_array_size(v___y_242_);
v___x_244_ = ((size_t)0ULL);
v___x_245_ = l_unsafeCast___redArg(v___y_242_);
lean_dec_ref(v___y_242_);
v___x_246_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0(v_sz_243_, v___x_244_, v___x_245_);
v___x_247_ = l_unsafeCast___redArg(v___x_246_);
lean_dec_ref(v___x_246_);
v___x_248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
return v___x_248_;
}
v___jp_249_:
{
lean_object* v___x_254_; 
v___x_254_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(v___y_252_, v___y_250_, v___y_251_, v___y_253_);
lean_dec(v___y_253_);
lean_dec(v___y_252_);
v___y_242_ = v___x_254_;
goto v___jp_241_;
}
v___jp_255_:
{
uint8_t v___x_260_; 
v___x_260_ = lean_nat_dec_le(v___y_259_, v___y_257_);
if (v___x_260_ == 0)
{
lean_dec(v___y_257_);
lean_inc(v___y_259_);
v___y_250_ = v___y_256_;
v___y_251_ = v___y_259_;
v___y_252_ = v___y_258_;
v___y_253_ = v___y_259_;
goto v___jp_249_;
}
else
{
v___y_250_ = v___y_256_;
v___y_251_ = v___y_259_;
v___y_252_ = v___y_258_;
v___y_253_ = v___y_257_;
goto v___jp_249_;
}
}
v___jp_261_:
{
lean_object* v___x_263_; lean_object* v___x_264_; uint8_t v___x_265_; 
v___x_263_ = lean_array_get_size(v___y_262_);
v___x_264_ = lean_unsigned_to_nat(0u);
v___x_265_ = lean_nat_dec_eq(v___x_263_, v___x_264_);
if (v___x_265_ == 0)
{
lean_object* v___x_266_; lean_object* v___x_267_; uint8_t v___x_268_; 
v___x_266_ = lean_unsigned_to_nat(1u);
v___x_267_ = lean_nat_sub(v___x_263_, v___x_266_);
v___x_268_ = lean_nat_dec_le(v___x_264_, v___x_267_);
if (v___x_268_ == 0)
{
lean_inc(v___x_267_);
v___y_256_ = v___y_262_;
v___y_257_ = v___x_267_;
v___y_258_ = v___x_263_;
v___y_259_ = v___x_267_;
goto v___jp_255_;
}
else
{
v___y_256_ = v___y_262_;
v___y_257_ = v___x_267_;
v___y_258_ = v___x_263_;
v___y_259_ = v___x_264_;
goto v___jp_255_;
}
}
else
{
v___y_242_ = v___y_262_;
goto v___jp_241_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms___redArg___boxed(lean_object* v_a_278_, lean_object* v_a_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l_Lean_Elab_Tactic_Omega_atoms___redArg(v_a_278_);
lean_dec(v_a_278_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms(lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, uint8_t v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_){
_start:
{
lean_object* v___x_291_; 
v___x_291_ = l_Lean_Elab_Tactic_Omega_atoms___redArg(v_a_282_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms___boxed(lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_, lean_object* v_a_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_){
_start:
{
uint8_t v_a_boxed_302_; lean_object* v_res_303_; 
v_a_boxed_302_ = lean_unbox(v_a_295_);
v_res_303_ = l_Lean_Elab_Tactic_Omega_atoms(v_a_292_, v_a_293_, v_a_294_, v_a_boxed_302_, v_a_296_, v_a_297_, v_a_298_, v_a_299_, v_a_300_);
lean_dec(v_a_300_);
lean_dec_ref(v_a_299_);
lean_dec(v_a_298_);
lean_dec_ref(v_a_297_);
lean_dec(v_a_296_);
lean_dec_ref(v_a_294_);
lean_dec(v_a_293_);
lean_dec(v_a_292_);
return v_res_303_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1(lean_object* v_n_304_, lean_object* v_as_305_, lean_object* v_lo_306_, lean_object* v_hi_307_, lean_object* v_w_308_, lean_object* v_hlo_309_, lean_object* v_hhi_310_){
_start:
{
lean_object* v___x_311_; 
v___x_311_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(v_n_304_, v_as_305_, v_lo_306_, v_hi_307_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___boxed(lean_object* v_n_312_, lean_object* v_as_313_, lean_object* v_lo_314_, lean_object* v_hi_315_, lean_object* v_w_316_, lean_object* v_hlo_317_, lean_object* v_hhi_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1(v_n_312_, v_as_313_, v_lo_314_, v_hi_315_, v_w_316_, v_hlo_317_, v_hhi_318_);
lean_dec(v_hi_315_);
lean_dec(v_n_312_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1(lean_object* v_n_320_, lean_object* v_lo_321_, lean_object* v_hi_322_, lean_object* v_hhi_323_, lean_object* v_pivot_324_, lean_object* v_as_325_, lean_object* v_i_326_, lean_object* v_k_327_, lean_object* v_ilo_328_, lean_object* v_ik_329_, lean_object* v_w_330_){
_start:
{
lean_object* v___x_331_; 
v___x_331_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___redArg(v_hi_322_, v_pivot_324_, v_as_325_, v_i_326_, v_k_327_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___boxed(lean_object* v_n_332_, lean_object* v_lo_333_, lean_object* v_hi_334_, lean_object* v_hhi_335_, lean_object* v_pivot_336_, lean_object* v_as_337_, lean_object* v_i_338_, lean_object* v_k_339_, lean_object* v_ilo_340_, lean_object* v_ik_341_, lean_object* v_w_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1(v_n_332_, v_lo_333_, v_hi_334_, v_hhi_335_, v_pivot_336_, v_as_337_, v_i_338_, v_k_339_, v_ilo_340_, v_ik_341_, v_w_342_);
lean_dec_ref(v_pivot_336_);
lean_dec(v_hi_334_);
lean_dec(v_lo_333_);
lean_dec(v_n_332_);
return v_res_343_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_347_ = lean_box(0);
v___x_348_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__1));
v___x_349_ = l_Lean_Expr_const___override(v___x_348_, v___x_347_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg(lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_){
_start:
{
lean_object* v___x_356_; lean_object* v_a_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_356_ = l_Lean_Elab_Tactic_Omega_atoms___redArg(v_a_350_);
v_a_357_ = lean_ctor_get(v___x_356_, 0);
lean_inc(v_a_357_);
lean_dec_ref(v___x_356_);
v___x_358_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2);
v___x_359_ = lean_array_to_list(v_a_357_);
v___x_360_ = l_Lean_Meta_mkListLit(v___x_358_, v___x_359_, v_a_351_, v_a_352_, v_a_353_, v_a_354_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg___boxed(lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l_Lean_Elab_Tactic_Omega_atomsList___redArg(v_a_361_, v_a_362_, v_a_363_, v_a_364_, v_a_365_);
lean_dec(v_a_365_);
lean_dec_ref(v_a_364_);
lean_dec(v_a_363_);
lean_dec_ref(v_a_362_);
lean_dec(v_a_361_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList(lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, uint8_t v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = l_Lean_Elab_Tactic_Omega_atomsList___redArg(v_a_369_, v_a_373_, v_a_374_, v_a_375_, v_a_376_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList___boxed(lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_){
_start:
{
uint8_t v_a_boxed_389_; lean_object* v_res_390_; 
v_a_boxed_389_ = lean_unbox(v_a_382_);
v_res_390_ = l_Lean_Elab_Tactic_Omega_atomsList(v_a_379_, v_a_380_, v_a_381_, v_a_boxed_389_, v_a_383_, v_a_384_, v_a_385_, v_a_386_, v_a_387_);
lean_dec(v_a_387_);
lean_dec_ref(v_a_386_);
lean_dec(v_a_385_);
lean_dec_ref(v_a_384_);
lean_dec(v_a_383_);
lean_dec_ref(v_a_381_);
lean_dec(v_a_380_);
lean_dec(v_a_379_);
return v_res_390_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_400_ = lean_box(0);
v___x_401_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4));
v___x_402_ = l_Lean_Expr_const___override(v___x_401_, v___x_400_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = l_Lean_Elab_Tactic_Omega_atomsList___redArg(v_a_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_);
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v_a_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_419_; 
v_a_410_ = lean_ctor_get(v___x_409_, 0);
v_isSharedCheck_419_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_419_ == 0)
{
v___x_412_ = v___x_409_;
v_isShared_413_ = v_isSharedCheck_419_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_a_410_);
lean_dec(v___x_409_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_419_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_417_; 
v___x_414_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5, &l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5_once, _init_l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5);
v___x_415_ = l_Lean_Expr_app___override(v___x_414_, v_a_410_);
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 0, v___x_415_);
v___x_417_ = v___x_412_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v___x_415_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
return v___x_417_;
}
}
}
else
{
return v___x_409_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___boxed(lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(v_a_420_, v_a_421_, v_a_422_, v_a_423_, v_a_424_);
lean_dec(v_a_424_);
lean_dec_ref(v_a_423_);
lean_dec(v_a_422_);
lean_dec_ref(v_a_421_);
lean_dec(v_a_420_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs(lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, uint8_t v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(v_a_428_, v_a_432_, v_a_433_, v_a_434_, v_a_435_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___boxed(lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_){
_start:
{
uint8_t v_a_boxed_448_; lean_object* v_res_449_; 
v_a_boxed_448_ = lean_unbox(v_a_441_);
v_res_449_ = l_Lean_Elab_Tactic_Omega_atomsCoeffs(v_a_438_, v_a_439_, v_a_440_, v_a_boxed_448_, v_a_442_, v_a_443_, v_a_444_, v_a_445_, v_a_446_);
lean_dec(v_a_446_);
lean_dec_ref(v_a_445_);
lean_dec(v_a_444_);
lean_dec_ref(v_a_443_);
lean_dec(v_a_442_);
lean_dec_ref(v_a_440_);
lean_dec(v_a_439_);
lean_dec(v_a_438_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen___redArg(lean_object* v_t_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, uint8_t v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_, lean_object* v_a_458_, lean_object* v_a_459_){
_start:
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_461_ = lean_st_ref_get(v_a_452_);
v___x_462_ = lean_st_ref_get(v_a_451_);
v___x_463_ = lean_box(v_a_454_);
lean_inc(v_a_459_);
lean_inc_ref(v_a_458_);
lean_inc(v_a_457_);
lean_inc_ref(v_a_456_);
lean_inc(v_a_455_);
lean_inc_ref(v_a_453_);
lean_inc(v_a_452_);
lean_inc(v_a_451_);
v___x_464_ = lean_apply_10(v_t_450_, v_a_451_, v_a_452_, v_a_453_, v___x_463_, v_a_455_, v_a_456_, v_a_457_, v_a_458_, v_a_459_, lean_box(0));
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v_a_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_483_; 
v_a_465_ = lean_ctor_get(v___x_464_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_483_ == 0)
{
v___x_467_ = v___x_464_;
v_isShared_468_ = v_isSharedCheck_483_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_a_465_);
lean_dec(v___x_464_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_483_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v_snd_469_; uint8_t v___x_470_; 
v_snd_469_ = lean_ctor_get(v_a_465_, 1);
v___x_470_ = lean_unbox(v_snd_469_);
if (v___x_470_ == 0)
{
lean_object* v_fst_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_477_; 
v_fst_471_ = lean_ctor_get(v_a_465_, 0);
lean_inc(v_fst_471_);
lean_dec(v_a_465_);
v___x_472_ = lean_st_ref_take(v_a_452_);
lean_dec(v___x_472_);
v___x_473_ = lean_st_ref_put(v_a_452_, v___x_461_);
v___x_474_ = lean_st_ref_take(v_a_451_);
lean_dec(v___x_474_);
v___x_475_ = lean_st_ref_put(v_a_451_, v___x_462_);
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 0, v_fst_471_);
v___x_477_ = v___x_467_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_fst_471_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
else
{
lean_object* v_fst_479_; lean_object* v___x_481_; 
lean_dec(v___x_462_);
lean_dec(v___x_461_);
v_fst_479_ = lean_ctor_get(v_a_465_, 0);
lean_inc(v_fst_479_);
lean_dec(v_a_465_);
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 0, v_fst_479_);
v___x_481_ = v___x_467_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v_fst_479_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
}
else
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_491_; 
lean_dec(v___x_462_);
lean_dec(v___x_461_);
v_a_484_ = lean_ctor_get(v___x_464_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_491_ == 0)
{
v___x_486_ = v___x_464_;
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_464_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen___redArg___boxed(lean_object* v_t_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_){
_start:
{
uint8_t v_a_boxed_503_; lean_object* v_res_504_; 
v_a_boxed_503_ = lean_unbox(v_a_496_);
v_res_504_ = l_Lean_Elab_Tactic_Omega_commitWhen___redArg(v_t_492_, v_a_493_, v_a_494_, v_a_495_, v_a_boxed_503_, v_a_497_, v_a_498_, v_a_499_, v_a_500_, v_a_501_);
lean_dec(v_a_501_);
lean_dec_ref(v_a_500_);
lean_dec(v_a_499_);
lean_dec_ref(v_a_498_);
lean_dec(v_a_497_);
lean_dec_ref(v_a_495_);
lean_dec(v_a_494_);
lean_dec(v_a_493_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen(lean_object* v_00_u03b1_505_, lean_object* v_t_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, uint8_t v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_, lean_object* v_a_513_, lean_object* v_a_514_, lean_object* v_a_515_){
_start:
{
lean_object* v___x_517_; 
v___x_517_ = l_Lean_Elab_Tactic_Omega_commitWhen___redArg(v_t_506_, v_a_507_, v_a_508_, v_a_509_, v_a_510_, v_a_511_, v_a_512_, v_a_513_, v_a_514_, v_a_515_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen___boxed(lean_object* v_00_u03b1_518_, lean_object* v_t_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_){
_start:
{
uint8_t v_a_boxed_530_; lean_object* v_res_531_; 
v_a_boxed_530_ = lean_unbox(v_a_523_);
v_res_531_ = l_Lean_Elab_Tactic_Omega_commitWhen(v_00_u03b1_518_, v_t_519_, v_a_520_, v_a_521_, v_a_522_, v_a_boxed_530_, v_a_524_, v_a_525_, v_a_526_, v_a_527_, v_a_528_);
lean_dec(v_a_528_);
lean_dec_ref(v_a_527_);
lean_dec(v_a_526_);
lean_dec_ref(v_a_525_);
lean_dec(v_a_524_);
lean_dec_ref(v_a_522_);
lean_dec(v_a_521_);
lean_dec(v_a_520_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0(lean_object* v_t_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, uint8_t v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_){
_start:
{
lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_543_ = lean_box(v___y_536_);
lean_inc(v___y_541_);
lean_inc_ref(v___y_540_);
lean_inc(v___y_539_);
lean_inc_ref(v___y_538_);
lean_inc(v___y_537_);
lean_inc_ref(v___y_535_);
lean_inc(v___y_534_);
lean_inc(v___y_533_);
v___x_544_ = lean_apply_10(v_t_532_, v___y_533_, v___y_534_, v___y_535_, v___x_543_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, lean_box(0));
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v_a_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_555_; 
v_a_545_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_555_ == 0)
{
v___x_547_ = v___x_544_;
v_isShared_548_ = v_isSharedCheck_555_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_a_545_);
lean_dec(v___x_544_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_555_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
uint8_t v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_553_; 
v___x_549_ = 0;
v___x_550_ = lean_box(v___x_549_);
v___x_551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_551_, 0, v_a_545_);
lean_ctor_set(v___x_551_, 1, v___x_550_);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 0, v___x_551_);
v___x_553_ = v___x_547_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v___x_551_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
else
{
lean_object* v_a_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_563_; 
v_a_556_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_563_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_563_ == 0)
{
v___x_558_ = v___x_544_;
v_isShared_559_ = v_isSharedCheck_563_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_a_556_);
lean_dec(v___x_544_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_563_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v___x_561_; 
if (v_isShared_559_ == 0)
{
v___x_561_ = v___x_558_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v_a_556_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
return v___x_561_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0___boxed(lean_object* v_t_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_){
_start:
{
uint8_t v___y_673__boxed_575_; lean_object* v_res_576_; 
v___y_673__boxed_575_ = lean_unbox(v___y_568_);
v_res_576_ = l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0(v_t_564_, v___y_565_, v___y_566_, v___y_567_, v___y_673__boxed_575_, v___y_569_, v___y_570_, v___y_571_, v___y_572_, v___y_573_);
lean_dec(v___y_573_);
lean_dec_ref(v___y_572_);
lean_dec(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec(v___y_569_);
lean_dec_ref(v___y_567_);
lean_dec(v___y_566_);
lean_dec(v___y_565_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg(lean_object* v_t_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, uint8_t v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_){
_start:
{
lean_object* v___f_588_; lean_object* v___x_589_; 
v___f_588_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0___boxed), 11, 1);
lean_closure_set(v___f_588_, 0, v_t_577_);
v___x_589_ = l_Lean_Elab_Tactic_Omega_commitWhen___redArg(v___f_588_, v_a_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_, v_a_586_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___boxed(lean_object* v_t_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_){
_start:
{
uint8_t v_a_boxed_601_; lean_object* v_res_602_; 
v_a_boxed_601_ = lean_unbox(v_a_594_);
v_res_602_ = l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg(v_t_590_, v_a_591_, v_a_592_, v_a_593_, v_a_boxed_601_, v_a_595_, v_a_596_, v_a_597_, v_a_598_, v_a_599_);
lean_dec(v_a_599_);
lean_dec_ref(v_a_598_);
lean_dec(v_a_597_);
lean_dec_ref(v_a_596_);
lean_dec(v_a_595_);
lean_dec_ref(v_a_593_);
lean_dec(v_a_592_);
lean_dec(v_a_591_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState(lean_object* v_00_u03b1_603_, lean_object* v_t_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_, uint8_t v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_){
_start:
{
lean_object* v___x_615_; 
v___x_615_ = l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg(v_t_604_, v_a_605_, v_a_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_, v_a_611_, v_a_612_, v_a_613_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___boxed(lean_object* v_00_u03b1_616_, lean_object* v_t_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_){
_start:
{
uint8_t v_a_boxed_628_; lean_object* v_res_629_; 
v_a_boxed_628_ = lean_unbox(v_a_621_);
v_res_629_ = l_Lean_Elab_Tactic_Omega_withoutModifyingState(v_00_u03b1_616_, v_t_617_, v_a_618_, v_a_619_, v_a_620_, v_a_boxed_628_, v_a_622_, v_a_623_, v_a_624_, v_a_625_, v_a_626_);
lean_dec(v_a_626_);
lean_dec_ref(v_a_625_);
lean_dec(v_a_624_);
lean_dec_ref(v_a_623_);
lean_dec(v_a_622_);
lean_dec_ref(v_a_620_);
lean_dec(v_a_619_);
lean_dec(v_a_618_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_natCast_x3f(lean_object* v_n_632_){
_start:
{
lean_object* v___x_633_; lean_object* v_fst_634_; 
lean_inc_ref(v_n_632_);
v___x_633_ = l_Lean_Expr_getAppFnArgs(v_n_632_);
v_fst_634_ = lean_ctor_get(v___x_633_, 0);
lean_inc(v_fst_634_);
if (lean_obj_tag(v_fst_634_) == 1)
{
lean_object* v_pre_635_; 
v_pre_635_ = lean_ctor_get(v_fst_634_, 0);
lean_inc(v_pre_635_);
if (lean_obj_tag(v_pre_635_) == 1)
{
lean_object* v_pre_636_; 
v_pre_636_ = lean_ctor_get(v_pre_635_, 0);
if (lean_obj_tag(v_pre_636_) == 0)
{
lean_object* v_snd_637_; lean_object* v_str_638_; lean_object* v_str_639_; lean_object* v___x_640_; uint8_t v___x_641_; 
v_snd_637_ = lean_ctor_get(v___x_633_, 1);
lean_inc(v_snd_637_);
lean_dec_ref(v___x_633_);
v_str_638_ = lean_ctor_get(v_fst_634_, 1);
lean_inc_ref(v_str_638_);
lean_dec_ref_known(v_fst_634_, 2);
v_str_639_ = lean_ctor_get(v_pre_635_, 1);
lean_inc_ref(v_str_639_);
lean_dec_ref_known(v_pre_635_, 2);
v___x_640_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0));
v___x_641_ = lean_string_dec_eq(v_str_639_, v___x_640_);
lean_dec_ref(v_str_639_);
if (v___x_641_ == 0)
{
lean_object* v___x_642_; 
lean_dec_ref(v_str_638_);
lean_dec(v_snd_637_);
v___x_642_ = l_Lean_Expr_nat_x3f(v_n_632_);
return v___x_642_;
}
else
{
lean_object* v___x_643_; uint8_t v___x_644_; 
v___x_643_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_644_ = lean_string_dec_eq(v_str_638_, v___x_643_);
lean_dec_ref(v_str_638_);
if (v___x_644_ == 0)
{
lean_object* v___x_645_; 
lean_dec(v_snd_637_);
v___x_645_ = l_Lean_Expr_nat_x3f(v_n_632_);
return v___x_645_;
}
else
{
lean_object* v___x_646_; lean_object* v___x_647_; uint8_t v___x_648_; 
v___x_646_ = lean_array_get_size(v_snd_637_);
v___x_647_ = lean_unsigned_to_nat(3u);
v___x_648_ = lean_nat_dec_eq(v___x_646_, v___x_647_);
if (v___x_648_ == 0)
{
lean_object* v___x_649_; 
lean_dec(v_snd_637_);
v___x_649_ = l_Lean_Expr_nat_x3f(v_n_632_);
return v___x_649_;
}
else
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
lean_dec_ref(v_n_632_);
v___x_650_ = lean_unsigned_to_nat(2u);
v___x_651_ = lean_array_fget(v_snd_637_, v___x_650_);
lean_dec(v_snd_637_);
v___x_652_ = l_Lean_Expr_nat_x3f(v___x_651_);
return v___x_652_;
}
}
}
}
else
{
lean_object* v___x_653_; 
lean_dec_ref_known(v_pre_635_, 2);
lean_dec_ref_known(v_fst_634_, 2);
lean_dec_ref(v___x_633_);
v___x_653_ = l_Lean_Expr_nat_x3f(v_n_632_);
return v___x_653_;
}
}
else
{
lean_object* v___x_654_; 
lean_dec_ref_known(v_fst_634_, 2);
lean_dec(v_pre_635_);
lean_dec_ref(v___x_633_);
v___x_654_ = l_Lean_Expr_nat_x3f(v_n_632_);
return v___x_654_;
}
}
else
{
lean_object* v___x_655_; 
lean_dec(v_fst_634_);
lean_dec_ref(v___x_633_);
v___x_655_ = l_Lean_Expr_nat_x3f(v_n_632_);
return v___x_655_;
}
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_Tactic_Omega_intCast_x3f_spec__0(lean_object* v_a_656_){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = lean_nat_to_int(v_a_656_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_intCast_x3f(lean_object* v_n_658_){
_start:
{
lean_object* v___x_659_; lean_object* v_fst_660_; 
lean_inc_ref(v_n_658_);
v___x_659_ = l_Lean_Expr_getAppFnArgs(v_n_658_);
v_fst_660_ = lean_ctor_get(v___x_659_, 0);
lean_inc(v_fst_660_);
if (lean_obj_tag(v_fst_660_) == 1)
{
lean_object* v_pre_661_; 
v_pre_661_ = lean_ctor_get(v_fst_660_, 0);
lean_inc(v_pre_661_);
if (lean_obj_tag(v_pre_661_) == 1)
{
lean_object* v_pre_662_; 
v_pre_662_ = lean_ctor_get(v_pre_661_, 0);
if (lean_obj_tag(v_pre_662_) == 0)
{
lean_object* v_snd_663_; lean_object* v_str_664_; lean_object* v_str_665_; lean_object* v___x_666_; uint8_t v___x_667_; 
v_snd_663_ = lean_ctor_get(v___x_659_, 1);
lean_inc(v_snd_663_);
lean_dec_ref(v___x_659_);
v_str_664_ = lean_ctor_get(v_fst_660_, 1);
lean_inc_ref(v_str_664_);
lean_dec_ref_known(v_fst_660_, 2);
v_str_665_ = lean_ctor_get(v_pre_661_, 1);
lean_inc_ref(v_str_665_);
lean_dec_ref_known(v_pre_661_, 2);
v___x_666_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0));
v___x_667_ = lean_string_dec_eq(v_str_665_, v___x_666_);
lean_dec_ref(v_str_665_);
if (v___x_667_ == 0)
{
lean_object* v___x_668_; 
lean_dec_ref(v_str_664_);
lean_dec(v_snd_663_);
v___x_668_ = l_Lean_Expr_int_x3f(v_n_658_);
return v___x_668_;
}
else
{
lean_object* v___x_669_; uint8_t v___x_670_; 
v___x_669_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_670_ = lean_string_dec_eq(v_str_664_, v___x_669_);
lean_dec_ref(v_str_664_);
if (v___x_670_ == 0)
{
lean_object* v___x_671_; 
lean_dec(v_snd_663_);
v___x_671_ = l_Lean_Expr_int_x3f(v_n_658_);
return v___x_671_;
}
else
{
lean_object* v___x_672_; lean_object* v___x_673_; uint8_t v___x_674_; 
v___x_672_ = lean_array_get_size(v_snd_663_);
v___x_673_ = lean_unsigned_to_nat(3u);
v___x_674_ = lean_nat_dec_eq(v___x_672_, v___x_673_);
if (v___x_674_ == 0)
{
lean_object* v___x_675_; 
lean_dec(v_snd_663_);
v___x_675_ = l_Lean_Expr_int_x3f(v_n_658_);
return v___x_675_;
}
else
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
lean_dec_ref(v_n_658_);
v___x_676_ = lean_unsigned_to_nat(2u);
v___x_677_ = lean_array_fget(v_snd_663_, v___x_676_);
lean_dec(v_snd_663_);
v___x_678_ = l_Lean_Expr_nat_x3f(v___x_677_);
if (lean_obj_tag(v___x_678_) == 0)
{
lean_object* v___x_679_; 
v___x_679_ = lean_box(0);
return v___x_679_;
}
else
{
lean_object* v_val_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_688_; 
v_val_680_ = lean_ctor_get(v___x_678_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v___x_678_);
if (v_isSharedCheck_688_ == 0)
{
v___x_682_ = v___x_678_;
v_isShared_683_ = v_isSharedCheck_688_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_val_680_);
lean_dec(v___x_678_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_688_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_684_; lean_object* v___x_686_; 
v___x_684_ = lean_nat_to_int(v_val_680_);
if (v_isShared_683_ == 0)
{
lean_ctor_set(v___x_682_, 0, v___x_684_);
v___x_686_ = v___x_682_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v___x_684_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_689_; 
lean_dec_ref_known(v_pre_661_, 2);
lean_dec_ref_known(v_fst_660_, 2);
lean_dec_ref(v___x_659_);
v___x_689_ = l_Lean_Expr_int_x3f(v_n_658_);
return v___x_689_;
}
}
else
{
lean_object* v___x_690_; 
lean_dec(v_pre_661_);
lean_dec_ref_known(v_fst_660_, 2);
lean_dec_ref(v___x_659_);
v___x_690_ = l_Lean_Expr_int_x3f(v_n_658_);
return v___x_690_;
}
}
else
{
lean_object* v___x_691_; 
lean_dec(v_fst_660_);
lean_dec_ref(v___x_659_);
v___x_691_ = l_Lean_Expr_int_x3f(v_n_658_);
return v___x_691_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f(lean_object* v_e_707_){
_start:
{
lean_object* v___x_708_; lean_object* v_fst_709_; 
lean_inc_ref(v_e_707_);
v___x_708_ = l_Lean_Expr_getAppFnArgs(v_e_707_);
v_fst_709_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_fst_709_);
if (lean_obj_tag(v_fst_709_) == 1)
{
lean_object* v_pre_710_; 
v_pre_710_ = lean_ctor_get(v_fst_709_, 0);
lean_inc(v_pre_710_);
if (lean_obj_tag(v_pre_710_) == 1)
{
lean_object* v_pre_711_; 
v_pre_711_ = lean_ctor_get(v_pre_710_, 0);
if (lean_obj_tag(v_pre_711_) == 0)
{
lean_object* v_snd_712_; lean_object* v_str_713_; lean_object* v_str_714_; lean_object* v___x_715_; uint8_t v___x_716_; 
v_snd_712_ = lean_ctor_get(v___x_708_, 1);
lean_inc(v_snd_712_);
lean_dec_ref(v___x_708_);
v_str_713_ = lean_ctor_get(v_fst_709_, 1);
lean_inc_ref(v_str_713_);
lean_dec_ref_known(v_fst_709_, 2);
v_str_714_ = lean_ctor_get(v_pre_710_, 1);
lean_inc_ref(v_str_714_);
lean_dec_ref_known(v_pre_710_, 2);
v___x_715_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0));
v___x_716_ = lean_string_dec_eq(v_str_714_, v___x_715_);
if (v___x_716_ == 0)
{
lean_object* v___x_717_; uint8_t v___x_718_; 
v___x_717_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__0));
v___x_718_ = lean_string_dec_eq(v_str_714_, v___x_717_);
if (v___x_718_ == 0)
{
lean_object* v___x_719_; uint8_t v___x_720_; 
v___x_719_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__1));
v___x_720_ = lean_string_dec_eq(v_str_714_, v___x_719_);
if (v___x_720_ == 0)
{
lean_object* v___x_721_; uint8_t v___x_722_; 
v___x_721_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__2));
v___x_722_ = lean_string_dec_eq(v_str_714_, v___x_721_);
if (v___x_722_ == 0)
{
lean_object* v___x_723_; uint8_t v___x_724_; 
v___x_723_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__3));
v___x_724_ = lean_string_dec_eq(v_str_714_, v___x_723_);
if (v___x_724_ == 0)
{
lean_object* v___x_725_; uint8_t v___x_726_; 
v___x_725_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__4));
v___x_726_ = lean_string_dec_eq(v_str_714_, v___x_725_);
lean_dec_ref(v_str_714_);
if (v___x_726_ == 0)
{
lean_object* v___x_727_; 
lean_dec_ref(v_str_713_);
lean_dec(v_snd_712_);
v___x_727_ = l_Lean_Expr_nat_x3f(v_e_707_);
return v___x_727_;
}
else
{
lean_object* v___x_728_; uint8_t v___x_729_; 
v___x_728_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5));
v___x_729_ = lean_string_dec_eq(v_str_713_, v___x_728_);
lean_dec_ref(v_str_713_);
if (v___x_729_ == 0)
{
lean_object* v___x_730_; 
lean_dec(v_snd_712_);
v___x_730_ = l_Lean_Expr_nat_x3f(v_e_707_);
return v___x_730_;
}
else
{
lean_object* v___x_731_; lean_object* v___x_732_; uint8_t v___x_733_; 
v___x_731_ = lean_array_get_size(v_snd_712_);
v___x_732_ = lean_unsigned_to_nat(6u);
v___x_733_ = lean_nat_dec_eq(v___x_731_, v___x_732_);
if (v___x_733_ == 0)
{
lean_object* v___x_734_; 
lean_dec(v_snd_712_);
v___x_734_ = l_Lean_Expr_nat_x3f(v_e_707_);
return v___x_734_;
}
else
{
lean_object* v___f_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
lean_dec_ref(v_e_707_);
v___f_735_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__6));
v___x_736_ = lean_unsigned_to_nat(4u);
v___x_737_ = lean_array_fget(v_snd_712_, v___x_736_);
v___x_738_ = lean_unsigned_to_nat(5u);
v___x_739_ = lean_array_fget(v_snd_712_, v___x_738_);
lean_dec(v_snd_712_);
v___x_740_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(v___f_735_, v___x_737_, v___x_739_);
return v___x_740_;
}
}
}
}
else
{
lean_object* v___x_741_; uint8_t v___x_742_; 
lean_dec_ref(v_str_714_);
v___x_741_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__7));
v___x_742_ = lean_string_dec_eq(v_str_713_, v___x_741_);
lean_dec_ref(v_str_713_);
if (v___x_742_ == 0)
{
lean_object* v___x_743_; 
lean_dec(v_snd_712_);
v___x_743_ = l_Lean_Expr_nat_x3f(v_e_707_);
return v___x_743_;
}
else
{
lean_object* v___x_744_; lean_object* v___x_745_; uint8_t v___x_746_; 
v___x_744_ = lean_array_get_size(v_snd_712_);
v___x_745_ = lean_unsigned_to_nat(6u);
v___x_746_ = lean_nat_dec_eq(v___x_744_, v___x_745_);
if (v___x_746_ == 0)
{
lean_object* v___x_747_; 
lean_dec(v_snd_712_);
v___x_747_ = l_Lean_Expr_nat_x3f(v_e_707_);
return v___x_747_;
}
else
{
lean_object* v___f_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
lean_dec_ref(v_e_707_);
v___f_748_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__8));
v___x_749_ = lean_unsigned_to_nat(4u);
v___x_750_ = lean_array_fget(v_snd_712_, v___x_749_);
v___x_751_ = lean_unsigned_to_nat(5u);
v___x_752_ = lean_array_fget(v_snd_712_, v___x_751_);
lean_dec(v_snd_712_);
v___x_753_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(v___f_748_, v___x_750_, v___x_752_);
return v___x_753_;
}
}
}
}
else
{
lean_object* v___x_754_; uint8_t v___x_755_; 
lean_dec_ref(v_str_714_);
v___x_754_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__9));
v___x_755_ = lean_string_dec_eq(v_str_713_, v___x_754_);
lean_dec_ref(v_str_713_);
if (v___x_755_ == 0)
{
lean_object* v___x_756_; 
lean_dec(v_snd_712_);
v___x_756_ = l_Lean_Expr_nat_x3f(v_e_707_);
return v___x_756_;
}
else
{
lean_object* v___x_757_; lean_object* v___x_758_; uint8_t v___x_759_; 
v___x_757_ = lean_array_get_size(v_snd_712_);
v___x_758_ = lean_unsigned_to_nat(6u);
v___x_759_ = lean_nat_dec_eq(v___x_757_, v___x_758_);
if (v___x_759_ == 0)
{
lean_object* v___x_760_; 
lean_dec(v_snd_712_);
v___x_760_ = l_Lean_Expr_nat_x3f(v_e_707_);
return v___x_760_;
}
else
{
lean_object* v___f_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
lean_dec_ref(v_e_707_);
v___f_761_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__10));
v___x_762_ = lean_unsigned_to_nat(4u);
v___x_763_ = lean_array_fget(v_snd_712_, v___x_762_);
v___x_764_ = lean_unsigned_to_nat(5u);
v___x_765_ = lean_array_fget(v_snd_712_, v___x_764_);
lean_dec(v_snd_712_);
v___x_766_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(v___f_761_, v___x_763_, v___x_765_);
return v___x_766_;
}
}
}
}
else
{
lean_object* v___x_767_; uint8_t v___x_768_; 
lean_dec_ref(v_str_714_);
v___x_767_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__11));
v___x_768_ = lean_string_dec_eq(v_str_713_, v___x_767_);
lean_dec_ref(v_str_713_);
if (v___x_768_ == 0)
{
lean_object* v___x_769_; 
lean_dec(v_snd_712_);
v___x_769_ = l_Lean_Expr_nat_x3f(v_e_707_);
return v___x_769_;
}
else
{
lean_object* v___x_770_; lean_object* v___x_771_; uint8_t v___x_772_; 
v___x_770_ = lean_array_get_size(v_snd_712_);
v___x_771_ = lean_unsigned_to_nat(6u);
v___x_772_ = lean_nat_dec_eq(v___x_770_, v___x_771_);
if (v___x_772_ == 0)
{
lean_object* v___x_773_; 
lean_dec(v_snd_712_);
v___x_773_ = l_Lean_Expr_nat_x3f(v_e_707_);
return v___x_773_;
}
else
{
lean_object* v___f_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
lean_dec_ref(v_e_707_);
v___f_774_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__12));
v___x_775_ = lean_unsigned_to_nat(4u);
v___x_776_ = lean_array_fget(v_snd_712_, v___x_775_);
v___x_777_ = lean_unsigned_to_nat(5u);
v___x_778_ = lean_array_fget(v_snd_712_, v___x_777_);
lean_dec(v_snd_712_);
v___x_779_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(v___f_774_, v___x_776_, v___x_778_);
return v___x_779_;
}
}
}
}
else
{
lean_object* v___x_780_; uint8_t v___x_781_; 
lean_dec_ref(v_str_714_);
v___x_780_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__13));
v___x_781_ = lean_string_dec_eq(v_str_713_, v___x_780_);
lean_dec_ref(v_str_713_);
if (v___x_781_ == 0)
{
lean_object* v___x_782_; 
lean_dec(v_snd_712_);
v___x_782_ = l_Lean_Expr_nat_x3f(v_e_707_);
return v___x_782_;
}
else
{
lean_object* v___x_783_; lean_object* v___x_784_; uint8_t v___x_785_; 
v___x_783_ = lean_array_get_size(v_snd_712_);
v___x_784_ = lean_unsigned_to_nat(6u);
v___x_785_ = lean_nat_dec_eq(v___x_783_, v___x_784_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; 
lean_dec(v_snd_712_);
v___x_786_ = l_Lean_Expr_nat_x3f(v_e_707_);
return v___x_786_;
}
else
{
lean_object* v___f_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
lean_dec_ref(v_e_707_);
v___f_787_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__14));
v___x_788_ = lean_unsigned_to_nat(4u);
v___x_789_ = lean_array_fget(v_snd_712_, v___x_788_);
v___x_790_ = lean_unsigned_to_nat(5u);
v___x_791_ = lean_array_fget(v_snd_712_, v___x_790_);
lean_dec(v_snd_712_);
v___x_792_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(v___f_787_, v___x_789_, v___x_791_);
return v___x_792_;
}
}
}
}
else
{
lean_object* v___x_793_; uint8_t v___x_794_; 
lean_dec_ref(v_str_714_);
v___x_793_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_794_ = lean_string_dec_eq(v_str_713_, v___x_793_);
lean_dec_ref(v_str_713_);
if (v___x_794_ == 0)
{
lean_object* v___x_795_; 
lean_dec(v_snd_712_);
v___x_795_ = l_Lean_Expr_nat_x3f(v_e_707_);
return v___x_795_;
}
else
{
lean_object* v___x_796_; lean_object* v___x_797_; uint8_t v___x_798_; 
v___x_796_ = lean_array_get_size(v_snd_712_);
v___x_797_ = lean_unsigned_to_nat(3u);
v___x_798_ = lean_nat_dec_eq(v___x_796_, v___x_797_);
if (v___x_798_ == 0)
{
lean_object* v___x_799_; 
lean_dec(v_snd_712_);
v___x_799_ = l_Lean_Expr_nat_x3f(v_e_707_);
return v___x_799_;
}
else
{
lean_object* v___x_800_; lean_object* v___x_801_; 
lean_dec_ref(v_e_707_);
v___x_800_ = lean_unsigned_to_nat(2u);
v___x_801_ = lean_array_fget(v_snd_712_, v___x_800_);
lean_dec(v_snd_712_);
v_e_707_ = v___x_801_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_803_; 
lean_dec_ref_known(v_pre_710_, 2);
lean_dec_ref_known(v_fst_709_, 2);
lean_dec_ref(v___x_708_);
v___x_803_ = l_Lean_Expr_nat_x3f(v_e_707_);
return v___x_803_;
}
}
else
{
lean_object* v___x_804_; 
lean_dec(v_pre_710_);
lean_dec_ref_known(v_fst_709_, 2);
lean_dec_ref(v___x_708_);
v___x_804_ = l_Lean_Expr_nat_x3f(v_e_707_);
return v___x_804_;
}
}
else
{
lean_object* v___x_805_; 
lean_dec(v_fst_709_);
lean_dec_ref(v___x_708_);
v___x_805_ = l_Lean_Expr_nat_x3f(v_e_707_);
return v___x_805_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(lean_object* v_f_806_, lean_object* v_x_807_, lean_object* v_y_808_){
_start:
{
lean_object* v___x_809_; 
v___x_809_ = l_Lean_Elab_Tactic_Omega_groundNat_x3f(v_x_807_);
if (lean_obj_tag(v___x_809_) == 1)
{
lean_object* v_val_810_; lean_object* v___x_811_; 
v_val_810_ = lean_ctor_get(v___x_809_, 0);
lean_inc(v_val_810_);
lean_dec_ref_known(v___x_809_, 1);
v___x_811_ = l_Lean_Elab_Tactic_Omega_groundNat_x3f(v_y_808_);
if (lean_obj_tag(v___x_811_) == 1)
{
lean_object* v_val_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_820_; 
v_val_812_ = lean_ctor_get(v___x_811_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_820_ == 0)
{
v___x_814_ = v___x_811_;
v_isShared_815_ = v_isSharedCheck_820_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_val_812_);
lean_dec(v___x_811_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_820_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_816_; lean_object* v___x_818_; 
v___x_816_ = lean_apply_2(v_f_806_, v_val_810_, v_val_812_);
if (v_isShared_815_ == 0)
{
lean_ctor_set(v___x_814_, 0, v___x_816_);
v___x_818_ = v___x_814_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v___x_816_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
else
{
lean_object* v___x_821_; 
lean_dec(v___x_811_);
lean_dec(v_val_810_);
lean_dec_ref(v_f_806_);
v___x_821_ = lean_box(0);
return v___x_821_;
}
}
else
{
lean_object* v___x_822_; 
lean_dec(v___x_809_);
lean_dec_ref(v_y_808_);
lean_dec_ref(v_f_806_);
v___x_822_ = lean_box(0);
return v___x_822_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_groundInt_x3f(lean_object* v_e_827_){
_start:
{
lean_object* v___x_828_; lean_object* v_fst_829_; 
lean_inc_ref(v_e_827_);
v___x_828_ = l_Lean_Expr_getAppFnArgs(v_e_827_);
v_fst_829_ = lean_ctor_get(v___x_828_, 0);
lean_inc(v_fst_829_);
if (lean_obj_tag(v_fst_829_) == 1)
{
lean_object* v_pre_830_; 
v_pre_830_ = lean_ctor_get(v_fst_829_, 0);
lean_inc(v_pre_830_);
if (lean_obj_tag(v_pre_830_) == 1)
{
lean_object* v_pre_831_; 
v_pre_831_ = lean_ctor_get(v_pre_830_, 0);
if (lean_obj_tag(v_pre_831_) == 0)
{
lean_object* v_snd_832_; lean_object* v_str_833_; lean_object* v_str_834_; lean_object* v___x_835_; uint8_t v___x_836_; 
v_snd_832_ = lean_ctor_get(v___x_828_, 1);
lean_inc(v_snd_832_);
lean_dec_ref(v___x_828_);
v_str_833_ = lean_ctor_get(v_fst_829_, 1);
lean_inc_ref(v_str_833_);
lean_dec_ref_known(v_fst_829_, 2);
v_str_834_ = lean_ctor_get(v_pre_830_, 1);
lean_inc_ref(v_str_834_);
lean_dec_ref_known(v_pre_830_, 2);
v___x_835_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0));
v___x_836_ = lean_string_dec_eq(v_str_834_, v___x_835_);
if (v___x_836_ == 0)
{
lean_object* v___x_837_; uint8_t v___x_838_; 
v___x_837_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__0));
v___x_838_ = lean_string_dec_eq(v_str_834_, v___x_837_);
if (v___x_838_ == 0)
{
lean_object* v___x_839_; uint8_t v___x_840_; 
v___x_839_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__1));
v___x_840_ = lean_string_dec_eq(v_str_834_, v___x_839_);
if (v___x_840_ == 0)
{
lean_object* v___x_841_; uint8_t v___x_842_; 
v___x_841_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__2));
v___x_842_ = lean_string_dec_eq(v_str_834_, v___x_841_);
if (v___x_842_ == 0)
{
lean_object* v___x_843_; uint8_t v___x_844_; 
v___x_843_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__3));
v___x_844_ = lean_string_dec_eq(v_str_834_, v___x_843_);
if (v___x_844_ == 0)
{
lean_object* v___x_845_; uint8_t v___x_846_; 
v___x_845_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__4));
v___x_846_ = lean_string_dec_eq(v_str_834_, v___x_845_);
lean_dec_ref(v_str_834_);
if (v___x_846_ == 0)
{
lean_object* v___x_847_; 
lean_dec_ref(v_str_833_);
lean_dec(v_snd_832_);
v___x_847_ = l_Lean_Expr_int_x3f(v_e_827_);
return v___x_847_;
}
else
{
lean_object* v___x_848_; uint8_t v___x_849_; 
v___x_848_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5));
v___x_849_ = lean_string_dec_eq(v_str_833_, v___x_848_);
lean_dec_ref(v_str_833_);
if (v___x_849_ == 0)
{
lean_object* v___x_850_; 
lean_dec(v_snd_832_);
v___x_850_ = l_Lean_Expr_int_x3f(v_e_827_);
return v___x_850_;
}
else
{
lean_object* v___x_851_; lean_object* v___x_852_; uint8_t v___x_853_; 
v___x_851_ = lean_array_get_size(v_snd_832_);
v___x_852_ = lean_unsigned_to_nat(6u);
v___x_853_ = lean_nat_dec_eq(v___x_851_, v___x_852_);
if (v___x_853_ == 0)
{
lean_object* v___x_854_; 
lean_dec(v_snd_832_);
v___x_854_ = l_Lean_Expr_int_x3f(v_e_827_);
return v___x_854_;
}
else
{
lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
lean_dec_ref(v_e_827_);
v___x_855_ = lean_unsigned_to_nat(4u);
v___x_856_ = lean_array_fget_borrowed(v_snd_832_, v___x_855_);
lean_inc(v___x_856_);
v___x_857_ = l_Lean_Elab_Tactic_Omega_groundInt_x3f(v___x_856_);
if (lean_obj_tag(v___x_857_) == 1)
{
lean_object* v_val_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; 
v_val_858_ = lean_ctor_get(v___x_857_, 0);
lean_inc(v_val_858_);
lean_dec_ref_known(v___x_857_, 1);
v___x_859_ = lean_unsigned_to_nat(5u);
v___x_860_ = lean_array_fget(v_snd_832_, v___x_859_);
lean_dec(v_snd_832_);
v___x_861_ = l_Lean_Elab_Tactic_Omega_groundNat_x3f(v___x_860_);
if (lean_obj_tag(v___x_861_) == 1)
{
lean_object* v_val_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_870_; 
v_val_862_ = lean_ctor_get(v___x_861_, 0);
v_isSharedCheck_870_ = !lean_is_exclusive(v___x_861_);
if (v_isSharedCheck_870_ == 0)
{
v___x_864_ = v___x_861_;
v_isShared_865_ = v_isSharedCheck_870_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_val_862_);
lean_dec(v___x_861_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_870_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v___x_866_; lean_object* v___x_868_; 
v___x_866_ = l_Int_pow(v_val_858_, v_val_862_);
lean_dec(v_val_862_);
lean_dec(v_val_858_);
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 0, v___x_866_);
v___x_868_ = v___x_864_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v___x_866_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
return v___x_868_;
}
}
}
else
{
lean_object* v___x_871_; 
lean_dec(v___x_861_);
lean_dec(v_val_858_);
v___x_871_ = lean_box(0);
return v___x_871_;
}
}
else
{
lean_object* v___x_872_; 
lean_dec(v___x_857_);
lean_dec(v_snd_832_);
v___x_872_ = lean_box(0);
return v___x_872_;
}
}
}
}
}
else
{
lean_object* v___x_873_; uint8_t v___x_874_; 
lean_dec_ref(v_str_834_);
v___x_873_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__7));
v___x_874_ = lean_string_dec_eq(v_str_833_, v___x_873_);
lean_dec_ref(v_str_833_);
if (v___x_874_ == 0)
{
lean_object* v___x_875_; 
lean_dec(v_snd_832_);
v___x_875_ = l_Lean_Expr_int_x3f(v_e_827_);
return v___x_875_;
}
else
{
lean_object* v___x_876_; lean_object* v___x_877_; uint8_t v___x_878_; 
v___x_876_ = lean_array_get_size(v_snd_832_);
v___x_877_ = lean_unsigned_to_nat(6u);
v___x_878_ = lean_nat_dec_eq(v___x_876_, v___x_877_);
if (v___x_878_ == 0)
{
lean_object* v___x_879_; 
lean_dec(v_snd_832_);
v___x_879_ = l_Lean_Expr_int_x3f(v_e_827_);
return v___x_879_;
}
else
{
lean_object* v___f_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
lean_dec_ref(v_e_827_);
v___f_880_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__0));
v___x_881_ = lean_unsigned_to_nat(4u);
v___x_882_ = lean_array_fget(v_snd_832_, v___x_881_);
v___x_883_ = lean_unsigned_to_nat(5u);
v___x_884_ = lean_array_fget(v_snd_832_, v___x_883_);
lean_dec(v_snd_832_);
v___x_885_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(v___f_880_, v___x_882_, v___x_884_);
return v___x_885_;
}
}
}
}
else
{
lean_object* v___x_886_; uint8_t v___x_887_; 
lean_dec_ref(v_str_834_);
v___x_886_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__9));
v___x_887_ = lean_string_dec_eq(v_str_833_, v___x_886_);
lean_dec_ref(v_str_833_);
if (v___x_887_ == 0)
{
lean_object* v___x_888_; 
lean_dec(v_snd_832_);
v___x_888_ = l_Lean_Expr_int_x3f(v_e_827_);
return v___x_888_;
}
else
{
lean_object* v___x_889_; lean_object* v___x_890_; uint8_t v___x_891_; 
v___x_889_ = lean_array_get_size(v_snd_832_);
v___x_890_ = lean_unsigned_to_nat(6u);
v___x_891_ = lean_nat_dec_eq(v___x_889_, v___x_890_);
if (v___x_891_ == 0)
{
lean_object* v___x_892_; 
lean_dec(v_snd_832_);
v___x_892_ = l_Lean_Expr_int_x3f(v_e_827_);
return v___x_892_;
}
else
{
lean_object* v___f_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
lean_dec_ref(v_e_827_);
v___f_893_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__1));
v___x_894_ = lean_unsigned_to_nat(4u);
v___x_895_ = lean_array_fget(v_snd_832_, v___x_894_);
v___x_896_ = lean_unsigned_to_nat(5u);
v___x_897_ = lean_array_fget(v_snd_832_, v___x_896_);
lean_dec(v_snd_832_);
v___x_898_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(v___f_893_, v___x_895_, v___x_897_);
return v___x_898_;
}
}
}
}
else
{
lean_object* v___x_899_; uint8_t v___x_900_; 
lean_dec_ref(v_str_834_);
v___x_899_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__11));
v___x_900_ = lean_string_dec_eq(v_str_833_, v___x_899_);
lean_dec_ref(v_str_833_);
if (v___x_900_ == 0)
{
lean_object* v___x_901_; 
lean_dec(v_snd_832_);
v___x_901_ = l_Lean_Expr_int_x3f(v_e_827_);
return v___x_901_;
}
else
{
lean_object* v___x_902_; lean_object* v___x_903_; uint8_t v___x_904_; 
v___x_902_ = lean_array_get_size(v_snd_832_);
v___x_903_ = lean_unsigned_to_nat(6u);
v___x_904_ = lean_nat_dec_eq(v___x_902_, v___x_903_);
if (v___x_904_ == 0)
{
lean_object* v___x_905_; 
lean_dec(v_snd_832_);
v___x_905_ = l_Lean_Expr_int_x3f(v_e_827_);
return v___x_905_;
}
else
{
lean_object* v___f_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
lean_dec_ref(v_e_827_);
v___f_906_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__2));
v___x_907_ = lean_unsigned_to_nat(4u);
v___x_908_ = lean_array_fget(v_snd_832_, v___x_907_);
v___x_909_ = lean_unsigned_to_nat(5u);
v___x_910_ = lean_array_fget(v_snd_832_, v___x_909_);
lean_dec(v_snd_832_);
v___x_911_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(v___f_906_, v___x_908_, v___x_910_);
return v___x_911_;
}
}
}
}
else
{
lean_object* v___x_912_; uint8_t v___x_913_; 
lean_dec_ref(v_str_834_);
v___x_912_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__13));
v___x_913_ = lean_string_dec_eq(v_str_833_, v___x_912_);
lean_dec_ref(v_str_833_);
if (v___x_913_ == 0)
{
lean_object* v___x_914_; 
lean_dec(v_snd_832_);
v___x_914_ = l_Lean_Expr_int_x3f(v_e_827_);
return v___x_914_;
}
else
{
lean_object* v___x_915_; lean_object* v___x_916_; uint8_t v___x_917_; 
v___x_915_ = lean_array_get_size(v_snd_832_);
v___x_916_ = lean_unsigned_to_nat(6u);
v___x_917_ = lean_nat_dec_eq(v___x_915_, v___x_916_);
if (v___x_917_ == 0)
{
lean_object* v___x_918_; 
lean_dec(v_snd_832_);
v___x_918_ = l_Lean_Expr_int_x3f(v_e_827_);
return v___x_918_;
}
else
{
lean_object* v___f_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
lean_dec_ref(v_e_827_);
v___f_919_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__3));
v___x_920_ = lean_unsigned_to_nat(4u);
v___x_921_ = lean_array_fget(v_snd_832_, v___x_920_);
v___x_922_ = lean_unsigned_to_nat(5u);
v___x_923_ = lean_array_fget(v_snd_832_, v___x_922_);
lean_dec(v_snd_832_);
v___x_924_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(v___f_919_, v___x_921_, v___x_923_);
return v___x_924_;
}
}
}
}
else
{
lean_object* v___x_925_; uint8_t v___x_926_; 
lean_dec_ref(v_str_834_);
v___x_925_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_926_ = lean_string_dec_eq(v_str_833_, v___x_925_);
lean_dec_ref(v_str_833_);
if (v___x_926_ == 0)
{
lean_object* v___x_927_; 
lean_dec(v_snd_832_);
v___x_927_ = l_Lean_Expr_int_x3f(v_e_827_);
return v___x_927_;
}
else
{
lean_object* v___x_928_; lean_object* v___x_929_; uint8_t v___x_930_; 
v___x_928_ = lean_array_get_size(v_snd_832_);
v___x_929_ = lean_unsigned_to_nat(3u);
v___x_930_ = lean_nat_dec_eq(v___x_928_, v___x_929_);
if (v___x_930_ == 0)
{
lean_object* v___x_931_; 
lean_dec(v_snd_832_);
v___x_931_ = l_Lean_Expr_int_x3f(v_e_827_);
return v___x_931_;
}
else
{
lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; 
lean_dec_ref(v_e_827_);
v___x_932_ = lean_unsigned_to_nat(2u);
v___x_933_ = lean_array_fget(v_snd_832_, v___x_932_);
lean_dec(v_snd_832_);
v___x_934_ = l_Lean_Elab_Tactic_Omega_groundNat_x3f(v___x_933_);
if (lean_obj_tag(v___x_934_) == 0)
{
lean_object* v___x_935_; 
v___x_935_ = lean_box(0);
return v___x_935_;
}
else
{
lean_object* v_val_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_944_; 
v_val_936_ = lean_ctor_get(v___x_934_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_934_);
if (v_isSharedCheck_944_ == 0)
{
v___x_938_ = v___x_934_;
v_isShared_939_ = v_isSharedCheck_944_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_val_936_);
lean_dec(v___x_934_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_944_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_940_; lean_object* v___x_942_; 
v___x_940_ = lean_nat_to_int(v_val_936_);
if (v_isShared_939_ == 0)
{
lean_ctor_set(v___x_938_, 0, v___x_940_);
v___x_942_ = v___x_938_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v___x_940_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_945_; 
lean_dec_ref_known(v_pre_830_, 2);
lean_dec_ref_known(v_fst_829_, 2);
lean_dec_ref(v___x_828_);
v___x_945_ = l_Lean_Expr_int_x3f(v_e_827_);
return v___x_945_;
}
}
else
{
lean_object* v___x_946_; 
lean_dec_ref_known(v_fst_829_, 2);
lean_dec(v_pre_830_);
lean_dec_ref(v___x_828_);
v___x_946_ = l_Lean_Expr_int_x3f(v_e_827_);
return v___x_946_;
}
}
else
{
lean_object* v___x_947_; 
lean_dec(v_fst_829_);
lean_dec_ref(v___x_828_);
v___x_947_ = l_Lean_Expr_int_x3f(v_e_827_);
return v___x_947_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(lean_object* v_f_948_, lean_object* v_x_949_, lean_object* v_y_950_){
_start:
{
lean_object* v___x_951_; 
v___x_951_ = l_Lean_Elab_Tactic_Omega_groundInt_x3f(v_x_949_);
if (lean_obj_tag(v___x_951_) == 1)
{
lean_object* v_val_952_; lean_object* v___x_953_; 
v_val_952_ = lean_ctor_get(v___x_951_, 0);
lean_inc(v_val_952_);
lean_dec_ref_known(v___x_951_, 1);
v___x_953_ = l_Lean_Elab_Tactic_Omega_groundInt_x3f(v_y_950_);
if (lean_obj_tag(v___x_953_) == 1)
{
lean_object* v_val_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_962_; 
v_val_954_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_962_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_962_ == 0)
{
v___x_956_ = v___x_953_;
v_isShared_957_ = v_isSharedCheck_962_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_val_954_);
lean_dec(v___x_953_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_962_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_958_; lean_object* v___x_960_; 
v___x_958_ = lean_apply_2(v_f_948_, v_val_952_, v_val_954_);
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 0, v___x_958_);
v___x_960_ = v___x_956_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v___x_958_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
}
else
{
lean_object* v___x_963_; 
lean_dec(v___x_953_);
lean_dec(v_val_952_);
lean_dec_ref(v_f_948_);
v___x_963_ = lean_box(0);
return v___x_963_;
}
}
else
{
lean_object* v___x_964_; 
lean_dec(v___x_951_);
lean_dec_ref(v_y_950_);
lean_dec_ref(v_f_948_);
v___x_964_ = lean_box(0);
return v___x_964_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType(lean_object* v_a_965_, lean_object* v_b_966_, lean_object* v_a_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_){
_start:
{
lean_object* v___x_972_; 
lean_inc_ref(v_a_965_);
v___x_972_ = l_Lean_Meta_mkEqRefl(v_a_965_, v_a_967_, v_a_968_, v_a_969_, v_a_970_);
if (lean_obj_tag(v___x_972_) == 0)
{
lean_object* v_a_973_; lean_object* v___x_974_; 
v_a_973_ = lean_ctor_get(v___x_972_, 0);
lean_inc(v_a_973_);
lean_dec_ref_known(v___x_972_, 1);
v___x_974_ = l_Lean_Meta_mkEq(v_a_965_, v_b_966_, v_a_967_, v_a_968_, v_a_969_, v_a_970_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_983_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_983_ == 0)
{
v___x_977_ = v___x_974_;
v_isShared_978_ = v_isSharedCheck_983_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_a_975_);
lean_dec(v___x_974_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_983_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_979_; lean_object* v___x_981_; 
v___x_979_ = l_Lean_Meta_mkExpectedPropHint(v_a_973_, v_a_975_);
if (v_isShared_978_ == 0)
{
lean_ctor_set(v___x_977_, 0, v___x_979_);
v___x_981_ = v___x_977_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v___x_979_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
}
else
{
lean_dec(v_a_973_);
return v___x_974_;
}
}
else
{
lean_dec_ref(v_b_966_);
lean_dec_ref(v_a_965_);
return v___x_972_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType___boxed(lean_object* v_a_984_, lean_object* v_b_985_, lean_object* v_a_986_, lean_object* v_a_987_, lean_object* v_a_988_, lean_object* v_a_989_, lean_object* v_a_990_){
_start:
{
lean_object* v_res_991_; 
v_res_991_ = l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType(v_a_984_, v_b_985_, v_a_986_, v_a_987_, v_a_988_, v_a_989_);
lean_dec(v_a_989_);
lean_dec_ref(v_a_988_);
lean_dec(v_a_987_);
lean_dec_ref(v_a_986_);
return v_res_991_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(lean_object* v_a_992_, lean_object* v_x_993_){
_start:
{
if (lean_obj_tag(v_x_993_) == 0)
{
uint8_t v___x_994_; 
v___x_994_ = 0;
return v___x_994_;
}
else
{
lean_object* v_head_995_; lean_object* v_tail_996_; uint8_t v___x_997_; 
v_head_995_ = lean_ctor_get(v_x_993_, 0);
v_tail_996_ = lean_ctor_get(v_x_993_, 1);
v___x_997_ = lean_expr_eqv(v_a_992_, v_head_995_);
if (v___x_997_ == 0)
{
v_x_993_ = v_tail_996_;
goto _start;
}
else
{
return v___x_997_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0___boxed(lean_object* v_a_999_, lean_object* v_x_1000_){
_start:
{
uint8_t v_res_1001_; lean_object* v_r_1002_; 
v_res_1001_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v_a_999_, v_x_1000_);
lean_dec(v_x_1000_);
lean_dec_ref(v_a_999_);
v_r_1002_ = lean_box(v_res_1001_);
return v_r_1002_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6(void){
_start:
{
lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; 
v___x_1011_ = lean_box(0);
v___x_1012_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__5));
v___x_1013_ = l_Lean_Expr_const___override(v___x_1012_, v___x_1011_);
return v___x_1013_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9(void){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1018_ = lean_box(0);
v___x_1019_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__8));
v___x_1020_ = l_Lean_Expr_const___override(v___x_1019_, v___x_1018_);
return v___x_1020_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13(void){
_start:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1026_ = lean_box(0);
v___x_1027_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__12));
v___x_1028_ = l_Lean_Expr_const___override(v___x_1027_, v___x_1026_);
return v___x_1028_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16(void){
_start:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
v___x_1033_ = lean_box(0);
v___x_1034_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__15));
v___x_1035_ = l_Lean_Expr_const___override(v___x_1034_, v___x_1033_);
return v___x_1035_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23(void){
_start:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1048_ = lean_unsigned_to_nat(0u);
v___x_1049_ = l_Lean_Level_ofNat(v___x_1048_);
return v___x_1049_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27(void){
_start:
{
lean_object* v___x_1055_; lean_object* v___x_1056_; 
v___x_1055_ = lean_unsigned_to_nat(0u);
v___x_1056_ = l_Lean_mkNatLit(v___x_1055_);
return v___x_1056_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38(void){
_start:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; 
v___x_1079_ = lean_unsigned_to_nat(0u);
v___x_1080_ = lean_nat_to_int(v___x_1079_);
return v___x_1080_;
}
}
static uint8_t _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39(void){
_start:
{
lean_object* v___x_1081_; uint8_t v___x_1082_; 
v___x_1081_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38);
v___x_1082_ = lean_int_dec_le(v___x_1081_, v___x_1081_);
return v___x_1082_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45(void){
_start:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1092_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38);
v___x_1093_ = lean_int_neg(v___x_1092_);
return v___x_1093_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46(void){
_start:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1094_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45);
v___x_1095_ = l_Int_toNat(v___x_1094_);
return v___x_1095_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47(void){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1096_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46);
v___x_1097_ = l_Lean_instToExprInt_mkNat(v___x_1096_);
return v___x_1097_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48(void){
_start:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1098_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38);
v___x_1099_ = l_Int_toNat(v___x_1098_);
return v___x_1099_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49(void){
_start:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1100_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48);
v___x_1101_ = l_Lean_instToExprInt_mkNat(v___x_1100_);
return v___x_1101_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50(void){
_start:
{
lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1102_ = lean_box(0);
v___x_1103_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23);
v___x_1104_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1103_);
lean_ctor_set(v___x_1104_, 1, v___x_1102_);
return v___x_1104_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51(void){
_start:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1105_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50);
v___x_1106_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22));
v___x_1107_ = l_Lean_Expr_const___override(v___x_1106_, v___x_1105_);
return v___x_1107_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54(void){
_start:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1112_ = lean_box(0);
v___x_1113_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53));
v___x_1114_ = l_Lean_Expr_const___override(v___x_1113_, v___x_1112_);
return v___x_1114_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57(void){
_start:
{
lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; 
v___x_1121_ = lean_box(0);
v___x_1122_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56));
v___x_1123_ = l_Lean_Expr_const___override(v___x_1122_, v___x_1121_);
return v___x_1123_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58(void){
_start:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1124_ = lean_box(0);
v___x_1125_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33));
v___x_1126_ = l_Lean_Expr_const___override(v___x_1125_, v___x_1124_);
return v___x_1126_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59(void){
_start:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1127_ = lean_box(0);
v___x_1128_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35));
v___x_1129_ = l_Lean_Expr_const___override(v___x_1128_, v___x_1127_);
return v___x_1129_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60(void){
_start:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1130_ = lean_box(0);
v___x_1131_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37));
v___x_1132_ = l_Lean_Expr_const___override(v___x_1131_, v___x_1130_);
return v___x_1132_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61(void){
_start:
{
lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___x_1133_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50);
v___x_1134_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42));
v___x_1135_ = l_Lean_Expr_const___override(v___x_1134_, v___x_1133_);
return v___x_1135_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62(void){
_start:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; 
v___x_1136_ = lean_box(0);
v___x_1137_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44));
v___x_1138_ = l_Lean_Expr_const___override(v___x_1137_, v___x_1136_);
return v___x_1138_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63(void){
_start:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1139_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47);
v___x_1140_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62);
v___x_1141_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2);
v___x_1142_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61);
v___x_1143_ = l_Lean_mkApp3(v___x_1142_, v___x_1141_, v___x_1140_, v___x_1139_);
return v___x_1143_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66(void){
_start:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1147_ = lean_unsigned_to_nat(1u);
v___x_1148_ = l_Lean_Level_ofNat(v___x_1147_);
return v___x_1148_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67(void){
_start:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1149_ = lean_box(0);
v___x_1150_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66);
v___x_1151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1150_);
lean_ctor_set(v___x_1151_, 1, v___x_1149_);
return v___x_1151_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68(void){
_start:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1152_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67);
v___x_1153_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__65));
v___x_1154_ = l_Lean_Expr_const___override(v___x_1153_, v___x_1152_);
return v___x_1154_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71(void){
_start:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1159_ = lean_box(0);
v___x_1160_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70));
v___x_1161_ = l_Lean_Expr_const___override(v___x_1160_, v___x_1159_);
return v___x_1161_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74(void){
_start:
{
lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1166_ = lean_box(0);
v___x_1167_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73));
v___x_1168_ = l_Lean_Expr_const___override(v___x_1167_, v___x_1166_);
return v___x_1168_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94(void){
_start:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1207_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50);
v___x_1208_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__93));
v___x_1209_ = l_Lean_Expr_const___override(v___x_1208_, v___x_1207_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg(lean_object* v_e_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_){
_start:
{
lean_object* v___x_1235_; lean_object* v_fst_1236_; 
v___x_1235_ = l_Lean_Expr_getAppFnArgs(v_e_1210_);
v_fst_1236_ = lean_ctor_get(v___x_1235_, 0);
lean_inc(v_fst_1236_);
if (lean_obj_tag(v_fst_1236_) == 1)
{
lean_object* v_pre_1237_; 
v_pre_1237_ = lean_ctor_get(v_fst_1236_, 0);
switch(lean_obj_tag(v_pre_1237_))
{
case 1:
{
lean_object* v_pre_1238_; 
lean_inc_ref(v_pre_1237_);
v_pre_1238_ = lean_ctor_get(v_pre_1237_, 0);
if (lean_obj_tag(v_pre_1238_) == 0)
{
lean_object* v_snd_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1736_; 
v_snd_1239_ = lean_ctor_get(v___x_1235_, 1);
v_isSharedCheck_1736_ = !lean_is_exclusive(v___x_1235_);
if (v_isSharedCheck_1736_ == 0)
{
lean_object* v_unused_1737_; 
v_unused_1737_ = lean_ctor_get(v___x_1235_, 0);
lean_dec(v_unused_1737_);
v___x_1241_ = v___x_1235_;
v_isShared_1242_ = v_isSharedCheck_1736_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_snd_1239_);
lean_dec(v___x_1235_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1736_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v_str_1243_; lean_object* v_str_1244_; lean_object* v___x_1245_; uint8_t v___x_1246_; 
v_str_1243_ = lean_ctor_get(v_fst_1236_, 1);
lean_inc_ref(v_str_1243_);
lean_dec_ref_known(v_fst_1236_, 2);
v_str_1244_ = lean_ctor_get(v_pre_1237_, 1);
lean_inc_ref(v_str_1244_);
lean_dec_ref_known(v_pre_1237_, 2);
v___x_1245_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0));
v___x_1246_ = lean_string_dec_eq(v_str_1244_, v___x_1245_);
if (v___x_1246_ == 0)
{
lean_object* v___x_1247_; uint8_t v___x_1248_; 
v___x_1247_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__3));
v___x_1248_ = lean_string_dec_eq(v_str_1244_, v___x_1247_);
if (v___x_1248_ == 0)
{
lean_object* v___x_1249_; uint8_t v___x_1250_; 
v___x_1249_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__0));
v___x_1250_ = lean_string_dec_eq(v_str_1244_, v___x_1249_);
if (v___x_1250_ == 0)
{
lean_object* v___x_1251_; uint8_t v___x_1252_; 
v___x_1251_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__1));
v___x_1252_ = lean_string_dec_eq(v_str_1244_, v___x_1251_);
if (v___x_1252_ == 0)
{
lean_object* v___x_1253_; uint8_t v___x_1254_; 
v___x_1253_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__2));
v___x_1254_ = lean_string_dec_eq(v_str_1244_, v___x_1253_);
lean_dec_ref(v_str_1244_);
if (v___x_1254_ == 0)
{
lean_dec_ref(v_str_1243_);
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
goto v___jp_1223_;
}
else
{
lean_object* v___x_1255_; uint8_t v___x_1256_; 
v___x_1255_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__3));
v___x_1256_ = lean_string_dec_eq(v_str_1243_, v___x_1255_);
lean_dec_ref(v_str_1243_);
if (v___x_1256_ == 0)
{
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
goto v___jp_1223_;
}
else
{
lean_object* v___x_1257_; lean_object* v___x_1258_; uint8_t v___x_1259_; 
v___x_1257_ = lean_array_get_size(v_snd_1239_);
v___x_1258_ = lean_unsigned_to_nat(4u);
v___x_1259_ = lean_nat_dec_eq(v___x_1257_, v___x_1258_);
if (v___x_1259_ == 0)
{
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
goto v___jp_1223_;
}
else
{
lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1270_; 
v___x_1260_ = lean_unsigned_to_nat(2u);
v___x_1261_ = lean_array_fget(v_snd_1239_, v___x_1260_);
v___x_1262_ = lean_unsigned_to_nat(3u);
v___x_1263_ = lean_array_fget(v_snd_1239_, v___x_1262_);
lean_dec(v_snd_1239_);
v___x_1264_ = lean_box(0);
v___x_1265_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6);
lean_inc(v___x_1263_);
lean_inc(v___x_1261_);
v___x_1266_ = l_Lean_mkAppB(v___x_1265_, v___x_1261_, v___x_1263_);
v___x_1267_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9);
v___x_1268_ = l_Lean_mkAppB(v___x_1267_, v___x_1261_, v___x_1263_);
if (v_isShared_1242_ == 0)
{
lean_ctor_set_tag(v___x_1241_, 1);
lean_ctor_set(v___x_1241_, 1, v___x_1264_);
lean_ctor_set(v___x_1241_, 0, v___x_1268_);
v___x_1270_ = v___x_1241_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v___x_1268_);
lean_ctor_set(v_reuseFailAlloc_1273_, 1, v___x_1264_);
v___x_1270_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; 
v___x_1271_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1266_);
lean_ctor_set(v___x_1271_, 1, v___x_1270_);
v___x_1272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1271_);
return v___x_1272_;
}
}
}
}
}
else
{
lean_object* v___x_1274_; uint8_t v___x_1275_; 
lean_dec_ref(v_str_1244_);
v___x_1274_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__10));
v___x_1275_ = lean_string_dec_eq(v_str_1243_, v___x_1274_);
lean_dec_ref(v_str_1243_);
if (v___x_1275_ == 0)
{
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
goto v___jp_1223_;
}
else
{
lean_object* v___x_1276_; lean_object* v___x_1277_; uint8_t v___x_1278_; 
v___x_1276_ = lean_array_get_size(v_snd_1239_);
v___x_1277_ = lean_unsigned_to_nat(4u);
v___x_1278_ = lean_nat_dec_eq(v___x_1276_, v___x_1277_);
if (v___x_1278_ == 0)
{
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
goto v___jp_1223_;
}
else
{
lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1289_; 
v___x_1279_ = lean_unsigned_to_nat(2u);
v___x_1280_ = lean_array_fget(v_snd_1239_, v___x_1279_);
v___x_1281_ = lean_unsigned_to_nat(3u);
v___x_1282_ = lean_array_fget(v_snd_1239_, v___x_1281_);
lean_dec(v_snd_1239_);
v___x_1283_ = lean_box(0);
v___x_1284_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13);
lean_inc(v___x_1282_);
lean_inc(v___x_1280_);
v___x_1285_ = l_Lean_mkAppB(v___x_1284_, v___x_1280_, v___x_1282_);
v___x_1286_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16);
v___x_1287_ = l_Lean_mkAppB(v___x_1286_, v___x_1280_, v___x_1282_);
if (v_isShared_1242_ == 0)
{
lean_ctor_set_tag(v___x_1241_, 1);
lean_ctor_set(v___x_1241_, 1, v___x_1283_);
lean_ctor_set(v___x_1241_, 0, v___x_1287_);
v___x_1289_ = v___x_1241_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v___x_1287_);
lean_ctor_set(v_reuseFailAlloc_1292_, 1, v___x_1283_);
v___x_1289_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1290_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1285_);
lean_ctor_set(v___x_1290_, 1, v___x_1289_);
v___x_1291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1290_);
return v___x_1291_;
}
}
}
}
}
else
{
lean_object* v___x_1293_; uint8_t v___x_1294_; 
lean_dec_ref(v_str_1244_);
v___x_1293_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__17));
v___x_1294_ = lean_string_dec_eq(v_str_1243_, v___x_1293_);
lean_dec_ref(v_str_1243_);
if (v___x_1294_ == 0)
{
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
goto v___jp_1223_;
}
else
{
lean_object* v___x_1295_; lean_object* v___x_1296_; uint8_t v___x_1297_; 
v___x_1295_ = lean_array_get_size(v_snd_1239_);
v___x_1296_ = lean_unsigned_to_nat(6u);
v___x_1297_ = lean_nat_dec_eq(v___x_1295_, v___x_1296_);
if (v___x_1297_ == 0)
{
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
goto v___jp_1223_;
}
else
{
lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v_fst_1301_; 
v___x_1298_ = lean_unsigned_to_nat(5u);
v___x_1299_ = lean_array_fget(v_snd_1239_, v___x_1298_);
lean_inc(v___x_1299_);
v___x_1300_ = l_Lean_Expr_getAppFnArgs(v___x_1299_);
v_fst_1301_ = lean_ctor_get(v___x_1300_, 0);
lean_inc(v_fst_1301_);
if (lean_obj_tag(v_fst_1301_) == 1)
{
lean_object* v_pre_1302_; 
v_pre_1302_ = lean_ctor_get(v_fst_1301_, 0);
lean_inc(v_pre_1302_);
if (lean_obj_tag(v_pre_1302_) == 1)
{
lean_object* v_pre_1303_; 
v_pre_1303_ = lean_ctor_get(v_pre_1302_, 0);
if (lean_obj_tag(v_pre_1303_) == 0)
{
lean_object* v_snd_1304_; lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1503_; 
v_snd_1304_ = lean_ctor_get(v___x_1300_, 1);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1300_);
if (v_isSharedCheck_1503_ == 0)
{
lean_object* v_unused_1504_; 
v_unused_1504_ = lean_ctor_get(v___x_1300_, 0);
lean_dec(v_unused_1504_);
v___x_1306_ = v___x_1300_;
v_isShared_1307_ = v_isSharedCheck_1503_;
goto v_resetjp_1305_;
}
else
{
lean_inc(v_snd_1304_);
lean_dec(v___x_1300_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1503_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v_str_1308_; lean_object* v_str_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1349_; uint8_t v___x_1350_; 
v_str_1308_ = lean_ctor_get(v_fst_1301_, 1);
lean_inc_ref(v_str_1308_);
lean_dec_ref_known(v_fst_1301_, 2);
v_str_1309_ = lean_ctor_get(v_pre_1302_, 1);
lean_inc_ref(v_str_1309_);
lean_dec_ref_known(v_pre_1302_, 2);
v___x_1310_ = lean_unsigned_to_nat(4u);
v___x_1311_ = lean_array_fget(v_snd_1239_, v___x_1310_);
lean_dec(v_snd_1239_);
v___x_1349_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__4));
v___x_1350_ = lean_string_dec_eq(v_str_1309_, v___x_1349_);
if (v___x_1350_ == 0)
{
uint8_t v___x_1351_; 
v___x_1351_ = lean_string_dec_eq(v_str_1309_, v___x_1245_);
lean_dec_ref(v_str_1309_);
if (v___x_1351_ == 0)
{
lean_dec(v___x_1311_);
lean_dec_ref(v_str_1308_);
lean_del_object(v___x_1306_);
lean_dec(v_snd_1304_);
lean_dec(v___x_1299_);
lean_del_object(v___x_1241_);
goto v___jp_1226_;
}
else
{
lean_object* v___x_1352_; uint8_t v___x_1353_; 
v___x_1352_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_1353_ = lean_string_dec_eq(v_str_1308_, v___x_1352_);
lean_dec_ref(v_str_1308_);
if (v___x_1353_ == 0)
{
lean_dec(v___x_1311_);
lean_del_object(v___x_1306_);
lean_dec(v_snd_1304_);
lean_dec(v___x_1299_);
lean_del_object(v___x_1241_);
goto v___jp_1226_;
}
else
{
lean_object* v___x_1354_; lean_object* v___x_1355_; uint8_t v___x_1356_; 
v___x_1354_ = lean_array_get_size(v_snd_1304_);
v___x_1355_ = lean_unsigned_to_nat(3u);
v___x_1356_ = lean_nat_dec_eq(v___x_1354_, v___x_1355_);
if (v___x_1356_ == 0)
{
lean_dec(v___x_1311_);
lean_del_object(v___x_1306_);
lean_dec(v_snd_1304_);
lean_dec(v___x_1299_);
lean_del_object(v___x_1241_);
goto v___jp_1226_;
}
else
{
lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1357_ = lean_unsigned_to_nat(0u);
v___x_1358_ = lean_array_fget_borrowed(v_snd_1304_, v___x_1357_);
if (lean_obj_tag(v___x_1358_) == 4)
{
lean_object* v_declName_1359_; 
v_declName_1359_ = lean_ctor_get(v___x_1358_, 0);
if (lean_obj_tag(v_declName_1359_) == 1)
{
lean_object* v_pre_1360_; 
v_pre_1360_ = lean_ctor_get(v_declName_1359_, 0);
if (lean_obj_tag(v_pre_1360_) == 0)
{
lean_object* v_us_1361_; lean_object* v_str_1362_; lean_object* v___x_1363_; uint8_t v___x_1364_; 
v_us_1361_ = lean_ctor_get(v___x_1358_, 1);
lean_inc(v_us_1361_);
v_str_1362_ = lean_ctor_get(v_declName_1359_, 1);
v___x_1363_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0));
v___x_1364_ = lean_string_dec_eq(v_str_1362_, v___x_1363_);
if (v___x_1364_ == 0)
{
lean_dec(v_us_1361_);
lean_dec(v___x_1311_);
lean_del_object(v___x_1306_);
lean_dec(v_snd_1304_);
lean_dec(v___x_1299_);
lean_del_object(v___x_1241_);
goto v___jp_1226_;
}
else
{
if (lean_obj_tag(v_us_1361_) == 0)
{
lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v_fst_1368_; 
v___x_1365_ = lean_unsigned_to_nat(2u);
v___x_1366_ = lean_array_fget(v_snd_1304_, v___x_1365_);
lean_dec(v_snd_1304_);
lean_inc(v___x_1366_);
v___x_1367_ = l_Lean_Expr_getAppFnArgs(v___x_1366_);
v_fst_1368_ = lean_ctor_get(v___x_1367_, 0);
lean_inc(v_fst_1368_);
if (lean_obj_tag(v_fst_1368_) == 1)
{
lean_object* v_pre_1369_; 
v_pre_1369_ = lean_ctor_get(v_fst_1368_, 0);
lean_inc(v_pre_1369_);
if (lean_obj_tag(v_pre_1369_) == 1)
{
lean_object* v_pre_1370_; 
v_pre_1370_ = lean_ctor_get(v_pre_1369_, 0);
if (lean_obj_tag(v_pre_1370_) == 0)
{
lean_object* v_snd_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1450_; 
v_snd_1371_ = lean_ctor_get(v___x_1367_, 1);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1450_ == 0)
{
lean_object* v_unused_1451_; 
v_unused_1451_ = lean_ctor_get(v___x_1367_, 0);
lean_dec(v_unused_1451_);
v___x_1373_ = v___x_1367_;
v_isShared_1374_ = v_isSharedCheck_1450_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_snd_1371_);
lean_dec(v___x_1367_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1450_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v_str_1375_; lean_object* v_str_1376_; uint8_t v___x_1377_; 
v_str_1375_ = lean_ctor_get(v_fst_1368_, 1);
lean_inc_ref(v_str_1375_);
lean_dec_ref_known(v_fst_1368_, 2);
v_str_1376_ = lean_ctor_get(v_pre_1369_, 1);
lean_inc_ref(v_str_1376_);
lean_dec_ref_known(v_pre_1369_, 2);
v___x_1377_ = lean_string_dec_eq(v_str_1376_, v___x_1349_);
lean_dec_ref(v_str_1376_);
if (v___x_1377_ == 0)
{
lean_dec_ref(v_str_1375_);
lean_del_object(v___x_1373_);
lean_dec(v_snd_1371_);
lean_dec(v___x_1366_);
lean_del_object(v___x_1306_);
lean_del_object(v___x_1241_);
goto v___jp_1312_;
}
else
{
lean_object* v___x_1378_; uint8_t v___x_1379_; 
v___x_1378_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5));
v___x_1379_ = lean_string_dec_eq(v_str_1375_, v___x_1378_);
lean_dec_ref(v_str_1375_);
if (v___x_1379_ == 0)
{
lean_del_object(v___x_1373_);
lean_dec(v_snd_1371_);
lean_dec(v___x_1366_);
lean_del_object(v___x_1306_);
lean_del_object(v___x_1241_);
goto v___jp_1312_;
}
else
{
lean_object* v___x_1380_; uint8_t v___x_1381_; 
v___x_1380_ = lean_array_get_size(v_snd_1371_);
v___x_1381_ = lean_nat_dec_eq(v___x_1380_, v___x_1296_);
if (v___x_1381_ == 0)
{
lean_del_object(v___x_1373_);
lean_dec(v_snd_1371_);
lean_dec(v___x_1366_);
lean_del_object(v___x_1306_);
lean_del_object(v___x_1241_);
goto v___jp_1312_;
}
else
{
lean_object* v___x_1382_; lean_object* v___x_1383_; 
v___x_1382_ = lean_array_fget(v_snd_1371_, v___x_1310_);
lean_inc(v___x_1382_);
v___x_1383_ = l_Lean_Elab_Tactic_Omega_natCast_x3f(v___x_1382_);
if (lean_obj_tag(v___x_1383_) == 0)
{
lean_dec(v___x_1382_);
lean_del_object(v___x_1373_);
lean_dec(v_snd_1371_);
lean_dec(v___x_1366_);
lean_dec(v___x_1311_);
lean_del_object(v___x_1306_);
lean_dec(v___x_1299_);
lean_del_object(v___x_1241_);
goto v___jp_1232_;
}
else
{
lean_object* v_val_1384_; uint8_t v___x_1385_; 
v_val_1384_ = lean_ctor_get(v___x_1383_, 0);
lean_inc(v_val_1384_);
lean_dec_ref_known(v___x_1383_, 1);
v___x_1385_ = lean_nat_dec_eq(v_val_1384_, v___x_1357_);
lean_dec(v_val_1384_);
if (v___x_1385_ == 0)
{
lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1390_; 
v___x_1386_ = lean_array_fget(v_snd_1371_, v___x_1298_);
lean_dec(v_snd_1371_);
v___x_1387_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22));
v___x_1388_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23);
if (v_isShared_1374_ == 0)
{
lean_ctor_set_tag(v___x_1373_, 1);
lean_ctor_set(v___x_1373_, 1, v_us_1361_);
lean_ctor_set(v___x_1373_, 0, v___x_1388_);
v___x_1390_ = v___x_1373_;
goto v_reusejp_1389_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v___x_1388_);
lean_ctor_set(v_reuseFailAlloc_1449_, 1, v_us_1361_);
v___x_1390_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1389_;
}
v_reusejp_1389_:
{
lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v_b__pos_1397_; lean_object* v___x_1398_; 
lean_inc_ref(v___x_1390_);
v___x_1391_ = l_Lean_Expr_const___override(v___x_1387_, v___x_1390_);
v___x_1392_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__24));
v___x_1393_ = l_Lean_Expr_const___override(v___x_1392_, v_us_1361_);
v___x_1394_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__26));
v___x_1395_ = l_Lean_Expr_const___override(v___x_1394_, v_us_1361_);
v___x_1396_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27);
lean_inc(v___x_1382_);
v_b__pos_1397_ = l_Lean_mkApp4(v___x_1391_, v___x_1393_, v___x_1395_, v___x_1396_, v___x_1382_);
v___x_1398_ = l_Lean_Meta_mkDecideProof(v_b__pos_1397_, v_a_1212_, v_a_1213_, v_a_1214_, v_a_1215_);
if (lean_obj_tag(v___x_1398_) == 0)
{
lean_object* v_a_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1440_; 
v_a_1399_ = lean_ctor_get(v___x_1398_, 0);
v_isSharedCheck_1440_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1440_ == 0)
{
v___x_1401_ = v___x_1398_;
v_isShared_1402_ = v_isSharedCheck_1440_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_a_1399_);
lean_dec(v___x_1398_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1440_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___y_1414_; uint8_t v___x_1430_; 
v___x_1403_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29));
v___x_1404_ = l_Lean_Expr_const___override(v___x_1403_, v_us_1361_);
v___x_1405_ = l_Lean_mkApp3(v___x_1404_, v___x_1382_, v___x_1386_, v_a_1399_);
v___x_1406_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31));
v___x_1407_ = l_Lean_Expr_const___override(v___x_1406_, v_us_1361_);
v___x_1408_ = l_Lean_mkAppB(v___x_1407_, v___x_1366_, v___x_1405_);
v___x_1409_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33));
v___x_1410_ = l_Lean_Expr_const___override(v___x_1409_, v_us_1361_);
v___x_1411_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35));
v___x_1412_ = l_Lean_Expr_const___override(v___x_1411_, v_us_1361_);
v___x_1430_ = lean_uint8_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39);
if (v___x_1430_ == 0)
{
lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; 
v___x_1431_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42));
v___x_1432_ = l_Lean_Expr_const___override(v___x_1431_, v___x_1390_);
v___x_1433_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__1));
v___x_1434_ = l_Lean_Expr_const___override(v___x_1433_, v_us_1361_);
v___x_1435_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44));
v___x_1436_ = l_Lean_Expr_const___override(v___x_1435_, v_us_1361_);
v___x_1437_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47);
v___x_1438_ = l_Lean_mkApp3(v___x_1432_, v___x_1434_, v___x_1436_, v___x_1437_);
v___y_1414_ = v___x_1438_;
goto v___jp_1413_;
}
else
{
lean_object* v___x_1439_; 
lean_dec_ref(v___x_1390_);
v___x_1439_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49);
v___y_1414_ = v___x_1439_;
goto v___jp_1413_;
}
v___jp_1413_:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1422_; 
lean_inc_ref(v___x_1408_);
lean_inc_n(v___x_1299_, 2);
v___x_1415_ = l_Lean_mkApp3(v___x_1412_, v___x_1299_, v___y_1414_, v___x_1408_);
lean_inc(v___x_1311_);
v___x_1416_ = l_Lean_mkApp3(v___x_1410_, v___x_1311_, v___x_1299_, v___x_1415_);
v___x_1417_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37));
v___x_1418_ = l_Lean_Expr_const___override(v___x_1417_, v_us_1361_);
v___x_1419_ = l_Lean_mkApp3(v___x_1418_, v___x_1311_, v___x_1299_, v___x_1408_);
v___x_1420_ = lean_box(0);
if (v_isShared_1307_ == 0)
{
lean_ctor_set_tag(v___x_1306_, 1);
lean_ctor_set(v___x_1306_, 1, v___x_1420_);
lean_ctor_set(v___x_1306_, 0, v___x_1419_);
v___x_1422_ = v___x_1306_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v___x_1419_);
lean_ctor_set(v_reuseFailAlloc_1429_, 1, v___x_1420_);
v___x_1422_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
lean_object* v___x_1424_; 
if (v_isShared_1242_ == 0)
{
lean_ctor_set_tag(v___x_1241_, 1);
lean_ctor_set(v___x_1241_, 1, v___x_1422_);
lean_ctor_set(v___x_1241_, 0, v___x_1416_);
v___x_1424_ = v___x_1241_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v___x_1416_);
lean_ctor_set(v_reuseFailAlloc_1428_, 1, v___x_1422_);
v___x_1424_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
lean_object* v___x_1426_; 
if (v_isShared_1402_ == 0)
{
lean_ctor_set(v___x_1401_, 0, v___x_1424_);
v___x_1426_ = v___x_1401_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v___x_1424_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
}
}
}
}
else
{
lean_object* v_a_1441_; lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1448_; 
lean_dec_ref(v___x_1390_);
lean_dec(v___x_1386_);
lean_dec(v___x_1382_);
lean_dec(v___x_1366_);
lean_dec(v___x_1311_);
lean_del_object(v___x_1306_);
lean_dec(v___x_1299_);
lean_del_object(v___x_1241_);
v_a_1441_ = lean_ctor_get(v___x_1398_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1443_ = v___x_1398_;
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
else
{
lean_inc(v_a_1441_);
lean_dec(v___x_1398_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v___x_1446_; 
if (v_isShared_1444_ == 0)
{
v___x_1446_ = v___x_1443_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v_a_1441_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
return v___x_1446_;
}
}
}
}
}
else
{
lean_dec(v___x_1382_);
lean_del_object(v___x_1373_);
lean_dec(v_snd_1371_);
lean_dec(v___x_1366_);
lean_dec(v___x_1311_);
lean_del_object(v___x_1306_);
lean_dec(v___x_1299_);
lean_del_object(v___x_1241_);
goto v___jp_1232_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_1369_, 2);
lean_dec_ref_known(v_fst_1368_, 2);
lean_dec_ref(v___x_1367_);
lean_dec(v___x_1366_);
lean_del_object(v___x_1306_);
lean_del_object(v___x_1241_);
goto v___jp_1312_;
}
}
else
{
lean_dec_ref_known(v_fst_1368_, 2);
lean_dec(v_pre_1369_);
lean_dec_ref(v___x_1367_);
lean_dec(v___x_1366_);
lean_del_object(v___x_1306_);
lean_del_object(v___x_1241_);
goto v___jp_1312_;
}
}
else
{
lean_dec(v_fst_1368_);
lean_dec_ref(v___x_1367_);
lean_dec(v___x_1366_);
lean_del_object(v___x_1306_);
lean_del_object(v___x_1241_);
goto v___jp_1312_;
}
}
else
{
lean_dec(v_us_1361_);
lean_dec(v___x_1311_);
lean_del_object(v___x_1306_);
lean_dec(v_snd_1304_);
lean_dec(v___x_1299_);
lean_del_object(v___x_1241_);
goto v___jp_1226_;
}
}
}
else
{
lean_dec(v___x_1311_);
lean_del_object(v___x_1306_);
lean_dec(v_snd_1304_);
lean_dec(v___x_1299_);
lean_del_object(v___x_1241_);
goto v___jp_1226_;
}
}
else
{
lean_dec(v___x_1311_);
lean_del_object(v___x_1306_);
lean_dec(v_snd_1304_);
lean_dec(v___x_1299_);
lean_del_object(v___x_1241_);
goto v___jp_1226_;
}
}
else
{
lean_dec(v___x_1311_);
lean_del_object(v___x_1306_);
lean_dec(v_snd_1304_);
lean_dec(v___x_1299_);
lean_del_object(v___x_1241_);
goto v___jp_1226_;
}
}
}
}
}
else
{
lean_object* v___x_1452_; uint8_t v___x_1453_; 
lean_dec_ref(v_str_1309_);
v___x_1452_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5));
v___x_1453_ = lean_string_dec_eq(v_str_1308_, v___x_1452_);
lean_dec_ref(v_str_1308_);
if (v___x_1453_ == 0)
{
lean_dec(v___x_1311_);
lean_del_object(v___x_1306_);
lean_dec(v_snd_1304_);
lean_dec(v___x_1299_);
lean_del_object(v___x_1241_);
goto v___jp_1226_;
}
else
{
lean_object* v___x_1454_; uint8_t v___x_1455_; 
v___x_1454_ = lean_array_get_size(v_snd_1304_);
v___x_1455_ = lean_nat_dec_eq(v___x_1454_, v___x_1296_);
if (v___x_1455_ == 0)
{
lean_dec(v___x_1311_);
lean_del_object(v___x_1306_);
lean_dec(v_snd_1304_);
lean_dec(v___x_1299_);
lean_del_object(v___x_1241_);
goto v___jp_1226_;
}
else
{
lean_object* v___x_1456_; lean_object* v___x_1457_; 
v___x_1456_ = lean_array_fget(v_snd_1304_, v___x_1310_);
lean_inc(v___x_1456_);
v___x_1457_ = l_Lean_Elab_Tactic_Omega_natCast_x3f(v___x_1456_);
if (lean_obj_tag(v___x_1457_) == 0)
{
lean_dec(v___x_1456_);
lean_dec(v___x_1311_);
lean_del_object(v___x_1306_);
lean_dec(v_snd_1304_);
lean_dec(v___x_1299_);
lean_del_object(v___x_1241_);
goto v___jp_1220_;
}
else
{
lean_object* v_val_1458_; lean_object* v___x_1459_; uint8_t v___x_1460_; 
v_val_1458_ = lean_ctor_get(v___x_1457_, 0);
lean_inc(v_val_1458_);
lean_dec_ref_known(v___x_1457_, 1);
v___x_1459_ = lean_unsigned_to_nat(0u);
v___x_1460_ = lean_nat_dec_eq(v_val_1458_, v___x_1459_);
lean_dec(v_val_1458_);
if (v___x_1460_ == 0)
{
lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___y_1467_; uint8_t v___x_1500_; 
v___x_1461_ = lean_array_fget(v_snd_1304_, v___x_1298_);
lean_dec(v_snd_1304_);
v___x_1462_ = lean_box(0);
v___x_1463_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51);
v___x_1464_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2);
v___x_1465_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54);
v___x_1500_ = lean_uint8_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39);
if (v___x_1500_ == 0)
{
lean_object* v___x_1501_; 
v___x_1501_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63);
v___y_1467_ = v___x_1501_;
goto v___jp_1466_;
}
else
{
lean_object* v___x_1502_; 
v___x_1502_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49);
v___y_1467_ = v___x_1502_;
goto v___jp_1466_;
}
v___jp_1466_:
{
lean_object* v_b__pos_1468_; lean_object* v___x_1469_; 
lean_inc(v___x_1456_);
lean_inc_ref(v___y_1467_);
v_b__pos_1468_ = l_Lean_mkApp4(v___x_1463_, v___x_1464_, v___x_1465_, v___y_1467_, v___x_1456_);
v___x_1469_ = l_Lean_Meta_mkDecideProof(v_b__pos_1468_, v_a_1212_, v_a_1213_, v_a_1214_, v_a_1215_);
if (lean_obj_tag(v___x_1469_) == 0)
{
lean_object* v_a_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1491_; 
v_a_1470_ = lean_ctor_get(v___x_1469_, 0);
v_isSharedCheck_1491_ = !lean_is_exclusive(v___x_1469_);
if (v_isSharedCheck_1491_ == 0)
{
v___x_1472_ = v___x_1469_;
v_isShared_1473_ = v_isSharedCheck_1491_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_a_1470_);
lean_dec(v___x_1469_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1491_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1483_; 
v___x_1474_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57);
v___x_1475_ = l_Lean_mkApp3(v___x_1474_, v___x_1456_, v___x_1461_, v_a_1470_);
v___x_1476_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58);
v___x_1477_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59);
lean_inc_ref(v___x_1475_);
lean_inc_ref(v___y_1467_);
lean_inc_n(v___x_1299_, 2);
v___x_1478_ = l_Lean_mkApp3(v___x_1477_, v___x_1299_, v___y_1467_, v___x_1475_);
lean_inc(v___x_1311_);
v___x_1479_ = l_Lean_mkApp3(v___x_1476_, v___x_1311_, v___x_1299_, v___x_1478_);
v___x_1480_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60);
v___x_1481_ = l_Lean_mkApp3(v___x_1480_, v___x_1311_, v___x_1299_, v___x_1475_);
if (v_isShared_1307_ == 0)
{
lean_ctor_set_tag(v___x_1306_, 1);
lean_ctor_set(v___x_1306_, 1, v___x_1462_);
lean_ctor_set(v___x_1306_, 0, v___x_1481_);
v___x_1483_ = v___x_1306_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v___x_1481_);
lean_ctor_set(v_reuseFailAlloc_1490_, 1, v___x_1462_);
v___x_1483_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
lean_object* v___x_1485_; 
if (v_isShared_1242_ == 0)
{
lean_ctor_set_tag(v___x_1241_, 1);
lean_ctor_set(v___x_1241_, 1, v___x_1483_);
lean_ctor_set(v___x_1241_, 0, v___x_1479_);
v___x_1485_ = v___x_1241_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v___x_1479_);
lean_ctor_set(v_reuseFailAlloc_1489_, 1, v___x_1483_);
v___x_1485_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
lean_object* v___x_1487_; 
if (v_isShared_1473_ == 0)
{
lean_ctor_set(v___x_1472_, 0, v___x_1485_);
v___x_1487_ = v___x_1472_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v___x_1485_);
v___x_1487_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
return v___x_1487_;
}
}
}
}
}
else
{
lean_object* v_a_1492_; lean_object* v___x_1494_; uint8_t v_isShared_1495_; uint8_t v_isSharedCheck_1499_; 
lean_dec(v___x_1461_);
lean_dec(v___x_1456_);
lean_dec(v___x_1311_);
lean_del_object(v___x_1306_);
lean_dec(v___x_1299_);
lean_del_object(v___x_1241_);
v_a_1492_ = lean_ctor_get(v___x_1469_, 0);
v_isSharedCheck_1499_ = !lean_is_exclusive(v___x_1469_);
if (v_isSharedCheck_1499_ == 0)
{
v___x_1494_ = v___x_1469_;
v_isShared_1495_ = v_isSharedCheck_1499_;
goto v_resetjp_1493_;
}
else
{
lean_inc(v_a_1492_);
lean_dec(v___x_1469_);
v___x_1494_ = lean_box(0);
v_isShared_1495_ = v_isSharedCheck_1499_;
goto v_resetjp_1493_;
}
v_resetjp_1493_:
{
lean_object* v___x_1497_; 
if (v_isShared_1495_ == 0)
{
v___x_1497_ = v___x_1494_;
goto v_reusejp_1496_;
}
else
{
lean_object* v_reuseFailAlloc_1498_; 
v_reuseFailAlloc_1498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1498_, 0, v_a_1492_);
v___x_1497_ = v_reuseFailAlloc_1498_;
goto v_reusejp_1496_;
}
v_reusejp_1496_:
{
return v___x_1497_;
}
}
}
}
}
else
{
lean_dec(v___x_1456_);
lean_dec(v___x_1311_);
lean_del_object(v___x_1306_);
lean_dec(v_snd_1304_);
lean_dec(v___x_1299_);
lean_del_object(v___x_1241_);
goto v___jp_1220_;
}
}
}
}
}
v___jp_1312_:
{
lean_object* v___x_1313_; lean_object* v_fst_1314_; 
v___x_1313_ = l_Lean_Expr_getAppFnArgs(v___x_1311_);
v_fst_1314_ = lean_ctor_get(v___x_1313_, 0);
lean_inc(v_fst_1314_);
if (lean_obj_tag(v_fst_1314_) == 1)
{
lean_object* v_pre_1315_; 
v_pre_1315_ = lean_ctor_get(v_fst_1314_, 0);
lean_inc(v_pre_1315_);
if (lean_obj_tag(v_pre_1315_) == 1)
{
lean_object* v_pre_1316_; 
v_pre_1316_ = lean_ctor_get(v_pre_1315_, 0);
if (lean_obj_tag(v_pre_1316_) == 0)
{
lean_object* v_snd_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1347_; 
v_snd_1317_ = lean_ctor_get(v___x_1313_, 1);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1313_);
if (v_isSharedCheck_1347_ == 0)
{
lean_object* v_unused_1348_; 
v_unused_1348_ = lean_ctor_get(v___x_1313_, 0);
lean_dec(v_unused_1348_);
v___x_1319_ = v___x_1313_;
v_isShared_1320_ = v_isSharedCheck_1347_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_snd_1317_);
lean_dec(v___x_1313_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1347_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v_str_1321_; lean_object* v_str_1322_; uint8_t v___x_1323_; 
v_str_1321_ = lean_ctor_get(v_fst_1314_, 1);
lean_inc_ref(v_str_1321_);
lean_dec_ref_known(v_fst_1314_, 2);
v_str_1322_ = lean_ctor_get(v_pre_1315_, 1);
lean_inc_ref(v_str_1322_);
lean_dec_ref_known(v_pre_1315_, 2);
v___x_1323_ = lean_string_dec_eq(v_str_1322_, v___x_1245_);
lean_dec_ref(v_str_1322_);
if (v___x_1323_ == 0)
{
lean_dec_ref(v_str_1321_);
lean_del_object(v___x_1319_);
lean_dec(v_snd_1317_);
lean_dec(v___x_1299_);
goto v___jp_1229_;
}
else
{
lean_object* v___x_1324_; uint8_t v___x_1325_; 
v___x_1324_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_1325_ = lean_string_dec_eq(v_str_1321_, v___x_1324_);
lean_dec_ref(v_str_1321_);
if (v___x_1325_ == 0)
{
lean_del_object(v___x_1319_);
lean_dec(v_snd_1317_);
lean_dec(v___x_1299_);
goto v___jp_1229_;
}
else
{
lean_object* v___x_1326_; lean_object* v___x_1327_; uint8_t v___x_1328_; 
v___x_1326_ = lean_array_get_size(v_snd_1317_);
v___x_1327_ = lean_unsigned_to_nat(3u);
v___x_1328_ = lean_nat_dec_eq(v___x_1326_, v___x_1327_);
if (v___x_1328_ == 0)
{
lean_del_object(v___x_1319_);
lean_dec(v_snd_1317_);
lean_dec(v___x_1299_);
goto v___jp_1229_;
}
else
{
lean_object* v___x_1329_; lean_object* v___x_1330_; 
v___x_1329_ = lean_unsigned_to_nat(0u);
v___x_1330_ = lean_array_fget_borrowed(v_snd_1317_, v___x_1329_);
if (lean_obj_tag(v___x_1330_) == 4)
{
lean_object* v_declName_1331_; 
v_declName_1331_ = lean_ctor_get(v___x_1330_, 0);
if (lean_obj_tag(v_declName_1331_) == 1)
{
lean_object* v_pre_1332_; 
v_pre_1332_ = lean_ctor_get(v_declName_1331_, 0);
if (lean_obj_tag(v_pre_1332_) == 0)
{
lean_object* v_us_1333_; lean_object* v_str_1334_; lean_object* v___x_1335_; uint8_t v___x_1336_; 
v_us_1333_ = lean_ctor_get(v___x_1330_, 1);
lean_inc(v_us_1333_);
v_str_1334_ = lean_ctor_get(v_declName_1331_, 1);
v___x_1335_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0));
v___x_1336_ = lean_string_dec_eq(v_str_1334_, v___x_1335_);
if (v___x_1336_ == 0)
{
lean_dec(v_us_1333_);
lean_del_object(v___x_1319_);
lean_dec(v_snd_1317_);
lean_dec(v___x_1299_);
goto v___jp_1229_;
}
else
{
if (lean_obj_tag(v_us_1333_) == 0)
{
lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1344_; 
v___x_1337_ = lean_unsigned_to_nat(2u);
v___x_1338_ = lean_array_fget(v_snd_1317_, v___x_1337_);
lean_dec(v_snd_1317_);
v___x_1339_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19));
v___x_1340_ = l_Lean_Expr_const___override(v___x_1339_, v_us_1333_);
v___x_1341_ = l_Lean_mkAppB(v___x_1340_, v___x_1338_, v___x_1299_);
v___x_1342_ = lean_box(0);
if (v_isShared_1320_ == 0)
{
lean_ctor_set_tag(v___x_1319_, 1);
lean_ctor_set(v___x_1319_, 1, v___x_1342_);
lean_ctor_set(v___x_1319_, 0, v___x_1341_);
v___x_1344_ = v___x_1319_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v___x_1341_);
lean_ctor_set(v_reuseFailAlloc_1346_, 1, v___x_1342_);
v___x_1344_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
lean_object* v___x_1345_; 
v___x_1345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1345_, 0, v___x_1344_);
return v___x_1345_;
}
}
else
{
lean_dec(v_us_1333_);
lean_del_object(v___x_1319_);
lean_dec(v_snd_1317_);
lean_dec(v___x_1299_);
goto v___jp_1229_;
}
}
}
else
{
lean_del_object(v___x_1319_);
lean_dec(v_snd_1317_);
lean_dec(v___x_1299_);
goto v___jp_1229_;
}
}
else
{
lean_del_object(v___x_1319_);
lean_dec(v_snd_1317_);
lean_dec(v___x_1299_);
goto v___jp_1229_;
}
}
else
{
lean_del_object(v___x_1319_);
lean_dec(v_snd_1317_);
lean_dec(v___x_1299_);
goto v___jp_1229_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_1315_, 2);
lean_dec_ref_known(v_fst_1314_, 2);
lean_dec_ref(v___x_1313_);
lean_dec(v___x_1299_);
goto v___jp_1229_;
}
}
else
{
lean_dec(v_pre_1315_);
lean_dec_ref_known(v_fst_1314_, 2);
lean_dec_ref(v___x_1313_);
lean_dec(v___x_1299_);
goto v___jp_1229_;
}
}
else
{
lean_dec(v_fst_1314_);
lean_dec_ref(v___x_1313_);
lean_dec(v___x_1299_);
goto v___jp_1229_;
}
}
}
}
else
{
lean_dec_ref_known(v_pre_1302_, 2);
lean_dec_ref_known(v_fst_1301_, 2);
lean_dec_ref(v___x_1300_);
lean_dec(v___x_1299_);
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
goto v___jp_1226_;
}
}
else
{
lean_dec(v_pre_1302_);
lean_dec_ref_known(v_fst_1301_, 2);
lean_dec_ref(v___x_1300_);
lean_dec(v___x_1299_);
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
goto v___jp_1226_;
}
}
else
{
lean_dec(v_fst_1301_);
lean_dec_ref(v___x_1300_);
lean_dec(v___x_1299_);
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
goto v___jp_1226_;
}
}
}
}
}
else
{
lean_object* v___x_1505_; uint8_t v___x_1506_; 
lean_dec_ref(v_str_1244_);
v___x_1505_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__7));
v___x_1506_ = lean_string_dec_eq(v_str_1243_, v___x_1505_);
lean_dec_ref(v_str_1243_);
if (v___x_1506_ == 0)
{
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
goto v___jp_1223_;
}
else
{
lean_object* v___x_1507_; lean_object* v___x_1508_; uint8_t v___x_1509_; 
v___x_1507_ = lean_array_get_size(v_snd_1239_);
v___x_1508_ = lean_unsigned_to_nat(6u);
v___x_1509_ = lean_nat_dec_eq(v___x_1507_, v___x_1508_);
if (v___x_1509_ == 0)
{
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
goto v___jp_1223_;
}
else
{
lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; 
v___x_1510_ = lean_unsigned_to_nat(5u);
v___x_1511_ = lean_array_fget(v_snd_1239_, v___x_1510_);
lean_inc(v___x_1511_);
v___x_1512_ = l_Lean_Elab_Tactic_Omega_natCast_x3f(v___x_1511_);
if (lean_obj_tag(v___x_1512_) == 0)
{
lean_dec(v___x_1511_);
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
goto v___jp_1217_;
}
else
{
lean_object* v_val_1513_; lean_object* v___x_1514_; uint8_t v___x_1515_; 
v_val_1513_ = lean_ctor_get(v___x_1512_, 0);
lean_inc(v_val_1513_);
lean_dec_ref_known(v___x_1512_, 1);
v___x_1514_ = lean_unsigned_to_nat(0u);
v___x_1515_ = lean_nat_dec_eq(v_val_1513_, v___x_1514_);
lean_dec(v_val_1513_);
if (v___x_1515_ == 0)
{
lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___y_1522_; uint8_t v___x_1562_; 
v___x_1516_ = lean_unsigned_to_nat(4u);
v___x_1517_ = lean_array_fget(v_snd_1239_, v___x_1516_);
lean_dec(v_snd_1239_);
v___x_1518_ = lean_box(0);
v___x_1519_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68);
v___x_1520_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2);
v___x_1562_ = lean_uint8_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39);
if (v___x_1562_ == 0)
{
lean_object* v___x_1563_; 
v___x_1563_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63);
v___y_1522_ = v___x_1563_;
goto v___jp_1521_;
}
else
{
lean_object* v___x_1564_; 
v___x_1564_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49);
v___y_1522_ = v___x_1564_;
goto v___jp_1521_;
}
v___jp_1521_:
{
lean_object* v_ne__zero_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v_pos_1526_; lean_object* v___x_1527_; 
lean_inc_ref_n(v___y_1522_, 2);
lean_inc_n(v___x_1511_, 2);
v_ne__zero_1523_ = l_Lean_mkApp3(v___x_1519_, v___x_1520_, v___x_1511_, v___y_1522_);
v___x_1524_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51);
v___x_1525_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54);
v_pos_1526_ = l_Lean_mkApp4(v___x_1524_, v___x_1520_, v___x_1525_, v___y_1522_, v___x_1511_);
v___x_1527_ = l_Lean_Meta_mkDecideProof(v_ne__zero_1523_, v_a_1212_, v_a_1213_, v_a_1214_, v_a_1215_);
if (lean_obj_tag(v___x_1527_) == 0)
{
lean_object* v_a_1528_; lean_object* v___x_1529_; 
v_a_1528_ = lean_ctor_get(v___x_1527_, 0);
lean_inc(v_a_1528_);
lean_dec_ref_known(v___x_1527_, 1);
v___x_1529_ = l_Lean_Meta_mkDecideProof(v_pos_1526_, v_a_1212_, v_a_1213_, v_a_1214_, v_a_1215_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_object* v_a_1530_; lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1545_; 
v_a_1530_ = lean_ctor_get(v___x_1529_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1532_ = v___x_1529_;
v_isShared_1533_ = v_isSharedCheck_1545_;
goto v_resetjp_1531_;
}
else
{
lean_inc(v_a_1530_);
lean_dec(v___x_1529_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1545_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1539_; 
v___x_1534_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71);
lean_inc(v___x_1511_);
lean_inc(v___x_1517_);
v___x_1535_ = l_Lean_mkApp3(v___x_1534_, v___x_1517_, v___x_1511_, v_a_1528_);
v___x_1536_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74);
v___x_1537_ = l_Lean_mkApp3(v___x_1536_, v___x_1517_, v___x_1511_, v_a_1530_);
if (v_isShared_1242_ == 0)
{
lean_ctor_set_tag(v___x_1241_, 1);
lean_ctor_set(v___x_1241_, 1, v___x_1518_);
lean_ctor_set(v___x_1241_, 0, v___x_1537_);
v___x_1539_ = v___x_1241_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v___x_1537_);
lean_ctor_set(v_reuseFailAlloc_1544_, 1, v___x_1518_);
v___x_1539_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
lean_object* v___x_1540_; lean_object* v___x_1542_; 
v___x_1540_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1540_, 0, v___x_1535_);
lean_ctor_set(v___x_1540_, 1, v___x_1539_);
if (v_isShared_1533_ == 0)
{
lean_ctor_set(v___x_1532_, 0, v___x_1540_);
v___x_1542_ = v___x_1532_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v___x_1540_);
v___x_1542_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
return v___x_1542_;
}
}
}
}
else
{
lean_object* v_a_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1553_; 
lean_dec(v_a_1528_);
lean_dec(v___x_1517_);
lean_dec(v___x_1511_);
lean_del_object(v___x_1241_);
v_a_1546_ = lean_ctor_get(v___x_1529_, 0);
v_isSharedCheck_1553_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1548_ = v___x_1529_;
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_a_1546_);
lean_dec(v___x_1529_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1551_; 
if (v_isShared_1549_ == 0)
{
v___x_1551_ = v___x_1548_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v_a_1546_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
return v___x_1551_;
}
}
}
}
else
{
lean_object* v_a_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1561_; 
lean_dec_ref(v_pos_1526_);
lean_dec(v___x_1517_);
lean_dec(v___x_1511_);
lean_del_object(v___x_1241_);
v_a_1554_ = lean_ctor_get(v___x_1527_, 0);
v_isSharedCheck_1561_ = !lean_is_exclusive(v___x_1527_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1556_ = v___x_1527_;
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_a_1554_);
lean_dec(v___x_1527_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1559_; 
if (v_isShared_1557_ == 0)
{
v___x_1559_ = v___x_1556_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_a_1554_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
}
}
}
else
{
lean_dec(v___x_1511_);
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
goto v___jp_1217_;
}
}
}
}
}
}
else
{
lean_object* v___x_1565_; uint8_t v___x_1566_; 
lean_dec_ref(v_str_1244_);
v___x_1565_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_1566_ = lean_string_dec_eq(v_str_1243_, v___x_1565_);
lean_dec_ref(v_str_1243_);
if (v___x_1566_ == 0)
{
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
goto v___jp_1223_;
}
else
{
lean_object* v___x_1567_; lean_object* v___x_1568_; uint8_t v___x_1569_; 
v___x_1567_ = lean_array_get_size(v_snd_1239_);
v___x_1568_ = lean_unsigned_to_nat(3u);
v___x_1569_ = lean_nat_dec_eq(v___x_1567_, v___x_1568_);
if (v___x_1569_ == 0)
{
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
goto v___jp_1223_;
}
else
{
lean_object* v___x_1570_; lean_object* v___x_1571_; 
v___x_1570_ = lean_unsigned_to_nat(0u);
v___x_1571_ = lean_array_fget_borrowed(v_snd_1239_, v___x_1570_);
if (lean_obj_tag(v___x_1571_) == 4)
{
lean_object* v_declName_1572_; 
v_declName_1572_ = lean_ctor_get(v___x_1571_, 0);
if (lean_obj_tag(v_declName_1572_) == 1)
{
lean_object* v_pre_1573_; 
v_pre_1573_ = lean_ctor_get(v_declName_1572_, 0);
if (lean_obj_tag(v_pre_1573_) == 0)
{
lean_object* v_us_1574_; lean_object* v_str_1575_; lean_object* v___x_1576_; lean_object* v___y_1578_; lean_object* v___y_1579_; uint8_t v___x_1589_; 
v_us_1574_ = lean_ctor_get(v___x_1571_, 1);
lean_inc(v_us_1574_);
v_str_1575_ = lean_ctor_get(v_declName_1572_, 1);
v___x_1576_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0));
v___x_1589_ = lean_string_dec_eq(v_str_1575_, v___x_1576_);
if (v___x_1589_ == 0)
{
lean_dec(v_us_1574_);
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
goto v___jp_1223_;
}
else
{
if (lean_obj_tag(v_us_1574_) == 0)
{
uint8_t v_splitNatSub_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v_r_1597_; lean_object* v_n_1599_; lean_object* v_x_1600_; lean_object* v_n_1609_; lean_object* v_i_1610_; lean_object* v_x_1619_; 
v_splitNatSub_1590_ = lean_ctor_get_uint8(v_a_1211_, 1);
v___x_1591_ = lean_unsigned_to_nat(2u);
v___x_1592_ = lean_array_fget(v_snd_1239_, v___x_1591_);
lean_dec(v_snd_1239_);
v___x_1593_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78));
v___x_1594_ = l_Lean_Expr_const___override(v___x_1593_, v_us_1574_);
lean_inc(v___x_1592_);
v___x_1595_ = l_Lean_Expr_app___override(v___x_1594_, v___x_1592_);
v___x_1596_ = lean_box(0);
v_r_1597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_r_1597_, 0, v___x_1595_);
lean_ctor_set(v_r_1597_, 1, v___x_1596_);
if (v_splitNatSub_1590_ == 1)
{
lean_object* v___x_1625_; lean_object* v_fst_1626_; 
v___x_1625_ = l_Lean_Expr_getAppFnArgs(v___x_1592_);
v_fst_1626_ = lean_ctor_get(v___x_1625_, 0);
lean_inc(v_fst_1626_);
if (lean_obj_tag(v_fst_1626_) == 1)
{
lean_object* v_pre_1627_; 
v_pre_1627_ = lean_ctor_get(v_fst_1626_, 0);
lean_inc(v_pre_1627_);
if (lean_obj_tag(v_pre_1627_) == 1)
{
lean_object* v_pre_1628_; 
v_pre_1628_ = lean_ctor_get(v_pre_1627_, 0);
if (lean_obj_tag(v_pre_1628_) == 0)
{
lean_object* v_snd_1629_; lean_object* v___x_1631_; uint8_t v_isShared_1632_; uint8_t v_isSharedCheck_1689_; 
v_snd_1629_ = lean_ctor_get(v___x_1625_, 1);
v_isSharedCheck_1689_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1689_ == 0)
{
lean_object* v_unused_1690_; 
v_unused_1690_ = lean_ctor_get(v___x_1625_, 0);
lean_dec(v_unused_1690_);
v___x_1631_ = v___x_1625_;
v_isShared_1632_ = v_isSharedCheck_1689_;
goto v_resetjp_1630_;
}
else
{
lean_inc(v_snd_1629_);
lean_dec(v___x_1625_);
v___x_1631_ = lean_box(0);
v_isShared_1632_ = v_isSharedCheck_1689_;
goto v_resetjp_1630_;
}
v_resetjp_1630_:
{
lean_object* v_str_1633_; lean_object* v_str_1634_; lean_object* v___x_1635_; uint8_t v___x_1636_; 
v_str_1633_ = lean_ctor_get(v_fst_1626_, 1);
lean_inc_ref(v_str_1633_);
lean_dec_ref_known(v_fst_1626_, 2);
v_str_1634_ = lean_ctor_get(v_pre_1627_, 1);
lean_inc_ref(v_str_1634_);
lean_dec_ref_known(v_pre_1627_, 2);
v___x_1635_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__2));
v___x_1636_ = lean_string_dec_eq(v_str_1634_, v___x_1635_);
if (v___x_1636_ == 0)
{
uint8_t v___x_1637_; 
lean_del_object(v___x_1631_);
v___x_1637_ = lean_string_dec_eq(v_str_1634_, v___x_1576_);
if (v___x_1637_ == 0)
{
lean_object* v___x_1638_; uint8_t v___x_1639_; 
lean_del_object(v___x_1241_);
v___x_1638_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82));
v___x_1639_ = lean_string_dec_eq(v_str_1634_, v___x_1638_);
if (v___x_1639_ == 0)
{
lean_object* v___x_1640_; uint8_t v___x_1641_; 
v___x_1640_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79));
v___x_1641_ = lean_string_dec_eq(v_str_1634_, v___x_1640_);
lean_dec_ref(v_str_1634_);
if (v___x_1641_ == 0)
{
lean_object* v___x_1642_; 
lean_dec_ref(v_str_1633_);
lean_dec(v_snd_1629_);
v___x_1642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1642_, 0, v_r_1597_);
return v___x_1642_;
}
else
{
lean_object* v___x_1643_; uint8_t v___x_1644_; 
v___x_1643_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__86));
v___x_1644_ = lean_string_dec_eq(v_str_1633_, v___x_1643_);
lean_dec_ref(v_str_1633_);
if (v___x_1644_ == 0)
{
lean_object* v___x_1645_; 
lean_dec(v_snd_1629_);
v___x_1645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1645_, 0, v_r_1597_);
return v___x_1645_;
}
else
{
lean_object* v___x_1646_; uint8_t v___x_1647_; 
v___x_1646_ = lean_array_get_size(v_snd_1629_);
v___x_1647_ = lean_nat_dec_eq(v___x_1646_, v___x_1591_);
if (v___x_1647_ == 0)
{
lean_object* v___x_1648_; 
lean_dec(v_snd_1629_);
v___x_1648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1648_, 0, v_r_1597_);
return v___x_1648_;
}
else
{
lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; 
v___x_1649_ = lean_array_fget(v_snd_1629_, v___x_1570_);
v___x_1650_ = lean_unsigned_to_nat(1u);
v___x_1651_ = lean_array_fget(v_snd_1629_, v___x_1650_);
lean_dec(v_snd_1629_);
v_n_1599_ = v___x_1649_;
v_x_1600_ = v___x_1651_;
goto v___jp_1598_;
}
}
}
}
else
{
lean_object* v___x_1652_; uint8_t v___x_1653_; 
lean_dec_ref(v_str_1634_);
v___x_1652_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__87));
v___x_1653_ = lean_string_dec_eq(v_str_1633_, v___x_1652_);
lean_dec_ref(v_str_1633_);
if (v___x_1653_ == 0)
{
lean_object* v___x_1654_; 
lean_dec(v_snd_1629_);
v___x_1654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1654_, 0, v_r_1597_);
return v___x_1654_;
}
else
{
lean_object* v___x_1655_; uint8_t v___x_1656_; 
v___x_1655_ = lean_array_get_size(v_snd_1629_);
v___x_1656_ = lean_nat_dec_eq(v___x_1655_, v___x_1591_);
if (v___x_1656_ == 0)
{
lean_object* v___x_1657_; 
lean_dec(v_snd_1629_);
v___x_1657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1657_, 0, v_r_1597_);
return v___x_1657_;
}
else
{
lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; 
v___x_1658_ = lean_array_fget(v_snd_1629_, v___x_1570_);
v___x_1659_ = lean_unsigned_to_nat(1u);
v___x_1660_ = lean_array_fget(v_snd_1629_, v___x_1659_);
lean_dec(v_snd_1629_);
v_n_1609_ = v___x_1658_;
v_i_1610_ = v___x_1660_;
goto v___jp_1608_;
}
}
}
}
else
{
lean_object* v___x_1661_; uint8_t v___x_1662_; 
lean_dec_ref(v_str_1634_);
v___x_1661_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88));
v___x_1662_ = lean_string_dec_eq(v_str_1633_, v___x_1661_);
lean_dec_ref(v_str_1633_);
if (v___x_1662_ == 0)
{
lean_object* v___x_1663_; 
lean_dec(v_snd_1629_);
lean_del_object(v___x_1241_);
v___x_1663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1663_, 0, v_r_1597_);
return v___x_1663_;
}
else
{
lean_object* v___x_1664_; lean_object* v___x_1665_; uint8_t v___x_1666_; 
v___x_1664_ = lean_array_get_size(v_snd_1629_);
v___x_1665_ = lean_unsigned_to_nat(1u);
v___x_1666_ = lean_nat_dec_eq(v___x_1664_, v___x_1665_);
if (v___x_1666_ == 0)
{
lean_object* v___x_1667_; 
lean_dec(v_snd_1629_);
lean_del_object(v___x_1241_);
v___x_1667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1667_, 0, v_r_1597_);
return v___x_1667_;
}
else
{
lean_object* v___x_1668_; 
v___x_1668_ = lean_array_fget(v_snd_1629_, v___x_1570_);
lean_dec(v_snd_1629_);
v_x_1619_ = v___x_1668_;
goto v___jp_1618_;
}
}
}
}
else
{
lean_object* v___x_1669_; uint8_t v___x_1670_; 
lean_dec_ref(v_str_1634_);
lean_del_object(v___x_1241_);
v___x_1669_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__9));
v___x_1670_ = lean_string_dec_eq(v_str_1633_, v___x_1669_);
lean_dec_ref(v_str_1633_);
if (v___x_1670_ == 0)
{
lean_object* v___x_1671_; 
lean_del_object(v___x_1631_);
lean_dec(v_snd_1629_);
v___x_1671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1671_, 0, v_r_1597_);
return v___x_1671_;
}
else
{
lean_object* v___x_1672_; lean_object* v___x_1673_; uint8_t v___x_1674_; 
v___x_1672_ = lean_array_get_size(v_snd_1629_);
v___x_1673_ = lean_unsigned_to_nat(6u);
v___x_1674_ = lean_nat_dec_eq(v___x_1672_, v___x_1673_);
if (v___x_1674_ == 0)
{
lean_object* v___x_1675_; 
lean_del_object(v___x_1631_);
lean_dec(v_snd_1629_);
v___x_1675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1675_, 0, v_r_1597_);
return v___x_1675_;
}
else
{
lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; uint8_t v___x_1683_; 
v___x_1676_ = lean_unsigned_to_nat(4u);
v___x_1677_ = lean_array_fget(v_snd_1629_, v___x_1676_);
v___x_1678_ = lean_unsigned_to_nat(5u);
v___x_1679_ = lean_array_fget(v_snd_1629_, v___x_1678_);
lean_dec(v_snd_1629_);
v___x_1680_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90));
v___x_1681_ = l_Lean_Expr_const___override(v___x_1680_, v_us_1574_);
v___x_1682_ = l_Lean_mkAppB(v___x_1681_, v___x_1677_, v___x_1679_);
v___x_1683_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_1682_, v_r_1597_);
if (v___x_1683_ == 0)
{
lean_object* v___x_1685_; 
if (v_isShared_1632_ == 0)
{
lean_ctor_set_tag(v___x_1631_, 1);
lean_ctor_set(v___x_1631_, 1, v_r_1597_);
lean_ctor_set(v___x_1631_, 0, v___x_1682_);
v___x_1685_ = v___x_1631_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v___x_1682_);
lean_ctor_set(v_reuseFailAlloc_1687_, 1, v_r_1597_);
v___x_1685_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
lean_object* v___x_1686_; 
v___x_1686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1685_);
return v___x_1686_;
}
}
else
{
lean_object* v___x_1688_; 
lean_dec_ref(v___x_1682_);
lean_del_object(v___x_1631_);
v___x_1688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1688_, 0, v_r_1597_);
return v___x_1688_;
}
}
}
}
}
}
else
{
lean_object* v___x_1691_; 
lean_dec_ref_known(v_pre_1627_, 2);
lean_dec_ref_known(v_fst_1626_, 2);
lean_dec_ref(v___x_1625_);
lean_del_object(v___x_1241_);
v___x_1691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1691_, 0, v_r_1597_);
return v___x_1691_;
}
}
else
{
lean_object* v___x_1692_; 
lean_dec_ref_known(v_fst_1626_, 2);
lean_dec(v_pre_1627_);
lean_dec_ref(v___x_1625_);
lean_del_object(v___x_1241_);
v___x_1692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1692_, 0, v_r_1597_);
return v___x_1692_;
}
}
else
{
lean_object* v___x_1693_; 
lean_dec(v_fst_1626_);
lean_dec_ref(v___x_1625_);
lean_del_object(v___x_1241_);
v___x_1693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1693_, 0, v_r_1597_);
return v___x_1693_;
}
}
else
{
lean_object* v___x_1694_; lean_object* v_fst_1695_; 
v___x_1694_ = l_Lean_Expr_getAppFnArgs(v___x_1592_);
v_fst_1695_ = lean_ctor_get(v___x_1694_, 0);
lean_inc(v_fst_1695_);
if (lean_obj_tag(v_fst_1695_) == 1)
{
lean_object* v_pre_1696_; 
v_pre_1696_ = lean_ctor_get(v_fst_1695_, 0);
lean_inc(v_pre_1696_);
if (lean_obj_tag(v_pre_1696_) == 1)
{
lean_object* v_pre_1697_; 
v_pre_1697_ = lean_ctor_get(v_pre_1696_, 0);
if (lean_obj_tag(v_pre_1697_) == 0)
{
lean_object* v_snd_1698_; lean_object* v_str_1699_; lean_object* v_str_1700_; uint8_t v___x_1701_; 
v_snd_1698_ = lean_ctor_get(v___x_1694_, 1);
lean_inc(v_snd_1698_);
lean_dec_ref(v___x_1694_);
v_str_1699_ = lean_ctor_get(v_fst_1695_, 1);
lean_inc_ref(v_str_1699_);
lean_dec_ref_known(v_fst_1695_, 2);
v_str_1700_ = lean_ctor_get(v_pre_1696_, 1);
lean_inc_ref(v_str_1700_);
lean_dec_ref_known(v_pre_1696_, 2);
v___x_1701_ = lean_string_dec_eq(v_str_1700_, v___x_1576_);
if (v___x_1701_ == 0)
{
lean_object* v___x_1702_; uint8_t v___x_1703_; 
lean_del_object(v___x_1241_);
v___x_1702_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82));
v___x_1703_ = lean_string_dec_eq(v_str_1700_, v___x_1702_);
if (v___x_1703_ == 0)
{
lean_object* v___x_1704_; uint8_t v___x_1705_; 
v___x_1704_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79));
v___x_1705_ = lean_string_dec_eq(v_str_1700_, v___x_1704_);
lean_dec_ref(v_str_1700_);
if (v___x_1705_ == 0)
{
lean_object* v___x_1706_; 
lean_dec_ref(v_str_1699_);
lean_dec(v_snd_1698_);
v___x_1706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1706_, 0, v_r_1597_);
return v___x_1706_;
}
else
{
lean_object* v___x_1707_; uint8_t v___x_1708_; 
v___x_1707_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__86));
v___x_1708_ = lean_string_dec_eq(v_str_1699_, v___x_1707_);
lean_dec_ref(v_str_1699_);
if (v___x_1708_ == 0)
{
lean_object* v___x_1709_; 
lean_dec(v_snd_1698_);
v___x_1709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1709_, 0, v_r_1597_);
return v___x_1709_;
}
else
{
lean_object* v___x_1710_; uint8_t v___x_1711_; 
v___x_1710_ = lean_array_get_size(v_snd_1698_);
v___x_1711_ = lean_nat_dec_eq(v___x_1710_, v___x_1591_);
if (v___x_1711_ == 0)
{
lean_object* v___x_1712_; 
lean_dec(v_snd_1698_);
v___x_1712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1712_, 0, v_r_1597_);
return v___x_1712_;
}
else
{
lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; 
v___x_1713_ = lean_array_fget(v_snd_1698_, v___x_1570_);
v___x_1714_ = lean_unsigned_to_nat(1u);
v___x_1715_ = lean_array_fget(v_snd_1698_, v___x_1714_);
lean_dec(v_snd_1698_);
v_n_1599_ = v___x_1713_;
v_x_1600_ = v___x_1715_;
goto v___jp_1598_;
}
}
}
}
else
{
lean_object* v___x_1716_; uint8_t v___x_1717_; 
lean_dec_ref(v_str_1700_);
v___x_1716_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__87));
v___x_1717_ = lean_string_dec_eq(v_str_1699_, v___x_1716_);
lean_dec_ref(v_str_1699_);
if (v___x_1717_ == 0)
{
lean_object* v___x_1718_; 
lean_dec(v_snd_1698_);
v___x_1718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1718_, 0, v_r_1597_);
return v___x_1718_;
}
else
{
lean_object* v___x_1719_; uint8_t v___x_1720_; 
v___x_1719_ = lean_array_get_size(v_snd_1698_);
v___x_1720_ = lean_nat_dec_eq(v___x_1719_, v___x_1591_);
if (v___x_1720_ == 0)
{
lean_object* v___x_1721_; 
lean_dec(v_snd_1698_);
v___x_1721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1721_, 0, v_r_1597_);
return v___x_1721_;
}
else
{
lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; 
v___x_1722_ = lean_array_fget(v_snd_1698_, v___x_1570_);
v___x_1723_ = lean_unsigned_to_nat(1u);
v___x_1724_ = lean_array_fget(v_snd_1698_, v___x_1723_);
lean_dec(v_snd_1698_);
v_n_1609_ = v___x_1722_;
v_i_1610_ = v___x_1724_;
goto v___jp_1608_;
}
}
}
}
else
{
lean_object* v___x_1725_; uint8_t v___x_1726_; 
lean_dec_ref(v_str_1700_);
v___x_1725_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88));
v___x_1726_ = lean_string_dec_eq(v_str_1699_, v___x_1725_);
lean_dec_ref(v_str_1699_);
if (v___x_1726_ == 0)
{
lean_object* v___x_1727_; 
lean_dec(v_snd_1698_);
lean_del_object(v___x_1241_);
v___x_1727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1727_, 0, v_r_1597_);
return v___x_1727_;
}
else
{
lean_object* v___x_1728_; lean_object* v___x_1729_; uint8_t v___x_1730_; 
v___x_1728_ = lean_array_get_size(v_snd_1698_);
v___x_1729_ = lean_unsigned_to_nat(1u);
v___x_1730_ = lean_nat_dec_eq(v___x_1728_, v___x_1729_);
if (v___x_1730_ == 0)
{
lean_object* v___x_1731_; 
lean_dec(v_snd_1698_);
lean_del_object(v___x_1241_);
v___x_1731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1731_, 0, v_r_1597_);
return v___x_1731_;
}
else
{
lean_object* v___x_1732_; 
v___x_1732_ = lean_array_fget(v_snd_1698_, v___x_1570_);
lean_dec(v_snd_1698_);
v_x_1619_ = v___x_1732_;
goto v___jp_1618_;
}
}
}
}
else
{
lean_object* v___x_1733_; 
lean_dec_ref_known(v_pre_1696_, 2);
lean_dec_ref_known(v_fst_1695_, 2);
lean_dec_ref(v___x_1694_);
lean_del_object(v___x_1241_);
v___x_1733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1733_, 0, v_r_1597_);
return v___x_1733_;
}
}
else
{
lean_object* v___x_1734_; 
lean_dec_ref_known(v_fst_1695_, 2);
lean_dec(v_pre_1696_);
lean_dec_ref(v___x_1694_);
lean_del_object(v___x_1241_);
v___x_1734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1734_, 0, v_r_1597_);
return v___x_1734_;
}
}
else
{
lean_object* v___x_1735_; 
lean_dec(v_fst_1695_);
lean_dec_ref(v___x_1694_);
lean_del_object(v___x_1241_);
v___x_1735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1735_, 0, v_r_1597_);
return v___x_1735_;
}
}
v___jp_1598_:
{
lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; uint8_t v___x_1604_; 
v___x_1601_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81));
v___x_1602_ = l_Lean_Expr_const___override(v___x_1601_, v_us_1574_);
v___x_1603_ = l_Lean_mkAppB(v___x_1602_, v_n_1599_, v_x_1600_);
v___x_1604_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_1603_, v_r_1597_);
if (v___x_1604_ == 0)
{
lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1605_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1605_, 0, v___x_1603_);
lean_ctor_set(v___x_1605_, 1, v_r_1597_);
v___x_1606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1606_, 0, v___x_1605_);
return v___x_1606_;
}
else
{
lean_object* v___x_1607_; 
lean_dec_ref(v___x_1603_);
v___x_1607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1607_, 0, v_r_1597_);
return v___x_1607_;
}
}
v___jp_1608_:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; uint8_t v___x_1614_; 
v___x_1611_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83));
v___x_1612_ = l_Lean_Expr_const___override(v___x_1611_, v_us_1574_);
v___x_1613_ = l_Lean_mkAppB(v___x_1612_, v_n_1609_, v_i_1610_);
v___x_1614_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_1613_, v_r_1597_);
if (v___x_1614_ == 0)
{
lean_object* v___x_1615_; lean_object* v___x_1616_; 
v___x_1615_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1615_, 0, v___x_1613_);
lean_ctor_set(v___x_1615_, 1, v_r_1597_);
v___x_1616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1616_, 0, v___x_1615_);
return v___x_1616_;
}
else
{
lean_object* v___x_1617_; 
lean_dec_ref(v___x_1613_);
v___x_1617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1617_, 0, v_r_1597_);
return v___x_1617_;
}
}
v___jp_1618_:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; uint8_t v___x_1623_; 
v___x_1620_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85));
v___x_1621_ = l_Lean_Expr_const___override(v___x_1620_, v_us_1574_);
lean_inc_ref(v_x_1619_);
v___x_1622_ = l_Lean_Expr_app___override(v___x_1621_, v_x_1619_);
v___x_1623_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_1622_, v_r_1597_);
if (v___x_1623_ == 0)
{
lean_object* v___x_1624_; 
v___x_1624_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1624_, 0, v___x_1622_);
lean_ctor_set(v___x_1624_, 1, v_r_1597_);
v___y_1578_ = v_x_1619_;
v___y_1579_ = v___x_1624_;
goto v___jp_1577_;
}
else
{
lean_dec_ref(v___x_1622_);
v___y_1578_ = v_x_1619_;
v___y_1579_ = v_r_1597_;
goto v___jp_1577_;
}
}
}
else
{
lean_dec(v_us_1574_);
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
goto v___jp_1223_;
}
}
v___jp_1577_:
{
lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; uint8_t v___x_1583_; 
v___x_1580_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76));
v___x_1581_ = l_Lean_Expr_const___override(v___x_1580_, v_us_1574_);
v___x_1582_ = l_Lean_Expr_app___override(v___x_1581_, v___y_1578_);
v___x_1583_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_1582_, v___y_1579_);
if (v___x_1583_ == 0)
{
lean_object* v___x_1585_; 
if (v_isShared_1242_ == 0)
{
lean_ctor_set_tag(v___x_1241_, 1);
lean_ctor_set(v___x_1241_, 1, v___y_1579_);
lean_ctor_set(v___x_1241_, 0, v___x_1582_);
v___x_1585_ = v___x_1241_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v___x_1582_);
lean_ctor_set(v_reuseFailAlloc_1587_, 1, v___y_1579_);
v___x_1585_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
lean_object* v___x_1586_; 
v___x_1586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1586_, 0, v___x_1585_);
return v___x_1586_;
}
}
else
{
lean_object* v___x_1588_; 
lean_dec_ref(v___x_1582_);
lean_del_object(v___x_1241_);
v___x_1588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1588_, 0, v___y_1579_);
return v___x_1588_;
}
}
}
else
{
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
goto v___jp_1223_;
}
}
else
{
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
goto v___jp_1223_;
}
}
else
{
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
goto v___jp_1223_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_1237_, 2);
lean_dec_ref_known(v_fst_1236_, 2);
lean_dec_ref(v___x_1235_);
goto v___jp_1223_;
}
}
case 0:
{
lean_object* v_snd_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1768_; 
v_snd_1738_ = lean_ctor_get(v___x_1235_, 1);
v_isSharedCheck_1768_ = !lean_is_exclusive(v___x_1235_);
if (v_isSharedCheck_1768_ == 0)
{
lean_object* v_unused_1769_; 
v_unused_1769_ = lean_ctor_get(v___x_1235_, 0);
lean_dec(v_unused_1769_);
v___x_1740_ = v___x_1235_;
v_isShared_1741_ = v_isSharedCheck_1768_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_snd_1738_);
lean_dec(v___x_1235_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1768_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v_str_1742_; lean_object* v___x_1743_; uint8_t v___x_1744_; 
v_str_1742_ = lean_ctor_get(v_fst_1236_, 1);
lean_inc_ref(v_str_1742_);
lean_dec_ref_known(v_fst_1236_, 2);
v___x_1743_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__91));
v___x_1744_ = lean_string_dec_eq(v_str_1742_, v___x_1743_);
lean_dec_ref(v_str_1742_);
if (v___x_1744_ == 0)
{
lean_del_object(v___x_1740_);
lean_dec(v_snd_1738_);
goto v___jp_1223_;
}
else
{
lean_object* v___x_1745_; lean_object* v___x_1746_; uint8_t v___x_1747_; 
v___x_1745_ = lean_array_get_size(v_snd_1738_);
v___x_1746_ = lean_unsigned_to_nat(5u);
v___x_1747_ = lean_nat_dec_eq(v___x_1745_, v___x_1746_);
if (v___x_1747_ == 0)
{
lean_del_object(v___x_1740_);
lean_dec(v_snd_1738_);
goto v___jp_1223_;
}
else
{
lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; uint8_t v___x_1752_; 
v___x_1748_ = lean_unsigned_to_nat(0u);
v___x_1749_ = lean_array_fget(v_snd_1738_, v___x_1748_);
v___x_1750_ = lean_box(0);
v___x_1751_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2);
v___x_1752_ = lean_expr_eqv(v___x_1749_, v___x_1751_);
if (v___x_1752_ == 0)
{
lean_object* v___x_1753_; 
lean_dec(v___x_1749_);
lean_del_object(v___x_1740_);
lean_dec(v_snd_1738_);
v___x_1753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1750_);
return v___x_1753_;
}
else
{
lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1765_; 
v___x_1754_ = lean_unsigned_to_nat(1u);
v___x_1755_ = lean_array_fget(v_snd_1738_, v___x_1754_);
v___x_1756_ = lean_unsigned_to_nat(2u);
v___x_1757_ = lean_array_fget(v_snd_1738_, v___x_1756_);
v___x_1758_ = lean_unsigned_to_nat(3u);
v___x_1759_ = lean_array_fget(v_snd_1738_, v___x_1758_);
v___x_1760_ = lean_unsigned_to_nat(4u);
v___x_1761_ = lean_array_fget(v_snd_1738_, v___x_1760_);
lean_dec(v_snd_1738_);
v___x_1762_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94);
v___x_1763_ = l_Lean_mkApp5(v___x_1762_, v___x_1749_, v___x_1755_, v___x_1757_, v___x_1759_, v___x_1761_);
if (v_isShared_1741_ == 0)
{
lean_ctor_set_tag(v___x_1740_, 1);
lean_ctor_set(v___x_1740_, 1, v___x_1750_);
lean_ctor_set(v___x_1740_, 0, v___x_1763_);
v___x_1765_ = v___x_1740_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v___x_1763_);
lean_ctor_set(v_reuseFailAlloc_1767_, 1, v___x_1750_);
v___x_1765_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
lean_object* v___x_1766_; 
v___x_1766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1766_, 0, v___x_1765_);
return v___x_1766_;
}
}
}
}
}
}
default: 
{
lean_dec_ref_known(v_fst_1236_, 2);
lean_dec_ref(v___x_1235_);
goto v___jp_1223_;
}
}
}
else
{
lean_dec(v_fst_1236_);
lean_dec_ref(v___x_1235_);
goto v___jp_1223_;
}
v___jp_1217_:
{
lean_object* v___x_1218_; lean_object* v___x_1219_; 
v___x_1218_ = lean_box(0);
v___x_1219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1218_);
return v___x_1219_;
}
v___jp_1220_:
{
lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1221_ = lean_box(0);
v___x_1222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1222_, 0, v___x_1221_);
return v___x_1222_;
}
v___jp_1223_:
{
lean_object* v___x_1224_; lean_object* v___x_1225_; 
v___x_1224_ = lean_box(0);
v___x_1225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1224_);
return v___x_1225_;
}
v___jp_1226_:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___x_1227_ = lean_box(0);
v___x_1228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1227_);
return v___x_1228_;
}
v___jp_1229_:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; 
v___x_1230_ = lean_box(0);
v___x_1231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1230_);
return v___x_1231_;
}
v___jp_1232_:
{
lean_object* v___x_1233_; lean_object* v___x_1234_; 
v___x_1233_ = lean_box(0);
v___x_1234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1233_);
return v___x_1234_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___boxed(lean_object* v_e_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_, lean_object* v_a_1774_, lean_object* v_a_1775_, lean_object* v_a_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg(v_e_1770_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_, v_a_1775_);
lean_dec(v_a_1775_);
lean_dec_ref(v_a_1774_);
lean_dec(v_a_1773_);
lean_dec_ref(v_a_1772_);
lean_dec_ref(v_a_1771_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom(lean_object* v_e_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, uint8_t v_a_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_, lean_object* v_a_1785_, lean_object* v_a_1786_, lean_object* v_a_1787_){
_start:
{
lean_object* v___x_1789_; 
v___x_1789_ = l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg(v_e_1778_, v_a_1781_, v_a_1784_, v_a_1785_, v_a_1786_, v_a_1787_);
return v___x_1789_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___boxed(lean_object* v_e_1790_, lean_object* v_a_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_, lean_object* v_a_1794_, lean_object* v_a_1795_, lean_object* v_a_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_){
_start:
{
uint8_t v_a_boxed_1801_; lean_object* v_res_1802_; 
v_a_boxed_1801_ = lean_unbox(v_a_1794_);
v_res_1802_ = l_Lean_Elab_Tactic_Omega_analyzeAtom(v_e_1790_, v_a_1791_, v_a_1792_, v_a_1793_, v_a_boxed_1801_, v_a_1795_, v_a_1796_, v_a_1797_, v_a_1798_, v_a_1799_);
lean_dec(v_a_1799_);
lean_dec_ref(v_a_1798_);
lean_dec(v_a_1797_);
lean_dec_ref(v_a_1796_);
lean_dec(v_a_1795_);
lean_dec_ref(v_a_1793_);
lean_dec(v_a_1792_);
lean_dec(v_a_1791_);
return v_res_1802_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg(lean_object* v_a_1803_, lean_object* v_x_1804_){
_start:
{
if (lean_obj_tag(v_x_1804_) == 0)
{
lean_object* v___x_1805_; 
v___x_1805_ = lean_box(0);
return v___x_1805_;
}
else
{
lean_object* v_key_1806_; lean_object* v_value_1807_; lean_object* v_tail_1808_; uint8_t v___x_1809_; 
v_key_1806_ = lean_ctor_get(v_x_1804_, 0);
v_value_1807_ = lean_ctor_get(v_x_1804_, 1);
v_tail_1808_ = lean_ctor_get(v_x_1804_, 2);
v___x_1809_ = lean_expr_eqv(v_key_1806_, v_a_1803_);
if (v___x_1809_ == 0)
{
v_x_1804_ = v_tail_1808_;
goto _start;
}
else
{
lean_object* v___x_1811_; 
lean_inc(v_value_1807_);
v___x_1811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1811_, 0, v_value_1807_);
return v___x_1811_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg___boxed(lean_object* v_a_1812_, lean_object* v_x_1813_){
_start:
{
lean_object* v_res_1814_; 
v_res_1814_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg(v_a_1812_, v_x_1813_);
lean_dec(v_x_1813_);
lean_dec_ref(v_a_1812_);
return v_res_1814_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg(lean_object* v_m_1815_, lean_object* v_a_1816_){
_start:
{
lean_object* v_buckets_1817_; lean_object* v___x_1818_; uint64_t v___x_1819_; uint64_t v___x_1820_; uint64_t v___x_1821_; uint64_t v_fold_1822_; uint64_t v___x_1823_; uint64_t v___x_1824_; uint64_t v___x_1825_; size_t v___x_1826_; size_t v___x_1827_; size_t v___x_1828_; size_t v___x_1829_; size_t v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; 
v_buckets_1817_ = lean_ctor_get(v_m_1815_, 1);
v___x_1818_ = lean_array_get_size(v_buckets_1817_);
v___x_1819_ = l_Lean_Expr_hash(v_a_1816_);
v___x_1820_ = 32ULL;
v___x_1821_ = lean_uint64_shift_right(v___x_1819_, v___x_1820_);
v_fold_1822_ = lean_uint64_xor(v___x_1819_, v___x_1821_);
v___x_1823_ = 16ULL;
v___x_1824_ = lean_uint64_shift_right(v_fold_1822_, v___x_1823_);
v___x_1825_ = lean_uint64_xor(v_fold_1822_, v___x_1824_);
v___x_1826_ = lean_uint64_to_usize(v___x_1825_);
v___x_1827_ = lean_usize_of_nat(v___x_1818_);
v___x_1828_ = ((size_t)1ULL);
v___x_1829_ = lean_usize_sub(v___x_1827_, v___x_1828_);
v___x_1830_ = lean_usize_land(v___x_1826_, v___x_1829_);
v___x_1831_ = lean_array_uget_borrowed(v_buckets_1817_, v___x_1830_);
v___x_1832_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg(v_a_1816_, v___x_1831_);
return v___x_1832_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg___boxed(lean_object* v_m_1833_, lean_object* v_a_1834_){
_start:
{
lean_object* v_res_1835_; 
v_res_1835_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg(v_m_1833_, v_a_1834_);
lean_dec_ref(v_a_1834_);
lean_dec_ref(v_m_1833_);
return v_res_1835_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg(lean_object* v_a_1836_, lean_object* v_x_1837_){
_start:
{
if (lean_obj_tag(v_x_1837_) == 0)
{
uint8_t v___x_1838_; 
v___x_1838_ = 0;
return v___x_1838_;
}
else
{
lean_object* v_key_1839_; lean_object* v_tail_1840_; uint8_t v___x_1841_; 
v_key_1839_ = lean_ctor_get(v_x_1837_, 0);
v_tail_1840_ = lean_ctor_get(v_x_1837_, 2);
v___x_1841_ = lean_expr_eqv(v_key_1839_, v_a_1836_);
if (v___x_1841_ == 0)
{
v_x_1837_ = v_tail_1840_;
goto _start;
}
else
{
return v___x_1841_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg___boxed(lean_object* v_a_1843_, lean_object* v_x_1844_){
_start:
{
uint8_t v_res_1845_; lean_object* v_r_1846_; 
v_res_1845_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg(v_a_1843_, v_x_1844_);
lean_dec(v_x_1844_);
lean_dec_ref(v_a_1843_);
v_r_1846_ = lean_box(v_res_1845_);
return v_r_1846_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9___redArg(lean_object* v_x_1847_, lean_object* v_x_1848_){
_start:
{
if (lean_obj_tag(v_x_1848_) == 0)
{
return v_x_1847_;
}
else
{
lean_object* v_key_1849_; lean_object* v_value_1850_; lean_object* v_tail_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1874_; 
v_key_1849_ = lean_ctor_get(v_x_1848_, 0);
v_value_1850_ = lean_ctor_get(v_x_1848_, 1);
v_tail_1851_ = lean_ctor_get(v_x_1848_, 2);
v_isSharedCheck_1874_ = !lean_is_exclusive(v_x_1848_);
if (v_isSharedCheck_1874_ == 0)
{
v___x_1853_ = v_x_1848_;
v_isShared_1854_ = v_isSharedCheck_1874_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_tail_1851_);
lean_inc(v_value_1850_);
lean_inc(v_key_1849_);
lean_dec(v_x_1848_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1874_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v___x_1855_; uint64_t v___x_1856_; uint64_t v___x_1857_; uint64_t v___x_1858_; uint64_t v_fold_1859_; uint64_t v___x_1860_; uint64_t v___x_1861_; uint64_t v___x_1862_; size_t v___x_1863_; size_t v___x_1864_; size_t v___x_1865_; size_t v___x_1866_; size_t v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1870_; 
v___x_1855_ = lean_array_get_size(v_x_1847_);
v___x_1856_ = l_Lean_Expr_hash(v_key_1849_);
v___x_1857_ = 32ULL;
v___x_1858_ = lean_uint64_shift_right(v___x_1856_, v___x_1857_);
v_fold_1859_ = lean_uint64_xor(v___x_1856_, v___x_1858_);
v___x_1860_ = 16ULL;
v___x_1861_ = lean_uint64_shift_right(v_fold_1859_, v___x_1860_);
v___x_1862_ = lean_uint64_xor(v_fold_1859_, v___x_1861_);
v___x_1863_ = lean_uint64_to_usize(v___x_1862_);
v___x_1864_ = lean_usize_of_nat(v___x_1855_);
v___x_1865_ = ((size_t)1ULL);
v___x_1866_ = lean_usize_sub(v___x_1864_, v___x_1865_);
v___x_1867_ = lean_usize_land(v___x_1863_, v___x_1866_);
v___x_1868_ = lean_array_uget_borrowed(v_x_1847_, v___x_1867_);
lean_inc(v___x_1868_);
if (v_isShared_1854_ == 0)
{
lean_ctor_set(v___x_1853_, 2, v___x_1868_);
v___x_1870_ = v___x_1853_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v_key_1849_);
lean_ctor_set(v_reuseFailAlloc_1873_, 1, v_value_1850_);
lean_ctor_set(v_reuseFailAlloc_1873_, 2, v___x_1868_);
v___x_1870_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
lean_object* v___x_1871_; 
v___x_1871_ = lean_array_uset(v_x_1847_, v___x_1867_, v___x_1870_);
v_x_1847_ = v___x_1871_;
v_x_1848_ = v_tail_1851_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4___redArg(lean_object* v_i_1875_, lean_object* v_source_1876_, lean_object* v_target_1877_){
_start:
{
lean_object* v___x_1878_; uint8_t v___x_1879_; 
v___x_1878_ = lean_array_get_size(v_source_1876_);
v___x_1879_ = lean_nat_dec_lt(v_i_1875_, v___x_1878_);
if (v___x_1879_ == 0)
{
lean_dec_ref(v_source_1876_);
lean_dec(v_i_1875_);
return v_target_1877_;
}
else
{
lean_object* v_es_1880_; lean_object* v___x_1881_; lean_object* v_source_1882_; lean_object* v_target_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; 
v_es_1880_ = lean_array_fget(v_source_1876_, v_i_1875_);
v___x_1881_ = lean_box(0);
v_source_1882_ = lean_array_fset(v_source_1876_, v_i_1875_, v___x_1881_);
v_target_1883_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9___redArg(v_target_1877_, v_es_1880_);
v___x_1884_ = lean_unsigned_to_nat(1u);
v___x_1885_ = lean_nat_add(v_i_1875_, v___x_1884_);
lean_dec(v_i_1875_);
v_i_1875_ = v___x_1885_;
v_source_1876_ = v_source_1882_;
v_target_1877_ = v_target_1883_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3___redArg(lean_object* v_data_1887_){
_start:
{
lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v_nbuckets_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; 
v___x_1888_ = lean_array_get_size(v_data_1887_);
v___x_1889_ = lean_unsigned_to_nat(2u);
v_nbuckets_1890_ = lean_nat_mul(v___x_1888_, v___x_1889_);
v___x_1891_ = lean_unsigned_to_nat(0u);
v___x_1892_ = lean_box(0);
v___x_1893_ = lean_mk_array(v_nbuckets_1890_, v___x_1892_);
v___x_1894_ = lean_array_propagate_mark(v_data_1887_, v___x_1893_);
v___x_1895_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4___redArg(v___x_1891_, v_data_1887_, v___x_1894_);
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4___redArg(lean_object* v_a_1896_, lean_object* v_b_1897_, lean_object* v_x_1898_){
_start:
{
if (lean_obj_tag(v_x_1898_) == 0)
{
lean_dec(v_b_1897_);
lean_dec_ref(v_a_1896_);
return v_x_1898_;
}
else
{
lean_object* v_key_1899_; lean_object* v_value_1900_; lean_object* v_tail_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1913_; 
v_key_1899_ = lean_ctor_get(v_x_1898_, 0);
v_value_1900_ = lean_ctor_get(v_x_1898_, 1);
v_tail_1901_ = lean_ctor_get(v_x_1898_, 2);
v_isSharedCheck_1913_ = !lean_is_exclusive(v_x_1898_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1903_ = v_x_1898_;
v_isShared_1904_ = v_isSharedCheck_1913_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_tail_1901_);
lean_inc(v_value_1900_);
lean_inc(v_key_1899_);
lean_dec(v_x_1898_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1913_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
uint8_t v___x_1905_; 
v___x_1905_ = lean_expr_eqv(v_key_1899_, v_a_1896_);
if (v___x_1905_ == 0)
{
lean_object* v___x_1906_; lean_object* v___x_1908_; 
v___x_1906_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4___redArg(v_a_1896_, v_b_1897_, v_tail_1901_);
if (v_isShared_1904_ == 0)
{
lean_ctor_set(v___x_1903_, 2, v___x_1906_);
v___x_1908_ = v___x_1903_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v_key_1899_);
lean_ctor_set(v_reuseFailAlloc_1909_, 1, v_value_1900_);
lean_ctor_set(v_reuseFailAlloc_1909_, 2, v___x_1906_);
v___x_1908_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
return v___x_1908_;
}
}
else
{
lean_object* v___x_1911_; 
lean_dec(v_value_1900_);
lean_dec(v_key_1899_);
if (v_isShared_1904_ == 0)
{
lean_ctor_set(v___x_1903_, 1, v_b_1897_);
lean_ctor_set(v___x_1903_, 0, v_a_1896_);
v___x_1911_ = v___x_1903_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v_a_1896_);
lean_ctor_set(v_reuseFailAlloc_1912_, 1, v_b_1897_);
lean_ctor_set(v_reuseFailAlloc_1912_, 2, v_tail_1901_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
return v___x_1911_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1___redArg(lean_object* v_m_1914_, lean_object* v_a_1915_, lean_object* v_b_1916_){
_start:
{
lean_object* v_size_1917_; lean_object* v_buckets_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1961_; 
v_size_1917_ = lean_ctor_get(v_m_1914_, 0);
v_buckets_1918_ = lean_ctor_get(v_m_1914_, 1);
v_isSharedCheck_1961_ = !lean_is_exclusive(v_m_1914_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1920_ = v_m_1914_;
v_isShared_1921_ = v_isSharedCheck_1961_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_buckets_1918_);
lean_inc(v_size_1917_);
lean_dec(v_m_1914_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_1961_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___x_1922_; uint64_t v___x_1923_; uint64_t v___x_1924_; uint64_t v___x_1925_; uint64_t v_fold_1926_; uint64_t v___x_1927_; uint64_t v___x_1928_; uint64_t v___x_1929_; size_t v___x_1930_; size_t v___x_1931_; size_t v___x_1932_; size_t v___x_1933_; size_t v___x_1934_; lean_object* v_bkt_1935_; uint8_t v___x_1936_; 
v___x_1922_ = lean_array_get_size(v_buckets_1918_);
v___x_1923_ = l_Lean_Expr_hash(v_a_1915_);
v___x_1924_ = 32ULL;
v___x_1925_ = lean_uint64_shift_right(v___x_1923_, v___x_1924_);
v_fold_1926_ = lean_uint64_xor(v___x_1923_, v___x_1925_);
v___x_1927_ = 16ULL;
v___x_1928_ = lean_uint64_shift_right(v_fold_1926_, v___x_1927_);
v___x_1929_ = lean_uint64_xor(v_fold_1926_, v___x_1928_);
v___x_1930_ = lean_uint64_to_usize(v___x_1929_);
v___x_1931_ = lean_usize_of_nat(v___x_1922_);
v___x_1932_ = ((size_t)1ULL);
v___x_1933_ = lean_usize_sub(v___x_1931_, v___x_1932_);
v___x_1934_ = lean_usize_land(v___x_1930_, v___x_1933_);
v_bkt_1935_ = lean_array_uget_borrowed(v_buckets_1918_, v___x_1934_);
v___x_1936_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg(v_a_1915_, v_bkt_1935_);
if (v___x_1936_ == 0)
{
lean_object* v___x_1937_; lean_object* v_size_x27_1938_; lean_object* v___x_1939_; lean_object* v_buckets_x27_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; uint8_t v___x_1946_; 
v___x_1937_ = lean_unsigned_to_nat(1u);
v_size_x27_1938_ = lean_nat_add(v_size_1917_, v___x_1937_);
lean_dec(v_size_1917_);
lean_inc(v_bkt_1935_);
v___x_1939_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1939_, 0, v_a_1915_);
lean_ctor_set(v___x_1939_, 1, v_b_1916_);
lean_ctor_set(v___x_1939_, 2, v_bkt_1935_);
v_buckets_x27_1940_ = lean_array_uset(v_buckets_1918_, v___x_1934_, v___x_1939_);
v___x_1941_ = lean_unsigned_to_nat(4u);
v___x_1942_ = lean_nat_mul(v_size_x27_1938_, v___x_1941_);
v___x_1943_ = lean_unsigned_to_nat(3u);
v___x_1944_ = lean_nat_div(v___x_1942_, v___x_1943_);
lean_dec(v___x_1942_);
v___x_1945_ = lean_array_get_size(v_buckets_x27_1940_);
v___x_1946_ = lean_nat_dec_le(v___x_1944_, v___x_1945_);
lean_dec(v___x_1944_);
if (v___x_1946_ == 0)
{
lean_object* v_val_1947_; lean_object* v___x_1949_; 
v_val_1947_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3___redArg(v_buckets_x27_1940_);
if (v_isShared_1921_ == 0)
{
lean_ctor_set(v___x_1920_, 1, v_val_1947_);
lean_ctor_set(v___x_1920_, 0, v_size_x27_1938_);
v___x_1949_ = v___x_1920_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_size_x27_1938_);
lean_ctor_set(v_reuseFailAlloc_1950_, 1, v_val_1947_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
else
{
lean_object* v___x_1952_; 
if (v_isShared_1921_ == 0)
{
lean_ctor_set(v___x_1920_, 1, v_buckets_x27_1940_);
lean_ctor_set(v___x_1920_, 0, v_size_x27_1938_);
v___x_1952_ = v___x_1920_;
goto v_reusejp_1951_;
}
else
{
lean_object* v_reuseFailAlloc_1953_; 
v_reuseFailAlloc_1953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1953_, 0, v_size_x27_1938_);
lean_ctor_set(v_reuseFailAlloc_1953_, 1, v_buckets_x27_1940_);
v___x_1952_ = v_reuseFailAlloc_1953_;
goto v_reusejp_1951_;
}
v_reusejp_1951_:
{
return v___x_1952_;
}
}
}
else
{
lean_object* v___x_1954_; lean_object* v_buckets_x27_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1959_; 
lean_inc(v_bkt_1935_);
v___x_1954_ = lean_box(0);
v_buckets_x27_1955_ = lean_array_uset(v_buckets_1918_, v___x_1934_, v___x_1954_);
v___x_1956_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4___redArg(v_a_1915_, v_b_1916_, v_bkt_1935_);
v___x_1957_ = lean_array_uset(v_buckets_x27_1955_, v___x_1934_, v___x_1956_);
if (v_isShared_1921_ == 0)
{
lean_ctor_set(v___x_1920_, 1, v___x_1957_);
v___x_1959_ = v___x_1920_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v_size_1917_);
lean_ctor_set(v_reuseFailAlloc_1960_, 1, v___x_1957_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
return v___x_1959_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8(lean_object* v_msgData_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_){
_start:
{
lean_object* v___x_1968_; lean_object* v_env_1969_; lean_object* v___x_1970_; lean_object* v_toCold_1971_; lean_object* v_mctx_1972_; lean_object* v_lctx_1973_; lean_object* v_options_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; 
v___x_1968_ = lean_st_ref_get(v___y_1966_);
v_env_1969_ = lean_ctor_get(v___x_1968_, 0);
lean_inc_ref(v_env_1969_);
lean_dec(v___x_1968_);
v___x_1970_ = lean_st_ref_get(v___y_1964_);
v_toCold_1971_ = lean_ctor_get(v___y_1965_, 0);
v_mctx_1972_ = lean_ctor_get(v___x_1970_, 0);
lean_inc_ref(v_mctx_1972_);
lean_dec(v___x_1970_);
v_lctx_1973_ = lean_ctor_get(v___y_1963_, 2);
v_options_1974_ = lean_ctor_get(v_toCold_1971_, 2);
lean_inc_ref(v_options_1974_);
lean_inc_ref(v_lctx_1973_);
v___x_1975_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1975_, 0, v_env_1969_);
lean_ctor_set(v___x_1975_, 1, v_mctx_1972_);
lean_ctor_set(v___x_1975_, 2, v_lctx_1973_);
lean_ctor_set(v___x_1975_, 3, v_options_1974_);
v___x_1976_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1976_, 0, v___x_1975_);
lean_ctor_set(v___x_1976_, 1, v_msgData_1962_);
v___x_1977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1977_, 0, v___x_1976_);
return v___x_1977_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8___boxed(lean_object* v_msgData_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_){
_start:
{
lean_object* v_res_1984_; 
v_res_1984_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8(v_msgData_1978_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_);
lean_dec(v___y_1982_);
lean_dec_ref(v___y_1981_);
lean_dec(v___y_1980_);
lean_dec_ref(v___y_1979_);
return v_res_1984_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_1985_; double v___x_1986_; 
v___x_1985_ = lean_unsigned_to_nat(0u);
v___x_1986_ = lean_float_of_nat(v___x_1985_);
return v___x_1986_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(lean_object* v_cls_1990_, lean_object* v_msg_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_){
_start:
{
lean_object* v_ref_1997_; lean_object* v___x_1998_; lean_object* v_a_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2043_; 
v_ref_1997_ = lean_ctor_get(v___y_1994_, 2);
v___x_1998_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8(v_msg_1991_, v___y_1992_, v___y_1993_, v___y_1994_, v___y_1995_);
v_a_1999_ = lean_ctor_get(v___x_1998_, 0);
v_isSharedCheck_2043_ = !lean_is_exclusive(v___x_1998_);
if (v_isSharedCheck_2043_ == 0)
{
v___x_2001_ = v___x_1998_;
v_isShared_2002_ = v_isSharedCheck_2043_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_a_1999_);
lean_dec(v___x_1998_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2043_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v___x_2003_; lean_object* v_traceState_2004_; lean_object* v_env_2005_; lean_object* v_nextMacroScope_2006_; lean_object* v_ngen_2007_; lean_object* v_auxDeclNGen_2008_; lean_object* v_cache_2009_; lean_object* v_messages_2010_; lean_object* v_infoState_2011_; lean_object* v_snapshotTasks_2012_; lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2042_; 
v___x_2003_ = lean_st_ref_take(v___y_1995_);
v_traceState_2004_ = lean_ctor_get(v___x_2003_, 4);
v_env_2005_ = lean_ctor_get(v___x_2003_, 0);
v_nextMacroScope_2006_ = lean_ctor_get(v___x_2003_, 1);
v_ngen_2007_ = lean_ctor_get(v___x_2003_, 2);
v_auxDeclNGen_2008_ = lean_ctor_get(v___x_2003_, 3);
v_cache_2009_ = lean_ctor_get(v___x_2003_, 5);
v_messages_2010_ = lean_ctor_get(v___x_2003_, 6);
v_infoState_2011_ = lean_ctor_get(v___x_2003_, 7);
v_snapshotTasks_2012_ = lean_ctor_get(v___x_2003_, 8);
v_isSharedCheck_2042_ = !lean_is_exclusive(v___x_2003_);
if (v_isSharedCheck_2042_ == 0)
{
v___x_2014_ = v___x_2003_;
v_isShared_2015_ = v_isSharedCheck_2042_;
goto v_resetjp_2013_;
}
else
{
lean_inc(v_snapshotTasks_2012_);
lean_inc(v_infoState_2011_);
lean_inc(v_messages_2010_);
lean_inc(v_cache_2009_);
lean_inc(v_traceState_2004_);
lean_inc(v_auxDeclNGen_2008_);
lean_inc(v_ngen_2007_);
lean_inc(v_nextMacroScope_2006_);
lean_inc(v_env_2005_);
lean_dec(v___x_2003_);
v___x_2014_ = lean_box(0);
v_isShared_2015_ = v_isSharedCheck_2042_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
uint64_t v_tid_2016_; lean_object* v_traces_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2041_; 
v_tid_2016_ = lean_ctor_get_uint64(v_traceState_2004_, sizeof(void*)*1);
v_traces_2017_ = lean_ctor_get(v_traceState_2004_, 0);
v_isSharedCheck_2041_ = !lean_is_exclusive(v_traceState_2004_);
if (v_isSharedCheck_2041_ == 0)
{
v___x_2019_ = v_traceState_2004_;
v_isShared_2020_ = v_isSharedCheck_2041_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_traces_2017_);
lean_dec(v_traceState_2004_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2041_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2021_; lean_object* v___x_2022_; double v___x_2023_; uint8_t v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2032_; 
v___x_2021_ = lean_box(0);
v___x_2022_ = lean_box(0);
v___x_2023_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0);
v___x_2024_ = 0;
v___x_2025_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__1));
v___x_2026_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2026_, 0, v_cls_1990_);
lean_ctor_set(v___x_2026_, 1, v___x_2022_);
lean_ctor_set(v___x_2026_, 2, v___x_2025_);
lean_ctor_set_float(v___x_2026_, sizeof(void*)*3, v___x_2023_);
lean_ctor_set_float(v___x_2026_, sizeof(void*)*3 + 8, v___x_2023_);
lean_ctor_set_uint8(v___x_2026_, sizeof(void*)*3 + 16, v___x_2024_);
v___x_2027_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__2));
v___x_2028_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2028_, 0, v___x_2026_);
lean_ctor_set(v___x_2028_, 1, v_a_1999_);
lean_ctor_set(v___x_2028_, 2, v___x_2027_);
lean_inc(v_ref_1997_);
v___x_2029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2029_, 0, v_ref_1997_);
lean_ctor_set(v___x_2029_, 1, v___x_2028_);
v___x_2030_ = l_Lean_PersistentArray_push___redArg(v_traces_2017_, v___x_2029_);
if (v_isShared_2020_ == 0)
{
lean_ctor_set(v___x_2019_, 0, v___x_2030_);
v___x_2032_ = v___x_2019_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2040_; 
v_reuseFailAlloc_2040_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2040_, 0, v___x_2030_);
lean_ctor_set_uint64(v_reuseFailAlloc_2040_, sizeof(void*)*1, v_tid_2016_);
v___x_2032_ = v_reuseFailAlloc_2040_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
lean_object* v___x_2034_; 
if (v_isShared_2015_ == 0)
{
lean_ctor_set(v___x_2014_, 4, v___x_2032_);
v___x_2034_ = v___x_2014_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v_env_2005_);
lean_ctor_set(v_reuseFailAlloc_2039_, 1, v_nextMacroScope_2006_);
lean_ctor_set(v_reuseFailAlloc_2039_, 2, v_ngen_2007_);
lean_ctor_set(v_reuseFailAlloc_2039_, 3, v_auxDeclNGen_2008_);
lean_ctor_set(v_reuseFailAlloc_2039_, 4, v___x_2032_);
lean_ctor_set(v_reuseFailAlloc_2039_, 5, v_cache_2009_);
lean_ctor_set(v_reuseFailAlloc_2039_, 6, v_messages_2010_);
lean_ctor_set(v_reuseFailAlloc_2039_, 7, v_infoState_2011_);
lean_ctor_set(v_reuseFailAlloc_2039_, 8, v_snapshotTasks_2012_);
v___x_2034_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
lean_object* v___x_2035_; lean_object* v___x_2037_; 
v___x_2035_ = lean_st_ref_put(v___y_1995_, v___x_2034_);
if (v_isShared_2002_ == 0)
{
lean_ctor_set(v___x_2001_, 0, v___x_2021_);
v___x_2037_ = v___x_2001_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v___x_2021_);
v___x_2037_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
return v___x_2037_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___boxed(lean_object* v_cls_2044_, lean_object* v_msg_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_){
_start:
{
lean_object* v_res_2051_; 
v_res_2051_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(v_cls_2044_, v_msg_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_);
lean_dec(v___y_2049_);
lean_dec_ref(v___y_2048_);
lean_dec(v___y_2047_);
lean_dec_ref(v___y_2046_);
return v_res_2051_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg(lean_object* v_x_2052_, lean_object* v_x_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_){
_start:
{
if (lean_obj_tag(v_x_2052_) == 0)
{
lean_object* v___x_2059_; lean_object* v___x_2060_; 
v___x_2059_ = l_List_reverse___redArg(v_x_2053_);
v___x_2060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2060_, 0, v___x_2059_);
return v___x_2060_;
}
else
{
lean_object* v_head_2061_; lean_object* v_tail_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2080_; 
v_head_2061_ = lean_ctor_get(v_x_2052_, 0);
v_tail_2062_ = lean_ctor_get(v_x_2052_, 1);
v_isSharedCheck_2080_ = !lean_is_exclusive(v_x_2052_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2064_ = v_x_2052_;
v_isShared_2065_ = v_isSharedCheck_2080_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_tail_2062_);
lean_inc(v_head_2061_);
lean_dec(v_x_2052_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2080_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2066_; 
lean_inc(v___y_2057_);
lean_inc_ref(v___y_2056_);
lean_inc(v___y_2055_);
lean_inc_ref(v___y_2054_);
v___x_2066_ = lean_infer_type(v_head_2061_, v___y_2054_, v___y_2055_, v___y_2056_, v___y_2057_);
if (lean_obj_tag(v___x_2066_) == 0)
{
lean_object* v_a_2067_; lean_object* v___x_2069_; 
v_a_2067_ = lean_ctor_get(v___x_2066_, 0);
lean_inc(v_a_2067_);
lean_dec_ref_known(v___x_2066_, 1);
if (v_isShared_2065_ == 0)
{
lean_ctor_set(v___x_2064_, 1, v_x_2053_);
lean_ctor_set(v___x_2064_, 0, v_a_2067_);
v___x_2069_ = v___x_2064_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v_a_2067_);
lean_ctor_set(v_reuseFailAlloc_2071_, 1, v_x_2053_);
v___x_2069_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
v_x_2052_ = v_tail_2062_;
v_x_2053_ = v___x_2069_;
goto _start;
}
}
else
{
lean_object* v_a_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2079_; 
lean_del_object(v___x_2064_);
lean_dec(v_tail_2062_);
lean_dec(v_x_2053_);
v_a_2072_ = lean_ctor_get(v___x_2066_, 0);
v_isSharedCheck_2079_ = !lean_is_exclusive(v___x_2066_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2074_ = v___x_2066_;
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_a_2072_);
lean_dec(v___x_2066_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
lean_object* v___x_2077_; 
if (v_isShared_2075_ == 0)
{
v___x_2077_ = v___x_2074_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2078_; 
v_reuseFailAlloc_2078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2078_, 0, v_a_2072_);
v___x_2077_ = v_reuseFailAlloc_2078_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
return v___x_2077_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg___boxed(lean_object* v_x_2081_, lean_object* v_x_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_){
_start:
{
lean_object* v_res_2088_; 
v_res_2088_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg(v_x_2081_, v_x_2082_, v___y_2083_, v___y_2084_, v___y_2085_, v___y_2086_);
lean_dec(v___y_2086_);
lean_dec_ref(v___y_2085_);
lean_dec(v___y_2084_);
lean_dec_ref(v___y_2083_);
return v_res_2088_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__3(lean_object* v_a_2089_, lean_object* v_a_2090_){
_start:
{
if (lean_obj_tag(v_a_2089_) == 0)
{
lean_object* v___x_2091_; 
v___x_2091_ = l_List_reverse___redArg(v_a_2090_);
return v___x_2091_;
}
else
{
lean_object* v_head_2092_; lean_object* v_tail_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2102_; 
v_head_2092_ = lean_ctor_get(v_a_2089_, 0);
v_tail_2093_ = lean_ctor_get(v_a_2089_, 1);
v_isSharedCheck_2102_ = !lean_is_exclusive(v_a_2089_);
if (v_isSharedCheck_2102_ == 0)
{
v___x_2095_ = v_a_2089_;
v_isShared_2096_ = v_isSharedCheck_2102_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_tail_2093_);
lean_inc(v_head_2092_);
lean_dec(v_a_2089_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2102_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2097_; lean_object* v___x_2099_; 
v___x_2097_ = l_Lean_MessageData_ofExpr(v_head_2092_);
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 1, v_a_2090_);
lean_ctor_set(v___x_2095_, 0, v___x_2097_);
v___x_2099_ = v___x_2095_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v___x_2097_);
lean_ctor_set(v_reuseFailAlloc_2101_, 1, v_a_2090_);
v___x_2099_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
v_a_2089_ = v_tail_2093_;
v_a_2090_ = v___x_2099_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_lookup___closed__4(void){
_start:
{
lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2109_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_lookup___closed__1));
v___x_2110_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_lookup___closed__3));
v___x_2111_ = l_Lean_Name_append(v___x_2110_, v___x_2109_);
return v___x_2111_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_lookup___closed__6(void){
_start:
{
lean_object* v___x_2113_; lean_object* v___x_2114_; 
v___x_2113_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_lookup___closed__5));
v___x_2114_ = l_Lean_stringToMessageData(v___x_2113_);
return v___x_2114_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_lookup___closed__8(void){
_start:
{
lean_object* v___x_2116_; lean_object* v___x_2117_; 
v___x_2116_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_lookup___closed__7));
v___x_2117_ = l_Lean_stringToMessageData(v___x_2116_);
return v___x_2117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_lookup(lean_object* v_e_2118_, lean_object* v_a_2119_, lean_object* v_a_2120_, lean_object* v_a_2121_, uint8_t v_a_2122_, lean_object* v_a_2123_, lean_object* v_a_2124_, lean_object* v_a_2125_, lean_object* v_a_2126_, lean_object* v_a_2127_){
_start:
{
lean_object* v___x_2129_; lean_object* v___x_2130_; 
v___x_2129_ = lean_st_ref_get(v_a_2120_);
v___x_2130_ = l_Lean_Meta_Canonicalizer_canon(v_e_2118_, v_a_2122_, v_a_2123_, v_a_2124_, v_a_2125_, v_a_2126_, v_a_2127_);
if (lean_obj_tag(v___x_2130_) == 0)
{
lean_object* v_a_2131_; lean_object* v___x_2133_; uint8_t v_isShared_2134_; uint8_t v_isSharedCheck_2229_; 
v_a_2131_ = lean_ctor_get(v___x_2130_, 0);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2130_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2133_ = v___x_2130_;
v_isShared_2134_ = v_isSharedCheck_2229_;
goto v_resetjp_2132_;
}
else
{
lean_inc(v_a_2131_);
lean_dec(v___x_2130_);
v___x_2133_ = lean_box(0);
v_isShared_2134_ = v_isSharedCheck_2229_;
goto v_resetjp_2132_;
}
v_resetjp_2132_:
{
lean_object* v___y_2136_; lean_object* v___y_2137_; lean_object* v___x_2147_; 
v___x_2147_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg(v___x_2129_, v_a_2131_);
lean_dec(v___x_2129_);
if (lean_obj_tag(v___x_2147_) == 0)
{
lean_object* v_toCold_2148_; lean_object* v_options_2149_; lean_object* v_inheritedTraceOptions_2150_; uint8_t v_hasTrace_2151_; lean_object* v___x_2152_; lean_object* v___y_2154_; lean_object* v___y_2155_; lean_object* v___y_2156_; uint8_t v___y_2157_; lean_object* v___y_2158_; lean_object* v___y_2159_; lean_object* v___y_2160_; lean_object* v___y_2161_; lean_object* v___y_2162_; 
v_toCold_2148_ = lean_ctor_get(v_a_2126_, 0);
v_options_2149_ = lean_ctor_get(v_toCold_2148_, 2);
v_inheritedTraceOptions_2150_ = lean_ctor_get(v_toCold_2148_, 11);
v_hasTrace_2151_ = lean_ctor_get_uint8(v_options_2149_, sizeof(void*)*1);
v___x_2152_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_lookup___closed__1));
if (v_hasTrace_2151_ == 0)
{
v___y_2154_ = v_a_2119_;
v___y_2155_ = v_a_2120_;
v___y_2156_ = v_a_2121_;
v___y_2157_ = v_a_2122_;
v___y_2158_ = v_a_2123_;
v___y_2159_ = v_a_2124_;
v___y_2160_ = v_a_2125_;
v___y_2161_ = v_a_2126_;
v___y_2162_ = v_a_2127_;
goto v___jp_2153_;
}
else
{
lean_object* v___x_2205_; uint8_t v___x_2206_; 
v___x_2205_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_lookup___closed__4, &l_Lean_Elab_Tactic_Omega_lookup___closed__4_once, _init_l_Lean_Elab_Tactic_Omega_lookup___closed__4);
v___x_2206_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2150_, v_options_2149_, v___x_2205_);
if (v___x_2206_ == 0)
{
v___y_2154_ = v_a_2119_;
v___y_2155_ = v_a_2120_;
v___y_2156_ = v_a_2121_;
v___y_2157_ = v_a_2122_;
v___y_2158_ = v_a_2123_;
v___y_2159_ = v_a_2124_;
v___y_2160_ = v_a_2125_;
v___y_2161_ = v_a_2126_;
v___y_2162_ = v_a_2127_;
goto v___jp_2153_;
}
else
{
lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___x_2207_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_lookup___closed__8, &l_Lean_Elab_Tactic_Omega_lookup___closed__8_once, _init_l_Lean_Elab_Tactic_Omega_lookup___closed__8);
lean_inc(v_a_2131_);
v___x_2208_ = l_Lean_MessageData_ofExpr(v_a_2131_);
v___x_2209_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2209_, 0, v___x_2207_);
lean_ctor_set(v___x_2209_, 1, v___x_2208_);
v___x_2210_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(v___x_2152_, v___x_2209_, v_a_2124_, v_a_2125_, v_a_2126_, v_a_2127_);
if (lean_obj_tag(v___x_2210_) == 0)
{
lean_dec_ref_known(v___x_2210_, 1);
v___y_2154_ = v_a_2119_;
v___y_2155_ = v_a_2120_;
v___y_2156_ = v_a_2121_;
v___y_2157_ = v_a_2122_;
v___y_2158_ = v_a_2123_;
v___y_2159_ = v_a_2124_;
v___y_2160_ = v_a_2125_;
v___y_2161_ = v_a_2126_;
v___y_2162_ = v_a_2127_;
goto v___jp_2153_;
}
else
{
lean_object* v_a_2211_; lean_object* v___x_2213_; uint8_t v_isShared_2214_; uint8_t v_isSharedCheck_2218_; 
lean_del_object(v___x_2133_);
lean_dec(v_a_2131_);
v_a_2211_ = lean_ctor_get(v___x_2210_, 0);
v_isSharedCheck_2218_ = !lean_is_exclusive(v___x_2210_);
if (v_isSharedCheck_2218_ == 0)
{
v___x_2213_ = v___x_2210_;
v_isShared_2214_ = v_isSharedCheck_2218_;
goto v_resetjp_2212_;
}
else
{
lean_inc(v_a_2211_);
lean_dec(v___x_2210_);
v___x_2213_ = lean_box(0);
v_isShared_2214_ = v_isSharedCheck_2218_;
goto v_resetjp_2212_;
}
v_resetjp_2212_:
{
lean_object* v___x_2216_; 
if (v_isShared_2214_ == 0)
{
v___x_2216_ = v___x_2213_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v_a_2211_);
v___x_2216_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
return v___x_2216_;
}
}
}
}
}
v___jp_2153_:
{
lean_object* v___x_2163_; 
lean_inc(v_a_2131_);
v___x_2163_ = l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg(v_a_2131_, v___y_2156_, v___y_2159_, v___y_2160_, v___y_2161_, v___y_2162_);
if (lean_obj_tag(v___x_2163_) == 0)
{
lean_object* v_toCold_2164_; lean_object* v_options_2165_; uint8_t v_hasTrace_2166_; 
v_toCold_2164_ = lean_ctor_get(v___y_2161_, 0);
v_options_2165_ = lean_ctor_get(v_toCold_2164_, 2);
v_hasTrace_2166_ = lean_ctor_get_uint8(v_options_2165_, sizeof(void*)*1);
if (v_hasTrace_2166_ == 0)
{
lean_object* v_a_2167_; 
v_a_2167_ = lean_ctor_get(v___x_2163_, 0);
lean_inc(v_a_2167_);
lean_dec_ref_known(v___x_2163_, 1);
v___y_2136_ = v_a_2167_;
v___y_2137_ = v___y_2155_;
goto v___jp_2135_;
}
else
{
lean_object* v_a_2168_; lean_object* v_inheritedTraceOptions_2169_; lean_object* v___x_2170_; uint8_t v___x_2171_; 
v_a_2168_ = lean_ctor_get(v___x_2163_, 0);
lean_inc(v_a_2168_);
lean_dec_ref_known(v___x_2163_, 1);
v_inheritedTraceOptions_2169_ = lean_ctor_get(v_toCold_2164_, 11);
v___x_2170_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_lookup___closed__4, &l_Lean_Elab_Tactic_Omega_lookup___closed__4_once, _init_l_Lean_Elab_Tactic_Omega_lookup___closed__4);
v___x_2171_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2169_, v_options_2165_, v___x_2170_);
if (v___x_2171_ == 0)
{
v___y_2136_ = v_a_2168_;
v___y_2137_ = v___y_2155_;
goto v___jp_2135_;
}
else
{
uint8_t v___x_2172_; 
v___x_2172_ = l_List_isEmpty___redArg(v_a_2168_);
if (v___x_2172_ == 0)
{
if (v___x_2171_ == 0)
{
v___y_2136_ = v_a_2168_;
v___y_2137_ = v___y_2155_;
goto v___jp_2135_;
}
else
{
lean_object* v___x_2173_; lean_object* v___x_2174_; 
v___x_2173_ = lean_box(0);
lean_inc(v_a_2168_);
v___x_2174_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg(v_a_2168_, v___x_2173_, v___y_2159_, v___y_2160_, v___y_2161_, v___y_2162_);
if (lean_obj_tag(v___x_2174_) == 0)
{
lean_object* v_a_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; 
v_a_2175_ = lean_ctor_get(v___x_2174_, 0);
lean_inc(v_a_2175_);
lean_dec_ref_known(v___x_2174_, 1);
v___x_2176_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_lookup___closed__6, &l_Lean_Elab_Tactic_Omega_lookup___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_lookup___closed__6);
v___x_2177_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__3(v_a_2175_, v___x_2173_);
v___x_2178_ = l_Lean_MessageData_ofList(v___x_2177_);
v___x_2179_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2179_, 0, v___x_2176_);
lean_ctor_set(v___x_2179_, 1, v___x_2178_);
v___x_2180_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(v___x_2152_, v___x_2179_, v___y_2159_, v___y_2160_, v___y_2161_, v___y_2162_);
if (lean_obj_tag(v___x_2180_) == 0)
{
lean_dec_ref_known(v___x_2180_, 1);
v___y_2136_ = v_a_2168_;
v___y_2137_ = v___y_2155_;
goto v___jp_2135_;
}
else
{
lean_object* v_a_2181_; lean_object* v___x_2183_; uint8_t v_isShared_2184_; uint8_t v_isSharedCheck_2188_; 
lean_dec(v_a_2168_);
lean_del_object(v___x_2133_);
lean_dec(v_a_2131_);
v_a_2181_ = lean_ctor_get(v___x_2180_, 0);
v_isSharedCheck_2188_ = !lean_is_exclusive(v___x_2180_);
if (v_isSharedCheck_2188_ == 0)
{
v___x_2183_ = v___x_2180_;
v_isShared_2184_ = v_isSharedCheck_2188_;
goto v_resetjp_2182_;
}
else
{
lean_inc(v_a_2181_);
lean_dec(v___x_2180_);
v___x_2183_ = lean_box(0);
v_isShared_2184_ = v_isSharedCheck_2188_;
goto v_resetjp_2182_;
}
v_resetjp_2182_:
{
lean_object* v___x_2186_; 
if (v_isShared_2184_ == 0)
{
v___x_2186_ = v___x_2183_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v_a_2181_);
v___x_2186_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
return v___x_2186_;
}
}
}
}
else
{
lean_object* v_a_2189_; lean_object* v___x_2191_; uint8_t v_isShared_2192_; uint8_t v_isSharedCheck_2196_; 
lean_dec(v_a_2168_);
lean_del_object(v___x_2133_);
lean_dec(v_a_2131_);
v_a_2189_ = lean_ctor_get(v___x_2174_, 0);
v_isSharedCheck_2196_ = !lean_is_exclusive(v___x_2174_);
if (v_isSharedCheck_2196_ == 0)
{
v___x_2191_ = v___x_2174_;
v_isShared_2192_ = v_isSharedCheck_2196_;
goto v_resetjp_2190_;
}
else
{
lean_inc(v_a_2189_);
lean_dec(v___x_2174_);
v___x_2191_ = lean_box(0);
v_isShared_2192_ = v_isSharedCheck_2196_;
goto v_resetjp_2190_;
}
v_resetjp_2190_:
{
lean_object* v___x_2194_; 
if (v_isShared_2192_ == 0)
{
v___x_2194_ = v___x_2191_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v_a_2189_);
v___x_2194_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
return v___x_2194_;
}
}
}
}
}
else
{
v___y_2136_ = v_a_2168_;
v___y_2137_ = v___y_2155_;
goto v___jp_2135_;
}
}
}
}
else
{
lean_object* v_a_2197_; lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2204_; 
lean_del_object(v___x_2133_);
lean_dec(v_a_2131_);
v_a_2197_ = lean_ctor_get(v___x_2163_, 0);
v_isSharedCheck_2204_ = !lean_is_exclusive(v___x_2163_);
if (v_isSharedCheck_2204_ == 0)
{
v___x_2199_ = v___x_2163_;
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
else
{
lean_inc(v_a_2197_);
lean_dec(v___x_2163_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2204_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
lean_object* v___x_2202_; 
if (v_isShared_2200_ == 0)
{
v___x_2202_ = v___x_2199_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v_a_2197_);
v___x_2202_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
return v___x_2202_;
}
}
}
}
}
else
{
lean_object* v_val_2219_; lean_object* v___x_2221_; uint8_t v_isShared_2222_; uint8_t v_isSharedCheck_2228_; 
lean_del_object(v___x_2133_);
lean_dec(v_a_2131_);
v_val_2219_ = lean_ctor_get(v___x_2147_, 0);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2147_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2221_ = v___x_2147_;
v_isShared_2222_ = v_isSharedCheck_2228_;
goto v_resetjp_2220_;
}
else
{
lean_inc(v_val_2219_);
lean_dec(v___x_2147_);
v___x_2221_ = lean_box(0);
v_isShared_2222_ = v_isSharedCheck_2228_;
goto v_resetjp_2220_;
}
v_resetjp_2220_:
{
lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2226_; 
v___x_2223_ = lean_box(0);
v___x_2224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2224_, 0, v_val_2219_);
lean_ctor_set(v___x_2224_, 1, v___x_2223_);
if (v_isShared_2222_ == 0)
{
lean_ctor_set_tag(v___x_2221_, 0);
lean_ctor_set(v___x_2221_, 0, v___x_2224_);
v___x_2226_ = v___x_2221_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v___x_2224_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
}
v___jp_2135_:
{
lean_object* v___x_2138_; lean_object* v_size_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2145_; 
v___x_2138_ = lean_st_ref_take(v___y_2137_);
v_size_2139_ = lean_ctor_get(v___x_2138_, 0);
lean_inc_n(v_size_2139_, 2);
v___x_2140_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1___redArg(v___x_2138_, v_a_2131_, v_size_2139_);
v___x_2141_ = lean_st_ref_put(v___y_2137_, v___x_2140_);
v___x_2142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2142_, 0, v___y_2136_);
v___x_2143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2143_, 0, v_size_2139_);
lean_ctor_set(v___x_2143_, 1, v___x_2142_);
if (v_isShared_2134_ == 0)
{
lean_ctor_set(v___x_2133_, 0, v___x_2143_);
v___x_2145_ = v___x_2133_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v___x_2143_);
v___x_2145_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
return v___x_2145_;
}
}
}
}
else
{
lean_object* v_a_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2237_; 
lean_dec(v___x_2129_);
v_a_2230_ = lean_ctor_get(v___x_2130_, 0);
v_isSharedCheck_2237_ = !lean_is_exclusive(v___x_2130_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2232_ = v___x_2130_;
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_a_2230_);
lean_dec(v___x_2130_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2235_; 
if (v_isShared_2233_ == 0)
{
v___x_2235_ = v___x_2232_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v_a_2230_);
v___x_2235_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
return v___x_2235_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_lookup___boxed(lean_object* v_e_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_, lean_object* v_a_2243_, lean_object* v_a_2244_, lean_object* v_a_2245_, lean_object* v_a_2246_, lean_object* v_a_2247_, lean_object* v_a_2248_){
_start:
{
uint8_t v_a_boxed_2249_; lean_object* v_res_2250_; 
v_a_boxed_2249_ = lean_unbox(v_a_2242_);
v_res_2250_ = l_Lean_Elab_Tactic_Omega_lookup(v_e_2238_, v_a_2239_, v_a_2240_, v_a_2241_, v_a_boxed_2249_, v_a_2243_, v_a_2244_, v_a_2245_, v_a_2246_, v_a_2247_);
lean_dec(v_a_2247_);
lean_dec_ref(v_a_2246_);
lean_dec(v_a_2245_);
lean_dec_ref(v_a_2244_);
lean_dec(v_a_2243_);
lean_dec_ref(v_a_2241_);
lean_dec(v_a_2240_);
lean_dec(v_a_2239_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0(lean_object* v_00_u03b2_2251_, lean_object* v_m_2252_, lean_object* v_a_2253_){
_start:
{
lean_object* v___x_2254_; 
v___x_2254_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg(v_m_2252_, v_a_2253_);
return v___x_2254_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___boxed(lean_object* v_00_u03b2_2255_, lean_object* v_m_2256_, lean_object* v_a_2257_){
_start:
{
lean_object* v_res_2258_; 
v_res_2258_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0(v_00_u03b2_2255_, v_m_2256_, v_a_2257_);
lean_dec_ref(v_a_2257_);
lean_dec_ref(v_m_2256_);
return v_res_2258_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1(lean_object* v_00_u03b2_2259_, lean_object* v_m_2260_, lean_object* v_a_2261_, lean_object* v_b_2262_){
_start:
{
lean_object* v___x_2263_; 
v___x_2263_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1___redArg(v_m_2260_, v_a_2261_, v_b_2262_);
return v___x_2263_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2(lean_object* v_x_2264_, lean_object* v_x_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, uint8_t v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_){
_start:
{
lean_object* v___x_2276_; 
v___x_2276_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg(v_x_2264_, v_x_2265_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_);
return v___x_2276_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___boxed(lean_object* v_x_2277_, lean_object* v_x_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_){
_start:
{
uint8_t v___y_33893__boxed_2289_; lean_object* v_res_2290_; 
v___y_33893__boxed_2289_ = lean_unbox(v___y_2282_);
v_res_2290_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2(v_x_2277_, v_x_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_33893__boxed_2289_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_);
lean_dec(v___y_2287_);
lean_dec_ref(v___y_2286_);
lean_dec(v___y_2285_);
lean_dec_ref(v___y_2284_);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2281_);
lean_dec(v___y_2280_);
lean_dec(v___y_2279_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4(lean_object* v_cls_2291_, lean_object* v_msg_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, uint8_t v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_){
_start:
{
lean_object* v___x_2303_; 
v___x_2303_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(v_cls_2291_, v_msg_2292_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_);
return v___x_2303_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___boxed(lean_object* v_cls_2304_, lean_object* v_msg_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_){
_start:
{
uint8_t v___y_33929__boxed_2316_; lean_object* v_res_2317_; 
v___y_33929__boxed_2316_ = lean_unbox(v___y_2309_);
v_res_2317_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4(v_cls_2304_, v_msg_2305_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_33929__boxed_2316_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_);
lean_dec(v___y_2314_);
lean_dec_ref(v___y_2313_);
lean_dec(v___y_2312_);
lean_dec_ref(v___y_2311_);
lean_dec(v___y_2310_);
lean_dec_ref(v___y_2308_);
lean_dec(v___y_2307_);
lean_dec(v___y_2306_);
return v_res_2317_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0(lean_object* v_00_u03b2_2318_, lean_object* v_a_2319_, lean_object* v_x_2320_){
_start:
{
lean_object* v___x_2321_; 
v___x_2321_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg(v_a_2319_, v_x_2320_);
return v___x_2321_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2322_, lean_object* v_a_2323_, lean_object* v_x_2324_){
_start:
{
lean_object* v_res_2325_; 
v_res_2325_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0(v_00_u03b2_2322_, v_a_2323_, v_x_2324_);
lean_dec(v_x_2324_);
lean_dec_ref(v_a_2323_);
return v_res_2325_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2(lean_object* v_00_u03b2_2326_, lean_object* v_a_2327_, lean_object* v_x_2328_){
_start:
{
uint8_t v___x_2329_; 
v___x_2329_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg(v_a_2327_, v_x_2328_);
return v___x_2329_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2330_, lean_object* v_a_2331_, lean_object* v_x_2332_){
_start:
{
uint8_t v_res_2333_; lean_object* v_r_2334_; 
v_res_2333_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2(v_00_u03b2_2330_, v_a_2331_, v_x_2332_);
lean_dec(v_x_2332_);
lean_dec_ref(v_a_2331_);
v_r_2334_ = lean_box(v_res_2333_);
return v_r_2334_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3(lean_object* v_00_u03b2_2335_, lean_object* v_data_2336_){
_start:
{
lean_object* v___x_2337_; 
v___x_2337_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3___redArg(v_data_2336_);
return v___x_2337_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4(lean_object* v_00_u03b2_2338_, lean_object* v_a_2339_, lean_object* v_b_2340_, lean_object* v_x_2341_){
_start:
{
lean_object* v___x_2342_; 
v___x_2342_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4___redArg(v_a_2339_, v_b_2340_, v_x_2341_);
return v___x_2342_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_2343_, lean_object* v_i_2344_, lean_object* v_source_2345_, lean_object* v_target_2346_){
_start:
{
lean_object* v___x_2347_; 
v___x_2347_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4___redArg(v_i_2344_, v_source_2345_, v_target_2346_);
return v___x_2347_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9(lean_object* v_00_u03b2_2348_, lean_object* v_x_2349_, lean_object* v_x_2350_){
_start:
{
lean_object* v___x_2351_; 
v___x_2351_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9___redArg(v_x_2349_, v_x_2350_);
return v___x_2351_;
}
}
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Canonicalizer(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Omega_OmegaM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Canonicalizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Omega_OmegaM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Canonicalizer(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Omega_OmegaM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Canonicalizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Omega_OmegaM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Omega_OmegaM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Omega_OmegaM(builtin);
}
#ifdef __cplusplus
}
#endif

// Lean compiler output
// Module: Lean.Elab.Tactic.Omega.Core
// Imports: public import Lean.Elab.Tactic.Omega.OmegaM public import Lean.Elab.Tactic.Omega.MinNatAbs
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
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Omega_IntList_get(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_List_zipWithAll___at___00Lean_Omega_IntList_combo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Omega_Constraint_combo(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Omega_Constraint_scale(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_Lean_instToExprInt_mkNat(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecideProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Omega_tidy_x3f(lean_object*);
lean_object* l_Lean_Omega_tidy(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_Omega_Constraint_isImpossible(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t l_Lean_Omega_Constraint_isExact(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(lean_object*);
lean_object* l_String_Slice_slice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_String_Slice_posGE___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Omega_instBEqConstraint_beq(lean_object*, lean_object*);
lean_object* l_Lean_Omega_Constraint_exact(lean_object*);
lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_thunk(lean_object*);
lean_object* l_Int_instDecidableEq___boxed(lean_object*, lean_object*);
uint8_t l_instDecidableEqList___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Omega_Constraint_combine(lean_object*, lean_object*);
uint8_t l_Lean_Omega_instDecidableEqConstraint_decEq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_Tactic_Omega_List_minNatAbs(lean_object*);
lean_object* l_Lean_Elab_Tactic_Omega_List_maxNatAbs(lean_object*);
lean_object* l_Lean_Elab_Tactic_Omega_lookup(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Omega_bmod__coeffs(lean_object*, lean_object*, lean_object*);
lean_object* l_Int_bmod(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Int_sign(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_paren(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkSorry(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toString___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Int_repr___boxed(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_Lean_instToExprInt;
lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instToStringString___lam__0___boxed(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__0_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "omega"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__0_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__0_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__1_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__0_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(107, 155, 144, 136, 132, 122, 189, 157)}};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__1_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__1_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__2_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__2_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__3_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__3_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__3_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__6_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__6_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__7_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__7_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__7_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__8_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__8_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__9_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__9_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__9_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Omega"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__12_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__12_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__13_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Core"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__13_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__13_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__14_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__14_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__15_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__15_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__16_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__16_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__17_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__17_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__18_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__18_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__19_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__19_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__20_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__20_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__20_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__21_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__21_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__22_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__22_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__22_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__23_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__23_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__24_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__24_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__25_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__25_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__26_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__26_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__27_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__27_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__28_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__28_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__29_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__29_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__30_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__30_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__30_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__31_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__31_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__32_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__32_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__32_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__33_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__33_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__34_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__34_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "LinearCombo"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(157, 132, 214, 18, 187, 72, 22, 121)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(105, 33, 22, 173, 105, 76, 89, 153)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(90, 150, 134, 113, 145, 38, 173, 251)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__9_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__10;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__15_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(98, 170, 59, 223, 79, 132, 139, 119)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__15_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__19_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__19_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__21_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__20_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__21_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__22;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instNegInt"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__25 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__25_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__25_value),LEAN_SCALAR_PTR_LITERAL(217, 109, 233, 1, 211, 122, 77, 88)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__0;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(157, 132, 214, 18, 187, 72, 22, 121)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Constraint"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 192, 152, 239, 193, 179, 196, 197)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 129, 254, 203, 24, 254, 72, 35)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(149, 114, 34, 228, 75, 195, 143, 131)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7;
static const lean_string_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "some"};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(89, 148, 40, 55, 221, 242, 231, 67)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__9_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 192, 152, 239, 193, 179, 196, 197)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorIdx___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_assumption_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_assumption_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_assumption_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidy_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidy_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidy_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combine_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combine_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combine_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combo_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combo_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmod_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmod_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmod_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidy_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0_value;
static const lean_string_object l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__1 = (const lean_object*)&l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__1_value;
static lean_once_cell_t l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__2;
static lean_once_cell_t l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__3;
static lean_once_cell_t l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__4;
static lean_once_cell_t l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__5;
static lean_once_cell_t l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__6;
static const lean_ctor_object l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__7 = (const lean_object*)&l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "• "};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\n  "};
static const lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0 = (const lean_object*)&l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__0 = (const lean_object*)&l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__0_value;
static const lean_string_object l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1 = (const lean_object*)&l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1_value;
static const lean_string_object l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2 = (const lean_object*)&l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ∈ "};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = ": assumption "};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 7, .m_data = "(-∞, ∞)"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 5, .m_data = "(-∞, "};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 4, .m_data = ", ∞)"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "∅"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = ": tidying up:\n"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = ": combination of:\n"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__11_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " * x + "};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__12_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " * y combo of:\n"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__13_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = ": bmod with m="};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__14_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " and i="};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__15_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_toString___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " of:\n"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_toString___closed__16_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_instToString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "tidy_sat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 191, 70, 188, 16, 136, 82, 137)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidyProof(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidyProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "combine_sat'"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 192, 152, 239, 193, 179, 196, 197)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 94, 145, 248, 63, 179, 150, 35)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combineProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combineProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "combo_sat'"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(174, 91, 1, 2, 53, 174, 185, 82)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_comboProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_comboProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__1_value),LEAN_SCALAR_PTR_LITERAL(109, 14, 90, 172, 72, 170, 136, 101)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__4_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__6;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instLENat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__7_value),LEAN_SCALAR_PTR_LITERAL(211, 47, 64, 46, 87, 101, 57, 105)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__9;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Coeffs"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "length"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__12_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__10_value),LEAN_SCALAR_PTR_LITERAL(200, 12, 56, 206, 160, 32, 217, 148)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__12_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__11_value),LEAN_SCALAR_PTR_LITERAL(170, 70, 58, 212, 39, 249, 136, 90)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__12_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__13;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "get"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__15_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__15_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__10_value),LEAN_SCALAR_PTR_LITERAL(200, 12, 56, 206, 160, 32, 217, 148)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__15_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__14_value),LEAN_SCALAR_PTR_LITERAL(90, 92, 99, 234, 53, 138, 153, 24)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__15_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__16;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "bmod_div_term"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__17_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__18_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__18_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__17_value),LEAN_SCALAR_PTR_LITERAL(146, 160, 30, 167, 226, 78, 110, 197)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__18_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__19;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "bmod_sat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__21_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__21_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__20_value),LEAN_SCALAR_PTR_LITERAL(53, 80, 238, 64, 134, 240, 94, 90)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__21_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__22;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__1;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Fact_instToString___lam__0(lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Fact_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Omega_Fact_instToString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Fact_instToString___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Fact_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Omega_Fact_instToString = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Fact_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Fact_tidy(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Fact_combo(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__9_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__2_value;
static const lean_array_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__9_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__4_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__6_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticRfl"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__9_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__8_value),LEAN_SCALAR_PTR_LITERAL(201, 188, 173, 198, 169, 252, 183, 45)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rfl"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__11;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__12;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__13;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__14;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__15;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__16;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__17;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__18;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__19;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam;
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Omega_Problem_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "impossible"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__5_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__6_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__1_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__2_value)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__8_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__3_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__4_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__5_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__6_value)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__9_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__7_value)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "trivial"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_repr___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__1_value)} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__0_value)} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "isImpossible"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 192, 152, 239, 193, 179, 196, 197)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(102, 130, 136, 130, 117, 192, 112, 247)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__2;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__4_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__6;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "not_sat'_of_isImpossible"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 192, 152, 239, 193, 179, 196, 197)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__7_value),LEAN_SCALAR_PTR_LITERAL(98, 38, 67, 93, 24, 197, 229, 14)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_insertConstraint___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_List_foldl___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__0(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_insertConstraint(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addConstraint(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_Problem_selectEquality_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_selectEquality_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_selectEquality_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_selectEquality(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_selectEquality___boxed(lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_replayEliminations(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_x3f_go___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findIdx_x3f_go___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Invalid constraint, expected an equation."};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "When solving hard equality, new atom had been seen before!"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "When solving hard equality, there were unexpected new facts!"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEquality(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEquality___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEqualities(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEqualities___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "addInequality_sat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 192, 152, 239, 193, 179, 196, 197)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(83, 20, 9, 160, 52, 15, 198, 221)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "addEquality_sat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 192, 152, 239, 193, 179, 196, 197)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(88, 42, 95, 243, 198, 248, 249, 159)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEquality(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_addInequalities_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequalities(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_addEqualities_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEqualities(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_instInhabitedFourierMotzkinData_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instInhabitedFourierMotzkinData_default___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instInhabitedFourierMotzkinData_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instInhabitedFourierMotzkinData_default = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instInhabitedFourierMotzkinData_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instInhabitedFourierMotzkinData = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instInhabitedFourierMotzkinData_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__1(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Fourier-Motzkin elimination data for variable "};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 14, .m_data = "• irrelevant: "};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 15, .m_data = "• lowerBounds: "};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 15, .m_data = "• upperBounds: "};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__1_value)} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToString___closed__1_value)} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__1_value),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__2_value)} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___closed__3_value;
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_size___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_exact(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_exact___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__0;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Selected variable "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__1_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__2;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__3;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__4 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__4_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__1;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__1_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__value)} };
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "Selecting variable to eliminate from (idx, size, exact) triples:\n"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkin(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkin___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_elimination___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Running Fourier-Motzkin elimination on:\n"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_elimination___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_elimination___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_elimination___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_elimination___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Omega_Problem_runOmega___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Running omega on:\n"};
static const lean_object* l_Lean_Elab_Tactic_Omega_Problem_runOmega___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_Problem_runOmega___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_Problem_runOmega___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_Problem_runOmega___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_runOmega(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_elimination(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_elimination___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_runOmega___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__2_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_box(0);
v___x_5_ = l_unsafeCast___redArg(v___x_4_);
return v___x_5_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_7_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__3_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_8_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__2_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__2_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__2_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_9_ = l_Lean_Name_str___override(v___x_8_, v___x_7_);
return v___x_9_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__6_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_12_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__4_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_13_ = l_Lean_Name_str___override(v___x_12_, v___x_11_);
return v___x_13_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__8_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_15_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__7_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_16_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__6_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__6_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__6_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_17_ = l_Lean_Name_str___override(v___x_16_, v___x_15_);
return v___x_17_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_19_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__9_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_20_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__8_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__8_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__8_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_21_ = l_Lean_Name_str___override(v___x_20_, v___x_19_);
return v___x_21_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__12_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_23_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_24_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__10_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_25_ = l_Lean_Name_str___override(v___x_24_, v___x_23_);
return v___x_25_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__14_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__13_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_28_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__12_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__12_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__12_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_29_ = l_Lean_Name_str___override(v___x_28_, v___x_27_);
return v___x_29_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__15_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_30_ = lean_unsigned_to_nat(0u);
v___x_31_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__14_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__14_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__14_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_32_ = l_Lean_Name_num___override(v___x_31_, v___x_30_);
return v___x_32_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__16_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_33_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_34_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__15_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__15_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__15_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_35_ = l_Lean_Name_str___override(v___x_34_, v___x_33_);
return v___x_35_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__17_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_36_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__7_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_37_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__16_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__16_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__16_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_38_ = l_Lean_Name_str___override(v___x_37_, v___x_36_);
return v___x_38_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__18_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_39_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__9_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_40_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__17_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__17_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__17_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_41_ = l_Lean_Name_str___override(v___x_40_, v___x_39_);
return v___x_41_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__19_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_43_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__18_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__18_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__18_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_44_ = l_Lean_Name_str___override(v___x_43_, v___x_42_);
return v___x_44_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__21_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_46_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__20_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_47_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__19_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__19_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__19_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_48_ = l_Lean_Name_str___override(v___x_47_, v___x_46_);
return v___x_48_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__23_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_50_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__22_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_51_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__21_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__21_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__21_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_52_ = l_Lean_Name_str___override(v___x_51_, v___x_50_);
return v___x_52_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__24_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__5_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_54_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__23_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__23_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__23_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_55_ = l_Lean_Name_str___override(v___x_54_, v___x_53_);
return v___x_55_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__25_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_56_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__7_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_57_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__24_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__24_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__24_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_58_ = l_Lean_Name_str___override(v___x_57_, v___x_56_);
return v___x_58_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__26_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_59_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__9_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_60_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__25_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__25_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__25_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_61_ = l_Lean_Name_str___override(v___x_60_, v___x_59_);
return v___x_61_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__27_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_62_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__11_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_63_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__26_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__26_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__26_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_64_ = l_Lean_Name_str___override(v___x_63_, v___x_62_);
return v___x_64_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__28_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_65_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__13_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_66_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__27_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__27_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__27_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_67_ = l_Lean_Name_str___override(v___x_66_, v___x_65_);
return v___x_67_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__29_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_68_ = lean_unsigned_to_nat(3193685152u);
v___x_69_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__28_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__28_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__28_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_70_ = l_Lean_Name_num___override(v___x_69_, v___x_68_);
return v___x_70_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__31_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_72_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__30_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_73_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__29_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__29_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__29_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_74_ = l_Lean_Name_str___override(v___x_73_, v___x_72_);
return v___x_74_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__33_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_76_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__32_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_77_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__31_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__31_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__31_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_78_ = l_Lean_Name_str___override(v___x_77_, v___x_76_);
return v___x_78_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__34_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_79_ = lean_unsigned_to_nat(2u);
v___x_80_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__33_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__33_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__33_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_81_ = l_Lean_Name_num___override(v___x_80_, v___x_79_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_83_; uint8_t v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_83_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__1_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_84_ = 0;
v___x_85_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__34_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__34_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__34_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_86_ = l_Lean_registerTraceClass(v___x_83_, v___x_84_, v___x_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2____boxed(lean_object* v_a_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_();
return v_res_88_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__3(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_96_ = lean_box(0);
v___x_97_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__2));
v___x_98_ = l_Lean_Expr_const___override(v___x_97_, v___x_96_);
return v___x_98_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v_type_104_; 
v___x_102_ = lean_box(0);
v___x_103_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__5));
v_type_104_ = l_Lean_Expr_const___override(v___x_103_, v___x_102_);
return v_type_104_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__10(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = lean_box(0);
v___x_111_ = l_unsafeCast___redArg(v___x_110_);
return v___x_111_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11(void){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_112_ = lean_box(0);
v___x_113_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__10);
v___x_114_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_114_, 0, v___x_113_);
lean_ctor_set(v___x_114_, 1, v___x_112_);
return v___x_114_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_115_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11);
v___x_116_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__9));
v___x_117_ = l_Lean_mkConst(v___x_116_, v___x_115_);
return v___x_117_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13(void){
_start:
{
lean_object* v_type_118_; lean_object* v___x_119_; lean_object* v_nil_120_; 
v_type_118_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v___x_119_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__12);
v_nil_120_ = l_Lean_Expr_app___override(v___x_119_, v_type_118_);
return v_nil_120_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_125_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11);
v___x_126_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__15));
v___x_127_ = l_Lean_mkConst(v___x_126_, v___x_125_);
return v___x_127_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17(void){
_start:
{
lean_object* v_type_128_; lean_object* v___x_129_; lean_object* v_cons_130_; 
v_type_128_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v___x_129_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__16);
v_cons_130_ = l_Lean_Expr_app___override(v___x_129_, v_type_128_);
return v_cons_130_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18(void){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_131_ = lean_unsigned_to_nat(0u);
v___x_132_ = lean_nat_to_int(v___x_131_);
return v___x_132_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__22(void){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_138_ = lean_unsigned_to_nat(0u);
v___x_139_ = l_Lean_Level_ofNat(v___x_138_);
return v___x_139_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_140_ = lean_box(0);
v___x_141_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__22, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__22_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__22);
v___x_142_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
lean_ctor_set(v___x_142_, 1, v___x_140_);
return v___x_142_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_143_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__23);
v___x_144_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__21));
v___x_145_ = l_Lean_Expr_const___override(v___x_144_, v___x_143_);
return v___x_145_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27(void){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_150_ = lean_box(0);
v___x_151_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__26));
v___x_152_ = l_Lean_Expr_const___override(v___x_151_, v___x_150_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0(lean_object* v___x_153_, lean_object* v_lc_154_){
_start:
{
lean_object* v_const_155_; lean_object* v_coeffs_156_; lean_object* v___x_157_; lean_object* v___y_159_; lean_object* v___x_165_; uint8_t v___x_166_; 
v_const_155_ = lean_ctor_get(v_lc_154_, 0);
lean_inc(v_const_155_);
v_coeffs_156_ = lean_ctor_get(v_lc_154_, 1);
lean_inc(v_coeffs_156_);
lean_dec_ref(v_lc_154_);
v___x_157_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__3, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__3);
v___x_165_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_166_ = lean_int_dec_le(v___x_165_, v_const_155_);
if (v___x_166_ == 0)
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_167_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24);
v___x_168_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v___x_169_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27);
v___x_170_ = lean_int_neg(v_const_155_);
lean_dec(v_const_155_);
v___x_171_ = l_Int_toNat(v___x_170_);
lean_dec(v___x_170_);
v___x_172_ = l_Lean_instToExprInt_mkNat(v___x_171_);
v___x_173_ = l_Lean_mkApp3(v___x_167_, v___x_168_, v___x_169_, v___x_172_);
v___y_159_ = v___x_173_;
goto v___jp_158_;
}
else
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = l_Int_toNat(v_const_155_);
lean_dec(v_const_155_);
v___x_175_ = l_Lean_instToExprInt_mkNat(v___x_174_);
v___y_159_ = v___x_175_;
goto v___jp_158_;
}
v___jp_158_:
{
lean_object* v_nil_160_; lean_object* v___x_161_; lean_object* v_cons_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v_nil_160_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13);
v___x_161_ = l_Lean_Expr_app___override(v___x_157_, v___y_159_);
v_cons_162_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_163_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux(lean_box(0), v___x_153_, v_nil_160_, v_cons_162_, v_coeffs_156_);
v___x_164_ = l_Lean_Expr_app___override(v___x_161_, v___x_163_);
return v___x_164_;
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__0(void){
_start:
{
lean_object* v___x_176_; lean_object* v___f_177_; 
v___x_176_ = l_Lean_instToExprInt;
v___f_177_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0), 2, 1);
lean_closure_set(v___f_177_, 0, v___x_176_);
return v___f_177_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__2(void){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_182_ = lean_box(0);
v___x_183_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__1));
v___x_184_ = l_Lean_Expr_const___override(v___x_183_, v___x_182_);
return v___x_184_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__3(void){
_start:
{
lean_object* v___x_185_; lean_object* v___f_186_; lean_object* v___x_187_; 
v___x_185_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__2, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__2);
v___f_186_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__0, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__0_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__0);
v___x_187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_187_, 0, v___f_186_);
lean_ctor_set(v___x_187_, 1, v___x_185_);
return v___x_187_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo(void){
_start:
{
lean_object* v___x_188_; 
v___x_188_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__3, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__3_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___closed__3);
return v___x_188_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2(void){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_195_ = lean_box(0);
v___x_196_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__1));
v___x_197_ = l_Lean_Expr_const___override(v___x_196_, v___x_195_);
return v___x_197_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6(void){
_start:
{
lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_203_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11);
v___x_204_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__5));
v___x_205_ = l_Lean_mkConst(v___x_204_, v___x_203_);
return v___x_205_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7(void){
_start:
{
lean_object* v_type_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v_type_206_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v___x_207_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6);
v___x_208_ = l_Lean_Expr_app___override(v___x_207_, v_type_206_);
return v___x_208_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10(void){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_213_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11);
v___x_214_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__9));
v___x_215_ = l_Lean_mkConst(v___x_214_, v___x_213_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0(lean_object* v_s_216_){
_start:
{
lean_object* v_lowerBound_217_; lean_object* v_upperBound_218_; lean_object* v___x_219_; lean_object* v_type_220_; lean_object* v___y_222_; lean_object* v___y_223_; lean_object* v___y_224_; lean_object* v___y_228_; 
v_lowerBound_217_ = lean_ctor_get(v_s_216_, 0);
v_upperBound_218_ = lean_ctor_get(v_s_216_, 1);
v___x_219_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2);
v_type_220_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
if (lean_obj_tag(v_lowerBound_217_) == 0)
{
lean_object* v___x_244_; 
v___x_244_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___y_228_ = v___x_244_;
goto v___jp_227_;
}
else
{
lean_object* v_val_245_; lean_object* v___x_246_; lean_object* v___y_248_; lean_object* v___x_250_; uint8_t v___x_251_; 
v_val_245_ = lean_ctor_get(v_lowerBound_217_, 0);
v___x_246_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_250_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_251_ = lean_int_dec_le(v___x_250_, v_val_245_);
if (v___x_251_ == 0)
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_252_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24);
v___x_253_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27);
v___x_254_ = lean_int_neg(v_val_245_);
v___x_255_ = l_Int_toNat(v___x_254_);
lean_dec(v___x_254_);
v___x_256_ = l_Lean_instToExprInt_mkNat(v___x_255_);
v___x_257_ = l_Lean_mkApp3(v___x_252_, v_type_220_, v___x_253_, v___x_256_);
v___y_248_ = v___x_257_;
goto v___jp_247_;
}
else
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = l_Int_toNat(v_val_245_);
v___x_259_ = l_Lean_instToExprInt_mkNat(v___x_258_);
v___y_248_ = v___x_259_;
goto v___jp_247_;
}
v___jp_247_:
{
lean_object* v___x_249_; 
v___x_249_ = l_Lean_mkAppB(v___x_246_, v_type_220_, v___y_248_);
v___y_228_ = v___x_249_;
goto v___jp_227_;
}
}
v___jp_221_:
{
lean_object* v___x_225_; lean_object* v___x_226_; 
lean_inc_ref(v___y_222_);
v___x_225_ = l_Lean_mkAppB(v___y_222_, v_type_220_, v___y_224_);
v___x_226_ = l_Lean_Expr_app___override(v___y_223_, v___x_225_);
return v___x_226_;
}
v___jp_227_:
{
lean_object* v___x_229_; 
v___x_229_ = l_Lean_Expr_app___override(v___x_219_, v___y_228_);
if (lean_obj_tag(v_upperBound_218_) == 0)
{
lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_230_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___x_231_ = l_Lean_Expr_app___override(v___x_229_, v___x_230_);
return v___x_231_;
}
else
{
lean_object* v_val_232_; lean_object* v___x_233_; lean_object* v___x_234_; uint8_t v___x_235_; 
v_val_232_ = lean_ctor_get(v_upperBound_218_, 0);
v___x_233_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_234_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_235_ = lean_int_dec_le(v___x_234_, v_val_232_);
if (v___x_235_ == 0)
{
lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_236_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24);
v___x_237_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27);
v___x_238_ = lean_int_neg(v_val_232_);
v___x_239_ = l_Int_toNat(v___x_238_);
lean_dec(v___x_238_);
v___x_240_ = l_Lean_instToExprInt_mkNat(v___x_239_);
v___x_241_ = l_Lean_mkApp3(v___x_236_, v_type_220_, v___x_237_, v___x_240_);
v___y_222_ = v___x_233_;
v___y_223_ = v___x_229_;
v___y_224_ = v___x_241_;
goto v___jp_221_;
}
else
{
lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_242_ = l_Int_toNat(v_val_232_);
v___x_243_ = l_Lean_instToExprInt_mkNat(v___x_242_);
v___y_222_ = v___x_233_;
v___y_223_ = v___x_229_;
v___y_224_ = v___x_243_;
goto v___jp_221_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___boxed(lean_object* v_s_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0(v_s_260_);
lean_dec_ref(v_s_260_);
return v_res_261_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__2(void){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_267_ = lean_box(0);
v___x_268_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__1));
v___x_269_ = l_Lean_Expr_const___override(v___x_268_, v___x_267_);
return v___x_269_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__3(void){
_start:
{
lean_object* v___x_270_; lean_object* v___f_271_; lean_object* v___x_272_; 
v___x_270_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__2, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__2);
v___f_271_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__0));
v___x_272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_272_, 0, v___f_271_);
lean_ctor_set(v___x_272_, 1, v___x_270_);
return v___x_272_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint(void){
_start:
{
lean_object* v___x_273_; 
v___x_273_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__3, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__3_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___closed__3);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorIdx___redArg(lean_object* v_x_274_){
_start:
{
switch(lean_obj_tag(v_x_274_))
{
case 0:
{
lean_object* v___x_275_; 
v___x_275_ = lean_unsigned_to_nat(0u);
return v___x_275_;
}
case 1:
{
lean_object* v___x_276_; 
v___x_276_ = lean_unsigned_to_nat(1u);
return v___x_276_;
}
case 2:
{
lean_object* v___x_277_; 
v___x_277_ = lean_unsigned_to_nat(2u);
return v___x_277_;
}
case 3:
{
lean_object* v___x_278_; 
v___x_278_ = lean_unsigned_to_nat(3u);
return v___x_278_;
}
default: 
{
lean_object* v___x_279_; 
v___x_279_ = lean_unsigned_to_nat(4u);
return v___x_279_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorIdx___redArg___boxed(lean_object* v_x_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l_Lean_Elab_Tactic_Omega_Justification_ctorIdx___redArg(v_x_280_);
lean_dec_ref(v_x_280_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorIdx(lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_x_284_){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = l_Lean_Elab_Tactic_Omega_Justification_ctorIdx___redArg(v_x_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorIdx___boxed(lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_x_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_Lean_Elab_Tactic_Omega_Justification_ctorIdx(v_a_286_, v_a_287_, v_x_288_);
lean_dec_ref(v_x_288_);
lean_dec(v_a_287_);
lean_dec_ref(v_a_286_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(lean_object* v_t_290_, lean_object* v_k_291_){
_start:
{
switch(lean_obj_tag(v_t_290_))
{
case 0:
{
lean_object* v_s_292_; lean_object* v_x_293_; lean_object* v_i_294_; lean_object* v___x_295_; 
v_s_292_ = lean_ctor_get(v_t_290_, 0);
lean_inc_ref(v_s_292_);
v_x_293_ = lean_ctor_get(v_t_290_, 1);
lean_inc(v_x_293_);
v_i_294_ = lean_ctor_get(v_t_290_, 2);
lean_inc(v_i_294_);
lean_dec_ref_known(v_t_290_, 3);
v___x_295_ = lean_apply_3(v_k_291_, v_s_292_, v_x_293_, v_i_294_);
return v___x_295_;
}
case 1:
{
lean_object* v_s_296_; lean_object* v_c_297_; lean_object* v_j_298_; lean_object* v___x_299_; 
v_s_296_ = lean_ctor_get(v_t_290_, 0);
lean_inc_ref(v_s_296_);
v_c_297_ = lean_ctor_get(v_t_290_, 1);
lean_inc(v_c_297_);
v_j_298_ = lean_ctor_get(v_t_290_, 2);
lean_inc_ref(v_j_298_);
lean_dec_ref_known(v_t_290_, 3);
v___x_299_ = lean_apply_3(v_k_291_, v_s_296_, v_c_297_, v_j_298_);
return v___x_299_;
}
case 2:
{
lean_object* v_s_300_; lean_object* v_t_301_; lean_object* v_c_302_; lean_object* v_j_303_; lean_object* v_k_304_; lean_object* v___x_305_; 
v_s_300_ = lean_ctor_get(v_t_290_, 0);
lean_inc_ref(v_s_300_);
v_t_301_ = lean_ctor_get(v_t_290_, 1);
lean_inc_ref(v_t_301_);
v_c_302_ = lean_ctor_get(v_t_290_, 2);
lean_inc(v_c_302_);
v_j_303_ = lean_ctor_get(v_t_290_, 3);
lean_inc_ref(v_j_303_);
v_k_304_ = lean_ctor_get(v_t_290_, 4);
lean_inc_ref(v_k_304_);
lean_dec_ref_known(v_t_290_, 5);
v___x_305_ = lean_apply_5(v_k_291_, v_s_300_, v_t_301_, v_c_302_, v_j_303_, v_k_304_);
return v___x_305_;
}
case 3:
{
lean_object* v_s_306_; lean_object* v_t_307_; lean_object* v_x_308_; lean_object* v_y_309_; lean_object* v_a_310_; lean_object* v_j_311_; lean_object* v_b_312_; lean_object* v_k_313_; lean_object* v___x_314_; 
v_s_306_ = lean_ctor_get(v_t_290_, 0);
lean_inc_ref(v_s_306_);
v_t_307_ = lean_ctor_get(v_t_290_, 1);
lean_inc_ref(v_t_307_);
v_x_308_ = lean_ctor_get(v_t_290_, 2);
lean_inc(v_x_308_);
v_y_309_ = lean_ctor_get(v_t_290_, 3);
lean_inc(v_y_309_);
v_a_310_ = lean_ctor_get(v_t_290_, 4);
lean_inc(v_a_310_);
v_j_311_ = lean_ctor_get(v_t_290_, 5);
lean_inc_ref(v_j_311_);
v_b_312_ = lean_ctor_get(v_t_290_, 6);
lean_inc(v_b_312_);
v_k_313_ = lean_ctor_get(v_t_290_, 7);
lean_inc_ref(v_k_313_);
lean_dec_ref_known(v_t_290_, 8);
v___x_314_ = lean_apply_8(v_k_291_, v_s_306_, v_t_307_, v_x_308_, v_y_309_, v_a_310_, v_j_311_, v_b_312_, v_k_313_);
return v___x_314_;
}
default: 
{
lean_object* v_m_315_; lean_object* v_r_316_; lean_object* v_i_317_; lean_object* v_x_318_; lean_object* v_j_319_; lean_object* v___x_320_; 
v_m_315_ = lean_ctor_get(v_t_290_, 0);
lean_inc(v_m_315_);
v_r_316_ = lean_ctor_get(v_t_290_, 1);
lean_inc(v_r_316_);
v_i_317_ = lean_ctor_get(v_t_290_, 2);
lean_inc(v_i_317_);
v_x_318_ = lean_ctor_get(v_t_290_, 3);
lean_inc(v_x_318_);
v_j_319_ = lean_ctor_get(v_t_290_, 4);
lean_inc_ref(v_j_319_);
lean_dec_ref_known(v_t_290_, 5);
v___x_320_ = lean_apply_5(v_k_291_, v_m_315_, v_r_316_, v_i_317_, v_x_318_, v_j_319_);
return v___x_320_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorElim(lean_object* v_motive_321_, lean_object* v_ctorIdx_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_t_325_, lean_object* v_h_326_, lean_object* v_k_327_){
_start:
{
lean_object* v___x_328_; 
v___x_328_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_325_, v_k_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_ctorElim___boxed(lean_object* v_motive_329_, lean_object* v_ctorIdx_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_t_333_, lean_object* v_h_334_, lean_object* v_k_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim(v_motive_329_, v_ctorIdx_330_, v_a_331_, v_a_332_, v_t_333_, v_h_334_, v_k_335_);
lean_dec(v_a_332_);
lean_dec_ref(v_a_331_);
lean_dec(v_ctorIdx_330_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_assumption_elim___redArg(lean_object* v_t_337_, lean_object* v_assumption_338_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_337_, v_assumption_338_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_assumption_elim(lean_object* v_motive_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_t_343_, lean_object* v_h_344_, lean_object* v_assumption_345_){
_start:
{
lean_object* v___x_346_; 
v___x_346_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_343_, v_assumption_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_assumption_elim___boxed(lean_object* v_motive_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_t_350_, lean_object* v_h_351_, lean_object* v_assumption_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l_Lean_Elab_Tactic_Omega_Justification_assumption_elim(v_motive_347_, v_a_348_, v_a_349_, v_t_350_, v_h_351_, v_assumption_352_);
lean_dec(v_a_349_);
lean_dec_ref(v_a_348_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidy_elim___redArg(lean_object* v_t_354_, lean_object* v_tidy_355_){
_start:
{
lean_object* v___x_356_; 
v___x_356_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_354_, v_tidy_355_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidy_elim(lean_object* v_motive_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_t_360_, lean_object* v_h_361_, lean_object* v_tidy_362_){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_360_, v_tidy_362_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidy_elim___boxed(lean_object* v_motive_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_t_367_, lean_object* v_h_368_, lean_object* v_tidy_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l_Lean_Elab_Tactic_Omega_Justification_tidy_elim(v_motive_364_, v_a_365_, v_a_366_, v_t_367_, v_h_368_, v_tidy_369_);
lean_dec(v_a_366_);
lean_dec_ref(v_a_365_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combine_elim___redArg(lean_object* v_t_371_, lean_object* v_combine_372_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_371_, v_combine_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combine_elim(lean_object* v_motive_374_, lean_object* v_a_375_, lean_object* v_a_376_, lean_object* v_t_377_, lean_object* v_h_378_, lean_object* v_combine_379_){
_start:
{
lean_object* v___x_380_; 
v___x_380_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_377_, v_combine_379_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combine_elim___boxed(lean_object* v_motive_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_t_384_, lean_object* v_h_385_, lean_object* v_combine_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = l_Lean_Elab_Tactic_Omega_Justification_combine_elim(v_motive_381_, v_a_382_, v_a_383_, v_t_384_, v_h_385_, v_combine_386_);
lean_dec(v_a_383_);
lean_dec_ref(v_a_382_);
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combo_elim___redArg(lean_object* v_t_388_, lean_object* v_combo_389_){
_start:
{
lean_object* v___x_390_; 
v___x_390_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_388_, v_combo_389_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combo_elim(lean_object* v_motive_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_t_394_, lean_object* v_h_395_, lean_object* v_combo_396_){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_394_, v_combo_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combo_elim___boxed(lean_object* v_motive_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_t_401_, lean_object* v_h_402_, lean_object* v_combo_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_Lean_Elab_Tactic_Omega_Justification_combo_elim(v_motive_398_, v_a_399_, v_a_400_, v_t_401_, v_h_402_, v_combo_403_);
lean_dec(v_a_400_);
lean_dec_ref(v_a_399_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmod_elim___redArg(lean_object* v_t_405_, lean_object* v_bmod_406_){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_405_, v_bmod_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmod_elim(lean_object* v_motive_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_t_411_, lean_object* v_h_412_, lean_object* v_bmod_413_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = l_Lean_Elab_Tactic_Omega_Justification_ctorElim___redArg(v_t_411_, v_bmod_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmod_elim___boxed(lean_object* v_motive_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_t_418_, lean_object* v_h_419_, lean_object* v_bmod_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_Lean_Elab_Tactic_Omega_Justification_bmod_elim(v_motive_415_, v_a_416_, v_a_417_, v_t_418_, v_h_419_, v_bmod_420_);
lean_dec(v_a_417_);
lean_dec_ref(v_a_416_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidy_x3f(lean_object* v_s_422_, lean_object* v_c_423_, lean_object* v_j_424_){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; 
lean_inc(v_c_423_);
lean_inc_ref(v_s_422_);
v___x_425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_425_, 0, v_s_422_);
lean_ctor_set(v___x_425_, 1, v_c_423_);
lean_inc_ref(v___x_425_);
v___x_426_ = l_Lean_Omega_tidy_x3f(v___x_425_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v___x_427_; 
lean_dec_ref_known(v___x_425_, 2);
lean_dec_ref(v_j_424_);
lean_dec(v_c_423_);
lean_dec_ref(v_s_422_);
v___x_427_ = lean_box(0);
return v___x_427_;
}
else
{
lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_446_; 
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_446_ == 0)
{
lean_object* v_unused_447_; 
v_unused_447_ = lean_ctor_get(v___x_426_, 0);
lean_dec(v_unused_447_);
v___x_429_ = v___x_426_;
v_isShared_430_ = v_isSharedCheck_446_;
goto v_resetjp_428_;
}
else
{
lean_dec(v___x_426_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_446_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_431_; lean_object* v_fst_432_; lean_object* v_snd_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_445_; 
v___x_431_ = l_Lean_Omega_tidy(v___x_425_);
v_fst_432_ = lean_ctor_get(v___x_431_, 0);
v_snd_433_ = lean_ctor_get(v___x_431_, 1);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_445_ == 0)
{
v___x_435_ = v___x_431_;
v_isShared_436_ = v_isSharedCheck_445_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_snd_433_);
lean_inc(v_fst_432_);
lean_dec(v___x_431_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_445_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v___x_437_; lean_object* v___x_439_; 
v___x_437_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_437_, 0, v_s_422_);
lean_ctor_set(v___x_437_, 1, v_c_423_);
lean_ctor_set(v___x_437_, 2, v_j_424_);
if (v_isShared_436_ == 0)
{
lean_ctor_set(v___x_435_, 1, v___x_437_);
lean_ctor_set(v___x_435_, 0, v_snd_433_);
v___x_439_ = v___x_435_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_snd_433_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v___x_437_);
v___x_439_ = v_reuseFailAlloc_444_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
lean_object* v___x_440_; lean_object* v___x_442_; 
v___x_440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_440_, 0, v_fst_432_);
lean_ctor_set(v___x_440_, 1, v___x_439_);
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 0, v___x_440_);
v___x_442_ = v___x_429_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v___x_440_);
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
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0___redArg(lean_object* v_s_448_, lean_object* v_replacement_449_, lean_object* v_a_450_, lean_object* v_b_451_){
_start:
{
lean_object* v_it_453_; lean_object* v_startPos_454_; lean_object* v_endPos_455_; lean_object* v_it_464_; 
switch(lean_obj_tag(v_a_450_))
{
case 0:
{
lean_object* v_pos_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_482_; 
v_pos_470_ = lean_ctor_get(v_a_450_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v_a_450_);
if (v_isSharedCheck_482_ == 0)
{
v___x_472_ = v_a_450_;
v_isShared_473_ = v_isSharedCheck_482_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_pos_470_);
lean_dec(v_a_450_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_482_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v_startInclusive_474_; lean_object* v_endExclusive_475_; lean_object* v___x_476_; uint8_t v_decide_477_; 
v_startInclusive_474_ = lean_ctor_get(v_s_448_, 1);
v_endExclusive_475_ = lean_ctor_get(v_s_448_, 2);
v___x_476_ = lean_nat_sub(v_endExclusive_475_, v_startInclusive_474_);
v_decide_477_ = lean_nat_dec_eq(v_pos_470_, v___x_476_);
lean_dec(v___x_476_);
if (v_decide_477_ == 0)
{
lean_object* v___x_479_; 
if (v_isShared_473_ == 0)
{
lean_ctor_set_tag(v___x_472_, 1);
v___x_479_ = v___x_472_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_pos_470_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
v_it_464_ = v___x_479_;
goto v___jp_463_;
}
}
else
{
lean_object* v___x_481_; 
lean_del_object(v___x_472_);
lean_dec(v_pos_470_);
v___x_481_ = lean_box(3);
v_it_464_ = v___x_481_;
goto v___jp_463_;
}
}
}
case 1:
{
lean_object* v_pos_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_495_; 
v_pos_483_ = lean_ctor_get(v_a_450_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v_a_450_);
if (v_isSharedCheck_495_ == 0)
{
v___x_485_ = v_a_450_;
v_isShared_486_ = v_isSharedCheck_495_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_pos_483_);
lean_dec(v_a_450_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_495_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v_str_487_; lean_object* v_startInclusive_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_493_; 
v_str_487_ = lean_ctor_get(v_s_448_, 0);
v_startInclusive_488_ = lean_ctor_get(v_s_448_, 1);
v___x_489_ = lean_nat_add(v_startInclusive_488_, v_pos_483_);
v___x_490_ = lean_string_utf8_next_fast(v_str_487_, v___x_489_);
lean_dec(v___x_489_);
v___x_491_ = lean_nat_sub(v___x_490_, v_startInclusive_488_);
lean_inc(v___x_491_);
if (v_isShared_486_ == 0)
{
lean_ctor_set_tag(v___x_485_, 0);
lean_ctor_set(v___x_485_, 0, v___x_491_);
v___x_493_ = v___x_485_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v___x_491_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
v_it_453_ = v___x_493_;
v_startPos_454_ = v_pos_483_;
v_endPos_455_ = v___x_491_;
goto v___jp_452_;
}
}
}
case 2:
{
lean_object* v_needle_496_; lean_object* v_table_497_; lean_object* v_stackPos_498_; lean_object* v_needlePos_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_560_; 
v_needle_496_ = lean_ctor_get(v_a_450_, 0);
v_table_497_ = lean_ctor_get(v_a_450_, 1);
v_stackPos_498_ = lean_ctor_get(v_a_450_, 2);
v_needlePos_499_ = lean_ctor_get(v_a_450_, 3);
v_isSharedCheck_560_ = !lean_is_exclusive(v_a_450_);
if (v_isSharedCheck_560_ == 0)
{
v___x_501_ = v_a_450_;
v_isShared_502_ = v_isSharedCheck_560_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_needlePos_499_);
lean_inc(v_stackPos_498_);
lean_inc(v_table_497_);
lean_inc(v_needle_496_);
lean_dec(v_a_450_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_560_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v_str_503_; lean_object* v_startInclusive_504_; lean_object* v_endExclusive_505_; lean_object* v_str_506_; lean_object* v_startInclusive_507_; lean_object* v_endExclusive_508_; lean_object* v_basePos_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; uint8_t v___x_513_; 
v_str_503_ = lean_ctor_get(v_needle_496_, 0);
v_startInclusive_504_ = lean_ctor_get(v_needle_496_, 1);
v_endExclusive_505_ = lean_ctor_get(v_needle_496_, 2);
v_str_506_ = lean_ctor_get(v_s_448_, 0);
v_startInclusive_507_ = lean_ctor_get(v_s_448_, 1);
v_endExclusive_508_ = lean_ctor_get(v_s_448_, 2);
v_basePos_509_ = lean_nat_sub(v_stackPos_498_, v_needlePos_499_);
v___x_510_ = lean_nat_sub(v_endExclusive_505_, v_startInclusive_504_);
v___x_511_ = lean_nat_add(v_basePos_509_, v___x_510_);
v___x_512_ = lean_nat_sub(v_endExclusive_508_, v_startInclusive_507_);
v___x_513_ = lean_nat_dec_le(v___x_511_, v___x_512_);
lean_dec(v___x_511_);
if (v___x_513_ == 0)
{
lean_object* v___x_514_; lean_object* v___x_515_; uint8_t v___x_516_; 
lean_dec(v___x_510_);
lean_del_object(v___x_501_);
lean_dec(v_needlePos_499_);
lean_dec(v_stackPos_498_);
lean_dec_ref(v_table_497_);
lean_dec_ref(v_needle_496_);
v___x_514_ = lean_unsigned_to_nat(1u);
v___x_515_ = lean_nat_add(v_basePos_509_, v___x_514_);
v___x_516_ = lean_nat_dec_le(v___x_515_, v___x_512_);
lean_dec(v___x_515_);
if (v___x_516_ == 0)
{
lean_dec(v___x_512_);
lean_dec(v_basePos_509_);
lean_dec_ref(v_s_448_);
return v_b_451_;
}
else
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = l_String_Slice_pos_x21(v_s_448_, v_basePos_509_);
lean_dec(v_basePos_509_);
v___x_518_ = lean_box(3);
v_it_453_ = v___x_518_;
v_startPos_454_ = v___x_517_;
v_endPos_455_ = v___x_512_;
goto v___jp_452_;
}
}
else
{
lean_object* v___x_519_; uint8_t v_stackByte_520_; lean_object* v___x_521_; uint8_t v_patByte_522_; uint8_t v___x_523_; 
lean_dec(v___x_512_);
v___x_519_ = lean_nat_add(v_startInclusive_507_, v_stackPos_498_);
v_stackByte_520_ = lean_string_get_byte_fast(v_str_506_, v___x_519_);
v___x_521_ = lean_nat_add(v_startInclusive_504_, v_needlePos_499_);
v_patByte_522_ = lean_string_get_byte_fast(v_str_503_, v___x_521_);
v___x_523_ = lean_uint8_dec_eq(v_stackByte_520_, v_patByte_522_);
if (v___x_523_ == 0)
{
lean_object* v___x_524_; uint8_t v_decide_525_; 
lean_dec(v___x_510_);
v___x_524_ = lean_unsigned_to_nat(0u);
v_decide_525_ = lean_nat_dec_eq(v_needlePos_499_, v___x_524_);
if (v_decide_525_ == 0)
{
lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v_newNeedlePos_528_; uint8_t v___x_529_; 
v___x_526_ = lean_unsigned_to_nat(1u);
v___x_527_ = lean_nat_sub(v_needlePos_499_, v___x_526_);
lean_dec(v_needlePos_499_);
v_newNeedlePos_528_ = lean_array_fget_borrowed(v_table_497_, v___x_527_);
lean_dec(v___x_527_);
v___x_529_ = lean_nat_dec_eq(v_newNeedlePos_528_, v___x_524_);
if (v___x_529_ == 0)
{
lean_object* v_oldBasePos_530_; lean_object* v___x_531_; lean_object* v_newBasePos_532_; lean_object* v___x_534_; 
lean_inc(v_newNeedlePos_528_);
v_oldBasePos_530_ = l_String_Slice_pos_x21(v_s_448_, v_basePos_509_);
lean_dec(v_basePos_509_);
v___x_531_ = lean_nat_sub(v_stackPos_498_, v_newNeedlePos_528_);
v_newBasePos_532_ = l_String_Slice_pos_x21(v_s_448_, v___x_531_);
lean_dec(v___x_531_);
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 3, v_newNeedlePos_528_);
v___x_534_ = v___x_501_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_needle_496_);
lean_ctor_set(v_reuseFailAlloc_535_, 1, v_table_497_);
lean_ctor_set(v_reuseFailAlloc_535_, 2, v_stackPos_498_);
lean_ctor_set(v_reuseFailAlloc_535_, 3, v_newNeedlePos_528_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
v_it_453_ = v___x_534_;
v_startPos_454_ = v_oldBasePos_530_;
v_endPos_455_ = v_newBasePos_532_;
goto v___jp_452_;
}
}
else
{
lean_object* v_basePos_536_; lean_object* v_nextStackPos_537_; lean_object* v___x_539_; 
v_basePos_536_ = l_String_Slice_pos_x21(v_s_448_, v_basePos_509_);
lean_dec(v_basePos_509_);
v_nextStackPos_537_ = l_String_Slice_posGE___redArg(v_s_448_, v_stackPos_498_);
lean_inc(v_nextStackPos_537_);
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 3, v___x_524_);
lean_ctor_set(v___x_501_, 2, v_nextStackPos_537_);
v___x_539_ = v___x_501_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_needle_496_);
lean_ctor_set(v_reuseFailAlloc_540_, 1, v_table_497_);
lean_ctor_set(v_reuseFailAlloc_540_, 2, v_nextStackPos_537_);
lean_ctor_set(v_reuseFailAlloc_540_, 3, v___x_524_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
v_it_453_ = v___x_539_;
v_startPos_454_ = v_basePos_536_;
v_endPos_455_ = v_nextStackPos_537_;
goto v___jp_452_;
}
}
}
else
{
lean_object* v_basePos_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v_nextStackPos_544_; lean_object* v___x_546_; 
lean_dec(v_basePos_509_);
lean_dec(v_needlePos_499_);
v_basePos_541_ = l_String_Slice_pos_x21(v_s_448_, v_stackPos_498_);
v___x_542_ = lean_unsigned_to_nat(1u);
v___x_543_ = lean_nat_add(v_stackPos_498_, v___x_542_);
lean_dec(v_stackPos_498_);
v_nextStackPos_544_ = l_String_Slice_posGE___redArg(v_s_448_, v___x_543_);
lean_inc(v_nextStackPos_544_);
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 3, v___x_524_);
lean_ctor_set(v___x_501_, 2, v_nextStackPos_544_);
v___x_546_ = v___x_501_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_needle_496_);
lean_ctor_set(v_reuseFailAlloc_547_, 1, v_table_497_);
lean_ctor_set(v_reuseFailAlloc_547_, 2, v_nextStackPos_544_);
lean_ctor_set(v_reuseFailAlloc_547_, 3, v___x_524_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
v_it_453_ = v___x_546_;
v_startPos_454_ = v_basePos_541_;
v_endPos_455_ = v_nextStackPos_544_;
goto v___jp_452_;
}
}
}
else
{
lean_object* v___x_548_; lean_object* v_nextStackPos_549_; lean_object* v_nextNeedlePos_550_; uint8_t v_decide_551_; 
lean_dec(v_basePos_509_);
v___x_548_ = lean_unsigned_to_nat(1u);
v_nextStackPos_549_ = lean_nat_add(v_stackPos_498_, v___x_548_);
lean_dec(v_stackPos_498_);
v_nextNeedlePos_550_ = lean_nat_add(v_needlePos_499_, v___x_548_);
lean_dec(v_needlePos_499_);
v_decide_551_ = lean_nat_dec_eq(v_nextNeedlePos_550_, v___x_510_);
lean_dec(v___x_510_);
if (v_decide_551_ == 0)
{
lean_object* v___x_553_; 
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 3, v_nextNeedlePos_550_);
lean_ctor_set(v___x_501_, 2, v_nextStackPos_549_);
v___x_553_ = v___x_501_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_needle_496_);
lean_ctor_set(v_reuseFailAlloc_555_, 1, v_table_497_);
lean_ctor_set(v_reuseFailAlloc_555_, 2, v_nextStackPos_549_);
lean_ctor_set(v_reuseFailAlloc_555_, 3, v_nextNeedlePos_550_);
v___x_553_ = v_reuseFailAlloc_555_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
v_a_450_ = v___x_553_;
goto _start;
}
}
else
{
lean_object* v___x_556_; lean_object* v___x_558_; 
lean_dec(v_nextNeedlePos_550_);
v___x_556_ = lean_unsigned_to_nat(0u);
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 3, v___x_556_);
lean_ctor_set(v___x_501_, 2, v_nextStackPos_549_);
v___x_558_ = v___x_501_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_needle_496_);
lean_ctor_set(v_reuseFailAlloc_559_, 1, v_table_497_);
lean_ctor_set(v_reuseFailAlloc_559_, 2, v_nextStackPos_549_);
lean_ctor_set(v_reuseFailAlloc_559_, 3, v___x_556_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
v_it_464_ = v___x_558_;
goto v___jp_463_;
}
}
}
}
}
}
default: 
{
lean_dec_ref(v_s_448_);
return v_b_451_;
}
}
v___jp_452_:
{
lean_object* v___x_456_; lean_object* v_str_457_; lean_object* v_startInclusive_458_; lean_object* v_endExclusive_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
lean_inc_ref(v_s_448_);
v___x_456_ = l_String_Slice_slice_x21(v_s_448_, v_startPos_454_, v_endPos_455_);
lean_dec(v_endPos_455_);
lean_dec(v_startPos_454_);
v_str_457_ = lean_ctor_get(v___x_456_, 0);
lean_inc_ref(v_str_457_);
v_startInclusive_458_ = lean_ctor_get(v___x_456_, 1);
lean_inc(v_startInclusive_458_);
v_endExclusive_459_ = lean_ctor_get(v___x_456_, 2);
lean_inc(v_endExclusive_459_);
lean_dec_ref(v___x_456_);
v___x_460_ = lean_string_utf8_extract_fast(v_str_457_, v_startInclusive_458_, v_endExclusive_459_);
lean_dec(v_endExclusive_459_);
lean_dec(v_startInclusive_458_);
lean_dec_ref(v_str_457_);
v___x_461_ = lean_string_append(v_b_451_, v___x_460_);
lean_dec_ref(v___x_460_);
v_a_450_ = v_it_453_;
v_b_451_ = v___x_461_;
goto _start;
}
v___jp_463_:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_465_ = lean_unsigned_to_nat(0u);
v___x_466_ = lean_string_utf8_byte_size(v_replacement_449_);
v___x_467_ = lean_string_utf8_extract_fast(v_replacement_449_, v___x_465_, v___x_466_);
v___x_468_ = lean_string_append(v_b_451_, v___x_467_);
lean_dec_ref(v___x_467_);
v_a_450_ = v_it_464_;
v_b_451_ = v___x_468_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0___redArg___boxed(lean_object* v_s_561_, lean_object* v_replacement_562_, lean_object* v_a_563_, lean_object* v_b_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0___redArg(v_s_561_, v_replacement_562_, v_a_563_, v_b_564_);
lean_dec_ref(v_replacement_562_);
return v_res_565_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_568_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0));
v___x_569_ = lean_string_utf8_byte_size(v___x_568_);
return v___x_569_;
}
}
static uint8_t _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_570_; lean_object* v___x_571_; uint8_t v___x_572_; 
v___x_570_ = lean_unsigned_to_nat(0u);
v___x_571_ = lean_obj_once(&l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__2, &l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__2_once, _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__2);
v___x_572_ = lean_nat_dec_eq(v___x_571_, v___x_570_);
return v___x_572_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_573_ = lean_obj_once(&l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__2, &l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__2_once, _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__2);
v___x_574_ = lean_unsigned_to_nat(0u);
v___x_575_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0));
v___x_576_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_576_, 0, v___x_575_);
lean_ctor_set(v___x_576_, 1, v___x_574_);
lean_ctor_set(v___x_576_, 2, v___x_573_);
return v___x_576_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_577_ = lean_obj_once(&l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__4, &l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__4_once, _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__4);
v___x_578_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_577_);
return v___x_578_;
}
}
static lean_object* _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__6(void){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_579_ = lean_unsigned_to_nat(0u);
v___x_580_ = lean_obj_once(&l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__5, &l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__5_once, _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__5);
v___x_581_ = lean_obj_once(&l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__4, &l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__4_once, _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__4);
v___x_582_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
lean_ctor_set(v___x_582_, 1, v___x_580_);
lean_ctor_set(v___x_582_, 2, v___x_579_);
lean_ctor_set(v___x_582_, 3, v___x_579_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg(lean_object* v_s_585_, lean_object* v_replacement_586_){
_start:
{
lean_object* v___x_587_; uint8_t v___x_588_; 
v___x_587_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__1));
v___x_588_ = lean_uint8_once(&l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__3, &l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__3_once, _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__3);
if (v___x_588_ == 0)
{
lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_589_ = lean_obj_once(&l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__6, &l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__6_once, _init_l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__6);
v___x_590_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0___redArg(v_s_585_, v_replacement_586_, v___x_589_, v___x_587_);
return v___x_590_;
}
else
{
lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_591_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__7));
v___x_592_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0___redArg(v_s_585_, v_replacement_586_, v___x_591_, v___x_587_);
return v___x_592_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___boxed(lean_object* v_s_593_, lean_object* v_replacement_594_){
_start:
{
lean_object* v_res_595_; 
v_res_595_ = l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg(v_s_593_, v_replacement_594_);
lean_dec_ref(v_replacement_594_);
return v_res_595_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet(lean_object* v_s_598_){
_start:
{
lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_599_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet___closed__0));
v___x_600_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet___closed__1));
v___x_601_ = lean_unsigned_to_nat(0u);
v___x_602_ = lean_string_utf8_byte_size(v_s_598_);
v___x_603_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_603_, 0, v_s_598_);
lean_ctor_set(v___x_603_, 1, v___x_601_);
lean_ctor_set(v___x_603_, 2, v___x_602_);
v___x_604_ = l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg(v___x_603_, v___x_600_);
v___x_605_ = lean_string_append(v___x_599_, v___x_604_);
lean_dec_ref(v___x_604_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0(lean_object* v_s_606_, lean_object* v_pattern_607_, lean_object* v_replacement_608_){
_start:
{
lean_object* v___x_609_; 
v___x_609_ = l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg(v_s_606_, v_replacement_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___boxed(lean_object* v_s_610_, lean_object* v_pattern_611_, lean_object* v_replacement_612_){
_start:
{
lean_object* v_res_613_; 
v_res_613_ = l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0(v_s_610_, v_pattern_611_, v_replacement_612_);
lean_dec_ref(v_replacement_612_);
lean_dec_ref(v_pattern_611_);
return v_res_613_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0(lean_object* v_s_614_, lean_object* v_replacement_615_, lean_object* v_inst_616_, lean_object* v_R_617_, lean_object* v_a_618_, lean_object* v_b_619_, lean_object* v_c_620_){
_start:
{
lean_object* v___x_621_; 
v___x_621_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0___redArg(v_s_614_, v_replacement_615_, v_a_618_, v_b_619_);
return v___x_621_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0___boxed(lean_object* v_s_622_, lean_object* v_replacement_623_, lean_object* v_inst_624_, lean_object* v_R_625_, lean_object* v_a_626_, lean_object* v_b_627_, lean_object* v_c_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0_spec__0(v_s_622_, v_replacement_623_, v_inst_624_, v_R_625_, v_a_626_, v_b_627_, v_c_628_);
lean_dec_ref(v_replacement_623_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0(lean_object* v_x_631_, lean_object* v_x_632_){
_start:
{
if (lean_obj_tag(v_x_632_) == 0)
{
return v_x_631_;
}
else
{
lean_object* v_head_633_; lean_object* v_tail_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v_head_633_ = lean_ctor_get(v_x_632_, 0);
v_tail_634_ = lean_ctor_get(v_x_632_, 1);
v___x_635_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0));
v___x_636_ = lean_string_append(v_x_631_, v___x_635_);
v___x_637_ = l_Int_repr(v_head_633_);
v___x_638_ = lean_string_append(v___x_636_, v___x_637_);
lean_dec_ref(v___x_637_);
v_x_631_ = v___x_638_;
v_x_632_ = v_tail_634_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___boxed(lean_object* v_x_640_, lean_object* v_x_641_){
_start:
{
lean_object* v_res_642_; 
v_res_642_ = l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0(v_x_640_, v_x_641_);
lean_dec(v_x_641_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0(lean_object* v_x_646_){
_start:
{
if (lean_obj_tag(v_x_646_) == 0)
{
lean_object* v___x_647_; 
v___x_647_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__0));
return v___x_647_;
}
else
{
lean_object* v_tail_648_; 
v_tail_648_ = lean_ctor_get(v_x_646_, 1);
if (lean_obj_tag(v_tail_648_) == 0)
{
lean_object* v_head_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v_head_649_ = lean_ctor_get(v_x_646_, 0);
v___x_650_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v___x_651_ = l_Int_repr(v_head_649_);
v___x_652_ = lean_string_append(v___x_650_, v___x_651_);
lean_dec_ref(v___x_651_);
v___x_653_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_654_ = lean_string_append(v___x_652_, v___x_653_);
return v___x_654_;
}
else
{
lean_object* v_head_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; uint32_t v___x_660_; lean_object* v___x_661_; 
v_head_655_ = lean_ctor_get(v_x_646_, 0);
v___x_656_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v___x_657_ = l_Int_repr(v_head_655_);
v___x_658_ = lean_string_append(v___x_656_, v___x_657_);
lean_dec_ref(v___x_657_);
v___x_659_ = l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0(v___x_658_, v_tail_648_);
v___x_660_ = 93;
v___x_661_ = lean_string_push(v___x_659_, v___x_660_);
return v___x_661_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___boxed(lean_object* v_x_662_){
_start:
{
lean_object* v_res_663_; 
v_res_663_ = l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0(v_x_662_);
lean_dec(v_x_662_);
return v_res_663_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__1(lean_object* v_x_664_, lean_object* v_x_665_){
_start:
{
if (lean_obj_tag(v_x_664_) == 0)
{
if (lean_obj_tag(v_x_665_) == 0)
{
uint8_t v___x_666_; 
v___x_666_ = 1;
return v___x_666_;
}
else
{
uint8_t v___x_667_; 
v___x_667_ = 0;
return v___x_667_;
}
}
else
{
if (lean_obj_tag(v_x_665_) == 0)
{
uint8_t v___x_668_; 
v___x_668_ = 0;
return v___x_668_;
}
else
{
lean_object* v_head_669_; lean_object* v_tail_670_; lean_object* v_head_671_; lean_object* v_tail_672_; uint8_t v___x_673_; 
v_head_669_ = lean_ctor_get(v_x_664_, 0);
v_tail_670_ = lean_ctor_get(v_x_664_, 1);
v_head_671_ = lean_ctor_get(v_x_665_, 0);
v_tail_672_ = lean_ctor_get(v_x_665_, 1);
v___x_673_ = lean_int_dec_eq(v_head_669_, v_head_671_);
if (v___x_673_ == 0)
{
return v___x_673_;
}
else
{
v_x_664_ = v_tail_670_;
v_x_665_ = v_tail_672_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__1___boxed(lean_object* v_x_675_, lean_object* v_x_676_){
_start:
{
uint8_t v_res_677_; lean_object* v_r_678_; 
v_res_677_ = l_List_beq___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__1(v_x_675_, v_x_676_);
lean_dec(v_x_676_);
lean_dec(v_x_675_);
v_r_678_ = lean_box(v_res_677_);
return v_r_678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_toString(lean_object* v_s_696_, lean_object* v_x_697_, lean_object* v_x_698_){
_start:
{
switch(lean_obj_tag(v_x_698_))
{
case 0:
{
lean_object* v_i_699_; lean_object* v_lowerBound_700_; lean_object* v_upperBound_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___y_706_; lean_object* v___y_713_; lean_object* v___y_714_; 
v_i_699_ = lean_ctor_get(v_x_698_, 2);
lean_inc(v_i_699_);
lean_dec_ref_known(v_x_698_, 3);
v_lowerBound_700_ = lean_ctor_get(v_s_696_, 0);
lean_inc(v_lowerBound_700_);
v_upperBound_701_ = lean_ctor_get(v_s_696_, 1);
lean_inc(v_upperBound_701_);
lean_dec_ref(v_s_696_);
v___x_702_ = l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0(v_x_697_);
lean_dec(v_x_697_);
v___x_703_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0));
v___x_704_ = lean_string_append(v___x_702_, v___x_703_);
if (lean_obj_tag(v_lowerBound_700_) == 0)
{
if (lean_obj_tag(v_upperBound_701_) == 0)
{
lean_object* v___x_718_; 
v___x_718_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2));
v___y_706_ = v___x_718_;
goto v___jp_705_;
}
else
{
lean_object* v_val_719_; lean_object* v___x_720_; lean_object* v___y_722_; lean_object* v_intZero_726_; uint8_t v_isNeg_727_; 
v_val_719_ = lean_ctor_get(v_upperBound_701_, 0);
lean_inc(v_val_719_);
lean_dec_ref_known(v_upperBound_701_, 1);
v___x_720_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3));
v_intZero_726_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_727_ = lean_int_dec_lt(v_val_719_, v_intZero_726_);
if (v_isNeg_727_ == 0)
{
lean_object* v_a_728_; lean_object* v___x_729_; 
v_a_728_ = lean_nat_abs(v_val_719_);
lean_dec(v_val_719_);
v___x_729_ = l_Nat_reprFast(v_a_728_);
v___y_722_ = v___x_729_;
goto v___jp_721_;
}
else
{
lean_object* v_abs_730_; lean_object* v_one_731_; lean_object* v_a_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; 
v_abs_730_ = lean_nat_abs(v_val_719_);
lean_dec(v_val_719_);
v_one_731_ = lean_unsigned_to_nat(1u);
v_a_732_ = lean_nat_sub(v_abs_730_, v_one_731_);
lean_dec(v_abs_730_);
v___x_733_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_734_ = lean_nat_add(v_a_732_, v_one_731_);
lean_dec(v_a_732_);
v___x_735_ = l_Nat_reprFast(v___x_734_);
v___x_736_ = lean_string_append(v___x_733_, v___x_735_);
lean_dec_ref(v___x_735_);
v___y_722_ = v___x_736_;
goto v___jp_721_;
}
v___jp_721_:
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_723_ = lean_string_append(v___x_720_, v___y_722_);
lean_dec_ref(v___y_722_);
v___x_724_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_725_ = lean_string_append(v___x_723_, v___x_724_);
v___y_706_ = v___x_725_;
goto v___jp_705_;
}
}
}
else
{
if (lean_obj_tag(v_upperBound_701_) == 0)
{
lean_object* v_val_737_; lean_object* v___x_738_; lean_object* v___y_740_; lean_object* v_intZero_744_; uint8_t v_isNeg_745_; 
v_val_737_ = lean_ctor_get(v_lowerBound_700_, 0);
lean_inc(v_val_737_);
lean_dec_ref_known(v_lowerBound_700_, 1);
v___x_738_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_744_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_745_ = lean_int_dec_lt(v_val_737_, v_intZero_744_);
if (v_isNeg_745_ == 0)
{
lean_object* v_a_746_; lean_object* v___x_747_; 
v_a_746_ = lean_nat_abs(v_val_737_);
lean_dec(v_val_737_);
v___x_747_ = l_Nat_reprFast(v_a_746_);
v___y_740_ = v___x_747_;
goto v___jp_739_;
}
else
{
lean_object* v_abs_748_; lean_object* v_one_749_; lean_object* v_a_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
v_abs_748_ = lean_nat_abs(v_val_737_);
lean_dec(v_val_737_);
v_one_749_ = lean_unsigned_to_nat(1u);
v_a_750_ = lean_nat_sub(v_abs_748_, v_one_749_);
lean_dec(v_abs_748_);
v___x_751_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_752_ = lean_nat_add(v_a_750_, v_one_749_);
lean_dec(v_a_750_);
v___x_753_ = l_Nat_reprFast(v___x_752_);
v___x_754_ = lean_string_append(v___x_751_, v___x_753_);
lean_dec_ref(v___x_753_);
v___y_740_ = v___x_754_;
goto v___jp_739_;
}
v___jp_739_:
{
lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_741_ = lean_string_append(v___x_738_, v___y_740_);
lean_dec_ref(v___y_740_);
v___x_742_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5));
v___x_743_ = lean_string_append(v___x_741_, v___x_742_);
v___y_706_ = v___x_743_;
goto v___jp_705_;
}
}
else
{
lean_object* v_val_755_; lean_object* v_val_756_; uint8_t v___x_757_; 
v_val_755_ = lean_ctor_get(v_lowerBound_700_, 0);
lean_inc(v_val_755_);
lean_dec_ref_known(v_lowerBound_700_, 1);
v_val_756_ = lean_ctor_get(v_upperBound_701_, 0);
lean_inc(v_val_756_);
lean_dec_ref_known(v_upperBound_701_, 1);
v___x_757_ = lean_int_dec_lt(v_val_756_, v_val_755_);
if (v___x_757_ == 0)
{
uint8_t v___x_758_; 
v___x_758_ = lean_int_dec_eq(v_val_755_, v_val_756_);
if (v___x_758_ == 0)
{
lean_object* v___x_759_; lean_object* v___y_761_; lean_object* v_intZero_776_; uint8_t v_isNeg_777_; 
v___x_759_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_776_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_777_ = lean_int_dec_lt(v_val_755_, v_intZero_776_);
if (v_isNeg_777_ == 0)
{
lean_object* v_a_778_; lean_object* v___x_779_; 
v_a_778_ = lean_nat_abs(v_val_755_);
lean_dec(v_val_755_);
v___x_779_ = l_Nat_reprFast(v_a_778_);
v___y_761_ = v___x_779_;
goto v___jp_760_;
}
else
{
lean_object* v_abs_780_; lean_object* v_one_781_; lean_object* v_a_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; 
v_abs_780_ = lean_nat_abs(v_val_755_);
lean_dec(v_val_755_);
v_one_781_ = lean_unsigned_to_nat(1u);
v_a_782_ = lean_nat_sub(v_abs_780_, v_one_781_);
lean_dec(v_abs_780_);
v___x_783_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_784_ = lean_nat_add(v_a_782_, v_one_781_);
lean_dec(v_a_782_);
v___x_785_ = l_Nat_reprFast(v___x_784_);
v___x_786_ = lean_string_append(v___x_783_, v___x_785_);
lean_dec_ref(v___x_785_);
v___y_761_ = v___x_786_;
goto v___jp_760_;
}
v___jp_760_:
{
lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v_intZero_765_; uint8_t v_isNeg_766_; 
v___x_762_ = lean_string_append(v___x_759_, v___y_761_);
lean_dec_ref(v___y_761_);
v___x_763_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0));
v___x_764_ = lean_string_append(v___x_762_, v___x_763_);
v_intZero_765_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_766_ = lean_int_dec_lt(v_val_756_, v_intZero_765_);
if (v_isNeg_766_ == 0)
{
lean_object* v_a_767_; lean_object* v___x_768_; 
v_a_767_ = lean_nat_abs(v_val_756_);
lean_dec(v_val_756_);
v___x_768_ = l_Nat_reprFast(v_a_767_);
v___y_713_ = v___x_764_;
v___y_714_ = v___x_768_;
goto v___jp_712_;
}
else
{
lean_object* v_abs_769_; lean_object* v_one_770_; lean_object* v_a_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; 
v_abs_769_ = lean_nat_abs(v_val_756_);
lean_dec(v_val_756_);
v_one_770_ = lean_unsigned_to_nat(1u);
v_a_771_ = lean_nat_sub(v_abs_769_, v_one_770_);
lean_dec(v_abs_769_);
v___x_772_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_773_ = lean_nat_add(v_a_771_, v_one_770_);
lean_dec(v_a_771_);
v___x_774_ = l_Nat_reprFast(v___x_773_);
v___x_775_ = lean_string_append(v___x_772_, v___x_774_);
lean_dec_ref(v___x_774_);
v___y_713_ = v___x_764_;
v___y_714_ = v___x_775_;
goto v___jp_712_;
}
}
}
else
{
lean_object* v___x_787_; lean_object* v___y_789_; lean_object* v_intZero_793_; uint8_t v_isNeg_794_; 
lean_dec(v_val_756_);
v___x_787_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6));
v_intZero_793_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_794_ = lean_int_dec_lt(v_val_755_, v_intZero_793_);
if (v_isNeg_794_ == 0)
{
lean_object* v_a_795_; lean_object* v___x_796_; 
v_a_795_ = lean_nat_abs(v_val_755_);
lean_dec(v_val_755_);
v___x_796_ = l_Nat_reprFast(v_a_795_);
v___y_789_ = v___x_796_;
goto v___jp_788_;
}
else
{
lean_object* v_abs_797_; lean_object* v_one_798_; lean_object* v_a_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
v_abs_797_ = lean_nat_abs(v_val_755_);
lean_dec(v_val_755_);
v_one_798_ = lean_unsigned_to_nat(1u);
v_a_799_ = lean_nat_sub(v_abs_797_, v_one_798_);
lean_dec(v_abs_797_);
v___x_800_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_801_ = lean_nat_add(v_a_799_, v_one_798_);
lean_dec(v_a_799_);
v___x_802_ = l_Nat_reprFast(v___x_801_);
v___x_803_ = lean_string_append(v___x_800_, v___x_802_);
lean_dec_ref(v___x_802_);
v___y_789_ = v___x_803_;
goto v___jp_788_;
}
v___jp_788_:
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_790_ = lean_string_append(v___x_787_, v___y_789_);
lean_dec_ref(v___y_789_);
v___x_791_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7));
v___x_792_ = lean_string_append(v___x_790_, v___x_791_);
v___y_706_ = v___x_792_;
goto v___jp_705_;
}
}
}
else
{
lean_object* v___x_804_; 
lean_dec(v_val_756_);
lean_dec(v_val_755_);
v___x_804_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8));
v___y_706_ = v___x_804_;
goto v___jp_705_;
}
}
}
v___jp_705_:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_707_ = lean_string_append(v___x_704_, v___y_706_);
lean_dec_ref(v___y_706_);
v___x_708_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__1));
v___x_709_ = lean_string_append(v___x_707_, v___x_708_);
v___x_710_ = l_Nat_reprFast(v_i_699_);
v___x_711_ = lean_string_append(v___x_709_, v___x_710_);
lean_dec_ref(v___x_710_);
return v___x_711_;
}
v___jp_712_:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_715_ = lean_string_append(v___y_713_, v___y_714_);
lean_dec_ref(v___y_714_);
v___x_716_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_717_ = lean_string_append(v___x_715_, v___x_716_);
v___y_706_ = v___x_717_;
goto v___jp_705_;
}
}
case 1:
{
lean_object* v_s_805_; lean_object* v_c_806_; lean_object* v_j_807_; lean_object* v___y_809_; lean_object* v___y_810_; lean_object* v___y_818_; lean_object* v___y_819_; lean_object* v___y_820_; lean_object* v___y_825_; lean_object* v___y_826_; lean_object* v___y_827_; lean_object* v___y_832_; lean_object* v___y_833_; lean_object* v___y_834_; lean_object* v___y_839_; lean_object* v___y_840_; lean_object* v___y_841_; lean_object* v___y_842_; lean_object* v___y_858_; lean_object* v___y_859_; lean_object* v___y_860_; uint8_t v___y_865_; uint8_t v___x_928_; 
v_s_805_ = lean_ctor_get(v_x_698_, 0);
lean_inc_ref(v_s_805_);
v_c_806_ = lean_ctor_get(v_x_698_, 1);
lean_inc(v_c_806_);
v_j_807_ = lean_ctor_get(v_x_698_, 2);
lean_inc_ref(v_j_807_);
lean_dec_ref_known(v_x_698_, 3);
v___x_928_ = l_Lean_Omega_instBEqConstraint_beq(v_s_696_, v_s_805_);
if (v___x_928_ == 0)
{
v___y_865_ = v___x_928_;
goto v___jp_864_;
}
else
{
uint8_t v___x_929_; 
v___x_929_ = l_List_beq___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__1(v_x_697_, v_c_806_);
v___y_865_ = v___x_929_;
goto v___jp_864_;
}
v___jp_808_:
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_811_ = lean_string_append(v___y_809_, v___y_810_);
lean_dec_ref(v___y_810_);
v___x_812_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__9));
v___x_813_ = lean_string_append(v___x_811_, v___x_812_);
v___x_814_ = l_Lean_Elab_Tactic_Omega_Justification_toString(v_s_805_, v_c_806_, v_j_807_);
v___x_815_ = l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet(v___x_814_);
v___x_816_ = lean_string_append(v___x_813_, v___x_815_);
lean_dec_ref(v___x_815_);
return v___x_816_;
}
v___jp_817_:
{
lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
lean_inc_ref(v___y_819_);
v___x_821_ = lean_string_append(v___y_819_, v___y_820_);
lean_dec_ref(v___y_820_);
v___x_822_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_823_ = lean_string_append(v___x_821_, v___x_822_);
v___y_809_ = v___y_818_;
v___y_810_ = v___x_823_;
goto v___jp_808_;
}
v___jp_824_:
{
lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; 
lean_inc_ref(v___y_826_);
v___x_828_ = lean_string_append(v___y_826_, v___y_827_);
lean_dec_ref(v___y_827_);
v___x_829_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5));
v___x_830_ = lean_string_append(v___x_828_, v___x_829_);
v___y_809_ = v___y_825_;
v___y_810_ = v___x_830_;
goto v___jp_808_;
}
v___jp_831_:
{
lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_835_ = lean_string_append(v___y_832_, v___y_834_);
lean_dec_ref(v___y_834_);
v___x_836_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_837_ = lean_string_append(v___x_835_, v___x_836_);
v___y_809_ = v___y_833_;
v___y_810_ = v___x_837_;
goto v___jp_808_;
}
v___jp_838_:
{
lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v_intZero_846_; uint8_t v_isNeg_847_; 
lean_inc_ref(v___y_841_);
v___x_843_ = lean_string_append(v___y_841_, v___y_842_);
lean_dec_ref(v___y_842_);
v___x_844_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0));
v___x_845_ = lean_string_append(v___x_843_, v___x_844_);
v_intZero_846_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_847_ = lean_int_dec_lt(v___y_839_, v_intZero_846_);
if (v_isNeg_847_ == 0)
{
lean_object* v_a_848_; lean_object* v___x_849_; 
v_a_848_ = lean_nat_abs(v___y_839_);
lean_dec(v___y_839_);
v___x_849_ = l_Nat_reprFast(v_a_848_);
v___y_832_ = v___x_845_;
v___y_833_ = v___y_840_;
v___y_834_ = v___x_849_;
goto v___jp_831_;
}
else
{
lean_object* v_abs_850_; lean_object* v_one_851_; lean_object* v_a_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v_abs_850_ = lean_nat_abs(v___y_839_);
lean_dec(v___y_839_);
v_one_851_ = lean_unsigned_to_nat(1u);
v_a_852_ = lean_nat_sub(v_abs_850_, v_one_851_);
lean_dec(v_abs_850_);
v___x_853_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_854_ = lean_nat_add(v_a_852_, v_one_851_);
lean_dec(v_a_852_);
v___x_855_ = l_Nat_reprFast(v___x_854_);
v___x_856_ = lean_string_append(v___x_853_, v___x_855_);
lean_dec_ref(v___x_855_);
v___y_832_ = v___x_845_;
v___y_833_ = v___y_840_;
v___y_834_ = v___x_856_;
goto v___jp_831_;
}
}
v___jp_857_:
{
lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
lean_inc_ref(v___y_858_);
v___x_861_ = lean_string_append(v___y_858_, v___y_860_);
lean_dec_ref(v___y_860_);
v___x_862_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7));
v___x_863_ = lean_string_append(v___x_861_, v___x_862_);
v___y_809_ = v___y_859_;
v___y_810_ = v___x_863_;
goto v___jp_808_;
}
v___jp_864_:
{
if (v___y_865_ == 0)
{
lean_object* v_lowerBound_866_; lean_object* v_upperBound_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; 
v_lowerBound_866_ = lean_ctor_get(v_s_696_, 0);
lean_inc(v_lowerBound_866_);
v_upperBound_867_ = lean_ctor_get(v_s_696_, 1);
lean_inc(v_upperBound_867_);
lean_dec_ref(v_s_696_);
v___x_868_ = l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0(v_x_697_);
lean_dec(v_x_697_);
v___x_869_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0));
v___x_870_ = lean_string_append(v___x_868_, v___x_869_);
if (lean_obj_tag(v_lowerBound_866_) == 0)
{
if (lean_obj_tag(v_upperBound_867_) == 0)
{
lean_object* v___x_871_; 
v___x_871_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2));
v___y_809_ = v___x_870_;
v___y_810_ = v___x_871_;
goto v___jp_808_;
}
else
{
lean_object* v_val_872_; lean_object* v___x_873_; lean_object* v_intZero_874_; uint8_t v_isNeg_875_; 
v_val_872_ = lean_ctor_get(v_upperBound_867_, 0);
lean_inc(v_val_872_);
lean_dec_ref_known(v_upperBound_867_, 1);
v___x_873_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3));
v_intZero_874_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_875_ = lean_int_dec_lt(v_val_872_, v_intZero_874_);
if (v_isNeg_875_ == 0)
{
lean_object* v_a_876_; lean_object* v___x_877_; 
v_a_876_ = lean_nat_abs(v_val_872_);
lean_dec(v_val_872_);
v___x_877_ = l_Nat_reprFast(v_a_876_);
v___y_818_ = v___x_870_;
v___y_819_ = v___x_873_;
v___y_820_ = v___x_877_;
goto v___jp_817_;
}
else
{
lean_object* v_abs_878_; lean_object* v_one_879_; lean_object* v_a_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
v_abs_878_ = lean_nat_abs(v_val_872_);
lean_dec(v_val_872_);
v_one_879_ = lean_unsigned_to_nat(1u);
v_a_880_ = lean_nat_sub(v_abs_878_, v_one_879_);
lean_dec(v_abs_878_);
v___x_881_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_882_ = lean_nat_add(v_a_880_, v_one_879_);
lean_dec(v_a_880_);
v___x_883_ = l_Nat_reprFast(v___x_882_);
v___x_884_ = lean_string_append(v___x_881_, v___x_883_);
lean_dec_ref(v___x_883_);
v___y_818_ = v___x_870_;
v___y_819_ = v___x_873_;
v___y_820_ = v___x_884_;
goto v___jp_817_;
}
}
}
else
{
if (lean_obj_tag(v_upperBound_867_) == 0)
{
lean_object* v_val_885_; lean_object* v___x_886_; lean_object* v_intZero_887_; uint8_t v_isNeg_888_; 
v_val_885_ = lean_ctor_get(v_lowerBound_866_, 0);
lean_inc(v_val_885_);
lean_dec_ref_known(v_lowerBound_866_, 1);
v___x_886_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_887_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_888_ = lean_int_dec_lt(v_val_885_, v_intZero_887_);
if (v_isNeg_888_ == 0)
{
lean_object* v_a_889_; lean_object* v___x_890_; 
v_a_889_ = lean_nat_abs(v_val_885_);
lean_dec(v_val_885_);
v___x_890_ = l_Nat_reprFast(v_a_889_);
v___y_825_ = v___x_870_;
v___y_826_ = v___x_886_;
v___y_827_ = v___x_890_;
goto v___jp_824_;
}
else
{
lean_object* v_abs_891_; lean_object* v_one_892_; lean_object* v_a_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v_abs_891_ = lean_nat_abs(v_val_885_);
lean_dec(v_val_885_);
v_one_892_ = lean_unsigned_to_nat(1u);
v_a_893_ = lean_nat_sub(v_abs_891_, v_one_892_);
lean_dec(v_abs_891_);
v___x_894_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_895_ = lean_nat_add(v_a_893_, v_one_892_);
lean_dec(v_a_893_);
v___x_896_ = l_Nat_reprFast(v___x_895_);
v___x_897_ = lean_string_append(v___x_894_, v___x_896_);
lean_dec_ref(v___x_896_);
v___y_825_ = v___x_870_;
v___y_826_ = v___x_886_;
v___y_827_ = v___x_897_;
goto v___jp_824_;
}
}
else
{
lean_object* v_val_898_; lean_object* v_val_899_; uint8_t v___x_900_; 
v_val_898_ = lean_ctor_get(v_lowerBound_866_, 0);
lean_inc(v_val_898_);
lean_dec_ref_known(v_lowerBound_866_, 1);
v_val_899_ = lean_ctor_get(v_upperBound_867_, 0);
lean_inc(v_val_899_);
lean_dec_ref_known(v_upperBound_867_, 1);
v___x_900_ = lean_int_dec_lt(v_val_899_, v_val_898_);
if (v___x_900_ == 0)
{
uint8_t v___x_901_; 
v___x_901_ = lean_int_dec_eq(v_val_898_, v_val_899_);
if (v___x_901_ == 0)
{
lean_object* v___x_902_; lean_object* v_intZero_903_; uint8_t v_isNeg_904_; 
v___x_902_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_903_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_904_ = lean_int_dec_lt(v_val_898_, v_intZero_903_);
if (v_isNeg_904_ == 0)
{
lean_object* v_a_905_; lean_object* v___x_906_; 
v_a_905_ = lean_nat_abs(v_val_898_);
lean_dec(v_val_898_);
v___x_906_ = l_Nat_reprFast(v_a_905_);
v___y_839_ = v_val_899_;
v___y_840_ = v___x_870_;
v___y_841_ = v___x_902_;
v___y_842_ = v___x_906_;
goto v___jp_838_;
}
else
{
lean_object* v_abs_907_; lean_object* v_one_908_; lean_object* v_a_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v_abs_907_ = lean_nat_abs(v_val_898_);
lean_dec(v_val_898_);
v_one_908_ = lean_unsigned_to_nat(1u);
v_a_909_ = lean_nat_sub(v_abs_907_, v_one_908_);
lean_dec(v_abs_907_);
v___x_910_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_911_ = lean_nat_add(v_a_909_, v_one_908_);
lean_dec(v_a_909_);
v___x_912_ = l_Nat_reprFast(v___x_911_);
v___x_913_ = lean_string_append(v___x_910_, v___x_912_);
lean_dec_ref(v___x_912_);
v___y_839_ = v_val_899_;
v___y_840_ = v___x_870_;
v___y_841_ = v___x_902_;
v___y_842_ = v___x_913_;
goto v___jp_838_;
}
}
else
{
lean_object* v___x_914_; lean_object* v_intZero_915_; uint8_t v_isNeg_916_; 
lean_dec(v_val_899_);
v___x_914_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6));
v_intZero_915_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_916_ = lean_int_dec_lt(v_val_898_, v_intZero_915_);
if (v_isNeg_916_ == 0)
{
lean_object* v_a_917_; lean_object* v___x_918_; 
v_a_917_ = lean_nat_abs(v_val_898_);
lean_dec(v_val_898_);
v___x_918_ = l_Nat_reprFast(v_a_917_);
v___y_858_ = v___x_914_;
v___y_859_ = v___x_870_;
v___y_860_ = v___x_918_;
goto v___jp_857_;
}
else
{
lean_object* v_abs_919_; lean_object* v_one_920_; lean_object* v_a_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v_abs_919_ = lean_nat_abs(v_val_898_);
lean_dec(v_val_898_);
v_one_920_ = lean_unsigned_to_nat(1u);
v_a_921_ = lean_nat_sub(v_abs_919_, v_one_920_);
lean_dec(v_abs_919_);
v___x_922_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_923_ = lean_nat_add(v_a_921_, v_one_920_);
lean_dec(v_a_921_);
v___x_924_ = l_Nat_reprFast(v___x_923_);
v___x_925_ = lean_string_append(v___x_922_, v___x_924_);
lean_dec_ref(v___x_924_);
v___y_858_ = v___x_914_;
v___y_859_ = v___x_870_;
v___y_860_ = v___x_925_;
goto v___jp_857_;
}
}
}
else
{
lean_object* v___x_926_; 
lean_dec(v_val_899_);
lean_dec(v_val_898_);
v___x_926_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8));
v___y_809_ = v___x_870_;
v___y_810_ = v___x_926_;
goto v___jp_808_;
}
}
}
}
else
{
lean_dec(v_x_697_);
lean_dec_ref(v_s_696_);
v_s_696_ = v_s_805_;
v_x_697_ = v_c_806_;
v_x_698_ = v_j_807_;
goto _start;
}
}
}
case 2:
{
lean_object* v_s_930_; lean_object* v_t_931_; lean_object* v_j_932_; lean_object* v_k_933_; lean_object* v_lowerBound_934_; lean_object* v_upperBound_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___y_940_; lean_object* v___y_953_; lean_object* v___y_954_; 
v_s_930_ = lean_ctor_get(v_x_698_, 0);
lean_inc_ref(v_s_930_);
v_t_931_ = lean_ctor_get(v_x_698_, 1);
lean_inc_ref(v_t_931_);
v_j_932_ = lean_ctor_get(v_x_698_, 3);
lean_inc_ref(v_j_932_);
v_k_933_ = lean_ctor_get(v_x_698_, 4);
lean_inc_ref(v_k_933_);
lean_dec_ref_known(v_x_698_, 5);
v_lowerBound_934_ = lean_ctor_get(v_s_696_, 0);
lean_inc(v_lowerBound_934_);
v_upperBound_935_ = lean_ctor_get(v_s_696_, 1);
lean_inc(v_upperBound_935_);
lean_dec_ref(v_s_696_);
v___x_936_ = l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0(v_x_697_);
v___x_937_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0));
v___x_938_ = lean_string_append(v___x_936_, v___x_937_);
if (lean_obj_tag(v_lowerBound_934_) == 0)
{
if (lean_obj_tag(v_upperBound_935_) == 0)
{
lean_object* v___x_958_; 
v___x_958_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2));
v___y_940_ = v___x_958_;
goto v___jp_939_;
}
else
{
lean_object* v_val_959_; lean_object* v___x_960_; lean_object* v___y_962_; lean_object* v_intZero_966_; uint8_t v_isNeg_967_; 
v_val_959_ = lean_ctor_get(v_upperBound_935_, 0);
lean_inc(v_val_959_);
lean_dec_ref_known(v_upperBound_935_, 1);
v___x_960_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3));
v_intZero_966_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_967_ = lean_int_dec_lt(v_val_959_, v_intZero_966_);
if (v_isNeg_967_ == 0)
{
lean_object* v_a_968_; lean_object* v___x_969_; 
v_a_968_ = lean_nat_abs(v_val_959_);
lean_dec(v_val_959_);
v___x_969_ = l_Nat_reprFast(v_a_968_);
v___y_962_ = v___x_969_;
goto v___jp_961_;
}
else
{
lean_object* v_abs_970_; lean_object* v_one_971_; lean_object* v_a_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
v_abs_970_ = lean_nat_abs(v_val_959_);
lean_dec(v_val_959_);
v_one_971_ = lean_unsigned_to_nat(1u);
v_a_972_ = lean_nat_sub(v_abs_970_, v_one_971_);
lean_dec(v_abs_970_);
v___x_973_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_974_ = lean_nat_add(v_a_972_, v_one_971_);
lean_dec(v_a_972_);
v___x_975_ = l_Nat_reprFast(v___x_974_);
v___x_976_ = lean_string_append(v___x_973_, v___x_975_);
lean_dec_ref(v___x_975_);
v___y_962_ = v___x_976_;
goto v___jp_961_;
}
v___jp_961_:
{
lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v___x_963_ = lean_string_append(v___x_960_, v___y_962_);
lean_dec_ref(v___y_962_);
v___x_964_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_965_ = lean_string_append(v___x_963_, v___x_964_);
v___y_940_ = v___x_965_;
goto v___jp_939_;
}
}
}
else
{
if (lean_obj_tag(v_upperBound_935_) == 0)
{
lean_object* v_val_977_; lean_object* v___x_978_; lean_object* v___y_980_; lean_object* v_intZero_984_; uint8_t v_isNeg_985_; 
v_val_977_ = lean_ctor_get(v_lowerBound_934_, 0);
lean_inc(v_val_977_);
lean_dec_ref_known(v_lowerBound_934_, 1);
v___x_978_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_984_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_985_ = lean_int_dec_lt(v_val_977_, v_intZero_984_);
if (v_isNeg_985_ == 0)
{
lean_object* v_a_986_; lean_object* v___x_987_; 
v_a_986_ = lean_nat_abs(v_val_977_);
lean_dec(v_val_977_);
v___x_987_ = l_Nat_reprFast(v_a_986_);
v___y_980_ = v___x_987_;
goto v___jp_979_;
}
else
{
lean_object* v_abs_988_; lean_object* v_one_989_; lean_object* v_a_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v_abs_988_ = lean_nat_abs(v_val_977_);
lean_dec(v_val_977_);
v_one_989_ = lean_unsigned_to_nat(1u);
v_a_990_ = lean_nat_sub(v_abs_988_, v_one_989_);
lean_dec(v_abs_988_);
v___x_991_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_992_ = lean_nat_add(v_a_990_, v_one_989_);
lean_dec(v_a_990_);
v___x_993_ = l_Nat_reprFast(v___x_992_);
v___x_994_ = lean_string_append(v___x_991_, v___x_993_);
lean_dec_ref(v___x_993_);
v___y_980_ = v___x_994_;
goto v___jp_979_;
}
v___jp_979_:
{
lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_981_ = lean_string_append(v___x_978_, v___y_980_);
lean_dec_ref(v___y_980_);
v___x_982_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5));
v___x_983_ = lean_string_append(v___x_981_, v___x_982_);
v___y_940_ = v___x_983_;
goto v___jp_939_;
}
}
else
{
lean_object* v_val_995_; lean_object* v_val_996_; uint8_t v___x_997_; 
v_val_995_ = lean_ctor_get(v_lowerBound_934_, 0);
lean_inc(v_val_995_);
lean_dec_ref_known(v_lowerBound_934_, 1);
v_val_996_ = lean_ctor_get(v_upperBound_935_, 0);
lean_inc(v_val_996_);
lean_dec_ref_known(v_upperBound_935_, 1);
v___x_997_ = lean_int_dec_lt(v_val_996_, v_val_995_);
if (v___x_997_ == 0)
{
uint8_t v___x_998_; 
v___x_998_ = lean_int_dec_eq(v_val_995_, v_val_996_);
if (v___x_998_ == 0)
{
lean_object* v___x_999_; lean_object* v___y_1001_; lean_object* v_intZero_1016_; uint8_t v_isNeg_1017_; 
v___x_999_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_1016_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_1017_ = lean_int_dec_lt(v_val_995_, v_intZero_1016_);
if (v_isNeg_1017_ == 0)
{
lean_object* v_a_1018_; lean_object* v___x_1019_; 
v_a_1018_ = lean_nat_abs(v_val_995_);
lean_dec(v_val_995_);
v___x_1019_ = l_Nat_reprFast(v_a_1018_);
v___y_1001_ = v___x_1019_;
goto v___jp_1000_;
}
else
{
lean_object* v_abs_1020_; lean_object* v_one_1021_; lean_object* v_a_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v_abs_1020_ = lean_nat_abs(v_val_995_);
lean_dec(v_val_995_);
v_one_1021_ = lean_unsigned_to_nat(1u);
v_a_1022_ = lean_nat_sub(v_abs_1020_, v_one_1021_);
lean_dec(v_abs_1020_);
v___x_1023_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1024_ = lean_nat_add(v_a_1022_, v_one_1021_);
lean_dec(v_a_1022_);
v___x_1025_ = l_Nat_reprFast(v___x_1024_);
v___x_1026_ = lean_string_append(v___x_1023_, v___x_1025_);
lean_dec_ref(v___x_1025_);
v___y_1001_ = v___x_1026_;
goto v___jp_1000_;
}
v___jp_1000_:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v_intZero_1005_; uint8_t v_isNeg_1006_; 
v___x_1002_ = lean_string_append(v___x_999_, v___y_1001_);
lean_dec_ref(v___y_1001_);
v___x_1003_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0));
v___x_1004_ = lean_string_append(v___x_1002_, v___x_1003_);
v_intZero_1005_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_1006_ = lean_int_dec_lt(v_val_996_, v_intZero_1005_);
if (v_isNeg_1006_ == 0)
{
lean_object* v_a_1007_; lean_object* v___x_1008_; 
v_a_1007_ = lean_nat_abs(v_val_996_);
lean_dec(v_val_996_);
v___x_1008_ = l_Nat_reprFast(v_a_1007_);
v___y_953_ = v___x_1004_;
v___y_954_ = v___x_1008_;
goto v___jp_952_;
}
else
{
lean_object* v_abs_1009_; lean_object* v_one_1010_; lean_object* v_a_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v_abs_1009_ = lean_nat_abs(v_val_996_);
lean_dec(v_val_996_);
v_one_1010_ = lean_unsigned_to_nat(1u);
v_a_1011_ = lean_nat_sub(v_abs_1009_, v_one_1010_);
lean_dec(v_abs_1009_);
v___x_1012_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1013_ = lean_nat_add(v_a_1011_, v_one_1010_);
lean_dec(v_a_1011_);
v___x_1014_ = l_Nat_reprFast(v___x_1013_);
v___x_1015_ = lean_string_append(v___x_1012_, v___x_1014_);
lean_dec_ref(v___x_1014_);
v___y_953_ = v___x_1004_;
v___y_954_ = v___x_1015_;
goto v___jp_952_;
}
}
}
else
{
lean_object* v___x_1027_; lean_object* v___y_1029_; lean_object* v_intZero_1033_; uint8_t v_isNeg_1034_; 
lean_dec(v_val_996_);
v___x_1027_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6));
v_intZero_1033_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_1034_ = lean_int_dec_lt(v_val_995_, v_intZero_1033_);
if (v_isNeg_1034_ == 0)
{
lean_object* v_a_1035_; lean_object* v___x_1036_; 
v_a_1035_ = lean_nat_abs(v_val_995_);
lean_dec(v_val_995_);
v___x_1036_ = l_Nat_reprFast(v_a_1035_);
v___y_1029_ = v___x_1036_;
goto v___jp_1028_;
}
else
{
lean_object* v_abs_1037_; lean_object* v_one_1038_; lean_object* v_a_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; 
v_abs_1037_ = lean_nat_abs(v_val_995_);
lean_dec(v_val_995_);
v_one_1038_ = lean_unsigned_to_nat(1u);
v_a_1039_ = lean_nat_sub(v_abs_1037_, v_one_1038_);
lean_dec(v_abs_1037_);
v___x_1040_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1041_ = lean_nat_add(v_a_1039_, v_one_1038_);
lean_dec(v_a_1039_);
v___x_1042_ = l_Nat_reprFast(v___x_1041_);
v___x_1043_ = lean_string_append(v___x_1040_, v___x_1042_);
lean_dec_ref(v___x_1042_);
v___y_1029_ = v___x_1043_;
goto v___jp_1028_;
}
v___jp_1028_:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1030_ = lean_string_append(v___x_1027_, v___y_1029_);
lean_dec_ref(v___y_1029_);
v___x_1031_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7));
v___x_1032_ = lean_string_append(v___x_1030_, v___x_1031_);
v___y_940_ = v___x_1032_;
goto v___jp_939_;
}
}
}
else
{
lean_object* v___x_1044_; 
lean_dec(v_val_996_);
lean_dec(v_val_995_);
v___x_1044_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8));
v___y_940_ = v___x_1044_;
goto v___jp_939_;
}
}
}
v___jp_939_:
{
lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_941_ = lean_string_append(v___x_938_, v___y_940_);
lean_dec_ref(v___y_940_);
v___x_942_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__10));
v___x_943_ = lean_string_append(v___x_941_, v___x_942_);
lean_inc(v_x_697_);
v___x_944_ = l_Lean_Elab_Tactic_Omega_Justification_toString(v_s_930_, v_x_697_, v_j_932_);
v___x_945_ = l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet(v___x_944_);
v___x_946_ = lean_string_append(v___x_943_, v___x_945_);
lean_dec_ref(v___x_945_);
v___x_947_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0));
v___x_948_ = lean_string_append(v___x_946_, v___x_947_);
v___x_949_ = l_Lean_Elab_Tactic_Omega_Justification_toString(v_t_931_, v_x_697_, v_k_933_);
v___x_950_ = l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet(v___x_949_);
v___x_951_ = lean_string_append(v___x_948_, v___x_950_);
lean_dec_ref(v___x_950_);
return v___x_951_;
}
v___jp_952_:
{
lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_955_ = lean_string_append(v___y_953_, v___y_954_);
lean_dec_ref(v___y_954_);
v___x_956_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_957_ = lean_string_append(v___x_955_, v___x_956_);
v___y_940_ = v___x_957_;
goto v___jp_939_;
}
}
case 3:
{
lean_object* v_s_1045_; lean_object* v_t_1046_; lean_object* v_x_1047_; lean_object* v_y_1048_; lean_object* v_a_1049_; lean_object* v_j_1050_; lean_object* v_b_1051_; lean_object* v_k_1052_; lean_object* v_lowerBound_1053_; lean_object* v_upperBound_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___y_1059_; lean_object* v___y_1080_; lean_object* v___y_1081_; 
v_s_1045_ = lean_ctor_get(v_x_698_, 0);
lean_inc_ref(v_s_1045_);
v_t_1046_ = lean_ctor_get(v_x_698_, 1);
lean_inc_ref(v_t_1046_);
v_x_1047_ = lean_ctor_get(v_x_698_, 2);
lean_inc(v_x_1047_);
v_y_1048_ = lean_ctor_get(v_x_698_, 3);
lean_inc(v_y_1048_);
v_a_1049_ = lean_ctor_get(v_x_698_, 4);
lean_inc(v_a_1049_);
v_j_1050_ = lean_ctor_get(v_x_698_, 5);
lean_inc_ref(v_j_1050_);
v_b_1051_ = lean_ctor_get(v_x_698_, 6);
lean_inc(v_b_1051_);
v_k_1052_ = lean_ctor_get(v_x_698_, 7);
lean_inc_ref(v_k_1052_);
lean_dec_ref_known(v_x_698_, 8);
v_lowerBound_1053_ = lean_ctor_get(v_s_696_, 0);
lean_inc(v_lowerBound_1053_);
v_upperBound_1054_ = lean_ctor_get(v_s_696_, 1);
lean_inc(v_upperBound_1054_);
lean_dec_ref(v_s_696_);
v___x_1055_ = l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0(v_x_697_);
lean_dec(v_x_697_);
v___x_1056_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0));
v___x_1057_ = lean_string_append(v___x_1055_, v___x_1056_);
if (lean_obj_tag(v_lowerBound_1053_) == 0)
{
if (lean_obj_tag(v_upperBound_1054_) == 0)
{
lean_object* v___x_1085_; 
v___x_1085_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2));
v___y_1059_ = v___x_1085_;
goto v___jp_1058_;
}
else
{
lean_object* v_val_1086_; lean_object* v___x_1087_; lean_object* v___y_1089_; lean_object* v_intZero_1093_; uint8_t v_isNeg_1094_; 
v_val_1086_ = lean_ctor_get(v_upperBound_1054_, 0);
lean_inc(v_val_1086_);
lean_dec_ref_known(v_upperBound_1054_, 1);
v___x_1087_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3));
v_intZero_1093_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_1094_ = lean_int_dec_lt(v_val_1086_, v_intZero_1093_);
if (v_isNeg_1094_ == 0)
{
lean_object* v_a_1095_; lean_object* v___x_1096_; 
v_a_1095_ = lean_nat_abs(v_val_1086_);
lean_dec(v_val_1086_);
v___x_1096_ = l_Nat_reprFast(v_a_1095_);
v___y_1089_ = v___x_1096_;
goto v___jp_1088_;
}
else
{
lean_object* v_abs_1097_; lean_object* v_one_1098_; lean_object* v_a_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; 
v_abs_1097_ = lean_nat_abs(v_val_1086_);
lean_dec(v_val_1086_);
v_one_1098_ = lean_unsigned_to_nat(1u);
v_a_1099_ = lean_nat_sub(v_abs_1097_, v_one_1098_);
lean_dec(v_abs_1097_);
v___x_1100_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1101_ = lean_nat_add(v_a_1099_, v_one_1098_);
lean_dec(v_a_1099_);
v___x_1102_ = l_Nat_reprFast(v___x_1101_);
v___x_1103_ = lean_string_append(v___x_1100_, v___x_1102_);
lean_dec_ref(v___x_1102_);
v___y_1089_ = v___x_1103_;
goto v___jp_1088_;
}
v___jp_1088_:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1090_ = lean_string_append(v___x_1087_, v___y_1089_);
lean_dec_ref(v___y_1089_);
v___x_1091_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_1092_ = lean_string_append(v___x_1090_, v___x_1091_);
v___y_1059_ = v___x_1092_;
goto v___jp_1058_;
}
}
}
else
{
if (lean_obj_tag(v_upperBound_1054_) == 0)
{
lean_object* v_val_1104_; lean_object* v___x_1105_; lean_object* v___y_1107_; lean_object* v_intZero_1111_; uint8_t v_isNeg_1112_; 
v_val_1104_ = lean_ctor_get(v_lowerBound_1053_, 0);
lean_inc(v_val_1104_);
lean_dec_ref_known(v_lowerBound_1053_, 1);
v___x_1105_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_1111_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_1112_ = lean_int_dec_lt(v_val_1104_, v_intZero_1111_);
if (v_isNeg_1112_ == 0)
{
lean_object* v_a_1113_; lean_object* v___x_1114_; 
v_a_1113_ = lean_nat_abs(v_val_1104_);
lean_dec(v_val_1104_);
v___x_1114_ = l_Nat_reprFast(v_a_1113_);
v___y_1107_ = v___x_1114_;
goto v___jp_1106_;
}
else
{
lean_object* v_abs_1115_; lean_object* v_one_1116_; lean_object* v_a_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
v_abs_1115_ = lean_nat_abs(v_val_1104_);
lean_dec(v_val_1104_);
v_one_1116_ = lean_unsigned_to_nat(1u);
v_a_1117_ = lean_nat_sub(v_abs_1115_, v_one_1116_);
lean_dec(v_abs_1115_);
v___x_1118_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1119_ = lean_nat_add(v_a_1117_, v_one_1116_);
lean_dec(v_a_1117_);
v___x_1120_ = l_Nat_reprFast(v___x_1119_);
v___x_1121_ = lean_string_append(v___x_1118_, v___x_1120_);
lean_dec_ref(v___x_1120_);
v___y_1107_ = v___x_1121_;
goto v___jp_1106_;
}
v___jp_1106_:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1108_ = lean_string_append(v___x_1105_, v___y_1107_);
lean_dec_ref(v___y_1107_);
v___x_1109_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5));
v___x_1110_ = lean_string_append(v___x_1108_, v___x_1109_);
v___y_1059_ = v___x_1110_;
goto v___jp_1058_;
}
}
else
{
lean_object* v_val_1122_; lean_object* v_val_1123_; uint8_t v___x_1124_; 
v_val_1122_ = lean_ctor_get(v_lowerBound_1053_, 0);
lean_inc(v_val_1122_);
lean_dec_ref_known(v_lowerBound_1053_, 1);
v_val_1123_ = lean_ctor_get(v_upperBound_1054_, 0);
lean_inc(v_val_1123_);
lean_dec_ref_known(v_upperBound_1054_, 1);
v___x_1124_ = lean_int_dec_lt(v_val_1123_, v_val_1122_);
if (v___x_1124_ == 0)
{
uint8_t v___x_1125_; 
v___x_1125_ = lean_int_dec_eq(v_val_1122_, v_val_1123_);
if (v___x_1125_ == 0)
{
lean_object* v___x_1126_; lean_object* v___y_1128_; lean_object* v_intZero_1143_; uint8_t v_isNeg_1144_; 
v___x_1126_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_1143_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_1144_ = lean_int_dec_lt(v_val_1122_, v_intZero_1143_);
if (v_isNeg_1144_ == 0)
{
lean_object* v_a_1145_; lean_object* v___x_1146_; 
v_a_1145_ = lean_nat_abs(v_val_1122_);
lean_dec(v_val_1122_);
v___x_1146_ = l_Nat_reprFast(v_a_1145_);
v___y_1128_ = v___x_1146_;
goto v___jp_1127_;
}
else
{
lean_object* v_abs_1147_; lean_object* v_one_1148_; lean_object* v_a_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
v_abs_1147_ = lean_nat_abs(v_val_1122_);
lean_dec(v_val_1122_);
v_one_1148_ = lean_unsigned_to_nat(1u);
v_a_1149_ = lean_nat_sub(v_abs_1147_, v_one_1148_);
lean_dec(v_abs_1147_);
v___x_1150_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1151_ = lean_nat_add(v_a_1149_, v_one_1148_);
lean_dec(v_a_1149_);
v___x_1152_ = l_Nat_reprFast(v___x_1151_);
v___x_1153_ = lean_string_append(v___x_1150_, v___x_1152_);
lean_dec_ref(v___x_1152_);
v___y_1128_ = v___x_1153_;
goto v___jp_1127_;
}
v___jp_1127_:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v_intZero_1132_; uint8_t v_isNeg_1133_; 
v___x_1129_ = lean_string_append(v___x_1126_, v___y_1128_);
lean_dec_ref(v___y_1128_);
v___x_1130_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0));
v___x_1131_ = lean_string_append(v___x_1129_, v___x_1130_);
v_intZero_1132_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_1133_ = lean_int_dec_lt(v_val_1123_, v_intZero_1132_);
if (v_isNeg_1133_ == 0)
{
lean_object* v_a_1134_; lean_object* v___x_1135_; 
v_a_1134_ = lean_nat_abs(v_val_1123_);
lean_dec(v_val_1123_);
v___x_1135_ = l_Nat_reprFast(v_a_1134_);
v___y_1080_ = v___x_1131_;
v___y_1081_ = v___x_1135_;
goto v___jp_1079_;
}
else
{
lean_object* v_abs_1136_; lean_object* v_one_1137_; lean_object* v_a_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v_abs_1136_ = lean_nat_abs(v_val_1123_);
lean_dec(v_val_1123_);
v_one_1137_ = lean_unsigned_to_nat(1u);
v_a_1138_ = lean_nat_sub(v_abs_1136_, v_one_1137_);
lean_dec(v_abs_1136_);
v___x_1139_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1140_ = lean_nat_add(v_a_1138_, v_one_1137_);
lean_dec(v_a_1138_);
v___x_1141_ = l_Nat_reprFast(v___x_1140_);
v___x_1142_ = lean_string_append(v___x_1139_, v___x_1141_);
lean_dec_ref(v___x_1141_);
v___y_1080_ = v___x_1131_;
v___y_1081_ = v___x_1142_;
goto v___jp_1079_;
}
}
}
else
{
lean_object* v___x_1154_; lean_object* v___y_1156_; lean_object* v_intZero_1160_; uint8_t v_isNeg_1161_; 
lean_dec(v_val_1123_);
v___x_1154_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6));
v_intZero_1160_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_1161_ = lean_int_dec_lt(v_val_1122_, v_intZero_1160_);
if (v_isNeg_1161_ == 0)
{
lean_object* v_a_1162_; lean_object* v___x_1163_; 
v_a_1162_ = lean_nat_abs(v_val_1122_);
lean_dec(v_val_1122_);
v___x_1163_ = l_Nat_reprFast(v_a_1162_);
v___y_1156_ = v___x_1163_;
goto v___jp_1155_;
}
else
{
lean_object* v_abs_1164_; lean_object* v_one_1165_; lean_object* v_a_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
v_abs_1164_ = lean_nat_abs(v_val_1122_);
lean_dec(v_val_1122_);
v_one_1165_ = lean_unsigned_to_nat(1u);
v_a_1166_ = lean_nat_sub(v_abs_1164_, v_one_1165_);
lean_dec(v_abs_1164_);
v___x_1167_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1168_ = lean_nat_add(v_a_1166_, v_one_1165_);
lean_dec(v_a_1166_);
v___x_1169_ = l_Nat_reprFast(v___x_1168_);
v___x_1170_ = lean_string_append(v___x_1167_, v___x_1169_);
lean_dec_ref(v___x_1169_);
v___y_1156_ = v___x_1170_;
goto v___jp_1155_;
}
v___jp_1155_:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1157_ = lean_string_append(v___x_1154_, v___y_1156_);
lean_dec_ref(v___y_1156_);
v___x_1158_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7));
v___x_1159_ = lean_string_append(v___x_1157_, v___x_1158_);
v___y_1059_ = v___x_1159_;
goto v___jp_1058_;
}
}
}
else
{
lean_object* v___x_1171_; 
lean_dec(v_val_1123_);
lean_dec(v_val_1122_);
v___x_1171_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8));
v___y_1059_ = v___x_1171_;
goto v___jp_1058_;
}
}
}
v___jp_1058_:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v___x_1060_ = lean_string_append(v___x_1057_, v___y_1059_);
lean_dec_ref(v___y_1059_);
v___x_1061_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__11));
v___x_1062_ = lean_string_append(v___x_1060_, v___x_1061_);
v___x_1063_ = l_Int_repr(v_a_1049_);
lean_dec(v_a_1049_);
v___x_1064_ = lean_string_append(v___x_1062_, v___x_1063_);
lean_dec_ref(v___x_1063_);
v___x_1065_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__12));
v___x_1066_ = lean_string_append(v___x_1064_, v___x_1065_);
v___x_1067_ = l_Int_repr(v_b_1051_);
lean_dec(v_b_1051_);
v___x_1068_ = lean_string_append(v___x_1066_, v___x_1067_);
lean_dec_ref(v___x_1067_);
v___x_1069_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__13));
v___x_1070_ = lean_string_append(v___x_1068_, v___x_1069_);
v___x_1071_ = l_Lean_Elab_Tactic_Omega_Justification_toString(v_s_1045_, v_x_1047_, v_j_1050_);
v___x_1072_ = l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet(v___x_1071_);
v___x_1073_ = lean_string_append(v___x_1070_, v___x_1072_);
lean_dec_ref(v___x_1072_);
v___x_1074_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0));
v___x_1075_ = lean_string_append(v___x_1073_, v___x_1074_);
v___x_1076_ = l_Lean_Elab_Tactic_Omega_Justification_toString(v_t_1046_, v_y_1048_, v_k_1052_);
v___x_1077_ = l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet(v___x_1076_);
v___x_1078_ = lean_string_append(v___x_1075_, v___x_1077_);
lean_dec_ref(v___x_1077_);
return v___x_1078_;
}
v___jp_1079_:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; 
v___x_1082_ = lean_string_append(v___y_1080_, v___y_1081_);
lean_dec_ref(v___y_1081_);
v___x_1083_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_1084_ = lean_string_append(v___x_1082_, v___x_1083_);
v___y_1059_ = v___x_1084_;
goto v___jp_1058_;
}
}
default: 
{
lean_object* v_m_1172_; lean_object* v_r_1173_; lean_object* v_i_1174_; lean_object* v_x_1175_; lean_object* v_j_1176_; lean_object* v_lowerBound_1177_; lean_object* v_upperBound_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___y_1183_; lean_object* v___y_1200_; lean_object* v___y_1201_; 
v_m_1172_ = lean_ctor_get(v_x_698_, 0);
lean_inc(v_m_1172_);
v_r_1173_ = lean_ctor_get(v_x_698_, 1);
lean_inc(v_r_1173_);
v_i_1174_ = lean_ctor_get(v_x_698_, 2);
lean_inc(v_i_1174_);
v_x_1175_ = lean_ctor_get(v_x_698_, 3);
lean_inc(v_x_1175_);
v_j_1176_ = lean_ctor_get(v_x_698_, 4);
lean_inc_ref(v_j_1176_);
lean_dec_ref_known(v_x_698_, 5);
v_lowerBound_1177_ = lean_ctor_get(v_s_696_, 0);
lean_inc(v_lowerBound_1177_);
v_upperBound_1178_ = lean_ctor_get(v_s_696_, 1);
lean_inc(v_upperBound_1178_);
lean_dec_ref(v_s_696_);
v___x_1179_ = l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0(v_x_697_);
lean_dec(v_x_697_);
v___x_1180_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0));
v___x_1181_ = lean_string_append(v___x_1179_, v___x_1180_);
if (lean_obj_tag(v_lowerBound_1177_) == 0)
{
if (lean_obj_tag(v_upperBound_1178_) == 0)
{
lean_object* v___x_1205_; 
v___x_1205_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2));
v___y_1183_ = v___x_1205_;
goto v___jp_1182_;
}
else
{
lean_object* v_val_1206_; lean_object* v___x_1207_; lean_object* v___y_1209_; lean_object* v_intZero_1213_; uint8_t v_isNeg_1214_; 
v_val_1206_ = lean_ctor_get(v_upperBound_1178_, 0);
lean_inc(v_val_1206_);
lean_dec_ref_known(v_upperBound_1178_, 1);
v___x_1207_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3));
v_intZero_1213_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_1214_ = lean_int_dec_lt(v_val_1206_, v_intZero_1213_);
if (v_isNeg_1214_ == 0)
{
lean_object* v_a_1215_; lean_object* v___x_1216_; 
v_a_1215_ = lean_nat_abs(v_val_1206_);
lean_dec(v_val_1206_);
v___x_1216_ = l_Nat_reprFast(v_a_1215_);
v___y_1209_ = v___x_1216_;
goto v___jp_1208_;
}
else
{
lean_object* v_abs_1217_; lean_object* v_one_1218_; lean_object* v_a_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; 
v_abs_1217_ = lean_nat_abs(v_val_1206_);
lean_dec(v_val_1206_);
v_one_1218_ = lean_unsigned_to_nat(1u);
v_a_1219_ = lean_nat_sub(v_abs_1217_, v_one_1218_);
lean_dec(v_abs_1217_);
v___x_1220_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1221_ = lean_nat_add(v_a_1219_, v_one_1218_);
lean_dec(v_a_1219_);
v___x_1222_ = l_Nat_reprFast(v___x_1221_);
v___x_1223_ = lean_string_append(v___x_1220_, v___x_1222_);
lean_dec_ref(v___x_1222_);
v___y_1209_ = v___x_1223_;
goto v___jp_1208_;
}
v___jp_1208_:
{
lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___x_1210_ = lean_string_append(v___x_1207_, v___y_1209_);
lean_dec_ref(v___y_1209_);
v___x_1211_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_1212_ = lean_string_append(v___x_1210_, v___x_1211_);
v___y_1183_ = v___x_1212_;
goto v___jp_1182_;
}
}
}
else
{
if (lean_obj_tag(v_upperBound_1178_) == 0)
{
lean_object* v_val_1224_; lean_object* v___x_1225_; lean_object* v___y_1227_; lean_object* v_intZero_1231_; uint8_t v_isNeg_1232_; 
v_val_1224_ = lean_ctor_get(v_lowerBound_1177_, 0);
lean_inc(v_val_1224_);
lean_dec_ref_known(v_lowerBound_1177_, 1);
v___x_1225_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_1231_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_1232_ = lean_int_dec_lt(v_val_1224_, v_intZero_1231_);
if (v_isNeg_1232_ == 0)
{
lean_object* v_a_1233_; lean_object* v___x_1234_; 
v_a_1233_ = lean_nat_abs(v_val_1224_);
lean_dec(v_val_1224_);
v___x_1234_ = l_Nat_reprFast(v_a_1233_);
v___y_1227_ = v___x_1234_;
goto v___jp_1226_;
}
else
{
lean_object* v_abs_1235_; lean_object* v_one_1236_; lean_object* v_a_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
v_abs_1235_ = lean_nat_abs(v_val_1224_);
lean_dec(v_val_1224_);
v_one_1236_ = lean_unsigned_to_nat(1u);
v_a_1237_ = lean_nat_sub(v_abs_1235_, v_one_1236_);
lean_dec(v_abs_1235_);
v___x_1238_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1239_ = lean_nat_add(v_a_1237_, v_one_1236_);
lean_dec(v_a_1237_);
v___x_1240_ = l_Nat_reprFast(v___x_1239_);
v___x_1241_ = lean_string_append(v___x_1238_, v___x_1240_);
lean_dec_ref(v___x_1240_);
v___y_1227_ = v___x_1241_;
goto v___jp_1226_;
}
v___jp_1226_:
{
lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1228_ = lean_string_append(v___x_1225_, v___y_1227_);
lean_dec_ref(v___y_1227_);
v___x_1229_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5));
v___x_1230_ = lean_string_append(v___x_1228_, v___x_1229_);
v___y_1183_ = v___x_1230_;
goto v___jp_1182_;
}
}
else
{
lean_object* v_val_1242_; lean_object* v_val_1243_; uint8_t v___x_1244_; 
v_val_1242_ = lean_ctor_get(v_lowerBound_1177_, 0);
lean_inc(v_val_1242_);
lean_dec_ref_known(v_lowerBound_1177_, 1);
v_val_1243_ = lean_ctor_get(v_upperBound_1178_, 0);
lean_inc(v_val_1243_);
lean_dec_ref_known(v_upperBound_1178_, 1);
v___x_1244_ = lean_int_dec_lt(v_val_1243_, v_val_1242_);
if (v___x_1244_ == 0)
{
uint8_t v___x_1245_; 
v___x_1245_ = lean_int_dec_eq(v_val_1242_, v_val_1243_);
if (v___x_1245_ == 0)
{
lean_object* v___x_1246_; lean_object* v___y_1248_; lean_object* v_intZero_1263_; uint8_t v_isNeg_1264_; 
v___x_1246_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_1263_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_1264_ = lean_int_dec_lt(v_val_1242_, v_intZero_1263_);
if (v_isNeg_1264_ == 0)
{
lean_object* v_a_1265_; lean_object* v___x_1266_; 
v_a_1265_ = lean_nat_abs(v_val_1242_);
lean_dec(v_val_1242_);
v___x_1266_ = l_Nat_reprFast(v_a_1265_);
v___y_1248_ = v___x_1266_;
goto v___jp_1247_;
}
else
{
lean_object* v_abs_1267_; lean_object* v_one_1268_; lean_object* v_a_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; 
v_abs_1267_ = lean_nat_abs(v_val_1242_);
lean_dec(v_val_1242_);
v_one_1268_ = lean_unsigned_to_nat(1u);
v_a_1269_ = lean_nat_sub(v_abs_1267_, v_one_1268_);
lean_dec(v_abs_1267_);
v___x_1270_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1271_ = lean_nat_add(v_a_1269_, v_one_1268_);
lean_dec(v_a_1269_);
v___x_1272_ = l_Nat_reprFast(v___x_1271_);
v___x_1273_ = lean_string_append(v___x_1270_, v___x_1272_);
lean_dec_ref(v___x_1272_);
v___y_1248_ = v___x_1273_;
goto v___jp_1247_;
}
v___jp_1247_:
{
lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v_intZero_1252_; uint8_t v_isNeg_1253_; 
v___x_1249_ = lean_string_append(v___x_1246_, v___y_1248_);
lean_dec_ref(v___y_1248_);
v___x_1250_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0));
v___x_1251_ = lean_string_append(v___x_1249_, v___x_1250_);
v_intZero_1252_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_1253_ = lean_int_dec_lt(v_val_1243_, v_intZero_1252_);
if (v_isNeg_1253_ == 0)
{
lean_object* v_a_1254_; lean_object* v___x_1255_; 
v_a_1254_ = lean_nat_abs(v_val_1243_);
lean_dec(v_val_1243_);
v___x_1255_ = l_Nat_reprFast(v_a_1254_);
v___y_1200_ = v___x_1251_;
v___y_1201_ = v___x_1255_;
goto v___jp_1199_;
}
else
{
lean_object* v_abs_1256_; lean_object* v_one_1257_; lean_object* v_a_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
v_abs_1256_ = lean_nat_abs(v_val_1243_);
lean_dec(v_val_1243_);
v_one_1257_ = lean_unsigned_to_nat(1u);
v_a_1258_ = lean_nat_sub(v_abs_1256_, v_one_1257_);
lean_dec(v_abs_1256_);
v___x_1259_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1260_ = lean_nat_add(v_a_1258_, v_one_1257_);
lean_dec(v_a_1258_);
v___x_1261_ = l_Nat_reprFast(v___x_1260_);
v___x_1262_ = lean_string_append(v___x_1259_, v___x_1261_);
lean_dec_ref(v___x_1261_);
v___y_1200_ = v___x_1251_;
v___y_1201_ = v___x_1262_;
goto v___jp_1199_;
}
}
}
else
{
lean_object* v___x_1274_; lean_object* v___y_1276_; lean_object* v_intZero_1280_; uint8_t v_isNeg_1281_; 
lean_dec(v_val_1243_);
v___x_1274_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6));
v_intZero_1280_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_1281_ = lean_int_dec_lt(v_val_1242_, v_intZero_1280_);
if (v_isNeg_1281_ == 0)
{
lean_object* v_a_1282_; lean_object* v___x_1283_; 
v_a_1282_ = lean_nat_abs(v_val_1242_);
lean_dec(v_val_1242_);
v___x_1283_ = l_Nat_reprFast(v_a_1282_);
v___y_1276_ = v___x_1283_;
goto v___jp_1275_;
}
else
{
lean_object* v_abs_1284_; lean_object* v_one_1285_; lean_object* v_a_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; 
v_abs_1284_ = lean_nat_abs(v_val_1242_);
lean_dec(v_val_1242_);
v_one_1285_ = lean_unsigned_to_nat(1u);
v_a_1286_ = lean_nat_sub(v_abs_1284_, v_one_1285_);
lean_dec(v_abs_1284_);
v___x_1287_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_1288_ = lean_nat_add(v_a_1286_, v_one_1285_);
lean_dec(v_a_1286_);
v___x_1289_ = l_Nat_reprFast(v___x_1288_);
v___x_1290_ = lean_string_append(v___x_1287_, v___x_1289_);
lean_dec_ref(v___x_1289_);
v___y_1276_ = v___x_1290_;
goto v___jp_1275_;
}
v___jp_1275_:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1277_ = lean_string_append(v___x_1274_, v___y_1276_);
lean_dec_ref(v___y_1276_);
v___x_1278_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7));
v___x_1279_ = lean_string_append(v___x_1277_, v___x_1278_);
v___y_1183_ = v___x_1279_;
goto v___jp_1182_;
}
}
}
else
{
lean_object* v___x_1291_; 
lean_dec(v_val_1243_);
lean_dec(v_val_1242_);
v___x_1291_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8));
v___y_1183_ = v___x_1291_;
goto v___jp_1182_;
}
}
}
v___jp_1182_:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1184_ = lean_string_append(v___x_1181_, v___y_1183_);
lean_dec_ref(v___y_1183_);
v___x_1185_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__14));
v___x_1186_ = lean_string_append(v___x_1184_, v___x_1185_);
v___x_1187_ = l_Nat_reprFast(v_m_1172_);
v___x_1188_ = lean_string_append(v___x_1186_, v___x_1187_);
lean_dec_ref(v___x_1187_);
v___x_1189_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__15));
v___x_1190_ = lean_string_append(v___x_1188_, v___x_1189_);
v___x_1191_ = l_Nat_reprFast(v_i_1174_);
v___x_1192_ = lean_string_append(v___x_1190_, v___x_1191_);
lean_dec_ref(v___x_1191_);
v___x_1193_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__16));
v___x_1194_ = lean_string_append(v___x_1192_, v___x_1193_);
v___x_1195_ = l_Lean_Omega_Constraint_exact(v_r_1173_);
v___x_1196_ = l_Lean_Elab_Tactic_Omega_Justification_toString(v___x_1195_, v_x_1175_, v_j_1176_);
v___x_1197_ = l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet(v___x_1196_);
v___x_1198_ = lean_string_append(v___x_1194_, v___x_1197_);
lean_dec_ref(v___x_1197_);
return v___x_1198_;
}
v___jp_1199_:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1202_ = lean_string_append(v___y_1200_, v___y_1201_);
lean_dec_ref(v___y_1201_);
v___x_1203_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_1204_ = lean_string_append(v___x_1202_, v___x_1203_);
v___y_1183_ = v___x_1204_;
goto v___jp_1182_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_instToString(lean_object* v_s_1292_, lean_object* v_x_1293_){
_start:
{
lean_object* v___x_1294_; 
v___x_1294_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_Justification_toString), 3, 2);
lean_closure_set(v___x_1294_, 0, v_s_1292_);
lean_closure_set(v___x_1294_, 1, v_x_1293_);
return v___x_1294_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(lean_object* v_nilFn_1295_, lean_object* v_consFn_1296_, lean_object* v_x_1297_){
_start:
{
if (lean_obj_tag(v_x_1297_) == 0)
{
lean_dec_ref(v_consFn_1296_);
lean_inc_ref(v_nilFn_1295_);
return v_nilFn_1295_;
}
else
{
lean_object* v_head_1298_; lean_object* v_tail_1299_; lean_object* v___y_1301_; lean_object* v___x_1304_; uint8_t v___x_1305_; 
v_head_1298_ = lean_ctor_get(v_x_1297_, 0);
v_tail_1299_ = lean_ctor_get(v_x_1297_, 1);
v___x_1304_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_1305_ = lean_int_dec_le(v___x_1304_, v_head_1298_);
if (v___x_1305_ == 0)
{
lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1306_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24);
v___x_1307_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v___x_1308_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27);
v___x_1309_ = lean_int_neg(v_head_1298_);
v___x_1310_ = l_Int_toNat(v___x_1309_);
lean_dec(v___x_1309_);
v___x_1311_ = l_Lean_instToExprInt_mkNat(v___x_1310_);
v___x_1312_ = l_Lean_mkApp3(v___x_1306_, v___x_1307_, v___x_1308_, v___x_1311_);
v___y_1301_ = v___x_1312_;
goto v___jp_1300_;
}
else
{
lean_object* v___x_1313_; lean_object* v___x_1314_; 
v___x_1313_ = l_Int_toNat(v_head_1298_);
v___x_1314_ = l_Lean_instToExprInt_mkNat(v___x_1313_);
v___y_1301_ = v___x_1314_;
goto v___jp_1300_;
}
v___jp_1300_:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; 
lean_inc_ref(v_consFn_1296_);
v___x_1302_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v_nilFn_1295_, v_consFn_1296_, v_tail_1299_);
v___x_1303_ = l_Lean_mkAppB(v_consFn_1296_, v___y_1301_, v___x_1302_);
return v___x_1303_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0___boxed(lean_object* v_nilFn_1315_, lean_object* v_consFn_1316_, lean_object* v_x_1317_){
_start:
{
lean_object* v_res_1318_; 
v_res_1318_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v_nilFn_1315_, v_consFn_1316_, v_x_1317_);
lean_dec(v_x_1317_);
lean_dec_ref(v_nilFn_1315_);
return v_res_1318_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__2(void){
_start:
{
lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1324_ = lean_box(0);
v___x_1325_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__1));
v___x_1326_ = l_Lean_Expr_const___override(v___x_1325_, v___x_1324_);
return v___x_1326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidyProof(lean_object* v_s_1327_, lean_object* v_x_1328_, lean_object* v_v_1329_, lean_object* v_prf_1330_){
_start:
{
lean_object* v___x_1331_; lean_object* v___y_1333_; lean_object* v_lowerBound_1338_; lean_object* v_upperBound_1339_; lean_object* v___x_1340_; lean_object* v_type_1341_; lean_object* v___y_1343_; lean_object* v___y_1344_; lean_object* v___y_1345_; lean_object* v___y_1349_; 
v___x_1331_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__2, &l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_Justification_tidyProof___closed__2);
v_lowerBound_1338_ = lean_ctor_get(v_s_1327_, 0);
v_upperBound_1339_ = lean_ctor_get(v_s_1327_, 1);
v___x_1340_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2);
v_type_1341_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
if (lean_obj_tag(v_lowerBound_1338_) == 0)
{
lean_object* v___x_1365_; 
v___x_1365_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___y_1349_ = v___x_1365_;
goto v___jp_1348_;
}
else
{
lean_object* v_val_1366_; lean_object* v___x_1367_; lean_object* v___y_1369_; lean_object* v___x_1371_; uint8_t v___x_1372_; 
v_val_1366_ = lean_ctor_get(v_lowerBound_1338_, 0);
v___x_1367_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_1371_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_1372_ = lean_int_dec_le(v___x_1371_, v_val_1366_);
if (v___x_1372_ == 0)
{
lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; 
v___x_1373_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24);
v___x_1374_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27);
v___x_1375_ = lean_int_neg(v_val_1366_);
v___x_1376_ = l_Int_toNat(v___x_1375_);
lean_dec(v___x_1375_);
v___x_1377_ = l_Lean_instToExprInt_mkNat(v___x_1376_);
v___x_1378_ = l_Lean_mkApp3(v___x_1373_, v_type_1341_, v___x_1374_, v___x_1377_);
v___y_1369_ = v___x_1378_;
goto v___jp_1368_;
}
else
{
lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1379_ = l_Int_toNat(v_val_1366_);
v___x_1380_ = l_Lean_instToExprInt_mkNat(v___x_1379_);
v___y_1369_ = v___x_1380_;
goto v___jp_1368_;
}
v___jp_1368_:
{
lean_object* v___x_1370_; 
v___x_1370_ = l_Lean_mkAppB(v___x_1367_, v_type_1341_, v___y_1369_);
v___y_1349_ = v___x_1370_;
goto v___jp_1348_;
}
}
v___jp_1332_:
{
lean_object* v_nil_1334_; lean_object* v_cons_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
v_nil_1334_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13);
v_cons_1335_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_1336_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v_nil_1334_, v_cons_1335_, v_x_1328_);
v___x_1337_ = l_Lean_mkApp4(v___x_1331_, v___y_1333_, v___x_1336_, v_v_1329_, v_prf_1330_);
return v___x_1337_;
}
v___jp_1342_:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; 
lean_inc_ref(v___y_1344_);
v___x_1346_ = l_Lean_mkAppB(v___y_1344_, v_type_1341_, v___y_1345_);
v___x_1347_ = l_Lean_Expr_app___override(v___y_1343_, v___x_1346_);
v___y_1333_ = v___x_1347_;
goto v___jp_1332_;
}
v___jp_1348_:
{
lean_object* v___x_1350_; 
v___x_1350_ = l_Lean_Expr_app___override(v___x_1340_, v___y_1349_);
if (lean_obj_tag(v_upperBound_1339_) == 0)
{
lean_object* v___x_1351_; lean_object* v___x_1352_; 
v___x_1351_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___x_1352_ = l_Lean_Expr_app___override(v___x_1350_, v___x_1351_);
v___y_1333_ = v___x_1352_;
goto v___jp_1332_;
}
else
{
lean_object* v_val_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; uint8_t v___x_1356_; 
v_val_1353_ = lean_ctor_get(v_upperBound_1339_, 0);
v___x_1354_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_1355_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_1356_ = lean_int_dec_le(v___x_1355_, v_val_1353_);
if (v___x_1356_ == 0)
{
lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1357_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24);
v___x_1358_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27);
v___x_1359_ = lean_int_neg(v_val_1353_);
v___x_1360_ = l_Int_toNat(v___x_1359_);
lean_dec(v___x_1359_);
v___x_1361_ = l_Lean_instToExprInt_mkNat(v___x_1360_);
v___x_1362_ = l_Lean_mkApp3(v___x_1357_, v_type_1341_, v___x_1358_, v___x_1361_);
v___y_1343_ = v___x_1350_;
v___y_1344_ = v___x_1354_;
v___y_1345_ = v___x_1362_;
goto v___jp_1342_;
}
else
{
lean_object* v___x_1363_; lean_object* v___x_1364_; 
v___x_1363_ = l_Int_toNat(v_val_1353_);
v___x_1364_ = l_Lean_instToExprInt_mkNat(v___x_1363_);
v___y_1343_ = v___x_1350_;
v___y_1344_ = v___x_1354_;
v___y_1345_ = v___x_1364_;
goto v___jp_1342_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_tidyProof___boxed(lean_object* v_s_1381_, lean_object* v_x_1382_, lean_object* v_v_1383_, lean_object* v_prf_1384_){
_start:
{
lean_object* v_res_1385_; 
v_res_1385_ = l_Lean_Elab_Tactic_Omega_Justification_tidyProof(v_s_1381_, v_x_1382_, v_v_1383_, v_prf_1384_);
lean_dec(v_x_1382_);
lean_dec_ref(v_s_1381_);
return v_res_1385_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__2(void){
_start:
{
lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1392_ = lean_box(0);
v___x_1393_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__1));
v___x_1394_ = l_Lean_Expr_const___override(v___x_1393_, v___x_1392_);
return v___x_1394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combineProof(lean_object* v_s_1395_, lean_object* v_t_1396_, lean_object* v_x_1397_, lean_object* v_v_1398_, lean_object* v_ps_1399_, lean_object* v_pt_1400_){
_start:
{
lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___y_1404_; lean_object* v___y_1405_; lean_object* v___y_1411_; lean_object* v___y_1412_; lean_object* v___y_1413_; lean_object* v___y_1414_; lean_object* v___y_1415_; lean_object* v___y_1419_; lean_object* v___y_1420_; lean_object* v___y_1421_; lean_object* v___y_1422_; lean_object* v___y_1423_; lean_object* v___y_1444_; lean_object* v___y_1445_; lean_object* v___y_1446_; lean_object* v___y_1447_; lean_object* v___y_1448_; lean_object* v___y_1449_; lean_object* v___y_1452_; lean_object* v_lowerBound_1470_; lean_object* v_upperBound_1471_; lean_object* v___x_1472_; lean_object* v_type_1473_; lean_object* v___y_1475_; lean_object* v___y_1476_; lean_object* v___y_1477_; lean_object* v___y_1481_; 
v___x_1401_ = lean_box(0);
v___x_1402_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__2, &l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_Justification_combineProof___closed__2);
v_lowerBound_1470_ = lean_ctor_get(v_s_1395_, 0);
v_upperBound_1471_ = lean_ctor_get(v_s_1395_, 1);
v___x_1472_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2);
v_type_1473_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
if (lean_obj_tag(v_lowerBound_1470_) == 0)
{
lean_object* v___x_1497_; 
v___x_1497_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___y_1481_ = v___x_1497_;
goto v___jp_1480_;
}
else
{
lean_object* v_val_1498_; lean_object* v___x_1499_; lean_object* v___y_1501_; lean_object* v___x_1503_; uint8_t v___x_1504_; 
v_val_1498_ = lean_ctor_get(v_lowerBound_1470_, 0);
v___x_1499_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_1503_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_1504_ = lean_int_dec_le(v___x_1503_, v_val_1498_);
if (v___x_1504_ == 0)
{
lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; 
v___x_1505_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24);
v___x_1506_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27);
v___x_1507_ = lean_int_neg(v_val_1498_);
v___x_1508_ = l_Int_toNat(v___x_1507_);
lean_dec(v___x_1507_);
v___x_1509_ = l_Lean_instToExprInt_mkNat(v___x_1508_);
v___x_1510_ = l_Lean_mkApp3(v___x_1505_, v_type_1473_, v___x_1506_, v___x_1509_);
v___y_1501_ = v___x_1510_;
goto v___jp_1500_;
}
else
{
lean_object* v___x_1511_; lean_object* v___x_1512_; 
v___x_1511_ = l_Int_toNat(v_val_1498_);
v___x_1512_ = l_Lean_instToExprInt_mkNat(v___x_1511_);
v___y_1501_ = v___x_1512_;
goto v___jp_1500_;
}
v___jp_1500_:
{
lean_object* v___x_1502_; 
v___x_1502_ = l_Lean_mkAppB(v___x_1499_, v_type_1473_, v___y_1501_);
v___y_1481_ = v___x_1502_;
goto v___jp_1480_;
}
}
v___jp_1403_:
{
lean_object* v_nil_1406_; lean_object* v_cons_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; 
v_nil_1406_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13);
v_cons_1407_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_1408_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v_nil_1406_, v_cons_1407_, v_x_1397_);
v___x_1409_ = l_Lean_mkApp6(v___x_1402_, v___y_1404_, v___y_1405_, v___x_1408_, v_v_1398_, v_ps_1399_, v_pt_1400_);
return v___x_1409_;
}
v___jp_1410_:
{
lean_object* v___x_1416_; lean_object* v___x_1417_; 
lean_inc_ref(v___y_1414_);
v___x_1416_ = l_Lean_mkAppB(v___y_1414_, v___y_1411_, v___y_1415_);
v___x_1417_ = l_Lean_Expr_app___override(v___y_1412_, v___x_1416_);
v___y_1404_ = v___y_1413_;
v___y_1405_ = v___x_1417_;
goto v___jp_1403_;
}
v___jp_1418_:
{
lean_object* v_upperBound_1424_; lean_object* v___x_1425_; 
v_upperBound_1424_ = lean_ctor_get(v_t_1396_, 1);
lean_inc_ref(v___y_1421_);
v___x_1425_ = l_Lean_Expr_app___override(v___y_1421_, v___y_1423_);
if (lean_obj_tag(v_upperBound_1424_) == 0)
{
lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; 
v___x_1426_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6);
v___x_1427_ = l_Lean_Expr_app___override(v___x_1426_, v___y_1419_);
v___x_1428_ = l_Lean_Expr_app___override(v___x_1425_, v___x_1427_);
v___y_1404_ = v___y_1420_;
v___y_1405_ = v___x_1428_;
goto v___jp_1403_;
}
else
{
lean_object* v_val_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; uint8_t v___x_1432_; 
v_val_1429_ = lean_ctor_get(v_upperBound_1424_, 0);
v___x_1430_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_1431_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_1432_ = lean_int_dec_le(v___x_1431_, v_val_1429_);
if (v___x_1432_ == 0)
{
lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; 
v___x_1433_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24);
v___x_1434_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__25));
lean_inc_ref(v___y_1422_);
v___x_1435_ = l_Lean_Name_mkStr2(v___y_1422_, v___x_1434_);
v___x_1436_ = l_Lean_Expr_const___override(v___x_1435_, v___x_1401_);
v___x_1437_ = lean_int_neg(v_val_1429_);
v___x_1438_ = l_Int_toNat(v___x_1437_);
lean_dec(v___x_1437_);
v___x_1439_ = l_Lean_instToExprInt_mkNat(v___x_1438_);
lean_inc_ref(v___y_1419_);
v___x_1440_ = l_Lean_mkApp3(v___x_1433_, v___y_1419_, v___x_1436_, v___x_1439_);
v___y_1411_ = v___y_1419_;
v___y_1412_ = v___x_1425_;
v___y_1413_ = v___y_1420_;
v___y_1414_ = v___x_1430_;
v___y_1415_ = v___x_1440_;
goto v___jp_1410_;
}
else
{
lean_object* v___x_1441_; lean_object* v___x_1442_; 
v___x_1441_ = l_Int_toNat(v_val_1429_);
v___x_1442_ = l_Lean_instToExprInt_mkNat(v___x_1441_);
v___y_1411_ = v___y_1419_;
v___y_1412_ = v___x_1425_;
v___y_1413_ = v___y_1420_;
v___y_1414_ = v___x_1430_;
v___y_1415_ = v___x_1442_;
goto v___jp_1410_;
}
}
}
v___jp_1443_:
{
lean_object* v___x_1450_; 
lean_inc_ref(v___y_1444_);
lean_inc_ref(v___y_1447_);
v___x_1450_ = l_Lean_mkAppB(v___y_1447_, v___y_1444_, v___y_1449_);
v___y_1419_ = v___y_1444_;
v___y_1420_ = v___y_1446_;
v___y_1421_ = v___y_1445_;
v___y_1422_ = v___y_1448_;
v___y_1423_ = v___x_1450_;
goto v___jp_1418_;
}
v___jp_1451_:
{
lean_object* v_lowerBound_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v_type_1456_; 
v_lowerBound_1453_ = lean_ctor_get(v_t_1396_, 0);
v___x_1454_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2);
v___x_1455_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__4));
v_type_1456_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
if (lean_obj_tag(v_lowerBound_1453_) == 0)
{
lean_object* v___x_1457_; 
v___x_1457_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___y_1419_ = v_type_1456_;
v___y_1420_ = v___y_1452_;
v___y_1421_ = v___x_1454_;
v___y_1422_ = v___x_1455_;
v___y_1423_ = v___x_1457_;
goto v___jp_1418_;
}
else
{
lean_object* v_val_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; uint8_t v___x_1461_; 
v_val_1458_ = lean_ctor_get(v_lowerBound_1453_, 0);
v___x_1459_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_1460_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_1461_ = lean_int_dec_le(v___x_1460_, v_val_1458_);
if (v___x_1461_ == 0)
{
lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1462_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24);
v___x_1463_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27);
v___x_1464_ = lean_int_neg(v_val_1458_);
v___x_1465_ = l_Int_toNat(v___x_1464_);
lean_dec(v___x_1464_);
v___x_1466_ = l_Lean_instToExprInt_mkNat(v___x_1465_);
v___x_1467_ = l_Lean_mkApp3(v___x_1462_, v_type_1456_, v___x_1463_, v___x_1466_);
v___y_1444_ = v_type_1456_;
v___y_1445_ = v___x_1454_;
v___y_1446_ = v___y_1452_;
v___y_1447_ = v___x_1459_;
v___y_1448_ = v___x_1455_;
v___y_1449_ = v___x_1467_;
goto v___jp_1443_;
}
else
{
lean_object* v___x_1468_; lean_object* v___x_1469_; 
v___x_1468_ = l_Int_toNat(v_val_1458_);
v___x_1469_ = l_Lean_instToExprInt_mkNat(v___x_1468_);
v___y_1444_ = v_type_1456_;
v___y_1445_ = v___x_1454_;
v___y_1446_ = v___y_1452_;
v___y_1447_ = v___x_1459_;
v___y_1448_ = v___x_1455_;
v___y_1449_ = v___x_1469_;
goto v___jp_1443_;
}
}
}
v___jp_1474_:
{
lean_object* v___x_1478_; lean_object* v___x_1479_; 
lean_inc_ref(v___y_1475_);
v___x_1478_ = l_Lean_mkAppB(v___y_1475_, v_type_1473_, v___y_1477_);
v___x_1479_ = l_Lean_Expr_app___override(v___y_1476_, v___x_1478_);
v___y_1452_ = v___x_1479_;
goto v___jp_1451_;
}
v___jp_1480_:
{
lean_object* v___x_1482_; 
v___x_1482_ = l_Lean_Expr_app___override(v___x_1472_, v___y_1481_);
if (lean_obj_tag(v_upperBound_1471_) == 0)
{
lean_object* v___x_1483_; lean_object* v___x_1484_; 
v___x_1483_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___x_1484_ = l_Lean_Expr_app___override(v___x_1482_, v___x_1483_);
v___y_1452_ = v___x_1484_;
goto v___jp_1451_;
}
else
{
lean_object* v_val_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; uint8_t v___x_1488_; 
v_val_1485_ = lean_ctor_get(v_upperBound_1471_, 0);
v___x_1486_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_1487_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_1488_ = lean_int_dec_le(v___x_1487_, v_val_1485_);
if (v___x_1488_ == 0)
{
lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1489_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24);
v___x_1490_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27);
v___x_1491_ = lean_int_neg(v_val_1485_);
v___x_1492_ = l_Int_toNat(v___x_1491_);
lean_dec(v___x_1491_);
v___x_1493_ = l_Lean_instToExprInt_mkNat(v___x_1492_);
v___x_1494_ = l_Lean_mkApp3(v___x_1489_, v_type_1473_, v___x_1490_, v___x_1493_);
v___y_1475_ = v___x_1486_;
v___y_1476_ = v___x_1482_;
v___y_1477_ = v___x_1494_;
goto v___jp_1474_;
}
else
{
lean_object* v___x_1495_; lean_object* v___x_1496_; 
v___x_1495_ = l_Int_toNat(v_val_1485_);
v___x_1496_ = l_Lean_instToExprInt_mkNat(v___x_1495_);
v___y_1475_ = v___x_1486_;
v___y_1476_ = v___x_1482_;
v___y_1477_ = v___x_1496_;
goto v___jp_1474_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_combineProof___boxed(lean_object* v_s_1513_, lean_object* v_t_1514_, lean_object* v_x_1515_, lean_object* v_v_1516_, lean_object* v_ps_1517_, lean_object* v_pt_1518_){
_start:
{
lean_object* v_res_1519_; 
v_res_1519_ = l_Lean_Elab_Tactic_Omega_Justification_combineProof(v_s_1513_, v_t_1514_, v_x_1515_, v_v_1516_, v_ps_1517_, v_pt_1518_);
lean_dec(v_x_1515_);
lean_dec_ref(v_t_1514_);
lean_dec_ref(v_s_1513_);
return v_res_1519_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__2(void){
_start:
{
lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; 
v___x_1525_ = lean_box(0);
v___x_1526_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__1));
v___x_1527_ = l_Lean_Expr_const___override(v___x_1526_, v___x_1525_);
return v___x_1527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_comboProof(lean_object* v_s_1528_, lean_object* v_t_1529_, lean_object* v_a_1530_, lean_object* v_x_1531_, lean_object* v_b_1532_, lean_object* v_y_1533_, lean_object* v_v_1534_, lean_object* v_px_1535_, lean_object* v_py_1536_){
_start:
{
lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___y_1540_; lean_object* v___y_1541_; lean_object* v___y_1542_; lean_object* v___y_1543_; lean_object* v___y_1544_; lean_object* v___y_1545_; lean_object* v___y_1546_; lean_object* v___y_1550_; lean_object* v___y_1551_; lean_object* v___y_1552_; lean_object* v___y_1568_; lean_object* v___y_1569_; lean_object* v___y_1582_; lean_object* v___y_1583_; lean_object* v___y_1584_; lean_object* v___y_1585_; lean_object* v___y_1586_; lean_object* v___y_1590_; lean_object* v___y_1591_; lean_object* v___y_1592_; lean_object* v___y_1593_; lean_object* v___y_1594_; lean_object* v___y_1615_; lean_object* v___y_1616_; lean_object* v___y_1617_; lean_object* v___y_1618_; lean_object* v___y_1619_; lean_object* v___y_1620_; lean_object* v___y_1623_; lean_object* v_lowerBound_1641_; lean_object* v_upperBound_1642_; lean_object* v___x_1643_; lean_object* v_type_1644_; lean_object* v___y_1646_; lean_object* v___y_1647_; lean_object* v___y_1648_; lean_object* v___y_1652_; 
v___x_1537_ = lean_box(0);
v___x_1538_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__2, &l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_Justification_comboProof___closed__2);
v_lowerBound_1641_ = lean_ctor_get(v_s_1528_, 0);
v_upperBound_1642_ = lean_ctor_get(v_s_1528_, 1);
v___x_1643_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2);
v_type_1644_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
if (lean_obj_tag(v_lowerBound_1641_) == 0)
{
lean_object* v___x_1668_; 
v___x_1668_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___y_1652_ = v___x_1668_;
goto v___jp_1651_;
}
else
{
lean_object* v_val_1669_; lean_object* v___x_1670_; lean_object* v___y_1672_; lean_object* v___x_1674_; uint8_t v___x_1675_; 
v_val_1669_ = lean_ctor_get(v_lowerBound_1641_, 0);
v___x_1670_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_1674_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_1675_ = lean_int_dec_le(v___x_1674_, v_val_1669_);
if (v___x_1675_ == 0)
{
lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; 
v___x_1676_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24);
v___x_1677_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27);
v___x_1678_ = lean_int_neg(v_val_1669_);
v___x_1679_ = l_Int_toNat(v___x_1678_);
lean_dec(v___x_1678_);
v___x_1680_ = l_Lean_instToExprInt_mkNat(v___x_1679_);
v___x_1681_ = l_Lean_mkApp3(v___x_1676_, v_type_1644_, v___x_1677_, v___x_1680_);
v___y_1672_ = v___x_1681_;
goto v___jp_1671_;
}
else
{
lean_object* v___x_1682_; lean_object* v___x_1683_; 
v___x_1682_ = l_Int_toNat(v_val_1669_);
v___x_1683_ = l_Lean_instToExprInt_mkNat(v___x_1682_);
v___y_1672_ = v___x_1683_;
goto v___jp_1671_;
}
v___jp_1671_:
{
lean_object* v___x_1673_; 
v___x_1673_ = l_Lean_mkAppB(v___x_1670_, v_type_1644_, v___y_1672_);
v___y_1652_ = v___x_1673_;
goto v___jp_1651_;
}
}
v___jp_1539_:
{
lean_object* v___x_1547_; lean_object* v___x_1548_; 
v___x_1547_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v___y_1544_, v___y_1545_, v_y_1533_);
v___x_1548_ = l_Lean_mkApp9(v___x_1538_, v___y_1541_, v___y_1543_, v___y_1542_, v___y_1540_, v___y_1546_, v___x_1547_, v_v_1534_, v_px_1535_, v_py_1536_);
return v___x_1548_;
}
v___jp_1549_:
{
lean_object* v_type_1553_; lean_object* v_nil_1554_; lean_object* v_cons_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; uint8_t v___x_1558_; 
v_type_1553_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v_nil_1554_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13);
v_cons_1555_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_1556_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v_nil_1554_, v_cons_1555_, v_x_1531_);
v___x_1557_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_1558_ = lean_int_dec_le(v___x_1557_, v_b_1532_);
if (v___x_1558_ == 0)
{
lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; 
v___x_1559_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24);
v___x_1560_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27);
v___x_1561_ = lean_int_neg(v_b_1532_);
v___x_1562_ = l_Int_toNat(v___x_1561_);
lean_dec(v___x_1561_);
v___x_1563_ = l_Lean_instToExprInt_mkNat(v___x_1562_);
v___x_1564_ = l_Lean_mkApp3(v___x_1559_, v_type_1553_, v___x_1560_, v___x_1563_);
v___y_1540_ = v___x_1556_;
v___y_1541_ = v___y_1550_;
v___y_1542_ = v___y_1552_;
v___y_1543_ = v___y_1551_;
v___y_1544_ = v_nil_1554_;
v___y_1545_ = v_cons_1555_;
v___y_1546_ = v___x_1564_;
goto v___jp_1539_;
}
else
{
lean_object* v___x_1565_; lean_object* v___x_1566_; 
v___x_1565_ = l_Int_toNat(v_b_1532_);
v___x_1566_ = l_Lean_instToExprInt_mkNat(v___x_1565_);
v___y_1540_ = v___x_1556_;
v___y_1541_ = v___y_1550_;
v___y_1542_ = v___y_1552_;
v___y_1543_ = v___y_1551_;
v___y_1544_ = v_nil_1554_;
v___y_1545_ = v_cons_1555_;
v___y_1546_ = v___x_1566_;
goto v___jp_1539_;
}
}
v___jp_1567_:
{
lean_object* v___x_1570_; uint8_t v___x_1571_; 
v___x_1570_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_1571_ = lean_int_dec_le(v___x_1570_, v_a_1530_);
if (v___x_1571_ == 0)
{
lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; 
v___x_1572_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24);
v___x_1573_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v___x_1574_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27);
v___x_1575_ = lean_int_neg(v_a_1530_);
v___x_1576_ = l_Int_toNat(v___x_1575_);
lean_dec(v___x_1575_);
v___x_1577_ = l_Lean_instToExprInt_mkNat(v___x_1576_);
v___x_1578_ = l_Lean_mkApp3(v___x_1572_, v___x_1573_, v___x_1574_, v___x_1577_);
v___y_1550_ = v___y_1568_;
v___y_1551_ = v___y_1569_;
v___y_1552_ = v___x_1578_;
goto v___jp_1549_;
}
else
{
lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1579_ = l_Int_toNat(v_a_1530_);
v___x_1580_ = l_Lean_instToExprInt_mkNat(v___x_1579_);
v___y_1550_ = v___y_1568_;
v___y_1551_ = v___y_1569_;
v___y_1552_ = v___x_1580_;
goto v___jp_1549_;
}
}
v___jp_1581_:
{
lean_object* v___x_1587_; lean_object* v___x_1588_; 
lean_inc_ref(v___y_1582_);
v___x_1587_ = l_Lean_mkAppB(v___y_1582_, v___y_1585_, v___y_1586_);
v___x_1588_ = l_Lean_Expr_app___override(v___y_1583_, v___x_1587_);
v___y_1568_ = v___y_1584_;
v___y_1569_ = v___x_1588_;
goto v___jp_1567_;
}
v___jp_1589_:
{
lean_object* v_upperBound_1595_; lean_object* v___x_1596_; 
v_upperBound_1595_ = lean_ctor_get(v_t_1529_, 1);
lean_inc_ref(v___y_1590_);
v___x_1596_ = l_Lean_Expr_app___override(v___y_1590_, v___y_1594_);
if (lean_obj_tag(v_upperBound_1595_) == 0)
{
lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; 
v___x_1597_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__6);
v___x_1598_ = l_Lean_Expr_app___override(v___x_1597_, v___y_1592_);
v___x_1599_ = l_Lean_Expr_app___override(v___x_1596_, v___x_1598_);
v___y_1568_ = v___y_1591_;
v___y_1569_ = v___x_1599_;
goto v___jp_1567_;
}
else
{
lean_object* v_val_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; uint8_t v___x_1603_; 
v_val_1600_ = lean_ctor_get(v_upperBound_1595_, 0);
v___x_1601_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_1602_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_1603_ = lean_int_dec_le(v___x_1602_, v_val_1600_);
if (v___x_1603_ == 0)
{
lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1604_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24);
v___x_1605_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__25));
lean_inc_ref(v___y_1593_);
v___x_1606_ = l_Lean_Name_mkStr2(v___y_1593_, v___x_1605_);
v___x_1607_ = l_Lean_Expr_const___override(v___x_1606_, v___x_1537_);
v___x_1608_ = lean_int_neg(v_val_1600_);
v___x_1609_ = l_Int_toNat(v___x_1608_);
lean_dec(v___x_1608_);
v___x_1610_ = l_Lean_instToExprInt_mkNat(v___x_1609_);
lean_inc_ref(v___y_1592_);
v___x_1611_ = l_Lean_mkApp3(v___x_1604_, v___y_1592_, v___x_1607_, v___x_1610_);
v___y_1582_ = v___x_1601_;
v___y_1583_ = v___x_1596_;
v___y_1584_ = v___y_1591_;
v___y_1585_ = v___y_1592_;
v___y_1586_ = v___x_1611_;
goto v___jp_1581_;
}
else
{
lean_object* v___x_1612_; lean_object* v___x_1613_; 
v___x_1612_ = l_Int_toNat(v_val_1600_);
v___x_1613_ = l_Lean_instToExprInt_mkNat(v___x_1612_);
v___y_1582_ = v___x_1601_;
v___y_1583_ = v___x_1596_;
v___y_1584_ = v___y_1591_;
v___y_1585_ = v___y_1592_;
v___y_1586_ = v___x_1613_;
goto v___jp_1581_;
}
}
}
v___jp_1614_:
{
lean_object* v___x_1621_; 
lean_inc_ref(v___y_1618_);
lean_inc_ref(v___y_1616_);
v___x_1621_ = l_Lean_mkAppB(v___y_1616_, v___y_1618_, v___y_1620_);
v___y_1590_ = v___y_1615_;
v___y_1591_ = v___y_1617_;
v___y_1592_ = v___y_1618_;
v___y_1593_ = v___y_1619_;
v___y_1594_ = v___x_1621_;
goto v___jp_1589_;
}
v___jp_1622_:
{
lean_object* v_lowerBound_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v_type_1627_; 
v_lowerBound_1624_ = lean_ctor_get(v_t_1529_, 0);
v___x_1625_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2);
v___x_1626_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__4));
v_type_1627_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
if (lean_obj_tag(v_lowerBound_1624_) == 0)
{
lean_object* v___x_1628_; 
v___x_1628_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___y_1590_ = v___x_1625_;
v___y_1591_ = v___y_1623_;
v___y_1592_ = v_type_1627_;
v___y_1593_ = v___x_1626_;
v___y_1594_ = v___x_1628_;
goto v___jp_1589_;
}
else
{
lean_object* v_val_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; uint8_t v___x_1632_; 
v_val_1629_ = lean_ctor_get(v_lowerBound_1624_, 0);
v___x_1630_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_1631_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_1632_ = lean_int_dec_le(v___x_1631_, v_val_1629_);
if (v___x_1632_ == 0)
{
lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1633_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24);
v___x_1634_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27);
v___x_1635_ = lean_int_neg(v_val_1629_);
v___x_1636_ = l_Int_toNat(v___x_1635_);
lean_dec(v___x_1635_);
v___x_1637_ = l_Lean_instToExprInt_mkNat(v___x_1636_);
v___x_1638_ = l_Lean_mkApp3(v___x_1633_, v_type_1627_, v___x_1634_, v___x_1637_);
v___y_1615_ = v___x_1625_;
v___y_1616_ = v___x_1630_;
v___y_1617_ = v___y_1623_;
v___y_1618_ = v_type_1627_;
v___y_1619_ = v___x_1626_;
v___y_1620_ = v___x_1638_;
goto v___jp_1614_;
}
else
{
lean_object* v___x_1639_; lean_object* v___x_1640_; 
v___x_1639_ = l_Int_toNat(v_val_1629_);
v___x_1640_ = l_Lean_instToExprInt_mkNat(v___x_1639_);
v___y_1615_ = v___x_1625_;
v___y_1616_ = v___x_1630_;
v___y_1617_ = v___y_1623_;
v___y_1618_ = v_type_1627_;
v___y_1619_ = v___x_1626_;
v___y_1620_ = v___x_1640_;
goto v___jp_1614_;
}
}
}
v___jp_1645_:
{
lean_object* v___x_1649_; lean_object* v___x_1650_; 
lean_inc_ref(v___y_1646_);
v___x_1649_ = l_Lean_mkAppB(v___y_1646_, v_type_1644_, v___y_1648_);
v___x_1650_ = l_Lean_Expr_app___override(v___y_1647_, v___x_1649_);
v___y_1623_ = v___x_1650_;
goto v___jp_1622_;
}
v___jp_1651_:
{
lean_object* v___x_1653_; 
v___x_1653_ = l_Lean_Expr_app___override(v___x_1643_, v___y_1652_);
if (lean_obj_tag(v_upperBound_1642_) == 0)
{
lean_object* v___x_1654_; lean_object* v___x_1655_; 
v___x_1654_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___x_1655_ = l_Lean_Expr_app___override(v___x_1653_, v___x_1654_);
v___y_1623_ = v___x_1655_;
goto v___jp_1622_;
}
else
{
lean_object* v_val_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; uint8_t v___x_1659_; 
v_val_1656_ = lean_ctor_get(v_upperBound_1642_, 0);
v___x_1657_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_1658_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_1659_ = lean_int_dec_le(v___x_1658_, v_val_1656_);
if (v___x_1659_ == 0)
{
lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___x_1660_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24);
v___x_1661_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27);
v___x_1662_ = lean_int_neg(v_val_1656_);
v___x_1663_ = l_Int_toNat(v___x_1662_);
lean_dec(v___x_1662_);
v___x_1664_ = l_Lean_instToExprInt_mkNat(v___x_1663_);
v___x_1665_ = l_Lean_mkApp3(v___x_1660_, v_type_1644_, v___x_1661_, v___x_1664_);
v___y_1646_ = v___x_1657_;
v___y_1647_ = v___x_1653_;
v___y_1648_ = v___x_1665_;
goto v___jp_1645_;
}
else
{
lean_object* v___x_1666_; lean_object* v___x_1667_; 
v___x_1666_ = l_Int_toNat(v_val_1656_);
v___x_1667_ = l_Lean_instToExprInt_mkNat(v___x_1666_);
v___y_1646_ = v___x_1657_;
v___y_1647_ = v___x_1653_;
v___y_1648_ = v___x_1667_;
goto v___jp_1645_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_comboProof___boxed(lean_object* v_s_1684_, lean_object* v_t_1685_, lean_object* v_a_1686_, lean_object* v_x_1687_, lean_object* v_b_1688_, lean_object* v_y_1689_, lean_object* v_v_1690_, lean_object* v_px_1691_, lean_object* v_py_1692_){
_start:
{
lean_object* v_res_1693_; 
v_res_1693_ = l_Lean_Elab_Tactic_Omega_Justification_comboProof(v_s_1684_, v_t_1685_, v_a_1686_, v_x_1687_, v_b_1688_, v_y_1689_, v_v_1690_, v_px_1691_, v_py_1692_);
lean_dec(v_y_1689_);
lean_dec(v_b_1688_);
lean_dec(v_x_1687_);
lean_dec(v_a_1686_);
lean_dec_ref(v_t_1685_);
lean_dec_ref(v_s_1684_);
return v_res_1693_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__3(void){
_start:
{
lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; 
v___x_1699_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__11);
v___x_1700_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__2));
v___x_1701_ = l_Lean_Expr_const___override(v___x_1700_, v___x_1699_);
return v___x_1701_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__6(void){
_start:
{
lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; 
v___x_1705_ = lean_box(0);
v___x_1706_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__5));
v___x_1707_ = l_Lean_Expr_const___override(v___x_1706_, v___x_1705_);
return v___x_1707_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__9(void){
_start:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1711_ = lean_box(0);
v___x_1712_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__8));
v___x_1713_ = l_Lean_Expr_const___override(v___x_1712_, v___x_1711_);
return v___x_1713_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__13(void){
_start:
{
lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1721_ = lean_box(0);
v___x_1722_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__12));
v___x_1723_ = l_Lean_Expr_const___override(v___x_1722_, v___x_1721_);
return v___x_1723_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__16(void){
_start:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; 
v___x_1730_ = lean_box(0);
v___x_1731_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__15));
v___x_1732_ = l_Lean_Expr_const___override(v___x_1731_, v___x_1730_);
return v___x_1732_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__19(void){
_start:
{
lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1738_ = lean_box(0);
v___x_1739_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__18));
v___x_1740_ = l_Lean_Expr_const___override(v___x_1739_, v___x_1738_);
return v___x_1740_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__22(void){
_start:
{
lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
v___x_1746_ = lean_box(0);
v___x_1747_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__21));
v___x_1748_ = l_Lean_Expr_const___override(v___x_1747_, v___x_1746_);
return v___x_1748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof(lean_object* v_m_1749_, lean_object* v_r_1750_, lean_object* v_i_1751_, lean_object* v_x_1752_, lean_object* v_v_1753_, lean_object* v_w_1754_, lean_object* v_a_1755_, lean_object* v_a_1756_, lean_object* v_a_1757_, lean_object* v_a_1758_){
_start:
{
lean_object* v_m_1760_; lean_object* v___y_1762_; lean_object* v___x_1790_; uint8_t v___x_1791_; 
v_m_1760_ = l_Lean_mkNatLit(v_m_1749_);
v___x_1790_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_1791_ = lean_int_dec_le(v___x_1790_, v_r_1750_);
if (v___x_1791_ == 0)
{
lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1792_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24);
v___x_1793_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v___x_1794_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27);
v___x_1795_ = lean_int_neg(v_r_1750_);
v___x_1796_ = l_Int_toNat(v___x_1795_);
lean_dec(v___x_1795_);
v___x_1797_ = l_Lean_instToExprInt_mkNat(v___x_1796_);
v___x_1798_ = l_Lean_mkApp3(v___x_1792_, v___x_1793_, v___x_1794_, v___x_1797_);
v___y_1762_ = v___x_1798_;
goto v___jp_1761_;
}
else
{
lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1799_ = l_Int_toNat(v_r_1750_);
v___x_1800_ = l_Lean_instToExprInt_mkNat(v___x_1799_);
v___y_1762_ = v___x_1800_;
goto v___jp_1761_;
}
v___jp_1761_:
{
lean_object* v_i_1763_; lean_object* v_nil_1764_; lean_object* v_cons_1765_; lean_object* v_x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v_i_1763_ = l_Lean_mkNatLit(v_i_1751_);
v_nil_1764_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13);
v_cons_1765_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v_x_1766_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v_nil_1764_, v_cons_1765_, v_x_1752_);
v___x_1767_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__3, &l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__3_once, _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__3);
v___x_1768_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__6, &l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__6);
v___x_1769_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__9, &l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__9_once, _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__9);
v___x_1770_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__13, &l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__13_once, _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__13);
lean_inc_ref(v_x_1766_);
v___x_1771_ = l_Lean_Expr_app___override(v___x_1770_, v_x_1766_);
lean_inc_ref(v_i_1763_);
v___x_1772_ = l_Lean_mkApp4(v___x_1767_, v___x_1768_, v___x_1769_, v___x_1771_, v_i_1763_);
v___x_1773_ = l_Lean_Meta_mkDecideProof(v___x_1772_, v_a_1755_, v_a_1756_, v_a_1757_, v_a_1758_);
if (lean_obj_tag(v___x_1773_) == 0)
{
lean_object* v_a_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; 
v_a_1774_ = lean_ctor_get(v___x_1773_, 0);
lean_inc(v_a_1774_);
lean_dec_ref_known(v___x_1773_, 1);
v___x_1775_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__16, &l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__16_once, _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__16);
lean_inc_ref(v_i_1763_);
lean_inc_ref_n(v_v_1753_, 2);
v___x_1776_ = l_Lean_mkAppB(v___x_1775_, v_v_1753_, v_i_1763_);
v___x_1777_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__19, &l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__19_once, _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__19);
lean_inc_ref(v_x_1766_);
lean_inc_ref(v_m_1760_);
v___x_1778_ = l_Lean_mkApp3(v___x_1777_, v_m_1760_, v_x_1766_, v_v_1753_);
v___x_1779_ = l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType(v___x_1776_, v___x_1778_, v_a_1755_, v_a_1756_, v_a_1757_, v_a_1758_);
if (lean_obj_tag(v___x_1779_) == 0)
{
lean_object* v_a_1780_; lean_object* v___x_1782_; uint8_t v_isShared_1783_; uint8_t v_isSharedCheck_1789_; 
v_a_1780_ = lean_ctor_get(v___x_1779_, 0);
v_isSharedCheck_1789_ = !lean_is_exclusive(v___x_1779_);
if (v_isSharedCheck_1789_ == 0)
{
v___x_1782_ = v___x_1779_;
v_isShared_1783_ = v_isSharedCheck_1789_;
goto v_resetjp_1781_;
}
else
{
lean_inc(v_a_1780_);
lean_dec(v___x_1779_);
v___x_1782_ = lean_box(0);
v_isShared_1783_ = v_isSharedCheck_1789_;
goto v_resetjp_1781_;
}
v_resetjp_1781_:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1787_; 
v___x_1784_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__22, &l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__22_once, _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__22);
v___x_1785_ = l_Lean_mkApp8(v___x_1784_, v_m_1760_, v___y_1762_, v_i_1763_, v_x_1766_, v_v_1753_, v_a_1774_, v_a_1780_, v_w_1754_);
if (v_isShared_1783_ == 0)
{
lean_ctor_set(v___x_1782_, 0, v___x_1785_);
v___x_1787_ = v___x_1782_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v___x_1785_);
v___x_1787_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
return v___x_1787_;
}
}
}
else
{
lean_dec(v_a_1774_);
lean_dec_ref(v_x_1766_);
lean_dec_ref(v_i_1763_);
lean_dec_ref(v___y_1762_);
lean_dec_ref(v_m_1760_);
lean_dec_ref(v_w_1754_);
lean_dec_ref(v_v_1753_);
return v___x_1779_;
}
}
else
{
lean_dec_ref(v_x_1766_);
lean_dec_ref(v_i_1763_);
lean_dec_ref(v___y_1762_);
lean_dec_ref(v_m_1760_);
lean_dec_ref(v_w_1754_);
lean_dec_ref(v_v_1753_);
return v___x_1773_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_bmodProof___boxed(lean_object* v_m_1801_, lean_object* v_r_1802_, lean_object* v_i_1803_, lean_object* v_x_1804_, lean_object* v_v_1805_, lean_object* v_w_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_, lean_object* v_a_1810_, lean_object* v_a_1811_){
_start:
{
lean_object* v_res_1812_; 
v_res_1812_ = l_Lean_Elab_Tactic_Omega_Justification_bmodProof(v_m_1801_, v_r_1802_, v_i_1803_, v_x_1804_, v_v_1805_, v_w_1806_, v_a_1807_, v_a_1808_, v_a_1809_, v_a_1810_);
lean_dec(v_a_1810_);
lean_dec_ref(v_a_1809_);
lean_dec(v_a_1808_);
lean_dec_ref(v_a_1807_);
lean_dec(v_x_1804_);
lean_dec(v_r_1802_);
return v_res_1812_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__0(void){
_start:
{
lean_object* v___x_1813_; 
v___x_1813_ = l_instMonadEIO___redArg();
return v___x_1813_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__1(void){
_start:
{
lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___x_1814_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__0, &l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__0);
v___x_1815_ = l_StateRefT_x27_instMonad___redArg(v___x_1814_);
return v___x_1815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(lean_object* v_c_1820_, lean_object* v_v_1821_, lean_object* v_assumptions_1822_, lean_object* v_x_1823_, lean_object* v_a_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, uint8_t v_a_1827_, lean_object* v_a_1828_, lean_object* v_a_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_, lean_object* v_a_1832_){
_start:
{
lean_object* v___x_1834_; lean_object* v_toApplicative_1835_; lean_object* v_toFunctor_1836_; lean_object* v_toSeq_1837_; lean_object* v_toSeqLeft_1838_; lean_object* v_toSeqRight_1839_; lean_object* v___f_1840_; lean_object* v___f_1841_; lean_object* v___f_1842_; lean_object* v___f_1843_; lean_object* v___x_1844_; lean_object* v___f_1845_; lean_object* v___f_1846_; lean_object* v___f_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v_toApplicative_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1946_; 
v___x_1834_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__1, &l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__1);
v_toApplicative_1835_ = lean_ctor_get(v___x_1834_, 0);
v_toFunctor_1836_ = lean_ctor_get(v_toApplicative_1835_, 0);
v_toSeq_1837_ = lean_ctor_get(v_toApplicative_1835_, 2);
v_toSeqLeft_1838_ = lean_ctor_get(v_toApplicative_1835_, 3);
v_toSeqRight_1839_ = lean_ctor_get(v_toApplicative_1835_, 4);
v___f_1840_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__2));
v___f_1841_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_1836_, 2);
v___f_1842_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1842_, 0, v_toFunctor_1836_);
v___f_1843_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1843_, 0, v_toFunctor_1836_);
v___x_1844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1844_, 0, v___f_1842_);
lean_ctor_set(v___x_1844_, 1, v___f_1843_);
lean_inc(v_toSeqRight_1839_);
v___f_1845_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1845_, 0, v_toSeqRight_1839_);
lean_inc(v_toSeqLeft_1838_);
v___f_1846_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1846_, 0, v_toSeqLeft_1838_);
lean_inc(v_toSeq_1837_);
v___f_1847_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1847_, 0, v_toSeq_1837_);
v___x_1848_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1844_);
lean_ctor_set(v___x_1848_, 1, v___f_1840_);
lean_ctor_set(v___x_1848_, 2, v___f_1847_);
lean_ctor_set(v___x_1848_, 3, v___f_1846_);
lean_ctor_set(v___x_1848_, 4, v___f_1845_);
v___x_1849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1848_);
lean_ctor_set(v___x_1849_, 1, v___f_1841_);
v___x_1850_ = l_StateRefT_x27_instMonad___redArg(v___x_1849_);
v_toApplicative_1851_ = lean_ctor_get(v___x_1850_, 0);
v_isSharedCheck_1946_ = !lean_is_exclusive(v___x_1850_);
if (v_isSharedCheck_1946_ == 0)
{
lean_object* v_unused_1947_; 
v_unused_1947_ = lean_ctor_get(v___x_1850_, 1);
lean_dec(v_unused_1947_);
v___x_1853_ = v___x_1850_;
v_isShared_1854_ = v_isSharedCheck_1946_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_toApplicative_1851_);
lean_dec(v___x_1850_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1946_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v_toFunctor_1855_; lean_object* v_toSeq_1856_; lean_object* v_toSeqLeft_1857_; lean_object* v_toSeqRight_1858_; lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1944_; 
v_toFunctor_1855_ = lean_ctor_get(v_toApplicative_1851_, 0);
v_toSeq_1856_ = lean_ctor_get(v_toApplicative_1851_, 2);
v_toSeqLeft_1857_ = lean_ctor_get(v_toApplicative_1851_, 3);
v_toSeqRight_1858_ = lean_ctor_get(v_toApplicative_1851_, 4);
v_isSharedCheck_1944_ = !lean_is_exclusive(v_toApplicative_1851_);
if (v_isSharedCheck_1944_ == 0)
{
lean_object* v_unused_1945_; 
v_unused_1945_ = lean_ctor_get(v_toApplicative_1851_, 1);
lean_dec(v_unused_1945_);
v___x_1860_ = v_toApplicative_1851_;
v_isShared_1861_ = v_isSharedCheck_1944_;
goto v_resetjp_1859_;
}
else
{
lean_inc(v_toSeqRight_1858_);
lean_inc(v_toSeqLeft_1857_);
lean_inc(v_toSeq_1856_);
lean_inc(v_toFunctor_1855_);
lean_dec(v_toApplicative_1851_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1944_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v___f_1862_; lean_object* v___f_1863_; lean_object* v___f_1864_; lean_object* v___f_1865_; lean_object* v___x_1866_; lean_object* v___f_1867_; lean_object* v___f_1868_; lean_object* v___f_1869_; lean_object* v___x_1871_; 
v___f_1862_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__4));
v___f_1863_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___closed__5));
lean_inc_ref(v_toFunctor_1855_);
v___f_1864_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1864_, 0, v_toFunctor_1855_);
v___f_1865_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1865_, 0, v_toFunctor_1855_);
v___x_1866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1866_, 0, v___f_1864_);
lean_ctor_set(v___x_1866_, 1, v___f_1865_);
v___f_1867_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1867_, 0, v_toSeqRight_1858_);
v___f_1868_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1868_, 0, v_toSeqLeft_1857_);
v___f_1869_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1869_, 0, v_toSeq_1856_);
if (v_isShared_1861_ == 0)
{
lean_ctor_set(v___x_1860_, 4, v___f_1867_);
lean_ctor_set(v___x_1860_, 3, v___f_1868_);
lean_ctor_set(v___x_1860_, 2, v___f_1869_);
lean_ctor_set(v___x_1860_, 1, v___f_1862_);
lean_ctor_set(v___x_1860_, 0, v___x_1866_);
v___x_1871_ = v___x_1860_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v___x_1866_);
lean_ctor_set(v_reuseFailAlloc_1943_, 1, v___f_1862_);
lean_ctor_set(v_reuseFailAlloc_1943_, 2, v___f_1869_);
lean_ctor_set(v_reuseFailAlloc_1943_, 3, v___f_1868_);
lean_ctor_set(v_reuseFailAlloc_1943_, 4, v___f_1867_);
v___x_1871_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
lean_object* v___x_1873_; 
if (v_isShared_1854_ == 0)
{
lean_ctor_set(v___x_1853_, 1, v___f_1863_);
lean_ctor_set(v___x_1853_, 0, v___x_1871_);
v___x_1873_ = v___x_1853_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v___x_1871_);
lean_ctor_set(v_reuseFailAlloc_1942_, 1, v___f_1863_);
v___x_1873_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; 
v___x_1874_ = l_StateRefT_x27_instMonad___redArg(v___x_1873_);
v___x_1875_ = l_ReaderT_instMonad___redArg(v___x_1874_);
v___x_1876_ = l_ReaderT_instMonad___redArg(v___x_1875_);
v___x_1877_ = l_StateRefT_x27_instMonad___redArg(v___x_1876_);
v___x_1878_ = l_StateRefT_x27_instMonad___redArg(v___x_1877_);
switch(lean_obj_tag(v_x_1823_))
{
case 0:
{
lean_object* v_i_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_3776__overap_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; 
lean_dec_ref(v_v_1821_);
v_i_1879_ = lean_ctor_get(v_x_1823_, 2);
lean_inc(v_i_1879_);
lean_dec_ref_known(v_x_1823_, 3);
v___x_1880_ = l_Lean_instInhabitedExpr;
v___x_1881_ = l_instInhabitedOfMonad___redArg(v___x_1878_, v___x_1880_);
v___x_3776__overap_1882_ = lean_array_get(v___x_1881_, v_assumptions_1822_, v_i_1879_);
lean_dec(v_i_1879_);
lean_dec(v___x_1881_);
v___x_1883_ = lean_box(v_a_1827_);
lean_inc(v_a_1832_);
lean_inc_ref(v_a_1831_);
lean_inc(v_a_1830_);
lean_inc_ref(v_a_1829_);
lean_inc(v_a_1828_);
lean_inc_ref(v_a_1826_);
lean_inc(v_a_1825_);
lean_inc(v_a_1824_);
v___x_1884_ = lean_apply_10(v___x_3776__overap_1882_, v_a_1824_, v_a_1825_, v_a_1826_, v___x_1883_, v_a_1828_, v_a_1829_, v_a_1830_, v_a_1831_, v_a_1832_, lean_box(0));
return v___x_1884_;
}
case 1:
{
lean_object* v_s_1885_; lean_object* v_c_1886_; lean_object* v_j_1887_; lean_object* v___x_1888_; 
lean_dec_ref(v___x_1878_);
v_s_1885_ = lean_ctor_get(v_x_1823_, 0);
lean_inc_ref(v_s_1885_);
v_c_1886_ = lean_ctor_get(v_x_1823_, 1);
lean_inc(v_c_1886_);
v_j_1887_ = lean_ctor_get(v_x_1823_, 2);
lean_inc_ref(v_j_1887_);
lean_dec_ref_known(v_x_1823_, 3);
lean_inc_ref(v_v_1821_);
v___x_1888_ = l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(v_c_1886_, v_v_1821_, v_assumptions_1822_, v_j_1887_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, v_a_1830_, v_a_1831_, v_a_1832_);
if (lean_obj_tag(v___x_1888_) == 0)
{
lean_object* v_a_1889_; lean_object* v___x_1891_; uint8_t v_isShared_1892_; uint8_t v_isSharedCheck_1897_; 
v_a_1889_ = lean_ctor_get(v___x_1888_, 0);
v_isSharedCheck_1897_ = !lean_is_exclusive(v___x_1888_);
if (v_isSharedCheck_1897_ == 0)
{
v___x_1891_ = v___x_1888_;
v_isShared_1892_ = v_isSharedCheck_1897_;
goto v_resetjp_1890_;
}
else
{
lean_inc(v_a_1889_);
lean_dec(v___x_1888_);
v___x_1891_ = lean_box(0);
v_isShared_1892_ = v_isSharedCheck_1897_;
goto v_resetjp_1890_;
}
v_resetjp_1890_:
{
lean_object* v___x_1893_; lean_object* v___x_1895_; 
v___x_1893_ = l_Lean_Elab_Tactic_Omega_Justification_tidyProof(v_s_1885_, v_c_1886_, v_v_1821_, v_a_1889_);
lean_dec(v_c_1886_);
lean_dec_ref(v_s_1885_);
if (v_isShared_1892_ == 0)
{
lean_ctor_set(v___x_1891_, 0, v___x_1893_);
v___x_1895_ = v___x_1891_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v___x_1893_);
v___x_1895_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
return v___x_1895_;
}
}
}
else
{
lean_dec(v_c_1886_);
lean_dec_ref(v_s_1885_);
lean_dec_ref(v_v_1821_);
return v___x_1888_;
}
}
case 2:
{
lean_object* v_s_1898_; lean_object* v_t_1899_; lean_object* v_j_1900_; lean_object* v_k_1901_; lean_object* v___x_1902_; 
lean_dec_ref(v___x_1878_);
v_s_1898_ = lean_ctor_get(v_x_1823_, 0);
lean_inc_ref(v_s_1898_);
v_t_1899_ = lean_ctor_get(v_x_1823_, 1);
lean_inc_ref(v_t_1899_);
v_j_1900_ = lean_ctor_get(v_x_1823_, 3);
lean_inc_ref(v_j_1900_);
v_k_1901_ = lean_ctor_get(v_x_1823_, 4);
lean_inc_ref(v_k_1901_);
lean_dec_ref_known(v_x_1823_, 5);
lean_inc_ref(v_v_1821_);
v___x_1902_ = l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(v_c_1820_, v_v_1821_, v_assumptions_1822_, v_j_1900_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, v_a_1830_, v_a_1831_, v_a_1832_);
if (lean_obj_tag(v___x_1902_) == 0)
{
lean_object* v_a_1903_; lean_object* v___x_1904_; 
v_a_1903_ = lean_ctor_get(v___x_1902_, 0);
lean_inc(v_a_1903_);
lean_dec_ref_known(v___x_1902_, 1);
lean_inc_ref(v_v_1821_);
v___x_1904_ = l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(v_c_1820_, v_v_1821_, v_assumptions_1822_, v_k_1901_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, v_a_1830_, v_a_1831_, v_a_1832_);
if (lean_obj_tag(v___x_1904_) == 0)
{
lean_object* v_a_1905_; lean_object* v___x_1907_; uint8_t v_isShared_1908_; uint8_t v_isSharedCheck_1913_; 
v_a_1905_ = lean_ctor_get(v___x_1904_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v___x_1904_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1907_ = v___x_1904_;
v_isShared_1908_ = v_isSharedCheck_1913_;
goto v_resetjp_1906_;
}
else
{
lean_inc(v_a_1905_);
lean_dec(v___x_1904_);
v___x_1907_ = lean_box(0);
v_isShared_1908_ = v_isSharedCheck_1913_;
goto v_resetjp_1906_;
}
v_resetjp_1906_:
{
lean_object* v___x_1909_; lean_object* v___x_1911_; 
v___x_1909_ = l_Lean_Elab_Tactic_Omega_Justification_combineProof(v_s_1898_, v_t_1899_, v_c_1820_, v_v_1821_, v_a_1903_, v_a_1905_);
lean_dec_ref(v_t_1899_);
lean_dec_ref(v_s_1898_);
if (v_isShared_1908_ == 0)
{
lean_ctor_set(v___x_1907_, 0, v___x_1909_);
v___x_1911_ = v___x_1907_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v___x_1909_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
return v___x_1911_;
}
}
}
else
{
lean_dec(v_a_1903_);
lean_dec_ref(v_t_1899_);
lean_dec_ref(v_s_1898_);
lean_dec_ref(v_v_1821_);
return v___x_1904_;
}
}
else
{
lean_dec_ref(v_k_1901_);
lean_dec_ref(v_t_1899_);
lean_dec_ref(v_s_1898_);
lean_dec_ref(v_v_1821_);
return v___x_1902_;
}
}
case 3:
{
lean_object* v_s_1914_; lean_object* v_t_1915_; lean_object* v_x_1916_; lean_object* v_y_1917_; lean_object* v_a_1918_; lean_object* v_j_1919_; lean_object* v_b_1920_; lean_object* v_k_1921_; lean_object* v___x_1922_; 
lean_dec_ref(v___x_1878_);
v_s_1914_ = lean_ctor_get(v_x_1823_, 0);
lean_inc_ref(v_s_1914_);
v_t_1915_ = lean_ctor_get(v_x_1823_, 1);
lean_inc_ref(v_t_1915_);
v_x_1916_ = lean_ctor_get(v_x_1823_, 2);
lean_inc(v_x_1916_);
v_y_1917_ = lean_ctor_get(v_x_1823_, 3);
lean_inc(v_y_1917_);
v_a_1918_ = lean_ctor_get(v_x_1823_, 4);
lean_inc(v_a_1918_);
v_j_1919_ = lean_ctor_get(v_x_1823_, 5);
lean_inc_ref(v_j_1919_);
v_b_1920_ = lean_ctor_get(v_x_1823_, 6);
lean_inc(v_b_1920_);
v_k_1921_ = lean_ctor_get(v_x_1823_, 7);
lean_inc_ref(v_k_1921_);
lean_dec_ref_known(v_x_1823_, 8);
lean_inc_ref(v_v_1821_);
v___x_1922_ = l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(v_x_1916_, v_v_1821_, v_assumptions_1822_, v_j_1919_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, v_a_1830_, v_a_1831_, v_a_1832_);
if (lean_obj_tag(v___x_1922_) == 0)
{
lean_object* v_a_1923_; lean_object* v___x_1924_; 
v_a_1923_ = lean_ctor_get(v___x_1922_, 0);
lean_inc(v_a_1923_);
lean_dec_ref_known(v___x_1922_, 1);
lean_inc_ref(v_v_1821_);
v___x_1924_ = l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(v_y_1917_, v_v_1821_, v_assumptions_1822_, v_k_1921_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, v_a_1830_, v_a_1831_, v_a_1832_);
if (lean_obj_tag(v___x_1924_) == 0)
{
lean_object* v_a_1925_; lean_object* v___x_1927_; uint8_t v_isShared_1928_; uint8_t v_isSharedCheck_1933_; 
v_a_1925_ = lean_ctor_get(v___x_1924_, 0);
v_isSharedCheck_1933_ = !lean_is_exclusive(v___x_1924_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1927_ = v___x_1924_;
v_isShared_1928_ = v_isSharedCheck_1933_;
goto v_resetjp_1926_;
}
else
{
lean_inc(v_a_1925_);
lean_dec(v___x_1924_);
v___x_1927_ = lean_box(0);
v_isShared_1928_ = v_isSharedCheck_1933_;
goto v_resetjp_1926_;
}
v_resetjp_1926_:
{
lean_object* v___x_1929_; lean_object* v___x_1931_; 
v___x_1929_ = l_Lean_Elab_Tactic_Omega_Justification_comboProof(v_s_1914_, v_t_1915_, v_a_1918_, v_x_1916_, v_b_1920_, v_y_1917_, v_v_1821_, v_a_1923_, v_a_1925_);
lean_dec(v_y_1917_);
lean_dec(v_b_1920_);
lean_dec(v_x_1916_);
lean_dec(v_a_1918_);
lean_dec_ref(v_t_1915_);
lean_dec_ref(v_s_1914_);
if (v_isShared_1928_ == 0)
{
lean_ctor_set(v___x_1927_, 0, v___x_1929_);
v___x_1931_ = v___x_1927_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v___x_1929_);
v___x_1931_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
return v___x_1931_;
}
}
}
else
{
lean_dec(v_a_1923_);
lean_dec(v_b_1920_);
lean_dec(v_a_1918_);
lean_dec(v_y_1917_);
lean_dec(v_x_1916_);
lean_dec_ref(v_t_1915_);
lean_dec_ref(v_s_1914_);
lean_dec_ref(v_v_1821_);
return v___x_1924_;
}
}
else
{
lean_dec_ref(v_k_1921_);
lean_dec(v_b_1920_);
lean_dec(v_a_1918_);
lean_dec(v_y_1917_);
lean_dec(v_x_1916_);
lean_dec_ref(v_t_1915_);
lean_dec_ref(v_s_1914_);
lean_dec_ref(v_v_1821_);
return v___x_1922_;
}
}
default: 
{
lean_object* v_m_1934_; lean_object* v_r_1935_; lean_object* v_i_1936_; lean_object* v_x_1937_; lean_object* v_j_1938_; lean_object* v___x_1939_; 
lean_dec_ref(v___x_1878_);
v_m_1934_ = lean_ctor_get(v_x_1823_, 0);
lean_inc(v_m_1934_);
v_r_1935_ = lean_ctor_get(v_x_1823_, 1);
lean_inc(v_r_1935_);
v_i_1936_ = lean_ctor_get(v_x_1823_, 2);
lean_inc(v_i_1936_);
v_x_1937_ = lean_ctor_get(v_x_1823_, 3);
lean_inc(v_x_1937_);
v_j_1938_ = lean_ctor_get(v_x_1823_, 4);
lean_inc_ref(v_j_1938_);
lean_dec_ref_known(v_x_1823_, 5);
lean_inc_ref(v_v_1821_);
v___x_1939_ = l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(v_x_1937_, v_v_1821_, v_assumptions_1822_, v_j_1938_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, v_a_1830_, v_a_1831_, v_a_1832_);
if (lean_obj_tag(v___x_1939_) == 0)
{
lean_object* v_a_1940_; lean_object* v___x_1941_; 
v_a_1940_ = lean_ctor_get(v___x_1939_, 0);
lean_inc(v_a_1940_);
lean_dec_ref_known(v___x_1939_, 1);
v___x_1941_ = l_Lean_Elab_Tactic_Omega_Justification_bmodProof(v_m_1934_, v_r_1935_, v_i_1936_, v_x_1937_, v_v_1821_, v_a_1940_, v_a_1829_, v_a_1830_, v_a_1831_, v_a_1832_);
lean_dec(v_x_1937_);
lean_dec(v_r_1935_);
return v___x_1941_;
}
else
{
lean_dec(v_x_1937_);
lean_dec(v_i_1936_);
lean_dec(v_r_1935_);
lean_dec(v_m_1934_);
lean_dec_ref(v_v_1821_);
return v___x_1939_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___redArg___boxed(lean_object* v_c_1948_, lean_object* v_v_1949_, lean_object* v_assumptions_1950_, lean_object* v_x_1951_, lean_object* v_a_1952_, lean_object* v_a_1953_, lean_object* v_a_1954_, lean_object* v_a_1955_, lean_object* v_a_1956_, lean_object* v_a_1957_, lean_object* v_a_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_, lean_object* v_a_1961_){
_start:
{
uint8_t v_a_boxed_1962_; lean_object* v_res_1963_; 
v_a_boxed_1962_ = lean_unbox(v_a_1955_);
v_res_1963_ = l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(v_c_1948_, v_v_1949_, v_assumptions_1950_, v_x_1951_, v_a_1952_, v_a_1953_, v_a_1954_, v_a_boxed_1962_, v_a_1956_, v_a_1957_, v_a_1958_, v_a_1959_, v_a_1960_);
lean_dec(v_a_1960_);
lean_dec_ref(v_a_1959_);
lean_dec(v_a_1958_);
lean_dec_ref(v_a_1957_);
lean_dec(v_a_1956_);
lean_dec_ref(v_a_1954_);
lean_dec(v_a_1953_);
lean_dec(v_a_1952_);
lean_dec_ref(v_assumptions_1950_);
lean_dec(v_c_1948_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof(lean_object* v_s_1964_, lean_object* v_c_1965_, lean_object* v_v_1966_, lean_object* v_assumptions_1967_, lean_object* v_x_1968_, lean_object* v_a_1969_, lean_object* v_a_1970_, lean_object* v_a_1971_, uint8_t v_a_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_){
_start:
{
lean_object* v___x_1979_; 
v___x_1979_ = l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(v_c_1965_, v_v_1966_, v_assumptions_1967_, v_x_1968_, v_a_1969_, v_a_1970_, v_a_1971_, v_a_1972_, v_a_1973_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_);
return v___x_1979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Justification_proof___boxed(lean_object* v_s_1980_, lean_object* v_c_1981_, lean_object* v_v_1982_, lean_object* v_assumptions_1983_, lean_object* v_x_1984_, lean_object* v_a_1985_, lean_object* v_a_1986_, lean_object* v_a_1987_, lean_object* v_a_1988_, lean_object* v_a_1989_, lean_object* v_a_1990_, lean_object* v_a_1991_, lean_object* v_a_1992_, lean_object* v_a_1993_, lean_object* v_a_1994_){
_start:
{
uint8_t v_a_boxed_1995_; lean_object* v_res_1996_; 
v_a_boxed_1995_ = lean_unbox(v_a_1988_);
v_res_1996_ = l_Lean_Elab_Tactic_Omega_Justification_proof(v_s_1980_, v_c_1981_, v_v_1982_, v_assumptions_1983_, v_x_1984_, v_a_1985_, v_a_1986_, v_a_1987_, v_a_boxed_1995_, v_a_1989_, v_a_1990_, v_a_1991_, v_a_1992_, v_a_1993_);
lean_dec(v_a_1993_);
lean_dec_ref(v_a_1992_);
lean_dec(v_a_1991_);
lean_dec_ref(v_a_1990_);
lean_dec(v_a_1989_);
lean_dec_ref(v_a_1987_);
lean_dec(v_a_1986_);
lean_dec(v_a_1985_);
lean_dec_ref(v_assumptions_1983_);
lean_dec(v_c_1981_);
lean_dec_ref(v_s_1980_);
return v_res_1996_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Fact_instToString___lam__0(lean_object* v_f_1997_){
_start:
{
lean_object* v_coeffs_1998_; lean_object* v_constraint_1999_; lean_object* v_justification_2000_; lean_object* v___x_2001_; 
v_coeffs_1998_ = lean_ctor_get(v_f_1997_, 0);
lean_inc(v_coeffs_1998_);
v_constraint_1999_ = lean_ctor_get(v_f_1997_, 1);
lean_inc_ref(v_constraint_1999_);
v_justification_2000_ = lean_ctor_get(v_f_1997_, 2);
lean_inc_ref(v_justification_2000_);
lean_dec_ref(v_f_1997_);
v___x_2001_ = l_Lean_Elab_Tactic_Omega_Justification_toString(v_constraint_1999_, v_coeffs_1998_, v_justification_2000_);
return v___x_2001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Fact_tidy(lean_object* v_f_2004_){
_start:
{
lean_object* v_coeffs_2005_; lean_object* v_constraint_2006_; lean_object* v_justification_2007_; lean_object* v___x_2008_; 
v_coeffs_2005_ = lean_ctor_get(v_f_2004_, 0);
v_constraint_2006_ = lean_ctor_get(v_f_2004_, 1);
v_justification_2007_ = lean_ctor_get(v_f_2004_, 2);
lean_inc_ref(v_justification_2007_);
lean_inc(v_coeffs_2005_);
lean_inc_ref(v_constraint_2006_);
v___x_2008_ = l_Lean_Elab_Tactic_Omega_Justification_tidy_x3f(v_constraint_2006_, v_coeffs_2005_, v_justification_2007_);
if (lean_obj_tag(v___x_2008_) == 0)
{
return v_f_2004_;
}
else
{
lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2020_; 
v_isSharedCheck_2020_ = !lean_is_exclusive(v_f_2004_);
if (v_isSharedCheck_2020_ == 0)
{
lean_object* v_unused_2021_; lean_object* v_unused_2022_; lean_object* v_unused_2023_; 
v_unused_2021_ = lean_ctor_get(v_f_2004_, 2);
lean_dec(v_unused_2021_);
v_unused_2022_ = lean_ctor_get(v_f_2004_, 1);
lean_dec(v_unused_2022_);
v_unused_2023_ = lean_ctor_get(v_f_2004_, 0);
lean_dec(v_unused_2023_);
v___x_2010_ = v_f_2004_;
v_isShared_2011_ = v_isSharedCheck_2020_;
goto v_resetjp_2009_;
}
else
{
lean_dec(v_f_2004_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2020_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v_val_2012_; lean_object* v_snd_2013_; lean_object* v_fst_2014_; lean_object* v_fst_2015_; lean_object* v_snd_2016_; lean_object* v___x_2018_; 
v_val_2012_ = lean_ctor_get(v___x_2008_, 0);
lean_inc(v_val_2012_);
lean_dec_ref_known(v___x_2008_, 1);
v_snd_2013_ = lean_ctor_get(v_val_2012_, 1);
lean_inc(v_snd_2013_);
v_fst_2014_ = lean_ctor_get(v_val_2012_, 0);
lean_inc(v_fst_2014_);
lean_dec(v_val_2012_);
v_fst_2015_ = lean_ctor_get(v_snd_2013_, 0);
lean_inc(v_fst_2015_);
v_snd_2016_ = lean_ctor_get(v_snd_2013_, 1);
lean_inc(v_snd_2016_);
lean_dec(v_snd_2013_);
if (v_isShared_2011_ == 0)
{
lean_ctor_set(v___x_2010_, 2, v_snd_2016_);
lean_ctor_set(v___x_2010_, 1, v_fst_2014_);
lean_ctor_set(v___x_2010_, 0, v_fst_2015_);
v___x_2018_ = v___x_2010_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v_fst_2015_);
lean_ctor_set(v_reuseFailAlloc_2019_, 1, v_fst_2014_);
lean_ctor_set(v_reuseFailAlloc_2019_, 2, v_snd_2016_);
v___x_2018_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
return v___x_2018_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Fact_combo(lean_object* v_a_2024_, lean_object* v_f_2025_, lean_object* v_b_2026_, lean_object* v_g_2027_){
_start:
{
lean_object* v_coeffs_2028_; lean_object* v_constraint_2029_; lean_object* v_justification_2030_; lean_object* v_coeffs_2031_; lean_object* v_constraint_2032_; lean_object* v_justification_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2043_; 
v_coeffs_2028_ = lean_ctor_get(v_f_2025_, 0);
lean_inc(v_coeffs_2028_);
v_constraint_2029_ = lean_ctor_get(v_f_2025_, 1);
lean_inc_ref(v_constraint_2029_);
v_justification_2030_ = lean_ctor_get(v_f_2025_, 2);
lean_inc_ref(v_justification_2030_);
lean_dec_ref(v_f_2025_);
v_coeffs_2031_ = lean_ctor_get(v_g_2027_, 0);
v_constraint_2032_ = lean_ctor_get(v_g_2027_, 1);
v_justification_2033_ = lean_ctor_get(v_g_2027_, 2);
v_isSharedCheck_2043_ = !lean_is_exclusive(v_g_2027_);
if (v_isSharedCheck_2043_ == 0)
{
v___x_2035_ = v_g_2027_;
v_isShared_2036_ = v_isSharedCheck_2043_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_justification_2033_);
lean_inc(v_constraint_2032_);
lean_inc(v_coeffs_2031_);
lean_dec(v_g_2027_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2043_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2041_; 
lean_inc(v_coeffs_2031_);
lean_inc(v_coeffs_2028_);
v___x_2037_ = l_List_zipWithAll___at___00Lean_Omega_IntList_combo_spec__0(v_a_2024_, v_b_2026_, v_coeffs_2028_, v_coeffs_2031_);
lean_inc_ref(v_constraint_2032_);
lean_inc(v_b_2026_);
lean_inc_ref(v_constraint_2029_);
lean_inc(v_a_2024_);
v___x_2038_ = l_Lean_Omega_Constraint_combo(v_a_2024_, v_constraint_2029_, v_b_2026_, v_constraint_2032_);
v___x_2039_ = lean_alloc_ctor(3, 8, 0);
lean_ctor_set(v___x_2039_, 0, v_constraint_2029_);
lean_ctor_set(v___x_2039_, 1, v_constraint_2032_);
lean_ctor_set(v___x_2039_, 2, v_coeffs_2028_);
lean_ctor_set(v___x_2039_, 3, v_coeffs_2031_);
lean_ctor_set(v___x_2039_, 4, v_a_2024_);
lean_ctor_set(v___x_2039_, 5, v_justification_2030_);
lean_ctor_set(v___x_2039_, 6, v_b_2026_);
lean_ctor_set(v___x_2039_, 7, v_justification_2033_);
if (v_isShared_2036_ == 0)
{
lean_ctor_set(v___x_2035_, 2, v___x_2039_);
lean_ctor_set(v___x_2035_, 1, v___x_2038_);
lean_ctor_set(v___x_2035_, 0, v___x_2037_);
v___x_2041_ = v___x_2035_;
goto v_reusejp_2040_;
}
else
{
lean_object* v_reuseFailAlloc_2042_; 
v_reuseFailAlloc_2042_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2042_, 0, v___x_2037_);
lean_ctor_set(v_reuseFailAlloc_2042_, 1, v___x_2038_);
lean_ctor_set(v_reuseFailAlloc_2042_, 2, v___x_2039_);
v___x_2041_ = v_reuseFailAlloc_2042_;
goto v_reusejp_2040_;
}
v_reusejp_2040_:
{
return v___x_2041_;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__11(void){
_start:
{
lean_object* v___x_2069_; lean_object* v___x_2070_; 
v___x_2069_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__10));
v___x_2070_ = l_Lean_mkAtom(v___x_2069_);
return v___x_2070_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__12(void){
_start:
{
lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; 
v___x_2071_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__11, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__11_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__11);
v___x_2072_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__3));
v___x_2073_ = lean_array_push(v___x_2072_, v___x_2071_);
return v___x_2073_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__13(void){
_start:
{
lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
v___x_2074_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__12, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__12_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__12);
v___x_2075_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__9));
v___x_2076_ = lean_box(2);
v___x_2077_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2077_, 0, v___x_2076_);
lean_ctor_set(v___x_2077_, 1, v___x_2075_);
lean_ctor_set(v___x_2077_, 2, v___x_2074_);
return v___x_2077_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__14(void){
_start:
{
lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; 
v___x_2078_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__13, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__13_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__13);
v___x_2079_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__3));
v___x_2080_ = lean_array_push(v___x_2079_, v___x_2078_);
return v___x_2080_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__15(void){
_start:
{
lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; 
v___x_2081_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__14, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__14_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__14);
v___x_2082_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__7));
v___x_2083_ = lean_box(2);
v___x_2084_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2083_);
lean_ctor_set(v___x_2084_, 1, v___x_2082_);
lean_ctor_set(v___x_2084_, 2, v___x_2081_);
return v___x_2084_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__16(void){
_start:
{
lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; 
v___x_2085_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__15, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__15_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__15);
v___x_2086_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__3));
v___x_2087_ = lean_array_push(v___x_2086_, v___x_2085_);
return v___x_2087_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__17(void){
_start:
{
lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; 
v___x_2088_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__16, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__16_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__16);
v___x_2089_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__5));
v___x_2090_ = lean_box(2);
v___x_2091_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2091_, 0, v___x_2090_);
lean_ctor_set(v___x_2091_, 1, v___x_2089_);
lean_ctor_set(v___x_2091_, 2, v___x_2088_);
return v___x_2091_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__18(void){
_start:
{
lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___x_2092_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__17, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__17);
v___x_2093_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__3));
v___x_2094_ = lean_array_push(v___x_2093_, v___x_2092_);
return v___x_2094_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__19(void){
_start:
{
lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; 
v___x_2095_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__18, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__18);
v___x_2096_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__2));
v___x_2097_ = lean_box(2);
v___x_2098_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2097_);
lean_ctor_set(v___x_2098_, 1, v___x_2096_);
lean_ctor_set(v___x_2098_, 2, v___x_2095_);
return v___x_2098_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam(void){
_start:
{
lean_object* v___x_2099_; 
v___x_2099_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__19, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__19_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam___closed__19);
return v___x_2099_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Omega_Problem_isEmpty(lean_object* v_p_2100_){
_start:
{
lean_object* v_constraints_2101_; lean_object* v_size_2102_; lean_object* v___x_2103_; uint8_t v___x_2104_; 
v_constraints_2101_ = lean_ctor_get(v_p_2100_, 2);
v_size_2102_ = lean_ctor_get(v_constraints_2101_, 0);
v___x_2103_ = lean_unsigned_to_nat(0u);
v___x_2104_ = lean_nat_dec_eq(v_size_2102_, v___x_2103_);
return v___x_2104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_isEmpty___boxed(lean_object* v_p_2105_){
_start:
{
uint8_t v_res_2106_; lean_object* v_r_2107_; 
v_res_2106_ = l_Lean_Elab_Tactic_Omega_Problem_isEmpty(v_p_2105_);
lean_dec_ref(v_p_2105_);
v_r_2107_ = lean_box(v_res_2106_);
return v_r_2107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__0(lean_object* v_a_2108_, lean_object* v_b_2109_, lean_object* v_d_2110_){
_start:
{
lean_object* v___x_2111_; lean_object* v___x_2112_; 
v___x_2111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2111_, 0, v_a_2108_);
lean_ctor_set(v___x_2111_, 1, v_b_2109_);
v___x_2112_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2112_, 0, v___x_2111_);
lean_ctor_set(v___x_2112_, 1, v_d_2110_);
return v___x_2112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__1(lean_object* v___x_2113_, lean_object* v_x_2114_){
_start:
{
lean_object* v_snd_2115_; lean_object* v_constraint_2116_; lean_object* v_fst_2117_; lean_object* v_lowerBound_2118_; lean_object* v_upperBound_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___y_2124_; lean_object* v___y_2125_; 
v_snd_2115_ = lean_ctor_get(v_x_2114_, 1);
v_constraint_2116_ = lean_ctor_get(v_snd_2115_, 1);
lean_inc_ref(v_constraint_2116_);
v_fst_2117_ = lean_ctor_get(v_x_2114_, 0);
lean_inc(v_fst_2117_);
lean_dec_ref(v_x_2114_);
v_lowerBound_2118_ = lean_ctor_get(v_constraint_2116_, 0);
lean_inc(v_lowerBound_2118_);
v_upperBound_2119_ = lean_ctor_get(v_constraint_2116_, 1);
lean_inc(v_upperBound_2119_);
lean_dec_ref(v_constraint_2116_);
v___x_2120_ = l_List_toString___redArg(v___x_2113_, v_fst_2117_);
v___x_2121_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0));
v___x_2122_ = lean_string_append(v___x_2120_, v___x_2121_);
if (lean_obj_tag(v_lowerBound_2118_) == 0)
{
if (lean_obj_tag(v_upperBound_2119_) == 0)
{
lean_object* v___x_2130_; lean_object* v___x_2131_; 
v___x_2130_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2));
v___x_2131_ = lean_string_append(v___x_2122_, v___x_2130_);
return v___x_2131_;
}
else
{
lean_object* v_val_2132_; lean_object* v___x_2133_; lean_object* v___y_2135_; lean_object* v_intZero_2140_; uint8_t v_isNeg_2141_; 
v_val_2132_ = lean_ctor_get(v_upperBound_2119_, 0);
lean_inc(v_val_2132_);
lean_dec_ref_known(v_upperBound_2119_, 1);
v___x_2133_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3));
v_intZero_2140_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_2141_ = lean_int_dec_lt(v_val_2132_, v_intZero_2140_);
if (v_isNeg_2141_ == 0)
{
lean_object* v_a_2142_; lean_object* v___x_2143_; 
v_a_2142_ = lean_nat_abs(v_val_2132_);
lean_dec(v_val_2132_);
v___x_2143_ = l_Nat_reprFast(v_a_2142_);
v___y_2135_ = v___x_2143_;
goto v___jp_2134_;
}
else
{
lean_object* v_abs_2144_; lean_object* v_one_2145_; lean_object* v_a_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; 
v_abs_2144_ = lean_nat_abs(v_val_2132_);
lean_dec(v_val_2132_);
v_one_2145_ = lean_unsigned_to_nat(1u);
v_a_2146_ = lean_nat_sub(v_abs_2144_, v_one_2145_);
lean_dec(v_abs_2144_);
v___x_2147_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_2148_ = lean_nat_add(v_a_2146_, v_one_2145_);
lean_dec(v_a_2146_);
v___x_2149_ = l_Nat_reprFast(v___x_2148_);
v___x_2150_ = lean_string_append(v___x_2147_, v___x_2149_);
lean_dec_ref(v___x_2149_);
v___y_2135_ = v___x_2150_;
goto v___jp_2134_;
}
v___jp_2134_:
{
lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2136_ = lean_string_append(v___x_2133_, v___y_2135_);
lean_dec_ref(v___y_2135_);
v___x_2137_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_2138_ = lean_string_append(v___x_2136_, v___x_2137_);
v___x_2139_ = lean_string_append(v___x_2122_, v___x_2138_);
lean_dec_ref(v___x_2138_);
return v___x_2139_;
}
}
}
else
{
if (lean_obj_tag(v_upperBound_2119_) == 0)
{
lean_object* v_val_2151_; lean_object* v___x_2152_; lean_object* v___y_2154_; lean_object* v_intZero_2159_; uint8_t v_isNeg_2160_; 
v_val_2151_ = lean_ctor_get(v_lowerBound_2118_, 0);
lean_inc(v_val_2151_);
lean_dec_ref_known(v_lowerBound_2118_, 1);
v___x_2152_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_2159_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_2160_ = lean_int_dec_lt(v_val_2151_, v_intZero_2159_);
if (v_isNeg_2160_ == 0)
{
lean_object* v_a_2161_; lean_object* v___x_2162_; 
v_a_2161_ = lean_nat_abs(v_val_2151_);
lean_dec(v_val_2151_);
v___x_2162_ = l_Nat_reprFast(v_a_2161_);
v___y_2154_ = v___x_2162_;
goto v___jp_2153_;
}
else
{
lean_object* v_abs_2163_; lean_object* v_one_2164_; lean_object* v_a_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; 
v_abs_2163_ = lean_nat_abs(v_val_2151_);
lean_dec(v_val_2151_);
v_one_2164_ = lean_unsigned_to_nat(1u);
v_a_2165_ = lean_nat_sub(v_abs_2163_, v_one_2164_);
lean_dec(v_abs_2163_);
v___x_2166_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_2167_ = lean_nat_add(v_a_2165_, v_one_2164_);
lean_dec(v_a_2165_);
v___x_2168_ = l_Nat_reprFast(v___x_2167_);
v___x_2169_ = lean_string_append(v___x_2166_, v___x_2168_);
lean_dec_ref(v___x_2168_);
v___y_2154_ = v___x_2169_;
goto v___jp_2153_;
}
v___jp_2153_:
{
lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; 
v___x_2155_ = lean_string_append(v___x_2152_, v___y_2154_);
lean_dec_ref(v___y_2154_);
v___x_2156_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5));
v___x_2157_ = lean_string_append(v___x_2155_, v___x_2156_);
v___x_2158_ = lean_string_append(v___x_2122_, v___x_2157_);
lean_dec_ref(v___x_2157_);
return v___x_2158_;
}
}
else
{
lean_object* v_val_2170_; lean_object* v_val_2171_; uint8_t v___x_2172_; 
v_val_2170_ = lean_ctor_get(v_lowerBound_2118_, 0);
lean_inc(v_val_2170_);
lean_dec_ref_known(v_lowerBound_2118_, 1);
v_val_2171_ = lean_ctor_get(v_upperBound_2119_, 0);
lean_inc(v_val_2171_);
lean_dec_ref_known(v_upperBound_2119_, 1);
v___x_2172_ = lean_int_dec_lt(v_val_2171_, v_val_2170_);
if (v___x_2172_ == 0)
{
uint8_t v___x_2173_; 
v___x_2173_ = lean_int_dec_eq(v_val_2170_, v_val_2171_);
if (v___x_2173_ == 0)
{
lean_object* v___x_2174_; lean_object* v___y_2176_; lean_object* v_intZero_2191_; uint8_t v_isNeg_2192_; 
v___x_2174_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_2191_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_2192_ = lean_int_dec_lt(v_val_2170_, v_intZero_2191_);
if (v_isNeg_2192_ == 0)
{
lean_object* v_a_2193_; lean_object* v___x_2194_; 
v_a_2193_ = lean_nat_abs(v_val_2170_);
lean_dec(v_val_2170_);
v___x_2194_ = l_Nat_reprFast(v_a_2193_);
v___y_2176_ = v___x_2194_;
goto v___jp_2175_;
}
else
{
lean_object* v_abs_2195_; lean_object* v_one_2196_; lean_object* v_a_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; 
v_abs_2195_ = lean_nat_abs(v_val_2170_);
lean_dec(v_val_2170_);
v_one_2196_ = lean_unsigned_to_nat(1u);
v_a_2197_ = lean_nat_sub(v_abs_2195_, v_one_2196_);
lean_dec(v_abs_2195_);
v___x_2198_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_2199_ = lean_nat_add(v_a_2197_, v_one_2196_);
lean_dec(v_a_2197_);
v___x_2200_ = l_Nat_reprFast(v___x_2199_);
v___x_2201_ = lean_string_append(v___x_2198_, v___x_2200_);
lean_dec_ref(v___x_2200_);
v___y_2176_ = v___x_2201_;
goto v___jp_2175_;
}
v___jp_2175_:
{
lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v_intZero_2180_; uint8_t v_isNeg_2181_; 
v___x_2177_ = lean_string_append(v___x_2174_, v___y_2176_);
lean_dec_ref(v___y_2176_);
v___x_2178_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0));
v___x_2179_ = lean_string_append(v___x_2177_, v___x_2178_);
v_intZero_2180_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_2181_ = lean_int_dec_lt(v_val_2171_, v_intZero_2180_);
if (v_isNeg_2181_ == 0)
{
lean_object* v_a_2182_; lean_object* v___x_2183_; 
v_a_2182_ = lean_nat_abs(v_val_2171_);
lean_dec(v_val_2171_);
v___x_2183_ = l_Nat_reprFast(v_a_2182_);
v___y_2124_ = v___x_2179_;
v___y_2125_ = v___x_2183_;
goto v___jp_2123_;
}
else
{
lean_object* v_abs_2184_; lean_object* v_one_2185_; lean_object* v_a_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; 
v_abs_2184_ = lean_nat_abs(v_val_2171_);
lean_dec(v_val_2171_);
v_one_2185_ = lean_unsigned_to_nat(1u);
v_a_2186_ = lean_nat_sub(v_abs_2184_, v_one_2185_);
lean_dec(v_abs_2184_);
v___x_2187_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_2188_ = lean_nat_add(v_a_2186_, v_one_2185_);
lean_dec(v_a_2186_);
v___x_2189_ = l_Nat_reprFast(v___x_2188_);
v___x_2190_ = lean_string_append(v___x_2187_, v___x_2189_);
lean_dec_ref(v___x_2189_);
v___y_2124_ = v___x_2179_;
v___y_2125_ = v___x_2190_;
goto v___jp_2123_;
}
}
}
else
{
lean_object* v___x_2202_; lean_object* v___y_2204_; lean_object* v_intZero_2209_; uint8_t v_isNeg_2210_; 
lean_dec(v_val_2171_);
v___x_2202_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6));
v_intZero_2209_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_2210_ = lean_int_dec_lt(v_val_2170_, v_intZero_2209_);
if (v_isNeg_2210_ == 0)
{
lean_object* v_a_2211_; lean_object* v___x_2212_; 
v_a_2211_ = lean_nat_abs(v_val_2170_);
lean_dec(v_val_2170_);
v___x_2212_ = l_Nat_reprFast(v_a_2211_);
v___y_2204_ = v___x_2212_;
goto v___jp_2203_;
}
else
{
lean_object* v_abs_2213_; lean_object* v_one_2214_; lean_object* v_a_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; 
v_abs_2213_ = lean_nat_abs(v_val_2170_);
lean_dec(v_val_2170_);
v_one_2214_ = lean_unsigned_to_nat(1u);
v_a_2215_ = lean_nat_sub(v_abs_2213_, v_one_2214_);
lean_dec(v_abs_2213_);
v___x_2216_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_2217_ = lean_nat_add(v_a_2215_, v_one_2214_);
lean_dec(v_a_2215_);
v___x_2218_ = l_Nat_reprFast(v___x_2217_);
v___x_2219_ = lean_string_append(v___x_2216_, v___x_2218_);
lean_dec_ref(v___x_2218_);
v___y_2204_ = v___x_2219_;
goto v___jp_2203_;
}
v___jp_2203_:
{
lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; 
v___x_2205_ = lean_string_append(v___x_2202_, v___y_2204_);
lean_dec_ref(v___y_2204_);
v___x_2206_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7));
v___x_2207_ = lean_string_append(v___x_2205_, v___x_2206_);
v___x_2208_ = lean_string_append(v___x_2122_, v___x_2207_);
lean_dec_ref(v___x_2207_);
return v___x_2208_;
}
}
}
else
{
lean_object* v___x_2220_; lean_object* v___x_2221_; 
lean_dec(v_val_2171_);
lean_dec(v_val_2170_);
v___x_2220_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8));
v___x_2221_ = lean_string_append(v___x_2122_, v___x_2220_);
return v___x_2221_;
}
}
}
v___jp_2123_:
{
lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; 
v___x_2126_ = lean_string_append(v___y_2124_, v___y_2125_);
lean_dec_ref(v___y_2125_);
v___x_2127_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_2128_ = lean_string_append(v___x_2126_, v___x_2127_);
v___x_2129_ = lean_string_append(v___x_2122_, v___x_2128_);
lean_dec_ref(v___x_2128_);
return v___x_2129_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__2(lean_object* v___x_2222_, lean_object* v___f_2223_, lean_object* v_l_2224_, lean_object* v_acc_2225_){
_start:
{
lean_object* v___x_2226_; 
v___x_2226_ = l_Std_DHashMap_Internal_AssocList_foldrM___redArg(v___x_2222_, v___f_2223_, v_acc_2225_, v_l_2224_);
return v___x_2226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3(lean_object* v___f_2248_, lean_object* v___f_2249_, lean_object* v_p_2250_){
_start:
{
uint8_t v_possible_2251_; 
v_possible_2251_ = lean_ctor_get_uint8(v_p_2250_, sizeof(void*)*7);
if (v_possible_2251_ == 0)
{
lean_object* v___x_2252_; 
lean_dec_ref(v_p_2250_);
lean_dec_ref(v___f_2249_);
lean_dec_ref(v___f_2248_);
v___x_2252_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__0));
return v___x_2252_;
}
else
{
lean_object* v_constraints_2253_; uint8_t v___x_2254_; 
v_constraints_2253_ = lean_ctor_get(v_p_2250_, 2);
lean_inc_ref(v_constraints_2253_);
v___x_2254_ = l_Lean_Elab_Tactic_Omega_Problem_isEmpty(v_p_2250_);
lean_dec_ref(v_p_2250_);
if (v___x_2254_ == 0)
{
lean_object* v___x_2255_; lean_object* v_buckets_2256_; lean_object* v___x_2257_; lean_object* v___y_2259_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; uint8_t v___x_2266_; 
v___x_2255_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__10));
v_buckets_2256_ = lean_ctor_get(v_constraints_2253_, 1);
lean_inc_ref(v_buckets_2256_);
lean_dec_ref(v_constraints_2253_);
v___x_2257_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0));
v___x_2263_ = lean_box(0);
v___x_2264_ = lean_array_get_size(v_buckets_2256_);
v___x_2265_ = lean_unsigned_to_nat(0u);
v___x_2266_ = lean_nat_dec_lt(v___x_2265_, v___x_2264_);
if (v___x_2266_ == 0)
{
lean_dec_ref(v_buckets_2256_);
lean_dec_ref(v___f_2249_);
v___y_2259_ = v___x_2263_;
goto v___jp_2258_;
}
else
{
lean_object* v___f_2267_; size_t v___x_2268_; size_t v___x_2269_; lean_object* v___x_2270_; 
v___f_2267_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__2), 4, 2);
lean_closure_set(v___f_2267_, 0, v___x_2255_);
lean_closure_set(v___f_2267_, 1, v___f_2249_);
v___x_2268_ = lean_usize_of_nat(v___x_2264_);
v___x_2269_ = ((size_t)0ULL);
v___x_2270_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2255_, v___f_2267_, v_buckets_2256_, v___x_2268_, v___x_2269_, v___x_2263_);
v___y_2259_ = v___x_2270_;
goto v___jp_2258_;
}
v___jp_2258_:
{
lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; 
v___x_2260_ = lean_box(0);
v___x_2261_ = l_List_mapTR_loop___redArg(v___f_2248_, v___y_2259_, v___x_2260_);
v___x_2262_ = l_String_intercalate(v___x_2257_, v___x_2261_);
return v___x_2262_;
}
}
else
{
lean_object* v___x_2271_; 
lean_dec_ref(v_constraints_2253_);
lean_dec_ref(v___f_2249_);
lean_dec_ref(v___f_2248_);
v___x_2271_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__11));
return v___x_2271_;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__2(void){
_start:
{
lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; 
v___x_2286_ = lean_box(0);
v___x_2287_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__1));
v___x_2288_ = l_Lean_Expr_const___override(v___x_2287_, v___x_2286_);
return v___x_2288_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__6(void){
_start:
{
lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; 
v___x_2294_ = lean_box(0);
v___x_2295_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__5));
v___x_2296_ = l_Lean_Expr_const___override(v___x_2295_, v___x_2294_);
return v___x_2296_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__9(void){
_start:
{
lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; 
v___x_2303_ = lean_box(0);
v___x_2304_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__8));
v___x_2305_ = l_Lean_Expr_const___override(v___x_2304_, v___x_2303_);
return v___x_2305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse(lean_object* v_s_2306_, lean_object* v_x_2307_, lean_object* v_j_2308_, lean_object* v_assumptions_2309_, lean_object* v_a_2310_, lean_object* v_a_2311_, lean_object* v_a_2312_, uint8_t v_a_2313_, lean_object* v_a_2314_, lean_object* v_a_2315_, lean_object* v_a_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_){
_start:
{
lean_object* v___x_2320_; 
v___x_2320_ = l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(v_a_2311_, v_a_2315_, v_a_2316_, v_a_2317_, v_a_2318_);
if (lean_obj_tag(v___x_2320_) == 0)
{
lean_object* v_a_2321_; lean_object* v___x_2322_; 
v_a_2321_ = lean_ctor_get(v___x_2320_, 0);
lean_inc_n(v_a_2321_, 2);
lean_dec_ref_known(v___x_2320_, 1);
v___x_2322_ = l_Lean_Elab_Tactic_Omega_Justification_proof___redArg(v_x_2307_, v_a_2321_, v_assumptions_2309_, v_j_2308_, v_a_2310_, v_a_2311_, v_a_2312_, v_a_2313_, v_a_2314_, v_a_2315_, v_a_2316_, v_a_2317_, v_a_2318_);
if (lean_obj_tag(v___x_2322_) == 0)
{
lean_object* v_a_2323_; lean_object* v___x_2324_; lean_object* v_lowerBound_2325_; lean_object* v_upperBound_2326_; lean_object* v_nil_2327_; lean_object* v_cons_2328_; lean_object* v___x_2329_; lean_object* v___y_2331_; lean_object* v___y_2349_; lean_object* v___y_2350_; lean_object* v___y_2351_; lean_object* v___x_2354_; lean_object* v___y_2356_; 
v_a_2323_ = lean_ctor_get(v___x_2322_, 0);
lean_inc(v_a_2323_);
lean_dec_ref_known(v___x_2322_, 1);
v___x_2324_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v_lowerBound_2325_ = lean_ctor_get(v_s_2306_, 0);
v_upperBound_2326_ = lean_ctor_get(v_s_2306_, 1);
v_nil_2327_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13);
v_cons_2328_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_2329_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v_nil_2327_, v_cons_2328_, v_x_2307_);
v___x_2354_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__2);
if (lean_obj_tag(v_lowerBound_2325_) == 0)
{
lean_object* v___x_2372_; 
v___x_2372_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___y_2356_ = v___x_2372_;
goto v___jp_2355_;
}
else
{
lean_object* v_val_2373_; lean_object* v___x_2374_; lean_object* v___y_2376_; lean_object* v___x_2378_; uint8_t v___x_2379_; 
v_val_2373_ = lean_ctor_get(v_lowerBound_2325_, 0);
v___x_2374_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_2378_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_2379_ = lean_int_dec_le(v___x_2378_, v_val_2373_);
if (v___x_2379_ == 0)
{
lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; 
v___x_2380_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24);
v___x_2381_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27);
v___x_2382_ = lean_int_neg(v_val_2373_);
v___x_2383_ = l_Int_toNat(v___x_2382_);
lean_dec(v___x_2382_);
v___x_2384_ = l_Lean_instToExprInt_mkNat(v___x_2383_);
v___x_2385_ = l_Lean_mkApp3(v___x_2380_, v___x_2324_, v___x_2381_, v___x_2384_);
v___y_2376_ = v___x_2385_;
goto v___jp_2375_;
}
else
{
lean_object* v___x_2386_; lean_object* v___x_2387_; 
v___x_2386_ = l_Int_toNat(v_val_2373_);
v___x_2387_ = l_Lean_instToExprInt_mkNat(v___x_2386_);
v___y_2376_ = v___x_2387_;
goto v___jp_2375_;
}
v___jp_2375_:
{
lean_object* v___x_2377_; 
v___x_2377_ = l_Lean_mkAppB(v___x_2374_, v___x_2324_, v___y_2376_);
v___y_2356_ = v___x_2377_;
goto v___jp_2355_;
}
}
v___jp_2330_:
{
lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; 
v___x_2332_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__2, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__2);
lean_inc_ref(v___y_2331_);
v___x_2333_ = l_Lean_Expr_app___override(v___x_2332_, v___y_2331_);
v___x_2334_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__6, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__6);
v___x_2335_ = l_Lean_Meta_mkEq(v___x_2333_, v___x_2334_, v_a_2315_, v_a_2316_, v_a_2317_, v_a_2318_);
if (lean_obj_tag(v___x_2335_) == 0)
{
lean_object* v_a_2336_; lean_object* v___x_2337_; 
v_a_2336_ = lean_ctor_get(v___x_2335_, 0);
lean_inc(v_a_2336_);
lean_dec_ref_known(v___x_2335_, 1);
v___x_2337_ = l_Lean_Meta_mkDecideProof(v_a_2336_, v_a_2315_, v_a_2316_, v_a_2317_, v_a_2318_);
if (lean_obj_tag(v___x_2337_) == 0)
{
lean_object* v_a_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2347_; 
v_a_2338_ = lean_ctor_get(v___x_2337_, 0);
v_isSharedCheck_2347_ = !lean_is_exclusive(v___x_2337_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2340_ = v___x_2337_;
v_isShared_2341_ = v_isSharedCheck_2347_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_a_2338_);
lean_dec(v___x_2337_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2347_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2345_; 
v___x_2342_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__9, &l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__9_once, _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__9);
v___x_2343_ = l_Lean_mkApp5(v___x_2342_, v___y_2331_, v_a_2338_, v___x_2329_, v_a_2321_, v_a_2323_);
if (v_isShared_2341_ == 0)
{
lean_ctor_set(v___x_2340_, 0, v___x_2343_);
v___x_2345_ = v___x_2340_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v___x_2343_);
v___x_2345_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2344_;
}
v_reusejp_2344_:
{
return v___x_2345_;
}
}
}
else
{
lean_dec_ref(v___y_2331_);
lean_dec_ref(v___x_2329_);
lean_dec(v_a_2323_);
lean_dec(v_a_2321_);
return v___x_2337_;
}
}
else
{
lean_dec_ref(v___y_2331_);
lean_dec_ref(v___x_2329_);
lean_dec(v_a_2323_);
lean_dec(v_a_2321_);
return v___x_2335_;
}
}
v___jp_2348_:
{
lean_object* v___x_2352_; lean_object* v___x_2353_; 
lean_inc_ref(v___y_2349_);
v___x_2352_ = l_Lean_mkAppB(v___y_2349_, v___x_2324_, v___y_2351_);
v___x_2353_ = l_Lean_Expr_app___override(v___y_2350_, v___x_2352_);
v___y_2331_ = v___x_2353_;
goto v___jp_2330_;
}
v___jp_2355_:
{
lean_object* v___x_2357_; 
v___x_2357_ = l_Lean_Expr_app___override(v___x_2354_, v___y_2356_);
if (lean_obj_tag(v_upperBound_2326_) == 0)
{
lean_object* v___x_2358_; lean_object* v___x_2359_; 
v___x_2358_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__7);
v___x_2359_ = l_Lean_Expr_app___override(v___x_2357_, v___x_2358_);
v___y_2331_ = v___x_2359_;
goto v___jp_2330_;
}
else
{
lean_object* v_val_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; uint8_t v___x_2363_; 
v_val_2360_ = lean_ctor_get(v_upperBound_2326_, 0);
v___x_2361_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10, &l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10_once, _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint___lam__0___closed__10);
v___x_2362_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_2363_ = lean_int_dec_le(v___x_2362_, v_val_2360_);
if (v___x_2363_ == 0)
{
lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; 
v___x_2364_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24);
v___x_2365_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27);
v___x_2366_ = lean_int_neg(v_val_2360_);
v___x_2367_ = l_Int_toNat(v___x_2366_);
lean_dec(v___x_2366_);
v___x_2368_ = l_Lean_instToExprInt_mkNat(v___x_2367_);
v___x_2369_ = l_Lean_mkApp3(v___x_2364_, v___x_2324_, v___x_2365_, v___x_2368_);
v___y_2349_ = v___x_2361_;
v___y_2350_ = v___x_2357_;
v___y_2351_ = v___x_2369_;
goto v___jp_2348_;
}
else
{
lean_object* v___x_2370_; lean_object* v___x_2371_; 
v___x_2370_ = l_Int_toNat(v_val_2360_);
v___x_2371_ = l_Lean_instToExprInt_mkNat(v___x_2370_);
v___y_2349_ = v___x_2361_;
v___y_2350_ = v___x_2357_;
v___y_2351_ = v___x_2371_;
goto v___jp_2348_;
}
}
}
}
else
{
lean_dec(v_a_2321_);
return v___x_2322_;
}
}
else
{
lean_dec_ref(v_j_2308_);
return v___x_2320_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_proveFalse___boxed(lean_object* v_s_2388_, lean_object* v_x_2389_, lean_object* v_j_2390_, lean_object* v_assumptions_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_){
_start:
{
uint8_t v_a_boxed_2402_; lean_object* v_res_2403_; 
v_a_boxed_2402_ = lean_unbox(v_a_2395_);
v_res_2403_ = l_Lean_Elab_Tactic_Omega_Problem_proveFalse(v_s_2388_, v_x_2389_, v_j_2390_, v_assumptions_2391_, v_a_2392_, v_a_2393_, v_a_2394_, v_a_boxed_2402_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_, v_a_2400_);
lean_dec(v_a_2400_);
lean_dec_ref(v_a_2399_);
lean_dec(v_a_2398_);
lean_dec_ref(v_a_2397_);
lean_dec(v_a_2396_);
lean_dec_ref(v_a_2394_);
lean_dec(v_a_2393_);
lean_dec(v_a_2392_);
lean_dec_ref(v_assumptions_2391_);
lean_dec(v_x_2389_);
lean_dec_ref(v_s_2388_);
return v_res_2403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_insertConstraint___lam__0(lean_object* v_constraint_2404_, lean_object* v_coeffs_2405_, lean_object* v_justification_2406_, lean_object* v_x_2407_){
_start:
{
lean_object* v___x_2408_; 
v___x_2408_ = l_Lean_Elab_Tactic_Omega_Justification_toString(v_constraint_2404_, v_coeffs_2405_, v_justification_2406_);
return v___x_2408_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1___redArg(lean_object* v_a_2409_, lean_object* v_x_2410_){
_start:
{
if (lean_obj_tag(v_x_2410_) == 0)
{
uint8_t v___x_2411_; 
v___x_2411_ = 0;
return v___x_2411_;
}
else
{
lean_object* v_key_2412_; lean_object* v_tail_2413_; uint8_t v___x_2414_; 
v_key_2412_ = lean_ctor_get(v_x_2410_, 0);
v_tail_2413_ = lean_ctor_get(v_x_2410_, 2);
v___x_2414_ = l_List_beq___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__1(v_key_2412_, v_a_2409_);
if (v___x_2414_ == 0)
{
v_x_2410_ = v_tail_2413_;
goto _start;
}
else
{
return v___x_2414_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1___redArg___boxed(lean_object* v_a_2416_, lean_object* v_x_2417_){
_start:
{
uint8_t v_res_2418_; lean_object* v_r_2419_; 
v_res_2418_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1___redArg(v_a_2416_, v_x_2417_);
lean_dec(v_x_2417_);
lean_dec(v_a_2416_);
v_r_2419_ = lean_box(v_res_2418_);
return v_r_2419_;
}
}
LEAN_EXPORT uint64_t l_List_foldl___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__0(uint64_t v_x_2420_, lean_object* v_x_2421_){
_start:
{
if (lean_obj_tag(v_x_2421_) == 0)
{
return v_x_2420_;
}
else
{
lean_object* v_head_2422_; lean_object* v_tail_2423_; lean_object* v_intZero_2424_; uint8_t v_isNeg_2425_; 
v_head_2422_ = lean_ctor_get(v_x_2421_, 0);
v_tail_2423_ = lean_ctor_get(v_x_2421_, 1);
v_intZero_2424_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_2425_ = lean_int_dec_lt(v_head_2422_, v_intZero_2424_);
if (v_isNeg_2425_ == 0)
{
lean_object* v_a_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; uint64_t v___x_2429_; uint64_t v___x_2430_; 
v_a_2426_ = lean_nat_abs(v_head_2422_);
v___x_2427_ = lean_unsigned_to_nat(2u);
v___x_2428_ = lean_nat_mul(v___x_2427_, v_a_2426_);
lean_dec(v_a_2426_);
v___x_2429_ = lean_uint64_of_nat(v___x_2428_);
lean_dec(v___x_2428_);
v___x_2430_ = lean_uint64_mix_hash(v_x_2420_, v___x_2429_);
v_x_2420_ = v___x_2430_;
v_x_2421_ = v_tail_2423_;
goto _start;
}
else
{
lean_object* v_abs_2432_; lean_object* v_one_2433_; lean_object* v_a_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; uint64_t v___x_2438_; uint64_t v___x_2439_; 
v_abs_2432_ = lean_nat_abs(v_head_2422_);
v_one_2433_ = lean_unsigned_to_nat(1u);
v_a_2434_ = lean_nat_sub(v_abs_2432_, v_one_2433_);
lean_dec(v_abs_2432_);
v___x_2435_ = lean_unsigned_to_nat(2u);
v___x_2436_ = lean_nat_mul(v___x_2435_, v_a_2434_);
lean_dec(v_a_2434_);
v___x_2437_ = lean_nat_add(v___x_2436_, v_one_2433_);
lean_dec(v___x_2436_);
v___x_2438_ = lean_uint64_of_nat(v___x_2437_);
lean_dec(v___x_2437_);
v___x_2439_ = lean_uint64_mix_hash(v_x_2420_, v___x_2438_);
v_x_2420_ = v___x_2439_;
v_x_2421_ = v_tail_2423_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__0___boxed(lean_object* v_x_2441_, lean_object* v_x_2442_){
_start:
{
uint64_t v_x_806__boxed_2443_; uint64_t v_res_2444_; lean_object* v_r_2445_; 
v_x_806__boxed_2443_ = lean_unbox_uint64(v_x_2441_);
lean_dec_ref(v_x_2441_);
v_res_2444_ = l_List_foldl___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__0(v_x_806__boxed_2443_, v_x_2442_);
lean_dec(v_x_2442_);
v_r_2445_ = lean_box_uint64(v_res_2444_);
return v_r_2445_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3_spec__5___redArg(lean_object* v_x_2446_, lean_object* v_x_2447_){
_start:
{
if (lean_obj_tag(v_x_2447_) == 0)
{
return v_x_2446_;
}
else
{
lean_object* v_key_2448_; lean_object* v_value_2449_; lean_object* v_tail_2450_; lean_object* v___x_2452_; uint8_t v_isShared_2453_; uint8_t v_isSharedCheck_2474_; 
v_key_2448_ = lean_ctor_get(v_x_2447_, 0);
v_value_2449_ = lean_ctor_get(v_x_2447_, 1);
v_tail_2450_ = lean_ctor_get(v_x_2447_, 2);
v_isSharedCheck_2474_ = !lean_is_exclusive(v_x_2447_);
if (v_isSharedCheck_2474_ == 0)
{
v___x_2452_ = v_x_2447_;
v_isShared_2453_ = v_isSharedCheck_2474_;
goto v_resetjp_2451_;
}
else
{
lean_inc(v_tail_2450_);
lean_inc(v_value_2449_);
lean_inc(v_key_2448_);
lean_dec(v_x_2447_);
v___x_2452_ = lean_box(0);
v_isShared_2453_ = v_isSharedCheck_2474_;
goto v_resetjp_2451_;
}
v_resetjp_2451_:
{
lean_object* v___x_2454_; uint64_t v___x_2455_; uint64_t v___x_2456_; uint64_t v___x_2457_; uint64_t v___x_2458_; uint64_t v_fold_2459_; uint64_t v___x_2460_; uint64_t v___x_2461_; uint64_t v___x_2462_; size_t v___x_2463_; size_t v___x_2464_; size_t v___x_2465_; size_t v___x_2466_; size_t v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2470_; 
v___x_2454_ = lean_array_get_size(v_x_2446_);
v___x_2455_ = 7ULL;
v___x_2456_ = l_List_foldl___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__0(v___x_2455_, v_key_2448_);
v___x_2457_ = 32ULL;
v___x_2458_ = lean_uint64_shift_right(v___x_2456_, v___x_2457_);
v_fold_2459_ = lean_uint64_xor(v___x_2456_, v___x_2458_);
v___x_2460_ = 16ULL;
v___x_2461_ = lean_uint64_shift_right(v_fold_2459_, v___x_2460_);
v___x_2462_ = lean_uint64_xor(v_fold_2459_, v___x_2461_);
v___x_2463_ = lean_uint64_to_usize(v___x_2462_);
v___x_2464_ = lean_usize_of_nat(v___x_2454_);
v___x_2465_ = ((size_t)1ULL);
v___x_2466_ = lean_usize_sub(v___x_2464_, v___x_2465_);
v___x_2467_ = lean_usize_land(v___x_2463_, v___x_2466_);
v___x_2468_ = lean_array_uget_borrowed(v_x_2446_, v___x_2467_);
lean_inc(v___x_2468_);
if (v_isShared_2453_ == 0)
{
lean_ctor_set(v___x_2452_, 2, v___x_2468_);
v___x_2470_ = v___x_2452_;
goto v_reusejp_2469_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v_key_2448_);
lean_ctor_set(v_reuseFailAlloc_2473_, 1, v_value_2449_);
lean_ctor_set(v_reuseFailAlloc_2473_, 2, v___x_2468_);
v___x_2470_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2469_;
}
v_reusejp_2469_:
{
lean_object* v___x_2471_; 
v___x_2471_ = lean_array_uset(v_x_2446_, v___x_2467_, v___x_2470_);
v_x_2446_ = v___x_2471_;
v_x_2447_ = v_tail_2450_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3___redArg(lean_object* v_i_2475_, lean_object* v_source_2476_, lean_object* v_target_2477_){
_start:
{
lean_object* v___x_2478_; uint8_t v___x_2479_; 
v___x_2478_ = lean_array_get_size(v_source_2476_);
v___x_2479_ = lean_nat_dec_lt(v_i_2475_, v___x_2478_);
if (v___x_2479_ == 0)
{
lean_dec_ref(v_source_2476_);
lean_dec(v_i_2475_);
return v_target_2477_;
}
else
{
lean_object* v_es_2480_; lean_object* v___x_2481_; lean_object* v_source_2482_; lean_object* v_target_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; 
v_es_2480_ = lean_array_fget(v_source_2476_, v_i_2475_);
v___x_2481_ = lean_box(0);
v_source_2482_ = lean_array_fset(v_source_2476_, v_i_2475_, v___x_2481_);
v_target_2483_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3_spec__5___redArg(v_target_2477_, v_es_2480_);
v___x_2484_ = lean_unsigned_to_nat(1u);
v___x_2485_ = lean_nat_add(v_i_2475_, v___x_2484_);
lean_dec(v_i_2475_);
v_i_2475_ = v___x_2485_;
v_source_2476_ = v_source_2482_;
v_target_2477_ = v_target_2483_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2___redArg(lean_object* v_data_2487_){
_start:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v_nbuckets_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; 
v___x_2488_ = lean_array_get_size(v_data_2487_);
v___x_2489_ = lean_unsigned_to_nat(2u);
v_nbuckets_2490_ = lean_nat_mul(v___x_2488_, v___x_2489_);
v___x_2491_ = lean_unsigned_to_nat(0u);
v___x_2492_ = lean_box(0);
v___x_2493_ = lean_mk_array(v_nbuckets_2490_, v___x_2492_);
v___x_2494_ = lean_array_propagate_mark(v_data_2487_, v___x_2493_);
v___x_2495_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3___redArg(v___x_2491_, v_data_2487_, v___x_2494_);
return v___x_2495_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__1___redArg(lean_object* v_m_2496_, lean_object* v_a_2497_, lean_object* v_b_2498_){
_start:
{
lean_object* v_size_2499_; lean_object* v_buckets_2500_; lean_object* v___x_2501_; uint64_t v___x_2502_; uint64_t v___x_2503_; uint64_t v___x_2504_; uint64_t v___x_2505_; uint64_t v_fold_2506_; uint64_t v___x_2507_; uint64_t v___x_2508_; uint64_t v___x_2509_; size_t v___x_2510_; size_t v___x_2511_; size_t v___x_2512_; size_t v___x_2513_; size_t v___x_2514_; lean_object* v_bkt_2515_; uint8_t v___x_2516_; 
v_size_2499_ = lean_ctor_get(v_m_2496_, 0);
v_buckets_2500_ = lean_ctor_get(v_m_2496_, 1);
v___x_2501_ = lean_array_get_size(v_buckets_2500_);
v___x_2502_ = 7ULL;
v___x_2503_ = l_List_foldl___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__0(v___x_2502_, v_a_2497_);
v___x_2504_ = 32ULL;
v___x_2505_ = lean_uint64_shift_right(v___x_2503_, v___x_2504_);
v_fold_2506_ = lean_uint64_xor(v___x_2503_, v___x_2505_);
v___x_2507_ = 16ULL;
v___x_2508_ = lean_uint64_shift_right(v_fold_2506_, v___x_2507_);
v___x_2509_ = lean_uint64_xor(v_fold_2506_, v___x_2508_);
v___x_2510_ = lean_uint64_to_usize(v___x_2509_);
v___x_2511_ = lean_usize_of_nat(v___x_2501_);
v___x_2512_ = ((size_t)1ULL);
v___x_2513_ = lean_usize_sub(v___x_2511_, v___x_2512_);
v___x_2514_ = lean_usize_land(v___x_2510_, v___x_2513_);
v_bkt_2515_ = lean_array_uget_borrowed(v_buckets_2500_, v___x_2514_);
v___x_2516_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1___redArg(v_a_2497_, v_bkt_2515_);
if (v___x_2516_ == 0)
{
lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2537_; 
lean_inc_ref(v_buckets_2500_);
lean_inc(v_size_2499_);
v_isSharedCheck_2537_ = !lean_is_exclusive(v_m_2496_);
if (v_isSharedCheck_2537_ == 0)
{
lean_object* v_unused_2538_; lean_object* v_unused_2539_; 
v_unused_2538_ = lean_ctor_get(v_m_2496_, 1);
lean_dec(v_unused_2538_);
v_unused_2539_ = lean_ctor_get(v_m_2496_, 0);
lean_dec(v_unused_2539_);
v___x_2518_ = v_m_2496_;
v_isShared_2519_ = v_isSharedCheck_2537_;
goto v_resetjp_2517_;
}
else
{
lean_dec(v_m_2496_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2537_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v___x_2520_; lean_object* v_size_x27_2521_; lean_object* v___x_2522_; lean_object* v_buckets_x27_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; uint8_t v___x_2529_; 
v___x_2520_ = lean_unsigned_to_nat(1u);
v_size_x27_2521_ = lean_nat_add(v_size_2499_, v___x_2520_);
lean_dec(v_size_2499_);
lean_inc(v_bkt_2515_);
v___x_2522_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2522_, 0, v_a_2497_);
lean_ctor_set(v___x_2522_, 1, v_b_2498_);
lean_ctor_set(v___x_2522_, 2, v_bkt_2515_);
v_buckets_x27_2523_ = lean_array_uset(v_buckets_2500_, v___x_2514_, v___x_2522_);
v___x_2524_ = lean_unsigned_to_nat(4u);
v___x_2525_ = lean_nat_mul(v_size_x27_2521_, v___x_2524_);
v___x_2526_ = lean_unsigned_to_nat(3u);
v___x_2527_ = lean_nat_div(v___x_2525_, v___x_2526_);
lean_dec(v___x_2525_);
v___x_2528_ = lean_array_get_size(v_buckets_x27_2523_);
v___x_2529_ = lean_nat_dec_le(v___x_2527_, v___x_2528_);
lean_dec(v___x_2527_);
if (v___x_2529_ == 0)
{
lean_object* v_val_2530_; lean_object* v___x_2532_; 
v_val_2530_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2___redArg(v_buckets_x27_2523_);
if (v_isShared_2519_ == 0)
{
lean_ctor_set(v___x_2518_, 1, v_val_2530_);
lean_ctor_set(v___x_2518_, 0, v_size_x27_2521_);
v___x_2532_ = v___x_2518_;
goto v_reusejp_2531_;
}
else
{
lean_object* v_reuseFailAlloc_2533_; 
v_reuseFailAlloc_2533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2533_, 0, v_size_x27_2521_);
lean_ctor_set(v_reuseFailAlloc_2533_, 1, v_val_2530_);
v___x_2532_ = v_reuseFailAlloc_2533_;
goto v_reusejp_2531_;
}
v_reusejp_2531_:
{
return v___x_2532_;
}
}
else
{
lean_object* v___x_2535_; 
if (v_isShared_2519_ == 0)
{
lean_ctor_set(v___x_2518_, 1, v_buckets_x27_2523_);
lean_ctor_set(v___x_2518_, 0, v_size_x27_2521_);
v___x_2535_ = v___x_2518_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v_size_x27_2521_);
lean_ctor_set(v_reuseFailAlloc_2536_, 1, v_buckets_x27_2523_);
v___x_2535_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
return v___x_2535_;
}
}
}
}
else
{
lean_dec(v_b_2498_);
lean_dec(v_a_2497_);
return v_m_2496_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__3___redArg(lean_object* v_a_2540_, lean_object* v_b_2541_, lean_object* v_x_2542_){
_start:
{
if (lean_obj_tag(v_x_2542_) == 0)
{
lean_dec(v_b_2541_);
lean_dec(v_a_2540_);
return v_x_2542_;
}
else
{
lean_object* v_key_2543_; lean_object* v_value_2544_; lean_object* v_tail_2545_; lean_object* v___x_2547_; uint8_t v_isShared_2548_; uint8_t v_isSharedCheck_2557_; 
v_key_2543_ = lean_ctor_get(v_x_2542_, 0);
v_value_2544_ = lean_ctor_get(v_x_2542_, 1);
v_tail_2545_ = lean_ctor_get(v_x_2542_, 2);
v_isSharedCheck_2557_ = !lean_is_exclusive(v_x_2542_);
if (v_isSharedCheck_2557_ == 0)
{
v___x_2547_ = v_x_2542_;
v_isShared_2548_ = v_isSharedCheck_2557_;
goto v_resetjp_2546_;
}
else
{
lean_inc(v_tail_2545_);
lean_inc(v_value_2544_);
lean_inc(v_key_2543_);
lean_dec(v_x_2542_);
v___x_2547_ = lean_box(0);
v_isShared_2548_ = v_isSharedCheck_2557_;
goto v_resetjp_2546_;
}
v_resetjp_2546_:
{
uint8_t v___x_2549_; 
v___x_2549_ = l_List_beq___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__1(v_key_2543_, v_a_2540_);
if (v___x_2549_ == 0)
{
lean_object* v___x_2550_; lean_object* v___x_2552_; 
v___x_2550_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__3___redArg(v_a_2540_, v_b_2541_, v_tail_2545_);
if (v_isShared_2548_ == 0)
{
lean_ctor_set(v___x_2547_, 2, v___x_2550_);
v___x_2552_ = v___x_2547_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2553_; 
v_reuseFailAlloc_2553_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2553_, 0, v_key_2543_);
lean_ctor_set(v_reuseFailAlloc_2553_, 1, v_value_2544_);
lean_ctor_set(v_reuseFailAlloc_2553_, 2, v___x_2550_);
v___x_2552_ = v_reuseFailAlloc_2553_;
goto v_reusejp_2551_;
}
v_reusejp_2551_:
{
return v___x_2552_;
}
}
else
{
lean_object* v___x_2555_; 
lean_dec(v_value_2544_);
lean_dec(v_key_2543_);
if (v_isShared_2548_ == 0)
{
lean_ctor_set(v___x_2547_, 1, v_b_2541_);
lean_ctor_set(v___x_2547_, 0, v_a_2540_);
v___x_2555_ = v___x_2547_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2556_; 
v_reuseFailAlloc_2556_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2556_, 0, v_a_2540_);
lean_ctor_set(v_reuseFailAlloc_2556_, 1, v_b_2541_);
lean_ctor_set(v_reuseFailAlloc_2556_, 2, v_tail_2545_);
v___x_2555_ = v_reuseFailAlloc_2556_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
return v___x_2555_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0___redArg(lean_object* v_m_2558_, lean_object* v_a_2559_, lean_object* v_b_2560_){
_start:
{
lean_object* v_size_2561_; lean_object* v_buckets_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2606_; 
v_size_2561_ = lean_ctor_get(v_m_2558_, 0);
v_buckets_2562_ = lean_ctor_get(v_m_2558_, 1);
v_isSharedCheck_2606_ = !lean_is_exclusive(v_m_2558_);
if (v_isSharedCheck_2606_ == 0)
{
v___x_2564_ = v_m_2558_;
v_isShared_2565_ = v_isSharedCheck_2606_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_buckets_2562_);
lean_inc(v_size_2561_);
lean_dec(v_m_2558_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2606_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2566_; uint64_t v___x_2567_; uint64_t v___x_2568_; uint64_t v___x_2569_; uint64_t v___x_2570_; uint64_t v_fold_2571_; uint64_t v___x_2572_; uint64_t v___x_2573_; uint64_t v___x_2574_; size_t v___x_2575_; size_t v___x_2576_; size_t v___x_2577_; size_t v___x_2578_; size_t v___x_2579_; lean_object* v_bkt_2580_; uint8_t v___x_2581_; 
v___x_2566_ = lean_array_get_size(v_buckets_2562_);
v___x_2567_ = 7ULL;
v___x_2568_ = l_List_foldl___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__0(v___x_2567_, v_a_2559_);
v___x_2569_ = 32ULL;
v___x_2570_ = lean_uint64_shift_right(v___x_2568_, v___x_2569_);
v_fold_2571_ = lean_uint64_xor(v___x_2568_, v___x_2570_);
v___x_2572_ = 16ULL;
v___x_2573_ = lean_uint64_shift_right(v_fold_2571_, v___x_2572_);
v___x_2574_ = lean_uint64_xor(v_fold_2571_, v___x_2573_);
v___x_2575_ = lean_uint64_to_usize(v___x_2574_);
v___x_2576_ = lean_usize_of_nat(v___x_2566_);
v___x_2577_ = ((size_t)1ULL);
v___x_2578_ = lean_usize_sub(v___x_2576_, v___x_2577_);
v___x_2579_ = lean_usize_land(v___x_2575_, v___x_2578_);
v_bkt_2580_ = lean_array_uget_borrowed(v_buckets_2562_, v___x_2579_);
v___x_2581_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1___redArg(v_a_2559_, v_bkt_2580_);
if (v___x_2581_ == 0)
{
lean_object* v___x_2582_; lean_object* v_size_x27_2583_; lean_object* v___x_2584_; lean_object* v_buckets_x27_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; uint8_t v___x_2591_; 
v___x_2582_ = lean_unsigned_to_nat(1u);
v_size_x27_2583_ = lean_nat_add(v_size_2561_, v___x_2582_);
lean_dec(v_size_2561_);
lean_inc(v_bkt_2580_);
v___x_2584_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2584_, 0, v_a_2559_);
lean_ctor_set(v___x_2584_, 1, v_b_2560_);
lean_ctor_set(v___x_2584_, 2, v_bkt_2580_);
v_buckets_x27_2585_ = lean_array_uset(v_buckets_2562_, v___x_2579_, v___x_2584_);
v___x_2586_ = lean_unsigned_to_nat(4u);
v___x_2587_ = lean_nat_mul(v_size_x27_2583_, v___x_2586_);
v___x_2588_ = lean_unsigned_to_nat(3u);
v___x_2589_ = lean_nat_div(v___x_2587_, v___x_2588_);
lean_dec(v___x_2587_);
v___x_2590_ = lean_array_get_size(v_buckets_x27_2585_);
v___x_2591_ = lean_nat_dec_le(v___x_2589_, v___x_2590_);
lean_dec(v___x_2589_);
if (v___x_2591_ == 0)
{
lean_object* v_val_2592_; lean_object* v___x_2594_; 
v_val_2592_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2___redArg(v_buckets_x27_2585_);
if (v_isShared_2565_ == 0)
{
lean_ctor_set(v___x_2564_, 1, v_val_2592_);
lean_ctor_set(v___x_2564_, 0, v_size_x27_2583_);
v___x_2594_ = v___x_2564_;
goto v_reusejp_2593_;
}
else
{
lean_object* v_reuseFailAlloc_2595_; 
v_reuseFailAlloc_2595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2595_, 0, v_size_x27_2583_);
lean_ctor_set(v_reuseFailAlloc_2595_, 1, v_val_2592_);
v___x_2594_ = v_reuseFailAlloc_2595_;
goto v_reusejp_2593_;
}
v_reusejp_2593_:
{
return v___x_2594_;
}
}
else
{
lean_object* v___x_2597_; 
if (v_isShared_2565_ == 0)
{
lean_ctor_set(v___x_2564_, 1, v_buckets_x27_2585_);
lean_ctor_set(v___x_2564_, 0, v_size_x27_2583_);
v___x_2597_ = v___x_2564_;
goto v_reusejp_2596_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v_size_x27_2583_);
lean_ctor_set(v_reuseFailAlloc_2598_, 1, v_buckets_x27_2585_);
v___x_2597_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2596_;
}
v_reusejp_2596_:
{
return v___x_2597_;
}
}
}
else
{
lean_object* v___x_2599_; lean_object* v_buckets_x27_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2604_; 
lean_inc(v_bkt_2580_);
v___x_2599_ = lean_box(0);
v_buckets_x27_2600_ = lean_array_uset(v_buckets_2562_, v___x_2579_, v___x_2599_);
v___x_2601_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__3___redArg(v_a_2559_, v_b_2560_, v_bkt_2580_);
v___x_2602_ = lean_array_uset(v_buckets_x27_2600_, v___x_2579_, v___x_2601_);
if (v_isShared_2565_ == 0)
{
lean_ctor_set(v___x_2564_, 1, v___x_2602_);
v___x_2604_ = v___x_2564_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2605_; 
v_reuseFailAlloc_2605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2605_, 0, v_size_2561_);
lean_ctor_set(v_reuseFailAlloc_2605_, 1, v___x_2602_);
v___x_2604_ = v_reuseFailAlloc_2605_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
return v___x_2604_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_insertConstraint(lean_object* v_p_2607_, lean_object* v_x_2608_){
_start:
{
lean_object* v_coeffs_2609_; lean_object* v_constraint_2610_; lean_object* v_justification_2611_; uint8_t v___x_2612_; 
v_coeffs_2609_ = lean_ctor_get(v_x_2608_, 0);
lean_inc(v_coeffs_2609_);
v_constraint_2610_ = lean_ctor_get(v_x_2608_, 1);
lean_inc_ref(v_constraint_2610_);
v_justification_2611_ = lean_ctor_get(v_x_2608_, 2);
v___x_2612_ = l_Lean_Omega_Constraint_isImpossible(v_constraint_2610_);
if (v___x_2612_ == 0)
{
lean_object* v_assumptions_2613_; lean_object* v_numVars_2614_; lean_object* v_constraints_2615_; lean_object* v_equalities_2616_; lean_object* v_eliminations_2617_; uint8_t v_possible_2618_; lean_object* v_proveFalse_x3f_2619_; lean_object* v_explanation_x3f_2620_; lean_object* v___x_2622_; uint8_t v_isShared_2623_; uint8_t v_isSharedCheck_2638_; 
v_assumptions_2613_ = lean_ctor_get(v_p_2607_, 0);
v_numVars_2614_ = lean_ctor_get(v_p_2607_, 1);
v_constraints_2615_ = lean_ctor_get(v_p_2607_, 2);
v_equalities_2616_ = lean_ctor_get(v_p_2607_, 3);
v_eliminations_2617_ = lean_ctor_get(v_p_2607_, 4);
v_possible_2618_ = lean_ctor_get_uint8(v_p_2607_, sizeof(void*)*7);
v_proveFalse_x3f_2619_ = lean_ctor_get(v_p_2607_, 5);
v_explanation_x3f_2620_ = lean_ctor_get(v_p_2607_, 6);
v_isSharedCheck_2638_ = !lean_is_exclusive(v_p_2607_);
if (v_isSharedCheck_2638_ == 0)
{
v___x_2622_ = v_p_2607_;
v_isShared_2623_ = v_isSharedCheck_2638_;
goto v_resetjp_2621_;
}
else
{
lean_inc(v_explanation_x3f_2620_);
lean_inc(v_proveFalse_x3f_2619_);
lean_inc(v_eliminations_2617_);
lean_inc(v_equalities_2616_);
lean_inc(v_constraints_2615_);
lean_inc(v_numVars_2614_);
lean_inc(v_assumptions_2613_);
lean_dec(v_p_2607_);
v___x_2622_ = lean_box(0);
v_isShared_2623_ = v_isSharedCheck_2638_;
goto v_resetjp_2621_;
}
v_resetjp_2621_:
{
lean_object* v___y_2625_; lean_object* v___x_2636_; uint8_t v___x_2637_; 
v___x_2636_ = l_List_lengthTR___redArg(v_coeffs_2609_);
v___x_2637_ = lean_nat_dec_le(v_numVars_2614_, v___x_2636_);
if (v___x_2637_ == 0)
{
lean_dec(v___x_2636_);
v___y_2625_ = v_numVars_2614_;
goto v___jp_2624_;
}
else
{
lean_dec(v_numVars_2614_);
v___y_2625_ = v___x_2636_;
goto v___jp_2624_;
}
v___jp_2624_:
{
lean_object* v___x_2626_; uint8_t v___x_2627_; 
lean_inc(v_coeffs_2609_);
v___x_2626_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0___redArg(v_constraints_2615_, v_coeffs_2609_, v_x_2608_);
v___x_2627_ = l_Lean_Omega_Constraint_isExact(v_constraint_2610_);
lean_dec_ref(v_constraint_2610_);
if (v___x_2627_ == 0)
{
lean_object* v___x_2629_; 
lean_dec(v_coeffs_2609_);
if (v_isShared_2623_ == 0)
{
lean_ctor_set(v___x_2622_, 2, v___x_2626_);
lean_ctor_set(v___x_2622_, 1, v___y_2625_);
v___x_2629_ = v___x_2622_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2630_; 
v_reuseFailAlloc_2630_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_2630_, 0, v_assumptions_2613_);
lean_ctor_set(v_reuseFailAlloc_2630_, 1, v___y_2625_);
lean_ctor_set(v_reuseFailAlloc_2630_, 2, v___x_2626_);
lean_ctor_set(v_reuseFailAlloc_2630_, 3, v_equalities_2616_);
lean_ctor_set(v_reuseFailAlloc_2630_, 4, v_eliminations_2617_);
lean_ctor_set(v_reuseFailAlloc_2630_, 5, v_proveFalse_x3f_2619_);
lean_ctor_set(v_reuseFailAlloc_2630_, 6, v_explanation_x3f_2620_);
lean_ctor_set_uint8(v_reuseFailAlloc_2630_, sizeof(void*)*7, v_possible_2618_);
v___x_2629_ = v_reuseFailAlloc_2630_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
return v___x_2629_;
}
}
else
{
lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2634_; 
v___x_2631_ = lean_box(0);
v___x_2632_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__1___redArg(v_equalities_2616_, v_coeffs_2609_, v___x_2631_);
if (v_isShared_2623_ == 0)
{
lean_ctor_set(v___x_2622_, 3, v___x_2632_);
lean_ctor_set(v___x_2622_, 2, v___x_2626_);
lean_ctor_set(v___x_2622_, 1, v___y_2625_);
v___x_2634_ = v___x_2622_;
goto v_reusejp_2633_;
}
else
{
lean_object* v_reuseFailAlloc_2635_; 
v_reuseFailAlloc_2635_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_2635_, 0, v_assumptions_2613_);
lean_ctor_set(v_reuseFailAlloc_2635_, 1, v___y_2625_);
lean_ctor_set(v_reuseFailAlloc_2635_, 2, v___x_2626_);
lean_ctor_set(v_reuseFailAlloc_2635_, 3, v___x_2632_);
lean_ctor_set(v_reuseFailAlloc_2635_, 4, v_eliminations_2617_);
lean_ctor_set(v_reuseFailAlloc_2635_, 5, v_proveFalse_x3f_2619_);
lean_ctor_set(v_reuseFailAlloc_2635_, 6, v_explanation_x3f_2620_);
lean_ctor_set_uint8(v_reuseFailAlloc_2635_, sizeof(void*)*7, v_possible_2618_);
v___x_2634_ = v_reuseFailAlloc_2635_;
goto v_reusejp_2633_;
}
v_reusejp_2633_:
{
return v___x_2634_;
}
}
}
}
}
else
{
lean_object* v_assumptions_2639_; lean_object* v_numVars_2640_; lean_object* v_constraints_2641_; lean_object* v_equalities_2642_; lean_object* v_eliminations_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2655_; 
lean_inc_ref(v_justification_2611_);
lean_dec_ref(v_x_2608_);
v_assumptions_2639_ = lean_ctor_get(v_p_2607_, 0);
v_numVars_2640_ = lean_ctor_get(v_p_2607_, 1);
v_constraints_2641_ = lean_ctor_get(v_p_2607_, 2);
v_equalities_2642_ = lean_ctor_get(v_p_2607_, 3);
v_eliminations_2643_ = lean_ctor_get(v_p_2607_, 4);
v_isSharedCheck_2655_ = !lean_is_exclusive(v_p_2607_);
if (v_isSharedCheck_2655_ == 0)
{
lean_object* v_unused_2656_; lean_object* v_unused_2657_; 
v_unused_2656_ = lean_ctor_get(v_p_2607_, 6);
lean_dec(v_unused_2656_);
v_unused_2657_ = lean_ctor_get(v_p_2607_, 5);
lean_dec(v_unused_2657_);
v___x_2645_ = v_p_2607_;
v_isShared_2646_ = v_isSharedCheck_2655_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_eliminations_2643_);
lean_inc(v_equalities_2642_);
lean_inc(v_constraints_2641_);
lean_inc(v_numVars_2640_);
lean_inc(v_assumptions_2639_);
lean_dec(v_p_2607_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2655_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
lean_object* v___f_2647_; uint8_t v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2653_; 
lean_inc_ref(v_justification_2611_);
lean_inc(v_coeffs_2609_);
lean_inc_ref(v_constraint_2610_);
v___f_2647_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_Problem_insertConstraint___lam__0), 4, 3);
lean_closure_set(v___f_2647_, 0, v_constraint_2610_);
lean_closure_set(v___f_2647_, 1, v_coeffs_2609_);
lean_closure_set(v___f_2647_, 2, v_justification_2611_);
v___x_2648_ = 0;
lean_inc_ref(v_assumptions_2639_);
v___x_2649_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse___boxed), 14, 4);
lean_closure_set(v___x_2649_, 0, v_constraint_2610_);
lean_closure_set(v___x_2649_, 1, v_coeffs_2609_);
lean_closure_set(v___x_2649_, 2, v_justification_2611_);
lean_closure_set(v___x_2649_, 3, v_assumptions_2639_);
v___x_2650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2650_, 0, v___x_2649_);
v___x_2651_ = lean_mk_thunk(v___f_2647_);
if (v_isShared_2646_ == 0)
{
lean_ctor_set(v___x_2645_, 6, v___x_2651_);
lean_ctor_set(v___x_2645_, 5, v___x_2650_);
v___x_2653_ = v___x_2645_;
goto v_reusejp_2652_;
}
else
{
lean_object* v_reuseFailAlloc_2654_; 
v_reuseFailAlloc_2654_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_2654_, 0, v_assumptions_2639_);
lean_ctor_set(v_reuseFailAlloc_2654_, 1, v_numVars_2640_);
lean_ctor_set(v_reuseFailAlloc_2654_, 2, v_constraints_2641_);
lean_ctor_set(v_reuseFailAlloc_2654_, 3, v_equalities_2642_);
lean_ctor_set(v_reuseFailAlloc_2654_, 4, v_eliminations_2643_);
lean_ctor_set(v_reuseFailAlloc_2654_, 5, v___x_2650_);
lean_ctor_set(v_reuseFailAlloc_2654_, 6, v___x_2651_);
v___x_2653_ = v_reuseFailAlloc_2654_;
goto v_reusejp_2652_;
}
v_reusejp_2652_:
{
lean_ctor_set_uint8(v___x_2653_, sizeof(void*)*7, v___x_2648_);
return v___x_2653_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0(lean_object* v_00_u03b2_2658_, lean_object* v_m_2659_, lean_object* v_a_2660_, lean_object* v_b_2661_){
_start:
{
lean_object* v___x_2662_; 
v___x_2662_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0___redArg(v_m_2659_, v_a_2660_, v_b_2661_);
return v___x_2662_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__1(lean_object* v_00_u03b2_2663_, lean_object* v_m_2664_, lean_object* v_a_2665_, lean_object* v_b_2666_){
_start:
{
lean_object* v___x_2667_; 
v___x_2667_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__1___redArg(v_m_2664_, v_a_2665_, v_b_2666_);
return v___x_2667_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1(lean_object* v_00_u03b2_2668_, lean_object* v_a_2669_, lean_object* v_x_2670_){
_start:
{
uint8_t v___x_2671_; 
v___x_2671_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1___redArg(v_a_2669_, v_x_2670_);
return v___x_2671_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2672_, lean_object* v_a_2673_, lean_object* v_x_2674_){
_start:
{
uint8_t v_res_2675_; lean_object* v_r_2676_; 
v_res_2675_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__1(v_00_u03b2_2672_, v_a_2673_, v_x_2674_);
lean_dec(v_x_2674_);
lean_dec(v_a_2673_);
v_r_2676_ = lean_box(v_res_2675_);
return v_r_2676_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2(lean_object* v_00_u03b2_2677_, lean_object* v_data_2678_){
_start:
{
lean_object* v___x_2679_; 
v___x_2679_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2___redArg(v_data_2678_);
return v___x_2679_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__3(lean_object* v_00_u03b2_2680_, lean_object* v_a_2681_, lean_object* v_b_2682_, lean_object* v_x_2683_){
_start:
{
lean_object* v___x_2684_; 
v___x_2684_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__3___redArg(v_a_2681_, v_b_2682_, v_x_2683_);
return v___x_2684_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3(lean_object* v_00_u03b2_2685_, lean_object* v_i_2686_, lean_object* v_source_2687_, lean_object* v_target_2688_){
_start:
{
lean_object* v___x_2689_; 
v___x_2689_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3___redArg(v_i_2686_, v_source_2687_, v_target_2688_);
return v___x_2689_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_2690_, lean_object* v_x_2691_, lean_object* v_x_2692_){
_start:
{
lean_object* v___x_2693_; 
v___x_2693_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__2_spec__3_spec__5___redArg(v_x_2691_, v_x_2692_);
return v___x_2693_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0___redArg(lean_object* v_a_2694_, lean_object* v_x_2695_){
_start:
{
if (lean_obj_tag(v_x_2695_) == 0)
{
lean_object* v___x_2696_; 
v___x_2696_ = lean_box(0);
return v___x_2696_;
}
else
{
lean_object* v_key_2697_; lean_object* v_value_2698_; lean_object* v_tail_2699_; uint8_t v___x_2700_; 
v_key_2697_ = lean_ctor_get(v_x_2695_, 0);
v_value_2698_ = lean_ctor_get(v_x_2695_, 1);
v_tail_2699_ = lean_ctor_get(v_x_2695_, 2);
v___x_2700_ = l_List_beq___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__1(v_key_2697_, v_a_2694_);
if (v___x_2700_ == 0)
{
v_x_2695_ = v_tail_2699_;
goto _start;
}
else
{
lean_object* v___x_2702_; 
lean_inc(v_value_2698_);
v___x_2702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2702_, 0, v_value_2698_);
return v___x_2702_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0___redArg___boxed(lean_object* v_a_2703_, lean_object* v_x_2704_){
_start:
{
lean_object* v_res_2705_; 
v_res_2705_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0___redArg(v_a_2703_, v_x_2704_);
lean_dec(v_x_2704_);
lean_dec(v_a_2703_);
return v_res_2705_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___redArg(lean_object* v_m_2706_, lean_object* v_a_2707_){
_start:
{
lean_object* v_buckets_2708_; lean_object* v___x_2709_; uint64_t v___x_2710_; uint64_t v___x_2711_; uint64_t v___x_2712_; uint64_t v___x_2713_; uint64_t v_fold_2714_; uint64_t v___x_2715_; uint64_t v___x_2716_; uint64_t v___x_2717_; size_t v___x_2718_; size_t v___x_2719_; size_t v___x_2720_; size_t v___x_2721_; size_t v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; 
v_buckets_2708_ = lean_ctor_get(v_m_2706_, 1);
v___x_2709_ = lean_array_get_size(v_buckets_2708_);
v___x_2710_ = 7ULL;
v___x_2711_ = l_List_foldl___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_Problem_insertConstraint_spec__0_spec__0(v___x_2710_, v_a_2707_);
v___x_2712_ = 32ULL;
v___x_2713_ = lean_uint64_shift_right(v___x_2711_, v___x_2712_);
v_fold_2714_ = lean_uint64_xor(v___x_2711_, v___x_2713_);
v___x_2715_ = 16ULL;
v___x_2716_ = lean_uint64_shift_right(v_fold_2714_, v___x_2715_);
v___x_2717_ = lean_uint64_xor(v_fold_2714_, v___x_2716_);
v___x_2718_ = lean_uint64_to_usize(v___x_2717_);
v___x_2719_ = lean_usize_of_nat(v___x_2709_);
v___x_2720_ = ((size_t)1ULL);
v___x_2721_ = lean_usize_sub(v___x_2719_, v___x_2720_);
v___x_2722_ = lean_usize_land(v___x_2718_, v___x_2721_);
v___x_2723_ = lean_array_uget_borrowed(v_buckets_2708_, v___x_2722_);
v___x_2724_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0___redArg(v_a_2707_, v___x_2723_);
return v___x_2724_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___redArg___boxed(lean_object* v_m_2725_, lean_object* v_a_2726_){
_start:
{
lean_object* v_res_2727_; 
v_res_2727_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___redArg(v_m_2725_, v_a_2726_);
lean_dec(v_a_2726_);
lean_dec_ref(v_m_2725_);
return v_res_2727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addConstraint(lean_object* v_p_2728_, lean_object* v_x_2729_){
_start:
{
uint8_t v_possible_2730_; 
v_possible_2730_ = lean_ctor_get_uint8(v_p_2728_, sizeof(void*)*7);
if (v_possible_2730_ == 0)
{
lean_dec_ref(v_x_2729_);
return v_p_2728_;
}
else
{
lean_object* v_coeffs_2731_; lean_object* v_constraint_2732_; lean_object* v_justification_2733_; lean_object* v_constraints_2734_; lean_object* v___x_2735_; 
v_coeffs_2731_ = lean_ctor_get(v_x_2729_, 0);
v_constraint_2732_ = lean_ctor_get(v_x_2729_, 1);
v_justification_2733_ = lean_ctor_get(v_x_2729_, 2);
v_constraints_2734_ = lean_ctor_get(v_p_2728_, 2);
v___x_2735_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___redArg(v_constraints_2734_, v_coeffs_2731_);
if (lean_obj_tag(v___x_2735_) == 0)
{
lean_object* v_lowerBound_2736_; 
v_lowerBound_2736_ = lean_ctor_get(v_constraint_2732_, 0);
if (lean_obj_tag(v_lowerBound_2736_) == 0)
{
lean_object* v_upperBound_2737_; 
v_upperBound_2737_ = lean_ctor_get(v_constraint_2732_, 1);
if (lean_obj_tag(v_upperBound_2737_) == 0)
{
lean_dec_ref(v_x_2729_);
return v_p_2728_;
}
else
{
lean_object* v___x_2738_; 
v___x_2738_ = l_Lean_Elab_Tactic_Omega_Problem_insertConstraint(v_p_2728_, v_x_2729_);
return v___x_2738_;
}
}
else
{
lean_object* v___x_2739_; 
v___x_2739_ = l_Lean_Elab_Tactic_Omega_Problem_insertConstraint(v_p_2728_, v_x_2729_);
return v___x_2739_;
}
}
else
{
lean_object* v_val_2740_; lean_object* v_coeffs_2741_; lean_object* v_constraint_2742_; lean_object* v_justification_2743_; lean_object* v___x_2745_; uint8_t v_isShared_2746_; uint8_t v_isSharedCheck_2758_; 
v_val_2740_ = lean_ctor_get(v___x_2735_, 0);
lean_inc(v_val_2740_);
lean_dec_ref_known(v___x_2735_, 1);
v_coeffs_2741_ = lean_ctor_get(v_val_2740_, 0);
v_constraint_2742_ = lean_ctor_get(v_val_2740_, 1);
v_justification_2743_ = lean_ctor_get(v_val_2740_, 2);
v_isSharedCheck_2758_ = !lean_is_exclusive(v_val_2740_);
if (v_isSharedCheck_2758_ == 0)
{
v___x_2745_ = v_val_2740_;
v_isShared_2746_ = v_isSharedCheck_2758_;
goto v_resetjp_2744_;
}
else
{
lean_inc(v_justification_2743_);
lean_inc(v_constraint_2742_);
lean_inc(v_coeffs_2741_);
lean_dec(v_val_2740_);
v___x_2745_ = lean_box(0);
v_isShared_2746_ = v_isSharedCheck_2758_;
goto v_resetjp_2744_;
}
v_resetjp_2744_:
{
lean_object* v___x_2747_; uint8_t v___x_2748_; 
v___x_2747_ = lean_alloc_closure((void*)(l_Int_instDecidableEq___boxed), 2, 0);
lean_inc(v_coeffs_2731_);
v___x_2748_ = l_instDecidableEqList___redArg(v___x_2747_, v_coeffs_2731_, v_coeffs_2741_);
if (v___x_2748_ == 0)
{
lean_del_object(v___x_2745_);
lean_dec_ref(v_justification_2743_);
lean_dec_ref(v_constraint_2742_);
lean_dec_ref(v_x_2729_);
return v_p_2728_;
}
else
{
lean_object* v_r_2749_; uint8_t v___x_2750_; 
lean_inc_ref_n(v_constraint_2742_, 2);
lean_inc_ref(v_constraint_2732_);
v_r_2749_ = l_Lean_Omega_Constraint_combine(v_constraint_2732_, v_constraint_2742_);
lean_inc_ref(v_r_2749_);
v___x_2750_ = l_Lean_Omega_instDecidableEqConstraint_decEq(v_r_2749_, v_constraint_2742_);
if (v___x_2750_ == 0)
{
uint8_t v___x_2751_; 
lean_inc_ref(v_constraint_2732_);
lean_inc_ref(v_r_2749_);
v___x_2751_ = l_Lean_Omega_instDecidableEqConstraint_decEq(v_r_2749_, v_constraint_2732_);
if (v___x_2751_ == 0)
{
lean_object* v___x_2752_; lean_object* v___x_2754_; 
lean_inc_ref(v_justification_2733_);
lean_inc_ref(v_constraint_2732_);
lean_inc_n(v_coeffs_2731_, 2);
lean_dec_ref(v_x_2729_);
v___x_2752_ = lean_alloc_ctor(2, 5, 0);
lean_ctor_set(v___x_2752_, 0, v_constraint_2732_);
lean_ctor_set(v___x_2752_, 1, v_constraint_2742_);
lean_ctor_set(v___x_2752_, 2, v_coeffs_2731_);
lean_ctor_set(v___x_2752_, 3, v_justification_2733_);
lean_ctor_set(v___x_2752_, 4, v_justification_2743_);
if (v_isShared_2746_ == 0)
{
lean_ctor_set(v___x_2745_, 2, v___x_2752_);
lean_ctor_set(v___x_2745_, 1, v_r_2749_);
lean_ctor_set(v___x_2745_, 0, v_coeffs_2731_);
v___x_2754_ = v___x_2745_;
goto v_reusejp_2753_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v_coeffs_2731_);
lean_ctor_set(v_reuseFailAlloc_2756_, 1, v_r_2749_);
lean_ctor_set(v_reuseFailAlloc_2756_, 2, v___x_2752_);
v___x_2754_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2753_;
}
v_reusejp_2753_:
{
lean_object* v___x_2755_; 
v___x_2755_ = l_Lean_Elab_Tactic_Omega_Problem_insertConstraint(v_p_2728_, v___x_2754_);
return v___x_2755_;
}
}
else
{
lean_object* v___x_2757_; 
lean_dec_ref(v_r_2749_);
lean_del_object(v___x_2745_);
lean_dec_ref(v_justification_2743_);
lean_dec_ref(v_constraint_2742_);
v___x_2757_ = l_Lean_Elab_Tactic_Omega_Problem_insertConstraint(v_p_2728_, v_x_2729_);
return v___x_2757_;
}
}
else
{
lean_dec_ref(v_r_2749_);
lean_del_object(v___x_2745_);
lean_dec_ref(v_justification_2743_);
lean_dec_ref(v_constraint_2742_);
lean_dec_ref(v_x_2729_);
return v_p_2728_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0(lean_object* v_00_u03b2_2759_, lean_object* v_m_2760_, lean_object* v_a_2761_){
_start:
{
lean_object* v___x_2762_; 
v___x_2762_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___redArg(v_m_2760_, v_a_2761_);
return v___x_2762_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___boxed(lean_object* v_00_u03b2_2763_, lean_object* v_m_2764_, lean_object* v_a_2765_){
_start:
{
lean_object* v_res_2766_; 
v_res_2766_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0(v_00_u03b2_2763_, v_m_2764_, v_a_2765_);
lean_dec(v_a_2765_);
lean_dec_ref(v_m_2764_);
return v_res_2766_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0(lean_object* v_00_u03b2_2767_, lean_object* v_a_2768_, lean_object* v_x_2769_){
_start:
{
lean_object* v___x_2770_; 
v___x_2770_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0___redArg(v_a_2768_, v_x_2769_);
return v___x_2770_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2771_, lean_object* v_a_2772_, lean_object* v_x_2773_){
_start:
{
lean_object* v_res_2774_; 
v_res_2774_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0_spec__0(v_00_u03b2_2771_, v_a_2772_, v_x_2773_);
lean_dec(v_x_2773_);
lean_dec(v_a_2772_);
return v_res_2774_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_Problem_selectEquality_spec__0(lean_object* v_x_2775_, lean_object* v_x_2776_){
_start:
{
if (lean_obj_tag(v_x_2776_) == 0)
{
return v_x_2775_;
}
else
{
if (lean_obj_tag(v_x_2775_) == 0)
{
lean_object* v_key_2777_; lean_object* v_tail_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; 
v_key_2777_ = lean_ctor_get(v_x_2776_, 0);
lean_inc_n(v_key_2777_, 2);
v_tail_2778_ = lean_ctor_get(v_x_2776_, 2);
lean_inc(v_tail_2778_);
lean_dec_ref_known(v_x_2776_, 3);
v___x_2779_ = l_Lean_Elab_Tactic_Omega_List_minNatAbs(v_key_2777_);
v___x_2780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2780_, 0, v_key_2777_);
lean_ctor_set(v___x_2780_, 1, v___x_2779_);
v___x_2781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2781_, 0, v___x_2780_);
v_x_2775_ = v___x_2781_;
v_x_2776_ = v_tail_2778_;
goto _start;
}
else
{
lean_object* v_val_2783_; lean_object* v_key_2784_; lean_object* v_tail_2785_; lean_object* v_fst_2786_; lean_object* v_snd_2787_; lean_object* v___x_2789_; uint8_t v_isShared_2790_; uint8_t v_isSharedCheck_2808_; 
v_val_2783_ = lean_ctor_get(v_x_2775_, 0);
lean_inc(v_val_2783_);
v_key_2784_ = lean_ctor_get(v_x_2776_, 0);
lean_inc(v_key_2784_);
v_tail_2785_ = lean_ctor_get(v_x_2776_, 2);
lean_inc(v_tail_2785_);
lean_dec_ref_known(v_x_2776_, 3);
v_fst_2786_ = lean_ctor_get(v_val_2783_, 0);
v_snd_2787_ = lean_ctor_get(v_val_2783_, 1);
v_isSharedCheck_2808_ = !lean_is_exclusive(v_val_2783_);
if (v_isSharedCheck_2808_ == 0)
{
v___x_2789_ = v_val_2783_;
v_isShared_2790_ = v_isSharedCheck_2808_;
goto v_resetjp_2788_;
}
else
{
lean_inc(v_snd_2787_);
lean_inc(v_fst_2786_);
lean_dec(v_val_2783_);
v___x_2789_ = lean_box(0);
v_isShared_2790_ = v_isSharedCheck_2808_;
goto v_resetjp_2788_;
}
v_resetjp_2788_:
{
lean_object* v___x_2791_; uint8_t v___x_2792_; 
v___x_2791_ = lean_unsigned_to_nat(2u);
v___x_2792_ = lean_nat_dec_le(v___x_2791_, v_snd_2787_);
if (v___x_2792_ == 0)
{
lean_del_object(v___x_2789_);
lean_dec(v_snd_2787_);
lean_dec(v_fst_2786_);
lean_dec(v_key_2784_);
v_x_2776_ = v_tail_2785_;
goto _start;
}
else
{
lean_object* v_m_x27_2794_; uint8_t v___x_2801_; 
lean_inc(v_key_2784_);
v_m_x27_2794_ = l_Lean_Elab_Tactic_Omega_List_minNatAbs(v_key_2784_);
v___x_2801_ = lean_nat_dec_lt(v_m_x27_2794_, v_snd_2787_);
if (v___x_2801_ == 0)
{
uint8_t v___x_2802_; 
v___x_2802_ = lean_nat_dec_eq(v_m_x27_2794_, v_snd_2787_);
lean_dec(v_snd_2787_);
if (v___x_2802_ == 0)
{
lean_dec(v_m_x27_2794_);
lean_del_object(v___x_2789_);
lean_dec(v_fst_2786_);
lean_dec(v_key_2784_);
v_x_2776_ = v_tail_2785_;
goto _start;
}
else
{
lean_object* v___x_2804_; lean_object* v___x_2805_; uint8_t v___x_2806_; 
lean_inc(v_key_2784_);
v___x_2804_ = l_Lean_Elab_Tactic_Omega_List_maxNatAbs(v_key_2784_);
v___x_2805_ = l_Lean_Elab_Tactic_Omega_List_maxNatAbs(v_fst_2786_);
v___x_2806_ = lean_nat_dec_lt(v___x_2804_, v___x_2805_);
lean_dec(v___x_2805_);
lean_dec(v___x_2804_);
if (v___x_2806_ == 0)
{
lean_dec(v_m_x27_2794_);
lean_del_object(v___x_2789_);
lean_dec(v_key_2784_);
v_x_2776_ = v_tail_2785_;
goto _start;
}
else
{
lean_dec_ref_known(v_x_2775_, 1);
goto v___jp_2795_;
}
}
}
else
{
lean_dec(v_snd_2787_);
lean_dec(v_fst_2786_);
lean_dec_ref_known(v_x_2775_, 1);
goto v___jp_2795_;
}
v___jp_2795_:
{
lean_object* v___x_2797_; 
if (v_isShared_2790_ == 0)
{
lean_ctor_set(v___x_2789_, 1, v_m_x27_2794_);
lean_ctor_set(v___x_2789_, 0, v_key_2784_);
v___x_2797_ = v___x_2789_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2800_; 
v_reuseFailAlloc_2800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2800_, 0, v_key_2784_);
lean_ctor_set(v_reuseFailAlloc_2800_, 1, v_m_x27_2794_);
v___x_2797_ = v_reuseFailAlloc_2800_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
lean_object* v___x_2798_; 
v___x_2798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2798_, 0, v___x_2797_);
v_x_2775_ = v___x_2798_;
v_x_2776_ = v_tail_2785_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_selectEquality_spec__1(lean_object* v_as_2809_, size_t v_i_2810_, size_t v_stop_2811_, lean_object* v_b_2812_){
_start:
{
uint8_t v___x_2813_; 
v___x_2813_ = lean_usize_dec_eq(v_i_2810_, v_stop_2811_);
if (v___x_2813_ == 0)
{
lean_object* v___x_2814_; lean_object* v___x_2815_; size_t v___x_2816_; size_t v___x_2817_; 
v___x_2814_ = lean_array_uget_borrowed(v_as_2809_, v_i_2810_);
lean_inc(v___x_2814_);
v___x_2815_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_Problem_selectEquality_spec__0(v_b_2812_, v___x_2814_);
v___x_2816_ = ((size_t)1ULL);
v___x_2817_ = lean_usize_add(v_i_2810_, v___x_2816_);
v_i_2810_ = v___x_2817_;
v_b_2812_ = v___x_2815_;
goto _start;
}
else
{
return v_b_2812_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_selectEquality_spec__1___boxed(lean_object* v_as_2819_, lean_object* v_i_2820_, lean_object* v_stop_2821_, lean_object* v_b_2822_){
_start:
{
size_t v_i_boxed_2823_; size_t v_stop_boxed_2824_; lean_object* v_res_2825_; 
v_i_boxed_2823_ = lean_unbox_usize(v_i_2820_);
lean_dec(v_i_2820_);
v_stop_boxed_2824_ = lean_unbox_usize(v_stop_2821_);
lean_dec(v_stop_2821_);
v_res_2825_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_selectEquality_spec__1(v_as_2819_, v_i_boxed_2823_, v_stop_boxed_2824_, v_b_2822_);
lean_dec_ref(v_as_2819_);
return v_res_2825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_selectEquality(lean_object* v_p_2826_){
_start:
{
lean_object* v_equalities_2827_; lean_object* v_buckets_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; uint8_t v___x_2832_; 
v_equalities_2827_ = lean_ctor_get(v_p_2826_, 3);
v_buckets_2828_ = lean_ctor_get(v_equalities_2827_, 1);
v___x_2829_ = lean_box(0);
v___x_2830_ = lean_unsigned_to_nat(0u);
v___x_2831_ = lean_array_get_size(v_buckets_2828_);
v___x_2832_ = lean_nat_dec_lt(v___x_2830_, v___x_2831_);
if (v___x_2832_ == 0)
{
return v___x_2829_;
}
else
{
size_t v___x_2833_; size_t v___x_2834_; lean_object* v___x_2835_; 
v___x_2833_ = ((size_t)0ULL);
v___x_2834_ = lean_usize_of_nat(v___x_2831_);
v___x_2835_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_selectEquality_spec__1(v_buckets_2828_, v___x_2833_, v___x_2834_, v___x_2829_);
return v___x_2835_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_selectEquality___boxed(lean_object* v_p_2836_){
_start:
{
lean_object* v_res_2837_; 
v_res_2837_ = l_Lean_Elab_Tactic_Omega_Problem_selectEquality(v_p_2836_);
lean_dec_ref(v_p_2836_);
return v_res_2837_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2838_; lean_object* v___x_2839_; 
v___x_2838_ = lean_unsigned_to_nat(1u);
v___x_2839_ = lean_nat_to_int(v___x_2838_);
return v___x_2839_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2840_; lean_object* v___x_2841_; 
v___x_2840_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0);
v___x_2841_ = lean_int_neg(v___x_2840_);
return v___x_2841_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0(lean_object* v_as_2842_, size_t v_i_2843_, size_t v_stop_2844_, lean_object* v_b_2845_){
_start:
{
uint8_t v___x_2846_; 
v___x_2846_ = lean_usize_dec_eq(v_i_2843_, v_stop_2844_);
if (v___x_2846_ == 0)
{
size_t v___x_2847_; size_t v___x_2848_; lean_object* v___x_2849_; lean_object* v_snd_2850_; lean_object* v_fst_2851_; lean_object* v_fst_2852_; lean_object* v_snd_2853_; lean_object* v_coeffs_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; uint8_t v___x_2857_; 
v___x_2847_ = ((size_t)1ULL);
v___x_2848_ = lean_usize_sub(v_i_2843_, v___x_2847_);
v___x_2849_ = lean_array_uget_borrowed(v_as_2842_, v___x_2848_);
v_snd_2850_ = lean_ctor_get(v___x_2849_, 1);
v_fst_2851_ = lean_ctor_get(v___x_2849_, 0);
v_fst_2852_ = lean_ctor_get(v_snd_2850_, 0);
v_snd_2853_ = lean_ctor_get(v_snd_2850_, 1);
v_coeffs_2854_ = lean_ctor_get(v_b_2845_, 0);
lean_inc(v_fst_2852_);
v___x_2855_ = l_Lean_Omega_IntList_get(v_coeffs_2854_, v_fst_2852_);
v___x_2856_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_2857_ = lean_int_dec_eq(v___x_2855_, v___x_2856_);
if (v___x_2857_ == 0)
{
lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; 
v___x_2858_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0);
v___x_2859_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__1);
v___x_2860_ = lean_int_mul(v___x_2859_, v_snd_2853_);
v___x_2861_ = lean_int_mul(v___x_2860_, v___x_2855_);
lean_dec(v___x_2855_);
lean_dec(v___x_2860_);
lean_inc(v_fst_2851_);
v___x_2862_ = l_Lean_Elab_Tactic_Omega_Fact_combo(v___x_2861_, v_fst_2851_, v___x_2858_, v_b_2845_);
v_i_2843_ = v___x_2848_;
v_b_2845_ = v___x_2862_;
goto _start;
}
else
{
lean_dec(v___x_2855_);
v_i_2843_ = v___x_2848_;
goto _start;
}
}
else
{
return v_b_2845_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___boxed(lean_object* v_as_2865_, lean_object* v_i_2866_, lean_object* v_stop_2867_, lean_object* v_b_2868_){
_start:
{
size_t v_i_boxed_2869_; size_t v_stop_boxed_2870_; lean_object* v_res_2871_; 
v_i_boxed_2869_ = lean_unbox_usize(v_i_2866_);
lean_dec(v_i_2866_);
v_stop_boxed_2870_ = lean_unbox_usize(v_stop_2867_);
lean_dec(v_stop_2867_);
v_res_2871_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0(v_as_2865_, v_i_boxed_2869_, v_stop_boxed_2870_, v_b_2868_);
lean_dec_ref(v_as_2865_);
return v_res_2871_;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0(lean_object* v_init_2872_, lean_object* v_l_2873_){
_start:
{
lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; uint8_t v___x_2877_; 
v___x_2874_ = lean_array_mk(v_l_2873_);
v___x_2875_ = lean_array_get_size(v___x_2874_);
v___x_2876_ = lean_unsigned_to_nat(0u);
v___x_2877_ = lean_nat_dec_lt(v___x_2876_, v___x_2875_);
if (v___x_2877_ == 0)
{
lean_dec_ref(v___x_2874_);
return v_init_2872_;
}
else
{
size_t v___x_2878_; size_t v___x_2879_; lean_object* v___x_2880_; 
v___x_2878_ = lean_usize_of_nat(v___x_2875_);
v___x_2879_ = ((size_t)0ULL);
v___x_2880_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0(v___x_2874_, v___x_2878_, v___x_2879_, v_init_2872_);
lean_dec_ref(v___x_2874_);
return v___x_2880_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_replayEliminations(lean_object* v_p_2881_, lean_object* v_f_2882_){
_start:
{
lean_object* v_eliminations_2883_; lean_object* v___x_2884_; 
v_eliminations_2883_ = lean_ctor_get(v_p_2881_, 4);
lean_inc(v_eliminations_2883_);
lean_dec_ref(v_p_2881_);
v___x_2884_ = l_List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0(v_f_2882_, v_eliminations_2883_);
return v___x_2884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___lam__0(lean_object* v_x_2885_){
_start:
{
lean_object* v___x_2886_; 
v___x_2886_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__1));
return v___x_2886_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__0(lean_object* v___y_2887_, lean_object* v_sign_2888_, lean_object* v_val_2889_, lean_object* v_x_2890_, lean_object* v_x_2891_){
_start:
{
if (lean_obj_tag(v_x_2891_) == 0)
{
lean_dec_ref(v_val_2889_);
lean_dec(v___y_2887_);
return v_x_2890_;
}
else
{
lean_object* v_key_2892_; lean_object* v_value_2893_; lean_object* v_tail_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; uint8_t v___x_2897_; 
v_key_2892_ = lean_ctor_get(v_x_2891_, 0);
lean_inc(v_key_2892_);
v_value_2893_ = lean_ctor_get(v_x_2891_, 1);
lean_inc(v_value_2893_);
v_tail_2894_ = lean_ctor_get(v_x_2891_, 2);
lean_inc(v_tail_2894_);
lean_dec_ref_known(v_x_2891_, 3);
lean_inc(v___y_2887_);
v___x_2895_ = l_Lean_Omega_IntList_get(v_key_2892_, v___y_2887_);
lean_dec(v_key_2892_);
v___x_2896_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_2897_ = lean_int_dec_eq(v___x_2895_, v___x_2896_);
if (v___x_2897_ == 0)
{
lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v_k_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; 
v___x_2898_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__0);
v___x_2899_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_Elab_Tactic_Omega_Problem_replayEliminations_spec__0_spec__0___closed__1);
v___x_2900_ = lean_int_mul(v___x_2899_, v_sign_2888_);
v_k_2901_ = lean_int_mul(v___x_2900_, v___x_2895_);
lean_dec(v___x_2895_);
lean_dec(v___x_2900_);
lean_inc_ref(v_val_2889_);
v___x_2902_ = l_Lean_Elab_Tactic_Omega_Fact_combo(v_k_2901_, v_val_2889_, v___x_2898_, v_value_2893_);
v___x_2903_ = l_Lean_Elab_Tactic_Omega_Fact_tidy(v___x_2902_);
v___x_2904_ = l_Lean_Elab_Tactic_Omega_Problem_addConstraint(v_x_2890_, v___x_2903_);
v_x_2890_ = v___x_2904_;
v_x_2891_ = v_tail_2894_;
goto _start;
}
else
{
lean_object* v___x_2906_; 
lean_dec(v___x_2895_);
v___x_2906_ = l_Lean_Elab_Tactic_Omega_Problem_addConstraint(v_x_2890_, v_value_2893_);
v_x_2890_ = v___x_2906_;
v_x_2891_ = v_tail_2894_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__0___boxed(lean_object* v___y_2908_, lean_object* v_sign_2909_, lean_object* v_val_2910_, lean_object* v_x_2911_, lean_object* v_x_2912_){
_start:
{
lean_object* v_res_2913_; 
v_res_2913_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__0(v___y_2908_, v_sign_2909_, v_val_2910_, v_x_2911_, v_x_2912_);
lean_dec(v_sign_2909_);
return v_res_2913_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__1(lean_object* v___y_2914_, lean_object* v_sign_2915_, lean_object* v_val_2916_, lean_object* v_as_2917_, size_t v_i_2918_, size_t v_stop_2919_, lean_object* v_b_2920_){
_start:
{
uint8_t v___x_2921_; 
v___x_2921_ = lean_usize_dec_eq(v_i_2918_, v_stop_2919_);
if (v___x_2921_ == 0)
{
lean_object* v___x_2922_; lean_object* v___x_2923_; size_t v___x_2924_; size_t v___x_2925_; 
v___x_2922_ = lean_array_uget_borrowed(v_as_2917_, v_i_2918_);
lean_inc(v___x_2922_);
lean_inc_ref(v_val_2916_);
lean_inc(v___y_2914_);
v___x_2923_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__0(v___y_2914_, v_sign_2915_, v_val_2916_, v_b_2920_, v___x_2922_);
v___x_2924_ = ((size_t)1ULL);
v___x_2925_ = lean_usize_add(v_i_2918_, v___x_2924_);
v_i_2918_ = v___x_2925_;
v_b_2920_ = v___x_2923_;
goto _start;
}
else
{
lean_dec_ref(v_val_2916_);
lean_dec(v___y_2914_);
return v_b_2920_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__1___boxed(lean_object* v___y_2927_, lean_object* v_sign_2928_, lean_object* v_val_2929_, lean_object* v_as_2930_, lean_object* v_i_2931_, lean_object* v_stop_2932_, lean_object* v_b_2933_){
_start:
{
size_t v_i_boxed_2934_; size_t v_stop_boxed_2935_; lean_object* v_res_2936_; 
v_i_boxed_2934_ = lean_unbox_usize(v_i_2931_);
lean_dec(v_i_2931_);
v_stop_boxed_2935_ = lean_unbox_usize(v_stop_2932_);
lean_dec(v_stop_2932_);
v_res_2936_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__1(v___y_2927_, v_sign_2928_, v_val_2929_, v_as_2930_, v_i_boxed_2934_, v_stop_boxed_2935_, v_b_2933_);
lean_dec_ref(v_as_2930_);
lean_dec(v_sign_2928_);
return v_res_2936_;
}
}
LEAN_EXPORT lean_object* l_List_findIdx_x3f_go___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__2(lean_object* v_a_2937_, lean_object* v_a_2938_){
_start:
{
if (lean_obj_tag(v_a_2937_) == 0)
{
lean_object* v___x_2939_; 
lean_dec(v_a_2938_);
v___x_2939_ = lean_box(0);
return v___x_2939_;
}
else
{
lean_object* v_head_2940_; lean_object* v_tail_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; uint8_t v___x_2944_; 
v_head_2940_ = lean_ctor_get(v_a_2937_, 0);
v_tail_2941_ = lean_ctor_get(v_a_2937_, 1);
v___x_2942_ = lean_nat_abs(v_head_2940_);
v___x_2943_ = lean_unsigned_to_nat(1u);
v___x_2944_ = lean_nat_dec_eq(v___x_2942_, v___x_2943_);
lean_dec(v___x_2942_);
if (v___x_2944_ == 0)
{
lean_object* v___x_2945_; 
v___x_2945_ = lean_nat_add(v_a_2938_, v___x_2943_);
lean_dec(v_a_2938_);
v_a_2937_ = v_tail_2941_;
v_a_2938_ = v___x_2945_;
goto _start;
}
else
{
lean_object* v___x_2947_; 
v___x_2947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2947_, 0, v_a_2938_);
return v___x_2947_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findIdx_x3f_go___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__2___boxed(lean_object* v_a_2948_, lean_object* v_a_2949_){
_start:
{
lean_object* v_res_2950_; 
v_res_2950_ = l_List_findIdx_x3f_go___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__2(v_a_2948_, v_a_2949_);
lean_dec(v_a_2948_);
return v_res_2950_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__1(void){
_start:
{
lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; 
v___x_2952_ = lean_box(0);
v___x_2953_ = lean_unsigned_to_nat(16u);
v___x_2954_ = lean_mk_array(v___x_2953_, v___x_2952_);
return v___x_2954_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__2(void){
_start:
{
lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; 
v___x_2955_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__1, &l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__1_once, _init_l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__1);
v___x_2956_ = lean_unsigned_to_nat(0u);
v___x_2957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2957_, 0, v___x_2956_);
lean_ctor_set(v___x_2957_, 1, v___x_2955_);
return v___x_2957_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__3(void){
_start:
{
lean_object* v___f_2958_; lean_object* v___x_2959_; 
v___f_2958_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__0));
v___x_2959_ = lean_mk_thunk(v___f_2958_);
return v___x_2959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality(lean_object* v_p_2960_, lean_object* v_c_2961_){
_start:
{
lean_object* v___y_2963_; lean_object* v___x_3006_; lean_object* v___x_3007_; 
v___x_3006_ = lean_unsigned_to_nat(0u);
v___x_3007_ = l_List_findIdx_x3f_go___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__2(v_c_2961_, v___x_3006_);
if (lean_obj_tag(v___x_3007_) == 0)
{
v___y_2963_ = v___x_3006_;
goto v___jp_2962_;
}
else
{
lean_object* v_val_3008_; 
v_val_3008_ = lean_ctor_get(v___x_3007_, 0);
lean_inc(v_val_3008_);
lean_dec_ref_known(v___x_3007_, 1);
v___y_2963_ = v_val_3008_;
goto v___jp_2962_;
}
v___jp_2962_:
{
lean_object* v_assumptions_2964_; lean_object* v_constraints_2965_; lean_object* v_eliminations_2966_; lean_object* v___x_2967_; 
v_assumptions_2964_ = lean_ctor_get(v_p_2960_, 0);
v_constraints_2965_ = lean_ctor_get(v_p_2960_, 2);
lean_inc_ref(v_constraints_2965_);
v_eliminations_2966_ = lean_ctor_get(v_p_2960_, 4);
v___x_2967_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___redArg(v_constraints_2965_, v_c_2961_);
if (lean_obj_tag(v___x_2967_) == 1)
{
lean_object* v___x_2969_; uint8_t v_isShared_2970_; uint8_t v_isSharedCheck_2998_; 
lean_inc(v_eliminations_2966_);
lean_inc_ref(v_assumptions_2964_);
v_isSharedCheck_2998_ = !lean_is_exclusive(v_p_2960_);
if (v_isSharedCheck_2998_ == 0)
{
lean_object* v_unused_2999_; lean_object* v_unused_3000_; lean_object* v_unused_3001_; lean_object* v_unused_3002_; lean_object* v_unused_3003_; lean_object* v_unused_3004_; lean_object* v_unused_3005_; 
v_unused_2999_ = lean_ctor_get(v_p_2960_, 6);
lean_dec(v_unused_2999_);
v_unused_3000_ = lean_ctor_get(v_p_2960_, 5);
lean_dec(v_unused_3000_);
v_unused_3001_ = lean_ctor_get(v_p_2960_, 4);
lean_dec(v_unused_3001_);
v_unused_3002_ = lean_ctor_get(v_p_2960_, 3);
lean_dec(v_unused_3002_);
v_unused_3003_ = lean_ctor_get(v_p_2960_, 2);
lean_dec(v_unused_3003_);
v_unused_3004_ = lean_ctor_get(v_p_2960_, 1);
lean_dec(v_unused_3004_);
v_unused_3005_ = lean_ctor_get(v_p_2960_, 0);
lean_dec(v_unused_3005_);
v___x_2969_ = v_p_2960_;
v_isShared_2970_ = v_isSharedCheck_2998_;
goto v_resetjp_2968_;
}
else
{
lean_dec(v_p_2960_);
v___x_2969_ = lean_box(0);
v_isShared_2970_ = v_isSharedCheck_2998_;
goto v_resetjp_2968_;
}
v_resetjp_2968_:
{
lean_object* v_val_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v_buckets_2974_; lean_object* v___x_2976_; uint8_t v_isShared_2977_; uint8_t v_isSharedCheck_2996_; 
v_val_2971_ = lean_ctor_get(v___x_2967_, 0);
lean_inc(v_val_2971_);
lean_dec_ref_known(v___x_2967_, 1);
v___x_2972_ = lean_unsigned_to_nat(0u);
v___x_2973_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__2, &l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__2);
v_buckets_2974_ = lean_ctor_get(v_constraints_2965_, 1);
v_isSharedCheck_2996_ = !lean_is_exclusive(v_constraints_2965_);
if (v_isSharedCheck_2996_ == 0)
{
lean_object* v_unused_2997_; 
v_unused_2997_ = lean_ctor_get(v_constraints_2965_, 0);
lean_dec(v_unused_2997_);
v___x_2976_ = v_constraints_2965_;
v_isShared_2977_ = v_isSharedCheck_2996_;
goto v_resetjp_2975_;
}
else
{
lean_inc(v_buckets_2974_);
lean_dec(v_constraints_2965_);
v___x_2976_ = lean_box(0);
v_isShared_2977_ = v_isSharedCheck_2996_;
goto v_resetjp_2975_;
}
v_resetjp_2975_:
{
lean_object* v___x_2978_; lean_object* v_sign_2979_; lean_object* v___x_2981_; 
lean_inc_n(v___y_2963_, 2);
v___x_2978_ = l_Lean_Omega_IntList_get(v_c_2961_, v___y_2963_);
v_sign_2979_ = l_Int_sign(v___x_2978_);
lean_dec(v___x_2978_);
lean_inc(v_sign_2979_);
if (v_isShared_2977_ == 0)
{
lean_ctor_set(v___x_2976_, 1, v_sign_2979_);
lean_ctor_set(v___x_2976_, 0, v___y_2963_);
v___x_2981_ = v___x_2976_;
goto v_reusejp_2980_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v___y_2963_);
lean_ctor_set(v_reuseFailAlloc_2995_, 1, v_sign_2979_);
v___x_2981_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2980_;
}
v_reusejp_2980_:
{
lean_object* v___x_2982_; lean_object* v___x_2983_; uint8_t v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v_init_2988_; 
lean_inc(v_val_2971_);
v___x_2982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2982_, 0, v_val_2971_);
lean_ctor_set(v___x_2982_, 1, v___x_2981_);
v___x_2983_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2983_, 0, v___x_2982_);
lean_ctor_set(v___x_2983_, 1, v_eliminations_2966_);
v___x_2984_ = 1;
v___x_2985_ = lean_box(0);
v___x_2986_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__3, &l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__3_once, _init_l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__3);
if (v_isShared_2970_ == 0)
{
lean_ctor_set(v___x_2969_, 6, v___x_2986_);
lean_ctor_set(v___x_2969_, 5, v___x_2985_);
lean_ctor_set(v___x_2969_, 4, v___x_2983_);
lean_ctor_set(v___x_2969_, 3, v___x_2973_);
lean_ctor_set(v___x_2969_, 2, v___x_2973_);
lean_ctor_set(v___x_2969_, 1, v___x_2972_);
v_init_2988_ = v___x_2969_;
goto v_reusejp_2987_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v_assumptions_2964_);
lean_ctor_set(v_reuseFailAlloc_2994_, 1, v___x_2972_);
lean_ctor_set(v_reuseFailAlloc_2994_, 2, v___x_2973_);
lean_ctor_set(v_reuseFailAlloc_2994_, 3, v___x_2973_);
lean_ctor_set(v_reuseFailAlloc_2994_, 4, v___x_2983_);
lean_ctor_set(v_reuseFailAlloc_2994_, 5, v___x_2985_);
lean_ctor_set(v_reuseFailAlloc_2994_, 6, v___x_2986_);
v_init_2988_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2987_;
}
v_reusejp_2987_:
{
lean_object* v___x_2989_; uint8_t v___x_2990_; 
lean_ctor_set_uint8(v_init_2988_, sizeof(void*)*7, v___x_2984_);
v___x_2989_ = lean_array_get_size(v_buckets_2974_);
v___x_2990_ = lean_nat_dec_lt(v___x_2972_, v___x_2989_);
if (v___x_2990_ == 0)
{
lean_dec(v_sign_2979_);
lean_dec_ref(v_buckets_2974_);
lean_dec(v_val_2971_);
lean_dec(v___y_2963_);
return v_init_2988_;
}
else
{
size_t v___x_2991_; size_t v___x_2992_; lean_object* v___x_2993_; 
v___x_2991_ = ((size_t)0ULL);
v___x_2992_ = lean_usize_of_nat(v___x_2989_);
v___x_2993_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_solveEasyEquality_spec__1(v___y_2963_, v_sign_2979_, v_val_2971_, v_buckets_2974_, v___x_2991_, v___x_2992_, v_init_2988_);
lean_dec_ref(v_buckets_2974_);
lean_dec(v_sign_2979_);
return v___x_2993_;
}
}
}
}
}
}
else
{
lean_dec(v___x_2967_);
lean_dec_ref(v_constraints_2965_);
lean_dec(v___y_2963_);
return v_p_2960_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___boxed(lean_object* v_p_3009_, lean_object* v_c_3010_){
_start:
{
lean_object* v_res_3011_; 
v_res_3011_ = l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality(v_p_3009_, v_c_3010_);
lean_dec(v_c_3010_);
return v_res_3011_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0_spec__0(lean_object* v_msgData_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_){
_start:
{
lean_object* v___x_3018_; lean_object* v_env_3019_; lean_object* v___x_3020_; lean_object* v_toCold_3021_; lean_object* v_mctx_3022_; lean_object* v_lctx_3023_; lean_object* v_options_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; 
v___x_3018_ = lean_st_ref_get(v___y_3016_);
v_env_3019_ = lean_ctor_get(v___x_3018_, 0);
lean_inc_ref(v_env_3019_);
lean_dec(v___x_3018_);
v___x_3020_ = lean_st_ref_get(v___y_3014_);
v_toCold_3021_ = lean_ctor_get(v___y_3015_, 0);
v_mctx_3022_ = lean_ctor_get(v___x_3020_, 0);
lean_inc_ref(v_mctx_3022_);
lean_dec(v___x_3020_);
v_lctx_3023_ = lean_ctor_get(v___y_3013_, 2);
v_options_3024_ = lean_ctor_get(v_toCold_3021_, 2);
lean_inc_ref(v_options_3024_);
lean_inc_ref(v_lctx_3023_);
v___x_3025_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3025_, 0, v_env_3019_);
lean_ctor_set(v___x_3025_, 1, v_mctx_3022_);
lean_ctor_set(v___x_3025_, 2, v_lctx_3023_);
lean_ctor_set(v___x_3025_, 3, v_options_3024_);
v___x_3026_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3026_, 0, v___x_3025_);
lean_ctor_set(v___x_3026_, 1, v_msgData_3012_);
v___x_3027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3027_, 0, v___x_3026_);
return v___x_3027_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0_spec__0___boxed(lean_object* v_msgData_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_){
_start:
{
lean_object* v_res_3034_; 
v_res_3034_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0_spec__0(v_msgData_3028_, v___y_3029_, v___y_3030_, v___y_3031_, v___y_3032_);
lean_dec(v___y_3032_);
lean_dec_ref(v___y_3031_);
lean_dec(v___y_3030_);
lean_dec_ref(v___y_3029_);
return v_res_3034_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___redArg(lean_object* v_msg_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_){
_start:
{
lean_object* v_ref_3041_; lean_object* v___x_3042_; lean_object* v_a_3043_; lean_object* v___x_3045_; uint8_t v_isShared_3046_; uint8_t v_isSharedCheck_3051_; 
v_ref_3041_ = lean_ctor_get(v___y_3038_, 2);
v___x_3042_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0_spec__0(v_msg_3035_, v___y_3036_, v___y_3037_, v___y_3038_, v___y_3039_);
v_a_3043_ = lean_ctor_get(v___x_3042_, 0);
v_isSharedCheck_3051_ = !lean_is_exclusive(v___x_3042_);
if (v_isSharedCheck_3051_ == 0)
{
v___x_3045_ = v___x_3042_;
v_isShared_3046_ = v_isSharedCheck_3051_;
goto v_resetjp_3044_;
}
else
{
lean_inc(v_a_3043_);
lean_dec(v___x_3042_);
v___x_3045_ = lean_box(0);
v_isShared_3046_ = v_isSharedCheck_3051_;
goto v_resetjp_3044_;
}
v_resetjp_3044_:
{
lean_object* v___x_3047_; lean_object* v___x_3049_; 
lean_inc(v_ref_3041_);
v___x_3047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3047_, 0, v_ref_3041_);
lean_ctor_set(v___x_3047_, 1, v_a_3043_);
if (v_isShared_3046_ == 0)
{
lean_ctor_set_tag(v___x_3045_, 1);
lean_ctor_set(v___x_3045_, 0, v___x_3047_);
v___x_3049_ = v___x_3045_;
goto v_reusejp_3048_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v___x_3047_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___redArg___boxed(lean_object* v_msg_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_){
_start:
{
lean_object* v_res_3058_; 
v_res_3058_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___redArg(v_msg_3052_, v___y_3053_, v___y_3054_, v___y_3055_, v___y_3056_);
lean_dec(v___y_3056_);
lean_dec_ref(v___y_3055_);
lean_dec(v___y_3054_);
lean_dec_ref(v___y_3053_);
return v_res_3058_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__1(void){
_start:
{
lean_object* v___x_3060_; lean_object* v___x_3061_; 
v___x_3060_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__0));
v___x_3061_ = l_Lean_stringToMessageData(v___x_3060_);
return v___x_3061_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__3(void){
_start:
{
lean_object* v___x_3063_; lean_object* v___x_3064_; 
v___x_3063_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__2));
v___x_3064_ = l_Lean_stringToMessageData(v___x_3063_);
return v___x_3064_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__5(void){
_start:
{
lean_object* v___x_3066_; lean_object* v___x_3067_; 
v___x_3066_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__4));
v___x_3067_ = l_Lean_stringToMessageData(v___x_3066_);
return v___x_3067_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality(lean_object* v_p_3068_, lean_object* v_c_3069_, lean_object* v_a_3070_, lean_object* v_a_3071_, lean_object* v_a_3072_, uint8_t v_a_3073_, lean_object* v_a_3074_, lean_object* v_a_3075_, lean_object* v_a_3076_, lean_object* v_a_3077_, lean_object* v_a_3078_){
_start:
{
lean_object* v_constraints_3080_; lean_object* v___x_3081_; 
v_constraints_3080_ = lean_ctor_get(v_p_3068_, 2);
v___x_3081_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_Problem_addConstraint_spec__0___redArg(v_constraints_3080_, v_c_3069_);
if (lean_obj_tag(v___x_3081_) == 1)
{
lean_object* v_val_3082_; lean_object* v___x_3084_; uint8_t v_isShared_3085_; uint8_t v_isSharedCheck_3181_; 
v_val_3082_ = lean_ctor_get(v___x_3081_, 0);
v_isSharedCheck_3181_ = !lean_is_exclusive(v___x_3081_);
if (v_isSharedCheck_3181_ == 0)
{
v___x_3084_ = v___x_3081_;
v_isShared_3085_ = v_isSharedCheck_3181_;
goto v_resetjp_3083_;
}
else
{
lean_inc(v_val_3082_);
lean_dec(v___x_3081_);
v___x_3084_ = lean_box(0);
v_isShared_3085_ = v_isSharedCheck_3181_;
goto v_resetjp_3083_;
}
v_resetjp_3083_:
{
lean_object* v_constraint_3086_; lean_object* v_lowerBound_3087_; 
v_constraint_3086_ = lean_ctor_get(v_val_3082_, 1);
v_lowerBound_3087_ = lean_ctor_get(v_constraint_3086_, 0);
lean_inc(v_lowerBound_3087_);
if (lean_obj_tag(v_lowerBound_3087_) == 1)
{
lean_object* v_upperBound_3088_; 
lean_del_object(v___x_3084_);
v_upperBound_3088_ = lean_ctor_get(v_constraint_3086_, 1);
lean_inc(v_upperBound_3088_);
if (lean_obj_tag(v_upperBound_3088_) == 1)
{
lean_object* v_coeffs_3089_; lean_object* v_justification_3090_; lean_object* v___x_3092_; uint8_t v_isShared_3093_; uint8_t v_isSharedCheck_3168_; 
v_coeffs_3089_ = lean_ctor_get(v_val_3082_, 0);
v_justification_3090_ = lean_ctor_get(v_val_3082_, 2);
v_isSharedCheck_3168_ = !lean_is_exclusive(v_val_3082_);
if (v_isSharedCheck_3168_ == 0)
{
lean_object* v_unused_3169_; 
v_unused_3169_ = lean_ctor_get(v_val_3082_, 1);
lean_dec(v_unused_3169_);
v___x_3092_ = v_val_3082_;
v_isShared_3093_ = v_isSharedCheck_3168_;
goto v_resetjp_3091_;
}
else
{
lean_inc(v_justification_3090_);
lean_inc(v_coeffs_3089_);
lean_dec(v_val_3082_);
v___x_3092_ = lean_box(0);
v_isShared_3093_ = v_isSharedCheck_3168_;
goto v_resetjp_3091_;
}
v_resetjp_3091_:
{
lean_object* v_val_3094_; lean_object* v_val_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v_m_3098_; lean_object* v___x_3099_; 
v_val_3094_ = lean_ctor_get(v_lowerBound_3087_, 0);
lean_inc(v_val_3094_);
lean_dec_ref_known(v_lowerBound_3087_, 1);
v_val_3095_ = lean_ctor_get(v_upperBound_3088_, 0);
lean_inc(v_val_3095_);
lean_dec_ref_known(v_upperBound_3088_, 1);
lean_inc(v_c_3069_);
v___x_3096_ = l_Lean_Elab_Tactic_Omega_List_minNatAbs(v_c_3069_);
v___x_3097_ = lean_unsigned_to_nat(1u);
v_m_3098_ = lean_nat_add(v___x_3096_, v___x_3097_);
lean_dec(v___x_3096_);
v___x_3099_ = l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(v_a_3071_, v_a_3075_, v_a_3076_, v_a_3077_, v_a_3078_);
if (lean_obj_tag(v___x_3099_) == 0)
{
lean_object* v_a_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v_nil_3103_; lean_object* v_cons_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; 
v_a_3100_ = lean_ctor_get(v___x_3099_, 0);
lean_inc(v_a_3100_);
lean_dec_ref_known(v___x_3099_, 1);
v___x_3101_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__19, &l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__19_once, _init_l_Lean_Elab_Tactic_Omega_Justification_bmodProof___closed__19);
lean_inc(v_m_3098_);
v___x_3102_ = l_Lean_mkNatLit(v_m_3098_);
v_nil_3103_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13);
v_cons_3104_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_3105_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v_nil_3103_, v_cons_3104_, v_c_3069_);
lean_dec(v_c_3069_);
v___x_3106_ = l_Lean_mkApp3(v___x_3101_, v___x_3102_, v___x_3105_, v_a_3100_);
v___x_3107_ = l_Lean_Elab_Tactic_Omega_lookup(v___x_3106_, v_a_3070_, v_a_3071_, v_a_3072_, v_a_3073_, v_a_3074_, v_a_3075_, v_a_3076_, v_a_3077_, v_a_3078_);
if (lean_obj_tag(v___x_3107_) == 0)
{
lean_object* v_a_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3151_; 
v_a_3108_ = lean_ctor_get(v___x_3107_, 0);
v_isSharedCheck_3151_ = !lean_is_exclusive(v___x_3107_);
if (v_isSharedCheck_3151_ == 0)
{
v___x_3110_ = v___x_3107_;
v_isShared_3111_ = v_isSharedCheck_3151_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_a_3108_);
lean_dec(v___x_3107_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3151_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
lean_object* v_fst_3112_; lean_object* v_snd_3113_; uint8_t v___x_3126_; 
v_fst_3112_ = lean_ctor_get(v_a_3108_, 0);
lean_inc(v_fst_3112_);
v_snd_3113_ = lean_ctor_get(v_a_3108_, 1);
lean_inc(v_snd_3113_);
lean_dec(v_a_3108_);
v___x_3126_ = lean_int_dec_eq(v_val_3095_, v_val_3094_);
lean_dec(v_val_3095_);
if (v___x_3126_ == 0)
{
lean_object* v___x_3127_; lean_object* v___x_3128_; 
lean_dec(v_snd_3113_);
lean_dec(v_fst_3112_);
lean_del_object(v___x_3110_);
lean_dec(v_m_3098_);
lean_dec(v_val_3094_);
lean_del_object(v___x_3092_);
lean_dec_ref(v_justification_3090_);
lean_dec(v_coeffs_3089_);
lean_dec_ref(v_p_3068_);
v___x_3127_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__1, &l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__1_once, _init_l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__1);
v___x_3128_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___redArg(v___x_3127_, v_a_3075_, v_a_3076_, v_a_3077_, v_a_3078_);
return v___x_3128_;
}
else
{
if (lean_obj_tag(v_snd_3113_) == 0)
{
lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v_a_3131_; lean_object* v___x_3133_; uint8_t v_isShared_3134_; uint8_t v_isSharedCheck_3138_; 
lean_dec(v_fst_3112_);
lean_del_object(v___x_3110_);
lean_dec(v_m_3098_);
lean_dec(v_val_3094_);
lean_del_object(v___x_3092_);
lean_dec_ref(v_justification_3090_);
lean_dec(v_coeffs_3089_);
lean_dec_ref(v_p_3068_);
v___x_3129_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__3, &l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__3_once, _init_l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__3);
v___x_3130_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___redArg(v___x_3129_, v_a_3075_, v_a_3076_, v_a_3077_, v_a_3078_);
v_a_3131_ = lean_ctor_get(v___x_3130_, 0);
v_isSharedCheck_3138_ = !lean_is_exclusive(v___x_3130_);
if (v_isSharedCheck_3138_ == 0)
{
v___x_3133_ = v___x_3130_;
v_isShared_3134_ = v_isSharedCheck_3138_;
goto v_resetjp_3132_;
}
else
{
lean_inc(v_a_3131_);
lean_dec(v___x_3130_);
v___x_3133_ = lean_box(0);
v_isShared_3134_ = v_isSharedCheck_3138_;
goto v_resetjp_3132_;
}
v_resetjp_3132_:
{
lean_object* v___x_3136_; 
if (v_isShared_3134_ == 0)
{
v___x_3136_ = v___x_3133_;
goto v_reusejp_3135_;
}
else
{
lean_object* v_reuseFailAlloc_3137_; 
v_reuseFailAlloc_3137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3137_, 0, v_a_3131_);
v___x_3136_ = v_reuseFailAlloc_3137_;
goto v_reusejp_3135_;
}
v_reusejp_3135_:
{
return v___x_3136_;
}
}
}
else
{
lean_object* v_val_3139_; uint8_t v___x_3140_; 
v_val_3139_ = lean_ctor_get(v_snd_3113_, 0);
lean_inc(v_val_3139_);
lean_dec_ref_known(v_snd_3113_, 1);
v___x_3140_ = l_List_isEmpty___redArg(v_val_3139_);
lean_dec(v_val_3139_);
if (v___x_3140_ == 0)
{
lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v_a_3143_; lean_object* v___x_3145_; uint8_t v_isShared_3146_; uint8_t v_isSharedCheck_3150_; 
lean_dec(v_fst_3112_);
lean_del_object(v___x_3110_);
lean_dec(v_m_3098_);
lean_dec(v_val_3094_);
lean_del_object(v___x_3092_);
lean_dec_ref(v_justification_3090_);
lean_dec(v_coeffs_3089_);
lean_dec_ref(v_p_3068_);
v___x_3141_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__5, &l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__5_once, _init_l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___closed__5);
v___x_3142_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___redArg(v___x_3141_, v_a_3075_, v_a_3076_, v_a_3077_, v_a_3078_);
v_a_3143_ = lean_ctor_get(v___x_3142_, 0);
v_isSharedCheck_3150_ = !lean_is_exclusive(v___x_3142_);
if (v_isSharedCheck_3150_ == 0)
{
v___x_3145_ = v___x_3142_;
v_isShared_3146_ = v_isSharedCheck_3150_;
goto v_resetjp_3144_;
}
else
{
lean_inc(v_a_3143_);
lean_dec(v___x_3142_);
v___x_3145_ = lean_box(0);
v_isShared_3146_ = v_isSharedCheck_3150_;
goto v_resetjp_3144_;
}
v_resetjp_3144_:
{
lean_object* v___x_3148_; 
if (v_isShared_3146_ == 0)
{
v___x_3148_ = v___x_3145_;
goto v_reusejp_3147_;
}
else
{
lean_object* v_reuseFailAlloc_3149_; 
v_reuseFailAlloc_3149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3149_, 0, v_a_3143_);
v___x_3148_ = v_reuseFailAlloc_3149_;
goto v_reusejp_3147_;
}
v_reusejp_3147_:
{
return v___x_3148_;
}
}
}
else
{
goto v___jp_3114_;
}
}
}
v___jp_3114_:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3120_; 
lean_inc(v_coeffs_3089_);
lean_inc_n(v_m_3098_, 2);
v___x_3115_ = l_Lean_Omega_bmod__coeffs(v_m_3098_, v_fst_3112_, v_coeffs_3089_);
v___x_3116_ = l_Int_bmod(v_val_3094_, v_m_3098_);
v___x_3117_ = l_Lean_Omega_Constraint_exact(v___x_3116_);
v___x_3118_ = lean_alloc_ctor(4, 5, 0);
lean_ctor_set(v___x_3118_, 0, v_m_3098_);
lean_ctor_set(v___x_3118_, 1, v_val_3094_);
lean_ctor_set(v___x_3118_, 2, v_fst_3112_);
lean_ctor_set(v___x_3118_, 3, v_coeffs_3089_);
lean_ctor_set(v___x_3118_, 4, v_justification_3090_);
if (v_isShared_3093_ == 0)
{
lean_ctor_set(v___x_3092_, 2, v___x_3118_);
lean_ctor_set(v___x_3092_, 1, v___x_3117_);
lean_ctor_set(v___x_3092_, 0, v___x_3115_);
v___x_3120_ = v___x_3092_;
goto v_reusejp_3119_;
}
else
{
lean_object* v_reuseFailAlloc_3125_; 
v_reuseFailAlloc_3125_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3125_, 0, v___x_3115_);
lean_ctor_set(v_reuseFailAlloc_3125_, 1, v___x_3117_);
lean_ctor_set(v_reuseFailAlloc_3125_, 2, v___x_3118_);
v___x_3120_ = v_reuseFailAlloc_3125_;
goto v_reusejp_3119_;
}
v_reusejp_3119_:
{
lean_object* v___x_3121_; lean_object* v___x_3123_; 
v___x_3121_ = l_Lean_Elab_Tactic_Omega_Problem_addConstraint(v_p_3068_, v___x_3120_);
if (v_isShared_3111_ == 0)
{
lean_ctor_set(v___x_3110_, 0, v___x_3121_);
v___x_3123_ = v___x_3110_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v___x_3121_);
v___x_3123_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
return v___x_3123_;
}
}
}
}
}
else
{
lean_object* v_a_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3159_; 
lean_dec(v_m_3098_);
lean_dec(v_val_3095_);
lean_dec(v_val_3094_);
lean_del_object(v___x_3092_);
lean_dec_ref(v_justification_3090_);
lean_dec(v_coeffs_3089_);
lean_dec_ref(v_p_3068_);
v_a_3152_ = lean_ctor_get(v___x_3107_, 0);
v_isSharedCheck_3159_ = !lean_is_exclusive(v___x_3107_);
if (v_isSharedCheck_3159_ == 0)
{
v___x_3154_ = v___x_3107_;
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_a_3152_);
lean_dec(v___x_3107_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v___x_3157_; 
if (v_isShared_3155_ == 0)
{
v___x_3157_ = v___x_3154_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3158_; 
v_reuseFailAlloc_3158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3158_, 0, v_a_3152_);
v___x_3157_ = v_reuseFailAlloc_3158_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
return v___x_3157_;
}
}
}
}
else
{
lean_object* v_a_3160_; lean_object* v___x_3162_; uint8_t v_isShared_3163_; uint8_t v_isSharedCheck_3167_; 
lean_dec(v_m_3098_);
lean_dec(v_val_3095_);
lean_dec(v_val_3094_);
lean_del_object(v___x_3092_);
lean_dec_ref(v_justification_3090_);
lean_dec(v_coeffs_3089_);
lean_dec(v_c_3069_);
lean_dec_ref(v_p_3068_);
v_a_3160_ = lean_ctor_get(v___x_3099_, 0);
v_isSharedCheck_3167_ = !lean_is_exclusive(v___x_3099_);
if (v_isSharedCheck_3167_ == 0)
{
v___x_3162_ = v___x_3099_;
v_isShared_3163_ = v_isSharedCheck_3167_;
goto v_resetjp_3161_;
}
else
{
lean_inc(v_a_3160_);
lean_dec(v___x_3099_);
v___x_3162_ = lean_box(0);
v_isShared_3163_ = v_isSharedCheck_3167_;
goto v_resetjp_3161_;
}
v_resetjp_3161_:
{
lean_object* v___x_3165_; 
if (v_isShared_3163_ == 0)
{
v___x_3165_ = v___x_3162_;
goto v_reusejp_3164_;
}
else
{
lean_object* v_reuseFailAlloc_3166_; 
v_reuseFailAlloc_3166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3166_, 0, v_a_3160_);
v___x_3165_ = v_reuseFailAlloc_3166_;
goto v_reusejp_3164_;
}
v_reusejp_3164_:
{
return v___x_3165_;
}
}
}
}
}
else
{
lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3176_; 
lean_dec(v_upperBound_3088_);
lean_dec(v_val_3082_);
lean_dec(v_c_3069_);
v_isSharedCheck_3176_ = !lean_is_exclusive(v_lowerBound_3087_);
if (v_isSharedCheck_3176_ == 0)
{
lean_object* v_unused_3177_; 
v_unused_3177_ = lean_ctor_get(v_lowerBound_3087_, 0);
lean_dec(v_unused_3177_);
v___x_3171_ = v_lowerBound_3087_;
v_isShared_3172_ = v_isSharedCheck_3176_;
goto v_resetjp_3170_;
}
else
{
lean_dec(v_lowerBound_3087_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3176_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
lean_object* v___x_3174_; 
if (v_isShared_3172_ == 0)
{
lean_ctor_set_tag(v___x_3171_, 0);
lean_ctor_set(v___x_3171_, 0, v_p_3068_);
v___x_3174_ = v___x_3171_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3175_; 
v_reuseFailAlloc_3175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3175_, 0, v_p_3068_);
v___x_3174_ = v_reuseFailAlloc_3175_;
goto v_reusejp_3173_;
}
v_reusejp_3173_:
{
return v___x_3174_;
}
}
}
}
else
{
lean_object* v___x_3179_; 
lean_dec(v_lowerBound_3087_);
lean_dec(v_val_3082_);
lean_dec(v_c_3069_);
if (v_isShared_3085_ == 0)
{
lean_ctor_set_tag(v___x_3084_, 0);
lean_ctor_set(v___x_3084_, 0, v_p_3068_);
v___x_3179_ = v___x_3084_;
goto v_reusejp_3178_;
}
else
{
lean_object* v_reuseFailAlloc_3180_; 
v_reuseFailAlloc_3180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3180_, 0, v_p_3068_);
v___x_3179_ = v_reuseFailAlloc_3180_;
goto v_reusejp_3178_;
}
v_reusejp_3178_:
{
return v___x_3179_;
}
}
}
}
else
{
lean_object* v___x_3182_; 
lean_dec(v___x_3081_);
lean_dec(v_c_3069_);
v___x_3182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3182_, 0, v_p_3068_);
return v___x_3182_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality___boxed(lean_object* v_p_3183_, lean_object* v_c_3184_, lean_object* v_a_3185_, lean_object* v_a_3186_, lean_object* v_a_3187_, lean_object* v_a_3188_, lean_object* v_a_3189_, lean_object* v_a_3190_, lean_object* v_a_3191_, lean_object* v_a_3192_, lean_object* v_a_3193_, lean_object* v_a_3194_){
_start:
{
uint8_t v_a_boxed_3195_; lean_object* v_res_3196_; 
v_a_boxed_3195_ = lean_unbox(v_a_3188_);
v_res_3196_ = l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality(v_p_3183_, v_c_3184_, v_a_3185_, v_a_3186_, v_a_3187_, v_a_boxed_3195_, v_a_3189_, v_a_3190_, v_a_3191_, v_a_3192_, v_a_3193_);
lean_dec(v_a_3193_);
lean_dec_ref(v_a_3192_);
lean_dec(v_a_3191_);
lean_dec_ref(v_a_3190_);
lean_dec(v_a_3189_);
lean_dec_ref(v_a_3187_);
lean_dec(v_a_3186_);
lean_dec(v_a_3185_);
return v_res_3196_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0(lean_object* v_00_u03b1_3197_, lean_object* v_msg_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, uint8_t v___y_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_){
_start:
{
lean_object* v___x_3209_; 
v___x_3209_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___redArg(v_msg_3198_, v___y_3204_, v___y_3205_, v___y_3206_, v___y_3207_);
return v___x_3209_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0___boxed(lean_object* v_00_u03b1_3210_, lean_object* v_msg_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_){
_start:
{
uint8_t v___y_9303__boxed_3222_; lean_object* v_res_3223_; 
v___y_9303__boxed_3222_ = lean_unbox(v___y_3215_);
v_res_3223_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0(v_00_u03b1_3210_, v_msg_3211_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_9303__boxed_3222_, v___y_3216_, v___y_3217_, v___y_3218_, v___y_3219_, v___y_3220_);
lean_dec(v___y_3220_);
lean_dec_ref(v___y_3219_);
lean_dec(v___y_3218_);
lean_dec_ref(v___y_3217_);
lean_dec(v___y_3216_);
lean_dec_ref(v___y_3214_);
lean_dec(v___y_3213_);
lean_dec(v___y_3212_);
return v_res_3223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEquality(lean_object* v_p_3224_, lean_object* v_c_3225_, lean_object* v_m_3226_, lean_object* v_a_3227_, lean_object* v_a_3228_, lean_object* v_a_3229_, uint8_t v_a_3230_, lean_object* v_a_3231_, lean_object* v_a_3232_, lean_object* v_a_3233_, lean_object* v_a_3234_, lean_object* v_a_3235_){
_start:
{
lean_object* v___x_3237_; uint8_t v___x_3238_; 
v___x_3237_ = lean_unsigned_to_nat(1u);
v___x_3238_ = lean_nat_dec_eq(v_m_3226_, v___x_3237_);
if (v___x_3238_ == 0)
{
lean_object* v___x_3239_; 
v___x_3239_ = l_Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality(v_p_3224_, v_c_3225_, v_a_3227_, v_a_3228_, v_a_3229_, v_a_3230_, v_a_3231_, v_a_3232_, v_a_3233_, v_a_3234_, v_a_3235_);
return v___x_3239_;
}
else
{
lean_object* v___x_3240_; lean_object* v___x_3241_; 
v___x_3240_ = l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality(v_p_3224_, v_c_3225_);
lean_dec(v_c_3225_);
v___x_3241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3241_, 0, v___x_3240_);
return v___x_3241_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEquality___boxed(lean_object* v_p_3242_, lean_object* v_c_3243_, lean_object* v_m_3244_, lean_object* v_a_3245_, lean_object* v_a_3246_, lean_object* v_a_3247_, lean_object* v_a_3248_, lean_object* v_a_3249_, lean_object* v_a_3250_, lean_object* v_a_3251_, lean_object* v_a_3252_, lean_object* v_a_3253_, lean_object* v_a_3254_){
_start:
{
uint8_t v_a_boxed_3255_; lean_object* v_res_3256_; 
v_a_boxed_3255_ = lean_unbox(v_a_3248_);
v_res_3256_ = l_Lean_Elab_Tactic_Omega_Problem_solveEquality(v_p_3242_, v_c_3243_, v_m_3244_, v_a_3245_, v_a_3246_, v_a_3247_, v_a_boxed_3255_, v_a_3249_, v_a_3250_, v_a_3251_, v_a_3252_, v_a_3253_);
lean_dec(v_a_3253_);
lean_dec_ref(v_a_3252_);
lean_dec(v_a_3251_);
lean_dec_ref(v_a_3250_);
lean_dec(v_a_3249_);
lean_dec_ref(v_a_3247_);
lean_dec(v_a_3246_);
lean_dec(v_a_3245_);
lean_dec(v_m_3244_);
return v_res_3256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEqualities(lean_object* v_p_3257_, lean_object* v_a_3258_, lean_object* v_a_3259_, lean_object* v_a_3260_, uint8_t v_a_3261_, lean_object* v_a_3262_, lean_object* v_a_3263_, lean_object* v_a_3264_, lean_object* v_a_3265_, lean_object* v_a_3266_){
_start:
{
uint8_t v_possible_3268_; 
v_possible_3268_ = lean_ctor_get_uint8(v_p_3257_, sizeof(void*)*7);
if (v_possible_3268_ == 0)
{
lean_object* v___x_3269_; 
v___x_3269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3269_, 0, v_p_3257_);
return v___x_3269_;
}
else
{
lean_object* v___x_3270_; 
v___x_3270_ = l_Lean_Elab_Tactic_Omega_Problem_selectEquality(v_p_3257_);
if (lean_obj_tag(v___x_3270_) == 0)
{
lean_object* v___x_3271_; 
v___x_3271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3271_, 0, v_p_3257_);
return v___x_3271_;
}
else
{
lean_object* v_val_3272_; lean_object* v_fst_3273_; lean_object* v_snd_3274_; lean_object* v___x_3275_; 
v_val_3272_ = lean_ctor_get(v___x_3270_, 0);
lean_inc(v_val_3272_);
lean_dec_ref_known(v___x_3270_, 1);
v_fst_3273_ = lean_ctor_get(v_val_3272_, 0);
lean_inc(v_fst_3273_);
v_snd_3274_ = lean_ctor_get(v_val_3272_, 1);
lean_inc(v_snd_3274_);
lean_dec(v_val_3272_);
v___x_3275_ = l_Lean_Elab_Tactic_Omega_Problem_solveEquality(v_p_3257_, v_fst_3273_, v_snd_3274_, v_a_3258_, v_a_3259_, v_a_3260_, v_a_3261_, v_a_3262_, v_a_3263_, v_a_3264_, v_a_3265_, v_a_3266_);
lean_dec(v_snd_3274_);
if (lean_obj_tag(v___x_3275_) == 0)
{
lean_object* v_a_3276_; 
v_a_3276_ = lean_ctor_get(v___x_3275_, 0);
lean_inc(v_a_3276_);
lean_dec_ref_known(v___x_3275_, 1);
v_p_3257_ = v_a_3276_;
goto _start;
}
else
{
return v___x_3275_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_solveEqualities___boxed(lean_object* v_p_3278_, lean_object* v_a_3279_, lean_object* v_a_3280_, lean_object* v_a_3281_, lean_object* v_a_3282_, lean_object* v_a_3283_, lean_object* v_a_3284_, lean_object* v_a_3285_, lean_object* v_a_3286_, lean_object* v_a_3287_, lean_object* v_a_3288_){
_start:
{
uint8_t v_a_boxed_3289_; lean_object* v_res_3290_; 
v_a_boxed_3289_ = lean_unbox(v_a_3282_);
v_res_3290_ = l_Lean_Elab_Tactic_Omega_Problem_solveEqualities(v_p_3278_, v_a_3279_, v_a_3280_, v_a_3281_, v_a_boxed_3289_, v_a_3283_, v_a_3284_, v_a_3285_, v_a_3286_, v_a_3287_);
lean_dec(v_a_3287_);
lean_dec_ref(v_a_3286_);
lean_dec(v_a_3285_);
lean_dec_ref(v_a_3284_);
lean_dec(v_a_3283_);
lean_dec_ref(v_a_3281_);
lean_dec(v_a_3280_);
lean_dec(v_a_3279_);
return v_res_3290_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__2(void){
_start:
{
lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; 
v___x_3297_ = lean_box(0);
v___x_3298_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__1));
v___x_3299_ = l_Lean_Expr_const___override(v___x_3298_, v___x_3297_);
return v___x_3299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof(lean_object* v_c_3300_, lean_object* v_x_3301_, lean_object* v_p_3302_, lean_object* v_a_3303_, lean_object* v_a_3304_, lean_object* v_a_3305_, uint8_t v_a_3306_, lean_object* v_a_3307_, lean_object* v_a_3308_, lean_object* v_a_3309_, lean_object* v_a_3310_, lean_object* v_a_3311_){
_start:
{
lean_object* v___x_3313_; 
v___x_3313_ = l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(v_a_3304_, v_a_3308_, v_a_3309_, v_a_3310_, v_a_3311_);
if (lean_obj_tag(v___x_3313_) == 0)
{
lean_object* v_a_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; 
v_a_3314_ = lean_ctor_get(v___x_3313_, 0);
lean_inc(v_a_3314_);
lean_dec_ref_known(v___x_3313_, 1);
v___x_3315_ = lean_box(v_a_3306_);
lean_inc(v_a_3311_);
lean_inc_ref(v_a_3310_);
lean_inc(v_a_3309_);
lean_inc_ref(v_a_3308_);
lean_inc(v_a_3307_);
lean_inc_ref(v_a_3305_);
lean_inc(v_a_3304_);
lean_inc(v_a_3303_);
v___x_3316_ = lean_apply_10(v_p_3302_, v_a_3303_, v_a_3304_, v_a_3305_, v___x_3315_, v_a_3307_, v_a_3308_, v_a_3309_, v_a_3310_, v_a_3311_, lean_box(0));
if (lean_obj_tag(v___x_3316_) == 0)
{
lean_object* v_a_3317_; lean_object* v___x_3319_; uint8_t v_isShared_3320_; uint8_t v_isSharedCheck_3342_; 
v_a_3317_ = lean_ctor_get(v___x_3316_, 0);
v_isSharedCheck_3342_ = !lean_is_exclusive(v___x_3316_);
if (v_isSharedCheck_3342_ == 0)
{
v___x_3319_ = v___x_3316_;
v_isShared_3320_ = v_isSharedCheck_3342_;
goto v_resetjp_3318_;
}
else
{
lean_inc(v_a_3317_);
lean_dec(v___x_3316_);
v___x_3319_ = lean_box(0);
v_isShared_3320_ = v_isSharedCheck_3342_;
goto v_resetjp_3318_;
}
v_resetjp_3318_:
{
lean_object* v___x_3321_; lean_object* v___y_3323_; lean_object* v___x_3331_; uint8_t v___x_3332_; 
v___x_3321_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__2, &l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___closed__2);
v___x_3331_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_3332_ = lean_int_dec_le(v___x_3331_, v_c_3300_);
if (v___x_3332_ == 0)
{
lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; 
v___x_3333_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24);
v___x_3334_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v___x_3335_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27);
v___x_3336_ = lean_int_neg(v_c_3300_);
v___x_3337_ = l_Int_toNat(v___x_3336_);
lean_dec(v___x_3336_);
v___x_3338_ = l_Lean_instToExprInt_mkNat(v___x_3337_);
v___x_3339_ = l_Lean_mkApp3(v___x_3333_, v___x_3334_, v___x_3335_, v___x_3338_);
v___y_3323_ = v___x_3339_;
goto v___jp_3322_;
}
else
{
lean_object* v___x_3340_; lean_object* v___x_3341_; 
v___x_3340_ = l_Int_toNat(v_c_3300_);
v___x_3341_ = l_Lean_instToExprInt_mkNat(v___x_3340_);
v___y_3323_ = v___x_3341_;
goto v___jp_3322_;
}
v___jp_3322_:
{
lean_object* v_nil_3324_; lean_object* v_cons_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3329_; 
v_nil_3324_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13);
v_cons_3325_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_3326_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v_nil_3324_, v_cons_3325_, v_x_3301_);
v___x_3327_ = l_Lean_mkApp4(v___x_3321_, v___y_3323_, v___x_3326_, v_a_3314_, v_a_3317_);
if (v_isShared_3320_ == 0)
{
lean_ctor_set(v___x_3319_, 0, v___x_3327_);
v___x_3329_ = v___x_3319_;
goto v_reusejp_3328_;
}
else
{
lean_object* v_reuseFailAlloc_3330_; 
v_reuseFailAlloc_3330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3330_, 0, v___x_3327_);
v___x_3329_ = v_reuseFailAlloc_3330_;
goto v_reusejp_3328_;
}
v_reusejp_3328_:
{
return v___x_3329_;
}
}
}
}
else
{
lean_dec(v_a_3314_);
return v___x_3316_;
}
}
else
{
lean_dec_ref(v_p_3302_);
return v___x_3313_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___boxed(lean_object* v_c_3343_, lean_object* v_x_3344_, lean_object* v_p_3345_, lean_object* v_a_3346_, lean_object* v_a_3347_, lean_object* v_a_3348_, lean_object* v_a_3349_, lean_object* v_a_3350_, lean_object* v_a_3351_, lean_object* v_a_3352_, lean_object* v_a_3353_, lean_object* v_a_3354_, lean_object* v_a_3355_){
_start:
{
uint8_t v_a_boxed_3356_; lean_object* v_res_3357_; 
v_a_boxed_3356_ = lean_unbox(v_a_3349_);
v_res_3357_ = l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof(v_c_3343_, v_x_3344_, v_p_3345_, v_a_3346_, v_a_3347_, v_a_3348_, v_a_boxed_3356_, v_a_3350_, v_a_3351_, v_a_3352_, v_a_3353_, v_a_3354_);
lean_dec(v_a_3354_);
lean_dec_ref(v_a_3353_);
lean_dec(v_a_3352_);
lean_dec_ref(v_a_3351_);
lean_dec(v_a_3350_);
lean_dec_ref(v_a_3348_);
lean_dec(v_a_3347_);
lean_dec(v_a_3346_);
lean_dec(v_x_3344_);
lean_dec(v_c_3343_);
return v_res_3357_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__2(void){
_start:
{
lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; 
v___x_3364_ = lean_box(0);
v___x_3365_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__1));
v___x_3366_ = l_Lean_Expr_const___override(v___x_3365_, v___x_3364_);
return v___x_3366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof(lean_object* v_c_3367_, lean_object* v_x_3368_, lean_object* v_p_3369_, lean_object* v_a_3370_, lean_object* v_a_3371_, lean_object* v_a_3372_, uint8_t v_a_3373_, lean_object* v_a_3374_, lean_object* v_a_3375_, lean_object* v_a_3376_, lean_object* v_a_3377_, lean_object* v_a_3378_){
_start:
{
lean_object* v___x_3380_; 
v___x_3380_ = l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(v_a_3371_, v_a_3375_, v_a_3376_, v_a_3377_, v_a_3378_);
if (lean_obj_tag(v___x_3380_) == 0)
{
lean_object* v_a_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; 
v_a_3381_ = lean_ctor_get(v___x_3380_, 0);
lean_inc(v_a_3381_);
lean_dec_ref_known(v___x_3380_, 1);
v___x_3382_ = lean_box(v_a_3373_);
lean_inc(v_a_3378_);
lean_inc_ref(v_a_3377_);
lean_inc(v_a_3376_);
lean_inc_ref(v_a_3375_);
lean_inc(v_a_3374_);
lean_inc_ref(v_a_3372_);
lean_inc(v_a_3371_);
lean_inc(v_a_3370_);
v___x_3383_ = lean_apply_10(v_p_3369_, v_a_3370_, v_a_3371_, v_a_3372_, v___x_3382_, v_a_3374_, v_a_3375_, v_a_3376_, v_a_3377_, v_a_3378_, lean_box(0));
if (lean_obj_tag(v___x_3383_) == 0)
{
lean_object* v_a_3384_; lean_object* v___x_3386_; uint8_t v_isShared_3387_; uint8_t v_isSharedCheck_3409_; 
v_a_3384_ = lean_ctor_get(v___x_3383_, 0);
v_isSharedCheck_3409_ = !lean_is_exclusive(v___x_3383_);
if (v_isSharedCheck_3409_ == 0)
{
v___x_3386_ = v___x_3383_;
v_isShared_3387_ = v_isSharedCheck_3409_;
goto v_resetjp_3385_;
}
else
{
lean_inc(v_a_3384_);
lean_dec(v___x_3383_);
v___x_3386_ = lean_box(0);
v_isShared_3387_ = v_isSharedCheck_3409_;
goto v_resetjp_3385_;
}
v_resetjp_3385_:
{
lean_object* v___x_3388_; lean_object* v___y_3390_; lean_object* v___x_3398_; uint8_t v___x_3399_; 
v___x_3388_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__2, &l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___closed__2);
v___x_3398_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_3399_ = lean_int_dec_le(v___x_3398_, v_c_3367_);
if (v___x_3399_ == 0)
{
lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; 
v___x_3400_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__24);
v___x_3401_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__6);
v___x_3402_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__27);
v___x_3403_ = lean_int_neg(v_c_3367_);
v___x_3404_ = l_Int_toNat(v___x_3403_);
lean_dec(v___x_3403_);
v___x_3405_ = l_Lean_instToExprInt_mkNat(v___x_3404_);
v___x_3406_ = l_Lean_mkApp3(v___x_3400_, v___x_3401_, v___x_3402_, v___x_3405_);
v___y_3390_ = v___x_3406_;
goto v___jp_3389_;
}
else
{
lean_object* v___x_3407_; lean_object* v___x_3408_; 
v___x_3407_ = l_Int_toNat(v_c_3367_);
v___x_3408_ = l_Lean_instToExprInt_mkNat(v___x_3407_);
v___y_3390_ = v___x_3408_;
goto v___jp_3389_;
}
v___jp_3389_:
{
lean_object* v_nil_3391_; lean_object* v_cons_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3396_; 
v_nil_3391_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__13);
v_cons_3392_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__17);
v___x_3393_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00Lean_Elab_Tactic_Omega_Justification_tidyProof_spec__0(v_nil_3391_, v_cons_3392_, v_x_3368_);
v___x_3394_ = l_Lean_mkApp4(v___x_3388_, v___y_3390_, v___x_3393_, v_a_3381_, v_a_3384_);
if (v_isShared_3387_ == 0)
{
lean_ctor_set(v___x_3386_, 0, v___x_3394_);
v___x_3396_ = v___x_3386_;
goto v_reusejp_3395_;
}
else
{
lean_object* v_reuseFailAlloc_3397_; 
v_reuseFailAlloc_3397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3397_, 0, v___x_3394_);
v___x_3396_ = v_reuseFailAlloc_3397_;
goto v_reusejp_3395_;
}
v_reusejp_3395_:
{
return v___x_3396_;
}
}
}
}
else
{
lean_dec(v_a_3381_);
return v___x_3383_;
}
}
else
{
lean_dec_ref(v_p_3369_);
return v___x_3380_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___boxed(lean_object* v_c_3410_, lean_object* v_x_3411_, lean_object* v_p_3412_, lean_object* v_a_3413_, lean_object* v_a_3414_, lean_object* v_a_3415_, lean_object* v_a_3416_, lean_object* v_a_3417_, lean_object* v_a_3418_, lean_object* v_a_3419_, lean_object* v_a_3420_, lean_object* v_a_3421_, lean_object* v_a_3422_){
_start:
{
uint8_t v_a_boxed_3423_; lean_object* v_res_3424_; 
v_a_boxed_3423_ = lean_unbox(v_a_3416_);
v_res_3424_ = l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof(v_c_3410_, v_x_3411_, v_p_3412_, v_a_3413_, v_a_3414_, v_a_3415_, v_a_boxed_3423_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_, v_a_3421_);
lean_dec(v_a_3421_);
lean_dec_ref(v_a_3420_);
lean_dec(v_a_3419_);
lean_dec_ref(v_a_3418_);
lean_dec(v_a_3417_);
lean_dec_ref(v_a_3415_);
lean_dec(v_a_3414_);
lean_dec(v_a_3413_);
lean_dec(v_x_3411_);
lean_dec(v_c_3410_);
return v_res_3424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality___lam__0(lean_object* v_prf_x3f_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_, uint8_t v___y_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_){
_start:
{
if (lean_obj_tag(v_prf_x3f_3425_) == 0)
{
lean_object* v___x_3436_; uint8_t v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; 
v___x_3436_ = lean_box(0);
v___x_3437_ = 0;
v___x_3438_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__2_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__2_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__2_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_);
v___x_3439_ = l_Lean_Meta_mkFreshExprMVar(v___x_3436_, v___x_3437_, v___x_3438_, v___y_3431_, v___y_3432_, v___y_3433_, v___y_3434_);
if (lean_obj_tag(v___x_3439_) == 0)
{
lean_object* v_a_3440_; uint8_t v___x_3441_; lean_object* v___x_3442_; 
v_a_3440_ = lean_ctor_get(v___x_3439_, 0);
lean_inc(v_a_3440_);
lean_dec_ref_known(v___x_3439_, 1);
v___x_3441_ = 0;
v___x_3442_ = l_Lean_Meta_mkSorry(v_a_3440_, v___x_3441_, v___y_3431_, v___y_3432_, v___y_3433_, v___y_3434_);
return v___x_3442_;
}
else
{
return v___x_3439_;
}
}
else
{
lean_object* v_val_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; 
v_val_3443_ = lean_ctor_get(v_prf_x3f_3425_, 0);
lean_inc(v_val_3443_);
lean_dec_ref_known(v_prf_x3f_3425_, 1);
v___x_3444_ = lean_box(v___y_3429_);
lean_inc(v___y_3434_);
lean_inc_ref(v___y_3433_);
lean_inc(v___y_3432_);
lean_inc_ref(v___y_3431_);
lean_inc(v___y_3430_);
lean_inc_ref(v___y_3428_);
lean_inc(v___y_3427_);
lean_inc(v___y_3426_);
v___x_3445_ = lean_apply_10(v_val_3443_, v___y_3426_, v___y_3427_, v___y_3428_, v___x_3444_, v___y_3430_, v___y_3431_, v___y_3432_, v___y_3433_, v___y_3434_, lean_box(0));
return v___x_3445_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality___lam__0___boxed(lean_object* v_prf_x3f_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_){
_start:
{
uint8_t v___y_837__boxed_3457_; lean_object* v_res_3458_; 
v___y_837__boxed_3457_ = lean_unbox(v___y_3450_);
v_res_3458_ = l_Lean_Elab_Tactic_Omega_Problem_addInequality___lam__0(v_prf_x3f_3446_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_837__boxed_3457_, v___y_3451_, v___y_3452_, v___y_3453_, v___y_3454_, v___y_3455_);
lean_dec(v___y_3455_);
lean_dec_ref(v___y_3454_);
lean_dec(v___y_3453_);
lean_dec_ref(v___y_3452_);
lean_dec(v___y_3451_);
lean_dec_ref(v___y_3449_);
lean_dec(v___y_3448_);
lean_dec(v___y_3447_);
return v_res_3458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequality(lean_object* v_p_3459_, lean_object* v_const_3460_, lean_object* v_coeffs_3461_, lean_object* v_prf_x3f_3462_){
_start:
{
lean_object* v_assumptions_3463_; lean_object* v_numVars_3464_; lean_object* v_constraints_3465_; lean_object* v_equalities_3466_; lean_object* v_eliminations_3467_; uint8_t v_possible_3468_; lean_object* v_proveFalse_x3f_3469_; lean_object* v_explanation_x3f_3470_; lean_object* v_prf_3471_; lean_object* v_i_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v_p_x27_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v_f_3481_; lean_object* v_f_3482_; lean_object* v_f_3483_; lean_object* v___x_3484_; 
v_assumptions_3463_ = lean_ctor_get(v_p_3459_, 0);
v_numVars_3464_ = lean_ctor_get(v_p_3459_, 1);
v_constraints_3465_ = lean_ctor_get(v_p_3459_, 2);
v_equalities_3466_ = lean_ctor_get(v_p_3459_, 3);
v_eliminations_3467_ = lean_ctor_get(v_p_3459_, 4);
v_possible_3468_ = lean_ctor_get_uint8(v_p_3459_, sizeof(void*)*7);
v_proveFalse_x3f_3469_ = lean_ctor_get(v_p_3459_, 5);
v_explanation_x3f_3470_ = lean_ctor_get(v_p_3459_, 6);
v_prf_3471_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_Problem_addInequality___lam__0___boxed), 11, 1);
lean_closure_set(v_prf_3471_, 0, v_prf_x3f_3462_);
v_i_3472_ = lean_array_get_size(v_assumptions_3463_);
lean_inc_n(v_coeffs_3461_, 2);
lean_inc(v_const_3460_);
v___x_3473_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_Problem_addInequality__proof___boxed), 13, 3);
lean_closure_set(v___x_3473_, 0, v_const_3460_);
lean_closure_set(v___x_3473_, 1, v_coeffs_3461_);
lean_closure_set(v___x_3473_, 2, v_prf_3471_);
lean_inc_ref(v_assumptions_3463_);
v___x_3474_ = lean_array_push(v_assumptions_3463_, v___x_3473_);
lean_inc_ref(v_explanation_x3f_3470_);
lean_inc(v_proveFalse_x3f_3469_);
lean_inc(v_eliminations_3467_);
lean_inc_ref(v_equalities_3466_);
lean_inc_ref(v_constraints_3465_);
lean_inc(v_numVars_3464_);
v_p_x27_3475_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_p_x27_3475_, 0, v___x_3474_);
lean_ctor_set(v_p_x27_3475_, 1, v_numVars_3464_);
lean_ctor_set(v_p_x27_3475_, 2, v_constraints_3465_);
lean_ctor_set(v_p_x27_3475_, 3, v_equalities_3466_);
lean_ctor_set(v_p_x27_3475_, 4, v_eliminations_3467_);
lean_ctor_set(v_p_x27_3475_, 5, v_proveFalse_x3f_3469_);
lean_ctor_set(v_p_x27_3475_, 6, v_explanation_x3f_3470_);
lean_ctor_set_uint8(v_p_x27_3475_, sizeof(void*)*7, v_possible_3468_);
v___x_3476_ = lean_int_neg(v_const_3460_);
lean_dec(v_const_3460_);
v___x_3477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3477_, 0, v___x_3476_);
v___x_3478_ = lean_box(0);
v___x_3479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3479_, 0, v___x_3477_);
lean_ctor_set(v___x_3479_, 1, v___x_3478_);
lean_inc_ref(v___x_3479_);
v___x_3480_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3480_, 0, v___x_3479_);
lean_ctor_set(v___x_3480_, 1, v_coeffs_3461_);
lean_ctor_set(v___x_3480_, 2, v_i_3472_);
v_f_3481_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_f_3481_, 0, v_coeffs_3461_);
lean_ctor_set(v_f_3481_, 1, v___x_3479_);
lean_ctor_set(v_f_3481_, 2, v___x_3480_);
v_f_3482_ = l_Lean_Elab_Tactic_Omega_Problem_replayEliminations(v_p_3459_, v_f_3481_);
v_f_3483_ = l_Lean_Elab_Tactic_Omega_Fact_tidy(v_f_3482_);
v___x_3484_ = l_Lean_Elab_Tactic_Omega_Problem_addConstraint(v_p_x27_3475_, v_f_3483_);
return v___x_3484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEquality(lean_object* v_p_3485_, lean_object* v_const_3486_, lean_object* v_coeffs_3487_, lean_object* v_prf_x3f_3488_){
_start:
{
lean_object* v_assumptions_3489_; lean_object* v_numVars_3490_; lean_object* v_constraints_3491_; lean_object* v_equalities_3492_; lean_object* v_eliminations_3493_; uint8_t v_possible_3494_; lean_object* v_proveFalse_x3f_3495_; lean_object* v_explanation_x3f_3496_; lean_object* v_prf_3497_; lean_object* v_i_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v_p_x27_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v_f_3506_; lean_object* v_f_3507_; lean_object* v_f_3508_; lean_object* v___x_3509_; 
v_assumptions_3489_ = lean_ctor_get(v_p_3485_, 0);
v_numVars_3490_ = lean_ctor_get(v_p_3485_, 1);
v_constraints_3491_ = lean_ctor_get(v_p_3485_, 2);
v_equalities_3492_ = lean_ctor_get(v_p_3485_, 3);
v_eliminations_3493_ = lean_ctor_get(v_p_3485_, 4);
v_possible_3494_ = lean_ctor_get_uint8(v_p_3485_, sizeof(void*)*7);
v_proveFalse_x3f_3495_ = lean_ctor_get(v_p_3485_, 5);
v_explanation_x3f_3496_ = lean_ctor_get(v_p_3485_, 6);
v_prf_3497_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_Problem_addInequality___lam__0___boxed), 11, 1);
lean_closure_set(v_prf_3497_, 0, v_prf_x3f_3488_);
v_i_3498_ = lean_array_get_size(v_assumptions_3489_);
lean_inc_n(v_coeffs_3487_, 2);
lean_inc(v_const_3486_);
v___x_3499_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_Problem_addEquality__proof___boxed), 13, 3);
lean_closure_set(v___x_3499_, 0, v_const_3486_);
lean_closure_set(v___x_3499_, 1, v_coeffs_3487_);
lean_closure_set(v___x_3499_, 2, v_prf_3497_);
lean_inc_ref(v_assumptions_3489_);
v___x_3500_ = lean_array_push(v_assumptions_3489_, v___x_3499_);
lean_inc_ref(v_explanation_x3f_3496_);
lean_inc(v_proveFalse_x3f_3495_);
lean_inc(v_eliminations_3493_);
lean_inc_ref(v_equalities_3492_);
lean_inc_ref(v_constraints_3491_);
lean_inc(v_numVars_3490_);
v_p_x27_3501_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_p_x27_3501_, 0, v___x_3500_);
lean_ctor_set(v_p_x27_3501_, 1, v_numVars_3490_);
lean_ctor_set(v_p_x27_3501_, 2, v_constraints_3491_);
lean_ctor_set(v_p_x27_3501_, 3, v_equalities_3492_);
lean_ctor_set(v_p_x27_3501_, 4, v_eliminations_3493_);
lean_ctor_set(v_p_x27_3501_, 5, v_proveFalse_x3f_3495_);
lean_ctor_set(v_p_x27_3501_, 6, v_explanation_x3f_3496_);
lean_ctor_set_uint8(v_p_x27_3501_, sizeof(void*)*7, v_possible_3494_);
v___x_3502_ = lean_int_neg(v_const_3486_);
lean_dec(v_const_3486_);
v___x_3503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3503_, 0, v___x_3502_);
lean_inc_ref(v___x_3503_);
v___x_3504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3504_, 0, v___x_3503_);
lean_ctor_set(v___x_3504_, 1, v___x_3503_);
lean_inc_ref(v___x_3504_);
v___x_3505_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3505_, 0, v___x_3504_);
lean_ctor_set(v___x_3505_, 1, v_coeffs_3487_);
lean_ctor_set(v___x_3505_, 2, v_i_3498_);
v_f_3506_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_f_3506_, 0, v_coeffs_3487_);
lean_ctor_set(v_f_3506_, 1, v___x_3504_);
lean_ctor_set(v_f_3506_, 2, v___x_3505_);
v_f_3507_ = l_Lean_Elab_Tactic_Omega_Problem_replayEliminations(v_p_3485_, v_f_3506_);
v_f_3508_ = l_Lean_Elab_Tactic_Omega_Fact_tidy(v_f_3507_);
v___x_3509_ = l_Lean_Elab_Tactic_Omega_Problem_addConstraint(v_p_x27_3501_, v_f_3508_);
return v___x_3509_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_addInequalities_spec__0(lean_object* v_x_3510_, lean_object* v_x_3511_){
_start:
{
if (lean_obj_tag(v_x_3511_) == 0)
{
return v_x_3510_;
}
else
{
lean_object* v_head_3512_; lean_object* v_snd_3513_; lean_object* v_tail_3514_; lean_object* v_fst_3515_; lean_object* v_fst_3516_; lean_object* v_snd_3517_; lean_object* v___x_3518_; 
v_head_3512_ = lean_ctor_get(v_x_3511_, 0);
lean_inc(v_head_3512_);
v_snd_3513_ = lean_ctor_get(v_head_3512_, 1);
lean_inc(v_snd_3513_);
v_tail_3514_ = lean_ctor_get(v_x_3511_, 1);
lean_inc(v_tail_3514_);
lean_dec_ref_known(v_x_3511_, 2);
v_fst_3515_ = lean_ctor_get(v_head_3512_, 0);
lean_inc(v_fst_3515_);
lean_dec(v_head_3512_);
v_fst_3516_ = lean_ctor_get(v_snd_3513_, 0);
lean_inc(v_fst_3516_);
v_snd_3517_ = lean_ctor_get(v_snd_3513_, 1);
lean_inc(v_snd_3517_);
lean_dec(v_snd_3513_);
v___x_3518_ = l_Lean_Elab_Tactic_Omega_Problem_addInequality(v_x_3510_, v_fst_3515_, v_fst_3516_, v_snd_3517_);
v_x_3510_ = v___x_3518_;
v_x_3511_ = v_tail_3514_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addInequalities(lean_object* v_p_3520_, lean_object* v_ineqs_3521_){
_start:
{
lean_object* v___x_3522_; 
v___x_3522_ = l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_addInequalities_spec__0(v_p_3520_, v_ineqs_3521_);
return v___x_3522_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_addEqualities_spec__0(lean_object* v_x_3523_, lean_object* v_x_3524_){
_start:
{
if (lean_obj_tag(v_x_3524_) == 0)
{
return v_x_3523_;
}
else
{
lean_object* v_head_3525_; lean_object* v_snd_3526_; lean_object* v_tail_3527_; lean_object* v_fst_3528_; lean_object* v_fst_3529_; lean_object* v_snd_3530_; lean_object* v___x_3531_; 
v_head_3525_ = lean_ctor_get(v_x_3524_, 0);
lean_inc(v_head_3525_);
v_snd_3526_ = lean_ctor_get(v_head_3525_, 1);
lean_inc(v_snd_3526_);
v_tail_3527_ = lean_ctor_get(v_x_3524_, 1);
lean_inc(v_tail_3527_);
lean_dec_ref_known(v_x_3524_, 2);
v_fst_3528_ = lean_ctor_get(v_head_3525_, 0);
lean_inc(v_fst_3528_);
lean_dec(v_head_3525_);
v_fst_3529_ = lean_ctor_get(v_snd_3526_, 0);
lean_inc(v_fst_3529_);
v_snd_3530_ = lean_ctor_get(v_snd_3526_, 1);
lean_inc(v_snd_3530_);
lean_dec(v_snd_3526_);
v___x_3531_ = l_Lean_Elab_Tactic_Omega_Problem_addEquality(v_x_3523_, v_fst_3528_, v_fst_3529_, v_snd_3530_);
v_x_3523_ = v___x_3531_;
v_x_3524_ = v_tail_3527_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_addEqualities(lean_object* v_p_3533_, lean_object* v_eqs_3534_){
_start:
{
lean_object* v___x_3535_; 
v___x_3535_ = l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_addEqualities_spec__0(v_p_3533_, v_eqs_3534_);
return v___x_3535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__0(lean_object* v___x_3542_, lean_object* v_x_3543_){
_start:
{
lean_object* v_constraint_3544_; lean_object* v_coeffs_3545_; lean_object* v_lowerBound_3546_; lean_object* v_upperBound_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___y_3552_; lean_object* v___y_3553_; 
v_constraint_3544_ = lean_ctor_get(v_x_3543_, 1);
lean_inc_ref(v_constraint_3544_);
v_coeffs_3545_ = lean_ctor_get(v_x_3543_, 0);
lean_inc(v_coeffs_3545_);
lean_dec_ref(v_x_3543_);
v_lowerBound_3546_ = lean_ctor_get(v_constraint_3544_, 0);
lean_inc(v_lowerBound_3546_);
v_upperBound_3547_ = lean_ctor_get(v_constraint_3544_, 1);
lean_inc(v_upperBound_3547_);
lean_dec_ref(v_constraint_3544_);
v___x_3548_ = l_List_toString___redArg(v___x_3542_, v_coeffs_3545_);
v___x_3549_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0));
v___x_3550_ = lean_string_append(v___x_3548_, v___x_3549_);
if (lean_obj_tag(v_lowerBound_3546_) == 0)
{
if (lean_obj_tag(v_upperBound_3547_) == 0)
{
lean_object* v___x_3558_; lean_object* v___x_3559_; 
v___x_3558_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2));
v___x_3559_ = lean_string_append(v___x_3550_, v___x_3558_);
return v___x_3559_;
}
else
{
lean_object* v_val_3560_; lean_object* v___x_3561_; lean_object* v___y_3563_; lean_object* v_intZero_3568_; uint8_t v_isNeg_3569_; 
v_val_3560_ = lean_ctor_get(v_upperBound_3547_, 0);
lean_inc(v_val_3560_);
lean_dec_ref_known(v_upperBound_3547_, 1);
v___x_3561_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3));
v_intZero_3568_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_3569_ = lean_int_dec_lt(v_val_3560_, v_intZero_3568_);
if (v_isNeg_3569_ == 0)
{
lean_object* v_a_3570_; lean_object* v___x_3571_; 
v_a_3570_ = lean_nat_abs(v_val_3560_);
lean_dec(v_val_3560_);
v___x_3571_ = l_Nat_reprFast(v_a_3570_);
v___y_3563_ = v___x_3571_;
goto v___jp_3562_;
}
else
{
lean_object* v_abs_3572_; lean_object* v_one_3573_; lean_object* v_a_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; 
v_abs_3572_ = lean_nat_abs(v_val_3560_);
lean_dec(v_val_3560_);
v_one_3573_ = lean_unsigned_to_nat(1u);
v_a_3574_ = lean_nat_sub(v_abs_3572_, v_one_3573_);
lean_dec(v_abs_3572_);
v___x_3575_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_3576_ = lean_nat_add(v_a_3574_, v_one_3573_);
lean_dec(v_a_3574_);
v___x_3577_ = l_Nat_reprFast(v___x_3576_);
v___x_3578_ = lean_string_append(v___x_3575_, v___x_3577_);
lean_dec_ref(v___x_3577_);
v___y_3563_ = v___x_3578_;
goto v___jp_3562_;
}
v___jp_3562_:
{
lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; 
v___x_3564_ = lean_string_append(v___x_3561_, v___y_3563_);
lean_dec_ref(v___y_3563_);
v___x_3565_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_3566_ = lean_string_append(v___x_3564_, v___x_3565_);
v___x_3567_ = lean_string_append(v___x_3550_, v___x_3566_);
lean_dec_ref(v___x_3566_);
return v___x_3567_;
}
}
}
else
{
if (lean_obj_tag(v_upperBound_3547_) == 0)
{
lean_object* v_val_3579_; lean_object* v___x_3580_; lean_object* v___y_3582_; lean_object* v_intZero_3587_; uint8_t v_isNeg_3588_; 
v_val_3579_ = lean_ctor_get(v_lowerBound_3546_, 0);
lean_inc(v_val_3579_);
lean_dec_ref_known(v_lowerBound_3546_, 1);
v___x_3580_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_3587_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_3588_ = lean_int_dec_lt(v_val_3579_, v_intZero_3587_);
if (v_isNeg_3588_ == 0)
{
lean_object* v_a_3589_; lean_object* v___x_3590_; 
v_a_3589_ = lean_nat_abs(v_val_3579_);
lean_dec(v_val_3579_);
v___x_3590_ = l_Nat_reprFast(v_a_3589_);
v___y_3582_ = v___x_3590_;
goto v___jp_3581_;
}
else
{
lean_object* v_abs_3591_; lean_object* v_one_3592_; lean_object* v_a_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; 
v_abs_3591_ = lean_nat_abs(v_val_3579_);
lean_dec(v_val_3579_);
v_one_3592_ = lean_unsigned_to_nat(1u);
v_a_3593_ = lean_nat_sub(v_abs_3591_, v_one_3592_);
lean_dec(v_abs_3591_);
v___x_3594_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_3595_ = lean_nat_add(v_a_3593_, v_one_3592_);
lean_dec(v_a_3593_);
v___x_3596_ = l_Nat_reprFast(v___x_3595_);
v___x_3597_ = lean_string_append(v___x_3594_, v___x_3596_);
lean_dec_ref(v___x_3596_);
v___y_3582_ = v___x_3597_;
goto v___jp_3581_;
}
v___jp_3581_:
{
lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; 
v___x_3583_ = lean_string_append(v___x_3580_, v___y_3582_);
lean_dec_ref(v___y_3582_);
v___x_3584_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5));
v___x_3585_ = lean_string_append(v___x_3583_, v___x_3584_);
v___x_3586_ = lean_string_append(v___x_3550_, v___x_3585_);
lean_dec_ref(v___x_3585_);
return v___x_3586_;
}
}
else
{
lean_object* v_val_3598_; lean_object* v_val_3599_; uint8_t v___x_3600_; 
v_val_3598_ = lean_ctor_get(v_lowerBound_3546_, 0);
lean_inc(v_val_3598_);
lean_dec_ref_known(v_lowerBound_3546_, 1);
v_val_3599_ = lean_ctor_get(v_upperBound_3547_, 0);
lean_inc(v_val_3599_);
lean_dec_ref_known(v_upperBound_3547_, 1);
v___x_3600_ = lean_int_dec_lt(v_val_3599_, v_val_3598_);
if (v___x_3600_ == 0)
{
uint8_t v___x_3601_; 
v___x_3601_ = lean_int_dec_eq(v_val_3598_, v_val_3599_);
if (v___x_3601_ == 0)
{
lean_object* v___x_3602_; lean_object* v___y_3604_; lean_object* v_intZero_3619_; uint8_t v_isNeg_3620_; 
v___x_3602_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_3619_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_3620_ = lean_int_dec_lt(v_val_3598_, v_intZero_3619_);
if (v_isNeg_3620_ == 0)
{
lean_object* v_a_3621_; lean_object* v___x_3622_; 
v_a_3621_ = lean_nat_abs(v_val_3598_);
lean_dec(v_val_3598_);
v___x_3622_ = l_Nat_reprFast(v_a_3621_);
v___y_3604_ = v___x_3622_;
goto v___jp_3603_;
}
else
{
lean_object* v_abs_3623_; lean_object* v_one_3624_; lean_object* v_a_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; 
v_abs_3623_ = lean_nat_abs(v_val_3598_);
lean_dec(v_val_3598_);
v_one_3624_ = lean_unsigned_to_nat(1u);
v_a_3625_ = lean_nat_sub(v_abs_3623_, v_one_3624_);
lean_dec(v_abs_3623_);
v___x_3626_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_3627_ = lean_nat_add(v_a_3625_, v_one_3624_);
lean_dec(v_a_3625_);
v___x_3628_ = l_Nat_reprFast(v___x_3627_);
v___x_3629_ = lean_string_append(v___x_3626_, v___x_3628_);
lean_dec_ref(v___x_3628_);
v___y_3604_ = v___x_3629_;
goto v___jp_3603_;
}
v___jp_3603_:
{
lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v_intZero_3608_; uint8_t v_isNeg_3609_; 
v___x_3605_ = lean_string_append(v___x_3602_, v___y_3604_);
lean_dec_ref(v___y_3604_);
v___x_3606_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0));
v___x_3607_ = lean_string_append(v___x_3605_, v___x_3606_);
v_intZero_3608_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_3609_ = lean_int_dec_lt(v_val_3599_, v_intZero_3608_);
if (v_isNeg_3609_ == 0)
{
lean_object* v_a_3610_; lean_object* v___x_3611_; 
v_a_3610_ = lean_nat_abs(v_val_3599_);
lean_dec(v_val_3599_);
v___x_3611_ = l_Nat_reprFast(v_a_3610_);
v___y_3552_ = v___x_3607_;
v___y_3553_ = v___x_3611_;
goto v___jp_3551_;
}
else
{
lean_object* v_abs_3612_; lean_object* v_one_3613_; lean_object* v_a_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; 
v_abs_3612_ = lean_nat_abs(v_val_3599_);
lean_dec(v_val_3599_);
v_one_3613_ = lean_unsigned_to_nat(1u);
v_a_3614_ = lean_nat_sub(v_abs_3612_, v_one_3613_);
lean_dec(v_abs_3612_);
v___x_3615_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_3616_ = lean_nat_add(v_a_3614_, v_one_3613_);
lean_dec(v_a_3614_);
v___x_3617_ = l_Nat_reprFast(v___x_3616_);
v___x_3618_ = lean_string_append(v___x_3615_, v___x_3617_);
lean_dec_ref(v___x_3617_);
v___y_3552_ = v___x_3607_;
v___y_3553_ = v___x_3618_;
goto v___jp_3551_;
}
}
}
else
{
lean_object* v___x_3630_; lean_object* v___y_3632_; lean_object* v_intZero_3637_; uint8_t v_isNeg_3638_; 
lean_dec(v_val_3599_);
v___x_3630_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6));
v_intZero_3637_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_3638_ = lean_int_dec_lt(v_val_3598_, v_intZero_3637_);
if (v_isNeg_3638_ == 0)
{
lean_object* v_a_3639_; lean_object* v___x_3640_; 
v_a_3639_ = lean_nat_abs(v_val_3598_);
lean_dec(v_val_3598_);
v___x_3640_ = l_Nat_reprFast(v_a_3639_);
v___y_3632_ = v___x_3640_;
goto v___jp_3631_;
}
else
{
lean_object* v_abs_3641_; lean_object* v_one_3642_; lean_object* v_a_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; 
v_abs_3641_ = lean_nat_abs(v_val_3598_);
lean_dec(v_val_3598_);
v_one_3642_ = lean_unsigned_to_nat(1u);
v_a_3643_ = lean_nat_sub(v_abs_3641_, v_one_3642_);
lean_dec(v_abs_3641_);
v___x_3644_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_3645_ = lean_nat_add(v_a_3643_, v_one_3642_);
lean_dec(v_a_3643_);
v___x_3646_ = l_Nat_reprFast(v___x_3645_);
v___x_3647_ = lean_string_append(v___x_3644_, v___x_3646_);
lean_dec_ref(v___x_3646_);
v___y_3632_ = v___x_3647_;
goto v___jp_3631_;
}
v___jp_3631_:
{
lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; 
v___x_3633_ = lean_string_append(v___x_3630_, v___y_3632_);
lean_dec_ref(v___y_3632_);
v___x_3634_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7));
v___x_3635_ = lean_string_append(v___x_3633_, v___x_3634_);
v___x_3636_ = lean_string_append(v___x_3550_, v___x_3635_);
lean_dec_ref(v___x_3635_);
return v___x_3636_;
}
}
}
else
{
lean_object* v___x_3648_; lean_object* v___x_3649_; 
lean_dec(v_val_3599_);
lean_dec(v_val_3598_);
v___x_3648_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8));
v___x_3649_ = lean_string_append(v___x_3550_, v___x_3648_);
return v___x_3649_;
}
}
}
v___jp_3551_:
{
lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; 
v___x_3554_ = lean_string_append(v___y_3552_, v___y_3553_);
lean_dec_ref(v___y_3553_);
v___x_3555_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_3556_ = lean_string_append(v___x_3554_, v___x_3555_);
v___x_3557_ = lean_string_append(v___x_3550_, v___x_3556_);
lean_dec_ref(v___x_3556_);
return v___x_3557_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__1(lean_object* v___x_3650_, lean_object* v_x_3651_){
_start:
{
lean_object* v_fst_3652_; lean_object* v_constraint_3653_; lean_object* v_coeffs_3654_; lean_object* v_lowerBound_3655_; lean_object* v_upperBound_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___y_3661_; lean_object* v___y_3662_; 
v_fst_3652_ = lean_ctor_get(v_x_3651_, 0);
lean_inc(v_fst_3652_);
lean_dec_ref(v_x_3651_);
v_constraint_3653_ = lean_ctor_get(v_fst_3652_, 1);
lean_inc_ref(v_constraint_3653_);
v_coeffs_3654_ = lean_ctor_get(v_fst_3652_, 0);
lean_inc(v_coeffs_3654_);
lean_dec(v_fst_3652_);
v_lowerBound_3655_ = lean_ctor_get(v_constraint_3653_, 0);
lean_inc(v_lowerBound_3655_);
v_upperBound_3656_ = lean_ctor_get(v_constraint_3653_, 1);
lean_inc(v_upperBound_3656_);
lean_dec_ref(v_constraint_3653_);
v___x_3657_ = l_List_toString___redArg(v___x_3650_, v_coeffs_3654_);
v___x_3658_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0));
v___x_3659_ = lean_string_append(v___x_3657_, v___x_3658_);
if (lean_obj_tag(v_lowerBound_3655_) == 0)
{
if (lean_obj_tag(v_upperBound_3656_) == 0)
{
lean_object* v___x_3667_; lean_object* v___x_3668_; 
v___x_3667_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2));
v___x_3668_ = lean_string_append(v___x_3659_, v___x_3667_);
return v___x_3668_;
}
else
{
lean_object* v_val_3669_; lean_object* v___x_3670_; lean_object* v___y_3672_; lean_object* v_intZero_3677_; uint8_t v_isNeg_3678_; 
v_val_3669_ = lean_ctor_get(v_upperBound_3656_, 0);
lean_inc(v_val_3669_);
lean_dec_ref_known(v_upperBound_3656_, 1);
v___x_3670_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3));
v_intZero_3677_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_3678_ = lean_int_dec_lt(v_val_3669_, v_intZero_3677_);
if (v_isNeg_3678_ == 0)
{
lean_object* v_a_3679_; lean_object* v___x_3680_; 
v_a_3679_ = lean_nat_abs(v_val_3669_);
lean_dec(v_val_3669_);
v___x_3680_ = l_Nat_reprFast(v_a_3679_);
v___y_3672_ = v___x_3680_;
goto v___jp_3671_;
}
else
{
lean_object* v_abs_3681_; lean_object* v_one_3682_; lean_object* v_a_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; 
v_abs_3681_ = lean_nat_abs(v_val_3669_);
lean_dec(v_val_3669_);
v_one_3682_ = lean_unsigned_to_nat(1u);
v_a_3683_ = lean_nat_sub(v_abs_3681_, v_one_3682_);
lean_dec(v_abs_3681_);
v___x_3684_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_3685_ = lean_nat_add(v_a_3683_, v_one_3682_);
lean_dec(v_a_3683_);
v___x_3686_ = l_Nat_reprFast(v___x_3685_);
v___x_3687_ = lean_string_append(v___x_3684_, v___x_3686_);
lean_dec_ref(v___x_3686_);
v___y_3672_ = v___x_3687_;
goto v___jp_3671_;
}
v___jp_3671_:
{
lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; 
v___x_3673_ = lean_string_append(v___x_3670_, v___y_3672_);
lean_dec_ref(v___y_3672_);
v___x_3674_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_3675_ = lean_string_append(v___x_3673_, v___x_3674_);
v___x_3676_ = lean_string_append(v___x_3659_, v___x_3675_);
lean_dec_ref(v___x_3675_);
return v___x_3676_;
}
}
}
else
{
if (lean_obj_tag(v_upperBound_3656_) == 0)
{
lean_object* v_val_3688_; lean_object* v___x_3689_; lean_object* v___y_3691_; lean_object* v_intZero_3696_; uint8_t v_isNeg_3697_; 
v_val_3688_ = lean_ctor_get(v_lowerBound_3655_, 0);
lean_inc(v_val_3688_);
lean_dec_ref_known(v_lowerBound_3655_, 1);
v___x_3689_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_3696_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_3697_ = lean_int_dec_lt(v_val_3688_, v_intZero_3696_);
if (v_isNeg_3697_ == 0)
{
lean_object* v_a_3698_; lean_object* v___x_3699_; 
v_a_3698_ = lean_nat_abs(v_val_3688_);
lean_dec(v_val_3688_);
v___x_3699_ = l_Nat_reprFast(v_a_3698_);
v___y_3691_ = v___x_3699_;
goto v___jp_3690_;
}
else
{
lean_object* v_abs_3700_; lean_object* v_one_3701_; lean_object* v_a_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; 
v_abs_3700_ = lean_nat_abs(v_val_3688_);
lean_dec(v_val_3688_);
v_one_3701_ = lean_unsigned_to_nat(1u);
v_a_3702_ = lean_nat_sub(v_abs_3700_, v_one_3701_);
lean_dec(v_abs_3700_);
v___x_3703_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_3704_ = lean_nat_add(v_a_3702_, v_one_3701_);
lean_dec(v_a_3702_);
v___x_3705_ = l_Nat_reprFast(v___x_3704_);
v___x_3706_ = lean_string_append(v___x_3703_, v___x_3705_);
lean_dec_ref(v___x_3705_);
v___y_3691_ = v___x_3706_;
goto v___jp_3690_;
}
v___jp_3690_:
{
lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; 
v___x_3692_ = lean_string_append(v___x_3689_, v___y_3691_);
lean_dec_ref(v___y_3691_);
v___x_3693_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5));
v___x_3694_ = lean_string_append(v___x_3692_, v___x_3693_);
v___x_3695_ = lean_string_append(v___x_3659_, v___x_3694_);
lean_dec_ref(v___x_3694_);
return v___x_3695_;
}
}
else
{
lean_object* v_val_3707_; lean_object* v_val_3708_; uint8_t v___x_3709_; 
v_val_3707_ = lean_ctor_get(v_lowerBound_3655_, 0);
lean_inc(v_val_3707_);
lean_dec_ref_known(v_lowerBound_3655_, 1);
v_val_3708_ = lean_ctor_get(v_upperBound_3656_, 0);
lean_inc(v_val_3708_);
lean_dec_ref_known(v_upperBound_3656_, 1);
v___x_3709_ = lean_int_dec_lt(v_val_3708_, v_val_3707_);
if (v___x_3709_ == 0)
{
uint8_t v___x_3710_; 
v___x_3710_ = lean_int_dec_eq(v_val_3707_, v_val_3708_);
if (v___x_3710_ == 0)
{
lean_object* v___x_3711_; lean_object* v___y_3713_; lean_object* v_intZero_3728_; uint8_t v_isNeg_3729_; 
v___x_3711_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_3728_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_3729_ = lean_int_dec_lt(v_val_3707_, v_intZero_3728_);
if (v_isNeg_3729_ == 0)
{
lean_object* v_a_3730_; lean_object* v___x_3731_; 
v_a_3730_ = lean_nat_abs(v_val_3707_);
lean_dec(v_val_3707_);
v___x_3731_ = l_Nat_reprFast(v_a_3730_);
v___y_3713_ = v___x_3731_;
goto v___jp_3712_;
}
else
{
lean_object* v_abs_3732_; lean_object* v_one_3733_; lean_object* v_a_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; 
v_abs_3732_ = lean_nat_abs(v_val_3707_);
lean_dec(v_val_3707_);
v_one_3733_ = lean_unsigned_to_nat(1u);
v_a_3734_ = lean_nat_sub(v_abs_3732_, v_one_3733_);
lean_dec(v_abs_3732_);
v___x_3735_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_3736_ = lean_nat_add(v_a_3734_, v_one_3733_);
lean_dec(v_a_3734_);
v___x_3737_ = l_Nat_reprFast(v___x_3736_);
v___x_3738_ = lean_string_append(v___x_3735_, v___x_3737_);
lean_dec_ref(v___x_3737_);
v___y_3713_ = v___x_3738_;
goto v___jp_3712_;
}
v___jp_3712_:
{
lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v_intZero_3717_; uint8_t v_isNeg_3718_; 
v___x_3714_ = lean_string_append(v___x_3711_, v___y_3713_);
lean_dec_ref(v___y_3713_);
v___x_3715_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0));
v___x_3716_ = lean_string_append(v___x_3714_, v___x_3715_);
v_intZero_3717_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_3718_ = lean_int_dec_lt(v_val_3708_, v_intZero_3717_);
if (v_isNeg_3718_ == 0)
{
lean_object* v_a_3719_; lean_object* v___x_3720_; 
v_a_3719_ = lean_nat_abs(v_val_3708_);
lean_dec(v_val_3708_);
v___x_3720_ = l_Nat_reprFast(v_a_3719_);
v___y_3661_ = v___x_3716_;
v___y_3662_ = v___x_3720_;
goto v___jp_3660_;
}
else
{
lean_object* v_abs_3721_; lean_object* v_one_3722_; lean_object* v_a_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; 
v_abs_3721_ = lean_nat_abs(v_val_3708_);
lean_dec(v_val_3708_);
v_one_3722_ = lean_unsigned_to_nat(1u);
v_a_3723_ = lean_nat_sub(v_abs_3721_, v_one_3722_);
lean_dec(v_abs_3721_);
v___x_3724_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_3725_ = lean_nat_add(v_a_3723_, v_one_3722_);
lean_dec(v_a_3723_);
v___x_3726_ = l_Nat_reprFast(v___x_3725_);
v___x_3727_ = lean_string_append(v___x_3724_, v___x_3726_);
lean_dec_ref(v___x_3726_);
v___y_3661_ = v___x_3716_;
v___y_3662_ = v___x_3727_;
goto v___jp_3660_;
}
}
}
else
{
lean_object* v___x_3739_; lean_object* v___y_3741_; lean_object* v_intZero_3746_; uint8_t v_isNeg_3747_; 
lean_dec(v_val_3708_);
v___x_3739_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6));
v_intZero_3746_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_3747_ = lean_int_dec_lt(v_val_3707_, v_intZero_3746_);
if (v_isNeg_3747_ == 0)
{
lean_object* v_a_3748_; lean_object* v___x_3749_; 
v_a_3748_ = lean_nat_abs(v_val_3707_);
lean_dec(v_val_3707_);
v___x_3749_ = l_Nat_reprFast(v_a_3748_);
v___y_3741_ = v___x_3749_;
goto v___jp_3740_;
}
else
{
lean_object* v_abs_3750_; lean_object* v_one_3751_; lean_object* v_a_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; 
v_abs_3750_ = lean_nat_abs(v_val_3707_);
lean_dec(v_val_3707_);
v_one_3751_ = lean_unsigned_to_nat(1u);
v_a_3752_ = lean_nat_sub(v_abs_3750_, v_one_3751_);
lean_dec(v_abs_3750_);
v___x_3753_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_3754_ = lean_nat_add(v_a_3752_, v_one_3751_);
lean_dec(v_a_3752_);
v___x_3755_ = l_Nat_reprFast(v___x_3754_);
v___x_3756_ = lean_string_append(v___x_3753_, v___x_3755_);
lean_dec_ref(v___x_3755_);
v___y_3741_ = v___x_3756_;
goto v___jp_3740_;
}
v___jp_3740_:
{
lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; 
v___x_3742_ = lean_string_append(v___x_3739_, v___y_3741_);
lean_dec_ref(v___y_3741_);
v___x_3743_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7));
v___x_3744_ = lean_string_append(v___x_3742_, v___x_3743_);
v___x_3745_ = lean_string_append(v___x_3659_, v___x_3744_);
lean_dec_ref(v___x_3744_);
return v___x_3745_;
}
}
}
else
{
lean_object* v___x_3757_; lean_object* v___x_3758_; 
lean_dec(v_val_3708_);
lean_dec(v_val_3707_);
v___x_3757_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8));
v___x_3758_ = lean_string_append(v___x_3659_, v___x_3757_);
return v___x_3758_;
}
}
}
v___jp_3660_:
{
lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; 
v___x_3663_ = lean_string_append(v___y_3661_, v___y_3662_);
lean_dec_ref(v___y_3662_);
v___x_3664_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_3665_ = lean_string_append(v___x_3663_, v___x_3664_);
v___x_3666_ = lean_string_append(v___x_3659_, v___x_3665_);
lean_dec_ref(v___x_3665_);
return v___x_3666_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2(lean_object* v___f_3763_, lean_object* v___f_3764_, lean_object* v___f_3765_, lean_object* v_d_3766_){
_start:
{
lean_object* v_var_3767_; lean_object* v_irrelevant_3768_; lean_object* v_lowerBounds_3769_; lean_object* v_upperBounds_3770_; lean_object* v___x_3771_; lean_object* v_irrelevant_3772_; lean_object* v_lowerBounds_3773_; lean_object* v_upperBounds_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; 
v_var_3767_ = lean_ctor_get(v_d_3766_, 0);
lean_inc(v_var_3767_);
v_irrelevant_3768_ = lean_ctor_get(v_d_3766_, 1);
lean_inc(v_irrelevant_3768_);
v_lowerBounds_3769_ = lean_ctor_get(v_d_3766_, 2);
lean_inc(v_lowerBounds_3769_);
v_upperBounds_3770_ = lean_ctor_get(v_d_3766_, 3);
lean_inc(v_upperBounds_3770_);
lean_dec_ref(v_d_3766_);
v___x_3771_ = lean_box(0);
v_irrelevant_3772_ = l_List_mapTR_loop___redArg(v___f_3763_, v_irrelevant_3768_, v___x_3771_);
lean_inc_ref(v___f_3764_);
v_lowerBounds_3773_ = l_List_mapTR_loop___redArg(v___f_3764_, v_lowerBounds_3769_, v___x_3771_);
v_upperBounds_3774_ = l_List_mapTR_loop___redArg(v___f_3764_, v_upperBounds_3770_, v___x_3771_);
v___x_3775_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__0));
v___x_3776_ = l_Nat_reprFast(v_var_3767_);
v___x_3777_ = lean_string_append(v___x_3775_, v___x_3776_);
lean_dec_ref(v___x_3776_);
v___x_3778_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0));
v___x_3779_ = lean_string_append(v___x_3777_, v___x_3778_);
v___x_3780_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__1));
lean_inc_ref_n(v___f_3765_, 2);
v___x_3781_ = l_List_toString___redArg(v___f_3765_, v_irrelevant_3772_);
v___x_3782_ = lean_string_append(v___x_3780_, v___x_3781_);
lean_dec_ref(v___x_3781_);
v___x_3783_ = lean_string_append(v___x_3782_, v___x_3778_);
v___x_3784_ = lean_string_append(v___x_3779_, v___x_3783_);
lean_dec_ref(v___x_3783_);
v___x_3785_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__2));
v___x_3786_ = l_List_toString___redArg(v___f_3765_, v_lowerBounds_3773_);
v___x_3787_ = lean_string_append(v___x_3785_, v___x_3786_);
lean_dec_ref(v___x_3786_);
v___x_3788_ = lean_string_append(v___x_3787_, v___x_3778_);
v___x_3789_ = lean_string_append(v___x_3784_, v___x_3788_);
lean_dec_ref(v___x_3788_);
v___x_3790_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instToStringFourierMotzkinData___lam__2___closed__3));
v___x_3791_ = l_List_toString___redArg(v___f_3765_, v_upperBounds_3774_);
v___x_3792_ = lean_string_append(v___x_3790_, v___x_3791_);
lean_dec_ref(v___x_3791_);
v___x_3793_ = lean_string_append(v___x_3789_, v___x_3792_);
lean_dec_ref(v___x_3792_);
return v___x_3793_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_isEmpty(lean_object* v_d_3804_){
_start:
{
lean_object* v_lowerBounds_3805_; lean_object* v_upperBounds_3806_; uint8_t v___x_3807_; 
v_lowerBounds_3805_ = lean_ctor_get(v_d_3804_, 2);
v_upperBounds_3806_ = lean_ctor_get(v_d_3804_, 3);
v___x_3807_ = l_List_isEmpty___redArg(v_lowerBounds_3805_);
if (v___x_3807_ == 0)
{
return v___x_3807_;
}
else
{
uint8_t v___x_3808_; 
v___x_3808_ = l_List_isEmpty___redArg(v_upperBounds_3806_);
return v___x_3808_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_isEmpty___boxed(lean_object* v_d_3809_){
_start:
{
uint8_t v_res_3810_; lean_object* v_r_3811_; 
v_res_3810_ = l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_isEmpty(v_d_3809_);
lean_dec_ref(v_d_3809_);
v_r_3811_ = lean_box(v_res_3810_);
return v_r_3811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_size(lean_object* v_d_3812_){
_start:
{
lean_object* v_lowerBounds_3813_; lean_object* v_upperBounds_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; 
v_lowerBounds_3813_ = lean_ctor_get(v_d_3812_, 2);
v_upperBounds_3814_ = lean_ctor_get(v_d_3812_, 3);
v___x_3815_ = l_List_lengthTR___redArg(v_lowerBounds_3813_);
v___x_3816_ = l_List_lengthTR___redArg(v_upperBounds_3814_);
v___x_3817_ = lean_nat_mul(v___x_3815_, v___x_3816_);
lean_dec(v___x_3816_);
lean_dec(v___x_3815_);
return v___x_3817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_size___boxed(lean_object* v_d_3818_){
_start:
{
lean_object* v_res_3819_; 
v_res_3819_ = l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_size(v_d_3818_);
lean_dec_ref(v_d_3818_);
return v_res_3819_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_exact(lean_object* v_d_3820_){
_start:
{
uint8_t v_lowerExact_3821_; 
v_lowerExact_3821_ = lean_ctor_get_uint8(v_d_3820_, sizeof(void*)*4);
if (v_lowerExact_3821_ == 0)
{
uint8_t v_upperExact_3822_; 
v_upperExact_3822_ = lean_ctor_get_uint8(v_d_3820_, sizeof(void*)*4 + 1);
return v_upperExact_3822_;
}
else
{
return v_lowerExact_3821_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_exact___boxed(lean_object* v_d_3823_){
_start:
{
uint8_t v_res_3824_; lean_object* v_r_3825_; 
v_res_3824_ = l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_exact(v_d_3823_);
lean_dec_ref(v_d_3823_);
v_r_3825_ = lean_box(v_res_3824_);
return v_r_3825_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__2(lean_object* v_x_3826_, lean_object* v_x_3827_){
_start:
{
if (lean_obj_tag(v_x_3827_) == 0)
{
return v_x_3826_;
}
else
{
lean_object* v_head_3828_; lean_object* v_tail_3829_; lean_object* v___x_3830_; uint8_t v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; 
v_head_3828_ = lean_ctor_get(v_x_3827_, 0);
v_tail_3829_ = lean_ctor_get(v_x_3827_, 1);
v___x_3830_ = lean_box(0);
v___x_3831_ = 1;
lean_inc(v_head_3828_);
v___x_3832_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3832_, 0, v_head_3828_);
lean_ctor_set(v___x_3832_, 1, v___x_3830_);
lean_ctor_set(v___x_3832_, 2, v___x_3830_);
lean_ctor_set(v___x_3832_, 3, v___x_3830_);
lean_ctor_set_uint8(v___x_3832_, sizeof(void*)*4, v___x_3831_);
lean_ctor_set_uint8(v___x_3832_, sizeof(void*)*4 + 1, v___x_3831_);
v___x_3833_ = lean_array_push(v_x_3826_, v___x_3832_);
v_x_3826_ = v___x_3833_;
v_x_3827_ = v_tail_3829_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__2___boxed(lean_object* v_x_3835_, lean_object* v_x_3836_){
_start:
{
lean_object* v_res_3837_; 
v_res_3837_ = l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__2(v_x_3835_, v_x_3836_);
lean_dec(v_x_3836_);
return v_res_3837_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___lam__0(lean_object* v___x_3838_, lean_object* v_b_3839_, lean_object* v___x_3840_, uint8_t v___x_3841_, lean_object* v_____r_3842_, lean_object* v_d_x27_3843_){
_start:
{
lean_object* v_upperBound_3844_; lean_object* v___x_3846_; uint8_t v_isShared_3847_; uint8_t v_isSharedCheck_3871_; 
v_upperBound_3844_ = lean_ctor_get(v___x_3838_, 1);
v_isSharedCheck_3871_ = !lean_is_exclusive(v___x_3838_);
if (v_isSharedCheck_3871_ == 0)
{
lean_object* v_unused_3872_; 
v_unused_3872_ = lean_ctor_get(v___x_3838_, 0);
lean_dec(v_unused_3872_);
v___x_3846_ = v___x_3838_;
v_isShared_3847_ = v_isSharedCheck_3871_;
goto v_resetjp_3845_;
}
else
{
lean_inc(v_upperBound_3844_);
lean_dec(v___x_3838_);
v___x_3846_ = lean_box(0);
v_isShared_3847_ = v_isSharedCheck_3871_;
goto v_resetjp_3845_;
}
v_resetjp_3845_:
{
if (lean_obj_tag(v_upperBound_3844_) == 0)
{
lean_del_object(v___x_3846_);
lean_dec(v___x_3840_);
lean_dec_ref(v_b_3839_);
return v_d_x27_3843_;
}
else
{
lean_object* v_var_3848_; lean_object* v_irrelevant_3849_; lean_object* v_lowerBounds_3850_; lean_object* v_upperBounds_3851_; uint8_t v_lowerExact_3852_; uint8_t v_upperExact_3853_; lean_object* v___x_3855_; uint8_t v_isShared_3856_; uint8_t v_isSharedCheck_3870_; 
lean_dec_ref_known(v_upperBound_3844_, 1);
v_var_3848_ = lean_ctor_get(v_d_x27_3843_, 0);
v_irrelevant_3849_ = lean_ctor_get(v_d_x27_3843_, 1);
v_lowerBounds_3850_ = lean_ctor_get(v_d_x27_3843_, 2);
v_upperBounds_3851_ = lean_ctor_get(v_d_x27_3843_, 3);
v_lowerExact_3852_ = lean_ctor_get_uint8(v_d_x27_3843_, sizeof(void*)*4);
v_upperExact_3853_ = lean_ctor_get_uint8(v_d_x27_3843_, sizeof(void*)*4 + 1);
v_isSharedCheck_3870_ = !lean_is_exclusive(v_d_x27_3843_);
if (v_isSharedCheck_3870_ == 0)
{
v___x_3855_ = v_d_x27_3843_;
v_isShared_3856_ = v_isSharedCheck_3870_;
goto v_resetjp_3854_;
}
else
{
lean_inc(v_upperBounds_3851_);
lean_inc(v_lowerBounds_3850_);
lean_inc(v_irrelevant_3849_);
lean_inc(v_var_3848_);
lean_dec(v_d_x27_3843_);
v___x_3855_ = lean_box(0);
v_isShared_3856_ = v_isSharedCheck_3870_;
goto v_resetjp_3854_;
}
v_resetjp_3854_:
{
lean_object* v___x_3858_; 
lean_inc(v___x_3840_);
if (v_isShared_3847_ == 0)
{
lean_ctor_set(v___x_3846_, 1, v___x_3840_);
lean_ctor_set(v___x_3846_, 0, v_b_3839_);
v___x_3858_ = v___x_3846_;
goto v_reusejp_3857_;
}
else
{
lean_object* v_reuseFailAlloc_3869_; 
v_reuseFailAlloc_3869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3869_, 0, v_b_3839_);
lean_ctor_set(v_reuseFailAlloc_3869_, 1, v___x_3840_);
v___x_3858_ = v_reuseFailAlloc_3869_;
goto v_reusejp_3857_;
}
v_reusejp_3857_:
{
lean_object* v___x_3859_; 
v___x_3859_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3859_, 0, v___x_3858_);
lean_ctor_set(v___x_3859_, 1, v_upperBounds_3851_);
if (v_upperExact_3853_ == 0)
{
lean_object* v___x_3861_; 
lean_dec(v___x_3840_);
if (v_isShared_3856_ == 0)
{
lean_ctor_set(v___x_3855_, 3, v___x_3859_);
v___x_3861_ = v___x_3855_;
goto v_reusejp_3860_;
}
else
{
lean_object* v_reuseFailAlloc_3862_; 
v_reuseFailAlloc_3862_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_3862_, 0, v_var_3848_);
lean_ctor_set(v_reuseFailAlloc_3862_, 1, v_irrelevant_3849_);
lean_ctor_set(v_reuseFailAlloc_3862_, 2, v_lowerBounds_3850_);
lean_ctor_set(v_reuseFailAlloc_3862_, 3, v___x_3859_);
lean_ctor_set_uint8(v_reuseFailAlloc_3862_, sizeof(void*)*4, v_lowerExact_3852_);
v___x_3861_ = v_reuseFailAlloc_3862_;
goto v_reusejp_3860_;
}
v_reusejp_3860_:
{
lean_ctor_set_uint8(v___x_3861_, sizeof(void*)*4 + 1, v___x_3841_);
return v___x_3861_;
}
}
else
{
lean_object* v___x_3863_; lean_object* v___x_3864_; uint8_t v___x_3865_; lean_object* v___x_3867_; 
v___x_3863_ = lean_nat_abs(v___x_3840_);
lean_dec(v___x_3840_);
v___x_3864_ = lean_unsigned_to_nat(1u);
v___x_3865_ = lean_nat_dec_eq(v___x_3863_, v___x_3864_);
lean_dec(v___x_3863_);
if (v_isShared_3856_ == 0)
{
lean_ctor_set(v___x_3855_, 3, v___x_3859_);
v___x_3867_ = v___x_3855_;
goto v_reusejp_3866_;
}
else
{
lean_object* v_reuseFailAlloc_3868_; 
v_reuseFailAlloc_3868_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_3868_, 0, v_var_3848_);
lean_ctor_set(v_reuseFailAlloc_3868_, 1, v_irrelevant_3849_);
lean_ctor_set(v_reuseFailAlloc_3868_, 2, v_lowerBounds_3850_);
lean_ctor_set(v_reuseFailAlloc_3868_, 3, v___x_3859_);
lean_ctor_set_uint8(v_reuseFailAlloc_3868_, sizeof(void*)*4, v_lowerExact_3852_);
v___x_3867_ = v_reuseFailAlloc_3868_;
goto v_reusejp_3866_;
}
v_reusejp_3866_:
{
lean_ctor_set_uint8(v___x_3867_, sizeof(void*)*4 + 1, v___x_3865_);
return v___x_3867_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___lam__0___boxed(lean_object* v___x_3873_, lean_object* v_b_3874_, lean_object* v___x_3875_, lean_object* v___x_3876_, lean_object* v_____r_3877_, lean_object* v_d_x27_3878_){
_start:
{
uint8_t v___x_1967__boxed_3879_; lean_object* v_res_3880_; 
v___x_1967__boxed_3879_ = lean_unbox(v___x_3876_);
v_res_3880_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___lam__0(v___x_3873_, v_b_3874_, v___x_3875_, v___x_1967__boxed_3879_, v_____r_3877_, v_d_x27_3878_);
return v_res_3880_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_3881_; lean_object* v___x_3882_; 
v___x_3881_ = lean_box(0);
v___x_3882_ = l_unsafeCast___redArg(v___x_3881_);
return v___x_3882_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg(lean_object* v_upperBound_3883_, lean_object* v_coeffs_3884_, lean_object* v_constraint_3885_, lean_object* v_b_3886_, lean_object* v_a_3887_, lean_object* v_b_3888_){
_start:
{
lean_object* v_a_3890_; uint8_t v___x_3894_; 
v___x_3894_ = lean_nat_dec_lt(v_a_3887_, v_upperBound_3883_);
if (v___x_3894_ == 0)
{
lean_dec(v_a_3887_);
lean_dec_ref(v_b_3886_);
lean_dec_ref(v_constraint_3885_);
return v_b_3888_;
}
else
{
lean_object* v___x_3895_; uint8_t v___x_3896_; 
v___x_3895_ = lean_array_get_size(v_b_3888_);
v___x_3896_ = lean_nat_dec_lt(v_a_3887_, v___x_3895_);
if (v___x_3896_ == 0)
{
v_a_3890_ = v_b_3888_;
goto v___jp_3889_;
}
else
{
lean_object* v___x_3897_; lean_object* v_v_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v_xs_x27_3901_; lean_object* v___y_3903_; lean_object* v___x_3905_; uint8_t v___x_3906_; 
lean_inc(v_a_3887_);
v___x_3897_ = l_Lean_Omega_IntList_get(v_coeffs_3884_, v_a_3887_);
v_v_3898_ = lean_array_fget(v_b_3888_, v_a_3887_);
v___x_3899_ = lean_box(0);
v___x_3900_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___closed__0);
v_xs_x27_3901_ = lean_array_fset(v_b_3888_, v_a_3887_, v___x_3900_);
v___x_3905_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v___x_3906_ = lean_int_dec_eq(v___x_3897_, v___x_3905_);
if (v___x_3906_ == 0)
{
lean_object* v___x_3907_; lean_object* v_lowerBound_3908_; 
lean_inc_ref(v_constraint_3885_);
lean_inc(v___x_3897_);
v___x_3907_ = l_Lean_Omega_Constraint_scale(v___x_3897_, v_constraint_3885_);
v_lowerBound_3908_ = lean_ctor_get(v___x_3907_, 0);
lean_inc(v_lowerBound_3908_);
if (lean_obj_tag(v_lowerBound_3908_) == 0)
{
lean_object* v___x_3909_; 
lean_inc_ref(v_b_3886_);
v___x_3909_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___lam__0(v___x_3907_, v_b_3886_, v___x_3897_, v___x_3906_, v___x_3899_, v_v_3898_);
v___y_3903_ = v___x_3909_;
goto v___jp_3902_;
}
else
{
lean_object* v_var_3910_; lean_object* v_irrelevant_3911_; lean_object* v_lowerBounds_3912_; lean_object* v_upperBounds_3913_; uint8_t v_lowerExact_3914_; uint8_t v_upperExact_3915_; lean_object* v___x_3917_; uint8_t v_isShared_3918_; uint8_t v_isSharedCheck_3930_; 
lean_dec_ref_known(v_lowerBound_3908_, 1);
v_var_3910_ = lean_ctor_get(v_v_3898_, 0);
v_irrelevant_3911_ = lean_ctor_get(v_v_3898_, 1);
v_lowerBounds_3912_ = lean_ctor_get(v_v_3898_, 2);
v_upperBounds_3913_ = lean_ctor_get(v_v_3898_, 3);
v_lowerExact_3914_ = lean_ctor_get_uint8(v_v_3898_, sizeof(void*)*4);
v_upperExact_3915_ = lean_ctor_get_uint8(v_v_3898_, sizeof(void*)*4 + 1);
v_isSharedCheck_3930_ = !lean_is_exclusive(v_v_3898_);
if (v_isSharedCheck_3930_ == 0)
{
v___x_3917_ = v_v_3898_;
v_isShared_3918_ = v_isSharedCheck_3930_;
goto v_resetjp_3916_;
}
else
{
lean_inc(v_upperBounds_3913_);
lean_inc(v_lowerBounds_3912_);
lean_inc(v_irrelevant_3911_);
lean_inc(v_var_3910_);
lean_dec(v_v_3898_);
v___x_3917_ = lean_box(0);
v_isShared_3918_ = v_isSharedCheck_3930_;
goto v_resetjp_3916_;
}
v_resetjp_3916_:
{
lean_object* v___x_3919_; lean_object* v___x_3920_; uint8_t v___y_3922_; 
lean_inc(v___x_3897_);
lean_inc_ref(v_b_3886_);
v___x_3919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3919_, 0, v_b_3886_);
lean_ctor_set(v___x_3919_, 1, v___x_3897_);
v___x_3920_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3920_, 0, v___x_3919_);
lean_ctor_set(v___x_3920_, 1, v_lowerBounds_3912_);
if (v_lowerExact_3914_ == 0)
{
v___y_3922_ = v___x_3906_;
goto v___jp_3921_;
}
else
{
lean_object* v___x_3927_; lean_object* v___x_3928_; uint8_t v___x_3929_; 
v___x_3927_ = lean_nat_abs(v___x_3897_);
v___x_3928_ = lean_unsigned_to_nat(1u);
v___x_3929_ = lean_nat_dec_eq(v___x_3927_, v___x_3928_);
lean_dec(v___x_3927_);
v___y_3922_ = v___x_3929_;
goto v___jp_3921_;
}
v___jp_3921_:
{
lean_object* v___x_3924_; 
if (v_isShared_3918_ == 0)
{
lean_ctor_set(v___x_3917_, 2, v___x_3920_);
v___x_3924_ = v___x_3917_;
goto v_reusejp_3923_;
}
else
{
lean_object* v_reuseFailAlloc_3926_; 
v_reuseFailAlloc_3926_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_3926_, 0, v_var_3910_);
lean_ctor_set(v_reuseFailAlloc_3926_, 1, v_irrelevant_3911_);
lean_ctor_set(v_reuseFailAlloc_3926_, 2, v___x_3920_);
lean_ctor_set(v_reuseFailAlloc_3926_, 3, v_upperBounds_3913_);
lean_ctor_set_uint8(v_reuseFailAlloc_3926_, sizeof(void*)*4 + 1, v_upperExact_3915_);
v___x_3924_ = v_reuseFailAlloc_3926_;
goto v_reusejp_3923_;
}
v_reusejp_3923_:
{
lean_object* v___x_3925_; 
lean_ctor_set_uint8(v___x_3924_, sizeof(void*)*4, v___y_3922_);
lean_inc_ref(v_b_3886_);
v___x_3925_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___lam__0(v___x_3907_, v_b_3886_, v___x_3897_, v___x_3906_, v___x_3899_, v___x_3924_);
v___y_3903_ = v___x_3925_;
goto v___jp_3902_;
}
}
}
}
}
else
{
lean_object* v_var_3931_; lean_object* v_irrelevant_3932_; lean_object* v_lowerBounds_3933_; lean_object* v_upperBounds_3934_; uint8_t v_lowerExact_3935_; uint8_t v_upperExact_3936_; lean_object* v___x_3938_; uint8_t v_isShared_3939_; uint8_t v_isSharedCheck_3944_; 
lean_dec(v___x_3897_);
v_var_3931_ = lean_ctor_get(v_v_3898_, 0);
v_irrelevant_3932_ = lean_ctor_get(v_v_3898_, 1);
v_lowerBounds_3933_ = lean_ctor_get(v_v_3898_, 2);
v_upperBounds_3934_ = lean_ctor_get(v_v_3898_, 3);
v_lowerExact_3935_ = lean_ctor_get_uint8(v_v_3898_, sizeof(void*)*4);
v_upperExact_3936_ = lean_ctor_get_uint8(v_v_3898_, sizeof(void*)*4 + 1);
v_isSharedCheck_3944_ = !lean_is_exclusive(v_v_3898_);
if (v_isSharedCheck_3944_ == 0)
{
v___x_3938_ = v_v_3898_;
v_isShared_3939_ = v_isSharedCheck_3944_;
goto v_resetjp_3937_;
}
else
{
lean_inc(v_upperBounds_3934_);
lean_inc(v_lowerBounds_3933_);
lean_inc(v_irrelevant_3932_);
lean_inc(v_var_3931_);
lean_dec(v_v_3898_);
v___x_3938_ = lean_box(0);
v_isShared_3939_ = v_isSharedCheck_3944_;
goto v_resetjp_3937_;
}
v_resetjp_3937_:
{
lean_object* v___x_3940_; lean_object* v___x_3942_; 
lean_inc_ref(v_b_3886_);
v___x_3940_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3940_, 0, v_b_3886_);
lean_ctor_set(v___x_3940_, 1, v_irrelevant_3932_);
if (v_isShared_3939_ == 0)
{
lean_ctor_set(v___x_3938_, 1, v___x_3940_);
v___x_3942_ = v___x_3938_;
goto v_reusejp_3941_;
}
else
{
lean_object* v_reuseFailAlloc_3943_; 
v_reuseFailAlloc_3943_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v_reuseFailAlloc_3943_, 0, v_var_3931_);
lean_ctor_set(v_reuseFailAlloc_3943_, 1, v___x_3940_);
lean_ctor_set(v_reuseFailAlloc_3943_, 2, v_lowerBounds_3933_);
lean_ctor_set(v_reuseFailAlloc_3943_, 3, v_upperBounds_3934_);
lean_ctor_set_uint8(v_reuseFailAlloc_3943_, sizeof(void*)*4, v_lowerExact_3935_);
lean_ctor_set_uint8(v_reuseFailAlloc_3943_, sizeof(void*)*4 + 1, v_upperExact_3936_);
v___x_3942_ = v_reuseFailAlloc_3943_;
goto v_reusejp_3941_;
}
v_reusejp_3941_:
{
v___y_3903_ = v___x_3942_;
goto v___jp_3902_;
}
}
}
v___jp_3902_:
{
lean_object* v___x_3904_; 
v___x_3904_ = lean_array_fset(v_xs_x27_3901_, v_a_3887_, v___y_3903_);
v_a_3890_ = v___x_3904_;
goto v___jp_3889_;
}
}
}
v___jp_3889_:
{
lean_object* v___x_3891_; lean_object* v___x_3892_; 
v___x_3891_ = lean_unsigned_to_nat(1u);
v___x_3892_ = lean_nat_add(v_a_3887_, v___x_3891_);
lean_dec(v_a_3887_);
v_a_3887_ = v___x_3892_;
v_b_3888_ = v_a_3890_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg___boxed(lean_object* v_upperBound_3945_, lean_object* v_coeffs_3946_, lean_object* v_constraint_3947_, lean_object* v_b_3948_, lean_object* v_a_3949_, lean_object* v_b_3950_){
_start:
{
lean_object* v_res_3951_; 
v_res_3951_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg(v_upperBound_3945_, v_coeffs_3946_, v_constraint_3947_, v_b_3948_, v_a_3949_, v_b_3950_);
lean_dec(v_coeffs_3946_);
lean_dec(v_upperBound_3945_);
return v_res_3951_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__1(lean_object* v_n_3952_, lean_object* v_a_3953_, lean_object* v_a_3954_){
_start:
{
if (lean_obj_tag(v_a_3953_) == 0)
{
lean_object* v___x_3955_; 
v___x_3955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3955_, 0, v_a_3954_);
return v___x_3955_;
}
else
{
lean_object* v_value_3956_; lean_object* v_tail_3957_; lean_object* v_coeffs_3958_; lean_object* v_constraint_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; 
v_value_3956_ = lean_ctor_get(v_a_3953_, 1);
lean_inc(v_value_3956_);
v_tail_3957_ = lean_ctor_get(v_a_3953_, 2);
lean_inc(v_tail_3957_);
lean_dec_ref_known(v_a_3953_, 3);
v_coeffs_3958_ = lean_ctor_get(v_value_3956_, 0);
lean_inc(v_coeffs_3958_);
v_constraint_3959_ = lean_ctor_get(v_value_3956_, 1);
lean_inc_ref(v_constraint_3959_);
v___x_3960_ = lean_unsigned_to_nat(0u);
v___x_3961_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg(v_n_3952_, v_coeffs_3958_, v_constraint_3959_, v_value_3956_, v___x_3960_, v_a_3954_);
lean_dec(v_coeffs_3958_);
v_a_3953_ = v_tail_3957_;
v_a_3954_ = v___x_3961_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__1___boxed(lean_object* v_n_3963_, lean_object* v_a_3964_, lean_object* v_a_3965_){
_start:
{
lean_object* v_res_3966_; 
v_res_3966_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__1(v_n_3963_, v_a_3964_, v_a_3965_);
lean_dec(v_n_3963_);
return v_res_3966_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__3(lean_object* v_n_3967_, lean_object* v_as_3968_, size_t v_sz_3969_, size_t v_i_3970_, lean_object* v_b_3971_){
_start:
{
uint8_t v___x_3972_; 
v___x_3972_ = lean_usize_dec_lt(v_i_3970_, v_sz_3969_);
if (v___x_3972_ == 0)
{
return v_b_3971_;
}
else
{
lean_object* v_a_3973_; lean_object* v___x_3974_; 
v_a_3973_ = lean_array_uget_borrowed(v_as_3968_, v_i_3970_);
lean_inc(v_a_3973_);
v___x_3974_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__1(v_n_3967_, v_a_3973_, v_b_3971_);
if (lean_obj_tag(v___x_3974_) == 0)
{
lean_object* v_a_3975_; 
v_a_3975_ = lean_ctor_get(v___x_3974_, 0);
lean_inc(v_a_3975_);
lean_dec_ref_known(v___x_3974_, 1);
return v_a_3975_;
}
else
{
lean_object* v_a_3976_; size_t v___x_3977_; size_t v___x_3978_; 
v_a_3976_ = lean_ctor_get(v___x_3974_, 0);
lean_inc(v_a_3976_);
lean_dec_ref_known(v___x_3974_, 1);
v___x_3977_ = ((size_t)1ULL);
v___x_3978_ = lean_usize_add(v_i_3970_, v___x_3977_);
v_i_3970_ = v___x_3978_;
v_b_3971_ = v_a_3976_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__3___boxed(lean_object* v_n_3980_, lean_object* v_as_3981_, lean_object* v_sz_3982_, lean_object* v_i_3983_, lean_object* v_b_3984_){
_start:
{
size_t v_sz_boxed_3985_; size_t v_i_boxed_3986_; lean_object* v_res_3987_; 
v_sz_boxed_3985_ = lean_unbox_usize(v_sz_3982_);
lean_dec(v_sz_3982_);
v_i_boxed_3986_ = lean_unbox_usize(v_i_3983_);
lean_dec(v_i_3983_);
v_res_3987_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__3(v_n_3980_, v_as_3981_, v_sz_boxed_3985_, v_i_boxed_3986_, v_b_3984_);
lean_dec_ref(v_as_3981_);
lean_dec(v_n_3980_);
return v_res_3987_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData(lean_object* v_p_3990_){
_start:
{
lean_object* v_constraints_3991_; lean_object* v_numVars_3992_; lean_object* v_buckets_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v_data_3996_; size_t v_sz_3997_; size_t v___x_3998_; lean_object* v___x_3999_; 
v_constraints_3991_ = lean_ctor_get(v_p_3990_, 2);
lean_inc_ref(v_constraints_3991_);
v_numVars_3992_ = lean_ctor_get(v_p_3990_, 1);
lean_inc_n(v_numVars_3992_, 2);
lean_dec_ref(v_p_3990_);
v_buckets_3993_ = lean_ctor_get(v_constraints_3991_, 1);
lean_inc_ref(v_buckets_3993_);
lean_dec_ref(v_constraints_3991_);
v___x_3994_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData___closed__0));
v___x_3995_ = l_List_range(v_numVars_3992_);
v_data_3996_ = l_List_foldl___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__2(v___x_3994_, v___x_3995_);
lean_dec(v___x_3995_);
v_sz_3997_ = lean_array_size(v_buckets_3993_);
v___x_3998_ = ((size_t)0ULL);
v___x_3999_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__3(v_numVars_3992_, v_buckets_3993_, v_sz_3997_, v___x_3998_, v_data_3996_);
lean_dec_ref(v_buckets_3993_);
lean_dec(v_numVars_3992_);
return v___x_3999_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0(lean_object* v_upperBound_4000_, lean_object* v_coeffs_4001_, lean_object* v_constraint_4002_, lean_object* v_b_4003_, lean_object* v_inst_4004_, lean_object* v_R_4005_, lean_object* v_a_4006_, lean_object* v_b_4007_, lean_object* v_c_4008_){
_start:
{
lean_object* v___x_4009_; 
v___x_4009_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___redArg(v_upperBound_4000_, v_coeffs_4001_, v_constraint_4002_, v_b_4003_, v_a_4006_, v_b_4007_);
return v___x_4009_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0___boxed(lean_object* v_upperBound_4010_, lean_object* v_coeffs_4011_, lean_object* v_constraint_4012_, lean_object* v_b_4013_, lean_object* v_inst_4014_, lean_object* v_R_4015_, lean_object* v_a_4016_, lean_object* v_b_4017_, lean_object* v_c_4018_){
_start:
{
lean_object* v_res_4019_; 
v_res_4019_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData_spec__0(v_upperBound_4010_, v_coeffs_4011_, v_constraint_4012_, v_b_4013_, v_inst_4014_, v_R_4015_, v_a_4016_, v_b_4017_, v_c_4018_);
lean_dec(v_coeffs_4011_);
lean_dec(v_upperBound_4010_);
return v_res_4019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0(lean_object* v_cls_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_){
_start:
{
lean_object* v_toCold_4029_; lean_object* v_options_4030_; uint8_t v_hasTrace_4031_; 
v_toCold_4029_ = lean_ctor_get(v___y_4026_, 0);
v_options_4030_ = lean_ctor_get(v_toCold_4029_, 2);
v_hasTrace_4031_ = lean_ctor_get_uint8(v_options_4030_, sizeof(void*)*1);
if (v_hasTrace_4031_ == 0)
{
lean_object* v___x_4032_; lean_object* v___x_4033_; 
lean_dec(v_cls_4023_);
v___x_4032_ = lean_box(v_hasTrace_4031_);
v___x_4033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4033_, 0, v___x_4032_);
return v___x_4033_;
}
else
{
lean_object* v_inheritedTraceOptions_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; uint8_t v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; 
v_inheritedTraceOptions_4034_ = lean_ctor_get(v_toCold_4029_, 11);
v___x_4035_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___closed__1));
v___x_4036_ = l_Lean_Name_append(v___x_4035_, v_cls_4023_);
v___x_4037_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4034_, v_options_4030_, v___x_4036_);
lean_dec(v___x_4036_);
v___x_4038_ = lean_box(v___x_4037_);
v___x_4039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4039_, 0, v___x_4038_);
return v___x_4039_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___boxed(lean_object* v_cls_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_){
_start:
{
lean_object* v_res_4046_; 
v_res_4046_ = l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0(v_cls_4040_, v___y_4041_, v___y_4042_, v___y_4043_, v___y_4044_);
lean_dec(v___y_4044_);
lean_dec_ref(v___y_4043_);
lean_dec(v___y_4042_);
lean_dec_ref(v___y_4041_);
return v_res_4046_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___lam__0(lean_object* v___x_4047_, lean_object* v_fst_4048_, lean_object* v_snd_4049_, lean_object* v_fst_4050_, lean_object* v_____r_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_){
_start:
{
lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; 
v___x_4057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4057_, 0, v___x_4047_);
v___x_4058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4058_, 0, v_fst_4048_);
lean_ctor_set(v___x_4058_, 1, v_snd_4049_);
v___x_4059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4059_, 0, v_fst_4050_);
lean_ctor_set(v___x_4059_, 1, v___x_4058_);
v___x_4060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4060_, 0, v___x_4057_);
lean_ctor_set(v___x_4060_, 1, v___x_4059_);
v___x_4061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4061_, 0, v___x_4060_);
v___x_4062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4062_, 0, v___x_4061_);
return v___x_4062_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___lam__0___boxed(lean_object* v___x_4063_, lean_object* v_fst_4064_, lean_object* v_snd_4065_, lean_object* v_fst_4066_, lean_object* v_____r_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_){
_start:
{
lean_object* v_res_4073_; 
v_res_4073_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___lam__0(v___x_4063_, v_fst_4064_, v_snd_4065_, v_fst_4066_, v_____r_4067_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_);
lean_dec(v___y_4071_);
lean_dec_ref(v___y_4070_);
lean_dec(v___y_4069_);
lean_dec_ref(v___y_4068_);
return v_res_4073_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__0(void){
_start:
{
lean_object* v___x_4074_; double v___x_4075_; 
v___x_4074_ = lean_unsigned_to_nat(0u);
v___x_4075_ = lean_float_of_nat(v___x_4074_);
return v___x_4075_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0(lean_object* v_cls_4078_, lean_object* v_msg_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_){
_start:
{
lean_object* v_ref_4085_; lean_object* v___x_4086_; lean_object* v_a_4087_; lean_object* v___x_4089_; uint8_t v_isShared_4090_; uint8_t v_isSharedCheck_4131_; 
v_ref_4085_ = lean_ctor_get(v___y_4082_, 2);
v___x_4086_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0_spec__0(v_msg_4079_, v___y_4080_, v___y_4081_, v___y_4082_, v___y_4083_);
v_a_4087_ = lean_ctor_get(v___x_4086_, 0);
v_isSharedCheck_4131_ = !lean_is_exclusive(v___x_4086_);
if (v_isSharedCheck_4131_ == 0)
{
v___x_4089_ = v___x_4086_;
v_isShared_4090_ = v_isSharedCheck_4131_;
goto v_resetjp_4088_;
}
else
{
lean_inc(v_a_4087_);
lean_dec(v___x_4086_);
v___x_4089_ = lean_box(0);
v_isShared_4090_ = v_isSharedCheck_4131_;
goto v_resetjp_4088_;
}
v_resetjp_4088_:
{
lean_object* v___x_4091_; lean_object* v_traceState_4092_; lean_object* v_env_4093_; lean_object* v_nextMacroScope_4094_; lean_object* v_ngen_4095_; lean_object* v_auxDeclNGen_4096_; lean_object* v_cache_4097_; lean_object* v_messages_4098_; lean_object* v_infoState_4099_; lean_object* v_snapshotTasks_4100_; lean_object* v___x_4102_; uint8_t v_isShared_4103_; uint8_t v_isSharedCheck_4130_; 
v___x_4091_ = lean_st_ref_take(v___y_4083_);
v_traceState_4092_ = lean_ctor_get(v___x_4091_, 4);
v_env_4093_ = lean_ctor_get(v___x_4091_, 0);
v_nextMacroScope_4094_ = lean_ctor_get(v___x_4091_, 1);
v_ngen_4095_ = lean_ctor_get(v___x_4091_, 2);
v_auxDeclNGen_4096_ = lean_ctor_get(v___x_4091_, 3);
v_cache_4097_ = lean_ctor_get(v___x_4091_, 5);
v_messages_4098_ = lean_ctor_get(v___x_4091_, 6);
v_infoState_4099_ = lean_ctor_get(v___x_4091_, 7);
v_snapshotTasks_4100_ = lean_ctor_get(v___x_4091_, 8);
v_isSharedCheck_4130_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4130_ == 0)
{
v___x_4102_ = v___x_4091_;
v_isShared_4103_ = v_isSharedCheck_4130_;
goto v_resetjp_4101_;
}
else
{
lean_inc(v_snapshotTasks_4100_);
lean_inc(v_infoState_4099_);
lean_inc(v_messages_4098_);
lean_inc(v_cache_4097_);
lean_inc(v_traceState_4092_);
lean_inc(v_auxDeclNGen_4096_);
lean_inc(v_ngen_4095_);
lean_inc(v_nextMacroScope_4094_);
lean_inc(v_env_4093_);
lean_dec(v___x_4091_);
v___x_4102_ = lean_box(0);
v_isShared_4103_ = v_isSharedCheck_4130_;
goto v_resetjp_4101_;
}
v_resetjp_4101_:
{
uint64_t v_tid_4104_; lean_object* v_traces_4105_; lean_object* v___x_4107_; uint8_t v_isShared_4108_; uint8_t v_isSharedCheck_4129_; 
v_tid_4104_ = lean_ctor_get_uint64(v_traceState_4092_, sizeof(void*)*1);
v_traces_4105_ = lean_ctor_get(v_traceState_4092_, 0);
v_isSharedCheck_4129_ = !lean_is_exclusive(v_traceState_4092_);
if (v_isSharedCheck_4129_ == 0)
{
v___x_4107_ = v_traceState_4092_;
v_isShared_4108_ = v_isSharedCheck_4129_;
goto v_resetjp_4106_;
}
else
{
lean_inc(v_traces_4105_);
lean_dec(v_traceState_4092_);
v___x_4107_ = lean_box(0);
v_isShared_4108_ = v_isSharedCheck_4129_;
goto v_resetjp_4106_;
}
v_resetjp_4106_:
{
lean_object* v___x_4109_; lean_object* v___x_4110_; double v___x_4111_; uint8_t v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4120_; 
v___x_4109_ = lean_box(0);
v___x_4110_ = lean_box(0);
v___x_4111_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__0);
v___x_4112_ = 0;
v___x_4113_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__1));
v___x_4114_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4114_, 0, v_cls_4078_);
lean_ctor_set(v___x_4114_, 1, v___x_4110_);
lean_ctor_set(v___x_4114_, 2, v___x_4113_);
lean_ctor_set_float(v___x_4114_, sizeof(void*)*3, v___x_4111_);
lean_ctor_set_float(v___x_4114_, sizeof(void*)*3 + 8, v___x_4111_);
lean_ctor_set_uint8(v___x_4114_, sizeof(void*)*3 + 16, v___x_4112_);
v___x_4115_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__1));
v___x_4116_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4116_, 0, v___x_4114_);
lean_ctor_set(v___x_4116_, 1, v_a_4087_);
lean_ctor_set(v___x_4116_, 2, v___x_4115_);
lean_inc(v_ref_4085_);
v___x_4117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4117_, 0, v_ref_4085_);
lean_ctor_set(v___x_4117_, 1, v___x_4116_);
v___x_4118_ = l_Lean_PersistentArray_push___redArg(v_traces_4105_, v___x_4117_);
if (v_isShared_4108_ == 0)
{
lean_ctor_set(v___x_4107_, 0, v___x_4118_);
v___x_4120_ = v___x_4107_;
goto v_reusejp_4119_;
}
else
{
lean_object* v_reuseFailAlloc_4128_; 
v_reuseFailAlloc_4128_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4128_, 0, v___x_4118_);
lean_ctor_set_uint64(v_reuseFailAlloc_4128_, sizeof(void*)*1, v_tid_4104_);
v___x_4120_ = v_reuseFailAlloc_4128_;
goto v_reusejp_4119_;
}
v_reusejp_4119_:
{
lean_object* v___x_4122_; 
if (v_isShared_4103_ == 0)
{
lean_ctor_set(v___x_4102_, 4, v___x_4120_);
v___x_4122_ = v___x_4102_;
goto v_reusejp_4121_;
}
else
{
lean_object* v_reuseFailAlloc_4127_; 
v_reuseFailAlloc_4127_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4127_, 0, v_env_4093_);
lean_ctor_set(v_reuseFailAlloc_4127_, 1, v_nextMacroScope_4094_);
lean_ctor_set(v_reuseFailAlloc_4127_, 2, v_ngen_4095_);
lean_ctor_set(v_reuseFailAlloc_4127_, 3, v_auxDeclNGen_4096_);
lean_ctor_set(v_reuseFailAlloc_4127_, 4, v___x_4120_);
lean_ctor_set(v_reuseFailAlloc_4127_, 5, v_cache_4097_);
lean_ctor_set(v_reuseFailAlloc_4127_, 6, v_messages_4098_);
lean_ctor_set(v_reuseFailAlloc_4127_, 7, v_infoState_4099_);
lean_ctor_set(v_reuseFailAlloc_4127_, 8, v_snapshotTasks_4100_);
v___x_4122_ = v_reuseFailAlloc_4127_;
goto v_reusejp_4121_;
}
v_reusejp_4121_:
{
lean_object* v___x_4123_; lean_object* v___x_4125_; 
v___x_4123_ = lean_st_ref_put(v___y_4083_, v___x_4122_);
if (v_isShared_4090_ == 0)
{
lean_ctor_set(v___x_4089_, 0, v___x_4109_);
v___x_4125_ = v___x_4089_;
goto v_reusejp_4124_;
}
else
{
lean_object* v_reuseFailAlloc_4126_; 
v_reuseFailAlloc_4126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4126_, 0, v___x_4109_);
v___x_4125_ = v_reuseFailAlloc_4126_;
goto v_reusejp_4124_;
}
v_reusejp_4124_:
{
return v___x_4125_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___boxed(lean_object* v_cls_4132_, lean_object* v_msg_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_){
_start:
{
lean_object* v_res_4139_; 
v_res_4139_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0(v_cls_4132_, v_msg_4133_, v___y_4134_, v___y_4135_, v___y_4136_, v___y_4137_);
lean_dec(v___y_4137_);
lean_dec_ref(v___y_4136_);
lean_dec(v___y_4135_);
lean_dec_ref(v___y_4134_);
return v_res_4139_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v_cls_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; 
v_cls_4140_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__1_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_4141_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0___closed__1));
v___x_4142_ = l_Lean_Name_append(v___x_4141_, v_cls_4140_);
return v___x_4142_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_4144_; lean_object* v___x_4145_; 
v___x_4144_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__1));
v___x_4145_ = l_Lean_stringToMessageData(v___x_4144_);
return v___x_4145_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg(lean_object* v_upperBound_4146_, lean_object* v___y_4147_, lean_object* v_a_4148_, lean_object* v_b_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_){
_start:
{
lean_object* v_a_4156_; lean_object* v___y_4161_; uint8_t v___x_4180_; 
v___x_4180_ = lean_nat_dec_lt(v_a_4148_, v_upperBound_4146_);
if (v___x_4180_ == 0)
{
lean_object* v___x_4181_; 
lean_dec(v_a_4148_);
v___x_4181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4181_, 0, v_b_4149_);
return v___x_4181_;
}
else
{
lean_object* v_snd_4182_; lean_object* v___x_4184_; uint8_t v_isShared_4185_; uint8_t v_isSharedCheck_4253_; 
v_snd_4182_ = lean_ctor_get(v_b_4149_, 1);
v_isSharedCheck_4253_ = !lean_is_exclusive(v_b_4149_);
if (v_isSharedCheck_4253_ == 0)
{
lean_object* v_unused_4254_; 
v_unused_4254_ = lean_ctor_get(v_b_4149_, 0);
lean_dec(v_unused_4254_);
v___x_4184_ = v_b_4149_;
v_isShared_4185_ = v_isSharedCheck_4253_;
goto v_resetjp_4183_;
}
else
{
lean_inc(v_snd_4182_);
lean_dec(v_b_4149_);
v___x_4184_ = lean_box(0);
v_isShared_4185_ = v_isSharedCheck_4253_;
goto v_resetjp_4183_;
}
v_resetjp_4183_:
{
lean_object* v_snd_4186_; lean_object* v_fst_4187_; lean_object* v___x_4189_; uint8_t v_isShared_4190_; uint8_t v_isSharedCheck_4252_; 
v_snd_4186_ = lean_ctor_get(v_snd_4182_, 1);
v_fst_4187_ = lean_ctor_get(v_snd_4182_, 0);
v_isSharedCheck_4252_ = !lean_is_exclusive(v_snd_4182_);
if (v_isSharedCheck_4252_ == 0)
{
v___x_4189_ = v_snd_4182_;
v_isShared_4190_ = v_isSharedCheck_4252_;
goto v_resetjp_4188_;
}
else
{
lean_inc(v_snd_4186_);
lean_inc(v_fst_4187_);
lean_dec(v_snd_4182_);
v___x_4189_ = lean_box(0);
v_isShared_4190_ = v_isSharedCheck_4252_;
goto v_resetjp_4188_;
}
v_resetjp_4188_:
{
lean_object* v_fst_4191_; lean_object* v_snd_4192_; lean_object* v___x_4194_; uint8_t v_isShared_4195_; uint8_t v_isSharedCheck_4251_; 
v_fst_4191_ = lean_ctor_get(v_snd_4186_, 0);
v_snd_4192_ = lean_ctor_get(v_snd_4186_, 1);
v_isSharedCheck_4251_ = !lean_is_exclusive(v_snd_4186_);
if (v_isSharedCheck_4251_ == 0)
{
v___x_4194_ = v_snd_4186_;
v_isShared_4195_ = v_isSharedCheck_4251_;
goto v_resetjp_4193_;
}
else
{
lean_inc(v_snd_4192_);
lean_inc(v_fst_4191_);
lean_dec(v_snd_4186_);
v___x_4194_ = lean_box(0);
v_isShared_4195_ = v_isSharedCheck_4251_;
goto v_resetjp_4193_;
}
v_resetjp_4193_:
{
lean_object* v___x_4196_; lean_object* v_bestIdx_4207_; lean_object* v_cls_4208_; lean_object* v___x_4209_; uint8_t v___x_4213_; lean_object* v___x_4214_; uint8_t v___x_4215_; uint8_t v___y_4245_; 
v___x_4196_ = lean_box(0);
v_bestIdx_4207_ = lean_unsigned_to_nat(0u);
v_cls_4208_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__1_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_4209_ = lean_array_fget_borrowed(v___y_4147_, v_a_4148_);
v___x_4213_ = l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_exact(v___x_4209_);
v___x_4214_ = l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_size(v___x_4209_);
v___x_4215_ = lean_nat_dec_eq(v___x_4214_, v_bestIdx_4207_);
if (v___x_4215_ == 0)
{
uint8_t v___x_4250_; 
v___x_4250_ = lean_unbox(v_snd_4192_);
if (v___x_4250_ == 0)
{
if (v___x_4213_ == 0)
{
goto v___jp_4247_;
}
else
{
lean_del_object(v___x_4194_);
lean_del_object(v___x_4189_);
lean_del_object(v___x_4184_);
goto v___jp_4216_;
}
}
else
{
goto v___jp_4247_;
}
}
else
{
lean_del_object(v___x_4194_);
lean_del_object(v___x_4189_);
lean_del_object(v___x_4184_);
goto v___jp_4216_;
}
v___jp_4197_:
{
lean_object* v___x_4199_; 
if (v_isShared_4195_ == 0)
{
v___x_4199_ = v___x_4194_;
goto v_reusejp_4198_;
}
else
{
lean_object* v_reuseFailAlloc_4206_; 
v_reuseFailAlloc_4206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4206_, 0, v_fst_4191_);
lean_ctor_set(v_reuseFailAlloc_4206_, 1, v_snd_4192_);
v___x_4199_ = v_reuseFailAlloc_4206_;
goto v_reusejp_4198_;
}
v_reusejp_4198_:
{
lean_object* v___x_4201_; 
if (v_isShared_4190_ == 0)
{
lean_ctor_set(v___x_4189_, 1, v___x_4199_);
v___x_4201_ = v___x_4189_;
goto v_reusejp_4200_;
}
else
{
lean_object* v_reuseFailAlloc_4205_; 
v_reuseFailAlloc_4205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4205_, 0, v_fst_4187_);
lean_ctor_set(v_reuseFailAlloc_4205_, 1, v___x_4199_);
v___x_4201_ = v_reuseFailAlloc_4205_;
goto v_reusejp_4200_;
}
v_reusejp_4200_:
{
lean_object* v___x_4203_; 
if (v_isShared_4185_ == 0)
{
lean_ctor_set(v___x_4184_, 1, v___x_4201_);
lean_ctor_set(v___x_4184_, 0, v___x_4196_);
v___x_4203_ = v___x_4184_;
goto v_reusejp_4202_;
}
else
{
lean_object* v_reuseFailAlloc_4204_; 
v_reuseFailAlloc_4204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4204_, 0, v___x_4196_);
lean_ctor_set(v_reuseFailAlloc_4204_, 1, v___x_4201_);
v___x_4203_ = v_reuseFailAlloc_4204_;
goto v_reusejp_4202_;
}
v_reusejp_4202_:
{
v_a_4156_ = v___x_4203_;
goto v___jp_4155_;
}
}
}
}
v___jp_4210_:
{
lean_object* v___x_4211_; lean_object* v___x_4212_; 
v___x_4211_ = lean_box(0);
lean_inc(v___x_4209_);
v___x_4212_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___lam__0(v___x_4209_, v_fst_4191_, v_snd_4192_, v_fst_4187_, v___x_4211_, v___y_4150_, v___y_4151_, v___y_4152_, v___y_4153_);
v___y_4161_ = v___x_4212_;
goto v___jp_4160_;
}
v___jp_4216_:
{
if (v___x_4215_ == 0)
{
lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; 
lean_dec(v_snd_4192_);
lean_dec(v_fst_4191_);
lean_dec(v_fst_4187_);
v___x_4217_ = lean_box(v___x_4213_);
v___x_4218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4218_, 0, v___x_4214_);
lean_ctor_set(v___x_4218_, 1, v___x_4217_);
lean_inc(v_a_4148_);
v___x_4219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4219_, 0, v_a_4148_);
lean_ctor_set(v___x_4219_, 1, v___x_4218_);
v___x_4220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4220_, 0, v___x_4196_);
lean_ctor_set(v___x_4220_, 1, v___x_4219_);
v_a_4156_ = v___x_4220_;
goto v___jp_4155_;
}
else
{
lean_object* v_toCold_4221_; lean_object* v_options_4222_; uint8_t v_hasTrace_4223_; 
lean_dec(v___x_4214_);
v_toCold_4221_ = lean_ctor_get(v___y_4152_, 0);
v_options_4222_ = lean_ctor_get(v_toCold_4221_, 2);
v_hasTrace_4223_ = lean_ctor_get_uint8(v_options_4222_, sizeof(void*)*1);
if (v_hasTrace_4223_ == 0)
{
goto v___jp_4210_;
}
else
{
lean_object* v_inheritedTraceOptions_4224_; lean_object* v___x_4225_; uint8_t v___x_4226_; 
v_inheritedTraceOptions_4224_ = lean_ctor_get(v_toCold_4221_, 11);
v___x_4225_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0);
v___x_4226_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4224_, v_options_4222_, v___x_4225_);
if (v___x_4226_ == 0)
{
goto v___jp_4210_;
}
else
{
lean_object* v_var_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; 
v_var_4227_ = lean_ctor_get(v___x_4209_, 0);
v___x_4228_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2);
lean_inc(v_var_4227_);
v___x_4229_ = l_Nat_reprFast(v_var_4227_);
v___x_4230_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4230_, 0, v___x_4229_);
v___x_4231_ = l_Lean_MessageData_ofFormat(v___x_4230_);
v___x_4232_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4232_, 0, v___x_4228_);
lean_ctor_set(v___x_4232_, 1, v___x_4231_);
v___x_4233_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0(v_cls_4208_, v___x_4232_, v___y_4150_, v___y_4151_, v___y_4152_, v___y_4153_);
if (lean_obj_tag(v___x_4233_) == 0)
{
lean_object* v_a_4234_; lean_object* v___x_4235_; 
v_a_4234_ = lean_ctor_get(v___x_4233_, 0);
lean_inc(v_a_4234_);
lean_dec_ref_known(v___x_4233_, 1);
lean_inc(v___x_4209_);
v___x_4235_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___lam__0(v___x_4209_, v_fst_4191_, v_snd_4192_, v_fst_4187_, v_a_4234_, v___y_4150_, v___y_4151_, v___y_4152_, v___y_4153_);
v___y_4161_ = v___x_4235_;
goto v___jp_4160_;
}
else
{
lean_object* v_a_4236_; lean_object* v___x_4238_; uint8_t v_isShared_4239_; uint8_t v_isSharedCheck_4243_; 
lean_dec(v_snd_4192_);
lean_dec(v_fst_4191_);
lean_dec(v_fst_4187_);
lean_dec(v_a_4148_);
v_a_4236_ = lean_ctor_get(v___x_4233_, 0);
v_isSharedCheck_4243_ = !lean_is_exclusive(v___x_4233_);
if (v_isSharedCheck_4243_ == 0)
{
v___x_4238_ = v___x_4233_;
v_isShared_4239_ = v_isSharedCheck_4243_;
goto v_resetjp_4237_;
}
else
{
lean_inc(v_a_4236_);
lean_dec(v___x_4233_);
v___x_4238_ = lean_box(0);
v_isShared_4239_ = v_isSharedCheck_4243_;
goto v_resetjp_4237_;
}
v_resetjp_4237_:
{
lean_object* v___x_4241_; 
if (v_isShared_4239_ == 0)
{
v___x_4241_ = v___x_4238_;
goto v_reusejp_4240_;
}
else
{
lean_object* v_reuseFailAlloc_4242_; 
v_reuseFailAlloc_4242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4242_, 0, v_a_4236_);
v___x_4241_ = v_reuseFailAlloc_4242_;
goto v_reusejp_4240_;
}
v_reusejp_4240_:
{
return v___x_4241_;
}
}
}
}
}
}
}
v___jp_4244_:
{
if (v___y_4245_ == 0)
{
lean_dec(v___x_4214_);
goto v___jp_4197_;
}
else
{
uint8_t v___x_4246_; 
v___x_4246_ = lean_nat_dec_lt(v___x_4214_, v_fst_4191_);
if (v___x_4246_ == 0)
{
lean_dec(v___x_4214_);
goto v___jp_4197_;
}
else
{
lean_del_object(v___x_4194_);
lean_del_object(v___x_4189_);
lean_del_object(v___x_4184_);
goto v___jp_4216_;
}
}
}
v___jp_4247_:
{
if (v___x_4213_ == 0)
{
uint8_t v___x_4248_; 
v___x_4248_ = lean_unbox(v_snd_4192_);
if (v___x_4248_ == 0)
{
v___y_4245_ = v___x_4180_;
goto v___jp_4244_;
}
else
{
v___y_4245_ = v___x_4213_;
goto v___jp_4244_;
}
}
else
{
uint8_t v___x_4249_; 
v___x_4249_ = lean_unbox(v_snd_4192_);
v___y_4245_ = v___x_4249_;
goto v___jp_4244_;
}
}
}
}
}
}
v___jp_4155_:
{
lean_object* v___x_4157_; lean_object* v___x_4158_; 
v___x_4157_ = lean_unsigned_to_nat(1u);
v___x_4158_ = lean_nat_add(v_a_4148_, v___x_4157_);
lean_dec(v_a_4148_);
v_a_4148_ = v___x_4158_;
v_b_4149_ = v_a_4156_;
goto _start;
}
v___jp_4160_:
{
if (lean_obj_tag(v___y_4161_) == 0)
{
lean_object* v_a_4162_; lean_object* v___x_4164_; uint8_t v_isShared_4165_; uint8_t v_isSharedCheck_4171_; 
v_a_4162_ = lean_ctor_get(v___y_4161_, 0);
v_isSharedCheck_4171_ = !lean_is_exclusive(v___y_4161_);
if (v_isSharedCheck_4171_ == 0)
{
v___x_4164_ = v___y_4161_;
v_isShared_4165_ = v_isSharedCheck_4171_;
goto v_resetjp_4163_;
}
else
{
lean_inc(v_a_4162_);
lean_dec(v___y_4161_);
v___x_4164_ = lean_box(0);
v_isShared_4165_ = v_isSharedCheck_4171_;
goto v_resetjp_4163_;
}
v_resetjp_4163_:
{
if (lean_obj_tag(v_a_4162_) == 0)
{
lean_object* v_a_4166_; lean_object* v___x_4168_; 
lean_dec(v_a_4148_);
v_a_4166_ = lean_ctor_get(v_a_4162_, 0);
lean_inc(v_a_4166_);
lean_dec_ref_known(v_a_4162_, 1);
if (v_isShared_4165_ == 0)
{
lean_ctor_set(v___x_4164_, 0, v_a_4166_);
v___x_4168_ = v___x_4164_;
goto v_reusejp_4167_;
}
else
{
lean_object* v_reuseFailAlloc_4169_; 
v_reuseFailAlloc_4169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4169_, 0, v_a_4166_);
v___x_4168_ = v_reuseFailAlloc_4169_;
goto v_reusejp_4167_;
}
v_reusejp_4167_:
{
return v___x_4168_;
}
}
else
{
lean_object* v_a_4170_; 
lean_del_object(v___x_4164_);
v_a_4170_ = lean_ctor_get(v_a_4162_, 0);
lean_inc(v_a_4170_);
lean_dec_ref_known(v_a_4162_, 1);
v_a_4156_ = v_a_4170_;
goto v___jp_4155_;
}
}
}
else
{
lean_object* v_a_4172_; lean_object* v___x_4174_; uint8_t v_isShared_4175_; uint8_t v_isSharedCheck_4179_; 
lean_dec(v_a_4148_);
v_a_4172_ = lean_ctor_get(v___y_4161_, 0);
v_isSharedCheck_4179_ = !lean_is_exclusive(v___y_4161_);
if (v_isSharedCheck_4179_ == 0)
{
v___x_4174_ = v___y_4161_;
v_isShared_4175_ = v_isSharedCheck_4179_;
goto v_resetjp_4173_;
}
else
{
lean_inc(v_a_4172_);
lean_dec(v___y_4161_);
v___x_4174_ = lean_box(0);
v_isShared_4175_ = v_isSharedCheck_4179_;
goto v_resetjp_4173_;
}
v_resetjp_4173_:
{
lean_object* v___x_4177_; 
if (v_isShared_4175_ == 0)
{
v___x_4177_ = v___x_4174_;
goto v_reusejp_4176_;
}
else
{
lean_object* v_reuseFailAlloc_4178_; 
v_reuseFailAlloc_4178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4178_, 0, v_a_4172_);
v___x_4177_ = v_reuseFailAlloc_4178_;
goto v_reusejp_4176_;
}
v_reusejp_4176_:
{
return v___x_4177_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___boxed(lean_object* v_upperBound_4255_, lean_object* v___y_4256_, lean_object* v_a_4257_, lean_object* v_b_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_, lean_object* v___y_4263_){
_start:
{
lean_object* v_res_4264_; 
v_res_4264_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg(v_upperBound_4255_, v___y_4256_, v_a_4257_, v_b_4258_, v___y_4259_, v___y_4260_, v___y_4261_, v___y_4262_);
lean_dec(v___y_4262_);
lean_dec_ref(v___y_4261_);
lean_dec(v___y_4260_);
lean_dec_ref(v___y_4259_);
lean_dec_ref(v___y_4256_);
lean_dec(v_upperBound_4255_);
return v_res_4264_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__4(lean_object* v_as_4265_, size_t v_i_4266_, size_t v_stop_4267_, lean_object* v_b_4268_){
_start:
{
lean_object* v___y_4270_; uint8_t v___x_4274_; 
v___x_4274_ = lean_usize_dec_eq(v_i_4266_, v_stop_4267_);
if (v___x_4274_ == 0)
{
lean_object* v___x_4275_; uint8_t v___x_4278_; 
v___x_4275_ = lean_array_uget_borrowed(v_as_4265_, v_i_4266_);
v___x_4278_ = l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_isEmpty(v___x_4275_);
if (v___x_4278_ == 0)
{
goto v___jp_4276_;
}
else
{
if (v___x_4274_ == 0)
{
v___y_4270_ = v_b_4268_;
goto v___jp_4269_;
}
else
{
goto v___jp_4276_;
}
}
v___jp_4276_:
{
lean_object* v___x_4277_; 
lean_inc(v___x_4275_);
v___x_4277_ = lean_array_push(v_b_4268_, v___x_4275_);
v___y_4270_ = v___x_4277_;
goto v___jp_4269_;
}
}
else
{
return v_b_4268_;
}
v___jp_4269_:
{
size_t v___x_4271_; size_t v___x_4272_; 
v___x_4271_ = ((size_t)1ULL);
v___x_4272_ = lean_usize_add(v_i_4266_, v___x_4271_);
v_i_4266_ = v___x_4272_;
v_b_4268_ = v___y_4270_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__4___boxed(lean_object* v_as_4279_, lean_object* v_i_4280_, lean_object* v_stop_4281_, lean_object* v_b_4282_){
_start:
{
size_t v_i_boxed_4283_; size_t v_stop_boxed_4284_; lean_object* v_res_4285_; 
v_i_boxed_4283_ = lean_unbox_usize(v_i_4280_);
lean_dec(v_i_4280_);
v_stop_boxed_4284_ = lean_unbox_usize(v_stop_4281_);
lean_dec(v_stop_4281_);
v_res_4285_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__4(v_as_4279_, v_i_boxed_4283_, v_stop_boxed_4284_, v_b_4282_);
lean_dec_ref(v_as_4279_);
return v_res_4285_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__2(void){
_start:
{
lean_object* v___x_4289_; lean_object* v___x_4290_; 
v___x_4289_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__1));
v___x_4290_ = l_Lean_MessageData_ofFormat(v___x_4289_);
return v___x_4290_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__3(void){
_start:
{
lean_object* v___x_4291_; lean_object* v___x_4292_; 
v___x_4291_ = lean_box(1);
v___x_4292_ = l_Lean_MessageData_ofFormat(v___x_4291_);
return v___x_4292_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3(lean_object* v_a_4294_, lean_object* v_a_4295_){
_start:
{
if (lean_obj_tag(v_a_4294_) == 0)
{
lean_object* v___x_4296_; 
v___x_4296_ = l_List_reverse___redArg(v_a_4295_);
return v___x_4296_;
}
else
{
lean_object* v_head_4297_; lean_object* v_snd_4298_; lean_object* v_tail_4299_; lean_object* v___x_4301_; uint8_t v_isShared_4302_; uint8_t v_isSharedCheck_4346_; 
v_head_4297_ = lean_ctor_get(v_a_4294_, 0);
lean_inc(v_head_4297_);
v_snd_4298_ = lean_ctor_get(v_head_4297_, 1);
lean_inc(v_snd_4298_);
v_tail_4299_ = lean_ctor_get(v_a_4294_, 1);
v_isSharedCheck_4346_ = !lean_is_exclusive(v_a_4294_);
if (v_isSharedCheck_4346_ == 0)
{
lean_object* v_unused_4347_; 
v_unused_4347_ = lean_ctor_get(v_a_4294_, 0);
lean_dec(v_unused_4347_);
v___x_4301_ = v_a_4294_;
v_isShared_4302_ = v_isSharedCheck_4346_;
goto v_resetjp_4300_;
}
else
{
lean_inc(v_tail_4299_);
lean_dec(v_a_4294_);
v___x_4301_ = lean_box(0);
v_isShared_4302_ = v_isSharedCheck_4346_;
goto v_resetjp_4300_;
}
v_resetjp_4300_:
{
lean_object* v_fst_4303_; lean_object* v___x_4305_; uint8_t v_isShared_4306_; uint8_t v_isSharedCheck_4344_; 
v_fst_4303_ = lean_ctor_get(v_head_4297_, 0);
v_isSharedCheck_4344_ = !lean_is_exclusive(v_head_4297_);
if (v_isSharedCheck_4344_ == 0)
{
lean_object* v_unused_4345_; 
v_unused_4345_ = lean_ctor_get(v_head_4297_, 1);
lean_dec(v_unused_4345_);
v___x_4305_ = v_head_4297_;
v_isShared_4306_ = v_isSharedCheck_4344_;
goto v_resetjp_4304_;
}
else
{
lean_inc(v_fst_4303_);
lean_dec(v_head_4297_);
v___x_4305_ = lean_box(0);
v_isShared_4306_ = v_isSharedCheck_4344_;
goto v_resetjp_4304_;
}
v_resetjp_4304_:
{
lean_object* v_fst_4307_; lean_object* v_snd_4308_; lean_object* v___x_4310_; uint8_t v_isShared_4311_; uint8_t v_isSharedCheck_4343_; 
v_fst_4307_ = lean_ctor_get(v_snd_4298_, 0);
v_snd_4308_ = lean_ctor_get(v_snd_4298_, 1);
v_isSharedCheck_4343_ = !lean_is_exclusive(v_snd_4298_);
if (v_isSharedCheck_4343_ == 0)
{
v___x_4310_ = v_snd_4298_;
v_isShared_4311_ = v_isSharedCheck_4343_;
goto v_resetjp_4309_;
}
else
{
lean_inc(v_snd_4308_);
lean_inc(v_fst_4307_);
lean_dec(v_snd_4298_);
v___x_4310_ = lean_box(0);
v_isShared_4311_ = v_isSharedCheck_4343_;
goto v_resetjp_4309_;
}
v_resetjp_4309_:
{
lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4317_; 
v___x_4312_ = l_Nat_reprFast(v_fst_4303_);
v___x_4313_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4313_, 0, v___x_4312_);
v___x_4314_ = l_Lean_MessageData_ofFormat(v___x_4313_);
v___x_4315_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__2, &l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__2_once, _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__2);
if (v_isShared_4311_ == 0)
{
lean_ctor_set_tag(v___x_4310_, 7);
lean_ctor_set(v___x_4310_, 1, v___x_4315_);
lean_ctor_set(v___x_4310_, 0, v___x_4314_);
v___x_4317_ = v___x_4310_;
goto v_reusejp_4316_;
}
else
{
lean_object* v_reuseFailAlloc_4342_; 
v_reuseFailAlloc_4342_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4342_, 0, v___x_4314_);
lean_ctor_set(v_reuseFailAlloc_4342_, 1, v___x_4315_);
v___x_4317_ = v_reuseFailAlloc_4342_;
goto v_reusejp_4316_;
}
v_reusejp_4316_:
{
lean_object* v___x_4318_; lean_object* v___x_4320_; 
v___x_4318_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__3, &l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__3_once, _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__3);
if (v_isShared_4306_ == 0)
{
lean_ctor_set_tag(v___x_4305_, 7);
lean_ctor_set(v___x_4305_, 1, v___x_4318_);
lean_ctor_set(v___x_4305_, 0, v___x_4317_);
v___x_4320_ = v___x_4305_;
goto v_reusejp_4319_;
}
else
{
lean_object* v_reuseFailAlloc_4341_; 
v_reuseFailAlloc_4341_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4341_, 0, v___x_4317_);
lean_ctor_set(v_reuseFailAlloc_4341_, 1, v___x_4318_);
v___x_4320_ = v_reuseFailAlloc_4341_;
goto v_reusejp_4319_;
}
v_reusejp_4319_:
{
lean_object* v___x_4321_; lean_object* v___x_4322_; lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4325_; lean_object* v___y_4327_; uint8_t v___x_4338_; 
v___x_4321_ = l_Nat_reprFast(v_fst_4307_);
v___x_4322_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4322_, 0, v___x_4321_);
v___x_4323_ = l_Lean_MessageData_ofFormat(v___x_4322_);
v___x_4324_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4324_, 0, v___x_4323_);
lean_ctor_set(v___x_4324_, 1, v___x_4315_);
v___x_4325_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4325_, 0, v___x_4324_);
lean_ctor_set(v___x_4325_, 1, v___x_4318_);
v___x_4338_ = lean_unbox(v_snd_4308_);
lean_dec(v_snd_4308_);
if (v___x_4338_ == 0)
{
lean_object* v___x_4339_; 
v___x_4339_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3___closed__4));
v___y_4327_ = v___x_4339_;
goto v___jp_4326_;
}
else
{
lean_object* v___x_4340_; 
v___x_4340_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_proveFalse___closed__4));
v___y_4327_ = v___x_4340_;
goto v___jp_4326_;
}
v___jp_4326_:
{
lean_object* v___x_4328_; lean_object* v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4335_; 
lean_inc_ref(v___y_4327_);
v___x_4328_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4328_, 0, v___y_4327_);
v___x_4329_ = l_Lean_MessageData_ofFormat(v___x_4328_);
v___x_4330_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4330_, 0, v___x_4325_);
lean_ctor_set(v___x_4330_, 1, v___x_4329_);
v___x_4331_ = l_Lean_MessageData_paren(v___x_4330_);
v___x_4332_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4332_, 0, v___x_4320_);
lean_ctor_set(v___x_4332_, 1, v___x_4331_);
v___x_4333_ = l_Lean_MessageData_paren(v___x_4332_);
if (v_isShared_4302_ == 0)
{
lean_ctor_set(v___x_4301_, 1, v_a_4295_);
lean_ctor_set(v___x_4301_, 0, v___x_4333_);
v___x_4335_ = v___x_4301_;
goto v_reusejp_4334_;
}
else
{
lean_object* v_reuseFailAlloc_4337_; 
v_reuseFailAlloc_4337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4337_, 0, v___x_4333_);
lean_ctor_set(v_reuseFailAlloc_4337_, 1, v_a_4295_);
v___x_4335_ = v_reuseFailAlloc_4337_;
goto v_reusejp_4334_;
}
v_reusejp_4334_:
{
v_a_4294_ = v_tail_4299_;
v_a_4295_ = v___x_4335_;
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__2(size_t v_sz_4348_, size_t v_i_4349_, lean_object* v_bs_4350_){
_start:
{
uint8_t v___x_4351_; 
v___x_4351_ = lean_usize_dec_lt(v_i_4349_, v_sz_4348_);
if (v___x_4351_ == 0)
{
lean_object* v___x_4352_; 
v___x_4352_ = l_unsafeCast___redArg(v_bs_4350_);
lean_dec_ref(v_bs_4350_);
return v___x_4352_;
}
else
{
lean_object* v_v_4353_; lean_object* v___x_4354_; lean_object* v_var_4355_; lean_object* v___x_4356_; lean_object* v_bs_x27_4357_; lean_object* v___x_4358_; uint8_t v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; size_t v___x_4363_; size_t v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; 
v_v_4353_ = lean_array_uget_borrowed(v_bs_4350_, v_i_4349_);
v___x_4354_ = l_unsafeCast___redArg(v_v_4353_);
v_var_4355_ = lean_ctor_get(v___x_4354_, 0);
lean_inc(v_var_4355_);
v___x_4356_ = lean_unsigned_to_nat(0u);
v_bs_x27_4357_ = lean_array_uset(v_bs_4350_, v_i_4349_, v___x_4356_);
v___x_4358_ = l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_size(v___x_4354_);
v___x_4359_ = l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_exact(v___x_4354_);
lean_dec(v___x_4354_);
v___x_4360_ = lean_box(v___x_4359_);
v___x_4361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4361_, 0, v___x_4358_);
lean_ctor_set(v___x_4361_, 1, v___x_4360_);
v___x_4362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4362_, 0, v_var_4355_);
lean_ctor_set(v___x_4362_, 1, v___x_4361_);
v___x_4363_ = ((size_t)1ULL);
v___x_4364_ = lean_usize_add(v_i_4349_, v___x_4363_);
v___x_4365_ = l_unsafeCast___redArg(v___x_4362_);
lean_dec_ref_known(v___x_4362_, 2);
v___x_4366_ = lean_array_uset(v_bs_x27_4357_, v_i_4349_, v___x_4365_);
v_i_4349_ = v___x_4364_;
v_bs_4350_ = v___x_4366_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__2___boxed(lean_object* v_sz_4368_, lean_object* v_i_4369_, lean_object* v_bs_4370_){
_start:
{
size_t v_sz_boxed_4371_; size_t v_i_boxed_4372_; lean_object* v_res_4373_; 
v_sz_boxed_4371_ = lean_unbox_usize(v_sz_4368_);
lean_dec(v_sz_4368_);
v_i_boxed_4372_ = lean_unbox_usize(v_i_4369_);
lean_dec(v_i_4369_);
v_res_4373_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__2(v_sz_boxed_4371_, v_i_boxed_4372_, v_bs_4370_);
return v_res_4373_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__1(void){
_start:
{
lean_object* v___x_4375_; lean_object* v___x_4376_; 
v___x_4375_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__0));
v___x_4376_ = l_Lean_stringToMessageData(v___x_4375_);
return v___x_4376_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__4(void){
_start:
{
lean_object* v___x_4380_; lean_object* v___x_4381_; 
v___x_4380_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__3));
v___x_4381_ = l_Lean_stringToMessageData(v___x_4380_);
return v___x_4381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect(lean_object* v_data_4382_, lean_object* v_a_4383_, lean_object* v_a_4384_, lean_object* v_a_4385_, lean_object* v_a_4386_){
_start:
{
lean_object* v___x_4388_; lean_object* v___y_4390_; lean_object* v___y_4391_; lean_object* v_bestIdx_4394_; lean_object* v___y_4396_; lean_object* v___y_4397_; lean_object* v___y_4398_; lean_object* v___y_4399_; lean_object* v___y_4400_; lean_object* v___y_4401_; lean_object* v___y_4402_; lean_object* v___y_4522_; lean_object* v___x_4548_; lean_object* v___x_4549_; uint8_t v___x_4550_; 
v___x_4388_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instInhabitedFourierMotzkinData_default));
v_bestIdx_4394_ = lean_unsigned_to_nat(0u);
v___x_4548_ = lean_array_get_size(v_data_4382_);
v___x_4549_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData___closed__0));
v___x_4550_ = lean_nat_dec_lt(v_bestIdx_4394_, v___x_4548_);
if (v___x_4550_ == 0)
{
v___y_4522_ = v___x_4549_;
goto v___jp_4521_;
}
else
{
uint8_t v___x_4551_; 
v___x_4551_ = lean_nat_dec_le(v___x_4548_, v___x_4548_);
if (v___x_4551_ == 0)
{
if (v___x_4550_ == 0)
{
v___y_4522_ = v___x_4549_;
goto v___jp_4521_;
}
else
{
size_t v___x_4552_; size_t v___x_4553_; lean_object* v___x_4554_; 
v___x_4552_ = ((size_t)0ULL);
v___x_4553_ = lean_usize_of_nat(v___x_4548_);
v___x_4554_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__4(v_data_4382_, v___x_4552_, v___x_4553_, v___x_4549_);
v___y_4522_ = v___x_4554_;
goto v___jp_4521_;
}
}
else
{
size_t v___x_4555_; size_t v___x_4556_; lean_object* v___x_4557_; 
v___x_4555_ = ((size_t)0ULL);
v___x_4556_ = lean_usize_of_nat(v___x_4548_);
v___x_4557_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__4(v_data_4382_, v___x_4555_, v___x_4556_, v___x_4549_);
v___y_4522_ = v___x_4557_;
goto v___jp_4521_;
}
}
v___jp_4389_:
{
lean_object* v___x_4392_; lean_object* v___x_4393_; 
v___x_4392_ = lean_array_get(v___x_4388_, v___y_4390_, v___y_4391_);
lean_dec(v___y_4391_);
lean_dec_ref(v___y_4390_);
v___x_4393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4393_, 0, v___x_4392_);
return v___x_4393_;
}
v___jp_4395_:
{
lean_object* v___x_4403_; lean_object* v___x_4404_; uint8_t v___x_4405_; 
v___x_4403_ = lean_array_get_borrowed(v___x_4388_, v___y_4396_, v_bestIdx_4394_);
v___x_4404_ = l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_size(v___x_4403_);
v___x_4405_ = lean_nat_dec_eq(v___x_4404_, v_bestIdx_4394_);
if (v___x_4405_ == 0)
{
lean_object* v___x_4406_; lean_object* v___x_4407_; uint8_t v___x_4408_; lean_object* v___x_4409_; lean_object* v___x_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; 
v___x_4406_ = lean_unsigned_to_nat(1u);
v___x_4407_ = lean_array_get_size(v___y_4396_);
v___x_4408_ = l_Lean_Elab_Tactic_Omega_Problem_FourierMotzkinData_exact(v___x_4403_);
v___x_4409_ = lean_box(0);
v___x_4410_ = lean_box(v___x_4408_);
v___x_4411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4411_, 0, v___x_4404_);
lean_ctor_set(v___x_4411_, 1, v___x_4410_);
v___x_4412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4412_, 0, v_bestIdx_4394_);
lean_ctor_set(v___x_4412_, 1, v___x_4411_);
v___x_4413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4413_, 0, v___x_4409_);
lean_ctor_set(v___x_4413_, 1, v___x_4412_);
v___x_4414_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg(v___x_4407_, v___y_4396_, v___x_4406_, v___x_4413_, v___y_4399_, v___y_4400_, v___y_4401_, v___y_4402_);
if (lean_obj_tag(v___x_4414_) == 0)
{
lean_object* v_a_4415_; lean_object* v___x_4417_; uint8_t v_isShared_4418_; uint8_t v_isSharedCheck_4469_; 
v_a_4415_ = lean_ctor_get(v___x_4414_, 0);
v_isSharedCheck_4469_ = !lean_is_exclusive(v___x_4414_);
if (v_isSharedCheck_4469_ == 0)
{
v___x_4417_ = v___x_4414_;
v_isShared_4418_ = v_isSharedCheck_4469_;
goto v_resetjp_4416_;
}
else
{
lean_inc(v_a_4415_);
lean_dec(v___x_4414_);
v___x_4417_ = lean_box(0);
v_isShared_4418_ = v_isSharedCheck_4469_;
goto v_resetjp_4416_;
}
v_resetjp_4416_:
{
lean_object* v_fst_4419_; 
v_fst_4419_ = lean_ctor_get(v_a_4415_, 0);
if (lean_obj_tag(v_fst_4419_) == 0)
{
lean_object* v_snd_4420_; lean_object* v___x_4422_; uint8_t v_isShared_4423_; uint8_t v_isSharedCheck_4463_; 
lean_del_object(v___x_4417_);
v_snd_4420_ = lean_ctor_get(v_a_4415_, 1);
v_isSharedCheck_4463_ = !lean_is_exclusive(v_a_4415_);
if (v_isSharedCheck_4463_ == 0)
{
lean_object* v_unused_4464_; 
v_unused_4464_ = lean_ctor_get(v_a_4415_, 0);
lean_dec(v_unused_4464_);
v___x_4422_ = v_a_4415_;
v_isShared_4423_ = v_isSharedCheck_4463_;
goto v_resetjp_4421_;
}
else
{
lean_inc(v_snd_4420_);
lean_dec(v_a_4415_);
v___x_4422_ = lean_box(0);
v_isShared_4423_ = v_isSharedCheck_4463_;
goto v_resetjp_4421_;
}
v_resetjp_4421_:
{
lean_object* v_fst_4424_; lean_object* v___x_4426_; uint8_t v_isShared_4427_; uint8_t v_isSharedCheck_4461_; 
v_fst_4424_ = lean_ctor_get(v_snd_4420_, 0);
v_isSharedCheck_4461_ = !lean_is_exclusive(v_snd_4420_);
if (v_isSharedCheck_4461_ == 0)
{
lean_object* v_unused_4462_; 
v_unused_4462_ = lean_ctor_get(v_snd_4420_, 1);
lean_dec(v_unused_4462_);
v___x_4426_ = v_snd_4420_;
v_isShared_4427_ = v_isSharedCheck_4461_;
goto v_resetjp_4425_;
}
else
{
lean_inc(v_fst_4424_);
lean_dec(v_snd_4420_);
v___x_4426_ = lean_box(0);
v_isShared_4427_ = v_isSharedCheck_4461_;
goto v_resetjp_4425_;
}
v_resetjp_4425_:
{
lean_object* v___x_4428_; 
lean_inc_ref(v___y_4397_);
lean_inc(v___y_4402_);
lean_inc_ref(v___y_4401_);
lean_inc(v___y_4400_);
lean_inc_ref(v___y_4399_);
v___x_4428_ = lean_apply_5(v___y_4397_, v___y_4399_, v___y_4400_, v___y_4401_, v___y_4402_, lean_box(0));
if (lean_obj_tag(v___x_4428_) == 0)
{
lean_object* v_a_4429_; uint8_t v___x_4430_; 
v_a_4429_ = lean_ctor_get(v___x_4428_, 0);
lean_inc(v_a_4429_);
lean_dec_ref_known(v___x_4428_, 1);
v___x_4430_ = lean_unbox(v_a_4429_);
lean_dec(v_a_4429_);
if (v___x_4430_ == 0)
{
lean_del_object(v___x_4426_);
lean_del_object(v___x_4422_);
lean_dec(v___y_4398_);
v___y_4390_ = v___y_4396_;
v___y_4391_ = v_fst_4424_;
goto v___jp_4389_;
}
else
{
lean_object* v___x_4431_; lean_object* v_var_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4438_; 
v___x_4431_ = lean_array_get_borrowed(v___x_4388_, v___y_4396_, v_fst_4424_);
v_var_4432_ = lean_ctor_get(v___x_4431_, 0);
v___x_4433_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2);
lean_inc(v_var_4432_);
v___x_4434_ = l_Nat_reprFast(v_var_4432_);
v___x_4435_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4435_, 0, v___x_4434_);
v___x_4436_ = l_Lean_MessageData_ofFormat(v___x_4435_);
if (v_isShared_4427_ == 0)
{
lean_ctor_set_tag(v___x_4426_, 7);
lean_ctor_set(v___x_4426_, 1, v___x_4436_);
lean_ctor_set(v___x_4426_, 0, v___x_4433_);
v___x_4438_ = v___x_4426_;
goto v_reusejp_4437_;
}
else
{
lean_object* v_reuseFailAlloc_4452_; 
v_reuseFailAlloc_4452_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4452_, 0, v___x_4433_);
lean_ctor_set(v_reuseFailAlloc_4452_, 1, v___x_4436_);
v___x_4438_ = v_reuseFailAlloc_4452_;
goto v_reusejp_4437_;
}
v_reusejp_4437_:
{
lean_object* v___x_4439_; lean_object* v___x_4441_; 
v___x_4439_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__1, &l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__1_once, _init_l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__1);
if (v_isShared_4423_ == 0)
{
lean_ctor_set_tag(v___x_4422_, 7);
lean_ctor_set(v___x_4422_, 1, v___x_4439_);
lean_ctor_set(v___x_4422_, 0, v___x_4438_);
v___x_4441_ = v___x_4422_;
goto v_reusejp_4440_;
}
else
{
lean_object* v_reuseFailAlloc_4451_; 
v_reuseFailAlloc_4451_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4451_, 0, v___x_4438_);
lean_ctor_set(v_reuseFailAlloc_4451_, 1, v___x_4439_);
v___x_4441_ = v_reuseFailAlloc_4451_;
goto v_reusejp_4440_;
}
v_reusejp_4440_:
{
lean_object* v___x_4442_; 
v___x_4442_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0(v___y_4398_, v___x_4441_, v___y_4399_, v___y_4400_, v___y_4401_, v___y_4402_);
if (lean_obj_tag(v___x_4442_) == 0)
{
lean_dec_ref_known(v___x_4442_, 1);
v___y_4390_ = v___y_4396_;
v___y_4391_ = v_fst_4424_;
goto v___jp_4389_;
}
else
{
lean_object* v_a_4443_; lean_object* v___x_4445_; uint8_t v_isShared_4446_; uint8_t v_isSharedCheck_4450_; 
lean_dec(v_fst_4424_);
lean_dec_ref(v___y_4396_);
v_a_4443_ = lean_ctor_get(v___x_4442_, 0);
v_isSharedCheck_4450_ = !lean_is_exclusive(v___x_4442_);
if (v_isSharedCheck_4450_ == 0)
{
v___x_4445_ = v___x_4442_;
v_isShared_4446_ = v_isSharedCheck_4450_;
goto v_resetjp_4444_;
}
else
{
lean_inc(v_a_4443_);
lean_dec(v___x_4442_);
v___x_4445_ = lean_box(0);
v_isShared_4446_ = v_isSharedCheck_4450_;
goto v_resetjp_4444_;
}
v_resetjp_4444_:
{
lean_object* v___x_4448_; 
if (v_isShared_4446_ == 0)
{
v___x_4448_ = v___x_4445_;
goto v_reusejp_4447_;
}
else
{
lean_object* v_reuseFailAlloc_4449_; 
v_reuseFailAlloc_4449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4449_, 0, v_a_4443_);
v___x_4448_ = v_reuseFailAlloc_4449_;
goto v_reusejp_4447_;
}
v_reusejp_4447_:
{
return v___x_4448_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4453_; lean_object* v___x_4455_; uint8_t v_isShared_4456_; uint8_t v_isSharedCheck_4460_; 
lean_del_object(v___x_4426_);
lean_dec(v_fst_4424_);
lean_del_object(v___x_4422_);
lean_dec(v___y_4398_);
lean_dec_ref(v___y_4396_);
v_a_4453_ = lean_ctor_get(v___x_4428_, 0);
v_isSharedCheck_4460_ = !lean_is_exclusive(v___x_4428_);
if (v_isSharedCheck_4460_ == 0)
{
v___x_4455_ = v___x_4428_;
v_isShared_4456_ = v_isSharedCheck_4460_;
goto v_resetjp_4454_;
}
else
{
lean_inc(v_a_4453_);
lean_dec(v___x_4428_);
v___x_4455_ = lean_box(0);
v_isShared_4456_ = v_isSharedCheck_4460_;
goto v_resetjp_4454_;
}
v_resetjp_4454_:
{
lean_object* v___x_4458_; 
if (v_isShared_4456_ == 0)
{
v___x_4458_ = v___x_4455_;
goto v_reusejp_4457_;
}
else
{
lean_object* v_reuseFailAlloc_4459_; 
v_reuseFailAlloc_4459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4459_, 0, v_a_4453_);
v___x_4458_ = v_reuseFailAlloc_4459_;
goto v_reusejp_4457_;
}
v_reusejp_4457_:
{
return v___x_4458_;
}
}
}
}
}
}
else
{
lean_object* v_val_4465_; lean_object* v___x_4467_; 
lean_inc_ref(v_fst_4419_);
lean_dec(v_a_4415_);
lean_dec(v___y_4398_);
lean_dec_ref(v___y_4396_);
v_val_4465_ = lean_ctor_get(v_fst_4419_, 0);
lean_inc(v_val_4465_);
lean_dec_ref_known(v_fst_4419_, 1);
if (v_isShared_4418_ == 0)
{
lean_ctor_set(v___x_4417_, 0, v_val_4465_);
v___x_4467_ = v___x_4417_;
goto v_reusejp_4466_;
}
else
{
lean_object* v_reuseFailAlloc_4468_; 
v_reuseFailAlloc_4468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4468_, 0, v_val_4465_);
v___x_4467_ = v_reuseFailAlloc_4468_;
goto v_reusejp_4466_;
}
v_reusejp_4466_:
{
return v___x_4467_;
}
}
}
}
else
{
lean_object* v_a_4470_; lean_object* v___x_4472_; uint8_t v_isShared_4473_; uint8_t v_isSharedCheck_4477_; 
lean_dec(v___y_4398_);
lean_dec_ref(v___y_4396_);
v_a_4470_ = lean_ctor_get(v___x_4414_, 0);
v_isSharedCheck_4477_ = !lean_is_exclusive(v___x_4414_);
if (v_isSharedCheck_4477_ == 0)
{
v___x_4472_ = v___x_4414_;
v_isShared_4473_ = v_isSharedCheck_4477_;
goto v_resetjp_4471_;
}
else
{
lean_inc(v_a_4470_);
lean_dec(v___x_4414_);
v___x_4472_ = lean_box(0);
v_isShared_4473_ = v_isSharedCheck_4477_;
goto v_resetjp_4471_;
}
v_resetjp_4471_:
{
lean_object* v___x_4475_; 
if (v_isShared_4473_ == 0)
{
v___x_4475_ = v___x_4472_;
goto v_reusejp_4474_;
}
else
{
lean_object* v_reuseFailAlloc_4476_; 
v_reuseFailAlloc_4476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4476_, 0, v_a_4470_);
v___x_4475_ = v_reuseFailAlloc_4476_;
goto v_reusejp_4474_;
}
v_reusejp_4474_:
{
return v___x_4475_;
}
}
}
}
else
{
lean_object* v___x_4478_; 
lean_inc(v___x_4403_);
lean_dec(v___x_4404_);
lean_dec_ref(v___y_4396_);
lean_inc_ref(v___y_4397_);
lean_inc(v___y_4402_);
lean_inc_ref(v___y_4401_);
lean_inc(v___y_4400_);
lean_inc_ref(v___y_4399_);
v___x_4478_ = lean_apply_5(v___y_4397_, v___y_4399_, v___y_4400_, v___y_4401_, v___y_4402_, lean_box(0));
if (lean_obj_tag(v___x_4478_) == 0)
{
lean_object* v_a_4479_; lean_object* v___x_4481_; uint8_t v_isShared_4482_; uint8_t v_isSharedCheck_4512_; 
v_a_4479_ = lean_ctor_get(v___x_4478_, 0);
v_isSharedCheck_4512_ = !lean_is_exclusive(v___x_4478_);
if (v_isSharedCheck_4512_ == 0)
{
v___x_4481_ = v___x_4478_;
v_isShared_4482_ = v_isSharedCheck_4512_;
goto v_resetjp_4480_;
}
else
{
lean_inc(v_a_4479_);
lean_dec(v___x_4478_);
v___x_4481_ = lean_box(0);
v_isShared_4482_ = v_isSharedCheck_4512_;
goto v_resetjp_4480_;
}
v_resetjp_4480_:
{
uint8_t v___x_4483_; 
v___x_4483_ = lean_unbox(v_a_4479_);
lean_dec(v_a_4479_);
if (v___x_4483_ == 0)
{
lean_object* v___x_4485_; 
lean_dec(v___y_4398_);
if (v_isShared_4482_ == 0)
{
lean_ctor_set(v___x_4481_, 0, v___x_4403_);
v___x_4485_ = v___x_4481_;
goto v_reusejp_4484_;
}
else
{
lean_object* v_reuseFailAlloc_4486_; 
v_reuseFailAlloc_4486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4486_, 0, v___x_4403_);
v___x_4485_ = v_reuseFailAlloc_4486_;
goto v_reusejp_4484_;
}
v_reusejp_4484_:
{
return v___x_4485_;
}
}
else
{
lean_object* v_var_4487_; lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; 
lean_del_object(v___x_4481_);
v_var_4487_ = lean_ctor_get(v___x_4403_, 0);
v___x_4488_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__2);
lean_inc(v_var_4487_);
v___x_4489_ = l_Nat_reprFast(v_var_4487_);
v___x_4490_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4490_, 0, v___x_4489_);
v___x_4491_ = l_Lean_MessageData_ofFormat(v___x_4490_);
v___x_4492_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4492_, 0, v___x_4488_);
lean_ctor_set(v___x_4492_, 1, v___x_4491_);
v___x_4493_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__1, &l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__1_once, _init_l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__1);
v___x_4494_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4494_, 0, v___x_4492_);
lean_ctor_set(v___x_4494_, 1, v___x_4493_);
v___x_4495_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0(v___y_4398_, v___x_4494_, v___y_4399_, v___y_4400_, v___y_4401_, v___y_4402_);
if (lean_obj_tag(v___x_4495_) == 0)
{
lean_object* v___x_4497_; uint8_t v_isShared_4498_; uint8_t v_isSharedCheck_4502_; 
v_isSharedCheck_4502_ = !lean_is_exclusive(v___x_4495_);
if (v_isSharedCheck_4502_ == 0)
{
lean_object* v_unused_4503_; 
v_unused_4503_ = lean_ctor_get(v___x_4495_, 0);
lean_dec(v_unused_4503_);
v___x_4497_ = v___x_4495_;
v_isShared_4498_ = v_isSharedCheck_4502_;
goto v_resetjp_4496_;
}
else
{
lean_dec(v___x_4495_);
v___x_4497_ = lean_box(0);
v_isShared_4498_ = v_isSharedCheck_4502_;
goto v_resetjp_4496_;
}
v_resetjp_4496_:
{
lean_object* v___x_4500_; 
if (v_isShared_4498_ == 0)
{
lean_ctor_set(v___x_4497_, 0, v___x_4403_);
v___x_4500_ = v___x_4497_;
goto v_reusejp_4499_;
}
else
{
lean_object* v_reuseFailAlloc_4501_; 
v_reuseFailAlloc_4501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4501_, 0, v___x_4403_);
v___x_4500_ = v_reuseFailAlloc_4501_;
goto v_reusejp_4499_;
}
v_reusejp_4499_:
{
return v___x_4500_;
}
}
}
else
{
lean_object* v_a_4504_; lean_object* v___x_4506_; uint8_t v_isShared_4507_; uint8_t v_isSharedCheck_4511_; 
lean_dec(v___x_4403_);
v_a_4504_ = lean_ctor_get(v___x_4495_, 0);
v_isSharedCheck_4511_ = !lean_is_exclusive(v___x_4495_);
if (v_isSharedCheck_4511_ == 0)
{
v___x_4506_ = v___x_4495_;
v_isShared_4507_ = v_isSharedCheck_4511_;
goto v_resetjp_4505_;
}
else
{
lean_inc(v_a_4504_);
lean_dec(v___x_4495_);
v___x_4506_ = lean_box(0);
v_isShared_4507_ = v_isSharedCheck_4511_;
goto v_resetjp_4505_;
}
v_resetjp_4505_:
{
lean_object* v___x_4509_; 
if (v_isShared_4507_ == 0)
{
v___x_4509_ = v___x_4506_;
goto v_reusejp_4508_;
}
else
{
lean_object* v_reuseFailAlloc_4510_; 
v_reuseFailAlloc_4510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4510_, 0, v_a_4504_);
v___x_4509_ = v_reuseFailAlloc_4510_;
goto v_reusejp_4508_;
}
v_reusejp_4508_:
{
return v___x_4509_;
}
}
}
}
}
}
else
{
lean_object* v_a_4513_; lean_object* v___x_4515_; uint8_t v_isShared_4516_; uint8_t v_isSharedCheck_4520_; 
lean_dec(v___x_4403_);
lean_dec(v___y_4398_);
v_a_4513_ = lean_ctor_get(v___x_4478_, 0);
v_isSharedCheck_4520_ = !lean_is_exclusive(v___x_4478_);
if (v_isSharedCheck_4520_ == 0)
{
v___x_4515_ = v___x_4478_;
v_isShared_4516_ = v_isSharedCheck_4520_;
goto v_resetjp_4514_;
}
else
{
lean_inc(v_a_4513_);
lean_dec(v___x_4478_);
v___x_4515_ = lean_box(0);
v_isShared_4516_ = v_isSharedCheck_4520_;
goto v_resetjp_4514_;
}
v_resetjp_4514_:
{
lean_object* v___x_4518_; 
if (v_isShared_4516_ == 0)
{
v___x_4518_ = v___x_4515_;
goto v_reusejp_4517_;
}
else
{
lean_object* v_reuseFailAlloc_4519_; 
v_reuseFailAlloc_4519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4519_, 0, v_a_4513_);
v___x_4518_ = v_reuseFailAlloc_4519_;
goto v_reusejp_4517_;
}
v_reusejp_4517_:
{
return v___x_4518_;
}
}
}
}
}
v___jp_4521_:
{
lean_object* v_cls_4523_; lean_object* v___f_4524_; lean_object* v___x_4525_; lean_object* v_a_4526_; uint8_t v___x_4527_; 
v_cls_4523_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__1_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___f_4524_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__2));
v___x_4525_ = l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___lam__0(v_cls_4523_, v_a_4383_, v_a_4384_, v_a_4385_, v_a_4386_);
v_a_4526_ = lean_ctor_get(v___x_4525_, 0);
lean_inc(v_a_4526_);
lean_dec_ref(v___x_4525_);
v___x_4527_ = lean_unbox(v_a_4526_);
lean_dec(v_a_4526_);
if (v___x_4527_ == 0)
{
v___y_4396_ = v___y_4522_;
v___y_4397_ = v___f_4524_;
v___y_4398_ = v_cls_4523_;
v___y_4399_ = v_a_4383_;
v___y_4400_ = v_a_4384_;
v___y_4401_ = v_a_4385_;
v___y_4402_ = v_a_4386_;
goto v___jp_4395_;
}
else
{
lean_object* v___x_4528_; size_t v_sz_4529_; size_t v___x_4530_; lean_object* v___x_4531_; lean_object* v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; 
v___x_4528_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__4, &l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__4_once, _init_l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___closed__4);
v_sz_4529_ = lean_array_size(v___y_4522_);
v___x_4530_ = ((size_t)0ULL);
v___x_4531_ = l_unsafeCast___redArg(v___y_4522_);
v___x_4532_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__2(v_sz_4529_, v___x_4530_, v___x_4531_);
v___x_4533_ = l_unsafeCast___redArg(v___x_4532_);
lean_dec_ref(v___x_4532_);
v___x_4534_ = lean_array_to_list(v___x_4533_);
v___x_4535_ = lean_box(0);
v___x_4536_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__3(v___x_4534_, v___x_4535_);
v___x_4537_ = l_Lean_MessageData_ofList(v___x_4536_);
v___x_4538_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4538_, 0, v___x_4528_);
lean_ctor_set(v___x_4538_, 1, v___x_4537_);
v___x_4539_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0(v_cls_4523_, v___x_4538_, v_a_4383_, v_a_4384_, v_a_4385_, v_a_4386_);
if (lean_obj_tag(v___x_4539_) == 0)
{
lean_dec_ref_known(v___x_4539_, 1);
v___y_4396_ = v___y_4522_;
v___y_4397_ = v___f_4524_;
v___y_4398_ = v_cls_4523_;
v___y_4399_ = v_a_4383_;
v___y_4400_ = v_a_4384_;
v___y_4401_ = v_a_4385_;
v___y_4402_ = v_a_4386_;
goto v___jp_4395_;
}
else
{
lean_object* v_a_4540_; lean_object* v___x_4542_; uint8_t v_isShared_4543_; uint8_t v_isSharedCheck_4547_; 
lean_dec_ref(v___y_4522_);
v_a_4540_ = lean_ctor_get(v___x_4539_, 0);
v_isSharedCheck_4547_ = !lean_is_exclusive(v___x_4539_);
if (v_isSharedCheck_4547_ == 0)
{
v___x_4542_ = v___x_4539_;
v_isShared_4543_ = v_isSharedCheck_4547_;
goto v_resetjp_4541_;
}
else
{
lean_inc(v_a_4540_);
lean_dec(v___x_4539_);
v___x_4542_ = lean_box(0);
v_isShared_4543_ = v_isSharedCheck_4547_;
goto v_resetjp_4541_;
}
v_resetjp_4541_:
{
lean_object* v___x_4545_; 
if (v_isShared_4543_ == 0)
{
v___x_4545_ = v___x_4542_;
goto v_reusejp_4544_;
}
else
{
lean_object* v_reuseFailAlloc_4546_; 
v_reuseFailAlloc_4546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4546_, 0, v_a_4540_);
v___x_4545_ = v_reuseFailAlloc_4546_;
goto v_reusejp_4544_;
}
v_reusejp_4544_:
{
return v___x_4545_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect___boxed(lean_object* v_data_4558_, lean_object* v_a_4559_, lean_object* v_a_4560_, lean_object* v_a_4561_, lean_object* v_a_4562_, lean_object* v_a_4563_){
_start:
{
lean_object* v_res_4564_; 
v_res_4564_ = l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect(v_data_4558_, v_a_4559_, v_a_4560_, v_a_4561_, v_a_4562_);
lean_dec(v_a_4562_);
lean_dec_ref(v_a_4561_);
lean_dec(v_a_4560_);
lean_dec_ref(v_a_4559_);
lean_dec_ref(v_data_4558_);
return v_res_4564_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1(lean_object* v_upperBound_4565_, lean_object* v___y_4566_, lean_object* v_inst_4567_, lean_object* v_R_4568_, lean_object* v_a_4569_, lean_object* v_b_4570_, lean_object* v_c_4571_, lean_object* v___y_4572_, lean_object* v___y_4573_, lean_object* v___y_4574_, lean_object* v___y_4575_){
_start:
{
lean_object* v___x_4577_; 
v___x_4577_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg(v_upperBound_4565_, v___y_4566_, v_a_4569_, v_b_4570_, v___y_4572_, v___y_4573_, v___y_4574_, v___y_4575_);
return v___x_4577_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___boxed(lean_object* v_upperBound_4578_, lean_object* v___y_4579_, lean_object* v_inst_4580_, lean_object* v_R_4581_, lean_object* v_a_4582_, lean_object* v_b_4583_, lean_object* v_c_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_, lean_object* v___y_4587_, lean_object* v___y_4588_, lean_object* v___y_4589_){
_start:
{
lean_object* v_res_4590_; 
v_res_4590_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1(v_upperBound_4578_, v___y_4579_, v_inst_4580_, v_R_4581_, v_a_4582_, v_b_4583_, v_c_4584_, v___y_4585_, v___y_4586_, v___y_4587_, v___y_4588_);
lean_dec(v___y_4588_);
lean_dec_ref(v___y_4587_);
lean_dec(v___y_4586_);
lean_dec_ref(v___y_4585_);
lean_dec_ref(v___y_4579_);
lean_dec(v_upperBound_4578_);
return v_res_4590_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0___redArg(lean_object* v_snd_4591_, lean_object* v_fst_4592_, lean_object* v_as_x27_4593_, lean_object* v_b_4594_){
_start:
{
if (lean_obj_tag(v_as_x27_4593_) == 0)
{
lean_object* v___x_4596_; 
lean_dec_ref(v_fst_4592_);
v___x_4596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4596_, 0, v_b_4594_);
return v___x_4596_;
}
else
{
lean_object* v_head_4597_; lean_object* v_tail_4598_; lean_object* v_fst_4599_; lean_object* v_snd_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; lean_object* v___x_4604_; 
v_head_4597_ = lean_ctor_get(v_as_x27_4593_, 0);
v_tail_4598_ = lean_ctor_get(v_as_x27_4593_, 1);
v_fst_4599_ = lean_ctor_get(v_head_4597_, 0);
v_snd_4600_ = lean_ctor_get(v_head_4597_, 1);
v___x_4601_ = lean_int_neg(v_snd_4591_);
lean_inc(v_fst_4599_);
lean_inc_ref(v_fst_4592_);
lean_inc(v_snd_4600_);
v___x_4602_ = l_Lean_Elab_Tactic_Omega_Fact_combo(v_snd_4600_, v_fst_4592_, v___x_4601_, v_fst_4599_);
v___x_4603_ = l_Lean_Elab_Tactic_Omega_Fact_tidy(v___x_4602_);
v___x_4604_ = l_Lean_Elab_Tactic_Omega_Problem_addConstraint(v_b_4594_, v___x_4603_);
v_as_x27_4593_ = v_tail_4598_;
v_b_4594_ = v___x_4604_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0___redArg___boxed(lean_object* v_snd_4606_, lean_object* v_fst_4607_, lean_object* v_as_x27_4608_, lean_object* v_b_4609_, lean_object* v___y_4610_){
_start:
{
lean_object* v_res_4611_; 
v_res_4611_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0___redArg(v_snd_4606_, v_fst_4607_, v_as_x27_4608_, v_b_4609_);
lean_dec(v_as_x27_4608_);
lean_dec(v_snd_4606_);
return v_res_4611_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2___redArg(lean_object* v_upperBounds_4612_, lean_object* v_as_x27_4613_, lean_object* v_b_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_, lean_object* v___y_4617_, lean_object* v___y_4618_){
_start:
{
if (lean_obj_tag(v_as_x27_4613_) == 0)
{
lean_object* v___x_4620_; 
v___x_4620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4620_, 0, v_b_4614_);
return v___x_4620_;
}
else
{
lean_object* v_head_4621_; lean_object* v_tail_4622_; lean_object* v_fst_4623_; lean_object* v_snd_4624_; lean_object* v___x_4625_; lean_object* v_a_4626_; 
v_head_4621_ = lean_ctor_get(v_as_x27_4613_, 0);
v_tail_4622_ = lean_ctor_get(v_as_x27_4613_, 1);
v_fst_4623_ = lean_ctor_get(v_head_4621_, 0);
v_snd_4624_ = lean_ctor_get(v_head_4621_, 1);
lean_inc(v_fst_4623_);
v___x_4625_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0___redArg(v_snd_4624_, v_fst_4623_, v_upperBounds_4612_, v_b_4614_);
v_a_4626_ = lean_ctor_get(v___x_4625_, 0);
lean_inc(v_a_4626_);
lean_dec_ref(v___x_4625_);
v_as_x27_4613_ = v_tail_4622_;
v_b_4614_ = v_a_4626_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2___redArg___boxed(lean_object* v_upperBounds_4628_, lean_object* v_as_x27_4629_, lean_object* v_b_4630_, lean_object* v___y_4631_, lean_object* v___y_4632_, lean_object* v___y_4633_, lean_object* v___y_4634_, lean_object* v___y_4635_){
_start:
{
lean_object* v_res_4636_; 
v_res_4636_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2___redArg(v_upperBounds_4628_, v_as_x27_4629_, v_b_4630_, v___y_4631_, v___y_4632_, v___y_4633_, v___y_4634_);
lean_dec(v___y_4634_);
lean_dec_ref(v___y_4633_);
lean_dec(v___y_4632_);
lean_dec_ref(v___y_4631_);
lean_dec(v_as_x27_4629_);
lean_dec(v_upperBounds_4628_);
return v_res_4636_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1___redArg(lean_object* v_as_x27_4637_, lean_object* v_b_4638_){
_start:
{
if (lean_obj_tag(v_as_x27_4637_) == 0)
{
lean_object* v___x_4640_; 
v___x_4640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4640_, 0, v_b_4638_);
return v___x_4640_;
}
else
{
lean_object* v_head_4641_; lean_object* v_tail_4642_; lean_object* v___x_4643_; 
v_head_4641_ = lean_ctor_get(v_as_x27_4637_, 0);
v_tail_4642_ = lean_ctor_get(v_as_x27_4637_, 1);
lean_inc(v_head_4641_);
v___x_4643_ = l_Lean_Elab_Tactic_Omega_Problem_insertConstraint(v_b_4638_, v_head_4641_);
v_as_x27_4637_ = v_tail_4642_;
v_b_4638_ = v___x_4643_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1___redArg___boxed(lean_object* v_as_x27_4645_, lean_object* v_b_4646_, lean_object* v___y_4647_){
_start:
{
lean_object* v_res_4648_; 
v_res_4648_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1___redArg(v_as_x27_4645_, v_b_4646_);
lean_dec(v_as_x27_4645_);
return v_res_4648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkin(lean_object* v_p_4649_, lean_object* v_a_4650_, lean_object* v_a_4651_, lean_object* v_a_4652_, lean_object* v_a_4653_){
_start:
{
lean_object* v_data_4655_; lean_object* v___x_4656_; 
lean_inc_ref(v_p_4649_);
v_data_4655_ = l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinData(v_p_4649_);
v___x_4656_ = l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect(v_data_4655_, v_a_4650_, v_a_4651_, v_a_4652_, v_a_4653_);
lean_dec_ref(v_data_4655_);
if (lean_obj_tag(v___x_4656_) == 0)
{
lean_object* v_a_4657_; lean_object* v_irrelevant_4658_; lean_object* v_lowerBounds_4659_; lean_object* v_upperBounds_4660_; lean_object* v_assumptions_4661_; lean_object* v_eliminations_4662_; lean_object* v___x_4664_; uint8_t v_isShared_4665_; uint8_t v_isSharedCheck_4677_; 
v_a_4657_ = lean_ctor_get(v___x_4656_, 0);
lean_inc(v_a_4657_);
lean_dec_ref_known(v___x_4656_, 1);
v_irrelevant_4658_ = lean_ctor_get(v_a_4657_, 1);
lean_inc(v_irrelevant_4658_);
v_lowerBounds_4659_ = lean_ctor_get(v_a_4657_, 2);
lean_inc(v_lowerBounds_4659_);
v_upperBounds_4660_ = lean_ctor_get(v_a_4657_, 3);
lean_inc(v_upperBounds_4660_);
lean_dec(v_a_4657_);
v_assumptions_4661_ = lean_ctor_get(v_p_4649_, 0);
v_eliminations_4662_ = lean_ctor_get(v_p_4649_, 4);
v_isSharedCheck_4677_ = !lean_is_exclusive(v_p_4649_);
if (v_isSharedCheck_4677_ == 0)
{
lean_object* v_unused_4678_; lean_object* v_unused_4679_; lean_object* v_unused_4680_; lean_object* v_unused_4681_; lean_object* v_unused_4682_; 
v_unused_4678_ = lean_ctor_get(v_p_4649_, 6);
lean_dec(v_unused_4678_);
v_unused_4679_ = lean_ctor_get(v_p_4649_, 5);
lean_dec(v_unused_4679_);
v_unused_4680_ = lean_ctor_get(v_p_4649_, 3);
lean_dec(v_unused_4680_);
v_unused_4681_ = lean_ctor_get(v_p_4649_, 2);
lean_dec(v_unused_4681_);
v_unused_4682_ = lean_ctor_get(v_p_4649_, 1);
lean_dec(v_unused_4682_);
v___x_4664_ = v_p_4649_;
v_isShared_4665_ = v_isSharedCheck_4677_;
goto v_resetjp_4663_;
}
else
{
lean_inc(v_eliminations_4662_);
lean_inc(v_assumptions_4661_);
lean_dec(v_p_4649_);
v___x_4664_ = lean_box(0);
v_isShared_4665_ = v_isSharedCheck_4677_;
goto v_resetjp_4663_;
}
v_resetjp_4663_:
{
lean_object* v___x_4666_; lean_object* v___x_4667_; uint8_t v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4672_; 
v___x_4666_ = lean_unsigned_to_nat(0u);
v___x_4667_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__2, &l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__2);
v___x_4668_ = 1;
v___x_4669_ = lean_box(0);
v___x_4670_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__3, &l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__3_once, _init_l_Lean_Elab_Tactic_Omega_Problem_solveEasyEquality___closed__3);
if (v_isShared_4665_ == 0)
{
lean_ctor_set(v___x_4664_, 6, v___x_4670_);
lean_ctor_set(v___x_4664_, 5, v___x_4669_);
lean_ctor_set(v___x_4664_, 3, v___x_4667_);
lean_ctor_set(v___x_4664_, 2, v___x_4667_);
lean_ctor_set(v___x_4664_, 1, v___x_4666_);
v___x_4672_ = v___x_4664_;
goto v_reusejp_4671_;
}
else
{
lean_object* v_reuseFailAlloc_4676_; 
v_reuseFailAlloc_4676_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_4676_, 0, v_assumptions_4661_);
lean_ctor_set(v_reuseFailAlloc_4676_, 1, v___x_4666_);
lean_ctor_set(v_reuseFailAlloc_4676_, 2, v___x_4667_);
lean_ctor_set(v_reuseFailAlloc_4676_, 3, v___x_4667_);
lean_ctor_set(v_reuseFailAlloc_4676_, 4, v_eliminations_4662_);
lean_ctor_set(v_reuseFailAlloc_4676_, 5, v___x_4669_);
lean_ctor_set(v_reuseFailAlloc_4676_, 6, v___x_4670_);
v___x_4672_ = v_reuseFailAlloc_4676_;
goto v_reusejp_4671_;
}
v_reusejp_4671_:
{
lean_object* v___x_4673_; lean_object* v_a_4674_; lean_object* v___x_4675_; 
lean_ctor_set_uint8(v___x_4672_, sizeof(void*)*7, v___x_4668_);
v___x_4673_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1___redArg(v_irrelevant_4658_, v___x_4672_);
lean_dec(v_irrelevant_4658_);
v_a_4674_ = lean_ctor_get(v___x_4673_, 0);
lean_inc(v_a_4674_);
lean_dec_ref(v___x_4673_);
v___x_4675_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2___redArg(v_upperBounds_4660_, v_lowerBounds_4659_, v_a_4674_, v_a_4650_, v_a_4651_, v_a_4652_, v_a_4653_);
lean_dec(v_lowerBounds_4659_);
lean_dec(v_upperBounds_4660_);
return v___x_4675_;
}
}
}
else
{
lean_object* v_a_4683_; lean_object* v___x_4685_; uint8_t v_isShared_4686_; uint8_t v_isSharedCheck_4690_; 
lean_dec_ref(v_p_4649_);
v_a_4683_ = lean_ctor_get(v___x_4656_, 0);
v_isSharedCheck_4690_ = !lean_is_exclusive(v___x_4656_);
if (v_isSharedCheck_4690_ == 0)
{
v___x_4685_ = v___x_4656_;
v_isShared_4686_ = v_isSharedCheck_4690_;
goto v_resetjp_4684_;
}
else
{
lean_inc(v_a_4683_);
lean_dec(v___x_4656_);
v___x_4685_ = lean_box(0);
v_isShared_4686_ = v_isSharedCheck_4690_;
goto v_resetjp_4684_;
}
v_resetjp_4684_:
{
lean_object* v___x_4688_; 
if (v_isShared_4686_ == 0)
{
v___x_4688_ = v___x_4685_;
goto v_reusejp_4687_;
}
else
{
lean_object* v_reuseFailAlloc_4689_; 
v_reuseFailAlloc_4689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4689_, 0, v_a_4683_);
v___x_4688_ = v_reuseFailAlloc_4689_;
goto v_reusejp_4687_;
}
v_reusejp_4687_:
{
return v___x_4688_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkin___boxed(lean_object* v_p_4691_, lean_object* v_a_4692_, lean_object* v_a_4693_, lean_object* v_a_4694_, lean_object* v_a_4695_, lean_object* v_a_4696_){
_start:
{
lean_object* v_res_4697_; 
v_res_4697_ = l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkin(v_p_4691_, v_a_4692_, v_a_4693_, v_a_4694_, v_a_4695_);
lean_dec(v_a_4695_);
lean_dec_ref(v_a_4694_);
lean_dec(v_a_4693_);
lean_dec_ref(v_a_4692_);
return v_res_4697_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0(lean_object* v_snd_4698_, lean_object* v_fst_4699_, lean_object* v_as_4700_, lean_object* v_as_x27_4701_, lean_object* v_b_4702_, lean_object* v_a_4703_, lean_object* v___y_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_, lean_object* v___y_4707_){
_start:
{
lean_object* v___x_4709_; 
v___x_4709_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0___redArg(v_snd_4698_, v_fst_4699_, v_as_x27_4701_, v_b_4702_);
return v___x_4709_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0___boxed(lean_object* v_snd_4710_, lean_object* v_fst_4711_, lean_object* v_as_4712_, lean_object* v_as_x27_4713_, lean_object* v_b_4714_, lean_object* v_a_4715_, lean_object* v___y_4716_, lean_object* v___y_4717_, lean_object* v___y_4718_, lean_object* v___y_4719_, lean_object* v___y_4720_){
_start:
{
lean_object* v_res_4721_; 
v_res_4721_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__0(v_snd_4710_, v_fst_4711_, v_as_4712_, v_as_x27_4713_, v_b_4714_, v_a_4715_, v___y_4716_, v___y_4717_, v___y_4718_, v___y_4719_);
lean_dec(v___y_4719_);
lean_dec_ref(v___y_4718_);
lean_dec(v___y_4717_);
lean_dec_ref(v___y_4716_);
lean_dec(v_as_x27_4713_);
lean_dec(v_as_4712_);
lean_dec(v_snd_4710_);
return v_res_4721_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1(lean_object* v_as_4722_, lean_object* v_as_x27_4723_, lean_object* v_b_4724_, lean_object* v_a_4725_, lean_object* v___y_4726_, lean_object* v___y_4727_, lean_object* v___y_4728_, lean_object* v___y_4729_){
_start:
{
lean_object* v___x_4731_; 
v___x_4731_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1___redArg(v_as_x27_4723_, v_b_4724_);
return v___x_4731_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1___boxed(lean_object* v_as_4732_, lean_object* v_as_x27_4733_, lean_object* v_b_4734_, lean_object* v_a_4735_, lean_object* v___y_4736_, lean_object* v___y_4737_, lean_object* v___y_4738_, lean_object* v___y_4739_, lean_object* v___y_4740_){
_start:
{
lean_object* v_res_4741_; 
v_res_4741_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__1(v_as_4732_, v_as_x27_4733_, v_b_4734_, v_a_4735_, v___y_4736_, v___y_4737_, v___y_4738_, v___y_4739_);
lean_dec(v___y_4739_);
lean_dec_ref(v___y_4738_);
lean_dec(v___y_4737_);
lean_dec_ref(v___y_4736_);
lean_dec(v_as_x27_4733_);
lean_dec(v_as_4732_);
return v_res_4741_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2(lean_object* v_upperBounds_4742_, lean_object* v_as_4743_, lean_object* v_as_x27_4744_, lean_object* v_b_4745_, lean_object* v_a_4746_, lean_object* v___y_4747_, lean_object* v___y_4748_, lean_object* v___y_4749_, lean_object* v___y_4750_){
_start:
{
lean_object* v___x_4752_; 
v___x_4752_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2___redArg(v_upperBounds_4742_, v_as_x27_4744_, v_b_4745_, v___y_4747_, v___y_4748_, v___y_4749_, v___y_4750_);
return v___x_4752_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2___boxed(lean_object* v_upperBounds_4753_, lean_object* v_as_4754_, lean_object* v_as_x27_4755_, lean_object* v_b_4756_, lean_object* v_a_4757_, lean_object* v___y_4758_, lean_object* v___y_4759_, lean_object* v___y_4760_, lean_object* v___y_4761_, lean_object* v___y_4762_){
_start:
{
lean_object* v_res_4763_; 
v_res_4763_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkin_spec__2(v_upperBounds_4753_, v_as_4754_, v_as_x27_4755_, v_b_4756_, v_a_4757_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_);
lean_dec(v___y_4761_);
lean_dec_ref(v___y_4760_);
lean_dec(v___y_4759_);
lean_dec_ref(v___y_4758_);
lean_dec(v_as_x27_4755_);
lean_dec(v_as_4754_);
lean_dec(v_upperBounds_4753_);
return v_res_4763_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__2(lean_object* v_x_4764_, lean_object* v_x_4765_){
_start:
{
if (lean_obj_tag(v_x_4765_) == 0)
{
lean_inc(v_x_4764_);
return v_x_4764_;
}
else
{
lean_object* v_key_4766_; lean_object* v_value_4767_; lean_object* v_tail_4768_; lean_object* v___x_4769_; lean_object* v___x_4770_; lean_object* v___x_4771_; 
v_key_4766_ = lean_ctor_get(v_x_4765_, 0);
v_value_4767_ = lean_ctor_get(v_x_4765_, 1);
v_tail_4768_ = lean_ctor_get(v_x_4765_, 2);
v___x_4769_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__2(v_x_4764_, v_tail_4768_);
lean_inc(v_value_4767_);
lean_inc(v_key_4766_);
v___x_4770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4770_, 0, v_key_4766_);
lean_ctor_set(v___x_4770_, 1, v_value_4767_);
v___x_4771_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4771_, 0, v___x_4770_);
lean_ctor_set(v___x_4771_, 1, v___x_4769_);
return v___x_4771_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__2___boxed(lean_object* v_x_4772_, lean_object* v_x_4773_){
_start:
{
lean_object* v_res_4774_; 
v_res_4774_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__2(v_x_4772_, v_x_4773_);
lean_dec(v_x_4773_);
lean_dec(v_x_4772_);
return v_res_4774_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__3(lean_object* v_as_4775_, size_t v_i_4776_, size_t v_stop_4777_, lean_object* v_b_4778_){
_start:
{
uint8_t v___x_4779_; 
v___x_4779_ = lean_usize_dec_eq(v_i_4776_, v_stop_4777_);
if (v___x_4779_ == 0)
{
size_t v___x_4780_; size_t v___x_4781_; lean_object* v___x_4782_; lean_object* v___x_4783_; 
v___x_4780_ = ((size_t)1ULL);
v___x_4781_ = lean_usize_sub(v_i_4776_, v___x_4780_);
v___x_4782_ = lean_array_uget_borrowed(v_as_4775_, v___x_4781_);
v___x_4783_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__2(v_b_4778_, v___x_4782_);
lean_dec(v_b_4778_);
v_i_4776_ = v___x_4781_;
v_b_4778_ = v___x_4783_;
goto _start;
}
else
{
return v_b_4778_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__3___boxed(lean_object* v_as_4785_, lean_object* v_i_4786_, lean_object* v_stop_4787_, lean_object* v_b_4788_){
_start:
{
size_t v_i_boxed_4789_; size_t v_stop_boxed_4790_; lean_object* v_res_4791_; 
v_i_boxed_4789_ = lean_unbox_usize(v_i_4786_);
lean_dec(v_i_4786_);
v_stop_boxed_4790_ = lean_unbox_usize(v_stop_4787_);
lean_dec(v_stop_4787_);
v_res_4791_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__3(v_as_4785_, v_i_boxed_4789_, v_stop_boxed_4790_, v_b_4788_);
lean_dec_ref(v_as_4785_);
return v_res_4791_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__1(lean_object* v_a_4792_, lean_object* v_a_4793_){
_start:
{
if (lean_obj_tag(v_a_4792_) == 0)
{
lean_object* v___x_4794_; 
v___x_4794_ = l_List_reverse___redArg(v_a_4793_);
return v___x_4794_;
}
else
{
lean_object* v_head_4795_; lean_object* v_tail_4796_; lean_object* v___x_4798_; uint8_t v_isShared_4799_; uint8_t v_isSharedCheck_4913_; 
v_head_4795_ = lean_ctor_get(v_a_4792_, 0);
v_tail_4796_ = lean_ctor_get(v_a_4792_, 1);
v_isSharedCheck_4913_ = !lean_is_exclusive(v_a_4792_);
if (v_isSharedCheck_4913_ == 0)
{
v___x_4798_ = v_a_4792_;
v_isShared_4799_ = v_isSharedCheck_4913_;
goto v_resetjp_4797_;
}
else
{
lean_inc(v_tail_4796_);
lean_inc(v_head_4795_);
lean_dec(v_a_4792_);
v___x_4798_ = lean_box(0);
v_isShared_4799_ = v_isSharedCheck_4913_;
goto v_resetjp_4797_;
}
v_resetjp_4797_:
{
lean_object* v___y_4801_; lean_object* v_snd_4806_; lean_object* v_constraint_4807_; lean_object* v_fst_4808_; lean_object* v_lowerBound_4809_; lean_object* v_upperBound_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___y_4815_; lean_object* v___y_4816_; 
v_snd_4806_ = lean_ctor_get(v_head_4795_, 1);
v_constraint_4807_ = lean_ctor_get(v_snd_4806_, 1);
lean_inc_ref(v_constraint_4807_);
v_fst_4808_ = lean_ctor_get(v_head_4795_, 0);
lean_inc(v_fst_4808_);
lean_dec(v_head_4795_);
v_lowerBound_4809_ = lean_ctor_get(v_constraint_4807_, 0);
lean_inc(v_lowerBound_4809_);
v_upperBound_4810_ = lean_ctor_get(v_constraint_4807_, 1);
lean_inc(v_upperBound_4810_);
lean_dec_ref(v_constraint_4807_);
v___x_4811_ = l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0(v_fst_4808_);
lean_dec(v_fst_4808_);
v___x_4812_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__0));
v___x_4813_ = lean_string_append(v___x_4811_, v___x_4812_);
if (lean_obj_tag(v_lowerBound_4809_) == 0)
{
if (lean_obj_tag(v_upperBound_4810_) == 0)
{
lean_object* v___x_4821_; lean_object* v___x_4822_; 
v___x_4821_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__2));
v___x_4822_ = lean_string_append(v___x_4813_, v___x_4821_);
v___y_4801_ = v___x_4822_;
goto v___jp_4800_;
}
else
{
lean_object* v_val_4823_; lean_object* v___x_4824_; lean_object* v___y_4826_; lean_object* v_intZero_4831_; uint8_t v_isNeg_4832_; 
v_val_4823_ = lean_ctor_get(v_upperBound_4810_, 0);
lean_inc(v_val_4823_);
lean_dec_ref_known(v_upperBound_4810_, 1);
v___x_4824_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__3));
v_intZero_4831_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_4832_ = lean_int_dec_lt(v_val_4823_, v_intZero_4831_);
if (v_isNeg_4832_ == 0)
{
lean_object* v_a_4833_; lean_object* v___x_4834_; 
v_a_4833_ = lean_nat_abs(v_val_4823_);
lean_dec(v_val_4823_);
v___x_4834_ = l_Nat_reprFast(v_a_4833_);
v___y_4826_ = v___x_4834_;
goto v___jp_4825_;
}
else
{
lean_object* v_abs_4835_; lean_object* v_one_4836_; lean_object* v_a_4837_; lean_object* v___x_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; lean_object* v___x_4841_; 
v_abs_4835_ = lean_nat_abs(v_val_4823_);
lean_dec(v_val_4823_);
v_one_4836_ = lean_unsigned_to_nat(1u);
v_a_4837_ = lean_nat_sub(v_abs_4835_, v_one_4836_);
lean_dec(v_abs_4835_);
v___x_4838_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_4839_ = lean_nat_add(v_a_4837_, v_one_4836_);
lean_dec(v_a_4837_);
v___x_4840_ = l_Nat_reprFast(v___x_4839_);
v___x_4841_ = lean_string_append(v___x_4838_, v___x_4840_);
lean_dec_ref(v___x_4840_);
v___y_4826_ = v___x_4841_;
goto v___jp_4825_;
}
v___jp_4825_:
{
lean_object* v___x_4827_; lean_object* v___x_4828_; lean_object* v___x_4829_; lean_object* v___x_4830_; 
v___x_4827_ = lean_string_append(v___x_4824_, v___y_4826_);
lean_dec_ref(v___y_4826_);
v___x_4828_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_4829_ = lean_string_append(v___x_4827_, v___x_4828_);
v___x_4830_ = lean_string_append(v___x_4813_, v___x_4829_);
lean_dec_ref(v___x_4829_);
v___y_4801_ = v___x_4830_;
goto v___jp_4800_;
}
}
}
else
{
if (lean_obj_tag(v_upperBound_4810_) == 0)
{
lean_object* v_val_4842_; lean_object* v___x_4843_; lean_object* v___y_4845_; lean_object* v_intZero_4850_; uint8_t v_isNeg_4851_; 
v_val_4842_ = lean_ctor_get(v_lowerBound_4809_, 0);
lean_inc(v_val_4842_);
lean_dec_ref_known(v_lowerBound_4809_, 1);
v___x_4843_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_4850_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_4851_ = lean_int_dec_lt(v_val_4842_, v_intZero_4850_);
if (v_isNeg_4851_ == 0)
{
lean_object* v_a_4852_; lean_object* v___x_4853_; 
v_a_4852_ = lean_nat_abs(v_val_4842_);
lean_dec(v_val_4842_);
v___x_4853_ = l_Nat_reprFast(v_a_4852_);
v___y_4845_ = v___x_4853_;
goto v___jp_4844_;
}
else
{
lean_object* v_abs_4854_; lean_object* v_one_4855_; lean_object* v_a_4856_; lean_object* v___x_4857_; lean_object* v___x_4858_; lean_object* v___x_4859_; lean_object* v___x_4860_; 
v_abs_4854_ = lean_nat_abs(v_val_4842_);
lean_dec(v_val_4842_);
v_one_4855_ = lean_unsigned_to_nat(1u);
v_a_4856_ = lean_nat_sub(v_abs_4854_, v_one_4855_);
lean_dec(v_abs_4854_);
v___x_4857_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_4858_ = lean_nat_add(v_a_4856_, v_one_4855_);
lean_dec(v_a_4856_);
v___x_4859_ = l_Nat_reprFast(v___x_4858_);
v___x_4860_ = lean_string_append(v___x_4857_, v___x_4859_);
lean_dec_ref(v___x_4859_);
v___y_4845_ = v___x_4860_;
goto v___jp_4844_;
}
v___jp_4844_:
{
lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; 
v___x_4846_ = lean_string_append(v___x_4843_, v___y_4845_);
lean_dec_ref(v___y_4845_);
v___x_4847_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__5));
v___x_4848_ = lean_string_append(v___x_4846_, v___x_4847_);
v___x_4849_ = lean_string_append(v___x_4813_, v___x_4848_);
lean_dec_ref(v___x_4848_);
v___y_4801_ = v___x_4849_;
goto v___jp_4800_;
}
}
else
{
lean_object* v_val_4861_; lean_object* v_val_4862_; uint8_t v___x_4863_; 
v_val_4861_ = lean_ctor_get(v_lowerBound_4809_, 0);
lean_inc(v_val_4861_);
lean_dec_ref_known(v_lowerBound_4809_, 1);
v_val_4862_ = lean_ctor_get(v_upperBound_4810_, 0);
lean_inc(v_val_4862_);
lean_dec_ref_known(v_upperBound_4810_, 1);
v___x_4863_ = lean_int_dec_lt(v_val_4862_, v_val_4861_);
if (v___x_4863_ == 0)
{
uint8_t v___x_4864_; 
v___x_4864_ = lean_int_dec_eq(v_val_4861_, v_val_4862_);
if (v___x_4864_ == 0)
{
lean_object* v___x_4865_; lean_object* v___y_4867_; lean_object* v_intZero_4882_; uint8_t v_isNeg_4883_; 
v___x_4865_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__1));
v_intZero_4882_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_4883_ = lean_int_dec_lt(v_val_4861_, v_intZero_4882_);
if (v_isNeg_4883_ == 0)
{
lean_object* v_a_4884_; lean_object* v___x_4885_; 
v_a_4884_ = lean_nat_abs(v_val_4861_);
lean_dec(v_val_4861_);
v___x_4885_ = l_Nat_reprFast(v_a_4884_);
v___y_4867_ = v___x_4885_;
goto v___jp_4866_;
}
else
{
lean_object* v_abs_4886_; lean_object* v_one_4887_; lean_object* v_a_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; 
v_abs_4886_ = lean_nat_abs(v_val_4861_);
lean_dec(v_val_4861_);
v_one_4887_ = lean_unsigned_to_nat(1u);
v_a_4888_ = lean_nat_sub(v_abs_4886_, v_one_4887_);
lean_dec(v_abs_4886_);
v___x_4889_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_4890_ = lean_nat_add(v_a_4888_, v_one_4887_);
lean_dec(v_a_4888_);
v___x_4891_ = l_Nat_reprFast(v___x_4890_);
v___x_4892_ = lean_string_append(v___x_4889_, v___x_4891_);
lean_dec_ref(v___x_4891_);
v___y_4867_ = v___x_4892_;
goto v___jp_4866_;
}
v___jp_4866_:
{
lean_object* v___x_4868_; lean_object* v___x_4869_; lean_object* v___x_4870_; lean_object* v_intZero_4871_; uint8_t v_isNeg_4872_; 
v___x_4868_ = lean_string_append(v___x_4865_, v___y_4867_);
lean_dec_ref(v___y_4867_);
v___x_4869_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0_spec__0___closed__0));
v___x_4870_ = lean_string_append(v___x_4868_, v___x_4869_);
v_intZero_4871_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_4872_ = lean_int_dec_lt(v_val_4862_, v_intZero_4871_);
if (v_isNeg_4872_ == 0)
{
lean_object* v_a_4873_; lean_object* v___x_4874_; 
v_a_4873_ = lean_nat_abs(v_val_4862_);
lean_dec(v_val_4862_);
v___x_4874_ = l_Nat_reprFast(v_a_4873_);
v___y_4815_ = v___x_4870_;
v___y_4816_ = v___x_4874_;
goto v___jp_4814_;
}
else
{
lean_object* v_abs_4875_; lean_object* v_one_4876_; lean_object* v_a_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; 
v_abs_4875_ = lean_nat_abs(v_val_4862_);
lean_dec(v_val_4862_);
v_one_4876_ = lean_unsigned_to_nat(1u);
v_a_4877_ = lean_nat_sub(v_abs_4875_, v_one_4876_);
lean_dec(v_abs_4875_);
v___x_4878_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_4879_ = lean_nat_add(v_a_4877_, v_one_4876_);
lean_dec(v_a_4877_);
v___x_4880_ = l_Nat_reprFast(v___x_4879_);
v___x_4881_ = lean_string_append(v___x_4878_, v___x_4880_);
lean_dec_ref(v___x_4880_);
v___y_4815_ = v___x_4870_;
v___y_4816_ = v___x_4881_;
goto v___jp_4814_;
}
}
}
else
{
lean_object* v___x_4893_; lean_object* v___y_4895_; lean_object* v_intZero_4900_; uint8_t v_isNeg_4901_; 
lean_dec(v_val_4862_);
v___x_4893_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__6));
v_intZero_4900_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18, &l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18_once, _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo___lam__0___closed__18);
v_isNeg_4901_ = lean_int_dec_lt(v_val_4861_, v_intZero_4900_);
if (v_isNeg_4901_ == 0)
{
lean_object* v_a_4902_; lean_object* v___x_4903_; 
v_a_4902_ = lean_nat_abs(v_val_4861_);
lean_dec(v_val_4861_);
v___x_4903_ = l_Nat_reprFast(v_a_4902_);
v___y_4895_ = v___x_4903_;
goto v___jp_4894_;
}
else
{
lean_object* v_abs_4904_; lean_object* v_one_4905_; lean_object* v_a_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; 
v_abs_4904_ = lean_nat_abs(v_val_4861_);
lean_dec(v_val_4861_);
v_one_4905_ = lean_unsigned_to_nat(1u);
v_a_4906_ = lean_nat_sub(v_abs_4904_, v_one_4905_);
lean_dec(v_abs_4904_);
v___x_4907_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__4));
v___x_4908_ = lean_nat_add(v_a_4906_, v_one_4905_);
lean_dec(v_a_4906_);
v___x_4909_ = l_Nat_reprFast(v___x_4908_);
v___x_4910_ = lean_string_append(v___x_4907_, v___x_4909_);
lean_dec_ref(v___x_4909_);
v___y_4895_ = v___x_4910_;
goto v___jp_4894_;
}
v___jp_4894_:
{
lean_object* v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; 
v___x_4896_ = lean_string_append(v___x_4893_, v___y_4895_);
lean_dec_ref(v___y_4895_);
v___x_4897_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__7));
v___x_4898_ = lean_string_append(v___x_4896_, v___x_4897_);
v___x_4899_ = lean_string_append(v___x_4813_, v___x_4898_);
lean_dec_ref(v___x_4898_);
v___y_4801_ = v___x_4899_;
goto v___jp_4800_;
}
}
}
else
{
lean_object* v___x_4911_; lean_object* v___x_4912_; 
lean_dec(v_val_4862_);
lean_dec(v_val_4861_);
v___x_4911_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Justification_toString___closed__8));
v___x_4912_ = lean_string_append(v___x_4813_, v___x_4911_);
v___y_4801_ = v___x_4912_;
goto v___jp_4800_;
}
}
}
v___jp_4800_:
{
lean_object* v___x_4803_; 
if (v_isShared_4799_ == 0)
{
lean_ctor_set(v___x_4798_, 1, v_a_4793_);
lean_ctor_set(v___x_4798_, 0, v___y_4801_);
v___x_4803_ = v___x_4798_;
goto v_reusejp_4802_;
}
else
{
lean_object* v_reuseFailAlloc_4805_; 
v_reuseFailAlloc_4805_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4805_, 0, v___y_4801_);
lean_ctor_set(v_reuseFailAlloc_4805_, 1, v_a_4793_);
v___x_4803_ = v_reuseFailAlloc_4805_;
goto v_reusejp_4802_;
}
v_reusejp_4802_:
{
v_a_4792_ = v_tail_4796_;
v_a_4793_ = v___x_4803_;
goto _start;
}
}
v___jp_4814_:
{
lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4819_; lean_object* v___x_4820_; 
v___x_4817_ = lean_string_append(v___y_4815_, v___y_4816_);
lean_dec_ref(v___y_4816_);
v___x_4818_ = ((lean_object*)(l_List_toString___at___00Lean_Elab_Tactic_Omega_Justification_toString_spec__0___closed__2));
v___x_4819_ = lean_string_append(v___x_4817_, v___x_4818_);
v___x_4820_ = lean_string_append(v___x_4813_, v___x_4819_);
lean_dec_ref(v___x_4819_);
v___y_4801_ = v___x_4820_;
goto v___jp_4800_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0___redArg(lean_object* v_cls_4914_, lean_object* v_msg_4915_, lean_object* v___y_4916_, lean_object* v___y_4917_, lean_object* v___y_4918_, lean_object* v___y_4919_){
_start:
{
lean_object* v_ref_4921_; lean_object* v___x_4922_; lean_object* v_a_4923_; lean_object* v___x_4925_; uint8_t v_isShared_4926_; uint8_t v_isSharedCheck_4967_; 
v_ref_4921_ = lean_ctor_get(v___y_4918_, 2);
v___x_4922_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Omega_Problem_dealWithHardEquality_spec__0_spec__0(v_msg_4915_, v___y_4916_, v___y_4917_, v___y_4918_, v___y_4919_);
v_a_4923_ = lean_ctor_get(v___x_4922_, 0);
v_isSharedCheck_4967_ = !lean_is_exclusive(v___x_4922_);
if (v_isSharedCheck_4967_ == 0)
{
v___x_4925_ = v___x_4922_;
v_isShared_4926_ = v_isSharedCheck_4967_;
goto v_resetjp_4924_;
}
else
{
lean_inc(v_a_4923_);
lean_dec(v___x_4922_);
v___x_4925_ = lean_box(0);
v_isShared_4926_ = v_isSharedCheck_4967_;
goto v_resetjp_4924_;
}
v_resetjp_4924_:
{
lean_object* v___x_4927_; lean_object* v_traceState_4928_; lean_object* v_env_4929_; lean_object* v_nextMacroScope_4930_; lean_object* v_ngen_4931_; lean_object* v_auxDeclNGen_4932_; lean_object* v_cache_4933_; lean_object* v_messages_4934_; lean_object* v_infoState_4935_; lean_object* v_snapshotTasks_4936_; lean_object* v___x_4938_; uint8_t v_isShared_4939_; uint8_t v_isSharedCheck_4966_; 
v___x_4927_ = lean_st_ref_take(v___y_4919_);
v_traceState_4928_ = lean_ctor_get(v___x_4927_, 4);
v_env_4929_ = lean_ctor_get(v___x_4927_, 0);
v_nextMacroScope_4930_ = lean_ctor_get(v___x_4927_, 1);
v_ngen_4931_ = lean_ctor_get(v___x_4927_, 2);
v_auxDeclNGen_4932_ = lean_ctor_get(v___x_4927_, 3);
v_cache_4933_ = lean_ctor_get(v___x_4927_, 5);
v_messages_4934_ = lean_ctor_get(v___x_4927_, 6);
v_infoState_4935_ = lean_ctor_get(v___x_4927_, 7);
v_snapshotTasks_4936_ = lean_ctor_get(v___x_4927_, 8);
v_isSharedCheck_4966_ = !lean_is_exclusive(v___x_4927_);
if (v_isSharedCheck_4966_ == 0)
{
v___x_4938_ = v___x_4927_;
v_isShared_4939_ = v_isSharedCheck_4966_;
goto v_resetjp_4937_;
}
else
{
lean_inc(v_snapshotTasks_4936_);
lean_inc(v_infoState_4935_);
lean_inc(v_messages_4934_);
lean_inc(v_cache_4933_);
lean_inc(v_traceState_4928_);
lean_inc(v_auxDeclNGen_4932_);
lean_inc(v_ngen_4931_);
lean_inc(v_nextMacroScope_4930_);
lean_inc(v_env_4929_);
lean_dec(v___x_4927_);
v___x_4938_ = lean_box(0);
v_isShared_4939_ = v_isSharedCheck_4966_;
goto v_resetjp_4937_;
}
v_resetjp_4937_:
{
uint64_t v_tid_4940_; lean_object* v_traces_4941_; lean_object* v___x_4943_; uint8_t v_isShared_4944_; uint8_t v_isSharedCheck_4965_; 
v_tid_4940_ = lean_ctor_get_uint64(v_traceState_4928_, sizeof(void*)*1);
v_traces_4941_ = lean_ctor_get(v_traceState_4928_, 0);
v_isSharedCheck_4965_ = !lean_is_exclusive(v_traceState_4928_);
if (v_isSharedCheck_4965_ == 0)
{
v___x_4943_ = v_traceState_4928_;
v_isShared_4944_ = v_isSharedCheck_4965_;
goto v_resetjp_4942_;
}
else
{
lean_inc(v_traces_4941_);
lean_dec(v_traceState_4928_);
v___x_4943_ = lean_box(0);
v_isShared_4944_ = v_isSharedCheck_4965_;
goto v_resetjp_4942_;
}
v_resetjp_4942_:
{
lean_object* v___x_4945_; lean_object* v___x_4946_; double v___x_4947_; uint8_t v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; lean_object* v___x_4953_; lean_object* v___x_4954_; lean_object* v___x_4956_; 
v___x_4945_ = lean_box(0);
v___x_4946_ = lean_box(0);
v___x_4947_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__0);
v___x_4948_ = 0;
v___x_4949_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__1));
v___x_4950_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4950_, 0, v_cls_4914_);
lean_ctor_set(v___x_4950_, 1, v___x_4946_);
lean_ctor_set(v___x_4950_, 2, v___x_4949_);
lean_ctor_set_float(v___x_4950_, sizeof(void*)*3, v___x_4947_);
lean_ctor_set_float(v___x_4950_, sizeof(void*)*3 + 8, v___x_4947_);
lean_ctor_set_uint8(v___x_4950_, sizeof(void*)*3 + 16, v___x_4948_);
v___x_4951_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__0___closed__1));
v___x_4952_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4952_, 0, v___x_4950_);
lean_ctor_set(v___x_4952_, 1, v_a_4923_);
lean_ctor_set(v___x_4952_, 2, v___x_4951_);
lean_inc(v_ref_4921_);
v___x_4953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4953_, 0, v_ref_4921_);
lean_ctor_set(v___x_4953_, 1, v___x_4952_);
v___x_4954_ = l_Lean_PersistentArray_push___redArg(v_traces_4941_, v___x_4953_);
if (v_isShared_4944_ == 0)
{
lean_ctor_set(v___x_4943_, 0, v___x_4954_);
v___x_4956_ = v___x_4943_;
goto v_reusejp_4955_;
}
else
{
lean_object* v_reuseFailAlloc_4964_; 
v_reuseFailAlloc_4964_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4964_, 0, v___x_4954_);
lean_ctor_set_uint64(v_reuseFailAlloc_4964_, sizeof(void*)*1, v_tid_4940_);
v___x_4956_ = v_reuseFailAlloc_4964_;
goto v_reusejp_4955_;
}
v_reusejp_4955_:
{
lean_object* v___x_4958_; 
if (v_isShared_4939_ == 0)
{
lean_ctor_set(v___x_4938_, 4, v___x_4956_);
v___x_4958_ = v___x_4938_;
goto v_reusejp_4957_;
}
else
{
lean_object* v_reuseFailAlloc_4963_; 
v_reuseFailAlloc_4963_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4963_, 0, v_env_4929_);
lean_ctor_set(v_reuseFailAlloc_4963_, 1, v_nextMacroScope_4930_);
lean_ctor_set(v_reuseFailAlloc_4963_, 2, v_ngen_4931_);
lean_ctor_set(v_reuseFailAlloc_4963_, 3, v_auxDeclNGen_4932_);
lean_ctor_set(v_reuseFailAlloc_4963_, 4, v___x_4956_);
lean_ctor_set(v_reuseFailAlloc_4963_, 5, v_cache_4933_);
lean_ctor_set(v_reuseFailAlloc_4963_, 6, v_messages_4934_);
lean_ctor_set(v_reuseFailAlloc_4963_, 7, v_infoState_4935_);
lean_ctor_set(v_reuseFailAlloc_4963_, 8, v_snapshotTasks_4936_);
v___x_4958_ = v_reuseFailAlloc_4963_;
goto v_reusejp_4957_;
}
v_reusejp_4957_:
{
lean_object* v___x_4959_; lean_object* v___x_4961_; 
v___x_4959_ = lean_st_ref_put(v___y_4919_, v___x_4958_);
if (v_isShared_4926_ == 0)
{
lean_ctor_set(v___x_4925_, 0, v___x_4945_);
v___x_4961_ = v___x_4925_;
goto v_reusejp_4960_;
}
else
{
lean_object* v_reuseFailAlloc_4962_; 
v_reuseFailAlloc_4962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4962_, 0, v___x_4945_);
v___x_4961_ = v_reuseFailAlloc_4962_;
goto v_reusejp_4960_;
}
v_reusejp_4960_:
{
return v___x_4961_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0___redArg___boxed(lean_object* v_cls_4968_, lean_object* v_msg_4969_, lean_object* v___y_4970_, lean_object* v___y_4971_, lean_object* v___y_4972_, lean_object* v___y_4973_, lean_object* v___y_4974_){
_start:
{
lean_object* v_res_4975_; 
v_res_4975_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0___redArg(v_cls_4968_, v_msg_4969_, v___y_4970_, v___y_4971_, v___y_4972_, v___y_4973_);
lean_dec(v___y_4973_);
lean_dec_ref(v___y_4972_);
lean_dec(v___y_4971_);
lean_dec_ref(v___y_4970_);
return v_res_4975_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_elimination___closed__1(void){
_start:
{
lean_object* v___x_4977_; lean_object* v___x_4978_; 
v___x_4977_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_elimination___closed__0));
v___x_4978_ = l_Lean_stringToMessageData(v___x_4977_);
return v___x_4978_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_Problem_runOmega___closed__1(void){
_start:
{
lean_object* v___x_4980_; lean_object* v___x_4981_; 
v___x_4980_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_runOmega___closed__0));
v___x_4981_ = l_Lean_stringToMessageData(v___x_4980_);
return v___x_4981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_runOmega(lean_object* v_p_4982_, lean_object* v_a_4983_, lean_object* v_a_4984_, lean_object* v_a_4985_, uint8_t v_a_4986_, lean_object* v_a_4987_, lean_object* v_a_4988_, lean_object* v_a_4989_, lean_object* v_a_4990_, lean_object* v_a_4991_){
_start:
{
lean_object* v___y_4994_; lean_object* v___y_4995_; lean_object* v___y_4996_; uint8_t v___y_4997_; lean_object* v___y_4998_; lean_object* v___y_4999_; lean_object* v___y_5000_; lean_object* v___y_5001_; lean_object* v___y_5002_; lean_object* v_toCold_5008_; lean_object* v_options_5009_; uint8_t v_hasTrace_5010_; 
v_toCold_5008_ = lean_ctor_get(v_a_4990_, 0);
v_options_5009_ = lean_ctor_get(v_toCold_5008_, 2);
v_hasTrace_5010_ = lean_ctor_get_uint8(v_options_5009_, sizeof(void*)*1);
if (v_hasTrace_5010_ == 0)
{
v___y_4994_ = v_a_4983_;
v___y_4995_ = v_a_4984_;
v___y_4996_ = v_a_4985_;
v___y_4997_ = v_a_4986_;
v___y_4998_ = v_a_4987_;
v___y_4999_ = v_a_4988_;
v___y_5000_ = v_a_4989_;
v___y_5001_ = v_a_4990_;
v___y_5002_ = v_a_4991_;
goto v___jp_4993_;
}
else
{
lean_object* v_inheritedTraceOptions_5011_; lean_object* v_cls_5012_; lean_object* v___x_5013_; uint8_t v___x_5014_; 
v_inheritedTraceOptions_5011_ = lean_ctor_get(v_toCold_5008_, 11);
v_cls_5012_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__1_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_5013_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0);
v___x_5014_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5011_, v_options_5009_, v___x_5013_);
if (v___x_5014_ == 0)
{
v___y_4994_ = v_a_4983_;
v___y_4995_ = v_a_4984_;
v___y_4996_ = v_a_4985_;
v___y_4997_ = v_a_4986_;
v___y_4998_ = v_a_4987_;
v___y_4999_ = v_a_4988_;
v___y_5000_ = v_a_4989_;
v___y_5001_ = v_a_4990_;
v___y_5002_ = v_a_4991_;
goto v___jp_4993_;
}
else
{
lean_object* v_constraints_5015_; uint8_t v_possible_5016_; lean_object* v___x_5017_; lean_object* v___y_5019_; 
v_constraints_5015_ = lean_ctor_get(v_p_4982_, 2);
v_possible_5016_ = lean_ctor_get_uint8(v_p_4982_, sizeof(void*)*7);
v___x_5017_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_runOmega___closed__1, &l_Lean_Elab_Tactic_Omega_Problem_runOmega___closed__1_once, _init_l_Lean_Elab_Tactic_Omega_Problem_runOmega___closed__1);
if (v_possible_5016_ == 0)
{
lean_object* v___x_5032_; 
v___x_5032_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__0));
v___y_5019_ = v___x_5032_;
goto v___jp_5018_;
}
else
{
uint8_t v___x_5033_; 
v___x_5033_ = l_Lean_Elab_Tactic_Omega_Problem_isEmpty(v_p_4982_);
if (v___x_5033_ == 0)
{
lean_object* v_buckets_5034_; lean_object* v___x_5035_; lean_object* v___y_5037_; lean_object* v___x_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; uint8_t v___x_5044_; 
v_buckets_5034_ = lean_ctor_get(v_constraints_5015_, 1);
v___x_5035_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0));
v___x_5041_ = lean_box(0);
v___x_5042_ = lean_array_get_size(v_buckets_5034_);
v___x_5043_ = lean_unsigned_to_nat(0u);
v___x_5044_ = lean_nat_dec_lt(v___x_5043_, v___x_5042_);
if (v___x_5044_ == 0)
{
v___y_5037_ = v___x_5041_;
goto v___jp_5036_;
}
else
{
size_t v___x_5045_; size_t v___x_5046_; lean_object* v___x_5047_; 
v___x_5045_ = lean_usize_of_nat(v___x_5042_);
v___x_5046_ = ((size_t)0ULL);
v___x_5047_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__3(v_buckets_5034_, v___x_5045_, v___x_5046_, v___x_5041_);
v___y_5037_ = v___x_5047_;
goto v___jp_5036_;
}
v___jp_5036_:
{
lean_object* v___x_5038_; lean_object* v___x_5039_; lean_object* v___x_5040_; 
v___x_5038_ = lean_box(0);
v___x_5039_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__1(v___y_5037_, v___x_5038_);
v___x_5040_ = l_String_intercalate(v___x_5035_, v___x_5039_);
v___y_5019_ = v___x_5040_;
goto v___jp_5018_;
}
}
else
{
lean_object* v___x_5048_; 
v___x_5048_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__11));
v___y_5019_ = v___x_5048_;
goto v___jp_5018_;
}
}
v___jp_5018_:
{
lean_object* v___x_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; 
v___x_5020_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5020_, 0, v___y_5019_);
v___x_5021_ = l_Lean_MessageData_ofFormat(v___x_5020_);
v___x_5022_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5022_, 0, v___x_5017_);
lean_ctor_set(v___x_5022_, 1, v___x_5021_);
v___x_5023_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0___redArg(v_cls_5012_, v___x_5022_, v_a_4988_, v_a_4989_, v_a_4990_, v_a_4991_);
if (lean_obj_tag(v___x_5023_) == 0)
{
lean_dec_ref_known(v___x_5023_, 1);
v___y_4994_ = v_a_4983_;
v___y_4995_ = v_a_4984_;
v___y_4996_ = v_a_4985_;
v___y_4997_ = v_a_4986_;
v___y_4998_ = v_a_4987_;
v___y_4999_ = v_a_4988_;
v___y_5000_ = v_a_4989_;
v___y_5001_ = v_a_4990_;
v___y_5002_ = v_a_4991_;
goto v___jp_4993_;
}
else
{
lean_object* v_a_5024_; lean_object* v___x_5026_; uint8_t v_isShared_5027_; uint8_t v_isSharedCheck_5031_; 
lean_dec_ref(v_p_4982_);
v_a_5024_ = lean_ctor_get(v___x_5023_, 0);
v_isSharedCheck_5031_ = !lean_is_exclusive(v___x_5023_);
if (v_isSharedCheck_5031_ == 0)
{
v___x_5026_ = v___x_5023_;
v_isShared_5027_ = v_isSharedCheck_5031_;
goto v_resetjp_5025_;
}
else
{
lean_inc(v_a_5024_);
lean_dec(v___x_5023_);
v___x_5026_ = lean_box(0);
v_isShared_5027_ = v_isSharedCheck_5031_;
goto v_resetjp_5025_;
}
v_resetjp_5025_:
{
lean_object* v___x_5029_; 
if (v_isShared_5027_ == 0)
{
v___x_5029_ = v___x_5026_;
goto v_reusejp_5028_;
}
else
{
lean_object* v_reuseFailAlloc_5030_; 
v_reuseFailAlloc_5030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5030_, 0, v_a_5024_);
v___x_5029_ = v_reuseFailAlloc_5030_;
goto v_reusejp_5028_;
}
v_reusejp_5028_:
{
return v___x_5029_;
}
}
}
}
}
}
v___jp_4993_:
{
uint8_t v_possible_5003_; 
v_possible_5003_ = lean_ctor_get_uint8(v_p_4982_, sizeof(void*)*7);
if (v_possible_5003_ == 0)
{
lean_object* v___x_5004_; 
v___x_5004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5004_, 0, v_p_4982_);
return v___x_5004_;
}
else
{
lean_object* v___x_5005_; 
v___x_5005_ = l_Lean_Elab_Tactic_Omega_Problem_solveEqualities(v_p_4982_, v___y_4994_, v___y_4995_, v___y_4996_, v___y_4997_, v___y_4998_, v___y_4999_, v___y_5000_, v___y_5001_, v___y_5002_);
if (lean_obj_tag(v___x_5005_) == 0)
{
lean_object* v_a_5006_; lean_object* v___x_5007_; 
v_a_5006_ = lean_ctor_get(v___x_5005_, 0);
lean_inc(v_a_5006_);
lean_dec_ref_known(v___x_5005_, 1);
v___x_5007_ = l_Lean_Elab_Tactic_Omega_Problem_elimination(v_a_5006_, v___y_4994_, v___y_4995_, v___y_4996_, v___y_4997_, v___y_4998_, v___y_4999_, v___y_5000_, v___y_5001_, v___y_5002_);
return v___x_5007_;
}
else
{
return v___x_5005_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_elimination(lean_object* v_p_5049_, lean_object* v_a_5050_, lean_object* v_a_5051_, lean_object* v_a_5052_, uint8_t v_a_5053_, lean_object* v_a_5054_, lean_object* v_a_5055_, lean_object* v_a_5056_, lean_object* v_a_5057_, lean_object* v_a_5058_){
_start:
{
lean_object* v___y_5061_; lean_object* v___y_5062_; lean_object* v___y_5063_; uint8_t v___y_5064_; lean_object* v___y_5065_; lean_object* v___y_5066_; lean_object* v___y_5067_; lean_object* v___y_5068_; lean_object* v___y_5069_; uint8_t v_possible_5073_; 
v_possible_5073_ = lean_ctor_get_uint8(v_p_5049_, sizeof(void*)*7);
if (v_possible_5073_ == 0)
{
lean_object* v___x_5074_; 
v___x_5074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5074_, 0, v_p_5049_);
return v___x_5074_;
}
else
{
lean_object* v_constraints_5075_; uint8_t v___x_5076_; 
v_constraints_5075_ = lean_ctor_get(v_p_5049_, 2);
v___x_5076_ = l_Lean_Elab_Tactic_Omega_Problem_isEmpty(v_p_5049_);
if (v___x_5076_ == 0)
{
lean_object* v_toCold_5077_; lean_object* v_options_5078_; uint8_t v_hasTrace_5079_; 
v_toCold_5077_ = lean_ctor_get(v_a_5057_, 0);
v_options_5078_ = lean_ctor_get(v_toCold_5077_, 2);
v_hasTrace_5079_ = lean_ctor_get_uint8(v_options_5078_, sizeof(void*)*1);
if (v_hasTrace_5079_ == 0)
{
v___y_5061_ = v_a_5050_;
v___y_5062_ = v_a_5051_;
v___y_5063_ = v_a_5052_;
v___y_5064_ = v_a_5053_;
v___y_5065_ = v_a_5054_;
v___y_5066_ = v_a_5055_;
v___y_5067_ = v_a_5056_;
v___y_5068_ = v_a_5057_;
v___y_5069_ = v_a_5058_;
goto v___jp_5060_;
}
else
{
lean_object* v_inheritedTraceOptions_5080_; lean_object* v_cls_5081_; lean_object* v___x_5082_; uint8_t v___x_5083_; 
v_inheritedTraceOptions_5080_ = lean_ctor_get(v_toCold_5077_, 11);
v_cls_5081_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn___closed__1_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_));
v___x_5082_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_Omega_Problem_fourierMotzkinSelect_spec__1___redArg___closed__0);
v___x_5083_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5080_, v_options_5078_, v___x_5082_);
if (v___x_5083_ == 0)
{
v___y_5061_ = v_a_5050_;
v___y_5062_ = v_a_5051_;
v___y_5063_ = v_a_5052_;
v___y_5064_ = v_a_5053_;
v___y_5065_ = v_a_5054_;
v___y_5066_ = v_a_5055_;
v___y_5067_ = v_a_5056_;
v___y_5068_ = v_a_5057_;
v___y_5069_ = v_a_5058_;
goto v___jp_5060_;
}
else
{
lean_object* v___x_5084_; lean_object* v___y_5086_; 
v___x_5084_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_Problem_elimination___closed__1, &l_Lean_Elab_Tactic_Omega_Problem_elimination___closed__1_once, _init_l_Lean_Elab_Tactic_Omega_Problem_elimination___closed__1);
if (v___x_5076_ == 0)
{
lean_object* v_buckets_5099_; lean_object* v___x_5100_; lean_object* v___y_5102_; lean_object* v___x_5106_; lean_object* v___x_5107_; lean_object* v___x_5108_; uint8_t v___x_5109_; 
v_buckets_5099_ = lean_ctor_get(v_constraints_5075_, 1);
v___x_5100_ = ((lean_object*)(l_String_Slice_replace___at___00__private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_Justification_bullet_spec__0___redArg___closed__0));
v___x_5106_ = lean_box(0);
v___x_5107_ = lean_array_get_size(v_buckets_5099_);
v___x_5108_ = lean_unsigned_to_nat(0u);
v___x_5109_ = lean_nat_dec_lt(v___x_5108_, v___x_5107_);
if (v___x_5109_ == 0)
{
v___y_5102_ = v___x_5106_;
goto v___jp_5101_;
}
else
{
size_t v___x_5110_; size_t v___x_5111_; lean_object* v___x_5112_; 
v___x_5110_ = lean_usize_of_nat(v___x_5107_);
v___x_5111_ = ((size_t)0ULL);
v___x_5112_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__3(v_buckets_5099_, v___x_5110_, v___x_5111_, v___x_5106_);
v___y_5102_ = v___x_5112_;
goto v___jp_5101_;
}
v___jp_5101_:
{
lean_object* v___x_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; 
v___x_5103_ = lean_box(0);
v___x_5104_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__1(v___y_5102_, v___x_5103_);
v___x_5105_ = l_String_intercalate(v___x_5100_, v___x_5104_);
v___y_5086_ = v___x_5105_;
goto v___jp_5085_;
}
}
else
{
lean_object* v___x_5113_; 
v___x_5113_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_Problem_instToString___lam__3___closed__11));
v___y_5086_ = v___x_5113_;
goto v___jp_5085_;
}
v___jp_5085_:
{
lean_object* v___x_5087_; lean_object* v___x_5088_; lean_object* v___x_5089_; lean_object* v___x_5090_; 
v___x_5087_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5087_, 0, v___y_5086_);
v___x_5088_ = l_Lean_MessageData_ofFormat(v___x_5087_);
v___x_5089_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5089_, 0, v___x_5084_);
lean_ctor_set(v___x_5089_, 1, v___x_5088_);
v___x_5090_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0___redArg(v_cls_5081_, v___x_5089_, v_a_5055_, v_a_5056_, v_a_5057_, v_a_5058_);
if (lean_obj_tag(v___x_5090_) == 0)
{
lean_dec_ref_known(v___x_5090_, 1);
v___y_5061_ = v_a_5050_;
v___y_5062_ = v_a_5051_;
v___y_5063_ = v_a_5052_;
v___y_5064_ = v_a_5053_;
v___y_5065_ = v_a_5054_;
v___y_5066_ = v_a_5055_;
v___y_5067_ = v_a_5056_;
v___y_5068_ = v_a_5057_;
v___y_5069_ = v_a_5058_;
goto v___jp_5060_;
}
else
{
lean_object* v_a_5091_; lean_object* v___x_5093_; uint8_t v_isShared_5094_; uint8_t v_isSharedCheck_5098_; 
lean_dec_ref(v_p_5049_);
v_a_5091_ = lean_ctor_get(v___x_5090_, 0);
v_isSharedCheck_5098_ = !lean_is_exclusive(v___x_5090_);
if (v_isSharedCheck_5098_ == 0)
{
v___x_5093_ = v___x_5090_;
v_isShared_5094_ = v_isSharedCheck_5098_;
goto v_resetjp_5092_;
}
else
{
lean_inc(v_a_5091_);
lean_dec(v___x_5090_);
v___x_5093_ = lean_box(0);
v_isShared_5094_ = v_isSharedCheck_5098_;
goto v_resetjp_5092_;
}
v_resetjp_5092_:
{
lean_object* v___x_5096_; 
if (v_isShared_5094_ == 0)
{
v___x_5096_ = v___x_5093_;
goto v_reusejp_5095_;
}
else
{
lean_object* v_reuseFailAlloc_5097_; 
v_reuseFailAlloc_5097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5097_, 0, v_a_5091_);
v___x_5096_ = v_reuseFailAlloc_5097_;
goto v_reusejp_5095_;
}
v_reusejp_5095_:
{
return v___x_5096_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_5114_; 
v___x_5114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5114_, 0, v_p_5049_);
return v___x_5114_;
}
}
v___jp_5060_:
{
lean_object* v___x_5070_; 
v___x_5070_ = l_Lean_Elab_Tactic_Omega_Problem_fourierMotzkin(v_p_5049_, v___y_5066_, v___y_5067_, v___y_5068_, v___y_5069_);
if (lean_obj_tag(v___x_5070_) == 0)
{
lean_object* v_a_5071_; lean_object* v___x_5072_; 
v_a_5071_ = lean_ctor_get(v___x_5070_, 0);
lean_inc(v_a_5071_);
lean_dec_ref_known(v___x_5070_, 1);
v___x_5072_ = l_Lean_Elab_Tactic_Omega_Problem_runOmega(v_a_5071_, v___y_5061_, v___y_5062_, v___y_5063_, v___y_5064_, v___y_5065_, v___y_5066_, v___y_5067_, v___y_5068_, v___y_5069_);
return v___x_5072_;
}
else
{
return v___x_5070_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_elimination___boxed(lean_object* v_p_5115_, lean_object* v_a_5116_, lean_object* v_a_5117_, lean_object* v_a_5118_, lean_object* v_a_5119_, lean_object* v_a_5120_, lean_object* v_a_5121_, lean_object* v_a_5122_, lean_object* v_a_5123_, lean_object* v_a_5124_, lean_object* v_a_5125_){
_start:
{
uint8_t v_a_boxed_5126_; lean_object* v_res_5127_; 
v_a_boxed_5126_ = lean_unbox(v_a_5119_);
v_res_5127_ = l_Lean_Elab_Tactic_Omega_Problem_elimination(v_p_5115_, v_a_5116_, v_a_5117_, v_a_5118_, v_a_boxed_5126_, v_a_5120_, v_a_5121_, v_a_5122_, v_a_5123_, v_a_5124_);
lean_dec(v_a_5124_);
lean_dec_ref(v_a_5123_);
lean_dec(v_a_5122_);
lean_dec_ref(v_a_5121_);
lean_dec(v_a_5120_);
lean_dec_ref(v_a_5118_);
lean_dec(v_a_5117_);
lean_dec(v_a_5116_);
return v_res_5127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_Problem_runOmega___boxed(lean_object* v_p_5128_, lean_object* v_a_5129_, lean_object* v_a_5130_, lean_object* v_a_5131_, lean_object* v_a_5132_, lean_object* v_a_5133_, lean_object* v_a_5134_, lean_object* v_a_5135_, lean_object* v_a_5136_, lean_object* v_a_5137_, lean_object* v_a_5138_){
_start:
{
uint8_t v_a_boxed_5139_; lean_object* v_res_5140_; 
v_a_boxed_5139_ = lean_unbox(v_a_5132_);
v_res_5140_ = l_Lean_Elab_Tactic_Omega_Problem_runOmega(v_p_5128_, v_a_5129_, v_a_5130_, v_a_5131_, v_a_boxed_5139_, v_a_5133_, v_a_5134_, v_a_5135_, v_a_5136_, v_a_5137_);
lean_dec(v_a_5137_);
lean_dec_ref(v_a_5136_);
lean_dec(v_a_5135_);
lean_dec_ref(v_a_5134_);
lean_dec(v_a_5133_);
lean_dec_ref(v_a_5131_);
lean_dec(v_a_5130_);
lean_dec(v_a_5129_);
return v_res_5140_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0(lean_object* v_cls_5141_, lean_object* v_msg_5142_, lean_object* v___y_5143_, lean_object* v___y_5144_, lean_object* v___y_5145_, uint8_t v___y_5146_, lean_object* v___y_5147_, lean_object* v___y_5148_, lean_object* v___y_5149_, lean_object* v___y_5150_, lean_object* v___y_5151_){
_start:
{
lean_object* v___x_5153_; 
v___x_5153_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0___redArg(v_cls_5141_, v_msg_5142_, v___y_5148_, v___y_5149_, v___y_5150_, v___y_5151_);
return v___x_5153_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0___boxed(lean_object* v_cls_5154_, lean_object* v_msg_5155_, lean_object* v___y_5156_, lean_object* v___y_5157_, lean_object* v___y_5158_, lean_object* v___y_5159_, lean_object* v___y_5160_, lean_object* v___y_5161_, lean_object* v___y_5162_, lean_object* v___y_5163_, lean_object* v___y_5164_, lean_object* v___y_5165_){
_start:
{
uint8_t v___y_16278__boxed_5166_; lean_object* v_res_5167_; 
v___y_16278__boxed_5166_ = lean_unbox(v___y_5159_);
v_res_5167_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_Problem_runOmega_spec__0(v_cls_5154_, v_msg_5155_, v___y_5156_, v___y_5157_, v___y_5158_, v___y_16278__boxed_5166_, v___y_5160_, v___y_5161_, v___y_5162_, v___y_5163_, v___y_5164_);
lean_dec(v___y_5164_);
lean_dec_ref(v___y_5163_);
lean_dec(v___y_5162_);
lean_dec_ref(v___y_5161_);
lean_dec(v___y_5160_);
lean_dec_ref(v___y_5158_);
lean_dec(v___y_5157_);
lean_dec(v___y_5156_);
return v_res_5167_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Omega_OmegaM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Omega_MinNatAbs(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Omega_Core(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Omega_OmegaM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Omega_MinNatAbs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Omega_Core_0__Lean_Elab_Tactic_Omega_initFn_00___x40_Lean_Elab_Tactic_Omega_Core_3193685152____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Tactic_Omega_instToExprLinearCombo = _init_l_Lean_Elab_Tactic_Omega_instToExprLinearCombo();
lean_mark_persistent(l_Lean_Elab_Tactic_Omega_instToExprLinearCombo);
l_Lean_Elab_Tactic_Omega_instToExprConstraint = _init_l_Lean_Elab_Tactic_Omega_instToExprConstraint();
lean_mark_persistent(l_Lean_Elab_Tactic_Omega_instToExprConstraint);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Omega_Core(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam = _init_l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam();
lean_mark_persistent(l_Lean_Elab_Tactic_Omega_Problem_proveFalse_x3f__spec___autoParam);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Omega_OmegaM(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Omega_MinNatAbs(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Omega_Core(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Omega_OmegaM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Omega_MinNatAbs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Omega_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Omega_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Omega_Core(builtin);
}
#ifdef __cplusplus
}
#endif
